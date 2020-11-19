/*===========================================================================*/
/*   (Reduce/cse.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/cse.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_z62nodezd2csez12zd2closure1319z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2letzd2var1359za2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzreduce_csez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t
		BGl_z62nodezd2csez12zd2jumpzd2exzd2it1345z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzreduce_csez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_csez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd2csez12zd2switch1339z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2csez12zd2boxzd2setz121353zb0zzreduce_csez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2makezd2box1351za2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2csez121310za2zzreduce_csez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2var1317z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_csez00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl_z62nodezd2csez12zd2cast1331z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2setq1333z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62nodezd2csez12zd2funcall1327z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2cseza2z12z62zzreduce_csez00(obj_t, obj_t);
	static obj_t BGl_findzd2stackzd2zzreduce_csez00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2retblock1347z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_csez00 = BUNSPEC;
	static obj_t BGl_z62nodezd2csez12zd2boxzd2ref1355za2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static long BGl_za2csezd2removedza2zd2zzreduce_csez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2kwote1315z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_csez00();
	static obj_t BGl_genericzd2initzd2zzreduce_csez00();
	BGL_EXPORTED_DECL obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62nodezd2csez12zd2appzd2ly1325za2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2atom1313z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2csez12zd2return1349z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2csez12zd2extern1329z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62reducezd2csez12za2zzreduce_csez00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62nodezd2csez12zd2letzd2fun1341za2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2setzd2exzd2it1343z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_csez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_csez00();
	static obj_t BGl_z62nodezd2csez12zd2sequence1321z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_csez00();
	extern bool_t BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt,
		BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62nodezd2csez12zd2sync1323z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2csez12zd2fail1337z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2csez12za2zzreduce_csez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2csez12zd2app1357z70zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62nodezd2csez12zd2conditiona1335z70zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2csez12zd2envz12zzreduce_csez00,
		BgL_bgl_za762reduceza7d2cseza71922za7,
		BGl_z62reducezd2csez12za2zzreduce_csez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121923za7,
		BGl_z62nodezd2csez12zd2funcall1327z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121924za7,
		BGl_z62nodezd2csez12zd2extern1329z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121925za7,
		BGl_z62nodezd2csez12zd2cast1331z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121926za7,
		BGl_z62nodezd2csez12zd2setq1333z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121927za7,
		BGl_z62nodezd2csez12zd2conditiona1335z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121928za7,
		BGl_z62nodezd2csez12zd2fail1337z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121929za7,
		BGl_z62nodezd2csez12zd2switch1339z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121930za7,
		BGl_z62nodezd2csez12zd2letzd2fun1341za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121931za7,
		BGl_z62nodezd2csez12zd2setzd2exzd2it1343z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121932za7,
		BGl_z62nodezd2csez12zd2jumpzd2exzd2it1345z70zzreduce_csez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121933za7,
		BGl_z62nodezd2csez12zd2retblock1347z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121934za7,
		BGl_z62nodezd2csez12zd2return1349z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121935za7,
		BGl_z62nodezd2csez12zd2makezd2box1351za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121936za7,
		BGl_z62nodezd2csez12zd2boxzd2setz121353zb0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1914z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121937za7,
		BGl_z62nodezd2csez12zd2boxzd2ref1355za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121938za7,
		BGl_z62nodezd2csez12zd2app1357z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1916z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121939za7,
		BGl_z62nodezd2csez12zd2letzd2var1359za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1887z00zzreduce_csez00,
		BgL_bgl_string1887za700za7za7r1940za7, "      cse                    ", 29);
	      DEFINE_STRING(BGl_string1888z00zzreduce_csez00,
		BgL_bgl_string1888za700za7za7r1941za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string1890z00zzreduce_csez00,
		BgL_bgl_string1890za700za7za7r1942za7, "node-cse!1310", 13);
	      DEFINE_STRING(BGl_string1891z00zzreduce_csez00,
		BgL_bgl_string1891za700za7za7r1943za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1893z00zzreduce_csez00,
		BgL_bgl_string1893za700za7za7r1944za7, "node-cse!", 9);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121945za7,
		BGl_z62nodezd2csez12za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1917z00zzreduce_csez00,
		BgL_bgl_string1917za700za7za7r1946za7, "reduce_cse", 10);
	      DEFINE_STRING(BGl_string1918z00zzreduce_csez00,
		BgL_bgl_string1918za700za7za7r1947za7, "call read node-cse!1310 ", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121948za7,
		BGl_z62nodezd2csez121310za2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121949za7,
		BGl_z62nodezd2csez12zd2atom1313z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1894z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121950za7,
		BGl_z62nodezd2csez12zd2kwote1315z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121951za7,
		BGl_z62nodezd2csez12zd2var1317z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121952za7,
		BGl_z62nodezd2csez12zd2closure1319z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121953za7,
		BGl_z62nodezd2csez12zd2sequence1321z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121954za7,
		BGl_z62nodezd2csez12zd2sync1323z70zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzreduce_csez00,
		BgL_bgl_za762nodeza7d2cseza7121955za7,
		BGl_z62nodezd2csez12zd2appzd2ly1325za2zzreduce_csez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_csez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long
		BgL_checksumz00_2400, char *BgL_fromz00_2401)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_csez00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_csez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_csez00();
					BGl_libraryzd2moduleszd2initz00zzreduce_csez00();
					BGl_cnstzd2initzd2zzreduce_csez00();
					BGl_importedzd2moduleszd2initz00zzreduce_csez00();
					BGl_genericzd2initzd2zzreduce_csez00();
					BGl_methodzd2initzd2zzreduce_csez00();
					return BGl_toplevelzd2initzd2zzreduce_csez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_cse");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "reduce_cse");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			{	/* Reduce/cse.scm 15 */
				obj_t BgL_cportz00_2225;

				{	/* Reduce/cse.scm 15 */
					obj_t BgL_stringz00_2233;

					BgL_stringz00_2233 = BGl_string1918z00zzreduce_csez00;
					{	/* Reduce/cse.scm 15 */
						obj_t BgL_startz00_2234;

						BgL_startz00_2234 = BINT(((long) 0));
						{	/* Reduce/cse.scm 15 */
							obj_t BgL_endz00_2235;

							BgL_endz00_2235 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2233)));
							{	/* Reduce/cse.scm 15 */

								BgL_cportz00_2225 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2233, BgL_startz00_2234, BgL_endz00_2235);
				}}}}
				{
					long BgL_iz00_2226;

					BgL_iz00_2226 = ((long) 2);
				BgL_loopz00_2227:
					if ((BgL_iz00_2226 == ((long) -1)))
						{	/* Reduce/cse.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/cse.scm 15 */
							{	/* Reduce/cse.scm 15 */
								obj_t BgL_arg1920z00_2229;

								{	/* Reduce/cse.scm 15 */

									{	/* Reduce/cse.scm 15 */
										obj_t BgL_locationz00_2231;

										BgL_locationz00_2231 = BBOOL(((bool_t) 0));
										{	/* Reduce/cse.scm 15 */

											BgL_arg1920z00_2229 =
												BGl_readz00zz__readerz00(BgL_cportz00_2225,
												BgL_locationz00_2231);
										}
									}
								}
								{	/* Reduce/cse.scm 15 */
									int BgL_tmpz00_2433;

									BgL_tmpz00_2433 = (int) (BgL_iz00_2226);
									CNST_TABLE_SET(BgL_tmpz00_2433, BgL_arg1920z00_2229);
							}}
							{	/* Reduce/cse.scm 15 */
								int BgL_auxz00_2232;

								BgL_auxz00_2232 = (int) ((BgL_iz00_2226 - ((long) 1)));
								{
									long BgL_iz00_2438;

									BgL_iz00_2438 = (long) (BgL_auxz00_2232);
									BgL_iz00_2226 = BgL_iz00_2438;
									goto BgL_loopz00_2227;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			BGl_za2csezd2removedza2zd2zzreduce_csez00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzreduce_csez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1381;

				BgL_headz00_1381 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1382;
					obj_t BgL_tailz00_1383;

					BgL_prevz00_1382 = BgL_headz00_1381;
					BgL_tailz00_1383 = BgL_l1z00_1;
				BgL_loopz00_1384:
					if (PAIRP(BgL_tailz00_1383))
						{
							obj_t BgL_newzd2prevzd2_1386;

							BgL_newzd2prevzd2_1386 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1383), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1382, BgL_newzd2prevzd2_1386);
							{
								obj_t BgL_tailz00_2448;
								obj_t BgL_prevz00_2447;

								BgL_prevz00_2447 = BgL_newzd2prevzd2_1386;
								BgL_tailz00_2448 = CDR(BgL_tailz00_1383);
								BgL_tailz00_1383 = BgL_tailz00_2448;
								BgL_prevz00_1382 = BgL_prevz00_2447;
								goto BgL_loopz00_1384;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1381);
				}
			}
		}

	}



/* reduce-cse! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/cse.scm 34 */
			{	/* Reduce/cse.scm 35 */
				obj_t BgL_list1364z00_1389;

				BgL_list1364z00_1389 =
					MAKE_YOUNG_PAIR(BGl_string1887z00zzreduce_csez00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1364z00_1389);
			}
			BGl_za2csezd2removedza2zd2zzreduce_csez00 = ((long) 0);
			{
				obj_t BgL_l1250z00_1391;

				BgL_l1250z00_1391 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31365ze3z87_1392:
				if (PAIRP(BgL_l1250z00_1391))
					{	/* Reduce/cse.scm 37 */
						{	/* Reduce/cse.scm 38 */
							obj_t BgL_globalz00_1394;

							BgL_globalz00_1394 = CAR(BgL_l1250z00_1391);
							{	/* Reduce/cse.scm 38 */
								BgL_valuez00_bglt BgL_funz00_1395;

								BgL_funz00_1395 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1394))))->
									BgL_valuez00);
								{	/* Reduce/cse.scm 38 */
									obj_t BgL_nodez00_1396;

									BgL_nodez00_1396 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1395)))->BgL_bodyz00);
									{	/* Reduce/cse.scm 39 */

										{	/* Reduce/cse.scm 40 */
											obj_t BgL_arg1367z00_1397;

											{	/* Reduce/cse.scm 40 */
												obj_t BgL__z00_1398;

												BgL__z00_1398 =
													BGl_nodezd2csez12zc0zzreduce_csez00(
													((BgL_nodez00_bglt) BgL_nodez00_1396), BNIL);
												{	/* Reduce/cse.scm 41 */
													obj_t BgL_nodez00_1399;

													{	/* Reduce/cse.scm 41 */
														int BgL_tmpz00_2464;

														BgL_tmpz00_2464 = (int) (((long) 1));
														BgL_nodez00_1399 = BGL_MVALUES_VAL(BgL_tmpz00_2464);
													}
													BgL_arg1367z00_1397 = BgL_nodez00_1399;
											}}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1395)))->
													BgL_bodyz00) =
												((obj_t) BgL_arg1367z00_1397), BUNSPEC);
										} BUNSPEC;
						}}}}
						{
							obj_t BgL_l1250z00_2469;

							BgL_l1250z00_2469 = CDR(BgL_l1250z00_1391);
							BgL_l1250z00_1391 = BgL_l1250z00_2469;
							goto BgL_zc3z04anonymousza31365ze3z87_1392;
						}
					}
				else
					{	/* Reduce/cse.scm 37 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/cse.scm 45 */
				obj_t BgL_list1371z00_1402;

				{	/* Reduce/cse.scm 45 */
					obj_t BgL_arg1372z00_1403;

					{	/* Reduce/cse.scm 45 */
						obj_t BgL_arg1381z00_1404;

						{	/* Reduce/cse.scm 45 */
							obj_t BgL_arg1382z00_1405;

							BgL_arg1382z00_1405 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1381z00_1404 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
								BgL_arg1382z00_1405);
						}
						BgL_arg1372z00_1403 =
							MAKE_YOUNG_PAIR(BINT(BGl_za2csezd2removedza2zd2zzreduce_csez00),
							BgL_arg1381z00_1404);
					}
					BgL_list1371z00_1402 =
						MAKE_YOUNG_PAIR(BGl_string1888z00zzreduce_csez00,
						BgL_arg1372z00_1403);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1371z00_1402);
			}
			return BgL_globalsz00_3;
		}

	}



/* &reduce-cse! */
	obj_t BGl_z62reducezd2csez12za2zzreduce_csez00(obj_t BgL_envz00_2119,
		obj_t BgL_globalsz00_2120)
	{
		{	/* Reduce/cse.scm 34 */
			return BGl_reducezd2csez12zc0zzreduce_csez00(BgL_globalsz00_2120);
		}

	}



/* node-cse*! */
	obj_t BGl_nodezd2cseza2z12z62zzreduce_csez00(obj_t BgL_nodeza2za2_54,
		obj_t BgL_stackz00_55)
	{
		{	/* Reduce/cse.scm 380 */
			{
				obj_t BgL_nodeza2za2_1407;
				bool_t BgL_resetz00_1408;
				obj_t BgL_stackz00_1409;

				BgL_nodeza2za2_1407 = BgL_nodeza2za2_54;
				BgL_resetz00_1408 = ((bool_t) 0);
				BgL_stackz00_1409 = BgL_stackz00_55;
			BgL_zc3z04anonymousza31383ze3z87_1410:
				if (NULLP(BgL_nodeza2za2_1407))
					{	/* Reduce/cse.scm 385 */
						return BBOOL(BgL_resetz00_1408);
					}
				else
					{	/* Reduce/cse.scm 385 */
						if (NULLP(CDR(((obj_t) BgL_nodeza2za2_1407))))
							{	/* Reduce/cse.scm 388 */
								obj_t BgL_resetz72z72_1414;

								{	/* Reduce/cse.scm 389 */
									obj_t BgL_arg1396z00_1417;

									BgL_arg1396z00_1417 = CAR(((obj_t) BgL_nodeza2za2_1407));
									BgL_resetz72z72_1414 =
										BGl_nodezd2csez12zc0zzreduce_csez00(
										((BgL_nodez00_bglt) BgL_arg1396z00_1417),
										BgL_stackz00_1409);
								}
								{	/* Reduce/cse.scm 389 */
									obj_t BgL_nodez00_1415;

									{	/* Reduce/cse.scm 390 */
										int BgL_tmpz00_2492;

										BgL_tmpz00_2492 = (int) (((long) 1));
										BgL_nodez00_1415 = BGL_MVALUES_VAL(BgL_tmpz00_2492);
									}
									{	/* Reduce/cse.scm 390 */
										obj_t BgL_tmpz00_2495;

										BgL_tmpz00_2495 = ((obj_t) BgL_nodeza2za2_1407);
										SET_CAR(BgL_tmpz00_2495, BgL_nodez00_1415);
									}
									if (BgL_resetz00_1408)
										{	/* Reduce/cse.scm 391 */
											return BBOOL(BgL_resetz00_1408);
										}
									else
										{	/* Reduce/cse.scm 391 */
											return BgL_resetz72z72_1414;
										}
								}
							}
						else
							{	/* Reduce/cse.scm 393 */
								obj_t BgL_resetz72z72_1418;

								{	/* Reduce/cse.scm 394 */
									obj_t BgL_arg1421z00_1423;

									BgL_arg1421z00_1423 = CAR(((obj_t) BgL_nodeza2za2_1407));
									BgL_resetz72z72_1418 =
										BGl_nodezd2csez12zc0zzreduce_csez00(
										((BgL_nodez00_bglt) BgL_arg1421z00_1423),
										BgL_stackz00_1409);
								}
								{	/* Reduce/cse.scm 394 */
									obj_t BgL_nodez00_1419;

									{	/* Reduce/cse.scm 395 */
										int BgL_tmpz00_2504;

										BgL_tmpz00_2504 = (int) (((long) 1));
										BgL_nodez00_1419 = BGL_MVALUES_VAL(BgL_tmpz00_2504);
									}
									{	/* Reduce/cse.scm 395 */
										obj_t BgL_tmpz00_2507;

										BgL_tmpz00_2507 = ((obj_t) BgL_nodeza2za2_1407);
										SET_CAR(BgL_tmpz00_2507, BgL_nodez00_1419);
									}
									{	/* Reduce/cse.scm 396 */
										bool_t BgL_test1963z00_2510;

										if (BgL_resetz00_1408)
											{	/* Reduce/cse.scm 396 */
												BgL_test1963z00_2510 = ((bool_t) 1);
											}
										else
											{	/* Reduce/cse.scm 396 */
												BgL_test1963z00_2510 = CBOOL(BgL_resetz72z72_1418);
											}
										if (BgL_test1963z00_2510)
											{	/* Reduce/cse.scm 397 */
												obj_t BgL_arg1417z00_1421;

												BgL_arg1417z00_1421 =
													CDR(((obj_t) BgL_nodeza2za2_1407));
												{
													obj_t BgL_stackz00_2517;
													bool_t BgL_resetz00_2516;
													obj_t BgL_nodeza2za2_2515;

													BgL_nodeza2za2_2515 = BgL_arg1417z00_1421;
													BgL_resetz00_2516 = ((bool_t) 1);
													BgL_stackz00_2517 = BNIL;
													BgL_stackz00_1409 = BgL_stackz00_2517;
													BgL_resetz00_1408 = BgL_resetz00_2516;
													BgL_nodeza2za2_1407 = BgL_nodeza2za2_2515;
													goto BgL_zc3z04anonymousza31383ze3z87_1410;
												}
											}
										else
											{	/* Reduce/cse.scm 398 */
												obj_t BgL_arg1418z00_1422;

												BgL_arg1418z00_1422 =
													CDR(((obj_t) BgL_nodeza2za2_1407));
												{
													bool_t BgL_resetz00_2521;
													obj_t BgL_nodeza2za2_2520;

													BgL_nodeza2za2_2520 = BgL_arg1418z00_1422;
													BgL_resetz00_2521 = ((bool_t) 0);
													BgL_resetz00_1408 = BgL_resetz00_2521;
													BgL_nodeza2za2_1407 = BgL_nodeza2za2_2520;
													goto BgL_zc3z04anonymousza31383ze3z87_1410;
												}
											}
									}
								}
							}
					}
			}
		}

	}



/* find-stack */
	obj_t BGl_findzd2stackzd2zzreduce_csez00(BgL_nodez00_bglt BgL_nodez00_66,
		obj_t BgL_stackz00_67)
	{
		{	/* Reduce/cse.scm 412 */
			{
				obj_t BgL_stackz00_1438;

				BgL_stackz00_1438 = BgL_stackz00_67;
			BgL_zc3z04anonymousza31465ze3z87_1439:
				if (NULLP(BgL_stackz00_1438))
					{	/* Reduce/cse.scm 416 */
						return BFALSE;
					}
				else
					{	/* Reduce/cse.scm 418 */
						bool_t BgL_test1966z00_2524;

						{	/* Reduce/cse.scm 418 */
							obj_t BgL_arg1495z00_1446;

							{	/* Reduce/cse.scm 403 */
								obj_t BgL_sz00_1999;

								BgL_sz00_1999 = CAR(((obj_t) BgL_stackz00_1438));
								BgL_arg1495z00_1446 =
									STRUCT_REF(BgL_sz00_1999, (int) (((long) 0)));
							}
							BgL_test1966z00_2524 =
								BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_66,
								((BgL_nodez00_bglt) BgL_arg1495z00_1446), BNIL);
						}
						if (BgL_test1966z00_2524)
							{	/* Reduce/cse.scm 403 */
								obj_t BgL_sz00_2001;

								BgL_sz00_2001 = CAR(((obj_t) BgL_stackz00_1438));
								return STRUCT_REF(BgL_sz00_2001, (int) (((long) 1)));
							}
						else
							{	/* Reduce/cse.scm 421 */
								obj_t BgL_arg1493z00_1445;

								BgL_arg1493z00_1445 = CDR(((obj_t) BgL_stackz00_1438));
								{
									obj_t BgL_stackz00_2537;

									BgL_stackz00_2537 = BgL_arg1493z00_1445;
									BgL_stackz00_1438 = BgL_stackz00_2537;
									goto BgL_zc3z04anonymousza31465ze3z87_1439;
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_proc1889z00zzreduce_csez00, BGl_nodez00zzast_nodez00,
				BGl_string1890z00zzreduce_csez00);
		}

	}



/* &node-cse!1310 */
	obj_t BGl_z62nodezd2csez121310za2zzreduce_csez00(obj_t BgL_envz00_2122,
		obj_t BgL_nodez00_2123, obj_t BgL_stackz00_2124)
	{
		{	/* Reduce/cse.scm 58 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1891z00zzreduce_csez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2123)));
		}

	}



/* node-cse! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt
		BgL_nodez00_4, obj_t BgL_stackz00_5)
	{
		{	/* Reduce/cse.scm 58 */
			{	/* Reduce/cse.scm 58 */
				obj_t BgL_method1311z00_1454;

				{	/* Reduce/cse.scm 58 */
					obj_t BgL_res1846z00_2039;

					{	/* Reduce/cse.scm 58 */
						long BgL_objzd2classzd2numz00_2004;

						{	/* Reduce/cse.scm 58 */
							long BgL_res1836z00_2007;

							BgL_res1836z00_2007 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_2004 = BgL_res1836z00_2007;
						}
						{	/* Reduce/cse.scm 58 */
							obj_t BgL_arg1813z00_2005;

							BgL_arg1813z00_2005 =
								PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
								(int) (((long) 1)));
							{	/* Reduce/cse.scm 58 */
								int BgL_offsetz00_2009;

								BgL_offsetz00_2009 = (int) (BgL_objzd2classzd2numz00_2004);
								{	/* Reduce/cse.scm 58 */
									long BgL_offsetz00_2010;

									BgL_offsetz00_2010 =
										((long) (BgL_offsetz00_2009) - OBJECT_TYPE);
									{	/* Reduce/cse.scm 58 */
										long BgL_modz00_2011;

										BgL_modz00_2011 =
											(BgL_offsetz00_2010 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/cse.scm 58 */
											long BgL_restz00_2013;

											BgL_restz00_2013 =
												(BgL_offsetz00_2010 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/cse.scm 58 */

												{	/* Reduce/cse.scm 58 */
													obj_t BgL_bucketz00_2015;

													BgL_bucketz00_2015 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2005), BgL_modz00_2011);
													BgL_res1846z00_2039 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2015), BgL_restz00_2013);
					}}}}}}}}
					BgL_method1311z00_1454 = BgL_res1846z00_2039;
				}
				return
					PROCEDURE_ENTRY(BgL_method1311z00_1454) (BgL_method1311z00_1454,
					((obj_t) BgL_nodez00_4), BgL_stackz00_5, BEOA);
			}
		}

	}



/* &node-cse! */
	obj_t BGl_z62nodezd2csez12za2zzreduce_csez00(obj_t BgL_envz00_2125,
		obj_t BgL_nodez00_2126, obj_t BgL_stackz00_2127)
	{
		{	/* Reduce/cse.scm 58 */
			return
				BGl_nodezd2csez12zc0zzreduce_csez00(
				((BgL_nodez00_bglt) BgL_nodez00_2126), BgL_stackz00_2127);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_atomz00zzast_nodez00,
				BGl_proc1892z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_kwotez00zzast_nodez00,
				BGl_proc1894z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_varz00zzast_nodez00,
				BGl_proc1895z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_closurez00zzast_nodez00,
				BGl_proc1896z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1897z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_syncz00zzast_nodez00,
				BGl_proc1898z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1899z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_funcallz00zzast_nodez00,
				BGl_proc1900z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_externz00zzast_nodez00,
				BGl_proc1901z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_castz00zzast_nodez00,
				BGl_proc1902z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_setqz00zzast_nodez00,
				BGl_proc1903z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1904z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_failz00zzast_nodez00,
				BGl_proc1905z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_switchz00zzast_nodez00,
				BGl_proc1906z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1907z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1908z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1909z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_retblockz00zzast_nodez00, BGl_proc1910z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_returnz00zzast_nodez00,
				BGl_proc1911z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1912z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1913z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1914z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_appz00zzast_nodez00,
				BGl_proc1915z00zzreduce_csez00, BGl_string1893z00zzreduce_csez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1916z00zzreduce_csez00,
				BGl_string1893z00zzreduce_csez00);
		}

	}



/* &node-cse!-let-var1359 */
	obj_t BGl_z62nodezd2csez12zd2letzd2var1359za2zzreduce_csez00(obj_t
		BgL_envz00_2152, obj_t BgL_nodez00_2153, obj_t BgL_stackz00_2154)
	{
		{	/* Reduce/cse.scm 325 */
			{
				obj_t BgL_bindingsz00_2241;
				bool_t BgL_resetz00_2242;
				obj_t BgL_extendz00_2243;

				BgL_bindingsz00_2241 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2153)))->BgL_bindingsz00);
				BgL_resetz00_2242 = ((bool_t) 0);
				BgL_extendz00_2243 = BNIL;
			BgL_loopz00_2240:
				if (NULLP(BgL_bindingsz00_2241))
					{	/* Reduce/cse.scm 331 */
						obj_t BgL_stackz72z72_2244;

						if (BgL_resetz00_2242)
							{	/* Reduce/cse.scm 331 */
								BgL_stackz72z72_2244 = BNIL;
							}
						else
							{	/* Reduce/cse.scm 331 */
								BgL_stackz72z72_2244 =
									BGl_appendzd221011zd2zzreduce_csez00(BgL_extendz00_2243,
									BgL_stackz00_2154);
							}
						{	/* Reduce/cse.scm 332 */
							obj_t BgL_resetz72z72_2245;

							BgL_resetz72z72_2245 =
								BGl_nodezd2csez12zc0zzreduce_csez00(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2153)))->
									BgL_bodyz00), BgL_stackz72z72_2244);
							{	/* Reduce/cse.scm 333 */
								obj_t BgL_nbodyz00_2246;

								{	/* Reduce/cse.scm 334 */
									int BgL_tmpz00_2607;

									BgL_tmpz00_2607 = (int) (((long) 1));
									BgL_nbodyz00_2246 = BGL_MVALUES_VAL(BgL_tmpz00_2607);
								}
								((((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2153)))->
										BgL_bodyz00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2246)),
									BUNSPEC);
								{	/* Reduce/cse.scm 336 */
									bool_t BgL_test1969z00_2613;

									if (BgL_resetz00_2242)
										{	/* Reduce/cse.scm 336 */
											BgL_test1969z00_2613 = ((bool_t) 1);
										}
									else
										{	/* Reduce/cse.scm 336 */
											BgL_test1969z00_2613 = CBOOL(BgL_resetz72z72_2245);
										}
									if (BgL_test1969z00_2613)
										{	/* Reduce/cse.scm 336 */
											{	/* Reduce/cse.scm 337 */
												int BgL_res1878z00_2247;

												{	/* Reduce/cse.scm 337 */
													int BgL_tmpz00_2616;

													BgL_tmpz00_2616 = (int) (((long) 2));
													BgL_res1878z00_2247 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2616);
												} BgL_res1878z00_2247;
											}
											{	/* Reduce/cse.scm 337 */
												obj_t BgL_auxz00_2621;
												int BgL_tmpz00_2619;

												BgL_auxz00_2621 =
													((obj_t) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2153));
												BgL_tmpz00_2619 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_2619, BgL_auxz00_2621);
											}
											return BTRUE;
										}
									else
										{	/* Reduce/cse.scm 336 */
											if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
													((BgL_nodez00_bglt)
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2153))))
												{	/* Reduce/cse.scm 338 */
													{	/* Reduce/cse.scm 339 */
														int BgL_res1879z00_2248;

														{	/* Reduce/cse.scm 339 */
															int BgL_tmpz00_2629;

															BgL_tmpz00_2629 = (int) (((long) 2));
															BgL_res1879z00_2248 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2629);
														} BgL_res1879z00_2248;
													}
													{	/* Reduce/cse.scm 339 */
														obj_t BgL_auxz00_2634;
														int BgL_tmpz00_2632;

														BgL_auxz00_2634 =
															((obj_t)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2153));
														BgL_tmpz00_2632 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_2632,
															BgL_auxz00_2634);
													}
													return BFALSE;
												}
											else
												{	/* Reduce/cse.scm 341 */
													obj_t BgL_previousz00_2249;

													BgL_previousz00_2249 =
														BGl_findzd2stackzd2zzreduce_csez00(
														((BgL_nodez00_bglt)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2153)),
														BgL_stackz00_2154);
													if (BGl_isazf3zf3zz__objectz00(BgL_previousz00_2249,
															BGl_variablez00zzast_varz00))
														{	/* Reduce/cse.scm 343 */
															BGl_za2csezd2removedza2zd2zzreduce_csez00 =
																(((long) 1) +
																BGl_za2csezd2removedza2zd2zzreduce_csez00);
															{	/* Reduce/cse.scm 347 */
																BgL_varz00_bglt BgL_val1_1307z00_2250;

																{	/* Reduce/cse.scm 347 */
																	BgL_varz00_bglt BgL_new1138z00_2251;

																	{	/* Reduce/cse.scm 350 */
																		BgL_varz00_bglt BgL_new1137z00_2252;

																		BgL_new1137z00_2252 =
																			((BgL_varz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varz00_bgl))));
																		{	/* Reduce/cse.scm 350 */
																			long BgL_arg1669z00_2253;

																			{	/* Reduce/cse.scm 350 */
																				long BgL_res1882z00_2254;

																				BgL_res1882z00_2254 =
																					BGL_CLASS_INDEX
																					(BGl_varz00zzast_nodez00);
																				BgL_arg1669z00_2253 =
																					BgL_res1882z00_2254;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1137z00_2252),
																				BgL_arg1669z00_2253);
																		}
																		BgL_new1138z00_2251 = BgL_new1137z00_2252;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1138z00_2251)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_letzd2varzd2_bglt)
																								BgL_nodez00_2153))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1138z00_2251)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_letzd2varzd2_bglt)
																								BgL_nodez00_2153))))->
																				BgL_typez00)), BUNSPEC);
																	((((BgL_varz00_bglt)
																				COBJECT(BgL_new1138z00_2251))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_previousz00_2249)), BUNSPEC);
																	BgL_val1_1307z00_2250 = BgL_new1138z00_2251;
																}
																{	/* Reduce/cse.scm 347 */
																	int BgL_res1883z00_2255;

																	{	/* Reduce/cse.scm 347 */
																		int BgL_tmpz00_2660;

																		BgL_tmpz00_2660 = (int) (((long) 2));
																		BgL_res1883z00_2255 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2660);
																	} BgL_res1883z00_2255;
																}
																{	/* Reduce/cse.scm 347 */
																	obj_t BgL_auxz00_2665;
																	int BgL_tmpz00_2663;

																	BgL_auxz00_2665 =
																		((obj_t) BgL_val1_1307z00_2250);
																	BgL_tmpz00_2663 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_2663,
																		BgL_auxz00_2665);
																}
																return BgL_stackz72z72_2244;
															}
														}
													else
														{	/* Reduce/cse.scm 343 */
															{	/* Reduce/cse.scm 352 */
																int BgL_res1884z00_2256;

																{	/* Reduce/cse.scm 352 */
																	int BgL_tmpz00_2668;

																	BgL_tmpz00_2668 = (int) (((long) 2));
																	BgL_res1884z00_2256 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2668);
																} BgL_res1884z00_2256;
															}
															{	/* Reduce/cse.scm 352 */
																obj_t BgL_auxz00_2673;
																int BgL_tmpz00_2671;

																BgL_auxz00_2673 =
																	((obj_t)
																	((BgL_letzd2varzd2_bglt) BgL_nodez00_2153));
																BgL_tmpz00_2671 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_2671,
																	BgL_auxz00_2673);
															}
															return BFALSE;
														}
												}
										}
								}
							}
						}
					}
				else
					{	/* Reduce/cse.scm 353 */
						obj_t BgL_bindingz00_2257;

						BgL_bindingz00_2257 = CAR(((obj_t) BgL_bindingsz00_2241));
						{	/* Reduce/cse.scm 354 */
							obj_t BgL_varz00_2258;
							obj_t BgL_valz00_2259;

							BgL_varz00_2258 = CAR(((obj_t) BgL_bindingz00_2257));
							BgL_valz00_2259 = CDR(((obj_t) BgL_bindingz00_2257));
							{	/* Reduce/cse.scm 356 */
								obj_t BgL_resetz72z72_2260;

								BgL_resetz72z72_2260 =
									BGl_nodezd2csez12zc0zzreduce_csez00(
									((BgL_nodez00_bglt) BgL_valz00_2259), BgL_stackz00_2154);
								{	/* Reduce/cse.scm 357 */
									obj_t BgL_nvalz00_2261;

									{	/* Reduce/cse.scm 358 */
										int BgL_tmpz00_2685;

										BgL_tmpz00_2685 = (int) (((long) 1));
										BgL_nvalz00_2261 = BGL_MVALUES_VAL(BgL_tmpz00_2685);
									}
									{	/* Reduce/cse.scm 358 */
										obj_t BgL_tmpz00_2688;

										BgL_tmpz00_2688 = ((obj_t) BgL_bindingz00_2257);
										SET_CDR(BgL_tmpz00_2688, BgL_nvalz00_2261);
									}
									{	/* Reduce/cse.scm 360 */
										bool_t BgL_test1973z00_2691;

										if (BgL_resetz00_2242)
											{	/* Reduce/cse.scm 360 */
												BgL_test1973z00_2691 = ((bool_t) 1);
											}
										else
											{	/* Reduce/cse.scm 360 */
												BgL_test1973z00_2691 = CBOOL(BgL_resetz72z72_2260);
											}
										if (BgL_test1973z00_2691)
											{	/* Reduce/cse.scm 361 */
												obj_t BgL_arg1684z00_2262;

												BgL_arg1684z00_2262 =
													CDR(((obj_t) BgL_bindingsz00_2241));
												{
													obj_t BgL_extendz00_2698;
													bool_t BgL_resetz00_2697;
													obj_t BgL_bindingsz00_2696;

													BgL_bindingsz00_2696 = BgL_arg1684z00_2262;
													BgL_resetz00_2697 = ((bool_t) 1);
													BgL_extendz00_2698 = BNIL;
													BgL_extendz00_2243 = BgL_extendz00_2698;
													BgL_resetz00_2242 = BgL_resetz00_2697;
													BgL_bindingsz00_2241 = BgL_bindingsz00_2696;
													goto BgL_loopz00_2240;
												}
											}
										else
											{	/* Reduce/cse.scm 360 */
												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_2258))))->
															BgL_accessz00) == CNST_TABLE_REF(((long) 1))))
													{	/* Reduce/cse.scm 368 */
														bool_t BgL_test1976z00_2705;

														if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2259,
																BGl_appz00zzast_nodez00))
															{	/* Reduce/cse.scm 368 */
																BgL_test1976z00_2705 = ((bool_t) 1);
															}
														else
															{	/* Reduce/cse.scm 368 */
																BgL_test1976z00_2705 =
																	BGl_isazf3zf3zz__objectz00(BgL_valz00_2259,
																	BGl_letzd2varzd2zzast_nodez00);
															}
														if (BgL_test1976z00_2705)
															{	/* Reduce/cse.scm 369 */
																obj_t BgL_arg1692z00_2263;
																obj_t BgL_arg1695z00_2264;

																BgL_arg1692z00_2263 =
																	CDR(((obj_t) BgL_bindingsz00_2241));
																{	/* Reduce/cse.scm 371 */
																	obj_t BgL_arg1696z00_2265;

																	{	/* Reduce/cse.scm 403 */
																		obj_t BgL_newz00_2266;

																		BgL_newz00_2266 =
																			create_struct(CNST_TABLE_REF(((long) 2)),
																			(int) (((long) 2)));
																		{	/* Reduce/cse.scm 403 */
																			int BgL_tmpz00_2714;

																			BgL_tmpz00_2714 = (int) (((long) 1));
																			STRUCT_SET(BgL_newz00_2266,
																				BgL_tmpz00_2714, BgL_varz00_2258);
																		}
																		{	/* Reduce/cse.scm 403 */
																			int BgL_tmpz00_2717;

																			BgL_tmpz00_2717 = (int) (((long) 0));
																			STRUCT_SET(BgL_newz00_2266,
																				BgL_tmpz00_2717, BgL_valz00_2259);
																		}
																		BgL_arg1696z00_2265 = BgL_newz00_2266;
																	}
																	BgL_arg1695z00_2264 =
																		MAKE_YOUNG_PAIR(BgL_arg1696z00_2265,
																		BgL_extendz00_2243);
																}
																{
																	obj_t BgL_extendz00_2723;
																	bool_t BgL_resetz00_2722;
																	obj_t BgL_bindingsz00_2721;

																	BgL_bindingsz00_2721 = BgL_arg1692z00_2263;
																	BgL_resetz00_2722 = ((bool_t) 0);
																	BgL_extendz00_2723 = BgL_arg1695z00_2264;
																	BgL_extendz00_2243 = BgL_extendz00_2723;
																	BgL_resetz00_2242 = BgL_resetz00_2722;
																	BgL_bindingsz00_2241 = BgL_bindingsz00_2721;
																	goto BgL_loopz00_2240;
																}
															}
														else
															{	/* Reduce/cse.scm 373 */
																obj_t BgL_arg1697z00_2267;

																BgL_arg1697z00_2267 =
																	CDR(((obj_t) BgL_bindingsz00_2241));
																{
																	bool_t BgL_resetz00_2727;
																	obj_t BgL_bindingsz00_2726;

																	BgL_bindingsz00_2726 = BgL_arg1697z00_2267;
																	BgL_resetz00_2727 = ((bool_t) 0);
																	BgL_resetz00_2242 = BgL_resetz00_2727;
																	BgL_bindingsz00_2241 = BgL_bindingsz00_2726;
																	goto BgL_loopz00_2240;
																}
															}
													}
												else
													{	/* Reduce/cse.scm 365 */
														obj_t BgL_arg1704z00_2268;

														BgL_arg1704z00_2268 =
															CDR(((obj_t) BgL_bindingsz00_2241));
														{
															bool_t BgL_resetz00_2731;
															obj_t BgL_bindingsz00_2730;

															BgL_bindingsz00_2730 = BgL_arg1704z00_2268;
															BgL_resetz00_2731 = ((bool_t) 0);
															BgL_resetz00_2242 = BgL_resetz00_2731;
															BgL_bindingsz00_2241 = BgL_bindingsz00_2730;
															goto BgL_loopz00_2240;
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



/* &node-cse!-app1357 */
	obj_t BGl_z62nodezd2csez12zd2app1357z70zzreduce_csez00(obj_t BgL_envz00_2155,
		obj_t BgL_nodez00_2156, obj_t BgL_stackz00_2157)
	{
		{	/* Reduce/cse.scm 299 */
			{	/* Reduce/cse.scm 301 */
				obj_t BgL_resetz00_2270;

				BgL_resetz00_2270 =
					BGl_nodezd2cseza2z12z62zzreduce_csez00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2156)))->BgL_argsz00),
					BgL_stackz00_2157);
				{	/* Reduce/cse.scm 302 */
					bool_t BgL_test1978z00_2737;

					if (CBOOL(BgL_resetz00_2270))
						{	/* Reduce/cse.scm 302 */
							BgL_test1978z00_2737 = ((bool_t) 1);
						}
					else
						{	/* Reduce/cse.scm 302 */
							BgL_test1978z00_2737 =
								BGl_sidezd2effectzf3z21zzeffect_effectz00(
								((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2156)));
						}
					if (BgL_test1978z00_2737)
						{	/* Reduce/cse.scm 302 */
							{	/* Reduce/cse.scm 306 */
								int BgL_res1871z00_2271;

								{	/* Reduce/cse.scm 306 */
									int BgL_tmpz00_2743;

									BgL_tmpz00_2743 = (int) (((long) 2));
									BgL_res1871z00_2271 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2743);
								} BgL_res1871z00_2271;
							}
							{	/* Reduce/cse.scm 306 */
								obj_t BgL_auxz00_2748;
								int BgL_tmpz00_2746;

								BgL_auxz00_2748 =
									((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2156));
								BgL_tmpz00_2746 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_2746, BgL_auxz00_2748);
							}
							return BTRUE;
						}
					else
						{	/* Reduce/cse.scm 307 */
							obj_t BgL_previousz00_2272;

							BgL_previousz00_2272 =
								BGl_findzd2stackzd2zzreduce_csez00(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_2156)), BgL_stackz00_2157);
							if (BGl_isazf3zf3zz__objectz00(BgL_previousz00_2272,
									BGl_variablez00zzast_varz00))
								{	/* Reduce/cse.scm 309 */
									BGl_za2csezd2removedza2zd2zzreduce_csez00 =
										(((long) 1) + BGl_za2csezd2removedza2zd2zzreduce_csez00);
									{	/* Reduce/cse.scm 312 */
										BgL_varz00_bglt BgL_val1_1299z00_2273;

										{	/* Reduce/cse.scm 312 */
											BgL_varz00_bglt BgL_new1134z00_2274;

											{	/* Reduce/cse.scm 315 */
												BgL_varz00_bglt BgL_new1133z00_2275;

												BgL_new1133z00_2275 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Reduce/cse.scm 315 */
													long BgL_arg1644z00_2276;

													{	/* Reduce/cse.scm 315 */
														long BgL_res1874z00_2277;

														BgL_res1874z00_2277 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1644z00_2276 = BgL_res1874z00_2277;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1133z00_2275),
														BgL_arg1644z00_2276);
												}
												BgL_new1134z00_2274 = BgL_new1133z00_2275;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1134z00_2274)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																		BgL_nodez00_2156))))->BgL_locz00)),
												BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1134z00_2274)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																		BgL_nodez00_2156))))->BgL_typez00)),
												BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1134z00_2274))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_previousz00_2272)), BUNSPEC);
											BgL_val1_1299z00_2273 = BgL_new1134z00_2274;
										}
										{	/* Reduce/cse.scm 312 */
											int BgL_res1875z00_2278;

											{	/* Reduce/cse.scm 312 */
												int BgL_tmpz00_2774;

												BgL_tmpz00_2774 = (int) (((long) 2));
												BgL_res1875z00_2278 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2774);
											} BgL_res1875z00_2278;
										}
										{	/* Reduce/cse.scm 312 */
											obj_t BgL_auxz00_2779;
											int BgL_tmpz00_2777;

											BgL_auxz00_2779 = ((obj_t) BgL_val1_1299z00_2273);
											BgL_tmpz00_2777 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_2777, BgL_auxz00_2779);
										}
										return BgL_stackz00_2157;
									}
								}
							else
								{	/* Reduce/cse.scm 309 */
									{	/* Reduce/cse.scm 317 */
										int BgL_res1876z00_2279;

										{	/* Reduce/cse.scm 317 */
											int BgL_tmpz00_2782;

											BgL_tmpz00_2782 = (int) (((long) 2));
											BgL_res1876z00_2279 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2782);
										} BgL_res1876z00_2279;
									}
									{	/* Reduce/cse.scm 317 */
										obj_t BgL_auxz00_2787;
										int BgL_tmpz00_2785;

										BgL_auxz00_2787 =
											((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2156));
										BgL_tmpz00_2785 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2785, BgL_auxz00_2787);
									}
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* &node-cse!-box-ref1355 */
	obj_t BGl_z62nodezd2csez12zd2boxzd2ref1355za2zzreduce_csez00(obj_t
		BgL_envz00_2158, obj_t BgL_nodez00_2159, obj_t BgL_stackz00_2160)
	{
		{	/* Reduce/cse.scm 293 */
			{	/* Reduce/cse.scm 294 */
				int BgL_res1870z00_2281;

				{	/* Reduce/cse.scm 294 */
					int BgL_tmpz00_2791;

					BgL_tmpz00_2791 = (int) (((long) 2));
					BgL_res1870z00_2281 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2791);
				} BgL_res1870z00_2281;
			}
			{	/* Reduce/cse.scm 294 */
				obj_t BgL_auxz00_2796;
				int BgL_tmpz00_2794;

				BgL_auxz00_2796 = ((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2159));
				BgL_tmpz00_2794 = (int) (((long) 1));
				BGL_MVALUES_VAL_SET(BgL_tmpz00_2794, BgL_auxz00_2796);
			}
			return BFALSE;
		}

	}



/* &node-cse!-box-set!1353 */
	obj_t BGl_z62nodezd2csez12zd2boxzd2setz121353zb0zzreduce_csez00(obj_t
		BgL_envz00_2161, obj_t BgL_nodez00_2162, obj_t BgL_stackz00_2163)
	{
		{	/* Reduce/cse.scm 283 */
			{	/* Reduce/cse.scm 285 */
				obj_t BgL_resetz00_2283;

				BgL_resetz00_2283 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2162)))->BgL_valuez00),
					BgL_stackz00_2163);
				{	/* Reduce/cse.scm 286 */
					obj_t BgL_nvaluez00_2284;

					{	/* Reduce/cse.scm 287 */
						int BgL_tmpz00_2803;

						BgL_tmpz00_2803 = (int) (((long) 1));
						BgL_nvaluez00_2284 = BGL_MVALUES_VAL(BgL_tmpz00_2803);
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2162)))->
							BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2284)),
						BUNSPEC);
					{	/* Reduce/cse.scm 288 */
						int BgL_res1869z00_2285;

						{	/* Reduce/cse.scm 288 */
							int BgL_tmpz00_2809;

							BgL_tmpz00_2809 = (int) (((long) 2));
							BgL_res1869z00_2285 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2809);
						} BgL_res1869z00_2285;
					}
					{	/* Reduce/cse.scm 288 */
						obj_t BgL_auxz00_2814;
						int BgL_tmpz00_2812;

						BgL_auxz00_2814 =
							((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2162));
						BgL_tmpz00_2812 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2812, BgL_auxz00_2814);
					}
					return BgL_resetz00_2283;
				}
			}
		}

	}



/* &node-cse!-make-box1351 */
	obj_t BGl_z62nodezd2csez12zd2makezd2box1351za2zzreduce_csez00(obj_t
		BgL_envz00_2164, obj_t BgL_nodez00_2165, obj_t BgL_stackz00_2166)
	{
		{	/* Reduce/cse.scm 273 */
			{	/* Reduce/cse.scm 275 */
				obj_t BgL_resetz00_2287;

				BgL_resetz00_2287 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2165)))->BgL_valuez00),
					BgL_stackz00_2166);
				{	/* Reduce/cse.scm 276 */
					obj_t BgL_nvaluez00_2288;

					{	/* Reduce/cse.scm 277 */
						int BgL_tmpz00_2821;

						BgL_tmpz00_2821 = (int) (((long) 1));
						BgL_nvaluez00_2288 = BGL_MVALUES_VAL(BgL_tmpz00_2821);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2165)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2288)),
						BUNSPEC);
					{	/* Reduce/cse.scm 278 */
						int BgL_res1868z00_2289;

						{	/* Reduce/cse.scm 278 */
							int BgL_tmpz00_2827;

							BgL_tmpz00_2827 = (int) (((long) 2));
							BgL_res1868z00_2289 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2827);
						} BgL_res1868z00_2289;
					}
					{	/* Reduce/cse.scm 278 */
						obj_t BgL_auxz00_2832;
						int BgL_tmpz00_2830;

						BgL_auxz00_2832 =
							((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2165));
						BgL_tmpz00_2830 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2830, BgL_auxz00_2832);
					}
					return BgL_resetz00_2287;
				}
			}
		}

	}



/* &node-cse!-return1349 */
	obj_t BGl_z62nodezd2csez12zd2return1349z70zzreduce_csez00(obj_t
		BgL_envz00_2167, obj_t BgL_nodez00_2168, obj_t BgL_stackz00_2169)
	{
		{	/* Reduce/cse.scm 263 */
			{	/* Reduce/cse.scm 265 */
				obj_t BgL_resetz00_2291;

				BgL_resetz00_2291 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2168)))->BgL_valuez00),
					BgL_stackz00_2169);
				{	/* Reduce/cse.scm 266 */
					obj_t BgL_nvaluez00_2292;

					{	/* Reduce/cse.scm 267 */
						int BgL_tmpz00_2839;

						BgL_tmpz00_2839 = (int) (((long) 1));
						BgL_nvaluez00_2292 = BGL_MVALUES_VAL(BgL_tmpz00_2839);
					}
					((((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nodez00_2168)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2292)),
						BUNSPEC);
					{	/* Reduce/cse.scm 268 */
						int BgL_res1867z00_2293;

						{	/* Reduce/cse.scm 268 */
							int BgL_tmpz00_2845;

							BgL_tmpz00_2845 = (int) (((long) 2));
							BgL_res1867z00_2293 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2845);
						} BgL_res1867z00_2293;
					}
					{	/* Reduce/cse.scm 268 */
						obj_t BgL_auxz00_2850;
						int BgL_tmpz00_2848;

						BgL_auxz00_2850 = ((obj_t) ((BgL_returnz00_bglt) BgL_nodez00_2168));
						BgL_tmpz00_2848 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2848, BgL_auxz00_2850);
					}
					return BgL_resetz00_2291;
				}
			}
		}

	}



/* &node-cse!-retblock1347 */
	obj_t BGl_z62nodezd2csez12zd2retblock1347z70zzreduce_csez00(obj_t
		BgL_envz00_2170, obj_t BgL_nodez00_2171, obj_t BgL_stackz00_2172)
	{
		{	/* Reduce/cse.scm 253 */
			{	/* Reduce/cse.scm 255 */
				obj_t BgL_resetz00_2295;

				BgL_resetz00_2295 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2171)))->BgL_bodyz00),
					BgL_stackz00_2172);
				{	/* Reduce/cse.scm 256 */
					obj_t BgL_nbodyz00_2296;

					{	/* Reduce/cse.scm 257 */
						int BgL_tmpz00_2857;

						BgL_tmpz00_2857 = (int) (((long) 1));
						BgL_nbodyz00_2296 = BGL_MVALUES_VAL(BgL_tmpz00_2857);
					}
					((((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nodez00_2171)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2296)),
						BUNSPEC);
					{	/* Reduce/cse.scm 258 */
						int BgL_res1866z00_2297;

						{	/* Reduce/cse.scm 258 */
							int BgL_tmpz00_2863;

							BgL_tmpz00_2863 = (int) (((long) 2));
							BgL_res1866z00_2297 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2863);
						} BgL_res1866z00_2297;
					}
					{	/* Reduce/cse.scm 258 */
						obj_t BgL_auxz00_2868;
						int BgL_tmpz00_2866;

						BgL_auxz00_2868 =
							((obj_t) ((BgL_retblockz00_bglt) BgL_nodez00_2171));
						BgL_tmpz00_2866 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2866, BgL_auxz00_2868);
					}
					return BgL_resetz00_2295;
				}
			}
		}

	}



/* &node-cse!-jump-ex-it1345 */
	obj_t BGl_z62nodezd2csez12zd2jumpzd2exzd2it1345z70zzreduce_csez00(obj_t
		BgL_envz00_2173, obj_t BgL_nodez00_2174, obj_t BgL_stackz00_2175)
	{
		{	/* Reduce/cse.scm 239 */
			{	/* Reduce/cse.scm 241 */
				obj_t BgL_resetz00_2299;

				BgL_resetz00_2299 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2174)))->BgL_exitz00),
					BgL_stackz00_2175);
				{	/* Reduce/cse.scm 242 */
					obj_t BgL_nexitz00_2300;

					{	/* Reduce/cse.scm 243 */
						int BgL_tmpz00_2875;

						BgL_tmpz00_2875 = (int) (((long) 1));
						BgL_nexitz00_2300 = BGL_MVALUES_VAL(BgL_tmpz00_2875);
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2174)))->
							BgL_exitz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nexitz00_2300)),
						BUNSPEC);
					{	/* Reduce/cse.scm 244 */
						obj_t BgL_stackz72z72_2301;

						if (CBOOL(BgL_resetz00_2299))
							{	/* Reduce/cse.scm 244 */
								BgL_stackz72z72_2301 = BNIL;
							}
						else
							{	/* Reduce/cse.scm 244 */
								BgL_stackz72z72_2301 = BgL_stackz00_2175;
							}
						{	/* Reduce/cse.scm 245 */
							obj_t BgL_resetz72z72_2302;

							BgL_resetz72z72_2302 =
								BGl_nodezd2csez12zc0zzreduce_csez00(
								(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
											((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2174)))->
									BgL_valuez00), BgL_stackz72z72_2301);
							{	/* Reduce/cse.scm 246 */
								obj_t BgL_nvaluez00_2303;

								{	/* Reduce/cse.scm 247 */
									int BgL_tmpz00_2886;

									BgL_tmpz00_2886 = (int) (((long) 1));
									BgL_nvaluez00_2303 = BGL_MVALUES_VAL(BgL_tmpz00_2886);
								}
								((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
												((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2174)))->
										BgL_valuez00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2303)),
									BUNSPEC);
								{	/* Reduce/cse.scm 248 */
									obj_t BgL_val0_1284z00_2304;

									if (CBOOL(BgL_resetz00_2299))
										{	/* Reduce/cse.scm 248 */
											BgL_val0_1284z00_2304 = BgL_resetz00_2299;
										}
									else
										{	/* Reduce/cse.scm 248 */
											BgL_val0_1284z00_2304 = BgL_resetz72z72_2302;
										}
									{	/* Reduce/cse.scm 248 */
										int BgL_res1865z00_2305;

										{	/* Reduce/cse.scm 248 */
											int BgL_tmpz00_2894;

											BgL_tmpz00_2894 = (int) (((long) 2));
											BgL_res1865z00_2305 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2894);
										} BgL_res1865z00_2305;
									}
									{	/* Reduce/cse.scm 248 */
										obj_t BgL_auxz00_2899;
										int BgL_tmpz00_2897;

										BgL_auxz00_2899 =
											((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2174));
										BgL_tmpz00_2897 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2897, BgL_auxz00_2899);
									}
									return BgL_val0_1284z00_2304;
								}
							}
						}
					}
				}
			}
		}

	}



/* &node-cse!-set-ex-it1343 */
	obj_t BGl_z62nodezd2csez12zd2setzd2exzd2it1343z70zzreduce_csez00(obj_t
		BgL_envz00_2176, obj_t BgL_nodez00_2177, obj_t BgL_stackz00_2178)
	{
		{	/* Reduce/cse.scm 229 */
			{	/* Reduce/cse.scm 231 */
				obj_t BgL_resetz00_2307;

				BgL_resetz00_2307 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2177)))->BgL_bodyz00),
					BNIL);
				{	/* Reduce/cse.scm 232 */
					obj_t BgL_nbodyz00_2308;

					{	/* Reduce/cse.scm 233 */
						int BgL_tmpz00_2906;

						BgL_tmpz00_2906 = (int) (((long) 1));
						BgL_nbodyz00_2308 = BGL_MVALUES_VAL(BgL_tmpz00_2906);
					}
					((((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2177)))->
							BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2308)),
						BUNSPEC);
					{	/* Reduce/cse.scm 234 */
						int BgL_res1864z00_2309;

						{	/* Reduce/cse.scm 234 */
							int BgL_tmpz00_2912;

							BgL_tmpz00_2912 = (int) (((long) 2));
							BgL_res1864z00_2309 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2912);
						} BgL_res1864z00_2309;
					}
					{	/* Reduce/cse.scm 234 */
						obj_t BgL_auxz00_2917;
						int BgL_tmpz00_2915;

						BgL_auxz00_2917 =
							((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2177));
						BgL_tmpz00_2915 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2915, BgL_auxz00_2917);
					}
					return BgL_resetz00_2307;
				}
			}
		}

	}



/* &node-cse!-let-fun1341 */
	obj_t BGl_z62nodezd2csez12zd2letzd2fun1341za2zzreduce_csez00(obj_t
		BgL_envz00_2179, obj_t BgL_nodez00_2180, obj_t BgL_stackz00_2181)
	{
		{	/* Reduce/cse.scm 210 */
			{	/* Reduce/cse.scm 212 */
				obj_t BgL_resetz00_2311;

				BgL_resetz00_2311 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2180)))->BgL_bodyz00),
					BgL_stackz00_2181);
				{	/* Reduce/cse.scm 213 */
					obj_t BgL_nbodyz00_2312;

					{	/* Reduce/cse.scm 214 */
						int BgL_tmpz00_2924;

						BgL_tmpz00_2924 = (int) (((long) 1));
						BgL_nbodyz00_2312 = BGL_MVALUES_VAL(BgL_tmpz00_2924);
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2180)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nbodyz00_2312)),
						BUNSPEC);
					{
						obj_t BgL_localsz00_2314;
						obj_t BgL_resetz00_2315;

						BgL_localsz00_2314 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2180)))->BgL_localsz00);
						BgL_resetz00_2315 = BgL_resetz00_2311;
					BgL_loopz00_2313:
						if (NULLP(BgL_localsz00_2314))
							{	/* Reduce/cse.scm 217 */
								{	/* Reduce/cse.scm 218 */
									int BgL_res1863z00_2316;

									{	/* Reduce/cse.scm 218 */
										int BgL_tmpz00_2932;

										BgL_tmpz00_2932 = (int) (((long) 2));
										BgL_res1863z00_2316 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2932);
									} BgL_res1863z00_2316;
								}
								{	/* Reduce/cse.scm 218 */
									obj_t BgL_auxz00_2937;
									int BgL_tmpz00_2935;

									BgL_auxz00_2937 =
										((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2180));
									BgL_tmpz00_2935 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2935, BgL_auxz00_2937);
								}
								return BgL_resetz00_2315;
							}
						else
							{	/* Reduce/cse.scm 219 */
								obj_t BgL_localz00_2317;

								BgL_localz00_2317 = CAR(((obj_t) BgL_localsz00_2314));
								{	/* Reduce/cse.scm 219 */
									BgL_valuez00_bglt BgL_sfunz00_2318;

									BgL_sfunz00_2318 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2317))))->
										BgL_valuez00);
									{	/* Reduce/cse.scm 220 */

										{	/* Reduce/cse.scm 221 */
											obj_t BgL_resetz72z72_2319;

											{	/* Reduce/cse.scm 222 */
												obj_t BgL_arg1613z00_2320;

												BgL_arg1613z00_2320 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2318)))->
													BgL_bodyz00);
												BgL_resetz72z72_2319 =
													BGl_nodezd2csez12zc0zzreduce_csez00((
														(BgL_nodez00_bglt) BgL_arg1613z00_2320), BNIL);
											}
											{	/* Reduce/cse.scm 222 */
												obj_t BgL_nbodyz00_2321;

												{	/* Reduce/cse.scm 223 */
													int BgL_tmpz00_2950;

													BgL_tmpz00_2950 = (int) (((long) 1));
													BgL_nbodyz00_2321 = BGL_MVALUES_VAL(BgL_tmpz00_2950);
												}
												((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_sfunz00_2318)))->
														BgL_bodyz00) =
													((obj_t) BgL_nbodyz00_2321), BUNSPEC);
												{	/* Reduce/cse.scm 224 */
													obj_t BgL_arg1611z00_2322;
													obj_t BgL_arg1612z00_2323;

													BgL_arg1611z00_2322 =
														CDR(((obj_t) BgL_localsz00_2314));
													if (CBOOL(BgL_resetz00_2315))
														{	/* Reduce/cse.scm 224 */
															BgL_arg1612z00_2323 = BgL_resetz00_2315;
														}
													else
														{	/* Reduce/cse.scm 224 */
															BgL_arg1612z00_2323 = BgL_resetz72z72_2319;
														}
													{
														obj_t BgL_resetz00_2960;
														obj_t BgL_localsz00_2959;

														BgL_localsz00_2959 = BgL_arg1611z00_2322;
														BgL_resetz00_2960 = BgL_arg1612z00_2323;
														BgL_resetz00_2315 = BgL_resetz00_2960;
														BgL_localsz00_2314 = BgL_localsz00_2959;
														goto BgL_loopz00_2313;
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



/* &node-cse!-switch1339 */
	obj_t BGl_z62nodezd2csez12zd2switch1339z70zzreduce_csez00(obj_t
		BgL_envz00_2182, obj_t BgL_nodez00_2183, obj_t BgL_stackz00_2184)
	{
		{	/* Reduce/cse.scm 191 */
			{	/* Reduce/cse.scm 193 */
				obj_t BgL_resetz00_2325;

				BgL_resetz00_2325 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2183)))->BgL_testz00),
					BgL_stackz00_2184);
				{	/* Reduce/cse.scm 194 */
					obj_t BgL_ntestz00_2326;

					{	/* Reduce/cse.scm 195 */
						int BgL_tmpz00_2966;

						BgL_tmpz00_2966 = (int) (((long) 1));
						BgL_ntestz00_2326 = BGL_MVALUES_VAL(BgL_tmpz00_2966);
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2183)))->BgL_testz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntestz00_2326)),
						BUNSPEC);
					{
						obj_t BgL_clausesz00_2328;
						obj_t BgL_resetz00_2329;

						BgL_clausesz00_2328 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2183)))->BgL_clausesz00);
						BgL_resetz00_2329 = BgL_resetz00_2325;
					BgL_loopz00_2327:
						if (NULLP(BgL_clausesz00_2328))
							{	/* Reduce/cse.scm 199 */
								{	/* Reduce/cse.scm 200 */
									int BgL_res1861z00_2330;

									{	/* Reduce/cse.scm 200 */
										int BgL_tmpz00_2974;

										BgL_tmpz00_2974 = (int) (((long) 2));
										BgL_res1861z00_2330 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2974);
									} BgL_res1861z00_2330;
								}
								{	/* Reduce/cse.scm 200 */
									obj_t BgL_auxz00_2979;
									int BgL_tmpz00_2977;

									BgL_auxz00_2979 =
										((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2183));
									BgL_tmpz00_2977 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2977, BgL_auxz00_2979);
								}
								return BgL_resetz00_2329;
							}
						else
							{	/* Reduce/cse.scm 201 */
								obj_t BgL_clausez00_2331;

								BgL_clausez00_2331 = CAR(((obj_t) BgL_clausesz00_2328));
								{	/* Reduce/cse.scm 202 */
									obj_t BgL_resetz72z72_2332;

									{	/* Reduce/cse.scm 203 */
										obj_t BgL_arg1604z00_2333;

										BgL_arg1604z00_2333 = CDR(((obj_t) BgL_clausez00_2331));
										BgL_resetz72z72_2332 =
											BGl_nodezd2csez12zc0zzreduce_csez00(
											((BgL_nodez00_bglt) BgL_arg1604z00_2333),
											BgL_stackz00_2184);
									}
									{	/* Reduce/cse.scm 203 */
										obj_t BgL_nclausez00_2334;

										{	/* Reduce/cse.scm 204 */
											int BgL_tmpz00_2989;

											BgL_tmpz00_2989 = (int) (((long) 1));
											BgL_nclausez00_2334 = BGL_MVALUES_VAL(BgL_tmpz00_2989);
										}
										{	/* Reduce/cse.scm 204 */
											obj_t BgL_tmpz00_2992;

											BgL_tmpz00_2992 = ((obj_t) BgL_clausez00_2331);
											SET_CDR(BgL_tmpz00_2992, BgL_nclausez00_2334);
										}
										{	/* Reduce/cse.scm 205 */
											obj_t BgL_arg1597z00_2335;
											obj_t BgL_arg1599z00_2336;

											BgL_arg1597z00_2335 = CDR(((obj_t) BgL_clausesz00_2328));
											if (CBOOL(BgL_resetz00_2329))
												{	/* Reduce/cse.scm 205 */
													BgL_arg1599z00_2336 = BgL_resetz00_2329;
												}
											else
												{	/* Reduce/cse.scm 205 */
													BgL_arg1599z00_2336 = BgL_resetz72z72_2332;
												}
											{
												obj_t BgL_resetz00_3000;
												obj_t BgL_clausesz00_2999;

												BgL_clausesz00_2999 = BgL_arg1597z00_2335;
												BgL_resetz00_3000 = BgL_arg1599z00_2336;
												BgL_resetz00_2329 = BgL_resetz00_3000;
												BgL_clausesz00_2328 = BgL_clausesz00_2999;
												goto BgL_loopz00_2327;
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



/* &node-cse!-fail1337 */
	obj_t BGl_z62nodezd2csez12zd2fail1337z70zzreduce_csez00(obj_t BgL_envz00_2185,
		obj_t BgL_nodez00_2186, obj_t BgL_stackz00_2187)
	{
		{	/* Reduce/cse.scm 173 */
			{	/* Reduce/cse.scm 175 */
				obj_t BgL_resetz00_2338;

				BgL_resetz00_2338 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2186)))->BgL_procz00),
					BgL_stackz00_2187);
				{	/* Reduce/cse.scm 176 */
					obj_t BgL_nprocz00_2339;

					{	/* Reduce/cse.scm 177 */
						int BgL_tmpz00_3006;

						BgL_tmpz00_3006 = (int) (((long) 1));
						BgL_nprocz00_2339 = BGL_MVALUES_VAL(BgL_tmpz00_3006);
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2186)))->BgL_procz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nprocz00_2339)),
						BUNSPEC);
					{	/* Reduce/cse.scm 178 */
						obj_t BgL_stackz72z72_2340;

						if (CBOOL(BgL_resetz00_2338))
							{	/* Reduce/cse.scm 178 */
								BgL_stackz72z72_2340 = BNIL;
							}
						else
							{	/* Reduce/cse.scm 178 */
								BgL_stackz72z72_2340 = BgL_stackz00_2187;
							}
						{	/* Reduce/cse.scm 179 */
							obj_t BgL_resetz72z72_2341;

							BgL_resetz72z72_2341 =
								BGl_nodezd2csez12zc0zzreduce_csez00(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2186)))->BgL_msgz00),
								BgL_stackz72z72_2340);
							{	/* Reduce/cse.scm 180 */
								obj_t BgL_nmsgz00_2342;

								{	/* Reduce/cse.scm 181 */
									int BgL_tmpz00_3017;

									BgL_tmpz00_3017 = (int) (((long) 1));
									BgL_nmsgz00_2342 = BGL_MVALUES_VAL(BgL_tmpz00_3017);
								}
								((((BgL_failz00_bglt) COBJECT(
												((BgL_failz00_bglt) BgL_nodez00_2186)))->BgL_msgz00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nmsgz00_2342)),
									BUNSPEC);
								{	/* Reduce/cse.scm 182 */
									obj_t BgL_stackz72z72z00_2343;

									if (CBOOL(BgL_resetz72z72_2341))
										{	/* Reduce/cse.scm 182 */
											BgL_stackz72z72z00_2343 = BNIL;
										}
									else
										{	/* Reduce/cse.scm 182 */
											BgL_stackz72z72z00_2343 = BgL_stackz72z72_2340;
										}
									{	/* Reduce/cse.scm 183 */
										obj_t BgL_resetz72z72z00_2344;

										BgL_resetz72z72z00_2344 =
											BGl_nodezd2csez12zc0zzreduce_csez00(
											(((BgL_failz00_bglt) COBJECT(
														((BgL_failz00_bglt) BgL_nodez00_2186)))->
												BgL_objz00), BgL_stackz72z72z00_2343);
										{	/* Reduce/cse.scm 184 */
											obj_t BgL_nobjz00_2345;

											{	/* Reduce/cse.scm 185 */
												int BgL_tmpz00_3028;

												BgL_tmpz00_3028 = (int) (((long) 1));
												BgL_nobjz00_2345 = BGL_MVALUES_VAL(BgL_tmpz00_3028);
											}
											((((BgL_failz00_bglt) COBJECT(
															((BgL_failz00_bglt) BgL_nodez00_2186)))->
													BgL_objz00) =
												((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
														BgL_nobjz00_2345)), BUNSPEC);
											{	/* Reduce/cse.scm 186 */
												obj_t BgL_val0_1276z00_2346;

												if (CBOOL(BgL_resetz00_2338))
													{	/* Reduce/cse.scm 186 */
														BgL_val0_1276z00_2346 = BgL_resetz00_2338;
													}
												else
													{	/* Reduce/cse.scm 186 */
														if (CBOOL(BgL_resetz72z72_2341))
															{	/* Reduce/cse.scm 186 */
																BgL_val0_1276z00_2346 = BgL_resetz72z72_2341;
															}
														else
															{	/* Reduce/cse.scm 186 */
																BgL_val0_1276z00_2346 = BgL_resetz72z72z00_2344;
															}
													}
												{	/* Reduce/cse.scm 186 */
													int BgL_res1859z00_2347;

													{	/* Reduce/cse.scm 186 */
														int BgL_tmpz00_3038;

														BgL_tmpz00_3038 = (int) (((long) 2));
														BgL_res1859z00_2347 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3038);
													} BgL_res1859z00_2347;
												}
												{	/* Reduce/cse.scm 186 */
													obj_t BgL_auxz00_3043;
													int BgL_tmpz00_3041;

													BgL_auxz00_3043 =
														((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2186));
													BgL_tmpz00_3041 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_3041, BgL_auxz00_3043);
												}
												return BgL_val0_1276z00_2346;
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



/* &node-cse!-conditiona1335 */
	obj_t BGl_z62nodezd2csez12zd2conditiona1335z70zzreduce_csez00(obj_t
		BgL_envz00_2188, obj_t BgL_nodez00_2189, obj_t BgL_stackz00_2190)
	{
		{	/* Reduce/cse.scm 156 */
			{	/* Reduce/cse.scm 158 */
				obj_t BgL_resetz00_2349;

				BgL_resetz00_2349 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->BgL_testz00),
					BgL_stackz00_2190);
				{	/* Reduce/cse.scm 159 */
					obj_t BgL_ntestz00_2350;

					{	/* Reduce/cse.scm 160 */
						int BgL_tmpz00_3050;

						BgL_tmpz00_3050 = (int) (((long) 1));
						BgL_ntestz00_2350 = BGL_MVALUES_VAL(BgL_tmpz00_3050);
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->BgL_testz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntestz00_2350)),
						BUNSPEC);
					{	/* Reduce/cse.scm 161 */
						obj_t BgL_stackz72z72_2351;

						if (CBOOL(BgL_resetz00_2349))
							{	/* Reduce/cse.scm 161 */
								BgL_stackz72z72_2351 = BNIL;
							}
						else
							{	/* Reduce/cse.scm 161 */
								BgL_stackz72z72_2351 = BgL_stackz00_2190;
							}
						{	/* Reduce/cse.scm 162 */
							obj_t BgL_resetz72z72_2352;

							BgL_resetz72z72_2352 =
								BGl_nodezd2csez12zc0zzreduce_csez00(
								(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->
									BgL_truez00), BgL_stackz72z72_2351);
							{	/* Reduce/cse.scm 163 */
								obj_t BgL_ntruez00_2353;

								{	/* Reduce/cse.scm 164 */
									int BgL_tmpz00_3061;

									BgL_tmpz00_3061 = (int) (((long) 1));
									BgL_ntruez00_2353 = BGL_MVALUES_VAL(BgL_tmpz00_3061);
								}
								((((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->
										BgL_truez00) =
									((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_ntruez00_2353)),
									BUNSPEC);
								{	/* Reduce/cse.scm 165 */
									obj_t BgL_resetz72z72z00_2354;

									BgL_resetz72z72z00_2354 =
										BGl_nodezd2csez12zc0zzreduce_csez00(
										(((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->
											BgL_falsez00), BgL_stackz72z72_2351);
									{	/* Reduce/cse.scm 166 */
										obj_t BgL_nfalsez00_2355;

										{	/* Reduce/cse.scm 167 */
											int BgL_tmpz00_3070;

											BgL_tmpz00_3070 = (int) (((long) 1));
											BgL_nfalsez00_2355 = BGL_MVALUES_VAL(BgL_tmpz00_3070);
										}
										((((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2189)))->
												BgL_falsez00) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
													BgL_nfalsez00_2355)), BUNSPEC);
										{	/* Reduce/cse.scm 168 */
											obj_t BgL_val0_1274z00_2356;

											if (CBOOL(BgL_resetz00_2349))
												{	/* Reduce/cse.scm 168 */
													BgL_val0_1274z00_2356 = BgL_resetz00_2349;
												}
											else
												{	/* Reduce/cse.scm 168 */
													if (CBOOL(BgL_resetz72z72_2352))
														{	/* Reduce/cse.scm 168 */
															BgL_val0_1274z00_2356 = BgL_resetz72z72_2352;
														}
													else
														{	/* Reduce/cse.scm 168 */
															BgL_val0_1274z00_2356 = BgL_resetz72z72z00_2354;
														}
												}
											{	/* Reduce/cse.scm 168 */
												int BgL_res1858z00_2357;

												{	/* Reduce/cse.scm 168 */
													int BgL_tmpz00_3080;

													BgL_tmpz00_3080 = (int) (((long) 2));
													BgL_res1858z00_2357 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3080);
												} BgL_res1858z00_2357;
											}
											{	/* Reduce/cse.scm 168 */
												obj_t BgL_auxz00_3085;
												int BgL_tmpz00_3083;

												BgL_auxz00_3085 =
													((obj_t)
													((BgL_conditionalz00_bglt) BgL_nodez00_2189));
												BgL_tmpz00_3083 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_3083, BgL_auxz00_3085);
											}
											return BgL_val0_1274z00_2356;
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



/* &node-cse!-setq1333 */
	obj_t BGl_z62nodezd2csez12zd2setq1333z70zzreduce_csez00(obj_t BgL_envz00_2191,
		obj_t BgL_nodez00_2192, obj_t BgL_stackz00_2193)
	{
		{	/* Reduce/cse.scm 146 */
			{	/* Reduce/cse.scm 148 */
				obj_t BgL_resetz00_2359;

				BgL_resetz00_2359 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2192)))->BgL_valuez00),
					BgL_stackz00_2193);
				{	/* Reduce/cse.scm 149 */
					obj_t BgL_nvaluez00_2360;

					{	/* Reduce/cse.scm 150 */
						int BgL_tmpz00_3092;

						BgL_tmpz00_3092 = (int) (((long) 1));
						BgL_nvaluez00_2360 = BGL_MVALUES_VAL(BgL_tmpz00_3092);
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2192)))->BgL_valuez00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nvaluez00_2360)),
						BUNSPEC);
					{	/* Reduce/cse.scm 151 */
						int BgL_res1857z00_2361;

						{	/* Reduce/cse.scm 151 */
							int BgL_tmpz00_3098;

							BgL_tmpz00_3098 = (int) (((long) 2));
							BgL_res1857z00_2361 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3098);
						} BgL_res1857z00_2361;
					}
					{	/* Reduce/cse.scm 151 */
						obj_t BgL_auxz00_3103;
						int BgL_tmpz00_3101;

						BgL_auxz00_3103 = ((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2192));
						BgL_tmpz00_3101 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_3101, BgL_auxz00_3103);
					}
					return BgL_resetz00_2359;
				}
			}
		}

	}



/* &node-cse!-cast1331 */
	obj_t BGl_z62nodezd2csez12zd2cast1331z70zzreduce_csez00(obj_t BgL_envz00_2194,
		obj_t BgL_nodez00_2195, obj_t BgL_stackz00_2196)
	{
		{	/* Reduce/cse.scm 136 */
			{	/* Reduce/cse.scm 138 */
				obj_t BgL_resetz00_2363;

				BgL_resetz00_2363 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2195)))->BgL_argz00),
					BgL_stackz00_2196);
				{	/* Reduce/cse.scm 139 */
					obj_t BgL_nargz00_2364;

					{	/* Reduce/cse.scm 140 */
						int BgL_tmpz00_3110;

						BgL_tmpz00_3110 = (int) (((long) 1));
						BgL_nargz00_2364 = BGL_MVALUES_VAL(BgL_tmpz00_3110);
					}
					((((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_2195)))->BgL_argz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nargz00_2364)),
						BUNSPEC);
					{	/* Reduce/cse.scm 141 */
						int BgL_res1856z00_2365;

						{	/* Reduce/cse.scm 141 */
							int BgL_tmpz00_3116;

							BgL_tmpz00_3116 = (int) (((long) 2));
							BgL_res1856z00_2365 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3116);
						} BgL_res1856z00_2365;
					}
					{	/* Reduce/cse.scm 141 */
						obj_t BgL_auxz00_3121;
						int BgL_tmpz00_3119;

						BgL_auxz00_3121 = ((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2195));
						BgL_tmpz00_3119 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_3119, BgL_auxz00_3121);
					}
					return BgL_resetz00_2363;
				}
			}
		}

	}



/* &node-cse!-extern1329 */
	obj_t BGl_z62nodezd2csez12zd2extern1329z70zzreduce_csez00(obj_t
		BgL_envz00_2197, obj_t BgL_nodez00_2198, obj_t BgL_stackz00_2199)
	{
		{	/* Reduce/cse.scm 128 */
			{	/* Reduce/cse.scm 130 */
				obj_t BgL_resetz72z72_2367;

				BgL_resetz72z72_2367 =
					BGl_nodezd2cseza2z12z62zzreduce_csez00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2198)))->BgL_exprza2za2),
					BgL_stackz00_2199);
				{	/* Reduce/cse.scm 131 */
					int BgL_res1855z00_2368;

					{	/* Reduce/cse.scm 131 */
						int BgL_tmpz00_3128;

						BgL_tmpz00_3128 = (int) (((long) 2));
						BgL_res1855z00_2368 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3128);
					} BgL_res1855z00_2368;
				}
				{	/* Reduce/cse.scm 131 */
					obj_t BgL_auxz00_3133;
					int BgL_tmpz00_3131;

					BgL_auxz00_3133 = ((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2198));
					BgL_tmpz00_3131 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3131, BgL_auxz00_3133);
				}
				return BgL_resetz72z72_2367;
			}
		}

	}



/* &node-cse!-funcall1327 */
	obj_t BGl_z62nodezd2csez12zd2funcall1327z70zzreduce_csez00(obj_t
		BgL_envz00_2200, obj_t BgL_nodez00_2201, obj_t BgL_stackz00_2202)
	{
		{	/* Reduce/cse.scm 120 */
			{	/* Reduce/cse.scm 122 */
				obj_t BgL_resetz72z72_2370;

				BgL_resetz72z72_2370 =
					BGl_nodezd2cseza2z12z62zzreduce_csez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2201)))->BgL_argsz00),
					BgL_stackz00_2202);
				{	/* Reduce/cse.scm 123 */
					int BgL_res1854z00_2371;

					{	/* Reduce/cse.scm 123 */
						int BgL_tmpz00_3140;

						BgL_tmpz00_3140 = (int) (((long) 2));
						BgL_res1854z00_2371 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3140);
					} BgL_res1854z00_2371;
				}
				{	/* Reduce/cse.scm 123 */
					obj_t BgL_auxz00_3145;
					int BgL_tmpz00_3143;

					BgL_auxz00_3145 = ((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2201));
					BgL_tmpz00_3143 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3143, BgL_auxz00_3145);
				}
				return BgL_resetz72z72_2370;
			}
		}

	}



/* &node-cse!-app-ly1325 */
	obj_t BGl_z62nodezd2csez12zd2appzd2ly1325za2zzreduce_csez00(obj_t
		BgL_envz00_2203, obj_t BgL_nodez00_2204, obj_t BgL_stackz00_2205)
	{
		{	/* Reduce/cse.scm 107 */
			{	/* Reduce/cse.scm 109 */
				obj_t BgL_resetz00_2373;

				BgL_resetz00_2373 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2204)))->BgL_funz00),
					BgL_stackz00_2205);
				{	/* Reduce/cse.scm 110 */
					obj_t BgL_nfunz00_2374;

					{	/* Reduce/cse.scm 111 */
						int BgL_tmpz00_3152;

						BgL_tmpz00_3152 = (int) (((long) 1));
						BgL_nfunz00_2374 = BGL_MVALUES_VAL(BgL_tmpz00_3152);
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2204)))->BgL_funz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nfunz00_2374)),
						BUNSPEC);
					{	/* Reduce/cse.scm 112 */
						obj_t BgL_resetz72z72_2375;

						{	/* Reduce/cse.scm 113 */
							BgL_nodez00_bglt BgL_arg1540z00_2376;
							obj_t BgL_arg1552z00_2377;

							BgL_arg1540z00_2376 =
								(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2204)))->BgL_argz00);
							if (CBOOL(BgL_resetz00_2373))
								{	/* Reduce/cse.scm 113 */
									BgL_arg1552z00_2377 = BNIL;
								}
							else
								{	/* Reduce/cse.scm 113 */
									BgL_arg1552z00_2377 = BgL_stackz00_2205;
								}
							BgL_resetz72z72_2375 =
								BGl_nodezd2csez12zc0zzreduce_csez00(BgL_arg1540z00_2376,
								BgL_arg1552z00_2377);
						}
						{	/* Reduce/cse.scm 113 */
							obj_t BgL_nargz00_2378;

							{	/* Reduce/cse.scm 114 */
								int BgL_tmpz00_3163;

								BgL_tmpz00_3163 = (int) (((long) 1));
								BgL_nargz00_2378 = BGL_MVALUES_VAL(BgL_tmpz00_3163);
							}
							((((BgL_appzd2lyzd2_bglt) COBJECT(
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_2204)))->BgL_argz00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nargz00_2378)),
								BUNSPEC);
							{	/* Reduce/cse.scm 115 */
								obj_t BgL_val0_1264z00_2379;

								if (CBOOL(BgL_resetz00_2373))
									{	/* Reduce/cse.scm 115 */
										BgL_val0_1264z00_2379 = BgL_resetz00_2373;
									}
								else
									{	/* Reduce/cse.scm 115 */
										BgL_val0_1264z00_2379 = BgL_resetz72z72_2375;
									}
								{	/* Reduce/cse.scm 115 */
									int BgL_res1853z00_2380;

									{	/* Reduce/cse.scm 115 */
										int BgL_tmpz00_3171;

										BgL_tmpz00_3171 = (int) (((long) 2));
										BgL_res1853z00_2380 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3171);
									} BgL_res1853z00_2380;
								}
								{	/* Reduce/cse.scm 115 */
									obj_t BgL_auxz00_3176;
									int BgL_tmpz00_3174;

									BgL_auxz00_3176 =
										((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2204));
									BgL_tmpz00_3174 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3174, BgL_auxz00_3176);
								}
								return BgL_val0_1264z00_2379;
							}
						}
					}
				}
			}
		}

	}



/* &node-cse!-sync1323 */
	obj_t BGl_z62nodezd2csez12zd2sync1323z70zzreduce_csez00(obj_t BgL_envz00_2206,
		obj_t BgL_nodez00_2207, obj_t BgL_stackz00_2208)
	{
		{	/* Reduce/cse.scm 94 */
			{	/* Reduce/cse.scm 96 */
				obj_t BgL_resetmz00_2382;

				BgL_resetmz00_2382 =
					BGl_nodezd2csez12zc0zzreduce_csez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2207)))->BgL_mutexz00),
					BgL_stackz00_2208);
				{	/* Reduce/cse.scm 97 */
					obj_t BgL_nmutexz00_2383;

					{	/* Reduce/cse.scm 98 */
						int BgL_tmpz00_3183;

						BgL_tmpz00_3183 = (int) (((long) 1));
						BgL_nmutexz00_2383 = BGL_MVALUES_VAL(BgL_tmpz00_3183);
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2207)))->BgL_mutexz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nmutexz00_2383)),
						BUNSPEC);
					{	/* Reduce/cse.scm 99 */
						obj_t BgL_resetpz00_2384;

						BgL_resetpz00_2384 =
							BGl_nodezd2csez12zc0zzreduce_csez00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_2207)))->BgL_prelockz00),
							BgL_stackz00_2208);
						{	/* Reduce/cse.scm 100 */
							obj_t BgL_nprelockz00_2385;

							{	/* Reduce/cse.scm 101 */
								int BgL_tmpz00_3192;

								BgL_tmpz00_3192 = (int) (((long) 1));
								BgL_nprelockz00_2385 = BGL_MVALUES_VAL(BgL_tmpz00_3192);
							}
							((((BgL_syncz00_bglt) COBJECT(
											((BgL_syncz00_bglt) BgL_nodez00_2207)))->BgL_prelockz00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nprelockz00_2385)),
								BUNSPEC);
							{	/* Reduce/cse.scm 102 */
								obj_t BgL_val0_1262z00_2386;

								{	/* Reduce/cse.scm 102 */
									obj_t BgL__ortest_1107z00_2387;

									BgL__ortest_1107z00_2387 =
										BGl_nodezd2csez12zc0zzreduce_csez00(
										(((BgL_syncz00_bglt) COBJECT(
													((BgL_syncz00_bglt) BgL_nodez00_2207)))->BgL_bodyz00),
										BgL_stackz00_2208);
									if (CBOOL(BgL__ortest_1107z00_2387))
										{	/* Reduce/cse.scm 102 */
											BgL_val0_1262z00_2386 = BgL__ortest_1107z00_2387;
										}
									else
										{	/* Reduce/cse.scm 102 */
											if (CBOOL(BgL_resetmz00_2382))
												{	/* Reduce/cse.scm 102 */
													BgL_val0_1262z00_2386 = BgL_resetmz00_2382;
												}
											else
												{	/* Reduce/cse.scm 102 */
													BgL_val0_1262z00_2386 = BgL_resetpz00_2384;
												}
										}
								}
								{	/* Reduce/cse.scm 102 */
									int BgL_res1852z00_2388;

									{	/* Reduce/cse.scm 102 */
										int BgL_tmpz00_3205;

										BgL_tmpz00_3205 = (int) (((long) 2));
										BgL_res1852z00_2388 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3205);
									} BgL_res1852z00_2388;
								}
								{	/* Reduce/cse.scm 102 */
									obj_t BgL_auxz00_3210;
									int BgL_tmpz00_3208;

									BgL_auxz00_3210 =
										((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2207));
									BgL_tmpz00_3208 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3208, BgL_auxz00_3210);
								}
								return BgL_val0_1262z00_2386;
							}
						}
					}
				}
			}
		}

	}



/* &node-cse!-sequence1321 */
	obj_t BGl_z62nodezd2csez12zd2sequence1321z70zzreduce_csez00(obj_t
		BgL_envz00_2209, obj_t BgL_nodez00_2210, obj_t BgL_stackz00_2211)
	{
		{	/* Reduce/cse.scm 87 */
			{	/* Reduce/cse.scm 89 */
				obj_t BgL_val0_1260z00_2390;

				BgL_val0_1260z00_2390 =
					BGl_nodezd2cseza2z12z62zzreduce_csez00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2210)))->BgL_nodesz00),
					BgL_stackz00_2211);
				{	/* Reduce/cse.scm 89 */
					int BgL_res1851z00_2391;

					{	/* Reduce/cse.scm 89 */
						int BgL_tmpz00_3217;

						BgL_tmpz00_3217 = (int) (((long) 2));
						BgL_res1851z00_2391 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3217);
					} BgL_res1851z00_2391;
				}
				{	/* Reduce/cse.scm 89 */
					obj_t BgL_auxz00_3222;
					int BgL_tmpz00_3220;

					BgL_auxz00_3222 = ((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2210));
					BgL_tmpz00_3220 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_3220, BgL_auxz00_3222);
				}
				return BgL_val0_1260z00_2390;
			}
		}

	}



/* &node-cse!-closure1319 */
	obj_t BGl_z62nodezd2csez12zd2closure1319z70zzreduce_csez00(obj_t
		BgL_envz00_2212, obj_t BgL_nodez00_2213, obj_t BgL_stackz00_2214)
	{
		{	/* Reduce/cse.scm 81 */
			{	/* Reduce/cse.scm 82 */
				int BgL_res1850z00_2393;

				{	/* Reduce/cse.scm 82 */
					int BgL_tmpz00_3226;

					BgL_tmpz00_3226 = (int) (((long) 2));
					BgL_res1850z00_2393 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3226);
				} BgL_res1850z00_2393;
			}
			{	/* Reduce/cse.scm 82 */
				obj_t BgL_auxz00_3231;
				int BgL_tmpz00_3229;

				BgL_auxz00_3231 = ((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2213));
				BgL_tmpz00_3229 = (int) (((long) 1));
				BGL_MVALUES_VAL_SET(BgL_tmpz00_3229, BgL_auxz00_3231);
			}
			return BFALSE;
		}

	}



/* &node-cse!-var1317 */
	obj_t BGl_z62nodezd2csez12zd2var1317z70zzreduce_csez00(obj_t BgL_envz00_2215,
		obj_t BgL_nodez00_2216, obj_t BgL_stackz00_2217)
	{
		{	/* Reduce/cse.scm 75 */
			{	/* Reduce/cse.scm 76 */
				int BgL_res1849z00_2395;

				{	/* Reduce/cse.scm 76 */
					int BgL_tmpz00_3235;

					BgL_tmpz00_3235 = (int) (((long) 2));
					BgL_res1849z00_2395 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3235);
				} BgL_res1849z00_2395;
			}
			{	/* Reduce/cse.scm 76 */
				obj_t BgL_auxz00_3240;
				int BgL_tmpz00_3238;

				BgL_auxz00_3240 = ((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2216));
				BgL_tmpz00_3238 = (int) (((long) 1));
				BGL_MVALUES_VAL_SET(BgL_tmpz00_3238, BgL_auxz00_3240);
			}
			return BFALSE;
		}

	}



/* &node-cse!-kwote1315 */
	obj_t BGl_z62nodezd2csez12zd2kwote1315z70zzreduce_csez00(obj_t
		BgL_envz00_2218, obj_t BgL_nodez00_2219, obj_t BgL_stackz00_2220)
	{
		{	/* Reduce/cse.scm 69 */
			{	/* Reduce/cse.scm 70 */
				int BgL_res1848z00_2397;

				{	/* Reduce/cse.scm 70 */
					int BgL_tmpz00_3244;

					BgL_tmpz00_3244 = (int) (((long) 2));
					BgL_res1848z00_2397 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3244);
				} BgL_res1848z00_2397;
			}
			{	/* Reduce/cse.scm 70 */
				obj_t BgL_auxz00_3249;
				int BgL_tmpz00_3247;

				BgL_auxz00_3249 = ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_2219));
				BgL_tmpz00_3247 = (int) (((long) 1));
				BGL_MVALUES_VAL_SET(BgL_tmpz00_3247, BgL_auxz00_3249);
			}
			return BFALSE;
		}

	}



/* &node-cse!-atom1313 */
	obj_t BGl_z62nodezd2csez12zd2atom1313z70zzreduce_csez00(obj_t BgL_envz00_2221,
		obj_t BgL_nodez00_2222, obj_t BgL_stackz00_2223)
	{
		{	/* Reduce/cse.scm 63 */
			{	/* Reduce/cse.scm 64 */
				int BgL_res1847z00_2399;

				{	/* Reduce/cse.scm 64 */
					int BgL_tmpz00_3253;

					BgL_tmpz00_3253 = (int) (((long) 2));
					BgL_res1847z00_2399 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3253);
				} BgL_res1847z00_2399;
			}
			{	/* Reduce/cse.scm 64 */
				obj_t BgL_auxz00_3258;
				int BgL_tmpz00_3256;

				BgL_auxz00_3258 = ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_2222));
				BgL_tmpz00_3256 = (int) (((long) 1));
				BGL_MVALUES_VAL_SET(BgL_tmpz00_3256, BgL_auxz00_3258);
			}
			return BFALSE;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_csez00()
	{
		{	/* Reduce/cse.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
			return
				BGl_modulezd2initializa7ationz75zzreduce_samez00(((long) 284483328),
				BSTRING_TO_STRING(BGl_string1917z00zzreduce_csez00));
		}

	}

#ifdef __cplusplus
}
#endif
