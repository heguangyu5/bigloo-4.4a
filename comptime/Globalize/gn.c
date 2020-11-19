/*===========================================================================*/
/*   (Globalize/gn.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/gn.scm) */
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


	static obj_t BGl_z62Ezd2cast1283zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62Ezd2extern1281zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62Ezd2setq1285zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62Ezd2conditional1287zb0zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_gnza7();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62Ezd2funcall1279zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62Ezd2setzd2exzd2it1297zb0zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_gnza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_gnza7();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62Ezd2app1275zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62E1259z62zzglobaliza7e_gnza7(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62Gnz12z70zzglobaliza7e_gnza7(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_savezd2appz12zc0zzglobaliza7e_gnza7(obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62Ezd2atom1262zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_gnza7();
	static obj_t BGl_Eza2za2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62Ezd2letzd2fun1293z62zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00;
	extern obj_t BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62Ezd2kwote1264zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7 = BUNSPEC;
	static obj_t BGl_z62Ezd2switch1291zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_z62Ezd2boxzd2ref1303z62zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62Ezd2sync1273zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62Ezd2fail1289zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_gnza7();
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_gnza7();
	static obj_t BGl_z62Ezd2boxzd2setz121305z70zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62Ezd2var1266zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62Ezd2makezd2box1301z62zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_savezd2funz12zc0zzglobaliza7e_gnza7(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_z62Ezd2letzd2var1295z62zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62Ezd2closure1268zb0zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_Ez00zzglobaliza7e_gnza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	extern obj_t BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_z62Ezd2jumpzd2exzd2it1299zb0zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_gnza7();
	static obj_t BGl_z62Ezd2sequence1270zb0zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7();
	BGL_EXPORTED_DECL obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62Ez62zzglobaliza7e_gnza7(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62Ezd2appzd2ly1277z62zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1850z00zzglobaliza7e_gnza7,
		BgL_bgl_string1850za700za7za7g1880za7, "E1259", 5);
	      DEFINE_STRING(BGl_string1851z00zzglobaliza7e_gnza7,
		BgL_bgl_string1851za700za7za7g1881za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1853z00zzglobaliza7e_gnza7,
		BgL_bgl_string1853za700za7za7g1882za7, "E", 1);
	      DEFINE_STRING(BGl_string1875z00zzglobaliza7e_gnza7,
		BgL_bgl_string1875za700za7za7g1883za7, "globalize_gn", 12);
	      DEFINE_STRING(BGl_string1876z00zzglobaliza7e_gnza7,
		BgL_bgl_string1876za700za7za7g1884za7, "E1259 done ", 11);
	      DEFINE_STATIC_BGL_GENERIC(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
		BgL_bgl_za762eza762za7za7globali1885z00, BGl_z62Ez62zzglobaliza7e_gnza7, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1849z00zzglobaliza7e_gnza7,
		BgL_bgl_za762e1259za762za7za7glo1886z00, BGl_z62E1259z62zzglobaliza7e_gnza7,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1852z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2atom1262za71887za7,
		BGl_z62Ezd2atom1262zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1854z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2kwote12641888z00,
		BGl_z62Ezd2kwote1264zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1855z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2var1266za7b1889za7,
		BGl_z62Ezd2var1266zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1856z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2closure121890z00,
		BGl_z62Ezd2closure1268zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1857z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2sequence11891z00,
		BGl_z62Ezd2sequence1270zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1858z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2sync1273za71892za7,
		BGl_z62Ezd2sync1273zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1859z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2app1275za7b1893za7,
		BGl_z62Ezd2app1275zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1860z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2appza7d2ly11894za7,
		BGl_z62Ezd2appzd2ly1277z62zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2funcall121895z00,
		BGl_z62Ezd2funcall1279zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1862z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2extern1281896z00,
		BGl_z62Ezd2extern1281zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1863z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2cast1283za71897za7,
		BGl_z62Ezd2cast1283zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1864z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2setq1285za71898za7,
		BGl_z62Ezd2setq1285zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1865z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2condition1899z00,
		BGl_z62Ezd2conditional1287zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1866z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2fail1289za71900za7,
		BGl_z62Ezd2fail1289zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2switch1291901z00,
		BGl_z62Ezd2switch1291zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1868z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2letza7d2fun1902za7,
		BGl_z62Ezd2letzd2fun1293z62zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Gnz12zd2envzc0zzglobaliza7e_gnza7,
		BgL_bgl_za762gnza712za770za7za7glo1903za7,
		BGl_z62Gnz12z70zzglobaliza7e_gnza7, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2letza7d2var1904za7,
		BGl_z62Ezd2letzd2var1295z62zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1870z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2setza7d2exza71905z00,
		BGl_z62Ezd2setzd2exzd2it1297zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2jumpza7d2ex1906za7,
		BGl_z62Ezd2jumpzd2exzd2it1299zb0zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2makeza7d2bo1907za7,
		BGl_z62Ezd2makezd2box1301z62zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2boxza7d2ref1908za7,
		BGl_z62Ezd2boxzd2ref1303z62zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzglobaliza7e_gnza7,
		BgL_bgl_za762eza7d2boxza7d2set1909za7,
		BGl_z62Ezd2boxzd2setz121305z70zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long
		BgL_checksumz00_2621, char *BgL_fromz00_2622)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_gnza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7();
					BGl_cnstzd2initzd2zzglobaliza7e_gnza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7();
					BGl_genericzd2initzd2zzglobaliza7e_gnza7();
					BGl_methodzd2initzd2zzglobaliza7e_gnza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_gnza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_gn");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_gn");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_gn");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_gn");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_gn");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			{	/* Globalize/gn.scm 23 */
				obj_t BgL_cportz00_2521;

				{	/* Globalize/gn.scm 23 */
					obj_t BgL_stringz00_2529;

					BgL_stringz00_2529 = BGl_string1876z00zzglobaliza7e_gnza7;
					{	/* Globalize/gn.scm 23 */
						obj_t BgL_startz00_2530;

						BgL_startz00_2530 = BINT(((long) 0));
						{	/* Globalize/gn.scm 23 */
							obj_t BgL_endz00_2531;

							BgL_endz00_2531 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2529)));
							{	/* Globalize/gn.scm 23 */

								BgL_cportz00_2521 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2529, BgL_startz00_2530, BgL_endz00_2531);
				}}}}
				{
					long BgL_iz00_2522;

					BgL_iz00_2522 = ((long) 1);
				BgL_loopz00_2523:
					if ((BgL_iz00_2522 == ((long) -1)))
						{	/* Globalize/gn.scm 23 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/gn.scm 23 */
							{	/* Globalize/gn.scm 23 */
								obj_t BgL_arg1878z00_2525;

								{	/* Globalize/gn.scm 23 */

									{	/* Globalize/gn.scm 23 */
										obj_t BgL_locationz00_2527;

										BgL_locationz00_2527 = BBOOL(((bool_t) 0));
										{	/* Globalize/gn.scm 23 */

											BgL_arg1878z00_2525 =
												BGl_readz00zz__readerz00(BgL_cportz00_2521,
												BgL_locationz00_2527);
										}
									}
								}
								{	/* Globalize/gn.scm 23 */
									int BgL_tmpz00_2651;

									BgL_tmpz00_2651 = (int) (BgL_iz00_2522);
									CNST_TABLE_SET(BgL_tmpz00_2651, BgL_arg1878z00_2525);
							}}
							{	/* Globalize/gn.scm 23 */
								int BgL_auxz00_2528;

								BgL_auxz00_2528 = (int) ((BgL_iz00_2522 - ((long) 1)));
								{
									long BgL_iz00_2656;

									BgL_iz00_2656 = (long) (BgL_auxz00_2528);
									BgL_iz00_2522 = BgL_iz00_2656;
									goto BgL_loopz00_2523;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_gnza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1740;

				BgL_headz00_1740 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1741;
					obj_t BgL_tailz00_1742;

					BgL_prevz00_1741 = BgL_headz00_1740;
					BgL_tailz00_1742 = BgL_l1z00_1;
				BgL_loopz00_1743:
					if (PAIRP(BgL_tailz00_1742))
						{
							obj_t BgL_newzd2prevzd2_1745;

							BgL_newzd2prevzd2_1745 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1742), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1741, BgL_newzd2prevzd2_1745);
							{
								obj_t BgL_tailz00_2666;
								obj_t BgL_prevz00_2665;

								BgL_prevz00_2665 = BgL_newzd2prevzd2_1745;
								BgL_tailz00_2666 = CDR(BgL_tailz00_1742);
								BgL_tailz00_1742 = BgL_tailz00_2666;
								BgL_prevz00_1741 = BgL_prevz00_2665;
								goto BgL_loopz00_1743;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1740);
				}
			}
		}

	}



/* Gn! */
	BGL_EXPORTED_DEF obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t BgL_argsz00_3,
		BgL_nodez00_bglt BgL_nodez00_4, BgL_variablez00_bglt BgL_callerz00_5,
		obj_t BgL_gz00_6)
	{
		{	/* Globalize/gn.scm 41 */
			BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 =
				BGl_Ez00zzglobaliza7e_gnza7(BgL_nodez00_4, BgL_callerz00_5, BgL_gz00_6);
			{
				obj_t BgL_gz00_1750;
				obj_t BgL_g1z00_1751;

				BgL_gz00_1750 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
				BgL_g1z00_1751 = BNIL;
			BgL_zc3z04anonymousza31309ze3z87_1752:
				if (NULLP(BgL_gz00_1750))
					{	/* Globalize/gn.scm 45 */
						BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 =
							BGl_appendzd221011zd2zzglobaliza7e_gnza7
							(BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00, BgL_g1z00_1751);
						return (BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 =
							BgL_g1z00_1751, BUNSPEC);
					}
				else
					{	/* Globalize/gn.scm 49 */
						obj_t BgL_newzd2gzd2_1754;

						{	/* Globalize/gn.scm 49 */
							obj_t BgL_arg1315z00_1758;

							BgL_arg1315z00_1758 = CAR(((obj_t) BgL_gz00_1750));
							BgL_newzd2gzd2_1754 =
								BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(BgL_arg1315z00_1758);
						}
						{	/* Globalize/gn.scm 50 */
							obj_t BgL_arg1311z00_1755;
							obj_t BgL_arg1312z00_1756;

							{	/* Globalize/gn.scm 50 */
								obj_t BgL_arg1314z00_1757;

								BgL_arg1314z00_1757 = CDR(((obj_t) BgL_gz00_1750));
								BgL_arg1311z00_1755 =
									BGl_appendzd221011zd2zzglobaliza7e_gnza7(BgL_newzd2gzd2_1754,
									BgL_arg1314z00_1757);
							}
							BgL_arg1312z00_1756 =
								BGl_appendzd221011zd2zzglobaliza7e_gnza7(BgL_newzd2gzd2_1754,
								BgL_g1z00_1751);
							{
								obj_t BgL_g1z00_2681;
								obj_t BgL_gz00_2680;

								BgL_gz00_2680 = BgL_arg1311z00_1755;
								BgL_g1z00_2681 = BgL_arg1312z00_1756;
								BgL_g1z00_1751 = BgL_g1z00_2681;
								BgL_gz00_1750 = BgL_gz00_2680;
								goto BgL_zc3z04anonymousza31309ze3z87_1752;
							}
						}
					}
			}
		}

	}



/* &Gn! */
	obj_t BGl_z62Gnz12z70zzglobaliza7e_gnza7(obj_t BgL_envz00_2397,
		obj_t BgL_argsz00_2398, obj_t BgL_nodez00_2399, obj_t BgL_callerz00_2400,
		obj_t BgL_gz00_2401)
	{
		{	/* Globalize/gn.scm 41 */
			return
				BGl_Gnz12z12zzglobaliza7e_gnza7(BgL_argsz00_2398,
				((BgL_nodez00_bglt) BgL_nodez00_2399),
				((BgL_variablez00_bglt) BgL_callerz00_2400), BgL_gz00_2401);
		}

	}



/* E* */
	obj_t BGl_Eza2za2zzglobaliza7e_gnza7(obj_t BgL_nodeza2za2_76,
		obj_t BgL_callerz00_77, obj_t BgL_gz00_78)
	{
		{	/* Globalize/gn.scm 237 */
			{
				obj_t BgL_nodeza2za2_1761;
				obj_t BgL_gz00_1762;

				BgL_nodeza2za2_1761 = BgL_nodeza2za2_76;
				BgL_gz00_1762 = BgL_gz00_78;
			BgL_zc3z04anonymousza31316ze3z87_1763:
				if (NULLP(BgL_nodeza2za2_1761))
					{	/* Globalize/gn.scm 240 */
						return BgL_gz00_1762;
					}
				else
					{	/* Globalize/gn.scm 242 */
						obj_t BgL_arg1319z00_1765;
						obj_t BgL_arg1322z00_1766;

						BgL_arg1319z00_1765 = CDR(((obj_t) BgL_nodeza2za2_1761));
						{	/* Globalize/gn.scm 243 */
							obj_t BgL_arg1324z00_1767;

							BgL_arg1324z00_1767 = CAR(((obj_t) BgL_nodeza2za2_1761));
							BgL_arg1322z00_1766 =
								BGl_Ez00zzglobaliza7e_gnza7(
								((BgL_nodez00_bglt) BgL_arg1324z00_1767),
								((BgL_variablez00_bglt) BgL_callerz00_77), BgL_gz00_1762);
						}
						{
							obj_t BgL_gz00_2695;
							obj_t BgL_nodeza2za2_2694;

							BgL_nodeza2za2_2694 = BgL_arg1319z00_1765;
							BgL_gz00_2695 = BgL_arg1322z00_1766;
							BgL_gz00_1762 = BgL_gz00_2695;
							BgL_nodeza2za2_1761 = BgL_nodeza2za2_2694;
							goto BgL_zc3z04anonymousza31316ze3z87_1763;
						}
					}
			}
		}

	}



/* save-app! */
	obj_t BGl_savezd2appz12zc0zzglobaliza7e_gnza7(obj_t BgL_callerz00_79,
		BgL_variablez00_bglt BgL_calleez00_80)
	{
		{	/* Globalize/gn.scm 248 */
			{	/* Globalize/gn.scm 249 */
				bool_t BgL_test1915z00_2696;

				{	/* Globalize/gn.scm 249 */
					bool_t BgL_res1830z00_2250;

					BgL_res1830z00_2250 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_calleez00_80), BGl_globalz00zzast_varz00);
					BgL_test1915z00_2696 = BgL_res1830z00_2250;
				}
				if (BgL_test1915z00_2696)
					{	/* Globalize/gn.scm 249 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/gn.scm 251 */
						BgL_valuez00_bglt BgL_calleezd2infozd2_1770;

						BgL_calleezd2infozd2_1770 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_calleez00_80))))->BgL_valuez00);
						{	/* Globalize/gn.scm 252 */
							bool_t BgL_test1916z00_2703;

							{	/* Globalize/gn.scm 252 */
								obj_t BgL_arg1334z00_1778;

								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2704;

									{
										obj_t BgL_auxz00_2705;

										{	/* Globalize/gn.scm 252 */
											BgL_objectz00_bglt BgL_tmpz00_2706;

											BgL_tmpz00_2706 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_calleezd2infozd2_1770));
											BgL_auxz00_2705 = BGL_OBJECT_WIDENING(BgL_tmpz00_2706);
										}
										BgL_auxz00_2704 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2705);
									}
									BgL_arg1334z00_1778 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2704))->
										BgL_cfromz00);
								}
								BgL_test1916z00_2703 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_callerz00_79, BgL_arg1334z00_1778));
							}
							if (BgL_test1916z00_2703)
								{	/* Globalize/gn.scm 252 */
									BFALSE;
								}
							else
								{	/* Globalize/gn.scm 252 */
									{	/* Globalize/gn.scm 256 */
										obj_t BgL_arg1328z00_1773;

										{	/* Globalize/gn.scm 256 */
											obj_t BgL_arg1329z00_1774;

											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2714;

												{
													obj_t BgL_auxz00_2715;

													{	/* Globalize/gn.scm 256 */
														BgL_objectz00_bglt BgL_tmpz00_2716;

														BgL_tmpz00_2716 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_calleezd2infozd2_1770));
														BgL_auxz00_2715 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2716);
													}
													BgL_auxz00_2714 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2715);
												}
												BgL_arg1329z00_1774 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_2714))->BgL_cfromz00);
											}
											BgL_arg1328z00_1773 =
												MAKE_YOUNG_PAIR(BgL_callerz00_79, BgL_arg1329z00_1774);
										}
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2723;

											{
												obj_t BgL_auxz00_2724;

												{	/* Globalize/gn.scm 254 */
													BgL_objectz00_bglt BgL_tmpz00_2725;

													BgL_tmpz00_2725 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_calleezd2infozd2_1770));
													BgL_auxz00_2724 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2725);
												}
												BgL_auxz00_2723 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2724);
											}
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2723))->
													BgL_cfromz00) =
												((obj_t) BgL_arg1328z00_1773), BUNSPEC);
										}
									}
									{	/* Globalize/gn.scm 257 */
										BgL_valuez00_bglt BgL_callerzd2infozd2_1775;

										BgL_callerzd2infozd2_1775 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_callerz00_79)))->
											BgL_valuez00);
										{	/* Globalize/gn.scm 260 */
											obj_t BgL_arg1330z00_1776;

											{	/* Globalize/gn.scm 260 */
												obj_t BgL_arg1331z00_1777;

												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2733;

													{
														obj_t BgL_auxz00_2734;

														{	/* Globalize/gn.scm 260 */
															BgL_objectz00_bglt BgL_tmpz00_2735;

															BgL_tmpz00_2735 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_callerzd2infozd2_1775));
															BgL_auxz00_2734 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2735);
														}
														BgL_auxz00_2733 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2734);
													}
													BgL_arg1331z00_1777 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2733))->BgL_ctoz00);
												}
												BgL_arg1330z00_1776 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_calleez00_80), BgL_arg1331z00_1777);
											}
											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2743;

												{
													obj_t BgL_auxz00_2744;

													{	/* Globalize/gn.scm 258 */
														BgL_objectz00_bglt BgL_tmpz00_2745;

														BgL_tmpz00_2745 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_callerzd2infozd2_1775));
														BgL_auxz00_2744 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2745);
													}
													BgL_auxz00_2743 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2744);
												}
												((((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2743))->BgL_ctoz00) =
													((obj_t) BgL_arg1330z00_1776), BUNSPEC);
											}
										}
									}
								}
						}
						return CNST_TABLE_REF(((long) 0));
		}}}

	}



/* save-fun! */
	obj_t BGl_savezd2funz12zc0zzglobaliza7e_gnza7(BgL_variablez00_bglt
		BgL_callerz00_81, BgL_variablez00_bglt BgL_calleez00_82)
	{
		{	/* Globalize/gn.scm 267 */
			{	/* Globalize/gn.scm 268 */
				bool_t BgL_test1917z00_2752;

				{	/* Globalize/gn.scm 268 */
					bool_t BgL_test1918z00_2753;

					{	/* Globalize/gn.scm 268 */
						bool_t BgL_res1831z00_2263;

						BgL_res1831z00_2263 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_callerz00_81), BGl_globalz00zzast_varz00);
						BgL_test1918z00_2753 = BgL_res1831z00_2263;
					}
					if (BgL_test1918z00_2753)
						{	/* Globalize/gn.scm 268 */
							BgL_test1917z00_2752 = ((bool_t) 1);
						}
					else
						{	/* Globalize/gn.scm 268 */
							bool_t BgL_res1832z00_2264;

							BgL_res1832z00_2264 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_calleez00_82), BGl_globalz00zzast_varz00);
							BgL_test1917z00_2752 = BgL_res1832z00_2264;
						}
				}
				if (BgL_test1917z00_2752)
					{	/* Globalize/gn.scm 268 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/gn.scm 270 */
						BgL_valuez00_bglt BgL_callerzd2infozd2_1781;

						BgL_callerzd2infozd2_1781 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_callerz00_81))))->BgL_valuez00);
						{	/* Globalize/gn.scm 274 */
							bool_t BgL_test1919z00_2762;

							{	/* Globalize/gn.scm 274 */
								obj_t BgL_arg1346z00_1786;

								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2763;

									{
										obj_t BgL_auxz00_2764;

										{	/* Globalize/gn.scm 274 */
											BgL_objectz00_bglt BgL_tmpz00_2765;

											BgL_tmpz00_2765 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_callerzd2infozd2_1781));
											BgL_auxz00_2764 = BGL_OBJECT_WIDENING(BgL_tmpz00_2765);
										}
										BgL_auxz00_2763 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2764);
									}
									BgL_arg1346z00_1786 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2763))->
										BgL_efunctionsz00);
								}
								BgL_test1919z00_2762 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										((obj_t) BgL_calleez00_82), BgL_arg1346z00_1786));
							}
							if (BgL_test1919z00_2762)
								{	/* Globalize/gn.scm 274 */
									BFALSE;
								}
							else
								{	/* Globalize/gn.scm 276 */
									obj_t BgL_arg1344z00_1784;

									{	/* Globalize/gn.scm 276 */
										obj_t BgL_arg1345z00_1785;

										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2774;

											{
												obj_t BgL_auxz00_2775;

												{	/* Globalize/gn.scm 276 */
													BgL_objectz00_bglt BgL_tmpz00_2776;

													BgL_tmpz00_2776 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_callerzd2infozd2_1781));
													BgL_auxz00_2775 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2776);
												}
												BgL_auxz00_2774 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2775);
											}
											BgL_arg1345z00_1785 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2774))->
												BgL_efunctionsz00);
										}
										BgL_arg1344z00_1784 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_calleez00_82), BgL_arg1345z00_1785);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2784;

										{
											obj_t BgL_auxz00_2785;

											{	/* Globalize/gn.scm 275 */
												BgL_objectz00_bglt BgL_tmpz00_2786;

												BgL_tmpz00_2786 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_callerzd2infozd2_1781));
												BgL_auxz00_2785 = BGL_OBJECT_WIDENING(BgL_tmpz00_2786);
											}
											BgL_auxz00_2784 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2785);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2784))->
												BgL_efunctionsz00) =
											((obj_t) BgL_arg1344z00_1784), BUNSPEC);
									}
								}
						}
						return CNST_TABLE_REF(((long) 0));
		}}}

	}



/* G-from-cto */
	obj_t BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(obj_t BgL_localz00_83)
	{
		{	/* Globalize/gn.scm 282 */
			{	/* Globalize/gn.scm 283 */
				obj_t BgL_g1126z00_1788;

				{	/* Globalize/gn.scm 283 */
					BgL_sfunz00_bglt BgL_oz00_2273;

					BgL_oz00_2273 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_localz00_83))))->BgL_valuez00));
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2797;

						{
							obj_t BgL_auxz00_2798;

							{	/* Globalize/gn.scm 283 */
								BgL_objectz00_bglt BgL_tmpz00_2799;

								BgL_tmpz00_2799 = ((BgL_objectz00_bglt) BgL_oz00_2273);
								BgL_auxz00_2798 = BGL_OBJECT_WIDENING(BgL_tmpz00_2799);
							}
							BgL_auxz00_2797 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2798);
						}
						BgL_g1126z00_1788 =
							(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2797))->
							BgL_ctoz00);
				}}
				{
					obj_t BgL_ctoz00_1791;
					obj_t BgL_gz00_1792;

					BgL_ctoz00_1791 = BgL_g1126z00_1788;
					BgL_gz00_1792 = BNIL;
				BgL_zc3z04anonymousza31347ze3z87_1793:
					if (NULLP(BgL_ctoz00_1791))
						{	/* Globalize/gn.scm 286 */
							return BgL_gz00_1792;
						}
					else
						{	/* Globalize/gn.scm 288 */
							bool_t BgL_test1921z00_2806;

							{	/* Globalize/gn.scm 288 */
								BgL_sfunz00_bglt BgL_oz00_2278;

								BgL_oz00_2278 =
									((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt)
														CAR(((obj_t) BgL_ctoz00_1791))))))->BgL_valuez00));
								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2813;

									{
										obj_t BgL_auxz00_2814;

										{	/* Globalize/gn.scm 288 */
											BgL_objectz00_bglt BgL_tmpz00_2815;

											BgL_tmpz00_2815 = ((BgL_objectz00_bglt) BgL_oz00_2278);
											BgL_auxz00_2814 = BGL_OBJECT_WIDENING(BgL_tmpz00_2815);
										}
										BgL_auxz00_2813 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2814);
									}
									BgL_test1921z00_2806 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2813))->
										BgL_gzf3zf3);
								}
							}
							if (BgL_test1921z00_2806)
								{	/* Globalize/gn.scm 289 */
									obj_t BgL_arg1357z00_1798;

									BgL_arg1357z00_1798 = CDR(((obj_t) BgL_ctoz00_1791));
									{
										obj_t BgL_ctoz00_2822;

										BgL_ctoz00_2822 = BgL_arg1357z00_1798;
										BgL_ctoz00_1791 = BgL_ctoz00_2822;
										goto BgL_zc3z04anonymousza31347ze3z87_1793;
									}
								}
							else
								{	/* Globalize/gn.scm 288 */
									{	/* Globalize/gn.scm 291 */
										BgL_valuez00_bglt BgL_arg1360z00_1799;

										BgL_arg1360z00_1799 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(((obj_t) BgL_ctoz00_1791))))))->BgL_valuez00);
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2828;

											{
												obj_t BgL_auxz00_2829;

												{	/* Globalize/gn.scm 291 */
													BgL_objectz00_bglt BgL_tmpz00_2830;

													BgL_tmpz00_2830 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_arg1360z00_1799));
													BgL_auxz00_2829 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2830);
												}
												BgL_auxz00_2828 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2829);
											}
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2828))->
													BgL_gzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										}
									}
									{	/* Globalize/gn.scm 292 */
										obj_t BgL_arg1363z00_1801;
										obj_t BgL_arg1364z00_1802;

										BgL_arg1363z00_1801 = CDR(((obj_t) BgL_ctoz00_1791));
										{	/* Globalize/gn.scm 292 */
											obj_t BgL_arg1367z00_1803;

											BgL_arg1367z00_1803 = CAR(((obj_t) BgL_ctoz00_1791));
											BgL_arg1364z00_1802 =
												MAKE_YOUNG_PAIR(BgL_arg1367z00_1803, BgL_gz00_1792);
										}
										{
											obj_t BgL_gz00_2842;
											obj_t BgL_ctoz00_2841;

											BgL_ctoz00_2841 = BgL_arg1363z00_1801;
											BgL_gz00_2842 = BgL_arg1364z00_1802;
											BgL_gz00_1792 = BgL_gz00_2842;
											BgL_ctoz00_1791 = BgL_ctoz00_2841;
											goto BgL_zc3z04anonymousza31347ze3z87_1793;
										}
									}
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_proc1849z00zzglobaliza7e_gnza7,
				BGl_nodez00zzast_nodez00, BGl_string1850z00zzglobaliza7e_gnza7);
		}

	}



/* &E1259 */
	obj_t BGl_z62E1259z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2403,
		obj_t BgL_nodez00_2404, obj_t BgL_callerz00_2405, obj_t BgL_gz00_2406)
	{
		{	/* Globalize/gn.scm 56 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string1851z00zzglobaliza7e_gnza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2404)));
		}

	}



/* E */
	obj_t BGl_Ez00zzglobaliza7e_gnza7(BgL_nodez00_bglt BgL_nodez00_7,
		BgL_variablez00_bglt BgL_callerz00_8, obj_t BgL_gz00_9)
	{
		{	/* Globalize/gn.scm 56 */
			{	/* Globalize/gn.scm 56 */
				obj_t BgL_method1260z00_1814;

				{	/* Globalize/gn.scm 56 */
					obj_t BgL_res1844z00_2324;

					{	/* Globalize/gn.scm 56 */
						long BgL_objzd2classzd2numz00_2289;

						{	/* Globalize/gn.scm 56 */
							long BgL_res1834z00_2292;

							BgL_res1834z00_2292 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_7));
							BgL_objzd2classzd2numz00_2289 = BgL_res1834z00_2292;
						}
						{	/* Globalize/gn.scm 56 */
							obj_t BgL_arg1813z00_2290;

							BgL_arg1813z00_2290 =
								PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
								(int) (((long) 1)));
							{	/* Globalize/gn.scm 56 */
								int BgL_offsetz00_2294;

								BgL_offsetz00_2294 = (int) (BgL_objzd2classzd2numz00_2289);
								{	/* Globalize/gn.scm 56 */
									long BgL_offsetz00_2295;

									BgL_offsetz00_2295 =
										((long) (BgL_offsetz00_2294) - OBJECT_TYPE);
									{	/* Globalize/gn.scm 56 */
										long BgL_modz00_2296;

										BgL_modz00_2296 =
											(BgL_offsetz00_2295 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Globalize/gn.scm 56 */
											long BgL_restz00_2298;

											BgL_restz00_2298 =
												(BgL_offsetz00_2295 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Globalize/gn.scm 56 */

												{	/* Globalize/gn.scm 56 */
													obj_t BgL_bucketz00_2300;

													BgL_bucketz00_2300 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2290), BgL_modz00_2296);
													BgL_res1844z00_2324 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2300), BgL_restz00_2298);
					}}}}}}}}
					BgL_method1260z00_1814 = BgL_res1844z00_2324;
				}
				return
					PROCEDURE_ENTRY(BgL_method1260z00_1814) (BgL_method1260z00_1814,
					((obj_t) BgL_nodez00_7), ((obj_t) BgL_callerz00_8), BgL_gz00_9, BEOA);
			}
		}

	}



/* &E */
	obj_t BGl_z62Ez62zzglobaliza7e_gnza7(obj_t BgL_envz00_2407,
		obj_t BgL_nodez00_2408, obj_t BgL_callerz00_2409, obj_t BgL_gz00_2410)
	{
		{	/* Globalize/gn.scm 56 */
			return
				BGl_Ez00zzglobaliza7e_gnza7(
				((BgL_nodez00_bglt) BgL_nodez00_2408),
				((BgL_variablez00_bglt) BgL_callerz00_2409), BgL_gz00_2410);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_atomz00zzast_nodez00,
				BGl_proc1852z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_kwotez00zzast_nodez00,
				BGl_proc1854z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_varz00zzast_nodez00,
				BGl_proc1855z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_closurez00zzast_nodez00,
				BGl_proc1856z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_sequencez00zzast_nodez00,
				BGl_proc1857z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_syncz00zzast_nodez00,
				BGl_proc1858z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_appz00zzast_nodez00,
				BGl_proc1859z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1860z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_funcallz00zzast_nodez00,
				BGl_proc1861z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_externz00zzast_nodez00,
				BGl_proc1862z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_castz00zzast_nodez00,
				BGl_proc1863z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_setqz00zzast_nodez00,
				BGl_proc1864z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_conditionalz00zzast_nodez00,
				BGl_proc1865z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_failz00zzast_nodez00,
				BGl_proc1866z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_switchz00zzast_nodez00,
				BGl_proc1867z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1868z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1869z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1870z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1871z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1872z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1873z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1874z00zzglobaliza7e_gnza7,
				BGl_string1853z00zzglobaliza7e_gnza7);
		}

	}



/* &E-box-set!1305 */
	obj_t BGl_z62Ezd2boxzd2setz121305z70zzglobaliza7e_gnza7(obj_t BgL_envz00_2433,
		obj_t BgL_nodez00_2434, obj_t BgL_callerz00_2435, obj_t BgL_gz00_2436)
	{
		{	/* Globalize/gn.scm 230 */
			{	/* Globalize/gn.scm 232 */
				BgL_varz00_bglt BgL_arg1663z00_2537;
				obj_t BgL_arg1664z00_2538;

				BgL_arg1663z00_2537 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2434)))->BgL_varz00);
				{	/* Globalize/gn.scm 232 */
					BgL_nodez00_bglt BgL_arg1667z00_2539;

					BgL_arg1667z00_2539 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2434)))->BgL_valuez00);
					BgL_arg1664z00_2538 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1667z00_2539,
						((BgL_variablez00_bglt) BgL_callerz00_2435), BgL_gz00_2436);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(
					((BgL_nodez00_bglt) BgL_arg1663z00_2537),
					((BgL_variablez00_bglt) BgL_callerz00_2435), BgL_arg1664z00_2538);
			}
		}

	}



/* &E-box-ref1303 */
	obj_t BGl_z62Ezd2boxzd2ref1303z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2437,
		obj_t BgL_nodez00_2438, obj_t BgL_callerz00_2439, obj_t BgL_gz00_2440)
	{
		{	/* Globalize/gn.scm 223 */
			{	/* Globalize/gn.scm 225 */
				BgL_varz00_bglt BgL_arg1662z00_2541;

				BgL_arg1662z00_2541 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2438)))->BgL_varz00);
				return
					BGl_Ez00zzglobaliza7e_gnza7(
					((BgL_nodez00_bglt) BgL_arg1662z00_2541),
					((BgL_variablez00_bglt) BgL_callerz00_2439), BgL_gz00_2440);
			}
		}

	}



/* &E-make-box1301 */
	obj_t BGl_z62Ezd2makezd2box1301z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2441,
		obj_t BgL_nodez00_2442, obj_t BgL_callerz00_2443, obj_t BgL_gz00_2444)
	{
		{	/* Globalize/gn.scm 216 */
			{	/* Globalize/gn.scm 218 */
				BgL_nodez00_bglt BgL_arg1652z00_2543;

				BgL_arg1652z00_2543 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2442)))->BgL_valuez00);
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1652z00_2543,
					((BgL_variablez00_bglt) BgL_callerz00_2443), BgL_gz00_2444);
			}
		}

	}



/* &E-jump-ex-it1299 */
	obj_t BGl_z62Ezd2jumpzd2exzd2it1299zb0zzglobaliza7e_gnza7(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446, obj_t BgL_callerz00_2447,
		obj_t BgL_gz00_2448)
	{
		{	/* Globalize/gn.scm 209 */
			{	/* Globalize/gn.scm 211 */
				BgL_nodez00_bglt BgL_arg1640z00_2545;
				obj_t BgL_arg1641z00_2546;

				BgL_arg1640z00_2545 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2446)))->BgL_exitz00);
				{	/* Globalize/gn.scm 211 */
					BgL_nodez00_bglt BgL_arg1644z00_2547;

					BgL_arg1644z00_2547 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2446)))->
						BgL_valuez00);
					BgL_arg1641z00_2546 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1644z00_2547,
						((BgL_variablez00_bglt) BgL_callerz00_2447), BgL_gz00_2448);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1640z00_2545,
					((BgL_variablez00_bglt) BgL_callerz00_2447), BgL_arg1641z00_2546);
			}
		}

	}



/* &E-set-ex-it1297 */
	obj_t BGl_z62Ezd2setzd2exzd2it1297zb0zzglobaliza7e_gnza7(obj_t
		BgL_envz00_2449, obj_t BgL_nodez00_2450, obj_t BgL_callerz00_2451,
		obj_t BgL_gz00_2452)
	{
		{	/* Globalize/gn.scm 202 */
			{	/* Globalize/gn.scm 204 */
				BgL_nodez00_bglt BgL_arg1639z00_2549;

				BgL_arg1639z00_2549 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2450)))->BgL_bodyz00);
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1639z00_2549,
					((BgL_variablez00_bglt) BgL_callerz00_2451), BgL_gz00_2452);
			}
		}

	}



/* &E-let-var1295 */
	obj_t BGl_z62Ezd2letzd2var1295z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2453,
		obj_t BgL_nodez00_2454, obj_t BgL_callerz00_2455, obj_t BgL_gz00_2456)
	{
		{	/* Globalize/gn.scm 190 */
			{
				obj_t BgL_bindingsz00_2552;
				obj_t BgL_gz00_2553;

				BgL_bindingsz00_2552 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2454)))->BgL_bindingsz00);
				BgL_gz00_2553 = BgL_gz00_2456;
			BgL_loopz00_2551:
				if (NULLP(BgL_bindingsz00_2552))
					{	/* Globalize/gn.scm 195 */
						BgL_nodez00_bglt BgL_arg1624z00_2554;

						BgL_arg1624z00_2554 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2454)))->BgL_bodyz00);
						return
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1624z00_2554,
							((BgL_variablez00_bglt) BgL_callerz00_2455), BgL_gz00_2553);
					}
				else
					{	/* Globalize/gn.scm 196 */
						obj_t BgL_arg1626z00_2555;
						obj_t BgL_arg1627z00_2556;

						BgL_arg1626z00_2555 = CDR(((obj_t) BgL_bindingsz00_2552));
						{	/* Globalize/gn.scm 197 */
							obj_t BgL_arg1631z00_2557;

							{	/* Globalize/gn.scm 197 */
								obj_t BgL_pairz00_2558;

								BgL_pairz00_2558 = CAR(((obj_t) BgL_bindingsz00_2552));
								BgL_arg1631z00_2557 = CDR(BgL_pairz00_2558);
							}
							BgL_arg1627z00_2556 =
								BGl_Ez00zzglobaliza7e_gnza7(
								((BgL_nodez00_bglt) BgL_arg1631z00_2557),
								((BgL_variablez00_bglt) BgL_callerz00_2455), BgL_gz00_2553);
						}
						{
							obj_t BgL_gz00_2951;
							obj_t BgL_bindingsz00_2950;

							BgL_bindingsz00_2950 = BgL_arg1626z00_2555;
							BgL_gz00_2951 = BgL_arg1627z00_2556;
							BgL_gz00_2553 = BgL_gz00_2951;
							BgL_bindingsz00_2552 = BgL_bindingsz00_2950;
							goto BgL_loopz00_2551;
						}
					}
			}
		}

	}



/* &E-let-fun1293 */
	obj_t BGl_z62Ezd2letzd2fun1293z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2457,
		obj_t BgL_nodez00_2458, obj_t BgL_callerz00_2459, obj_t BgL_gz00_2460)
	{
		{	/* Globalize/gn.scm 176 */
			{
				obj_t BgL_localsz00_2561;
				obj_t BgL_gz00_2562;

				BgL_localsz00_2561 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2458)))->BgL_localsz00);
				BgL_gz00_2562 = BgL_gz00_2460;
			BgL_loopz00_2560:
				if (NULLP(BgL_localsz00_2561))
					{	/* Globalize/gn.scm 181 */
						BgL_nodez00_bglt BgL_arg1597z00_2563;

						BgL_arg1597z00_2563 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2458)))->BgL_bodyz00);
						return
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1597z00_2563,
							((BgL_variablez00_bglt) BgL_callerz00_2459), BgL_gz00_2562);
					}
				else
					{	/* Globalize/gn.scm 182 */
						obj_t BgL_arg1599z00_2564;
						obj_t BgL_arg1604z00_2565;

						BgL_arg1599z00_2564 = CDR(((obj_t) BgL_localsz00_2561));
						{	/* Globalize/gn.scm 183 */
							obj_t BgL_arg1605z00_2566;
							obj_t BgL_arg1606z00_2567;

							BgL_arg1605z00_2566 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_localsz00_2561))))))->
												BgL_valuez00))))->BgL_bodyz00);
							BgL_arg1606z00_2567 = CAR(((obj_t) BgL_localsz00_2561));
							BgL_arg1604z00_2565 =
								BGl_Ez00zzglobaliza7e_gnza7(
								((BgL_nodez00_bglt) BgL_arg1605z00_2566),
								((BgL_variablez00_bglt) BgL_arg1606z00_2567), BgL_gz00_2562);
						}
						{
							obj_t BgL_gz00_2975;
							obj_t BgL_localsz00_2974;

							BgL_localsz00_2974 = BgL_arg1599z00_2564;
							BgL_gz00_2975 = BgL_arg1604z00_2565;
							BgL_gz00_2562 = BgL_gz00_2975;
							BgL_localsz00_2561 = BgL_localsz00_2974;
							goto BgL_loopz00_2560;
						}
					}
			}
		}

	}



/* &E-switch1291 */
	obj_t BGl_z62Ezd2switch1291zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2461,
		obj_t BgL_nodez00_2462, obj_t BgL_callerz00_2463, obj_t BgL_gz00_2464)
	{
		{	/* Globalize/gn.scm 165 */
			{
				obj_t BgL_clausesz00_2570;
				obj_t BgL_gz00_2571;

				BgL_clausesz00_2570 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2462)))->BgL_clausesz00);
				BgL_gz00_2571 = BgL_gz00_2464;
			BgL_loopz00_2569:
				if (NULLP(BgL_clausesz00_2570))
					{	/* Globalize/gn.scm 170 */
						BgL_nodez00_bglt BgL_arg1578z00_2572;

						BgL_arg1578z00_2572 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2462)))->BgL_testz00);
						return
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1578z00_2572,
							((BgL_variablez00_bglt) BgL_callerz00_2463), BgL_gz00_2571);
					}
				else
					{	/* Globalize/gn.scm 171 */
						obj_t BgL_arg1582z00_2573;
						obj_t BgL_arg1584z00_2574;

						BgL_arg1582z00_2573 = CDR(((obj_t) BgL_clausesz00_2570));
						{	/* Globalize/gn.scm 171 */
							obj_t BgL_arg1588z00_2575;

							{	/* Globalize/gn.scm 171 */
								obj_t BgL_pairz00_2576;

								BgL_pairz00_2576 = CAR(((obj_t) BgL_clausesz00_2570));
								BgL_arg1588z00_2575 = CDR(BgL_pairz00_2576);
							}
							BgL_arg1584z00_2574 =
								BGl_Ez00zzglobaliza7e_gnza7(
								((BgL_nodez00_bglt) BgL_arg1588z00_2575),
								((BgL_variablez00_bglt) BgL_callerz00_2463), BgL_gz00_2571);
						}
						{
							obj_t BgL_gz00_2993;
							obj_t BgL_clausesz00_2992;

							BgL_clausesz00_2992 = BgL_arg1582z00_2573;
							BgL_gz00_2993 = BgL_arg1584z00_2574;
							BgL_gz00_2571 = BgL_gz00_2993;
							BgL_clausesz00_2570 = BgL_clausesz00_2992;
							goto BgL_loopz00_2569;
						}
					}
			}
		}

	}



/* &E-fail1289 */
	obj_t BGl_z62Ezd2fail1289zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2465,
		obj_t BgL_nodez00_2466, obj_t BgL_callerz00_2467, obj_t BgL_gz00_2468)
	{
		{	/* Globalize/gn.scm 158 */
			{	/* Globalize/gn.scm 160 */
				BgL_nodez00_bglt BgL_arg1552z00_2578;
				obj_t BgL_arg1558z00_2579;

				BgL_arg1552z00_2578 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2466)))->BgL_procz00);
				{	/* Globalize/gn.scm 160 */
					BgL_nodez00_bglt BgL_arg1561z00_2580;
					obj_t BgL_arg1564z00_2581;

					BgL_arg1561z00_2580 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2466)))->BgL_msgz00);
					{	/* Globalize/gn.scm 160 */
						BgL_nodez00_bglt BgL_arg1565z00_2582;

						BgL_arg1565z00_2582 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2466)))->BgL_objz00);
						BgL_arg1564z00_2581 =
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1565z00_2582,
							((BgL_variablez00_bglt) BgL_callerz00_2467), BgL_gz00_2468);
					}
					BgL_arg1558z00_2579 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1561z00_2580,
						((BgL_variablez00_bglt) BgL_callerz00_2467), BgL_arg1564z00_2581);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1552z00_2578,
					((BgL_variablez00_bglt) BgL_callerz00_2467), BgL_arg1558z00_2579);
			}
		}

	}



/* &E-conditional1287 */
	obj_t BGl_z62Ezd2conditional1287zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2469,
		obj_t BgL_nodez00_2470, obj_t BgL_callerz00_2471, obj_t BgL_gz00_2472)
	{
		{	/* Globalize/gn.scm 151 */
			{	/* Globalize/gn.scm 153 */
				BgL_nodez00_bglt BgL_arg1521z00_2584;
				obj_t BgL_arg1528z00_2585;

				BgL_arg1521z00_2584 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2470)))->BgL_testz00);
				{	/* Globalize/gn.scm 153 */
					BgL_nodez00_bglt BgL_arg1536z00_2586;
					obj_t BgL_arg1537z00_2587;

					BgL_arg1536z00_2586 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2470)))->BgL_truez00);
					{	/* Globalize/gn.scm 153 */
						BgL_nodez00_bglt BgL_arg1540z00_2588;

						BgL_arg1540z00_2588 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2470)))->BgL_falsez00);
						BgL_arg1537z00_2587 =
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1540z00_2588,
							((BgL_variablez00_bglt) BgL_callerz00_2471), BgL_gz00_2472);
					}
					BgL_arg1528z00_2585 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1536z00_2586,
						((BgL_variablez00_bglt) BgL_callerz00_2471), BgL_arg1537z00_2587);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1521z00_2584,
					((BgL_variablez00_bglt) BgL_callerz00_2471), BgL_arg1528z00_2585);
			}
		}

	}



/* &E-setq1285 */
	obj_t BGl_z62Ezd2setq1285zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2473,
		obj_t BgL_nodez00_2474, obj_t BgL_callerz00_2475, obj_t BgL_gz00_2476)
	{
		{	/* Globalize/gn.scm 144 */
			{	/* Globalize/gn.scm 146 */
				BgL_nodez00_bglt BgL_arg1518z00_2590;

				BgL_arg1518z00_2590 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2474)))->BgL_valuez00);
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1518z00_2590,
					((BgL_variablez00_bglt) BgL_callerz00_2475), BgL_gz00_2476);
			}
		}

	}



/* &E-cast1283 */
	obj_t BGl_z62Ezd2cast1283zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2477,
		obj_t BgL_nodez00_2478, obj_t BgL_callerz00_2479, obj_t BgL_gz00_2480)
	{
		{	/* Globalize/gn.scm 137 */
			{	/* Globalize/gn.scm 139 */
				BgL_nodez00_bglt BgL_arg1497z00_2592;

				BgL_arg1497z00_2592 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2478)))->BgL_argz00);
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1497z00_2592,
					((BgL_variablez00_bglt) BgL_callerz00_2479), BgL_gz00_2480);
			}
		}

	}



/* &E-extern1281 */
	obj_t BGl_z62Ezd2extern1281zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2481,
		obj_t BgL_nodez00_2482, obj_t BgL_callerz00_2483, obj_t BgL_gz00_2484)
	{
		{	/* Globalize/gn.scm 130 */
			return
				BGl_Eza2za2zzglobaliza7e_gnza7(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2482)))->BgL_exprza2za2),
				BgL_callerz00_2483, BgL_gz00_2484);
		}

	}



/* &E-funcall1279 */
	obj_t BGl_z62Ezd2funcall1279zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2485,
		obj_t BgL_nodez00_2486, obj_t BgL_callerz00_2487, obj_t BgL_gz00_2488)
	{
		{	/* Globalize/gn.scm 123 */
			{	/* Globalize/gn.scm 125 */
				BgL_nodez00_bglt BgL_arg1477z00_2595;
				obj_t BgL_arg1489z00_2596;

				BgL_arg1477z00_2595 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2486)))->BgL_funz00);
				BgL_arg1489z00_2596 =
					BGl_Eza2za2zzglobaliza7e_gnza7(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2486)))->BgL_argsz00),
					BgL_callerz00_2487, BgL_gz00_2488);
				return BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1477z00_2595,
					((BgL_variablez00_bglt) BgL_callerz00_2487), BgL_arg1489z00_2596);
			}
		}

	}



/* &E-app-ly1277 */
	obj_t BGl_z62Ezd2appzd2ly1277z62zzglobaliza7e_gnza7(obj_t BgL_envz00_2489,
		obj_t BgL_nodez00_2490, obj_t BgL_callerz00_2491, obj_t BgL_gz00_2492)
	{
		{	/* Globalize/gn.scm 116 */
			{	/* Globalize/gn.scm 118 */
				BgL_nodez00_bglt BgL_arg1465z00_2598;
				obj_t BgL_arg1474z00_2599;

				BgL_arg1465z00_2598 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2490)))->BgL_funz00);
				{	/* Globalize/gn.scm 118 */
					BgL_nodez00_bglt BgL_arg1476z00_2600;

					BgL_arg1476z00_2600 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2490)))->BgL_argz00);
					BgL_arg1474z00_2599 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1476z00_2600,
						((BgL_variablez00_bglt) BgL_callerz00_2491), BgL_gz00_2492);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1465z00_2598,
					((BgL_variablez00_bglt) BgL_callerz00_2491), BgL_arg1474z00_2599);
			}
		}

	}



/* &E-app1275 */
	obj_t BGl_z62Ezd2app1275zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2493,
		obj_t BgL_nodez00_2494, obj_t BgL_callerz00_2495, obj_t BgL_gz00_2496)
	{
		{	/* Globalize/gn.scm 108 */
			BGl_savezd2appz12zc0zzglobaliza7e_gnza7(BgL_callerz00_2495,
				(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2494)))->BgL_funz00)))->
					BgL_variablez00));
			return BGl_Eza2za2zzglobaliza7e_gnza7((((BgL_appz00_bglt)
						COBJECT(((BgL_appz00_bglt) BgL_nodez00_2494)))->BgL_argsz00),
				BgL_callerz00_2495, BgL_gz00_2496);
		}

	}



/* &E-sync1273 */
	obj_t BGl_z62Ezd2sync1273zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2497,
		obj_t BgL_nodez00_2498, obj_t BgL_callerz00_2499, obj_t BgL_gz00_2500)
	{
		{	/* Globalize/gn.scm 100 */
			{	/* Globalize/gn.scm 101 */
				BgL_nodez00_bglt BgL_arg1422z00_2603;
				obj_t BgL_arg1441z00_2604;

				BgL_arg1422z00_2603 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2498)))->BgL_bodyz00);
				{	/* Globalize/gn.scm 102 */
					BgL_nodez00_bglt BgL_arg1442z00_2605;
					obj_t BgL_arg1448z00_2606;

					BgL_arg1442z00_2605 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2498)))->BgL_prelockz00);
					{	/* Globalize/gn.scm 103 */
						BgL_nodez00_bglt BgL_arg1449z00_2607;

						BgL_arg1449z00_2607 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_2498)))->BgL_mutexz00);
						BgL_arg1448z00_2606 =
							BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1449z00_2607,
							((BgL_variablez00_bglt) BgL_callerz00_2499), BgL_gz00_2500);
					}
					BgL_arg1441z00_2604 =
						BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1442z00_2605,
						((BgL_variablez00_bglt) BgL_callerz00_2499), BgL_arg1448z00_2606);
				}
				return
					BGl_Ez00zzglobaliza7e_gnza7(BgL_arg1422z00_2603,
					((BgL_variablez00_bglt) BgL_callerz00_2499), BgL_arg1441z00_2604);
			}
		}

	}



/* &E-sequence1270 */
	obj_t BGl_z62Ezd2sequence1270zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2501,
		obj_t BgL_nodez00_2502, obj_t BgL_callerz00_2503, obj_t BgL_gz00_2504)
	{
		{	/* Globalize/gn.scm 94 */
			return
				BGl_Eza2za2zzglobaliza7e_gnza7(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2502)))->BgL_nodesz00),
				BgL_callerz00_2503, BgL_gz00_2504);
		}

	}



/* &E-closure1268 */
	obj_t BGl_z62Ezd2closure1268zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2505,
		obj_t BgL_nodez00_2506, obj_t BgL_callerz00_2507, obj_t BgL_gz00_2508)
	{
		{	/* Globalize/gn.scm 79 */
			{	/* Globalize/gn.scm 80 */
				BgL_variablez00_bglt BgL_varz00_2611;

				BgL_varz00_2611 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt)
								((BgL_closurez00_bglt) BgL_nodez00_2506))))->BgL_variablez00);
				BGl_savezd2funz12zc0zzglobaliza7e_gnza7(
					((BgL_variablez00_bglt) BgL_callerz00_2507), BgL_varz00_2611);
				{	/* Globalize/gn.scm 82 */
					bool_t BgL_test1925z00_3073;

					{	/* Globalize/gn.scm 82 */
						bool_t BgL_test1926z00_3074;

						{	/* Globalize/gn.scm 82 */
							bool_t BgL_res1845z00_2612;

							BgL_res1845z00_2612 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_varz00_2611), BGl_localz00zzast_varz00);
							BgL_test1926z00_3074 = BgL_res1845z00_2612;
						}
						if (BgL_test1926z00_3074)
							{	/* Globalize/gn.scm 84 */
								bool_t BgL_test1927z00_3077;

								{
									BgL_localzf2ginfozf2_bglt BgL_auxz00_3078;

									{
										obj_t BgL_auxz00_3079;

										{	/* Globalize/gn.scm 84 */
											BgL_objectz00_bglt BgL_tmpz00_3080;

											BgL_tmpz00_3080 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt) BgL_varz00_2611));
											BgL_auxz00_3079 = BGL_OBJECT_WIDENING(BgL_tmpz00_3080);
										}
										BgL_auxz00_3078 =
											((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3079);
									}
									BgL_test1927z00_3077 =
										(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3078))->
										BgL_escapezf3zf3);
								}
								if (BgL_test1927z00_3077)
									{	/* Globalize/gn.scm 85 */
										bool_t BgL_test1928z00_3086;

										{	/* Globalize/gn.scm 85 */
											BgL_sfunz00_bglt BgL_oz00_2613;

											BgL_oz00_2613 =
												((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_2611))))->
													BgL_valuez00));
											{
												BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3091;

												{
													obj_t BgL_auxz00_3092;

													{	/* Globalize/gn.scm 85 */
														BgL_objectz00_bglt BgL_tmpz00_3093;

														BgL_tmpz00_3093 =
															((BgL_objectz00_bglt) BgL_oz00_2613);
														BgL_auxz00_3092 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3093);
													}
													BgL_auxz00_3091 =
														((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3092);
												}
												BgL_test1928z00_3086 =
													(((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_3091))->BgL_gzf3zf3);
											}
										}
										if (BgL_test1928z00_3086)
											{	/* Globalize/gn.scm 85 */
												BgL_test1925z00_3073 = ((bool_t) 0);
											}
										else
											{	/* Globalize/gn.scm 85 */
												BgL_test1925z00_3073 = ((bool_t) 1);
											}
									}
								else
									{	/* Globalize/gn.scm 84 */
										BgL_test1925z00_3073 = ((bool_t) 0);
									}
							}
						else
							{	/* Globalize/gn.scm 82 */
								BgL_test1925z00_3073 = ((bool_t) 0);
							}
					}
					if (BgL_test1925z00_3073)
						{	/* Globalize/gn.scm 82 */
							{	/* Globalize/gn.scm 87 */
								BgL_valuez00_bglt BgL_arg1417z00_2614;

								BgL_arg1417z00_2614 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_varz00_2611))))->BgL_valuez00);
								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3101;

									{
										obj_t BgL_auxz00_3102;

										{	/* Globalize/gn.scm 87 */
											BgL_objectz00_bglt BgL_tmpz00_3103;

											BgL_tmpz00_3103 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_arg1417z00_2614));
											BgL_auxz00_3102 = BGL_OBJECT_WIDENING(BgL_tmpz00_3103);
										}
										BgL_auxz00_3101 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3102);
									}
									((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3101))->
											BgL_gzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
								}
							}
							return MAKE_YOUNG_PAIR(((obj_t) BgL_varz00_2611), BgL_gz00_2508);
						}
					else
						{	/* Globalize/gn.scm 82 */
							return BgL_gz00_2508;
						}
				}
			}
		}

	}



/* &E-var1266 */
	obj_t BGl_z62Ezd2var1266zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2509,
		obj_t BgL_nodez00_2510, obj_t BgL_callerz00_2511, obj_t BgL_gz00_2512)
	{
		{	/* Globalize/gn.scm 73 */
			return BgL_gz00_2512;
		}

	}



/* &E-kwote1264 */
	obj_t BGl_z62Ezd2kwote1264zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2513,
		obj_t BgL_nodez00_2514, obj_t BgL_callerz00_2515, obj_t BgL_gz00_2516)
	{
		{	/* Globalize/gn.scm 67 */
			return BgL_gz00_2516;
		}

	}



/* &E-atom1262 */
	obj_t BGl_z62Ezd2atom1262zb0zzglobaliza7e_gnza7(obj_t BgL_envz00_2517,
		obj_t BgL_nodez00_2518, obj_t BgL_callerz00_2519, obj_t BgL_gz00_2520)
	{
		{	/* Globalize/gn.scm 61 */
			return BgL_gz00_2520;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7()
	{
		{	/* Globalize/gn.scm 23 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					34590557), BSTRING_TO_STRING(BGl_string1875z00zzglobaliza7e_gnza7));
		}

	}

#ifdef __cplusplus
}
#endif
