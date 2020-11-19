/*===========================================================================*/
/*   (Reduce/1occ.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/1occ.scm) */
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

	typedef struct BgL_privatez00_bgl
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
	}                 *BgL_privatez00_bglt;

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


	static obj_t BGl_nodezd21occz12zc0zzreduce_1occz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12za2zzreduce_1occz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2makezd2box1359za2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62nodezd21occz12zd2boxzd2setz121361zb0zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2sync1326z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2fail1343z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd21occz121313za2zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_1occz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_nodezd21occza2z12z62zzreduce_1occz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2letzd2var1349za2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2condition1341z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzreduce_1occz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2closure1322z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_1occz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2switch1345z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00(BgL_letzd2varzd2_bglt,
		obj_t);
	static obj_t
		BGl_z62nodezd21occz12zd2jumpzd2exzd2i1353z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2retblock1355z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_1occz00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2app1365z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_1occz00 = BUNSPEC;
	static obj_t BGl_z62nodezd21occz12zd2cast1337z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2setq1339z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_1occz00();
	static obj_t BGl_z62reducezd21occz12za2zzreduce_1occz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_1occz00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2appzd2ly1328za2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62nodezd21occz12zd2funcall1330z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2sequence1324z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2return1357z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2extern1332z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd21occz12zd2boxzd2ref1363za2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2var1320z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
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
	static obj_t BGl_z62nodezd21occz12zd2atom1316z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t
		BGl_z62nodezd21occz12zd2setzd2exzd2it1351z70zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzreduce_1occz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_1occz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_1occz00();
	static obj_t BGl_z62nodezd21occz12zd2kwote1318z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_privatez00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static long BGl_za2variablezd2removedza2zd2zzreduce_1occz00;
	static obj_t BGl_z62nodezd21occz12zd2private1335z70zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62nodezd21occz12zd2letzd2fun1347za2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711974za7,
		BGl_z62nodezd21occz12za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1940z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711975za7,
		BGl_z62nodezd21occz121313za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1943z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711976za7,
		BGl_z62nodezd21occz12zd2atom1316z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1945z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711977za7,
		BGl_z62nodezd21occz12zd2kwote1318z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1946z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711978za7,
		BGl_z62nodezd21occz12zd2var1320z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1947z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711979za7,
		BGl_z62nodezd21occz12zd2closure1322z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1948z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711980za7,
		BGl_z62nodezd21occz12zd2sequence1324z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1949z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711981za7,
		BGl_z62nodezd21occz12zd2sync1326z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1950z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711982za7,
		BGl_z62nodezd21occz12zd2appzd2ly1328za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1951z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711983za7,
		BGl_z62nodezd21occz12zd2funcall1330z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1952z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711984za7,
		BGl_z62nodezd21occz12zd2extern1332z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1953z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711985za7,
		BGl_z62nodezd21occz12zd2private1335z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711986za7,
		BGl_z62nodezd21occz12zd2cast1337z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711987za7,
		BGl_z62nodezd21occz12zd2setq1339z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711988za7,
		BGl_z62nodezd21occz12zd2condition1341z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711989za7,
		BGl_z62nodezd21occz12zd2fail1343z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711990za7,
		BGl_z62nodezd21occz12zd2switch1345z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711991za7,
		BGl_z62nodezd21occz12zd2letzd2fun1347za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711992za7,
		BGl_z62nodezd21occz12zd2letzd2var1349za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711993za7,
		BGl_z62nodezd21occz12zd2setzd2exzd2it1351z70zzreduce_1occz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711994za7,
		BGl_z62nodezd21occz12zd2jumpzd2exzd2i1353z70zzreduce_1occz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711995za7,
		BGl_z62nodezd21occz12zd2retblock1355z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711996za7,
		BGl_z62nodezd21occz12zd2return1357z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711997za7,
		BGl_z62nodezd21occz12zd2makezd2box1359za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711998za7,
		BGl_z62nodezd21occz12zd2boxzd2setz121361zb0zzreduce_1occz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza711999za7,
		BGl_z62nodezd21occz12zd2boxzd2ref1363za2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzreduce_1occz00,
		BgL_bgl_za762nodeza7d21occza712000za7,
		BGl_z62nodezd21occz12zd2app1365z70zzreduce_1occz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd21occz12zd2envz12zzreduce_1occz00,
		BgL_bgl_za762reduceza7d21occ2001z00,
		BGl_z62reducezd21occz12za2zzreduce_1occz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1938z00zzreduce_1occz00,
		BgL_bgl_string1938za700za7za7r2002za7, "      single occurrence", 23);
	      DEFINE_STRING(BGl_string1939z00zzreduce_1occz00,
		BgL_bgl_string1939za700za7za7r2003za7, "      (removed: ", 16);
	      DEFINE_STRING(BGl_string1941z00zzreduce_1occz00,
		BgL_bgl_string1941za700za7za7r2004za7, "node-1occ!1313", 14);
	      DEFINE_STRING(BGl_string1942z00zzreduce_1occz00,
		BgL_bgl_string1942za700za7za7r2005za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1944z00zzreduce_1occz00,
		BgL_bgl_string1944za700za7za7r2006za7, "node-1occ!", 10);
	      DEFINE_STRING(BGl_string1969z00zzreduce_1occz00,
		BgL_bgl_string1969za700za7za7r2007za7, "reduce_1occ", 11);
	      DEFINE_STRING(BGl_string1970z00zzreduce_1occz00,
		BgL_bgl_string1970za700za7za7r2008za7, "node-1occ!1313 read ", 20);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_1occz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long
		BgL_checksumz00_2454, char *BgL_fromz00_2455)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_1occz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_1occz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_1occz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_1occz00();
					BGl_cnstzd2initzd2zzreduce_1occz00();
					BGl_importedzd2moduleszd2initz00zzreduce_1occz00();
					BGl_genericzd2initzd2zzreduce_1occz00();
					BGl_methodzd2initzd2zzreduce_1occz00();
					return BGl_toplevelzd2initzd2zzreduce_1occz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"reduce_1occ");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			{	/* Reduce/1occ.scm 16 */
				obj_t BgL_cportz00_2297;

				{	/* Reduce/1occ.scm 16 */
					obj_t BgL_stringz00_2305;

					BgL_stringz00_2305 = BGl_string1970z00zzreduce_1occz00;
					{	/* Reduce/1occ.scm 16 */
						obj_t BgL_startz00_2306;

						BgL_startz00_2306 = BINT(((long) 0));
						{	/* Reduce/1occ.scm 16 */
							obj_t BgL_endz00_2307;

							BgL_endz00_2307 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2305)));
							{	/* Reduce/1occ.scm 16 */

								BgL_cportz00_2297 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2305, BgL_startz00_2306, BgL_endz00_2307);
				}}}}
				{
					long BgL_iz00_2298;

					BgL_iz00_2298 = ((long) 1);
				BgL_loopz00_2299:
					if ((BgL_iz00_2298 == ((long) -1)))
						{	/* Reduce/1occ.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/1occ.scm 16 */
							{	/* Reduce/1occ.scm 16 */
								obj_t BgL_arg1972z00_2301;

								{	/* Reduce/1occ.scm 16 */

									{	/* Reduce/1occ.scm 16 */
										obj_t BgL_locationz00_2303;

										BgL_locationz00_2303 = BBOOL(((bool_t) 0));
										{	/* Reduce/1occ.scm 16 */

											BgL_arg1972z00_2301 =
												BGl_readz00zz__readerz00(BgL_cportz00_2297,
												BgL_locationz00_2303);
										}
									}
								}
								{	/* Reduce/1occ.scm 16 */
									int BgL_tmpz00_2485;

									BgL_tmpz00_2485 = (int) (BgL_iz00_2298);
									CNST_TABLE_SET(BgL_tmpz00_2485, BgL_arg1972z00_2301);
							}}
							{	/* Reduce/1occ.scm 16 */
								int BgL_auxz00_2304;

								BgL_auxz00_2304 = (int) ((BgL_iz00_2298 - ((long) 1)));
								{
									long BgL_iz00_2490;

									BgL_iz00_2490 = (long) (BgL_auxz00_2304);
									BgL_iz00_2298 = BgL_iz00_2490;
									goto BgL_loopz00_2299;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			BGl_za2variablezd2removedza2zd2zzreduce_1occz00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzreduce_1occz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1373;

				BgL_headz00_1373 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1374;
					obj_t BgL_tailz00_1375;

					BgL_prevz00_1374 = BgL_headz00_1373;
					BgL_tailz00_1375 = BgL_l1z00_1;
				BgL_loopz00_1376:
					if (PAIRP(BgL_tailz00_1375))
						{
							obj_t BgL_newzd2prevzd2_1378;

							BgL_newzd2prevzd2_1378 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1375), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1374, BgL_newzd2prevzd2_1378);
							{
								obj_t BgL_tailz00_2500;
								obj_t BgL_prevz00_2499;

								BgL_prevz00_2499 = BgL_newzd2prevzd2_1378;
								BgL_tailz00_2500 = CDR(BgL_tailz00_1375);
								BgL_tailz00_1375 = BgL_tailz00_2500;
								BgL_prevz00_1374 = BgL_prevz00_2499;
								goto BgL_loopz00_1376;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1373);
				}
			}
		}

	}



/* reduce-1occ! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/1occ.scm 37 */
			{	/* Reduce/1occ.scm 38 */
				obj_t BgL_list1371z00_1381;

				BgL_list1371z00_1381 =
					MAKE_YOUNG_PAIR(BGl_string1938z00zzreduce_1occz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1371z00_1381);
			}
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_3);
			BGl_za2variablezd2removedza2zd2zzreduce_1occz00 = ((long) 0);
			{
				obj_t BgL_l1255z00_1383;

				BgL_l1255z00_1383 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31372ze3z87_1384:
				if (PAIRP(BgL_l1255z00_1383))
					{	/* Reduce/1occ.scm 44 */
						{	/* Reduce/1occ.scm 45 */
							obj_t BgL_globalz00_1386;

							BgL_globalz00_1386 = CAR(BgL_l1255z00_1383);
							{	/* Reduce/1occ.scm 45 */
								BgL_valuez00_bglt BgL_funz00_1387;

								BgL_funz00_1387 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1386))))->
									BgL_valuez00);
								{	/* Reduce/1occ.scm 45 */
									obj_t BgL_nodez00_1388;

									BgL_nodez00_1388 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1387)))->BgL_bodyz00);
									{	/* Reduce/1occ.scm 46 */

										{	/* Reduce/1occ.scm 47 */
											obj_t BgL_arg1381z00_1389;

											{	/* Reduce/1occ.scm 47 */
												obj_t BgL__z00_1390;

												BgL__z00_1390 =
													BGl_nodezd21occz12zc0zzreduce_1occz00(
													((BgL_nodez00_bglt) BgL_nodez00_1388), BNIL);
												{	/* Reduce/1occ.scm 48 */
													obj_t BgL_nodez00_1391;

													{	/* Reduce/1occ.scm 48 */
														int BgL_tmpz00_2517;

														BgL_tmpz00_2517 = (int) (((long) 1));
														BgL_nodez00_1391 = BGL_MVALUES_VAL(BgL_tmpz00_2517);
													}
													BgL_arg1381z00_1389 = BgL_nodez00_1391;
											}}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1387)))->
													BgL_bodyz00) =
												((obj_t) BgL_arg1381z00_1389), BUNSPEC);
										} BUNSPEC;
						}}}}
						{
							obj_t BgL_l1255z00_2522;

							BgL_l1255z00_2522 = CDR(BgL_l1255z00_1383);
							BgL_l1255z00_1383 = BgL_l1255z00_2522;
							goto BgL_zc3z04anonymousza31372ze3z87_1384;
						}
					}
				else
					{	/* Reduce/1occ.scm 44 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/1occ.scm 52 */
				obj_t BgL_list1383z00_1394;

				{	/* Reduce/1occ.scm 52 */
					obj_t BgL_arg1384z00_1395;

					{	/* Reduce/1occ.scm 52 */
						obj_t BgL_arg1385z00_1396;

						{	/* Reduce/1occ.scm 52 */
							obj_t BgL_arg1386z00_1397;

							BgL_arg1386z00_1397 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1385z00_1396 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
								BgL_arg1386z00_1397);
						}
						BgL_arg1384z00_1395 =
							MAKE_YOUNG_PAIR(BINT
							(BGl_za2variablezd2removedza2zd2zzreduce_1occz00),
							BgL_arg1385z00_1396);
					}
					BgL_list1383z00_1394 =
						MAKE_YOUNG_PAIR(BGl_string1939z00zzreduce_1occz00,
						BgL_arg1384z00_1395);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1383z00_1394);
			}
			return BgL_globalsz00_3;
		}

	}



/* &reduce-1occ! */
	obj_t BGl_z62reducezd21occz12za2zzreduce_1occz00(obj_t BgL_envz00_2188,
		obj_t BgL_globalsz00_2189)
	{
		{	/* Reduce/1occ.scm 37 */
			return BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_2189);
		}

	}



/* node-1occ-let-var! */
	obj_t BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00(BgL_letzd2varzd2_bglt
		BgL_nodez00_40, obj_t BgL_1zd2expza2z70_41)
	{
		{	/* Reduce/1occ.scm 278 */
			{
				obj_t BgL_obindingsz00_1402;
				bool_t BgL_resetz00_1403;
				obj_t BgL_extendz00_1404;

				BgL_obindingsz00_1402 =
					(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->BgL_bindingsz00);
				BgL_resetz00_1403 = ((bool_t) 0);
				BgL_extendz00_1404 = BNIL;
			BgL_zc3z04anonymousza31388ze3z87_1405:
				if (NULLP(BgL_obindingsz00_1402))
					{	/* Reduce/1occ.scm 284 */
						bool_t BgL_test2014z00_2536;

						if (BgL_resetz00_1403)
							{	/* Reduce/1occ.scm 284 */
								BgL_test2014z00_2536 = ((bool_t) 1);
							}
						else
							{	/* Reduce/1occ.scm 284 */
								BgL_test2014z00_2536 =
									BGl_sidezd2effectzf3z21zzeffect_effectz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
										BgL_bodyz00));
							}
						if (BgL_test2014z00_2536)
							{	/* Reduce/1occ.scm 285 */
								obj_t BgL_resetz72z72_1409;

								BgL_resetz72z72_1409 =
									BGl_nodezd21occz12zc0zzreduce_1occz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
										BgL_bodyz00), BNIL);
								{	/* Reduce/1occ.scm 286 */
									obj_t BgL_nbodyz00_1410;

									{	/* Reduce/1occ.scm 287 */
										int BgL_tmpz00_2542;

										BgL_tmpz00_2542 = (int) (((long) 1));
										BgL_nbodyz00_1410 = BGL_MVALUES_VAL(BgL_tmpz00_2542);
									}
									((((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_1410)),
										BUNSPEC);
									{	/* Reduce/1occ.scm 288 */
										int BgL_res1883z00_2039;

										{	/* Reduce/1occ.scm 288 */
											int BgL_tmpz00_2547;

											BgL_tmpz00_2547 = (int) (((long) 2));
											BgL_res1883z00_2039 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2547);
										} BgL_res1883z00_2039;
									}
									{	/* Reduce/1occ.scm 288 */
										obj_t BgL_auxz00_2552;
										int BgL_tmpz00_2550;

										BgL_auxz00_2552 = ((obj_t) BgL_nodez00_40);
										BgL_tmpz00_2550 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2550, BgL_auxz00_2552);
									}
									return BTRUE;
								}
							}
						else
							{	/* Reduce/1occ.scm 289 */
								obj_t BgL_1zd2expza2z72z02_1414;

								BgL_1zd2expza2z72z02_1414 =
									BGl_appendzd221011zd2zzreduce_1occz00(BgL_extendz00_1404,
									BgL_1zd2expza2z70_41);
								{	/* Reduce/1occ.scm 290 */
									obj_t BgL_resetz72z72_1415;

									BgL_resetz72z72_1415 =
										BGl_nodezd21occz12zc0zzreduce_1occz00(
										(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
											BgL_bodyz00), BgL_1zd2expza2z72z02_1414);
									{	/* Reduce/1occ.scm 291 */
										obj_t BgL_nbodyz00_1416;

										{	/* Reduce/1occ.scm 292 */
											int BgL_tmpz00_2558;

											BgL_tmpz00_2558 = (int) (((long) 1));
											BgL_nbodyz00_1416 = BGL_MVALUES_VAL(BgL_tmpz00_2558);
										}
										((((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
												BgL_bodyz00) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
													BgL_nbodyz00_1416)), BUNSPEC);
										{
											obj_t BgL_obindingsz00_1420;
											obj_t BgL_nbindingsz00_1421;

											BgL_obindingsz00_1420 =
												(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
												BgL_bindingsz00);
											BgL_nbindingsz00_1421 = BNIL;
										BgL_zc3z04anonymousza31418ze3z87_1422:
											if (NULLP(BgL_obindingsz00_1420))
												{	/* Reduce/1occ.scm 299 */
													bool_t BgL_test2017z00_2565;

													if (
														(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_40))->
															BgL_removablezf3zf3))
														{	/* Reduce/1occ.scm 299 */
															BgL_test2017z00_2565 =
																NULLP(BgL_nbindingsz00_1421);
														}
													else
														{	/* Reduce/1occ.scm 299 */
															BgL_test2017z00_2565 = ((bool_t) 0);
														}
													if (BgL_test2017z00_2565)
														{	/* Reduce/1occ.scm 299 */
															{	/* Reduce/1occ.scm 304 */
																BgL_nodez00_bglt BgL_val1_1292z00_1427;

																BgL_val1_1292z00_1427 =
																	(((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_nodez00_40))->BgL_bodyz00);
																{	/* Reduce/1occ.scm 304 */
																	int BgL_res1886z00_2042;

																	{	/* Reduce/1occ.scm 304 */
																		int BgL_tmpz00_2570;

																		BgL_tmpz00_2570 = (int) (((long) 2));
																		BgL_res1886z00_2042 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2570);
																	} BgL_res1886z00_2042;
																}
																{	/* Reduce/1occ.scm 304 */
																	obj_t BgL_auxz00_2575;
																	int BgL_tmpz00_2573;

																	BgL_auxz00_2575 =
																		((obj_t) BgL_val1_1292z00_1427);
																	BgL_tmpz00_2573 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_2573,
																		BgL_auxz00_2575);
																}
																return BgL_resetz72z72_1415;
															}
														}
													else
														{	/* Reduce/1occ.scm 299 */
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_nodez00_40))->BgL_bindingsz00) =
																((obj_t)
																	bgl_reverse_bang(BgL_nbindingsz00_1421)),
																BUNSPEC);
															{	/* Reduce/1occ.scm 307 */
																int BgL_res1887z00_2043;

																{	/* Reduce/1occ.scm 307 */
																	int BgL_tmpz00_2580;

																	BgL_tmpz00_2580 = (int) (((long) 2));
																	BgL_res1887z00_2043 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2580);
																} BgL_res1887z00_2043;
															}
															{	/* Reduce/1occ.scm 307 */
																obj_t BgL_auxz00_2585;
																int BgL_tmpz00_2583;

																BgL_auxz00_2585 = ((obj_t) BgL_nodez00_40);
																BgL_tmpz00_2583 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_2583,
																	BgL_auxz00_2585);
															}
															return BgL_resetz72z72_1415;
														}
												}
											else
												{	/* Reduce/1occ.scm 308 */
													bool_t BgL_test2019z00_2588;

													{	/* Reduce/1occ.scm 308 */
														obj_t BgL_varz00_1443;
														obj_t BgL_valz00_1444;

														{	/* Reduce/1occ.scm 308 */
															obj_t BgL_pairz00_2045;

															BgL_pairz00_2045 =
																CAR(((obj_t) BgL_obindingsz00_1420));
															BgL_varz00_1443 = CAR(BgL_pairz00_2045);
														}
														{	/* Reduce/1occ.scm 309 */
															obj_t BgL_pairz00_2047;

															BgL_pairz00_2047 =
																CAR(((obj_t) BgL_obindingsz00_1420));
															BgL_valz00_1444 = CDR(BgL_pairz00_2047);
														}
														if (
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_varz00_1443))))->
																	BgL_occurrencez00) == ((long) 0)))
															{	/* Reduce/1occ.scm 310 */
																if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
																		((BgL_nodez00_bglt) BgL_valz00_1444)))
																	{	/* Reduce/1occ.scm 311 */
																		BgL_test2019z00_2588 = ((bool_t) 0);
																	}
																else
																	{	/* Reduce/1occ.scm 311 */
																		BgL_test2019z00_2588 = ((bool_t) 1);
																	}
															}
														else
															{	/* Reduce/1occ.scm 310 */
																BgL_test2019z00_2588 = ((bool_t) 0);
															}
													}
													if (BgL_test2019z00_2588)
														{	/* Reduce/1occ.scm 308 */
															{	/* Reduce/1occ.scm 315 */
																obj_t BgL_arg1461z00_1439;

																BgL_arg1461z00_1439 =
																	CDR(((obj_t) BgL_obindingsz00_1420));
																{
																	obj_t BgL_obindingsz00_2605;

																	BgL_obindingsz00_2605 = BgL_arg1461z00_1439;
																	BgL_obindingsz00_1420 = BgL_obindingsz00_2605;
																	goto BgL_zc3z04anonymousza31418ze3z87_1422;
																}
															}
														}
													else
														{	/* Reduce/1occ.scm 317 */
															obj_t BgL_arg1462z00_1440;
															obj_t BgL_arg1464z00_1441;

															BgL_arg1462z00_1440 =
																CDR(((obj_t) BgL_obindingsz00_1420));
															{	/* Reduce/1occ.scm 318 */
																obj_t BgL_arg1465z00_1442;

																BgL_arg1465z00_1442 =
																	CAR(((obj_t) BgL_obindingsz00_1420));
																BgL_arg1464z00_1441 =
																	MAKE_YOUNG_PAIR(BgL_arg1465z00_1442,
																	BgL_nbindingsz00_1421);
															}
															{
																obj_t BgL_nbindingsz00_2612;
																obj_t BgL_obindingsz00_2611;

																BgL_obindingsz00_2611 = BgL_arg1462z00_1440;
																BgL_nbindingsz00_2612 = BgL_arg1464z00_1441;
																BgL_nbindingsz00_1421 = BgL_nbindingsz00_2612;
																BgL_obindingsz00_1420 = BgL_obindingsz00_2611;
																goto BgL_zc3z04anonymousza31418ze3z87_1422;
															}
														}
												}
										}
									}
								}
							}
					}
				else
					{	/* Reduce/1occ.scm 319 */
						obj_t BgL_bindingz00_1453;

						BgL_bindingz00_1453 = CAR(((obj_t) BgL_obindingsz00_1402));
						{	/* Reduce/1occ.scm 320 */
							obj_t BgL_varz00_1454;
							obj_t BgL_valz00_1455;

							BgL_varz00_1454 = CAR(((obj_t) BgL_bindingz00_1453));
							BgL_valz00_1455 = CDR(((obj_t) BgL_bindingz00_1453));
							{	/* Reduce/1occ.scm 322 */
								obj_t BgL_resetz72z72_1456;

								BgL_resetz72z72_1456 =
									BGl_nodezd21occz12zc0zzreduce_1occz00(
									((BgL_nodez00_bglt) BgL_valz00_1455), BgL_1zd2expza2z70_41);
								{	/* Reduce/1occ.scm 323 */
									obj_t BgL_nvalz00_1457;

									{	/* Reduce/1occ.scm 324 */
										int BgL_tmpz00_2622;

										BgL_tmpz00_2622 = (int) (((long) 1));
										BgL_nvalz00_1457 = BGL_MVALUES_VAL(BgL_tmpz00_2622);
									}
									{	/* Reduce/1occ.scm 324 */
										obj_t BgL_tmpz00_2625;

										BgL_tmpz00_2625 = ((obj_t) BgL_bindingz00_1453);
										SET_CDR(BgL_tmpz00_2625, BgL_nvalz00_1457);
									}
									{	/* Reduce/1occ.scm 326 */
										bool_t BgL_test2022z00_2628;

										if (BgL_resetz00_1403)
											{	/* Reduce/1occ.scm 326 */
												BgL_test2022z00_2628 = ((bool_t) 1);
											}
										else
											{	/* Reduce/1occ.scm 326 */
												BgL_test2022z00_2628 = CBOOL(BgL_resetz72z72_1456);
											}
										if (BgL_test2022z00_2628)
											{	/* Reduce/1occ.scm 327 */
												obj_t BgL_arg1495z00_1459;

												BgL_arg1495z00_1459 =
													CDR(((obj_t) BgL_obindingsz00_1402));
												{
													obj_t BgL_extendz00_2635;
													bool_t BgL_resetz00_2634;
													obj_t BgL_obindingsz00_2633;

													BgL_obindingsz00_2633 = BgL_arg1495z00_1459;
													BgL_resetz00_2634 = ((bool_t) 1);
													BgL_extendz00_2635 = BNIL;
													BgL_extendz00_1404 = BgL_extendz00_2635;
													BgL_resetz00_1403 = BgL_resetz00_2634;
													BgL_obindingsz00_1402 = BgL_obindingsz00_2633;
													goto BgL_zc3z04anonymousza31388ze3z87_1405;
												}
											}
										else
											{	/* Reduce/1occ.scm 326 */
												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_1454))))->
															BgL_accessz00) == CNST_TABLE_REF(((long) 0))))
													{	/* Reduce/1occ.scm 330 */
														bool_t BgL_test2025z00_2642;

														if (
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_varz00_1454))))->
																	BgL_occurrencez00) == ((long) 1)))
															{	/* Reduce/1occ.scm 330 */
																if (
																	((((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_varz00_1454))))->
																			BgL_accessz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* Reduce/1occ.scm 331 */
																		if (BGl_sidezd2effectzf3z21zzeffect_effectz00(((BgL_nodez00_bglt) BgL_valz00_1455)))
																			{	/* Reduce/1occ.scm 332 */
																				BgL_test2025z00_2642 = ((bool_t) 0);
																			}
																		else
																			{	/* Reduce/1occ.scm 333 */
																				BgL_typez00_bglt BgL_arg1564z00_1478;
																				BgL_typez00_bglt BgL_arg1565z00_1479;

																				BgL_arg1564z00_1478 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									BgL_varz00_1454))))->
																					BgL_typez00);
																				BgL_arg1565z00_1479 =
																					BGl_getzd2typezd2zztype_typeofz00((
																						(BgL_nodez00_bglt) BgL_valz00_1455),
																					((bool_t) 0));
																				BgL_test2025z00_2642 =
																					BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
																					(BgL_arg1564z00_1478,
																					BgL_arg1565z00_1479);
																			}
																	}
																else
																	{	/* Reduce/1occ.scm 331 */
																		BgL_test2025z00_2642 = ((bool_t) 0);
																	}
															}
														else
															{	/* Reduce/1occ.scm 330 */
																BgL_test2025z00_2642 = ((bool_t) 0);
															}
														if (BgL_test2025z00_2642)
															{	/* Reduce/1occ.scm 330 */
																{	/* Reduce/1occ.scm 337 */
																	obj_t BgL_arg1552z00_1472;
																	obj_t BgL_arg1558z00_1473;

																	BgL_arg1552z00_1472 =
																		CDR(((obj_t) BgL_obindingsz00_1402));
																	BgL_arg1558z00_1473 =
																		MAKE_YOUNG_PAIR(BgL_bindingz00_1453,
																		BgL_extendz00_1404);
																	{
																		obj_t BgL_extendz00_2668;
																		bool_t BgL_resetz00_2667;
																		obj_t BgL_obindingsz00_2666;

																		BgL_obindingsz00_2666 = BgL_arg1552z00_1472;
																		BgL_resetz00_2667 = ((bool_t) 0);
																		BgL_extendz00_2668 = BgL_arg1558z00_1473;
																		BgL_extendz00_1404 = BgL_extendz00_2668;
																		BgL_resetz00_1403 = BgL_resetz00_2667;
																		BgL_obindingsz00_1402 =
																			BgL_obindingsz00_2666;
																		goto BgL_zc3z04anonymousza31388ze3z87_1405;
																	}
																}
															}
														else
															{	/* Reduce/1occ.scm 339 */
																obj_t BgL_arg1561z00_1474;

																BgL_arg1561z00_1474 =
																	CDR(((obj_t) BgL_obindingsz00_1402));
																{
																	bool_t BgL_resetz00_2672;
																	obj_t BgL_obindingsz00_2671;

																	BgL_obindingsz00_2671 = BgL_arg1561z00_1474;
																	BgL_resetz00_2672 = ((bool_t) 0);
																	BgL_resetz00_1403 = BgL_resetz00_2672;
																	BgL_obindingsz00_1402 = BgL_obindingsz00_2671;
																	goto BgL_zc3z04anonymousza31388ze3z87_1405;
																}
															}
													}
												else
													{	/* Reduce/1occ.scm 329 */
														obj_t BgL_arg1578z00_1482;

														BgL_arg1578z00_1482 =
															CDR(((obj_t) BgL_obindingsz00_1402));
														{
															bool_t BgL_resetz00_2676;
															obj_t BgL_obindingsz00_2675;

															BgL_obindingsz00_2675 = BgL_arg1578z00_1482;
															BgL_resetz00_2676 = ((bool_t) 0);
															BgL_resetz00_1403 = BgL_resetz00_2676;
															BgL_obindingsz00_1402 = BgL_obindingsz00_2675;
															goto BgL_zc3z04anonymousza31388ze3z87_1405;
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

	}



/* node-1occ*! */
	obj_t BGl_nodezd21occza2z12z62zzreduce_1occz00(obj_t BgL_nodeza2za2_58,
		obj_t BgL_1zd2expza2z70_59)
	{
		{	/* Reduce/1occ.scm 427 */
			{
				obj_t BgL_nodeza2za2_1486;
				bool_t BgL_resetz00_1487;
				obj_t BgL_1zd2expza2z70_1488;

				BgL_nodeza2za2_1486 = BgL_nodeza2za2_58;
				BgL_resetz00_1487 = ((bool_t) 0);
				BgL_1zd2expza2z70_1488 = BgL_1zd2expza2z70_59;
			BgL_zc3z04anonymousza31583ze3z87_1489:
				if (NULLP(BgL_nodeza2za2_1486))
					{	/* Reduce/1occ.scm 432 */
						return BBOOL(BgL_resetz00_1487);
					}
				else
					{	/* Reduce/1occ.scm 432 */
						if (NULLP(CDR(((obj_t) BgL_nodeza2za2_1486))))
							{	/* Reduce/1occ.scm 435 */
								obj_t BgL_resetz72z72_1493;

								{	/* Reduce/1occ.scm 436 */
									obj_t BgL_arg1592z00_1496;

									BgL_arg1592z00_1496 = CAR(((obj_t) BgL_nodeza2za2_1486));
									BgL_resetz72z72_1493 =
										BGl_nodezd21occz12zc0zzreduce_1occz00(
										((BgL_nodez00_bglt) BgL_arg1592z00_1496),
										BgL_1zd2expza2z70_1488);
								}
								{	/* Reduce/1occ.scm 436 */
									obj_t BgL_nodez00_1494;

									{	/* Reduce/1occ.scm 437 */
										int BgL_tmpz00_2689;

										BgL_tmpz00_2689 = (int) (((long) 1));
										BgL_nodez00_1494 = BGL_MVALUES_VAL(BgL_tmpz00_2689);
									}
									{	/* Reduce/1occ.scm 437 */
										obj_t BgL_tmpz00_2692;

										BgL_tmpz00_2692 = ((obj_t) BgL_nodeza2za2_1486);
										SET_CAR(BgL_tmpz00_2692, BgL_nodez00_1494);
									}
									if (BgL_resetz00_1487)
										{	/* Reduce/1occ.scm 438 */
											return BBOOL(BgL_resetz00_1487);
										}
									else
										{	/* Reduce/1occ.scm 438 */
											return BgL_resetz72z72_1493;
										}
								}
							}
						else
							{	/* Reduce/1occ.scm 440 */
								obj_t BgL_resetz72z72_1497;

								{	/* Reduce/1occ.scm 441 */
									obj_t BgL_arg1604z00_1502;

									BgL_arg1604z00_1502 = CAR(((obj_t) BgL_nodeza2za2_1486));
									BgL_resetz72z72_1497 =
										BGl_nodezd21occz12zc0zzreduce_1occz00(
										((BgL_nodez00_bglt) BgL_arg1604z00_1502),
										BgL_1zd2expza2z70_1488);
								}
								{	/* Reduce/1occ.scm 441 */
									obj_t BgL_nodez00_1498;

									{	/* Reduce/1occ.scm 442 */
										int BgL_tmpz00_2701;

										BgL_tmpz00_2701 = (int) (((long) 1));
										BgL_nodez00_1498 = BGL_MVALUES_VAL(BgL_tmpz00_2701);
									}
									{	/* Reduce/1occ.scm 442 */
										obj_t BgL_tmpz00_2704;

										BgL_tmpz00_2704 = ((obj_t) BgL_nodeza2za2_1486);
										SET_CAR(BgL_tmpz00_2704, BgL_nodez00_1498);
									}
									{	/* Reduce/1occ.scm 443 */
										bool_t BgL_test2032z00_2707;

										if (BgL_resetz00_1487)
											{	/* Reduce/1occ.scm 443 */
												BgL_test2032z00_2707 = ((bool_t) 1);
											}
										else
											{	/* Reduce/1occ.scm 443 */
												BgL_test2032z00_2707 = CBOOL(BgL_resetz72z72_1497);
											}
										if (BgL_test2032z00_2707)
											{	/* Reduce/1occ.scm 444 */
												obj_t BgL_arg1597z00_1500;

												BgL_arg1597z00_1500 =
													CDR(((obj_t) BgL_nodeza2za2_1486));
												{
													obj_t BgL_1zd2expza2z70_2714;
													bool_t BgL_resetz00_2713;
													obj_t BgL_nodeza2za2_2712;

													BgL_nodeza2za2_2712 = BgL_arg1597z00_1500;
													BgL_resetz00_2713 = ((bool_t) 1);
													BgL_1zd2expza2z70_2714 = BNIL;
													BgL_1zd2expza2z70_1488 = BgL_1zd2expza2z70_2714;
													BgL_resetz00_1487 = BgL_resetz00_2713;
													BgL_nodeza2za2_1486 = BgL_nodeza2za2_2712;
													goto BgL_zc3z04anonymousza31583ze3z87_1489;
												}
											}
										else
											{	/* Reduce/1occ.scm 445 */
												obj_t BgL_arg1599z00_1501;

												BgL_arg1599z00_1501 =
													CDR(((obj_t) BgL_nodeza2za2_1486));
												{
													bool_t BgL_resetz00_2718;
													obj_t BgL_nodeza2za2_2717;

													BgL_nodeza2za2_2717 = BgL_arg1599z00_1501;
													BgL_resetz00_2718 = ((bool_t) 0);
													BgL_resetz00_1487 = BgL_resetz00_2718;
													BgL_nodeza2za2_1486 = BgL_nodeza2za2_2717;
													goto BgL_zc3z04anonymousza31583ze3z87_1489;
												}
											}
									}
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_proc1940z00zzreduce_1occz00, BGl_nodez00zzast_nodez00,
				BGl_string1941z00zzreduce_1occz00);
		}

	}



/* &node-1occ!1313 */
	obj_t BGl_z62nodezd21occz121313za2zzreduce_1occz00(obj_t BgL_envz00_2191,
		obj_t BgL_nodez00_2192, obj_t BgL_1zd2expza2z70_2193)
	{
		{	/* Reduce/1occ.scm 67 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string1942z00zzreduce_1occz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2192)));
		}

	}



/* node-1occ! */
	obj_t BGl_nodezd21occz12zc0zzreduce_1occz00(BgL_nodez00_bglt BgL_nodez00_4,
		obj_t BgL_1zd2expza2z70_5)
	{
		{	/* Reduce/1occ.scm 67 */
			{	/* Reduce/1occ.scm 67 */
				obj_t BgL_method1314z00_1510;

				{	/* Reduce/1occ.scm 67 */
					obj_t BgL_res1902z00_2113;

					{	/* Reduce/1occ.scm 67 */
						long BgL_objzd2classzd2numz00_2078;

						{	/* Reduce/1occ.scm 67 */
							long BgL_res1892z00_2081;

							BgL_res1892z00_2081 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_2078 = BgL_res1892z00_2081;
						}
						{	/* Reduce/1occ.scm 67 */
							obj_t BgL_arg1813z00_2079;

							BgL_arg1813z00_2079 =
								PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
								(int) (((long) 1)));
							{	/* Reduce/1occ.scm 67 */
								int BgL_offsetz00_2083;

								BgL_offsetz00_2083 = (int) (BgL_objzd2classzd2numz00_2078);
								{	/* Reduce/1occ.scm 67 */
									long BgL_offsetz00_2084;

									BgL_offsetz00_2084 =
										((long) (BgL_offsetz00_2083) - OBJECT_TYPE);
									{	/* Reduce/1occ.scm 67 */
										long BgL_modz00_2085;

										BgL_modz00_2085 =
											(BgL_offsetz00_2084 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/1occ.scm 67 */
											long BgL_restz00_2087;

											BgL_restz00_2087 =
												(BgL_offsetz00_2084 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/1occ.scm 67 */

												{	/* Reduce/1occ.scm 67 */
													obj_t BgL_bucketz00_2089;

													BgL_bucketz00_2089 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2079), BgL_modz00_2085);
													BgL_res1902z00_2113 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2089), BgL_restz00_2087);
					}}}}}}}}
					BgL_method1314z00_1510 = BgL_res1902z00_2113;
				}
				return
					PROCEDURE_ENTRY(BgL_method1314z00_1510) (BgL_method1314z00_1510,
					((obj_t) BgL_nodez00_4), BgL_1zd2expza2z70_5, BEOA);
			}
		}

	}



/* &node-1occ! */
	obj_t BGl_z62nodezd21occz12za2zzreduce_1occz00(obj_t BgL_envz00_2194,
		obj_t BgL_nodez00_2195, obj_t BgL_1zd2expza2z70_2196)
	{
		{	/* Reduce/1occ.scm 67 */
			return
				BGl_nodezd21occz12zc0zzreduce_1occz00(
				((BgL_nodez00_bglt) BgL_nodez00_2195), BgL_1zd2expza2z70_2196);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_atomz00zzast_nodez00,
				BGl_proc1943z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1945z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_varz00zzast_nodez00,
				BGl_proc1946z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_closurez00zzast_nodez00, BGl_proc1947z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1948z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_syncz00zzast_nodez00,
				BGl_proc1949z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1950z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1951z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_externz00zzast_nodez00, BGl_proc1952z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_privatez00zzast_nodez00, BGl_proc1953z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_castz00zzast_nodez00,
				BGl_proc1954z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_setqz00zzast_nodez00,
				BGl_proc1955z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1956z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_failz00zzast_nodez00,
				BGl_proc1957z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_switchz00zzast_nodez00, BGl_proc1958z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1959z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1960z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1961z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1962z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1963z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_returnz00zzast_nodez00, BGl_proc1964z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1965z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1966z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1967z00zzreduce_1occz00,
				BGl_string1944z00zzreduce_1occz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_appz00zzast_nodez00,
				BGl_proc1968z00zzreduce_1occz00, BGl_string1944z00zzreduce_1occz00);
		}

	}



/* &node-1occ!-app1365 */
	obj_t BGl_z62nodezd21occz12zd2app1365z70zzreduce_1occz00(obj_t
		BgL_envz00_2222, obj_t BgL_nodez00_2223, obj_t BgL_1zd2expza2z70_2224)
	{
		{	/* Reduce/1occ.scm 414 */
			{	/* Reduce/1occ.scm 415 */
				bool_t BgL_tmpz00_2782;

				{	/* Reduce/1occ.scm 416 */
					obj_t BgL_resetz00_2312;

					BgL_resetz00_2312 =
						BGl_nodezd21occza2z12z62zzreduce_1occz00(
						(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_2223)))->BgL_argsz00),
						BgL_1zd2expza2z70_2224);
					{	/* Reduce/1occ.scm 417 */
						bool_t BgL_test2034z00_2786;

						if (CBOOL(BgL_resetz00_2312))
							{	/* Reduce/1occ.scm 417 */
								BgL_test2034z00_2786 = ((bool_t) 1);
							}
						else
							{	/* Reduce/1occ.scm 417 */
								BgL_test2034z00_2786 =
									BGl_sidezd2effectzf3z21zzeffect_effectz00(
									((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2223)));
							}
						if (BgL_test2034z00_2786)
							{	/* Reduce/1occ.scm 417 */
								{	/* Reduce/1occ.scm 421 */
									int BgL_res1936z00_2313;

									{	/* Reduce/1occ.scm 421 */
										int BgL_tmpz00_2792;

										BgL_tmpz00_2792 = (int) (((long) 2));
										BgL_res1936z00_2313 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2792);
									} BgL_res1936z00_2313;
								}
								{	/* Reduce/1occ.scm 421 */
									obj_t BgL_auxz00_2797;
									int BgL_tmpz00_2795;

									BgL_auxz00_2797 =
										((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2223));
									BgL_tmpz00_2795 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2795, BgL_auxz00_2797);
								}
								BgL_tmpz00_2782 = ((bool_t) 1);
							}
						else
							{	/* Reduce/1occ.scm 417 */
								{	/* Reduce/1occ.scm 422 */
									int BgL_res1937z00_2314;

									{	/* Reduce/1occ.scm 422 */
										int BgL_tmpz00_2801;

										BgL_tmpz00_2801 = (int) (((long) 2));
										BgL_res1937z00_2314 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2801);
									} BgL_res1937z00_2314;
								}
								{	/* Reduce/1occ.scm 422 */
									obj_t BgL_auxz00_2806;
									int BgL_tmpz00_2804;

									BgL_auxz00_2806 =
										((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2223));
									BgL_tmpz00_2804 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2804, BgL_auxz00_2806);
								}
								BgL_tmpz00_2782 = ((bool_t) 0);
				}}}
				return BBOOL(BgL_tmpz00_2782);
			}
		}

	}



/* &node-1occ!-box-ref1363 */
	obj_t BGl_z62nodezd21occz12zd2boxzd2ref1363za2zzreduce_1occz00(obj_t
		BgL_envz00_2225, obj_t BgL_nodez00_2226, obj_t BgL_1zd2expza2z70_2227)
	{
		{	/* Reduce/1occ.scm 408 */
			{	/* Reduce/1occ.scm 409 */
				bool_t BgL_tmpz00_2811;

				{	/* Reduce/1occ.scm 409 */
					int BgL_res1935z00_2316;

					{	/* Reduce/1occ.scm 409 */
						int BgL_tmpz00_2812;

						BgL_tmpz00_2812 = (int) (((long) 2));
						BgL_res1935z00_2316 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2812);
					} BgL_res1935z00_2316;
				}
				{	/* Reduce/1occ.scm 409 */
					obj_t BgL_auxz00_2817;
					int BgL_tmpz00_2815;

					BgL_auxz00_2817 =
						((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2226));
					BgL_tmpz00_2815 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_2815, BgL_auxz00_2817);
				}
				BgL_tmpz00_2811 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_2811);
			}
		}

	}



/* &node-1occ!-box-set!1361 */
	obj_t BGl_z62nodezd21occz12zd2boxzd2setz121361zb0zzreduce_1occz00(obj_t
		BgL_envz00_2228, obj_t BgL_nodez00_2229, obj_t BgL_1zd2expza2z70_2230)
	{
		{	/* Reduce/1occ.scm 398 */
			{	/* Reduce/1occ.scm 400 */
				obj_t BgL_resetz00_2318;

				BgL_resetz00_2318 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2229)))->BgL_valuez00),
					BgL_1zd2expza2z70_2230);
				{	/* Reduce/1occ.scm 401 */
					obj_t BgL_nvaluez00_2319;

					{	/* Reduce/1occ.scm 402 */
						int BgL_tmpz00_2825;

						BgL_tmpz00_2825 = (int) (((long) 1));
						BgL_nvaluez00_2319 = BGL_MVALUES_VAL(BgL_tmpz00_2825);
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2229)))->
							BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2319)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 403 */
						int BgL_res1934z00_2320;

						{	/* Reduce/1occ.scm 403 */
							int BgL_tmpz00_2831;

							BgL_tmpz00_2831 = (int) (((long) 2));
							BgL_res1934z00_2320 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2831);
						} BgL_res1934z00_2320;
					}
					{	/* Reduce/1occ.scm 403 */
						obj_t BgL_auxz00_2836;
						int BgL_tmpz00_2834;

						BgL_auxz00_2836 =
							((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2229));
						BgL_tmpz00_2834 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2834, BgL_auxz00_2836);
					}
					return BgL_resetz00_2318;
				}
			}
		}

	}



/* &node-1occ!-make-box1359 */
	obj_t BGl_z62nodezd21occz12zd2makezd2box1359za2zzreduce_1occz00(obj_t
		BgL_envz00_2231, obj_t BgL_nodez00_2232, obj_t BgL_1zd2expza2z70_2233)
	{
		{	/* Reduce/1occ.scm 388 */
			{	/* Reduce/1occ.scm 390 */
				obj_t BgL_resetz00_2322;

				BgL_resetz00_2322 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2232)))->BgL_valuez00),
					BgL_1zd2expza2z70_2233);
				{	/* Reduce/1occ.scm 391 */
					obj_t BgL_nvaluez00_2323;

					{	/* Reduce/1occ.scm 392 */
						int BgL_tmpz00_2843;

						BgL_tmpz00_2843 = (int) (((long) 1));
						BgL_nvaluez00_2323 = BGL_MVALUES_VAL(BgL_tmpz00_2843);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2232)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2323)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 393 */
						int BgL_res1933z00_2324;

						{	/* Reduce/1occ.scm 393 */
							int BgL_tmpz00_2849;

							BgL_tmpz00_2849 = (int) (((long) 2));
							BgL_res1933z00_2324 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2849);
						} BgL_res1933z00_2324;
					}
					{	/* Reduce/1occ.scm 393 */
						obj_t BgL_auxz00_2854;
						int BgL_tmpz00_2852;

						BgL_auxz00_2854 =
							((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2232));
						BgL_tmpz00_2852 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2852, BgL_auxz00_2854);
					}
					return BgL_resetz00_2322;
				}
			}
		}

	}



/* &node-1occ!-return1357 */
	obj_t BGl_z62nodezd21occz12zd2return1357z70zzreduce_1occz00(obj_t
		BgL_envz00_2234, obj_t BgL_nodez00_2235, obj_t BgL_1zd2expza2z70_2236)
	{
		{	/* Reduce/1occ.scm 378 */
			{	/* Reduce/1occ.scm 380 */
				obj_t BgL_resetz00_2326;

				BgL_resetz00_2326 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2235)))->BgL_valuez00),
					BgL_1zd2expza2z70_2236);
				{	/* Reduce/1occ.scm 381 */
					obj_t BgL_nvaluez00_2327;

					{	/* Reduce/1occ.scm 382 */
						int BgL_tmpz00_2861;

						BgL_tmpz00_2861 = (int) (((long) 1));
						BgL_nvaluez00_2327 = BGL_MVALUES_VAL(BgL_tmpz00_2861);
					}
					((((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nodez00_2235)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2327)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 383 */
						int BgL_res1932z00_2328;

						{	/* Reduce/1occ.scm 383 */
							int BgL_tmpz00_2867;

							BgL_tmpz00_2867 = (int) (((long) 2));
							BgL_res1932z00_2328 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2867);
						} BgL_res1932z00_2328;
					}
					{	/* Reduce/1occ.scm 383 */
						obj_t BgL_auxz00_2872;
						int BgL_tmpz00_2870;

						BgL_auxz00_2872 = ((obj_t) ((BgL_returnz00_bglt) BgL_nodez00_2235));
						BgL_tmpz00_2870 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2870, BgL_auxz00_2872);
					}
					return BgL_resetz00_2326;
				}
			}
		}

	}



/* &node-1occ!-retblock1355 */
	obj_t BGl_z62nodezd21occz12zd2retblock1355z70zzreduce_1occz00(obj_t
		BgL_envz00_2237, obj_t BgL_nodez00_2238, obj_t BgL_1zd2expza2z70_2239)
	{
		{	/* Reduce/1occ.scm 368 */
			{	/* Reduce/1occ.scm 370 */
				obj_t BgL_resetz00_2330;

				BgL_resetz00_2330 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2238)))->BgL_bodyz00),
					BgL_1zd2expza2z70_2239);
				{	/* Reduce/1occ.scm 371 */
					obj_t BgL_nbodyz00_2331;

					{	/* Reduce/1occ.scm 372 */
						int BgL_tmpz00_2879;

						BgL_tmpz00_2879 = (int) (((long) 1));
						BgL_nbodyz00_2331 = BGL_MVALUES_VAL(BgL_tmpz00_2879);
					}
					((((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nodez00_2238)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2331)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 373 */
						int BgL_res1931z00_2332;

						{	/* Reduce/1occ.scm 373 */
							int BgL_tmpz00_2885;

							BgL_tmpz00_2885 = (int) (((long) 2));
							BgL_res1931z00_2332 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2885);
						} BgL_res1931z00_2332;
					}
					{	/* Reduce/1occ.scm 373 */
						obj_t BgL_auxz00_2890;
						int BgL_tmpz00_2888;

						BgL_auxz00_2890 =
							((obj_t) ((BgL_retblockz00_bglt) BgL_nodez00_2238));
						BgL_tmpz00_2888 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2888, BgL_auxz00_2890);
					}
					return BgL_resetz00_2330;
				}
			}
		}

	}



/* &node-1occ!-jump-ex-i1353 */
	obj_t BGl_z62nodezd21occz12zd2jumpzd2exzd2i1353z70zzreduce_1occz00(obj_t
		BgL_envz00_2240, obj_t BgL_nodez00_2241, obj_t BgL_1zd2expza2z70_2242)
	{
		{	/* Reduce/1occ.scm 354 */
			{	/* Reduce/1occ.scm 356 */
				obj_t BgL_resetz00_2334;

				BgL_resetz00_2334 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2241)))->BgL_exitz00),
					BgL_1zd2expza2z70_2242);
				{	/* Reduce/1occ.scm 357 */
					obj_t BgL_nexitz00_2335;

					{	/* Reduce/1occ.scm 358 */
						int BgL_tmpz00_2897;

						BgL_tmpz00_2897 = (int) (((long) 1));
						BgL_nexitz00_2335 = BGL_MVALUES_VAL(BgL_tmpz00_2897);
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2241)))->
							BgL_exitz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nexitz00_2335)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 359 */
						obj_t BgL_1zd2expza2z72z02_2336;

						if (CBOOL(BgL_resetz00_2334))
							{	/* Reduce/1occ.scm 359 */
								BgL_1zd2expza2z72z02_2336 = BNIL;
							}
						else
							{	/* Reduce/1occ.scm 359 */
								BgL_1zd2expza2z72z02_2336 = BgL_1zd2expza2z70_2242;
							}
						{	/* Reduce/1occ.scm 360 */
							obj_t BgL_resetz72z72_2337;

							BgL_resetz72z72_2337 =
								BGl_nodezd21occz12zc0zzreduce_1occz00(
								(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
											((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2241)))->
									BgL_valuez00), BgL_1zd2expza2z72z02_2336);
							{	/* Reduce/1occ.scm 361 */
								obj_t BgL_nvaluez00_2338;

								{	/* Reduce/1occ.scm 362 */
									int BgL_tmpz00_2908;

									BgL_tmpz00_2908 = (int) (((long) 1));
									BgL_nvaluez00_2338 = BGL_MVALUES_VAL(BgL_tmpz00_2908);
								}
								((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
												((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2241)))->
										BgL_valuez00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2338)),
									BUNSPEC);
								{	/* Reduce/1occ.scm 363 */
									obj_t BgL_val0_1297z00_2339;

									if (CBOOL(BgL_resetz00_2334))
										{	/* Reduce/1occ.scm 363 */
											BgL_val0_1297z00_2339 = BgL_resetz00_2334;
										}
									else
										{	/* Reduce/1occ.scm 363 */
											BgL_val0_1297z00_2339 = BgL_resetz72z72_2337;
										}
									{	/* Reduce/1occ.scm 363 */
										int BgL_res1930z00_2340;

										{	/* Reduce/1occ.scm 363 */
											int BgL_tmpz00_2916;

											BgL_tmpz00_2916 = (int) (((long) 2));
											BgL_res1930z00_2340 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2916);
										} BgL_res1930z00_2340;
									}
									{	/* Reduce/1occ.scm 363 */
										obj_t BgL_auxz00_2921;
										int BgL_tmpz00_2919;

										BgL_auxz00_2921 =
											((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2241));
										BgL_tmpz00_2919 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2919, BgL_auxz00_2921);
									}
									return BgL_val0_1297z00_2339;
								}
							}
						}
					}
				}
			}
		}

	}



/* &node-1occ!-set-ex-it1351 */
	obj_t BGl_z62nodezd21occz12zd2setzd2exzd2it1351z70zzreduce_1occz00(obj_t
		BgL_envz00_2243, obj_t BgL_nodez00_2244, obj_t BgL_1zd2expza2z70_2245)
	{
		{	/* Reduce/1occ.scm 344 */
			{	/* Reduce/1occ.scm 346 */
				obj_t BgL_resetz00_2342;

				BgL_resetz00_2342 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2244)))->BgL_bodyz00),
					BgL_1zd2expza2z70_2245);
				{	/* Reduce/1occ.scm 347 */
					obj_t BgL_nbodyz00_2343;

					{	/* Reduce/1occ.scm 348 */
						int BgL_tmpz00_2928;

						BgL_tmpz00_2928 = (int) (((long) 1));
						BgL_nbodyz00_2343 = BGL_MVALUES_VAL(BgL_tmpz00_2928);
					}
					((((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2244)))->
							BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2343)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 349 */
						int BgL_res1929z00_2344;

						{	/* Reduce/1occ.scm 349 */
							int BgL_tmpz00_2934;

							BgL_tmpz00_2934 = (int) (((long) 2));
							BgL_res1929z00_2344 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2934);
						} BgL_res1929z00_2344;
					}
					{	/* Reduce/1occ.scm 349 */
						obj_t BgL_auxz00_2939;
						int BgL_tmpz00_2937;

						BgL_auxz00_2939 =
							((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2244));
						BgL_tmpz00_2937 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2937, BgL_auxz00_2939);
					}
					return BgL_resetz00_2342;
				}
			}
		}

	}



/* &node-1occ!-let-var1349 */
	obj_t BGl_z62nodezd21occz12zd2letzd2var1349za2zzreduce_1occz00(obj_t
		BgL_envz00_2246, obj_t BgL_nodez00_2247, obj_t BgL_1zd2expza2z70_2248)
	{
		{	/* Reduce/1occ.scm 253 */
			{	/* Reduce/1occ.scm 259 */
				bool_t BgL_test2038z00_2943;

				{	/* Reduce/1occ.scm 259 */
					bool_t BgL_test2039z00_2944;

					{	/* Reduce/1occ.scm 259 */
						obj_t BgL_tmpz00_2945;

						BgL_tmpz00_2945 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
							BgL_bindingsz00);
						BgL_test2039z00_2944 = PAIRP(BgL_tmpz00_2945);
					}
					if (BgL_test2039z00_2944)
						{	/* Reduce/1occ.scm 259 */
							if (NULLP(CDR(
										(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
											BgL_bindingsz00))))
								{	/* Reduce/1occ.scm 261 */
									obj_t BgL_varz00_2346;

									{	/* Reduce/1occ.scm 261 */
										obj_t BgL_pairz00_2347;

										BgL_pairz00_2347 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
											BgL_bindingsz00);
										BgL_varz00_2346 = CAR(CAR(BgL_pairz00_2347));
									}
									if (
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_varz00_2346))))->
												BgL_occurrencez00) == ((long) 1)))
										{	/* Reduce/1occ.scm 263 */
											bool_t BgL_test2042z00_2963;

											{	/* Reduce/1occ.scm 263 */
												BgL_typez00_bglt BgL_arg1756z00_2348;

												BgL_arg1756z00_2348 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_2346)))->
													BgL_typez00);
												BgL_test2042z00_2963 =
													(((obj_t) BgL_arg1756z00_2348) ==
													BGl_za2boolza2z00zztype_cachez00);
											}
											if (BgL_test2042z00_2963)
												{	/* Reduce/1occ.scm 264 */
													bool_t BgL_test2043z00_2968;

													{	/* Reduce/1occ.scm 264 */
														BgL_nodez00_bglt BgL_arg1755z00_2349;

														BgL_arg1755z00_2349 =
															(((BgL_letzd2varzd2_bglt) COBJECT(
																	((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
															BgL_bodyz00);
														{	/* Reduce/1occ.scm 264 */
															bool_t BgL_res1927z00_2350;

															BgL_res1927z00_2350 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1755z00_2349),
																BGl_conditionalz00zzast_nodez00);
															BgL_test2043z00_2968 = BgL_res1927z00_2350;
														}
													}
													if (BgL_test2043z00_2968)
														{	/* Reduce/1occ.scm 265 */
															BgL_conditionalz00_bglt BgL_i1129z00_2351;

															BgL_i1129z00_2351 =
																((BgL_conditionalz00_bglt)
																(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_nodez00_2247)))->BgL_bodyz00));
															{	/* Reduce/1occ.scm 266 */
																bool_t BgL_test2044z00_2976;

																{	/* Reduce/1occ.scm 266 */
																	BgL_nodez00_bglt BgL_arg1754z00_2352;

																	BgL_arg1754z00_2352 =
																		(((BgL_conditionalz00_bglt)
																			COBJECT(BgL_i1129z00_2351))->BgL_testz00);
																	{	/* Reduce/1occ.scm 266 */
																		bool_t BgL_res1928z00_2353;

																		BgL_res1928z00_2353 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_arg1754z00_2352),
																			BGl_varz00zzast_nodez00);
																		BgL_test2044z00_2976 = BgL_res1928z00_2353;
																	}
																}
																if (BgL_test2044z00_2976)
																	{	/* Reduce/1occ.scm 266 */
																		BgL_test2038z00_2943 =
																			(
																			((obj_t)
																				(((BgL_varz00_bglt) COBJECT(
																							((BgL_varz00_bglt)
																								(((BgL_conditionalz00_bglt)
																										COBJECT
																										(BgL_i1129z00_2351))->
																									BgL_testz00))))->
																					BgL_variablez00)) == BgL_varz00_2346);
																	}
																else
																	{	/* Reduce/1occ.scm 266 */
																		BgL_test2038z00_2943 = ((bool_t) 0);
																	}
															}
														}
													else
														{	/* Reduce/1occ.scm 264 */
															BgL_test2038z00_2943 = ((bool_t) 0);
														}
												}
											else
												{	/* Reduce/1occ.scm 263 */
													BgL_test2038z00_2943 = ((bool_t) 0);
												}
										}
									else
										{	/* Reduce/1occ.scm 262 */
											BgL_test2038z00_2943 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/1occ.scm 260 */
									BgL_test2038z00_2943 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/1occ.scm 259 */
							BgL_test2038z00_2943 = ((bool_t) 0);
						}
				}
				if (BgL_test2038z00_2943)
					{	/* Reduce/1occ.scm 269 */
						BgL_conditionalz00_bglt BgL_i1131z00_2354;

						BgL_i1131z00_2354 =
							((BgL_conditionalz00_bglt)
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->BgL_bodyz00));
						{
							BgL_nodez00_bglt BgL_auxz00_2988;

							{	/* Reduce/1occ.scm 270 */
								obj_t BgL_pairz00_2355;

								BgL_pairz00_2355 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
									BgL_bindingsz00);
								{	/* Reduce/1occ.scm 270 */
									obj_t BgL_pairz00_2356;

									BgL_pairz00_2356 = CAR(BgL_pairz00_2355);
									BgL_auxz00_2988 = ((BgL_nodez00_bglt) CDR(BgL_pairz00_2356));
								}
							}
							((((BgL_conditionalz00_bglt) COBJECT(BgL_i1131z00_2354))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_2988), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
								BgL_bindingsz00) = ((obj_t) BNIL), BUNSPEC);
						return
							BGl_nodezd21occz12zc0zzreduce_1occz00((((BgL_letzd2varzd2_bglt)
									COBJECT(((BgL_letzd2varzd2_bglt) BgL_nodez00_2247)))->
								BgL_bodyz00), BgL_1zd2expza2z70_2248);
					}
				else
					{	/* Reduce/1occ.scm 259 */
						return
							BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2247),
							BgL_1zd2expza2z70_2248);
					}
			}
		}

	}



/* &node-1occ!-let-fun1347 */
	obj_t BGl_z62nodezd21occz12zd2letzd2fun1347za2zzreduce_1occz00(obj_t
		BgL_envz00_2249, obj_t BgL_nodez00_2250, obj_t BgL_1zd2expza2z70_2251)
	{
		{	/* Reduce/1occ.scm 234 */
			{	/* Reduce/1occ.scm 236 */
				obj_t BgL_resetz00_2358;

				BgL_resetz00_2358 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2250)))->BgL_bodyz00),
					BgL_1zd2expza2z70_2251);
				{	/* Reduce/1occ.scm 237 */
					obj_t BgL_nbodyz00_2359;

					{	/* Reduce/1occ.scm 238 */
						int BgL_tmpz00_3005;

						BgL_tmpz00_3005 = (int) (((long) 1));
						BgL_nbodyz00_2359 = BGL_MVALUES_VAL(BgL_tmpz00_3005);
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2250)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2359)),
						BUNSPEC);
					{
						obj_t BgL_localsz00_2361;
						obj_t BgL_resetz00_2362;

						BgL_localsz00_2361 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2250)))->BgL_localsz00);
						BgL_resetz00_2362 = BgL_resetz00_2358;
					BgL_loopz00_2360:
						if (NULLP(BgL_localsz00_2361))
							{	/* Reduce/1occ.scm 241 */
								{	/* Reduce/1occ.scm 242 */
									int BgL_res1923z00_2363;

									{	/* Reduce/1occ.scm 242 */
										int BgL_tmpz00_3013;

										BgL_tmpz00_3013 = (int) (((long) 2));
										BgL_res1923z00_2363 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3013);
									} BgL_res1923z00_2363;
								}
								{	/* Reduce/1occ.scm 242 */
									obj_t BgL_auxz00_3018;
									int BgL_tmpz00_3016;

									BgL_auxz00_3018 =
										((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2250));
									BgL_tmpz00_3016 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3016, BgL_auxz00_3018);
								}
								return BgL_resetz00_2362;
							}
						else
							{	/* Reduce/1occ.scm 243 */
								obj_t BgL_localz00_2364;

								BgL_localz00_2364 = CAR(((obj_t) BgL_localsz00_2361));
								{	/* Reduce/1occ.scm 243 */
									BgL_valuez00_bglt BgL_sfunz00_2365;

									BgL_sfunz00_2365 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2364))))->
										BgL_valuez00);
									{	/* Reduce/1occ.scm 244 */

										{	/* Reduce/1occ.scm 245 */
											obj_t BgL_resetz72z72_2366;

											{	/* Reduce/1occ.scm 246 */
												obj_t BgL_arg1708z00_2367;

												BgL_arg1708z00_2367 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2365)))->
													BgL_bodyz00);
												BgL_resetz72z72_2366 =
													BGl_nodezd21occz12zc0zzreduce_1occz00((
														(BgL_nodez00_bglt) BgL_arg1708z00_2367), BNIL);
											}
											{	/* Reduce/1occ.scm 246 */
												obj_t BgL_nbodyz00_2368;

												{	/* Reduce/1occ.scm 247 */
													int BgL_tmpz00_3031;

													BgL_tmpz00_3031 = (int) (((long) 1));
													BgL_nbodyz00_2368 = BGL_MVALUES_VAL(BgL_tmpz00_3031);
												}
												((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_sfunz00_2365)))->
														BgL_bodyz00) =
													((obj_t) BgL_nbodyz00_2368), BUNSPEC);
												{	/* Reduce/1occ.scm 248 */
													obj_t BgL_arg1704z00_2369;
													obj_t BgL_arg1707z00_2370;

													BgL_arg1704z00_2369 =
														CDR(((obj_t) BgL_localsz00_2361));
													if (CBOOL(BgL_resetz00_2362))
														{	/* Reduce/1occ.scm 248 */
															BgL_arg1707z00_2370 = BgL_resetz00_2362;
														}
													else
														{	/* Reduce/1occ.scm 248 */
															BgL_arg1707z00_2370 = BgL_resetz72z72_2366;
														}
													{
														obj_t BgL_resetz00_3041;
														obj_t BgL_localsz00_3040;

														BgL_localsz00_3040 = BgL_arg1704z00_2369;
														BgL_resetz00_3041 = BgL_arg1707z00_2370;
														BgL_resetz00_2362 = BgL_resetz00_3041;
														BgL_localsz00_2361 = BgL_localsz00_3040;
														goto BgL_loopz00_2360;
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
		}

	}



/* &node-1occ!-switch1345 */
	obj_t BGl_z62nodezd21occz12zd2switch1345z70zzreduce_1occz00(obj_t
		BgL_envz00_2252, obj_t BgL_nodez00_2253, obj_t BgL_1zd2expza2z70_2254)
	{
		{	/* Reduce/1occ.scm 215 */
			{	/* Reduce/1occ.scm 217 */
				obj_t BgL_resetz00_2372;

				BgL_resetz00_2372 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2253)))->BgL_testz00),
					BgL_1zd2expza2z70_2254);
				{	/* Reduce/1occ.scm 218 */
					obj_t BgL_ntestz00_2373;

					{	/* Reduce/1occ.scm 219 */
						int BgL_tmpz00_3047;

						BgL_tmpz00_3047 = (int) (((long) 1));
						BgL_ntestz00_2373 = BGL_MVALUES_VAL(BgL_tmpz00_3047);
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2253)))->BgL_testz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntestz00_2373)),
						BUNSPEC);
					{
						obj_t BgL_clausesz00_2375;
						obj_t BgL_resetz00_2376;

						BgL_clausesz00_2375 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2253)))->BgL_clausesz00);
						BgL_resetz00_2376 = BgL_resetz00_2372;
					BgL_loopz00_2374:
						if (NULLP(BgL_clausesz00_2375))
							{	/* Reduce/1occ.scm 223 */
								{	/* Reduce/1occ.scm 224 */
									int BgL_res1921z00_2377;

									{	/* Reduce/1occ.scm 224 */
										int BgL_tmpz00_3055;

										BgL_tmpz00_3055 = (int) (((long) 2));
										BgL_res1921z00_2377 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3055);
									} BgL_res1921z00_2377;
								}
								{	/* Reduce/1occ.scm 224 */
									obj_t BgL_auxz00_3060;
									int BgL_tmpz00_3058;

									BgL_auxz00_3060 =
										((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2253));
									BgL_tmpz00_3058 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3058, BgL_auxz00_3060);
								}
								return BgL_resetz00_2376;
							}
						else
							{	/* Reduce/1occ.scm 225 */
								obj_t BgL_clausez00_2378;

								BgL_clausez00_2378 = CAR(((obj_t) BgL_clausesz00_2375));
								{	/* Reduce/1occ.scm 226 */
									obj_t BgL_resetz72z72_2379;

									{	/* Reduce/1occ.scm 227 */
										obj_t BgL_arg1695z00_2380;

										BgL_arg1695z00_2380 = CDR(((obj_t) BgL_clausez00_2378));
										BgL_resetz72z72_2379 =
											BGl_nodezd21occz12zc0zzreduce_1occz00(
											((BgL_nodez00_bglt) BgL_arg1695z00_2380),
											BgL_1zd2expza2z70_2254);
									}
									{	/* Reduce/1occ.scm 227 */
										obj_t BgL_nclausez00_2381;

										{	/* Reduce/1occ.scm 228 */
											int BgL_tmpz00_3070;

											BgL_tmpz00_3070 = (int) (((long) 1));
											BgL_nclausez00_2381 = BGL_MVALUES_VAL(BgL_tmpz00_3070);
										}
										{	/* Reduce/1occ.scm 228 */
											obj_t BgL_tmpz00_3073;

											BgL_tmpz00_3073 = ((obj_t) BgL_clausez00_2378);
											SET_CDR(BgL_tmpz00_3073, BgL_nclausez00_2381);
										}
										{	/* Reduce/1occ.scm 229 */
											obj_t BgL_arg1688z00_2382;
											obj_t BgL_arg1692z00_2383;

											BgL_arg1688z00_2382 = CDR(((obj_t) BgL_clausesz00_2375));
											if (CBOOL(BgL_resetz00_2376))
												{	/* Reduce/1occ.scm 229 */
													BgL_arg1692z00_2383 = BgL_resetz00_2376;
												}
											else
												{	/* Reduce/1occ.scm 229 */
													BgL_arg1692z00_2383 = BgL_resetz72z72_2379;
												}
											{
												obj_t BgL_resetz00_3081;
												obj_t BgL_clausesz00_3080;

												BgL_clausesz00_3080 = BgL_arg1688z00_2382;
												BgL_resetz00_3081 = BgL_arg1692z00_2383;
												BgL_resetz00_2376 = BgL_resetz00_3081;
												BgL_clausesz00_2375 = BgL_clausesz00_3080;
												goto BgL_loopz00_2374;
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



/* &node-1occ!-fail1343 */
	obj_t BGl_z62nodezd21occz12zd2fail1343z70zzreduce_1occz00(obj_t
		BgL_envz00_2255, obj_t BgL_nodez00_2256, obj_t BgL_1zd2expza2z70_2257)
	{
		{	/* Reduce/1occ.scm 197 */
			{	/* Reduce/1occ.scm 199 */
				obj_t BgL_resetz00_2385;

				BgL_resetz00_2385 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2256)))->BgL_procz00),
					BgL_1zd2expza2z70_2257);
				{	/* Reduce/1occ.scm 200 */
					obj_t BgL_nprocz00_2386;

					{	/* Reduce/1occ.scm 201 */
						int BgL_tmpz00_3087;

						BgL_tmpz00_3087 = (int) (((long) 1));
						BgL_nprocz00_2386 = BGL_MVALUES_VAL(BgL_tmpz00_3087);
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2256)))->BgL_procz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nprocz00_2386)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 202 */
						obj_t BgL_1zd2expza2z72z02_2387;

						if (CBOOL(BgL_resetz00_2385))
							{	/* Reduce/1occ.scm 202 */
								BgL_1zd2expza2z72z02_2387 = BNIL;
							}
						else
							{	/* Reduce/1occ.scm 202 */
								BgL_1zd2expza2z72z02_2387 = BgL_1zd2expza2z70_2257;
							}
						{	/* Reduce/1occ.scm 203 */
							obj_t BgL_resetz72z72_2388;

							BgL_resetz72z72_2388 =
								BGl_nodezd21occz12zc0zzreduce_1occz00(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2256)))->BgL_msgz00),
								BgL_1zd2expza2z72z02_2387);
							{	/* Reduce/1occ.scm 204 */
								obj_t BgL_nmsgz00_2389;

								{	/* Reduce/1occ.scm 205 */
									int BgL_tmpz00_3098;

									BgL_tmpz00_3098 = (int) (((long) 1));
									BgL_nmsgz00_2389 = BGL_MVALUES_VAL(BgL_tmpz00_3098);
								}
								((((BgL_failz00_bglt) COBJECT(
												((BgL_failz00_bglt) BgL_nodez00_2256)))->BgL_msgz00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nmsgz00_2389)),
									BUNSPEC);
								{	/* Reduce/1occ.scm 206 */
									obj_t BgL_1zd2expza2z72z72z70_2390;

									if (CBOOL(BgL_resetz72z72_2388))
										{	/* Reduce/1occ.scm 206 */
											BgL_1zd2expza2z72z72z70_2390 = BNIL;
										}
									else
										{	/* Reduce/1occ.scm 206 */
											BgL_1zd2expza2z72z72z70_2390 = BgL_1zd2expza2z72z02_2387;
										}
									{	/* Reduce/1occ.scm 207 */
										obj_t BgL_resetz72z72z00_2391;

										BgL_resetz72z72z00_2391 =
											BGl_nodezd21occz12zc0zzreduce_1occz00(
											(((BgL_failz00_bglt) COBJECT(
														((BgL_failz00_bglt) BgL_nodez00_2256)))->
												BgL_objz00), BgL_1zd2expza2z72z72z70_2390);
										{	/* Reduce/1occ.scm 208 */
											obj_t BgL_nobjz00_2392;

											{	/* Reduce/1occ.scm 209 */
												int BgL_tmpz00_3109;

												BgL_tmpz00_3109 = (int) (((long) 1));
												BgL_nobjz00_2392 = BGL_MVALUES_VAL(BgL_tmpz00_3109);
											}
											((((BgL_failz00_bglt) COBJECT(
															((BgL_failz00_bglt) BgL_nodez00_2256)))->
													BgL_objz00) =
												((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
														BgL_nobjz00_2392)), BUNSPEC);
											{	/* Reduce/1occ.scm 210 */
												obj_t BgL_val0_1283z00_2393;

												if (CBOOL(BgL_resetz00_2385))
													{	/* Reduce/1occ.scm 210 */
														BgL_val0_1283z00_2393 = BgL_resetz00_2385;
													}
												else
													{	/* Reduce/1occ.scm 210 */
														if (CBOOL(BgL_resetz72z72_2388))
															{	/* Reduce/1occ.scm 210 */
																BgL_val0_1283z00_2393 = BgL_resetz72z72_2388;
															}
														else
															{	/* Reduce/1occ.scm 210 */
																BgL_val0_1283z00_2393 = BgL_resetz72z72z00_2391;
															}
													}
												{	/* Reduce/1occ.scm 210 */
													int BgL_res1919z00_2394;

													{	/* Reduce/1occ.scm 210 */
														int BgL_tmpz00_3119;

														BgL_tmpz00_3119 = (int) (((long) 2));
														BgL_res1919z00_2394 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3119);
													} BgL_res1919z00_2394;
												}
												{	/* Reduce/1occ.scm 210 */
													obj_t BgL_auxz00_3124;
													int BgL_tmpz00_3122;

													BgL_auxz00_3124 =
														((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2256));
													BgL_tmpz00_3122 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_3122, BgL_auxz00_3124);
												}
												return BgL_val0_1283z00_2393;
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

	}



/* &node-1occ!-condition1341 */
	obj_t BGl_z62nodezd21occz12zd2condition1341z70zzreduce_1occz00(obj_t
		BgL_envz00_2258, obj_t BgL_nodez00_2259, obj_t BgL_1zd2expza2z70_2260)
	{
		{	/* Reduce/1occ.scm 180 */
			{	/* Reduce/1occ.scm 182 */
				obj_t BgL_resetz00_2396;

				BgL_resetz00_2396 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->BgL_testz00),
					BgL_1zd2expza2z70_2260);
				{	/* Reduce/1occ.scm 183 */
					obj_t BgL_ntestz00_2397;

					{	/* Reduce/1occ.scm 184 */
						int BgL_tmpz00_3131;

						BgL_tmpz00_3131 = (int) (((long) 1));
						BgL_ntestz00_2397 = BGL_MVALUES_VAL(BgL_tmpz00_3131);
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->BgL_testz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntestz00_2397)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 185 */
						obj_t BgL_1zd2expza2z72z02_2398;

						if (CBOOL(BgL_resetz00_2396))
							{	/* Reduce/1occ.scm 185 */
								BgL_1zd2expza2z72z02_2398 = BNIL;
							}
						else
							{	/* Reduce/1occ.scm 185 */
								BgL_1zd2expza2z72z02_2398 = BgL_1zd2expza2z70_2260;
							}
						{	/* Reduce/1occ.scm 186 */
							obj_t BgL_resetz72z72_2399;

							BgL_resetz72z72_2399 =
								BGl_nodezd21occz12zc0zzreduce_1occz00(
								(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->
									BgL_truez00), BgL_1zd2expza2z72z02_2398);
							{	/* Reduce/1occ.scm 187 */
								obj_t BgL_ntruez00_2400;

								{	/* Reduce/1occ.scm 188 */
									int BgL_tmpz00_3142;

									BgL_tmpz00_3142 = (int) (((long) 1));
									BgL_ntruez00_2400 = BGL_MVALUES_VAL(BgL_tmpz00_3142);
								}
								((((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->
										BgL_truez00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntruez00_2400)),
									BUNSPEC);
								{	/* Reduce/1occ.scm 189 */
									obj_t BgL_resetz72z72z00_2401;

									BgL_resetz72z72z00_2401 =
										BGl_nodezd21occz12zc0zzreduce_1occz00(
										(((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->
											BgL_falsez00), BgL_1zd2expza2z72z02_2398);
									{	/* Reduce/1occ.scm 190 */
										obj_t BgL_nfalsez00_2402;

										{	/* Reduce/1occ.scm 191 */
											int BgL_tmpz00_3151;

											BgL_tmpz00_3151 = (int) (((long) 1));
											BgL_nfalsez00_2402 = BGL_MVALUES_VAL(BgL_tmpz00_3151);
										}
										((((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2259)))->
												BgL_falsez00) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
													BgL_nfalsez00_2402)), BUNSPEC);
										{	/* Reduce/1occ.scm 192 */
											obj_t BgL_val0_1281z00_2403;

											if (CBOOL(BgL_resetz00_2396))
												{	/* Reduce/1occ.scm 192 */
													BgL_val0_1281z00_2403 = BgL_resetz00_2396;
												}
											else
												{	/* Reduce/1occ.scm 192 */
													if (CBOOL(BgL_resetz72z72_2399))
														{	/* Reduce/1occ.scm 192 */
															BgL_val0_1281z00_2403 = BgL_resetz72z72_2399;
														}
													else
														{	/* Reduce/1occ.scm 192 */
															BgL_val0_1281z00_2403 = BgL_resetz72z72z00_2401;
														}
												}
											{	/* Reduce/1occ.scm 192 */
												int BgL_res1918z00_2404;

												{	/* Reduce/1occ.scm 192 */
													int BgL_tmpz00_3161;

													BgL_tmpz00_3161 = (int) (((long) 2));
													BgL_res1918z00_2404 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3161);
												} BgL_res1918z00_2404;
											}
											{	/* Reduce/1occ.scm 192 */
												obj_t BgL_auxz00_3166;
												int BgL_tmpz00_3164;

												BgL_auxz00_3166 =
													((obj_t)
													((BgL_conditionalz00_bglt) BgL_nodez00_2259));
												BgL_tmpz00_3164 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_3164, BgL_auxz00_3166);
											}
											return BgL_val0_1281z00_2403;
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



/* &node-1occ!-setq1339 */
	obj_t BGl_z62nodezd21occz12zd2setq1339z70zzreduce_1occz00(obj_t
		BgL_envz00_2261, obj_t BgL_nodez00_2262, obj_t BgL_1zd2expza2z70_2263)
	{
		{	/* Reduce/1occ.scm 170 */
			{	/* Reduce/1occ.scm 172 */
				obj_t BgL_resetz00_2406;

				BgL_resetz00_2406 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2262)))->BgL_valuez00),
					BgL_1zd2expza2z70_2263);
				{	/* Reduce/1occ.scm 173 */
					obj_t BgL_nvaluez00_2407;

					{	/* Reduce/1occ.scm 174 */
						int BgL_tmpz00_3173;

						BgL_tmpz00_3173 = (int) (((long) 1));
						BgL_nvaluez00_2407 = BGL_MVALUES_VAL(BgL_tmpz00_3173);
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2262)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2407)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 175 */
						int BgL_res1917z00_2408;

						{	/* Reduce/1occ.scm 175 */
							int BgL_tmpz00_3179;

							BgL_tmpz00_3179 = (int) (((long) 2));
							BgL_res1917z00_2408 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3179);
						} BgL_res1917z00_2408;
					}
					{	/* Reduce/1occ.scm 175 */
						obj_t BgL_auxz00_3184;
						int BgL_tmpz00_3182;

						BgL_auxz00_3184 = ((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2262));
						BgL_tmpz00_3182 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_3182, BgL_auxz00_3184);
					}
					return BgL_resetz00_2406;
				}
			}
		}

	}



/* &node-1occ!-cast1337 */
	obj_t BGl_z62nodezd21occz12zd2cast1337z70zzreduce_1occz00(obj_t
		BgL_envz00_2264, obj_t BgL_nodez00_2265, obj_t BgL_1zd2expza2z70_2266)
	{
		{	/* Reduce/1occ.scm 160 */
			{	/* Reduce/1occ.scm 162 */
				obj_t BgL_resetz00_2410;

				BgL_resetz00_2410 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2265)))->BgL_argz00),
					BgL_1zd2expza2z70_2266);
				{	/* Reduce/1occ.scm 163 */
					obj_t BgL_nargz00_2411;

					{	/* Reduce/1occ.scm 164 */
						int BgL_tmpz00_3191;

						BgL_tmpz00_3191 = (int) (((long) 1));
						BgL_nargz00_2411 = BGL_MVALUES_VAL(BgL_tmpz00_3191);
					}
					((((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_2265)))->BgL_argz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nargz00_2411)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 165 */
						int BgL_res1916z00_2412;

						{	/* Reduce/1occ.scm 165 */
							int BgL_tmpz00_3197;

							BgL_tmpz00_3197 = (int) (((long) 2));
							BgL_res1916z00_2412 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3197);
						} BgL_res1916z00_2412;
					}
					{	/* Reduce/1occ.scm 165 */
						obj_t BgL_auxz00_3202;
						int BgL_tmpz00_3200;

						BgL_auxz00_3202 = ((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2265));
						BgL_tmpz00_3200 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_3200, BgL_auxz00_3202);
					}
					return BgL_resetz00_2410;
				}
			}
		}

	}



/* &node-1occ!-private1335 */
	obj_t BGl_z62nodezd21occz12zd2private1335z70zzreduce_1occz00(obj_t
		BgL_envz00_2267, obj_t BgL_nodez00_2268, obj_t BgL_1zd2expza2z70_2269)
	{
		{	/* Reduce/1occ.scm 153 */
			{	/* Reduce/1occ.scm 155 */
				obj_t BgL_val0_1275z00_2414;

				{	/* Reduce/1occ.scm 155 */
					obj_t BgL_arg1644z00_2415;

					BgL_arg1644z00_2415 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_privatez00_bglt) BgL_nodez00_2268))))->BgL_exprza2za2);
					BgL_val0_1275z00_2414 =
						BGl_nodezd21occza2z12z62zzreduce_1occz00(BgL_arg1644z00_2415,
						BgL_1zd2expza2z70_2269);
				}
				{	/* Reduce/1occ.scm 155 */
					int BgL_res1915z00_2416;

					{	/* Reduce/1occ.scm 155 */
						int BgL_tmpz00_3210;

						BgL_tmpz00_3210 = (int) (((long) 2));
						BgL_res1915z00_2416 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3210);
					} BgL_res1915z00_2416;
				}
				{	/* Reduce/1occ.scm 155 */
					obj_t BgL_auxz00_3215;
					int BgL_tmpz00_3213;

					BgL_auxz00_3215 = ((obj_t) ((BgL_privatez00_bglt) BgL_nodez00_2268));
					BgL_tmpz00_3213 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3213, BgL_auxz00_3215);
				}
				return BgL_val0_1275z00_2414;
			}
		}

	}



/* &node-1occ!-extern1332 */
	obj_t BGl_z62nodezd21occz12zd2extern1332z70zzreduce_1occz00(obj_t
		BgL_envz00_2270, obj_t BgL_nodez00_2271, obj_t BgL_1zd2expza2z70_2272)
	{
		{	/* Reduce/1occ.scm 147 */
			{	/* Reduce/1occ.scm 148 */
				bool_t BgL_tmpz00_3219;

				{	/* Reduce/1occ.scm 148 */
					bool_t BgL_val0_1273z00_2418;

					BgL_val0_1273z00_2418 =
						BGl_sidezd2effectzf3z21zzeffect_effectz00(
						((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2271)));
					{	/* Reduce/1occ.scm 148 */
						int BgL_res1914z00_2419;

						{	/* Reduce/1occ.scm 148 */
							int BgL_tmpz00_3223;

							BgL_tmpz00_3223 = (int) (((long) 2));
							BgL_res1914z00_2419 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3223);
						} BgL_res1914z00_2419;
					}
					{	/* Reduce/1occ.scm 148 */
						obj_t BgL_auxz00_3228;
						int BgL_tmpz00_3226;

						BgL_auxz00_3228 = ((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2271));
						BgL_tmpz00_3226 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_3226, BgL_auxz00_3228);
					}
					BgL_tmpz00_3219 = BgL_val0_1273z00_2418;
				}
				return BBOOL(BgL_tmpz00_3219);
			}
		}

	}



/* &node-1occ!-funcall1330 */
	obj_t BGl_z62nodezd21occz12zd2funcall1330z70zzreduce_1occz00(obj_t
		BgL_envz00_2273, obj_t BgL_nodez00_2274, obj_t BgL_1zd2expza2z70_2275)
	{
		{	/* Reduce/1occ.scm 136 */
			{	/* Reduce/1occ.scm 138 */
				obj_t BgL_resetz72z72_2421;

				BgL_resetz72z72_2421 =
					BGl_nodezd21occza2z12z62zzreduce_1occz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2274)))->BgL_argsz00),
					BgL_1zd2expza2z70_2275);
				{	/* Reduce/1occ.scm 139 */
					int BgL_res1913z00_2422;

					{	/* Reduce/1occ.scm 139 */
						int BgL_tmpz00_3236;

						BgL_tmpz00_3236 = (int) (((long) 2));
						BgL_res1913z00_2422 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3236);
					} BgL_res1913z00_2422;
				}
				{	/* Reduce/1occ.scm 139 */
					obj_t BgL_auxz00_3241;
					int BgL_tmpz00_3239;

					BgL_auxz00_3241 = ((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2274));
					BgL_tmpz00_3239 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3239, BgL_auxz00_3241);
				}
				return BgL_resetz72z72_2421;
			}
		}

	}



/* &node-1occ!-app-ly1328 */
	obj_t BGl_z62nodezd21occz12zd2appzd2ly1328za2zzreduce_1occz00(obj_t
		BgL_envz00_2276, obj_t BgL_nodez00_2277, obj_t BgL_1zd2expza2z70_2278)
	{
		{	/* Reduce/1occ.scm 123 */
			{	/* Reduce/1occ.scm 125 */
				obj_t BgL_resetz00_2424;

				BgL_resetz00_2424 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2277)))->BgL_funz00),
					BgL_1zd2expza2z70_2278);
				{	/* Reduce/1occ.scm 126 */
					obj_t BgL_nfunz00_2425;

					{	/* Reduce/1occ.scm 127 */
						int BgL_tmpz00_3248;

						BgL_tmpz00_3248 = (int) (((long) 1));
						BgL_nfunz00_2425 = BGL_MVALUES_VAL(BgL_tmpz00_3248);
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2277)))->BgL_funz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nfunz00_2425)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 128 */
						obj_t BgL_resetz72z72_2426;

						{	/* Reduce/1occ.scm 129 */
							BgL_nodez00_bglt BgL_arg1634z00_2427;
							obj_t BgL_arg1639z00_2428;

							BgL_arg1634z00_2427 =
								(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2277)))->BgL_argz00);
							if (CBOOL(BgL_resetz00_2424))
								{	/* Reduce/1occ.scm 129 */
									BgL_arg1639z00_2428 = BNIL;
								}
							else
								{	/* Reduce/1occ.scm 129 */
									BgL_arg1639z00_2428 = BgL_1zd2expza2z70_2278;
								}
							BgL_resetz72z72_2426 =
								BGl_nodezd21occz12zc0zzreduce_1occz00(BgL_arg1634z00_2427,
								BgL_arg1639z00_2428);
						}
						{	/* Reduce/1occ.scm 129 */
							obj_t BgL_nargz00_2429;

							{	/* Reduce/1occ.scm 130 */
								int BgL_tmpz00_3259;

								BgL_tmpz00_3259 = (int) (((long) 1));
								BgL_nargz00_2429 = BGL_MVALUES_VAL(BgL_tmpz00_3259);
							}
							((((BgL_appzd2lyzd2_bglt) COBJECT(
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_2277)))->BgL_argz00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nargz00_2429)),
								BUNSPEC);
							{	/* Reduce/1occ.scm 131 */
								obj_t BgL_val0_1269z00_2430;

								if (CBOOL(BgL_resetz00_2424))
									{	/* Reduce/1occ.scm 131 */
										BgL_val0_1269z00_2430 = BgL_resetz00_2424;
									}
								else
									{	/* Reduce/1occ.scm 131 */
										BgL_val0_1269z00_2430 = BgL_resetz72z72_2426;
									}
								{	/* Reduce/1occ.scm 131 */
									int BgL_res1912z00_2431;

									{	/* Reduce/1occ.scm 131 */
										int BgL_tmpz00_3267;

										BgL_tmpz00_3267 = (int) (((long) 2));
										BgL_res1912z00_2431 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3267);
									} BgL_res1912z00_2431;
								}
								{	/* Reduce/1occ.scm 131 */
									obj_t BgL_auxz00_3272;
									int BgL_tmpz00_3270;

									BgL_auxz00_3272 =
										((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2277));
									BgL_tmpz00_3270 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3270, BgL_auxz00_3272);
								}
								return BgL_val0_1269z00_2430;
							}
						}
					}
				}
			}
		}

	}



/* &node-1occ!-sync1326 */
	obj_t BGl_z62nodezd21occz12zd2sync1326z70zzreduce_1occz00(obj_t
		BgL_envz00_2279, obj_t BgL_nodez00_2280, obj_t BgL_1zd2expza2z70_2281)
	{
		{	/* Reduce/1occ.scm 110 */
			{	/* Reduce/1occ.scm 112 */
				obj_t BgL_resetmz00_2433;

				BgL_resetmz00_2433 =
					BGl_nodezd21occz12zc0zzreduce_1occz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2280)))->BgL_mutexz00),
					BgL_1zd2expza2z70_2281);
				{	/* Reduce/1occ.scm 113 */
					obj_t BgL_nmutexz00_2434;

					{	/* Reduce/1occ.scm 114 */
						int BgL_tmpz00_3279;

						BgL_tmpz00_3279 = (int) (((long) 1));
						BgL_nmutexz00_2434 = BGL_MVALUES_VAL(BgL_tmpz00_3279);
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2280)))->BgL_mutexz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nmutexz00_2434)),
						BUNSPEC);
					{	/* Reduce/1occ.scm 115 */
						obj_t BgL_resetpz00_2435;

						BgL_resetpz00_2435 =
							BGl_nodezd21occz12zc0zzreduce_1occz00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_2280)))->BgL_prelockz00),
							BgL_1zd2expza2z70_2281);
						{	/* Reduce/1occ.scm 116 */
							obj_t BgL_nprelockz00_2436;

							{	/* Reduce/1occ.scm 117 */
								int BgL_tmpz00_3288;

								BgL_tmpz00_3288 = (int) (((long) 1));
								BgL_nprelockz00_2436 = BGL_MVALUES_VAL(BgL_tmpz00_3288);
							}
							((((BgL_syncz00_bglt) COBJECT(
											((BgL_syncz00_bglt) BgL_nodez00_2280)))->BgL_prelockz00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nprelockz00_2436)),
								BUNSPEC);
							{	/* Reduce/1occ.scm 118 */
								obj_t BgL_val0_1267z00_2437;

								{	/* Reduce/1occ.scm 118 */
									obj_t BgL__ortest_1107z00_2438;

									BgL__ortest_1107z00_2438 =
										BGl_nodezd21occz12zc0zzreduce_1occz00(
										(((BgL_syncz00_bglt) COBJECT(
													((BgL_syncz00_bglt) BgL_nodez00_2280)))->BgL_bodyz00),
										BgL_1zd2expza2z70_2281);
									if (CBOOL(BgL__ortest_1107z00_2438))
										{	/* Reduce/1occ.scm 118 */
											BgL_val0_1267z00_2437 = BgL__ortest_1107z00_2438;
										}
									else
										{	/* Reduce/1occ.scm 118 */
											if (CBOOL(BgL_resetmz00_2433))
												{	/* Reduce/1occ.scm 118 */
													BgL_val0_1267z00_2437 = BgL_resetmz00_2433;
												}
											else
												{	/* Reduce/1occ.scm 118 */
													BgL_val0_1267z00_2437 = BgL_resetpz00_2435;
												}
										}
								}
								{	/* Reduce/1occ.scm 118 */
									int BgL_res1911z00_2439;

									{	/* Reduce/1occ.scm 118 */
										int BgL_tmpz00_3301;

										BgL_tmpz00_3301 = (int) (((long) 2));
										BgL_res1911z00_2439 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3301);
									} BgL_res1911z00_2439;
								}
								{	/* Reduce/1occ.scm 118 */
									obj_t BgL_auxz00_3306;
									int BgL_tmpz00_3304;

									BgL_auxz00_3306 =
										((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2280));
									BgL_tmpz00_3304 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3304, BgL_auxz00_3306);
								}
								return BgL_val0_1267z00_2437;
							}
						}
					}
				}
			}
		}

	}



/* &node-1occ!-sequence1324 */
	obj_t BGl_z62nodezd21occz12zd2sequence1324z70zzreduce_1occz00(obj_t
		BgL_envz00_2282, obj_t BgL_nodez00_2283, obj_t BgL_1zd2expza2z70_2284)
	{
		{	/* Reduce/1occ.scm 103 */
			{	/* Reduce/1occ.scm 105 */
				obj_t BgL_val0_1265z00_2441;

				BgL_val0_1265z00_2441 =
					BGl_nodezd21occza2z12z62zzreduce_1occz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2283)))->BgL_nodesz00),
					BgL_1zd2expza2z70_2284);
				{	/* Reduce/1occ.scm 105 */
					int BgL_res1910z00_2442;

					{	/* Reduce/1occ.scm 105 */
						int BgL_tmpz00_3313;

						BgL_tmpz00_3313 = (int) (((long) 2));
						BgL_res1910z00_2442 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3313);
					} BgL_res1910z00_2442;
				}
				{	/* Reduce/1occ.scm 105 */
					obj_t BgL_auxz00_3318;
					int BgL_tmpz00_3316;

					BgL_auxz00_3318 = ((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2283));
					BgL_tmpz00_3316 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3316, BgL_auxz00_3318);
				}
				return BgL_val0_1265z00_2441;
			}
		}

	}



/* &node-1occ!-closure1322 */
	obj_t BGl_z62nodezd21occz12zd2closure1322z70zzreduce_1occz00(obj_t
		BgL_envz00_2285, obj_t BgL_nodez00_2286, obj_t BgL_1zd2expza2z70_2287)
	{
		{	/* Reduce/1occ.scm 97 */
			{	/* Reduce/1occ.scm 98 */
				bool_t BgL_tmpz00_3322;

				{	/* Reduce/1occ.scm 98 */
					int BgL_res1909z00_2444;

					{	/* Reduce/1occ.scm 98 */
						int BgL_tmpz00_3323;

						BgL_tmpz00_3323 = (int) (((long) 2));
						BgL_res1909z00_2444 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3323);
					} BgL_res1909z00_2444;
				}
				{	/* Reduce/1occ.scm 98 */
					obj_t BgL_auxz00_3328;
					int BgL_tmpz00_3326;

					BgL_auxz00_3328 = ((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2286));
					BgL_tmpz00_3326 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3326, BgL_auxz00_3328);
				}
				BgL_tmpz00_3322 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_3322);
			}
		}

	}



/* &node-1occ!-var1320 */
	obj_t BGl_z62nodezd21occz12zd2var1320z70zzreduce_1occz00(obj_t
		BgL_envz00_2288, obj_t BgL_nodez00_2289, obj_t BgL_1zd2expza2z70_2290)
	{
		{	/* Reduce/1occ.scm 84 */
			{	/* Reduce/1occ.scm 85 */
				BgL_variablez00_bglt BgL_vz00_2446;

				BgL_vz00_2446 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2289)))->BgL_variablez00);
				{	/* Reduce/1occ.scm 86 */
					obj_t BgL_falphaz00_2447;

					BgL_falphaz00_2447 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_vz00_2446), BgL_1zd2expza2z70_2290);
					if (PAIRP(BgL_falphaz00_2447))
						{	/* Reduce/1occ.scm 87 */
							((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2446))->
									BgL_occurrencez00) =
								((long) ((((BgL_variablez00_bglt) COBJECT(BgL_vz00_2446))->
											BgL_occurrencez00) - ((long) 1))), BUNSPEC);
							BGl_za2variablezd2removedza2zd2zzreduce_1occz00 =
								(BGl_za2variablezd2removedza2zd2zzreduce_1occz00 + ((long) 1));
							{	/* Reduce/1occ.scm 91 */
								obj_t BgL_arg1613z00_2448;

								BgL_arg1613z00_2448 = CDR(BgL_falphaz00_2447);
								return
									BGl_nodezd21occz12zc0zzreduce_1occz00(
									((BgL_nodez00_bglt) BgL_arg1613z00_2448),
									BgL_1zd2expza2z70_2290);
							}
						}
					else
						{	/* Reduce/1occ.scm 87 */
							{	/* Reduce/1occ.scm 92 */
								int BgL_res1908z00_2449;

								{	/* Reduce/1occ.scm 92 */
									int BgL_tmpz00_3346;

									BgL_tmpz00_3346 = (int) (((long) 2));
									BgL_res1908z00_2449 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3346);
								} BgL_res1908z00_2449;
							}
							{	/* Reduce/1occ.scm 92 */
								obj_t BgL_auxz00_3351;
								int BgL_tmpz00_3349;

								BgL_auxz00_3351 =
									((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2289));
								BgL_tmpz00_3349 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3349, BgL_auxz00_3351);
							}
							return BFALSE;
						}
				}
			}
		}

	}



/* &node-1occ!-kwote1318 */
	obj_t BGl_z62nodezd21occz12zd2kwote1318z70zzreduce_1occz00(obj_t
		BgL_envz00_2291, obj_t BgL_nodez00_2292, obj_t BgL_1zd2expza2z70_2293)
	{
		{	/* Reduce/1occ.scm 78 */
			{	/* Reduce/1occ.scm 79 */
				bool_t BgL_tmpz00_3355;

				{	/* Reduce/1occ.scm 79 */
					int BgL_res1904z00_2451;

					{	/* Reduce/1occ.scm 79 */
						int BgL_tmpz00_3356;

						BgL_tmpz00_3356 = (int) (((long) 2));
						BgL_res1904z00_2451 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3356);
					} BgL_res1904z00_2451;
				}
				{	/* Reduce/1occ.scm 79 */
					obj_t BgL_auxz00_3361;
					int BgL_tmpz00_3359;

					BgL_auxz00_3361 = ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_2292));
					BgL_tmpz00_3359 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3359, BgL_auxz00_3361);
				}
				BgL_tmpz00_3355 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_3355);
			}
		}

	}



/* &node-1occ!-atom1316 */
	obj_t BGl_z62nodezd21occz12zd2atom1316z70zzreduce_1occz00(obj_t
		BgL_envz00_2294, obj_t BgL_nodez00_2295, obj_t BgL_1zd2expza2z70_2296)
	{
		{	/* Reduce/1occ.scm 72 */
			{	/* Reduce/1occ.scm 73 */
				bool_t BgL_tmpz00_3366;

				{	/* Reduce/1occ.scm 73 */
					int BgL_res1903z00_2453;

					{	/* Reduce/1occ.scm 73 */
						int BgL_tmpz00_3367;

						BgL_tmpz00_3367 = (int) (((long) 2));
						BgL_res1903z00_2453 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3367);
					} BgL_res1903z00_2453;
				}
				{	/* Reduce/1occ.scm 73 */
					obj_t BgL_auxz00_3372;
					int BgL_tmpz00_3370;

					BgL_auxz00_3372 = ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_2295));
					BgL_tmpz00_3370 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3370, BgL_auxz00_3372);
				}
				BgL_tmpz00_3366 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_3366);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_1occz00()
	{
		{	/* Reduce/1occ.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
			return
				BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1969z00zzreduce_1occz00));
		}

	}

#ifdef __cplusplus
}
#endif
