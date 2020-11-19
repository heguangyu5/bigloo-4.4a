/*===========================================================================*/
/*   (Reduce/ftypec.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/ftypec.scm) */
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


	BGL_EXPORTED_DECL obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21303z70zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_nodez00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2conditio1291z70zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sync1279z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2funcall1283z70zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2fail1293z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2appzd2ly1281za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62reducezd2flowzd2typezd2checkz12za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12za2zzreduce_flowzd2typeczd2(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2extern1285z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static long BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2;
	static obj_t BGl_gczd2rootszd2initz00zzreduce_flowzd2typeczd2();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2app1311z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2setz121307zb0zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1301z70zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2makezd2box1305za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2 =
		BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2fun1297za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2();
	static obj_t BGl_genericzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2ref1309za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2cast1287z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setq1289z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2var1299za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sequence1277z70zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(obj_t, obj_t);
	static long BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
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
	static BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2switch1295z70zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62nodezd2typecz121274za2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1815z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1815za700za7za7r1847za7, "      flow type check        ", 29);
	      DEFINE_STRING(BGl_string1816z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1816za700za7za7r1848za7, ")\n", 2);
	      DEFINE_STRING(BGl_string1817z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1817za700za7za7r1849za7, ", remaining: ", 13);
	      DEFINE_STRING(BGl_string1818z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1818za700za7za7r1850za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string1820z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1820za700za7za7r1851za7, "node-typec!1274", 15);
	      DEFINE_STRING(BGl_string1822z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1822za700za7za7r1852za7, "node-typec!", 11);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71853za7,
		BGl_z62nodezd2typecz12za2zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1840za700za7za7r1854za7, "reduce_flow-typec", 17);
	      DEFINE_STRING(BGl_string1841z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string1841za700za7za7r1855za7, "read done ", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1819z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71856za7,
		BGl_z62nodezd2typecz121274za2zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71857za7,
		BGl_z62nodezd2typecz12zd2sequence1277z70zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1823z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71858za7,
		BGl_z62nodezd2typecz12zd2sync1279z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1824z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71859za7,
		BGl_z62nodezd2typecz12zd2appzd2ly1281za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1825z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71860za7,
		BGl_z62nodezd2typecz12zd2funcall1283z70zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1826z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71861za7,
		BGl_z62nodezd2typecz12zd2extern1285z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1827z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71862za7,
		BGl_z62nodezd2typecz12zd2cast1287z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1828z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71863za7,
		BGl_z62nodezd2typecz12zd2setq1289z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1829z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71864za7,
		BGl_z62nodezd2typecz12zd2conditio1291z70zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1830z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71865za7,
		BGl_z62nodezd2typecz12zd2fail1293z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1831z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71866za7,
		BGl_z62nodezd2typecz12zd2switch1295z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1832z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71867za7,
		BGl_z62nodezd2typecz12zd2letzd2fun1297za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1833z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71868za7,
		BGl_z62nodezd2typecz12zd2letzd2var1299za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1834z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71869za7,
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1301z70zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1835z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71870za7,
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21303z70zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71871za7,
		BGl_z62nodezd2typecz12zd2makezd2box1305za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1837z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71872za7,
		BGl_z62nodezd2typecz12zd2boxzd2setz121307zb0zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1838z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71873za7,
		BGl_z62nodezd2typecz12zd2boxzd2ref1309za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1839z00zzreduce_flowzd2typeczd2,
		BgL_bgl_za762nodeza7d2typecza71874za7,
		BGl_z62nodezd2typecz12zd2app1311z70zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2flowzd2typezd2checkz12zd2envz12zzreduce_flowzd2typeczd2,
		BgL_bgl_za762reduceza7d2flow1875z00,
		BGl_z62reducezd2flowzd2typezd2checkz12za2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long
		BgL_checksumz00_2338, char *BgL_fromz00_2339)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2))
				{
					BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_flowzd2typeczd2();
					BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
					BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2();
					BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
					BGl_genericzd2initzd2zzreduce_flowzd2typeczd2();
					BGl_methodzd2initzd2zzreduce_flowzd2typeczd2();
					return BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_flow-typec");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			{	/* Reduce/ftypec.scm 15 */
				obj_t BgL_cportz00_2238;

				{	/* Reduce/ftypec.scm 15 */
					obj_t BgL_stringz00_2246;

					BgL_stringz00_2246 = BGl_string1841z00zzreduce_flowzd2typeczd2;
					{	/* Reduce/ftypec.scm 15 */
						obj_t BgL_startz00_2247;

						BgL_startz00_2247 = BINT(((long) 0));
						{	/* Reduce/ftypec.scm 15 */
							obj_t BgL_endz00_2248;

							BgL_endz00_2248 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2246)));
							{	/* Reduce/ftypec.scm 15 */

								BgL_cportz00_2238 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2246, BgL_startz00_2247, BgL_endz00_2248);
				}}}}
				{
					long BgL_iz00_2239;

					BgL_iz00_2239 = ((long) 1);
				BgL_loopz00_2240:
					if ((BgL_iz00_2239 == ((long) -1)))
						{	/* Reduce/ftypec.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/ftypec.scm 15 */
							{	/* Reduce/ftypec.scm 15 */
								obj_t BgL_arg1845z00_2242;

								{	/* Reduce/ftypec.scm 15 */

									{	/* Reduce/ftypec.scm 15 */
										obj_t BgL_locationz00_2244;

										BgL_locationz00_2244 = BBOOL(((bool_t) 0));
										{	/* Reduce/ftypec.scm 15 */

											BgL_arg1845z00_2242 =
												BGl_readz00zz__readerz00(BgL_cportz00_2238,
												BgL_locationz00_2244);
										}
									}
								}
								{	/* Reduce/ftypec.scm 15 */
									int BgL_tmpz00_2367;

									BgL_tmpz00_2367 = (int) (BgL_iz00_2239);
									CNST_TABLE_SET(BgL_tmpz00_2367, BgL_arg1845z00_2242);
							}}
							{	/* Reduce/ftypec.scm 15 */
								int BgL_auxz00_2245;

								BgL_auxz00_2245 = (int) ((BgL_iz00_2239 - ((long) 1)));
								{
									long BgL_iz00_2372;

									BgL_iz00_2372 = (long) (BgL_auxz00_2245);
									BgL_iz00_2239 = BgL_iz00_2372;
									goto BgL_loopz00_2240;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2 =
				((long) 0);
			BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2 = ((long) 0);
			return BUNSPEC;
		}

	}



/* reduce-flow-type-check! */
	BGL_EXPORTED_DEF obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/ftypec.scm 54 */
			{	/* Reduce/ftypec.scm 55 */
				obj_t BgL_list1316z00_1590;

				BgL_list1316z00_1590 =
					MAKE_YOUNG_PAIR(BGl_string1815z00zzreduce_flowzd2typeczd2, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1316z00_1590);
			}
			{
				obj_t BgL_l1263z00_1592;

				BgL_l1263z00_1592 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31317ze3z87_1593:
				if (PAIRP(BgL_l1263z00_1592))
					{	/* Reduce/ftypec.scm 56 */
						{	/* Reduce/ftypec.scm 57 */
							obj_t BgL_globalz00_1595;

							BgL_globalz00_1595 = CAR(BgL_l1263z00_1592);
							{	/* Reduce/ftypec.scm 57 */
								BgL_valuez00_bglt BgL_funz00_1596;

								BgL_funz00_1596 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1595))))->
									BgL_valuez00);
								{	/* Reduce/ftypec.scm 57 */
									obj_t BgL_nodez00_1597;

									BgL_nodez00_1597 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1596)))->BgL_bodyz00);
									{	/* Reduce/ftypec.scm 58 */

										{	/* Reduce/ftypec.scm 59 */
											BgL_nodez00_bglt BgL_arg1319z00_1598;

											BgL_arg1319z00_1598 =
												BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
												((BgL_nodez00_bglt) BgL_nodez00_1597), BNIL);
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1596)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1319z00_1598)), BUNSPEC);
										}
										BUNSPEC;
									}
								}
							}
						}
						{
							obj_t BgL_l1263z00_2391;

							BgL_l1263z00_2391 = CDR(BgL_l1263z00_1592);
							BgL_l1263z00_1592 = BgL_l1263z00_2391;
							goto BgL_zc3z04anonymousza31317ze3z87_1593;
						}
					}
				else
					{	/* Reduce/ftypec.scm 56 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/ftypec.scm 62 */
				obj_t BgL_list1323z00_1601;

				{	/* Reduce/ftypec.scm 62 */
					obj_t BgL_arg1324z00_1602;

					{	/* Reduce/ftypec.scm 62 */
						obj_t BgL_arg1325z00_1603;

						{	/* Reduce/ftypec.scm 62 */
							obj_t BgL_arg1326z00_1604;

							{	/* Reduce/ftypec.scm 62 */
								obj_t BgL_arg1327z00_1605;

								BgL_arg1327z00_1605 =
									MAKE_YOUNG_PAIR(BGl_string1816z00zzreduce_flowzd2typeczd2,
									BNIL);
								BgL_arg1326z00_1604 =
									MAKE_YOUNG_PAIR(BINT
									(BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2),
									BgL_arg1327z00_1605);
							}
							BgL_arg1325z00_1603 =
								MAKE_YOUNG_PAIR(BGl_string1817z00zzreduce_flowzd2typeczd2,
								BgL_arg1326z00_1604);
						}
						BgL_arg1324z00_1602 =
							MAKE_YOUNG_PAIR(BINT
							(BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2),
							BgL_arg1325z00_1603);
					}
					BgL_list1323z00_1601 =
						MAKE_YOUNG_PAIR(BGl_string1818z00zzreduce_flowzd2typeczd2,
						BgL_arg1324z00_1602);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1323z00_1601);
			}
			return BgL_globalsz00_3;
		}

	}



/* &reduce-flow-type-check! */
	obj_t BGl_z62reducezd2flowzd2typezd2checkz12za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2157, obj_t BgL_globalsz00_2158)
	{
		{	/* Reduce/ftypec.scm 54 */
			return
				BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2
				(BgL_globalsz00_2158);
		}

	}



/* node-typec*! */
	obj_t BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(obj_t
		BgL_nodeza2za2_40, obj_t BgL_stackz00_41)
	{
		{	/* Reduce/ftypec.scm 303 */
			{
				obj_t BgL_nodeza2za2_1607;

				BgL_nodeza2za2_1607 = BgL_nodeza2za2_40;
			BgL_zc3z04anonymousza31328ze3z87_1608:
				if (NULLP(BgL_nodeza2za2_1607))
					{	/* Reduce/ftypec.scm 305 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/ftypec.scm 305 */
						{	/* Reduce/ftypec.scm 308 */
							BgL_nodez00_bglt BgL_arg1330z00_1610;

							{	/* Reduce/ftypec.scm 308 */
								obj_t BgL_arg1331z00_1611;

								BgL_arg1331z00_1611 = CAR(((obj_t) BgL_nodeza2za2_1607));
								BgL_arg1330z00_1610 =
									BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
									((BgL_nodez00_bglt) BgL_arg1331z00_1611), BgL_stackz00_41);
							}
							{	/* Reduce/ftypec.scm 308 */
								obj_t BgL_auxz00_2412;
								obj_t BgL_tmpz00_2410;

								BgL_auxz00_2412 = ((obj_t) BgL_arg1330z00_1610);
								BgL_tmpz00_2410 = ((obj_t) BgL_nodeza2za2_1607);
								SET_CAR(BgL_tmpz00_2410, BgL_auxz00_2412);
							}
						}
						{	/* Reduce/ftypec.scm 309 */
							obj_t BgL_arg1334z00_1612;

							BgL_arg1334z00_1612 = CDR(((obj_t) BgL_nodeza2za2_1607));
							{
								obj_t BgL_nodeza2za2_2417;

								BgL_nodeza2za2_2417 = BgL_arg1334z00_1612;
								BgL_nodeza2za2_1607 = BgL_nodeza2za2_2417;
								goto BgL_zc3z04anonymousza31328ze3z87_1608;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_proc1819z00zzreduce_flowzd2typeczd2, BGl_nodez00zzast_nodez00,
				BGl_string1820z00zzreduce_flowzd2typeczd2);
		}

	}



/* &node-typec!1274 */
	obj_t BGl_z62nodezd2typecz121274za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2160, obj_t BgL_nodez00_2161, obj_t BgL_stackz00_2162)
	{
		{	/* Reduce/ftypec.scm 76 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2161));
		}

	}



/* node-typec! */
	BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_nodez00_bglt
		BgL_nodez00_4, obj_t BgL_stackz00_5)
	{
		{	/* Reduce/ftypec.scm 76 */
			{	/* Reduce/ftypec.scm 76 */
				obj_t BgL_method1275z00_1619;

				{	/* Reduce/ftypec.scm 76 */
					obj_t BgL_res1803z00_2097;

					{	/* Reduce/ftypec.scm 76 */
						long BgL_objzd2classzd2numz00_2062;

						{	/* Reduce/ftypec.scm 76 */
							long BgL_res1793z00_2065;

							BgL_res1793z00_2065 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_2062 = BgL_res1793z00_2065;
						}
						{	/* Reduce/ftypec.scm 76 */
							obj_t BgL_arg1813z00_2063;

							BgL_arg1813z00_2063 =
								PROCEDURE_REF
								(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
								(int) (((long) 1)));
							{	/* Reduce/ftypec.scm 76 */
								int BgL_offsetz00_2067;

								BgL_offsetz00_2067 = (int) (BgL_objzd2classzd2numz00_2062);
								{	/* Reduce/ftypec.scm 76 */
									long BgL_offsetz00_2068;

									BgL_offsetz00_2068 =
										((long) (BgL_offsetz00_2067) - OBJECT_TYPE);
									{	/* Reduce/ftypec.scm 76 */
										long BgL_modz00_2069;

										BgL_modz00_2069 =
											(BgL_offsetz00_2068 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/ftypec.scm 76 */
											long BgL_restz00_2071;

											BgL_restz00_2071 =
												(BgL_offsetz00_2068 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/ftypec.scm 76 */

												{	/* Reduce/ftypec.scm 76 */
													obj_t BgL_bucketz00_2073;

													BgL_bucketz00_2073 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2063), BgL_modz00_2069);
													BgL_res1803z00_2097 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2073), BgL_restz00_2071);
					}}}}}}}}
					BgL_method1275z00_1619 = BgL_res1803z00_2097;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1275z00_1619) (BgL_method1275z00_1619,
						((obj_t) BgL_nodez00_4), BgL_stackz00_5, BEOA));
			}
		}

	}



/* &node-typec! */
	BgL_nodez00_bglt BGl_z62nodezd2typecz12za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2163, obj_t BgL_nodez00_2164, obj_t BgL_stackz00_2165)
	{
		{	/* Reduce/ftypec.scm 76 */
			return
				BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
				((BgL_nodez00_bglt) BgL_nodez00_2164), BgL_stackz00_2165);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_sequencez00zzast_nodez00, BGl_proc1821z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_syncz00zzast_nodez00, BGl_proc1823z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1824z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_funcallz00zzast_nodez00, BGl_proc1825z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_externz00zzast_nodez00, BGl_proc1826z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_castz00zzast_nodez00, BGl_proc1827z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_setqz00zzast_nodez00, BGl_proc1828z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc1829z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_failz00zzast_nodez00, BGl_proc1830z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_switchz00zzast_nodez00, BGl_proc1831z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1832z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1833z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1834z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1835z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1836z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1837z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1838z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_appz00zzast_nodez00, BGl_proc1839z00zzreduce_flowzd2typeczd2,
				BGl_string1822z00zzreduce_flowzd2typeczd2);
		}

	}



/* &node-typec!-app1311 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2app1311z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2184, obj_t BgL_nodez00_2185, obj_t BgL_stackz00_2186)
	{
		{	/* Reduce/ftypec.scm 319 */
			BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2185)))->BgL_argsz00),
				BgL_stackz00_2186);
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2185));
		}

	}



/* &node-typec!-box-ref1309 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2ref1309za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2187, obj_t BgL_nodez00_2188, obj_t BgL_stackz00_2189)
	{
		{	/* Reduce/ftypec.scm 295 */
			{
				BgL_varz00_bglt BgL_auxz00_2478;

				{	/* Reduce/ftypec.scm 297 */
					BgL_varz00_bglt BgL_arg1631z00_2254;

					BgL_arg1631z00_2254 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2188)))->BgL_varz00);
					BgL_auxz00_2478 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
							((BgL_nodez00_bglt) BgL_arg1631z00_2254), BgL_stackz00_2189));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2188)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2478), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2188));
		}

	}



/* &node-typec!-box-set!1307 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2boxzd2setz121307zb0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2190, obj_t BgL_nodez00_2191, obj_t BgL_stackz00_2192)
	{
		{	/* Reduce/ftypec.scm 286 */
			{
				BgL_varz00_bglt BgL_auxz00_2488;

				{	/* Reduce/ftypec.scm 288 */
					BgL_varz00_bglt BgL_arg1626z00_2256;

					BgL_arg1626z00_2256 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2191)))->BgL_varz00);
					BgL_auxz00_2488 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
							((BgL_nodez00_bglt) BgL_arg1626z00_2256), BgL_stackz00_2192));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2191)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2488), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2496;

				{	/* Reduce/ftypec.scm 289 */
					BgL_nodez00_bglt BgL_arg1627z00_2257;

					BgL_arg1627z00_2257 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2191)))->BgL_valuez00);
					BgL_auxz00_2496 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1627z00_2257,
						BgL_stackz00_2192);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2191)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2496), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2191));
		}

	}



/* &node-typec!-make-box1305 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2makezd2box1305za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2193, obj_t BgL_nodez00_2194, obj_t BgL_stackz00_2195)
	{
		{	/* Reduce/ftypec.scm 278 */
			{
				BgL_nodez00_bglt BgL_auxz00_2504;

				{	/* Reduce/ftypec.scm 280 */
					BgL_nodez00_bglt BgL_arg1624z00_2259;

					BgL_arg1624z00_2259 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2194)))->BgL_valuez00);
					BgL_auxz00_2504 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1624z00_2259,
						BgL_stackz00_2195);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2194)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2504), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2194));
		}

	}



/* &node-typec!-jump-ex-1303 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2jumpzd2exzd21303z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2196, obj_t BgL_nodez00_2197, obj_t BgL_stackz00_2198)
	{
		{	/* Reduce/ftypec.scm 269 */
			{
				BgL_nodez00_bglt BgL_auxz00_2512;

				{	/* Reduce/ftypec.scm 271 */
					BgL_nodez00_bglt BgL_arg1612z00_2261;

					BgL_arg1612z00_2261 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2197)))->BgL_exitz00);
					BgL_auxz00_2512 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1612z00_2261,
						BgL_stackz00_2198);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2197)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2512), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2518;

				{	/* Reduce/ftypec.scm 272 */
					BgL_nodez00_bglt BgL_arg1613z00_2262;

					BgL_arg1613z00_2262 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2197)))->
						BgL_valuez00);
					BgL_auxz00_2518 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1613z00_2262,
						BgL_stackz00_2198);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2197)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2518), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2197));
		}

	}



/* &node-typec!-set-ex-i1301 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setzd2exzd2i1301z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2199, obj_t BgL_nodez00_2200, obj_t BgL_stackz00_2201)
	{
		{	/* Reduce/ftypec.scm 260 */
			{
				BgL_nodez00_bglt BgL_auxz00_2526;

				{	/* Reduce/ftypec.scm 262 */
					BgL_nodez00_bglt BgL_arg1606z00_2264;

					BgL_arg1606z00_2264 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2200)))->BgL_bodyz00);
					BgL_auxz00_2526 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1606z00_2264,
						BgL_stackz00_2201);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2200)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2526), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2532;

				{	/* Reduce/ftypec.scm 263 */
					BgL_varz00_bglt BgL_arg1611z00_2265;

					BgL_arg1611z00_2265 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2200)))->BgL_varz00);
					BgL_auxz00_2532 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
							((BgL_nodez00_bglt) BgL_arg1611z00_2265), BgL_stackz00_2201));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2200)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2532), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2200));
		}

	}



/* &node-typec!-let-var1299 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2var1299za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2202, obj_t BgL_nodez00_2203, obj_t BgL_stackz00_2204)
	{
		{	/* Reduce/ftypec.scm 249 */
			{	/* Reduce/ftypec.scm 251 */
				obj_t BgL_g1273z00_2267;

				BgL_g1273z00_2267 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2203)))->BgL_bindingsz00);
				{
					obj_t BgL_l1271z00_2269;

					BgL_l1271z00_2269 = BgL_g1273z00_2267;
				BgL_zc3z04anonymousza31594ze3z87_2268:
					if (PAIRP(BgL_l1271z00_2269))
						{	/* Reduce/ftypec.scm 251 */
							{	/* Reduce/ftypec.scm 252 */
								obj_t BgL_bindingz00_2270;

								BgL_bindingz00_2270 = CAR(BgL_l1271z00_2269);
								{	/* Reduce/ftypec.scm 252 */
									BgL_nodez00_bglt BgL_arg1597z00_2271;

									{	/* Reduce/ftypec.scm 252 */
										obj_t BgL_arg1599z00_2272;

										BgL_arg1599z00_2272 = CDR(((obj_t) BgL_bindingz00_2270));
										BgL_arg1597z00_2271 =
											BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
											((BgL_nodez00_bglt) BgL_arg1599z00_2272),
											BgL_stackz00_2204);
									}
									{	/* Reduce/ftypec.scm 252 */
										obj_t BgL_auxz00_2553;
										obj_t BgL_tmpz00_2551;

										BgL_auxz00_2553 = ((obj_t) BgL_arg1597z00_2271);
										BgL_tmpz00_2551 = ((obj_t) BgL_bindingz00_2270);
										SET_CDR(BgL_tmpz00_2551, BgL_auxz00_2553);
									}
								}
							}
							{
								obj_t BgL_l1271z00_2556;

								BgL_l1271z00_2556 = CDR(BgL_l1271z00_2269);
								BgL_l1271z00_2269 = BgL_l1271z00_2556;
								goto BgL_zc3z04anonymousza31594ze3z87_2268;
							}
						}
					else
						{	/* Reduce/ftypec.scm 251 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2558;

				{	/* Reduce/ftypec.scm 254 */
					BgL_nodez00_bglt BgL_arg1605z00_2273;

					BgL_arg1605z00_2273 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2203)))->BgL_bodyz00);
					BgL_auxz00_2558 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1605z00_2273,
						BgL_stackz00_2204);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2203)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2558), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2203));
		}

	}



/* &node-typec!-let-fun1297 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2letzd2fun1297za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2205, obj_t BgL_nodez00_2206, obj_t BgL_stackz00_2207)
	{
		{	/* Reduce/ftypec.scm 237 */
			{	/* Reduce/ftypec.scm 239 */
				obj_t BgL_g1270z00_2275;

				BgL_g1270z00_2275 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2206)))->BgL_localsz00);
				{
					obj_t BgL_l1268z00_2277;

					BgL_l1268z00_2277 = BgL_g1270z00_2275;
				BgL_zc3z04anonymousza31585ze3z87_2276:
					if (PAIRP(BgL_l1268z00_2277))
						{	/* Reduce/ftypec.scm 239 */
							{	/* Reduce/ftypec.scm 240 */
								obj_t BgL_localz00_2278;

								BgL_localz00_2278 = CAR(BgL_l1268z00_2277);
								{	/* Reduce/ftypec.scm 240 */
									BgL_valuez00_bglt BgL_funz00_2279;

									BgL_funz00_2279 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2278))))->
										BgL_valuez00);
									{	/* Reduce/ftypec.scm 241 */
										BgL_nodez00_bglt BgL_arg1588z00_2280;

										{	/* Reduce/ftypec.scm 241 */
											obj_t BgL_arg1589z00_2281;

											BgL_arg1589z00_2281 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2279)))->
												BgL_bodyz00);
											BgL_arg1588z00_2280 =
												BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2((
													(BgL_nodez00_bglt) BgL_arg1589z00_2281),
												BgL_stackz00_2207);
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2279)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1588z00_2280)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1268z00_2581;

								BgL_l1268z00_2581 = CDR(BgL_l1268z00_2277);
								BgL_l1268z00_2277 = BgL_l1268z00_2581;
								goto BgL_zc3z04anonymousza31585ze3z87_2276;
							}
						}
					else
						{	/* Reduce/ftypec.scm 239 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2583;

				{	/* Reduce/ftypec.scm 243 */
					BgL_nodez00_bglt BgL_arg1593z00_2282;

					BgL_arg1593z00_2282 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2206)))->BgL_bodyz00);
					BgL_auxz00_2583 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1593z00_2282,
						BgL_stackz00_2207);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2206)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2583), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2206));
		}

	}



/* &node-typec!-switch1295 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2switch1295z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2208, obj_t BgL_nodez00_2209, obj_t BgL_stackz00_2210)
	{
		{	/* Reduce/ftypec.scm 226 */
			{
				BgL_nodez00_bglt BgL_auxz00_2591;

				{	/* Reduce/ftypec.scm 228 */
					BgL_nodez00_bglt BgL_arg1573z00_2284;

					BgL_arg1573z00_2284 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2209)))->BgL_testz00);
					BgL_auxz00_2591 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1573z00_2284,
						BgL_stackz00_2210);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2209)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2591), BUNSPEC);
			}
			{	/* Reduce/ftypec.scm 229 */
				obj_t BgL_g1267z00_2285;

				BgL_g1267z00_2285 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2209)))->BgL_clausesz00);
				{
					obj_t BgL_l1265z00_2287;

					BgL_l1265z00_2287 = BgL_g1267z00_2285;
				BgL_zc3z04anonymousza31574ze3z87_2286:
					if (PAIRP(BgL_l1265z00_2287))
						{	/* Reduce/ftypec.scm 229 */
							{	/* Reduce/ftypec.scm 230 */
								obj_t BgL_clausez00_2288;

								BgL_clausez00_2288 = CAR(BgL_l1265z00_2287);
								{	/* Reduce/ftypec.scm 230 */
									BgL_nodez00_bglt BgL_arg1578z00_2289;

									{	/* Reduce/ftypec.scm 230 */
										obj_t BgL_arg1582z00_2290;

										BgL_arg1582z00_2290 = CDR(((obj_t) BgL_clausez00_2288));
										BgL_arg1578z00_2289 =
											BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
											((BgL_nodez00_bglt) BgL_arg1582z00_2290),
											BgL_stackz00_2210);
									}
									{	/* Reduce/ftypec.scm 230 */
										obj_t BgL_auxz00_2608;
										obj_t BgL_tmpz00_2606;

										BgL_auxz00_2608 = ((obj_t) BgL_arg1578z00_2289);
										BgL_tmpz00_2606 = ((obj_t) BgL_clausez00_2288);
										SET_CDR(BgL_tmpz00_2606, BgL_auxz00_2608);
									}
								}
							}
							{
								obj_t BgL_l1265z00_2611;

								BgL_l1265z00_2611 = CDR(BgL_l1265z00_2287);
								BgL_l1265z00_2287 = BgL_l1265z00_2611;
								goto BgL_zc3z04anonymousza31574ze3z87_2286;
							}
						}
					else
						{	/* Reduce/ftypec.scm 229 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2209));
		}

	}



/* &node-typec!-fail1293 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2fail1293z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2211, obj_t BgL_nodez00_2212, obj_t BgL_stackz00_2213)
	{
		{	/* Reduce/ftypec.scm 216 */
			{
				BgL_nodez00_bglt BgL_auxz00_2615;

				{	/* Reduce/ftypec.scm 218 */
					BgL_nodez00_bglt BgL_arg1561z00_2292;

					BgL_arg1561z00_2292 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_procz00);
					BgL_auxz00_2615 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1561z00_2292,
						BgL_stackz00_2213);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2615), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2621;

				{	/* Reduce/ftypec.scm 219 */
					BgL_nodez00_bglt BgL_arg1564z00_2293;

					BgL_arg1564z00_2293 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_msgz00);
					BgL_auxz00_2621 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1564z00_2293,
						BgL_stackz00_2213);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2621), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2627;

				{	/* Reduce/ftypec.scm 220 */
					BgL_nodez00_bglt BgL_arg1565z00_2294;

					BgL_arg1565z00_2294 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_objz00);
					BgL_auxz00_2627 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1565z00_2294,
						BgL_stackz00_2213);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2212)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2627), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2212));
		}

	}



/* &node-typec!-conditio1291 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2conditio1291z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2214, obj_t BgL_nodez00_2215, obj_t BgL_stackz00_2216)
	{
		{	/* Reduce/ftypec.scm 143 */
			{
				BgL_nodez00_bglt BgL_nodez00_2297;

				{
					BgL_nodez00_bglt BgL_auxz00_2635;

					{	/* Reduce/ftypec.scm 187 */
						BgL_nodez00_bglt BgL_arg1360z00_2306;

						BgL_arg1360z00_2306 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->BgL_testz00);
						BgL_auxz00_2635 =
							BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
							(BgL_arg1360z00_2306, BgL_stackz00_2216);
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_2635), BUNSPEC);
				}
				{	/* Reduce/ftypec.scm 188 */
					obj_t BgL_typecz00_2307;

					BgL_nodez00_2297 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->BgL_testz00);
					{	/* Reduce/ftypec.scm 145 */
						bool_t BgL_test1883z00_2641;

						{	/* Reduce/ftypec.scm 145 */
							bool_t BgL_res1804z00_2298;

							BgL_res1804z00_2298 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_nodez00_2297), BGl_appz00zzast_nodez00);
							BgL_test1883z00_2641 = BgL_res1804z00_2298;
						}
						if (BgL_test1883z00_2641)
							{	/* Reduce/ftypec.scm 147 */
								obj_t BgL_g1116z00_2299;

								BgL_g1116z00_2299 =
									BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_2297);
								if (CBOOL(BgL_g1116z00_2299))
									{	/* Reduce/ftypec.scm 151 */
										bool_t BgL_test1885z00_2647;

										{	/* Reduce/ftypec.scm 151 */
											obj_t BgL_arg1441z00_2300;

											{	/* Reduce/ftypec.scm 151 */
												obj_t BgL_pairz00_2301;

												BgL_pairz00_2301 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2297)))->
													BgL_argsz00);
												BgL_arg1441z00_2300 = CAR(BgL_pairz00_2301);
											}
											BgL_test1885z00_2647 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1441z00_2300,
												BGl_varz00zzast_nodez00);
										}
										if (BgL_test1885z00_2647)
											{	/* Reduce/ftypec.scm 151 */
												BgL_typecz00_2307 = BgL_g1116z00_2299;
											}
										else
											{	/* Reduce/ftypec.scm 151 */
												BgL_typecz00_2307 = BFALSE;
											}
									}
								else
									{	/* Reduce/ftypec.scm 155 */
										bool_t BgL_test1886z00_2652;

										{	/* Reduce/ftypec.scm 155 */
											obj_t BgL_tmpz00_2653;

											BgL_tmpz00_2653 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2297)))->
												BgL_argsz00);
											BgL_test1886z00_2652 = PAIRP(BgL_tmpz00_2653);
										}
										if (BgL_test1886z00_2652)
											{	/* Reduce/ftypec.scm 156 */
												bool_t BgL_test1887z00_2657;

												{	/* Reduce/ftypec.scm 156 */
													obj_t BgL_tmpz00_2658;

													{	/* Reduce/ftypec.scm 156 */
														obj_t BgL_pairz00_2302;

														BgL_pairz00_2302 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2297)))->
															BgL_argsz00);
														BgL_tmpz00_2658 = CDR(BgL_pairz00_2302);
													}
													BgL_test1887z00_2657 = NULLP(BgL_tmpz00_2658);
												}
												if (BgL_test1887z00_2657)
													{	/* Reduce/ftypec.scm 157 */
														bool_t BgL_test1888z00_2663;

														{	/* Reduce/ftypec.scm 157 */
															obj_t BgL_arg1465z00_2303;

															{	/* Reduce/ftypec.scm 157 */
																obj_t BgL_pairz00_2304;

																BgL_pairz00_2304 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2297)))->
																	BgL_argsz00);
																BgL_arg1465z00_2303 = CAR(BgL_pairz00_2304);
															}
															BgL_test1888z00_2663 =
																BGl_isazf3zf3zz__objectz00(BgL_arg1465z00_2303,
																BGl_varz00zzast_nodez00);
														}
														if (BgL_test1888z00_2663)
															{	/* Reduce/ftypec.scm 158 */
																bool_t BgL_test1889z00_2668;

																{	/* Reduce/ftypec.scm 158 */
																	obj_t BgL_tmpz00_2669;

																	{
																		BgL_variablez00_bglt BgL_auxz00_2670;

																		{
																			BgL_varz00_bglt BgL_auxz00_2671;

																			{	/* Reduce/ftypec.scm 158 */
																				obj_t BgL_pairz00_2305;

																				BgL_pairz00_2305 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								BgL_nodez00_2297)))->
																					BgL_argsz00);
																				BgL_auxz00_2671 =
																					((BgL_varz00_bglt)
																					CAR(BgL_pairz00_2305));
																			}
																			BgL_auxz00_2670 =
																				(((BgL_varz00_bglt)
																					COBJECT(BgL_auxz00_2671))->
																				BgL_variablez00);
																		}
																		BgL_tmpz00_2669 =
																			(((BgL_variablez00_bglt)
																				COBJECT(BgL_auxz00_2670))->
																			BgL_accessz00);
																	}
																	BgL_test1889z00_2668 =
																		(BgL_tmpz00_2669 ==
																		CNST_TABLE_REF(((long) 1)));
																}
																if (BgL_test1889z00_2668)
																	{	/* Reduce/ftypec.scm 161 */

																		BgL_typecz00_2307 =
																			(((BgL_funz00_bglt) COBJECT(
																					((BgL_funz00_bglt)
																						(((BgL_variablez00_bglt) COBJECT(
																									(((BgL_varz00_bglt) COBJECT(
																												(((BgL_appz00_bglt)
																														COBJECT((
																																(BgL_appz00_bglt)
																																BgL_nodez00_2297)))->
																													BgL_funz00)))->
																										BgL_variablez00)))->
																							BgL_valuez00))))->
																			BgL_predicatezd2ofzd2);
																	}
																else
																	{	/* Reduce/ftypec.scm 158 */
																		BgL_typecz00_2307 = BFALSE;
																	}
															}
														else
															{	/* Reduce/ftypec.scm 157 */
																BgL_typecz00_2307 = BFALSE;
															}
													}
												else
													{	/* Reduce/ftypec.scm 156 */
														BgL_typecz00_2307 = BFALSE;
													}
											}
										else
											{	/* Reduce/ftypec.scm 155 */
												BgL_typecz00_2307 = BFALSE;
											}
									}
							}
						else
							{	/* Reduce/ftypec.scm 145 */
								BgL_typecz00_2307 = BFALSE;
							}
					}
					if (BGl_isazf3zf3zz__objectz00(BgL_typecz00_2307,
							BGl_typez00zztype_typez00))
						{	/* Reduce/ftypec.scm 194 */
							obj_t BgL_argsz00_2308;

							BgL_argsz00_2308 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt)
											(((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->
												BgL_testz00))))->BgL_argsz00);
							{	/* Reduce/ftypec.scm 194 */
								BgL_variablez00_bglt BgL_varz00_2309;

								BgL_varz00_2309 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt)
												CAR(((obj_t) BgL_argsz00_2308)))))->BgL_variablez00);
								{	/* Reduce/ftypec.scm 195 */
									obj_t BgL_typesz00_2310;

									BgL_typesz00_2310 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
										((obj_t) BgL_varz00_2309), BgL_stackz00_2216);
									{	/* Reduce/ftypec.scm 196 */
										obj_t BgL_tzd2stackzd2_2311;

										{	/* Reduce/ftypec.scm 197 */
											obj_t BgL_arg1386z00_2312;

											{	/* Reduce/ftypec.scm 197 */
												obj_t BgL_arg1387z00_2313;

												BgL_arg1387z00_2313 =
													MAKE_YOUNG_PAIR(BgL_typecz00_2307, BTRUE);
												BgL_arg1386z00_2312 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_varz00_2309), BgL_arg1387z00_2313);
											}
											BgL_tzd2stackzd2_2311 =
												MAKE_YOUNG_PAIR(BgL_arg1386z00_2312, BgL_stackz00_2216);
										}
										{	/* Reduce/ftypec.scm 197 */
											obj_t BgL_fzd2stackzd2_2314;

											{	/* Reduce/ftypec.scm 198 */
												obj_t BgL_arg1384z00_2315;

												{	/* Reduce/ftypec.scm 198 */
													obj_t BgL_arg1385z00_2316;

													BgL_arg1385z00_2316 =
														MAKE_YOUNG_PAIR(BgL_typecz00_2307, BFALSE);
													BgL_arg1384z00_2315 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_varz00_2309), BgL_arg1385z00_2316);
												}
												BgL_fzd2stackzd2_2314 =
													MAKE_YOUNG_PAIR(BgL_arg1384z00_2315,
													BgL_stackz00_2216);
											}
											{	/* Reduce/ftypec.scm 198 */

												{	/* Reduce/ftypec.scm 199 */
													bool_t BgL_test1891z00_2708;

													if (CBOOL(BgL_typesz00_2310))
														{	/* Reduce/ftypec.scm 199 */
															bool_t BgL_test1893z00_2711;

															{	/* Reduce/ftypec.scm 199 */
																obj_t BgL_tmpz00_2712;

																{	/* Reduce/ftypec.scm 199 */
																	obj_t BgL_pairz00_2317;

																	BgL_pairz00_2317 =
																		CDR(((obj_t) BgL_typesz00_2310));
																	BgL_tmpz00_2712 = CAR(BgL_pairz00_2317);
																}
																BgL_test1893z00_2711 =
																	(BgL_tmpz00_2712 == BgL_typecz00_2307);
															}
															if (BgL_test1893z00_2711)
																{	/* Reduce/ftypec.scm 199 */
																	BgL_test1891z00_2708 = ((bool_t) 0);
																}
															else
																{	/* Reduce/ftypec.scm 199 */
																	BgL_test1891z00_2708 = ((bool_t) 1);
																}
														}
													else
														{	/* Reduce/ftypec.scm 199 */
															BgL_test1891z00_2708 = ((bool_t) 1);
														}
													if (BgL_test1891z00_2708)
														{	/* Reduce/ftypec.scm 199 */
															BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2);
															{
																BgL_nodez00_bglt BgL_auxz00_2718;

																{	/* Reduce/ftypec.scm 203 */
																	BgL_nodez00_bglt BgL_arg1370z00_2318;

																	BgL_arg1370z00_2318 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2215)))->BgL_truez00);
																	BgL_auxz00_2718 =
																		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
																		(BgL_arg1370z00_2318,
																		BgL_tzd2stackzd2_2311);
																}
																((((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2215)))->BgL_truez00) =
																	((BgL_nodez00_bglt) BgL_auxz00_2718),
																	BUNSPEC);
															}
															{
																BgL_nodez00_bglt BgL_auxz00_2724;

																{	/* Reduce/ftypec.scm 204 */
																	BgL_nodez00_bglt BgL_arg1371z00_2319;

																	BgL_arg1371z00_2319 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2215)))->BgL_falsez00);
																	BgL_auxz00_2724 =
																		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
																		(BgL_arg1371z00_2319,
																		BgL_fzd2stackzd2_2314);
																}
																((((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_2215)))->BgL_falsez00) =
																	((BgL_nodez00_bglt) BgL_auxz00_2724),
																	BUNSPEC);
															}
															return
																((BgL_nodez00_bglt)
																((BgL_conditionalz00_bglt) BgL_nodez00_2215));
														}
													else
														{	/* Reduce/ftypec.scm 199 */
															BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2);
															{	/* Reduce/ftypec.scm 209 */
																bool_t BgL_test1894z00_2733;

																{	/* Reduce/ftypec.scm 209 */
																	obj_t BgL_pairz00_2320;

																	BgL_pairz00_2320 =
																		CDR(((obj_t) BgL_typesz00_2310));
																	BgL_test1894z00_2733 =
																		CBOOL(CDR(BgL_pairz00_2320));
																}
																if (BgL_test1894z00_2733)
																	{	/* Reduce/ftypec.scm 209 */
																		return
																			BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
																			((((BgL_conditionalz00_bglt)
																					COBJECT(((BgL_conditionalz00_bglt)
																							BgL_nodez00_2215)))->BgL_truez00),
																			BgL_tzd2stackzd2_2311);
																	}
																else
																	{	/* Reduce/ftypec.scm 209 */
																		return
																			BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
																			((((BgL_conditionalz00_bglt)
																					COBJECT(((BgL_conditionalz00_bglt)
																							BgL_nodez00_2215)))->
																				BgL_falsez00), BgL_fzd2stackzd2_2314);
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
					else
						{	/* Reduce/ftypec.scm 189 */
							{
								BgL_nodez00_bglt BgL_auxz00_2744;

								{	/* Reduce/ftypec.scm 191 */
									BgL_nodez00_bglt BgL_arg1396z00_2321;

									BgL_arg1396z00_2321 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->
										BgL_truez00);
									BgL_auxz00_2744 =
										BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
										(BgL_arg1396z00_2321, BgL_stackz00_2216);
								}
								((((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->
										BgL_truez00) =
									((BgL_nodez00_bglt) BgL_auxz00_2744), BUNSPEC);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_2750;

								{	/* Reduce/ftypec.scm 192 */
									BgL_nodez00_bglt BgL_arg1417z00_2322;

									BgL_arg1417z00_2322 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->
										BgL_falsez00);
									BgL_auxz00_2750 =
										BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2
										(BgL_arg1417z00_2322, BgL_stackz00_2216);
								}
								((((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2215)))->
										BgL_falsez00) =
									((BgL_nodez00_bglt) BgL_auxz00_2750), BUNSPEC);
							}
							return
								((BgL_nodez00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_2215));
						}
				}
			}
		}

	}



/* &node-typec!-setq1289 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2setq1289z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2217, obj_t BgL_nodez00_2218, obj_t BgL_stackz00_2219)
	{
		{	/* Reduce/ftypec.scm 134 */
			{
				BgL_nodez00_bglt BgL_auxz00_2758;

				{	/* Reduce/ftypec.scm 136 */
					BgL_nodez00_bglt BgL_arg1352z00_2324;

					BgL_arg1352z00_2324 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2218)))->BgL_valuez00);
					BgL_auxz00_2758 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1352z00_2324,
						BgL_stackz00_2219);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2218)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2758), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_2764;

				{	/* Reduce/ftypec.scm 137 */
					BgL_varz00_bglt BgL_arg1357z00_2325;

					BgL_arg1357z00_2325 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2218)))->BgL_varz00);
					BgL_auxz00_2764 =
						((BgL_varz00_bglt)
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
							((BgL_nodez00_bglt) BgL_arg1357z00_2325), BgL_stackz00_2219));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2218)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2764), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2218));
		}

	}



/* &node-typec!-cast1287 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2cast1287z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2220, obj_t BgL_nodez00_2221, obj_t BgL_stackz00_2222)
	{
		{	/* Reduce/ftypec.scm 126 */
			BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2221)))->BgL_argz00),
				BgL_stackz00_2222);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2221));
		}

	}



/* &node-typec!-extern1285 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2extern1285z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2223, obj_t BgL_nodez00_2224, obj_t BgL_stackz00_2225)
	{
		{	/* Reduce/ftypec.scm 118 */
			BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2224)))->BgL_exprza2za2),
				BgL_stackz00_2225);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2224));
		}

	}



/* &node-typec!-funcall1283 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2funcall1283z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2226, obj_t BgL_nodez00_2227, obj_t BgL_stackz00_2228)
	{
		{	/* Reduce/ftypec.scm 109 */
			{
				BgL_nodez00_bglt BgL_auxz00_2784;

				{	/* Reduce/ftypec.scm 111 */
					BgL_nodez00_bglt BgL_arg1346z00_2329;

					BgL_arg1346z00_2329 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2227)))->BgL_funz00);
					BgL_auxz00_2784 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1346z00_2329,
						BgL_stackz00_2228);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2227)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2784), BUNSPEC);
			}
			BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2227)))->BgL_argsz00),
				BgL_stackz00_2228);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2227));
		}

	}



/* &node-typec!-app-ly1281 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2appzd2ly1281za2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2229, obj_t BgL_nodez00_2230, obj_t BgL_stackz00_2231)
	{
		{	/* Reduce/ftypec.scm 100 */
			{
				BgL_nodez00_bglt BgL_auxz00_2795;

				{	/* Reduce/ftypec.scm 102 */
					BgL_nodez00_bglt BgL_arg1344z00_2331;

					BgL_arg1344z00_2331 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2230)))->BgL_funz00);
					BgL_auxz00_2795 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1344z00_2331,
						BgL_stackz00_2231);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2230)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2795), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2801;

				{	/* Reduce/ftypec.scm 103 */
					BgL_nodez00_bglt BgL_arg1345z00_2332;

					BgL_arg1345z00_2332 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2230)))->BgL_argz00);
					BgL_auxz00_2801 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1345z00_2332,
						BgL_stackz00_2231);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2230)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2801), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2230));
		}

	}



/* &node-typec!-sync1279 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sync1279z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2232, obj_t BgL_nodez00_2233, obj_t BgL_stackz00_2234)
	{
		{	/* Reduce/ftypec.scm 90 */
			{
				BgL_nodez00_bglt BgL_auxz00_2809;

				{	/* Reduce/ftypec.scm 92 */
					BgL_nodez00_bglt BgL_arg1338z00_2334;

					BgL_arg1338z00_2334 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_mutexz00);
					BgL_auxz00_2809 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1338z00_2334,
						BgL_stackz00_2234);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2809), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2815;

				{	/* Reduce/ftypec.scm 93 */
					BgL_nodez00_bglt BgL_arg1339z00_2335;

					BgL_arg1339z00_2335 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_prelockz00);
					BgL_auxz00_2815 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1339z00_2335,
						BgL_stackz00_2234);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2815), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2821;

				{	/* Reduce/ftypec.scm 94 */
					BgL_nodez00_bglt BgL_arg1340z00_2336;

					BgL_arg1340z00_2336 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_bodyz00);
					BgL_auxz00_2821 =
						BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_arg1340z00_2336,
						BgL_stackz00_2234);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2233)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2821), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2233));
		}

	}



/* &node-typec!-sequence1277 */
	BgL_nodez00_bglt
		BGl_z62nodezd2typecz12zd2sequence1277z70zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2235, obj_t BgL_nodez00_2236, obj_t BgL_stackz00_2237)
	{
		{	/* Reduce/ftypec.scm 82 */
			BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2236)))->BgL_nodesz00),
				BgL_stackz00_2237);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2236));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2()
	{
		{	/* Reduce/ftypec.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1840z00zzreduce_flowzd2typeczd2));
		}

	}

#ifdef __cplusplus
}
#endif
