/*===========================================================================*/
/*   (Globalize/new_body.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/new_body.scm) */
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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static BgL_nodez00_bglt
		BGl_z62remz12zd2var1289za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2jumpzd2exzd2it1319za2zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_newzd2bodyz75();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2atom1285za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2letzd2fun1313z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62remz12z70zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2cast1303za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2extern1301za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2setq1305za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_newzd2bodyz75();
	static bool_t BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2letzd2var1315z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2sync1293za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2boxzd2setz121325z62zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2makezd2box1321z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2funcall1299za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75 =
		BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static BgL_nodez00_bglt
		BGl_z62remz12zd2app1295za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62remz121282z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62setzd2globaliza7edzd2newzd2bodiesz12z05zzglobaliza7e_newzd2bodyz75
		(obj_t, obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2sequence1291za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static long BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	static BgL_nodez00_bglt
		BGl_z62remz12zd2switch1311za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2conditional1307za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2fail1309za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static BgL_nodez00_bglt
		BGl_z62remz12zd2appzd2ly1297z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2kwote1287za2zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62remz12zd2setzd2exzd2it1317za2zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62remz12zd2boxzd2ref1323z70zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza7121282za7701945za7,
		BGl_z62remz121282z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1918z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2atom1946za7,
		BGl_z62remz12zd2atom1285za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1920z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2kwot1947za7,
		BGl_z62remz12zd2kwote1287za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1921z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2var11948za7,
		BGl_z62remz12zd2var1289za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1922z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2sequ1949za7,
		BGl_z62remz12zd2sequence1291za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1923z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2sync1950za7,
		BGl_z62remz12zd2sync1293za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1924z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2app11951za7,
		BGl_z62remz12zd2app1295za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1925z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2appza71952z00,
		BGl_z62remz12zd2appzd2ly1297z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1926z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2func1953za7,
		BGl_z62remz12zd2funcall1299za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1927z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2exte1954za7,
		BGl_z62remz12zd2extern1301za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1928z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2cast1955za7,
		BGl_z62remz12zd2cast1303za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1929z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2setq1956za7,
		BGl_z62remz12zd2setq1305za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1930z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2cond1957za7,
		BGl_z62remz12zd2conditional1307za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1931z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2fail1958za7,
		BGl_z62remz12zd2fail1309za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1932z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2swit1959za7,
		BGl_z62remz12zd2switch1311za2zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1933z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2letza71960z00,
		BGl_z62remz12zd2letzd2fun1313z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1934z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2letza71961z00,
		BGl_z62remz12zd2letzd2var1315z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1935z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2setza71962z00,
		BGl_z62remz12zd2setzd2exzd2it1317za2zzglobaliza7e_newzd2bodyz75, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1936z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2jump1963za7,
		BGl_z62remz12zd2jumpzd2exzd2it1319za2zzglobaliza7e_newzd2bodyz75, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1937z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2make1964za7,
		BGl_z62remz12zd2makezd2box1321z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1938z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2boxza71965z00,
		BGl_z62remz12zd2boxzd2ref1323z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1939z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za7d2boxza71966z00,
		BGl_z62remz12zd2boxzd2setz121325z62zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762remza712za770za7za7gl1967za7,
		BGl_z62remz12z70zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2globaliza7edzd2newzd2bodiesz12zd2envzb5zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_za762setza7d2globali1968z00,
		BGl_z62setzd2globaliza7edzd2newzd2bodiesz12z05zzglobaliza7e_newzd2bodyz75,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1916z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string1916za700za7za7g1969za7, "rem!1282", 8);
	      DEFINE_STRING(BGl_string1917z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string1917za700za7za7g1970za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1919z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string1919za700za7za7g1971za7, "rem!", 4);
	      DEFINE_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string1940za700za7za7g1972za7, "globalize_new-body", 18);
	      DEFINE_STRING(BGl_string1941z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string1941za700za7za7g1973za7, "rem!1282 done ", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long
		BgL_checksumz00_2714, char *BgL_fromz00_2715)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_newzd2bodyz75();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
					BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
					BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75();
					BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75();
					return BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_new-body");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			{	/* Globalize/new_body.scm 15 */
				obj_t BgL_cportz00_2616;

				{	/* Globalize/new_body.scm 15 */
					obj_t BgL_stringz00_2624;

					BgL_stringz00_2624 = BGl_string1941z00zzglobaliza7e_newzd2bodyz75;
					{	/* Globalize/new_body.scm 15 */
						obj_t BgL_startz00_2625;

						BgL_startz00_2625 = BINT(((long) 0));
						{	/* Globalize/new_body.scm 15 */
							obj_t BgL_endz00_2626;

							BgL_endz00_2626 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2624)));
							{	/* Globalize/new_body.scm 15 */

								BgL_cportz00_2616 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2624, BgL_startz00_2625, BgL_endz00_2626);
				}}}}
				{
					long BgL_iz00_2617;

					BgL_iz00_2617 = ((long) 1);
				BgL_loopz00_2618:
					if ((BgL_iz00_2617 == ((long) -1)))
						{	/* Globalize/new_body.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/new_body.scm 15 */
							{	/* Globalize/new_body.scm 15 */
								obj_t BgL_arg1943z00_2620;

								{	/* Globalize/new_body.scm 15 */

									{	/* Globalize/new_body.scm 15 */
										obj_t BgL_locationz00_2622;

										BgL_locationz00_2622 = BBOOL(((bool_t) 0));
										{	/* Globalize/new_body.scm 15 */

											BgL_arg1943z00_2620 =
												BGl_readz00zz__readerz00(BgL_cportz00_2616,
												BgL_locationz00_2622);
										}
									}
								}
								{	/* Globalize/new_body.scm 15 */
									int BgL_tmpz00_2744;

									BgL_tmpz00_2744 = (int) (BgL_iz00_2617);
									CNST_TABLE_SET(BgL_tmpz00_2744, BgL_arg1943z00_2620);
							}}
							{	/* Globalize/new_body.scm 15 */
								int BgL_auxz00_2623;

								BgL_auxz00_2623 = (int) ((BgL_iz00_2617 - ((long) 1)));
								{
									long BgL_iz00_2749;

									BgL_iz00_2749 = (long) (BgL_auxz00_2623);
									BgL_iz00_2617 = BgL_iz00_2749;
									goto BgL_loopz00_2618;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 = ((long) 0);
			return BUNSPEC;
		}

	}



/* set-globalized-new-bodies! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt BgL_globalz00_3, obj_t BgL_localsz00_4)
	{
		{	/* Globalize/new_body.scm 32 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 =
				(BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 + ((long) 1));
			{	/* Globalize/new_body.scm 37 */
				BgL_valuez00_bglt BgL_funz00_1741;

				BgL_funz00_1741 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_valuez00);
				{	/* Globalize/new_body.scm 38 */
					BgL_nodez00_bglt BgL_arg1329z00_1742;

					{	/* Globalize/new_body.scm 38 */
						obj_t BgL_arg1330z00_1743;

						BgL_arg1330z00_1743 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1741)))->BgL_bodyz00);
						BgL_arg1329z00_1742 =
							BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
							((BgL_nodez00_bglt) BgL_arg1330z00_1743),
							((obj_t) BgL_globalz00_3), ((obj_t) BgL_globalz00_3));
					}
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1741)))->BgL_bodyz00) =
						((obj_t) ((obj_t) BgL_arg1329z00_1742)), BUNSPEC);
			}}
			{
				obj_t BgL_l1266z00_1745;

				{	/* Globalize/new_body.scm 40 */
					bool_t BgL_tmpz00_2764;

					BgL_l1266z00_1745 = BgL_localsz00_4;
				BgL_zc3z04anonymousza31331ze3z87_1746:
					if (PAIRP(BgL_l1266z00_1745))
						{	/* Globalize/new_body.scm 40 */
							BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75
								(CAR(BgL_l1266z00_1745));
							{
								obj_t BgL_l1266z00_2769;

								BgL_l1266z00_2769 = CDR(BgL_l1266z00_1745);
								BgL_l1266z00_1745 = BgL_l1266z00_2769;
								goto BgL_zc3z04anonymousza31331ze3z87_1746;
							}
						}
					else
						{	/* Globalize/new_body.scm 40 */
							BgL_tmpz00_2764 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_2764);
				}
			}
		}

	}



/* &set-globalized-new-bodies! */
	obj_t
		BGl_z62setzd2globaliza7edzd2newzd2bodiesz12z05zzglobaliza7e_newzd2bodyz75
		(obj_t BgL_envz00_2499, obj_t BgL_globalz00_2500, obj_t BgL_localsz00_2501)
	{
		{	/* Globalize/new_body.scm 32 */
			return
				BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75(
				((BgL_globalz00_bglt) BgL_globalz00_2500), BgL_localsz00_2501);
		}

	}



/* set-globalized-new-body! */
	obj_t
		BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_localz00_5)
	{
		{	/* Globalize/new_body.scm 45 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 =
				(BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 + ((long) 1));
			{	/* Globalize/new_body.scm 53 */
				BgL_valuez00_bglt BgL_funz00_1751;

				BgL_funz00_1751 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_5))))->BgL_valuez00);
				{	/* Globalize/new_body.scm 53 */
					BgL_valuez00_bglt BgL_infoz00_1752;

					BgL_infoz00_1752 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_localz00_5))))->BgL_valuez00);
					{	/* Globalize/new_body.scm 54 */
						obj_t BgL_oldzd2bodyzd2_1753;

						BgL_oldzd2bodyzd2_1753 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1751)))->BgL_bodyz00);
						{	/* Globalize/new_body.scm 55 */
							obj_t BgL_obindingsz00_1754;

							{	/* Globalize/new_body.scm 56 */
								obj_t BgL_hook1272z00_1820;

								BgL_hook1272z00_1820 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
								{	/* Globalize/new_body.scm 59 */
									obj_t BgL_g1273z00_1821;

									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2784;

										{
											obj_t BgL_auxz00_2785;

											{	/* Globalize/new_body.scm 59 */
												BgL_objectz00_bglt BgL_tmpz00_2786;

												BgL_tmpz00_2786 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_1752));
												BgL_auxz00_2785 = BGL_OBJECT_WIDENING(BgL_tmpz00_2786);
											}
											BgL_auxz00_2784 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2785);
										}
										BgL_g1273z00_1821 =
											(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2784))->
											BgL_integratedz00);
									}
									{
										obj_t BgL_l1269z00_1823;
										obj_t BgL_h1270z00_1824;

										BgL_l1269z00_1823 = BgL_g1273z00_1821;
										BgL_h1270z00_1824 = BgL_hook1272z00_1820;
									BgL_zc3z04anonymousza31465ze3z87_1825:
										if (NULLP(BgL_l1269z00_1823))
											{	/* Globalize/new_body.scm 59 */
												BgL_obindingsz00_1754 = CDR(BgL_hook1272z00_1820);
											}
										else
											{	/* Globalize/new_body.scm 59 */
												bool_t BgL_test1978z00_2795;

												{	/* Globalize/new_body.scm 57 */
													bool_t BgL_test1979z00_2796;

													{	/* Globalize/new_body.scm 57 */
														obj_t BgL_arg1521z00_1840;

														{	/* Globalize/new_body.scm 57 */
															BgL_sfunz00_bglt BgL_oz00_2317;

															BgL_oz00_2317 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_l1269z00_1823))))))->
																	BgL_valuez00));
															{
																BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2803;

																{
																	obj_t BgL_auxz00_2804;

																	{	/* Globalize/new_body.scm 57 */
																		BgL_objectz00_bglt BgL_tmpz00_2805;

																		BgL_tmpz00_2805 =
																			((BgL_objectz00_bglt) BgL_oz00_2317);
																		BgL_auxz00_2804 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2805);
																	}
																	BgL_auxz00_2803 =
																		((BgL_sfunzf2ginfozf2_bglt)
																		BgL_auxz00_2804);
																}
																BgL_arg1521z00_1840 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2803))->BgL_ownerz00);
															}
														}
														BgL_test1979z00_2796 =
															(BgL_arg1521z00_1840 == BgL_localz00_5);
													}
													if (BgL_test1979z00_2796)
														{	/* Globalize/new_body.scm 57 */
															BgL_test1978z00_2795 = ((bool_t) 0);
														}
													else
														{	/* Globalize/new_body.scm 57 */
															BgL_test1978z00_2795 = ((bool_t) 1);
														}
												}
												if (BgL_test1978z00_2795)
													{	/* Globalize/new_body.scm 59 */
														obj_t BgL_nh1271z00_1834;

														{	/* Globalize/new_body.scm 59 */
															obj_t BgL_arg1497z00_1836;

															BgL_arg1497z00_1836 =
																CAR(((obj_t) BgL_l1269z00_1823));
															{	/* Globalize/new_body.scm 59 */
																obj_t BgL_res1889z00_2320;

																BgL_res1889z00_2320 =
																	MAKE_YOUNG_PAIR(BgL_arg1497z00_1836, BNIL);
																BgL_nh1271z00_1834 = BgL_res1889z00_2320;
															}
														}
														SET_CDR(BgL_h1270z00_1824, BgL_nh1271z00_1834);
														{	/* Globalize/new_body.scm 59 */
															obj_t BgL_arg1495z00_1835;

															BgL_arg1495z00_1835 =
																CDR(((obj_t) BgL_l1269z00_1823));
															{
																obj_t BgL_h1270z00_2818;
																obj_t BgL_l1269z00_2817;

																BgL_l1269z00_2817 = BgL_arg1495z00_1835;
																BgL_h1270z00_2818 = BgL_nh1271z00_1834;
																BgL_h1270z00_1824 = BgL_h1270z00_2818;
																BgL_l1269z00_1823 = BgL_l1269z00_2817;
																goto BgL_zc3z04anonymousza31465ze3z87_1825;
															}
														}
													}
												else
													{	/* Globalize/new_body.scm 59 */
														obj_t BgL_arg1518z00_1837;

														BgL_arg1518z00_1837 =
															CDR(((obj_t) BgL_l1269z00_1823));
														{
															obj_t BgL_l1269z00_2821;

															BgL_l1269z00_2821 = BgL_arg1518z00_1837;
															BgL_l1269z00_1823 = BgL_l1269z00_2821;
															goto BgL_zc3z04anonymousza31465ze3z87_1825;
														}
													}
											}
									}
								}
							}
							{	/* Globalize/new_body.scm 56 */
								BgL_nodez00_bglt BgL_newzd2bodyzd2_1755;

								BgL_newzd2bodyzd2_1755 =
									BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
									((BgL_nodez00_bglt) BgL_oldzd2bodyzd2_1753), BgL_localz00_5,
									BgL_localz00_5);
								{	/* Globalize/new_body.scm 60 */

									{
										obj_t BgL_l1274z00_1757;

										BgL_l1274z00_1757 = BgL_obindingsz00_1754;
									BgL_zc3z04anonymousza31336ze3z87_1758:
										if (PAIRP(BgL_l1274z00_1757))
											{	/* Globalize/new_body.scm 64 */
												{	/* Globalize/new_body.scm 65 */
													obj_t BgL_fz00_1760;

													BgL_fz00_1760 = CAR(BgL_l1274z00_1757);
													{	/* Globalize/new_body.scm 66 */
														bool_t BgL_test1981z00_2827;

														{	/* Globalize/new_body.scm 66 */
															long BgL_arg1352z00_1767;

															{	/* Globalize/new_body.scm 66 */
																BgL_sfunz00_bglt BgL_oz00_2327;

																BgL_oz00_2327 =
																	((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_fz00_1760))))->BgL_valuez00));
																{
																	BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2832;

																	{
																		obj_t BgL_auxz00_2833;

																		{	/* Globalize/new_body.scm 66 */
																			BgL_objectz00_bglt BgL_tmpz00_2834;

																			BgL_tmpz00_2834 =
																				((BgL_objectz00_bglt) BgL_oz00_2327);
																			BgL_auxz00_2833 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2834);
																		}
																		BgL_auxz00_2832 =
																			((BgL_sfunzf2ginfozf2_bglt)
																			BgL_auxz00_2833);
																	}
																	BgL_arg1352z00_1767 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2832))->BgL_bmarkz00);
															}}
															BgL_test1981z00_2827 =
																(BgL_arg1352z00_1767 ==
																BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
														}
														if (BgL_test1981z00_2827)
															{	/* Globalize/new_body.scm 66 */
																BFALSE;
															}
														else
															{	/* Globalize/new_body.scm 67 */
																BgL_valuez00_bglt BgL_funz00_1764;

																BgL_funz00_1764 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt) BgL_fz00_1760))))->
																	BgL_valuez00);
																{	/* Globalize/new_body.scm 67 */
																	obj_t BgL_bodyz00_1765;

																	BgL_bodyz00_1765 =
																		(((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_funz00_1764)))->
																		BgL_bodyz00);
																	{	/* Globalize/new_body.scm 68 */

																		{	/* Globalize/new_body.scm 69 */
																			BgL_nodez00_bglt BgL_arg1351z00_1766;

																			BgL_arg1351z00_1766 =
																				BGl_remz12z12zzglobaliza7e_newzd2bodyz75
																				(((BgL_nodez00_bglt) BgL_bodyz00_1765),
																				BgL_localz00_5, BgL_fz00_1760);
																			((((BgL_sfunz00_bglt)
																						COBJECT(((BgL_sfunz00_bglt)
																								BgL_funz00_1764)))->
																					BgL_bodyz00) =
																				((obj_t) ((obj_t) BgL_arg1351z00_1766)),
																				BUNSPEC);
																		}
																	}
																}
															}
													}
												}
												{
													obj_t BgL_l1274z00_2850;

													BgL_l1274z00_2850 = CDR(BgL_l1274z00_1757);
													BgL_l1274z00_1757 = BgL_l1274z00_2850;
													goto BgL_zc3z04anonymousza31336ze3z87_1758;
												}
											}
										else
											{	/* Globalize/new_body.scm 64 */
												((bool_t) 1);
											}
									}
									{	/* Globalize/new_body.scm 72 */
										obj_t BgL_nbindingsz00_1771;

										{
											obj_t BgL_nbdingsz00_1804;
											obj_t BgL_obdingsz00_1805;

											BgL_nbdingsz00_1804 = BNIL;
											BgL_obdingsz00_1805 = BgL_obindingsz00_1754;
										BgL_zc3z04anonymousza31395ze3z87_1806:
											if (NULLP(BgL_obdingsz00_1805))
												{	/* Globalize/new_body.scm 75 */
													BgL_nbindingsz00_1771 = BgL_nbdingsz00_1804;
												}
											else
												{	/* Globalize/new_body.scm 77 */
													bool_t BgL_test1983z00_2854;

													{	/* Globalize/new_body.scm 78 */
														long BgL_arg1461z00_1816;

														{	/* Globalize/new_body.scm 77 */
															BgL_sfunz00_bglt BgL_oz00_2339;

															BgL_oz00_2339 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_obdingsz00_1805))))))->
																	BgL_valuez00));
															{
																BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2861;

																{
																	obj_t BgL_auxz00_2862;

																	{	/* Globalize/new_body.scm 77 */
																		BgL_objectz00_bglt BgL_tmpz00_2863;

																		BgL_tmpz00_2863 =
																			((BgL_objectz00_bglt) BgL_oz00_2339);
																		BgL_auxz00_2862 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2863);
																	}
																	BgL_auxz00_2861 =
																		((BgL_sfunzf2ginfozf2_bglt)
																		BgL_auxz00_2862);
																}
																BgL_arg1461z00_1816 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2861))->BgL_bmarkz00);
														}}
														BgL_test1983z00_2854 =
															(BgL_arg1461z00_1816 ==
															BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
													}
													if (BgL_test1983z00_2854)
														{	/* Globalize/new_body.scm 81 */
															obj_t BgL_arg1441z00_1812;

															BgL_arg1441z00_1812 =
																CDR(((obj_t) BgL_obdingsz00_1805));
															{
																obj_t BgL_obdingsz00_2871;

																BgL_obdingsz00_2871 = BgL_arg1441z00_1812;
																BgL_obdingsz00_1805 = BgL_obdingsz00_2871;
																goto BgL_zc3z04anonymousza31395ze3z87_1806;
															}
														}
													else
														{	/* Globalize/new_body.scm 83 */
															obj_t BgL_arg1442z00_1813;
															obj_t BgL_arg1448z00_1814;

															{	/* Globalize/new_body.scm 83 */
																obj_t BgL_arg1449z00_1815;

																BgL_arg1449z00_1815 =
																	CAR(((obj_t) BgL_obdingsz00_1805));
																BgL_arg1442z00_1813 =
																	MAKE_YOUNG_PAIR(BgL_arg1449z00_1815,
																	BgL_nbdingsz00_1804);
															}
															BgL_arg1448z00_1814 =
																CDR(((obj_t) BgL_obdingsz00_1805));
															{
																obj_t BgL_obdingsz00_2878;
																obj_t BgL_nbdingsz00_2877;

																BgL_nbdingsz00_2877 = BgL_arg1442z00_1813;
																BgL_obdingsz00_2878 = BgL_arg1448z00_1814;
																BgL_obdingsz00_1805 = BgL_obdingsz00_2878;
																BgL_nbdingsz00_1804 = BgL_nbdingsz00_2877;
																goto BgL_zc3z04anonymousza31395ze3z87_1806;
															}
														}
												}
										}
										{	/* Globalize/new_body.scm 85 */
											BgL_nodez00_bglt BgL_new2zd2bodyzd2_1772;

											if (NULLP(BgL_nbindingsz00_1771))
												{	/* Globalize/new_body.scm 85 */
													BgL_new2zd2bodyzd2_1772 = BgL_newzd2bodyzd2_1755;
												}
											else
												{	/* Globalize/new_body.scm 87 */
													BgL_letzd2funzd2_bglt BgL_new1111z00_1799;

													{	/* Globalize/new_body.scm 88 */
														BgL_letzd2funzd2_bglt BgL_new1110z00_1800;

														BgL_new1110z00_1800 =
															((BgL_letzd2funzd2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_letzd2funzd2_bgl))));
														{	/* Globalize/new_body.scm 88 */
															long BgL_arg1394z00_1801;

															{	/* Globalize/new_body.scm 88 */
																long BgL_res1895z00_2349;

																BgL_res1895z00_2349 =
																	BGL_CLASS_INDEX
																	(BGl_letzd2funzd2zzast_nodez00);
																BgL_arg1394z00_1801 = BgL_res1895z00_2349;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1110z00_1800),
																BgL_arg1394z00_1801);
														}
														{	/* Globalize/new_body.scm 88 */
															BgL_objectz00_bglt BgL_tmpz00_2885;

															BgL_tmpz00_2885 =
																((BgL_objectz00_bglt) BgL_new1110z00_1800);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2885, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1110z00_1800);
														BgL_new1111z00_1799 = BgL_new1110z00_1800;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1111z00_1799)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt)
																			BgL_oldzd2bodyzd2_1753)))->BgL_locz00)),
														BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1111z00_1799)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt)
																			BgL_oldzd2bodyzd2_1753)))->BgL_typez00)),
														BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1111z00_1799)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1111z00_1799)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													((((BgL_letzd2funzd2_bglt)
																COBJECT(BgL_new1111z00_1799))->BgL_localsz00) =
														((obj_t) BgL_nbindingsz00_1771), BUNSPEC);
													((((BgL_letzd2funzd2_bglt)
																COBJECT(BgL_new1111z00_1799))->BgL_bodyz00) =
														((BgL_nodez00_bglt) BgL_newzd2bodyzd2_1755),
														BUNSPEC);
													BgL_new2zd2bodyzd2_1772 =
														((BgL_nodez00_bglt) BgL_new1111z00_1799);
												}
											{	/* Globalize/new_body.scm 95 */
												obj_t BgL_g1112z00_1773;

												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2905;

													{
														obj_t BgL_auxz00_2906;

														{	/* Globalize/new_body.scm 95 */
															BgL_objectz00_bglt BgL_tmpz00_2907;

															BgL_tmpz00_2907 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_infoz00_1752));
															BgL_auxz00_2906 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2907);
														}
														BgL_auxz00_2905 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2906);
													}
													BgL_g1112z00_1773 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2905))->BgL_ctoz00);
												}
												{
													obj_t BgL_nctoz00_1775;
													obj_t BgL_nbindingsz00_1776;

													BgL_nctoz00_1775 = BgL_g1112z00_1773;
													BgL_nbindingsz00_1776 = BgL_nbindingsz00_1771;
												BgL_zc3z04anonymousza31361ze3z87_1777:
													if (NULLP(BgL_nbindingsz00_1776))
														{
															BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2915;

															{
																obj_t BgL_auxz00_2916;

																{	/* Globalize/new_body.scm 98 */
																	BgL_objectz00_bglt BgL_tmpz00_2917;

																	BgL_tmpz00_2917 =
																		((BgL_objectz00_bglt)
																		((BgL_sfunz00_bglt) BgL_infoz00_1752));
																	BgL_auxz00_2916 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2917);
																}
																BgL_auxz00_2915 =
																	((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2916);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2915))->BgL_ctoz00) =
																((obj_t) BgL_nctoz00_1775), BUNSPEC);
														}
													else
														{	/* Globalize/new_body.scm 99 */
															obj_t BgL_g1116z00_1779;

															{	/* Globalize/new_body.scm 100 */
																BgL_sfunz00_bglt BgL_oz00_2362;

																BgL_oz00_2362 =
																	((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						CAR(
																							((obj_t)
																								BgL_nbindingsz00_1776))))))->
																		BgL_valuez00));
																{
																	BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2929;

																	{
																		obj_t BgL_auxz00_2930;

																		{	/* Globalize/new_body.scm 100 */
																			BgL_objectz00_bglt BgL_tmpz00_2931;

																			BgL_tmpz00_2931 =
																				((BgL_objectz00_bglt) BgL_oz00_2362);
																			BgL_auxz00_2930 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2931);
																		}
																		BgL_auxz00_2929 =
																			((BgL_sfunzf2ginfozf2_bglt)
																			BgL_auxz00_2930);
																	}
																	BgL_g1116z00_1779 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2929))->BgL_ctoz00);
																}
															}
															{
																obj_t BgL_nctoz00_1781;
																obj_t BgL_lctoz00_1782;

																BgL_nctoz00_1781 = BgL_nctoz00_1775;
																BgL_lctoz00_1782 = BgL_g1116z00_1779;
															BgL_zc3z04anonymousza31363ze3z87_1783:
																if (NULLP(BgL_lctoz00_1782))
																	{	/* Globalize/new_body.scm 104 */
																		obj_t BgL_arg1367z00_1785;

																		BgL_arg1367z00_1785 =
																			CDR(((obj_t) BgL_nbindingsz00_1776));
																		{
																			obj_t BgL_nbindingsz00_2941;
																			obj_t BgL_nctoz00_2940;

																			BgL_nctoz00_2940 = BgL_nctoz00_1781;
																			BgL_nbindingsz00_2941 =
																				BgL_arg1367z00_1785;
																			BgL_nbindingsz00_1776 =
																				BgL_nbindingsz00_2941;
																			BgL_nctoz00_1775 = BgL_nctoz00_2940;
																			goto
																				BgL_zc3z04anonymousza31361ze3z87_1777;
																		}
																	}
																else
																	{	/* Globalize/new_body.scm 103 */
																		if (CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(((obj_t) BgL_lctoz00_1782)),
																					BgL_nctoz00_1781)))
																			{	/* Globalize/new_body.scm 106 */
																				obj_t BgL_arg1381z00_1788;

																				BgL_arg1381z00_1788 =
																					CDR(((obj_t) BgL_lctoz00_1782));
																				{
																					obj_t BgL_lctoz00_2949;

																					BgL_lctoz00_2949 =
																						BgL_arg1381z00_1788;
																					BgL_lctoz00_1782 = BgL_lctoz00_2949;
																					goto
																						BgL_zc3z04anonymousza31363ze3z87_1783;
																				}
																			}
																		else
																			{	/* Globalize/new_body.scm 108 */
																				obj_t BgL_arg1382z00_1789;
																				obj_t BgL_arg1383z00_1790;

																				{	/* Globalize/new_body.scm 108 */
																					obj_t BgL_arg1384z00_1791;

																					BgL_arg1384z00_1791 =
																						CAR(((obj_t) BgL_lctoz00_1782));
																					BgL_arg1382z00_1789 =
																						MAKE_YOUNG_PAIR(BgL_arg1384z00_1791,
																						BgL_nctoz00_1781);
																				}
																				BgL_arg1383z00_1790 =
																					CDR(((obj_t) BgL_lctoz00_1782));
																				{
																					obj_t BgL_lctoz00_2956;
																					obj_t BgL_nctoz00_2955;

																					BgL_nctoz00_2955 =
																						BgL_arg1382z00_1789;
																					BgL_lctoz00_2956 =
																						BgL_arg1383z00_1790;
																					BgL_lctoz00_1782 = BgL_lctoz00_2956;
																					BgL_nctoz00_1781 = BgL_nctoz00_2955;
																					goto
																						BgL_zc3z04anonymousza31363ze3z87_1783;
																				}
																			}
																	}
															}
														}
												}
											}
											{	/* Globalize/new_body.scm 119 */
												BgL_nodez00_bglt BgL_arg1388z00_1797;

												BgL_arg1388z00_1797 =
													BGl_remz12z12zzglobaliza7e_newzd2bodyz75
													(BgL_new2zd2bodyzd2_1772, BgL_localz00_5,
													BgL_localz00_5);
												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2958;

													{
														obj_t BgL_auxz00_2959;

														{	/* Globalize/new_body.scm 119 */
															BgL_objectz00_bglt BgL_tmpz00_2960;

															BgL_tmpz00_2960 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_infoz00_1752));
															BgL_auxz00_2959 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2960);
														}
														BgL_auxz00_2958 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2959);
													}
													return
														((((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2958))->BgL_newzd2bodyzd2) =
														((obj_t) ((obj_t) BgL_arg1388z00_1797)), BUNSPEC);
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



/* is-in? */
	bool_t BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75(obj_t BgL_f1z00_6,
		obj_t BgL_f2z00_7)
	{
		{	/* Globalize/new_body.scm 126 */
		BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75:
			{	/* Globalize/new_body.scm 127 */
				BgL_valuez00_bglt BgL_infoz00_1843;

				BgL_infoz00_1843 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_f1z00_6))))->BgL_valuez00);
				{	/* Globalize/new_body.scm 129 */
					bool_t BgL_test1988z00_2970;

					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2971;

						{
							obj_t BgL_auxz00_2972;

							{	/* Globalize/new_body.scm 129 */
								BgL_objectz00_bglt BgL_tmpz00_2973;

								BgL_tmpz00_2973 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1843));
								BgL_auxz00_2972 = BGL_OBJECT_WIDENING(BgL_tmpz00_2973);
							}
							BgL_auxz00_2971 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2972);
						}
						BgL_test1988z00_2970 =
							(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2971))->
							BgL_gzf3zf3);
					}
					if (BgL_test1988z00_2970)
						{	/* Globalize/new_body.scm 129 */
							return ((bool_t) 0);
						}
					else
						{	/* Globalize/new_body.scm 131 */
							bool_t BgL_test1989z00_2979;

							{	/* Globalize/new_body.scm 131 */
								obj_t BgL_arg1564z00_1853;

								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2980;

									{
										obj_t BgL_auxz00_2981;

										{	/* Globalize/new_body.scm 131 */
											BgL_objectz00_bglt BgL_tmpz00_2982;

											BgL_tmpz00_2982 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_infoz00_1843));
											BgL_auxz00_2981 = BGL_OBJECT_WIDENING(BgL_tmpz00_2982);
										}
										BgL_auxz00_2980 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2981);
									}
									BgL_arg1564z00_1853 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2980))->
										BgL_integratorz00);
								}
								BgL_test1989z00_2979 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1564z00_1853,
									BGl_localz00zzast_varz00);
							}
							if (BgL_test1989z00_2979)
								{	/* Globalize/new_body.scm 133 */
									bool_t BgL_test1990z00_2989;

									{	/* Globalize/new_body.scm 133 */
										obj_t BgL_arg1561z00_1852;

										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2990;

											{
												obj_t BgL_auxz00_2991;

												{	/* Globalize/new_body.scm 133 */
													BgL_objectz00_bglt BgL_tmpz00_2992;

													BgL_tmpz00_2992 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_infoz00_1843));
													BgL_auxz00_2991 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2992);
												}
												BgL_auxz00_2990 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2991);
											}
											BgL_arg1561z00_1852 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2990))->
												BgL_integratorz00);
										}
										BgL_test1990z00_2989 = (BgL_arg1561z00_1852 == BgL_f2z00_7);
									}
									if (BgL_test1990z00_2989)
										{	/* Globalize/new_body.scm 133 */
											return ((bool_t) 1);
										}
									else
										{	/* Globalize/new_body.scm 135 */
											obj_t BgL_arg1558z00_1851;

											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2999;

												{
													obj_t BgL_auxz00_3000;

													{	/* Globalize/new_body.scm 135 */
														BgL_objectz00_bglt BgL_tmpz00_3001;

														BgL_tmpz00_3001 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_infoz00_1843));
														BgL_auxz00_3000 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3001);
													}
													BgL_auxz00_2999 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3000);
												}
												BgL_arg1558z00_1851 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_2999))->BgL_integratorz00);
											}
											{
												obj_t BgL_f1z00_3007;

												BgL_f1z00_3007 = BgL_arg1558z00_1851;
												BgL_f1z00_6 = BgL_f1z00_3007;
												goto BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75;
											}
										}
								}
							else
								{	/* Globalize/new_body.scm 131 */
									return ((bool_t) 1);
								}
						}
				}
			}
		}

	}



/* rem*! */
	obj_t BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(obj_t BgL_nodeza2za2_74,
		obj_t BgL_ownerz00_75, obj_t BgL_currentz00_76)
	{
		{	/* Globalize/new_body.scm 376 */
			{
				obj_t BgL_nodeza2za2_1855;

				BgL_nodeza2za2_1855 = BgL_nodeza2za2_74;
			BgL_zc3z04anonymousza31565ze3z87_1856:
				if (NULLP(BgL_nodeza2za2_1855))
					{	/* Globalize/new_body.scm 378 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/new_body.scm 378 */
						{	/* Globalize/new_body.scm 381 */
							BgL_nodez00_bglt BgL_arg1573z00_1858;

							{	/* Globalize/new_body.scm 381 */
								obj_t BgL_arg1575z00_1859;

								BgL_arg1575z00_1859 = CAR(((obj_t) BgL_nodeza2za2_1855));
								BgL_arg1573z00_1858 =
									BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
									((BgL_nodez00_bglt) BgL_arg1575z00_1859), BgL_ownerz00_75,
									BgL_currentz00_76);
							}
							{	/* Globalize/new_body.scm 381 */
								obj_t BgL_auxz00_3017;
								obj_t BgL_tmpz00_3015;

								BgL_auxz00_3017 = ((obj_t) BgL_arg1573z00_1858);
								BgL_tmpz00_3015 = ((obj_t) BgL_nodeza2za2_1855);
								SET_CAR(BgL_tmpz00_3015, BgL_auxz00_3017);
							}
						}
						{	/* Globalize/new_body.scm 382 */
							obj_t BgL_arg1578z00_1860;

							BgL_arg1578z00_1860 = CDR(((obj_t) BgL_nodeza2za2_1855));
							{
								obj_t BgL_nodeza2za2_3022;

								BgL_nodeza2za2_3022 = BgL_arg1578z00_1860;
								BgL_nodeza2za2_1855 = BgL_nodeza2za2_3022;
								goto BgL_zc3z04anonymousza31565ze3z87_1856;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_proc1915z00zzglobaliza7e_newzd2bodyz75, BGl_nodez00zzast_nodez00,
				BGl_string1916z00zzglobaliza7e_newzd2bodyz75);
		}

	}



/* &rem!1282 */
	obj_t BGl_z62remz121282z70zzglobaliza7e_newzd2bodyz75(obj_t BgL_envz00_2503,
		obj_t BgL_nodez00_2504, obj_t BgL_ownerz00_2505, obj_t BgL_currentz00_2506)
	{
		{	/* Globalize/new_body.scm 148 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string1917z00zzglobaliza7e_newzd2bodyz75,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2504)));
		}

	}



/* rem! */
	BgL_nodez00_bglt BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt
		BgL_nodez00_8, obj_t BgL_ownerz00_9, obj_t BgL_currentz00_10)
	{
		{	/* Globalize/new_body.scm 148 */
			{	/* Globalize/new_body.scm 148 */
				obj_t BgL_method1283z00_1868;

				{	/* Globalize/new_body.scm 148 */
					obj_t BgL_res1910z00_2422;

					{	/* Globalize/new_body.scm 148 */
						long BgL_objzd2classzd2numz00_2387;

						{	/* Globalize/new_body.scm 148 */
							long BgL_res1900z00_2390;

							BgL_res1900z00_2390 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_8));
							BgL_objzd2classzd2numz00_2387 = BgL_res1900z00_2390;
						}
						{	/* Globalize/new_body.scm 148 */
							obj_t BgL_arg1813z00_2388;

							BgL_arg1813z00_2388 =
								PROCEDURE_REF(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
								(int) (((long) 1)));
							{	/* Globalize/new_body.scm 148 */
								int BgL_offsetz00_2392;

								BgL_offsetz00_2392 = (int) (BgL_objzd2classzd2numz00_2387);
								{	/* Globalize/new_body.scm 148 */
									long BgL_offsetz00_2393;

									BgL_offsetz00_2393 =
										((long) (BgL_offsetz00_2392) - OBJECT_TYPE);
									{	/* Globalize/new_body.scm 148 */
										long BgL_modz00_2394;

										BgL_modz00_2394 =
											(BgL_offsetz00_2393 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/new_body.scm 148 */
											long BgL_restz00_2396;

											BgL_restz00_2396 =
												(BgL_offsetz00_2393 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/new_body.scm 148 */

												{	/* Globalize/new_body.scm 148 */
													obj_t BgL_bucketz00_2398;

													BgL_bucketz00_2398 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2388), BgL_modz00_2394);
													BgL_res1910z00_2422 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2398), BgL_restz00_2396);
					}}}}}}}}
					BgL_method1283z00_1868 = BgL_res1910z00_2422;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1283z00_1868) (BgL_method1283z00_1868,
						((obj_t) BgL_nodez00_8), BgL_ownerz00_9, BgL_currentz00_10, BEOA));
			}
		}

	}



/* &rem! */
	BgL_nodez00_bglt BGl_z62remz12z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2507, obj_t BgL_nodez00_2508, obj_t BgL_ownerz00_2509,
		obj_t BgL_currentz00_2510)
	{
		{	/* Globalize/new_body.scm 148 */
			return
				BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
				((BgL_nodez00_bglt) BgL_nodez00_2508), BgL_ownerz00_2509,
				BgL_currentz00_2510);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_atomz00zzast_nodez00, BGl_proc1918z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_kwotez00zzast_nodez00, BGl_proc1920z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_varz00zzast_nodez00, BGl_proc1921z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_sequencez00zzast_nodez00,
				BGl_proc1922z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_syncz00zzast_nodez00, BGl_proc1923z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_appz00zzast_nodez00, BGl_proc1924z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1925z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_funcallz00zzast_nodez00, BGl_proc1926z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_externz00zzast_nodez00, BGl_proc1927z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_castz00zzast_nodez00, BGl_proc1928z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_setqz00zzast_nodez00, BGl_proc1929z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc1930z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_failz00zzast_nodez00, BGl_proc1931z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_switchz00zzast_nodez00, BGl_proc1932z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1933z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1934z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1935z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1936z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1937z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1938z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1939z00zzglobaliza7e_newzd2bodyz75,
				BGl_string1919z00zzglobaliza7e_newzd2bodyz75);
		}

	}



/* &rem!-box-set!1325 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2boxzd2setz121325z62zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2532, obj_t BgL_nodez00_2533, obj_t BgL_ownerz00_2534,
		obj_t BgL_currentz00_2535)
	{
		{	/* Globalize/new_body.scm 367 */
			{
				BgL_varz00_bglt BgL_auxz00_3084;

				{	/* Globalize/new_body.scm 369 */
					BgL_varz00_bglt BgL_arg1771z00_2631;

					BgL_arg1771z00_2631 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2533)))->BgL_varz00);
					BgL_auxz00_3084 =
						((BgL_varz00_bglt)
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
							((BgL_nodez00_bglt) BgL_arg1771z00_2631), BgL_ownerz00_2534,
							BgL_currentz00_2535));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2533)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3084), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3092;

				{	/* Globalize/new_body.scm 370 */
					BgL_nodez00_bglt BgL_arg1775z00_2632;

					BgL_arg1775z00_2632 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2533)))->BgL_valuez00);
					BgL_auxz00_3092 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1775z00_2632,
						BgL_ownerz00_2534, BgL_currentz00_2535);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2533)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3092), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2533));
		}

	}



/* &rem!-box-ref1323 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2boxzd2ref1323z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2536, obj_t BgL_nodez00_2537, obj_t BgL_ownerz00_2538,
		obj_t BgL_currentz00_2539)
	{
		{	/* Globalize/new_body.scm 359 */
			{
				BgL_varz00_bglt BgL_auxz00_3100;

				{	/* Globalize/new_body.scm 361 */
					BgL_varz00_bglt BgL_arg1768z00_2634;

					BgL_arg1768z00_2634 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2537)))->BgL_varz00);
					BgL_auxz00_3100 =
						((BgL_varz00_bglt)
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
							((BgL_nodez00_bglt) BgL_arg1768z00_2634), BgL_ownerz00_2538,
							BgL_currentz00_2539));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2537)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3100), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2537));
		}

	}



/* &rem!-make-box1321 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2makezd2box1321z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2540, obj_t BgL_nodez00_2541, obj_t BgL_ownerz00_2542,
		obj_t BgL_currentz00_2543)
	{
		{	/* Globalize/new_body.scm 351 */
			{
				BgL_nodez00_bglt BgL_auxz00_3110;

				{	/* Globalize/new_body.scm 353 */
					BgL_nodez00_bglt BgL_arg1761z00_2636;

					BgL_arg1761z00_2636 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2541)))->BgL_valuez00);
					BgL_auxz00_3110 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1761z00_2636,
						BgL_ownerz00_2542, BgL_currentz00_2543);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2541)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3110), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2541));
		}

	}



/* &rem!-jump-ex-it1319 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2jumpzd2exzd2it1319za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545, obj_t BgL_ownerz00_2546,
		obj_t BgL_currentz00_2547)
	{
		{	/* Globalize/new_body.scm 342 */
			{
				BgL_nodez00_bglt BgL_auxz00_3118;

				{	/* Globalize/new_body.scm 344 */
					BgL_nodez00_bglt BgL_arg1759z00_2638;

					BgL_arg1759z00_2638 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2545)))->BgL_exitz00);
					BgL_auxz00_3118 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1759z00_2638,
						BgL_ownerz00_2546, BgL_currentz00_2547);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2545)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3118), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3124;

				{	/* Globalize/new_body.scm 345 */
					BgL_nodez00_bglt BgL_arg1760z00_2639;

					BgL_arg1760z00_2639 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2545)))->
						BgL_valuez00);
					BgL_auxz00_3124 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1760z00_2639,
						BgL_ownerz00_2546, BgL_currentz00_2547);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2545)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3124), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2545));
		}

	}



/* &rem!-set-ex-it1317 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2setzd2exzd2it1317za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2548, obj_t BgL_nodez00_2549, obj_t BgL_ownerz00_2550,
		obj_t BgL_currentz00_2551)
	{
		{	/* Globalize/new_body.scm 334 */
			{
				BgL_nodez00_bglt BgL_auxz00_3132;

				{	/* Globalize/new_body.scm 336 */
					BgL_nodez00_bglt BgL_arg1757z00_2641;

					BgL_arg1757z00_2641 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2549)))->BgL_bodyz00);
					BgL_auxz00_3132 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1757z00_2641,
						BgL_ownerz00_2550, BgL_currentz00_2551);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2549)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3132), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2549));
		}

	}



/* &rem!-let-var1315 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2letzd2var1315z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2552, obj_t BgL_nodez00_2553, obj_t BgL_ownerz00_2554,
		obj_t BgL_currentz00_2555)
	{
		{	/* Globalize/new_body.scm 323 */
			{
				BgL_nodez00_bglt BgL_auxz00_3140;

				{	/* Globalize/new_body.scm 325 */
					BgL_nodez00_bglt BgL_arg1747z00_2643;

					BgL_arg1747z00_2643 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->BgL_bodyz00);
					BgL_auxz00_3140 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1747z00_2643,
						BgL_ownerz00_2554, BgL_currentz00_2555);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3140), BUNSPEC);
			}
			{	/* Globalize/new_body.scm 326 */
				obj_t BgL_g1281z00_2644;

				BgL_g1281z00_2644 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2553)))->BgL_bindingsz00);
				{
					obj_t BgL_l1279z00_2646;

					BgL_l1279z00_2646 = BgL_g1281z00_2644;
				BgL_zc3z04anonymousza31748ze3z87_2645:
					if (PAIRP(BgL_l1279z00_2646))
						{	/* Globalize/new_body.scm 326 */
							{	/* Globalize/new_body.scm 327 */
								obj_t BgL_bindingz00_2647;

								BgL_bindingz00_2647 = CAR(BgL_l1279z00_2646);
								{	/* Globalize/new_body.scm 327 */
									BgL_nodez00_bglt BgL_arg1754z00_2648;

									{	/* Globalize/new_body.scm 327 */
										obj_t BgL_arg1755z00_2649;

										BgL_arg1755z00_2649 = CDR(((obj_t) BgL_bindingz00_2647));
										BgL_arg1754z00_2648 =
											BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
											((BgL_nodez00_bglt) BgL_arg1755z00_2649),
											BgL_ownerz00_2554, BgL_currentz00_2555);
									}
									{	/* Globalize/new_body.scm 327 */
										obj_t BgL_auxz00_3157;
										obj_t BgL_tmpz00_3155;

										BgL_auxz00_3157 = ((obj_t) BgL_arg1754z00_2648);
										BgL_tmpz00_3155 = ((obj_t) BgL_bindingz00_2647);
										SET_CDR(BgL_tmpz00_3155, BgL_auxz00_3157);
									}
								}
							}
							{
								obj_t BgL_l1279z00_3160;

								BgL_l1279z00_3160 = CDR(BgL_l1279z00_2646);
								BgL_l1279z00_2646 = BgL_l1279z00_3160;
								goto BgL_zc3z04anonymousza31748ze3z87_2645;
							}
						}
					else
						{	/* Globalize/new_body.scm 326 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2553));
		}

	}



/* &rem!-let-fun1313 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2letzd2fun1313z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2556, obj_t BgL_nodez00_2557, obj_t BgL_ownerz00_2558,
		obj_t BgL_currentz00_2559)
	{
		{	/* Globalize/new_body.scm 270 */
			{
				BgL_nodez00_bglt BgL_auxz00_3164;

				{	/* Globalize/new_body.scm 272 */
					BgL_nodez00_bglt BgL_arg1663z00_2651;

					BgL_arg1663z00_2651 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2557)))->BgL_bodyz00);
					BgL_auxz00_3164 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1663z00_2651,
						BgL_ownerz00_2558, BgL_currentz00_2559);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2557)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3164), BUNSPEC);
			}
			{
				obj_t BgL_obindingsz00_2653;
				obj_t BgL_nbindingsz00_2654;

				{	/* Globalize/new_body.scm 273 */
					obj_t BgL_arg1664z00_2679;

					BgL_arg1664z00_2679 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2557)))->BgL_localsz00);
					{
						BgL_letzd2funzd2_bglt BgL_auxz00_3172;

						BgL_obindingsz00_2653 = BgL_arg1664z00_2679;
						BgL_nbindingsz00_2654 = BNIL;
					BgL_liipz00_2652:
						if (NULLP(BgL_obindingsz00_2653))
							{	/* Globalize/new_body.scm 276 */
								((((BgL_letzd2funzd2_bglt) COBJECT(
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2557)))->
										BgL_localsz00) = ((obj_t) BgL_nbindingsz00_2654), BUNSPEC);
								BgL_auxz00_3172 = ((BgL_letzd2funzd2_bglt) BgL_nodez00_2557);
							}
						else
							{	/* Globalize/new_body.scm 279 */
								bool_t BgL_test1994z00_3178;

								{	/* Globalize/new_body.scm 279 */
									long BgL_arg1744z00_2655;

									{	/* Globalize/new_body.scm 279 */
										BgL_sfunz00_bglt BgL_oz00_2656;

										BgL_oz00_2656 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_obindingsz00_2653))))))->
												BgL_valuez00));
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3185;

											{
												obj_t BgL_auxz00_3186;

												{	/* Globalize/new_body.scm 279 */
													BgL_objectz00_bglt BgL_tmpz00_3187;

													BgL_tmpz00_3187 =
														((BgL_objectz00_bglt) BgL_oz00_2656);
													BgL_auxz00_3186 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3187);
												}
												BgL_auxz00_3185 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3186);
											}
											BgL_arg1744z00_2655 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3185))->
												BgL_bmarkz00);
									}}
									BgL_test1994z00_3178 =
										(BgL_arg1744z00_2655 ==
										BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
								}
								if (BgL_test1994z00_3178)
									{	/* Globalize/new_body.scm 279 */
										{	/* Globalize/new_body.scm 286 */
											bool_t BgL_test1995z00_3193;

											{	/* Globalize/new_body.scm 287 */
												obj_t BgL_arg1697z00_2657;

												{	/* Globalize/new_body.scm 287 */
													BgL_sfunz00_bglt BgL_oz00_2658;

													BgL_oz00_2658 =
														((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_obindingsz00_2653))))))->
															BgL_valuez00));
													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3200;

														{
															obj_t BgL_auxz00_3201;

															{	/* Globalize/new_body.scm 287 */
																BgL_objectz00_bglt BgL_tmpz00_3202;

																BgL_tmpz00_3202 =
																	((BgL_objectz00_bglt) BgL_oz00_2658);
																BgL_auxz00_3201 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3202);
															}
															BgL_auxz00_3200 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3201);
														}
														BgL_arg1697z00_2657 =
															(((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_3200))->BgL_pluggedzd2inzd2);
													}
												}
												BgL_test1995z00_3193 =
													(BgL_currentz00_2559 == BgL_arg1697z00_2657);
											}
											if (BgL_test1995z00_3193)
												{	/* Globalize/new_body.scm 289 */
													obj_t BgL_arg1688z00_2659;
													obj_t BgL_arg1692z00_2660;

													BgL_arg1688z00_2659 =
														CDR(((obj_t) BgL_obindingsz00_2653));
													{	/* Globalize/new_body.scm 289 */
														obj_t BgL_arg1695z00_2661;

														BgL_arg1695z00_2661 =
															CAR(((obj_t) BgL_obindingsz00_2653));
														BgL_arg1692z00_2660 =
															MAKE_YOUNG_PAIR(BgL_arg1695z00_2661,
															BgL_nbindingsz00_2654);
													}
													{
														obj_t BgL_nbindingsz00_3214;
														obj_t BgL_obindingsz00_3213;

														BgL_obindingsz00_3213 = BgL_arg1688z00_2659;
														BgL_nbindingsz00_3214 = BgL_arg1692z00_2660;
														BgL_nbindingsz00_2654 = BgL_nbindingsz00_3214;
														BgL_obindingsz00_2653 = BgL_obindingsz00_3213;
														goto BgL_liipz00_2652;
													}
												}
											else
												{	/* Globalize/new_body.scm 291 */
													obj_t BgL_arg1696z00_2662;

													BgL_arg1696z00_2662 =
														CDR(((obj_t) BgL_obindingsz00_2653));
													{
														obj_t BgL_obindingsz00_3217;

														BgL_obindingsz00_3217 = BgL_arg1696z00_2662;
														BgL_obindingsz00_2653 = BgL_obindingsz00_3217;
														goto BgL_liipz00_2652;
													}
												}
										}
									}
								else
									{	/* Globalize/new_body.scm 293 */
										bool_t BgL_test1996z00_3218;

										{	/* Globalize/new_body.scm 293 */
											obj_t BgL_arg1743z00_2663;

											BgL_arg1743z00_2663 =
												CAR(((obj_t) BgL_obindingsz00_2653));
											BgL_test1996z00_3218 =
												BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75
												(BgL_arg1743z00_2663, BgL_ownerz00_2558);
										}
										if (BgL_test1996z00_3218)
											{	/* Globalize/new_body.scm 293 */
												{	/* Globalize/new_body.scm 299 */
													BgL_valuez00_bglt BgL_arg1711z00_2664;

													BgL_arg1711z00_2664 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_obindingsz00_2653))))))->
														BgL_valuez00);
													{	/* Globalize/new_body.scm 299 */
														long BgL_vz00_2665;

														BgL_vz00_2665 =
															BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75;
														{
															BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3227;

															{
																obj_t BgL_auxz00_3228;

																{	/* Globalize/new_body.scm 299 */
																	BgL_objectz00_bglt BgL_tmpz00_3229;

																	BgL_tmpz00_3229 =
																		((BgL_objectz00_bglt)
																		((BgL_sfunz00_bglt) BgL_arg1711z00_2664));
																	BgL_auxz00_3228 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3229);
																}
																BgL_auxz00_3227 =
																	((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3228);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_3227))->BgL_bmarkz00) =
																((long) BgL_vz00_2665), BUNSPEC);
												}}}
												{	/* Globalize/new_body.scm 301 */
													BgL_valuez00_bglt BgL_arg1719z00_2666;

													BgL_arg1719z00_2666 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_obindingsz00_2653))))))->
														BgL_valuez00);
													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3240;

														{
															obj_t BgL_auxz00_3241;

															{	/* Globalize/new_body.scm 301 */
																BgL_objectz00_bglt BgL_tmpz00_3242;

																BgL_tmpz00_3242 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_arg1719z00_2666));
																BgL_auxz00_3241 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3242);
															}
															BgL_auxz00_3240 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3241);
														}
														((((BgL_sfunzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3240))->
																BgL_pluggedzd2inzd2) =
															((obj_t) BgL_currentz00_2559), BUNSPEC);
												}}
												{	/* Globalize/new_body.scm 302 */
													BgL_valuez00_bglt BgL_funz00_2667;

													BgL_funz00_2667 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_obindingsz00_2653))))))->
														BgL_valuez00);
													{	/* Globalize/new_body.scm 302 */
														obj_t BgL_bodz00_2668;

														BgL_bodz00_2668 =
															(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_funz00_2667)))->
															BgL_bodyz00);
														{	/* Globalize/new_body.scm 303 */

															{	/* Globalize/new_body.scm 304 */
																BgL_nodez00_bglt BgL_arg1726z00_2669;

																{	/* Globalize/new_body.scm 304 */
																	obj_t BgL_arg1727z00_2670;

																	BgL_arg1727z00_2670 =
																		CAR(((obj_t) BgL_obindingsz00_2653));
																	BgL_arg1726z00_2669 =
																		BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
																		((BgL_nodez00_bglt) BgL_bodz00_2668),
																		BgL_ownerz00_2558, BgL_arg1727z00_2670);
																}
																((((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_funz00_2667)))->
																		BgL_bodyz00) =
																	((obj_t) ((obj_t) BgL_arg1726z00_2669)),
																	BUNSPEC);
															}
															{	/* Globalize/new_body.scm 305 */
																obj_t BgL_arg1728z00_2671;
																obj_t BgL_arg1729z00_2672;

																BgL_arg1728z00_2671 =
																	CDR(((obj_t) BgL_obindingsz00_2653));
																{	/* Globalize/new_body.scm 306 */
																	obj_t BgL_arg1731z00_2673;

																	BgL_arg1731z00_2673 =
																		CAR(((obj_t) BgL_obindingsz00_2653));
																	BgL_arg1729z00_2672 =
																		MAKE_YOUNG_PAIR(BgL_arg1731z00_2673,
																		BgL_nbindingsz00_2654);
																}
																{
																	obj_t BgL_nbindingsz00_3268;
																	obj_t BgL_obindingsz00_3267;

																	BgL_obindingsz00_3267 = BgL_arg1728z00_2671;
																	BgL_nbindingsz00_3268 = BgL_arg1729z00_2672;
																	BgL_nbindingsz00_2654 = BgL_nbindingsz00_3268;
																	BgL_obindingsz00_2653 = BgL_obindingsz00_3267;
																	goto BgL_liipz00_2652;
																}
															}
														}
													}
												}
											}
										else
											{	/* Globalize/new_body.scm 307 */
												bool_t BgL_test1997z00_3269;

												{	/* Globalize/new_body.scm 307 */
													BgL_localz00_bglt BgL_oz00_2674;

													BgL_oz00_2674 =
														((BgL_localz00_bglt)
														CAR(((obj_t) BgL_obindingsz00_2653)));
													{
														BgL_localzf2ginfozf2_bglt BgL_auxz00_3273;

														{
															obj_t BgL_auxz00_3274;

															{	/* Globalize/new_body.scm 307 */
																BgL_objectz00_bglt BgL_tmpz00_3275;

																BgL_tmpz00_3275 =
																	((BgL_objectz00_bglt) BgL_oz00_2674);
																BgL_auxz00_3274 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3275);
															}
															BgL_auxz00_3273 =
																((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3274);
														}
														BgL_test1997z00_3269 =
															(((BgL_localzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_3273))->BgL_escapezf3zf3);
													}
												}
												if (BgL_test1997z00_3269)
													{	/* Globalize/new_body.scm 307 */
														{	/* Globalize/new_body.scm 311 */
															obj_t BgL_arg1738z00_2675;
															obj_t BgL_arg1739z00_2676;

															BgL_arg1738z00_2675 =
																CDR(((obj_t) BgL_obindingsz00_2653));
															{	/* Globalize/new_body.scm 312 */
																obj_t BgL_arg1740z00_2677;

																BgL_arg1740z00_2677 =
																	CAR(((obj_t) BgL_obindingsz00_2653));
																BgL_arg1739z00_2676 =
																	MAKE_YOUNG_PAIR(BgL_arg1740z00_2677,
																	BgL_nbindingsz00_2654);
															}
															{
																obj_t BgL_nbindingsz00_3286;
																obj_t BgL_obindingsz00_3285;

																BgL_obindingsz00_3285 = BgL_arg1738z00_2675;
																BgL_nbindingsz00_3286 = BgL_arg1739z00_2676;
																BgL_nbindingsz00_2654 = BgL_nbindingsz00_3286;
																BgL_obindingsz00_2653 = BgL_obindingsz00_3285;
																goto BgL_liipz00_2652;
															}
														}
													}
												else
													{	/* Globalize/new_body.scm 307 */
														{	/* Globalize/new_body.scm 317 */
															obj_t BgL_arg1741z00_2678;

															BgL_arg1741z00_2678 =
																CDR(((obj_t) BgL_obindingsz00_2653));
															{
																obj_t BgL_obindingsz00_3289;

																BgL_obindingsz00_3289 = BgL_arg1741z00_2678;
																BgL_obindingsz00_2653 = BgL_obindingsz00_3289;
																goto BgL_liipz00_2652;
															}
														}
													}
											}
									}
							}
						return ((BgL_nodez00_bglt) BgL_auxz00_3172);
					}
				}
			}
		}

	}



/* &rem!-switch1311 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2switch1311za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2560, obj_t BgL_nodez00_2561, obj_t BgL_ownerz00_2562,
		obj_t BgL_currentz00_2563)
	{
		{	/* Globalize/new_body.scm 259 */
			{
				BgL_nodez00_bglt BgL_auxz00_3291;

				{	/* Globalize/new_body.scm 261 */
					BgL_nodez00_bglt BgL_arg1639z00_2681;

					BgL_arg1639z00_2681 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2561)))->BgL_testz00);
					BgL_auxz00_3291 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1639z00_2681,
						BgL_ownerz00_2562, BgL_currentz00_2563);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2561)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3291), BUNSPEC);
			}
			{	/* Globalize/new_body.scm 262 */
				obj_t BgL_g1278z00_2682;

				BgL_g1278z00_2682 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2561)))->BgL_clausesz00);
				{
					obj_t BgL_l1276z00_2684;

					BgL_l1276z00_2684 = BgL_g1278z00_2682;
				BgL_zc3z04anonymousza31640ze3z87_2683:
					if (PAIRP(BgL_l1276z00_2684))
						{	/* Globalize/new_body.scm 262 */
							{	/* Globalize/new_body.scm 263 */
								obj_t BgL_clausez00_2685;

								BgL_clausez00_2685 = CAR(BgL_l1276z00_2684);
								{	/* Globalize/new_body.scm 263 */
									BgL_nodez00_bglt BgL_arg1644z00_2686;

									{	/* Globalize/new_body.scm 263 */
										obj_t BgL_arg1652z00_2687;

										BgL_arg1652z00_2687 = CDR(((obj_t) BgL_clausez00_2685));
										BgL_arg1644z00_2686 =
											BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
											((BgL_nodez00_bglt) BgL_arg1652z00_2687),
											BgL_ownerz00_2562, BgL_currentz00_2563);
									}
									{	/* Globalize/new_body.scm 263 */
										obj_t BgL_auxz00_3308;
										obj_t BgL_tmpz00_3306;

										BgL_auxz00_3308 = ((obj_t) BgL_arg1644z00_2686);
										BgL_tmpz00_3306 = ((obj_t) BgL_clausez00_2685);
										SET_CDR(BgL_tmpz00_3306, BgL_auxz00_3308);
									}
								}
							}
							{
								obj_t BgL_l1276z00_3311;

								BgL_l1276z00_3311 = CDR(BgL_l1276z00_2684);
								BgL_l1276z00_2684 = BgL_l1276z00_3311;
								goto BgL_zc3z04anonymousza31640ze3z87_2683;
							}
						}
					else
						{	/* Globalize/new_body.scm 262 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2561));
		}

	}



/* &rem!-fail1309 */
	BgL_nodez00_bglt BGl_z62remz12zd2fail1309za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2564, obj_t BgL_nodez00_2565, obj_t BgL_ownerz00_2566,
		obj_t BgL_currentz00_2567)
	{
		{	/* Globalize/new_body.scm 249 */
			{
				BgL_nodez00_bglt BgL_auxz00_3315;

				{	/* Globalize/new_body.scm 251 */
					BgL_nodez00_bglt BgL_arg1627z00_2689;

					BgL_arg1627z00_2689 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_procz00);
					BgL_auxz00_3315 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1627z00_2689,
						BgL_ownerz00_2566, BgL_currentz00_2567);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3315), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3321;

				{	/* Globalize/new_body.scm 252 */
					BgL_nodez00_bglt BgL_arg1631z00_2690;

					BgL_arg1631z00_2690 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_msgz00);
					BgL_auxz00_3321 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1631z00_2690,
						BgL_ownerz00_2566, BgL_currentz00_2567);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3321), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3327;

				{	/* Globalize/new_body.scm 253 */
					BgL_nodez00_bglt BgL_arg1634z00_2691;

					BgL_arg1634z00_2691 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_objz00);
					BgL_auxz00_3327 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1634z00_2691,
						BgL_ownerz00_2566, BgL_currentz00_2567);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2565)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3327), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2565));
		}

	}



/* &rem!-conditional1307 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2conditional1307za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2568, obj_t BgL_nodez00_2569, obj_t BgL_ownerz00_2570,
		obj_t BgL_currentz00_2571)
	{
		{	/* Globalize/new_body.scm 239 */
			{
				BgL_nodez00_bglt BgL_auxz00_3335;

				{	/* Globalize/new_body.scm 241 */
					BgL_nodez00_bglt BgL_arg1613z00_2693;

					BgL_arg1613z00_2693 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_testz00);
					BgL_auxz00_3335 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1613z00_2693,
						BgL_ownerz00_2570, BgL_currentz00_2571);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3335), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3341;

				{	/* Globalize/new_body.scm 242 */
					BgL_nodez00_bglt BgL_arg1624z00_2694;

					BgL_arg1624z00_2694 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_truez00);
					BgL_auxz00_3341 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1624z00_2694,
						BgL_ownerz00_2570, BgL_currentz00_2571);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3341), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3347;

				{	/* Globalize/new_body.scm 243 */
					BgL_nodez00_bglt BgL_arg1626z00_2695;

					BgL_arg1626z00_2695 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_falsez00);
					BgL_auxz00_3347 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1626z00_2695,
						BgL_ownerz00_2570, BgL_currentz00_2571);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2569)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3347), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2569));
		}

	}



/* &rem!-setq1305 */
	BgL_nodez00_bglt BGl_z62remz12zd2setq1305za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2572, obj_t BgL_nodez00_2573, obj_t BgL_ownerz00_2574,
		obj_t BgL_currentz00_2575)
	{
		{	/* Globalize/new_body.scm 231 */
			{
				BgL_nodez00_bglt BgL_auxz00_3355;

				{	/* Globalize/new_body.scm 233 */
					BgL_nodez00_bglt BgL_arg1612z00_2697;

					BgL_arg1612z00_2697 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2573)))->BgL_valuez00);
					BgL_auxz00_3355 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1612z00_2697,
						BgL_ownerz00_2574, BgL_currentz00_2575);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2573)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3355), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2573));
		}

	}



/* &rem!-cast1303 */
	BgL_nodez00_bglt BGl_z62remz12zd2cast1303za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2576, obj_t BgL_nodez00_2577, obj_t BgL_ownerz00_2578,
		obj_t BgL_currentz00_2579)
	{
		{	/* Globalize/new_body.scm 223 */
			BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2577)))->BgL_argz00),
				BgL_ownerz00_2578, BgL_currentz00_2579);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2577));
		}

	}



/* &rem!-extern1301 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2extern1301za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2580, obj_t BgL_nodez00_2581, obj_t BgL_ownerz00_2582,
		obj_t BgL_currentz00_2583)
	{
		{	/* Globalize/new_body.scm 215 */
			BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2581)))->BgL_exprza2za2),
				BgL_ownerz00_2582, BgL_currentz00_2583);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2581));
		}

	}



/* &rem!-funcall1299 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2funcall1299za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2584, obj_t BgL_nodez00_2585, obj_t BgL_ownerz00_2586,
		obj_t BgL_currentz00_2587)
	{
		{	/* Globalize/new_body.scm 206 */
			{
				BgL_nodez00_bglt BgL_auxz00_3373;

				{	/* Globalize/new_body.scm 208 */
					BgL_nodez00_bglt BgL_arg1604z00_2701;

					BgL_arg1604z00_2701 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2585)))->BgL_funz00);
					BgL_auxz00_3373 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1604z00_2701,
						BgL_ownerz00_2586, BgL_currentz00_2587);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2585)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3373), BUNSPEC);
			}
			BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2585)))->BgL_argsz00),
				BgL_ownerz00_2586, BgL_currentz00_2587);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2585));
		}

	}



/* &rem!-app-ly1297 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2appzd2ly1297z70zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2588, obj_t BgL_nodez00_2589, obj_t BgL_ownerz00_2590,
		obj_t BgL_currentz00_2591)
	{
		{	/* Globalize/new_body.scm 197 */
			{
				BgL_nodez00_bglt BgL_auxz00_3384;

				{	/* Globalize/new_body.scm 199 */
					BgL_nodez00_bglt BgL_arg1597z00_2703;

					BgL_arg1597z00_2703 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2589)))->BgL_funz00);
					BgL_auxz00_3384 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1597z00_2703,
						BgL_ownerz00_2590, BgL_currentz00_2591);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2589)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3384), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3390;

				{	/* Globalize/new_body.scm 200 */
					BgL_nodez00_bglt BgL_arg1599z00_2704;

					BgL_arg1599z00_2704 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2589)))->BgL_argz00);
					BgL_auxz00_3390 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1599z00_2704,
						BgL_ownerz00_2590, BgL_currentz00_2591);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2589)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3390), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2589));
		}

	}



/* &rem!-app1295 */
	BgL_nodez00_bglt BGl_z62remz12zd2app1295za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2592, obj_t BgL_nodez00_2593, obj_t BgL_ownerz00_2594,
		obj_t BgL_currentz00_2595)
	{
		{	/* Globalize/new_body.scm 189 */
			BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2593)))->BgL_argsz00),
				BgL_ownerz00_2594, BgL_currentz00_2595);
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2593));
		}

	}



/* &rem!-sync1293 */
	BgL_nodez00_bglt BGl_z62remz12zd2sync1293za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2596, obj_t BgL_nodez00_2597, obj_t BgL_ownerz00_2598,
		obj_t BgL_currentz00_2599)
	{
		{	/* Globalize/new_body.scm 179 */
			{
				BgL_nodez00_bglt BgL_auxz00_3403;

				{	/* Globalize/new_body.scm 181 */
					BgL_nodez00_bglt BgL_arg1588z00_2707;

					BgL_arg1588z00_2707 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_mutexz00);
					BgL_auxz00_3403 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1588z00_2707,
						BgL_ownerz00_2598, BgL_currentz00_2599);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3403), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3409;

				{	/* Globalize/new_body.scm 182 */
					BgL_nodez00_bglt BgL_arg1589z00_2708;

					BgL_arg1589z00_2708 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_prelockz00);
					BgL_auxz00_3409 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1589z00_2708,
						BgL_ownerz00_2598, BgL_currentz00_2599);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3409), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3415;

				{	/* Globalize/new_body.scm 183 */
					BgL_nodez00_bglt BgL_arg1592z00_2709;

					BgL_arg1592z00_2709 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_bodyz00);
					BgL_auxz00_3415 =
						BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_arg1592z00_2709,
						BgL_ownerz00_2598, BgL_currentz00_2599);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2597)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3415), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2597));
		}

	}



/* &rem!-sequence1291 */
	BgL_nodez00_bglt
		BGl_z62remz12zd2sequence1291za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2600, obj_t BgL_nodez00_2601, obj_t BgL_ownerz00_2602,
		obj_t BgL_currentz00_2603)
	{
		{	/* Globalize/new_body.scm 171 */
			BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2601)))->BgL_nodesz00),
				BgL_ownerz00_2602, BgL_currentz00_2603);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2601));
		}

	}



/* &rem!-var1289 */
	BgL_nodez00_bglt BGl_z62remz12zd2var1289za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2604, obj_t BgL_nodez00_2605, obj_t BgL_ownerz00_2606,
		obj_t BgL_currentz00_2607)
	{
		{	/* Globalize/new_body.scm 165 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2605));
		}

	}



/* &rem!-kwote1287 */
	BgL_nodez00_bglt BGl_z62remz12zd2kwote1287za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2608, obj_t BgL_nodez00_2609, obj_t BgL_ownerz00_2610,
		obj_t BgL_currentz00_2611)
	{
		{	/* Globalize/new_body.scm 159 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2609));
		}

	}



/* &rem!-atom1285 */
	BgL_nodez00_bglt BGl_z62remz12zd2atom1285za2zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2612, obj_t BgL_nodez00_2613, obj_t BgL_ownerz00_2614,
		obj_t BgL_currentz00_2615)
	{
		{	/* Globalize/new_body.scm 153 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2613));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75()
	{
		{	/* Globalize/new_body.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string1940z00zzglobaliza7e_newzd2bodyz75));
		}

	}

#ifdef __cplusplus
}
#endif
