/*===========================================================================*/
/*   (Reduce/cond.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/cond.scm) */
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

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

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


	static obj_t BGl_z62staticzd2valuezd2atom1319z62zzreduce_condz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2condz12zc0zzreduce_condz00(BgL_nodez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62reducezd2conditionalz12za2zzreduce_condz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62nodezd2condz12za2zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2makezd2box1309za2zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2boxzd2setz121311zb0zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_condz00();
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2var1270z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2kwote1268z70zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2letzd2fun1297za2zzreduce_condz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_condz00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2boxzd2ref1313za2zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2condition1291z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_resetzd2condzd2cachez12z12zzreduce_condz00();
	static long BGl_za2condzd2reducedza2zd2zzreduce_condz00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2cast1287z70zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2setzd2exzd2it1301z70zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2sequence1275z70zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2letzd2var1299za2zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2setq1289z70zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_condz00();
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2appzd2ly1281za2zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2retblock1305z70zzreduce_condz00(obj_t, obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2closure1273z70zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_z62staticzd2valuezd2letzd2var1317zb0zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_z62staticzd2value1314zb0zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2extern1285z70zzreduce_condz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62staticzd2valuezd2sequenc1321z62zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_condz00 = BUNSPEC;
	static obj_t BGl_z62nodezd2condz121263za2zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_condz00();
	static obj_t BGl_genericzd2initzd2zzreduce_condz00();
	static obj_t BGl_staticzd2valuezd2zzreduce_condz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2atom1266z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2condza2z12z62zzreduce_condz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2app1279z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_za2z42zd3fxza2z91zzreduce_condz00 = BUNSPEC;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2return1307z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2jumpzd2exzd2i1303z70zzreduce_condz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2funcall1283z70zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_z62staticzd2valuezb0zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_initzd2condzd2cachez12z12zzreduce_condz00();
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_condz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_condz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_condz00();
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2sync1277z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2fail1293z70zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_za2z42eqza2z42zzreduce_condz00 = BUNSPEC;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2switch1295z70zzreduce_condz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza711993za7,
		BGl_z62nodezd2condz12za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_staticzd2valuezd2envz00zzreduce_condz00,
		BgL_bgl_za762staticza7d2valu1994z00,
		BGl_z62staticzd2valuezb0zzreduce_condz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2conditionalz12zd2envz12zzreduce_condz00,
		BgL_bgl_za762reduceza7d2cond1995z00,
		BGl_z62reducezd2conditionalz12za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza711996za7,
		BGl_z62nodezd2condz121263za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzreduce_condz00,
		BgL_bgl_za762staticza7d2valu1997z00,
		BGl_z62staticzd2value1314zb0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza711998za7,
		BGl_z62nodezd2condz12zd2atom1266z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza711999za7,
		BGl_z62nodezd2condz12zd2kwote1268z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712000za7,
		BGl_z62nodezd2condz12zd2var1270z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712001za7,
		BGl_z62nodezd2condz12zd2closure1273z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712002za7,
		BGl_z62nodezd2condz12zd2sequence1275z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712003za7,
		BGl_z62nodezd2condz12zd2sync1277z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712004za7,
		BGl_z62nodezd2condz12zd2app1279z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712005za7,
		BGl_z62nodezd2condz12zd2appzd2ly1281za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712006za7,
		BGl_z62nodezd2condz12zd2funcall1283z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712007za7,
		BGl_z62nodezd2condz12zd2extern1285z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712008za7,
		BGl_z62nodezd2condz12zd2cast1287z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712009za7,
		BGl_z62nodezd2condz12zd2setq1289z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712010za7,
		BGl_z62nodezd2condz12zd2condition1291z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712011za7,
		BGl_z62nodezd2condz12zd2fail1293z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712012za7,
		BGl_z62nodezd2condz12zd2switch1295z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712013za7,
		BGl_z62nodezd2condz12zd2letzd2fun1297za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1976z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712014za7,
		BGl_z62nodezd2condz12zd2letzd2var1299za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712015za7,
		BGl_z62nodezd2condz12zd2setzd2exzd2it1301z70zzreduce_condz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1978z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712016za7,
		BGl_z62nodezd2condz12zd2jumpzd2exzd2i1303z70zzreduce_condz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712017za7,
		BGl_z62nodezd2condz12zd2retblock1305z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712018za7,
		BGl_z62nodezd2condz12zd2return1307z70zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712019za7,
		BGl_z62nodezd2condz12zd2makezd2box1309za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712020za7,
		BGl_z62nodezd2condz12zd2boxzd2setz121311zb0zzreduce_condz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1983z00zzreduce_condz00,
		BgL_bgl_za762nodeza7d2condza712021za7,
		BGl_z62nodezd2condz12zd2boxzd2ref1313za2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzreduce_condz00,
		BgL_bgl_za762staticza7d2valu2022z00,
		BGl_z62staticzd2valuezd2letzd2var1317zb0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1986z00zzreduce_condz00,
		BgL_bgl_za762staticza7d2valu2023z00,
		BGl_z62staticzd2valuezd2atom1319z62zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1987z00zzreduce_condz00,
		BgL_bgl_za762staticza7d2valu2024z00,
		BGl_z62staticzd2valuezd2sequenc1321z62zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1952z00zzreduce_condz00,
		BgL_bgl_string1952za700za7za7r2025za7, "      conditional expression ", 29);
	      DEFINE_STRING(BGl_string1953z00zzreduce_condz00,
		BgL_bgl_string1953za700za7za7r2026za7, "(reduced: ", 10);
	      DEFINE_STRING(BGl_string1955z00zzreduce_condz00,
		BgL_bgl_string1955za700za7za7r2027za7, "node-cond!1263", 14);
	      DEFINE_STRING(BGl_string1957z00zzreduce_condz00,
		BgL_bgl_string1957za700za7za7r2028za7, "static-value1314", 16);
	      DEFINE_STRING(BGl_string1958z00zzreduce_condz00,
		BgL_bgl_string1958za700za7za7r2029za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1960z00zzreduce_condz00,
		BgL_bgl_string1960za700za7za7r2030za7, "node-cond!", 10);
	      DEFINE_STRING(BGl_string1985z00zzreduce_condz00,
		BgL_bgl_string1985za700za7za7r2031za7, "static-value", 12);
	      DEFINE_STRING(BGl_string1988z00zzreduce_condz00,
		BgL_bgl_string1988za700za7za7r2032za7, "reduce_cond", 11);
	      DEFINE_STRING(BGl_string1989z00zzreduce_condz00,
		BgL_bgl_string1989za700za7za7r2033za7,
		"true false node-cond!1263 done c-=fx c-eq? foreign ", 51);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_condz00));
		     ADD_ROOT((void *) (&BGl_za2z42zd3fxza2z91zzreduce_condz00));
		     ADD_ROOT((void *) (&BGl_za2z42eqza2z42zzreduce_condz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long
		BgL_checksumz00_2310, char *BgL_fromz00_2311)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_condz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_condz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_condz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_condz00();
					BGl_cnstzd2initzd2zzreduce_condz00();
					BGl_importedzd2moduleszd2initz00zzreduce_condz00();
					BGl_genericzd2initzd2zzreduce_condz00();
					BGl_methodzd2initzd2zzreduce_condz00();
					return BGl_toplevelzd2initzd2zzreduce_condz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_cond");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_cond");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			{	/* Reduce/cond.scm 15 */
				obj_t BgL_cportz00_2175;

				{	/* Reduce/cond.scm 15 */
					obj_t BgL_stringz00_2183;

					BgL_stringz00_2183 = BGl_string1989z00zzreduce_condz00;
					{	/* Reduce/cond.scm 15 */
						obj_t BgL_startz00_2184;

						BgL_startz00_2184 = BINT(((long) 0));
						{	/* Reduce/cond.scm 15 */
							obj_t BgL_endz00_2185;

							BgL_endz00_2185 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2183)));
							{	/* Reduce/cond.scm 15 */

								BgL_cportz00_2175 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2183, BgL_startz00_2184, BgL_endz00_2185);
				}}}}
				{
					long BgL_iz00_2176;

					BgL_iz00_2176 = ((long) 6);
				BgL_loopz00_2177:
					if ((BgL_iz00_2176 == ((long) -1)))
						{	/* Reduce/cond.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/cond.scm 15 */
							{	/* Reduce/cond.scm 15 */
								obj_t BgL_arg1991z00_2179;

								{	/* Reduce/cond.scm 15 */

									{	/* Reduce/cond.scm 15 */
										obj_t BgL_locationz00_2181;

										BgL_locationz00_2181 = BBOOL(((bool_t) 0));
										{	/* Reduce/cond.scm 15 */

											BgL_arg1991z00_2179 =
												BGl_readz00zz__readerz00(BgL_cportz00_2175,
												BgL_locationz00_2181);
										}
									}
								}
								{	/* Reduce/cond.scm 15 */
									int BgL_tmpz00_2342;

									BgL_tmpz00_2342 = (int) (BgL_iz00_2176);
									CNST_TABLE_SET(BgL_tmpz00_2342, BgL_arg1991z00_2179);
							}}
							{	/* Reduce/cond.scm 15 */
								int BgL_auxz00_2182;

								BgL_auxz00_2182 = (int) ((BgL_iz00_2176 - ((long) 1)));
								{
									long BgL_iz00_2347;

									BgL_iz00_2347 = (long) (BgL_auxz00_2182);
									BgL_iz00_2176 = BgL_iz00_2347;
									goto BgL_loopz00_2177;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			BGl_za2z42eqza2z42zzreduce_condz00 = BFALSE;
			BGl_za2z42zd3fxza2z91zzreduce_condz00 = BFALSE;
			BGl_za2condzd2reducedza2zd2zzreduce_condz00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* reduce-conditional! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/cond.scm 33 */
			{	/* Reduce/cond.scm 34 */
				obj_t BgL_list1326z00_1355;

				BgL_list1326z00_1355 =
					MAKE_YOUNG_PAIR(BGl_string1952z00zzreduce_condz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1326z00_1355);
			}
			BGl_initzd2condzd2cachez12z12zzreduce_condz00();
			{
				obj_t BgL_l1248z00_1357;

				BgL_l1248z00_1357 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31327ze3z87_1358:
				if (PAIRP(BgL_l1248z00_1357))
					{	/* Reduce/cond.scm 36 */
						{	/* Reduce/cond.scm 37 */
							obj_t BgL_globalz00_1360;

							BgL_globalz00_1360 = CAR(BgL_l1248z00_1357);
							{	/* Reduce/cond.scm 37 */
								BgL_valuez00_bglt BgL_funz00_1361;

								BgL_funz00_1361 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1360))))->
									BgL_valuez00);
								{	/* Reduce/cond.scm 37 */
									obj_t BgL_nodez00_1362;

									BgL_nodez00_1362 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1361)))->BgL_bodyz00);
									{	/* Reduce/cond.scm 38 */

										{	/* Reduce/cond.scm 39 */
											BgL_nodez00_bglt BgL_arg1329z00_1363;

											BgL_arg1329z00_1363 =
												BGl_nodezd2condz12zc0zzreduce_condz00(
												((BgL_nodez00_bglt) BgL_nodez00_1362));
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1361)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1329z00_1363)), BUNSPEC);
										}
										BUNSPEC;
									}
								}
							}
						}
						{
							obj_t BgL_l1248z00_2367;

							BgL_l1248z00_2367 = CDR(BgL_l1248z00_1357);
							BgL_l1248z00_1357 = BgL_l1248z00_2367;
							goto BgL_zc3z04anonymousza31327ze3z87_1358;
						}
					}
				else
					{	/* Reduce/cond.scm 36 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/cond.scm 42 */
				obj_t BgL_list1331z00_1366;

				{	/* Reduce/cond.scm 42 */
					obj_t BgL_arg1334z00_1367;

					{	/* Reduce/cond.scm 42 */
						obj_t BgL_arg1335z00_1368;

						{	/* Reduce/cond.scm 42 */
							obj_t BgL_arg1337z00_1369;

							BgL_arg1337z00_1369 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1335z00_1368 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
								BgL_arg1337z00_1369);
						}
						BgL_arg1334z00_1367 =
							MAKE_YOUNG_PAIR(BINT(BGl_za2condzd2reducedza2zd2zzreduce_condz00),
							BgL_arg1335z00_1368);
					}
					BgL_list1331z00_1366 =
						MAKE_YOUNG_PAIR(BGl_string1953z00zzreduce_condz00,
						BgL_arg1334z00_1367);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1331z00_1366);
			}
			BGl_resetzd2condzd2cachez12z12zzreduce_condz00();
			return BgL_globalsz00_3;
		}

	}



/* &reduce-conditional! */
	obj_t BGl_z62reducezd2conditionalz12za2zzreduce_condz00(obj_t BgL_envz00_2082,
		obj_t BgL_globalsz00_2083)
	{
		{	/* Reduce/cond.scm 33 */
			return
				BGl_reducezd2conditionalz12zc0zzreduce_condz00(BgL_globalsz00_2083);
		}

	}



/* init-cond-cache! */
	obj_t BGl_initzd2condzd2cachez12z12zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 56 */
			{	/* Reduce/cond.scm 57 */
				obj_t BgL_list1338z00_1370;

				BgL_list1338z00_1370 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2z42eqza2z42zzreduce_condz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
					BgL_list1338z00_1370);
			}
			{	/* Reduce/cond.scm 58 */
				obj_t BgL_list1339z00_1371;

				BgL_list1339z00_1371 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				return (BGl_za2z42zd3fxza2z91zzreduce_condz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
						BgL_list1339z00_1371), BUNSPEC);
		}}

	}



/* reset-cond-cache! */
	obj_t BGl_resetzd2condzd2cachez12z12zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 63 */
			BGl_za2z42eqza2z42zzreduce_condz00 = BFALSE;
			return (BGl_za2z42zd3fxza2z91zzreduce_condz00 = BFALSE, BUNSPEC);
		}

	}



/* node-cond*! */
	obj_t BGl_nodezd2condza2z12z62zzreduce_condz00(obj_t BgL_nodeza2za2_29)
	{
		{	/* Reduce/cond.scm 342 */
			{
				obj_t BgL_nodeza2za2_1373;

				BgL_nodeza2za2_1373 = BgL_nodeza2za2_29;
			BgL_zc3z04anonymousza31340ze3z87_1374:
				if (NULLP(BgL_nodeza2za2_1373))
					{	/* Reduce/cond.scm 344 */
						return CNST_TABLE_REF(((long) 3));
					}
				else
					{	/* Reduce/cond.scm 344 */
						{	/* Reduce/cond.scm 347 */
							BgL_nodez00_bglt BgL_arg1344z00_1376;

							{	/* Reduce/cond.scm 347 */
								obj_t BgL_arg1345z00_1377;

								BgL_arg1345z00_1377 = CAR(((obj_t) BgL_nodeza2za2_1373));
								BgL_arg1344z00_1376 =
									BGl_nodezd2condz12zc0zzreduce_condz00(
									((BgL_nodez00_bglt) BgL_arg1345z00_1377));
							}
							{	/* Reduce/cond.scm 347 */
								obj_t BgL_auxz00_2397;
								obj_t BgL_tmpz00_2395;

								BgL_auxz00_2397 = ((obj_t) BgL_arg1344z00_1376);
								BgL_tmpz00_2395 = ((obj_t) BgL_nodeza2za2_1373);
								SET_CAR(BgL_tmpz00_2395, BgL_auxz00_2397);
							}
						}
						{	/* Reduce/cond.scm 348 */
							obj_t BgL_arg1346z00_1378;

							BgL_arg1346z00_1378 = CDR(((obj_t) BgL_nodeza2za2_1373));
							{
								obj_t BgL_nodeza2za2_2402;

								BgL_nodeza2za2_2402 = BgL_arg1346z00_1378;
								BgL_nodeza2za2_1373 = BgL_nodeza2za2_2402;
								goto BgL_zc3z04anonymousza31340ze3z87_1374;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_proc1954z00zzreduce_condz00, BGl_nodez00zzast_nodez00,
				BGl_string1955z00zzreduce_condz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_staticzd2valuezd2envz00zzreduce_condz00,
				BGl_proc1956z00zzreduce_condz00, BGl_nodez00zzast_nodez00,
				BGl_string1957z00zzreduce_condz00);
		}

	}



/* &static-value1314 */
	obj_t BGl_z62staticzd2value1314zb0zzreduce_condz00(obj_t BgL_envz00_2086,
		obj_t BgL_nodez00_2087)
	{
		{	/* Reduce/cond.scm 353 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &node-cond!1263 */
	obj_t BGl_z62nodezd2condz121263za2zzreduce_condz00(obj_t BgL_envz00_2088,
		obj_t BgL_nodez00_2089)
	{
		{	/* Reduce/cond.scm 75 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
				BGl_string1958z00zzreduce_condz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2089)));
		}

	}



/* node-cond! */
	BgL_nodez00_bglt BGl_nodezd2condz12zc0zzreduce_condz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		{	/* Reduce/cond.scm 75 */
			{	/* Reduce/cond.scm 75 */
				obj_t BgL_method1264z00_1388;

				{	/* Reduce/cond.scm 75 */
					obj_t BgL_res1917z00_1969;

					{	/* Reduce/cond.scm 75 */
						long BgL_objzd2classzd2numz00_1934;

						{	/* Reduce/cond.scm 75 */
							long BgL_res1907z00_1937;

							BgL_res1907z00_1937 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_1934 = BgL_res1907z00_1937;
						}
						{	/* Reduce/cond.scm 75 */
							obj_t BgL_arg1813z00_1935;

							BgL_arg1813z00_1935 =
								PROCEDURE_REF(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
								(int) (((long) 1)));
							{	/* Reduce/cond.scm 75 */
								int BgL_offsetz00_1939;

								BgL_offsetz00_1939 = (int) (BgL_objzd2classzd2numz00_1934);
								{	/* Reduce/cond.scm 75 */
									long BgL_offsetz00_1940;

									BgL_offsetz00_1940 =
										((long) (BgL_offsetz00_1939) - OBJECT_TYPE);
									{	/* Reduce/cond.scm 75 */
										long BgL_modz00_1941;

										BgL_modz00_1941 =
											(BgL_offsetz00_1940 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/cond.scm 75 */
											long BgL_restz00_1943;

											BgL_restz00_1943 =
												(BgL_offsetz00_1940 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/cond.scm 75 */

												{	/* Reduce/cond.scm 75 */
													obj_t BgL_bucketz00_1945;

													BgL_bucketz00_1945 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1935), BgL_modz00_1941);
													BgL_res1917z00_1969 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1945), BgL_restz00_1943);
					}}}}}}}}
					BgL_method1264z00_1388 = BgL_res1917z00_1969;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1264z00_1388) (BgL_method1264z00_1388,
						((obj_t) BgL_nodez00_4), BEOA));
			}
		}

	}



/* &node-cond! */
	BgL_nodez00_bglt BGl_z62nodezd2condz12za2zzreduce_condz00(obj_t
		BgL_envz00_2090, obj_t BgL_nodez00_2091)
	{
		{	/* Reduce/cond.scm 75 */
			return
				BGl_nodezd2condz12zc0zzreduce_condz00(
				((BgL_nodez00_bglt) BgL_nodez00_2091));
		}

	}



/* static-value */
	obj_t BGl_staticzd2valuezd2zzreduce_condz00(BgL_nodez00_bglt BgL_nodez00_30)
	{
		{	/* Reduce/cond.scm 353 */
			{	/* Reduce/cond.scm 353 */
				obj_t BgL_method1315z00_1389;

				{	/* Reduce/cond.scm 353 */
					obj_t BgL_res1928z00_2006;

					{	/* Reduce/cond.scm 353 */
						long BgL_objzd2classzd2numz00_1971;

						{	/* Reduce/cond.scm 353 */
							long BgL_res1918z00_1974;

							BgL_res1918z00_1974 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_30));
							BgL_objzd2classzd2numz00_1971 = BgL_res1918z00_1974;
						}
						{	/* Reduce/cond.scm 353 */
							obj_t BgL_arg1813z00_1972;

							BgL_arg1813z00_1972 =
								PROCEDURE_REF(BGl_staticzd2valuezd2envz00zzreduce_condz00,
								(int) (((long) 1)));
							{	/* Reduce/cond.scm 353 */
								int BgL_offsetz00_1976;

								BgL_offsetz00_1976 = (int) (BgL_objzd2classzd2numz00_1971);
								{	/* Reduce/cond.scm 353 */
									long BgL_offsetz00_1977;

									BgL_offsetz00_1977 =
										((long) (BgL_offsetz00_1976) - OBJECT_TYPE);
									{	/* Reduce/cond.scm 353 */
										long BgL_modz00_1978;

										BgL_modz00_1978 =
											(BgL_offsetz00_1977 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/cond.scm 353 */
											long BgL_restz00_1980;

											BgL_restz00_1980 =
												(BgL_offsetz00_1977 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/cond.scm 353 */

												{	/* Reduce/cond.scm 353 */
													obj_t BgL_bucketz00_1982;

													BgL_bucketz00_1982 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1972), BgL_modz00_1978);
													BgL_res1928z00_2006 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1982), BgL_restz00_1980);
					}}}}}}}}
					BgL_method1315z00_1389 = BgL_res1928z00_2006;
				}
				return
					PROCEDURE_ENTRY(BgL_method1315z00_1389) (BgL_method1315z00_1389,
					((obj_t) BgL_nodez00_30), BEOA);
			}
		}

	}



/* &static-value */
	obj_t BGl_z62staticzd2valuezb0zzreduce_condz00(obj_t BgL_envz00_2092,
		obj_t BgL_nodez00_2093)
	{
		{	/* Reduce/cond.scm 353 */
			return
				BGl_staticzd2valuezd2zzreduce_condz00(
				((BgL_nodez00_bglt) BgL_nodez00_2093));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_atomz00zzast_nodez00,
				BGl_proc1959z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1961z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_varz00zzast_nodez00,
				BGl_proc1962z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_closurez00zzast_nodez00, BGl_proc1963z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1964z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_syncz00zzast_nodez00,
				BGl_proc1965z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_appz00zzast_nodez00,
				BGl_proc1966z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1967z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1968z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_externz00zzast_nodez00, BGl_proc1969z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_castz00zzast_nodez00,
				BGl_proc1970z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_setqz00zzast_nodez00,
				BGl_proc1971z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1972z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_failz00zzast_nodez00,
				BGl_proc1973z00zzreduce_condz00, BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_switchz00zzast_nodez00, BGl_proc1974z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1975z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1976z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1977z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1978z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1979z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_returnz00zzast_nodez00, BGl_proc1980z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1981z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1982z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1983z00zzreduce_condz00,
				BGl_string1960z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_staticzd2valuezd2envz00zzreduce_condz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1984z00zzreduce_condz00,
				BGl_string1985z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_staticzd2valuezd2envz00zzreduce_condz00, BGl_atomz00zzast_nodez00,
				BGl_proc1986z00zzreduce_condz00, BGl_string1985z00zzreduce_condz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_staticzd2valuezd2envz00zzreduce_condz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1987z00zzreduce_condz00,
				BGl_string1985z00zzreduce_condz00);
		}

	}



/* &static-value-sequenc1321 */
	obj_t BGl_z62staticzd2valuezd2sequenc1321z62zzreduce_condz00(obj_t
		BgL_envz00_2121, obj_t BgL_nodez00_2122)
	{
		{	/* Reduce/cond.scm 373 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2122)))->BgL_nodesz00)))
				{	/* Reduce/cond.scm 375 */
					return BFALSE;
				}
			else
				{	/* Reduce/cond.scm 376 */
					obj_t BgL_arg1831z00_2191;

					BgL_arg1831z00_2191 =
						CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
							(((BgL_sequencez00_bglt) COBJECT(
										((BgL_sequencez00_bglt) BgL_nodez00_2122)))->
								BgL_nodesz00)));
					return BGl_staticzd2valuezd2zzreduce_condz00(((BgL_nodez00_bglt)
							BgL_arg1831z00_2191));
				}
		}

	}



/* &static-value-atom1319 */
	obj_t BGl_z62staticzd2valuezd2atom1319z62zzreduce_condz00(obj_t
		BgL_envz00_2123, obj_t BgL_nodez00_2124)
	{
		{	/* Reduce/cond.scm 366 */
			if (
				((((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt) BgL_nodez00_2124)))->BgL_valuez00) ==
					BFALSE))
				{	/* Reduce/cond.scm 368 */
					return CNST_TABLE_REF(((long) 5));
				}
			else
				{	/* Reduce/cond.scm 368 */
					return CNST_TABLE_REF(((long) 6));
		}}

	}



/* &static-value-let-var1317 */
	obj_t BGl_z62staticzd2valuezd2letzd2var1317zb0zzreduce_condz00(obj_t
		BgL_envz00_2125, obj_t BgL_nodez00_2126)
	{
		{	/* Reduce/cond.scm 359 */
			return
				BGl_staticzd2valuezd2zzreduce_condz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2126)))->BgL_bodyz00));
		}

	}



/* &node-cond!-box-ref1313 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2boxzd2ref1313za2zzreduce_condz00(obj_t
		BgL_envz00_2127, obj_t BgL_nodez00_2128)
	{
		{	/* Reduce/cond.scm 334 */
			{
				BgL_varz00_bglt BgL_auxz00_2521;

				{	/* Reduce/cond.scm 336 */
					BgL_varz00_bglt BgL_arg1824z00_2195;

					BgL_arg1824z00_2195 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2128)))->BgL_varz00);
					BgL_auxz00_2521 =
						((BgL_varz00_bglt)
						BGl_nodezd2condz12zc0zzreduce_condz00(
							((BgL_nodez00_bglt) BgL_arg1824z00_2195)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2128)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2521), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2128));
		}

	}



/* &node-cond!-box-set!1311 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2boxzd2setz121311zb0zzreduce_condz00(obj_t
		BgL_envz00_2129, obj_t BgL_nodez00_2130)
	{
		{	/* Reduce/cond.scm 325 */
			{
				BgL_varz00_bglt BgL_auxz00_2531;

				{	/* Reduce/cond.scm 327 */
					BgL_varz00_bglt BgL_arg1822z00_2197;

					BgL_arg1822z00_2197 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2130)))->BgL_varz00);
					BgL_auxz00_2531 =
						((BgL_varz00_bglt)
						BGl_nodezd2condz12zc0zzreduce_condz00(
							((BgL_nodez00_bglt) BgL_arg1822z00_2197)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2130)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2531), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2539;

				{	/* Reduce/cond.scm 328 */
					BgL_nodez00_bglt BgL_arg1823z00_2198;

					BgL_arg1823z00_2198 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2130)))->BgL_valuez00);
					BgL_auxz00_2539 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1823z00_2198);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2130)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2539), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2130));
		}

	}



/* &node-cond!-make-box1309 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2makezd2box1309za2zzreduce_condz00(obj_t
		BgL_envz00_2131, obj_t BgL_nodez00_2132)
	{
		{	/* Reduce/cond.scm 317 */
			{
				BgL_nodez00_bglt BgL_auxz00_2547;

				{	/* Reduce/cond.scm 319 */
					BgL_nodez00_bglt BgL_arg1821z00_2200;

					BgL_arg1821z00_2200 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2132)))->BgL_valuez00);
					BgL_auxz00_2547 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1821z00_2200);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2132)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2547), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2132));
		}

	}



/* &node-cond!-return1307 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2return1307z70zzreduce_condz00(obj_t
		BgL_envz00_2133, obj_t BgL_nodez00_2134)
	{
		{	/* Reduce/cond.scm 309 */
			{
				BgL_nodez00_bglt BgL_auxz00_2555;

				{	/* Reduce/cond.scm 311 */
					BgL_nodez00_bglt BgL_arg1820z00_2202;

					BgL_arg1820z00_2202 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2134)))->BgL_valuez00);
					BgL_auxz00_2555 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1820z00_2202);
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2134)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2555), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nodez00_2134));
		}

	}



/* &node-cond!-retblock1305 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2retblock1305z70zzreduce_condz00(obj_t
		BgL_envz00_2135, obj_t BgL_nodez00_2136)
	{
		{	/* Reduce/cond.scm 301 */
			{
				BgL_nodez00_bglt BgL_auxz00_2563;

				{	/* Reduce/cond.scm 303 */
					BgL_nodez00_bglt BgL_arg1811z00_2204;

					BgL_arg1811z00_2204 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2136)))->BgL_bodyz00);
					BgL_auxz00_2563 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1811z00_2204);
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2136)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2563), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_2136));
		}

	}



/* &node-cond!-jump-ex-i1303 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2jumpzd2exzd2i1303z70zzreduce_condz00(obj_t
		BgL_envz00_2137, obj_t BgL_nodez00_2138)
	{
		{	/* Reduce/cond.scm 292 */
			{
				BgL_nodez00_bglt BgL_auxz00_2571;

				{	/* Reduce/cond.scm 294 */
					BgL_nodez00_bglt BgL_arg1808z00_2206;

					BgL_arg1808z00_2206 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2138)))->BgL_exitz00);
					BgL_auxz00_2571 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1808z00_2206);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2138)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2571), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2577;

				{	/* Reduce/cond.scm 295 */
					BgL_nodez00_bglt BgL_arg1809z00_2207;

					BgL_arg1809z00_2207 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2138)))->
						BgL_valuez00);
					BgL_auxz00_2577 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1809z00_2207);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2138)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2577), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2138));
		}

	}



/* &node-cond!-set-ex-it1301 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2setzd2exzd2it1301z70zzreduce_condz00(obj_t
		BgL_envz00_2139, obj_t BgL_nodez00_2140)
	{
		{	/* Reduce/cond.scm 283 */
			{
				BgL_nodez00_bglt BgL_auxz00_2585;

				{	/* Reduce/cond.scm 285 */
					BgL_nodez00_bglt BgL_arg1798z00_2209;

					BgL_arg1798z00_2209 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2140)))->BgL_bodyz00);
					BgL_auxz00_2585 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1798z00_2209);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2140)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2585), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2591;

				{	/* Reduce/cond.scm 286 */
					BgL_varz00_bglt BgL_arg1801z00_2210;

					BgL_arg1801z00_2210 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2140)))->BgL_varz00);
					BgL_auxz00_2591 =
						((BgL_varz00_bglt)
						BGl_nodezd2condz12zc0zzreduce_condz00(
							((BgL_nodez00_bglt) BgL_arg1801z00_2210)));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2140)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2591), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2140));
		}

	}



/* &node-cond!-let-var1299 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2letzd2var1299za2zzreduce_condz00(obj_t
		BgL_envz00_2141, obj_t BgL_nodez00_2142)
	{
		{	/* Reduce/cond.scm 272 */
			{	/* Reduce/cond.scm 274 */
				obj_t BgL_g1262z00_2212;

				BgL_g1262z00_2212 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2142)))->BgL_bindingsz00);
				{
					obj_t BgL_l1260z00_2214;

					BgL_l1260z00_2214 = BgL_g1262z00_2212;
				BgL_zc3z04anonymousza31779ze3z87_2213:
					if (PAIRP(BgL_l1260z00_2214))
						{	/* Reduce/cond.scm 274 */
							{	/* Reduce/cond.scm 275 */
								obj_t BgL_bindingz00_2215;

								BgL_bindingz00_2215 = CAR(BgL_l1260z00_2214);
								{	/* Reduce/cond.scm 275 */
									BgL_nodez00_bglt BgL_arg1782z00_2216;

									{	/* Reduce/cond.scm 275 */
										obj_t BgL_arg1784z00_2217;

										BgL_arg1784z00_2217 = CDR(((obj_t) BgL_bindingz00_2215));
										BgL_arg1782z00_2216 =
											BGl_nodezd2condz12zc0zzreduce_condz00(
											((BgL_nodez00_bglt) BgL_arg1784z00_2217));
									}
									{	/* Reduce/cond.scm 275 */
										obj_t BgL_auxz00_2612;
										obj_t BgL_tmpz00_2610;

										BgL_auxz00_2612 = ((obj_t) BgL_arg1782z00_2216);
										BgL_tmpz00_2610 = ((obj_t) BgL_bindingz00_2215);
										SET_CDR(BgL_tmpz00_2610, BgL_auxz00_2612);
									}
								}
							}
							{
								obj_t BgL_l1260z00_2615;

								BgL_l1260z00_2615 = CDR(BgL_l1260z00_2214);
								BgL_l1260z00_2214 = BgL_l1260z00_2615;
								goto BgL_zc3z04anonymousza31779ze3z87_2213;
							}
						}
					else
						{	/* Reduce/cond.scm 274 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2617;

				{	/* Reduce/cond.scm 277 */
					BgL_nodez00_bglt BgL_arg1796z00_2218;

					BgL_arg1796z00_2218 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2142)))->BgL_bodyz00);
					BgL_auxz00_2617 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1796z00_2218);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2142)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2617), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2142));
		}

	}



/* &node-cond!-let-fun1297 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2letzd2fun1297za2zzreduce_condz00(obj_t
		BgL_envz00_2143, obj_t BgL_nodez00_2144)
	{
		{	/* Reduce/cond.scm 260 */
			{	/* Reduce/cond.scm 262 */
				obj_t BgL_g1259z00_2220;

				BgL_g1259z00_2220 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2144)))->BgL_localsz00);
				{
					obj_t BgL_l1257z00_2222;

					BgL_l1257z00_2222 = BgL_g1259z00_2220;
				BgL_zc3z04anonymousza31762ze3z87_2221:
					if (PAIRP(BgL_l1257z00_2222))
						{	/* Reduce/cond.scm 262 */
							{	/* Reduce/cond.scm 263 */
								obj_t BgL_localz00_2223;

								BgL_localz00_2223 = CAR(BgL_l1257z00_2222);
								{	/* Reduce/cond.scm 263 */
									BgL_valuez00_bglt BgL_funz00_2224;

									BgL_funz00_2224 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2223))))->
										BgL_valuez00);
									{	/* Reduce/cond.scm 264 */
										BgL_nodez00_bglt BgL_arg1768z00_2225;

										{	/* Reduce/cond.scm 264 */
											obj_t BgL_arg1771z00_2226;

											BgL_arg1771z00_2226 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2224)))->
												BgL_bodyz00);
											BgL_arg1768z00_2225 =
												BGl_nodezd2condz12zc0zzreduce_condz00((
													(BgL_nodez00_bglt) BgL_arg1771z00_2226));
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2224)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1768z00_2225)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1257z00_2640;

								BgL_l1257z00_2640 = CDR(BgL_l1257z00_2222);
								BgL_l1257z00_2222 = BgL_l1257z00_2640;
								goto BgL_zc3z04anonymousza31762ze3z87_2221;
							}
						}
					else
						{	/* Reduce/cond.scm 262 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2642;

				{	/* Reduce/cond.scm 266 */
					BgL_nodez00_bglt BgL_arg1778z00_2227;

					BgL_arg1778z00_2227 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2144)))->BgL_bodyz00);
					BgL_auxz00_2642 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1778z00_2227);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2144)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2642), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2144));
		}

	}



/* &node-cond!-switch1295 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2switch1295z70zzreduce_condz00(obj_t
		BgL_envz00_2145, obj_t BgL_nodez00_2146)
	{
		{	/* Reduce/cond.scm 249 */
			{
				BgL_nodez00_bglt BgL_auxz00_2650;

				{	/* Reduce/cond.scm 251 */
					BgL_nodez00_bglt BgL_arg1756z00_2229;

					BgL_arg1756z00_2229 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2146)))->BgL_testz00);
					BgL_auxz00_2650 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1756z00_2229);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2146)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2650), BUNSPEC);
			}
			{	/* Reduce/cond.scm 252 */
				obj_t BgL_g1256z00_2230;

				BgL_g1256z00_2230 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2146)))->BgL_clausesz00);
				{
					obj_t BgL_l1254z00_2232;

					BgL_l1254z00_2232 = BgL_g1256z00_2230;
				BgL_zc3z04anonymousza31757ze3z87_2231:
					if (PAIRP(BgL_l1254z00_2232))
						{	/* Reduce/cond.scm 252 */
							{	/* Reduce/cond.scm 253 */
								obj_t BgL_clausez00_2233;

								BgL_clausez00_2233 = CAR(BgL_l1254z00_2232);
								{	/* Reduce/cond.scm 253 */
									BgL_nodez00_bglt BgL_arg1759z00_2234;

									{	/* Reduce/cond.scm 253 */
										obj_t BgL_arg1760z00_2235;

										BgL_arg1760z00_2235 = CDR(((obj_t) BgL_clausez00_2233));
										BgL_arg1759z00_2234 =
											BGl_nodezd2condz12zc0zzreduce_condz00(
											((BgL_nodez00_bglt) BgL_arg1760z00_2235));
									}
									{	/* Reduce/cond.scm 253 */
										obj_t BgL_auxz00_2667;
										obj_t BgL_tmpz00_2665;

										BgL_auxz00_2667 = ((obj_t) BgL_arg1759z00_2234);
										BgL_tmpz00_2665 = ((obj_t) BgL_clausez00_2233);
										SET_CDR(BgL_tmpz00_2665, BgL_auxz00_2667);
									}
								}
							}
							{
								obj_t BgL_l1254z00_2670;

								BgL_l1254z00_2670 = CDR(BgL_l1254z00_2232);
								BgL_l1254z00_2232 = BgL_l1254z00_2670;
								goto BgL_zc3z04anonymousza31757ze3z87_2231;
							}
						}
					else
						{	/* Reduce/cond.scm 252 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2146));
		}

	}



/* &node-cond!-fail1293 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2fail1293z70zzreduce_condz00(obj_t
		BgL_envz00_2147, obj_t BgL_nodez00_2148)
	{
		{	/* Reduce/cond.scm 239 */
			{
				BgL_nodez00_bglt BgL_auxz00_2674;

				{	/* Reduce/cond.scm 241 */
					BgL_nodez00_bglt BgL_arg1747z00_2237;

					BgL_arg1747z00_2237 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_procz00);
					BgL_auxz00_2674 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1747z00_2237);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2674), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2680;

				{	/* Reduce/cond.scm 242 */
					BgL_nodez00_bglt BgL_arg1754z00_2238;

					BgL_arg1754z00_2238 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_msgz00);
					BgL_auxz00_2680 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1754z00_2238);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2680), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2686;

				{	/* Reduce/cond.scm 243 */
					BgL_nodez00_bglt BgL_arg1755z00_2239;

					BgL_arg1755z00_2239 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_objz00);
					BgL_auxz00_2686 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1755z00_2239);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2148)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2686), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2148));
		}

	}



/* &node-cond!-condition1291 */
	BgL_nodez00_bglt
		BGl_z62nodezd2condz12zd2condition1291z70zzreduce_condz00(obj_t
		BgL_envz00_2149, obj_t BgL_nodez00_2150)
	{
		{	/* Reduce/cond.scm 200 */
			{
				BgL_nodez00_bglt BgL_auxz00_2694;

				{	/* Reduce/cond.scm 202 */
					BgL_nodez00_bglt BgL_arg1592z00_2241;

					BgL_arg1592z00_2241 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_testz00);
					BgL_auxz00_2694 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1592z00_2241);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2694), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2700;

				{	/* Reduce/cond.scm 203 */
					BgL_nodez00_bglt BgL_arg1593z00_2242;

					BgL_arg1593z00_2242 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_truez00);
					BgL_auxz00_2700 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1593z00_2242);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2700), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2706;

				{	/* Reduce/cond.scm 204 */
					BgL_nodez00_bglt BgL_arg1597z00_2243;

					BgL_arg1597z00_2243 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_falsez00);
					BgL_auxz00_2706 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1597z00_2243);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2706), BUNSPEC);
			}
			{	/* Reduce/cond.scm 206 */
				bool_t BgL_test2043z00_2712;

				if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_testz00)))
					{	/* Reduce/cond.scm 206 */
						BgL_test2043z00_2712 = ((bool_t) 0);
					}
				else
					{	/* Reduce/cond.scm 207 */
						bool_t BgL_test2045z00_2717;

						{	/* Reduce/cond.scm 207 */
							BgL_nodez00_bglt BgL_arg1745z00_2244;

							BgL_arg1745z00_2244 =
								(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
								BgL_truez00);
							{	/* Reduce/cond.scm 207 */
								bool_t BgL_res1937z00_2245;

								BgL_res1937z00_2245 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1745z00_2244), BGl_atomz00zzast_nodez00);
								BgL_test2045z00_2717 = BgL_res1937z00_2245;
							}
						}
						if (BgL_test2045z00_2717)
							{	/* Reduce/cond.scm 207 */
								bool_t BgL_test2046z00_2722;

								{	/* Reduce/cond.scm 207 */
									BgL_nodez00_bglt BgL_arg1744z00_2246;

									BgL_arg1744z00_2246 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
										BgL_falsez00);
									{	/* Reduce/cond.scm 207 */
										bool_t BgL_res1938z00_2247;

										BgL_res1938z00_2247 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1744z00_2246), BGl_atomz00zzast_nodez00);
										BgL_test2046z00_2722 = BgL_res1938z00_2247;
									}
								}
								if (BgL_test2046z00_2722)
									{	/* Reduce/cond.scm 207 */
										if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
												(((BgL_atomz00_bglt) COBJECT(
															((BgL_atomz00_bglt)
																(((BgL_conditionalz00_bglt) COBJECT(
																			((BgL_conditionalz00_bglt)
																				BgL_nodez00_2150)))->BgL_truez00))))->
													BgL_valuez00),
												(((BgL_atomz00_bglt)
														COBJECT(((BgL_atomz00_bglt) ((
																		(BgL_conditionalz00_bglt)
																		COBJECT(((BgL_conditionalz00_bglt)
																				BgL_nodez00_2150)))->BgL_falsez00))))->
													BgL_valuez00)))
											{	/* Reduce/cond.scm 211 */
												bool_t BgL_test2048z00_2737;

												{	/* Reduce/cond.scm 211 */
													obj_t BgL_tmpz00_2738;

													BgL_tmpz00_2738 =
														(((BgL_atomz00_bglt) COBJECT(
																((BgL_atomz00_bglt)
																	(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2150)))->BgL_truez00))))->
														BgL_valuez00);
													BgL_test2048z00_2737 = REALP(BgL_tmpz00_2738);
												}
												if (BgL_test2048z00_2737)
													{	/* Reduce/cond.scm 211 */
														BgL_test2043z00_2712 = ((bool_t) 0);
													}
												else
													{	/* Reduce/cond.scm 211 */
														BgL_test2043z00_2712 = ((bool_t) 1);
													}
											}
										else
											{	/* Reduce/cond.scm 208 */
												BgL_test2043z00_2712 = ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/cond.scm 207 */
										BgL_test2043z00_2712 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/cond.scm 207 */
								BgL_test2043z00_2712 = ((bool_t) 0);
							}
					}
				if (BgL_test2043z00_2712)
					{	/* Reduce/cond.scm 206 */
						return
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->BgL_truez00);
					}
				else
					{	/* Reduce/cond.scm 214 */
						bool_t BgL_test2049z00_2746;

						{	/* Reduce/cond.scm 214 */
							bool_t BgL_test2050z00_2747;

							{	/* Reduce/cond.scm 214 */
								BgL_nodez00_bglt BgL_arg1740z00_2248;

								BgL_arg1740z00_2248 =
									(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
									BgL_truez00);
								{	/* Reduce/cond.scm 214 */
									bool_t BgL_res1940z00_2249;

									BgL_res1940z00_2249 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1740z00_2248), BGl_atomz00zzast_nodez00);
									BgL_test2050z00_2747 = BgL_res1940z00_2249;
								}
							}
							if (BgL_test2050z00_2747)
								{	/* Reduce/cond.scm 214 */
									bool_t BgL_test2051z00_2752;

									{	/* Reduce/cond.scm 214 */
										BgL_nodez00_bglt BgL_arg1739z00_2250;

										BgL_arg1739z00_2250 =
											(((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
											BgL_falsez00);
										{	/* Reduce/cond.scm 214 */
											bool_t BgL_res1941z00_2251;

											BgL_res1941z00_2251 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1739z00_2250),
												BGl_atomz00zzast_nodez00);
											BgL_test2051z00_2752 = BgL_res1941z00_2251;
										}
									}
									if (BgL_test2051z00_2752)
										{	/* Reduce/cond.scm 214 */
											if (
												((((BgL_atomz00_bglt) COBJECT(
																((BgL_atomz00_bglt)
																	(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2150)))->BgL_truez00))))->
														BgL_valuez00) == BTRUE))
												{	/* Reduce/cond.scm 215 */
													if (
														((((BgL_atomz00_bglt) COBJECT(
																		((BgL_atomz00_bglt)
																			(((BgL_conditionalz00_bglt) COBJECT(
																						((BgL_conditionalz00_bglt)
																							BgL_nodez00_2150)))->
																				BgL_falsez00))))->BgL_valuez00) ==
															BFALSE))
														{	/* Reduce/cond.scm 217 */
															BgL_typez00_bglt BgL_arg1728z00_2252;

															BgL_arg1728z00_2252 =
																BGl_getzd2typezd2zztype_typeofz00(
																(((BgL_conditionalz00_bglt) COBJECT(
																			((BgL_conditionalz00_bglt)
																				BgL_nodez00_2150)))->BgL_testz00),
																((bool_t) 1));
															BgL_test2049z00_2746 =
																(((obj_t) BgL_arg1728z00_2252) ==
																BGl_za2boolza2z00zztype_cachez00);
														}
													else
														{	/* Reduce/cond.scm 216 */
															BgL_test2049z00_2746 = ((bool_t) 0);
														}
												}
											else
												{	/* Reduce/cond.scm 215 */
													BgL_test2049z00_2746 = ((bool_t) 0);
												}
										}
									else
										{	/* Reduce/cond.scm 214 */
											BgL_test2049z00_2746 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/cond.scm 214 */
									BgL_test2049z00_2746 = ((bool_t) 0);
								}
						}
						if (BgL_test2049z00_2746)
							{	/* Reduce/cond.scm 214 */
								return
									(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
									BgL_testz00);
							}
						else
							{	/* Reduce/cond.scm 219 */
								bool_t BgL_test2054z00_2776;

								{	/* Reduce/cond.scm 219 */
									BgL_nodez00_bglt BgL_arg1727z00_2253;

									BgL_arg1727z00_2253 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
										BgL_testz00);
									{	/* Reduce/cond.scm 219 */
										bool_t BgL_res1942z00_2254;

										BgL_res1942z00_2254 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1727z00_2253), BGl_atomz00zzast_nodez00);
										BgL_test2054z00_2776 = BgL_res1942z00_2254;
									}
								}
								if (BgL_test2054z00_2776)
									{	/* Reduce/cond.scm 219 */
										BGl_za2condzd2reducedza2zd2zzreduce_condz00 =
											(((long) 1) +
											BGl_za2condzd2reducedza2zd2zzreduce_condz00);
										if (CBOOL((((BgL_atomz00_bglt)
														COBJECT(((BgL_atomz00_bglt) ((
																		(BgL_conditionalz00_bglt)
																		COBJECT(((BgL_conditionalz00_bglt)
																				BgL_nodez00_2150)))->BgL_testz00))))->
													BgL_valuez00)))
											{	/* Reduce/cond.scm 222 */
												return
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
													BgL_truez00);
											}
										else
											{	/* Reduce/cond.scm 222 */
												return
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
													BgL_falsez00);
											}
									}
								else
									{	/* Reduce/cond.scm 225 */
										obj_t BgL_g1120z00_2255;

										BgL_g1120z00_2255 =
											BGl_staticzd2valuezd2zzreduce_condz00(
											(((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2150)))->
												BgL_testz00));
										if (CBOOL(BgL_g1120z00_2255))
											{	/* Reduce/cond.scm 225 */
												BGl_za2condzd2reducedza2zd2zzreduce_condz00 =
													(((long) 1) +
													BGl_za2condzd2reducedza2zd2zzreduce_condz00);
												{	/* Reduce/cond.scm 230 */
													BgL_sequencez00_bglt BgL_new1123z00_2256;

													{	/* Reduce/cond.scm 230 */
														BgL_sequencez00_bglt BgL_new1122z00_2257;

														BgL_new1122z00_2257 =
															((BgL_sequencez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_sequencez00_bgl))));
														{	/* Reduce/cond.scm 230 */
															long BgL_arg1725z00_2258;

															{	/* Reduce/cond.scm 230 */
																long BgL_res1945z00_2259;

																BgL_res1945z00_2259 =
																	BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
																BgL_arg1725z00_2258 = BgL_res1945z00_2259;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1122z00_2257),
																BgL_arg1725z00_2258);
														}
														{	/* Reduce/cond.scm 230 */
															BgL_objectz00_bglt BgL_tmpz00_2802;

															BgL_tmpz00_2802 =
																((BgL_objectz00_bglt) BgL_new1122z00_2257);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2802, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1122z00_2257);
														BgL_new1123z00_2256 = BgL_new1122z00_2257;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1123z00_2256)))->
															BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1123z00_2256)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) (
																				(BgL_conditionalz00_bglt)
																				BgL_nodez00_2150))))->BgL_typez00)),
														BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1123z00_2256)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1123z00_2256)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													{
														obj_t BgL_auxz00_2818;

														{	/* Reduce/cond.scm 232 */
															BgL_nodez00_bglt BgL_arg1708z00_2260;
															BgL_nodez00_bglt BgL_arg1711z00_2261;

															BgL_arg1708z00_2260 =
																(((BgL_conditionalz00_bglt) COBJECT(
																		((BgL_conditionalz00_bglt)
																			BgL_nodez00_2150)))->BgL_testz00);
															if ((BgL_g1120z00_2255 ==
																	CNST_TABLE_REF(((long) 6))))
																{	/* Reduce/cond.scm 232 */
																	BgL_arg1711z00_2261 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2150)))->BgL_truez00);
																}
															else
																{	/* Reduce/cond.scm 232 */
																	BgL_arg1711z00_2261 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2150)))->BgL_falsez00);
																}
															{	/* Reduce/cond.scm 232 */
																obj_t BgL_list1712z00_2262;

																{	/* Reduce/cond.scm 232 */
																	obj_t BgL_arg1719z00_2263;

																	BgL_arg1719z00_2263 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1711z00_2261), BNIL);
																	BgL_list1712z00_2262 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1708z00_2260),
																		BgL_arg1719z00_2263);
																}
																BgL_auxz00_2818 = BgL_list1712z00_2262;
															}
														}
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1123z00_2256))->BgL_nodesz00) =
															((obj_t) BgL_auxz00_2818), BUNSPEC);
													}
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1123z00_2256))->BgL_unsafez00) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1123z00_2256))->BgL_metaz00) =
														((obj_t) BNIL), BUNSPEC);
													return ((BgL_nodez00_bglt) BgL_new1123z00_2256);
												}
											}
										else
											{	/* Reduce/cond.scm 225 */
												return
													((BgL_nodez00_bglt)
													((BgL_conditionalz00_bglt) BgL_nodez00_2150));
											}
									}
							}
					}
			}
		}

	}



/* &node-cond!-setq1289 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2setq1289z70zzreduce_condz00(obj_t
		BgL_envz00_2151, obj_t BgL_nodez00_2152)
	{
		{	/* Reduce/cond.scm 191 */
			{
				BgL_nodez00_bglt BgL_auxz00_2838;

				{	/* Reduce/cond.scm 193 */
					BgL_nodez00_bglt BgL_arg1588z00_2265;

					BgL_arg1588z00_2265 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2152)))->BgL_valuez00);
					BgL_auxz00_2838 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1588z00_2265);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2152)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2838), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2844;

				{	/* Reduce/cond.scm 194 */
					BgL_varz00_bglt BgL_arg1589z00_2266;

					BgL_arg1589z00_2266 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2152)))->BgL_varz00);
					BgL_auxz00_2844 =
						((BgL_varz00_bglt)
						BGl_nodezd2condz12zc0zzreduce_condz00(
							((BgL_nodez00_bglt) BgL_arg1589z00_2266)));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2152)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2844), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2152));
		}

	}



/* &node-cond!-cast1287 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2cast1287z70zzreduce_condz00(obj_t
		BgL_envz00_2153, obj_t BgL_nodez00_2154)
	{
		{	/* Reduce/cond.scm 183 */
			BGl_nodezd2condz12zc0zzreduce_condz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2154)))->BgL_argz00));
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2154));
		}

	}



/* &node-cond!-extern1285 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2extern1285z70zzreduce_condz00(obj_t
		BgL_envz00_2155, obj_t BgL_nodez00_2156)
	{
		{	/* Reduce/cond.scm 175 */
			BGl_nodezd2condza2z12z62zzreduce_condz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2156)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2156));
		}

	}



/* &node-cond!-funcall1283 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2funcall1283z70zzreduce_condz00(obj_t
		BgL_envz00_2157, obj_t BgL_nodez00_2158)
	{
		{	/* Reduce/cond.scm 166 */
			{
				BgL_nodez00_bglt BgL_auxz00_2864;

				{	/* Reduce/cond.scm 168 */
					BgL_nodez00_bglt BgL_arg1575z00_2270;

					BgL_arg1575z00_2270 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2158)))->BgL_funz00);
					BgL_auxz00_2864 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1575z00_2270);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2158)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2864), BUNSPEC);
			}
			BGl_nodezd2condza2z12z62zzreduce_condz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2158)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2158));
		}

	}



/* &node-cond!-app-ly1281 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2appzd2ly1281za2zzreduce_condz00(obj_t
		BgL_envz00_2159, obj_t BgL_nodez00_2160)
	{
		{	/* Reduce/cond.scm 157 */
			{
				BgL_nodez00_bglt BgL_auxz00_2875;

				{	/* Reduce/cond.scm 159 */
					BgL_nodez00_bglt BgL_arg1565z00_2272;

					BgL_arg1565z00_2272 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2160)))->BgL_funz00);
					BgL_auxz00_2875 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1565z00_2272);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2160)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2875), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2881;

				{	/* Reduce/cond.scm 160 */
					BgL_nodez00_bglt BgL_arg1573z00_2273;

					BgL_arg1573z00_2273 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2160)))->BgL_argz00);
					BgL_auxz00_2881 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1573z00_2273);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2160)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2881), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2160));
		}

	}



/* &node-cond!-app1279 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2app1279z70zzreduce_condz00(obj_t
		BgL_envz00_2161, obj_t BgL_nodez00_2162)
	{
		{	/* Reduce/cond.scm 122 */
			{
				obj_t BgL_n1z00_2294;
				obj_t BgL_n2z00_2295;
				BgL_appz00_bglt BgL_nodez00_2277;

				BGl_nodezd2condza2z12z62zzreduce_condz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2162)))->BgL_argsz00));
				{	/* Reduce/cond.scm 147 */
					obj_t BgL_trivz00_2296;

					BgL_nodez00_2277 = ((BgL_appz00_bglt) BgL_nodez00_2162);
					{	/* Reduce/cond.scm 135 */
						bool_t BgL_test2058z00_2892;

						{	/* Reduce/cond.scm 135 */
							bool_t BgL_test2059z00_2893;

							{	/* Reduce/cond.scm 135 */
								bool_t BgL_test2060z00_2894;

								{	/* Reduce/cond.scm 135 */
									BgL_typez00_bglt BgL_arg1564z00_2278;

									BgL_arg1564z00_2278 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_nodez00_2277)))->BgL_typez00);
									BgL_test2060z00_2894 =
										(
										((obj_t) BgL_arg1564z00_2278) ==
										BGl_za2boolza2z00zztype_cachez00);
								}
								if (BgL_test2060z00_2894)
									{	/* Reduce/cond.scm 135 */
										BgL_test2059z00_2893 = ((bool_t) 1);
									}
								else
									{	/* Reduce/cond.scm 135 */
										BgL_typez00_bglt BgL_arg1561z00_2279;

										BgL_arg1561z00_2279 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_nodez00_2277)))->BgL_typez00);
										BgL_test2059z00_2893 =
											(
											((obj_t) BgL_arg1561z00_2279) ==
											BGl_za2objza2z00zztype_cachez00);
									}
							}
							if (BgL_test2059z00_2893)
								{	/* Reduce/cond.scm 136 */
									obj_t BgL_g1252z00_2280;

									BgL_g1252z00_2280 =
										(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
										BgL_argsz00);
									{
										obj_t BgL_l1250z00_2282;

										BgL_l1250z00_2282 = BgL_g1252z00_2280;
									BgL_zc3z04anonymousza31553ze3z87_2281:
										if (NULLP(BgL_l1250z00_2282))
											{	/* Reduce/cond.scm 136 */
												BgL_test2058z00_2892 = ((bool_t) 1);
											}
										else
											{	/* Reduce/cond.scm 136 */
												bool_t BgL_test2062z00_2906;

												{	/* Reduce/cond.scm 136 */
													obj_t BgL_nz00_2283;

													BgL_nz00_2283 = CAR(((obj_t) BgL_l1250z00_2282));
													{	/* Reduce/cond.scm 136 */
														bool_t BgL__ortest_1107z00_2284;

														BgL__ortest_1107z00_2284 =
															BGl_isazf3zf3zz__objectz00(BgL_nz00_2283,
															BGl_atomz00zzast_nodez00);
														if (BgL__ortest_1107z00_2284)
															{	/* Reduce/cond.scm 136 */
																BgL_test2062z00_2906 = BgL__ortest_1107z00_2284;
															}
														else
															{	/* Reduce/cond.scm 136 */
																BgL_test2062z00_2906 =
																	BGl_isazf3zf3zz__objectz00(BgL_nz00_2283,
																	BGl_varz00zzast_nodez00);
															}
													}
												}
												if (BgL_test2062z00_2906)
													{	/* Reduce/cond.scm 136 */
														obj_t BgL_arg1558z00_2285;

														BgL_arg1558z00_2285 =
															CDR(((obj_t) BgL_l1250z00_2282));
														{
															obj_t BgL_l1250z00_2914;

															BgL_l1250z00_2914 = BgL_arg1558z00_2285;
															BgL_l1250z00_2282 = BgL_l1250z00_2914;
															goto BgL_zc3z04anonymousza31553ze3z87_2281;
														}
													}
												else
													{	/* Reduce/cond.scm 136 */
														BgL_test2058z00_2892 = ((bool_t) 0);
													}
											}
									}
								}
							else
								{	/* Reduce/cond.scm 135 */
									BgL_test2058z00_2892 = ((bool_t) 0);
								}
						}
						if (BgL_test2058z00_2892)
							{	/* Reduce/cond.scm 138 */
								bool_t BgL_test2064z00_2915;

								{	/* Reduce/cond.scm 138 */
									BgL_variablez00_bglt BgL_arg1540z00_2286;

									BgL_arg1540z00_2286 =
										(((BgL_varz00_bglt) COBJECT(
												(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
													BgL_funz00)))->BgL_variablez00);
									BgL_test2064z00_2915 =
										(((obj_t) BgL_arg1540z00_2286) ==
										BGl_za2z42eqza2z42zzreduce_condz00);
								}
								if (BgL_test2064z00_2915)
									{	/* Reduce/cond.scm 139 */
										obj_t BgL_arg1474z00_2287;
										obj_t BgL_arg1476z00_2288;

										BgL_arg1474z00_2287 =
											CAR(
											(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
												BgL_argsz00));
										{	/* Reduce/cond.scm 139 */
											obj_t BgL_pairz00_2289;

											BgL_pairz00_2289 =
												(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
												BgL_argsz00);
											BgL_arg1476z00_2288 = CAR(CDR(BgL_pairz00_2289));
										}
										BgL_n1z00_2294 = BgL_arg1474z00_2287;
										BgL_n2z00_2295 = BgL_arg1476z00_2288;
									BgL_eqzd2atomzf3z21_2276:
										{	/* Reduce/cond.scm 126 */
											bool_t BgL_test2065z00_2925;

											if (BGl_isazf3zf3zz__objectz00(BgL_n1z00_2294,
													BGl_atomz00zzast_nodez00))
												{	/* Reduce/cond.scm 126 */
													BgL_test2065z00_2925 =
														BGl_isazf3zf3zz__objectz00(BgL_n2z00_2295,
														BGl_atomz00zzast_nodez00);
												}
											else
												{	/* Reduce/cond.scm 126 */
													BgL_test2065z00_2925 = ((bool_t) 0);
												}
											if (BgL_test2065z00_2925)
												{	/* Reduce/cond.scm 126 */
													if (
														((((BgL_atomz00_bglt) COBJECT(
																		((BgL_atomz00_bglt) BgL_n1z00_2294)))->
																BgL_valuez00) ==
															(((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																			BgL_n2z00_2295)))->BgL_valuez00)))
														{	/* Reduce/cond.scm 127 */
															BgL_trivz00_2296 = CNST_TABLE_REF(((long) 6));
														}
													else
														{	/* Reduce/cond.scm 127 */
															BgL_trivz00_2296 = CNST_TABLE_REF(((long) 5));
												}}
											else
												{	/* Reduce/cond.scm 128 */
													bool_t BgL_test2068z00_2937;

													if (BGl_isazf3zf3zz__objectz00(BgL_n1z00_2294,
															BGl_varz00zzast_nodez00))
														{	/* Reduce/cond.scm 128 */
															BgL_test2068z00_2937 =
																BGl_isazf3zf3zz__objectz00(BgL_n2z00_2295,
																BGl_varz00zzast_nodez00);
														}
													else
														{	/* Reduce/cond.scm 128 */
															BgL_test2068z00_2937 = ((bool_t) 0);
														}
													if (BgL_test2068z00_2937)
														{	/* Reduce/cond.scm 128 */
															if (
																(((obj_t)
																		(((BgL_varz00_bglt) COBJECT(
																					((BgL_varz00_bglt) BgL_n1z00_2294)))->
																			BgL_variablez00)) ==
																	((obj_t) (((BgL_varz00_bglt)
																				COBJECT(((BgL_varz00_bglt)
																						BgL_n2z00_2295)))->
																			BgL_variablez00))))
																{	/* Reduce/cond.scm 129 */
																	BgL_trivz00_2296 = CNST_TABLE_REF(((long) 6));
																}
															else
																{	/* Reduce/cond.scm 129 */
																	BgL_trivz00_2296 = BFALSE;
																}
														}
													else
														{	/* Reduce/cond.scm 128 */
															BgL_trivz00_2296 = BFALSE;
														}
												}
										}
									}
								else
									{	/* Reduce/cond.scm 140 */
										bool_t BgL_test2071z00_2950;

										{	/* Reduce/cond.scm 140 */
											BgL_variablez00_bglt BgL_arg1536z00_2290;

											BgL_arg1536z00_2290 =
												(((BgL_varz00_bglt) COBJECT(
														(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
															BgL_funz00)))->BgL_variablez00);
											BgL_test2071z00_2950 =
												(((obj_t) BgL_arg1536z00_2290) ==
												BGl_za2z42zd3fxza2z91zzreduce_condz00);
										}
										if (BgL_test2071z00_2950)
											{	/* Reduce/cond.scm 141 */
												obj_t BgL_arg1497z00_2291;
												obj_t BgL_arg1518z00_2292;

												BgL_arg1497z00_2291 =
													CAR(
													(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
														BgL_argsz00));
												{	/* Reduce/cond.scm 141 */
													obj_t BgL_pairz00_2293;

													BgL_pairz00_2293 =
														(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2277))->
														BgL_argsz00);
													BgL_arg1518z00_2292 = CAR(CDR(BgL_pairz00_2293));
												}
												{
													obj_t BgL_n2z00_2961;
													obj_t BgL_n1z00_2960;

													BgL_n1z00_2960 = BgL_arg1497z00_2291;
													BgL_n2z00_2961 = BgL_arg1518z00_2292;
													BgL_n2z00_2295 = BgL_n2z00_2961;
													BgL_n1z00_2294 = BgL_n1z00_2960;
													goto BgL_eqzd2atomzf3z21_2276;
												}
											}
										else
											{	/* Reduce/cond.scm 140 */
												BgL_trivz00_2296 = BFALSE;
											}
									}
							}
						else
							{	/* Reduce/cond.scm 135 */
								BgL_trivz00_2296 = BFALSE;
							}
					}
					if (CBOOL(BgL_trivz00_2296))
						{	/* Reduce/cond.scm 150 */
							BgL_literalz00_bglt BgL_new1110z00_2297;

							{	/* Reduce/cond.scm 150 */
								BgL_literalz00_bglt BgL_new1109z00_2298;

								BgL_new1109z00_2298 =
									((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_literalz00_bgl))));
								{	/* Reduce/cond.scm 150 */
									long BgL_arg1363z00_2299;

									{	/* Reduce/cond.scm 150 */
										long BgL_res1936z00_2300;

										BgL_res1936z00_2300 =
											BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
										BgL_arg1363z00_2299 = BgL_res1936z00_2300;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1109z00_2298),
										BgL_arg1363z00_2299);
								}
								{	/* Reduce/cond.scm 150 */
									BgL_objectz00_bglt BgL_tmpz00_2969;

									BgL_tmpz00_2969 = ((BgL_objectz00_bglt) BgL_new1109z00_2298);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2969, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1109z00_2298);
								BgL_new1110z00_2297 = BgL_new1109z00_2298;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1110z00_2297)))->BgL_locz00) =
								((obj_t) BFALSE), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1110z00_2297)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
														BgL_nodez00_2162))))->BgL_typez00)), BUNSPEC);
							((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
												BgL_new1110z00_2297)))->BgL_valuez00) =
								((obj_t) BBOOL((BgL_trivz00_2296 ==
											CNST_TABLE_REF(((long) 6))))), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1110z00_2297);
						}
					else
						{	/* Reduce/cond.scm 148 */
							return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2162));
						}
				}
			}
		}

	}



/* &node-cond!-sync1277 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2sync1277z70zzreduce_condz00(obj_t
		BgL_envz00_2163, obj_t BgL_nodez00_2164)
	{
		{	/* Reduce/cond.scm 112 */
			{
				BgL_nodez00_bglt BgL_auxz00_2988;

				{	/* Reduce/cond.scm 114 */
					BgL_nodez00_bglt BgL_arg1352z00_2302;

					BgL_arg1352z00_2302 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_mutexz00);
					BgL_auxz00_2988 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1352z00_2302);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2988), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2994;

				{	/* Reduce/cond.scm 115 */
					BgL_nodez00_bglt BgL_arg1357z00_2303;

					BgL_arg1357z00_2303 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_prelockz00);
					BgL_auxz00_2994 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1357z00_2303);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2994), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3000;

				{	/* Reduce/cond.scm 116 */
					BgL_nodez00_bglt BgL_arg1360z00_2304;

					BgL_arg1360z00_2304 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_bodyz00);
					BgL_auxz00_3000 =
						BGl_nodezd2condz12zc0zzreduce_condz00(BgL_arg1360z00_2304);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2164)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3000), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2164));
		}

	}



/* &node-cond!-sequence1275 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2sequence1275z70zzreduce_condz00(obj_t
		BgL_envz00_2165, obj_t BgL_nodez00_2166)
	{
		{	/* Reduce/cond.scm 104 */
			BGl_nodezd2condza2z12z62zzreduce_condz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2166)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2166));
		}

	}



/* &node-cond!-closure1273 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2closure1273z70zzreduce_condz00(obj_t
		BgL_envz00_2167, obj_t BgL_nodez00_2168)
	{
		{	/* Reduce/cond.scm 98 */
			return ((BgL_nodez00_bglt) ((BgL_closurez00_bglt) BgL_nodez00_2168));
		}

	}



/* &node-cond!-var1270 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2var1270z70zzreduce_condz00(obj_t
		BgL_envz00_2169, obj_t BgL_nodez00_2170)
	{
		{	/* Reduce/cond.scm 92 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2170));
		}

	}



/* &node-cond!-kwote1268 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2kwote1268z70zzreduce_condz00(obj_t
		BgL_envz00_2171, obj_t BgL_nodez00_2172)
	{
		{	/* Reduce/cond.scm 86 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2172));
		}

	}



/* &node-cond!-atom1266 */
	BgL_nodez00_bglt BGl_z62nodezd2condz12zd2atom1266z70zzreduce_condz00(obj_t
		BgL_envz00_2173, obj_t BgL_nodez00_2174)
	{
		{	/* Reduce/cond.scm 80 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2174));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_condz00()
	{
		{	/* Reduce/cond.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1988z00zzreduce_condz00));
		}

	}

#ifdef __cplusplus
}
#endif
