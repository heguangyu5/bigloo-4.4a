/*===========================================================================*/
/*   (Cnst/node.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/node.scm) */
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

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

	typedef struct BgL_patchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
		struct BgL_varz00_bgl *BgL_refz00;
		long BgL_indexz00;
		obj_t BgL_patchidz00;
	}               *BgL_patchz00_bglt;

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

	typedef struct BgL_localzf2bvaluezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_bindingzd2valuezd2;
	}                        *BgL_localzf2bvaluezf2_bglt;


	static BgL_nodez00_bglt BGl_z62cnstz12zd2extern1304za2zzcnst_nodez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_za2bboolza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62cnstz12z70zzcnst_nodez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62cnstz12zd2jumpzd2exzd2it1322za2zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62cnstz12zd2setzd2exzd2it1320za2zzcnst_nodez00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcnst_nodez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00;
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezb0zzcnst_nodez00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2int32z00zzcnst_allocz00(int32_t,
		obj_t);
	extern obj_t BGl_za2bfalseza2z00zzcnst_cachez00;
	extern obj_t BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00;
	extern obj_t BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzcnst_nodez00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2int64z00zzcnst_allocz00(int64_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezd21339z62zzcnst_nodez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezd21341z62zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezd21343z62zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2var1296za2zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2value1336zb0zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2app1335za2zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00;
	extern obj_t BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00;
	extern obj_t BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00;
	static BgL_localz00_bglt BGl_z62lambda1418z62zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_za2longzd2ze3intza2z31zzcnst_cachez00;
	static BgL_localz00_bglt BGl_z62lambda1423z62zzcnst_nodez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00;
	static obj_t BGl_gczd2rootszd2initz00zzcnst_nodez00();
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2uint32z00zzcnst_allocz00(uint32_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2cast1306za2zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62lambda1463z62zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1464z62zzcnst_nodez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2setq1308za2zzcnst_nodez00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2uint64z00zzcnst_allocz00(uint64_t,
		obj_t);
	extern obj_t BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_za2doublezd2ze3realza2z31zzcnst_cachez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2sequence1300za2zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2funcall1332za2zzcnst_nodez00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2boxzd2ref1326z70zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2literal1290za2zzcnst_nodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2switch1314za2zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_nodez00 = BUNSPEC;
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcnst_nodez00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcnst_nodez00();
	static BgL_nodez00_bglt BGl_z62cnstz12zd2closure1298za2zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62cnstz12zd2conditional1310za2zzcnst_nodez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_localzf2bvaluezf2zzcnst_nodez00 = BUNSPEC;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_cnstza2z12zb0zzcnst_nodez00(obj_t);
	extern obj_t BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00;
	static obj_t BGl_z62cnstz121287z70zzcnst_nodez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31422ze3ze5zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2letzd2fun1316z70zzcnst_nodez00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2lzd2procedurezd2zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
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
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62cnstz12zd2boxzd2setz121328z62zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2kwote1294za2zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62cnstz12zd2makezd2box1324z70zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcnst_nodez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_nodez00();
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_nodez00();
	static BgL_nodez00_bglt BGl_z62cnstz12zd2patch1292za2zzcnst_nodez00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2btrueza2z00zzcnst_cachez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static BgL_localz00_bglt BGl_z62lambda1395z62zzcnst_nodez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2sync1302za2zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2fail1312za2zzcnst_nodez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_z62cnstz12zd2letzd2var1318z70zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62cnstz12zd2appzd2ly1330z70zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STRING(BGl_string2122z00zzcnst_nodez00,
		BgL_bgl_string2122za700za7za7c2162za7, "cnst!1287", 9);
	      DEFINE_STRING(BGl_string2124z00zzcnst_nodez00,
		BgL_bgl_string2124za700za7za7c2163za7, "get-node-atom-value1336", 23);
	      DEFINE_STRING(BGl_string2125z00zzcnst_nodez00,
		BgL_bgl_string2125za700za7za7c2164za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2127z00zzcnst_nodez00,
		BgL_bgl_string2127za700za7za7c2165za7, "cnst!", 5);
	      DEFINE_STRING(BGl_string2151z00zzcnst_nodez00,
		BgL_bgl_string2151za700za7za7c2166za7, "get-node-atom-value", 19);
	      DEFINE_STRING(BGl_string2154z00zzcnst_nodez00,
		BgL_bgl_string2154za700za7za7c2167za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string2155z00zzcnst_nodez00,
		BgL_bgl_string2155za700za7za7c2168za7, "cnst-quote", 10);
	      DEFINE_STRING(BGl_string2156z00zzcnst_nodez00,
		BgL_bgl_string2156za700za7za7c2169za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string2157z00zzcnst_nodez00,
		BgL_bgl_string2157za700za7za7c2170za7, "cnst_node", 9);
	      DEFINE_STRING(BGl_string2158z00zzcnst_nodez00,
		BgL_bgl_string2158za700za7za7c2171za7,
		"a-tvector read cnst!1287 (no-atom-value) _ cnst_node local/bvalue binding-value done ",
		85);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
		BgL_bgl_za762getza7d2nodeza7d22172za7,
		BGl_z62getzd2nodezd2atomzd2valuezb0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzcnst_nodez00,
		BgL_bgl_za762lambda1464za7622173z00, BGl_z62lambda1464z62zzcnst_nodez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzcnst_nodez00,
		BgL_bgl_za762lambda1463za7622174z00, BGl_z62lambda1463z62zzcnst_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzcnst_nodez00,
		BgL_bgl_za762lambda1423za7622175z00, BGl_z62lambda1423z62zzcnst_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzcnst_nodez00,
		BgL_bgl_za762za7c3za704anonymo2176za7,
		BGl_z62zc3z04anonymousza31422ze3ze5zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzcnst_nodez00,
		BgL_bgl_za762lambda1418za7622177z00, BGl_z62lambda1418z62zzcnst_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzcnst_nodez00,
		BgL_bgl_za762lambda1395za7622178z00, BGl_z62lambda1395z62zzcnst_nodez00, 0L,
		BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzcnst_nodez00,
		BgL_bgl_za762cnstza7121287za772179za7, BGl_z62cnstz121287z70zzcnst_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzcnst_nodez00,
		BgL_bgl_za762getza7d2nodeza7d22180za7,
		BGl_z62getzd2nodezd2atomzd2value1336zb0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2lit2181za7,
		BGl_z62cnstz12zd2literal1290za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2pat2182za7,
		BGl_z62cnstz12zd2patch1292za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2129z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2kwo2183za7,
		BGl_z62cnstz12zd2kwote1294za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2var2184za7,
		BGl_z62cnstz12zd2var1296za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2131z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2clo2185za7,
		BGl_z62cnstz12zd2closure1298za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2seq2186za7,
		BGl_z62cnstz12zd2sequence1300za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2syn2187za7,
		BGl_z62cnstz12zd2sync1302za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2ext2188za7,
		BGl_z62cnstz12zd2extern1304za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2cas2189za7,
		BGl_z62cnstz12zd2cast1306za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2136z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2set2190za7,
		BGl_z62cnstz12zd2setq1308za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2con2191za7,
		BGl_z62cnstz12zd2conditional1310za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2fai2192za7,
		BGl_z62cnstz12zd2fail1312za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2139z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2swi2193za7,
		BGl_z62cnstz12zd2switch1314za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_cnstz12zd2envzc0zzcnst_nodez00,
		BgL_bgl_za762cnstza712za770za7za7c2194za7, BGl_z62cnstz12z70zzcnst_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2140z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2let2195za7,
		BGl_z62cnstz12zd2letzd2fun1316z70zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2let2196za7,
		BGl_z62cnstz12zd2letzd2var1318z70zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2142z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2set2197za7,
		BGl_z62cnstz12zd2setzd2exzd2it1320za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2143z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2jum2198za7,
		BGl_z62cnstz12zd2jumpzd2exzd2it1322za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2mak2199za7,
		BGl_z62cnstz12zd2makezd2box1324z70zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2box2200za7,
		BGl_z62cnstz12zd2boxzd2ref1326z70zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2box2201za7,
		BGl_z62cnstz12zd2boxzd2setz121328z62zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2app2202za7,
		BGl_z62cnstz12zd2appzd2ly1330z70zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2fun2203za7,
		BGl_z62cnstz12zd2funcall1332za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzcnst_nodez00,
		BgL_bgl_za762cnstza712za7d2app2204za7,
		BGl_z62cnstz12zd2app1335za2zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzcnst_nodez00,
		BgL_bgl_za762getza7d2nodeza7d22205za7,
		BGl_z62getzd2nodezd2atomzd2valuezd21339z62zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzcnst_nodez00,
		BgL_bgl_za762getza7d2nodeza7d22206za7,
		BGl_z62getzd2nodezd2atomzd2valuezd21341z62zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzcnst_nodez00,
		BgL_bgl_za762getza7d2nodeza7d22207za7,
		BGl_z62getzd2nodezd2atomzd2valuezd21343z62zzcnst_nodez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcnst_nodez00));
		     ADD_ROOT((void *) (&BGl_localzf2bvaluezf2zzcnst_nodez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long
		BgL_checksumz00_2669, char *BgL_fromz00_2670)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_nodez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcnst_nodez00();
					BGl_libraryzd2moduleszd2initz00zzcnst_nodez00();
					BGl_cnstzd2initzd2zzcnst_nodez00();
					BGl_importedzd2moduleszd2initz00zzcnst_nodez00();
					BGl_objectzd2initzd2zzcnst_nodez00();
					BGl_genericzd2initzd2zzcnst_nodez00();
					BGl_methodzd2initzd2zzcnst_nodez00();
					return BGl_toplevelzd2initzd2zzcnst_nodez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__srfi4z00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__unicodez00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_node");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cnst_node");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			{	/* Cnst/node.scm 16 */
				obj_t BgL_cportz00_2462;

				{	/* Cnst/node.scm 16 */
					obj_t BgL_stringz00_2470;

					BgL_stringz00_2470 = BGl_string2158z00zzcnst_nodez00;
					{	/* Cnst/node.scm 16 */
						obj_t BgL_startz00_2471;

						BgL_startz00_2471 = BINT(((long) 0));
						{	/* Cnst/node.scm 16 */
							obj_t BgL_endz00_2472;

							BgL_endz00_2472 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2470)));
							{	/* Cnst/node.scm 16 */

								BgL_cportz00_2462 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2470, BgL_startz00_2471, BgL_endz00_2472);
				}}}}
				{
					long BgL_iz00_2463;

					BgL_iz00_2463 = ((long) 8);
				BgL_loopz00_2464:
					if ((BgL_iz00_2463 == ((long) -1)))
						{	/* Cnst/node.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/node.scm 16 */
							{	/* Cnst/node.scm 16 */
								obj_t BgL_arg2160z00_2466;

								{	/* Cnst/node.scm 16 */

									{	/* Cnst/node.scm 16 */
										obj_t BgL_locationz00_2468;

										BgL_locationz00_2468 = BBOOL(((bool_t) 0));
										{	/* Cnst/node.scm 16 */

											BgL_arg2160z00_2466 =
												BGl_readz00zz__readerz00(BgL_cportz00_2462,
												BgL_locationz00_2468);
										}
									}
								}
								{	/* Cnst/node.scm 16 */
									int BgL_tmpz00_2708;

									BgL_tmpz00_2708 = (int) (BgL_iz00_2463);
									CNST_TABLE_SET(BgL_tmpz00_2708, BgL_arg2160z00_2466);
							}}
							{	/* Cnst/node.scm 16 */
								int BgL_auxz00_2469;

								BgL_auxz00_2469 = (int) ((BgL_iz00_2463 - ((long) 1)));
								{
									long BgL_iz00_2713;

									BgL_iz00_2713 = (long) (BgL_auxz00_2469);
									BgL_iz00_2463 = BgL_iz00_2713;
									goto BgL_loopz00_2464;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			return BUNSPEC;
		}

	}



/* cnst*! */
	obj_t BGl_cnstza2z12zb0zzcnst_nodez00(obj_t BgL_nodesz00_85)
	{
		{	/* Cnst/node.scm 288 */
			{
				obj_t BgL_hookz00_1430;

				BgL_hookz00_1430 = BgL_nodesz00_85;
			BgL_zc3z04anonymousza31372ze3z87_1431:
				if (NULLP(BgL_hookz00_1430))
					{	/* Cnst/node.scm 290 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Cnst/node.scm 290 */
						{	/* Cnst/node.scm 293 */
							BgL_nodez00_bglt BgL_arg1381z00_1433;

							{	/* Cnst/node.scm 293 */
								obj_t BgL_arg1382z00_1434;

								BgL_arg1382z00_1434 = CAR(((obj_t) BgL_hookz00_1430));
								BgL_arg1381z00_1433 =
									BGl_cnstz12z12zzcnst_nodez00(
									((BgL_nodez00_bglt) BgL_arg1382z00_1434));
							}
							{	/* Cnst/node.scm 293 */
								obj_t BgL_auxz00_2725;
								obj_t BgL_tmpz00_2723;

								BgL_auxz00_2725 = ((obj_t) BgL_arg1381z00_1433);
								BgL_tmpz00_2723 = ((obj_t) BgL_hookz00_1430);
								SET_CAR(BgL_tmpz00_2723, BgL_auxz00_2725);
							}
						}
						{	/* Cnst/node.scm 294 */
							obj_t BgL_arg1383z00_1435;

							BgL_arg1383z00_1435 = CDR(((obj_t) BgL_hookz00_1430));
							{
								obj_t BgL_hookz00_2730;

								BgL_hookz00_2730 = BgL_arg1383z00_1435;
								BgL_hookz00_1430 = BgL_hookz00_2730;
								goto BgL_zc3z04anonymousza31372ze3z87_1431;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			{	/* Cnst/node.scm 33 */
				obj_t BgL_arg1388z00_1441;
				obj_t BgL_arg1394z00_1442;

				{	/* Cnst/node.scm 33 */
					obj_t BgL_v1285z00_1475;

					BgL_v1285z00_1475 = create_vector(((long) 1));
					{	/* Cnst/node.scm 33 */
						obj_t BgL_arg1449z00_1476;

						BgL_arg1449z00_1476 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc2116z00zzcnst_nodez00,
							BGl_proc2115z00zzcnst_nodez00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_nodez00zzast_nodez00);
						VECTOR_SET(BgL_v1285z00_1475, ((long) 0), BgL_arg1449z00_1476);
					}
					BgL_arg1388z00_1441 = BgL_v1285z00_1475;
				}
				{	/* Cnst/node.scm 33 */
					obj_t BgL_v1286z00_1486;

					BgL_v1286z00_1486 = create_vector(((long) 0));
					BgL_arg1394z00_1442 = BgL_v1286z00_1486;
				}
				return (BGl_localzf2bvaluezf2zzcnst_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3)), BGl_localz00zzast_varz00,
						((long) 17832), BGl_proc2120z00zzcnst_nodez00,
						BGl_proc2119z00zzcnst_nodez00, BFALSE,
						BGl_proc2118z00zzcnst_nodez00, BGl_proc2117z00zzcnst_nodez00,
						BgL_arg1388z00_1441, BgL_arg1394z00_1442), BUNSPEC);
		}}

	}



/* &lambda1423 */
	BgL_localz00_bglt BGl_z62lambda1423z62zzcnst_nodez00(obj_t BgL_envz00_2349,
		obj_t BgL_o1117z00_2350)
	{
		{	/* Cnst/node.scm 33 */
			{	/* Cnst/node.scm 33 */
				long BgL_arg1441z00_2476;

				{	/* Cnst/node.scm 33 */
					obj_t BgL_arg1442z00_2477;

					{	/* Cnst/node.scm 33 */
						obj_t BgL_arg1448z00_2478;

						{	/* Cnst/node.scm 33 */
							long BgL_arg1816z00_2479;

							{	/* Cnst/node.scm 33 */
								long BgL_arg1817z00_2480;

								{	/* Cnst/node.scm 33 */
									long BgL_res2036z00_2481;

									BgL_res2036z00_2481 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1117z00_2350)));
									BgL_arg1817z00_2480 = BgL_res2036z00_2481;
								}
								BgL_arg1816z00_2479 = (BgL_arg1817z00_2480 - OBJECT_TYPE);
							}
							BgL_arg1448z00_2478 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2479);
						}
						BgL_arg1442z00_2477 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1448z00_2478);
					}
					{	/* Cnst/node.scm 33 */
						long BgL_res2038z00_2482;

						{	/* Cnst/node.scm 33 */
							obj_t BgL_tmpz00_2745;

							BgL_tmpz00_2745 = ((obj_t) BgL_arg1442z00_2477);
							BgL_res2038z00_2482 = BGL_CLASS_INDEX(BgL_tmpz00_2745);
						}
						BgL_arg1441z00_2476 = BgL_res2038z00_2482;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1117z00_2350)), BgL_arg1441z00_2476);
			}
			{	/* Cnst/node.scm 33 */
				BgL_objectz00_bglt BgL_tmpz00_2751;

				BgL_tmpz00_2751 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2350));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2751, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2350));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2350));
		}

	}



/* &<@anonymous:1422> */
	obj_t BGl_z62zc3z04anonymousza31422ze3ze5zzcnst_nodez00(obj_t BgL_envz00_2351,
		obj_t BgL_new1116z00_2352)
	{
		{	/* Cnst/node.scm 33 */
			{
				BgL_localz00_bglt BgL_auxz00_2759;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2352))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2767;

					{	/* Cnst/node.scm 33 */
						obj_t BgL_classz00_2484;

						BgL_classz00_2484 = BGl_typez00zztype_typez00;
						{	/* Cnst/node.scm 33 */
							obj_t BgL__ortest_1106z00_2485;

							BgL__ortest_1106z00_2485 = BGL_CLASS_NIL(BgL_classz00_2484);
							if (CBOOL(BgL__ortest_1106z00_2485))
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2767 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2485);
								}
							else
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2767 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2484));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2352))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2767), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_2777;

					{	/* Cnst/node.scm 33 */
						obj_t BgL_classz00_2486;

						BgL_classz00_2486 = BGl_valuez00zzast_varz00;
						{	/* Cnst/node.scm 33 */
							obj_t BgL__ortest_1106z00_2487;

							BgL__ortest_1106z00_2487 = BGL_CLASS_NIL(BgL_classz00_2486);
							if (CBOOL(BgL__ortest_1106z00_2487))
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2777 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2487);
								}
							else
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2777 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2486));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2352))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_2777), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2352))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2352))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_2815;
					BgL_localzf2bvaluezf2_bglt BgL_auxz00_2808;

					{	/* Cnst/node.scm 33 */
						obj_t BgL_classz00_2488;

						BgL_classz00_2488 = BGl_nodez00zzast_nodez00;
						{	/* Cnst/node.scm 33 */
							obj_t BgL__ortest_1106z00_2489;

							BgL__ortest_1106z00_2489 = BGL_CLASS_NIL(BgL_classz00_2488);
							if (CBOOL(BgL__ortest_1106z00_2489))
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2815 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_2489);
								}
							else
								{	/* Cnst/node.scm 33 */
									BgL_auxz00_2815 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2488));
								}
						}
					}
					{
						obj_t BgL_auxz00_2809;

						{	/* Cnst/node.scm 33 */
							BgL_objectz00_bglt BgL_tmpz00_2810;

							BgL_tmpz00_2810 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1116z00_2352));
							BgL_auxz00_2809 = BGL_OBJECT_WIDENING(BgL_tmpz00_2810);
						}
						BgL_auxz00_2808 = ((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_2809);
					}
					((((BgL_localzf2bvaluezf2_bglt) COBJECT(BgL_auxz00_2808))->
							BgL_bindingzd2valuezd2) =
						((BgL_nodez00_bglt) BgL_auxz00_2815), BUNSPEC);
				}
				BgL_auxz00_2759 = ((BgL_localz00_bglt) BgL_new1116z00_2352);
				return ((obj_t) BgL_auxz00_2759);
			}
		}

	}



/* &lambda1418 */
	BgL_localz00_bglt BGl_z62lambda1418z62zzcnst_nodez00(obj_t BgL_envz00_2353,
		obj_t BgL_o1113z00_2354)
	{
		{	/* Cnst/node.scm 33 */
			{	/* Cnst/node.scm 33 */
				BgL_localzf2bvaluezf2_bglt BgL_wide1115z00_2491;

				BgL_wide1115z00_2491 =
					((BgL_localzf2bvaluezf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2bvaluezf2_bgl))));
				{	/* Cnst/node.scm 33 */
					obj_t BgL_auxz00_2830;
					BgL_objectz00_bglt BgL_tmpz00_2826;

					BgL_auxz00_2830 = ((obj_t) BgL_wide1115z00_2491);
					BgL_tmpz00_2826 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2354)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2826, BgL_auxz00_2830);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2354)));
				{	/* Cnst/node.scm 33 */
					long BgL_arg1421z00_2492;

					{	/* Cnst/node.scm 33 */
						long BgL_res2035z00_2493;

						BgL_res2035z00_2493 =
							BGL_CLASS_INDEX(BGl_localzf2bvaluezf2zzcnst_nodez00);
						BgL_arg1421z00_2492 = BgL_res2035z00_2493;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1113z00_2354))), BgL_arg1421z00_2492);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2354)));
			}
		}

	}



/* &lambda1395 */
	BgL_localz00_bglt BGl_z62lambda1395z62zzcnst_nodez00(obj_t BgL_envz00_2355,
		obj_t BgL_id1101z00_2356, obj_t BgL_name1102z00_2357,
		obj_t BgL_type1103z00_2358, obj_t BgL_value1104z00_2359,
		obj_t BgL_access1105z00_2360, obj_t BgL_fastzd2alpha1106zd2_2361,
		obj_t BgL_removable1107z00_2362, obj_t BgL_occurrence1108z00_2363,
		obj_t BgL_occurrencew1109z00_2364, obj_t BgL_userzf31110zf3_2365,
		obj_t BgL_key1111z00_2366, obj_t BgL_bindingzd2value1112zd2_2367)
	{
		{	/* Cnst/node.scm 33 */
			{	/* Cnst/node.scm 33 */
				long BgL_occurrence1108z00_2497;
				long BgL_occurrencew1109z00_2498;
				bool_t BgL_userzf31110zf3_2499;
				long BgL_key1111z00_2500;

				BgL_occurrence1108z00_2497 = (long) CINT(BgL_occurrence1108z00_2363);
				BgL_occurrencew1109z00_2498 = (long) CINT(BgL_occurrencew1109z00_2364);
				BgL_userzf31110zf3_2499 = CBOOL(BgL_userzf31110zf3_2365);
				BgL_key1111z00_2500 = (long) CINT(BgL_key1111z00_2366);
				{	/* Cnst/node.scm 33 */
					BgL_localz00_bglt BgL_new1165z00_2502;

					{	/* Cnst/node.scm 33 */
						BgL_localz00_bglt BgL_tmp1163z00_2503;
						BgL_localzf2bvaluezf2_bglt BgL_wide1164z00_2504;

						{
							BgL_localz00_bglt BgL_auxz00_2848;

							{	/* Cnst/node.scm 33 */
								BgL_localz00_bglt BgL_new1162z00_2505;

								BgL_new1162z00_2505 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Cnst/node.scm 33 */
									long BgL_arg1417z00_2506;

									{	/* Cnst/node.scm 33 */
										long BgL_res2033z00_2507;

										BgL_res2033z00_2507 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1417z00_2506 = BgL_res2033z00_2507;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1162z00_2505),
										BgL_arg1417z00_2506);
								}
								{	/* Cnst/node.scm 33 */
									BgL_objectz00_bglt BgL_tmpz00_2853;

									BgL_tmpz00_2853 = ((BgL_objectz00_bglt) BgL_new1162z00_2505);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2853, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1162z00_2505);
								BgL_auxz00_2848 = BgL_new1162z00_2505;
							}
							BgL_tmp1163z00_2503 = ((BgL_localz00_bglt) BgL_auxz00_2848);
						}
						BgL_wide1164z00_2504 =
							((BgL_localzf2bvaluezf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2bvaluezf2_bgl))));
						{	/* Cnst/node.scm 33 */
							obj_t BgL_auxz00_2861;
							BgL_objectz00_bglt BgL_tmpz00_2859;

							BgL_auxz00_2861 = ((obj_t) BgL_wide1164z00_2504);
							BgL_tmpz00_2859 = ((BgL_objectz00_bglt) BgL_tmp1163z00_2503);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2859, BgL_auxz00_2861);
						}
						((BgL_objectz00_bglt) BgL_tmp1163z00_2503);
						{	/* Cnst/node.scm 33 */
							long BgL_arg1396z00_2508;

							{	/* Cnst/node.scm 33 */
								long BgL_res2034z00_2509;

								BgL_res2034z00_2509 =
									BGL_CLASS_INDEX(BGl_localzf2bvaluezf2zzcnst_nodez00);
								BgL_arg1396z00_2508 = BgL_res2034z00_2509;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1163z00_2503),
								BgL_arg1396z00_2508);
						}
						BgL_new1165z00_2502 = ((BgL_localz00_bglt) BgL_tmp1163z00_2503);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1165z00_2502)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1101z00_2356)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_namez00) =
						((obj_t) BgL_name1102z00_2357), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1103z00_2358)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1104z00_2359)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_accessz00) =
						((obj_t) BgL_access1105z00_2360), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1106zd2_2361), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_removablez00) =
						((obj_t) BgL_removable1107z00_2362), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_occurrencez00) =
						((long) BgL_occurrence1108z00_2497), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1109z00_2498), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1165z00_2502)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31110zf3_2499), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1165z00_2502)))->BgL_keyz00) =
						((long) BgL_key1111z00_2500), BUNSPEC);
					{
						BgL_localzf2bvaluezf2_bglt BgL_auxz00_2894;

						{
							obj_t BgL_auxz00_2895;

							{	/* Cnst/node.scm 33 */
								BgL_objectz00_bglt BgL_tmpz00_2896;

								BgL_tmpz00_2896 = ((BgL_objectz00_bglt) BgL_new1165z00_2502);
								BgL_auxz00_2895 = BGL_OBJECT_WIDENING(BgL_tmpz00_2896);
							}
							BgL_auxz00_2894 = ((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_2895);
						}
						((((BgL_localzf2bvaluezf2_bglt) COBJECT(BgL_auxz00_2894))->
								BgL_bindingzd2valuezd2) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
									BgL_bindingzd2value1112zd2_2367)), BUNSPEC);
					}
					return BgL_new1165z00_2502;
				}
			}
		}

	}



/* &lambda1464 */
	obj_t BGl_z62lambda1464z62zzcnst_nodez00(obj_t BgL_envz00_2368,
		obj_t BgL_oz00_2369, obj_t BgL_vz00_2370)
	{
		{	/* Cnst/node.scm 33 */
			{
				BgL_localzf2bvaluezf2_bglt BgL_auxz00_2902;

				{
					obj_t BgL_auxz00_2903;

					{	/* Cnst/node.scm 33 */
						BgL_objectz00_bglt BgL_tmpz00_2904;

						BgL_tmpz00_2904 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2369));
						BgL_auxz00_2903 = BGL_OBJECT_WIDENING(BgL_tmpz00_2904);
					}
					BgL_auxz00_2902 = ((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_2903);
				}
				return
					((((BgL_localzf2bvaluezf2_bglt) COBJECT(BgL_auxz00_2902))->
						BgL_bindingzd2valuezd2) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_vz00_2370)), BUNSPEC);
			}
		}

	}



/* &lambda1463 */
	BgL_nodez00_bglt BGl_z62lambda1463z62zzcnst_nodez00(obj_t BgL_envz00_2371,
		obj_t BgL_oz00_2372)
	{
		{	/* Cnst/node.scm 33 */
			{
				BgL_localzf2bvaluezf2_bglt BgL_auxz00_2911;

				{
					obj_t BgL_auxz00_2912;

					{	/* Cnst/node.scm 33 */
						BgL_objectz00_bglt BgL_tmpz00_2913;

						BgL_tmpz00_2913 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2372));
						BgL_auxz00_2912 = BGL_OBJECT_WIDENING(BgL_tmpz00_2913);
					}
					BgL_auxz00_2911 = ((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_2912);
				}
				return
					(((BgL_localzf2bvaluezf2_bglt) COBJECT(BgL_auxz00_2911))->
					BgL_bindingzd2valuezd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_proc2121z00zzcnst_nodez00,
				BGl_nodez00zzast_nodez00, BGl_string2122z00zzcnst_nodez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_proc2123z00zzcnst_nodez00, BGl_nodez00zzast_nodez00,
				BGl_string2124z00zzcnst_nodez00);
		}

	}



/* &get-node-atom-value1336 */
	obj_t BGl_z62getzd2nodezd2atomzd2value1336zb0zzcnst_nodez00(obj_t
		BgL_envz00_2375, obj_t BgL_nodez00_2376)
	{
		{	/* Cnst/node.scm 374 */
			return CNST_TABLE_REF(((long) 5));
		}

	}



/* &cnst!1287 */
	obj_t BGl_z62cnstz121287z70zzcnst_nodez00(obj_t BgL_envz00_2377,
		obj_t BgL_nodez00_2378)
	{
		{	/* Cnst/node.scm 39 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 6)),
				BGl_string2125z00zzcnst_nodez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2378)));
		}

	}



/* cnst! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt BgL_nodez00_62)
	{
		{	/* Cnst/node.scm 39 */
			{	/* Cnst/node.scm 39 */
				obj_t BgL_method1288z00_1499;

				{	/* Cnst/node.scm 39 */
					obj_t BgL_res2049z00_2179;

					{	/* Cnst/node.scm 39 */
						long BgL_objzd2classzd2numz00_2144;

						{	/* Cnst/node.scm 39 */
							long BgL_res2039z00_2147;

							BgL_res2039z00_2147 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_62));
							BgL_objzd2classzd2numz00_2144 = BgL_res2039z00_2147;
						}
						{	/* Cnst/node.scm 39 */
							obj_t BgL_arg1813z00_2145;

							BgL_arg1813z00_2145 =
								PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
								(int) (((long) 1)));
							{	/* Cnst/node.scm 39 */
								int BgL_offsetz00_2149;

								BgL_offsetz00_2149 = (int) (BgL_objzd2classzd2numz00_2144);
								{	/* Cnst/node.scm 39 */
									long BgL_offsetz00_2150;

									BgL_offsetz00_2150 =
										((long) (BgL_offsetz00_2149) - OBJECT_TYPE);
									{	/* Cnst/node.scm 39 */
										long BgL_modz00_2151;

										BgL_modz00_2151 =
											(BgL_offsetz00_2150 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cnst/node.scm 39 */
											long BgL_restz00_2153;

											BgL_restz00_2153 =
												(BgL_offsetz00_2150 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cnst/node.scm 39 */

												{	/* Cnst/node.scm 39 */
													obj_t BgL_bucketz00_2155;

													BgL_bucketz00_2155 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2145), BgL_modz00_2151);
													BgL_res2049z00_2179 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2155), BgL_restz00_2153);
					}}}}}}}}
					BgL_method1288z00_1499 = BgL_res2049z00_2179;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1288z00_1499) (BgL_method1288z00_1499,
						((obj_t) BgL_nodez00_62), BEOA));
			}
		}

	}



/* &cnst! */
	BgL_nodez00_bglt BGl_z62cnstz12z70zzcnst_nodez00(obj_t BgL_envz00_2379,
		obj_t BgL_nodez00_2380)
	{
		{	/* Cnst/node.scm 39 */
			return
				BGl_cnstz12z12zzcnst_nodez00(((BgL_nodez00_bglt) BgL_nodez00_2380));
		}

	}



/* get-node-atom-value */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt
		BgL_nodez00_87)
	{
		{	/* Cnst/node.scm 374 */
			{	/* Cnst/node.scm 374 */
				obj_t BgL_method1337z00_1500;

				{	/* Cnst/node.scm 374 */
					obj_t BgL_res2060z00_2216;

					{	/* Cnst/node.scm 374 */
						long BgL_objzd2classzd2numz00_2181;

						{	/* Cnst/node.scm 374 */
							long BgL_res2050z00_2184;

							BgL_res2050z00_2184 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_87));
							BgL_objzd2classzd2numz00_2181 = BgL_res2050z00_2184;
						}
						{	/* Cnst/node.scm 374 */
							obj_t BgL_arg1813z00_2182;

							BgL_arg1813z00_2182 =
								PROCEDURE_REF
								(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
								(int) (((long) 1)));
							{	/* Cnst/node.scm 374 */
								int BgL_offsetz00_2186;

								BgL_offsetz00_2186 = (int) (BgL_objzd2classzd2numz00_2181);
								{	/* Cnst/node.scm 374 */
									long BgL_offsetz00_2187;

									BgL_offsetz00_2187 =
										((long) (BgL_offsetz00_2186) - OBJECT_TYPE);
									{	/* Cnst/node.scm 374 */
										long BgL_modz00_2188;

										BgL_modz00_2188 =
											(BgL_offsetz00_2187 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cnst/node.scm 374 */
											long BgL_restz00_2190;

											BgL_restz00_2190 =
												(BgL_offsetz00_2187 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cnst/node.scm 374 */

												{	/* Cnst/node.scm 374 */
													obj_t BgL_bucketz00_2192;

													BgL_bucketz00_2192 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2182), BgL_modz00_2188);
													BgL_res2060z00_2216 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2192), BgL_restz00_2190);
					}}}}}}}}
					BgL_method1337z00_1500 = BgL_res2060z00_2216;
				}
				return
					PROCEDURE_ENTRY(BgL_method1337z00_1500) (BgL_method1337z00_1500,
					((obj_t) BgL_nodez00_87), BEOA);
			}
		}

	}



/* &get-node-atom-value */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezb0zzcnst_nodez00(obj_t BgL_envz00_2381,
		obj_t BgL_nodez00_2382)
	{
		{	/* Cnst/node.scm 374 */
			return
				BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
				((BgL_nodez00_bglt) BgL_nodez00_2382));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_literalz00zzast_nodez00,
				BGl_proc2126z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_patchz00zzast_nodez00,
				BGl_proc2128z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_kwotez00zzast_nodez00,
				BGl_proc2129z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_varz00zzast_nodez00,
				BGl_proc2130z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_closurez00zzast_nodez00,
				BGl_proc2131z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_sequencez00zzast_nodez00,
				BGl_proc2132z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_syncz00zzast_nodez00,
				BGl_proc2133z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_externz00zzast_nodez00,
				BGl_proc2134z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_castz00zzast_nodez00,
				BGl_proc2135z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_setqz00zzast_nodez00,
				BGl_proc2136z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_conditionalz00zzast_nodez00,
				BGl_proc2137z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_failz00zzast_nodez00,
				BGl_proc2138z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_switchz00zzast_nodez00,
				BGl_proc2139z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc2140z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2141z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc2142z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2143z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc2144z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc2145z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc2146z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2147z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_funcallz00zzast_nodez00,
				BGl_proc2148z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_appz00zzast_nodez00,
				BGl_proc2149z00zzcnst_nodez00, BGl_string2127z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_atomz00zzast_nodez00, BGl_proc2150z00zzcnst_nodez00,
				BGl_string2151z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_varz00zzast_nodez00, BGl_proc2152z00zzcnst_nodez00,
				BGl_string2151z00zzcnst_nodez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_appz00zzast_nodez00, BGl_proc2153z00zzcnst_nodez00,
				BGl_string2151z00zzcnst_nodez00);
		}

	}



/* &get-node-atom-value-1343 */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezd21343z62zzcnst_nodez00(obj_t
		BgL_envz00_2409, obj_t BgL_nodez00_2410)
	{
		{	/* Cnst/node.scm 395 */
			{	/* Cnst/node.scm 397 */
				BgL_variablez00_bglt BgL_funz00_2516;

				BgL_funz00_2516 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2410)))->BgL_funz00)))->
					BgL_variablez00);
				if ((((obj_t) BgL_funz00_2516) ==
						BGl_za2longzd2ze3intza2z31zzcnst_cachez00))
					{	/* Cnst/node.scm 400 */
						bool_t BgL_test2215z00_3023;

						{	/* Cnst/node.scm 400 */
							bool_t BgL_test2216z00_3024;

							{	/* Cnst/node.scm 400 */
								obj_t BgL_tmpz00_3025;

								BgL_tmpz00_3025 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2410)))->BgL_argsz00);
								BgL_test2216z00_3024 = PAIRP(BgL_tmpz00_3025);
							}
							if (BgL_test2216z00_3024)
								{	/* Cnst/node.scm 400 */
									BgL_test2215z00_3023 =
										NULLP(CDR(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2410)))->
												BgL_argsz00)));
								}
							else
								{	/* Cnst/node.scm 400 */
									BgL_test2215z00_3023 = ((bool_t) 0);
								}
						}
						if (BgL_test2215z00_3023)
							{	/* Cnst/node.scm 401 */
								obj_t BgL_arg1961z00_2517;

								BgL_arg1961z00_2517 =
									CAR(
									(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_2410)))->BgL_argsz00));
								return
									BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
									((BgL_nodez00_bglt) BgL_arg1961z00_2517));
							}
						else
							{	/* Cnst/node.scm 400 */
								return CNST_TABLE_REF(((long) 5));
					}}
				else
					{	/* Cnst/node.scm 399 */
						return CNST_TABLE_REF(((long) 5));
		}}}

	}



/* &get-node-atom-value-1341 */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezd21341z62zzcnst_nodez00(obj_t
		BgL_envz00_2411, obj_t BgL_nodez00_2412)
	{
		{	/* Cnst/node.scm 386 */
			{	/* Cnst/node.scm 387 */
				BgL_variablez00_bglt BgL_vz00_2519;

				BgL_vz00_2519 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2412)))->BgL_variablez00);
				{	/* Cnst/node.scm 388 */
					bool_t BgL_test2217z00_3042;

					{	/* Cnst/node.scm 388 */
						bool_t BgL_res2112z00_2520;

						BgL_res2112z00_2520 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_vz00_2519), BGl_localzf2bvaluezf2zzcnst_nodez00);
						BgL_test2217z00_3042 = BgL_res2112z00_2520;
					}
					if (BgL_test2217z00_3042)
						{	/* Cnst/node.scm 389 */
							BgL_nodez00_bglt BgL_arg1953z00_2521;

							{
								BgL_localzf2bvaluezf2_bglt BgL_auxz00_3045;

								{
									obj_t BgL_auxz00_3046;

									{	/* Cnst/node.scm 389 */
										BgL_objectz00_bglt BgL_tmpz00_3047;

										BgL_tmpz00_3047 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_vz00_2519));
										BgL_auxz00_3046 = BGL_OBJECT_WIDENING(BgL_tmpz00_3047);
									}
									BgL_auxz00_3045 =
										((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_3046);
								}
								BgL_arg1953z00_2521 =
									(((BgL_localzf2bvaluezf2_bglt) COBJECT(BgL_auxz00_3045))->
									BgL_bindingzd2valuezd2);
							}
							return
								BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00
								(BgL_arg1953z00_2521);
						}
					else
						{	/* Cnst/node.scm 388 */
							return CNST_TABLE_REF(((long) 5));
		}}}}

	}



/* &get-node-atom-value-1339 */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezd21339z62zzcnst_nodez00(obj_t
		BgL_envz00_2413, obj_t BgL_nodez00_2414)
	{
		{	/* Cnst/node.scm 380 */
			return
				(((BgL_atomz00_bglt) COBJECT(
						((BgL_atomz00_bglt) BgL_nodez00_2414)))->BgL_valuez00);
		}

	}



/* &cnst!-app1335 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2app1335za2zzcnst_nodez00(obj_t
		BgL_envz00_2415, obj_t BgL_nodez00_2416)
	{
		{	/* Cnst/node.scm 299 */
			BGl_cnstza2z12zb0zzcnst_nodez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2416)))->BgL_argsz00));
			if (NULLP(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2416)))->BgL_argsz00)))
				{	/* Cnst/node.scm 303 */
					return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2416));
				}
			else
				{	/* Cnst/node.scm 305 */
					BgL_variablez00_bglt BgL_funz00_2524;

					BgL_funz00_2524 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2416)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Cnst/node.scm 305 */
						obj_t BgL_actualz00_2525;

						BgL_actualz00_2525 =
							CAR(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2416)))->BgL_argsz00));
						{	/* Cnst/node.scm 306 */
							obj_t BgL_actualzd2valuezd2_2526;

							BgL_actualzd2valuezd2_2526 =
								BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
								((BgL_nodez00_bglt) BgL_actualz00_2525));
							{	/* Cnst/node.scm 307 */

								if (
									(((obj_t) BgL_funz00_2524) ==
										BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00))
									{	/* Cnst/node.scm 309 */
										if (STRINGP(BgL_actualzd2valuezd2_2526))
											{	/* Cnst/node.scm 311 */
												BgL_nodez00_bglt BgL_rz00_2527;

												{	/* Cnst/node.scm 311 */
													obj_t BgL_arg1909z00_2528;

													BgL_arg1909z00_2528 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_2416))))->
														BgL_locz00);
													BgL_rz00_2527 =
														BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
														(BgL_actualzd2valuezd2_2526, BgL_arg1909z00_2528);
												}
												return BgL_rz00_2527;
											}
										else
											{	/* Cnst/node.scm 310 */
												return
													((BgL_nodez00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_2416));
											}
									}
								else
									{	/* Cnst/node.scm 309 */
										if (
											(((obj_t) BgL_funz00_2524) ==
												BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00))
											{	/* Cnst/node.scm 315 */
												if (BOOLEANP(BgL_actualzd2valuezd2_2526))
													{	/* Cnst/node.scm 316 */
														if (CBOOL(BgL_actualzd2valuezd2_2526))
															{	/* Cnst/node.scm 318 */
																BgL_varz00_bglt BgL_new1158z00_2529;

																{	/* Cnst/node.scm 319 */
																	BgL_varz00_bglt BgL_new1157z00_2530;

																	BgL_new1157z00_2530 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Cnst/node.scm 319 */
																		long BgL_arg1912z00_2531;

																		{	/* Cnst/node.scm 319 */
																			long BgL_res2099z00_2532;

																			BgL_res2099z00_2532 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1912z00_2531 = BgL_res2099z00_2532;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1157z00_2530),
																			BgL_arg1912z00_2531);
																	}
																	BgL_new1158z00_2529 = BgL_new1157z00_2530;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1158z00_2529)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_appz00_bglt)
																							BgL_nodez00_2416))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1158z00_2529)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2bboolza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1158z00_2529))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BGl_za2btrueza2z00zzcnst_cachez00)),
																	BUNSPEC);
																return ((BgL_nodez00_bglt) BgL_new1158z00_2529);
															}
														else
															{	/* Cnst/node.scm 322 */
																BgL_varz00_bglt BgL_new1160z00_2533;

																{	/* Cnst/node.scm 323 */
																	BgL_varz00_bglt BgL_new1159z00_2534;

																	BgL_new1159z00_2534 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Cnst/node.scm 323 */
																		long BgL_arg1913z00_2535;

																		{	/* Cnst/node.scm 323 */
																			long BgL_res2100z00_2536;

																			BgL_res2100z00_2536 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1913z00_2535 = BgL_res2100z00_2536;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1159z00_2534),
																			BgL_arg1913z00_2535);
																	}
																	BgL_new1160z00_2533 = BgL_new1159z00_2534;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1160z00_2533)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_appz00_bglt)
																							BgL_nodez00_2416))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1160z00_2533)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2bboolza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1160z00_2533))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BGl_za2bfalseza2z00zzcnst_cachez00)),
																	BUNSPEC);
																return ((BgL_nodez00_bglt) BgL_new1160z00_2533);
															}
													}
												else
													{	/* Cnst/node.scm 316 */
														return
															((BgL_nodez00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_2416));
													}
											}
										else
											{	/* Cnst/node.scm 327 */
												bool_t BgL_test2224z00_3124;

												if (
													(((obj_t) BgL_funz00_2524) ==
														BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00))
													{	/* Cnst/node.scm 327 */
														BgL_test2224z00_3124 = ((bool_t) 1);
													}
												else
													{	/* Cnst/node.scm 327 */
														BgL_test2224z00_3124 =
															(
															((obj_t) BgL_funz00_2524) ==
															BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00);
													}
												if (BgL_test2224z00_3124)
													{	/* Cnst/node.scm 329 */
														obj_t BgL_siza7ezd2valuez75_2537;

														{	/* Cnst/node.scm 329 */
															obj_t BgL_arg1919z00_2538;

															{	/* Cnst/node.scm 329 */
																obj_t BgL_pairz00_2539;

																BgL_pairz00_2539 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2416)))->
																	BgL_argsz00);
																BgL_arg1919z00_2538 =
																	CAR(CDR(CDR(BgL_pairz00_2539)));
															}
															BgL_siza7ezd2valuez75_2537 =
																BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
																((BgL_nodez00_bglt) BgL_arg1919z00_2538));
														}
														{	/* Cnst/node.scm 330 */
															bool_t BgL_test2226z00_3137;

															if (INTEGERP(BgL_siza7ezd2valuez75_2537))
																{	/* Cnst/node.scm 330 */
																	BgL_test2226z00_3137 =
																		(
																		(long) CINT(BgL_siza7ezd2valuez75_2537) ==
																		((long) 0));
																}
															else
																{	/* Cnst/node.scm 330 */
																	BgL_test2226z00_3137 = ((bool_t) 0);
																}
															if (BgL_test2226z00_3137)
																{	/* Cnst/node.scm 331 */
																	obj_t BgL_arg1918z00_2540;

																	BgL_arg1918z00_2540 =
																		(((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					((BgL_appz00_bglt)
																						BgL_nodez00_2416))))->BgL_locz00);
																	return
																		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00
																		(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																				BgL_nodez00_2416)),
																		BgL_arg1918z00_2540);
																}
															else
																{	/* Cnst/node.scm 330 */
																	return
																		((BgL_nodez00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_2416));
																}
														}
													}
												else
													{	/* Cnst/node.scm 327 */
														if (
															(((obj_t) BgL_funz00_2524) ==
																BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00))
															{	/* Cnst/node.scm 334 */
																obj_t BgL_siza7ezd2valuez75_2541;

																{	/* Cnst/node.scm 334 */
																	obj_t BgL_arg1925z00_2542;

																	{	/* Cnst/node.scm 334 */
																		obj_t BgL_pairz00_2543;

																		BgL_pairz00_2543 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_nodez00_2416)))->BgL_argsz00);
																		BgL_arg1925z00_2542 =
																			CAR(CDR(BgL_pairz00_2543));
																	}
																	BgL_siza7ezd2valuez75_2541 =
																		BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00
																		(((BgL_nodez00_bglt) BgL_arg1925z00_2542));
																}
																{	/* Cnst/node.scm 335 */
																	bool_t BgL_test2229z00_3159;

																	if (INTEGERP(BgL_siza7ezd2valuez75_2541))
																		{	/* Cnst/node.scm 335 */
																			BgL_test2229z00_3159 =
																				(
																				(long) CINT(BgL_siza7ezd2valuez75_2541)
																				== ((long) 0));
																		}
																	else
																		{	/* Cnst/node.scm 335 */
																			BgL_test2229z00_3159 = ((bool_t) 0);
																		}
																	if (BgL_test2229z00_3159)
																		{	/* Cnst/node.scm 336 */
																			obj_t BgL_arg1924z00_2544;

																			BgL_arg1924z00_2544 =
																				(((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							((BgL_appz00_bglt)
																								BgL_nodez00_2416))))->
																				BgL_locz00);
																			return
																				BGl_cnstzd2alloczd2lzd2procedurezd2zzcnst_allocz00
																				(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
																						BgL_nodez00_2416)),
																				BgL_arg1924z00_2544);
																		}
																	else
																		{	/* Cnst/node.scm 335 */
																			return
																				((BgL_nodez00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_2416));
																		}
																}
															}
														else
															{	/* Cnst/node.scm 333 */
																if (
																	(((obj_t) BgL_funz00_2524) ==
																		BGl_za2doublezd2ze3realza2z31zzcnst_cachez00))
																	{	/* Cnst/node.scm 339 */
																		bool_t BgL_test2232z00_3175;

																		if (INTEGERP(BgL_actualzd2valuezd2_2526))
																			{	/* Cnst/node.scm 339 */
																				BgL_test2232z00_3175 = ((bool_t) 1);
																			}
																		else
																			{	/* Cnst/node.scm 339 */
																				BgL_test2232z00_3175 =
																					REALP(BgL_actualzd2valuezd2_2526);
																			}
																		if (BgL_test2232z00_3175)
																			{	/* Cnst/node.scm 340 */
																				obj_t BgL_arg1929z00_2545;

																				BgL_arg1929z00_2545 =
																					(((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								((BgL_appz00_bglt)
																									BgL_nodez00_2416))))->
																					BgL_locz00);
																				return
																					BGl_cnstzd2alloczd2realz00zzcnst_allocz00
																					(BgL_actualzd2valuezd2_2526,
																					BgL_arg1929z00_2545);
																			}
																		else
																			{	/* Cnst/node.scm 339 */
																				return
																					((BgL_nodez00_bglt)
																					((BgL_appz00_bglt) BgL_nodez00_2416));
																			}
																	}
																else
																	{	/* Cnst/node.scm 338 */
																		if (
																			(((obj_t) BgL_funz00_2524) ==
																				BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00))
																			{	/* Cnst/node.scm 342 */
																				if (ELONGP(BgL_actualzd2valuezd2_2526))
																					{	/* Cnst/node.scm 344 */
																						obj_t BgL_arg1932z00_2546;

																						BgL_arg1932z00_2546 =
																							(((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										((BgL_appz00_bglt)
																											BgL_nodez00_2416))))->
																							BgL_locz00);
																						return
																							BGl_cnstzd2alloczd2elongz00zzcnst_allocz00
																							(BELONG_TO_LONG
																							(BgL_actualzd2valuezd2_2526),
																							BgL_arg1932z00_2546);
																					}
																				else
																					{	/* Cnst/node.scm 343 */
																						return
																							((BgL_nodez00_bglt)
																							((BgL_appz00_bglt)
																								BgL_nodez00_2416));
																					}
																			}
																		else
																			{	/* Cnst/node.scm 342 */
																				if (
																					(((obj_t) BgL_funz00_2524) ==
																						BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00))
																					{	/* Cnst/node.scm 346 */
																						if (LLONGP
																							(BgL_actualzd2valuezd2_2526))
																							{	/* Cnst/node.scm 348 */
																								obj_t BgL_arg1935z00_2547;

																								BgL_arg1935z00_2547 =
																									(((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												((BgL_appz00_bglt)
																													BgL_nodez00_2416))))->
																									BgL_locz00);
																								return
																									BGl_cnstzd2alloczd2llongz00zzcnst_allocz00
																									(BLLONG_TO_LLONG
																									(BgL_actualzd2valuezd2_2526),
																									BgL_arg1935z00_2547);
																							}
																						else
																							{	/* Cnst/node.scm 347 */
																								return
																									((BgL_nodez00_bglt)
																									((BgL_appz00_bglt)
																										BgL_nodez00_2416));
																							}
																					}
																				else
																					{	/* Cnst/node.scm 346 */
																						if (
																							(((obj_t) BgL_funz00_2524) ==
																								BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00))
																							{	/* Cnst/node.scm 350 */
																								if (BGL_INT32P
																									(BgL_actualzd2valuezd2_2526))
																									{	/* Cnst/node.scm 352 */
																										obj_t BgL_arg1938z00_2548;

																										BgL_arg1938z00_2548 =
																											(((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt) (
																															(BgL_appz00_bglt)
																															BgL_nodez00_2416))))->
																											BgL_locz00);
																										return
																											BGl_cnstzd2alloczd2int32z00zzcnst_allocz00
																											(BGL_BINT32_TO_INT32
																											(BgL_actualzd2valuezd2_2526),
																											BgL_arg1938z00_2548);
																									}
																								else
																									{	/* Cnst/node.scm 351 */
																										return
																											((BgL_nodez00_bglt)
																											((BgL_appz00_bglt)
																												BgL_nodez00_2416));
																									}
																							}
																						else
																							{	/* Cnst/node.scm 350 */
																								if (
																									(((obj_t) BgL_funz00_2524) ==
																										BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00))
																									{	/* Cnst/node.scm 354 */
																										if (BGL_UINT32P
																											(BgL_actualzd2valuezd2_2526))
																											{	/* Cnst/node.scm 356 */
																												obj_t
																													BgL_arg1941z00_2549;
																												BgL_arg1941z00_2549 =
																													(((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																((BgL_appz00_bglt) BgL_nodez00_2416))))->BgL_locz00);
																												return
																													BGl_cnstzd2alloczd2uint32z00zzcnst_allocz00
																													(BGL_BUINT32_TO_UINT32
																													(BgL_actualzd2valuezd2_2526),
																													BgL_arg1941z00_2549);
																											}
																										else
																											{	/* Cnst/node.scm 355 */
																												return
																													((BgL_nodez00_bglt)
																													((BgL_appz00_bglt)
																														BgL_nodez00_2416));
																											}
																									}
																								else
																									{	/* Cnst/node.scm 354 */
																										if (
																											(((obj_t) BgL_funz00_2524)
																												==
																												BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00))
																											{	/* Cnst/node.scm 358 */
																												if (BGL_INT64P
																													(BgL_actualzd2valuezd2_2526))
																													{	/* Cnst/node.scm 360 */
																														obj_t
																															BgL_arg1944z00_2550;
																														BgL_arg1944z00_2550
																															=
																															(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2416))))->BgL_locz00);
																														return
																															BGl_cnstzd2alloczd2int64z00zzcnst_allocz00
																															(BGL_BINT64_TO_INT64
																															(BgL_actualzd2valuezd2_2526),
																															BgL_arg1944z00_2550);
																													}
																												else
																													{	/* Cnst/node.scm 359 */
																														return
																															(
																															(BgL_nodez00_bglt)
																															((BgL_appz00_bglt)
																																BgL_nodez00_2416));
																													}
																											}
																										else
																											{	/* Cnst/node.scm 358 */
																												if (
																													(((obj_t)
																															BgL_funz00_2524)
																														==
																														BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00))
																													{	/* Cnst/node.scm 362 */
																														if (BGL_UINT64P
																															(BgL_actualzd2valuezd2_2526))
																															{	/* Cnst/node.scm 364 */
																																obj_t
																																	BgL_arg1947z00_2551;
																																BgL_arg1947z00_2551
																																	=
																																	(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2416))))->BgL_locz00);
																																return
																																	BGl_cnstzd2alloczd2uint64z00zzcnst_allocz00
																																	(BGL_BINT64_TO_INT64
																																	(BgL_actualzd2valuezd2_2526),
																																	BgL_arg1947z00_2551);
																															}
																														else
																															{	/* Cnst/node.scm 363 */
																																return
																																	(
																																	(BgL_nodez00_bglt)
																																	((BgL_appz00_bglt) BgL_nodez00_2416));
																															}
																													}
																												else
																													{	/* Cnst/node.scm 362 */
																														return
																															(
																															(BgL_nodez00_bglt)
																															((BgL_appz00_bglt)
																																BgL_nodez00_2416));
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
						}
					}
				}
		}

	}



/* &cnst!-funcall1332 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2funcall1332za2zzcnst_nodez00(obj_t
		BgL_envz00_2417, obj_t BgL_nodez00_2418)
	{
		{	/* Cnst/node.scm 279 */
			{
				BgL_nodez00_bglt BgL_auxz00_3259;

				{	/* Cnst/node.scm 281 */
					BgL_nodez00_bglt BgL_arg1902z00_2553;

					BgL_arg1902z00_2553 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2418)))->BgL_funz00);
					BgL_auxz00_3259 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1902z00_2553);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2418)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3259), BUNSPEC);
			}
			BGl_cnstza2z12zb0zzcnst_nodez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2418)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2418));
		}

	}



/* &cnst!-app-ly1330 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2appzd2ly1330z70zzcnst_nodez00(obj_t
		BgL_envz00_2419, obj_t BgL_nodez00_2420)
	{
		{	/* Cnst/node.scm 270 */
			{
				BgL_nodez00_bglt BgL_auxz00_3270;

				{	/* Cnst/node.scm 272 */
					BgL_nodez00_bglt BgL_arg1898z00_2555;

					BgL_arg1898z00_2555 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2420)))->BgL_funz00);
					BgL_auxz00_3270 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1898z00_2555);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2420)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3270), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3276;

				{	/* Cnst/node.scm 273 */
					BgL_nodez00_bglt BgL_arg1901z00_2556;

					BgL_arg1901z00_2556 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2420)))->BgL_argz00);
					BgL_auxz00_3276 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1901z00_2556);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2420)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3276), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2420));
		}

	}



/* &cnst!-box-set!1328 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2boxzd2setz121328z62zzcnst_nodez00(obj_t
		BgL_envz00_2421, obj_t BgL_nodez00_2422)
	{
		{	/* Cnst/node.scm 261 */
			{
				BgL_varz00_bglt BgL_auxz00_3284;

				{	/* Cnst/node.scm 263 */
					BgL_varz00_bglt BgL_arg1896z00_2558;

					BgL_arg1896z00_2558 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2422)))->BgL_varz00);
					BgL_auxz00_3284 =
						((BgL_varz00_bglt)
						BGl_cnstz12z12zzcnst_nodez00(
							((BgL_nodez00_bglt) BgL_arg1896z00_2558)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2422)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3284), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3292;

				{	/* Cnst/node.scm 264 */
					BgL_nodez00_bglt BgL_arg1897z00_2559;

					BgL_arg1897z00_2559 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2422)))->BgL_valuez00);
					BgL_auxz00_3292 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1897z00_2559);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2422)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3292), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2422));
		}

	}



/* &cnst!-box-ref1326 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2boxzd2ref1326z70zzcnst_nodez00(obj_t
		BgL_envz00_2423, obj_t BgL_nodez00_2424)
	{
		{	/* Cnst/node.scm 253 */
			{
				BgL_varz00_bglt BgL_auxz00_3300;

				{	/* Cnst/node.scm 255 */
					BgL_varz00_bglt BgL_arg1895z00_2561;

					BgL_arg1895z00_2561 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2424)))->BgL_varz00);
					BgL_auxz00_3300 =
						((BgL_varz00_bglt)
						BGl_cnstz12z12zzcnst_nodez00(
							((BgL_nodez00_bglt) BgL_arg1895z00_2561)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2424)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3300), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2424));
		}

	}



/* &cnst!-make-box1324 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2makezd2box1324z70zzcnst_nodez00(obj_t
		BgL_envz00_2425, obj_t BgL_nodez00_2426)
	{
		{	/* Cnst/node.scm 245 */
			{
				BgL_nodez00_bglt BgL_auxz00_3310;

				{	/* Cnst/node.scm 247 */
					BgL_nodez00_bglt BgL_arg1893z00_2563;

					BgL_arg1893z00_2563 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2426)))->BgL_valuez00);
					BgL_auxz00_3310 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1893z00_2563);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2426)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3310), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2426));
		}

	}



/* &cnst!-jump-ex-it1322 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2jumpzd2exzd2it1322za2zzcnst_nodez00(obj_t
		BgL_envz00_2427, obj_t BgL_nodez00_2428)
	{
		{	/* Cnst/node.scm 236 */
			{
				BgL_nodez00_bglt BgL_auxz00_3318;

				{	/* Cnst/node.scm 238 */
					BgL_nodez00_bglt BgL_arg1891z00_2565;

					BgL_arg1891z00_2565 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2428)))->BgL_exitz00);
					BgL_auxz00_3318 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1891z00_2565);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2428)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3318), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3324;

				{	/* Cnst/node.scm 239 */
					BgL_nodez00_bglt BgL_arg1892z00_2566;

					BgL_arg1892z00_2566 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2428)))->
						BgL_valuez00);
					BgL_auxz00_3324 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1892z00_2566);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2428)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3324), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2428));
		}

	}



/* &cnst!-set-ex-it1320 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2setzd2exzd2it1320za2zzcnst_nodez00(obj_t
		BgL_envz00_2429, obj_t BgL_nodez00_2430)
	{
		{	/* Cnst/node.scm 228 */
			{
				BgL_nodez00_bglt BgL_auxz00_3332;

				{	/* Cnst/node.scm 230 */
					BgL_nodez00_bglt BgL_arg1889z00_2568;

					BgL_arg1889z00_2568 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2430)))->BgL_bodyz00);
					BgL_auxz00_3332 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1889z00_2568);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2430)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3332), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2430));
		}

	}



/* &cnst!-let-var1318 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2letzd2var1318z70zzcnst_nodez00(obj_t
		BgL_envz00_2431, obj_t BgL_nodez00_2432)
	{
		{	/* Cnst/node.scm 213 */
			{	/* Cnst/node.scm 215 */
				obj_t BgL_g1284z00_2570;

				BgL_g1284z00_2570 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2432)))->BgL_bindingsz00);
				{
					obj_t BgL_l1282z00_2572;

					BgL_l1282z00_2572 = BgL_g1284z00_2570;
				BgL_zc3z04anonymousza31878ze3z87_2571:
					if (PAIRP(BgL_l1282z00_2572))
						{	/* Cnst/node.scm 215 */
							{	/* Cnst/node.scm 216 */
								obj_t BgL_bindingz00_2573;

								BgL_bindingz00_2573 = CAR(BgL_l1282z00_2572);
								{	/* Cnst/node.scm 216 */
									obj_t BgL_varz00_2574;

									BgL_varz00_2574 = CAR(((obj_t) BgL_bindingz00_2573));
									{	/* Cnst/node.scm 217 */
										BgL_nodez00_bglt BgL_arg1881z00_2575;

										{	/* Cnst/node.scm 217 */
											obj_t BgL_arg1882z00_2576;

											BgL_arg1882z00_2576 = CDR(((obj_t) BgL_bindingz00_2573));
											BgL_arg1881z00_2575 =
												BGl_cnstz12z12zzcnst_nodez00(
												((BgL_nodez00_bglt) BgL_arg1882z00_2576));
										}
										{	/* Cnst/node.scm 217 */
											obj_t BgL_auxz00_3353;
											obj_t BgL_tmpz00_3351;

											BgL_auxz00_3353 = ((obj_t) BgL_arg1881z00_2575);
											BgL_tmpz00_3351 = ((obj_t) BgL_bindingz00_2573);
											SET_CDR(BgL_tmpz00_3351, BgL_auxz00_3353);
										}
									}
									if (
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_varz00_2574))))->
												BgL_accessz00) == CNST_TABLE_REF(((long) 7))))
										{	/* Cnst/node.scm 218 */
											{	/* Cnst/node.scm 219 */
												BgL_localzf2bvaluezf2_bglt BgL_wide1147z00_2577;

												BgL_wide1147z00_2577 =
													((BgL_localzf2bvaluezf2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_localzf2bvaluezf2_bgl))));
												{	/* Cnst/node.scm 219 */
													obj_t BgL_auxz00_3367;
													BgL_objectz00_bglt BgL_tmpz00_3363;

													BgL_auxz00_3367 = ((obj_t) BgL_wide1147z00_2577);
													BgL_tmpz00_3363 =
														((BgL_objectz00_bglt)
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_varz00_2574)));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3363,
														BgL_auxz00_3367);
												}
												((BgL_objectz00_bglt)
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_2574)));
												{	/* Cnst/node.scm 219 */
													long BgL_arg1885z00_2578;

													{	/* Cnst/node.scm 219 */
														long BgL_res2095z00_2579;

														BgL_res2095z00_2579 =
															BGL_CLASS_INDEX
															(BGl_localzf2bvaluezf2zzcnst_nodez00);
														BgL_arg1885z00_2578 = BgL_res2095z00_2579;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_localz00_bglt)
																((BgL_localz00_bglt) BgL_varz00_2574))),
														BgL_arg1885z00_2578);
												}
												((BgL_localz00_bglt)
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_2574)));
											}
											{
												BgL_localzf2bvaluezf2_bglt BgL_auxz00_3381;

												{
													obj_t BgL_auxz00_3382;

													{	/* Cnst/node.scm 220 */
														BgL_objectz00_bglt BgL_tmpz00_3383;

														BgL_tmpz00_3383 =
															((BgL_objectz00_bglt)
															((BgL_localz00_bglt)
																((BgL_localz00_bglt) BgL_varz00_2574)));
														BgL_auxz00_3382 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3383);
													}
													BgL_auxz00_3381 =
														((BgL_localzf2bvaluezf2_bglt) BgL_auxz00_3382);
												}
												((((BgL_localzf2bvaluezf2_bglt)
															COBJECT(BgL_auxz00_3381))->
														BgL_bindingzd2valuezd2) =
													((BgL_nodez00_bglt) ((BgL_nodez00_bglt) CDR(((obj_t)
																	BgL_bindingz00_2573)))), BUNSPEC);
											}
											((obj_t)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_varz00_2574)));
										}
									else
										{	/* Cnst/node.scm 218 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1282z00_3396;

								BgL_l1282z00_3396 = CDR(BgL_l1282z00_2572);
								BgL_l1282z00_2572 = BgL_l1282z00_3396;
								goto BgL_zc3z04anonymousza31878ze3z87_2571;
							}
						}
					else
						{	/* Cnst/node.scm 215 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3398;

				{	/* Cnst/node.scm 222 */
					BgL_nodez00_bglt BgL_arg1888z00_2580;

					BgL_arg1888z00_2580 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2432)))->BgL_bodyz00);
					BgL_auxz00_3398 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1888z00_2580);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2432)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3398), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2432));
		}

	}



/* &cnst!-let-fun1316 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2letzd2fun1316z70zzcnst_nodez00(obj_t
		BgL_envz00_2433, obj_t BgL_nodez00_2434)
	{
		{	/* Cnst/node.scm 201 */
			{	/* Cnst/node.scm 203 */
				obj_t BgL_g1281z00_2582;

				BgL_g1281z00_2582 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2434)))->BgL_localsz00);
				{
					obj_t BgL_l1279z00_2584;

					BgL_l1279z00_2584 = BgL_g1281z00_2582;
				BgL_zc3z04anonymousza31871ze3z87_2583:
					if (PAIRP(BgL_l1279z00_2584))
						{	/* Cnst/node.scm 203 */
							{	/* Cnst/node.scm 204 */
								obj_t BgL_localz00_2585;

								BgL_localz00_2585 = CAR(BgL_l1279z00_2584);
								{	/* Cnst/node.scm 204 */
									BgL_valuez00_bglt BgL_funz00_2586;

									BgL_funz00_2586 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2585))))->
										BgL_valuez00);
									{	/* Cnst/node.scm 205 */
										BgL_nodez00_bglt BgL_arg1873z00_2587;

										{	/* Cnst/node.scm 205 */
											obj_t BgL_arg1874z00_2588;

											BgL_arg1874z00_2588 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2586)))->
												BgL_bodyz00);
											BgL_arg1873z00_2587 =
												BGl_cnstz12z12zzcnst_nodez00(((BgL_nodez00_bglt)
													BgL_arg1874z00_2588));
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2586)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1873z00_2587)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1279z00_3421;

								BgL_l1279z00_3421 = CDR(BgL_l1279z00_2584);
								BgL_l1279z00_2584 = BgL_l1279z00_3421;
								goto BgL_zc3z04anonymousza31871ze3z87_2583;
							}
						}
					else
						{	/* Cnst/node.scm 203 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3423;

				{	/* Cnst/node.scm 207 */
					BgL_nodez00_bglt BgL_arg1877z00_2589;

					BgL_arg1877z00_2589 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2434)))->BgL_bodyz00);
					BgL_auxz00_3423 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1877z00_2589);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2434)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3423), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2434));
		}

	}



/* &cnst!-switch1314 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2switch1314za2zzcnst_nodez00(obj_t
		BgL_envz00_2435, obj_t BgL_nodez00_2436)
	{
		{	/* Cnst/node.scm 190 */
			{
				BgL_nodez00_bglt BgL_auxz00_3431;

				{	/* Cnst/node.scm 192 */
					BgL_nodez00_bglt BgL_arg1863z00_2591;

					BgL_arg1863z00_2591 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2436)))->BgL_testz00);
					BgL_auxz00_3431 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1863z00_2591);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2436)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3431), BUNSPEC);
			}
			{	/* Cnst/node.scm 193 */
				obj_t BgL_g1278z00_2592;

				BgL_g1278z00_2592 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2436)))->BgL_clausesz00);
				{
					obj_t BgL_l1276z00_2594;

					BgL_l1276z00_2594 = BgL_g1278z00_2592;
				BgL_zc3z04anonymousza31864ze3z87_2593:
					if (PAIRP(BgL_l1276z00_2594))
						{	/* Cnst/node.scm 193 */
							{	/* Cnst/node.scm 194 */
								obj_t BgL_clausez00_2595;

								BgL_clausez00_2595 = CAR(BgL_l1276z00_2594);
								{	/* Cnst/node.scm 194 */
									BgL_nodez00_bglt BgL_arg1866z00_2596;

									{	/* Cnst/node.scm 194 */
										obj_t BgL_arg1868z00_2597;

										BgL_arg1868z00_2597 = CDR(((obj_t) BgL_clausez00_2595));
										BgL_arg1866z00_2596 =
											BGl_cnstz12z12zzcnst_nodez00(
											((BgL_nodez00_bglt) BgL_arg1868z00_2597));
									}
									{	/* Cnst/node.scm 194 */
										obj_t BgL_auxz00_3448;
										obj_t BgL_tmpz00_3446;

										BgL_auxz00_3448 = ((obj_t) BgL_arg1866z00_2596);
										BgL_tmpz00_3446 = ((obj_t) BgL_clausez00_2595);
										SET_CDR(BgL_tmpz00_3446, BgL_auxz00_3448);
									}
								}
							}
							{
								obj_t BgL_l1276z00_3451;

								BgL_l1276z00_3451 = CDR(BgL_l1276z00_2594);
								BgL_l1276z00_2594 = BgL_l1276z00_3451;
								goto BgL_zc3z04anonymousza31864ze3z87_2593;
							}
						}
					else
						{	/* Cnst/node.scm 193 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2436));
		}

	}



/* &cnst!-fail1312 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2fail1312za2zzcnst_nodez00(obj_t
		BgL_envz00_2437, obj_t BgL_nodez00_2438)
	{
		{	/* Cnst/node.scm 180 */
			{
				BgL_nodez00_bglt BgL_auxz00_3455;

				{	/* Cnst/node.scm 182 */
					BgL_nodez00_bglt BgL_arg1859z00_2599;

					BgL_arg1859z00_2599 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_procz00);
					BgL_auxz00_3455 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1859z00_2599);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3455), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3461;

				{	/* Cnst/node.scm 183 */
					BgL_nodez00_bglt BgL_arg1861z00_2600;

					BgL_arg1861z00_2600 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_msgz00);
					BgL_auxz00_3461 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1861z00_2600);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3461), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3467;

				{	/* Cnst/node.scm 184 */
					BgL_nodez00_bglt BgL_arg1862z00_2601;

					BgL_arg1862z00_2601 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_objz00);
					BgL_auxz00_3467 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1862z00_2601);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2438)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3467), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2438));
		}

	}



/* &cnst!-conditional1310 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2conditional1310za2zzcnst_nodez00(obj_t
		BgL_envz00_2439, obj_t BgL_nodez00_2440)
	{
		{	/* Cnst/node.scm 170 */
			{
				BgL_nodez00_bglt BgL_auxz00_3475;

				{	/* Cnst/node.scm 172 */
					BgL_nodez00_bglt BgL_arg1856z00_2603;

					BgL_arg1856z00_2603 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_testz00);
					BgL_auxz00_3475 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1856z00_2603);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3475), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3481;

				{	/* Cnst/node.scm 173 */
					BgL_nodez00_bglt BgL_arg1857z00_2604;

					BgL_arg1857z00_2604 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_truez00);
					BgL_auxz00_3481 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1857z00_2604);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3481), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3487;

				{	/* Cnst/node.scm 174 */
					BgL_nodez00_bglt BgL_arg1858z00_2605;

					BgL_arg1858z00_2605 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_falsez00);
					BgL_auxz00_3487 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1858z00_2605);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2440)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3487), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2440));
		}

	}



/* &cnst!-setq1308 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2setq1308za2zzcnst_nodez00(obj_t
		BgL_envz00_2441, obj_t BgL_nodez00_2442)
	{
		{	/* Cnst/node.scm 162 */
			{
				BgL_nodez00_bglt BgL_auxz00_3495;

				{	/* Cnst/node.scm 164 */
					BgL_nodez00_bglt BgL_arg1855z00_2607;

					BgL_arg1855z00_2607 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2442)))->BgL_valuez00);
					BgL_auxz00_3495 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1855z00_2607);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2442)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3495), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2442));
		}

	}



/* &cnst!-cast1306 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2cast1306za2zzcnst_nodez00(obj_t
		BgL_envz00_2443, obj_t BgL_nodez00_2444)
	{
		{	/* Cnst/node.scm 154 */
			BGl_cnstz12z12zzcnst_nodez00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2444)))->BgL_argz00));
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2444));
		}

	}



/* &cnst!-extern1304 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2extern1304za2zzcnst_nodez00(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446)
	{
		{	/* Cnst/node.scm 146 */
			BGl_cnstza2z12zb0zzcnst_nodez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2446)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2446));
		}

	}



/* &cnst!-sync1302 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2sync1302za2zzcnst_nodez00(obj_t
		BgL_envz00_2447, obj_t BgL_nodez00_2448)
	{
		{	/* Cnst/node.scm 136 */
			{
				BgL_nodez00_bglt BgL_auxz00_3513;

				{	/* Cnst/node.scm 138 */
					BgL_nodez00_bglt BgL_arg1848z00_2611;

					BgL_arg1848z00_2611 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_mutexz00);
					BgL_auxz00_3513 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1848z00_2611);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3513), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3519;

				{	/* Cnst/node.scm 139 */
					BgL_nodez00_bglt BgL_arg1850z00_2612;

					BgL_arg1850z00_2612 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_prelockz00);
					BgL_auxz00_3519 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1850z00_2612);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3519), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3525;

				{	/* Cnst/node.scm 140 */
					BgL_nodez00_bglt BgL_arg1851z00_2613;

					BgL_arg1851z00_2613 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_bodyz00);
					BgL_auxz00_3525 = BGl_cnstz12z12zzcnst_nodez00(BgL_arg1851z00_2613);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2448)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3525), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2448));
		}

	}



/* &cnst!-sequence1300 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2sequence1300za2zzcnst_nodez00(obj_t
		BgL_envz00_2449, obj_t BgL_nodez00_2450)
	{
		{	/* Cnst/node.scm 128 */
			BGl_cnstza2z12zb0zzcnst_nodez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2450)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2450));
		}

	}



/* &cnst!-closure1298 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2closure1298za2zzcnst_nodez00(obj_t
		BgL_envz00_2451, obj_t BgL_nodez00_2452)
	{
		{	/* Cnst/node.scm 122 */
			{	/* Cnst/node.scm 123 */
				obj_t BgL_arg1846z00_2616;

				BgL_arg1846z00_2616 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2452)));
				return
					((BgL_nodez00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2127z00zzcnst_nodez00, BGl_string2154z00zzcnst_nodez00,
						BgL_arg1846z00_2616));
			}
		}

	}



/* &cnst!-var1296 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2var1296za2zzcnst_nodez00(obj_t
		BgL_envz00_2453, obj_t BgL_nodez00_2454)
	{
		{	/* Cnst/node.scm 116 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2454));
		}

	}



/* &cnst!-kwote1294 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2kwote1294za2zzcnst_nodez00(obj_t
		BgL_envz00_2455, obj_t BgL_nodez00_2456)
	{
		{	/* Cnst/node.scm 64 */
			{	/* Cnst/node.scm 67 */
				bool_t BgL_test2250z00_3545;

				{	/* Cnst/node.scm 67 */
					obj_t BgL_tmpz00_3546;

					BgL_tmpz00_3546 =
						(((BgL_kwotez00_bglt) COBJECT(
								((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
					BgL_test2250z00_3545 = SYMBOLP(BgL_tmpz00_3546);
				}
				if (BgL_test2250z00_3545)
					{	/* Cnst/node.scm 68 */
						obj_t BgL_arg1578z00_2619;
						obj_t BgL_arg1582z00_2620;

						BgL_arg1578z00_2619 =
							(((BgL_kwotez00_bglt) COBJECT(
									((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
						BgL_arg1582z00_2620 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_kwotez00_bglt) BgL_nodez00_2456))))->BgL_locz00);
						return
							BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(BgL_arg1578z00_2619,
							BgL_arg1582z00_2620);
					}
				else
					{	/* Cnst/node.scm 69 */
						bool_t BgL_test2251z00_3556;

						{	/* Cnst/node.scm 69 */
							obj_t BgL_tmpz00_3557;

							BgL_tmpz00_3557 =
								(((BgL_kwotez00_bglt) COBJECT(
										((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
							BgL_test2251z00_3556 = KEYWORDP(BgL_tmpz00_3557);
						}
						if (BgL_test2251z00_3556)
							{	/* Cnst/node.scm 70 */
								obj_t BgL_arg1588z00_2621;
								obj_t BgL_arg1589z00_2622;

								BgL_arg1588z00_2621 =
									(((BgL_kwotez00_bglt) COBJECT(
											((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
								BgL_arg1589z00_2622 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_kwotez00_bglt) BgL_nodez00_2456))))->BgL_locz00);
								return
									BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00
									(BgL_arg1588z00_2621, BgL_arg1589z00_2622);
							}
						else
							{	/* Cnst/node.scm 71 */
								bool_t BgL_test2252z00_3567;

								{	/* Cnst/node.scm 71 */
									obj_t BgL_tmpz00_3568;

									BgL_tmpz00_3568 =
										(((BgL_kwotez00_bglt) COBJECT(
												((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
									BgL_test2252z00_3567 = PAIRP(BgL_tmpz00_3568);
								}
								if (BgL_test2252z00_3567)
									{	/* Cnst/node.scm 72 */
										obj_t BgL_arg1597z00_2623;
										obj_t BgL_arg1599z00_2624;

										BgL_arg1597z00_2623 =
											(((BgL_kwotez00_bglt) COBJECT(
													((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
											BgL_valuez00);
										BgL_arg1599z00_2624 =
											(((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_kwotez00_bglt)
															BgL_nodez00_2456))))->BgL_locz00);
										return
											BGl_cnstzd2alloczd2listz00zzcnst_allocz00
											(BgL_arg1597z00_2623, BgL_arg1599z00_2624);
									}
								else
									{	/* Cnst/node.scm 73 */
										bool_t BgL_test2253z00_3578;

										{	/* Cnst/node.scm 73 */
											obj_t BgL_tmpz00_3579;

											BgL_tmpz00_3579 =
												(((BgL_kwotez00_bglt) COBJECT(
														((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
												BgL_valuez00);
											BgL_test2253z00_3578 = VECTORP(BgL_tmpz00_3579);
										}
										if (BgL_test2253z00_3578)
											{	/* Cnst/node.scm 74 */
												obj_t BgL_arg1606z00_2625;
												obj_t BgL_arg1611z00_2626;

												BgL_arg1606z00_2625 =
													(((BgL_kwotez00_bglt) COBJECT(
															((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
													BgL_valuez00);
												BgL_arg1611z00_2626 =
													(((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_kwotez00_bglt)
																	BgL_nodez00_2456))))->BgL_locz00);
												return
													BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00
													(BgL_arg1606z00_2625, BgL_arg1611z00_2626);
											}
										else
											{	/* Cnst/node.scm 75 */
												bool_t BgL_test2254z00_3589;

												{	/* Cnst/node.scm 75 */
													obj_t BgL_tmpz00_3590;

													BgL_tmpz00_3590 =
														(((BgL_kwotez00_bglt) COBJECT(
																((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
														BgL_valuez00);
													BgL_test2254z00_3589 = BGL_HVECTORP(BgL_tmpz00_3590);
												}
												if (BgL_test2254z00_3589)
													{	/* Cnst/node.scm 76 */
														obj_t BgL_arg1624z00_2627;
														obj_t BgL_arg1626z00_2628;

														BgL_arg1624z00_2627 =
															(((BgL_kwotez00_bglt) COBJECT(
																	((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
															BgL_valuez00);
														BgL_arg1626z00_2628 =
															(((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_kwotez00_bglt)
																			BgL_nodez00_2456))))->BgL_locz00);
														return
															BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00
															(BgL_arg1624z00_2627, BgL_arg1626z00_2628);
													}
												else
													{	/* Cnst/node.scm 77 */
														bool_t BgL_test2255z00_3600;

														{	/* Cnst/node.scm 77 */
															obj_t BgL_tmpz00_3601;

															BgL_tmpz00_3601 =
																(((BgL_kwotez00_bglt) COBJECT(
																		((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
																BgL_valuez00);
															BgL_test2255z00_3600 = STRINGP(BgL_tmpz00_3601);
														}
														if (BgL_test2255z00_3600)
															{	/* Cnst/node.scm 78 */
																obj_t BgL_arg1631z00_2629;
																obj_t BgL_arg1634z00_2630;

																BgL_arg1631z00_2629 =
																	(((BgL_kwotez00_bglt) COBJECT(
																			((BgL_kwotez00_bglt) BgL_nodez00_2456)))->
																	BgL_valuez00);
																BgL_arg1634z00_2630 =
																	(((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_kwotez00_bglt)
																					BgL_nodez00_2456))))->BgL_locz00);
																return
																	BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
																	(BgL_arg1631z00_2629, BgL_arg1634z00_2630);
															}
														else
															{	/* Cnst/node.scm 79 */
																bool_t BgL_test2256z00_3611;

																{	/* Cnst/node.scm 79 */
																	obj_t BgL_tmpz00_3612;

																	BgL_tmpz00_3612 =
																		(((BgL_kwotez00_bglt) COBJECT(
																				((BgL_kwotez00_bglt)
																					BgL_nodez00_2456)))->BgL_valuez00);
																	BgL_test2256z00_3611 =
																		UCS2_STRINGP(BgL_tmpz00_3612);
																}
																if (BgL_test2256z00_3611)
																	{	/* Cnst/node.scm 80 */
																		obj_t BgL_arg1644z00_2631;
																		obj_t BgL_arg1652z00_2632;

																		BgL_arg1644z00_2631 =
																			(((BgL_kwotez00_bglt) COBJECT(
																					((BgL_kwotez00_bglt)
																						BgL_nodez00_2456)))->BgL_valuez00);
																		BgL_arg1652z00_2632 =
																			(((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_kwotez00_bglt)
																							BgL_nodez00_2456))))->BgL_locz00);
																		return
																			BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00
																			(BgL_arg1644z00_2631,
																			BgL_arg1652z00_2632);
																	}
																else
																	{	/* Cnst/node.scm 81 */
																		bool_t BgL_test2257z00_3622;

																		{	/* Cnst/node.scm 81 */
																			obj_t BgL_arg1833z00_2633;

																			BgL_arg1833z00_2633 =
																				(((BgL_kwotez00_bglt) COBJECT(
																						((BgL_kwotez00_bglt)
																							BgL_nodez00_2456)))->
																				BgL_valuez00);
																			if (STRUCTP(BgL_arg1833z00_2633))
																				{	/* Cnst/node.scm 81 */
																					BgL_test2257z00_3622 =
																						(STRUCT_KEY(BgL_arg1833z00_2633) ==
																						CNST_TABLE_REF(((long) 8)));
																				}
																			else
																				{	/* Cnst/node.scm 81 */
																					BgL_test2257z00_3622 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test2257z00_3622)
																			{	/* Cnst/node.scm 82 */
																				obj_t BgL_arg1664z00_2634;
																				obj_t BgL_arg1667z00_2635;

																				BgL_arg1664z00_2634 =
																					(((BgL_kwotez00_bglt) COBJECT(
																							((BgL_kwotez00_bglt)
																								BgL_nodez00_2456)))->
																					BgL_valuez00);
																				BgL_arg1667z00_2635 =
																					(((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt) (
																									(BgL_kwotez00_bglt)
																									BgL_nodez00_2456))))->
																					BgL_locz00);
																				return
																					BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00
																					(BgL_arg1664z00_2634,
																					BgL_arg1667z00_2635);
																			}
																		else
																			{	/* Cnst/node.scm 83 */
																				bool_t BgL_test2259z00_3636;

																				{	/* Cnst/node.scm 83 */
																					bool_t BgL_test2260z00_3637;

																					{	/* Cnst/node.scm 83 */
																						obj_t BgL_tmpz00_3638;

																						BgL_tmpz00_3638 =
																							(((BgL_kwotez00_bglt) COBJECT(
																									((BgL_kwotez00_bglt)
																										BgL_nodez00_2456)))->
																							BgL_valuez00);
																						BgL_test2260z00_3637 =
																							CHARP(BgL_tmpz00_3638);
																					}
																					if (BgL_test2260z00_3637)
																						{	/* Cnst/node.scm 83 */
																							BgL_test2259z00_3636 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Cnst/node.scm 83 */
																							if (INTEGERP(
																									(((BgL_kwotez00_bglt) COBJECT(
																												((BgL_kwotez00_bglt)
																													BgL_nodez00_2456)))->
																										BgL_valuez00)))
																								{	/* Cnst/node.scm 84 */
																									BgL_test2259z00_3636 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Cnst/node.scm 85 */
																									bool_t BgL_test2262z00_3646;

																									{	/* Cnst/node.scm 85 */
																										obj_t BgL_tmpz00_3647;

																										BgL_tmpz00_3647 =
																											(((BgL_kwotez00_bglt)
																												COBJECT((
																														(BgL_kwotez00_bglt)
																														BgL_nodez00_2456)))->
																											BgL_valuez00);
																										BgL_test2262z00_3646 =
																											BOOLEANP(BgL_tmpz00_3647);
																									}
																									if (BgL_test2262z00_3646)
																										{	/* Cnst/node.scm 85 */
																											BgL_test2259z00_3636 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Cnst/node.scm 86 */
																											bool_t
																												BgL_test2263z00_3651;
																											{	/* Cnst/node.scm 86 */
																												obj_t
																													BgL_arg1829z00_2636;
																												BgL_arg1829z00_2636 =
																													(((BgL_kwotez00_bglt)
																														COBJECT((
																																(BgL_kwotez00_bglt)
																																BgL_nodez00_2456)))->
																													BgL_valuez00);
																												if (INTEGERP
																													(BgL_arg1829z00_2636))
																													{	/* Cnst/node.scm 86 */
																														BgL_test2263z00_3651
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Cnst/node.scm 86 */
																														BgL_test2263z00_3651
																															=
																															REALP
																															(BgL_arg1829z00_2636);
																													}
																											}
																											if (BgL_test2263z00_3651)
																												{	/* Cnst/node.scm 86 */
																													BgL_test2259z00_3636 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Cnst/node.scm 87 */
																													bool_t
																														BgL_test2265z00_3657;
																													{	/* Cnst/node.scm 87 */
																														obj_t
																															BgL_tmpz00_3658;
																														BgL_tmpz00_3658 =
																															(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																														BgL_test2265z00_3657
																															=
																															CNSTP
																															(BgL_tmpz00_3658);
																													}
																													if (BgL_test2265z00_3657)
																														{	/* Cnst/node.scm 87 */
																															BgL_test2259z00_3636
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Cnst/node.scm 88 */
																															bool_t
																																BgL_test2266z00_3662;
																															{	/* Cnst/node.scm 88 */
																																obj_t
																																	BgL_tmpz00_3663;
																																BgL_tmpz00_3663
																																	=
																																	(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																BgL_test2266z00_3662
																																	=
																																	ELONGP
																																	(BgL_tmpz00_3663);
																															}
																															if (BgL_test2266z00_3662)
																																{	/* Cnst/node.scm 88 */
																																	BgL_test2259z00_3636
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Cnst/node.scm 89 */
																																	bool_t
																																		BgL_test2267z00_3667;
																																	{	/* Cnst/node.scm 89 */
																																		obj_t
																																			BgL_tmpz00_3668;
																																		BgL_tmpz00_3668
																																			=
																																			(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																		BgL_test2267z00_3667
																																			=
																																			LLONGP
																																			(BgL_tmpz00_3668);
																																	}
																																	if (BgL_test2267z00_3667)
																																		{	/* Cnst/node.scm 89 */
																																			BgL_test2259z00_3636
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Cnst/node.scm 90 */
																																			bool_t
																																				BgL_test2268z00_3672;
																																			{	/* Cnst/node.scm 90 */
																																				obj_t
																																					BgL_tmpz00_3673;
																																				BgL_tmpz00_3673
																																					=
																																					(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																				BgL_test2268z00_3672
																																					=
																																					BGL_INT8P
																																					(BgL_tmpz00_3673);
																																			}
																																			if (BgL_test2268z00_3672)
																																				{	/* Cnst/node.scm 90 */
																																					BgL_test2259z00_3636
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Cnst/node.scm 91 */
																																					bool_t
																																						BgL_test2269z00_3677;
																																					{	/* Cnst/node.scm 91 */
																																						obj_t
																																							BgL_tmpz00_3678;
																																						BgL_tmpz00_3678
																																							=
																																							(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																						BgL_test2269z00_3677
																																							=
																																							BGL_UINT8P
																																							(BgL_tmpz00_3678);
																																					}
																																					if (BgL_test2269z00_3677)
																																						{	/* Cnst/node.scm 91 */
																																							BgL_test2259z00_3636
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Cnst/node.scm 92 */
																																							bool_t
																																								BgL_test2270z00_3682;
																																							{	/* Cnst/node.scm 92 */
																																								obj_t
																																									BgL_tmpz00_3683;
																																								BgL_tmpz00_3683
																																									=
																																									(
																																									((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																								BgL_test2270z00_3682
																																									=
																																									BGL_INT16P
																																									(BgL_tmpz00_3683);
																																							}
																																							if (BgL_test2270z00_3682)
																																								{	/* Cnst/node.scm 92 */
																																									BgL_test2259z00_3636
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Cnst/node.scm 93 */
																																									bool_t
																																										BgL_test2271z00_3687;
																																									{	/* Cnst/node.scm 93 */
																																										obj_t
																																											BgL_tmpz00_3688;
																																										BgL_tmpz00_3688
																																											=
																																											(
																																											((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																										BgL_test2271z00_3687
																																											=
																																											BGL_UINT16P
																																											(BgL_tmpz00_3688);
																																									}
																																									if (BgL_test2271z00_3687)
																																										{	/* Cnst/node.scm 93 */
																																											BgL_test2259z00_3636
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Cnst/node.scm 94 */
																																											bool_t
																																												BgL_test2272z00_3692;
																																											{	/* Cnst/node.scm 94 */
																																												obj_t
																																													BgL_tmpz00_3693;
																																												BgL_tmpz00_3693
																																													=
																																													(
																																													((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																												BgL_test2272z00_3692
																																													=
																																													BGL_INT32P
																																													(BgL_tmpz00_3693);
																																											}
																																											if (BgL_test2272z00_3692)
																																												{	/* Cnst/node.scm 94 */
																																													BgL_test2259z00_3636
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Cnst/node.scm 95 */
																																													bool_t
																																														BgL_test2273z00_3697;
																																													{	/* Cnst/node.scm 95 */
																																														obj_t
																																															BgL_tmpz00_3698;
																																														BgL_tmpz00_3698
																																															=
																																															(
																																															((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																														BgL_test2273z00_3697
																																															=
																																															BGL_UINT32P
																																															(BgL_tmpz00_3698);
																																													}
																																													if (BgL_test2273z00_3697)
																																														{	/* Cnst/node.scm 95 */
																																															BgL_test2259z00_3636
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Cnst/node.scm 96 */
																																															bool_t
																																																BgL_test2274z00_3702;
																																															{	/* Cnst/node.scm 96 */
																																																obj_t
																																																	BgL_tmpz00_3703;
																																																BgL_tmpz00_3703
																																																	=
																																																	(
																																																	((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																																BgL_test2274z00_3702
																																																	=
																																																	BGL_INT64P
																																																	(BgL_tmpz00_3703);
																																															}
																																															if (BgL_test2274z00_3702)
																																																{	/* Cnst/node.scm 96 */
																																																	BgL_test2259z00_3636
																																																		=
																																																		(
																																																		(bool_t)
																																																		1);
																																																}
																																															else
																																																{	/* Cnst/node.scm 97 */
																																																	obj_t
																																																		BgL_tmpz00_3707;
																																																	BgL_tmpz00_3707
																																																		=
																																																		(
																																																		((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																																																	BgL_test2259z00_3636
																																																		=
																																																		BGL_UINT64P
																																																		(BgL_tmpz00_3707);
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
																								}
																						}
																				}
																				if (BgL_test2259z00_3636)
																					{	/* Cnst/node.scm 98 */
																						BgL_literalz00_bglt
																							BgL_new1131z00_2637;
																						{	/* Cnst/node.scm 99 */
																							BgL_literalz00_bglt
																								BgL_new1130z00_2638;
																							BgL_new1130z00_2638 =
																								((BgL_literalz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_literalz00_bgl))));
																							{	/* Cnst/node.scm 99 */
																								long BgL_arg1760z00_2639;

																								{	/* Cnst/node.scm 99 */
																									long BgL_res2088z00_2640;

																									BgL_res2088z00_2640 =
																										BGL_CLASS_INDEX
																										(BGl_literalz00zzast_nodez00);
																									BgL_arg1760z00_2639 =
																										BgL_res2088z00_2640;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1130z00_2638),
																									BgL_arg1760z00_2639);
																							}
																							{	/* Cnst/node.scm 99 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_3715;
																								BgL_tmpz00_3715 =
																									((BgL_objectz00_bglt)
																									BgL_new1130z00_2638);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_3715, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1130z00_2638);
																							BgL_new1131z00_2637 =
																								BgL_new1130z00_2638;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1131z00_2637)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_kwotez00_bglt)
																													BgL_nodez00_2456))))->
																									BgL_locz00)), BUNSPEC);
																						{
																							BgL_typez00_bglt BgL_auxz00_3724;

																							{	/* Cnst/node.scm 100 */
																								BgL_typez00_bglt
																									BgL_arg1756z00_2641;
																								BgL_typez00_bglt
																									BgL_arg1757z00_2642;
																								{	/* Cnst/node.scm 100 */
																									obj_t BgL_arg1759z00_2643;

																									BgL_arg1759z00_2643 =
																										(((BgL_kwotez00_bglt)
																											COBJECT((
																													(BgL_kwotez00_bglt)
																													BgL_nodez00_2456)))->
																										BgL_valuez00);
																									BgL_arg1756z00_2641 =
																										BGl_getzd2typezd2atomz00zztype_typeofz00
																										(BgL_arg1759z00_2643);
																								}
																								BgL_arg1757z00_2642 =
																									(((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												((BgL_kwotez00_bglt)
																													BgL_nodez00_2456))))->
																									BgL_typez00);
																								BgL_auxz00_3724 =
																									BGl_strictzd2nodezd2typez00zzast_nodez00
																									(BgL_arg1756z00_2641,
																									BgL_arg1757z00_2642);
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1131z00_2637)))->
																									BgL_typez00) =
																								((BgL_typez00_bglt)
																									BgL_auxz00_3724), BUNSPEC);
																						}
																						((((BgL_atomz00_bglt) COBJECT(
																										((BgL_atomz00_bglt)
																											BgL_new1131z00_2637)))->
																								BgL_valuez00) =
																							((obj_t) (((BgL_kwotez00_bglt)
																										COBJECT(((BgL_kwotez00_bglt)
																												BgL_nodez00_2456)))->
																									BgL_valuez00)), BUNSPEC);
																						return ((BgL_nodez00_bglt)
																							BgL_new1131z00_2637);
																					}
																				else
																					{	/* Cnst/node.scm 102 */
																						bool_t BgL_test2275z00_3739;

																						{	/* Cnst/node.scm 102 */
																							obj_t BgL_tmpz00_3740;

																							BgL_tmpz00_3740 =
																								(((BgL_kwotez00_bglt) COBJECT(
																										((BgL_kwotez00_bglt)
																											BgL_nodez00_2456)))->
																								BgL_valuez00);
																							BgL_test2275z00_3739 =
																								BIGNUMP(BgL_tmpz00_3740);
																						}
																						if (BgL_test2275z00_3739)
																							{	/* Cnst/node.scm 103 */
																								obj_t BgL__ortest_1132z00_2644;

																								{	/* Cnst/node.scm 103 */
																									obj_t BgL_arg1779z00_2645;
																									obj_t BgL_arg1782z00_2646;

																									BgL_arg1779z00_2645 =
																										(((BgL_kwotez00_bglt)
																											COBJECT((
																													(BgL_kwotez00_bglt)
																													BgL_nodez00_2456)))->
																										BgL_valuez00);
																									BgL_arg1782z00_2646 =
																										(((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt) (
																														(BgL_kwotez00_bglt)
																														BgL_nodez00_2456))))->
																										BgL_locz00);
																									BgL__ortest_1132z00_2644 =
																										BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00
																										(BgL_arg1779z00_2645,
																										BgL_arg1782z00_2646);
																								}
																								if (CBOOL
																									(BgL__ortest_1132z00_2644))
																									{	/* Cnst/node.scm 103 */
																										return
																											((BgL_nodez00_bglt)
																											BgL__ortest_1132z00_2644);
																									}
																								else
																									{	/* Cnst/node.scm 104 */
																										BgL_literalz00_bglt
																											BgL_new1134z00_2647;
																										{	/* Cnst/node.scm 105 */
																											BgL_literalz00_bglt
																												BgL_new1133z00_2648;
																											BgL_new1133z00_2648 =
																												((BgL_literalz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_literalz00_bgl))));
																											{	/* Cnst/node.scm 105 */
																												long
																													BgL_arg1778z00_2649;
																												{	/* Cnst/node.scm 105 */
																													long
																														BgL_res2090z00_2650;
																													BgL_res2090z00_2650 =
																														BGL_CLASS_INDEX
																														(BGl_literalz00zzast_nodez00);
																													BgL_arg1778z00_2649 =
																														BgL_res2090z00_2650;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1133z00_2648),
																													BgL_arg1778z00_2649);
																											}
																											{	/* Cnst/node.scm 105 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_3757;
																												BgL_tmpz00_3757 =
																													((BgL_objectz00_bglt)
																													BgL_new1133z00_2648);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_3757,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1133z00_2648);
																											BgL_new1134z00_2647 =
																												BgL_new1133z00_2648;
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1134z00_2647)))->
																												BgL_locz00) =
																											((obj_t) ((
																														(BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																((BgL_kwotez00_bglt) BgL_nodez00_2456))))->BgL_locz00)), BUNSPEC);
																										{
																											BgL_typez00_bglt
																												BgL_auxz00_3766;
																											{	/* Cnst/node.scm 106 */
																												BgL_typez00_bglt
																													BgL_arg1768z00_2651;
																												BgL_typez00_bglt
																													BgL_arg1771z00_2652;
																												{	/* Cnst/node.scm 106 */
																													obj_t
																														BgL_arg1775z00_2653;
																													BgL_arg1775z00_2653 =
																														(((BgL_kwotez00_bglt) COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_2456)))->BgL_valuez00);
																													BgL_arg1768z00_2651 =
																														BGl_getzd2typezd2atomz00zztype_typeofz00
																														(BgL_arg1775z00_2653);
																												}
																												BgL_arg1771z00_2652 =
																													(((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																((BgL_kwotez00_bglt) BgL_nodez00_2456))))->BgL_typez00);
																												BgL_auxz00_3766 =
																													BGl_strictzd2nodezd2typez00zzast_nodez00
																													(BgL_arg1768z00_2651,
																													BgL_arg1771z00_2652);
																											}
																											((((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																BgL_new1134z00_2647)))->
																													BgL_typez00) =
																												((BgL_typez00_bglt)
																													BgL_auxz00_3766),
																												BUNSPEC);
																										}
																										((((BgL_atomz00_bglt)
																													COBJECT((
																															(BgL_atomz00_bglt)
																															BgL_new1134z00_2647)))->
																												BgL_valuez00) =
																											((obj_t) ((
																														(BgL_kwotez00_bglt)
																														COBJECT((
																																(BgL_kwotez00_bglt)
																																BgL_nodez00_2456)))->
																													BgL_valuez00)),
																											BUNSPEC);
																										return ((BgL_nodez00_bglt)
																											BgL_new1134z00_2647);
																									}
																							}
																						else
																							{	/* Cnst/node.scm 108 */
																								bool_t BgL_test2277z00_3781;

																								{	/* Cnst/node.scm 108 */
																									obj_t BgL_tmpz00_3782;

																									BgL_tmpz00_3782 =
																										(((BgL_kwotez00_bglt)
																											COBJECT((
																													(BgL_kwotez00_bglt)
																													BgL_nodez00_2456)))->
																										BgL_valuez00);
																									BgL_test2277z00_3781 =
																										STRUCTP(BgL_tmpz00_3782);
																								}
																								if (BgL_test2277z00_3781)
																									{	/* Cnst/node.scm 109 */
																										obj_t BgL_arg1790z00_2654;
																										obj_t BgL_arg1796z00_2655;

																										BgL_arg1790z00_2654 =
																											(((BgL_kwotez00_bglt)
																												COBJECT((
																														(BgL_kwotez00_bglt)
																														BgL_nodez00_2456)))->
																											BgL_valuez00);
																										BgL_arg1796z00_2655 =
																											(((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt) (
																															(BgL_kwotez00_bglt)
																															BgL_nodez00_2456))))->
																											BgL_locz00);
																										return
																											BGl_cnstzd2alloczd2structz00zzcnst_allocz00
																											(BgL_arg1790z00_2654,
																											BgL_arg1796z00_2655);
																									}
																								else
																									{	/* Cnst/node.scm 111 */
																										obj_t BgL_arg1798z00_2656;

																										BgL_arg1798z00_2656 =
																											BGl_shapez00zztools_shapez00
																											(((obj_t) (
																													(BgL_kwotez00_bglt)
																													BgL_nodez00_2456)));
																										return ((BgL_nodez00_bglt)
																											BGl_internalzd2errorzd2zztools_errorz00
																											(BGl_string2155z00zzcnst_nodez00,
																												BGl_string2156z00zzcnst_nodez00,
																												BgL_arg1798z00_2656));
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
		}

	}



/* &cnst!-patch1292 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2patch1292za2zzcnst_nodez00(obj_t
		BgL_envz00_2457, obj_t BgL_nodez00_2458)
	{
		{	/* Cnst/node.scm 56 */
			{	/* Cnst/node.scm 58 */
				obj_t BgL_arg1573z00_2658;

				BgL_arg1573z00_2658 =
					(((BgL_atomz00_bglt) COBJECT(
							((BgL_atomz00_bglt)
								((BgL_patchz00_bglt) BgL_nodez00_2458))))->BgL_valuez00);
				BGl_cnstz12z12zzcnst_nodez00(((BgL_nodez00_bglt) BgL_arg1573z00_2658));
			}
			return ((BgL_nodez00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_2458));
		}

	}



/* &cnst!-literal1290 */
	BgL_nodez00_bglt BGl_z62cnstz12zd2literal1290za2zzcnst_nodez00(obj_t
		BgL_envz00_2459, obj_t BgL_nodez00_2460)
	{
		{	/* Cnst/node.scm 44 */
			{	/* Cnst/node.scm 47 */
				bool_t BgL_test2278z00_3804;

				{	/* Cnst/node.scm 47 */
					obj_t BgL_tmpz00_3805;

					BgL_tmpz00_3805 =
						(((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt)
									((BgL_literalz00_bglt) BgL_nodez00_2460))))->BgL_valuez00);
					BgL_test2278z00_3804 = KEYWORDP(BgL_tmpz00_3805);
				}
				if (BgL_test2278z00_3804)
					{	/* Cnst/node.scm 47 */
						obj_t BgL_arg1489z00_2660;
						obj_t BgL_arg1493z00_2661;

						BgL_arg1489z00_2660 =
							(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt)
										((BgL_literalz00_bglt) BgL_nodez00_2460))))->BgL_valuez00);
						BgL_arg1493z00_2661 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_literalz00_bglt) BgL_nodez00_2460))))->BgL_locz00);
						return
							BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(BgL_arg1489z00_2660,
							BgL_arg1493z00_2661);
					}
				else
					{	/* Cnst/node.scm 48 */
						bool_t BgL_test2279z00_3817;

						{	/* Cnst/node.scm 48 */
							obj_t BgL_tmpz00_3818;

							BgL_tmpz00_3818 =
								(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt)
											((BgL_literalz00_bglt) BgL_nodez00_2460))))->
								BgL_valuez00);
							BgL_test2279z00_3817 = UCS2_STRINGP(BgL_tmpz00_3818);
						}
						if (BgL_test2279z00_3817)
							{	/* Cnst/node.scm 48 */
								obj_t BgL_arg1497z00_2662;
								obj_t BgL_arg1518z00_2663;

								BgL_arg1497z00_2662 =
									(((BgL_atomz00_bglt) COBJECT(
											((BgL_atomz00_bglt)
												((BgL_literalz00_bglt) BgL_nodez00_2460))))->
									BgL_valuez00);
								BgL_arg1518z00_2663 =
									(((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_literalz00_bglt)
													BgL_nodez00_2460))))->BgL_locz00);
								return
									BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00
									(BgL_arg1497z00_2662, BgL_arg1518z00_2663);
							}
						else
							{	/* Cnst/node.scm 49 */
								bool_t BgL_test2280z00_3830;

								{	/* Cnst/node.scm 49 */
									obj_t BgL_tmpz00_3831;

									BgL_tmpz00_3831 =
										(((BgL_atomz00_bglt) COBJECT(
												((BgL_atomz00_bglt)
													((BgL_literalz00_bglt) BgL_nodez00_2460))))->
										BgL_valuez00);
									BgL_test2280z00_3830 = STRINGP(BgL_tmpz00_3831);
								}
								if (BgL_test2280z00_3830)
									{	/* Cnst/node.scm 49 */
										obj_t BgL_arg1528z00_2664;
										obj_t BgL_arg1536z00_2665;

										BgL_arg1528z00_2664 =
											(((BgL_atomz00_bglt) COBJECT(
													((BgL_atomz00_bglt)
														((BgL_literalz00_bglt) BgL_nodez00_2460))))->
											BgL_valuez00);
										BgL_arg1536z00_2665 =
											(((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_literalz00_bglt)
															BgL_nodez00_2460))))->BgL_locz00);
										return
											BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
											(BgL_arg1528z00_2664, BgL_arg1536z00_2665);
									}
								else
									{	/* Cnst/node.scm 50 */
										bool_t BgL_test2281z00_3843;

										{	/* Cnst/node.scm 50 */
											obj_t BgL_tmpz00_3844;

											BgL_tmpz00_3844 =
												(((BgL_atomz00_bglt) COBJECT(
														((BgL_atomz00_bglt)
															((BgL_literalz00_bglt) BgL_nodez00_2460))))->
												BgL_valuez00);
											BgL_test2281z00_3843 = BIGNUMP(BgL_tmpz00_3844);
										}
										if (BgL_test2281z00_3843)
											{	/* Cnst/node.scm 50 */
												obj_t BgL__ortest_1127z00_2666;

												{	/* Cnst/node.scm 50 */
													obj_t BgL_arg1540z00_2667;
													obj_t BgL_arg1552z00_2668;

													BgL_arg1540z00_2667 =
														(((BgL_atomz00_bglt) COBJECT(
																((BgL_atomz00_bglt)
																	((BgL_literalz00_bglt) BgL_nodez00_2460))))->
														BgL_valuez00);
													BgL_arg1552z00_2668 =
														(((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_literalz00_bglt)
																		BgL_nodez00_2460))))->BgL_locz00);
													BgL__ortest_1127z00_2666 =
														BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00
														(BgL_arg1540z00_2667, BgL_arg1552z00_2668);
												}
												if (CBOOL(BgL__ortest_1127z00_2666))
													{	/* Cnst/node.scm 50 */
														return
															((BgL_nodez00_bglt) BgL__ortest_1127z00_2666);
													}
												else
													{	/* Cnst/node.scm 50 */
														return
															((BgL_nodez00_bglt)
															((BgL_literalz00_bglt) BgL_nodez00_2460));
													}
											}
										else
											{	/* Cnst/node.scm 50 */
												return
													((BgL_nodez00_bglt)
													((BgL_literalz00_bglt) BgL_nodez00_2460));
											}
									}
							}
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_nodez00()
	{
		{	/* Cnst/node.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 398482),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string2157z00zzcnst_nodez00));
		}

	}

#ifdef __cplusplus
}
#endif
