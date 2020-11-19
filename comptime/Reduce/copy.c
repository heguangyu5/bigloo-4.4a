/*===========================================================================*/
/*   (Reduce/copy.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/copy.scm) */
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

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_classz00;
	}                    *BgL_instanceofz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                     *BgL_castzd2nullzd2_bglt;

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


	static obj_t BGl_z62reducezd2copyz12za2zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2boxzd2ref1345za2zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2sync1290z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2closure1286z70zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_copyz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62copyablezf3zd2fail1328z43zzreduce_copyz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_copyz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2return1339z70zzreduce_copyz00(obj_t, obj_t);
	static bool_t
		BGl_cellzd2typezd2lesszd2specificzf3z21zzreduce_copyz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2letzd2fun1308za2zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62copyablezf3z91zzreduce_copyz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2setzd2exzd2it1332z70zzreduce_copyz00(obj_t, obj_t);
	static long BGl_za2copyzd2removedza2zd2zzreduce_copyz00;
	static obj_t BGl_copyablezf3zf3zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_copyz00();
	static obj_t BGl_z62copyablezf3zd2vlength1318z43zzreduce_copyz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62copyablezf3zd2instanceof1324z43zzreduce_copyz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2copyz121277za2zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2fail1304z70zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2var1284z70zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_nodez00_bglt);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62nodezd2copyz12za2zzreduce_copyz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2app1347z70zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_z62copyablezf3zd2castzd2null1322z91zzreduce_copyz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2cast1298z70zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2letzd2var1330za2zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_copyz00 = BUNSPEC;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_z62copyablezf3zd2var1314z43zzreduce_copyz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2funcall1294z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_copyz00();
	static obj_t BGl_z62copyablezf3zd2conditiona1326z43zzreduce_copyz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62copyablezf3zd2cast1320z43zzreduce_copyz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_copyz00();
	static obj_t BGl_z62copyablezf31309z91zzreduce_copyz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2condition1302z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2kwote1282z70zzreduce_copyz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2switch1306z70zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2boxzd2setz121343zb0zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2makezd2box1341za2zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2appzd2ly1292za2zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2atom1280z70zzreduce_copyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2jumpzd2exzd2i1335z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2extern1296z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzreduce_copyz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_copyz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_copyz00();
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2setq1300z70zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_nodezd2copyza2z12z62zzreduce_copyz00(obj_t);
	static obj_t BGl_z62copyablezf3zd2atom1312z43zzreduce_copyz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2sequence1288z70zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62copyablezf3zd2sequence1316z43zzreduce_copyz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2retblock1337z70zzreduce_copyz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1917za7,
		BGl_z62copyablezf3zd2instanceof1324z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1918za7,
		BGl_z62copyablezf3zd2conditiona1326z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1919za7,
		BGl_z62copyablezf3zd2fail1328z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711920za7,
		BGl_z62nodezd2copyz12zd2letzd2var1330za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711921za7,
		BGl_z62nodezd2copyz12zd2setzd2exzd2it1332z70zzreduce_copyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711922za7,
		BGl_z62nodezd2copyz12zd2jumpzd2exzd2i1335z70zzreduce_copyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711923za7,
		BGl_z62nodezd2copyz12zd2retblock1337z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711924za7,
		BGl_z62nodezd2copyz12zd2return1339z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711925za7,
		BGl_z62nodezd2copyz12zd2makezd2box1341za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711926za7,
		BGl_z62nodezd2copyz12zd2boxzd2setz121343zb0zzreduce_copyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711927za7,
		BGl_z62nodezd2copyz12zd2boxzd2ref1345za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711928za7,
		BGl_z62nodezd2copyz12zd2app1347z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1870z00zzreduce_copyz00,
		BgL_bgl_string1870za700za7za7r1929za7, "      copy propagation       ", 29);
	      DEFINE_STRING(BGl_string1871z00zzreduce_copyz00,
		BgL_bgl_string1871za700za7za7r1930za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string1873z00zzreduce_copyz00,
		BgL_bgl_string1873za700za7za7r1931za7, "node-copy!1277", 14);
	      DEFINE_STRING(BGl_string1875z00zzreduce_copyz00,
		BgL_bgl_string1875za700za7za7r1932za7, "copyable?1309", 13);
	      DEFINE_STRING(BGl_string1876z00zzreduce_copyz00,
		BgL_bgl_string1876za700za7za7r1933za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1878z00zzreduce_copyz00,
		BgL_bgl_string1878za700za7za7r1934za7, "node-copy!", 10);
	      DEFINE_STRING(BGl_string1894z00zzreduce_copyz00,
		BgL_bgl_string1894za700za7za7r1935za7, "copyable?", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2copyz12zd2envz12zzreduce_copyz00,
		BgL_bgl_za762reduceza7d2copy1936z00,
		BGl_z62reducezd2copyz12za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1912z00zzreduce_copyz00,
		BgL_bgl_string1912za700za7za7r1937za7, "reduce_copy", 11);
	      DEFINE_STRING(BGl_string1913z00zzreduce_copyz00,
		BgL_bgl_string1913za700za7za7r1938za7, "read node-copy!1277 done ", 25);
	      DEFINE_STATIC_BGL_GENERIC(BGl_copyablezf3zd2envz21zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za791939za7,
		BGl_z62copyablezf3z91zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711940za7,
		BGl_z62nodezd2copyz121277za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3131941z00,
		BGl_z62copyablezf31309z91zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711942za7,
		BGl_z62nodezd2copyz12zd2atom1280z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711943za7,
		BGl_z62nodezd2copyz12zd2kwote1282z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711944za7,
		BGl_z62nodezd2copyz12zd2var1284z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711945za7,
		BGl_z62nodezd2copyz12zd2closure1286z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711946za7,
		BGl_z62nodezd2copyz12zd2sequence1288z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711947za7,
		BGl_z62nodezd2copyz12zd2sync1290z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711948za7,
		BGl_z62nodezd2copyz12zd2appzd2ly1292za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711949za7,
		BGl_z62nodezd2copyz12zd2funcall1294z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711950za7,
		BGl_z62nodezd2copyz12zd2extern1296z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711951za7,
		BGl_z62nodezd2copyz12zd2cast1298z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711952za7,
		BGl_z62nodezd2copyz12zd2setq1300z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711953za7,
		BGl_z62nodezd2copyz12zd2condition1302z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711954za7,
		BGl_z62nodezd2copyz12zd2fail1304z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711955za7,
		BGl_z62nodezd2copyz12zd2switch1306z70zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711956za7,
		BGl_z62nodezd2copyz12zd2letzd2fun1308za2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1957za7,
		BGl_z62copyablezf3zd2atom1312z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1958za7,
		BGl_z62copyablezf3zd2var1314z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1959za7,
		BGl_z62copyablezf3zd2sequence1316z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1960za7,
		BGl_z62copyablezf3zd2vlength1318z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1961za7,
		BGl_z62copyablezf3zd2cast1320z43zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzreduce_copyz00,
		BgL_bgl_za762copyableza7f3za7d1962za7,
		BGl_z62copyablezf3zd2castzd2null1322z91zzreduce_copyz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
		BgL_bgl_za762nodeza7d2copyza711963za7,
		BGl_z62nodezd2copyz12za2zzreduce_copyz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_copyz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long
		BgL_checksumz00_2316, char *BgL_fromz00_2317)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_copyz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_copyz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_copyz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_copyz00();
					BGl_cnstzd2initzd2zzreduce_copyz00();
					BGl_importedzd2moduleszd2initz00zzreduce_copyz00();
					BGl_genericzd2initzd2zzreduce_copyz00();
					BGl_methodzd2initzd2zzreduce_copyz00();
					return BGl_toplevelzd2initzd2zzreduce_copyz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_copy");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_copy");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_copy");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_copy");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_copy");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			{	/* Reduce/copy.scm 15 */
				obj_t BgL_cportz00_2170;

				{	/* Reduce/copy.scm 15 */
					obj_t BgL_stringz00_2178;

					BgL_stringz00_2178 = BGl_string1913z00zzreduce_copyz00;
					{	/* Reduce/copy.scm 15 */
						obj_t BgL_startz00_2179;

						BgL_startz00_2179 = BINT(((long) 0));
						{	/* Reduce/copy.scm 15 */
							obj_t BgL_endz00_2180;

							BgL_endz00_2180 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2178)));
							{	/* Reduce/copy.scm 15 */

								BgL_cportz00_2170 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2178, BgL_startz00_2179, BgL_endz00_2180);
				}}}}
				{
					long BgL_iz00_2171;

					BgL_iz00_2171 = ((long) 2);
				BgL_loopz00_2172:
					if ((BgL_iz00_2171 == ((long) -1)))
						{	/* Reduce/copy.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/copy.scm 15 */
							{	/* Reduce/copy.scm 15 */
								obj_t BgL_arg1915z00_2174;

								{	/* Reduce/copy.scm 15 */

									{	/* Reduce/copy.scm 15 */
										obj_t BgL_locationz00_2176;

										BgL_locationz00_2176 = BBOOL(((bool_t) 0));
										{	/* Reduce/copy.scm 15 */

											BgL_arg1915z00_2174 =
												BGl_readz00zz__readerz00(BgL_cportz00_2170,
												BgL_locationz00_2176);
										}
									}
								}
								{	/* Reduce/copy.scm 15 */
									int BgL_tmpz00_2346;

									BgL_tmpz00_2346 = (int) (BgL_iz00_2171);
									CNST_TABLE_SET(BgL_tmpz00_2346, BgL_arg1915z00_2174);
							}}
							{	/* Reduce/copy.scm 15 */
								int BgL_auxz00_2177;

								BgL_auxz00_2177 = (int) ((BgL_iz00_2171 - ((long) 1)));
								{
									long BgL_iz00_2351;

									BgL_iz00_2351 = (long) (BgL_auxz00_2177);
									BgL_iz00_2171 = BgL_iz00_2351;
									goto BgL_loopz00_2172;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			BGl_za2copyzd2removedza2zd2zzreduce_copyz00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* reduce-copy! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/copy.scm 35 */
			{	/* Reduce/copy.scm 36 */
				obj_t BgL_list1353z00_1373;

				BgL_list1353z00_1373 =
					MAKE_YOUNG_PAIR(BGl_string1870z00zzreduce_copyz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1353z00_1373);
			}
			BGl_za2copyzd2removedza2zd2zzreduce_copyz00 = ((long) 0);
			{
				obj_t BgL_l1253z00_1375;

				BgL_l1253z00_1375 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31354ze3z87_1376:
				if (PAIRP(BgL_l1253z00_1375))
					{	/* Reduce/copy.scm 38 */
						{	/* Reduce/copy.scm 39 */
							obj_t BgL_globalz00_1378;

							BgL_globalz00_1378 = CAR(BgL_l1253z00_1375);
							{	/* Reduce/copy.scm 39 */
								BgL_valuez00_bglt BgL_funz00_1379;

								BgL_funz00_1379 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1378))))->
									BgL_valuez00);
								{	/* Reduce/copy.scm 39 */
									obj_t BgL_nodez00_1380;

									BgL_nodez00_1380 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1379)))->BgL_bodyz00);
									{	/* Reduce/copy.scm 40 */

										{	/* Reduce/copy.scm 41 */
											BgL_nodez00_bglt BgL_arg1357z00_1381;

											BgL_arg1357z00_1381 =
												BGl_nodezd2copyz12zc0zzreduce_copyz00(
												((BgL_nodez00_bglt) BgL_nodez00_1380));
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1379)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1357z00_1381)), BUNSPEC);
										}
										BUNSPEC;
									}
								}
							}
						}
						{
							obj_t BgL_l1253z00_2370;

							BgL_l1253z00_2370 = CDR(BgL_l1253z00_1375);
							BgL_l1253z00_1375 = BgL_l1253z00_2370;
							goto BgL_zc3z04anonymousza31354ze3z87_1376;
						}
					}
				else
					{	/* Reduce/copy.scm 38 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/copy.scm 44 */
				obj_t BgL_list1361z00_1384;

				{	/* Reduce/copy.scm 44 */
					obj_t BgL_arg1363z00_1385;

					{	/* Reduce/copy.scm 44 */
						obj_t BgL_arg1364z00_1386;

						{	/* Reduce/copy.scm 44 */
							obj_t BgL_arg1367z00_1387;

							BgL_arg1367z00_1387 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1364z00_1386 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
								BgL_arg1367z00_1387);
						}
						BgL_arg1363z00_1385 =
							MAKE_YOUNG_PAIR(BINT(BGl_za2copyzd2removedza2zd2zzreduce_copyz00),
							BgL_arg1364z00_1386);
					}
					BgL_list1361z00_1384 =
						MAKE_YOUNG_PAIR(BGl_string1871z00zzreduce_copyz00,
						BgL_arg1363z00_1385);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1361z00_1384);
			}
			return BgL_globalsz00_3;
		}

	}



/* &reduce-copy! */
	obj_t BGl_z62reducezd2copyz12za2zzreduce_copyz00(obj_t BgL_envz00_2048,
		obj_t BgL_globalsz00_2049)
	{
		{	/* Reduce/copy.scm 35 */
			return BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_2049);
		}

	}



/* cell-type-less-specific? */
	bool_t
		BGl_cellzd2typezd2lesszd2specificzf3z21zzreduce_copyz00(BgL_typez00_bglt
		BgL_ty1z00_41, BgL_typez00_bglt BgL_ty2z00_42)
	{
		{	/* Reduce/copy.scm 314 */
			{	/* Reduce/copy.scm 315 */
				bool_t BgL__ortest_1131z00_1388;

				BgL__ortest_1131z00_1388 =
					BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_ty1z00_41,
					BgL_ty2z00_42);
				if (BgL__ortest_1131z00_1388)
					{	/* Reduce/copy.scm 315 */
						return BgL__ortest_1131z00_1388;
					}
				else
					{	/* Reduce/copy.scm 315 */
						if ((((obj_t) BgL_ty2z00_42) == BGl_za2objza2z00zztype_cachez00))
							{	/* Reduce/copy.scm 316 */
								return
									(((obj_t) BgL_ty1z00_41) == BGl_za2cellza2z00zztype_cachez00);
							}
						else
							{	/* Reduce/copy.scm 316 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* node-copy*! */
	obj_t BGl_nodezd2copyza2z12z62zzreduce_copyz00(obj_t BgL_nodeza2za2_51)
	{
		{	/* Reduce/copy.scm 402 */
			{
				obj_t BgL_nodeza2za2_1391;

				BgL_nodeza2za2_1391 = BgL_nodeza2za2_51;
			BgL_zc3z04anonymousza31368ze3z87_1392:
				if (NULLP(BgL_nodeza2za2_1391))
					{	/* Reduce/copy.scm 404 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/copy.scm 404 */
						{	/* Reduce/copy.scm 407 */
							BgL_nodez00_bglt BgL_arg1381z00_1394;

							{	/* Reduce/copy.scm 407 */
								obj_t BgL_arg1382z00_1395;

								BgL_arg1382z00_1395 = CAR(((obj_t) BgL_nodeza2za2_1391));
								BgL_arg1381z00_1394 =
									BGl_nodezd2copyz12zc0zzreduce_copyz00(
									((BgL_nodez00_bglt) BgL_arg1382z00_1395));
							}
							{	/* Reduce/copy.scm 407 */
								obj_t BgL_auxz00_2398;
								obj_t BgL_tmpz00_2396;

								BgL_auxz00_2398 = ((obj_t) BgL_arg1381z00_1394);
								BgL_tmpz00_2396 = ((obj_t) BgL_nodeza2za2_1391);
								SET_CAR(BgL_tmpz00_2396, BgL_auxz00_2398);
							}
						}
						{	/* Reduce/copy.scm 408 */
							obj_t BgL_arg1383z00_1396;

							BgL_arg1383z00_1396 = CDR(((obj_t) BgL_nodeza2za2_1391));
							{
								obj_t BgL_nodeza2za2_2403;

								BgL_nodeza2za2_2403 = BgL_arg1383z00_1396;
								BgL_nodeza2za2_1391 = BgL_nodeza2za2_2403;
								goto BgL_zc3z04anonymousza31368ze3z87_1392;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_proc1872z00zzreduce_copyz00, BGl_nodez00zzast_nodez00,
				BGl_string1873z00zzreduce_copyz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00,
				BGl_proc1874z00zzreduce_copyz00, BFALSE,
				BGl_string1875z00zzreduce_copyz00);
		}

	}



/* &copyable?1309 */
	obj_t BGl_z62copyablezf31309z91zzreduce_copyz00(obj_t BgL_envz00_2052,
		obj_t BgL_nodez00_2053, obj_t BgL_vz00_2054)
	{
		{	/* Reduce/copy.scm 194 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &node-copy!1277 */
	obj_t BGl_z62nodezd2copyz121277za2zzreduce_copyz00(obj_t BgL_envz00_2055,
		obj_t BgL_nodez00_2056)
	{
		{	/* Reduce/copy.scm 55 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string1876z00zzreduce_copyz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2056)));
		}

	}



/* node-copy! */
	BgL_nodez00_bglt BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		{	/* Reduce/copy.scm 55 */
			{	/* Reduce/copy.scm 55 */
				obj_t BgL_method1278z00_1407;

				{	/* Reduce/copy.scm 55 */
					obj_t BgL_res1845z00_1944;

					{	/* Reduce/copy.scm 55 */
						long BgL_objzd2classzd2numz00_1909;

						{	/* Reduce/copy.scm 55 */
							long BgL_res1835z00_1912;

							BgL_res1835z00_1912 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_1909 = BgL_res1835z00_1912;
						}
						{	/* Reduce/copy.scm 55 */
							obj_t BgL_arg1813z00_1910;

							BgL_arg1813z00_1910 =
								PROCEDURE_REF(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
								(int) (((long) 1)));
							{	/* Reduce/copy.scm 55 */
								int BgL_offsetz00_1914;

								BgL_offsetz00_1914 = (int) (BgL_objzd2classzd2numz00_1909);
								{	/* Reduce/copy.scm 55 */
									long BgL_offsetz00_1915;

									BgL_offsetz00_1915 =
										((long) (BgL_offsetz00_1914) - OBJECT_TYPE);
									{	/* Reduce/copy.scm 55 */
										long BgL_modz00_1916;

										BgL_modz00_1916 =
											(BgL_offsetz00_1915 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/copy.scm 55 */
											long BgL_restz00_1918;

											BgL_restz00_1918 =
												(BgL_offsetz00_1915 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/copy.scm 55 */

												{	/* Reduce/copy.scm 55 */
													obj_t BgL_bucketz00_1920;

													BgL_bucketz00_1920 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1910), BgL_modz00_1916);
													BgL_res1845z00_1944 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1920), BgL_restz00_1918);
					}}}}}}}}
					BgL_method1278z00_1407 = BgL_res1845z00_1944;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1278z00_1407) (BgL_method1278z00_1407,
						((obj_t) BgL_nodez00_4), BEOA));
			}
		}

	}



/* &node-copy! */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12za2zzreduce_copyz00(obj_t
		BgL_envz00_2057, obj_t BgL_nodez00_2058)
	{
		{	/* Reduce/copy.scm 55 */
			return
				BGl_nodezd2copyz12zc0zzreduce_copyz00(
				((BgL_nodez00_bglt) BgL_nodez00_2058));
		}

	}



/* copyable? */
	obj_t BGl_copyablezf3zf3zzreduce_copyz00(obj_t BgL_nodez00_20,
		obj_t BgL_vz00_21)
	{
		{	/* Reduce/copy.scm 194 */
			if (BGL_OBJECTP(BgL_nodez00_20))
				{	/* Reduce/copy.scm 194 */
					obj_t BgL_method1310z00_1409;

					{	/* Reduce/copy.scm 194 */
						obj_t BgL_res1857z00_1982;

						{	/* Reduce/copy.scm 194 */
							long BgL_objzd2classzd2numz00_1947;

							{	/* Reduce/copy.scm 194 */
								long BgL_res1847z00_1950;

								BgL_res1847z00_1950 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_20));
								BgL_objzd2classzd2numz00_1947 = BgL_res1847z00_1950;
							}
							{	/* Reduce/copy.scm 194 */
								obj_t BgL_arg1813z00_1948;

								BgL_arg1813z00_1948 =
									PROCEDURE_REF(BGl_copyablezf3zd2envz21zzreduce_copyz00,
									(int) (((long) 1)));
								{	/* Reduce/copy.scm 194 */
									int BgL_offsetz00_1952;

									BgL_offsetz00_1952 = (int) (BgL_objzd2classzd2numz00_1947);
									{	/* Reduce/copy.scm 194 */
										long BgL_offsetz00_1953;

										BgL_offsetz00_1953 =
											((long) (BgL_offsetz00_1952) - OBJECT_TYPE);
										{	/* Reduce/copy.scm 194 */
											long BgL_modz00_1954;

											BgL_modz00_1954 =
												(BgL_offsetz00_1953 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* Reduce/copy.scm 194 */
												long BgL_restz00_1956;

												BgL_restz00_1956 =
													(BgL_offsetz00_1953 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* Reduce/copy.scm 194 */

													{	/* Reduce/copy.scm 194 */
														obj_t BgL_bucketz00_1958;

														BgL_bucketz00_1958 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_1948), BgL_modz00_1954);
														BgL_res1857z00_1982 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_1958), BgL_restz00_1956);
						}}}}}}}}
						BgL_method1310z00_1409 = BgL_res1857z00_1982;
					}
					return
						PROCEDURE_ENTRY(BgL_method1310z00_1409) (BgL_method1310z00_1409,
						BgL_nodez00_20, BgL_vz00_21, BEOA);
				}
			else
				{	/* Reduce/copy.scm 194 */
					obj_t BgL_fun1390z00_1410;

					BgL_fun1390z00_1410 =
						PROCEDURE_REF(BGl_copyablezf3zd2envz21zzreduce_copyz00,
						(int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun1390z00_1410) (BgL_fun1390z00_1410,
						BgL_nodez00_20, BgL_vz00_21, BEOA);
				}
		}

	}



/* &copyable? */
	obj_t BGl_z62copyablezf3z91zzreduce_copyz00(obj_t BgL_envz00_2059,
		obj_t BgL_nodez00_2060, obj_t BgL_vz00_2061)
	{
		{	/* Reduce/copy.scm 194 */
			return
				BGl_copyablezf3zf3zzreduce_copyz00(BgL_nodez00_2060, BgL_vz00_2061);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_atomz00zzast_nodez00,
				BGl_proc1877z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1879z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_varz00zzast_nodez00,
				BGl_proc1880z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_closurez00zzast_nodez00, BGl_proc1881z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1882z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_syncz00zzast_nodez00,
				BGl_proc1883z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1884z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1885z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_externz00zzast_nodez00, BGl_proc1886z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_castz00zzast_nodez00,
				BGl_proc1887z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_setqz00zzast_nodez00,
				BGl_proc1888z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1889z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_failz00zzast_nodez00,
				BGl_proc1890z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_switchz00zzast_nodez00, BGl_proc1891z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1892z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_atomz00zzast_nodez00,
				BGl_proc1893z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_varz00zzast_nodez00,
				BGl_proc1895z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1896z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc1897z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_castz00zzast_nodez00,
				BGl_proc1898z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc1899z00zzreduce_copyz00,
				BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00,
				BGl_instanceofz00zzast_nodez00, BGl_proc1900z00zzreduce_copyz00,
				BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1901z00zzreduce_copyz00,
				BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_copyablezf3zd2envz21zzreduce_copyz00, BGl_failz00zzast_nodez00,
				BGl_proc1902z00zzreduce_copyz00, BGl_string1894z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1903z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1904z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1905z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1906z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_returnz00zzast_nodez00, BGl_proc1907z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1908z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1909z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1910z00zzreduce_copyz00,
				BGl_string1878z00zzreduce_copyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_appz00zzast_nodez00,
				BGl_proc1911z00zzreduce_copyz00, BGl_string1878z00zzreduce_copyz00);
		}

	}



/* &node-copy!-app1347 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2app1347z70zzreduce_copyz00(obj_t
		BgL_envz00_2095, obj_t BgL_nodez00_2096)
	{
		{	/* Reduce/copy.scm 394 */
			BGl_nodezd2copyza2z12z62zzreduce_copyz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2096)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2096));
		}

	}



/* &node-copy!-box-ref1345 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2boxzd2ref1345za2zzreduce_copyz00(obj_t
		BgL_envz00_2097, obj_t BgL_nodez00_2098)
	{
		{	/* Reduce/copy.scm 379 */
			{	/* Reduce/copy.scm 381 */
				BgL_nodez00_bglt BgL_cpz00_2186;

				{	/* Reduce/copy.scm 381 */
					BgL_varz00_bglt BgL_arg1711z00_2187;

					BgL_arg1711z00_2187 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2098)))->BgL_varz00);
					BgL_cpz00_2186 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(
						((BgL_nodez00_bglt) BgL_arg1711z00_2187));
				}
				if (BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_cpz00_2186), BGl_castz00zzast_nodez00))
					{	/* Reduce/copy.scm 382 */
						((((BgL_boxzd2refzd2_bglt) COBJECT(
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_2098)))->BgL_varz00) =
							((BgL_varz00_bglt) ((BgL_varz00_bglt) (((BgL_castz00_bglt)
											COBJECT(((BgL_castz00_bglt) BgL_cpz00_2186)))->
										BgL_argz00))), BUNSPEC);
						((((BgL_castz00_bglt) COBJECT(((BgL_castz00_bglt)
											BgL_cpz00_2186)))->BgL_argz00) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt)
										BgL_nodez00_2098))), BUNSPEC);
						return BgL_cpz00_2186;
					}
				else
					{	/* Reduce/copy.scm 382 */
						((((BgL_boxzd2refzd2_bglt) COBJECT(
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_2098)))->BgL_varz00) =
							((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_cpz00_2186)), BUNSPEC);
						return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt)
								BgL_nodez00_2098));
					}
			}
		}

	}



/* &node-copy!-box-set!1343 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2boxzd2setz121343zb0zzreduce_copyz00(obj_t
		BgL_envz00_2099, obj_t BgL_nodez00_2100)
	{
		{	/* Reduce/copy.scm 363 */
			{
				BgL_nodez00_bglt BgL_auxz00_2543;

				{	/* Reduce/copy.scm 365 */
					BgL_nodez00_bglt BgL_arg1704z00_2189;

					BgL_arg1704z00_2189 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100)))->BgL_valuez00);
					BgL_auxz00_2543 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1704z00_2189);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2543), BUNSPEC);
			}
			{	/* Reduce/copy.scm 366 */
				BgL_nodez00_bglt BgL_cpz00_2190;

				{	/* Reduce/copy.scm 366 */
					BgL_varz00_bglt BgL_arg1707z00_2191;

					BgL_arg1707z00_2191 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100)))->BgL_varz00);
					BgL_cpz00_2190 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(
						((BgL_nodez00_bglt) BgL_arg1707z00_2191));
				}
				if (BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_cpz00_2190), BGl_castz00zzast_nodez00))
					{	/* Reduce/copy.scm 367 */
						((((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100)))->
								BgL_varz00) =
							((BgL_varz00_bglt) ((BgL_varz00_bglt) (((BgL_castz00_bglt)
											COBJECT(((BgL_castz00_bglt) BgL_cpz00_2190)))->
										BgL_argz00))), BUNSPEC);
						((((BgL_castz00_bglt) COBJECT(((BgL_castz00_bglt)
											BgL_cpz00_2190)))->BgL_argz00) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt) (
										(BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100))), BUNSPEC);
						return BgL_cpz00_2190;
					}
				else
					{	/* Reduce/copy.scm 367 */
						((((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2100)))->
								BgL_varz00) =
							((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_cpz00_2190)), BUNSPEC);
						return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt)
								BgL_nodez00_2100));
					}
			}
		}

	}



/* &node-copy!-make-box1341 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2makezd2box1341za2zzreduce_copyz00(obj_t
		BgL_envz00_2101, obj_t BgL_nodez00_2102)
	{
		{	/* Reduce/copy.scm 355 */
			{
				BgL_nodez00_bglt BgL_auxz00_2570;

				{	/* Reduce/copy.scm 357 */
					BgL_nodez00_bglt BgL_arg1697z00_2193;

					BgL_arg1697z00_2193 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2102)))->BgL_valuez00);
					BgL_auxz00_2570 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1697z00_2193);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2102)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2570), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2102));
		}

	}



/* &node-copy!-return1339 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2return1339z70zzreduce_copyz00(obj_t
		BgL_envz00_2103, obj_t BgL_nodez00_2104)
	{
		{	/* Reduce/copy.scm 347 */
			{
				BgL_nodez00_bglt BgL_auxz00_2578;

				{	/* Reduce/copy.scm 349 */
					BgL_nodez00_bglt BgL_arg1696z00_2195;

					BgL_arg1696z00_2195 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2104)))->BgL_valuez00);
					BgL_auxz00_2578 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1696z00_2195);
				}
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2104)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2578), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nodez00_2104));
		}

	}



/* &node-copy!-retblock1337 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2retblock1337z70zzreduce_copyz00(obj_t
		BgL_envz00_2105, obj_t BgL_nodez00_2106)
	{
		{	/* Reduce/copy.scm 339 */
			{
				BgL_nodez00_bglt BgL_auxz00_2586;

				{	/* Reduce/copy.scm 341 */
					BgL_nodez00_bglt BgL_arg1695z00_2197;

					BgL_arg1695z00_2197 =
						(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2106)))->BgL_bodyz00);
					BgL_auxz00_2586 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1695z00_2197);
				}
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2106)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2586), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_2106));
		}

	}



/* &node-copy!-jump-ex-i1335 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2jumpzd2exzd2i1335z70zzreduce_copyz00(obj_t
		BgL_envz00_2107, obj_t BgL_nodez00_2108)
	{
		{	/* Reduce/copy.scm 330 */
			{
				BgL_nodez00_bglt BgL_auxz00_2594;

				{	/* Reduce/copy.scm 332 */
					BgL_nodez00_bglt BgL_arg1688z00_2199;

					BgL_arg1688z00_2199 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2108)))->BgL_exitz00);
					BgL_auxz00_2594 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1688z00_2199);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2108)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2594), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2600;

				{	/* Reduce/copy.scm 333 */
					BgL_nodez00_bglt BgL_arg1692z00_2200;

					BgL_arg1692z00_2200 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2108)))->
						BgL_valuez00);
					BgL_auxz00_2600 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1692z00_2200);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2108)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2600), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2108));
		}

	}



/* &node-copy!-set-ex-it1332 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2setzd2exzd2it1332z70zzreduce_copyz00(obj_t
		BgL_envz00_2109, obj_t BgL_nodez00_2110)
	{
		{	/* Reduce/copy.scm 321 */
			{
				BgL_nodez00_bglt BgL_auxz00_2608;

				{	/* Reduce/copy.scm 323 */
					BgL_nodez00_bglt BgL_arg1686z00_2202;

					BgL_arg1686z00_2202 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2110)))->BgL_bodyz00);
					BgL_auxz00_2608 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1686z00_2202);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2110)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2608), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2614;

				{	/* Reduce/copy.scm 324 */
					BgL_varz00_bglt BgL_arg1687z00_2203;

					BgL_arg1687z00_2203 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2110)))->BgL_varz00);
					BgL_auxz00_2614 =
						((BgL_varz00_bglt)
						BGl_nodezd2copyz12zc0zzreduce_copyz00(
							((BgL_nodez00_bglt) BgL_arg1687z00_2203)));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2110)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2614), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2110));
		}

	}



/* &node-copy!-let-var1330 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2letzd2var1330za2zzreduce_copyz00(obj_t
		BgL_envz00_2111, obj_t BgL_nodez00_2112)
	{
		{	/* Reduce/copy.scm 262 */
			{
				obj_t BgL_obindingsz00_2206;
				obj_t BgL_nbindingsz00_2207;

				BgL_obindingsz00_2206 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->BgL_bindingsz00);
				BgL_nbindingsz00_2207 = BNIL;
			BgL_loopz00_2205:
				if (NULLP(BgL_obindingsz00_2206))
					{	/* Reduce/copy.scm 267 */
						bool_t BgL_test1974z00_2626;

						if (NULLP(BgL_nbindingsz00_2207))
							{	/* Reduce/copy.scm 267 */
								BgL_test1974z00_2626 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->
									BgL_removablezf3zf3);
							}
						else
							{	/* Reduce/copy.scm 267 */
								BgL_test1974z00_2626 = ((bool_t) 0);
							}
						if (BgL_test1974z00_2626)
							{	/* Reduce/copy.scm 267 */
								return
									BGl_nodezd2copyz12zc0zzreduce_copyz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->
										BgL_bodyz00));
							}
						else
							{	/* Reduce/copy.scm 267 */
								((((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->
										BgL_bindingsz00) =
									((obj_t) BgL_nbindingsz00_2207), BUNSPEC);
								{
									BgL_nodez00_bglt BgL_auxz00_2636;

									{	/* Reduce/copy.scm 271 */
										BgL_nodez00_bglt BgL_arg1612z00_2208;

										BgL_arg1612z00_2208 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->
											BgL_bodyz00);
										BgL_auxz00_2636 =
											BGl_nodezd2copyz12zc0zzreduce_copyz00
											(BgL_arg1612z00_2208);
									}
									((((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2112)))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_auxz00_2636), BUNSPEC);
								}
								return
									((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2112));
							}
					}
				else
					{	/* Reduce/copy.scm 273 */
						obj_t BgL_bindingz00_2209;

						BgL_bindingz00_2209 = CAR(((obj_t) BgL_obindingsz00_2206));
						{	/* Reduce/copy.scm 273 */
							obj_t BgL_varz00_2210;

							BgL_varz00_2210 = CAR(((obj_t) BgL_bindingz00_2209));
							{	/* Reduce/copy.scm 274 */
								BgL_nodez00_bglt BgL_valz00_2211;

								{	/* Reduce/copy.scm 275 */
									obj_t BgL_arg1685z00_2212;

									BgL_arg1685z00_2212 = CDR(((obj_t) BgL_bindingz00_2209));
									BgL_valz00_2211 =
										BGl_nodezd2copyz12zc0zzreduce_copyz00(
										((BgL_nodez00_bglt) BgL_arg1685z00_2212));
								}
								{	/* Reduce/copy.scm 275 */

									{	/* Reduce/copy.scm 276 */
										obj_t BgL_auxz00_2654;
										obj_t BgL_tmpz00_2652;

										BgL_auxz00_2654 = ((obj_t) BgL_valz00_2211);
										BgL_tmpz00_2652 = ((obj_t) BgL_bindingz00_2209);
										SET_CDR(BgL_tmpz00_2652, BgL_auxz00_2654);
									}
									{	/* Reduce/copy.scm 291 */
										bool_t BgL_test1976z00_2657;

										if (
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_2210)))->
													BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
											{	/* Reduce/copy.scm 291 */
												if (CBOOL(BGl_copyablezf3zf3zzreduce_copyz00(
															((obj_t) BgL_valz00_2211), BgL_varz00_2210)))
													{	/* Reduce/copy.scm 294 */
														BgL_typez00_bglt BgL_arg1669z00_2213;
														BgL_typez00_bglt BgL_arg1672z00_2214;

														BgL_arg1669z00_2213 =
															(((BgL_nodez00_bglt) COBJECT(BgL_valz00_2211))->
															BgL_typez00);
														BgL_arg1672z00_2214 =
															(((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_varz00_2210)))->BgL_typez00);
														BgL_test1976z00_2657 =
															BGl_cellzd2typezd2lesszd2specificzf3z21zzreduce_copyz00
															(BgL_arg1669z00_2213, BgL_arg1672z00_2214);
													}
												else
													{	/* Reduce/copy.scm 292 */
														BgL_test1976z00_2657 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/copy.scm 291 */
												BgL_test1976z00_2657 = ((bool_t) 0);
											}
										if (BgL_test1976z00_2657)
											{	/* Reduce/copy.scm 291 */
												BGl_za2copyzd2removedza2zd2zzreduce_copyz00 =
													(BGl_za2copyzd2removedza2zd2zzreduce_copyz00 +
													((long) 1));
												{	/* Reduce/copy.scm 302 */
													BgL_nodez00_bglt BgL_arg1631z00_2215;

													if (
														(((obj_t)
																(((BgL_nodez00_bglt) COBJECT(BgL_valz00_2211))->
																	BgL_typez00)) ==
															((obj_t) (((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_varz00_2210)))->BgL_typez00))))
														{	/* Reduce/copy.scm 302 */
															BgL_arg1631z00_2215 = BgL_valz00_2211;
														}
													else
														{	/* Reduce/copy.scm 304 */
															BgL_castz00_bglt BgL_new1130z00_2216;

															{	/* Reduce/copy.scm 305 */
																BgL_castz00_bglt BgL_new1128z00_2217;

																BgL_new1128z00_2217 =
																	((BgL_castz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_castz00_bgl))));
																{	/* Reduce/copy.scm 305 */
																	long BgL_arg1644z00_2218;

																	{	/* Reduce/copy.scm 305 */
																		long BgL_res1869z00_2219;

																		BgL_res1869z00_2219 =
																			BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
																		BgL_arg1644z00_2218 = BgL_res1869z00_2219;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1128z00_2217),
																		BgL_arg1644z00_2218);
																}
																{	/* Reduce/copy.scm 305 */
																	BgL_objectz00_bglt BgL_tmpz00_2683;

																	BgL_tmpz00_2683 =
																		((BgL_objectz00_bglt) BgL_new1128z00_2217);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2683,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1128z00_2217);
																BgL_new1130z00_2216 = BgL_new1128z00_2217;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1130z00_2216)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(BgL_valz00_2211))->BgL_locz00)),
																BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1130z00_2216)))->BgL_typez00) =
																((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																			COBJECT(((BgL_variablez00_bglt)
																					BgL_varz00_2210)))->BgL_typez00)),
																BUNSPEC);
															((((BgL_castz00_bglt)
																		COBJECT(BgL_new1130z00_2216))->BgL_argz00) =
																((BgL_nodez00_bglt) BgL_valz00_2211), BUNSPEC);
															BgL_arg1631z00_2215 =
																((BgL_nodez00_bglt) BgL_new1130z00_2216);
														}
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_varz00_2210)))->
															BgL_fastzd2alphazd2) =
														((obj_t) ((obj_t) BgL_arg1631z00_2215)), BUNSPEC);
												}
												{	/* Reduce/copy.scm 308 */
													obj_t BgL_arg1663z00_2220;

													BgL_arg1663z00_2220 =
														CDR(((obj_t) BgL_obindingsz00_2206));
													{
														obj_t BgL_obindingsz00_2701;

														BgL_obindingsz00_2701 = BgL_arg1663z00_2220;
														BgL_obindingsz00_2206 = BgL_obindingsz00_2701;
														goto BgL_loopz00_2205;
													}
												}
											}
										else
											{	/* Reduce/copy.scm 309 */
												obj_t BgL_arg1664z00_2221;
												obj_t BgL_arg1667z00_2222;

												BgL_arg1664z00_2221 =
													CDR(((obj_t) BgL_obindingsz00_2206));
												BgL_arg1667z00_2222 =
													MAKE_YOUNG_PAIR(BgL_bindingz00_2209,
													BgL_nbindingsz00_2207);
												{
													obj_t BgL_nbindingsz00_2706;
													obj_t BgL_obindingsz00_2705;

													BgL_obindingsz00_2705 = BgL_arg1664z00_2221;
													BgL_nbindingsz00_2706 = BgL_arg1667z00_2222;
													BgL_nbindingsz00_2207 = BgL_nbindingsz00_2706;
													BgL_obindingsz00_2206 = BgL_obindingsz00_2705;
													goto BgL_loopz00_2205;
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



/* &copyable?-fail1328 */
	obj_t BGl_z62copyablezf3zd2fail1328z43zzreduce_copyz00(obj_t BgL_envz00_2113,
		obj_t BgL_nodez00_2114, obj_t BgL_vz00_2115)
	{
		{	/* Reduce/copy.scm 255 */
			{	/* Reduce/copy.scm 257 */
				obj_t BgL__andtest_1124z00_2224;

				{	/* Reduce/copy.scm 257 */
					BgL_nodez00_bglt BgL_arg1604z00_2225;

					BgL_arg1604z00_2225 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2114)))->BgL_procz00);
					BgL__andtest_1124z00_2224 =
						BGl_copyablezf3zf3zzreduce_copyz00(
						((obj_t) BgL_arg1604z00_2225), BgL_vz00_2115);
				}
				if (CBOOL(BgL__andtest_1124z00_2224))
					{	/* Reduce/copy.scm 257 */
						obj_t BgL__andtest_1125z00_2226;

						{	/* Reduce/copy.scm 257 */
							BgL_nodez00_bglt BgL_arg1599z00_2227;

							BgL_arg1599z00_2227 =
								(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_2114)))->BgL_msgz00);
							BgL__andtest_1125z00_2226 =
								BGl_copyablezf3zf3zzreduce_copyz00(
								((obj_t) BgL_arg1599z00_2227), BgL_vz00_2115);
						}
						if (CBOOL(BgL__andtest_1125z00_2226))
							{	/* Reduce/copy.scm 257 */
								BgL_nodez00_bglt BgL_arg1597z00_2228;

								BgL_arg1597z00_2228 =
									(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2114)))->BgL_objz00);
								return
									BGl_copyablezf3zf3zzreduce_copyz00(
									((obj_t) BgL_arg1597z00_2228), BgL_vz00_2115);
							}
						else
							{	/* Reduce/copy.scm 257 */
								return BFALSE;
							}
					}
				else
					{	/* Reduce/copy.scm 257 */
						return BFALSE;
					}
			}
		}

	}



/* &copyable?-conditiona1326 */
	obj_t BGl_z62copyablezf3zd2conditiona1326z43zzreduce_copyz00(obj_t
		BgL_envz00_2116, obj_t BgL_nodez00_2117, obj_t BgL_vz00_2118)
	{
		{	/* Reduce/copy.scm 247 */
			if (
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_vz00_2118)))->BgL_occurrencez00) <=
					((long) 1)))
				{	/* Reduce/copy.scm 250 */
					obj_t BgL__andtest_1121z00_2230;

					{	/* Reduce/copy.scm 250 */
						BgL_nodez00_bglt BgL_arg1592z00_2231;

						BgL_arg1592z00_2231 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2117)))->BgL_testz00);
						BgL__andtest_1121z00_2230 =
							BGl_copyablezf3zf3zzreduce_copyz00(
							((obj_t) BgL_arg1592z00_2231), BgL_vz00_2118);
					}
					if (CBOOL(BgL__andtest_1121z00_2230))
						{	/* Reduce/copy.scm 250 */
							obj_t BgL__andtest_1122z00_2232;

							{	/* Reduce/copy.scm 250 */
								BgL_nodez00_bglt BgL_arg1589z00_2233;

								BgL_arg1589z00_2233 =
									(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2117)))->
									BgL_truez00);
								BgL__andtest_1122z00_2232 =
									BGl_copyablezf3zf3zzreduce_copyz00(((obj_t)
										BgL_arg1589z00_2233), BgL_vz00_2118);
							}
							if (CBOOL(BgL__andtest_1122z00_2232))
								{	/* Reduce/copy.scm 250 */
									BgL_nodez00_bglt BgL_arg1588z00_2234;

									BgL_arg1588z00_2234 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2117)))->
										BgL_falsez00);
									return BGl_copyablezf3zf3zzreduce_copyz00(((obj_t)
											BgL_arg1588z00_2234), BgL_vz00_2118);
								}
							else
								{	/* Reduce/copy.scm 250 */
									return BFALSE;
								}
						}
					else
						{	/* Reduce/copy.scm 250 */
							return BFALSE;
						}
				}
			else
				{	/* Reduce/copy.scm 249 */
					return BFALSE;
				}
		}

	}



/* &copyable?-instanceof1324 */
	obj_t BGl_z62copyablezf3zd2instanceof1324z43zzreduce_copyz00(obj_t
		BgL_envz00_2119, obj_t BgL_nodez00_2120, obj_t BgL_vz00_2121)
	{
		{	/* Reduce/copy.scm 240 */
			{	/* Reduce/copy.scm 241 */
				bool_t BgL_tmpz00_2745;

				{	/* Reduce/copy.scm 242 */
					obj_t BgL_g1275z00_2236;

					BgL_g1275z00_2236 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_instanceofz00_bglt) BgL_nodez00_2120))))->
						BgL_exprza2za2);
					{
						obj_t BgL_l1273z00_2238;

						BgL_l1273z00_2238 = BgL_g1275z00_2236;
					BgL_zc3z04anonymousza31579ze3z87_2237:
						if (NULLP(BgL_l1273z00_2238))
							{	/* Reduce/copy.scm 242 */
								BgL_tmpz00_2745 = ((bool_t) 1);
							}
						else
							{	/* Reduce/copy.scm 242 */
								obj_t BgL_nvz00_2239;

								{	/* Reduce/copy.scm 242 */
									obj_t BgL_nz00_2240;

									BgL_nz00_2240 = CAR(((obj_t) BgL_l1273z00_2238));
									BgL_nvz00_2239 =
										BGl_copyablezf3zf3zzreduce_copyz00(BgL_nz00_2240,
										BgL_vz00_2121);
								}
								if (CBOOL(BgL_nvz00_2239))
									{	/* Reduce/copy.scm 242 */
										obj_t BgL_arg1582z00_2241;

										BgL_arg1582z00_2241 = CDR(((obj_t) BgL_l1273z00_2238));
										{
											obj_t BgL_l1273z00_2758;

											BgL_l1273z00_2758 = BgL_arg1582z00_2241;
											BgL_l1273z00_2238 = BgL_l1273z00_2758;
											goto BgL_zc3z04anonymousza31579ze3z87_2237;
										}
									}
								else
									{	/* Reduce/copy.scm 242 */
										BgL_tmpz00_2745 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2745);
			}
		}

	}



/* &copyable?-cast-null1322 */
	obj_t BGl_z62copyablezf3zd2castzd2null1322z91zzreduce_copyz00(obj_t
		BgL_envz00_2122, obj_t BgL_nodez00_2123, obj_t BgL_vz00_2124)
	{
		{	/* Reduce/copy.scm 233 */
			{	/* Reduce/copy.scm 234 */
				bool_t BgL_tmpz00_2760;

				{	/* Reduce/copy.scm 235 */
					obj_t BgL_g1271z00_2243;

					BgL_g1271z00_2243 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_castzd2nullzd2_bglt) BgL_nodez00_2123))))->
						BgL_exprza2za2);
					{
						obj_t BgL_l1269z00_2245;

						BgL_l1269z00_2245 = BgL_g1271z00_2243;
					BgL_zc3z04anonymousza31576ze3z87_2244:
						if (NULLP(BgL_l1269z00_2245))
							{	/* Reduce/copy.scm 235 */
								BgL_tmpz00_2760 = ((bool_t) 1);
							}
						else
							{	/* Reduce/copy.scm 235 */
								obj_t BgL_nvz00_2246;

								{	/* Reduce/copy.scm 235 */
									obj_t BgL_nz00_2247;

									BgL_nz00_2247 = CAR(((obj_t) BgL_l1269z00_2245));
									BgL_nvz00_2246 =
										BGl_copyablezf3zf3zzreduce_copyz00(BgL_nz00_2247,
										BgL_vz00_2124);
								}
								if (CBOOL(BgL_nvz00_2246))
									{	/* Reduce/copy.scm 235 */
										obj_t BgL_arg1578z00_2248;

										BgL_arg1578z00_2248 = CDR(((obj_t) BgL_l1269z00_2245));
										{
											obj_t BgL_l1269z00_2773;

											BgL_l1269z00_2773 = BgL_arg1578z00_2248;
											BgL_l1269z00_2245 = BgL_l1269z00_2773;
											goto BgL_zc3z04anonymousza31576ze3z87_2244;
										}
									}
								else
									{	/* Reduce/copy.scm 235 */
										BgL_tmpz00_2760 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2760);
			}
		}

	}



/* &copyable?-cast1320 */
	obj_t BGl_z62copyablezf3zd2cast1320z43zzreduce_copyz00(obj_t BgL_envz00_2125,
		obj_t BgL_nodez00_2126, obj_t BgL_vz00_2127)
	{
		{	/* Reduce/copy.scm 226 */
			{	/* Reduce/copy.scm 228 */
				BgL_nodez00_bglt BgL_arg1575z00_2250;

				BgL_arg1575z00_2250 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2126)))->BgL_argz00);
				return
					BGl_copyablezf3zf3zzreduce_copyz00(
					((obj_t) BgL_arg1575z00_2250), BgL_vz00_2127);
			}
		}

	}



/* &copyable?-vlength1318 */
	obj_t BGl_z62copyablezf3zd2vlength1318z43zzreduce_copyz00(obj_t
		BgL_envz00_2128, obj_t BgL_nodez00_2129, obj_t BgL_vz00_2130)
	{
		{	/* Reduce/copy.scm 219 */
			{	/* Reduce/copy.scm 220 */
				bool_t BgL_tmpz00_2779;

				{	/* Reduce/copy.scm 221 */
					obj_t BgL_g1267z00_2252;

					BgL_g1267z00_2252 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vlengthz00_bglt) BgL_nodez00_2129))))->BgL_exprza2za2);
					{
						obj_t BgL_l1265z00_2254;

						BgL_l1265z00_2254 = BgL_g1267z00_2252;
					BgL_zc3z04anonymousza31565ze3z87_2253:
						if (NULLP(BgL_l1265z00_2254))
							{	/* Reduce/copy.scm 221 */
								BgL_tmpz00_2779 = ((bool_t) 1);
							}
						else
							{	/* Reduce/copy.scm 221 */
								obj_t BgL_nvz00_2255;

								{	/* Reduce/copy.scm 221 */
									obj_t BgL_nz00_2256;

									BgL_nz00_2256 = CAR(((obj_t) BgL_l1265z00_2254));
									BgL_nvz00_2255 =
										BGl_copyablezf3zf3zzreduce_copyz00(BgL_nz00_2256,
										BgL_vz00_2130);
								}
								if (CBOOL(BgL_nvz00_2255))
									{	/* Reduce/copy.scm 221 */
										obj_t BgL_arg1573z00_2257;

										BgL_arg1573z00_2257 = CDR(((obj_t) BgL_l1265z00_2254));
										{
											obj_t BgL_l1265z00_2792;

											BgL_l1265z00_2792 = BgL_arg1573z00_2257;
											BgL_l1265z00_2254 = BgL_l1265z00_2792;
											goto BgL_zc3z04anonymousza31565ze3z87_2253;
										}
									}
								else
									{	/* Reduce/copy.scm 221 */
										BgL_tmpz00_2779 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2779);
			}
		}

	}



/* &copyable?-sequence1316 */
	obj_t BGl_z62copyablezf3zd2sequence1316z43zzreduce_copyz00(obj_t
		BgL_envz00_2131, obj_t BgL_nodez00_2132, obj_t BgL_vz00_2133)
	{
		{	/* Reduce/copy.scm 212 */
			{	/* Reduce/copy.scm 213 */
				bool_t BgL_tmpz00_2794;

				{	/* Reduce/copy.scm 214 */
					obj_t BgL_g1263z00_2259;

					BgL_g1263z00_2259 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2132)))->BgL_nodesz00);
					{
						obj_t BgL_l1261z00_2261;

						BgL_l1261z00_2261 = BgL_g1263z00_2259;
					BgL_zc3z04anonymousza31562ze3z87_2260:
						if (NULLP(BgL_l1261z00_2261))
							{	/* Reduce/copy.scm 214 */
								BgL_tmpz00_2794 = ((bool_t) 1);
							}
						else
							{	/* Reduce/copy.scm 214 */
								obj_t BgL_nvz00_2262;

								{	/* Reduce/copy.scm 214 */
									obj_t BgL_nz00_2263;

									BgL_nz00_2263 = CAR(((obj_t) BgL_l1261z00_2261));
									BgL_nvz00_2262 =
										BGl_copyablezf3zf3zzreduce_copyz00(BgL_nz00_2263,
										BgL_vz00_2133);
								}
								if (CBOOL(BgL_nvz00_2262))
									{	/* Reduce/copy.scm 214 */
										obj_t BgL_arg1564z00_2264;

										BgL_arg1564z00_2264 = CDR(((obj_t) BgL_l1261z00_2261));
										{
											obj_t BgL_l1261z00_2806;

											BgL_l1261z00_2806 = BgL_arg1564z00_2264;
											BgL_l1261z00_2261 = BgL_l1261z00_2806;
											goto BgL_zc3z04anonymousza31562ze3z87_2260;
										}
									}
								else
									{	/* Reduce/copy.scm 214 */
										BgL_tmpz00_2794 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2794);
			}
		}

	}



/* &copyable?-var1314 */
	obj_t BGl_z62copyablezf3zd2var1314z43zzreduce_copyz00(obj_t BgL_envz00_2134,
		obj_t BgL_nodez00_2135, obj_t BgL_vz00_2136)
	{
		{	/* Reduce/copy.scm 206 */
			return
				BBOOL(
				((((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_2135)))->
									BgL_variablez00)))->BgL_accessz00) ==
					CNST_TABLE_REF(((long) 2))));
		}

	}



/* &copyable?-atom1312 */
	obj_t BGl_z62copyablezf3zd2atom1312z43zzreduce_copyz00(obj_t BgL_envz00_2137,
		obj_t BgL_nodez00_2138, obj_t BgL_vz00_2139)
	{
		{	/* Reduce/copy.scm 200 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &node-copy!-let-fun1308 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2letzd2fun1308za2zzreduce_copyz00(obj_t
		BgL_envz00_2140, obj_t BgL_nodez00_2141)
	{
		{	/* Reduce/copy.scm 180 */
			{	/* Reduce/copy.scm 182 */
				obj_t BgL_g1260z00_2268;

				BgL_g1260z00_2268 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2141)))->BgL_localsz00);
				{
					obj_t BgL_l1258z00_2270;

					BgL_l1258z00_2270 = BgL_g1260z00_2268;
				BgL_zc3z04anonymousza31529ze3z87_2269:
					if (PAIRP(BgL_l1258z00_2270))
						{	/* Reduce/copy.scm 182 */
							{	/* Reduce/copy.scm 183 */
								obj_t BgL_localz00_2271;

								BgL_localz00_2271 = CAR(BgL_l1258z00_2270);
								{	/* Reduce/copy.scm 183 */
									BgL_valuez00_bglt BgL_funz00_2272;

									BgL_funz00_2272 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2271))))->
										BgL_valuez00);
									{	/* Reduce/copy.scm 184 */
										BgL_nodez00_bglt BgL_arg1536z00_2273;

										{	/* Reduce/copy.scm 184 */
											obj_t BgL_arg1537z00_2274;

											BgL_arg1537z00_2274 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2272)))->
												BgL_bodyz00);
											BgL_arg1536z00_2273 =
												BGl_nodezd2copyz12zc0zzreduce_copyz00((
													(BgL_nodez00_bglt) BgL_arg1537z00_2274));
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2272)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1536z00_2273)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1258z00_2830;

								BgL_l1258z00_2830 = CDR(BgL_l1258z00_2270);
								BgL_l1258z00_2270 = BgL_l1258z00_2830;
								goto BgL_zc3z04anonymousza31529ze3z87_2269;
							}
						}
					else
						{	/* Reduce/copy.scm 182 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2832;

				{	/* Reduce/copy.scm 186 */
					BgL_nodez00_bglt BgL_arg1552z00_2275;

					BgL_arg1552z00_2275 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2141)))->BgL_bodyz00);
					BgL_auxz00_2832 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1552z00_2275);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2141)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2832), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2141));
		}

	}



/* &node-copy!-switch1306 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2switch1306z70zzreduce_copyz00(obj_t
		BgL_envz00_2142, obj_t BgL_nodez00_2143)
	{
		{	/* Reduce/copy.scm 169 */
			{
				BgL_nodez00_bglt BgL_auxz00_2840;

				{	/* Reduce/copy.scm 171 */
					BgL_nodez00_bglt BgL_arg1497z00_2277;

					BgL_arg1497z00_2277 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2143)))->BgL_testz00);
					BgL_auxz00_2840 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1497z00_2277);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2143)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2840), BUNSPEC);
			}
			{	/* Reduce/copy.scm 172 */
				obj_t BgL_g1257z00_2278;

				BgL_g1257z00_2278 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2143)))->BgL_clausesz00);
				{
					obj_t BgL_l1255z00_2280;

					BgL_l1255z00_2280 = BgL_g1257z00_2278;
				BgL_zc3z04anonymousza31498ze3z87_2279:
					if (PAIRP(BgL_l1255z00_2280))
						{	/* Reduce/copy.scm 172 */
							{	/* Reduce/copy.scm 173 */
								obj_t BgL_clausez00_2281;

								BgL_clausez00_2281 = CAR(BgL_l1255z00_2280);
								{	/* Reduce/copy.scm 173 */
									BgL_nodez00_bglt BgL_arg1518z00_2282;

									{	/* Reduce/copy.scm 173 */
										obj_t BgL_arg1521z00_2283;

										BgL_arg1521z00_2283 = CDR(((obj_t) BgL_clausez00_2281));
										BgL_arg1518z00_2282 =
											BGl_nodezd2copyz12zc0zzreduce_copyz00(
											((BgL_nodez00_bglt) BgL_arg1521z00_2283));
									}
									{	/* Reduce/copy.scm 173 */
										obj_t BgL_auxz00_2857;
										obj_t BgL_tmpz00_2855;

										BgL_auxz00_2857 = ((obj_t) BgL_arg1518z00_2282);
										BgL_tmpz00_2855 = ((obj_t) BgL_clausez00_2281);
										SET_CDR(BgL_tmpz00_2855, BgL_auxz00_2857);
									}
								}
							}
							{
								obj_t BgL_l1255z00_2860;

								BgL_l1255z00_2860 = CDR(BgL_l1255z00_2280);
								BgL_l1255z00_2280 = BgL_l1255z00_2860;
								goto BgL_zc3z04anonymousza31498ze3z87_2279;
							}
						}
					else
						{	/* Reduce/copy.scm 172 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2143));
		}

	}



/* &node-copy!-fail1304 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2fail1304z70zzreduce_copyz00(obj_t
		BgL_envz00_2144, obj_t BgL_nodez00_2145)
	{
		{	/* Reduce/copy.scm 159 */
			{
				BgL_nodez00_bglt BgL_auxz00_2864;

				{	/* Reduce/copy.scm 161 */
					BgL_nodez00_bglt BgL_arg1489z00_2285;

					BgL_arg1489z00_2285 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_procz00);
					BgL_auxz00_2864 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1489z00_2285);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2864), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2870;

				{	/* Reduce/copy.scm 162 */
					BgL_nodez00_bglt BgL_arg1493z00_2286;

					BgL_arg1493z00_2286 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_msgz00);
					BgL_auxz00_2870 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1493z00_2286);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2870), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2876;

				{	/* Reduce/copy.scm 163 */
					BgL_nodez00_bglt BgL_arg1495z00_2287;

					BgL_arg1495z00_2287 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_objz00);
					BgL_auxz00_2876 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1495z00_2287);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2145)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2876), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2145));
		}

	}



/* &node-copy!-condition1302 */
	BgL_nodez00_bglt
		BGl_z62nodezd2copyz12zd2condition1302z70zzreduce_copyz00(obj_t
		BgL_envz00_2146, obj_t BgL_nodez00_2147)
	{
		{	/* Reduce/copy.scm 149 */
			{
				BgL_nodez00_bglt BgL_auxz00_2884;

				{	/* Reduce/copy.scm 151 */
					BgL_nodez00_bglt BgL_arg1474z00_2289;

					BgL_arg1474z00_2289 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_testz00);
					BgL_auxz00_2884 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1474z00_2289);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2884), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2890;

				{	/* Reduce/copy.scm 152 */
					BgL_nodez00_bglt BgL_arg1476z00_2290;

					BgL_arg1476z00_2290 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_truez00);
					BgL_auxz00_2890 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1476z00_2290);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2890), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2896;

				{	/* Reduce/copy.scm 153 */
					BgL_nodez00_bglt BgL_arg1477z00_2291;

					BgL_arg1477z00_2291 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_falsez00);
					BgL_auxz00_2896 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1477z00_2291);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2147)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2896), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2147));
		}

	}



/* &node-copy!-setq1300 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2setq1300z70zzreduce_copyz00(obj_t
		BgL_envz00_2148, obj_t BgL_nodez00_2149)
	{
		{	/* Reduce/copy.scm 140 */
			{
				BgL_nodez00_bglt BgL_auxz00_2904;

				{	/* Reduce/copy.scm 142 */
					BgL_nodez00_bglt BgL_arg1464z00_2293;

					BgL_arg1464z00_2293 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2149)))->BgL_valuez00);
					BgL_auxz00_2904 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1464z00_2293);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2149)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2904), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2910;

				{	/* Reduce/copy.scm 143 */
					BgL_varz00_bglt BgL_arg1465z00_2294;

					BgL_arg1465z00_2294 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2149)))->BgL_varz00);
					BgL_auxz00_2910 =
						((BgL_varz00_bglt)
						BGl_nodezd2copyz12zc0zzreduce_copyz00(
							((BgL_nodez00_bglt) BgL_arg1465z00_2294)));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2149)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2910), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2149));
		}

	}



/* &node-copy!-cast1298 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2cast1298z70zzreduce_copyz00(obj_t
		BgL_envz00_2150, obj_t BgL_nodez00_2151)
	{
		{	/* Reduce/copy.scm 132 */
			{
				BgL_nodez00_bglt BgL_auxz00_2920;

				{	/* Reduce/copy.scm 134 */
					BgL_nodez00_bglt BgL_arg1462z00_2296;

					BgL_arg1462z00_2296 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2151)))->BgL_argz00);
					BgL_auxz00_2920 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1462z00_2296);
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2151)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2920), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2151));
		}

	}



/* &node-copy!-extern1296 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2extern1296z70zzreduce_copyz00(obj_t
		BgL_envz00_2152, obj_t BgL_nodez00_2153)
	{
		{	/* Reduce/copy.scm 124 */
			BGl_nodezd2copyza2z12z62zzreduce_copyz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2153)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2153));
		}

	}



/* &node-copy!-funcall1294 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2funcall1294z70zzreduce_copyz00(obj_t
		BgL_envz00_2154, obj_t BgL_nodez00_2155)
	{
		{	/* Reduce/copy.scm 115 */
			{
				BgL_nodez00_bglt BgL_auxz00_2933;

				{	/* Reduce/copy.scm 117 */
					BgL_nodez00_bglt BgL_arg1448z00_2299;

					BgL_arg1448z00_2299 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2155)))->BgL_funz00);
					BgL_auxz00_2933 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1448z00_2299);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2155)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2933), BUNSPEC);
			}
			BGl_nodezd2copyza2z12z62zzreduce_copyz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2155)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2155));
		}

	}



/* &node-copy!-app-ly1292 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2appzd2ly1292za2zzreduce_copyz00(obj_t
		BgL_envz00_2156, obj_t BgL_nodez00_2157)
	{
		{	/* Reduce/copy.scm 106 */
			{
				BgL_nodez00_bglt BgL_auxz00_2944;

				{	/* Reduce/copy.scm 108 */
					BgL_nodez00_bglt BgL_arg1441z00_2301;

					BgL_arg1441z00_2301 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2157)))->BgL_funz00);
					BgL_auxz00_2944 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1441z00_2301);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2157)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2944), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2950;

				{	/* Reduce/copy.scm 109 */
					BgL_nodez00_bglt BgL_arg1442z00_2302;

					BgL_arg1442z00_2302 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2157)))->BgL_argz00);
					BgL_auxz00_2950 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1442z00_2302);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2157)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2950), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2157));
		}

	}



/* &node-copy!-sync1290 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2sync1290z70zzreduce_copyz00(obj_t
		BgL_envz00_2158, obj_t BgL_nodez00_2159)
	{
		{	/* Reduce/copy.scm 96 */
			{
				BgL_nodez00_bglt BgL_auxz00_2958;

				{	/* Reduce/copy.scm 98 */
					BgL_nodez00_bglt BgL_arg1418z00_2304;

					BgL_arg1418z00_2304 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_mutexz00);
					BgL_auxz00_2958 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1418z00_2304);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2958), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2964;

				{	/* Reduce/copy.scm 99 */
					BgL_nodez00_bglt BgL_arg1421z00_2305;

					BgL_arg1421z00_2305 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_prelockz00);
					BgL_auxz00_2964 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1421z00_2305);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2964), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2970;

				{	/* Reduce/copy.scm 100 */
					BgL_nodez00_bglt BgL_arg1422z00_2306;

					BgL_arg1422z00_2306 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_bodyz00);
					BgL_auxz00_2970 =
						BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_arg1422z00_2306);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2159)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2970), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2159));
		}

	}



/* &node-copy!-sequence1288 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2sequence1288z70zzreduce_copyz00(obj_t
		BgL_envz00_2160, obj_t BgL_nodez00_2161)
	{
		{	/* Reduce/copy.scm 88 */
			BGl_nodezd2copyza2z12z62zzreduce_copyz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2161)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2161));
		}

	}



/* &node-copy!-closure1286 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2closure1286z70zzreduce_copyz00(obj_t
		BgL_envz00_2162, obj_t BgL_nodez00_2163)
	{
		{	/* Reduce/copy.scm 82 */
			return ((BgL_nodez00_bglt) ((BgL_closurez00_bglt) BgL_nodez00_2163));
		}

	}



/* &node-copy!-var1284 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2var1284z70zzreduce_copyz00(obj_t
		BgL_envz00_2164, obj_t BgL_nodez00_2165)
	{
		{	/* Reduce/copy.scm 72 */
			{	/* Reduce/copy.scm 73 */
				BgL_variablez00_bglt BgL_vz00_2310;

				BgL_vz00_2310 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2165)))->BgL_variablez00);
				{	/* Reduce/copy.scm 74 */
					obj_t BgL_falphaz00_2311;

					BgL_falphaz00_2311 =
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2310))->
						BgL_fastzd2alphazd2);
					if ((BgL_falphaz00_2311 == BUNSPEC))
						{	/* Reduce/copy.scm 75 */
							return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2165));
						}
					else
						{	/* Reduce/copy.scm 76 */
							obj_t BgL_arg1394z00_2312;
							BgL_nodez00_bglt BgL_arg1396z00_2313;

							BgL_arg1394z00_2312 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_2165))))->BgL_locz00);
							BgL_arg1396z00_2313 =
								BGl_nodezd2copyz12zc0zzreduce_copyz00(
								((BgL_nodez00_bglt) BgL_falphaz00_2311));
							return
								BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL,
								BgL_arg1394z00_2312, BgL_arg1396z00_2313);
						}
				}
			}
		}

	}



/* &node-copy!-kwote1282 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2kwote1282z70zzreduce_copyz00(obj_t
		BgL_envz00_2166, obj_t BgL_nodez00_2167)
	{
		{	/* Reduce/copy.scm 66 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2167));
		}

	}



/* &node-copy!-atom1280 */
	BgL_nodez00_bglt BGl_z62nodezd2copyz12zd2atom1280z70zzreduce_copyz00(obj_t
		BgL_envz00_2168, obj_t BgL_nodez00_2169)
	{
		{	/* Reduce/copy.scm 60 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2169));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_copyz00()
	{
		{	/* Reduce/copy.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 53595756),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1912z00zzreduce_copyz00));
		}

	}

#ifdef __cplusplus
}
#endif
