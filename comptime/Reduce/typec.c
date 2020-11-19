/*===========================================================================*/
/*   (Reduce/typec.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/typec.scm) */
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


	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2kwote1281z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21313z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_za2foreignza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2var1309za2zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2switch1305z70zzreduce_typecz00(obj_t, obj_t);
	extern bool_t BGl_foreignzd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_za2nullzf3za2zf3zzreduce_typecz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sync1289z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2funcall1293z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2appzd2ly1291za2zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62nodezd2typecz12za2zzreduce_typecz00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2extern1295z70zzreduce_typecz00(obj_t, obj_t);
	static long BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00;
	static obj_t BGl_gczd2rootszd2initz00zzreduce_typecz00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2var1283z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2app1325z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1311z70zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2conditio1301z70zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2makezd2box1319za2zzreduce_typecz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_typecz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2setz121321zb0zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_typecz00();
	static obj_t BGl_genericzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2fail1303z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62reducezd2typezd2checkz12z70zzreduce_typecz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_za2pairzf3za2zf3zzreduce_typecz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_pairzd2ofzd2pairzd2nilzf3z21zzreduce_typecz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2ref1323za2zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2return1317z70zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2cast1297z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setq1299z70zzreduce_typecz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_jclassz00zzobject_classz00;
	static obj_t BGl_nodezd2typecza2z12z62zzreduce_typecz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sequence1287z70zzreduce_typecz00(obj_t, obj_t);
	static long BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2closure1285z70zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2retblock1315z70zzreduce_typecz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzreduce_typecz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
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
	static obj_t BGl_z62nodezd2typecz121276za2zzreduce_typecz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzreduce_typecz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_typecz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_typecz00();
	BGL_EXPORTED_DECL obj_t
		BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2fun1307za2zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2atom1279z70zzreduce_typecz00(obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71895za7,
		BGl_z62nodezd2typecz12za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1858z00zzreduce_typecz00,
		BgL_bgl_string1858za700za7za7r1896za7, "      type check             ", 29);
	      DEFINE_STRING(BGl_string1859z00zzreduce_typecz00,
		BgL_bgl_string1859za700za7za7r1897za7, ")\n", 2);
	      DEFINE_STRING(BGl_string1860z00zzreduce_typecz00,
		BgL_bgl_string1860za700za7za7r1898za7, ", remaining: ", 13);
	      DEFINE_STRING(BGl_string1861z00zzreduce_typecz00,
		BgL_bgl_string1861za700za7za7r1899za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string1863z00zzreduce_typecz00,
		BgL_bgl_string1863za700za7za7r1900za7, "node-typec!1276", 15);
	      DEFINE_STRING(BGl_string1864z00zzreduce_typecz00,
		BgL_bgl_string1864za700za7za7r1901za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1866z00zzreduce_typecz00,
		BgL_bgl_string1866za700za7za7r1902za7, "node-typec!", 11);
	      DEFINE_STRING(BGl_string1890z00zzreduce_typecz00,
		BgL_bgl_string1890za700za7za7r1903za7, "reduce_typec", 12);
	      DEFINE_STRING(BGl_string1891z00zzreduce_typecz00,
		BgL_bgl_string1891za700za7za7r1904za7,
		"node-typec!1276 done $null? foreign $pair? ", 43);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2typezd2checkz12zd2envzc0zzreduce_typecz00,
		BgL_bgl_za762reduceza7d2type1905z00,
		BGl_z62reducezd2typezd2checkz12z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1862z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71906za7,
		BGl_z62nodezd2typecz121276za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1865z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71907za7,
		BGl_z62nodezd2typecz12zd2atom1279z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71908za7,
		BGl_z62nodezd2typecz12zd2kwote1281z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1868z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71909za7,
		BGl_z62nodezd2typecz12zd2var1283z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71910za7,
		BGl_z62nodezd2typecz12zd2closure1285z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1870z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71911za7,
		BGl_z62nodezd2typecz12zd2sequence1287z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71912za7,
		BGl_z62nodezd2typecz12zd2sync1289z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71913za7,
		BGl_z62nodezd2typecz12zd2appzd2ly1291za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71914za7,
		BGl_z62nodezd2typecz12zd2funcall1293z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71915za7,
		BGl_z62nodezd2typecz12zd2extern1295z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1875z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71916za7,
		BGl_z62nodezd2typecz12zd2cast1297z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71917za7,
		BGl_z62nodezd2typecz12zd2setq1299z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71918za7,
		BGl_z62nodezd2typecz12zd2conditio1301z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71919za7,
		BGl_z62nodezd2typecz12zd2fail1303z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71920za7,
		BGl_z62nodezd2typecz12zd2switch1305z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71921za7,
		BGl_z62nodezd2typecz12zd2letzd2fun1307za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71922za7,
		BGl_z62nodezd2typecz12zd2letzd2var1309za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71923za7,
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1311z70zzreduce_typecz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71924za7,
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21313z70zzreduce_typecz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71925za7,
		BGl_z62nodezd2typecz12zd2retblock1315z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71926za7,
		BGl_z62nodezd2typecz12zd2return1317z70zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71927za7,
		BGl_z62nodezd2typecz12zd2makezd2box1319za2zzreduce_typecz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71928za7,
		BGl_z62nodezd2typecz12zd2boxzd2setz121321zb0zzreduce_typecz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71929za7,
		BGl_z62nodezd2typecz12zd2boxzd2ref1323za2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzreduce_typecz00,
		BgL_bgl_za762nodeza7d2typecza71930za7,
		BGl_z62nodezd2typecz12zd2app1325z70zzreduce_typecz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2nullzf3za2zf3zzreduce_typecz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_typecz00));
		     ADD_ROOT((void *) (&BGl_za2pairzf3za2zf3zzreduce_typecz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_typecz00(long
		BgL_checksumz00_2370, char *BgL_fromz00_2371)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_typecz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_typecz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_typecz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_typecz00();
					BGl_cnstzd2initzd2zzreduce_typecz00();
					BGl_importedzd2moduleszd2initz00zzreduce_typecz00();
					BGl_genericzd2initzd2zzreduce_typecz00();
					BGl_methodzd2initzd2zzreduce_typecz00();
					return BGl_toplevelzd2initzd2zzreduce_typecz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_typec");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_typec");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_typec");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_typec");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_typec");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			{	/* Reduce/typec.scm 15 */
				obj_t BgL_cportz00_2253;

				{	/* Reduce/typec.scm 15 */
					obj_t BgL_stringz00_2261;

					BgL_stringz00_2261 = BGl_string1891z00zzreduce_typecz00;
					{	/* Reduce/typec.scm 15 */
						obj_t BgL_startz00_2262;

						BgL_startz00_2262 = BINT(((long) 0));
						{	/* Reduce/typec.scm 15 */
							obj_t BgL_endz00_2263;

							BgL_endz00_2263 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2261)));
							{	/* Reduce/typec.scm 15 */

								BgL_cportz00_2253 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2261, BgL_startz00_2262, BgL_endz00_2263);
				}}}}
				{
					long BgL_iz00_2254;

					BgL_iz00_2254 = ((long) 4);
				BgL_loopz00_2255:
					if ((BgL_iz00_2254 == ((long) -1)))
						{	/* Reduce/typec.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/typec.scm 15 */
							{	/* Reduce/typec.scm 15 */
								obj_t BgL_arg1893z00_2257;

								{	/* Reduce/typec.scm 15 */

									{	/* Reduce/typec.scm 15 */
										obj_t BgL_locationz00_2259;

										BgL_locationz00_2259 = BBOOL(((bool_t) 0));
										{	/* Reduce/typec.scm 15 */

											BgL_arg1893z00_2257 =
												BGl_readz00zz__readerz00(BgL_cportz00_2253,
												BgL_locationz00_2259);
										}
									}
								}
								{	/* Reduce/typec.scm 15 */
									int BgL_tmpz00_2400;

									BgL_tmpz00_2400 = (int) (BgL_iz00_2254);
									CNST_TABLE_SET(BgL_tmpz00_2400, BgL_arg1893z00_2257);
							}}
							{	/* Reduce/typec.scm 15 */
								int BgL_auxz00_2260;

								BgL_auxz00_2260 = (int) ((BgL_iz00_2254 - ((long) 1)));
								{
									long BgL_iz00_2405;

									BgL_iz00_2405 = (long) (BgL_auxz00_2260);
									BgL_iz00_2254 = BgL_iz00_2405;
									goto BgL_loopz00_2255;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			BGl_za2pairzf3za2zf3zzreduce_typecz00 = BFALSE;
			BGl_za2nullzf3za2zf3zzreduce_typecz00 = BFALSE;
			BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00 = ((long) 0);
			BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* reduce-type-check! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/typec.scm 38 */
			{	/* Reduce/typec.scm 39 */
				obj_t BgL_list1329z00_1578;

				BgL_list1329z00_1578 =
					MAKE_YOUNG_PAIR(BGl_string1858z00zzreduce_typecz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1329z00_1578);
			}
			BGl_za2pairzf3za2zf3zzreduce_typecz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 0)),
				CNST_TABLE_REF(((long) 1)));
			BGl_za2nullzf3za2zf3zzreduce_typecz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 2)),
				CNST_TABLE_REF(((long) 1)));
			{
				obj_t BgL_l1265z00_1580;

				BgL_l1265z00_1580 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31330ze3z87_1581:
				if (PAIRP(BgL_l1265z00_1580))
					{	/* Reduce/typec.scm 42 */
						{	/* Reduce/typec.scm 43 */
							obj_t BgL_globalz00_1583;

							BgL_globalz00_1583 = CAR(BgL_l1265z00_1580);
							{	/* Reduce/typec.scm 43 */
								BgL_valuez00_bglt BgL_funz00_1584;

								BgL_funz00_1584 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1583))))->
									BgL_valuez00);
								{	/* Reduce/typec.scm 43 */
									obj_t BgL_nodez00_1585;

									BgL_nodez00_1585 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1584)))->BgL_bodyz00);
									{	/* Reduce/typec.scm 44 */

										{	/* Reduce/typec.scm 45 */
											BgL_nodez00_bglt BgL_arg1334z00_1586;

											BgL_arg1334z00_1586 =
												BGl_nodezd2typecz12zc0zzreduce_typecz00(
												((BgL_nodez00_bglt) BgL_nodez00_1585));
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1584)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1334z00_1586)), BUNSPEC);
										}
										BUNSPEC;
									}
								}
							}
						}
						{
							obj_t BgL_l1265z00_2430;

							BgL_l1265z00_2430 = CDR(BgL_l1265z00_1580);
							BgL_l1265z00_1580 = BgL_l1265z00_2430;
							goto BgL_zc3z04anonymousza31330ze3z87_1581;
						}
					}
				else
					{	/* Reduce/typec.scm 42 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/typec.scm 48 */
				obj_t BgL_list1336z00_1589;

				{	/* Reduce/typec.scm 48 */
					obj_t BgL_arg1337z00_1590;

					{	/* Reduce/typec.scm 48 */
						obj_t BgL_arg1338z00_1591;

						{	/* Reduce/typec.scm 48 */
							obj_t BgL_arg1339z00_1592;

							{	/* Reduce/typec.scm 48 */
								obj_t BgL_arg1340z00_1593;

								BgL_arg1340z00_1593 =
									MAKE_YOUNG_PAIR(BGl_string1859z00zzreduce_typecz00, BNIL);
								BgL_arg1339z00_1592 =
									MAKE_YOUNG_PAIR(BINT
									(BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00),
									BgL_arg1340z00_1593);
							}
							BgL_arg1338z00_1591 =
								MAKE_YOUNG_PAIR(BGl_string1860z00zzreduce_typecz00,
								BgL_arg1339z00_1592);
						}
						BgL_arg1337z00_1590 =
							MAKE_YOUNG_PAIR(BINT
							(BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00),
							BgL_arg1338z00_1591);
					}
					BgL_list1336z00_1589 =
						MAKE_YOUNG_PAIR(BGl_string1861z00zzreduce_typecz00,
						BgL_arg1337z00_1590);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1336z00_1589);
			}
			BGl_za2pairzf3za2zf3zzreduce_typecz00 = BFALSE;
			BGl_za2nullzf3za2zf3zzreduce_typecz00 = BFALSE;
			return BgL_globalsz00_3;
		}

	}



/* &reduce-type-check! */
	obj_t BGl_z62reducezd2typezd2checkz12z70zzreduce_typecz00(obj_t
		BgL_envz00_2174, obj_t BgL_globalsz00_2175)
	{
		{	/* Reduce/typec.scm 38 */
			return
				BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(BgL_globalsz00_2175);
		}

	}



/* node-typec*! */
	obj_t BGl_nodezd2typecza2z12z62zzreduce_typecz00(obj_t BgL_nodeza2za2_28)
	{
		{	/* Reduce/typec.scm 286 */
			{
				obj_t BgL_nodeza2za2_1595;

				BgL_nodeza2za2_1595 = BgL_nodeza2za2_28;
			BgL_zc3z04anonymousza31341ze3z87_1596:
				if (NULLP(BgL_nodeza2za2_1595))
					{	/* Reduce/typec.scm 288 */
						return CNST_TABLE_REF(((long) 3));
					}
				else
					{	/* Reduce/typec.scm 288 */
						{	/* Reduce/typec.scm 291 */
							BgL_nodez00_bglt BgL_arg1344z00_1598;

							{	/* Reduce/typec.scm 291 */
								obj_t BgL_arg1345z00_1599;

								BgL_arg1345z00_1599 = CAR(((obj_t) BgL_nodeza2za2_1595));
								BgL_arg1344z00_1598 =
									BGl_nodezd2typecz12zc0zzreduce_typecz00(
									((BgL_nodez00_bglt) BgL_arg1345z00_1599));
							}
							{	/* Reduce/typec.scm 291 */
								obj_t BgL_auxz00_2451;
								obj_t BgL_tmpz00_2449;

								BgL_auxz00_2451 = ((obj_t) BgL_arg1344z00_1598);
								BgL_tmpz00_2449 = ((obj_t) BgL_nodeza2za2_1595);
								SET_CAR(BgL_tmpz00_2449, BgL_auxz00_2451);
							}
						}
						{	/* Reduce/typec.scm 292 */
							obj_t BgL_arg1346z00_1600;

							BgL_arg1346z00_1600 = CDR(((obj_t) BgL_nodeza2za2_1595));
							{
								obj_t BgL_nodeza2za2_2456;

								BgL_nodeza2za2_2456 = BgL_arg1346z00_1600;
								BgL_nodeza2za2_1595 = BgL_nodeza2za2_2456;
								goto BgL_zc3z04anonymousza31341ze3z87_1596;
							}
						}
					}
			}
		}

	}



/* pair-of-pair-nil? */
	bool_t BGl_pairzd2ofzd2pairzd2nilzf3z21zzreduce_typecz00(BgL_nodez00_bglt
		BgL_nodez00_30)
	{
		{	/* Reduce/typec.scm 379 */
			{	/* Reduce/typec.scm 380 */
				bool_t BgL_test1935z00_2457;

				{	/* Reduce/typec.scm 380 */
					bool_t BgL_res1832z00_2077;

					BgL_res1832z00_2077 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_nodez00_30), BGl_appz00zzast_nodez00);
					BgL_test1935z00_2457 = BgL_res1832z00_2077;
				}
				if (BgL_test1935z00_2457)
					{	/* Reduce/typec.scm 382 */
						bool_t BgL_test1936z00_2460;

						{	/* Reduce/typec.scm 382 */
							BgL_variablez00_bglt BgL_arg1364z00_1613;

							BgL_arg1364z00_1613 =
								(((BgL_varz00_bglt) COBJECT(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_30)))->BgL_funz00)))->
								BgL_variablez00);
							BgL_test1936z00_2460 =
								(((obj_t) BgL_arg1364z00_1613) ==
								BGl_za2pairzf3za2zf3zzreduce_typecz00);
						}
						if (BgL_test1936z00_2460)
							{	/* Reduce/typec.scm 383 */
								bool_t BgL_test1937z00_2466;

								{	/* Reduce/typec.scm 383 */
									obj_t BgL_tmpz00_2467;

									BgL_tmpz00_2467 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_30)))->BgL_argsz00);
									BgL_test1937z00_2466 = PAIRP(BgL_tmpz00_2467);
								}
								if (BgL_test1937z00_2466)
									{	/* Reduce/typec.scm 384 */
										bool_t BgL_test1938z00_2471;

										{	/* Reduce/typec.scm 384 */
											obj_t BgL_tmpz00_2472;

											{	/* Reduce/typec.scm 384 */
												obj_t BgL_pairz00_2080;

												BgL_pairz00_2080 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_30)))->
													BgL_argsz00);
												BgL_tmpz00_2472 = CDR(BgL_pairz00_2080);
											}
											BgL_test1938z00_2471 = NULLP(BgL_tmpz00_2472);
										}
										if (BgL_test1938z00_2471)
											{	/* Reduce/typec.scm 385 */
												BgL_typez00_bglt BgL_arg1351z00_1607;

												{	/* Reduce/typec.scm 385 */
													obj_t BgL_arg1352z00_1608;

													{	/* Reduce/typec.scm 385 */
														obj_t BgL_pairz00_2082;

														BgL_pairz00_2082 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_30)))->
															BgL_argsz00);
														BgL_arg1352z00_1608 = CAR(BgL_pairz00_2082);
													}
													BgL_arg1351z00_1607 =
														BGl_getzd2typezd2zztype_typeofz00(
														((BgL_nodez00_bglt) BgL_arg1352z00_1608),
														((bool_t) 0));
												}
												return
													(
													((obj_t) BgL_arg1351z00_1607) ==
													BGl_za2pairzd2nilza2zd2zztype_cachez00);
											}
										else
											{	/* Reduce/typec.scm 384 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Reduce/typec.scm 383 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/typec.scm 382 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Reduce/typec.scm 380 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_proc1862z00zzreduce_typecz00, BGl_nodez00zzast_nodez00,
				BGl_string1863z00zzreduce_typecz00);
		}

	}



/* &node-typec!1276 */
	obj_t BGl_z62nodezd2typecz121276za2zzreduce_typecz00(obj_t BgL_envz00_2177,
		obj_t BgL_nodez00_2178)
	{
		{	/* Reduce/typec.scm 69 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
				BGl_string1864z00zzreduce_typecz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2178)));
		}

	}



/* node-typec! */
	BgL_nodez00_bglt BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		{	/* Reduce/typec.scm 69 */
			{	/* Reduce/typec.scm 69 */
				obj_t BgL_method1277z00_1621;

				{	/* Reduce/typec.scm 69 */
					obj_t BgL_res1845z00_2121;

					{	/* Reduce/typec.scm 69 */
						long BgL_objzd2classzd2numz00_2086;

						{	/* Reduce/typec.scm 69 */
							long BgL_res1835z00_2089;

							BgL_res1835z00_2089 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_2086 = BgL_res1835z00_2089;
						}
						{	/* Reduce/typec.scm 69 */
							obj_t BgL_arg1813z00_2087;

							BgL_arg1813z00_2087 =
								PROCEDURE_REF(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
								(int) (((long) 1)));
							{	/* Reduce/typec.scm 69 */
								int BgL_offsetz00_2091;

								BgL_offsetz00_2091 = (int) (BgL_objzd2classzd2numz00_2086);
								{	/* Reduce/typec.scm 69 */
									long BgL_offsetz00_2092;

									BgL_offsetz00_2092 =
										((long) (BgL_offsetz00_2091) - OBJECT_TYPE);
									{	/* Reduce/typec.scm 69 */
										long BgL_modz00_2093;

										BgL_modz00_2093 =
											(BgL_offsetz00_2092 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/typec.scm 69 */
											long BgL_restz00_2095;

											BgL_restz00_2095 =
												(BgL_offsetz00_2092 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/typec.scm 69 */

												{	/* Reduce/typec.scm 69 */
													obj_t BgL_bucketz00_2097;

													BgL_bucketz00_2097 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2087), BgL_modz00_2093);
													BgL_res1845z00_2121 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2097), BgL_restz00_2095);
					}}}}}}}}
					BgL_method1277z00_1621 = BgL_res1845z00_2121;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1277z00_1621) (BgL_method1277z00_1621,
						((obj_t) BgL_nodez00_4), BEOA));
			}
		}

	}



/* &node-typec! */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12za2zzreduce_typecz00(obj_t
		BgL_envz00_2179, obj_t BgL_nodez00_2180)
	{
		{	/* Reduce/typec.scm 69 */
			return
				BGl_nodezd2typecz12zc0zzreduce_typecz00(
				((BgL_nodez00_bglt) BgL_nodez00_2180));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_atomz00zzast_nodez00, BGl_proc1865z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_kwotez00zzast_nodez00, BGl_proc1867z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00, BGl_varz00zzast_nodez00,
				BGl_proc1868z00zzreduce_typecz00, BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_closurez00zzast_nodez00, BGl_proc1869z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1870z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_syncz00zzast_nodez00, BGl_proc1871z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1872z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1873z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_externz00zzast_nodez00, BGl_proc1874z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_castz00zzast_nodez00, BGl_proc1875z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_setqz00zzast_nodez00, BGl_proc1876z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1877z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_failz00zzast_nodez00, BGl_proc1878z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_switchz00zzast_nodez00, BGl_proc1879z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1880z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1881z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1882z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1883z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1884z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_returnz00zzast_nodez00, BGl_proc1885z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1886z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1887z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1888z00zzreduce_typecz00,
				BGl_string1866z00zzreduce_typecz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00, BGl_appz00zzast_nodez00,
				BGl_proc1889z00zzreduce_typecz00, BGl_string1866z00zzreduce_typecz00);
		}

	}



/* &node-typec!-app1325 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2app1325z70zzreduce_typecz00(obj_t
		BgL_envz00_2205, obj_t BgL_nodez00_2206)
	{
		{	/* Reduce/typec.scm 302 */
			{
				obj_t BgL_typecz00_2286;
				BgL_typez00_bglt BgL_typeaz00_2287;
				BgL_appz00_bglt BgL_nodez00_2270;
				obj_t BgL_typecz00_2271;
				BgL_typez00_bglt BgL_typeaz00_2272;

				BGl_nodezd2typecza2z12z62zzreduce_typecz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2206)))->BgL_argsz00));
				{	/* Reduce/typec.scm 361 */
					BgL_variablez00_bglt BgL_varz00_2290;

					BgL_varz00_2290 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2206)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Reduce/typec.scm 361 */
						obj_t BgL_typecz00_2291;

						BgL_typecz00_2291 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2290))->
											BgL_valuez00))))->BgL_predicatezd2ofzd2);
						{	/* Reduce/typec.scm 362 */

							{	/* Reduce/typec.scm 364 */
								bool_t BgL_test1939z00_2555;

								{	/* Reduce/typec.scm 364 */
									bool_t BgL_test1940z00_2556;

									{	/* Reduce/typec.scm 364 */
										obj_t BgL_tmpz00_2557;

										BgL_tmpz00_2557 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2206)))->BgL_argsz00);
										BgL_test1940z00_2556 = PAIRP(BgL_tmpz00_2557);
									}
									if (BgL_test1940z00_2556)
										{	/* Reduce/typec.scm 364 */
											if (NULLP(CDR(
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2206)))->
															BgL_argsz00))))
												{	/* Reduce/typec.scm 365 */
													if (BGl_isazf3zf3zz__objectz00(BgL_typecz00_2291,
															BGl_typez00zztype_typez00))
														{	/* Reduce/typec.scm 367 */
															bool_t BgL_test1943z00_2568;

															{	/* Reduce/typec.scm 367 */
																obj_t BgL_arg1640z00_2292;

																BgL_arg1640z00_2292 =
																	CAR(
																	(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_2206)))->
																		BgL_argsz00));
																BgL_test1943z00_2568 =
																	BGl_sidezd2effectzf3z21zzeffect_effectz00((
																		(BgL_nodez00_bglt) BgL_arg1640z00_2292));
															}
															if (BgL_test1943z00_2568)
																{	/* Reduce/typec.scm 367 */
																	BgL_test1939z00_2555 = ((bool_t) 0);
																}
															else
																{	/* Reduce/typec.scm 367 */
																	BgL_test1939z00_2555 = ((bool_t) 1);
																}
														}
													else
														{	/* Reduce/typec.scm 366 */
															BgL_test1939z00_2555 = ((bool_t) 0);
														}
												}
											else
												{	/* Reduce/typec.scm 365 */
													BgL_test1939z00_2555 = ((bool_t) 0);
												}
										}
									else
										{	/* Reduce/typec.scm 364 */
											BgL_test1939z00_2555 = ((bool_t) 0);
										}
								}
								if (BgL_test1939z00_2555)
									{	/* Reduce/typec.scm 368 */
										BgL_typez00_bglt BgL_arg1624z00_2293;

										{	/* Reduce/typec.scm 368 */
											obj_t BgL_arg1626z00_2294;

											BgL_arg1626z00_2294 =
												CAR(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2206)))->
													BgL_argsz00));
											BgL_arg1624z00_2293 =
												BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
													BgL_arg1626z00_2294), ((bool_t) 0));
										}
										BgL_nodez00_2270 = ((BgL_appz00_bglt) BgL_nodez00_2206);
										BgL_typecz00_2271 = BgL_typecz00_2291;
										BgL_typeaz00_2272 = BgL_arg1624z00_2293;
									BgL_checkzd2typezd2_2268:
										{	/* Reduce/typec.scm 326 */
											BgL_typez00_bglt BgL_typez00_2273;

											BgL_typez00_2273 =
												BGl_getzd2typezd2zztype_typeofz00(
												((BgL_nodez00_bglt) BgL_nodez00_2270), ((bool_t) 0));
											if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(
													((BgL_typez00_bglt) BgL_typecz00_2271),
													BgL_typeaz00_2272))
												{	/* Reduce/typec.scm 328 */
													BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00
														=
														(((long) 1) +
														BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00);
													{	/* Reduce/typec.scm 332 */
														BgL_nodez00_bglt BgL_nodez00_2274;

														{	/* Reduce/typec.scm 332 */
															BgL_literalz00_bglt BgL_arg1684z00_2275;

															{	/* Reduce/typec.scm 332 */
																BgL_literalz00_bglt BgL_new1130z00_2276;

																{	/* Reduce/typec.scm 333 */
																	BgL_literalz00_bglt BgL_new1128z00_2277;

																	BgL_new1128z00_2277 =
																		((BgL_literalz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_literalz00_bgl))));
																	{	/* Reduce/typec.scm 333 */
																		long BgL_arg1685z00_2278;

																		{	/* Reduce/typec.scm 333 */
																			long BgL_res1851z00_2279;

																			BgL_res1851z00_2279 =
																				BGL_CLASS_INDEX
																				(BGl_literalz00zzast_nodez00);
																			BgL_arg1685z00_2278 = BgL_res1851z00_2279;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1128z00_2277),
																			BgL_arg1685z00_2278);
																	}
																	{	/* Reduce/typec.scm 333 */
																		BgL_objectz00_bglt BgL_tmpz00_2589;

																		BgL_tmpz00_2589 =
																			((BgL_objectz00_bglt)
																			BgL_new1128z00_2277);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2589,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1128z00_2277);
																	BgL_new1130z00_2276 = BgL_new1128z00_2277;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1130z00_2276)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_nodez00_2270)))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1130z00_2276)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_typez00_2273),
																	BUNSPEC);
																((((BgL_atomz00_bglt)
																			COBJECT(((BgL_atomz00_bglt)
																					BgL_new1130z00_2276)))->
																		BgL_valuez00) = ((obj_t) BTRUE), BUNSPEC);
																BgL_arg1684z00_2275 = BgL_new1130z00_2276;
															}
															BgL_nodez00_2274 =
																BGl_coercez12z12zzcoerce_coercez00(
																((BgL_nodez00_bglt) BgL_arg1684z00_2275),
																BUNSPEC, BgL_typez00_2273, ((bool_t) 0));
														}
														return BgL_nodez00_2274;
													}
												}
											else
												{	/* Reduce/typec.scm 340 */
													bool_t BgL_test1945z00_2603;

													BgL_typecz00_2286 = BgL_typecz00_2271;
													BgL_typeaz00_2287 = BgL_typeaz00_2272;
													if (
														(BgL_typecz00_2286 == ((obj_t) BgL_typeaz00_2287)))
														{	/* Reduce/typec.scm 306 */
															BgL_test1945z00_2603 = ((bool_t) 0);
														}
													else
														{	/* Reduce/typec.scm 306 */
															if (
																(((obj_t) BgL_typeaz00_2287) ==
																	BGl_za2_za2z00zztype_cachez00))
																{	/* Reduce/typec.scm 308 */
																	BgL_test1945z00_2603 = ((bool_t) 0);
																}
															else
																{	/* Reduce/typec.scm 310 */
																	bool_t BgL_test1948z00_2610;

																	if (BGl_bigloozd2typezf3z21zztype_typez00(
																			((BgL_typez00_bglt) BgL_typecz00_2286)))
																		{	/* Reduce/typec.scm 310 */
																			if (BGl_bigloozd2typezf3z21zztype_typez00
																				(BgL_typeaz00_2287))
																				{	/* Reduce/typec.scm 310 */
																					BgL_test1948z00_2610 = ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/typec.scm 310 */
																					BgL_test1948z00_2610 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Reduce/typec.scm 310 */
																			BgL_test1948z00_2610 = ((bool_t) 0);
																		}
																	if (BgL_test1948z00_2610)
																		{	/* Reduce/typec.scm 310 */
																			if (CBOOL
																				(BGl_findzd2coercerzd2zztype_coercionz00
																					(BgL_typeaz00_2287,
																						((BgL_typez00_bglt)
																							BgL_typecz00_2286))))
																				{	/* Reduce/typec.scm 311 */
																					BgL_test1945z00_2603 = ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/typec.scm 311 */
																					BgL_test1945z00_2603 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Reduce/typec.scm 312 */
																			bool_t BgL_test1952z00_2620;

																			if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(((BgL_typez00_bglt) BgL_typecz00_2286), BgL_typeaz00_2287))
																				{	/* Reduce/typec.scm 312 */
																					BgL_test1952z00_2620 = ((bool_t) 1);
																				}
																			else
																				{	/* Reduce/typec.scm 312 */
																					BgL_test1952z00_2620 =
																						BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
																						(BgL_typeaz00_2287,
																						((BgL_typez00_bglt)
																							BgL_typecz00_2286));
																				}
																			if (BgL_test1952z00_2620)
																				{	/* Reduce/typec.scm 312 */
																					BgL_test1945z00_2603 = ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/typec.scm 315 */
																					bool_t BgL_test1954z00_2626;

																					if (CBOOL
																						(BGl_findzd2coercerzd2zztype_coercionz00
																							(((BgL_typez00_bglt)
																									BgL_typecz00_2286),
																								BgL_typeaz00_2287)))
																						{	/* Reduce/typec.scm 315 */
																							BgL_test1954z00_2626 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Reduce/typec.scm 315 */
																							BgL_test1954z00_2626 =
																								CBOOL
																								(BGl_findzd2coercerzd2zztype_coercionz00
																								(BgL_typeaz00_2287,
																									((BgL_typez00_bglt)
																										BgL_typecz00_2286)));
																						}
																					if (BgL_test1954z00_2626)
																						{	/* Reduce/typec.scm 315 */
																							BgL_test1945z00_2603 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Reduce/typec.scm 317 */
																							bool_t BgL_test1956z00_2634;

																							if (BGl_foreignzd2typezf3z21zztype_typez00(((BgL_typez00_bglt) BgL_typecz00_2286)))
																								{	/* Reduce/typec.scm 317 */
																									BgL_test1956z00_2634 =
																										BGl_foreignzd2typezf3z21zztype_typez00
																										(BgL_typeaz00_2287);
																								}
																							else
																								{	/* Reduce/typec.scm 317 */
																									BgL_test1956z00_2634 =
																										((bool_t) 0);
																								}
																							if (BgL_test1956z00_2634)
																								{	/* Reduce/typec.scm 317 */
																									BgL_test1945z00_2603 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Reduce/typec.scm 319 */
																									bool_t BgL_test1958z00_2639;

																									if (
																										(BgL_typecz00_2286 ==
																											BGl_za2foreignza2z00zztype_cachez00))
																										{	/* Reduce/typec.scm 319 */
																											bool_t
																												BgL__ortest_1126z00_2288;
																											{	/* Reduce/typec.scm 319 */
																												bool_t
																													BgL_res1849z00_2289;
																												BgL_res1849z00_2289 =
																													BGl_isazf3zf3zz__objectz00
																													(((obj_t)
																														BgL_typeaz00_2287),
																													BGl_jclassz00zzobject_classz00);
																												BgL__ortest_1126z00_2288
																													= BgL_res1849z00_2289;
																											}
																											if (BgL__ortest_1126z00_2288)
																												{	/* Reduce/typec.scm 319 */
																													BgL_test1958z00_2639 =
																														BgL__ortest_1126z00_2288;
																												}
																											else
																												{	/* Reduce/typec.scm 319 */
																													BgL_test1958z00_2639 =
																														BGl_foreignzd2typezf3z21zztype_typez00
																														(BgL_typeaz00_2287);
																												}
																										}
																									else
																										{	/* Reduce/typec.scm 319 */
																											BgL_test1958z00_2639 =
																												((bool_t) 0);
																										}
																									if (BgL_test1958z00_2639)
																										{	/* Reduce/typec.scm 319 */
																											BgL_test1945z00_2603 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Reduce/typec.scm 319 */
																											BgL_test1945z00_2603 =
																												((bool_t) 1);
																										}
																								}
																						}
																				}
																		}
																}
														}
													if (BgL_test1945z00_2603)
														{	/* Reduce/typec.scm 340 */
															BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00);
															{	/* Reduce/typec.scm 347 */
																BgL_nodez00_bglt BgL_nodez00_2280;

																{	/* Reduce/typec.scm 347 */
																	BgL_literalz00_bglt BgL_arg1687z00_2281;

																	{	/* Reduce/typec.scm 347 */
																		BgL_literalz00_bglt BgL_new1133z00_2282;

																		{	/* Reduce/typec.scm 348 */
																			BgL_literalz00_bglt BgL_new1131z00_2283;

																			BgL_new1131z00_2283 =
																				((BgL_literalz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_literalz00_bgl))));
																			{	/* Reduce/typec.scm 348 */
																				long BgL_arg1688z00_2284;

																				{	/* Reduce/typec.scm 348 */
																					long BgL_res1853z00_2285;

																					BgL_res1853z00_2285 =
																						BGL_CLASS_INDEX
																						(BGl_literalz00zzast_nodez00);
																					BgL_arg1688z00_2284 =
																						BgL_res1853z00_2285;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1131z00_2283),
																					BgL_arg1688z00_2284);
																			}
																			{	/* Reduce/typec.scm 348 */
																				BgL_objectz00_bglt BgL_tmpz00_2651;

																				BgL_tmpz00_2651 =
																					((BgL_objectz00_bglt)
																					BgL_new1131z00_2283);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2651,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1131z00_2283);
																			BgL_new1133z00_2282 = BgL_new1131z00_2283;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1133z00_2282)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_nodez00_2270)))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1133z00_2282)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_typez00_2273),
																			BUNSPEC);
																		((((BgL_atomz00_bglt)
																					COBJECT(((BgL_atomz00_bglt)
																							BgL_new1133z00_2282)))->
																				BgL_valuez00) =
																			((obj_t) BFALSE), BUNSPEC);
																		BgL_arg1687z00_2281 = BgL_new1133z00_2282;
																	}
																	BgL_nodez00_2280 =
																		BGl_coercez12z12zzcoerce_coercez00(
																		((BgL_nodez00_bglt) BgL_arg1687z00_2281),
																		BUNSPEC, BgL_typez00_2273, ((bool_t) 0));
																}
																return BgL_nodez00_2280;
															}
														}
													else
														{	/* Reduce/typec.scm 340 */
															BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00);
															return ((BgL_nodez00_bglt) BgL_nodez00_2270);
														}
												}
										}
									}
								else
									{	/* Reduce/typec.scm 369 */
										obj_t BgL_g1135z00_2295;

										BgL_g1135z00_2295 =
											BGl_isazd2ofzd2zztype_miscz00(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_2206)));
										if (CBOOL(BgL_g1135z00_2295))
											{	/* Reduce/typec.scm 372 */
												BgL_typez00_bglt BgL_arg1631z00_2296;

												{	/* Reduce/typec.scm 372 */
													obj_t BgL_arg1634z00_2297;

													BgL_arg1634z00_2297 =
														CAR(
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2206)))->
															BgL_argsz00));
													BgL_arg1631z00_2296 =
														BGl_getzd2typezd2zztype_typeofz00((
															(BgL_nodez00_bglt) BgL_arg1634z00_2297),
														((bool_t) 0));
												}
												{
													BgL_typez00_bglt BgL_typeaz00_2681;
													obj_t BgL_typecz00_2680;
													BgL_appz00_bglt BgL_nodez00_2678;

													BgL_nodez00_2678 =
														((BgL_appz00_bglt) BgL_nodez00_2206);
													BgL_typecz00_2680 = BgL_g1135z00_2295;
													BgL_typeaz00_2681 = BgL_arg1631z00_2296;
													BgL_typeaz00_2272 = BgL_typeaz00_2681;
													BgL_typecz00_2271 = BgL_typecz00_2680;
													BgL_nodez00_2270 = BgL_nodez00_2678;
													goto BgL_checkzd2typezd2_2268;
												}
											}
										else
											{	/* Reduce/typec.scm 369 */
												return
													((BgL_nodez00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_2206));
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &node-typec!-box-ref1323 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2ref1323za2zzreduce_typecz00(obj_t
		BgL_envz00_2207, obj_t BgL_nodez00_2208)
	{
		{	/* Reduce/typec.scm 278 */
			{
				BgL_varz00_bglt BgL_auxz00_2684;

				{	/* Reduce/typec.scm 280 */
					BgL_varz00_bglt BgL_arg1578z00_2299;

					BgL_arg1578z00_2299 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2208)))->BgL_varz00);
					BgL_auxz00_2684 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_typecz00(
							((BgL_nodez00_bglt) BgL_arg1578z00_2299)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2208)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2684), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2208));
		}

	}



/* &node-typec!-box-set!1321 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2setz121321zb0zzreduce_typecz00(obj_t
		BgL_envz00_2209, obj_t BgL_nodez00_2210)
	{
		{	/* Reduce/typec.scm 269 */
			{
				BgL_varz00_bglt BgL_auxz00_2694;

				{	/* Reduce/typec.scm 271 */
					BgL_varz00_bglt BgL_arg1573z00_2301;

					BgL_arg1573z00_2301 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2210)))->BgL_varz00);
					BgL_auxz00_2694 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_typecz00(
							((BgL_nodez00_bglt) BgL_arg1573z00_2301)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2210)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2694), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2702;

				{	/* Reduce/typec.scm 272 */
					BgL_nodez00_bglt BgL_arg1575z00_2302;

					BgL_arg1575z00_2302 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2210)))->BgL_valuez00);
					BgL_auxz00_2702 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1575z00_2302);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2210)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2702), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2210));
		}

	}



/* &node-typec!-make-box1319 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2makezd2box1319za2zzreduce_typecz00(obj_t
		BgL_envz00_2211, obj_t BgL_nodez00_2212)
	{
		{	/* Reduce/typec.scm 261 */
			{
				BgL_nodez00_bglt BgL_auxz00_2710;

				{	/* Reduce/typec.scm 263 */
					BgL_nodez00_bglt BgL_arg1565z00_2304;

					BgL_arg1565z00_2304 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2212)))->BgL_valuez00);
					BgL_auxz00_2710 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1565z00_2304);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2212)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2710), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2212));
		}

	}



/* &node-typec!-return1317 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2return1317z70zzreduce_typecz00(obj_t
		BgL_envz00_2213, obj_t BgL_nodez00_2214)
	{
		{	/* Reduce/typec.scm 253 */
			{
				BgL_nodez00_bglt BgL_auxz00_2718;

				{	/* Reduce/typec.scm 255 */
					BgL_nodez00_bglt BgL_arg1564z00_2306;

					BgL_arg1564z00_2306 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2214)))->BgL_valuez00);
					BgL_auxz00_2718 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1564z00_2306);
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2214)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2718), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nodez00_2214));
		}

	}



/* &node-typec!-retblock1315 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2retblock1315z70zzreduce_typecz00(obj_t
		BgL_envz00_2215, obj_t BgL_nodez00_2216)
	{
		{	/* Reduce/typec.scm 245 */
			{
				BgL_nodez00_bglt BgL_auxz00_2726;

				{	/* Reduce/typec.scm 247 */
					BgL_nodez00_bglt BgL_arg1561z00_2308;

					BgL_arg1561z00_2308 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2216)))->BgL_bodyz00);
					BgL_auxz00_2726 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1561z00_2308);
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2216)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2726), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_2216));
		}

	}



/* &node-typec!-jump-ex-1313 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21313z70zzreduce_typecz00(obj_t
		BgL_envz00_2217, obj_t BgL_nodez00_2218)
	{
		{	/* Reduce/typec.scm 236 */
			{
				BgL_nodez00_bglt BgL_auxz00_2734;

				{	/* Reduce/typec.scm 238 */
					BgL_nodez00_bglt BgL_arg1552z00_2310;

					BgL_arg1552z00_2310 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2218)))->BgL_exitz00);
					BgL_auxz00_2734 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1552z00_2310);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2218)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2734), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2740;

				{	/* Reduce/typec.scm 239 */
					BgL_nodez00_bglt BgL_arg1558z00_2311;

					BgL_arg1558z00_2311 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2218)))->
						BgL_valuez00);
					BgL_auxz00_2740 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1558z00_2311);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2218)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2740), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2218));
		}

	}



/* &node-typec!-set-ex-i1311 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1311z70zzreduce_typecz00(obj_t
		BgL_envz00_2219, obj_t BgL_nodez00_2220)
	{
		{	/* Reduce/typec.scm 227 */
			{
				BgL_nodez00_bglt BgL_auxz00_2748;

				{	/* Reduce/typec.scm 229 */
					BgL_nodez00_bglt BgL_arg1537z00_2313;

					BgL_arg1537z00_2313 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2220)))->BgL_bodyz00);
					BgL_auxz00_2748 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1537z00_2313);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2220)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2748), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2754;

				{	/* Reduce/typec.scm 230 */
					BgL_varz00_bglt BgL_arg1540z00_2314;

					BgL_arg1540z00_2314 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2220)))->BgL_varz00);
					BgL_auxz00_2754 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_typecz00(
							((BgL_nodez00_bglt) BgL_arg1540z00_2314)));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2220)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2754), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2220));
		}

	}



/* &node-typec!-let-var1309 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2var1309za2zzreduce_typecz00(obj_t
		BgL_envz00_2221, obj_t BgL_nodez00_2222)
	{
		{	/* Reduce/typec.scm 216 */
			{	/* Reduce/typec.scm 218 */
				obj_t BgL_g1275z00_2316;

				BgL_g1275z00_2316 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2222)))->BgL_bindingsz00);
				{
					obj_t BgL_l1273z00_2318;

					BgL_l1273z00_2318 = BgL_g1275z00_2316;
				BgL_zc3z04anonymousza31498ze3z87_2317:
					if (PAIRP(BgL_l1273z00_2318))
						{	/* Reduce/typec.scm 218 */
							{	/* Reduce/typec.scm 219 */
								obj_t BgL_bindingz00_2319;

								BgL_bindingz00_2319 = CAR(BgL_l1273z00_2318);
								{	/* Reduce/typec.scm 219 */
									BgL_nodez00_bglt BgL_arg1518z00_2320;

									{	/* Reduce/typec.scm 219 */
										obj_t BgL_arg1521z00_2321;

										BgL_arg1521z00_2321 = CDR(((obj_t) BgL_bindingz00_2319));
										BgL_arg1518z00_2320 =
											BGl_nodezd2typecz12zc0zzreduce_typecz00(
											((BgL_nodez00_bglt) BgL_arg1521z00_2321));
									}
									{	/* Reduce/typec.scm 219 */
										obj_t BgL_auxz00_2775;
										obj_t BgL_tmpz00_2773;

										BgL_auxz00_2775 = ((obj_t) BgL_arg1518z00_2320);
										BgL_tmpz00_2773 = ((obj_t) BgL_bindingz00_2319);
										SET_CDR(BgL_tmpz00_2773, BgL_auxz00_2775);
									}
								}
							}
							{
								obj_t BgL_l1273z00_2778;

								BgL_l1273z00_2778 = CDR(BgL_l1273z00_2318);
								BgL_l1273z00_2318 = BgL_l1273z00_2778;
								goto BgL_zc3z04anonymousza31498ze3z87_2317;
							}
						}
					else
						{	/* Reduce/typec.scm 218 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2780;

				{	/* Reduce/typec.scm 221 */
					BgL_nodez00_bglt BgL_arg1536z00_2322;

					BgL_arg1536z00_2322 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2222)))->BgL_bodyz00);
					BgL_auxz00_2780 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1536z00_2322);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2222)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2780), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2222));
		}

	}



/* &node-typec!-let-fun1307 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2fun1307za2zzreduce_typecz00(obj_t
		BgL_envz00_2223, obj_t BgL_nodez00_2224)
	{
		{	/* Reduce/typec.scm 204 */
			{	/* Reduce/typec.scm 206 */
				obj_t BgL_g1272z00_2324;

				BgL_g1272z00_2324 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2224)))->BgL_localsz00);
				{
					obj_t BgL_l1270z00_2326;

					BgL_l1270z00_2326 = BgL_g1272z00_2324;
				BgL_zc3z04anonymousza31478ze3z87_2325:
					if (PAIRP(BgL_l1270z00_2326))
						{	/* Reduce/typec.scm 206 */
							{	/* Reduce/typec.scm 207 */
								obj_t BgL_localz00_2327;

								BgL_localz00_2327 = CAR(BgL_l1270z00_2326);
								{	/* Reduce/typec.scm 207 */
									BgL_valuez00_bglt BgL_funz00_2328;

									BgL_funz00_2328 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2327))))->
										BgL_valuez00);
									{	/* Reduce/typec.scm 208 */
										BgL_nodez00_bglt BgL_arg1489z00_2329;

										{	/* Reduce/typec.scm 208 */
											obj_t BgL_arg1493z00_2330;

											BgL_arg1493z00_2330 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2328)))->
												BgL_bodyz00);
											BgL_arg1489z00_2329 =
												BGl_nodezd2typecz12zc0zzreduce_typecz00((
													(BgL_nodez00_bglt) BgL_arg1493z00_2330));
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2328)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1489z00_2329)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1270z00_2803;

								BgL_l1270z00_2803 = CDR(BgL_l1270z00_2326);
								BgL_l1270z00_2326 = BgL_l1270z00_2803;
								goto BgL_zc3z04anonymousza31478ze3z87_2325;
							}
						}
					else
						{	/* Reduce/typec.scm 206 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2805;

				{	/* Reduce/typec.scm 210 */
					BgL_nodez00_bglt BgL_arg1497z00_2331;

					BgL_arg1497z00_2331 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2224)))->BgL_bodyz00);
					BgL_auxz00_2805 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1497z00_2331);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2224)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2805), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2224));
		}

	}



/* &node-typec!-switch1305 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2switch1305z70zzreduce_typecz00(obj_t
		BgL_envz00_2225, obj_t BgL_nodez00_2226)
	{
		{	/* Reduce/typec.scm 193 */
			{
				BgL_nodez00_bglt BgL_auxz00_2813;

				{	/* Reduce/typec.scm 195 */
					BgL_nodez00_bglt BgL_arg1462z00_2333;

					BgL_arg1462z00_2333 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2226)))->BgL_testz00);
					BgL_auxz00_2813 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1462z00_2333);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2226)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2813), BUNSPEC);
			}
			{	/* Reduce/typec.scm 196 */
				obj_t BgL_g1269z00_2334;

				BgL_g1269z00_2334 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2226)))->BgL_clausesz00);
				{
					obj_t BgL_l1267z00_2336;

					BgL_l1267z00_2336 = BgL_g1269z00_2334;
				BgL_zc3z04anonymousza31463ze3z87_2335:
					if (PAIRP(BgL_l1267z00_2336))
						{	/* Reduce/typec.scm 196 */
							{	/* Reduce/typec.scm 197 */
								obj_t BgL_clausez00_2337;

								BgL_clausez00_2337 = CAR(BgL_l1267z00_2336);
								{	/* Reduce/typec.scm 197 */
									BgL_nodez00_bglt BgL_arg1474z00_2338;

									{	/* Reduce/typec.scm 197 */
										obj_t BgL_arg1476z00_2339;

										BgL_arg1476z00_2339 = CDR(((obj_t) BgL_clausez00_2337));
										BgL_arg1474z00_2338 =
											BGl_nodezd2typecz12zc0zzreduce_typecz00(
											((BgL_nodez00_bglt) BgL_arg1476z00_2339));
									}
									{	/* Reduce/typec.scm 197 */
										obj_t BgL_auxz00_2830;
										obj_t BgL_tmpz00_2828;

										BgL_auxz00_2830 = ((obj_t) BgL_arg1474z00_2338);
										BgL_tmpz00_2828 = ((obj_t) BgL_clausez00_2337);
										SET_CDR(BgL_tmpz00_2828, BgL_auxz00_2830);
									}
								}
							}
							{
								obj_t BgL_l1267z00_2833;

								BgL_l1267z00_2833 = CDR(BgL_l1267z00_2336);
								BgL_l1267z00_2336 = BgL_l1267z00_2833;
								goto BgL_zc3z04anonymousza31463ze3z87_2335;
							}
						}
					else
						{	/* Reduce/typec.scm 196 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2226));
		}

	}



/* &node-typec!-fail1303 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2fail1303z70zzreduce_typecz00(obj_t
		BgL_envz00_2227, obj_t BgL_nodez00_2228)
	{
		{	/* Reduce/typec.scm 183 */
			{
				BgL_nodez00_bglt BgL_auxz00_2837;

				{	/* Reduce/typec.scm 185 */
					BgL_nodez00_bglt BgL_arg1448z00_2341;

					BgL_arg1448z00_2341 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_procz00);
					BgL_auxz00_2837 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1448z00_2341);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2837), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2843;

				{	/* Reduce/typec.scm 186 */
					BgL_nodez00_bglt BgL_arg1449z00_2342;

					BgL_arg1449z00_2342 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_msgz00);
					BgL_auxz00_2843 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1449z00_2342);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2843), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2849;

				{	/* Reduce/typec.scm 187 */
					BgL_nodez00_bglt BgL_arg1461z00_2343;

					BgL_arg1461z00_2343 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_objz00);
					BgL_auxz00_2849 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1461z00_2343);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2228)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2849), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2228));
		}

	}



/* &node-typec!-conditio1301 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2conditio1301z70zzreduce_typecz00(obj_t
		BgL_envz00_2229, obj_t BgL_nodez00_2230)
	{
		{	/* Reduce/typec.scm 159 */
			{
				BgL_nodez00_bglt BgL_auxz00_2857;

				{	/* Reduce/typec.scm 161 */
					BgL_nodez00_bglt BgL_arg1417z00_2345;

					BgL_arg1417z00_2345 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_testz00);
					BgL_auxz00_2857 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1417z00_2345);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2857), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2863;

				{	/* Reduce/typec.scm 162 */
					BgL_nodez00_bglt BgL_arg1418z00_2346;

					BgL_arg1418z00_2346 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_truez00);
					BgL_auxz00_2863 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1418z00_2346);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2863), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2869;

				{	/* Reduce/typec.scm 163 */
					BgL_nodez00_bglt BgL_arg1421z00_2347;

					BgL_arg1421z00_2347 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_falsez00);
					BgL_auxz00_2869 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1421z00_2347);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2869), BUNSPEC);
			}
			if (BGl_pairzd2ofzd2pairzd2nilzf3z21zzreduce_typecz00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_testz00)))
				{	/* Reduce/typec.scm 164 */
					{	/* Reduce/typec.scm 171 */
						BgL_nodez00_bglt BgL_arg1441z00_2348;

						BgL_arg1441z00_2348 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_testz00);
						{	/* Reduce/typec.scm 392 */
							BgL_varz00_bglt BgL_i1142z00_2349;

							BgL_i1142z00_2349 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_arg1441z00_2348)))->BgL_funz00);
							((((BgL_varz00_bglt) COBJECT(BgL_i1142z00_2349))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BGl_za2nullzf3za2zf3zzreduce_typecz00)), BUNSPEC);
						}
					}
					{	/* Reduce/typec.scm 172 */
						BgL_nodez00_bglt BgL_otruez00_2350;

						BgL_otruez00_2350 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->BgL_truez00);
						((((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->
								BgL_truez00) =
							((BgL_nodez00_bglt) (((BgL_conditionalz00_bglt)
										COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2230)))->
									BgL_falsez00)), BUNSPEC);
						((((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
											BgL_nodez00_2230)))->BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_otruez00_2350), BUNSPEC);
						BNIL;
					}
				}
			else
				{	/* Reduce/typec.scm 164 */
					BFALSE;
				}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2230));
		}

	}



/* &node-typec!-setq1299 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2setq1299z70zzreduce_typecz00(obj_t
		BgL_envz00_2231, obj_t BgL_nodez00_2232)
	{
		{	/* Reduce/typec.scm 150 */
			{
				BgL_nodez00_bglt BgL_auxz00_2895;

				{	/* Reduce/typec.scm 152 */
					BgL_nodez00_bglt BgL_arg1394z00_2352;

					BgL_arg1394z00_2352 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2232)))->BgL_valuez00);
					BgL_auxz00_2895 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1394z00_2352);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2232)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2895), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2901;

				{	/* Reduce/typec.scm 153 */
					BgL_varz00_bglt BgL_arg1396z00_2353;

					BgL_arg1396z00_2353 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2232)))->BgL_varz00);
					BgL_auxz00_2901 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_typecz00(
							((BgL_nodez00_bglt) BgL_arg1396z00_2353)));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2232)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2901), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2232));
		}

	}



/* &node-typec!-cast1297 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2cast1297z70zzreduce_typecz00(obj_t
		BgL_envz00_2233, obj_t BgL_nodez00_2234)
	{
		{	/* Reduce/typec.scm 142 */
			BGl_nodezd2typecz12zc0zzreduce_typecz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2234)))->BgL_argz00));
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2234));
		}

	}



/* &node-typec!-extern1295 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2extern1295z70zzreduce_typecz00(obj_t
		BgL_envz00_2235, obj_t BgL_nodez00_2236)
	{
		{	/* Reduce/typec.scm 134 */
			BGl_nodezd2typecza2z12z62zzreduce_typecz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2236)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2236));
		}

	}



/* &node-typec!-funcall1293 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2funcall1293z70zzreduce_typecz00(obj_t
		BgL_envz00_2237, obj_t BgL_nodez00_2238)
	{
		{	/* Reduce/typec.scm 125 */
			{
				BgL_nodez00_bglt BgL_auxz00_2921;

				{	/* Reduce/typec.scm 127 */
					BgL_nodez00_bglt BgL_arg1385z00_2357;

					BgL_arg1385z00_2357 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2238)))->BgL_funz00);
					BgL_auxz00_2921 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1385z00_2357);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2238)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2921), BUNSPEC);
			}
			BGl_nodezd2typecza2z12z62zzreduce_typecz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2238)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2238));
		}

	}



/* &node-typec!-app-ly1291 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2appzd2ly1291za2zzreduce_typecz00(obj_t
		BgL_envz00_2239, obj_t BgL_nodez00_2240)
	{
		{	/* Reduce/typec.scm 116 */
			{
				BgL_nodez00_bglt BgL_auxz00_2932;

				{	/* Reduce/typec.scm 118 */
					BgL_nodez00_bglt BgL_arg1383z00_2359;

					BgL_arg1383z00_2359 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2240)))->BgL_funz00);
					BgL_auxz00_2932 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1383z00_2359);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2240)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2932), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2938;

				{	/* Reduce/typec.scm 119 */
					BgL_nodez00_bglt BgL_arg1384z00_2360;

					BgL_arg1384z00_2360 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2240)))->BgL_argz00);
					BgL_auxz00_2938 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1384z00_2360);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2240)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2938), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2240));
		}

	}



/* &node-typec!-sync1289 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2sync1289z70zzreduce_typecz00(obj_t
		BgL_envz00_2241, obj_t BgL_nodez00_2242)
	{
		{	/* Reduce/typec.scm 106 */
			{
				BgL_nodez00_bglt BgL_auxz00_2946;

				{	/* Reduce/typec.scm 108 */
					BgL_nodez00_bglt BgL_arg1372z00_2362;

					BgL_arg1372z00_2362 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_mutexz00);
					BgL_auxz00_2946 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1372z00_2362);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2946), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2952;

				{	/* Reduce/typec.scm 109 */
					BgL_nodez00_bglt BgL_arg1381z00_2363;

					BgL_arg1381z00_2363 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_prelockz00);
					BgL_auxz00_2952 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1381z00_2363);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2952), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2958;

				{	/* Reduce/typec.scm 110 */
					BgL_nodez00_bglt BgL_arg1382z00_2364;

					BgL_arg1382z00_2364 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_bodyz00);
					BgL_auxz00_2958 =
						BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_arg1382z00_2364);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2242)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2958), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2242));
		}

	}



/* &node-typec!-sequence1287 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sequence1287z70zzreduce_typecz00(obj_t
		BgL_envz00_2243, obj_t BgL_nodez00_2244)
	{
		{	/* Reduce/typec.scm 98 */
			BGl_nodezd2typecza2z12z62zzreduce_typecz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2244)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2244));
		}

	}



/* &node-typec!-closure1285 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2closure1285z70zzreduce_typecz00(obj_t
		BgL_envz00_2245, obj_t BgL_nodez00_2246)
	{
		{	/* Reduce/typec.scm 92 */
			return ((BgL_nodez00_bglt) ((BgL_closurez00_bglt) BgL_nodez00_2246));
		}

	}



/* &node-typec!-var1283 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2var1283z70zzreduce_typecz00(obj_t
		BgL_envz00_2247, obj_t BgL_nodez00_2248)
	{
		{	/* Reduce/typec.scm 86 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2248));
		}

	}



/* &node-typec!-kwote1281 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2kwote1281z70zzreduce_typecz00(obj_t
		BgL_envz00_2249, obj_t BgL_nodez00_2250)
	{
		{	/* Reduce/typec.scm 80 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2250));
		}

	}



/* &node-typec!-atom1279 */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12zd2atom1279z70zzreduce_typecz00(obj_t
		BgL_envz00_2251, obj_t BgL_nodez00_2252)
	{
		{	/* Reduce/typec.scm 74 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2252));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_typecz00()
	{
		{	/* Reduce/typec.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1890z00zzreduce_typecz00));
		}

	}

#ifdef __cplusplus
}
#endif
