/*===========================================================================*/
/*   (Inline/size.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/size.scm) */
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

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_siza7edzd2sequencez75_bgl
	{
		long BgL_siza7eza7;
	}                            *BgL_siza7edzd2sequencez75_bglt;

	typedef struct BgL_siza7edzd2syncz75_bgl
	{
		long BgL_siza7eza7;
	}                        *BgL_siza7edzd2syncz75_bglt;

	typedef struct BgL_siza7edzd2switchz75_bgl
	{
		long BgL_siza7eza7;
	}                          *BgL_siza7edzd2switchz75_bglt;

	typedef struct BgL_siza7edzd2letzd2funza7_bgl
	{
		long BgL_siza7eza7;
	}                             *BgL_siza7edzd2letzd2funza7_bglt;

	typedef struct BgL_siza7edzd2letzd2varza7_bgl
	{
		long BgL_siza7eza7;
	}                             *BgL_siza7edzd2letzd2varza7_bglt;


	static obj_t BGl_z62lambda1772z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1773z62zzinline_siza7eza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2siza7edzd2sequ1388zb0zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2fail1409zc5zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2letzd2var1419z17zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_siza7eza7();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2var1382zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_z62nodezd2siza7e1377z17zzinline_siza7eza7(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2funcall1398zc5zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31541ze3ze5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31720ze3ze5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_siza7edzd2sequencez75zzinline_siza7eza7 = BUNSPEC;
	static obj_t BGl_z62nodezd2siza7ezd2return1429zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2boxzd2setz121435z05zzinline_siza7eza7(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2extern1402zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2makezd2box1431z17zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_siza7eza7();
	static BgL_syncz00_bglt BGl_z62lambda1600z62zzinline_siza7eza7(obj_t, obj_t);
	static BgL_syncz00_bglt BGl_z62lambda1606z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1628z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1629z62zzinline_siza7eza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2setzd2exzd2it1423zc5zzinline_siza7eza7(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_switchz00_bglt BGl_z62lambda1645z62zzinline_siza7eza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_siza7edzd2letzd2funza7zzinline_siza7eza7 = BUNSPEC;
	static obj_t
		BGl_z62nodezd2siza7ezd2siza7edzd2swit1413zb0zzinline_siza7eza7(obj_t,
		obj_t);
	static BgL_switchz00_bglt BGl_z62lambda1663z62zzinline_siza7eza7(obj_t,
		obj_t);
	static BgL_switchz00_bglt BGl_z62lambda1666z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2atom1380zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1687z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1688z62zzinline_siza7eza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_siza7eza7 = BUNSPEC;
	static obj_t BGl_siza7edzd2syncz75zzinline_siza7eza7 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_z62nodezd2siza7ezd2conditiona1407zc5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2sequence1386zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2cast1400zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2siza7edzd2sync1392zb0zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_z62nodezd2siza7ezd2setq1405zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_z62nodezd2siza7ezd2retblock1427zc5zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_siza7edzd2letzd2varza7zzinline_siza7eza7 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2boxzd2ref1433z17zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2app1394zc5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t
		BGl_z62nodezd2siza7ezd2jumpzd2exzd2it1425zc5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2sync1390zc5zzinline_siza7eza7(obj_t,
		obj_t);
	static long BGl_mz00zzinline_siza7eza7;
	static obj_t BGl_z62nodezd2siza7ez17zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_siza7edzd2switchz75zzinline_siza7eza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL long
		BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2kwote1384zc5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_siza7eza7();
	static obj_t BGl_z62nodezd2siza7ezd2switch1411zc5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	static BgL_sequencez00_bglt BGl_z62lambda1529z62zzinline_siza7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_sequencez00_bglt BGl_z62lambda1538z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2siza7edzd2letzd21417z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2siza7ezd2appzd2ly1396z17zzinline_siza7eza7(obj_t,
		obj_t);
	static BgL_sequencez00_bglt BGl_z62lambda1542z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62nodezd2siza7ezd2siza7edzd2letzd21421z62zzinline_siza7eza7(obj_t,
		obj_t);
	static BgL_letzd2funzd2_bglt BGl_z62lambda1708z62zzinline_siza7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2siza7ezd2letzd2fun1415z17zzinline_siza7eza7(obj_t,
		obj_t);
	static BgL_letzd2funzd2_bglt BGl_z62lambda1713z62zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_letzd2funzd2_bglt BGl_z62lambda1721z62zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62lambda1732z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1733z62zzinline_siza7eza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1574z62zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1575z62zzinline_siza7eza7(obj_t, obj_t, obj_t);
	static BgL_letzd2varzd2_bglt BGl_z62lambda1744z62zzinline_siza7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_letzd2varzd2_bglt BGl_z62lambda1747z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_syncz00_bglt BGl_z62lambda1593z62zzinline_siza7eza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_letzd2varzd2_bglt BGl_z62lambda1756z62zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31755ze3ze5zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STRING(BGl_string2128z00zzinline_siza7eza7,
		BgL_bgl_string2128za700za7za7i2170za7, "node-size1377", 13);
	      DEFINE_STRING(BGl_string2129z00zzinline_siza7eza7,
		BgL_bgl_string2129za700za7za7i2171za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2131z00zzinline_siza7eza7,
		BgL_bgl_string2131za700za7za7i2172za7, "node-size", 9);
	      DEFINE_STRING(BGl_string2159z00zzinline_siza7eza7,
		BgL_bgl_string2159za700za7za7i2173za7, "INLINESZ", 8);
	      DEFINE_STRING(BGl_string2160z00zzinline_siza7eza7,
		BgL_bgl_string2160za700za7za7i2174za7, ">>> inline-size node=", 21);
	      DEFINE_STRING(BGl_string2161z00zzinline_siza7eza7,
		BgL_bgl_string2161za700za7za7i2175za7, "--- inline-size node=", 21);
	      DEFINE_STRING(BGl_string2162z00zzinline_siza7eza7,
		BgL_bgl_string2162za700za7za7i2176za7, " size=", 6);
	      DEFINE_STRING(BGl_string2163z00zzinline_siza7eza7,
		BgL_bgl_string2163za700za7za7i2177za7, " null=", 6);
	      DEFINE_STRING(BGl_string2164z00zzinline_siza7eza7,
		BgL_bgl_string2164za700za7za7i2178za7, "<<< inline-size node=", 21);
	      DEFINE_STRING(BGl_string2165z00zzinline_siza7eza7,
		BgL_bgl_string2165za700za7za7i2179za7, "inline_size", 11);
	      DEFINE_STRING(BGl_string2166z00zzinline_siza7eza7,
		BgL_bgl_string2166za700za7za7i2180za7,
		"node-size1377 sized-let-var sized-let-fun sized-switch sized-sync inline_size sized-sequence long size ",
		103);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2097z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1575za7622181z00, BGl_z62lambda1575z62zzinline_siza7eza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2098z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1574za7622182z00, BGl_z62lambda1574z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2099z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1542za7622183z00, BGl_z62lambda1542z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2184za7,
		BGl_z62nodezd2siza7ez17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2100z00zzinline_siza7eza7,
		BgL_bgl_za762za7c3za704anonymo2185za7,
		BGl_z62zc3z04anonymousza31541ze3ze5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2101z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1538za7622186z00, BGl_z62lambda1538z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2102z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1529za7622187z00, BGl_z62lambda1529z62zzinline_siza7eza7,
		0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2103z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1629za7622188z00, BGl_z62lambda1629z62zzinline_siza7eza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2104z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1628za7622189z00, BGl_z62lambda1628z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2105z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1606za7622190z00, BGl_z62lambda1606z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2106z00zzinline_siza7eza7,
		BgL_bgl_za762za7c3za704anonymo2191za7,
		BGl_z62zc3z04anonymousza31605ze3ze5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2107z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1600za7622192z00, BGl_z62lambda1600z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1593za7622193z00, BGl_z62lambda1593z62zzinline_siza7eza7,
		0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1688za7622194z00, BGl_z62lambda1688z62zzinline_siza7eza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1687za7622195z00, BGl_z62lambda1687z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2111z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1666za7622196z00, BGl_z62lambda1666z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzinline_siza7eza7,
		BgL_bgl_za762za7c3za704anonymo2197za7,
		BGl_z62zc3z04anonymousza31665ze3ze5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1663za7622198z00, BGl_z62lambda1663z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1645za7622199z00, BGl_z62lambda1645z62zzinline_siza7eza7,
		0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1733za7622200z00, BGl_z62lambda1733z62zzinline_siza7eza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1732za7622201z00, BGl_z62lambda1732z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1721za7622202z00, BGl_z62lambda1721z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzinline_siza7eza7,
		BgL_bgl_za762za7c3za704anonymo2203za7,
		BGl_z62zc3z04anonymousza31720ze3ze5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1713za7622204z00, BGl_z62lambda1713z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1708za7622205z00, BGl_z62lambda1708z62zzinline_siza7eza7,
		0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1773za7622206z00, BGl_z62lambda1773z62zzinline_siza7eza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1772za7622207z00, BGl_z62lambda1772z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1756za7622208z00, BGl_z62lambda1756z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzinline_siza7eza7,
		BgL_bgl_za762za7c3za704anonymo2209za7,
		BGl_z62zc3z04anonymousza31755ze3ze5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1747za7622210z00, BGl_z62lambda1747z62zzinline_siza7eza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzinline_siza7eza7,
		BgL_bgl_za762lambda1744za7622211z00, BGl_z62lambda1744z62zzinline_siza7eza7,
		0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2212za7,
		BGl_z62nodezd2siza7e1377z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2213za7,
		BGl_z62nodezd2siza7ezd2atom1380zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2214za7,
		BGl_z62nodezd2siza7ezd2var1382zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2215za7,
		BGl_z62nodezd2siza7ezd2kwote1384zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2216za7,
		BGl_z62nodezd2siza7ezd2sequence1386zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2217za7,
		BGl_z62nodezd2siza7ezd2siza7edzd2sequ1388zb0zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2136z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2218za7,
		BGl_z62nodezd2siza7ezd2sync1390zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2219za7,
		BGl_z62nodezd2siza7ezd2siza7edzd2sync1392zb0zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2220za7,
		BGl_z62nodezd2siza7ezd2app1394zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2139z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2221za7,
		BGl_z62nodezd2siza7ezd2appzd2ly1396z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2140z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2222za7,
		BGl_z62nodezd2siza7ezd2funcall1398zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2223za7,
		BGl_z62nodezd2siza7ezd2cast1400zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2142z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2224za7,
		BGl_z62nodezd2siza7ezd2extern1402zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2143z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2225za7,
		BGl_z62nodezd2siza7ezd2setq1405zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2226za7,
		BGl_z62nodezd2siza7ezd2conditiona1407zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2227za7,
		BGl_z62nodezd2siza7ezd2fail1409zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2228za7,
		BGl_z62nodezd2siza7ezd2switch1411zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2229za7,
		BGl_z62nodezd2siza7ezd2siza7edzd2swit1413zb0zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2230za7,
		BGl_z62nodezd2siza7ezd2letzd2fun1415z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2231za7,
		BGl_z62nodezd2siza7ezd2siza7edzd2letzd21417z62zzinline_siza7eza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2232za7,
		BGl_z62nodezd2siza7ezd2letzd2var1419z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2233za7,
		BGl_z62nodezd2siza7ezd2siza7edzd2letzd21421z62zzinline_siza7eza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2234za7,
		BGl_z62nodezd2siza7ezd2setzd2exzd2it1423zc5zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2235za7,
		BGl_z62nodezd2siza7ezd2jumpzd2exzd2it1425zc5zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2236za7,
		BGl_z62nodezd2siza7ezd2retblock1427zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2237za7,
		BGl_z62nodezd2siza7ezd2return1429zc5zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2238za7,
		BGl_z62nodezd2siza7ezd2makezd2box1431z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2239za7,
		BGl_z62nodezd2siza7ezd2boxzd2ref1433z17zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzinline_siza7eza7,
		BgL_bgl_za762nodeza7d2siza7a7e2240za7,
		BGl_z62nodezd2siza7ezd2boxzd2setz121435z05zzinline_siza7eza7, 0L, BUNSPEC,
		1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_siza7edzd2sequencez75zzinline_siza7eza7));
		     ADD_ROOT((void *) (&BGl_siza7edzd2letzd2funza7zzinline_siza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinline_siza7eza7));
		     ADD_ROOT((void *) (&BGl_siza7edzd2syncz75zzinline_siza7eza7));
		     ADD_ROOT((void *) (&BGl_siza7edzd2letzd2varza7zzinline_siza7eza7));
		     ADD_ROOT((void *) (&BGl_siza7edzd2switchz75zzinline_siza7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long
		BgL_checksumz00_3264, char *BgL_fromz00_3265)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_siza7eza7))
				{
					BGl_requirezd2initializa7ationz75zzinline_siza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_siza7eza7();
					BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7();
					BGl_cnstzd2initzd2zzinline_siza7eza7();
					BGl_importedzd2moduleszd2initz00zzinline_siza7eza7();
					BGl_objectzd2initzd2zzinline_siza7eza7();
					BGl_genericzd2initzd2zzinline_siza7eza7();
					BGl_methodzd2initzd2zzinline_siza7eza7();
					return BGl_toplevelzd2initzd2zzinline_siza7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"inline_size");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			{	/* Inline/size.scm 15 */
				obj_t BgL_cportz00_2939;

				{	/* Inline/size.scm 15 */
					obj_t BgL_stringz00_2947;

					BgL_stringz00_2947 = BGl_string2166z00zzinline_siza7eza7;
					{	/* Inline/size.scm 15 */
						obj_t BgL_startz00_2948;

						BgL_startz00_2948 = BINT(((long) 0));
						{	/* Inline/size.scm 15 */
							obj_t BgL_endz00_2949;

							BgL_endz00_2949 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2947)));
							{	/* Inline/size.scm 15 */

								BgL_cportz00_2939 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2947, BgL_startz00_2948, BgL_endz00_2949);
				}}}}
				{
					long BgL_iz00_2940;

					BgL_iz00_2940 = ((long) 8);
				BgL_loopz00_2941:
					if ((BgL_iz00_2940 == ((long) -1)))
						{	/* Inline/size.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/size.scm 15 */
							{	/* Inline/size.scm 15 */
								obj_t BgL_arg2168z00_2943;

								{	/* Inline/size.scm 15 */

									{	/* Inline/size.scm 15 */
										obj_t BgL_locationz00_2945;

										BgL_locationz00_2945 = BBOOL(((bool_t) 0));
										{	/* Inline/size.scm 15 */

											BgL_arg2168z00_2943 =
												BGl_readz00zz__readerz00(BgL_cportz00_2939,
												BgL_locationz00_2945);
										}
									}
								}
								{	/* Inline/size.scm 15 */
									int BgL_tmpz00_3298;

									BgL_tmpz00_3298 = (int) (BgL_iz00_2940);
									CNST_TABLE_SET(BgL_tmpz00_3298, BgL_arg2168z00_2943);
							}}
							{	/* Inline/size.scm 15 */
								int BgL_auxz00_2946;

								BgL_auxz00_2946 = (int) ((BgL_iz00_2940 - ((long) 1)));
								{
									long BgL_iz00_3303;

									BgL_iz00_3303 = (long) (BgL_auxz00_2946);
									BgL_iz00_2940 = BgL_iz00_3303;
									goto BgL_loopz00_2941;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			BGl_mz00zzinline_siza7eza7 = ((long) 0);
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			{	/* Inline/size.scm 22 */
				obj_t BgL_arg1521z00_1536;
				obj_t BgL_arg1528z00_1537;

				{	/* Inline/size.scm 22 */
					obj_t BgL_v1367z00_1566;

					BgL_v1367z00_1566 = create_vector(((long) 1));
					{	/* Inline/size.scm 22 */
						obj_t BgL_arg1564z00_1567;

						BgL_arg1564z00_1567 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2098z00zzinline_siza7eza7,
							BGl_proc2097z00zzinline_siza7eza7, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1367z00_1566, ((long) 0), BgL_arg1564z00_1567);
					}
					BgL_arg1521z00_1536 = BgL_v1367z00_1566;
				}
				{	/* Inline/size.scm 22 */
					obj_t BgL_v1368z00_1577;

					BgL_v1368z00_1577 = create_vector(((long) 0));
					BgL_arg1528z00_1537 = BgL_v1368z00_1577;
				}
				BGl_siza7edzd2sequencez75zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 3)), BGl_sequencez00zzast_nodez00,
					((long) 10718), BGl_proc2102z00zzinline_siza7eza7,
					BGl_proc2101z00zzinline_siza7eza7, BFALSE,
					BGl_proc2100z00zzinline_siza7eza7, BGl_proc2099z00zzinline_siza7eza7,
					BgL_arg1521z00_1536, BgL_arg1528z00_1537);
			}
			{	/* Inline/size.scm 23 */
				obj_t BgL_arg1589z00_1586;
				obj_t BgL_arg1592z00_1587;

				{	/* Inline/size.scm 23 */
					obj_t BgL_v1369z00_1614;

					BgL_v1369z00_1614 = create_vector(((long) 1));
					{	/* Inline/size.scm 23 */
						obj_t BgL_arg1624z00_1615;

						BgL_arg1624z00_1615 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2104z00zzinline_siza7eza7,
							BGl_proc2103z00zzinline_siza7eza7, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1369z00_1614, ((long) 0), BgL_arg1624z00_1615);
					}
					BgL_arg1589z00_1586 = BgL_v1369z00_1614;
				}
				{	/* Inline/size.scm 23 */
					obj_t BgL_v1370z00_1625;

					BgL_v1370z00_1625 = create_vector(((long) 0));
					BgL_arg1592z00_1587 = BgL_v1370z00_1625;
				}
				BGl_siza7edzd2syncz75zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 4)),
					CNST_TABLE_REF(((long) 3)), BGl_syncz00zzast_nodez00, ((long) 41438),
					BGl_proc2108z00zzinline_siza7eza7, BGl_proc2107z00zzinline_siza7eza7,
					BFALSE, BGl_proc2106z00zzinline_siza7eza7,
					BGl_proc2105z00zzinline_siza7eza7, BgL_arg1589z00_1586,
					BgL_arg1592z00_1587);
			}
			{	/* Inline/size.scm 24 */
				obj_t BgL_arg1641z00_1634;
				obj_t BgL_arg1644z00_1635;

				{	/* Inline/size.scm 24 */
					obj_t BgL_v1371z00_1664;

					BgL_v1371z00_1664 = create_vector(((long) 1));
					{	/* Inline/size.scm 24 */
						obj_t BgL_arg1684z00_1665;

						BgL_arg1684z00_1665 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2110z00zzinline_siza7eza7,
							BGl_proc2109z00zzinline_siza7eza7, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1371z00_1664, ((long) 0), BgL_arg1684z00_1665);
					}
					BgL_arg1641z00_1634 = BgL_v1371z00_1664;
				}
				{	/* Inline/size.scm 24 */
					obj_t BgL_v1372z00_1675;

					BgL_v1372z00_1675 = create_vector(((long) 0));
					BgL_arg1644z00_1635 = BgL_v1372z00_1675;
				}
				BGl_siza7edzd2switchz75zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 3)), BGl_switchz00zzast_nodez00,
					((long) 37488), BGl_proc2114z00zzinline_siza7eza7,
					BGl_proc2113z00zzinline_siza7eza7, BFALSE,
					BGl_proc2112z00zzinline_siza7eza7, BGl_proc2111z00zzinline_siza7eza7,
					BgL_arg1641z00_1634, BgL_arg1644z00_1635);
			}
			{	/* Inline/size.scm 25 */
				obj_t BgL_arg1704z00_1684;
				obj_t BgL_arg1707z00_1685;

				{	/* Inline/size.scm 25 */
					obj_t BgL_v1373z00_1713;

					BgL_v1373z00_1713 = create_vector(((long) 1));
					{	/* Inline/size.scm 25 */
						obj_t BgL_arg1728z00_1714;

						BgL_arg1728z00_1714 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2116z00zzinline_siza7eza7,
							BGl_proc2115z00zzinline_siza7eza7, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1373z00_1713, ((long) 0), BgL_arg1728z00_1714);
					}
					BgL_arg1704z00_1684 = BgL_v1373z00_1713;
				}
				{	/* Inline/size.scm 25 */
					obj_t BgL_v1374z00_1724;

					BgL_v1374z00_1724 = create_vector(((long) 0));
					BgL_arg1707z00_1685 = BgL_v1374z00_1724;
				}
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 6)),
					CNST_TABLE_REF(((long) 3)), BGl_letzd2funzd2zzast_nodez00,
					((long) 7420), BGl_proc2120z00zzinline_siza7eza7,
					BGl_proc2119z00zzinline_siza7eza7, BFALSE,
					BGl_proc2118z00zzinline_siza7eza7, BGl_proc2117z00zzinline_siza7eza7,
					BgL_arg1704z00_1684, BgL_arg1707z00_1685);
			}
			{	/* Inline/size.scm 26 */
				obj_t BgL_arg1742z00_1733;
				obj_t BgL_arg1743z00_1734;

				{	/* Inline/size.scm 26 */
					obj_t BgL_v1375z00_1763;

					BgL_v1375z00_1763 = create_vector(((long) 1));
					{	/* Inline/size.scm 26 */
						obj_t BgL_arg1761z00_1764;

						BgL_arg1761z00_1764 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2122z00zzinline_siza7eza7,
							BGl_proc2121z00zzinline_siza7eza7, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1375z00_1763, ((long) 0), BgL_arg1761z00_1764);
					}
					BgL_arg1742z00_1733 = BgL_v1375z00_1763;
				}
				{	/* Inline/size.scm 26 */
					obj_t BgL_v1376z00_1774;

					BgL_v1376z00_1774 = create_vector(((long) 0));
					BgL_arg1743z00_1734 = BgL_v1376z00_1774;
				}
				return (BGl_siza7edzd2letzd2varza7zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 3)), BGl_letzd2varzd2zzast_nodez00,
						((long) 20476), BGl_proc2126z00zzinline_siza7eza7,
						BGl_proc2125z00zzinline_siza7eza7, BFALSE,
						BGl_proc2124z00zzinline_siza7eza7,
						BGl_proc2123z00zzinline_siza7eza7, BgL_arg1742z00_1733,
						BgL_arg1743z00_1734), BUNSPEC);
		}}

	}



/* &lambda1756 */
	BgL_letzd2varzd2_bglt BGl_z62lambda1756z62zzinline_siza7eza7(obj_t
		BgL_envz00_2753, obj_t BgL_o1167z00_2754)
	{
		{	/* Inline/size.scm 26 */
			{	/* Inline/size.scm 26 */
				long BgL_arg1757z00_2953;

				{	/* Inline/size.scm 26 */
					obj_t BgL_arg1759z00_2954;

					{	/* Inline/size.scm 26 */
						obj_t BgL_arg1760z00_2955;

						{	/* Inline/size.scm 26 */
							long BgL_arg1816z00_2956;

							{	/* Inline/size.scm 26 */
								long BgL_arg1817z00_2957;

								{	/* Inline/size.scm 26 */
									long BgL_res2031z00_2958;

									BgL_res2031z00_2958 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_letzd2varzd2_bglt) BgL_o1167z00_2754)));
									BgL_arg1817z00_2957 = BgL_res2031z00_2958;
								}
								BgL_arg1816z00_2956 = (BgL_arg1817z00_2957 - OBJECT_TYPE);
							}
							BgL_arg1760z00_2955 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2956);
						}
						BgL_arg1759z00_2954 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1760z00_2955);
					}
					{	/* Inline/size.scm 26 */
						long BgL_res2033z00_2959;

						{	/* Inline/size.scm 26 */
							obj_t BgL_tmpz00_3357;

							BgL_tmpz00_3357 = ((obj_t) BgL_arg1759z00_2954);
							BgL_res2033z00_2959 = BGL_CLASS_INDEX(BgL_tmpz00_3357);
						}
						BgL_arg1757z00_2953 = BgL_res2033z00_2959;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_letzd2varzd2_bglt) BgL_o1167z00_2754)), BgL_arg1757z00_2953);
			}
			{	/* Inline/size.scm 26 */
				BgL_objectz00_bglt BgL_tmpz00_3363;

				BgL_tmpz00_3363 =
					((BgL_objectz00_bglt) ((BgL_letzd2varzd2_bglt) BgL_o1167z00_2754));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3363, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_letzd2varzd2_bglt) BgL_o1167z00_2754));
			return
				((BgL_letzd2varzd2_bglt) ((BgL_letzd2varzd2_bglt) BgL_o1167z00_2754));
		}

	}



/* &<@anonymous:1755> */
	obj_t BGl_z62zc3z04anonymousza31755ze3ze5zzinline_siza7eza7(obj_t
		BgL_envz00_2755, obj_t BgL_new1166z00_2756)
	{
		{	/* Inline/size.scm 26 */
			{
				BgL_letzd2varzd2_bglt BgL_auxz00_3371;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3375;

					{	/* Inline/size.scm 26 */
						obj_t BgL_classz00_2961;

						BgL_classz00_2961 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 26 */
							obj_t BgL__ortest_1106z00_2962;

							BgL__ortest_1106z00_2962 = BGL_CLASS_NIL(BgL_classz00_2961);
							if (CBOOL(BgL__ortest_1106z00_2962))
								{	/* Inline/size.scm 26 */
									BgL_auxz00_3375 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2962);
								}
							else
								{	/* Inline/size.scm 26 */
									BgL_auxz00_3375 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2961));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3375), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_letzd2varzd2_bglt)
										BgL_new1166z00_2756))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_letzd2varzd2_bglt)
							COBJECT(((BgL_letzd2varzd2_bglt) ((BgL_letzd2varzd2_bglt)
										BgL_new1166z00_2756))))->BgL_bindingsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_3394;

					{	/* Inline/size.scm 26 */
						obj_t BgL_classz00_2963;

						BgL_classz00_2963 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 26 */
							obj_t BgL__ortest_1106z00_2964;

							BgL__ortest_1106z00_2964 = BGL_CLASS_NIL(BgL_classz00_2963);
							if (CBOOL(BgL__ortest_1106z00_2964))
								{	/* Inline/size.scm 26 */
									BgL_auxz00_3394 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_2964);
								}
							else
								{	/* Inline/size.scm 26 */
									BgL_auxz00_3394 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2963));
								}
						}
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt)
										((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756))))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3394), BUNSPEC);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt)
									((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756))))->
						BgL_removablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				{
					BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_3407;

					{
						obj_t BgL_auxz00_3408;

						{	/* Inline/size.scm 26 */
							BgL_objectz00_bglt BgL_tmpz00_3409;

							BgL_tmpz00_3409 =
								((BgL_objectz00_bglt)
								((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756));
							BgL_auxz00_3408 = BGL_OBJECT_WIDENING(BgL_tmpz00_3409);
						}
						BgL_auxz00_3407 =
							((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_3408);
					}
					((((BgL_siza7edzd2letzd2varza7_bglt) COBJECT(BgL_auxz00_3407))->
							BgL_siza7eza7) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_3371 = ((BgL_letzd2varzd2_bglt) BgL_new1166z00_2756);
				return ((obj_t) BgL_auxz00_3371);
			}
		}

	}



/* &lambda1747 */
	BgL_letzd2varzd2_bglt BGl_z62lambda1747z62zzinline_siza7eza7(obj_t
		BgL_envz00_2757, obj_t BgL_o1163z00_2758)
	{
		{	/* Inline/size.scm 26 */
			{	/* Inline/size.scm 26 */
				BgL_siza7edzd2letzd2varza7_bglt BgL_wide1165z00_2966;

				BgL_wide1165z00_2966 =
					((BgL_siza7edzd2letzd2varza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_siza7edzd2letzd2varza7_bgl))));
				{	/* Inline/size.scm 26 */
					obj_t BgL_auxz00_3422;
					BgL_objectz00_bglt BgL_tmpz00_3418;

					BgL_auxz00_3422 = ((obj_t) BgL_wide1165z00_2966);
					BgL_tmpz00_3418 =
						((BgL_objectz00_bglt)
						((BgL_letzd2varzd2_bglt)
							((BgL_letzd2varzd2_bglt) BgL_o1163z00_2758)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3418, BgL_auxz00_3422);
				}
				((BgL_objectz00_bglt)
					((BgL_letzd2varzd2_bglt)
						((BgL_letzd2varzd2_bglt) BgL_o1163z00_2758)));
				{	/* Inline/size.scm 26 */
					long BgL_arg1754z00_2967;

					{	/* Inline/size.scm 26 */
						long BgL_res2030z00_2968;

						BgL_res2030z00_2968 =
							BGL_CLASS_INDEX(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
						BgL_arg1754z00_2967 = BgL_res2030z00_2968;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_letzd2varzd2_bglt)
								((BgL_letzd2varzd2_bglt) BgL_o1163z00_2758))),
						BgL_arg1754z00_2967);
				}
				return
					((BgL_letzd2varzd2_bglt)
					((BgL_letzd2varzd2_bglt)
						((BgL_letzd2varzd2_bglt) BgL_o1163z00_2758)));
			}
		}

	}



/* &lambda1744 */
	BgL_letzd2varzd2_bglt BGl_z62lambda1744z62zzinline_siza7eza7(obj_t
		BgL_envz00_2759, obj_t BgL_loc1155z00_2760, obj_t BgL_type1156z00_2761,
		obj_t BgL_sidezd2effect1157zd2_2762, obj_t BgL_key1158z00_2763,
		obj_t BgL_bindings1159z00_2764, obj_t BgL_body1160z00_2765,
		obj_t BgL_removablezf31161zf3_2766, obj_t BgL_siza7e1162za7_2767)
	{
		{	/* Inline/size.scm 26 */
			{	/* Inline/size.scm 26 */
				bool_t BgL_removablezf31161zf3_2971;
				long BgL_siza7e1162za7_2972;

				BgL_removablezf31161zf3_2971 = CBOOL(BgL_removablezf31161zf3_2766);
				BgL_siza7e1162za7_2972 = (long) CINT(BgL_siza7e1162za7_2767);
				{	/* Inline/size.scm 26 */
					BgL_letzd2varzd2_bglt BgL_new1248z00_2973;

					{	/* Inline/size.scm 26 */
						BgL_letzd2varzd2_bglt BgL_tmp1246z00_2974;
						BgL_siza7edzd2letzd2varza7_bglt BgL_wide1247z00_2975;

						{
							BgL_letzd2varzd2_bglt BgL_auxz00_3438;

							{	/* Inline/size.scm 26 */
								BgL_letzd2varzd2_bglt BgL_new1245z00_2976;

								BgL_new1245z00_2976 =
									((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_letzd2varzd2_bgl))));
								{	/* Inline/size.scm 26 */
									long BgL_arg1746z00_2977;

									{	/* Inline/size.scm 26 */
										long BgL_res2028z00_2978;

										BgL_res2028z00_2978 =
											BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
										BgL_arg1746z00_2977 = BgL_res2028z00_2978;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1245z00_2976),
										BgL_arg1746z00_2977);
								}
								{	/* Inline/size.scm 26 */
									BgL_objectz00_bglt BgL_tmpz00_3443;

									BgL_tmpz00_3443 = ((BgL_objectz00_bglt) BgL_new1245z00_2976);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3443, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1245z00_2976);
								BgL_auxz00_3438 = BgL_new1245z00_2976;
							}
							BgL_tmp1246z00_2974 = ((BgL_letzd2varzd2_bglt) BgL_auxz00_3438);
						}
						BgL_wide1247z00_2975 =
							((BgL_siza7edzd2letzd2varza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_siza7edzd2letzd2varza7_bgl))));
						{	/* Inline/size.scm 26 */
							obj_t BgL_auxz00_3451;
							BgL_objectz00_bglt BgL_tmpz00_3449;

							BgL_auxz00_3451 = ((obj_t) BgL_wide1247z00_2975);
							BgL_tmpz00_3449 = ((BgL_objectz00_bglt) BgL_tmp1246z00_2974);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3449, BgL_auxz00_3451);
						}
						((BgL_objectz00_bglt) BgL_tmp1246z00_2974);
						{	/* Inline/size.scm 26 */
							long BgL_arg1745z00_2979;

							{	/* Inline/size.scm 26 */
								long BgL_res2029z00_2980;

								BgL_res2029z00_2980 =
									BGL_CLASS_INDEX(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
								BgL_arg1745z00_2979 = BgL_res2029z00_2980;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1246z00_2974),
								BgL_arg1745z00_2979);
						}
						BgL_new1248z00_2973 = ((BgL_letzd2varzd2_bglt) BgL_tmp1246z00_2974);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1248z00_2973)))->BgL_locz00) =
						((obj_t) BgL_loc1155z00_2760), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1248z00_2973)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1156z00_2761)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1248z00_2973)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1157zd2_2762), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1248z00_2973)))->BgL_keyz00) =
						((obj_t) BgL_key1158z00_2763), BUNSPEC);
					((((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_new1248z00_2973)))->BgL_bindingsz00) =
						((obj_t) BgL_bindings1159z00_2764), BUNSPEC);
					((((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_new1248z00_2973)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_body1160z00_2765)),
						BUNSPEC);
					((((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
										BgL_new1248z00_2973)))->BgL_removablezf3zf3) =
						((bool_t) BgL_removablezf31161zf3_2971), BUNSPEC);
					{
						BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_3475;

						{
							obj_t BgL_auxz00_3476;

							{	/* Inline/size.scm 26 */
								BgL_objectz00_bglt BgL_tmpz00_3477;

								BgL_tmpz00_3477 = ((BgL_objectz00_bglt) BgL_new1248z00_2973);
								BgL_auxz00_3476 = BGL_OBJECT_WIDENING(BgL_tmpz00_3477);
							}
							BgL_auxz00_3475 =
								((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_3476);
						}
						((((BgL_siza7edzd2letzd2varza7_bglt) COBJECT(BgL_auxz00_3475))->
								BgL_siza7eza7) = ((long) BgL_siza7e1162za7_2972), BUNSPEC);
					}
					return BgL_new1248z00_2973;
				}
			}
		}

	}



/* &lambda1773 */
	obj_t BGl_z62lambda1773z62zzinline_siza7eza7(obj_t BgL_envz00_2768,
		obj_t BgL_oz00_2769, obj_t BgL_vz00_2770)
	{
		{	/* Inline/size.scm 26 */
			{	/* Inline/size.scm 26 */
				long BgL_vz00_2982;

				BgL_vz00_2982 = (long) CINT(BgL_vz00_2770);
				{
					BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_3483;

					{
						obj_t BgL_auxz00_3484;

						{	/* Inline/size.scm 26 */
							BgL_objectz00_bglt BgL_tmpz00_3485;

							BgL_tmpz00_3485 =
								((BgL_objectz00_bglt) ((BgL_letzd2varzd2_bglt) BgL_oz00_2769));
							BgL_auxz00_3484 = BGL_OBJECT_WIDENING(BgL_tmpz00_3485);
						}
						BgL_auxz00_3483 =
							((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_3484);
					}
					return
						((((BgL_siza7edzd2letzd2varza7_bglt) COBJECT(BgL_auxz00_3483))->
							BgL_siza7eza7) = ((long) BgL_vz00_2982), BUNSPEC);
		}}}

	}



/* &lambda1772 */
	obj_t BGl_z62lambda1772z62zzinline_siza7eza7(obj_t BgL_envz00_2771,
		obj_t BgL_oz00_2772)
	{
		{	/* Inline/size.scm 26 */
			{	/* Inline/size.scm 26 */
				long BgL_tmpz00_3491;

				{
					BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_3492;

					{
						obj_t BgL_auxz00_3493;

						{	/* Inline/size.scm 26 */
							BgL_objectz00_bglt BgL_tmpz00_3494;

							BgL_tmpz00_3494 =
								((BgL_objectz00_bglt) ((BgL_letzd2varzd2_bglt) BgL_oz00_2772));
							BgL_auxz00_3493 = BGL_OBJECT_WIDENING(BgL_tmpz00_3494);
						}
						BgL_auxz00_3492 =
							((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_3493);
					}
					BgL_tmpz00_3491 =
						(((BgL_siza7edzd2letzd2varza7_bglt) COBJECT(BgL_auxz00_3492))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_3491);
			}
		}

	}



/* &lambda1721 */
	BgL_letzd2funzd2_bglt BGl_z62lambda1721z62zzinline_siza7eza7(obj_t
		BgL_envz00_2773, obj_t BgL_o1153z00_2774)
	{
		{	/* Inline/size.scm 25 */
			{	/* Inline/size.scm 25 */
				long BgL_arg1725z00_2985;

				{	/* Inline/size.scm 25 */
					obj_t BgL_arg1726z00_2986;

					{	/* Inline/size.scm 25 */
						obj_t BgL_arg1727z00_2987;

						{	/* Inline/size.scm 25 */
							long BgL_arg1816z00_2988;

							{	/* Inline/size.scm 25 */
								long BgL_arg1817z00_2989;

								{	/* Inline/size.scm 25 */
									long BgL_res2025z00_2990;

									BgL_res2025z00_2990 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_letzd2funzd2_bglt) BgL_o1153z00_2774)));
									BgL_arg1817z00_2989 = BgL_res2025z00_2990;
								}
								BgL_arg1816z00_2988 = (BgL_arg1817z00_2989 - OBJECT_TYPE);
							}
							BgL_arg1727z00_2987 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2988);
						}
						BgL_arg1726z00_2986 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1727z00_2987);
					}
					{	/* Inline/size.scm 25 */
						long BgL_res2027z00_2991;

						{	/* Inline/size.scm 25 */
							obj_t BgL_tmpz00_3507;

							BgL_tmpz00_3507 = ((obj_t) BgL_arg1726z00_2986);
							BgL_res2027z00_2991 = BGL_CLASS_INDEX(BgL_tmpz00_3507);
						}
						BgL_arg1725z00_2985 = BgL_res2027z00_2991;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_letzd2funzd2_bglt) BgL_o1153z00_2774)), BgL_arg1725z00_2985);
			}
			{	/* Inline/size.scm 25 */
				BgL_objectz00_bglt BgL_tmpz00_3513;

				BgL_tmpz00_3513 =
					((BgL_objectz00_bglt) ((BgL_letzd2funzd2_bglt) BgL_o1153z00_2774));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3513, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_letzd2funzd2_bglt) BgL_o1153z00_2774));
			return
				((BgL_letzd2funzd2_bglt) ((BgL_letzd2funzd2_bglt) BgL_o1153z00_2774));
		}

	}



/* &<@anonymous:1720> */
	obj_t BGl_z62zc3z04anonymousza31720ze3ze5zzinline_siza7eza7(obj_t
		BgL_envz00_2775, obj_t BgL_new1152z00_2776)
	{
		{	/* Inline/size.scm 25 */
			{
				BgL_letzd2funzd2_bglt BgL_auxz00_3521;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3525;

					{	/* Inline/size.scm 25 */
						obj_t BgL_classz00_2993;

						BgL_classz00_2993 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 25 */
							obj_t BgL__ortest_1106z00_2994;

							BgL__ortest_1106z00_2994 = BGL_CLASS_NIL(BgL_classz00_2993);
							if (CBOOL(BgL__ortest_1106z00_2994))
								{	/* Inline/size.scm 25 */
									BgL_auxz00_3525 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2994);
								}
							else
								{	/* Inline/size.scm 25 */
									BgL_auxz00_3525 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2993));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3525), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_letzd2funzd2_bglt)
										BgL_new1152z00_2776))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_letzd2funzd2_bglt)
							COBJECT(((BgL_letzd2funzd2_bglt) ((BgL_letzd2funzd2_bglt)
										BgL_new1152z00_2776))))->BgL_localsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_3544;

					{	/* Inline/size.scm 25 */
						obj_t BgL_classz00_2995;

						BgL_classz00_2995 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 25 */
							obj_t BgL__ortest_1106z00_2996;

							BgL__ortest_1106z00_2996 = BGL_CLASS_NIL(BgL_classz00_2995);
							if (CBOOL(BgL__ortest_1106z00_2996))
								{	/* Inline/size.scm 25 */
									BgL_auxz00_3544 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_2996);
								}
							else
								{	/* Inline/size.scm 25 */
									BgL_auxz00_3544 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2995));
								}
						}
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt)
										((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776))))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3544), BUNSPEC);
				}
				{
					BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_3554;

					{
						obj_t BgL_auxz00_3555;

						{	/* Inline/size.scm 25 */
							BgL_objectz00_bglt BgL_tmpz00_3556;

							BgL_tmpz00_3556 =
								((BgL_objectz00_bglt)
								((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776));
							BgL_auxz00_3555 = BGL_OBJECT_WIDENING(BgL_tmpz00_3556);
						}
						BgL_auxz00_3554 =
							((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_3555);
					}
					((((BgL_siza7edzd2letzd2funza7_bglt) COBJECT(BgL_auxz00_3554))->
							BgL_siza7eza7) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_3521 = ((BgL_letzd2funzd2_bglt) BgL_new1152z00_2776);
				return ((obj_t) BgL_auxz00_3521);
			}
		}

	}



/* &lambda1713 */
	BgL_letzd2funzd2_bglt BGl_z62lambda1713z62zzinline_siza7eza7(obj_t
		BgL_envz00_2777, obj_t BgL_o1149z00_2778)
	{
		{	/* Inline/size.scm 25 */
			{	/* Inline/size.scm 25 */
				BgL_siza7edzd2letzd2funza7_bglt BgL_wide1151z00_2998;

				BgL_wide1151z00_2998 =
					((BgL_siza7edzd2letzd2funza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_siza7edzd2letzd2funza7_bgl))));
				{	/* Inline/size.scm 25 */
					obj_t BgL_auxz00_3569;
					BgL_objectz00_bglt BgL_tmpz00_3565;

					BgL_auxz00_3569 = ((obj_t) BgL_wide1151z00_2998);
					BgL_tmpz00_3565 =
						((BgL_objectz00_bglt)
						((BgL_letzd2funzd2_bglt)
							((BgL_letzd2funzd2_bglt) BgL_o1149z00_2778)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3565, BgL_auxz00_3569);
				}
				((BgL_objectz00_bglt)
					((BgL_letzd2funzd2_bglt)
						((BgL_letzd2funzd2_bglt) BgL_o1149z00_2778)));
				{	/* Inline/size.scm 25 */
					long BgL_arg1719z00_2999;

					{	/* Inline/size.scm 25 */
						long BgL_res2024z00_3000;

						BgL_res2024z00_3000 =
							BGL_CLASS_INDEX(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
						BgL_arg1719z00_2999 = BgL_res2024z00_3000;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_letzd2funzd2_bglt)
								((BgL_letzd2funzd2_bglt) BgL_o1149z00_2778))),
						BgL_arg1719z00_2999);
				}
				return
					((BgL_letzd2funzd2_bglt)
					((BgL_letzd2funzd2_bglt)
						((BgL_letzd2funzd2_bglt) BgL_o1149z00_2778)));
			}
		}

	}



/* &lambda1708 */
	BgL_letzd2funzd2_bglt BGl_z62lambda1708z62zzinline_siza7eza7(obj_t
		BgL_envz00_2779, obj_t BgL_loc1142z00_2780, obj_t BgL_type1143z00_2781,
		obj_t BgL_sidezd2effect1144zd2_2782, obj_t BgL_key1145z00_2783,
		obj_t BgL_locals1146z00_2784, obj_t BgL_body1147z00_2785,
		obj_t BgL_siza7e1148za7_2786)
	{
		{	/* Inline/size.scm 25 */
			{	/* Inline/size.scm 25 */
				long BgL_siza7e1148za7_3003;

				BgL_siza7e1148za7_3003 = (long) CINT(BgL_siza7e1148za7_2786);
				{	/* Inline/size.scm 25 */
					BgL_letzd2funzd2_bglt BgL_new1243z00_3004;

					{	/* Inline/size.scm 25 */
						BgL_letzd2funzd2_bglt BgL_tmp1241z00_3005;
						BgL_siza7edzd2letzd2funza7_bglt BgL_wide1242z00_3006;

						{
							BgL_letzd2funzd2_bglt BgL_auxz00_3584;

							{	/* Inline/size.scm 25 */
								BgL_letzd2funzd2_bglt BgL_new1240z00_3007;

								BgL_new1240z00_3007 =
									((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_letzd2funzd2_bgl))));
								{	/* Inline/size.scm 25 */
									long BgL_arg1712z00_3008;

									{	/* Inline/size.scm 25 */
										long BgL_res2022z00_3009;

										BgL_res2022z00_3009 =
											BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
										BgL_arg1712z00_3008 = BgL_res2022z00_3009;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1240z00_3007),
										BgL_arg1712z00_3008);
								}
								{	/* Inline/size.scm 25 */
									BgL_objectz00_bglt BgL_tmpz00_3589;

									BgL_tmpz00_3589 = ((BgL_objectz00_bglt) BgL_new1240z00_3007);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3589, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1240z00_3007);
								BgL_auxz00_3584 = BgL_new1240z00_3007;
							}
							BgL_tmp1241z00_3005 = ((BgL_letzd2funzd2_bglt) BgL_auxz00_3584);
						}
						BgL_wide1242z00_3006 =
							((BgL_siza7edzd2letzd2funza7_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_siza7edzd2letzd2funza7_bgl))));
						{	/* Inline/size.scm 25 */
							obj_t BgL_auxz00_3597;
							BgL_objectz00_bglt BgL_tmpz00_3595;

							BgL_auxz00_3597 = ((obj_t) BgL_wide1242z00_3006);
							BgL_tmpz00_3595 = ((BgL_objectz00_bglt) BgL_tmp1241z00_3005);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3595, BgL_auxz00_3597);
						}
						((BgL_objectz00_bglt) BgL_tmp1241z00_3005);
						{	/* Inline/size.scm 25 */
							long BgL_arg1711z00_3010;

							{	/* Inline/size.scm 25 */
								long BgL_res2023z00_3011;

								BgL_res2023z00_3011 =
									BGL_CLASS_INDEX(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
								BgL_arg1711z00_3010 = BgL_res2023z00_3011;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1241z00_3005),
								BgL_arg1711z00_3010);
						}
						BgL_new1243z00_3004 = ((BgL_letzd2funzd2_bglt) BgL_tmp1241z00_3005);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1243z00_3004)))->BgL_locz00) =
						((obj_t) BgL_loc1142z00_2780), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1243z00_3004)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1143z00_2781)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1243z00_3004)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1144zd2_2782), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1243z00_3004)))->BgL_keyz00) =
						((obj_t) BgL_key1145z00_2783), BUNSPEC);
					((((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
										BgL_new1243z00_3004)))->BgL_localsz00) =
						((obj_t) BgL_locals1146z00_2784), BUNSPEC);
					((((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
										BgL_new1243z00_3004)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_body1147z00_2785)),
						BUNSPEC);
					{
						BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_3619;

						{
							obj_t BgL_auxz00_3620;

							{	/* Inline/size.scm 25 */
								BgL_objectz00_bglt BgL_tmpz00_3621;

								BgL_tmpz00_3621 = ((BgL_objectz00_bglt) BgL_new1243z00_3004);
								BgL_auxz00_3620 = BGL_OBJECT_WIDENING(BgL_tmpz00_3621);
							}
							BgL_auxz00_3619 =
								((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_3620);
						}
						((((BgL_siza7edzd2letzd2funza7_bglt) COBJECT(BgL_auxz00_3619))->
								BgL_siza7eza7) = ((long) BgL_siza7e1148za7_3003), BUNSPEC);
					}
					return BgL_new1243z00_3004;
				}
			}
		}

	}



/* &lambda1733 */
	obj_t BGl_z62lambda1733z62zzinline_siza7eza7(obj_t BgL_envz00_2787,
		obj_t BgL_oz00_2788, obj_t BgL_vz00_2789)
	{
		{	/* Inline/size.scm 25 */
			{	/* Inline/size.scm 25 */
				long BgL_vz00_3013;

				BgL_vz00_3013 = (long) CINT(BgL_vz00_2789);
				{
					BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_3627;

					{
						obj_t BgL_auxz00_3628;

						{	/* Inline/size.scm 25 */
							BgL_objectz00_bglt BgL_tmpz00_3629;

							BgL_tmpz00_3629 =
								((BgL_objectz00_bglt) ((BgL_letzd2funzd2_bglt) BgL_oz00_2788));
							BgL_auxz00_3628 = BGL_OBJECT_WIDENING(BgL_tmpz00_3629);
						}
						BgL_auxz00_3627 =
							((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_3628);
					}
					return
						((((BgL_siza7edzd2letzd2funza7_bglt) COBJECT(BgL_auxz00_3627))->
							BgL_siza7eza7) = ((long) BgL_vz00_3013), BUNSPEC);
		}}}

	}



/* &lambda1732 */
	obj_t BGl_z62lambda1732z62zzinline_siza7eza7(obj_t BgL_envz00_2790,
		obj_t BgL_oz00_2791)
	{
		{	/* Inline/size.scm 25 */
			{	/* Inline/size.scm 25 */
				long BgL_tmpz00_3635;

				{
					BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_3636;

					{
						obj_t BgL_auxz00_3637;

						{	/* Inline/size.scm 25 */
							BgL_objectz00_bglt BgL_tmpz00_3638;

							BgL_tmpz00_3638 =
								((BgL_objectz00_bglt) ((BgL_letzd2funzd2_bglt) BgL_oz00_2791));
							BgL_auxz00_3637 = BGL_OBJECT_WIDENING(BgL_tmpz00_3638);
						}
						BgL_auxz00_3636 =
							((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_3637);
					}
					BgL_tmpz00_3635 =
						(((BgL_siza7edzd2letzd2funza7_bglt) COBJECT(BgL_auxz00_3636))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_3635);
			}
		}

	}



/* &lambda1666 */
	BgL_switchz00_bglt BGl_z62lambda1666z62zzinline_siza7eza7(obj_t
		BgL_envz00_2792, obj_t BgL_o1140z00_2793)
	{
		{	/* Inline/size.scm 24 */
			{	/* Inline/size.scm 24 */
				long BgL_arg1667z00_3016;

				{	/* Inline/size.scm 24 */
					obj_t BgL_arg1669z00_3017;

					{	/* Inline/size.scm 24 */
						obj_t BgL_arg1672z00_3018;

						{	/* Inline/size.scm 24 */
							long BgL_arg1816z00_3019;

							{	/* Inline/size.scm 24 */
								long BgL_arg1817z00_3020;

								{	/* Inline/size.scm 24 */
									long BgL_res2019z00_3021;

									BgL_res2019z00_3021 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_switchz00_bglt) BgL_o1140z00_2793)));
									BgL_arg1817z00_3020 = BgL_res2019z00_3021;
								}
								BgL_arg1816z00_3019 = (BgL_arg1817z00_3020 - OBJECT_TYPE);
							}
							BgL_arg1672z00_3018 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3019);
						}
						BgL_arg1669z00_3017 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1672z00_3018);
					}
					{	/* Inline/size.scm 24 */
						long BgL_res2021z00_3022;

						{	/* Inline/size.scm 24 */
							obj_t BgL_tmpz00_3651;

							BgL_tmpz00_3651 = ((obj_t) BgL_arg1669z00_3017);
							BgL_res2021z00_3022 = BGL_CLASS_INDEX(BgL_tmpz00_3651);
						}
						BgL_arg1667z00_3016 = BgL_res2021z00_3022;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_switchz00_bglt) BgL_o1140z00_2793)), BgL_arg1667z00_3016);
			}
			{	/* Inline/size.scm 24 */
				BgL_objectz00_bglt BgL_tmpz00_3657;

				BgL_tmpz00_3657 =
					((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_o1140z00_2793));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3657, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_o1140z00_2793));
			return ((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_o1140z00_2793));
		}

	}



/* &<@anonymous:1665> */
	obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzinline_siza7eza7(obj_t
		BgL_envz00_2794, obj_t BgL_new1139z00_2795)
	{
		{	/* Inline/size.scm 24 */
			{
				BgL_switchz00_bglt BgL_auxz00_3665;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_switchz00_bglt) BgL_new1139z00_2795))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3669;

					{	/* Inline/size.scm 24 */
						obj_t BgL_classz00_3024;

						BgL_classz00_3024 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 24 */
							obj_t BgL__ortest_1106z00_3025;

							BgL__ortest_1106z00_3025 = BGL_CLASS_NIL(BgL_classz00_3024);
							if (CBOOL(BgL__ortest_1106z00_3025))
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3669 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3025);
								}
							else
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3669 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3024));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_switchz00_bglt) BgL_new1139z00_2795))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3669), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_switchz00_bglt) BgL_new1139z00_2795))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_switchz00_bglt)
										BgL_new1139z00_2795))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_3685;

					{	/* Inline/size.scm 24 */
						obj_t BgL_classz00_3026;

						BgL_classz00_3026 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 24 */
							obj_t BgL__ortest_1106z00_3027;

							BgL__ortest_1106z00_3027 = BGL_CLASS_NIL(BgL_classz00_3026);
							if (CBOOL(BgL__ortest_1106z00_3027))
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3685 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3027);
								}
							else
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3685 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3026));
								}
						}
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt)
										((BgL_switchz00_bglt) BgL_new1139z00_2795))))->
							BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_3685), BUNSPEC);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt)
									((BgL_switchz00_bglt) BgL_new1139z00_2795))))->
						BgL_clausesz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3698;

					{	/* Inline/size.scm 24 */
						obj_t BgL_classz00_3028;

						BgL_classz00_3028 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 24 */
							obj_t BgL__ortest_1106z00_3029;

							BgL__ortest_1106z00_3029 = BGL_CLASS_NIL(BgL_classz00_3028);
							if (CBOOL(BgL__ortest_1106z00_3029))
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3698 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3029);
								}
							else
								{	/* Inline/size.scm 24 */
									BgL_auxz00_3698 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3028));
								}
						}
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt)
										((BgL_switchz00_bglt) BgL_new1139z00_2795))))->
							BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_auxz00_3698), BUNSPEC);
				}
				{
					BgL_siza7edzd2switchz75_bglt BgL_auxz00_3708;

					{
						obj_t BgL_auxz00_3709;

						{	/* Inline/size.scm 24 */
							BgL_objectz00_bglt BgL_tmpz00_3710;

							BgL_tmpz00_3710 =
								((BgL_objectz00_bglt)
								((BgL_switchz00_bglt) BgL_new1139z00_2795));
							BgL_auxz00_3709 = BGL_OBJECT_WIDENING(BgL_tmpz00_3710);
						}
						BgL_auxz00_3708 = ((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_3709);
					}
					((((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_3708))->
							BgL_siza7eza7) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_3665 = ((BgL_switchz00_bglt) BgL_new1139z00_2795);
				return ((obj_t) BgL_auxz00_3665);
			}
		}

	}



/* &lambda1663 */
	BgL_switchz00_bglt BGl_z62lambda1663z62zzinline_siza7eza7(obj_t
		BgL_envz00_2796, obj_t BgL_o1136z00_2797)
	{
		{	/* Inline/size.scm 24 */
			{	/* Inline/size.scm 24 */
				BgL_siza7edzd2switchz75_bglt BgL_wide1138z00_3031;

				BgL_wide1138z00_3031 =
					((BgL_siza7edzd2switchz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_siza7edzd2switchz75_bgl))));
				{	/* Inline/size.scm 24 */
					obj_t BgL_auxz00_3723;
					BgL_objectz00_bglt BgL_tmpz00_3719;

					BgL_auxz00_3723 = ((obj_t) BgL_wide1138z00_3031);
					BgL_tmpz00_3719 =
						((BgL_objectz00_bglt)
						((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_o1136z00_2797)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3719, BgL_auxz00_3723);
				}
				((BgL_objectz00_bglt)
					((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_o1136z00_2797)));
				{	/* Inline/size.scm 24 */
					long BgL_arg1664z00_3032;

					{	/* Inline/size.scm 24 */
						long BgL_res2018z00_3033;

						BgL_res2018z00_3033 =
							BGL_CLASS_INDEX(BGl_siza7edzd2switchz75zzinline_siza7eza7);
						BgL_arg1664z00_3032 = BgL_res2018z00_3033;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_switchz00_bglt)
								((BgL_switchz00_bglt) BgL_o1136z00_2797))),
						BgL_arg1664z00_3032);
				}
				return
					((BgL_switchz00_bglt)
					((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_o1136z00_2797)));
			}
		}

	}



/* &lambda1645 */
	BgL_switchz00_bglt BGl_z62lambda1645z62zzinline_siza7eza7(obj_t
		BgL_envz00_2798, obj_t BgL_loc1128z00_2799, obj_t BgL_type1129z00_2800,
		obj_t BgL_sidezd2effect1130zd2_2801, obj_t BgL_key1131z00_2802,
		obj_t BgL_test1132z00_2803, obj_t BgL_clauses1133z00_2804,
		obj_t BgL_itemzd2type1134zd2_2805, obj_t BgL_siza7e1135za7_2806)
	{
		{	/* Inline/size.scm 24 */
			{	/* Inline/size.scm 24 */
				long BgL_siza7e1135za7_3037;

				BgL_siza7e1135za7_3037 = (long) CINT(BgL_siza7e1135za7_2806);
				{	/* Inline/size.scm 24 */
					BgL_switchz00_bglt BgL_new1238z00_3038;

					{	/* Inline/size.scm 24 */
						BgL_switchz00_bglt BgL_tmp1236z00_3039;
						BgL_siza7edzd2switchz75_bglt BgL_wide1237z00_3040;

						{
							BgL_switchz00_bglt BgL_auxz00_3738;

							{	/* Inline/size.scm 24 */
								BgL_switchz00_bglt BgL_new1235z00_3041;

								BgL_new1235z00_3041 =
									((BgL_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_switchz00_bgl))));
								{	/* Inline/size.scm 24 */
									long BgL_arg1662z00_3042;

									{	/* Inline/size.scm 24 */
										long BgL_res2016z00_3043;

										BgL_res2016z00_3043 =
											BGL_CLASS_INDEX(BGl_switchz00zzast_nodez00);
										BgL_arg1662z00_3042 = BgL_res2016z00_3043;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1235z00_3041),
										BgL_arg1662z00_3042);
								}
								{	/* Inline/size.scm 24 */
									BgL_objectz00_bglt BgL_tmpz00_3743;

									BgL_tmpz00_3743 = ((BgL_objectz00_bglt) BgL_new1235z00_3041);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3743, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1235z00_3041);
								BgL_auxz00_3738 = BgL_new1235z00_3041;
							}
							BgL_tmp1236z00_3039 = ((BgL_switchz00_bglt) BgL_auxz00_3738);
						}
						BgL_wide1237z00_3040 =
							((BgL_siza7edzd2switchz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_siza7edzd2switchz75_bgl))));
						{	/* Inline/size.scm 24 */
							obj_t BgL_auxz00_3751;
							BgL_objectz00_bglt BgL_tmpz00_3749;

							BgL_auxz00_3751 = ((obj_t) BgL_wide1237z00_3040);
							BgL_tmpz00_3749 = ((BgL_objectz00_bglt) BgL_tmp1236z00_3039);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3749, BgL_auxz00_3751);
						}
						((BgL_objectz00_bglt) BgL_tmp1236z00_3039);
						{	/* Inline/size.scm 24 */
							long BgL_arg1652z00_3044;

							{	/* Inline/size.scm 24 */
								long BgL_res2017z00_3045;

								BgL_res2017z00_3045 =
									BGL_CLASS_INDEX(BGl_siza7edzd2switchz75zzinline_siza7eza7);
								BgL_arg1652z00_3044 = BgL_res2017z00_3045;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1236z00_3039),
								BgL_arg1652z00_3044);
						}
						BgL_new1238z00_3038 = ((BgL_switchz00_bglt) BgL_tmp1236z00_3039);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1238z00_3038)))->BgL_locz00) =
						((obj_t) BgL_loc1128z00_2799), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1238z00_3038)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1129z00_2800)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1238z00_3038)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1130zd2_2801), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1238z00_3038)))->BgL_keyz00) =
						((obj_t) BgL_key1131z00_2802), BUNSPEC);
					((((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_new1238z00_3038)))->BgL_testz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_test1132z00_2803)),
						BUNSPEC);
					((((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_new1238z00_3038)))->BgL_clausesz00) =
						((obj_t) BgL_clauses1133z00_2804), BUNSPEC);
					((((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
										BgL_new1238z00_3038)))->BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt)
								BgL_itemzd2type1134zd2_2805)), BUNSPEC);
					{
						BgL_siza7edzd2switchz75_bglt BgL_auxz00_3776;

						{
							obj_t BgL_auxz00_3777;

							{	/* Inline/size.scm 24 */
								BgL_objectz00_bglt BgL_tmpz00_3778;

								BgL_tmpz00_3778 = ((BgL_objectz00_bglt) BgL_new1238z00_3038);
								BgL_auxz00_3777 = BGL_OBJECT_WIDENING(BgL_tmpz00_3778);
							}
							BgL_auxz00_3776 =
								((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_3777);
						}
						((((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_3776))->
								BgL_siza7eza7) = ((long) BgL_siza7e1135za7_3037), BUNSPEC);
					}
					return BgL_new1238z00_3038;
				}
			}
		}

	}



/* &lambda1688 */
	obj_t BGl_z62lambda1688z62zzinline_siza7eza7(obj_t BgL_envz00_2807,
		obj_t BgL_oz00_2808, obj_t BgL_vz00_2809)
	{
		{	/* Inline/size.scm 24 */
			{	/* Inline/size.scm 24 */
				long BgL_vz00_3047;

				BgL_vz00_3047 = (long) CINT(BgL_vz00_2809);
				{
					BgL_siza7edzd2switchz75_bglt BgL_auxz00_3784;

					{
						obj_t BgL_auxz00_3785;

						{	/* Inline/size.scm 24 */
							BgL_objectz00_bglt BgL_tmpz00_3786;

							BgL_tmpz00_3786 =
								((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_oz00_2808));
							BgL_auxz00_3785 = BGL_OBJECT_WIDENING(BgL_tmpz00_3786);
						}
						BgL_auxz00_3784 = ((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_3785);
					}
					return
						((((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_3784))->
							BgL_siza7eza7) = ((long) BgL_vz00_3047), BUNSPEC);
		}}}

	}



/* &lambda1687 */
	obj_t BGl_z62lambda1687z62zzinline_siza7eza7(obj_t BgL_envz00_2810,
		obj_t BgL_oz00_2811)
	{
		{	/* Inline/size.scm 24 */
			{	/* Inline/size.scm 24 */
				long BgL_tmpz00_3792;

				{
					BgL_siza7edzd2switchz75_bglt BgL_auxz00_3793;

					{
						obj_t BgL_auxz00_3794;

						{	/* Inline/size.scm 24 */
							BgL_objectz00_bglt BgL_tmpz00_3795;

							BgL_tmpz00_3795 =
								((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_oz00_2811));
							BgL_auxz00_3794 = BGL_OBJECT_WIDENING(BgL_tmpz00_3795);
						}
						BgL_auxz00_3793 = ((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_3794);
					}
					BgL_tmpz00_3792 =
						(((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_3793))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_3792);
			}
		}

	}



/* &lambda1606 */
	BgL_syncz00_bglt BGl_z62lambda1606z62zzinline_siza7eza7(obj_t BgL_envz00_2812,
		obj_t BgL_o1126z00_2813)
	{
		{	/* Inline/size.scm 23 */
			{	/* Inline/size.scm 23 */
				long BgL_arg1611z00_3050;

				{	/* Inline/size.scm 23 */
					obj_t BgL_arg1612z00_3051;

					{	/* Inline/size.scm 23 */
						obj_t BgL_arg1613z00_3052;

						{	/* Inline/size.scm 23 */
							long BgL_arg1816z00_3053;

							{	/* Inline/size.scm 23 */
								long BgL_arg1817z00_3054;

								{	/* Inline/size.scm 23 */
									long BgL_res2013z00_3055;

									BgL_res2013z00_3055 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_syncz00_bglt) BgL_o1126z00_2813)));
									BgL_arg1817z00_3054 = BgL_res2013z00_3055;
								}
								BgL_arg1816z00_3053 = (BgL_arg1817z00_3054 - OBJECT_TYPE);
							}
							BgL_arg1613z00_3052 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3053);
						}
						BgL_arg1612z00_3051 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1613z00_3052);
					}
					{	/* Inline/size.scm 23 */
						long BgL_res2015z00_3056;

						{	/* Inline/size.scm 23 */
							obj_t BgL_tmpz00_3808;

							BgL_tmpz00_3808 = ((obj_t) BgL_arg1612z00_3051);
							BgL_res2015z00_3056 = BGL_CLASS_INDEX(BgL_tmpz00_3808);
						}
						BgL_arg1611z00_3050 = BgL_res2015z00_3056;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_syncz00_bglt) BgL_o1126z00_2813)), BgL_arg1611z00_3050);
			}
			{	/* Inline/size.scm 23 */
				BgL_objectz00_bglt BgL_tmpz00_3814;

				BgL_tmpz00_3814 =
					((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_o1126z00_2813));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3814, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_o1126z00_2813));
			return ((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_o1126z00_2813));
		}

	}



/* &<@anonymous:1605> */
	obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzinline_siza7eza7(obj_t
		BgL_envz00_2814, obj_t BgL_new1125z00_2815)
	{
		{	/* Inline/size.scm 23 */
			{
				BgL_syncz00_bglt BgL_auxz00_3822;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_new1125z00_2815))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3826;

					{	/* Inline/size.scm 23 */
						obj_t BgL_classz00_3058;

						BgL_classz00_3058 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 23 */
							obj_t BgL__ortest_1106z00_3059;

							BgL__ortest_1106z00_3059 = BGL_CLASS_NIL(BgL_classz00_3058);
							if (CBOOL(BgL__ortest_1106z00_3059))
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3826 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3059);
								}
							else
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3826 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3058));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_syncz00_bglt) BgL_new1125z00_2815))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_3826), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3836;

					{	/* Inline/size.scm 23 */
						obj_t BgL_classz00_3060;

						BgL_classz00_3060 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 23 */
							obj_t BgL__ortest_1106z00_3061;

							BgL__ortest_1106z00_3061 = BGL_CLASS_NIL(BgL_classz00_3060);
							if (CBOOL(BgL__ortest_1106z00_3061))
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3836 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3061);
								}
							else
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3836 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3060));
								}
						}
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt)
										((BgL_syncz00_bglt) BgL_new1125z00_2815))))->BgL_mutexz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3836), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3846;

					{	/* Inline/size.scm 23 */
						obj_t BgL_classz00_3062;

						BgL_classz00_3062 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 23 */
							obj_t BgL__ortest_1106z00_3063;

							BgL__ortest_1106z00_3063 = BGL_CLASS_NIL(BgL_classz00_3062);
							if (CBOOL(BgL__ortest_1106z00_3063))
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3846 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3063);
								}
							else
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3846 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3062));
								}
						}
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt)
										((BgL_syncz00_bglt) BgL_new1125z00_2815))))->
							BgL_prelockz00) = ((BgL_nodez00_bglt) BgL_auxz00_3846), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3856;

					{	/* Inline/size.scm 23 */
						obj_t BgL_classz00_3064;

						BgL_classz00_3064 = BGl_nodez00zzast_nodez00;
						{	/* Inline/size.scm 23 */
							obj_t BgL__ortest_1106z00_3065;

							BgL__ortest_1106z00_3065 = BGL_CLASS_NIL(BgL_classz00_3064);
							if (CBOOL(BgL__ortest_1106z00_3065))
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3856 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3065);
								}
							else
								{	/* Inline/size.scm 23 */
									BgL_auxz00_3856 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3064));
								}
						}
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt)
										((BgL_syncz00_bglt) BgL_new1125z00_2815))))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3856), BUNSPEC);
				}
				{
					BgL_siza7edzd2syncz75_bglt BgL_auxz00_3866;

					{
						obj_t BgL_auxz00_3867;

						{	/* Inline/size.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_3868;

							BgL_tmpz00_3868 =
								((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_new1125z00_2815));
							BgL_auxz00_3867 = BGL_OBJECT_WIDENING(BgL_tmpz00_3868);
						}
						BgL_auxz00_3866 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_3867);
					}
					((((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_3866))->
							BgL_siza7eza7) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_3822 = ((BgL_syncz00_bglt) BgL_new1125z00_2815);
				return ((obj_t) BgL_auxz00_3822);
			}
		}

	}



/* &lambda1600 */
	BgL_syncz00_bglt BGl_z62lambda1600z62zzinline_siza7eza7(obj_t BgL_envz00_2816,
		obj_t BgL_o1121z00_2817)
	{
		{	/* Inline/size.scm 23 */
			{	/* Inline/size.scm 23 */
				BgL_siza7edzd2syncz75_bglt BgL_wide1123z00_3067;

				BgL_wide1123z00_3067 =
					((BgL_siza7edzd2syncz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_siza7edzd2syncz75_bgl))));
				{	/* Inline/size.scm 23 */
					obj_t BgL_auxz00_3881;
					BgL_objectz00_bglt BgL_tmpz00_3877;

					BgL_auxz00_3881 = ((obj_t) BgL_wide1123z00_3067);
					BgL_tmpz00_3877 =
						((BgL_objectz00_bglt)
						((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_o1121z00_2817)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3877, BgL_auxz00_3881);
				}
				((BgL_objectz00_bglt)
					((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_o1121z00_2817)));
				{	/* Inline/size.scm 23 */
					long BgL_arg1604z00_3068;

					{	/* Inline/size.scm 23 */
						long BgL_res2012z00_3069;

						BgL_res2012z00_3069 =
							BGL_CLASS_INDEX(BGl_siza7edzd2syncz75zzinline_siza7eza7);
						BgL_arg1604z00_3068 = BgL_res2012z00_3069;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_syncz00_bglt)
								((BgL_syncz00_bglt) BgL_o1121z00_2817))), BgL_arg1604z00_3068);
				}
				return
					((BgL_syncz00_bglt)
					((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_o1121z00_2817)));
			}
		}

	}



/* &lambda1593 */
	BgL_syncz00_bglt BGl_z62lambda1593z62zzinline_siza7eza7(obj_t BgL_envz00_2818,
		obj_t BgL_loc1115z00_2819, obj_t BgL_type1116z00_2820,
		obj_t BgL_mutex1117z00_2821, obj_t BgL_prelock1118z00_2822,
		obj_t BgL_body1119z00_2823, obj_t BgL_siza7e1120za7_2824)
	{
		{	/* Inline/size.scm 23 */
			{	/* Inline/size.scm 23 */
				long BgL_siza7e1120za7_3074;

				BgL_siza7e1120za7_3074 = (long) CINT(BgL_siza7e1120za7_2824);
				{	/* Inline/size.scm 23 */
					BgL_syncz00_bglt BgL_new1233z00_3075;

					{	/* Inline/size.scm 23 */
						BgL_syncz00_bglt BgL_tmp1231z00_3076;
						BgL_siza7edzd2syncz75_bglt BgL_wide1232z00_3077;

						{
							BgL_syncz00_bglt BgL_auxz00_3896;

							{	/* Inline/size.scm 23 */
								BgL_syncz00_bglt BgL_new1230z00_3078;

								BgL_new1230z00_3078 =
									((BgL_syncz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_syncz00_bgl))));
								{	/* Inline/size.scm 23 */
									long BgL_arg1599z00_3079;

									{	/* Inline/size.scm 23 */
										long BgL_res2010z00_3080;

										BgL_res2010z00_3080 =
											BGL_CLASS_INDEX(BGl_syncz00zzast_nodez00);
										BgL_arg1599z00_3079 = BgL_res2010z00_3080;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1230z00_3078),
										BgL_arg1599z00_3079);
								}
								{	/* Inline/size.scm 23 */
									BgL_objectz00_bglt BgL_tmpz00_3901;

									BgL_tmpz00_3901 = ((BgL_objectz00_bglt) BgL_new1230z00_3078);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3901, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1230z00_3078);
								BgL_auxz00_3896 = BgL_new1230z00_3078;
							}
							BgL_tmp1231z00_3076 = ((BgL_syncz00_bglt) BgL_auxz00_3896);
						}
						BgL_wide1232z00_3077 =
							((BgL_siza7edzd2syncz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_siza7edzd2syncz75_bgl))));
						{	/* Inline/size.scm 23 */
							obj_t BgL_auxz00_3909;
							BgL_objectz00_bglt BgL_tmpz00_3907;

							BgL_auxz00_3909 = ((obj_t) BgL_wide1232z00_3077);
							BgL_tmpz00_3907 = ((BgL_objectz00_bglt) BgL_tmp1231z00_3076);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3907, BgL_auxz00_3909);
						}
						((BgL_objectz00_bglt) BgL_tmp1231z00_3076);
						{	/* Inline/size.scm 23 */
							long BgL_arg1597z00_3081;

							{	/* Inline/size.scm 23 */
								long BgL_res2011z00_3082;

								BgL_res2011z00_3082 =
									BGL_CLASS_INDEX(BGl_siza7edzd2syncz75zzinline_siza7eza7);
								BgL_arg1597z00_3081 = BgL_res2011z00_3082;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1231z00_3076),
								BgL_arg1597z00_3081);
						}
						BgL_new1233z00_3075 = ((BgL_syncz00_bglt) BgL_tmp1231z00_3076);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1233z00_3075)))->BgL_locz00) =
						((obj_t) BgL_loc1115z00_2819), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1233z00_3075)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1116z00_2820)),
						BUNSPEC);
					((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt)
										BgL_new1233z00_3075)))->BgL_mutexz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_mutex1117z00_2821)),
						BUNSPEC);
					((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt)
										BgL_new1233z00_3075)))->BgL_prelockz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_prelock1118z00_2822)),
						BUNSPEC);
					((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt)
										BgL_new1233z00_3075)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_body1119z00_2823)),
						BUNSPEC);
					{
						BgL_siza7edzd2syncz75_bglt BgL_auxz00_3931;

						{
							obj_t BgL_auxz00_3932;

							{	/* Inline/size.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_3933;

								BgL_tmpz00_3933 = ((BgL_objectz00_bglt) BgL_new1233z00_3075);
								BgL_auxz00_3932 = BGL_OBJECT_WIDENING(BgL_tmpz00_3933);
							}
							BgL_auxz00_3931 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_3932);
						}
						((((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_3931))->
								BgL_siza7eza7) = ((long) BgL_siza7e1120za7_3074), BUNSPEC);
					}
					return BgL_new1233z00_3075;
				}
			}
		}

	}



/* &lambda1629 */
	obj_t BGl_z62lambda1629z62zzinline_siza7eza7(obj_t BgL_envz00_2825,
		obj_t BgL_oz00_2826, obj_t BgL_vz00_2827)
	{
		{	/* Inline/size.scm 23 */
			{	/* Inline/size.scm 23 */
				long BgL_vz00_3084;

				BgL_vz00_3084 = (long) CINT(BgL_vz00_2827);
				{
					BgL_siza7edzd2syncz75_bglt BgL_auxz00_3939;

					{
						obj_t BgL_auxz00_3940;

						{	/* Inline/size.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_3941;

							BgL_tmpz00_3941 =
								((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_oz00_2826));
							BgL_auxz00_3940 = BGL_OBJECT_WIDENING(BgL_tmpz00_3941);
						}
						BgL_auxz00_3939 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_3940);
					}
					return
						((((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_3939))->
							BgL_siza7eza7) = ((long) BgL_vz00_3084), BUNSPEC);
		}}}

	}



/* &lambda1628 */
	obj_t BGl_z62lambda1628z62zzinline_siza7eza7(obj_t BgL_envz00_2828,
		obj_t BgL_oz00_2829)
	{
		{	/* Inline/size.scm 23 */
			{	/* Inline/size.scm 23 */
				long BgL_tmpz00_3947;

				{
					BgL_siza7edzd2syncz75_bglt BgL_auxz00_3948;

					{
						obj_t BgL_auxz00_3949;

						{	/* Inline/size.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_3950;

							BgL_tmpz00_3950 =
								((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_oz00_2829));
							BgL_auxz00_3949 = BGL_OBJECT_WIDENING(BgL_tmpz00_3950);
						}
						BgL_auxz00_3948 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_3949);
					}
					BgL_tmpz00_3947 =
						(((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_3948))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_3947);
			}
		}

	}



/* &lambda1542 */
	BgL_sequencez00_bglt BGl_z62lambda1542z62zzinline_siza7eza7(obj_t
		BgL_envz00_2830, obj_t BgL_o1113z00_2831)
	{
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				long BgL_arg1552z00_3087;

				{	/* Inline/size.scm 22 */
					obj_t BgL_arg1558z00_3088;

					{	/* Inline/size.scm 22 */
						obj_t BgL_arg1561z00_3089;

						{	/* Inline/size.scm 22 */
							long BgL_arg1816z00_3090;

							{	/* Inline/size.scm 22 */
								long BgL_arg1817z00_3091;

								{	/* Inline/size.scm 22 */
									long BgL_res2007z00_3092;

									BgL_res2007z00_3092 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sequencez00_bglt) BgL_o1113z00_2831)));
									BgL_arg1817z00_3091 = BgL_res2007z00_3092;
								}
								BgL_arg1816z00_3090 = (BgL_arg1817z00_3091 - OBJECT_TYPE);
							}
							BgL_arg1561z00_3089 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3090);
						}
						BgL_arg1558z00_3088 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1561z00_3089);
					}
					{	/* Inline/size.scm 22 */
						long BgL_res2009z00_3093;

						{	/* Inline/size.scm 22 */
							obj_t BgL_tmpz00_3963;

							BgL_tmpz00_3963 = ((obj_t) BgL_arg1558z00_3088);
							BgL_res2009z00_3093 = BGL_CLASS_INDEX(BgL_tmpz00_3963);
						}
						BgL_arg1552z00_3087 = BgL_res2009z00_3093;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sequencez00_bglt) BgL_o1113z00_2831)), BgL_arg1552z00_3087);
			}
			{	/* Inline/size.scm 22 */
				BgL_objectz00_bglt BgL_tmpz00_3969;

				BgL_tmpz00_3969 =
					((BgL_objectz00_bglt) ((BgL_sequencez00_bglt) BgL_o1113z00_2831));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3969, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sequencez00_bglt) BgL_o1113z00_2831));
			return
				((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt) BgL_o1113z00_2831));
		}

	}



/* &<@anonymous:1541> */
	obj_t BGl_z62zc3z04anonymousza31541ze3ze5zzinline_siza7eza7(obj_t
		BgL_envz00_2832, obj_t BgL_new1112z00_2833)
	{
		{	/* Inline/size.scm 22 */
			{
				BgL_sequencez00_bglt BgL_auxz00_3977;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_new1112z00_2833))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3981;

					{	/* Inline/size.scm 22 */
						obj_t BgL_classz00_3095;

						BgL_classz00_3095 = BGl_typez00zztype_typez00;
						{	/* Inline/size.scm 22 */
							obj_t BgL__ortest_1106z00_3096;

							BgL__ortest_1106z00_3096 = BGL_CLASS_NIL(BgL_classz00_3095);
							if (CBOOL(BgL__ortest_1106z00_3096))
								{	/* Inline/size.scm 22 */
									BgL_auxz00_3981 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3096);
								}
							else
								{	/* Inline/size.scm 22 */
									BgL_auxz00_3981 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3095));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_sequencez00_bglt) BgL_new1112z00_2833))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3981), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_sequencez00_bglt) BgL_new1112z00_2833))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_sequencez00_bglt)
										BgL_new1112z00_2833))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sequencez00_bglt)
							COBJECT(((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt)
										BgL_new1112z00_2833))))->BgL_nodesz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_sequencez00_bglt)
							COBJECT(((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt)
										BgL_new1112z00_2833))))->BgL_unsafez00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_sequencez00_bglt)
							COBJECT(((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt)
										BgL_new1112z00_2833))))->BgL_metaz00) =
					((obj_t) BNIL), BUNSPEC);
				{
					BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4006;

					{
						obj_t BgL_auxz00_4007;

						{	/* Inline/size.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_4008;

							BgL_tmpz00_4008 =
								((BgL_objectz00_bglt)
								((BgL_sequencez00_bglt) BgL_new1112z00_2833));
							BgL_auxz00_4007 = BGL_OBJECT_WIDENING(BgL_tmpz00_4008);
						}
						BgL_auxz00_4006 =
							((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4007);
					}
					((((BgL_siza7edzd2sequencez75_bglt) COBJECT(BgL_auxz00_4006))->
							BgL_siza7eza7) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_3977 = ((BgL_sequencez00_bglt) BgL_new1112z00_2833);
				return ((obj_t) BgL_auxz00_3977);
			}
		}

	}



/* &lambda1538 */
	BgL_sequencez00_bglt BGl_z62lambda1538z62zzinline_siza7eza7(obj_t
		BgL_envz00_2834, obj_t BgL_o1109z00_2835)
	{
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				BgL_siza7edzd2sequencez75_bglt BgL_wide1111z00_3098;

				BgL_wide1111z00_3098 =
					((BgL_siza7edzd2sequencez75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_siza7edzd2sequencez75_bgl))));
				{	/* Inline/size.scm 22 */
					obj_t BgL_auxz00_4021;
					BgL_objectz00_bglt BgL_tmpz00_4017;

					BgL_auxz00_4021 = ((obj_t) BgL_wide1111z00_3098);
					BgL_tmpz00_4017 =
						((BgL_objectz00_bglt)
						((BgL_sequencez00_bglt)
							((BgL_sequencez00_bglt) BgL_o1109z00_2835)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4017, BgL_auxz00_4021);
				}
				((BgL_objectz00_bglt)
					((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt) BgL_o1109z00_2835)));
				{	/* Inline/size.scm 22 */
					long BgL_arg1540z00_3099;

					{	/* Inline/size.scm 22 */
						long BgL_res2006z00_3100;

						BgL_res2006z00_3100 =
							BGL_CLASS_INDEX(BGl_siza7edzd2sequencez75zzinline_siza7eza7);
						BgL_arg1540z00_3099 = BgL_res2006z00_3100;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sequencez00_bglt)
								((BgL_sequencez00_bglt) BgL_o1109z00_2835))),
						BgL_arg1540z00_3099);
				}
				return
					((BgL_sequencez00_bglt)
					((BgL_sequencez00_bglt) ((BgL_sequencez00_bglt) BgL_o1109z00_2835)));
			}
		}

	}



/* &lambda1529 */
	BgL_sequencez00_bglt BGl_z62lambda1529z62zzinline_siza7eza7(obj_t
		BgL_envz00_2836, obj_t BgL_loc1101z00_2837, obj_t BgL_type1102z00_2838,
		obj_t BgL_sidezd2effect1103zd2_2839, obj_t BgL_key1104z00_2840,
		obj_t BgL_nodes1105z00_2841, obj_t BgL_unsafe1106z00_2842,
		obj_t BgL_meta1107z00_2843, obj_t BgL_siza7e1108za7_2844)
	{
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				bool_t BgL_unsafe1106z00_3103;
				long BgL_siza7e1108za7_3105;

				BgL_unsafe1106z00_3103 = CBOOL(BgL_unsafe1106z00_2842);
				BgL_siza7e1108za7_3105 = (long) CINT(BgL_siza7e1108za7_2844);
				{	/* Inline/size.scm 22 */
					BgL_sequencez00_bglt BgL_new1228z00_3106;

					{	/* Inline/size.scm 22 */
						BgL_sequencez00_bglt BgL_tmp1226z00_3107;
						BgL_siza7edzd2sequencez75_bglt BgL_wide1227z00_3108;

						{
							BgL_sequencez00_bglt BgL_auxz00_4037;

							{	/* Inline/size.scm 22 */
								BgL_sequencez00_bglt BgL_new1225z00_3109;

								BgL_new1225z00_3109 =
									((BgL_sequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sequencez00_bgl))));
								{	/* Inline/size.scm 22 */
									long BgL_arg1537z00_3110;

									{	/* Inline/size.scm 22 */
										long BgL_res2004z00_3111;

										BgL_res2004z00_3111 =
											BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
										BgL_arg1537z00_3110 = BgL_res2004z00_3111;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1225z00_3109),
										BgL_arg1537z00_3110);
								}
								{	/* Inline/size.scm 22 */
									BgL_objectz00_bglt BgL_tmpz00_4042;

									BgL_tmpz00_4042 = ((BgL_objectz00_bglt) BgL_new1225z00_3109);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4042, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1225z00_3109);
								BgL_auxz00_4037 = BgL_new1225z00_3109;
							}
							BgL_tmp1226z00_3107 = ((BgL_sequencez00_bglt) BgL_auxz00_4037);
						}
						BgL_wide1227z00_3108 =
							((BgL_siza7edzd2sequencez75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_siza7edzd2sequencez75_bgl))));
						{	/* Inline/size.scm 22 */
							obj_t BgL_auxz00_4050;
							BgL_objectz00_bglt BgL_tmpz00_4048;

							BgL_auxz00_4050 = ((obj_t) BgL_wide1227z00_3108);
							BgL_tmpz00_4048 = ((BgL_objectz00_bglt) BgL_tmp1226z00_3107);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4048, BgL_auxz00_4050);
						}
						((BgL_objectz00_bglt) BgL_tmp1226z00_3107);
						{	/* Inline/size.scm 22 */
							long BgL_arg1536z00_3112;

							{	/* Inline/size.scm 22 */
								long BgL_res2005z00_3113;

								BgL_res2005z00_3113 =
									BGL_CLASS_INDEX(BGl_siza7edzd2sequencez75zzinline_siza7eza7);
								BgL_arg1536z00_3112 = BgL_res2005z00_3113;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1226z00_3107),
								BgL_arg1536z00_3112);
						}
						BgL_new1228z00_3106 = ((BgL_sequencez00_bglt) BgL_tmp1226z00_3107);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1228z00_3106)))->BgL_locz00) =
						((obj_t) BgL_loc1101z00_2837), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1228z00_3106)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1102z00_2838)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1228z00_3106)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1103zd2_2839), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1228z00_3106)))->BgL_keyz00) =
						((obj_t) BgL_key1104z00_2840), BUNSPEC);
					((((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_new1228z00_3106)))->BgL_nodesz00) =
						((obj_t) ((obj_t) BgL_nodes1105z00_2841)), BUNSPEC);
					((((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_new1228z00_3106)))->BgL_unsafez00) =
						((bool_t) BgL_unsafe1106z00_3103), BUNSPEC);
					((((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_new1228z00_3106)))->BgL_metaz00) =
						((obj_t) ((obj_t) BgL_meta1107z00_2843)), BUNSPEC);
					{
						BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4075;

						{
							obj_t BgL_auxz00_4076;

							{	/* Inline/size.scm 22 */
								BgL_objectz00_bglt BgL_tmpz00_4077;

								BgL_tmpz00_4077 = ((BgL_objectz00_bglt) BgL_new1228z00_3106);
								BgL_auxz00_4076 = BGL_OBJECT_WIDENING(BgL_tmpz00_4077);
							}
							BgL_auxz00_4075 =
								((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4076);
						}
						((((BgL_siza7edzd2sequencez75_bglt) COBJECT(BgL_auxz00_4075))->
								BgL_siza7eza7) = ((long) BgL_siza7e1108za7_3105), BUNSPEC);
					}
					return BgL_new1228z00_3106;
				}
			}
		}

	}



/* &lambda1575 */
	obj_t BGl_z62lambda1575z62zzinline_siza7eza7(obj_t BgL_envz00_2845,
		obj_t BgL_oz00_2846, obj_t BgL_vz00_2847)
	{
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				long BgL_vz00_3115;

				BgL_vz00_3115 = (long) CINT(BgL_vz00_2847);
				{
					BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4083;

					{
						obj_t BgL_auxz00_4084;

						{	/* Inline/size.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_4085;

							BgL_tmpz00_4085 =
								((BgL_objectz00_bglt) ((BgL_sequencez00_bglt) BgL_oz00_2846));
							BgL_auxz00_4084 = BGL_OBJECT_WIDENING(BgL_tmpz00_4085);
						}
						BgL_auxz00_4083 =
							((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4084);
					}
					return
						((((BgL_siza7edzd2sequencez75_bglt) COBJECT(BgL_auxz00_4083))->
							BgL_siza7eza7) = ((long) BgL_vz00_3115), BUNSPEC);
		}}}

	}



/* &lambda1574 */
	obj_t BGl_z62lambda1574z62zzinline_siza7eza7(obj_t BgL_envz00_2848,
		obj_t BgL_oz00_2849)
	{
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				long BgL_tmpz00_4091;

				{
					BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4092;

					{
						obj_t BgL_auxz00_4093;

						{	/* Inline/size.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_4094;

							BgL_tmpz00_4094 =
								((BgL_objectz00_bglt) ((BgL_sequencez00_bglt) BgL_oz00_2849));
							BgL_auxz00_4093 = BGL_OBJECT_WIDENING(BgL_tmpz00_4094);
						}
						BgL_auxz00_4092 =
							((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4093);
					}
					BgL_tmpz00_4091 =
						(((BgL_siza7edzd2sequencez75_bglt) COBJECT(BgL_auxz00_4092))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4091);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_proc2127z00zzinline_siza7eza7, BGl_nodez00zzast_nodez00,
				BGl_string2128z00zzinline_siza7eza7);
		}

	}



/* &node-size1377 */
	obj_t BGl_z62nodezd2siza7e1377z17zzinline_siza7eza7(obj_t BgL_envz00_2851,
		obj_t BgL_nodez00_2852)
	{
		{	/* Inline/size.scm 33 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 8)),
				BGl_string2129z00zzinline_siza7eza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2852)));
		}

	}



/* node-size */
	BGL_EXPORTED_DEF long BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt
		BgL_nodez00_152)
	{
		{	/* Inline/size.scm 33 */
			{	/* Inline/size.scm 33 */
				obj_t BgL_method1378z00_1783;

				{	/* Inline/size.scm 33 */
					obj_t BgL_res2044z00_2502;

					{	/* Inline/size.scm 33 */
						long BgL_objzd2classzd2numz00_2467;

						{	/* Inline/size.scm 33 */
							long BgL_res2034z00_2470;

							BgL_res2034z00_2470 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_152));
							BgL_objzd2classzd2numz00_2467 = BgL_res2034z00_2470;
						}
						{	/* Inline/size.scm 33 */
							obj_t BgL_arg1813z00_2468;

							BgL_arg1813z00_2468 =
								PROCEDURE_REF(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
								(int) (((long) 1)));
							{	/* Inline/size.scm 33 */
								int BgL_offsetz00_2472;

								BgL_offsetz00_2472 = (int) (BgL_objzd2classzd2numz00_2467);
								{	/* Inline/size.scm 33 */
									long BgL_offsetz00_2473;

									BgL_offsetz00_2473 =
										((long) (BgL_offsetz00_2472) - OBJECT_TYPE);
									{	/* Inline/size.scm 33 */
										long BgL_modz00_2474;

										BgL_modz00_2474 =
											(BgL_offsetz00_2473 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/size.scm 33 */
											long BgL_restz00_2476;

											BgL_restz00_2476 =
												(BgL_offsetz00_2473 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/size.scm 33 */

												{	/* Inline/size.scm 33 */
													obj_t BgL_bucketz00_2478;

													BgL_bucketz00_2478 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2468), BgL_modz00_2474);
													BgL_res2044z00_2502 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2478), BgL_restz00_2476);
					}}}}}}}}
					BgL_method1378z00_1783 = BgL_res2044z00_2502;
				}
				return
					(long)
					CINT(PROCEDURE_ENTRY(BgL_method1378z00_1783) (BgL_method1378z00_1783,
						((obj_t) BgL_nodez00_152), BEOA));
		}}

	}



/* &node-size */
	obj_t BGl_z62nodezd2siza7ez17zzinline_siza7eza7(obj_t BgL_envz00_2853,
		obj_t BgL_nodez00_2854)
	{
		{	/* Inline/size.scm 33 */
			return
				BINT(BGl_nodezd2siza7ez75zzinline_siza7eza7(
					((BgL_nodez00_bglt) BgL_nodez00_2854)));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_atomz00zzast_nodez00,
				BGl_proc2130z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_varz00zzast_nodez00,
				BGl_proc2132z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_kwotez00zzast_nodez00, BGl_proc2133z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc2134z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2sequencez75zzinline_siza7eza7,
				BGl_proc2135z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_syncz00zzast_nodez00,
				BGl_proc2136z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2syncz75zzinline_siza7eza7,
				BGl_proc2137z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_appz00zzast_nodez00,
				BGl_proc2138z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2139z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc2140z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_castz00zzast_nodez00,
				BGl_proc2141z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_externz00zzast_nodez00, BGl_proc2142z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_setqz00zzast_nodez00,
				BGl_proc2143z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc2144z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_failz00zzast_nodez00,
				BGl_proc2145z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_switchz00zzast_nodez00, BGl_proc2146z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2switchz75zzinline_siza7eza7,
				BGl_proc2147z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2148z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7,
				BGl_proc2149z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2150z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2letzd2varza7zzinline_siza7eza7,
				BGl_proc2151z00zzinline_siza7eza7, BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2152z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2153z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_retblockz00zzast_nodez00, BGl_proc2154z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_returnz00zzast_nodez00, BGl_proc2155z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2156z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2157z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2158z00zzinline_siza7eza7,
				BGl_string2131z00zzinline_siza7eza7);
		}

	}



/* &node-size-box-set!1435 */
	obj_t BGl_z62nodezd2siza7ezd2boxzd2setz121435z05zzinline_siza7eza7(obj_t
		BgL_envz00_2883, obj_t BgL_nodez00_2884)
	{
		{	/* Inline/size.scm 270 */
			return
				BINT(
				(((long) 2) +
					BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2884)))->
							BgL_valuez00))));
		}

	}



/* &node-size-box-ref1433 */
	obj_t BGl_z62nodezd2siza7ezd2boxzd2ref1433z17zzinline_siza7eza7(obj_t
		BgL_envz00_2885, obj_t BgL_nodez00_2886)
	{
		{	/* Inline/size.scm 264 */
			return BINT(((long) 2));
		}

	}



/* &node-size-make-box1431 */
	obj_t BGl_z62nodezd2siza7ezd2makezd2box1431z17zzinline_siza7eza7(obj_t
		BgL_envz00_2887, obj_t BgL_nodez00_2888)
	{
		{	/* Inline/size.scm 258 */
			return
				BINT(
				(((long) 1) +
					BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2888)))->
							BgL_valuez00))));
		}

	}



/* &node-size-return1429 */
	obj_t BGl_z62nodezd2siza7ezd2return1429zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2889, obj_t BgL_nodez00_2890)
	{
		{	/* Inline/size.scm 251 */
			return
				BINT(BGl_nodezd2siza7ez75zzinline_siza7eza7(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2890)))->BgL_valuez00)));
		}

	}



/* &node-size-retblock1427 */
	obj_t BGl_z62nodezd2siza7ezd2retblock1427zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2891, obj_t BgL_nodez00_2892)
	{
		{	/* Inline/size.scm 244 */
			return
				BINT(BGl_nodezd2siza7ez75zzinline_siza7eza7(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2892)))->BgL_bodyz00)));
		}

	}



/* &node-size-jump-ex-it1425 */
	obj_t BGl_z62nodezd2siza7ezd2jumpzd2exzd2it1425zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2893, obj_t BgL_nodez00_2894)
	{
		{	/* Inline/size.scm 236 */
			return
				BINT(
				(((long) 1) +
					(BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
										((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2894)))->
								BgL_exitz00)) +
						BGl_nodezd2siza7ez75zzinline_siza7eza7(((
									(BgL_jumpzd2exzd2itz00_bglt)
									COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2894)))->
								BgL_valuez00)))));
		}

	}



/* &node-size-set-ex-it1423 */
	obj_t BGl_z62nodezd2siza7ezd2setzd2exzd2it1423zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2895, obj_t BgL_nodez00_2896)
	{
		{	/* Inline/size.scm 230 */
			return
				BINT(
				(((long) 2) +
					BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2896)))->
							BgL_bodyz00))));
		}

	}



/* &node-size-sized-let-1421 */
	obj_t BGl_z62nodezd2siza7ezd2siza7edzd2letzd21421z62zzinline_siza7eza7(obj_t
		BgL_envz00_2897, obj_t BgL_nodez00_2898)
	{
		{	/* Inline/size.scm 224 */
			{	/* Inline/size.scm 225 */
				long BgL_tmpz00_4201;

				{
					BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_4202;

					{
						obj_t BgL_auxz00_4203;

						{	/* Inline/size.scm 225 */
							BgL_objectz00_bglt BgL_tmpz00_4204;

							BgL_tmpz00_4204 =
								((BgL_objectz00_bglt)
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2898));
							BgL_auxz00_4203 = BGL_OBJECT_WIDENING(BgL_tmpz00_4204);
						}
						BgL_auxz00_4202 =
							((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_4203);
					}
					BgL_tmpz00_4201 =
						(((BgL_siza7edzd2letzd2varza7_bglt) COBJECT(BgL_auxz00_4202))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4201);
			}
		}

	}



/* &node-size-let-var1419 */
	obj_t BGl_z62nodezd2siza7ezd2letzd2var1419z17zzinline_siza7eza7(obj_t
		BgL_envz00_2899, obj_t BgL_nodez00_2900)
	{
		{	/* Inline/size.scm 211 */
			{	/* Inline/size.scm 212 */
				long BgL_tmpz00_4211;

				{	/* Inline/size.scm 212 */
					obj_t BgL_g1217z00_3127;
					long BgL_g1218z00_3128;

					BgL_g1217z00_3127 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)))->BgL_bindingsz00);
					BgL_g1218z00_3128 =
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)))->BgL_bodyz00));
					{
						obj_t BgL_bindingsz00_3130;
						long BgL_siza7eza7_3131;

						BgL_bindingsz00_3130 = BgL_g1217z00_3127;
						BgL_siza7eza7_3131 = BgL_g1218z00_3128;
					BgL_loopz00_3129:
						if (NULLP(BgL_bindingsz00_3130))
							{	/* Inline/size.scm 214 */
								{	/* Inline/size.scm 216 */
									BgL_siza7edzd2letzd2varza7_bglt BgL_wide1221z00_3132;

									BgL_wide1221z00_3132 =
										((BgL_siza7edzd2letzd2varza7_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_siza7edzd2letzd2varza7_bgl))));
									{	/* Inline/size.scm 216 */
										obj_t BgL_auxz00_4224;
										BgL_objectz00_bglt BgL_tmpz00_4220;

										BgL_auxz00_4224 = ((obj_t) BgL_wide1221z00_3132);
										BgL_tmpz00_4220 =
											((BgL_objectz00_bglt)
											((BgL_letzd2varzd2_bglt)
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4220, BgL_auxz00_4224);
									}
									((BgL_objectz00_bglt)
										((BgL_letzd2varzd2_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)));
									{	/* Inline/size.scm 216 */
										long BgL_arg1928z00_3133;

										{	/* Inline/size.scm 216 */
											long BgL_res2090z00_3134;

											BgL_res2090z00_3134 =
												BGL_CLASS_INDEX
												(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
											BgL_arg1928z00_3133 = BgL_res2090z00_3134;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_letzd2varzd2_bglt)
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2900))),
											BgL_arg1928z00_3133);
									}
									((BgL_letzd2varzd2_bglt)
										((BgL_letzd2varzd2_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)));
								}
								{
									BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_4238;

									{
										obj_t BgL_auxz00_4239;

										{	/* Inline/size.scm 216 */
											BgL_objectz00_bglt BgL_tmpz00_4240;

											BgL_tmpz00_4240 =
												((BgL_objectz00_bglt)
												((BgL_letzd2varzd2_bglt)
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2900)));
											BgL_auxz00_4239 = BGL_OBJECT_WIDENING(BgL_tmpz00_4240);
										}
										BgL_auxz00_4238 =
											((BgL_siza7edzd2letzd2varza7_bglt) BgL_auxz00_4239);
									}
									((((BgL_siza7edzd2letzd2varza7_bglt)
												COBJECT(BgL_auxz00_4238))->BgL_siza7eza7) =
										((long) BgL_siza7eza7_3131), BUNSPEC);
								}
								((BgL_letzd2varzd2_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2900));
								BgL_tmpz00_4211 = BgL_siza7eza7_3131;
							}
						else
							{	/* Inline/size.scm 218 */
								obj_t BgL_arg1929z00_3135;
								long BgL_arg1930z00_3136;

								BgL_arg1929z00_3135 = CDR(((obj_t) BgL_bindingsz00_3130));
								{	/* Inline/size.scm 219 */
									long BgL_arg1931z00_3137;

									{	/* Inline/size.scm 219 */
										obj_t BgL_arg1932z00_3138;

										{	/* Inline/size.scm 219 */
											obj_t BgL_pairz00_3139;

											BgL_pairz00_3139 = CAR(((obj_t) BgL_bindingsz00_3130));
											BgL_arg1932z00_3138 = CDR(BgL_pairz00_3139);
										}
										BgL_arg1931z00_3137 =
											BGl_nodezd2siza7ez75zzinline_siza7eza7(
											((BgL_nodez00_bglt) BgL_arg1932z00_3138));
									}
									BgL_arg1930z00_3136 =
										(BgL_siza7eza7_3131 + BgL_arg1931z00_3137);
								}
								{
									long BgL_siza7eza7_4258;
									obj_t BgL_bindingsz00_4257;

									BgL_bindingsz00_4257 = BgL_arg1929z00_3135;
									BgL_siza7eza7_4258 = BgL_arg1930z00_3136;
									BgL_siza7eza7_3131 = BgL_siza7eza7_4258;
									BgL_bindingsz00_3130 = BgL_bindingsz00_4257;
									goto BgL_loopz00_3129;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4211);
			}
		}

	}



/* &node-size-sized-let-1417 */
	obj_t BGl_z62nodezd2siza7ezd2siza7edzd2letzd21417z62zzinline_siza7eza7(obj_t
		BgL_envz00_2901, obj_t BgL_nodez00_2902)
	{
		{	/* Inline/size.scm 205 */
			{	/* Inline/size.scm 206 */
				long BgL_tmpz00_4260;

				{
					BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_4261;

					{
						obj_t BgL_auxz00_4262;

						{	/* Inline/size.scm 206 */
							BgL_objectz00_bglt BgL_tmpz00_4263;

							BgL_tmpz00_4263 =
								((BgL_objectz00_bglt)
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2902));
							BgL_auxz00_4262 = BGL_OBJECT_WIDENING(BgL_tmpz00_4263);
						}
						BgL_auxz00_4261 =
							((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_4262);
					}
					BgL_tmpz00_4260 =
						(((BgL_siza7edzd2letzd2funza7_bglt) COBJECT(BgL_auxz00_4261))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4260);
			}
		}

	}



/* &node-size-let-fun1415 */
	obj_t BGl_z62nodezd2siza7ezd2letzd2fun1415z17zzinline_siza7eza7(obj_t
		BgL_envz00_2903, obj_t BgL_nodez00_2904)
	{
		{	/* Inline/size.scm 190 */
			{	/* Inline/size.scm 191 */
				long BgL_tmpz00_4270;

				{	/* Inline/size.scm 191 */
					obj_t BgL_g1211z00_3142;
					long BgL_g1212z00_3143;

					BgL_g1211z00_3142 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)))->BgL_localsz00);
					BgL_g1212z00_3143 =
						(bgl_list_length(
							(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)))->
								BgL_localsz00)) +
						BGl_nodezd2siza7ez75zzinline_siza7eza7((((BgL_letzd2funzd2_bglt)
									COBJECT(((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)))->
								BgL_bodyz00)));
					{
						obj_t BgL_localsz00_3145;
						long BgL_siza7eza7_3146;

						BgL_localsz00_3145 = BgL_g1211z00_3142;
						BgL_siza7eza7_3146 = BgL_g1212z00_3143;
					BgL_loopz00_3144:
						if (NULLP(BgL_localsz00_3145))
							{	/* Inline/size.scm 194 */
								{	/* Inline/size.scm 196 */
									BgL_siza7edzd2letzd2funza7_bglt BgL_wide1215z00_3147;

									BgL_wide1215z00_3147 =
										((BgL_siza7edzd2letzd2funza7_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_siza7edzd2letzd2funza7_bgl))));
									{	/* Inline/size.scm 196 */
										obj_t BgL_auxz00_4287;
										BgL_objectz00_bglt BgL_tmpz00_4283;

										BgL_auxz00_4287 = ((obj_t) BgL_wide1215z00_3147);
										BgL_tmpz00_4283 =
											((BgL_objectz00_bglt)
											((BgL_letzd2funzd2_bglt)
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4283, BgL_auxz00_4287);
									}
									((BgL_objectz00_bglt)
										((BgL_letzd2funzd2_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)));
									{	/* Inline/size.scm 196 */
										long BgL_arg1913z00_3148;

										{	/* Inline/size.scm 196 */
											long BgL_res2085z00_3149;

											BgL_res2085z00_3149 =
												BGL_CLASS_INDEX
												(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
											BgL_arg1913z00_3148 = BgL_res2085z00_3149;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_letzd2funzd2_bglt)
													((BgL_letzd2funzd2_bglt) BgL_nodez00_2904))),
											BgL_arg1913z00_3148);
									}
									((BgL_letzd2funzd2_bglt)
										((BgL_letzd2funzd2_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)));
								}
								{
									BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_4301;

									{
										obj_t BgL_auxz00_4302;

										{	/* Inline/size.scm 196 */
											BgL_objectz00_bglt BgL_tmpz00_4303;

											BgL_tmpz00_4303 =
												((BgL_objectz00_bglt)
												((BgL_letzd2funzd2_bglt)
													((BgL_letzd2funzd2_bglt) BgL_nodez00_2904)));
											BgL_auxz00_4302 = BGL_OBJECT_WIDENING(BgL_tmpz00_4303);
										}
										BgL_auxz00_4301 =
											((BgL_siza7edzd2letzd2funza7_bglt) BgL_auxz00_4302);
									}
									((((BgL_siza7edzd2letzd2funza7_bglt)
												COBJECT(BgL_auxz00_4301))->BgL_siza7eza7) =
										((long) BgL_siza7eza7_3146), BUNSPEC);
								}
								((BgL_letzd2funzd2_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2904));
								BgL_tmpz00_4270 = (((long) 1) + BgL_siza7eza7_3146);
							}
						else
							{	/* Inline/size.scm 198 */
								obj_t BgL_arg1914z00_3150;
								long BgL_arg1915z00_3151;

								BgL_arg1914z00_3150 = CDR(((obj_t) BgL_localsz00_3145));
								{	/* Inline/size.scm 200 */
									long BgL_arg1916z00_3152;

									{	/* Inline/size.scm 200 */
										long BgL_arg1917z00_3153;

										{	/* Inline/size.scm 200 */
											obj_t BgL_arg1918z00_3154;

											BgL_arg1918z00_3154 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				CAR(
																					((obj_t) BgL_localsz00_3145))))))->
																BgL_valuez00))))->BgL_bodyz00);
											BgL_arg1917z00_3153 =
												BGl_nodezd2siza7ez75zzinline_siza7eza7((
													(BgL_nodez00_bglt) BgL_arg1918z00_3154));
										}
										BgL_arg1916z00_3152 = (((long) 1) + BgL_arg1917z00_3153);
									}
									BgL_arg1915z00_3151 =
										(BgL_siza7eza7_3146 + BgL_arg1916z00_3152);
								}
								{
									long BgL_siza7eza7_4327;
									obj_t BgL_localsz00_4326;

									BgL_localsz00_4326 = BgL_arg1914z00_3150;
									BgL_siza7eza7_4327 = BgL_arg1915z00_3151;
									BgL_siza7eza7_3146 = BgL_siza7eza7_4327;
									BgL_localsz00_3145 = BgL_localsz00_4326;
									goto BgL_loopz00_3144;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4270);
			}
		}

	}



/* &node-size-sized-swit1413 */
	obj_t BGl_z62nodezd2siza7ezd2siza7edzd2swit1413zb0zzinline_siza7eza7(obj_t
		BgL_envz00_2905, obj_t BgL_nodez00_2906)
	{
		{	/* Inline/size.scm 184 */
			{	/* Inline/size.scm 185 */
				long BgL_tmpz00_4329;

				{
					BgL_siza7edzd2switchz75_bglt BgL_auxz00_4330;

					{
						obj_t BgL_auxz00_4331;

						{	/* Inline/size.scm 185 */
							BgL_objectz00_bglt BgL_tmpz00_4332;

							BgL_tmpz00_4332 =
								((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2906));
							BgL_auxz00_4331 = BGL_OBJECT_WIDENING(BgL_tmpz00_4332);
						}
						BgL_auxz00_4330 = ((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_4331);
					}
					BgL_tmpz00_4329 =
						(((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_4330))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4329);
			}
		}

	}



/* &node-size-switch1411 */
	obj_t BGl_z62nodezd2siza7ezd2switch1411zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2907, obj_t BgL_nodez00_2908)
	{
		{	/* Inline/size.scm 168 */
			{	/* Inline/size.scm 169 */
				long BgL_tmpz00_4339;

				{	/* Inline/size.scm 169 */
					obj_t BgL_g1205z00_3157;
					long BgL_g1206z00_3158;

					BgL_g1205z00_3157 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2908)))->BgL_clausesz00);
					BgL_g1206z00_3158 =
						(((long) 1) +
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2908)))->BgL_testz00)));
					{
						obj_t BgL_clausesz00_3160;
						long BgL_siza7eza7_3161;

						BgL_clausesz00_3160 = BgL_g1205z00_3157;
						BgL_siza7eza7_3161 = BgL_g1206z00_3158;
					BgL_loopz00_3159:
						if (NULLP(BgL_clausesz00_3160))
							{	/* Inline/size.scm 171 */
								{	/* Inline/size.scm 173 */
									BgL_siza7edzd2switchz75_bglt BgL_wide1209z00_3162;

									BgL_wide1209z00_3162 =
										((BgL_siza7edzd2switchz75_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_siza7edzd2switchz75_bgl))));
									{	/* Inline/size.scm 173 */
										obj_t BgL_auxz00_4353;
										BgL_objectz00_bglt BgL_tmpz00_4349;

										BgL_auxz00_4353 = ((obj_t) BgL_wide1209z00_3162);
										BgL_tmpz00_4349 =
											((BgL_objectz00_bglt)
											((BgL_switchz00_bglt)
												((BgL_switchz00_bglt) BgL_nodez00_2908)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4349, BgL_auxz00_4353);
									}
									((BgL_objectz00_bglt)
										((BgL_switchz00_bglt)
											((BgL_switchz00_bglt) BgL_nodez00_2908)));
									{	/* Inline/size.scm 173 */
										long BgL_arg1891z00_3163;

										{	/* Inline/size.scm 173 */
											long BgL_res2079z00_3164;

											BgL_res2079z00_3164 =
												BGL_CLASS_INDEX
												(BGl_siza7edzd2switchz75zzinline_siza7eza7);
											BgL_arg1891z00_3163 = BgL_res2079z00_3164;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_switchz00_bglt)
													((BgL_switchz00_bglt) BgL_nodez00_2908))),
											BgL_arg1891z00_3163);
									}
									((BgL_switchz00_bglt)
										((BgL_switchz00_bglt)
											((BgL_switchz00_bglt) BgL_nodez00_2908)));
								}
								{
									BgL_siza7edzd2switchz75_bglt BgL_auxz00_4367;

									{
										obj_t BgL_auxz00_4368;

										{	/* Inline/size.scm 173 */
											BgL_objectz00_bglt BgL_tmpz00_4369;

											BgL_tmpz00_4369 =
												((BgL_objectz00_bglt)
												((BgL_switchz00_bglt)
													((BgL_switchz00_bglt) BgL_nodez00_2908)));
											BgL_auxz00_4368 = BGL_OBJECT_WIDENING(BgL_tmpz00_4369);
										}
										BgL_auxz00_4367 =
											((BgL_siza7edzd2switchz75_bglt) BgL_auxz00_4368);
									}
									((((BgL_siza7edzd2switchz75_bglt) COBJECT(BgL_auxz00_4367))->
											BgL_siza7eza7) = ((long) BgL_siza7eza7_3161), BUNSPEC);
								}
								((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2908));
								BgL_tmpz00_4339 = BgL_siza7eza7_3161;
							}
						else
							{	/* Inline/size.scm 175 */
								obj_t BgL_arg1892z00_3165;
								long BgL_arg1893z00_3166;

								BgL_arg1892z00_3165 = CDR(((obj_t) BgL_clausesz00_3160));
								{	/* Inline/size.scm 176 */
									long BgL_arg1895z00_3167;

									{	/* Inline/size.scm 176 */
										long BgL_arg1896z00_3168;
										long BgL_arg1897z00_3169;

										{	/* Inline/size.scm 176 */
											bool_t BgL_test2258z00_4380;

											{	/* Inline/size.scm 176 */
												obj_t BgL_tmpz00_4381;

												{	/* Inline/size.scm 176 */
													obj_t BgL_pairz00_3170;

													BgL_pairz00_3170 = CAR(((obj_t) BgL_clausesz00_3160));
													BgL_tmpz00_4381 = CAR(BgL_pairz00_3170);
												}
												BgL_test2258z00_4380 = PAIRP(BgL_tmpz00_4381);
											}
											if (BgL_test2258z00_4380)
												{	/* Inline/size.scm 177 */
													obj_t BgL_auxz00_4386;

													{	/* Inline/size.scm 177 */
														obj_t BgL_pairz00_3171;

														BgL_pairz00_3171 =
															CAR(((obj_t) BgL_clausesz00_3160));
														BgL_auxz00_4386 = CAR(BgL_pairz00_3171);
													}
													BgL_arg1896z00_3168 =
														bgl_list_length(BgL_auxz00_4386);
												}
											else
												{	/* Inline/size.scm 176 */
													BgL_arg1896z00_3168 = ((long) 1);
										}}
										{	/* Inline/size.scm 179 */
											obj_t BgL_arg1907z00_3172;

											{	/* Inline/size.scm 179 */
												obj_t BgL_pairz00_3173;

												BgL_pairz00_3173 = CAR(((obj_t) BgL_clausesz00_3160));
												BgL_arg1907z00_3172 = CDR(BgL_pairz00_3173);
											}
											BgL_arg1897z00_3169 =
												BGl_nodezd2siza7ez75zzinline_siza7eza7(
												((BgL_nodez00_bglt) BgL_arg1907z00_3172));
										}
										BgL_arg1895z00_3167 =
											(BgL_arg1896z00_3168 + BgL_arg1897z00_3169);
									}
									BgL_arg1893z00_3166 =
										(BgL_siza7eza7_3161 + BgL_arg1895z00_3167);
								}
								{
									long BgL_siza7eza7_4399;
									obj_t BgL_clausesz00_4398;

									BgL_clausesz00_4398 = BgL_arg1892z00_3165;
									BgL_siza7eza7_4399 = BgL_arg1893z00_3166;
									BgL_siza7eza7_3161 = BgL_siza7eza7_4399;
									BgL_clausesz00_3160 = BgL_clausesz00_4398;
									goto BgL_loopz00_3159;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4339);
			}
		}

	}



/* &node-size-fail1409 */
	obj_t BGl_z62nodezd2siza7ezd2fail1409zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2909, obj_t BgL_nodez00_2910)
	{
		{	/* Inline/size.scm 159 */
			{	/* Inline/size.scm 160 */
				long BgL_tmpz00_4401;

				{	/* Inline/size.scm 160 */
					long BgL_proczd2siza7ez75_3175;

					BgL_proczd2siza7ez75_3175 =
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_2910)))->BgL_procz00));
					{	/* Inline/size.scm 160 */
						long BgL_msgzd2siza7ez75_3176;

						BgL_msgzd2siza7ez75_3176 =
							BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_2910)))->BgL_msgz00));
						{	/* Inline/size.scm 161 */
							long BgL_objzd2siza7ez75_3177;

							BgL_objzd2siza7ez75_3177 =
								BGl_nodezd2siza7ez75zzinline_siza7eza7(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2910)))->BgL_objz00));
							{	/* Inline/size.scm 162 */

								BgL_tmpz00_4401 =
									(((long) 2) +
									(BgL_proczd2siza7ez75_3175 +
										(BgL_msgzd2siza7ez75_3176 + BgL_objzd2siza7ez75_3177)));
				}}}}
				return BINT(BgL_tmpz00_4401);
			}
		}

	}



/* &node-size-conditiona1407 */
	obj_t BGl_z62nodezd2siza7ezd2conditiona1407zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2911, obj_t BgL_nodez00_2912)
	{
		{	/* Inline/size.scm 150 */
			{	/* Inline/size.scm 151 */
				long BgL_tmpz00_4415;

				{	/* Inline/size.scm 151 */
					long BgL_testzd2siza7ez75_3179;

					BgL_testzd2siza7ez75_3179 =
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2912)))->BgL_testz00));
					{	/* Inline/size.scm 151 */
						long BgL_truezd2siza7ez75_3180;

						BgL_truezd2siza7ez75_3180 =
							BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2912)))->
								BgL_truez00));
						{	/* Inline/size.scm 152 */
							long BgL_falsezd2siza7ez75_3181;

							BgL_falsezd2siza7ez75_3181 =
								BGl_nodezd2siza7ez75zzinline_siza7eza7(
								(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2912)))->
									BgL_falsez00));
							{	/* Inline/size.scm 153 */

								BgL_tmpz00_4415 =
									(((long) 1) +
									(BgL_testzd2siza7ez75_3179 +
										(BgL_truezd2siza7ez75_3180 + BgL_falsezd2siza7ez75_3181)));
				}}}}
				return BINT(BgL_tmpz00_4415);
			}
		}

	}



/* &node-size-setq1405 */
	obj_t BGl_z62nodezd2siza7ezd2setq1405zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2913, obj_t BgL_nodez00_2914)
	{
		{	/* Inline/size.scm 144 */
			return
				BINT(
				(((long) 2) +
					BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_2914)))->BgL_valuez00))));
		}

	}



/* &node-size-extern1402 */
	obj_t BGl_z62nodezd2siza7ezd2extern1402zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2915, obj_t BgL_nodez00_2916)
	{
		{	/* Inline/size.scm 134 */
			{	/* Inline/size.scm 135 */
				long BgL_tmpz00_4434;

				{	/* Inline/size.scm 135 */
					obj_t BgL_g1203z00_3184;

					BgL_g1203z00_3184 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2916)))->BgL_exprza2za2);
					{
						obj_t BgL_argsz00_3186;
						long BgL_siza7eza7_3187;

						BgL_argsz00_3186 = BgL_g1203z00_3184;
						BgL_siza7eza7_3187 = ((long) 1);
					BgL_loopz00_3185:
						if (NULLP(BgL_argsz00_3186))
							{	/* Inline/size.scm 137 */
								BgL_tmpz00_4434 = BgL_siza7eza7_3187;
							}
						else
							{	/* Inline/size.scm 139 */
								obj_t BgL_arg1871z00_3188;
								long BgL_arg1872z00_3189;

								BgL_arg1871z00_3188 = CDR(((obj_t) BgL_argsz00_3186));
								{	/* Inline/size.scm 139 */
									long BgL_arg1873z00_3190;

									{	/* Inline/size.scm 139 */
										obj_t BgL_arg1874z00_3191;

										BgL_arg1874z00_3191 = CAR(((obj_t) BgL_argsz00_3186));
										BgL_arg1873z00_3190 =
											BGl_nodezd2siza7ez75zzinline_siza7eza7(
											((BgL_nodez00_bglt) BgL_arg1874z00_3191));
									}
									BgL_arg1872z00_3189 =
										(BgL_siza7eza7_3187 + BgL_arg1873z00_3190);
								}
								{
									long BgL_siza7eza7_4447;
									obj_t BgL_argsz00_4446;

									BgL_argsz00_4446 = BgL_arg1871z00_3188;
									BgL_siza7eza7_4447 = BgL_arg1872z00_3189;
									BgL_siza7eza7_3187 = BgL_siza7eza7_4447;
									BgL_argsz00_3186 = BgL_argsz00_4446;
									goto BgL_loopz00_3185;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4434);
			}
		}

	}



/* &node-size-cast1400 */
	obj_t BGl_z62nodezd2siza7ezd2cast1400zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2917, obj_t BgL_nodez00_2918)
	{
		{	/* Inline/size.scm 127 */
			return
				BINT(BGl_nodezd2siza7ez75zzinline_siza7eza7(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2918)))->BgL_argz00)));
		}

	}



/* &node-size-funcall1398 */
	obj_t BGl_z62nodezd2siza7ezd2funcall1398zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2919, obj_t BgL_nodez00_2920)
	{
		{	/* Inline/size.scm 117 */
			{	/* Inline/size.scm 118 */
				long BgL_tmpz00_4453;

				{	/* Inline/size.scm 118 */
					obj_t BgL_g1200z00_3194;
					long BgL_g1201z00_3195;

					BgL_g1200z00_3194 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2920)))->BgL_argsz00);
					BgL_g1201z00_3195 =
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
						(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2920)))->BgL_funz00));
					{
						obj_t BgL_argsz00_3197;
						long BgL_siza7eza7_3198;

						BgL_argsz00_3197 = BgL_g1200z00_3194;
						BgL_siza7eza7_3198 = BgL_g1201z00_3195;
					BgL_loopz00_3196:
						if (NULLP(BgL_argsz00_3197))
							{	/* Inline/size.scm 120 */
								BgL_tmpz00_4453 = BgL_siza7eza7_3198;
							}
						else
							{	/* Inline/size.scm 122 */
								obj_t BgL_arg1861z00_3199;
								long BgL_arg1862z00_3200;

								BgL_arg1861z00_3199 = CDR(((obj_t) BgL_argsz00_3197));
								{	/* Inline/size.scm 122 */
									long BgL_arg1863z00_3201;

									{	/* Inline/size.scm 122 */
										obj_t BgL_arg1865z00_3202;

										BgL_arg1865z00_3202 = CAR(((obj_t) BgL_argsz00_3197));
										BgL_arg1863z00_3201 =
											BGl_nodezd2siza7ez75zzinline_siza7eza7(
											((BgL_nodez00_bglt) BgL_arg1865z00_3202));
									}
									BgL_arg1862z00_3200 =
										(BgL_siza7eza7_3198 + BgL_arg1863z00_3201);
								}
								{
									long BgL_siza7eza7_4469;
									obj_t BgL_argsz00_4468;

									BgL_argsz00_4468 = BgL_arg1861z00_3199;
									BgL_siza7eza7_4469 = BgL_arg1862z00_3200;
									BgL_siza7eza7_3198 = BgL_siza7eza7_4469;
									BgL_argsz00_3197 = BgL_argsz00_4468;
									goto BgL_loopz00_3196;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4453);
			}
		}

	}



/* &node-size-app-ly1396 */
	obj_t BGl_z62nodezd2siza7ezd2appzd2ly1396z17zzinline_siza7eza7(obj_t
		BgL_envz00_2921, obj_t BgL_nodez00_2922)
	{
		{	/* Inline/size.scm 111 */
			return
				BINT(
				(((long) 1) +
					(BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2922)))->BgL_funz00)) +
						BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2922)))->
								BgL_argz00)))));
		}

	}



/* &node-size-app1394 */
	obj_t BGl_z62nodezd2siza7ezd2app1394zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2923, obj_t BgL_nodez00_2924)
	{
		{	/* Inline/size.scm 91 */
			{	/* Inline/size.scm 92 */
				long BgL_tmpz00_4480;

				if (CBOOL(BGl_getenvz00zz__osz00(BGl_string2159z00zzinline_siza7eza7)))
					{	/* Inline/size.scm 92 */
						BGl_mz00zzinline_siza7eza7 =
							(BGl_mz00zzinline_siza7eza7 + ((long) 1));
						{	/* Inline/size.scm 94 */
							obj_t BgL_port1358z00_3205;

							{	/* Inline/size.scm 94 */
								obj_t BgL_res2050z00_3206;

								{	/* Inline/size.scm 94 */
									obj_t BgL_tmpz00_4485;

									BgL_tmpz00_4485 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2050z00_3206 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4485);
								}
								BgL_port1358z00_3205 = BgL_res2050z00_3206;
							}
							bgl_display_obj(make_string(BGl_mz00zzinline_siza7eza7,
									((unsigned char) ' ')), BgL_port1358z00_3205);
							bgl_display_string(BGl_string2160z00zzinline_siza7eza7,
								BgL_port1358z00_3205);
							{	/* Inline/size.scm 94 */
								obj_t BgL_arg1825z00_3207;

								BgL_arg1825z00_3207 =
									BGl_shapez00zztools_shapez00(
									((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2924)));
								bgl_display_obj(BgL_arg1825z00_3207, BgL_port1358z00_3205);
							}
							bgl_display_char(((unsigned char) 10), BgL_port1358z00_3205);
					}}
				else
					{	/* Inline/size.scm 92 */
						BFALSE;
					}
				{	/* Inline/size.scm 95 */
					obj_t BgL_g1198z00_3208;
					long BgL_g1199z00_3209;

					BgL_g1198z00_3208 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2924)))->BgL_argsz00);
					{	/* Inline/size.scm 96 */
						BgL_varz00_bglt BgL_arg1851z00_3210;

						BgL_arg1851z00_3210 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_2924)))->BgL_funz00);
						BgL_g1199z00_3209 =
							BGl_nodezd2siza7ez75zzinline_siza7eza7(
							((BgL_nodez00_bglt) BgL_arg1851z00_3210));
					}
					{
						obj_t BgL_argsz00_3212;
						long BgL_siza7eza7_3213;

						BgL_argsz00_3212 = BgL_g1198z00_3208;
						BgL_siza7eza7_3213 = BgL_g1199z00_3209;
					BgL_loopz00_3211:
						if (CBOOL(BGl_getenvz00zz__osz00
								(BGl_string2159z00zzinline_siza7eza7)))
							{	/* Inline/size.scm 98 */
								obj_t BgL_port1365z00_3214;

								{	/* Inline/size.scm 98 */
									obj_t BgL_res2052z00_3215;

									{	/* Inline/size.scm 98 */
										obj_t BgL_tmpz00_4505;

										BgL_tmpz00_4505 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2052z00_3215 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4505);
									}
									BgL_port1365z00_3214 = BgL_res2052z00_3215;
								}
								bgl_display_obj(make_string(BGl_mz00zzinline_siza7eza7,
										((unsigned char) ' ')), BgL_port1365z00_3214);
								bgl_display_string(BGl_string2161z00zzinline_siza7eza7,
									BgL_port1365z00_3214);
								{	/* Inline/size.scm 98 */
									obj_t BgL_arg1829z00_3216;

									if (NULLP(BgL_argsz00_3212))
										{	/* Inline/size.scm 98 */
											BgL_arg1829z00_3216 = BNIL;
										}
									else
										{	/* Inline/size.scm 98 */
											obj_t BgL_head1361z00_3217;

											{	/* Inline/size.scm 98 */
												obj_t BgL_arg1838z00_3218;

												{	/* Inline/size.scm 98 */
													obj_t BgL_arg1840z00_3219;

													BgL_arg1840z00_3219 = CAR(((obj_t) BgL_argsz00_3212));
													BgL_arg1838z00_3218 =
														BGl_shapez00zztools_shapez00(BgL_arg1840z00_3219);
												}
												{	/* Inline/size.scm 98 */
													obj_t BgL_res2055z00_3220;

													BgL_res2055z00_3220 =
														MAKE_YOUNG_PAIR(BgL_arg1838z00_3218, BNIL);
													BgL_head1361z00_3217 = BgL_res2055z00_3220;
												}
											}
											{	/* Inline/size.scm 98 */
												obj_t BgL_g1364z00_3221;

												BgL_g1364z00_3221 = CDR(((obj_t) BgL_argsz00_3212));
												{
													obj_t BgL_l1359z00_3223;
													obj_t BgL_tail1362z00_3224;

													BgL_l1359z00_3223 = BgL_g1364z00_3221;
													BgL_tail1362z00_3224 = BgL_head1361z00_3217;
												BgL_zc3z04anonymousza31831ze3z87_3222:
													if (NULLP(BgL_l1359z00_3223))
														{	/* Inline/size.scm 98 */
															BgL_arg1829z00_3216 = BgL_head1361z00_3217;
														}
													else
														{	/* Inline/size.scm 98 */
															obj_t BgL_newtail1363z00_3225;

															{	/* Inline/size.scm 98 */
																obj_t BgL_arg1835z00_3226;

																{	/* Inline/size.scm 98 */
																	obj_t BgL_arg1836z00_3227;

																	BgL_arg1836z00_3227 =
																		CAR(((obj_t) BgL_l1359z00_3223));
																	BgL_arg1835z00_3226 =
																		BGl_shapez00zztools_shapez00
																		(BgL_arg1836z00_3227);
																}
																{	/* Inline/size.scm 98 */
																	obj_t BgL_res2057z00_3228;

																	BgL_res2057z00_3228 =
																		MAKE_YOUNG_PAIR(BgL_arg1835z00_3226, BNIL);
																	BgL_newtail1363z00_3225 = BgL_res2057z00_3228;
																}
															}
															SET_CDR(BgL_tail1362z00_3224,
																BgL_newtail1363z00_3225);
															{	/* Inline/size.scm 98 */
																obj_t BgL_arg1833z00_3229;

																BgL_arg1833z00_3229 =
																	CDR(((obj_t) BgL_l1359z00_3223));
																{
																	obj_t BgL_tail1362z00_4529;
																	obj_t BgL_l1359z00_4528;

																	BgL_l1359z00_4528 = BgL_arg1833z00_3229;
																	BgL_tail1362z00_4529 =
																		BgL_newtail1363z00_3225;
																	BgL_tail1362z00_3224 = BgL_tail1362z00_4529;
																	BgL_l1359z00_3223 = BgL_l1359z00_4528;
																	goto BgL_zc3z04anonymousza31831ze3z87_3222;
																}
															}
														}
												}
											}
										}
									bgl_display_obj(BgL_arg1829z00_3216, BgL_port1365z00_3214);
								}
								bgl_display_string(BGl_string2162z00zzinline_siza7eza7,
									BgL_port1365z00_3214);
								bgl_display_obj(BINT(BgL_siza7eza7_3213), BgL_port1365z00_3214);
								bgl_display_string(BGl_string2163z00zzinline_siza7eza7,
									BgL_port1365z00_3214);
								{	/* Inline/size.scm 98 */
									bool_t BgL_arg1841z00_3230;

									BgL_arg1841z00_3230 = NULLP(BgL_argsz00_3212);
									bgl_display_obj(BBOOL(BgL_arg1841z00_3230),
										BgL_port1365z00_3214);
								}
								bgl_display_char(((unsigned char) 10), BgL_port1365z00_3214);
							}
						else
							{	/* Inline/size.scm 97 */
								BFALSE;
							}
						if (NULLP(BgL_argsz00_3212))
							{	/* Inline/size.scm 99 */
								if (CBOOL(BGl_getenvz00zz__osz00
										(BGl_string2159z00zzinline_siza7eza7)))
									{	/* Inline/size.scm 101 */
										{	/* Inline/size.scm 102 */
											obj_t BgL_port1366z00_3231;

											{	/* Inline/size.scm 102 */
												obj_t BgL_res2060z00_3232;

												{	/* Inline/size.scm 102 */
													obj_t BgL_tmpz00_4544;

													BgL_tmpz00_4544 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2060z00_3232 =
														BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4544);
												}
												BgL_port1366z00_3231 = BgL_res2060z00_3232;
											}
											bgl_display_obj(make_string(BGl_mz00zzinline_siza7eza7,
													((unsigned char) ' ')), BgL_port1366z00_3231);
											bgl_display_string(BGl_string2164z00zzinline_siza7eza7,
												BgL_port1366z00_3231);
											bgl_display_obj(BINT(BgL_siza7eza7_3213),
												BgL_port1366z00_3231);
											bgl_display_char(((unsigned char) 10),
												BgL_port1366z00_3231);
										}
										BGl_mz00zzinline_siza7eza7 =
											(BGl_mz00zzinline_siza7eza7 - ((long) 1));
									}
								else
									{	/* Inline/size.scm 101 */
										BFALSE;
									}
								BgL_tmpz00_4480 = BgL_siza7eza7_3213;
							}
						else
							{	/* Inline/size.scm 106 */
								obj_t BgL_arg1846z00_3233;
								long BgL_arg1847z00_3234;

								BgL_arg1846z00_3233 = CDR(((obj_t) BgL_argsz00_3212));
								{	/* Inline/size.scm 106 */
									long BgL_arg1848z00_3235;

									{	/* Inline/size.scm 106 */
										obj_t BgL_arg1850z00_3236;

										BgL_arg1850z00_3236 = CAR(((obj_t) BgL_argsz00_3212));
										BgL_arg1848z00_3235 =
											BGl_nodezd2siza7ez75zzinline_siza7eza7(
											((BgL_nodez00_bglt) BgL_arg1850z00_3236));
									}
									BgL_arg1847z00_3234 =
										(BgL_siza7eza7_3213 + BgL_arg1848z00_3235);
								}
								{
									long BgL_siza7eza7_4562;
									obj_t BgL_argsz00_4561;

									BgL_argsz00_4561 = BgL_arg1846z00_3233;
									BgL_siza7eza7_4562 = BgL_arg1847z00_3234;
									BgL_siza7eza7_3213 = BgL_siza7eza7_4562;
									BgL_argsz00_3212 = BgL_argsz00_4561;
									goto BgL_loopz00_3211;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4480);
			}
		}

	}



/* &node-size-sized-sync1392 */
	obj_t BGl_z62nodezd2siza7ezd2siza7edzd2sync1392zb0zzinline_siza7eza7(obj_t
		BgL_envz00_2925, obj_t BgL_nodez00_2926)
	{
		{	/* Inline/size.scm 85 */
			{	/* Inline/size.scm 86 */
				long BgL_tmpz00_4564;

				{
					BgL_siza7edzd2syncz75_bglt BgL_auxz00_4565;

					{
						obj_t BgL_auxz00_4566;

						{	/* Inline/size.scm 86 */
							BgL_objectz00_bglt BgL_tmpz00_4567;

							BgL_tmpz00_4567 =
								((BgL_objectz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2926));
							BgL_auxz00_4566 = BGL_OBJECT_WIDENING(BgL_tmpz00_4567);
						}
						BgL_auxz00_4565 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_4566);
					}
					BgL_tmpz00_4564 =
						(((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_4565))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4564);
			}
		}

	}



/* &node-size-sync1390 */
	obj_t BGl_z62nodezd2siza7ezd2sync1390zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2927, obj_t BgL_nodez00_2928)
	{
		{	/* Inline/size.scm 74 */
			{	/* Inline/size.scm 75 */
				obj_t BgL_siza7eza7_3239;

				{	/* Inline/size.scm 76 */
					obj_t BgL_arg1798z00_3240;

					{	/* Inline/size.scm 76 */
						long BgL_arg1801z00_3241;
						obj_t BgL_arg1808z00_3242;

						BgL_arg1801z00_3241 =
							BGl_nodezd2siza7ez75zzinline_siza7eza7(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_2928)))->BgL_mutexz00));
						{	/* Inline/size.scm 77 */
							long BgL_arg1811z00_3243;
							long BgL_arg1820z00_3244;

							BgL_arg1811z00_3243 =
								BGl_nodezd2siza7ez75zzinline_siza7eza7(
								(((BgL_syncz00_bglt) COBJECT(
											((BgL_syncz00_bglt) BgL_nodez00_2928)))->BgL_prelockz00));
							BgL_arg1820z00_3244 =
								BGl_nodezd2siza7ez75zzinline_siza7eza7(
								(((BgL_syncz00_bglt) COBJECT(
											((BgL_syncz00_bglt) BgL_nodez00_2928)))->BgL_bodyz00));
							BgL_arg1808z00_3242 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_arg1811z00_3243),
								BINT(BgL_arg1820z00_3244));
						}
						BgL_arg1798z00_3240 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_arg1801z00_3241),
							BgL_arg1808z00_3242);
					}
					BgL_siza7eza7_3239 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						BgL_arg1798z00_3240);
				}
				{	/* Inline/size.scm 79 */
					BgL_siza7edzd2syncz75_bglt BgL_wide1196z00_3245;

					BgL_wide1196z00_3245 =
						((BgL_siza7edzd2syncz75_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_siza7edzd2syncz75_bgl))));
					{	/* Inline/size.scm 79 */
						obj_t BgL_auxz00_4595;
						BgL_objectz00_bglt BgL_tmpz00_4591;

						BgL_auxz00_4595 = ((obj_t) BgL_wide1196z00_3245);
						BgL_tmpz00_4591 =
							((BgL_objectz00_bglt)
							((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2928)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4591, BgL_auxz00_4595);
					}
					((BgL_objectz00_bglt)
						((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2928)));
					{	/* Inline/size.scm 79 */
						long BgL_arg1796z00_3246;

						{	/* Inline/size.scm 79 */
							long BgL_res2048z00_3247;

							BgL_res2048z00_3247 =
								BGL_CLASS_INDEX(BGl_siza7edzd2syncz75zzinline_siza7eza7);
							BgL_arg1796z00_3246 = BgL_res2048z00_3247;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_syncz00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2928))), BgL_arg1796z00_3246);
					}
					((BgL_syncz00_bglt)
						((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2928)));
				}
				{
					BgL_siza7edzd2syncz75_bglt BgL_auxz00_4609;

					{
						obj_t BgL_auxz00_4610;

						{	/* Inline/size.scm 79 */
							BgL_objectz00_bglt BgL_tmpz00_4611;

							BgL_tmpz00_4611 =
								((BgL_objectz00_bglt)
								((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2928)));
							BgL_auxz00_4610 = BGL_OBJECT_WIDENING(BgL_tmpz00_4611);
						}
						BgL_auxz00_4609 = ((BgL_siza7edzd2syncz75_bglt) BgL_auxz00_4610);
					}
					((((BgL_siza7edzd2syncz75_bglt) COBJECT(BgL_auxz00_4609))->
							BgL_siza7eza7) =
						((long) (long) CINT(BgL_siza7eza7_3239)), BUNSPEC);
				}
				((BgL_syncz00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2928));
				return BgL_siza7eza7_3239;
			}
		}

	}



/* &node-size-sized-sequ1388 */
	obj_t BGl_z62nodezd2siza7ezd2siza7edzd2sequ1388zb0zzinline_siza7eza7(obj_t
		BgL_envz00_2929, obj_t BgL_nodez00_2930)
	{
		{	/* Inline/size.scm 68 */
			{	/* Inline/size.scm 69 */
				long BgL_tmpz00_4621;

				{
					BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4622;

					{
						obj_t BgL_auxz00_4623;

						{	/* Inline/size.scm 69 */
							BgL_objectz00_bglt BgL_tmpz00_4624;

							BgL_tmpz00_4624 =
								((BgL_objectz00_bglt)
								((BgL_sequencez00_bglt) BgL_nodez00_2930));
							BgL_auxz00_4623 = BGL_OBJECT_WIDENING(BgL_tmpz00_4624);
						}
						BgL_auxz00_4622 =
							((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4623);
					}
					BgL_tmpz00_4621 =
						(((BgL_siza7edzd2sequencez75_bglt) COBJECT(BgL_auxz00_4622))->
						BgL_siza7eza7);
				}
				return BINT(BgL_tmpz00_4621);
			}
		}

	}



/* &node-size-sequence1386 */
	obj_t BGl_z62nodezd2siza7ezd2sequence1386zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2931, obj_t BgL_nodez00_2932)
	{
		{	/* Inline/size.scm 56 */
			{	/* Inline/size.scm 57 */
				long BgL_tmpz00_4631;

				{	/* Inline/size.scm 57 */
					obj_t BgL_g1189z00_3250;

					BgL_g1189z00_3250 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2932)))->BgL_nodesz00);
					{
						obj_t BgL_nodesz00_3252;
						long BgL_siza7eza7_3253;

						BgL_nodesz00_3252 = BgL_g1189z00_3250;
						BgL_siza7eza7_3253 = ((long) 0);
					BgL_loopz00_3251:
						if (NULLP(BgL_nodesz00_3252))
							{	/* Inline/size.scm 59 */
								{	/* Inline/size.scm 61 */
									BgL_siza7edzd2sequencez75_bglt BgL_wide1192z00_3254;

									BgL_wide1192z00_3254 =
										((BgL_siza7edzd2sequencez75_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_siza7edzd2sequencez75_bgl))));
									{	/* Inline/size.scm 61 */
										obj_t BgL_auxz00_4641;
										BgL_objectz00_bglt BgL_tmpz00_4637;

										BgL_auxz00_4641 = ((obj_t) BgL_wide1192z00_3254);
										BgL_tmpz00_4637 =
											((BgL_objectz00_bglt)
											((BgL_sequencez00_bglt)
												((BgL_sequencez00_bglt) BgL_nodez00_2932)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4637, BgL_auxz00_4641);
									}
									((BgL_objectz00_bglt)
										((BgL_sequencez00_bglt)
											((BgL_sequencez00_bglt) BgL_nodez00_2932)));
									{	/* Inline/size.scm 61 */
										long BgL_arg1778z00_3255;

										{	/* Inline/size.scm 61 */
											long BgL_res2046z00_3256;

											BgL_res2046z00_3256 =
												BGL_CLASS_INDEX
												(BGl_siza7edzd2sequencez75zzinline_siza7eza7);
											BgL_arg1778z00_3255 = BgL_res2046z00_3256;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_sequencez00_bglt)
													((BgL_sequencez00_bglt) BgL_nodez00_2932))),
											BgL_arg1778z00_3255);
									}
									((BgL_sequencez00_bglt)
										((BgL_sequencez00_bglt)
											((BgL_sequencez00_bglt) BgL_nodez00_2932)));
								}
								{
									BgL_siza7edzd2sequencez75_bglt BgL_auxz00_4655;

									{
										obj_t BgL_auxz00_4656;

										{	/* Inline/size.scm 61 */
											BgL_objectz00_bglt BgL_tmpz00_4657;

											BgL_tmpz00_4657 =
												((BgL_objectz00_bglt)
												((BgL_sequencez00_bglt)
													((BgL_sequencez00_bglt) BgL_nodez00_2932)));
											BgL_auxz00_4656 = BGL_OBJECT_WIDENING(BgL_tmpz00_4657);
										}
										BgL_auxz00_4655 =
											((BgL_siza7edzd2sequencez75_bglt) BgL_auxz00_4656);
									}
									((((BgL_siza7edzd2sequencez75_bglt)
												COBJECT(BgL_auxz00_4655))->BgL_siza7eza7) =
										((long) BgL_siza7eza7_3253), BUNSPEC);
								}
								((BgL_sequencez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_2932));
								BgL_tmpz00_4631 = BgL_siza7eza7_3253;
							}
						else
							{	/* Inline/size.scm 63 */
								obj_t BgL_arg1779z00_3257;
								long BgL_arg1782z00_3258;

								BgL_arg1779z00_3257 = CDR(((obj_t) BgL_nodesz00_3252));
								{	/* Inline/size.scm 63 */
									long BgL_arg1784z00_3259;

									{	/* Inline/size.scm 63 */
										obj_t BgL_arg1790z00_3260;

										BgL_arg1790z00_3260 = CAR(((obj_t) BgL_nodesz00_3252));
										BgL_arg1784z00_3259 =
											BGl_nodezd2siza7ez75zzinline_siza7eza7(
											((BgL_nodez00_bglt) BgL_arg1790z00_3260));
									}
									BgL_arg1782z00_3258 =
										(BgL_siza7eza7_3253 + BgL_arg1784z00_3259);
								}
								{
									long BgL_siza7eza7_4674;
									obj_t BgL_nodesz00_4673;

									BgL_nodesz00_4673 = BgL_arg1779z00_3257;
									BgL_siza7eza7_4674 = BgL_arg1782z00_3258;
									BgL_siza7eza7_3253 = BgL_siza7eza7_4674;
									BgL_nodesz00_3252 = BgL_nodesz00_4673;
									goto BgL_loopz00_3251;
								}
							}
					}
				}
				return BINT(BgL_tmpz00_4631);
			}
		}

	}



/* &node-size-kwote1384 */
	obj_t BGl_z62nodezd2siza7ezd2kwote1384zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2933, obj_t BgL_nodez00_2934)
	{
		{	/* Inline/size.scm 50 */
			return BINT(((long) 1));
		}

	}



/* &node-size-var1382 */
	obj_t BGl_z62nodezd2siza7ezd2var1382zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2935, obj_t BgL_nodez00_2936)
	{
		{	/* Inline/size.scm 44 */
			return BINT(((long) 1));
		}

	}



/* &node-size-atom1380 */
	obj_t BGl_z62nodezd2siza7ezd2atom1380zc5zzinline_siza7eza7(obj_t
		BgL_envz00_2937, obj_t BgL_nodez00_2938)
	{
		{	/* Inline/size.scm 38 */
			return BINT(((long) 1));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_siza7eza7()
	{
		{	/* Inline/size.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2165z00zzinline_siza7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2165z00zzinline_siza7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2165z00zzinline_siza7eza7));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2165z00zzinline_siza7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
