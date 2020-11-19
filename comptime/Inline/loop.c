/*===========================================================================*/
/*   (Inline/loop.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/loop.scm) */
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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	extern bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2condition1331z70zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2makezd2b1301z91zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2extern1281z43zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62findzd2letzd2funzf3zd2condit1287z43zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2app1275z43zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zf3zzinline_loopz00(BgL_nodez00_bglt);
	static obj_t BGl_objectzd2initzd2zzinline_loopz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt, BgL_localz00_bglt,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62nestzd2loopz12za2zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2jumpzd2exzd2i1343z70zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_loopz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2switch1335z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2kwote1311z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2funcall1323z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2cast1327z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2sequen1271z43zzinline_loopz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2boxzd2setz121349zb0zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2makezd2box1345za2zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2boxzd2ref1347za2zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2setq1329z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static bool_t BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_loopz00();
	static obj_t BGl_z62findzd2letzd2funzf3z91zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_z62iszd2loopzf3z43zzinline_loopz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2cast1283z43zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62findzd2letzd2funzf3zd2setq1285z43zzinline_loopz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2app1319z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2funcal1279z43zzinline_loopz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2boxzd2re1303z91zzinline_loopz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_loopz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2atom1309z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62findzd2letzd2funzf3zd2switch1291z43zzinline_loopz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2letzd2fun1337za2zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2boxzd2se1305z91zzinline_loopz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzinline_loopz00();
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	static obj_t BGl_genericzd2initzd2zzinline_loopz00();
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2appzd2ly1321za2zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2jumpzd2e1299z91zzinline_loopz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2extern1325z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2setzd2exzd2it1341z70zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62innerzd2loopzf3z43zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_z62nestzd2loopz121306za2zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2letzd2var1339za2zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12za2z62zzinline_loopz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_recursionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_variantz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2sync1317z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2fail1333z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_loopz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_loopz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_loopz00();
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2letzd2va1295z91zzinline_loopz00(obj_t, obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2letzd2fu1293z91zzinline_loopz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2sequence1315z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2var1313z70zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62findzd2letzd2funzf31268z91zzinline_loopz00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2appzd2ly1277z91zzinline_loopz00(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62findzd2letzd2funzf3zd2sync1273z43zzinline_loopz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62findzd2letzd2funzf3zd2setzd2ex1297z91zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2letzd2funzf3zd2fail1289z43zzinline_loopz00(obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21929za7,
		BGl_z62findzd2letzd2funzf3z91zzinline_loopz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_innerzd2loopzf3zd2envzf3zzinline_loopz00,
		BgL_bgl_za762innerza7d2loopza71930za7,
		BGl_z62innerzd2loopzf3z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_iszd2loopzf3zd2envzf3zzinline_loopz00,
		BgL_bgl_za762isza7d2loopza7f3za71931z00,
		BGl_z62iszd2loopzf3z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21932za7,
		BGl_z62findzd2letzd2funzf3zd2boxzd2re1303z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21933za7,
		BGl_z62findzd2letzd2funzf3zd2boxzd2se1305z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711934za7,
		BGl_z62nestzd2loopz12zd2atom1309z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711935za7,
		BGl_z62nestzd2loopz12zd2kwote1311z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711936za7,
		BGl_z62nestzd2loopz12zd2var1313z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711937za7,
		BGl_z62nestzd2loopz12zd2sequence1315z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711938za7,
		BGl_z62nestzd2loopz12zd2sync1317z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711939za7,
		BGl_z62nestzd2loopz12zd2app1319z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711940za7,
		BGl_z62nestzd2loopz12zd2appzd2ly1321za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711941za7,
		BGl_z62nestzd2loopz12zd2funcall1323z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711942za7,
		BGl_z62nestzd2loopz12zd2extern1325z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711943za7,
		BGl_z62nestzd2loopz12zd2cast1327z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711944za7,
		BGl_z62nestzd2loopz12zd2setq1329z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1914z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711945za7,
		BGl_z62nestzd2loopz12zd2condition1331z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711946za7,
		BGl_z62nestzd2loopz12zd2fail1333z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1916z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711947za7,
		BGl_z62nestzd2loopz12zd2switch1335z70zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1917z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711948za7,
		BGl_z62nestzd2loopz12zd2letzd2fun1337za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1918z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711949za7,
		BGl_z62nestzd2loopz12zd2letzd2var1339za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1919z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711950za7,
		BGl_z62nestzd2loopz12zd2setzd2exzd2it1341z70zzinline_loopz00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1920z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711951za7,
		BGl_z62nestzd2loopz12zd2jumpzd2exzd2i1343z70zzinline_loopz00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1921z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711952za7,
		BGl_z62nestzd2loopz12zd2makezd2box1345za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1922z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711953za7,
		BGl_z62nestzd2loopz12zd2boxzd2ref1347za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1923z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711954za7,
		BGl_z62nestzd2loopz12zd2boxzd2setz121349zb0zzinline_loopz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string1879z00zzinline_loopz00,
		BgL_bgl_string1879za700za7za7i1955za7, "find-let-fun?1268", 17);
	      DEFINE_STRING(BGl_string1881z00zzinline_loopz00,
		BgL_bgl_string1881za700za7za7i1956za7, "nest-loop!1306", 14);
	      DEFINE_STRING(BGl_string1882z00zzinline_loopz00,
		BgL_bgl_string1882za700za7za7i1957za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1884z00zzinline_loopz00,
		BgL_bgl_string1884za700za7za7i1958za7, "find-let-fun?", 13);
	      DEFINE_STRING(BGl_string1903z00zzinline_loopz00,
		BgL_bgl_string1903za700za7za7i1959za7, "nest-loop!", 10);
	      DEFINE_STRING(BGl_string1924z00zzinline_loopz00,
		BgL_bgl_string1924za700za7za7i1960za7, "inline_loop", 11);
	      DEFINE_STRING(BGl_string1925z00zzinline_loopz00,
		BgL_bgl_string1925za700za7za7i1961za7, "nest-loop!1306 done ", 20);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711962za7,
		BGl_z62nestzd2loopz12za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21963za7,
		BGl_z62findzd2letzd2funzf31268z91zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzinline_loopz00,
		BgL_bgl_za762nestza7d2loopza711964za7,
		BGl_z62nestzd2loopz121306za2zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21965za7,
		BGl_z62findzd2letzd2funzf3zd2sequen1271z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21966za7,
		BGl_z62findzd2letzd2funzf3zd2sync1273z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21967za7,
		BGl_z62findzd2letzd2funzf3zd2app1275z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21968za7,
		BGl_z62findzd2letzd2funzf3zd2appzd2ly1277z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21969za7,
		BGl_z62findzd2letzd2funzf3zd2funcal1279z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21970za7,
		BGl_z62findzd2letzd2funzf3zd2extern1281z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21971za7,
		BGl_z62findzd2letzd2funzf3zd2cast1283z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21972za7,
		BGl_z62findzd2letzd2funzf3zd2setq1285z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21973za7,
		BGl_z62findzd2letzd2funzf3zd2condit1287z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21974za7,
		BGl_z62findzd2letzd2funzf3zd2fail1289z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1894z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21975za7,
		BGl_z62findzd2letzd2funzf3zd2switch1291z43zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21976za7,
		BGl_z62findzd2letzd2funzf3zd2letzd2fu1293z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21977za7,
		BGl_z62findzd2letzd2funzf3zd2letzd2va1295z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21978za7,
		BGl_z62findzd2letzd2funzf3zd2setzd2ex1297z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21979za7,
		BGl_z62findzd2letzd2funzf3zd2jumpzd2e1299z91zzinline_loopz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzinline_loopz00,
		BgL_bgl_za762findza7d2letza7d21980za7,
		BGl_z62findzd2letzd2funzf3zd2makezd2b1301z91zzinline_loopz00, 0L, BUNSPEC,
		1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinline_loopz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long
		BgL_checksumz00_2550, char *BgL_fromz00_2551)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_loopz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_loopz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_loopz00();
					BGl_libraryzd2moduleszd2initz00zzinline_loopz00();
					BGl_cnstzd2initzd2zzinline_loopz00();
					BGl_importedzd2moduleszd2initz00zzinline_loopz00();
					BGl_genericzd2initzd2zzinline_loopz00();
					BGl_methodzd2initzd2zzinline_loopz00();
					return BGl_toplevelzd2initzd2zzinline_loopz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_loop");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"inline_loop");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_loop");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			{	/* Inline/loop.scm 15 */
				obj_t BgL_cportz00_2426;

				{	/* Inline/loop.scm 15 */
					obj_t BgL_stringz00_2434;

					BgL_stringz00_2434 = BGl_string1925z00zzinline_loopz00;
					{	/* Inline/loop.scm 15 */
						obj_t BgL_startz00_2435;

						BgL_startz00_2435 = BINT(((long) 0));
						{	/* Inline/loop.scm 15 */
							obj_t BgL_endz00_2436;

							BgL_endz00_2436 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2434)));
							{	/* Inline/loop.scm 15 */

								BgL_cportz00_2426 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2434, BgL_startz00_2435, BgL_endz00_2436);
				}}}}
				{
					long BgL_iz00_2427;

					BgL_iz00_2427 = ((long) 1);
				BgL_loopz00_2428:
					if ((BgL_iz00_2427 == ((long) -1)))
						{	/* Inline/loop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/loop.scm 15 */
							{	/* Inline/loop.scm 15 */
								obj_t BgL_arg1927z00_2430;

								{	/* Inline/loop.scm 15 */

									{	/* Inline/loop.scm 15 */
										obj_t BgL_locationz00_2432;

										BgL_locationz00_2432 = BBOOL(((bool_t) 0));
										{	/* Inline/loop.scm 15 */

											BgL_arg1927z00_2430 =
												BGl_readz00zz__readerz00(BgL_cportz00_2426,
												BgL_locationz00_2432);
										}
									}
								}
								{	/* Inline/loop.scm 15 */
									int BgL_tmpz00_2580;

									BgL_tmpz00_2580 = (int) (BgL_iz00_2427);
									CNST_TABLE_SET(BgL_tmpz00_2580, BgL_arg1927z00_2430);
							}}
							{	/* Inline/loop.scm 15 */
								int BgL_auxz00_2433;

								BgL_auxz00_2433 = (int) ((BgL_iz00_2427 - ((long) 1)));
								{
									long BgL_iz00_2585;

									BgL_iz00_2585 = (long) (BgL_auxz00_2433);
									BgL_iz00_2427 = BgL_iz00_2585;
									goto BgL_loopz00_2428;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			return BUNSPEC;
		}

	}



/* is-loop? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt BgL_variablez00_3)
	{
		{	/* Inline/loop.scm 39 */
			if (BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_3))
				{	/* Inline/loop.scm 42 */
					long BgL_arg1357z00_1540;

					{	/* Inline/loop.scm 42 */
						obj_t BgL_arg1360z00_1541;

						{	/* Inline/loop.scm 42 */
							BgL_sfunz00_bglt BgL_oz00_2096;

							BgL_oz00_2096 =
								((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3))->
									BgL_valuez00));
							{
								BgL_isfunz00_bglt BgL_auxz00_2592;

								{
									obj_t BgL_auxz00_2593;

									{	/* Inline/loop.scm 42 */
										BgL_objectz00_bglt BgL_tmpz00_2594;

										BgL_tmpz00_2594 = ((BgL_objectz00_bglt) BgL_oz00_2096);
										BgL_auxz00_2593 = BGL_OBJECT_WIDENING(BgL_tmpz00_2594);
									}
									BgL_auxz00_2592 = ((BgL_isfunz00_bglt) BgL_auxz00_2593);
								}
								BgL_arg1360z00_1541 =
									(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2592))->
									BgL_recursivezd2callszd2);
						}}
						BgL_arg1357z00_1540 = bgl_list_length(BgL_arg1360z00_1541);
					}
					return (BgL_arg1357z00_1540 == ((long) 1));
				}
			else
				{	/* Inline/loop.scm 41 */
					return ((bool_t) 0);
				}
		}

	}



/* &is-loop? */
	obj_t BGl_z62iszd2loopzf3z43zzinline_loopz00(obj_t BgL_envz00_2249,
		obj_t BgL_variablez00_2250)
	{
		{	/* Inline/loop.scm 39 */
			return
				BBOOL(BGl_iszd2loopzf3z21zzinline_loopz00(
					((BgL_variablez00_bglt) BgL_variablez00_2250)));
		}

	}



/* inner-loop? */
	BGL_EXPORTED_DEF bool_t
		BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt
		BgL_variablez00_4)
	{
		{	/* Inline/loop.scm 49 */
			{	/* Inline/loop.scm 50 */
				obj_t BgL_arg1363z00_2100;

				BgL_arg1363z00_2100 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_4))->
									BgL_valuez00))))->BgL_bodyz00);
				return
					CBOOL(BGl_findzd2letzd2funzf3zf3zzinline_loopz00(((BgL_nodez00_bglt)
							BgL_arg1363z00_2100)));
			}
		}

	}



/* &inner-loop? */
	obj_t BGl_z62innerzd2loopzf3z43zzinline_loopz00(obj_t BgL_envz00_2251,
		obj_t BgL_variablez00_2252)
	{
		{	/* Inline/loop.scm 49 */
			return
				BBOOL(BGl_innerzd2loopzf3z21zzinline_loopz00(
					((BgL_variablez00_bglt) BgL_variablez00_2252)));
		}

	}



/* find-let-fun?* */
	bool_t BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(obj_t BgL_nodeza2za2_24)
	{
		{	/* Inline/loop.scm 197 */
			{
				obj_t BgL_nodeza2za2_1546;

				BgL_nodeza2za2_1546 = BgL_nodeza2za2_24;
			BgL_zc3z04anonymousza31365ze3z87_1547:
				if (NULLP(BgL_nodeza2za2_1546))
					{	/* Inline/loop.scm 200 */
						return ((bool_t) 0);
					}
				else
					{	/* Inline/loop.scm 202 */
						bool_t BgL_test1985z00_2615;

						{	/* Inline/loop.scm 202 */
							obj_t BgL_arg1371z00_1552;

							BgL_arg1371z00_1552 = CAR(((obj_t) BgL_nodeza2za2_1546));
							BgL_test1985z00_2615 =
								CBOOL(BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
									((BgL_nodez00_bglt) BgL_arg1371z00_1552)));
						}
						if (BgL_test1985z00_2615)
							{	/* Inline/loop.scm 202 */
								return ((bool_t) 1);
							}
						else
							{	/* Inline/loop.scm 205 */
								obj_t BgL_arg1370z00_1551;

								BgL_arg1370z00_1551 = CDR(((obj_t) BgL_nodeza2za2_1546));
								{
									obj_t BgL_nodeza2za2_2623;

									BgL_nodeza2za2_2623 = BgL_arg1370z00_1551;
									BgL_nodeza2za2_1546 = BgL_nodeza2za2_2623;
									goto BgL_zc3z04anonymousza31365ze3z87_1547;
								}
							}
					}
			}
		}

	}



/* nest-loop!* */
	obj_t BGl_nestzd2loopz12za2z62zzinline_loopz00(obj_t BgL_nodeza2za2_91,
		obj_t BgL_varz00_92, obj_t BgL_nesterz00_93)
	{
		{	/* Inline/loop.scm 399 */
			{
				obj_t BgL_nodeza2za2_1555;

				BgL_nodeza2za2_1555 = BgL_nodeza2za2_91;
			BgL_zc3z04anonymousza31372ze3z87_1556:
				if (NULLP(BgL_nodeza2za2_1555))
					{	/* Inline/loop.scm 401 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Inline/loop.scm 401 */
						{	/* Inline/loop.scm 404 */
							BgL_nodez00_bglt BgL_arg1381z00_1558;

							{	/* Inline/loop.scm 404 */
								obj_t BgL_arg1382z00_1559;

								BgL_arg1382z00_1559 = CAR(((obj_t) BgL_nodeza2za2_1555));
								BgL_arg1381z00_1558 =
									BGl_nestzd2loopz12zc0zzinline_loopz00(
									((BgL_nodez00_bglt) BgL_arg1382z00_1559),
									((BgL_localz00_bglt) BgL_varz00_92), BgL_nesterz00_93);
							}
							{	/* Inline/loop.scm 404 */
								obj_t BgL_auxz00_2634;
								obj_t BgL_tmpz00_2632;

								BgL_auxz00_2634 = ((obj_t) BgL_arg1381z00_1558);
								BgL_tmpz00_2632 = ((obj_t) BgL_nodeza2za2_1555);
								SET_CAR(BgL_tmpz00_2632, BgL_auxz00_2634);
							}
						}
						{	/* Inline/loop.scm 405 */
							obj_t BgL_arg1383z00_1560;

							BgL_arg1383z00_1560 = CDR(((obj_t) BgL_nodeza2za2_1555));
							{
								obj_t BgL_nodeza2za2_2639;

								BgL_nodeza2za2_2639 = BgL_arg1383z00_1560;
								BgL_nodeza2za2_1555 = BgL_nodeza2za2_2639;
								goto BgL_zc3z04anonymousza31372ze3z87_1556;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_proc1878z00zzinline_loopz00, BGl_nodez00zzast_nodez00,
				BGl_string1879z00zzinline_loopz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_proc1880z00zzinline_loopz00, BGl_nodez00zzast_nodez00,
				BGl_string1881z00zzinline_loopz00);
		}

	}



/* &nest-loop!1306 */
	obj_t BGl_z62nestzd2loopz121306za2zzinline_loopz00(obj_t BgL_envz00_2255,
		obj_t BgL_nodez00_2256, obj_t BgL_localz00_2257, obj_t BgL_nesterz00_2258)
	{
		{	/* Inline/loop.scm 210 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string1882z00zzinline_loopz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2256)));
		}

	}



/* &find-let-fun?1268 */
	obj_t BGl_z62findzd2letzd2funzf31268z91zzinline_loopz00(obj_t BgL_envz00_2259,
		obj_t BgL_nodez00_2260)
	{
		{	/* Inline/loop.scm 55 */
			return BBOOL(((bool_t) 0));
		}

	}



/* find-let-fun? */
	obj_t BGl_findzd2letzd2funzf3zf3zzinline_loopz00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Inline/loop.scm 55 */
			{	/* Inline/loop.scm 55 */
				obj_t BgL_method1269z00_1572;

				{	/* Inline/loop.scm 55 */
					obj_t BgL_res1860z00_2147;

					{	/* Inline/loop.scm 55 */
						long BgL_objzd2classzd2numz00_2112;

						{	/* Inline/loop.scm 55 */
							long BgL_res1850z00_2115;

							BgL_res1850z00_2115 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_2112 = BgL_res1850z00_2115;
						}
						{	/* Inline/loop.scm 55 */
							obj_t BgL_arg1813z00_2113;

							BgL_arg1813z00_2113 =
								PROCEDURE_REF(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
								(int) (((long) 1)));
							{	/* Inline/loop.scm 55 */
								int BgL_offsetz00_2117;

								BgL_offsetz00_2117 = (int) (BgL_objzd2classzd2numz00_2112);
								{	/* Inline/loop.scm 55 */
									long BgL_offsetz00_2118;

									BgL_offsetz00_2118 =
										((long) (BgL_offsetz00_2117) - OBJECT_TYPE);
									{	/* Inline/loop.scm 55 */
										long BgL_modz00_2119;

										BgL_modz00_2119 =
											(BgL_offsetz00_2118 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/loop.scm 55 */
											long BgL_restz00_2121;

											BgL_restz00_2121 =
												(BgL_offsetz00_2118 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/loop.scm 55 */

												{	/* Inline/loop.scm 55 */
													obj_t BgL_bucketz00_2123;

													BgL_bucketz00_2123 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2113), BgL_modz00_2119);
													BgL_res1860z00_2147 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2123), BgL_restz00_2121);
					}}}}}}}}
					BgL_method1269z00_1572 = BgL_res1860z00_2147;
				}
				return
					PROCEDURE_ENTRY(BgL_method1269z00_1572) (BgL_method1269z00_1572,
					((obj_t) BgL_nodez00_5), BEOA);
			}
		}

	}



/* &find-let-fun? */
	obj_t BGl_z62findzd2letzd2funzf3z91zzinline_loopz00(obj_t BgL_envz00_2261,
		obj_t BgL_nodez00_2262)
	{
		{	/* Inline/loop.scm 55 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				((BgL_nodez00_bglt) BgL_nodez00_2262));
		}

	}



/* nest-loop! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt BgL_nodez00_25,
		BgL_localz00_bglt BgL_localz00_26, obj_t BgL_nesterz00_27)
	{
		{	/* Inline/loop.scm 210 */
			{	/* Inline/loop.scm 210 */
				obj_t BgL_method1307z00_1573;

				{	/* Inline/loop.scm 210 */
					obj_t BgL_res1871z00_2184;

					{	/* Inline/loop.scm 210 */
						long BgL_objzd2classzd2numz00_2149;

						{	/* Inline/loop.scm 210 */
							long BgL_res1861z00_2152;

							BgL_res1861z00_2152 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_25));
							BgL_objzd2classzd2numz00_2149 = BgL_res1861z00_2152;
						}
						{	/* Inline/loop.scm 210 */
							obj_t BgL_arg1813z00_2150;

							BgL_arg1813z00_2150 =
								PROCEDURE_REF(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
								(int) (((long) 1)));
							{	/* Inline/loop.scm 210 */
								int BgL_offsetz00_2154;

								BgL_offsetz00_2154 = (int) (BgL_objzd2classzd2numz00_2149);
								{	/* Inline/loop.scm 210 */
									long BgL_offsetz00_2155;

									BgL_offsetz00_2155 =
										((long) (BgL_offsetz00_2154) - OBJECT_TYPE);
									{	/* Inline/loop.scm 210 */
										long BgL_modz00_2156;

										BgL_modz00_2156 =
											(BgL_offsetz00_2155 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/loop.scm 210 */
											long BgL_restz00_2158;

											BgL_restz00_2158 =
												(BgL_offsetz00_2155 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/loop.scm 210 */

												{	/* Inline/loop.scm 210 */
													obj_t BgL_bucketz00_2160;

													BgL_bucketz00_2160 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2150), BgL_modz00_2156);
													BgL_res1871z00_2184 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2160), BgL_restz00_2158);
					}}}}}}}}
					BgL_method1307z00_1573 = BgL_res1871z00_2184;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1307z00_1573) (BgL_method1307z00_1573,
						((obj_t) BgL_nodez00_25),
						((obj_t) BgL_localz00_26), BgL_nesterz00_27, BEOA));
			}
		}

	}



/* &nest-loop! */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12za2zzinline_loopz00(obj_t
		BgL_envz00_2263, obj_t BgL_nodez00_2264, obj_t BgL_localz00_2265,
		obj_t BgL_nesterz00_2266)
	{
		{	/* Inline/loop.scm 210 */
			return
				BGl_nestzd2loopz12zc0zzinline_loopz00(
				((BgL_nodez00_bglt) BgL_nodez00_2264),
				((BgL_localz00_bglt) BgL_localz00_2265), BgL_nesterz00_2266);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1883z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_syncz00zzast_nodez00, BGl_proc1885z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_appz00zzast_nodez00, BGl_proc1886z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1887z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1888z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_externz00zzast_nodez00, BGl_proc1889z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_castz00zzast_nodez00, BGl_proc1890z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_setqz00zzast_nodez00, BGl_proc1891z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1892z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_failz00zzast_nodez00, BGl_proc1893z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_switchz00zzast_nodez00, BGl_proc1894z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1895z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1896z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1897z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1898z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1899z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1900z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1901z00zzinline_loopz00,
				BGl_string1884z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_atomz00zzast_nodez00,
				BGl_proc1902z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1904z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_varz00zzast_nodez00,
				BGl_proc1905z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1906z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_syncz00zzast_nodez00,
				BGl_proc1907z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_appz00zzast_nodez00,
				BGl_proc1908z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1909z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1910z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_externz00zzast_nodez00, BGl_proc1911z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_castz00zzast_nodez00,
				BGl_proc1912z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_setqz00zzast_nodez00,
				BGl_proc1913z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1914z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_failz00zzast_nodez00,
				BGl_proc1915z00zzinline_loopz00, BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_switchz00zzast_nodez00, BGl_proc1916z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1917z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1918z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1919z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1920z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1921z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1922z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1923z00zzinline_loopz00,
				BGl_string1903z00zzinline_loopz00);
		}

	}



/* &nest-loop!-box-set!1349 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2boxzd2setz121349zb0zzinline_loopz00(obj_t
		BgL_envz00_2306, obj_t BgL_nodez00_2307, obj_t BgL_vz00_2308,
		obj_t BgL_nesterz00_2309)
	{
		{	/* Inline/loop.scm 390 */
			{
				BgL_varz00_bglt BgL_auxz00_2755;

				{	/* Inline/loop.scm 392 */
					BgL_varz00_bglt BgL_arg1727z00_2444;

					BgL_arg1727z00_2444 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2307)))->BgL_varz00);
					BgL_auxz00_2755 =
						((BgL_varz00_bglt)
						BGl_nestzd2loopz12zc0zzinline_loopz00(
							((BgL_nodez00_bglt) BgL_arg1727z00_2444),
							((BgL_localz00_bglt) BgL_vz00_2308), BgL_nesterz00_2309));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2307)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2755), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2764;

				{	/* Inline/loop.scm 393 */
					BgL_nodez00_bglt BgL_arg1728z00_2445;

					BgL_arg1728z00_2445 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2307)))->BgL_valuez00);
					BgL_auxz00_2764 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1728z00_2445,
						((BgL_localz00_bglt) BgL_vz00_2308), BgL_nesterz00_2309);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2307)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2764), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2307));
		}

	}



/* &nest-loop!-box-ref1347 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2boxzd2ref1347za2zzinline_loopz00(obj_t
		BgL_envz00_2310, obj_t BgL_nodez00_2311, obj_t BgL_vz00_2312,
		obj_t BgL_nesterz00_2313)
	{
		{	/* Inline/loop.scm 382 */
			{
				BgL_varz00_bglt BgL_auxz00_2773;

				{	/* Inline/loop.scm 384 */
					BgL_varz00_bglt BgL_arg1726z00_2447;

					BgL_arg1726z00_2447 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2311)))->BgL_varz00);
					BgL_auxz00_2773 =
						((BgL_varz00_bglt)
						BGl_nestzd2loopz12zc0zzinline_loopz00(
							((BgL_nodez00_bglt) BgL_arg1726z00_2447),
							((BgL_localz00_bglt) BgL_vz00_2312), BgL_nesterz00_2313));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2311)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_2773), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2311));
		}

	}



/* &nest-loop!-make-box1345 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2makezd2box1345za2zzinline_loopz00(obj_t
		BgL_envz00_2314, obj_t BgL_nodez00_2315, obj_t BgL_varz00_2316,
		obj_t BgL_nesterz00_2317)
	{
		{	/* Inline/loop.scm 374 */
			{
				BgL_nodez00_bglt BgL_auxz00_2784;

				{	/* Inline/loop.scm 376 */
					BgL_nodez00_bglt BgL_arg1725z00_2449;

					BgL_arg1725z00_2449 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2315)))->BgL_valuez00);
					BgL_auxz00_2784 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1725z00_2449,
						((BgL_localz00_bglt) BgL_varz00_2316), BgL_nesterz00_2317);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2315)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2784), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2315));
		}

	}



/* &nest-loop!-jump-ex-i1343 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2jumpzd2exzd2i1343z70zzinline_loopz00(obj_t
		BgL_envz00_2318, obj_t BgL_nodez00_2319, obj_t BgL_vz00_2320,
		obj_t BgL_nesterz00_2321)
	{
		{	/* Inline/loop.scm 365 */
			{
				BgL_nodez00_bglt BgL_auxz00_2793;

				{	/* Inline/loop.scm 367 */
					BgL_nodez00_bglt BgL_arg1712z00_2451;

					BgL_arg1712z00_2451 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2319)))->BgL_exitz00);
					BgL_auxz00_2793 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1712z00_2451,
						((BgL_localz00_bglt) BgL_vz00_2320), BgL_nesterz00_2321);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2319)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2793), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2800;

				{	/* Inline/loop.scm 368 */
					BgL_nodez00_bglt BgL_arg1719z00_2452;

					BgL_arg1719z00_2452 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2319)))->
						BgL_valuez00);
					BgL_auxz00_2800 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1719z00_2452,
						((BgL_localz00_bglt) BgL_vz00_2320), BgL_nesterz00_2321);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2319)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2800), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2319));
		}

	}



/* &nest-loop!-set-ex-it1341 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2setzd2exzd2it1341z70zzinline_loopz00(obj_t
		BgL_envz00_2322, obj_t BgL_nodez00_2323, obj_t BgL_varz00_2324,
		obj_t BgL_nesterz00_2325)
	{
		{	/* Inline/loop.scm 357 */
			{
				BgL_nodez00_bglt BgL_auxz00_2809;

				{	/* Inline/loop.scm 359 */
					BgL_nodez00_bglt BgL_arg1711z00_2454;

					BgL_arg1711z00_2454 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2323)))->BgL_bodyz00);
					BgL_auxz00_2809 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1711z00_2454,
						((BgL_localz00_bglt) BgL_varz00_2324), BgL_nesterz00_2325);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2323)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2809), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2323));
		}

	}



/* &nest-loop!-let-var1339 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2letzd2var1339za2zzinline_loopz00(obj_t
		BgL_envz00_2326, obj_t BgL_nodez00_2327, obj_t BgL_varz00_2328,
		obj_t BgL_nesterz00_2329)
	{
		{	/* Inline/loop.scm 346 */
			{
				BgL_nodez00_bglt BgL_auxz00_2818;

				{	/* Inline/loop.scm 348 */
					BgL_nodez00_bglt BgL_arg1697z00_2456;

					BgL_arg1697z00_2456 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2327)))->BgL_bodyz00);
					BgL_auxz00_2818 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1697z00_2456,
						((BgL_localz00_bglt) BgL_varz00_2328), BgL_nesterz00_2329);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2327)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2818), BUNSPEC);
			}
			{	/* Inline/loop.scm 349 */
				obj_t BgL_g1267z00_2457;

				BgL_g1267z00_2457 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2327)))->BgL_bindingsz00);
				{
					obj_t BgL_l1265z00_2459;

					BgL_l1265z00_2459 = BgL_g1267z00_2457;
				BgL_zc3z04anonymousza31698ze3z87_2458:
					if (PAIRP(BgL_l1265z00_2459))
						{	/* Inline/loop.scm 349 */
							{	/* Inline/loop.scm 350 */
								obj_t BgL_bindingz00_2460;

								BgL_bindingz00_2460 = CAR(BgL_l1265z00_2459);
								{	/* Inline/loop.scm 350 */
									BgL_nodez00_bglt BgL_arg1704z00_2461;

									{	/* Inline/loop.scm 350 */
										obj_t BgL_arg1707z00_2462;

										BgL_arg1707z00_2462 = CDR(((obj_t) BgL_bindingz00_2460));
										BgL_arg1704z00_2461 =
											BGl_nestzd2loopz12zc0zzinline_loopz00(
											((BgL_nodez00_bglt) BgL_arg1707z00_2462),
											((BgL_localz00_bglt) BgL_varz00_2328),
											BgL_nesterz00_2329);
									}
									{	/* Inline/loop.scm 350 */
										obj_t BgL_auxz00_2837;
										obj_t BgL_tmpz00_2835;

										BgL_auxz00_2837 = ((obj_t) BgL_arg1704z00_2461);
										BgL_tmpz00_2835 = ((obj_t) BgL_bindingz00_2460);
										SET_CDR(BgL_tmpz00_2835, BgL_auxz00_2837);
									}
								}
							}
							{
								obj_t BgL_l1265z00_2840;

								BgL_l1265z00_2840 = CDR(BgL_l1265z00_2459);
								BgL_l1265z00_2459 = BgL_l1265z00_2840;
								goto BgL_zc3z04anonymousza31698ze3z87_2458;
							}
						}
					else
						{	/* Inline/loop.scm 349 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2327));
		}

	}



/* &nest-loop!-let-fun1337 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2letzd2fun1337za2zzinline_loopz00(obj_t
		BgL_envz00_2330, obj_t BgL_nodez00_2331, obj_t BgL_varz00_2332,
		obj_t BgL_nesterz00_2333)
	{
		{	/* Inline/loop.scm 331 */
			{
				BgL_nodez00_bglt BgL_auxz00_2844;

				{	/* Inline/loop.scm 333 */
					BgL_nodez00_bglt BgL_arg1686z00_2464;

					BgL_arg1686z00_2464 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2331)))->BgL_bodyz00);
					BgL_auxz00_2844 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1686z00_2464,
						((BgL_localz00_bglt) BgL_varz00_2332), BgL_nesterz00_2333);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2331)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2844), BUNSPEC);
			}
			{	/* Inline/loop.scm 334 */
				obj_t BgL_g1264z00_2465;

				BgL_g1264z00_2465 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2331)))->BgL_localsz00);
				{
					obj_t BgL_l1262z00_2467;

					BgL_l1262z00_2467 = BgL_g1264z00_2465;
				BgL_zc3z04anonymousza31687ze3z87_2466:
					if (PAIRP(BgL_l1262z00_2467))
						{	/* Inline/loop.scm 334 */
							{	/* Inline/loop.scm 335 */
								obj_t BgL_localz00_2468;

								BgL_localz00_2468 = CAR(BgL_l1262z00_2467);
								{	/* Inline/loop.scm 335 */
									BgL_valuez00_bglt BgL_sfunz00_2469;

									BgL_sfunz00_2469 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2468))))->
										BgL_valuez00);
									{	/* Inline/loop.scm 337 */
										BgL_nodez00_bglt BgL_arg1692z00_2470;

										{	/* Inline/loop.scm 337 */
											obj_t BgL_arg1695z00_2471;

											BgL_arg1695z00_2471 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_sfunz00_2469)))->
												BgL_bodyz00);
											BgL_arg1692z00_2470 =
												BGl_nestzd2loopz12zc0zzinline_loopz00((
													(BgL_nodez00_bglt) BgL_arg1695z00_2471),
												((BgL_localz00_bglt) BgL_varz00_2332),
												BgL_nesterz00_2333);
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_sfunz00_2469)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1692z00_2470)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1262z00_2867;

								BgL_l1262z00_2867 = CDR(BgL_l1262z00_2467);
								BgL_l1262z00_2467 = BgL_l1262z00_2867;
								goto BgL_zc3z04anonymousza31687ze3z87_2466;
							}
						}
					else
						{	/* Inline/loop.scm 334 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2331));
		}

	}



/* &nest-loop!-switch1335 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2switch1335z70zzinline_loopz00(obj_t
		BgL_envz00_2334, obj_t BgL_nodez00_2335, obj_t BgL_varz00_2336,
		obj_t BgL_nesterz00_2337)
	{
		{	/* Inline/loop.scm 320 */
			{
				BgL_nodez00_bglt BgL_auxz00_2871;

				{	/* Inline/loop.scm 322 */
					BgL_nodez00_bglt BgL_arg1667z00_2473;

					BgL_arg1667z00_2473 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2335)))->BgL_testz00);
					BgL_auxz00_2871 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1667z00_2473,
						((BgL_localz00_bglt) BgL_varz00_2336), BgL_nesterz00_2337);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2335)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2871), BUNSPEC);
			}
			{	/* Inline/loop.scm 323 */
				obj_t BgL_g1261z00_2474;

				BgL_g1261z00_2474 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2335)))->BgL_clausesz00);
				{
					obj_t BgL_l1259z00_2476;

					BgL_l1259z00_2476 = BgL_g1261z00_2474;
				BgL_zc3z04anonymousza31668ze3z87_2475:
					if (PAIRP(BgL_l1259z00_2476))
						{	/* Inline/loop.scm 323 */
							{	/* Inline/loop.scm 324 */
								obj_t BgL_clausez00_2477;

								BgL_clausez00_2477 = CAR(BgL_l1259z00_2476);
								{	/* Inline/loop.scm 324 */
									BgL_nodez00_bglt BgL_arg1672z00_2478;

									{	/* Inline/loop.scm 324 */
										obj_t BgL_arg1684z00_2479;

										BgL_arg1684z00_2479 = CDR(((obj_t) BgL_clausez00_2477));
										BgL_arg1672z00_2478 =
											BGl_nestzd2loopz12zc0zzinline_loopz00(
											((BgL_nodez00_bglt) BgL_arg1684z00_2479),
											((BgL_localz00_bglt) BgL_varz00_2336),
											BgL_nesterz00_2337);
									}
									{	/* Inline/loop.scm 324 */
										obj_t BgL_auxz00_2890;
										obj_t BgL_tmpz00_2888;

										BgL_auxz00_2890 = ((obj_t) BgL_arg1672z00_2478);
										BgL_tmpz00_2888 = ((obj_t) BgL_clausez00_2477);
										SET_CDR(BgL_tmpz00_2888, BgL_auxz00_2890);
									}
								}
							}
							{
								obj_t BgL_l1259z00_2893;

								BgL_l1259z00_2893 = CDR(BgL_l1259z00_2476);
								BgL_l1259z00_2476 = BgL_l1259z00_2893;
								goto BgL_zc3z04anonymousza31668ze3z87_2475;
							}
						}
					else
						{	/* Inline/loop.scm 323 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2335));
		}

	}



/* &nest-loop!-fail1333 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2fail1333z70zzinline_loopz00(obj_t
		BgL_envz00_2338, obj_t BgL_nodez00_2339, obj_t BgL_varz00_2340,
		obj_t BgL_nesterz00_2341)
	{
		{	/* Inline/loop.scm 310 */
			{
				BgL_nodez00_bglt BgL_auxz00_2897;

				{	/* Inline/loop.scm 312 */
					BgL_nodez00_bglt BgL_arg1662z00_2481;

					BgL_arg1662z00_2481 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_procz00);
					BgL_auxz00_2897 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1662z00_2481,
						((BgL_localz00_bglt) BgL_varz00_2340), BgL_nesterz00_2341);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2897), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2904;

				{	/* Inline/loop.scm 313 */
					BgL_nodez00_bglt BgL_arg1663z00_2482;

					BgL_arg1663z00_2482 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_msgz00);
					BgL_auxz00_2904 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1663z00_2482,
						((BgL_localz00_bglt) BgL_varz00_2340), BgL_nesterz00_2341);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2904), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2911;

				{	/* Inline/loop.scm 314 */
					BgL_nodez00_bglt BgL_arg1664z00_2483;

					BgL_arg1664z00_2483 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_objz00);
					BgL_auxz00_2911 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1664z00_2483,
						((BgL_localz00_bglt) BgL_varz00_2340), BgL_nesterz00_2341);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2339)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2911), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2339));
		}

	}



/* &nest-loop!-condition1331 */
	BgL_nodez00_bglt
		BGl_z62nestzd2loopz12zd2condition1331z70zzinline_loopz00(obj_t
		BgL_envz00_2342, obj_t BgL_nodez00_2343, obj_t BgL_varz00_2344,
		obj_t BgL_nesterz00_2345)
	{
		{	/* Inline/loop.scm 300 */
			{
				BgL_nodez00_bglt BgL_auxz00_2920;

				{	/* Inline/loop.scm 302 */
					BgL_nodez00_bglt BgL_arg1641z00_2485;

					BgL_arg1641z00_2485 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_testz00);
					BgL_auxz00_2920 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1641z00_2485,
						((BgL_localz00_bglt) BgL_varz00_2344), BgL_nesterz00_2345);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2920), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2927;

				{	/* Inline/loop.scm 303 */
					BgL_nodez00_bglt BgL_arg1644z00_2486;

					BgL_arg1644z00_2486 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_truez00);
					BgL_auxz00_2927 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1644z00_2486,
						((BgL_localz00_bglt) BgL_varz00_2344), BgL_nesterz00_2345);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2927), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2934;

				{	/* Inline/loop.scm 304 */
					BgL_nodez00_bglt BgL_arg1652z00_2487;

					BgL_arg1652z00_2487 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_falsez00);
					BgL_auxz00_2934 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1652z00_2487,
						((BgL_localz00_bglt) BgL_varz00_2344), BgL_nesterz00_2345);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2343)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2934), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2343));
		}

	}



/* &nest-loop!-setq1329 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2setq1329z70zzinline_loopz00(obj_t
		BgL_envz00_2346, obj_t BgL_nodez00_2347, obj_t BgL_varz00_2348,
		obj_t BgL_nesterz00_2349)
	{
		{	/* Inline/loop.scm 293 */
			{	/* Inline/loop.scm 294 */
				BgL_nodez00_bglt BgL_arg1640z00_2489;

				BgL_arg1640z00_2489 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2347)))->BgL_valuez00);
				BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1640z00_2489,
					((BgL_localz00_bglt) BgL_varz00_2348), BgL_nesterz00_2349);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2347));
		}

	}



/* &nest-loop!-cast1327 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2cast1327z70zzinline_loopz00(obj_t
		BgL_envz00_2350, obj_t BgL_nodez00_2351, obj_t BgL_varz00_2352,
		obj_t BgL_nesterz00_2353)
	{
		{	/* Inline/loop.scm 286 */
			{	/* Inline/loop.scm 287 */
				BgL_nodez00_bglt BgL_arg1639z00_2491;

				BgL_arg1639z00_2491 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2351)))->BgL_argz00);
				BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1639z00_2491,
					((BgL_localz00_bglt) BgL_varz00_2352), BgL_nesterz00_2353);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2351));
		}

	}



/* &nest-loop!-extern1325 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2extern1325z70zzinline_loopz00(obj_t
		BgL_envz00_2354, obj_t BgL_nodez00_2355, obj_t BgL_varz00_2356,
		obj_t BgL_nesterz00_2357)
	{
		{	/* Inline/loop.scm 279 */
			BGl_nestzd2loopz12za2z62zzinline_loopz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2355)))->BgL_exprza2za2),
				BgL_varz00_2356, BgL_nesterz00_2357);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2355));
		}

	}



/* &nest-loop!-funcall1323 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2funcall1323z70zzinline_loopz00(obj_t
		BgL_envz00_2358, obj_t BgL_nodez00_2359, obj_t BgL_varz00_2360,
		obj_t BgL_nesterz00_2361)
	{
		{	/* Inline/loop.scm 270 */
			{
				BgL_nodez00_bglt BgL_auxz00_2960;

				{	/* Inline/loop.scm 272 */
					BgL_nodez00_bglt BgL_arg1627z00_2494;

					BgL_arg1627z00_2494 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2359)))->BgL_funz00);
					BgL_auxz00_2960 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1627z00_2494,
						((BgL_localz00_bglt) BgL_varz00_2360), BgL_nesterz00_2361);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2359)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2960), BUNSPEC);
			}
			BGl_nestzd2loopz12za2z62zzinline_loopz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2359)))->BgL_argsz00),
				BgL_varz00_2360, BgL_nesterz00_2361);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2359));
		}

	}



/* &nest-loop!-app-ly1321 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2appzd2ly1321za2zzinline_loopz00(obj_t
		BgL_envz00_2362, obj_t BgL_nodez00_2363, obj_t BgL_varz00_2364,
		obj_t BgL_nesterz00_2365)
	{
		{	/* Inline/loop.scm 261 */
			{
				BgL_nodez00_bglt BgL_auxz00_2972;

				{	/* Inline/loop.scm 263 */
					BgL_nodez00_bglt BgL_arg1624z00_2496;

					BgL_arg1624z00_2496 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2363)))->BgL_funz00);
					BgL_auxz00_2972 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1624z00_2496,
						((BgL_localz00_bglt) BgL_varz00_2364), BgL_nesterz00_2365);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2363)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2972), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2979;

				{	/* Inline/loop.scm 264 */
					BgL_nodez00_bglt BgL_arg1626z00_2497;

					BgL_arg1626z00_2497 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2363)))->BgL_argz00);
					BgL_auxz00_2979 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1626z00_2497,
						((BgL_localz00_bglt) BgL_varz00_2364), BgL_nesterz00_2365);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2363)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2979), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2363));
		}

	}



/* &nest-loop!-app1319 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2app1319z70zzinline_loopz00(obj_t
		BgL_envz00_2366, obj_t BgL_nodez00_2367, obj_t BgL_varz00_2368,
		obj_t BgL_nesterz00_2369)
	{
		{	/* Inline/loop.scm 251 */
			BGl_nestzd2loopz12za2z62zzinline_loopz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2367)))->BgL_argsz00),
				BgL_varz00_2368, BgL_nesterz00_2369);
			if ((((obj_t) (((BgL_varz00_bglt) COBJECT((((BgL_appz00_bglt)
											COBJECT(((BgL_appz00_bglt) BgL_nodez00_2367)))->
										BgL_funz00)))->BgL_variablez00)) == BgL_varz00_2368))
				{	/* Inline/loop.scm 254 */
					return
						((BgL_nodez00_bglt)
						PROCEDURE_ENTRY(BgL_nesterz00_2369) (BgL_nesterz00_2369,
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2367)), BEOA));
				}
			else
				{	/* Inline/loop.scm 254 */
					return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2367));
				}
		}

	}



/* &nest-loop!-sync1317 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2sync1317z70zzinline_loopz00(obj_t
		BgL_envz00_2370, obj_t BgL_nodez00_2371, obj_t BgL_varz00_2372,
		obj_t BgL_nesterz00_2373)
	{
		{	/* Inline/loop.scm 241 */
			{
				BgL_nodez00_bglt BgL_auxz00_3006;

				{	/* Inline/loop.scm 243 */
					BgL_nodez00_bglt BgL_arg1588z00_2500;

					BgL_arg1588z00_2500 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_mutexz00);
					BgL_auxz00_3006 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1588z00_2500,
						((BgL_localz00_bglt) BgL_varz00_2372), BgL_nesterz00_2373);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3006), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3013;

				{	/* Inline/loop.scm 244 */
					BgL_nodez00_bglt BgL_arg1589z00_2501;

					BgL_arg1589z00_2501 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_prelockz00);
					BgL_auxz00_3013 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1589z00_2501,
						((BgL_localz00_bglt) BgL_varz00_2372), BgL_nesterz00_2373);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3013), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3020;

				{	/* Inline/loop.scm 245 */
					BgL_nodez00_bglt BgL_arg1592z00_2502;

					BgL_arg1592z00_2502 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_bodyz00);
					BgL_auxz00_3020 =
						BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_arg1592z00_2502,
						((BgL_localz00_bglt) BgL_varz00_2372), BgL_nesterz00_2373);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2371)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3020), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2371));
		}

	}



/* &nest-loop!-sequence1315 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2sequence1315z70zzinline_loopz00(obj_t
		BgL_envz00_2374, obj_t BgL_nodez00_2375, obj_t BgL_varz00_2376,
		obj_t BgL_nesterz00_2377)
	{
		{	/* Inline/loop.scm 233 */
			BGl_nestzd2loopz12za2z62zzinline_loopz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2375)))->BgL_nodesz00),
				BgL_varz00_2376, BgL_nesterz00_2377);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2375));
		}

	}



/* &nest-loop!-var1313 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2var1313z70zzinline_loopz00(obj_t
		BgL_envz00_2378, obj_t BgL_nodez00_2379, obj_t BgL_varz00_2380,
		obj_t BgL_nesterz00_2381)
	{
		{	/* Inline/loop.scm 227 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2379));
		}

	}



/* &nest-loop!-kwote1311 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2kwote1311z70zzinline_loopz00(obj_t
		BgL_envz00_2382, obj_t BgL_nodez00_2383, obj_t BgL_varz00_2384,
		obj_t BgL_nesterz00_2385)
	{
		{	/* Inline/loop.scm 221 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2383));
		}

	}



/* &nest-loop!-atom1309 */
	BgL_nodez00_bglt BGl_z62nestzd2loopz12zd2atom1309z70zzinline_loopz00(obj_t
		BgL_envz00_2386, obj_t BgL_nodez00_2387, obj_t BgL_varz00_2388,
		obj_t BgL_nesterz00_2389)
	{
		{	/* Inline/loop.scm 215 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2387));
		}

	}



/* &find-let-fun?-box-se1305 */
	obj_t BGl_z62findzd2letzd2funzf3zd2boxzd2se1305z91zzinline_loopz00(obj_t
		BgL_envz00_2390, obj_t BgL_nodez00_2391)
	{
		{	/* Inline/loop.scm 190 */
			{	/* Inline/loop.scm 192 */
				obj_t BgL__ortest_1125z00_2508;

				{	/* Inline/loop.scm 192 */
					BgL_varz00_bglt BgL_arg1582z00_2509;

					BgL_arg1582z00_2509 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2391)))->BgL_varz00);
					BgL__ortest_1125z00_2508 =
						BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
						((BgL_nodez00_bglt) BgL_arg1582z00_2509));
				}
				if (CBOOL(BgL__ortest_1125z00_2508))
					{	/* Inline/loop.scm 192 */
						return BgL__ortest_1125z00_2508;
					}
				else
					{	/* Inline/loop.scm 192 */
						return
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2391)))->
								BgL_valuez00));
					}
			}
		}

	}



/* &find-let-fun?-box-re1303 */
	obj_t BGl_z62findzd2letzd2funzf3zd2boxzd2re1303z91zzinline_loopz00(obj_t
		BgL_envz00_2392, obj_t BgL_nodez00_2393)
	{
		{	/* Inline/loop.scm 184 */
			{	/* Inline/loop.scm 185 */
				BgL_varz00_bglt BgL_arg1575z00_2511;

				BgL_arg1575z00_2511 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2393)))->BgL_varz00);
				return
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					((BgL_nodez00_bglt) BgL_arg1575z00_2511));
			}
		}

	}



/* &find-let-fun?-make-b1301 */
	obj_t BGl_z62findzd2letzd2funzf3zd2makezd2b1301z91zzinline_loopz00(obj_t
		BgL_envz00_2394, obj_t BgL_nodez00_2395)
	{
		{	/* Inline/loop.scm 178 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2395)))->BgL_valuez00));
		}

	}



/* &find-let-fun?-jump-e1299 */
	obj_t BGl_z62findzd2letzd2funzf3zd2jumpzd2e1299z91zzinline_loopz00(obj_t
		BgL_envz00_2396, obj_t BgL_nodez00_2397)
	{
		{	/* Inline/loop.scm 171 */
			{	/* Inline/loop.scm 173 */
				obj_t BgL__ortest_1123z00_2514;

				BgL__ortest_1123z00_2514 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2397)))->
						BgL_exitz00));
				if (CBOOL(BgL__ortest_1123z00_2514))
					{	/* Inline/loop.scm 173 */
						return BgL__ortest_1123z00_2514;
					}
				else
					{	/* Inline/loop.scm 173 */
						return
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
										((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2397)))->
								BgL_valuez00));
					}
			}
		}

	}



/* &find-let-fun?-set-ex1297 */
	obj_t BGl_z62findzd2letzd2funzf3zd2setzd2ex1297z91zzinline_loopz00(obj_t
		BgL_envz00_2398, obj_t BgL_nodez00_2399)
	{
		{	/* Inline/loop.scm 165 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2399)))->BgL_bodyz00));
		}

	}



/* &find-let-fun?-let-va1295 */
	obj_t BGl_z62findzd2letzd2funzf3zd2letzd2va1295z91zzinline_loopz00(obj_t
		BgL_envz00_2400, obj_t BgL_nodez00_2401)
	{
		{	/* Inline/loop.scm 152 */
			{	/* Inline/loop.scm 153 */
				obj_t BgL_g1121z00_2517;

				BgL_g1121z00_2517 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2401)))->BgL_bindingsz00);
				{
					obj_t BgL_bindingsz00_2519;

					BgL_bindingsz00_2519 = BgL_g1121z00_2517;
				BgL_loopz00_2518:
					if (NULLP(BgL_bindingsz00_2519))
						{	/* Inline/loop.scm 155 */
							return
								BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2401)))->
									BgL_bodyz00));
						}
					else
						{	/* Inline/loop.scm 157 */
							bool_t BgL_test1994z00_3074;

							{	/* Inline/loop.scm 157 */
								obj_t BgL_arg1552z00_2520;

								{	/* Inline/loop.scm 157 */
									obj_t BgL_pairz00_2521;

									BgL_pairz00_2521 = CAR(((obj_t) BgL_bindingsz00_2519));
									BgL_arg1552z00_2520 = CDR(BgL_pairz00_2521);
								}
								BgL_test1994z00_3074 =
									CBOOL(BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
										((BgL_nodez00_bglt) BgL_arg1552z00_2520)));
							}
							if (BgL_test1994z00_3074)
								{	/* Inline/loop.scm 157 */
									return BTRUE;
								}
							else
								{	/* Inline/loop.scm 160 */
									obj_t BgL_arg1540z00_2522;

									BgL_arg1540z00_2522 = CDR(((obj_t) BgL_bindingsz00_2519));
									{
										obj_t BgL_bindingsz00_3083;

										BgL_bindingsz00_3083 = BgL_arg1540z00_2522;
										BgL_bindingsz00_2519 = BgL_bindingsz00_3083;
										goto BgL_loopz00_2518;
									}
								}
						}
				}
			}
		}

	}



/* &find-let-fun?-let-fu1293 */
	obj_t BGl_z62findzd2letzd2funzf3zd2letzd2fu1293z91zzinline_loopz00(obj_t
		BgL_envz00_2402, obj_t BgL_nodez00_2403)
	{
		{	/* Inline/loop.scm 146 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &find-let-fun?-switch1291 */
	obj_t BGl_z62findzd2letzd2funzf3zd2switch1291z43zzinline_loopz00(obj_t
		BgL_envz00_2404, obj_t BgL_nodez00_2405)
	{
		{	/* Inline/loop.scm 133 */
			{	/* Inline/loop.scm 134 */
				obj_t BgL_g1120z00_2525;

				BgL_g1120z00_2525 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2405)))->BgL_clausesz00);
				{
					obj_t BgL_clausesz00_2527;

					BgL_clausesz00_2527 = BgL_g1120z00_2525;
				BgL_loopz00_2526:
					if (NULLP(BgL_clausesz00_2527))
						{	/* Inline/loop.scm 136 */
							return
								BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
								(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_2405)))->BgL_testz00));
						}
					else
						{	/* Inline/loop.scm 138 */
							bool_t BgL_test1996z00_3092;

							{	/* Inline/loop.scm 138 */
								obj_t BgL_arg1497z00_2528;

								{	/* Inline/loop.scm 138 */
									obj_t BgL_pairz00_2529;

									BgL_pairz00_2529 = CAR(((obj_t) BgL_clausesz00_2527));
									BgL_arg1497z00_2528 = CDR(BgL_pairz00_2529);
								}
								BgL_test1996z00_3092 =
									CBOOL(BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
										((BgL_nodez00_bglt) BgL_arg1497z00_2528)));
							}
							if (BgL_test1996z00_3092)
								{	/* Inline/loop.scm 138 */
									return BTRUE;
								}
							else
								{	/* Inline/loop.scm 141 */
									obj_t BgL_arg1495z00_2530;

									BgL_arg1495z00_2530 = CDR(((obj_t) BgL_clausesz00_2527));
									{
										obj_t BgL_clausesz00_3101;

										BgL_clausesz00_3101 = BgL_arg1495z00_2530;
										BgL_clausesz00_2527 = BgL_clausesz00_3101;
										goto BgL_loopz00_2526;
									}
								}
						}
				}
			}
		}

	}



/* &find-let-fun?-fail1289 */
	obj_t BGl_z62findzd2letzd2funzf3zd2fail1289z43zzinline_loopz00(obj_t
		BgL_envz00_2406, obj_t BgL_nodez00_2407)
	{
		{	/* Inline/loop.scm 124 */
			{	/* Inline/loop.scm 126 */
				obj_t BgL__ortest_1118z00_2532;

				BgL__ortest_1118z00_2532 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2407)))->BgL_procz00));
				if (CBOOL(BgL__ortest_1118z00_2532))
					{	/* Inline/loop.scm 126 */
						return BgL__ortest_1118z00_2532;
					}
				else
					{	/* Inline/loop.scm 127 */
						obj_t BgL__ortest_1119z00_2533;

						BgL__ortest_1119z00_2533 =
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_2407)))->BgL_msgz00));
						if (CBOOL(BgL__ortest_1119z00_2533))
							{	/* Inline/loop.scm 127 */
								return BgL__ortest_1119z00_2533;
							}
						else
							{	/* Inline/loop.scm 127 */
								return
									BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
									(((BgL_failz00_bglt) COBJECT(
												((BgL_failz00_bglt) BgL_nodez00_2407)))->BgL_objz00));
							}
					}
			}
		}

	}



/* &find-let-fun?-condit1287 */
	obj_t BGl_z62findzd2letzd2funzf3zd2condit1287z43zzinline_loopz00(obj_t
		BgL_envz00_2408, obj_t BgL_nodez00_2409)
	{
		{	/* Inline/loop.scm 115 */
			{	/* Inline/loop.scm 117 */
				obj_t BgL__ortest_1115z00_2535;

				BgL__ortest_1115z00_2535 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2409)))->BgL_testz00));
				if (CBOOL(BgL__ortest_1115z00_2535))
					{	/* Inline/loop.scm 117 */
						return BgL__ortest_1115z00_2535;
					}
				else
					{	/* Inline/loop.scm 118 */
						obj_t BgL__ortest_1116z00_2536;

						BgL__ortest_1116z00_2536 =
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2409)))->
								BgL_truez00));
						if (CBOOL(BgL__ortest_1116z00_2536))
							{	/* Inline/loop.scm 118 */
								return BgL__ortest_1116z00_2536;
							}
						else
							{	/* Inline/loop.scm 118 */
								return
									BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
									(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2409)))->
										BgL_falsez00));
							}
					}
			}
		}

	}



/* &find-let-fun?-setq1285 */
	obj_t BGl_z62findzd2letzd2funzf3zd2setq1285z43zzinline_loopz00(obj_t
		BgL_envz00_2410, obj_t BgL_nodez00_2411)
	{
		{	/* Inline/loop.scm 109 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2411)))->BgL_valuez00));
		}

	}



/* &find-let-fun?-cast1283 */
	obj_t BGl_z62findzd2letzd2funzf3zd2cast1283z43zzinline_loopz00(obj_t
		BgL_envz00_2412, obj_t BgL_nodez00_2413)
	{
		{	/* Inline/loop.scm 103 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2413)))->BgL_argz00));
		}

	}



/* &find-let-fun?-extern1281 */
	obj_t BGl_z62findzd2letzd2funzf3zd2extern1281z43zzinline_loopz00(obj_t
		BgL_envz00_2414, obj_t BgL_nodez00_2415)
	{
		{	/* Inline/loop.scm 97 */
			return
				BBOOL(BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2415)))->BgL_exprza2za2)));
		}

	}



/* &find-let-fun?-funcal1279 */
	obj_t BGl_z62findzd2letzd2funzf3zd2funcal1279z43zzinline_loopz00(obj_t
		BgL_envz00_2416, obj_t BgL_nodez00_2417)
	{
		{	/* Inline/loop.scm 89 */
			{	/* Inline/loop.scm 91 */
				obj_t BgL__ortest_1113z00_2541;

				BgL__ortest_1113z00_2541 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2417)))->BgL_funz00));
				if (CBOOL(BgL__ortest_1113z00_2541))
					{	/* Inline/loop.scm 91 */
						return BgL__ortest_1113z00_2541;
					}
				else
					{	/* Inline/loop.scm 92 */
						obj_t BgL_arg1421z00_2542;

						BgL_arg1421z00_2542 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2417)))->BgL_argsz00);
						return
							BBOOL(BGl_findzd2letzd2funzf3za2z51zzinline_loopz00
							(BgL_arg1421z00_2542));
					}
			}
		}

	}



/* &find-let-fun?-app-ly1277 */
	obj_t BGl_z62findzd2letzd2funzf3zd2appzd2ly1277z91zzinline_loopz00(obj_t
		BgL_envz00_2418, obj_t BgL_nodez00_2419)
	{
		{	/* Inline/loop.scm 82 */
			{	/* Inline/loop.scm 84 */
				obj_t BgL__ortest_1111z00_2544;

				BgL__ortest_1111z00_2544 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2419)))->BgL_funz00));
				if (CBOOL(BgL__ortest_1111z00_2544))
					{	/* Inline/loop.scm 84 */
						return BgL__ortest_1111z00_2544;
					}
				else
					{	/* Inline/loop.scm 84 */
						return
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2419)))->BgL_argz00));
					}
			}
		}

	}



/* &find-let-fun?-app1275 */
	obj_t BGl_z62findzd2letzd2funzf3zd2app1275z43zzinline_loopz00(obj_t
		BgL_envz00_2420, obj_t BgL_nodez00_2421)
	{
		{	/* Inline/loop.scm 75 */
			return
				BBOOL(BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2421)))->BgL_argsz00)));
		}

	}



/* &find-let-fun?-sync1273 */
	obj_t BGl_z62findzd2letzd2funzf3zd2sync1273z43zzinline_loopz00(obj_t
		BgL_envz00_2422, obj_t BgL_nodez00_2423)
	{
		{	/* Inline/loop.scm 67 */
			{	/* Inline/loop.scm 68 */
				obj_t BgL__ortest_1107z00_2547;

				BgL__ortest_1107z00_2547 =
					BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2423)))->BgL_mutexz00));
				if (CBOOL(BgL__ortest_1107z00_2547))
					{	/* Inline/loop.scm 68 */
						return BgL__ortest_1107z00_2547;
					}
				else
					{	/* Inline/loop.scm 69 */
						obj_t BgL__ortest_1108z00_2548;

						BgL__ortest_1108z00_2548 =
							BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_2423)))->BgL_prelockz00));
						if (CBOOL(BgL__ortest_1108z00_2548))
							{	/* Inline/loop.scm 69 */
								return BgL__ortest_1108z00_2548;
							}
						else
							{	/* Inline/loop.scm 69 */
								return
									BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
									(((BgL_syncz00_bglt) COBJECT(
												((BgL_syncz00_bglt) BgL_nodez00_2423)))->BgL_bodyz00));
							}
					}
			}
		}

	}



/* &find-let-fun?-sequen1271 */
	obj_t BGl_z62findzd2letzd2funzf3zd2sequen1271z43zzinline_loopz00(obj_t
		BgL_envz00_2424, obj_t BgL_nodez00_2425)
	{
		{	/* Inline/loop.scm 61 */
			return
				BBOOL(BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2425)))->BgL_nodesz00)));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_loopz00()
	{
		{	/* Inline/loop.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_variantz00(((long) 347990379),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_recursionz00(((long) 101873046),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1924z00zzinline_loopz00));
		}

	}

#ifdef __cplusplus
}
#endif
