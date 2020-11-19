/*===========================================================================*/
/*   (Effect/cgraph.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/cgraph.scm) */
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

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2libraryz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t
		BGl_z62globalzf2fromzd2jvmzd2typezd2namez42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2aliasz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzf2fromzd2modulez42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t
		BGl_z62callzd2graphz12zd2setzd2exzd2i1345z70zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzf2fromzd2accessz42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2occurrencez42zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t BGl_z62callzd2graphz12zd2conditio1335z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62callzd2graphz12zd2makezd2box1349za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62callzd2graphz12zd2boxzd2setz121353zb0zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2evalzf3zd2setz12z13zzeffect_cgraphz00
		(BgL_globalz00_bglt, bool_t);
	static BgL_typez00_bglt
		BGl_z62globalzf2fromzd2typez42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2fromz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t
		BGl_z62globalzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2varzf2allz42zzeffect_cgraphz00(obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62globalzf2fromzd2initz42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2importz42zzeffect_cgraphz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t
		BGl_z62globalzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzf2fromzd2occurrencewz42zzeffect_cgraphz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t
		BGl_z62callzd2graphz12zd2letzd2var1343za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl_z62callzd2graphz12zd2switch1339z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62globalzf2fromzd2srczd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62savezd2callz12zd2globalzf2fr1360z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00
		(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62globalzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00(obj_t,
		obj_t);
	static BgL_valuez00_bglt
		BGl_z62localzf2fromzd2valuez42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2userzf3zb1zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2srczd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzf2fromzd2occurrencewz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_cgraphz00();
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2srcz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t
		BGl_z62globalzf2fromzd2evalzf3zd2setz12z71zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	static obj_t BGl_z62callzd2graphz12zd2app1322z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2fromzd2occurrencez20zzeffect_cgraphz00(BgL_localz00_bglt);
	static obj_t
		BGl_z62globalzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2importzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_globalzf2fromzd2valuez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2fromzd2userzf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2modulez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2fromzd2keyz20zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2namez20zzeffect_cgraphz00(BgL_localz00_bglt);
	static obj_t BGl_z62localzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00(BgL_localz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2importz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t BGl_z62localzf2fromzd2occurrencez42zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00
		(BgL_localz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00
		(BgL_localz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2idz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31541ze3ze5zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2pragmazd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static BgL_localz00_bglt
		BGl_z62localzf2fromzd2nilz42zzeffect_cgraphz00(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2accessz20zzeffect_cgraphz00(BgL_localz00_bglt);
	static obj_t
		BGl_z62localzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzf2fromzd2evalzf3zb1zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2fromzd2libraryzd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2namez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static BgL_globalz00_bglt
		BGl_z62makezd2globalzf2fromz42zzeffect_cgraphz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_savezd2callz12zc0zzeffect_cgraphz00(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_localzf2fromzd2typez20zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzeffect_cgraphz00();
	static obj_t BGl_z62globalzf2fromzd2pragmaz42zzeffect_cgraphz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1443z62zzeffect_cgraphz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzf2fromzf3z01zzeffect_cgraphz00(obj_t);
	static obj_t BGl_z62savezd2callz12za2zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2accessz42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00();
	static obj_t BGl_z62callzd2graphz12zd2cast1330z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1450z62zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2idz20zzeffect_cgraphz00(BgL_localz00_bglt);
	static obj_t BGl_z62localzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t BGl_z62globalzf2fromzd2occurrencewz42zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt, long);
	static BgL_localz00_bglt BGl_z62lambda1463z62zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2callzd2graphz12z70zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2setq1332z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BUNSPEC;
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_globalzf2fromzd2typez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62savezd2callz121354za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2varzf2sidezd2effectz90zzeffect_cgraphz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62lambda1490z62zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1491z62zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2fromz42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2initz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t
		BGl_z62globalzf2fromzd2evaluablezf3zd2setz12z71zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static BgL_localz00_bglt
		BGl_z62makezd2localzf2fromz42zzeffect_cgraphz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2removablez42zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t
		BGl_z62globalzf2fromzd2importzd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2removablez20zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt, long);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62globalzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2appzd2ly1324za2zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_cgraphz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2removablez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2modulezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_localzf2fromzd2valuez20zzeffect_cgraphz00(BgL_localz00_bglt);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2fromzd2userzf3zd3zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t
		BGl_z62globalzf2fromzd2pragmazd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62callzd2graphz12zd2funcall1326z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2jvmzd2typezd2namez20zzeffect_cgraphz00
		(BgL_globalz00_bglt);
	static obj_t
		BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	static obj_t
		BGl_z62callzd2graphz12zd2jumpzd2exzd21347z70zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00();
	static obj_t BGl_toplevelzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl_z62resetzd2effectzd2tablesz12z70zzeffect_cgraphz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2pragmaz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2accessz20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzf2fromzf3z63zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2extern1328z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2fromzd2jvmzd2typezd2namezd2setz12z82zzeffect_cgraphz00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_cgraphz00();
	static obj_t
		BGl_z62globalzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62callzd2graphz12za2zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2removablez42zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t
		BGl_z62callzd2graphz12zd2boxzd2ref1351za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62globalzf2fromzd2fromz42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2sequence1318z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2fromzd2evalzf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2aliaszd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	static bool_t BGl_callzd2graphza2z12z62zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2keyz42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf2fromzf3z01zzeffect_cgraphz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62localzf2fromzd2namezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62savezd2callz12zd2localzf2fro1364z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzf2fromzd2srcz42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2jvmzd2typezd2namezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62savezd2callz12zd2local1362z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2idz42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2aliasz42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt,
		obj_t);
	static obj_t BGl_z62localzf2fromzd2idz42zzeffect_cgraphz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2fromzd2evaluablezf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_z62localzf2fromzd2namez42zzeffect_cgraphz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00
		(BgL_localz00_bglt, long);
	static obj_t BGl_z62callzd2graphz121315za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BUNSPEC;
	static obj_t
		BGl_z62globalzf2fromzd2modulezd2setz12z82zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzf2fromzf3z63zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2aliaszd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	static obj_t
		BGl_z62localzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2namezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31462ze3ze5zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2evaluablezf3zd2setz12z13zzeffect_cgraphz00
		(BgL_globalz00_bglt, bool_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		BgL_valuez00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DEF obj_t BGl_localzf2fromzf2zzeffect_cgraphz00 = BUNSPEC;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00();
	static obj_t BGl_z62localzf2fromzd2typezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62localzf2fromzd2typez42zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzf2fromzd2occurrencez20zzeffect_cgraphz00(BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00();
	static obj_t BGl_z62localzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2initzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1529z62zzeffect_cgraphz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62globalzf2fromzd2libraryz42zzeffect_cgraphz00(obj_t,
		obj_t);
	static BgL_globalz00_bglt
		BGl_z62globalzf2fromzd2nilz42zzeffect_cgraphz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt,
		obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1538z62zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t BGl_z62savezd2callz12zd2global1358z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62callzd2graphz12zd2letzd2fun1341za2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_localzf2fromzd2nilz20zzeffect_cgraphz00();
	static obj_t BGl_z62globalzf2fromzd2evaluablezf3zb1zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00
		(BgL_globalz00_bglt, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1542z62zzeffect_cgraphz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00();
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00
		(BgL_globalz00_bglt, bool_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2fromzd2occurrencewz20zzeffect_cgraphz00(BgL_localz00_bglt);
	static BgL_valuez00_bglt
		BGl_z62globalzf2fromzd2valuez42zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2userzf3zb1zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2sync1320z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2initzd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62callzd2graphz12zd2fail1337z70zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62globalzf2fromzd2namez42zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2fromzd2fromz20zzeffect_cgraphz00(BgL_localz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00 = BUNSPEC;
	static obj_t BGl_z62lambda1574z62zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1575z62zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzf2fromz20zzeffect_cgraphz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long, bool_t, long, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2fromzd2libraryzd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62globalzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzf2fromzd2typezd2setz12z82zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2evaluablezf3zd2setz12zd2envzc1zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1954z00,
		BGl_z62globalzf2fromzd2evaluablezf3zd2setz12z71zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762makeza7d2localza71955za7,
		BGl_z62makezd2localzf2fromz42zzeffect_cgraphz00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2accesszd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza71956za7,
		BGl_z62localzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzf2fromzf3zd2envzd3zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1957z00,
		BGl_z62globalzf2fromzf3z63zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2importzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1958z00,
		BGl_z62globalzf2fromzd2importzd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2occurrencewzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza71959za7,
		BGl_z62localzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2occurrencewzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza71960za7,
		BGl_z62localzf2fromzd2occurrencewz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2modulezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1961z00,
		BGl_z62globalzf2fromzd2modulezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2typezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1962z00,
		BGl_z62globalzf2fromzd2typez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1963z00,
		BGl_z62globalzf2fromzd2nilz42zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2removablezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1964z00,
		BGl_z62globalzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2fastzd2alphazd2setz12zd2envze0zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1965z00,
		BGl_z62globalzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2occurrencezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1966z00,
		BGl_z62globalzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2fastzd2alphazd2setz12zd2envze0zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza71967za7,
		BGl_z62localzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2occurrencezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza71968za7,
		BGl_z62localzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2modulezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1969z00,
		BGl_z62globalzf2fromzd2modulez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762makeza7d2global1970z00,
		BGl_z62makezd2globalzf2fromz42zzeffect_cgraphz00, 0L, BUNSPEC, 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2aliaszd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1971z00,
		BGl_z62globalzf2fromzd2aliasz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1491za7621972z00, BGl_z62lambda1491z62zzeffect_cgraphz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1490za7621973z00, BGl_z62lambda1490z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1463za7621974z00, BGl_z62lambda1463z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzeffect_cgraphz00,
		BgL_bgl_za762za7c3za704anonymo1975za7,
		BGl_z62zc3z04anonymousza31462ze3ze5zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1450za7621976z00, BGl_z62lambda1450z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1443za7621977z00, BGl_z62lambda1443z62zzeffect_cgraphz00,
		0L, BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1575za7621978z00, BGl_z62lambda1575z62zzeffect_cgraphz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1574za7621979z00, BGl_z62lambda1574z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1542za7621980z00, BGl_z62lambda1542z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1914z00zzeffect_cgraphz00,
		BgL_bgl_za762za7c3za704anonymo1981za7,
		BGl_z62zc3z04anonymousza31541ze3ze5zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1538za7621982z00, BGl_z62lambda1538z62zzeffect_cgraphz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1916z00zzeffect_cgraphz00,
		BgL_bgl_za762lambda1529za7621983z00, BGl_z62lambda1529z62zzeffect_cgraphz00,
		0L, BUNSPEC, 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1918z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71984za7,
		BGl_z62callzd2graphz121315za2zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1920z00zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza711985za7,
		BGl_z62savezd2callz121354za2zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1923z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71986za7,
		BGl_z62callzd2graphz12zd2sequence1318z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2typezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1987z00,
		BGl_z62globalzf2fromzd2typezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1925z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71988za7,
		BGl_z62callzd2graphz12zd2sync1320z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1926z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71989za7,
		BGl_z62callzd2graphz12zd2app1322z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1927z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71990za7,
		BGl_z62callzd2graphz12zd2appzd2ly1324za2zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1928z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71991za7,
		BGl_z62callzd2graphz12zd2funcall1326z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1929z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71992za7,
		BGl_z62callzd2graphz12zd2extern1328z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2srczd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from1993z00,
		BGl_z62globalzf2fromzd2srcz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1930z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71994za7,
		BGl_z62callzd2graphz12zd2cast1330z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1931z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71995za7,
		BGl_z62callzd2graphz12zd2setq1332z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1932z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71996za7,
		BGl_z62callzd2graphz12zd2conditio1335z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1933z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71997za7,
		BGl_z62callzd2graphz12zd2fail1337z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1934z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71998za7,
		BGl_z62callzd2graphz12zd2switch1339z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1935z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza71999za7,
		BGl_z62callzd2graphz12zd2letzd2fun1341za2zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1936z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72000za7,
		BGl_z62callzd2graphz12zd2letzd2var1343za2zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1937z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72001za7,
		BGl_z62callzd2graphz12zd2setzd2exzd2i1345z70zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1938z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72002za7,
		BGl_z62callzd2graphz12zd2jumpzd2exzd21347z70zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1939z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72003za7,
		BGl_z62callzd2graphz12zd2makezd2box1349za2zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2initzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2004z00,
		BGl_z62globalzf2fromzd2initz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72005za7,
		BGl_z62localzf2fromzd2nilz42zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1940z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72006za7,
		BGl_z62callzd2graphz12zd2boxzd2ref1351za2zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1941z00zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72007za7,
		BGl_z62callzd2graphz12zd2boxzd2setz121353zb0zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1942z00zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza712008za7,
		BGl_z62savezd2callz12zd2global1358z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1944z00zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza712009za7,
		BGl_z62savezd2callz12zd2globalzf2fr1360z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1945z00zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza712010za7,
		BGl_z62savezd2callz12zd2local1362z70zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1946z00zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza712011za7,
		BGl_z62savezd2callz12zd2localzf2fro1364z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2accesszd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2012z00,
		BGl_z62globalzf2fromzd2accessz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2varzf2allzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762getza7d2varza7f2a2013za7,
		BGl_z62getzd2varzf2allz42zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2initzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2014z00,
		BGl_z62globalzf2fromzd2initzd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2evaluablezf3zd2envz01zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2015z00,
		BGl_z62globalzf2fromzd2evaluablezf3zb1zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2varzf2sidezd2effectzd2envz20zzeffect_cgraphz00,
		BgL_bgl_za762getza7d2varza7f2s2016za7,
		BGl_z62getzd2varzf2sidezd2effectz90zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2fromzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2017z00,
		BGl_z62globalzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72018za7,
		BGl_z62localzf2fromzd2fromz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2idzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72019za7,
		BGl_z62localzf2fromzd2idz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
		BgL_bgl_za762saveza7d2callza712020za7,
		BGl_z62savezd2callz12za2zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2aliaszd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2021z00,
		BGl_z62globalzf2fromzd2aliaszd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00,
		BgL_bgl_za762resetza7d2effec2022z00,
		BGl_z62resetzd2effectzd2tablesz12z70zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2libraryzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2023z00,
		BGl_z62globalzf2fromzd2libraryzd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2removablezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72024za7,
		BGl_z62localzf2fromzd2removablez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2jvmzd2typezd2namezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2025z00,
		BGl_z62globalzf2fromzd2jvmzd2typezd2namezd2setz12z82zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2namezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72026za7,
		BGl_z62localzf2fromzd2namez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2importzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2027z00,
		BGl_z62globalzf2fromzd2importz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2callzd2graphz12zd2envzc0zzeffect_cgraphz00,
		BgL_bgl_za762funza7d2callza7d22028za7,
		BGl_z62funzd2callzd2graphz12z70zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2valuezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72029za7,
		BGl_z62localzf2fromzd2valuez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2namezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72030za7,
		BGl_z62localzf2fromzd2namezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2fastzd2alphazd2envz20zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72031za7,
		BGl_z62localzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2valuezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2032z00,
		BGl_z62globalzf2fromzd2valuez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2fastzd2alphazd2envz20zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2033z00,
		BGl_z62globalzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2userzf3zd2envz01zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72034za7,
		BGl_z62localzf2fromzd2userzf3zb1zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2evalzf3zd2envz01zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2035z00,
		BGl_z62globalzf2fromzd2evalzf3zb1zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2accesszd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72036za7,
		BGl_z62localzf2fromzd2accessz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2pragmazd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2037z00,
		BGl_z62globalzf2fromzd2pragmaz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2evalzf3zd2setz12zd2envzc1zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2038z00,
		BGl_z62globalzf2fromzd2evalzf3zd2setz12z71zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2accesszd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2039z00,
		BGl_z62globalzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2typezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72040za7,
		BGl_z62localzf2fromzd2typez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2userzf3zd2envz01zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2041z00,
		BGl_z62globalzf2fromzd2userzf3zb1zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2idzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2042z00,
		BGl_z62globalzf2fromzd2idz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2occurrencewzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2043z00,
		BGl_z62globalzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2occurrencewzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2044z00,
		BGl_z62globalzf2fromzd2occurrencewz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1917z00zzeffect_cgraphz00,
		BgL_bgl_string1917za700za7za7e2045za7, "", 0);
	      DEFINE_STRING(BGl_string1919z00zzeffect_cgraphz00,
		BgL_bgl_string1919za700za7za7e2046za7, "call-graph!1315", 15);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
		BgL_bgl_za762callza7d2graphza72047za7,
		BGl_z62callzd2graphz12za2zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1921z00zzeffect_cgraphz00,
		BgL_bgl_string1921za700za7za7e2048za7, "save-call!1354", 14);
	      DEFINE_STRING(BGl_string1922z00zzeffect_cgraphz00,
		BgL_bgl_string1922za700za7za7e2049za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1924z00zzeffect_cgraphz00,
		BgL_bgl_string1924za700za7za7e2050za7, "call-graph!", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2jvmzd2typezd2namezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2051z00,
		BGl_z62globalzf2fromzd2jvmzd2typezd2namez42zzeffect_cgraphz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2removablezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72052za7,
		BGl_z62localzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string1943z00zzeffect_cgraphz00,
		BgL_bgl_string1943za700za7za7e2053za7, "save-call!", 10);
	      DEFINE_STRING(BGl_string1947z00zzeffect_cgraphz00,
		BgL_bgl_string1947za700za7za7e2054za7, "effect_cgraph", 13);
	      DEFINE_STRING(BGl_string1948z00zzeffect_cgraphz00,
		BgL_bgl_string1948za700za7za7e2055za7,
		"import done save-call!1354 _ global/from effect_cgraph local/from obj from nothing ",
		83);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2valuezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72056za7,
		BGl_z62localzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2typezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72057za7,
		BGl_z62localzf2fromzd2typezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2valuezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2058z00,
		BGl_z62globalzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2srczd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2059z00,
		BGl_z62globalzf2fromzd2srczd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2060z00,
		BGl_z62globalzf2fromzd2fromz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2libraryzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2061z00,
		BGl_z62globalzf2fromzd2libraryz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2removablezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2062z00,
		BGl_z62globalzf2fromzd2removablez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2fromzd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72063za7,
		BGl_z62localzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2userzf3zd2setz12zd2envzc1zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72064za7,
		BGl_z62localzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2namezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2065z00,
		BGl_z62globalzf2fromzd2namez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2occurrencezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72066za7,
		BGl_z62localzf2fromzd2occurrencez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2userzf3zd2setz12zd2envzc1zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2067z00,
		BGl_z62globalzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzf2fromzf3zd2envzd3zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72068za7,
		BGl_z62localzf2fromzf3z63zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2occurrencezd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2069z00,
		BGl_z62globalzf2fromzd2occurrencez42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2pragmazd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2070z00,
		BGl_z62globalzf2fromzd2pragmazd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2keyzd2envzf2zzeffect_cgraphz00,
		BgL_bgl_za762localza7f2fromza72071za7,
		BGl_z62localzf2fromzd2keyz42zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2namezd2setz12zd2envz32zzeffect_cgraphz00,
		BgL_bgl_za762globalza7f2from2072z00,
		BGl_z62globalzf2fromzd2namezd2setz12z82zzeffect_cgraphz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2varzf2allza2zf2zzeffect_cgraphz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzeffect_cgraphz00));
		     ADD_ROOT((void
				*) (&BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00));
		     ADD_ROOT((void *) (&BGl_localzf2fromzf2zzeffect_cgraphz00));
		     ADD_ROOT((void *) (&BGl_globalzf2fromzf2zzeffect_cgraphz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long
		BgL_checksumz00_2857, char *BgL_fromz00_2858)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_cgraphz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_cgraphz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzeffect_cgraphz00();
					BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00();
					BGl_cnstzd2initzd2zzeffect_cgraphz00();
					BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00();
					BGl_objectzd2initzd2zzeffect_cgraphz00();
					BGl_genericzd2initzd2zzeffect_cgraphz00();
					BGl_methodzd2initzd2zzeffect_cgraphz00();
					return BGl_toplevelzd2initzd2zzeffect_cgraphz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"effect_cgraph");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			{	/* Effect/cgraph.scm 15 */
				obj_t BgL_cportz00_2674;

				{	/* Effect/cgraph.scm 15 */
					obj_t BgL_stringz00_2682;

					BgL_stringz00_2682 = BGl_string1948z00zzeffect_cgraphz00;
					{	/* Effect/cgraph.scm 15 */
						obj_t BgL_startz00_2683;

						BgL_startz00_2683 = BINT(((long) 0));
						{	/* Effect/cgraph.scm 15 */
							obj_t BgL_endz00_2684;

							BgL_endz00_2684 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2682)));
							{	/* Effect/cgraph.scm 15 */

								BgL_cportz00_2674 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2682, BgL_startz00_2683, BgL_endz00_2684);
				}}}}
				{
					long BgL_iz00_2675;

					BgL_iz00_2675 = ((long) 9);
				BgL_loopz00_2676:
					if ((BgL_iz00_2675 == ((long) -1)))
						{	/* Effect/cgraph.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/cgraph.scm 15 */
							{	/* Effect/cgraph.scm 15 */
								obj_t BgL_arg1951z00_2678;

								{	/* Effect/cgraph.scm 15 */

									{	/* Effect/cgraph.scm 15 */
										obj_t BgL_locationz00_2680;

										BgL_locationz00_2680 = BBOOL(((bool_t) 0));
										{	/* Effect/cgraph.scm 15 */

											BgL_arg1951z00_2678 =
												BGl_readz00zz__readerz00(BgL_cportz00_2674,
												BgL_locationz00_2680);
										}
									}
								}
								{	/* Effect/cgraph.scm 15 */
									int BgL_tmpz00_2888;

									BgL_tmpz00_2888 = (int) (BgL_iz00_2675);
									CNST_TABLE_SET(BgL_tmpz00_2888, BgL_arg1951z00_2678);
							}}
							{	/* Effect/cgraph.scm 15 */
								int BgL_auxz00_2681;

								BgL_auxz00_2681 = (int) ((BgL_iz00_2675 - ((long) 1)));
								{
									long BgL_iz00_2893;

									BgL_iz00_2893 = (long) (BgL_auxz00_2681);
									BgL_iz00_2675 = BgL_iz00_2893;
									goto BgL_loopz00_2676;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BNIL;
			return (BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BNIL, BUNSPEC);
		}

	}



/* make-local/from */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzf2fromz20zzeffect_cgraphz00(obj_t BgL_id1163z00_3,
		obj_t BgL_name1164z00_4, BgL_typez00_bglt BgL_type1165z00_5,
		BgL_valuez00_bglt BgL_value1166z00_6, obj_t BgL_access1167z00_7,
		obj_t BgL_fastzd2alpha1168zd2_8, obj_t BgL_removable1169z00_9,
		long BgL_occurrence1170z00_10, long BgL_occurrencew1171z00_11,
		bool_t BgL_userzf31172zf3_12, long BgL_key1173z00_13,
		obj_t BgL_from1174z00_14)
	{
		{	/* Effect/cgraph.sch 91 */
			{	/* Effect/cgraph.sch 91 */
				BgL_localz00_bglt BgL_new1153z00_2687;

				{	/* Effect/cgraph.sch 91 */
					BgL_localz00_bglt BgL_tmp1151z00_2688;
					BgL_localzf2fromzf2_bglt BgL_wide1152z00_2689;

					{
						BgL_localz00_bglt BgL_auxz00_2896;

						{	/* Effect/cgraph.sch 91 */
							BgL_localz00_bglt BgL_new1150z00_2690;

							BgL_new1150z00_2690 =
								((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							{	/* Effect/cgraph.sch 91 */
								long BgL_arg1372z00_2691;

								{	/* Effect/cgraph.sch 91 */
									long BgL_res1857z00_2692;

									BgL_res1857z00_2692 =
										BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
									BgL_arg1372z00_2691 = BgL_res1857z00_2692;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1150z00_2690),
									BgL_arg1372z00_2691);
							}
							{	/* Effect/cgraph.sch 91 */
								BgL_objectz00_bglt BgL_tmpz00_2901;

								BgL_tmpz00_2901 = ((BgL_objectz00_bglt) BgL_new1150z00_2690);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2901, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1150z00_2690);
							BgL_auxz00_2896 = BgL_new1150z00_2690;
						}
						BgL_tmp1151z00_2688 = ((BgL_localz00_bglt) BgL_auxz00_2896);
					}
					BgL_wide1152z00_2689 =
						((BgL_localzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzf2fromzf2_bgl))));
					{	/* Effect/cgraph.sch 91 */
						obj_t BgL_auxz00_2909;
						BgL_objectz00_bglt BgL_tmpz00_2907;

						BgL_auxz00_2909 = ((obj_t) BgL_wide1152z00_2689);
						BgL_tmpz00_2907 = ((BgL_objectz00_bglt) BgL_tmp1151z00_2688);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2907, BgL_auxz00_2909);
					}
					((BgL_objectz00_bglt) BgL_tmp1151z00_2688);
					{	/* Effect/cgraph.sch 91 */
						long BgL_arg1371z00_2693;

						{	/* Effect/cgraph.sch 91 */
							long BgL_res1858z00_2694;

							BgL_res1858z00_2694 =
								BGL_CLASS_INDEX(BGl_localzf2fromzf2zzeffect_cgraphz00);
							BgL_arg1371z00_2693 = BgL_res1858z00_2694;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1151z00_2688), BgL_arg1371z00_2693);
					}
					BgL_new1153z00_2687 = ((BgL_localz00_bglt) BgL_tmp1151z00_2688);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1153z00_2687)))->BgL_idz00) =
					((obj_t) BgL_id1163z00_3), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_namez00) =
					((obj_t) BgL_name1164z00_4), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1165z00_5), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1166z00_6), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_accessz00) =
					((obj_t) BgL_access1167z00_7), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1168zd2_8), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_removablez00) =
					((obj_t) BgL_removable1169z00_9), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_occurrencez00) =
					((long) BgL_occurrence1170z00_10), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1171z00_11), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1153z00_2687)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31172zf3_12), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
									BgL_new1153z00_2687)))->BgL_keyz00) =
					((long) BgL_key1173z00_13), BUNSPEC);
				{
					BgL_localzf2fromzf2_bglt BgL_auxz00_2939;

					{
						obj_t BgL_auxz00_2940;

						{	/* Effect/cgraph.sch 91 */
							BgL_objectz00_bglt BgL_tmpz00_2941;

							BgL_tmpz00_2941 = ((BgL_objectz00_bglt) BgL_new1153z00_2687);
							BgL_auxz00_2940 = BGL_OBJECT_WIDENING(BgL_tmpz00_2941);
						}
						BgL_auxz00_2939 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_2940);
					}
					((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_2939))->
							BgL_fromz00) = ((obj_t) BgL_from1174z00_14), BUNSPEC);
				}
				return BgL_new1153z00_2687;
			}
		}

	}



/* &make-local/from */
	BgL_localz00_bglt BGl_z62makezd2localzf2fromz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2301, obj_t BgL_id1163z00_2302, obj_t BgL_name1164z00_2303,
		obj_t BgL_type1165z00_2304, obj_t BgL_value1166z00_2305,
		obj_t BgL_access1167z00_2306, obj_t BgL_fastzd2alpha1168zd2_2307,
		obj_t BgL_removable1169z00_2308, obj_t BgL_occurrence1170z00_2309,
		obj_t BgL_occurrencew1171z00_2310, obj_t BgL_userzf31172zf3_2311,
		obj_t BgL_key1173z00_2312, obj_t BgL_from1174z00_2313)
	{
		{	/* Effect/cgraph.sch 91 */
			return
				BGl_makezd2localzf2fromz20zzeffect_cgraphz00(BgL_id1163z00_2302,
				BgL_name1164z00_2303, ((BgL_typez00_bglt) BgL_type1165z00_2304),
				((BgL_valuez00_bglt) BgL_value1166z00_2305), BgL_access1167z00_2306,
				BgL_fastzd2alpha1168zd2_2307, BgL_removable1169z00_2308,
				(long) CINT(BgL_occurrence1170z00_2309),
				(long) CINT(BgL_occurrencew1171z00_2310),
				CBOOL(BgL_userzf31172zf3_2311), (long) CINT(BgL_key1173z00_2312),
				BgL_from1174z00_2313);
		}

	}



/* local/from? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2fromzf3z01zzeffect_cgraphz00(obj_t
		BgL_objz00_15)
	{
		{	/* Effect/cgraph.sch 92 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_localzf2fromzf2zzeffect_cgraphz00);
		}

	}



/* &local/from? */
	obj_t BGl_z62localzf2fromzf3z63zzeffect_cgraphz00(obj_t BgL_envz00_2314,
		obj_t BgL_objz00_2315)
	{
		{	/* Effect/cgraph.sch 92 */
			return BBOOL(BGl_localzf2fromzf3z01zzeffect_cgraphz00(BgL_objz00_2315));
		}

	}



/* local/from-nil */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_localzf2fromzd2nilz20zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.sch 93 */
			{	/* Effect/cgraph.sch 93 */
				obj_t BgL_classz00_2059;

				BgL_classz00_2059 = BGl_localzf2fromzf2zzeffect_cgraphz00;
				{	/* Effect/cgraph.sch 93 */
					obj_t BgL__ortest_1106z00_2060;

					BgL__ortest_1106z00_2060 = BGL_CLASS_NIL(BgL_classz00_2059);
					if (CBOOL(BgL__ortest_1106z00_2060))
						{	/* Effect/cgraph.sch 93 */
							return ((BgL_localz00_bglt) BgL__ortest_1106z00_2060);
						}
					else
						{	/* Effect/cgraph.sch 93 */
							return
								((BgL_localz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2059));
						}
				}
			}
		}

	}



/* &local/from-nil */
	BgL_localz00_bglt BGl_z62localzf2fromzd2nilz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2316)
	{
		{	/* Effect/cgraph.sch 93 */
			return BGl_localzf2fromzd2nilz20zzeffect_cgraphz00();
		}

	}



/* local/from-from */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2fromz20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_16)
	{
		{	/* Effect/cgraph.sch 94 */
			{
				BgL_localzf2fromzf2_bglt BgL_auxz00_2963;

				{
					obj_t BgL_auxz00_2964;

					{	/* Effect/cgraph.sch 94 */
						BgL_objectz00_bglt BgL_tmpz00_2965;

						BgL_tmpz00_2965 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_2964 = BGL_OBJECT_WIDENING(BgL_tmpz00_2965);
					}
					BgL_auxz00_2963 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_2964);
				}
				return
					(((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_2963))->BgL_fromz00);
			}
		}

	}



/* &local/from-from */
	obj_t BGl_z62localzf2fromzd2fromz42zzeffect_cgraphz00(obj_t BgL_envz00_2317,
		obj_t BgL_oz00_2318)
	{
		{	/* Effect/cgraph.sch 94 */
			return
				BGl_localzf2fromzd2fromz20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2318));
		}

	}



/* local/from-from-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* Effect/cgraph.sch 95 */
			{
				BgL_localzf2fromzf2_bglt BgL_auxz00_2972;

				{
					obj_t BgL_auxz00_2973;

					{	/* Effect/cgraph.sch 95 */
						BgL_objectz00_bglt BgL_tmpz00_2974;

						BgL_tmpz00_2974 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_2973 = BGL_OBJECT_WIDENING(BgL_tmpz00_2974);
					}
					BgL_auxz00_2972 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_2973);
				}
				return
					((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_2972))->
						BgL_fromz00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &local/from-from-set! */
	obj_t BGl_z62localzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2319, obj_t BgL_oz00_2320, obj_t BgL_vz00_2321)
	{
		{	/* Effect/cgraph.sch 95 */
			return
				BGl_localzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2320), BgL_vz00_2321);
		}

	}



/* local/from-key */
	BGL_EXPORTED_DEF long
		BGl_localzf2fromzd2keyz20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_19)
	{
		{	/* Effect/cgraph.sch 96 */
			return
				(((BgL_localz00_bglt) COBJECT(
						((BgL_localz00_bglt) BgL_oz00_19)))->BgL_keyz00);
		}

	}



/* &local/from-key */
	obj_t BGl_z62localzf2fromzd2keyz42zzeffect_cgraphz00(obj_t BgL_envz00_2322,
		obj_t BgL_oz00_2323)
	{
		{	/* Effect/cgraph.sch 96 */
			return
				BINT(BGl_localzf2fromzd2keyz20zzeffect_cgraphz00(
					((BgL_localz00_bglt) BgL_oz00_2323)));
		}

	}



/* local/from-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2fromzd2userzf3zd3zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_22)
	{
		{	/* Effect/cgraph.sch 98 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_22)))->BgL_userzf3zf3);
		}

	}



/* &local/from-user? */
	obj_t BGl_z62localzf2fromzd2userzf3zb1zzeffect_cgraphz00(obj_t
		BgL_envz00_2324, obj_t BgL_oz00_2325)
	{
		{	/* Effect/cgraph.sch 98 */
			return
				BBOOL(BGl_localzf2fromzd2userzf3zd3zzeffect_cgraphz00(
					((BgL_localz00_bglt) BgL_oz00_2325)));
		}

	}



/* local/from-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_23, bool_t BgL_vz00_24)
	{
		{	/* Effect/cgraph.sch 99 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_23)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &local/from-user?-set! */
	obj_t BGl_z62localzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00(obj_t
		BgL_envz00_2326, obj_t BgL_oz00_2327, obj_t BgL_vz00_2328)
	{
		{	/* Effect/cgraph.sch 99 */
			return
				BGl_localzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2327), CBOOL(BgL_vz00_2328));
		}

	}



/* local/from-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_localzf2fromzd2occurrencewz20zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_25)
	{
		{	/* Effect/cgraph.sch 100 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_25)))->BgL_occurrencewz00);
		}

	}



/* &local/from-occurrencew */
	obj_t BGl_z62localzf2fromzd2occurrencewz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2329, obj_t BgL_oz00_2330)
	{
		{	/* Effect/cgraph.sch 100 */
			return
				BINT(BGl_localzf2fromzd2occurrencewz20zzeffect_cgraphz00(
					((BgL_localz00_bglt) BgL_oz00_2330)));
		}

	}



/* local/from-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00
		(BgL_localz00_bglt BgL_oz00_26, long BgL_vz00_27)
	{
		{	/* Effect/cgraph.sch 101 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_26)))->BgL_occurrencewz00) =
				((long) BgL_vz00_27), BUNSPEC);
		}

	}



/* &local/from-occurrencew-set! */
	obj_t BGl_z62localzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2331, obj_t BgL_oz00_2332, obj_t BgL_vz00_2333)
	{
		{	/* Effect/cgraph.sch 101 */
			return
				BGl_localzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2332), (long) CINT(BgL_vz00_2333));
		}

	}



/* local/from-occurrence */
	BGL_EXPORTED_DEF long
		BGl_localzf2fromzd2occurrencez20zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_28)
	{
		{	/* Effect/cgraph.sch 102 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_28)))->BgL_occurrencez00);
		}

	}



/* &local/from-occurrence */
	obj_t BGl_z62localzf2fromzd2occurrencez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2334, obj_t BgL_oz00_2335)
	{
		{	/* Effect/cgraph.sch 102 */
			return
				BINT(BGl_localzf2fromzd2occurrencez20zzeffect_cgraphz00(
					((BgL_localz00_bglt) BgL_oz00_2335)));
		}

	}



/* local/from-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00
		(BgL_localz00_bglt BgL_oz00_29, long BgL_vz00_30)
	{
		{	/* Effect/cgraph.sch 103 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_29)))->BgL_occurrencez00) =
				((long) BgL_vz00_30), BUNSPEC);
		}

	}



/* &local/from-occurrence-set! */
	obj_t BGl_z62localzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2336, obj_t BgL_oz00_2337, obj_t BgL_vz00_2338)
	{
		{	/* Effect/cgraph.sch 103 */
			return
				BGl_localzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2337), (long) CINT(BgL_vz00_2338));
		}

	}



/* local/from-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2removablez20zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_31)
	{
		{	/* Effect/cgraph.sch 104 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_31)))->BgL_removablez00);
		}

	}



/* &local/from-removable */
	obj_t BGl_z62localzf2fromzd2removablez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2339, obj_t BgL_oz00_2340)
	{
		{	/* Effect/cgraph.sch 104 */
			return
				BGl_localzf2fromzd2removablez20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2340));
		}

	}



/* local/from-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* Effect/cgraph.sch 105 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_32)))->BgL_removablez00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &local/from-removable-set! */
	obj_t BGl_z62localzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2341, obj_t BgL_oz00_2342, obj_t BgL_vz00_2343)
	{
		{	/* Effect/cgraph.sch 105 */
			return
				BGl_localzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2342), BgL_vz00_2343);
		}

	}



/* local/from-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_34)
	{
		{	/* Effect/cgraph.sch 106 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_34)))->BgL_fastzd2alphazd2);
		}

	}



/* &local/from-fast-alpha */
	obj_t BGl_z62localzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00(obj_t
		BgL_envz00_2344, obj_t BgL_oz00_2345)
	{
		{	/* Effect/cgraph.sch 106 */
			return
				BGl_localzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2345));
		}

	}



/* local/from-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00
		(BgL_localz00_bglt BgL_oz00_35, obj_t BgL_vz00_36)
	{
		{	/* Effect/cgraph.sch 107 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_35)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &local/from-fast-alpha-set! */
	obj_t BGl_z62localzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00(obj_t
		BgL_envz00_2346, obj_t BgL_oz00_2347, obj_t BgL_vz00_2348)
	{
		{	/* Effect/cgraph.sch 107 */
			return
				BGl_localzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2347), BgL_vz00_2348);
		}

	}



/* local/from-access */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2accessz20zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_37)
	{
		{	/* Effect/cgraph.sch 108 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_37)))->BgL_accessz00);
		}

	}



/* &local/from-access */
	obj_t BGl_z62localzf2fromzd2accessz42zzeffect_cgraphz00(obj_t BgL_envz00_2349,
		obj_t BgL_oz00_2350)
	{
		{	/* Effect/cgraph.sch 108 */
			return
				BGl_localzf2fromzd2accessz20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2350));
		}

	}



/* local/from-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_38, obj_t BgL_vz00_39)
	{
		{	/* Effect/cgraph.sch 109 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_38)))->BgL_accessz00) =
				((obj_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &local/from-access-set! */
	obj_t BGl_z62localzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2351, obj_t BgL_oz00_2352, obj_t BgL_vz00_2353)
	{
		{	/* Effect/cgraph.sch 109 */
			return
				BGl_localzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2352), BgL_vz00_2353);
		}

	}



/* local/from-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_localzf2fromzd2valuez20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_40)
	{
		{	/* Effect/cgraph.sch 110 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_40)))->BgL_valuez00);
		}

	}



/* &local/from-value */
	BgL_valuez00_bglt BGl_z62localzf2fromzd2valuez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2354, obj_t BgL_oz00_2355)
	{
		{	/* Effect/cgraph.sch 110 */
			return
				BGl_localzf2fromzd2valuez20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2355));
		}

	}



/* local/from-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_41, BgL_valuez00_bglt BgL_vz00_42)
	{
		{	/* Effect/cgraph.sch 111 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_41)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_42), BUNSPEC);
		}

	}



/* &local/from-value-set! */
	obj_t BGl_z62localzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2356, obj_t BgL_oz00_2357, obj_t BgL_vz00_2358)
	{
		{	/* Effect/cgraph.sch 111 */
			return
				BGl_localzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2357),
				((BgL_valuez00_bglt) BgL_vz00_2358));
		}

	}



/* local/from-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_localzf2fromzd2typez20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_43)
	{
		{	/* Effect/cgraph.sch 112 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_43)))->BgL_typez00);
		}

	}



/* &local/from-type */
	BgL_typez00_bglt BGl_z62localzf2fromzd2typez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2359, obj_t BgL_oz00_2360)
	{
		{	/* Effect/cgraph.sch 112 */
			return
				BGl_localzf2fromzd2typez20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2360));
		}

	}



/* local/from-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_44, BgL_typez00_bglt BgL_vz00_45)
	{
		{	/* Effect/cgraph.sch 113 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_44)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_45), BUNSPEC);
		}

	}



/* &local/from-type-set! */
	obj_t BGl_z62localzf2fromzd2typezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2361, obj_t BgL_oz00_2362, obj_t BgL_vz00_2363)
	{
		{	/* Effect/cgraph.sch 113 */
			return
				BGl_localzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2362),
				((BgL_typez00_bglt) BgL_vz00_2363));
		}

	}



/* local/from-name */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2namez20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_46)
	{
		{	/* Effect/cgraph.sch 114 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_46)))->BgL_namez00);
		}

	}



/* &local/from-name */
	obj_t BGl_z62localzf2fromzd2namez42zzeffect_cgraphz00(obj_t BgL_envz00_2364,
		obj_t BgL_oz00_2365)
	{
		{	/* Effect/cgraph.sch 114 */
			return
				BGl_localzf2fromzd2namez20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2365));
		}

	}



/* local/from-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(BgL_localz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* Effect/cgraph.sch 115 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_47)))->BgL_namez00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &local/from-name-set! */
	obj_t BGl_z62localzf2fromzd2namezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2366, obj_t BgL_oz00_2367, obj_t BgL_vz00_2368)
	{
		{	/* Effect/cgraph.sch 115 */
			return
				BGl_localzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2367), BgL_vz00_2368);
		}

	}



/* local/from-id */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2fromzd2idz20zzeffect_cgraphz00(BgL_localz00_bglt BgL_oz00_49)
	{
		{	/* Effect/cgraph.sch 116 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_49)))->BgL_idz00);
		}

	}



/* &local/from-id */
	obj_t BGl_z62localzf2fromzd2idz42zzeffect_cgraphz00(obj_t BgL_envz00_2369,
		obj_t BgL_oz00_2370)
	{
		{	/* Effect/cgraph.sch 116 */
			return
				BGl_localzf2fromzd2idz20zzeffect_cgraphz00(
				((BgL_localz00_bglt) BgL_oz00_2370));
		}

	}



/* make-global/from */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t BgL_id1141z00_52,
		obj_t BgL_name1142z00_53, BgL_typez00_bglt BgL_type1143z00_54,
		BgL_valuez00_bglt BgL_value1144z00_55, obj_t BgL_access1145z00_56,
		obj_t BgL_fastzd2alpha1146zd2_57, obj_t BgL_removable1147z00_58,
		long BgL_occurrence1148z00_59, long BgL_occurrencew1149z00_60,
		bool_t BgL_userzf31150zf3_61, obj_t BgL_module1151z00_62,
		obj_t BgL_import1152z00_63, bool_t BgL_evaluablezf31153zf3_64,
		bool_t BgL_evalzf31154zf3_65, obj_t BgL_library1155z00_66,
		obj_t BgL_pragma1156z00_67, obj_t BgL_src1157z00_68,
		obj_t BgL_jvmzd2typezd2name1158z00_69, obj_t BgL_init1159z00_70,
		obj_t BgL_alias1160z00_71, obj_t BgL_from1161z00_72)
	{
		{	/* Effect/cgraph.sch 120 */
			{	/* Effect/cgraph.sch 120 */
				BgL_globalz00_bglt BgL_new1157z00_2695;

				{	/* Effect/cgraph.sch 120 */
					BgL_globalz00_bglt BgL_tmp1155z00_2696;
					BgL_globalzf2fromzf2_bglt BgL_wide1156z00_2697;

					{
						BgL_globalz00_bglt BgL_auxz00_3070;

						{	/* Effect/cgraph.sch 120 */
							BgL_globalz00_bglt BgL_new1154z00_2698;

							BgL_new1154z00_2698 =
								((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							{	/* Effect/cgraph.sch 120 */
								long BgL_arg1382z00_2699;

								{	/* Effect/cgraph.sch 120 */
									long BgL_res1859z00_2700;

									BgL_res1859z00_2700 =
										BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
									BgL_arg1382z00_2699 = BgL_res1859z00_2700;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1154z00_2698),
									BgL_arg1382z00_2699);
							}
							{	/* Effect/cgraph.sch 120 */
								BgL_objectz00_bglt BgL_tmpz00_3075;

								BgL_tmpz00_3075 = ((BgL_objectz00_bglt) BgL_new1154z00_2698);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3075, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1154z00_2698);
							BgL_auxz00_3070 = BgL_new1154z00_2698;
						}
						BgL_tmp1155z00_2696 = ((BgL_globalz00_bglt) BgL_auxz00_3070);
					}
					BgL_wide1156z00_2697 =
						((BgL_globalzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_globalzf2fromzf2_bgl))));
					{	/* Effect/cgraph.sch 120 */
						obj_t BgL_auxz00_3083;
						BgL_objectz00_bglt BgL_tmpz00_3081;

						BgL_auxz00_3083 = ((obj_t) BgL_wide1156z00_2697);
						BgL_tmpz00_3081 = ((BgL_objectz00_bglt) BgL_tmp1155z00_2696);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3081, BgL_auxz00_3083);
					}
					((BgL_objectz00_bglt) BgL_tmp1155z00_2696);
					{	/* Effect/cgraph.sch 120 */
						long BgL_arg1381z00_2701;

						{	/* Effect/cgraph.sch 120 */
							long BgL_res1860z00_2702;

							BgL_res1860z00_2702 =
								BGL_CLASS_INDEX(BGl_globalzf2fromzf2zzeffect_cgraphz00);
							BgL_arg1381z00_2701 = BgL_res1860z00_2702;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1155z00_2696), BgL_arg1381z00_2701);
					}
					BgL_new1157z00_2695 = ((BgL_globalz00_bglt) BgL_tmp1155z00_2696);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1157z00_2695)))->BgL_idz00) =
					((obj_t) BgL_id1141z00_52), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_namez00) =
					((obj_t) BgL_name1142z00_53), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1143z00_54), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1144z00_55), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_accessz00) =
					((obj_t) BgL_access1145z00_56), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1146zd2_57), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_removablez00) =
					((obj_t) BgL_removable1147z00_58), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_occurrencez00) =
					((long) BgL_occurrence1148z00_59), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1149z00_60), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1157z00_2695)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31150zf3_61), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_modulez00) =
					((obj_t) BgL_module1151z00_62), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_importz00) =
					((obj_t) BgL_import1152z00_63), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_evaluablezf3zf3) =
					((bool_t) BgL_evaluablezf31153zf3_64), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_evalzf3zf3) =
					((bool_t) BgL_evalzf31154zf3_65), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_libraryz00) =
					((obj_t) BgL_library1155z00_66), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_pragmaz00) =
					((obj_t) BgL_pragma1156z00_67), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_srcz00) =
					((obj_t) BgL_src1157z00_68), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BgL_jvmzd2typezd2name1158z00_69), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_initz00) =
					((obj_t) BgL_init1159z00_70), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1157z00_2695)))->BgL_aliasz00) =
					((obj_t) BgL_alias1160z00_71), BUNSPEC);
				{
					BgL_globalzf2fromzf2_bglt BgL_auxz00_3131;

					{
						obj_t BgL_auxz00_3132;

						{	/* Effect/cgraph.sch 120 */
							BgL_objectz00_bglt BgL_tmpz00_3133;

							BgL_tmpz00_3133 = ((BgL_objectz00_bglt) BgL_new1157z00_2695);
							BgL_auxz00_3132 = BGL_OBJECT_WIDENING(BgL_tmpz00_3133);
						}
						BgL_auxz00_3131 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3132);
					}
					((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3131))->
							BgL_fromz00) = ((obj_t) BgL_from1161z00_72), BUNSPEC);
				}
				return BgL_new1157z00_2695;
			}
		}

	}



/* &make-global/from */
	BgL_globalz00_bglt BGl_z62makezd2globalzf2fromz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2371, obj_t BgL_id1141z00_2372, obj_t BgL_name1142z00_2373,
		obj_t BgL_type1143z00_2374, obj_t BgL_value1144z00_2375,
		obj_t BgL_access1145z00_2376, obj_t BgL_fastzd2alpha1146zd2_2377,
		obj_t BgL_removable1147z00_2378, obj_t BgL_occurrence1148z00_2379,
		obj_t BgL_occurrencew1149z00_2380, obj_t BgL_userzf31150zf3_2381,
		obj_t BgL_module1151z00_2382, obj_t BgL_import1152z00_2383,
		obj_t BgL_evaluablezf31153zf3_2384, obj_t BgL_evalzf31154zf3_2385,
		obj_t BgL_library1155z00_2386, obj_t BgL_pragma1156z00_2387,
		obj_t BgL_src1157z00_2388, obj_t BgL_jvmzd2typezd2name1158z00_2389,
		obj_t BgL_init1159z00_2390, obj_t BgL_alias1160z00_2391,
		obj_t BgL_from1161z00_2392)
	{
		{	/* Effect/cgraph.sch 120 */
			return
				BGl_makezd2globalzf2fromz20zzeffect_cgraphz00(BgL_id1141z00_2372,
				BgL_name1142z00_2373, ((BgL_typez00_bglt) BgL_type1143z00_2374),
				((BgL_valuez00_bglt) BgL_value1144z00_2375), BgL_access1145z00_2376,
				BgL_fastzd2alpha1146zd2_2377, BgL_removable1147z00_2378,
				(long) CINT(BgL_occurrence1148z00_2379),
				(long) CINT(BgL_occurrencew1149z00_2380),
				CBOOL(BgL_userzf31150zf3_2381), BgL_module1151z00_2382,
				BgL_import1152z00_2383, CBOOL(BgL_evaluablezf31153zf3_2384),
				CBOOL(BgL_evalzf31154zf3_2385), BgL_library1155z00_2386,
				BgL_pragma1156z00_2387, BgL_src1157z00_2388,
				BgL_jvmzd2typezd2name1158z00_2389, BgL_init1159z00_2390,
				BgL_alias1160z00_2391, BgL_from1161z00_2392);
		}

	}



/* global/from? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf2fromzf3z01zzeffect_cgraphz00(obj_t
		BgL_objz00_73)
	{
		{	/* Effect/cgraph.sch 121 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_73,
				BGl_globalzf2fromzf2zzeffect_cgraphz00);
		}

	}



/* &global/from? */
	obj_t BGl_z62globalzf2fromzf3z63zzeffect_cgraphz00(obj_t BgL_envz00_2393,
		obj_t BgL_objz00_2394)
	{
		{	/* Effect/cgraph.sch 121 */
			return BBOOL(BGl_globalzf2fromzf3z01zzeffect_cgraphz00(BgL_objz00_2394));
		}

	}



/* global/from-nil */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.sch 122 */
			{	/* Effect/cgraph.sch 122 */
				obj_t BgL_classz00_2080;

				BgL_classz00_2080 = BGl_globalzf2fromzf2zzeffect_cgraphz00;
				{	/* Effect/cgraph.sch 122 */
					obj_t BgL__ortest_1106z00_2081;

					BgL__ortest_1106z00_2081 = BGL_CLASS_NIL(BgL_classz00_2080);
					if (CBOOL(BgL__ortest_1106z00_2081))
						{	/* Effect/cgraph.sch 122 */
							return ((BgL_globalz00_bglt) BgL__ortest_1106z00_2081);
						}
					else
						{	/* Effect/cgraph.sch 122 */
							return
								((BgL_globalz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2080));
						}
				}
			}
		}

	}



/* &global/from-nil */
	BgL_globalz00_bglt BGl_z62globalzf2fromzd2nilz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2395)
	{
		{	/* Effect/cgraph.sch 122 */
			return BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00();
		}

	}



/* global/from-from */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2fromz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_74)
	{
		{	/* Effect/cgraph.sch 123 */
			{
				BgL_globalzf2fromzf2_bglt BgL_auxz00_3156;

				{
					obj_t BgL_auxz00_3157;

					{	/* Effect/cgraph.sch 123 */
						BgL_objectz00_bglt BgL_tmpz00_3158;

						BgL_tmpz00_3158 = ((BgL_objectz00_bglt) BgL_oz00_74);
						BgL_auxz00_3157 = BGL_OBJECT_WIDENING(BgL_tmpz00_3158);
					}
					BgL_auxz00_3156 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3157);
				}
				return
					(((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3156))->BgL_fromz00);
			}
		}

	}



/* &global/from-from */
	obj_t BGl_z62globalzf2fromzd2fromz42zzeffect_cgraphz00(obj_t BgL_envz00_2396,
		obj_t BgL_oz00_2397)
	{
		{	/* Effect/cgraph.sch 123 */
			return
				BGl_globalzf2fromzd2fromz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2397));
		}

	}



/* global/from-from-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_75, obj_t BgL_vz00_76)
	{
		{	/* Effect/cgraph.sch 124 */
			{
				BgL_globalzf2fromzf2_bglt BgL_auxz00_3165;

				{
					obj_t BgL_auxz00_3166;

					{	/* Effect/cgraph.sch 124 */
						BgL_objectz00_bglt BgL_tmpz00_3167;

						BgL_tmpz00_3167 = ((BgL_objectz00_bglt) BgL_oz00_75);
						BgL_auxz00_3166 = BGL_OBJECT_WIDENING(BgL_tmpz00_3167);
					}
					BgL_auxz00_3165 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3166);
				}
				return
					((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3165))->
						BgL_fromz00) = ((obj_t) BgL_vz00_76), BUNSPEC);
			}
		}

	}



/* &global/from-from-set! */
	obj_t BGl_z62globalzf2fromzd2fromzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2398, obj_t BgL_oz00_2399, obj_t BgL_vz00_2400)
	{
		{	/* Effect/cgraph.sch 124 */
			return
				BGl_globalzf2fromzd2fromzd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2399), BgL_vz00_2400);
		}

	}



/* global/from-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2aliasz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_77)
	{
		{	/* Effect/cgraph.sch 125 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_77)))->BgL_aliasz00);
		}

	}



/* &global/from-alias */
	obj_t BGl_z62globalzf2fromzd2aliasz42zzeffect_cgraphz00(obj_t BgL_envz00_2401,
		obj_t BgL_oz00_2402)
	{
		{	/* Effect/cgraph.sch 125 */
			return
				BGl_globalzf2fromzd2aliasz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2402));
		}

	}



/* global/from-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2aliaszd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_78, obj_t BgL_vz00_79)
	{
		{	/* Effect/cgraph.sch 126 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_78)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_79), BUNSPEC);
		}

	}



/* &global/from-alias-set! */
	obj_t BGl_z62globalzf2fromzd2aliaszd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2403, obj_t BgL_oz00_2404, obj_t BgL_vz00_2405)
	{
		{	/* Effect/cgraph.sch 126 */
			return
				BGl_globalzf2fromzd2aliaszd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2404), BgL_vz00_2405);
		}

	}



/* global/from-init */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2initz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_80)
	{
		{	/* Effect/cgraph.sch 127 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_80)))->BgL_initz00);
		}

	}



/* &global/from-init */
	obj_t BGl_z62globalzf2fromzd2initz42zzeffect_cgraphz00(obj_t BgL_envz00_2406,
		obj_t BgL_oz00_2407)
	{
		{	/* Effect/cgraph.sch 127 */
			return
				BGl_globalzf2fromzd2initz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2407));
		}

	}



/* global/from-init-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2initzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_81, obj_t BgL_vz00_82)
	{
		{	/* Effect/cgraph.sch 128 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_81)))->BgL_initz00) =
				((obj_t) BgL_vz00_82), BUNSPEC);
		}

	}



/* &global/from-init-set! */
	obj_t BGl_z62globalzf2fromzd2initzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2408, obj_t BgL_oz00_2409, obj_t BgL_vz00_2410)
	{
		{	/* Effect/cgraph.sch 128 */
			return
				BGl_globalzf2fromzd2initzd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2409), BgL_vz00_2410);
		}

	}



/* global/from-jvm-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2jvmzd2typezd2namez20zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_83)
	{
		{	/* Effect/cgraph.sch 129 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_83)))->BgL_jvmzd2typezd2namez00);
		}

	}



/* &global/from-jvm-type-name */
	obj_t BGl_z62globalzf2fromzd2jvmzd2typezd2namez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2411, obj_t BgL_oz00_2412)
	{
		{	/* Effect/cgraph.sch 129 */
			return
				BGl_globalzf2fromzd2jvmzd2typezd2namez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2412));
		}

	}



/* global/from-jvm-type-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2jvmzd2typezd2namezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_84, obj_t BgL_vz00_85)
	{
		{	/* Effect/cgraph.sch 130 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_84)))->BgL_jvmzd2typezd2namez00) =
				((obj_t) BgL_vz00_85), BUNSPEC);
		}

	}



/* &global/from-jvm-type-name-set! */
	obj_t
		BGl_z62globalzf2fromzd2jvmzd2typezd2namezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2413, obj_t BgL_oz00_2414, obj_t BgL_vz00_2415)
	{
		{	/* Effect/cgraph.sch 130 */
			return
				BGl_globalzf2fromzd2jvmzd2typezd2namezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2414), BgL_vz00_2415);
		}

	}



/* global/from-src */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2srcz20zzeffect_cgraphz00(BgL_globalz00_bglt BgL_oz00_86)
	{
		{	/* Effect/cgraph.sch 131 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_86)))->BgL_srcz00);
		}

	}



/* &global/from-src */
	obj_t BGl_z62globalzf2fromzd2srcz42zzeffect_cgraphz00(obj_t BgL_envz00_2416,
		obj_t BgL_oz00_2417)
	{
		{	/* Effect/cgraph.sch 131 */
			return
				BGl_globalzf2fromzd2srcz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2417));
		}

	}



/* global/from-src-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2srczd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_87, obj_t BgL_vz00_88)
	{
		{	/* Effect/cgraph.sch 132 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_87)))->BgL_srcz00) =
				((obj_t) BgL_vz00_88), BUNSPEC);
		}

	}



/* &global/from-src-set! */
	obj_t BGl_z62globalzf2fromzd2srczd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2418, obj_t BgL_oz00_2419, obj_t BgL_vz00_2420)
	{
		{	/* Effect/cgraph.sch 132 */
			return
				BGl_globalzf2fromzd2srczd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2419), BgL_vz00_2420);
		}

	}



/* global/from-pragma */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2pragmaz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_89)
	{
		{	/* Effect/cgraph.sch 133 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_89)))->BgL_pragmaz00);
		}

	}



/* &global/from-pragma */
	obj_t BGl_z62globalzf2fromzd2pragmaz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2421, obj_t BgL_oz00_2422)
	{
		{	/* Effect/cgraph.sch 133 */
			return
				BGl_globalzf2fromzd2pragmaz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2422));
		}

	}



/* global/from-pragma-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2pragmazd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_90, obj_t BgL_vz00_91)
	{
		{	/* Effect/cgraph.sch 134 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_90)))->BgL_pragmaz00) =
				((obj_t) BgL_vz00_91), BUNSPEC);
		}

	}



/* &global/from-pragma-set! */
	obj_t BGl_z62globalzf2fromzd2pragmazd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2423, obj_t BgL_oz00_2424, obj_t BgL_vz00_2425)
	{
		{	/* Effect/cgraph.sch 134 */
			return
				BGl_globalzf2fromzd2pragmazd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2424), BgL_vz00_2425);
		}

	}



/* global/from-library */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2libraryz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_92)
	{
		{	/* Effect/cgraph.sch 135 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_92)))->BgL_libraryz00);
		}

	}



/* &global/from-library */
	obj_t BGl_z62globalzf2fromzd2libraryz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2426, obj_t BgL_oz00_2427)
	{
		{	/* Effect/cgraph.sch 135 */
			return
				BGl_globalzf2fromzd2libraryz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2427));
		}

	}



/* global/from-library-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2libraryzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_93, obj_t BgL_vz00_94)
	{
		{	/* Effect/cgraph.sch 136 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_93)))->BgL_libraryz00) =
				((obj_t) BgL_vz00_94), BUNSPEC);
		}

	}



/* &global/from-library-set! */
	obj_t BGl_z62globalzf2fromzd2libraryzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2428, obj_t BgL_oz00_2429, obj_t BgL_vz00_2430)
	{
		{	/* Effect/cgraph.sch 136 */
			return
				BGl_globalzf2fromzd2libraryzd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2429), BgL_vz00_2430);
		}

	}



/* global/from-eval? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2fromzd2evalzf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_95)
	{
		{	/* Effect/cgraph.sch 137 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_95)))->BgL_evalzf3zf3);
		}

	}



/* &global/from-eval? */
	obj_t BGl_z62globalzf2fromzd2evalzf3zb1zzeffect_cgraphz00(obj_t
		BgL_envz00_2431, obj_t BgL_oz00_2432)
	{
		{	/* Effect/cgraph.sch 137 */
			return
				BBOOL(BGl_globalzf2fromzd2evalzf3zd3zzeffect_cgraphz00(
					((BgL_globalz00_bglt) BgL_oz00_2432)));
		}

	}



/* global/from-eval?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2evalzf3zd2setz12z13zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_96, bool_t BgL_vz00_97)
	{
		{	/* Effect/cgraph.sch 138 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_96)))->BgL_evalzf3zf3) =
				((bool_t) BgL_vz00_97), BUNSPEC);
		}

	}



/* &global/from-eval?-set! */
	obj_t BGl_z62globalzf2fromzd2evalzf3zd2setz12z71zzeffect_cgraphz00(obj_t
		BgL_envz00_2433, obj_t BgL_oz00_2434, obj_t BgL_vz00_2435)
	{
		{	/* Effect/cgraph.sch 138 */
			return
				BGl_globalzf2fromzd2evalzf3zd2setz12z13zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2434), CBOOL(BgL_vz00_2435));
		}

	}



/* global/from-evaluable? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2fromzd2evaluablezf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_98)
	{
		{	/* Effect/cgraph.sch 139 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_98)))->BgL_evaluablezf3zf3);
		}

	}



/* &global/from-evaluable? */
	obj_t BGl_z62globalzf2fromzd2evaluablezf3zb1zzeffect_cgraphz00(obj_t
		BgL_envz00_2436, obj_t BgL_oz00_2437)
	{
		{	/* Effect/cgraph.sch 139 */
			return
				BBOOL(BGl_globalzf2fromzd2evaluablezf3zd3zzeffect_cgraphz00(
					((BgL_globalz00_bglt) BgL_oz00_2437)));
		}

	}



/* global/from-evaluable?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2evaluablezf3zd2setz12z13zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_99, bool_t BgL_vz00_100)
	{
		{	/* Effect/cgraph.sch 140 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_99)))->BgL_evaluablezf3zf3) =
				((bool_t) BgL_vz00_100), BUNSPEC);
		}

	}



/* &global/from-evaluable?-set! */
	obj_t BGl_z62globalzf2fromzd2evaluablezf3zd2setz12z71zzeffect_cgraphz00(obj_t
		BgL_envz00_2438, obj_t BgL_oz00_2439, obj_t BgL_vz00_2440)
	{
		{	/* Effect/cgraph.sch 140 */
			return
				BGl_globalzf2fromzd2evaluablezf3zd2setz12z13zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2439), CBOOL(BgL_vz00_2440));
		}

	}



/* global/from-import */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2importz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_101)
	{
		{	/* Effect/cgraph.sch 141 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_101)))->BgL_importz00);
		}

	}



/* &global/from-import */
	obj_t BGl_z62globalzf2fromzd2importz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2441, obj_t BgL_oz00_2442)
	{
		{	/* Effect/cgraph.sch 141 */
			return
				BGl_globalzf2fromzd2importz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2442));
		}

	}



/* global/from-import-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2importzd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_102, obj_t BgL_vz00_103)
	{
		{	/* Effect/cgraph.sch 142 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_102)))->BgL_importz00) =
				((obj_t) BgL_vz00_103), BUNSPEC);
		}

	}



/* &global/from-import-set! */
	obj_t BGl_z62globalzf2fromzd2importzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2443, obj_t BgL_oz00_2444, obj_t BgL_vz00_2445)
	{
		{	/* Effect/cgraph.sch 142 */
			return
				BGl_globalzf2fromzd2importzd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2444), BgL_vz00_2445);
		}

	}



/* global/from-module */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2modulez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_104)
	{
		{	/* Effect/cgraph.sch 143 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_104)))->BgL_modulez00);
		}

	}



/* &global/from-module */
	obj_t BGl_z62globalzf2fromzd2modulez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2446, obj_t BgL_oz00_2447)
	{
		{	/* Effect/cgraph.sch 143 */
			return
				BGl_globalzf2fromzd2modulez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2447));
		}

	}



/* global/from-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2modulezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_105, obj_t BgL_vz00_106)
	{
		{	/* Effect/cgraph.sch 144 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_105)))->BgL_modulez00) =
				((obj_t) BgL_vz00_106), BUNSPEC);
		}

	}



/* &global/from-module-set! */
	obj_t BGl_z62globalzf2fromzd2modulezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2448, obj_t BgL_oz00_2449, obj_t BgL_vz00_2450)
	{
		{	/* Effect/cgraph.sch 144 */
			return
				BGl_globalzf2fromzd2modulezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2449), BgL_vz00_2450);
		}

	}



/* global/from-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2fromzd2userzf3zd3zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_107)
	{
		{	/* Effect/cgraph.sch 145 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_107)))->BgL_userzf3zf3);
		}

	}



/* &global/from-user? */
	obj_t BGl_z62globalzf2fromzd2userzf3zb1zzeffect_cgraphz00(obj_t
		BgL_envz00_2451, obj_t BgL_oz00_2452)
	{
		{	/* Effect/cgraph.sch 145 */
			return
				BBOOL(BGl_globalzf2fromzd2userzf3zd3zzeffect_cgraphz00(
					((BgL_globalz00_bglt) BgL_oz00_2452)));
		}

	}



/* global/from-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_108, bool_t BgL_vz00_109)
	{
		{	/* Effect/cgraph.sch 146 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_108)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_109), BUNSPEC);
		}

	}



/* &global/from-user?-set! */
	obj_t BGl_z62globalzf2fromzd2userzf3zd2setz12z71zzeffect_cgraphz00(obj_t
		BgL_envz00_2453, obj_t BgL_oz00_2454, obj_t BgL_vz00_2455)
	{
		{	/* Effect/cgraph.sch 146 */
			return
				BGl_globalzf2fromzd2userzf3zd2setz12z13zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2454), CBOOL(BgL_vz00_2455));
		}

	}



/* global/from-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_globalzf2fromzd2occurrencewz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_110)
	{
		{	/* Effect/cgraph.sch 147 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_110)))->BgL_occurrencewz00);
		}

	}



/* &global/from-occurrencew */
	obj_t BGl_z62globalzf2fromzd2occurrencewz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2456, obj_t BgL_oz00_2457)
	{
		{	/* Effect/cgraph.sch 147 */
			return
				BINT(BGl_globalzf2fromzd2occurrencewz20zzeffect_cgraphz00(
					((BgL_globalz00_bglt) BgL_oz00_2457)));
		}

	}



/* global/from-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_111, long BgL_vz00_112)
	{
		{	/* Effect/cgraph.sch 148 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_111)))->BgL_occurrencewz00) =
				((long) BgL_vz00_112), BUNSPEC);
		}

	}



/* &global/from-occurrencew-set! */
	obj_t BGl_z62globalzf2fromzd2occurrencewzd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2458, obj_t BgL_oz00_2459, obj_t BgL_vz00_2460)
	{
		{	/* Effect/cgraph.sch 148 */
			return
				BGl_globalzf2fromzd2occurrencewzd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2459), (long) CINT(BgL_vz00_2460));
		}

	}



/* global/from-occurrence */
	BGL_EXPORTED_DEF long
		BGl_globalzf2fromzd2occurrencez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_113)
	{
		{	/* Effect/cgraph.sch 149 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_113)))->BgL_occurrencez00);
		}

	}



/* &global/from-occurrence */
	obj_t BGl_z62globalzf2fromzd2occurrencez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2461, obj_t BgL_oz00_2462)
	{
		{	/* Effect/cgraph.sch 149 */
			return
				BINT(BGl_globalzf2fromzd2occurrencez20zzeffect_cgraphz00(
					((BgL_globalz00_bglt) BgL_oz00_2462)));
		}

	}



/* global/from-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_114, long BgL_vz00_115)
	{
		{	/* Effect/cgraph.sch 150 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_114)))->BgL_occurrencez00) =
				((long) BgL_vz00_115), BUNSPEC);
		}

	}



/* &global/from-occurrence-set! */
	obj_t BGl_z62globalzf2fromzd2occurrencezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2463, obj_t BgL_oz00_2464, obj_t BgL_vz00_2465)
	{
		{	/* Effect/cgraph.sch 150 */
			return
				BGl_globalzf2fromzd2occurrencezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2464), (long) CINT(BgL_vz00_2465));
		}

	}



/* global/from-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2removablez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_116)
	{
		{	/* Effect/cgraph.sch 151 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_116)))->BgL_removablez00);
		}

	}



/* &global/from-removable */
	obj_t BGl_z62globalzf2fromzd2removablez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2466, obj_t BgL_oz00_2467)
	{
		{	/* Effect/cgraph.sch 151 */
			return
				BGl_globalzf2fromzd2removablez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2467));
		}

	}



/* global/from-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_117, obj_t BgL_vz00_118)
	{
		{	/* Effect/cgraph.sch 152 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_117)))->BgL_removablez00) =
				((obj_t) BgL_vz00_118), BUNSPEC);
		}

	}



/* &global/from-removable-set! */
	obj_t BGl_z62globalzf2fromzd2removablezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2468, obj_t BgL_oz00_2469, obj_t BgL_vz00_2470)
	{
		{	/* Effect/cgraph.sch 152 */
			return
				BGl_globalzf2fromzd2removablezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2469), BgL_vz00_2470);
		}

	}



/* global/from-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_119)
	{
		{	/* Effect/cgraph.sch 153 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_119)))->BgL_fastzd2alphazd2);
		}

	}



/* &global/from-fast-alpha */
	obj_t BGl_z62globalzf2fromzd2fastzd2alphaz90zzeffect_cgraphz00(obj_t
		BgL_envz00_2471, obj_t BgL_oz00_2472)
	{
		{	/* Effect/cgraph.sch 153 */
			return
				BGl_globalzf2fromzd2fastzd2alphazf2zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2472));
		}

	}



/* global/from-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00
		(BgL_globalz00_bglt BgL_oz00_120, obj_t BgL_vz00_121)
	{
		{	/* Effect/cgraph.sch 154 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_120)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_121), BUNSPEC);
		}

	}



/* &global/from-fast-alpha-set! */
	obj_t BGl_z62globalzf2fromzd2fastzd2alphazd2setz12z50zzeffect_cgraphz00(obj_t
		BgL_envz00_2473, obj_t BgL_oz00_2474, obj_t BgL_vz00_2475)
	{
		{	/* Effect/cgraph.sch 154 */
			return
				BGl_globalzf2fromzd2fastzd2alphazd2setz12z32zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2474), BgL_vz00_2475);
		}

	}



/* global/from-access */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2accessz20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_122)
	{
		{	/* Effect/cgraph.sch 155 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_122)))->BgL_accessz00);
		}

	}



/* &global/from-access */
	obj_t BGl_z62globalzf2fromzd2accessz42zzeffect_cgraphz00(obj_t
		BgL_envz00_2476, obj_t BgL_oz00_2477)
	{
		{	/* Effect/cgraph.sch 155 */
			return
				BGl_globalzf2fromzd2accessz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2477));
		}

	}



/* global/from-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_123, obj_t BgL_vz00_124)
	{
		{	/* Effect/cgraph.sch 156 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_123)))->BgL_accessz00) =
				((obj_t) BgL_vz00_124), BUNSPEC);
		}

	}



/* &global/from-access-set! */
	obj_t BGl_z62globalzf2fromzd2accesszd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2478, obj_t BgL_oz00_2479, obj_t BgL_vz00_2480)
	{
		{	/* Effect/cgraph.sch 156 */
			return
				BGl_globalzf2fromzd2accesszd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2479), BgL_vz00_2480);
		}

	}



/* global/from-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_globalzf2fromzd2valuez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_125)
	{
		{	/* Effect/cgraph.sch 157 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_125)))->BgL_valuez00);
		}

	}



/* &global/from-value */
	BgL_valuez00_bglt BGl_z62globalzf2fromzd2valuez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2481, obj_t BgL_oz00_2482)
	{
		{	/* Effect/cgraph.sch 157 */
			return
				BGl_globalzf2fromzd2valuez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2482));
		}

	}



/* global/from-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_126, BgL_valuez00_bglt BgL_vz00_127)
	{
		{	/* Effect/cgraph.sch 158 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_126)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_127), BUNSPEC);
		}

	}



/* &global/from-value-set! */
	obj_t BGl_z62globalzf2fromzd2valuezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2483, obj_t BgL_oz00_2484, obj_t BgL_vz00_2485)
	{
		{	/* Effect/cgraph.sch 158 */
			return
				BGl_globalzf2fromzd2valuezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2484),
				((BgL_valuez00_bglt) BgL_vz00_2485));
		}

	}



/* global/from-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_globalzf2fromzd2typez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_128)
	{
		{	/* Effect/cgraph.sch 159 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_128)))->BgL_typez00);
		}

	}



/* &global/from-type */
	BgL_typez00_bglt BGl_z62globalzf2fromzd2typez42zzeffect_cgraphz00(obj_t
		BgL_envz00_2486, obj_t BgL_oz00_2487)
	{
		{	/* Effect/cgraph.sch 159 */
			return
				BGl_globalzf2fromzd2typez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2487));
		}

	}



/* global/from-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_129, BgL_typez00_bglt BgL_vz00_130)
	{
		{	/* Effect/cgraph.sch 160 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_129)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_130), BUNSPEC);
		}

	}



/* &global/from-type-set! */
	obj_t BGl_z62globalzf2fromzd2typezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2488, obj_t BgL_oz00_2489, obj_t BgL_vz00_2490)
	{
		{	/* Effect/cgraph.sch 160 */
			return
				BGl_globalzf2fromzd2typezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2489),
				((BgL_typez00_bglt) BgL_vz00_2490));
		}

	}



/* global/from-name */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2namez20zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_131)
	{
		{	/* Effect/cgraph.sch 161 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_131)))->BgL_namez00);
		}

	}



/* &global/from-name */
	obj_t BGl_z62globalzf2fromzd2namez42zzeffect_cgraphz00(obj_t BgL_envz00_2491,
		obj_t BgL_oz00_2492)
	{
		{	/* Effect/cgraph.sch 161 */
			return
				BGl_globalzf2fromzd2namez20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2492));
		}

	}



/* global/from-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(BgL_globalz00_bglt
		BgL_oz00_132, obj_t BgL_vz00_133)
	{
		{	/* Effect/cgraph.sch 162 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_132)))->BgL_namez00) =
				((obj_t) BgL_vz00_133), BUNSPEC);
		}

	}



/* &global/from-name-set! */
	obj_t BGl_z62globalzf2fromzd2namezd2setz12z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2493, obj_t BgL_oz00_2494, obj_t BgL_vz00_2495)
	{
		{	/* Effect/cgraph.sch 162 */
			return
				BGl_globalzf2fromzd2namezd2setz12ze0zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2494), BgL_vz00_2495);
		}

	}



/* global/from-id */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2fromzd2idz20zzeffect_cgraphz00(BgL_globalz00_bglt BgL_oz00_134)
	{
		{	/* Effect/cgraph.sch 163 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_134)))->BgL_idz00);
		}

	}



/* &global/from-id */
	obj_t BGl_z62globalzf2fromzd2idz42zzeffect_cgraphz00(obj_t BgL_envz00_2496,
		obj_t BgL_oz00_2497)
	{
		{	/* Effect/cgraph.sch 163 */
			return
				BGl_globalzf2fromzd2idz20zzeffect_cgraphz00(
				((BgL_globalz00_bglt) BgL_oz00_2497));
		}

	}



/* fun-call-graph! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_variablez00_137)
	{
		{	/* Effect/cgraph.scm 31 */
			BGl_za2varzf2allza2zf2zzeffect_cgraphz00 =
				MAKE_YOUNG_PAIR(
				((obj_t) BgL_variablez00_137),
				BGl_za2varzf2allza2zf2zzeffect_cgraphz00);
			{	/* Effect/cgraph.scm 33 */
				obj_t BgL_arg1383z00_1522;

				BgL_arg1383z00_1522 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_137))->
									BgL_valuez00))))->BgL_bodyz00);
				return BGl_callzd2graphz12zc0zzeffect_cgraphz00(((BgL_nodez00_bglt)
						BgL_arg1383z00_1522), BgL_variablez00_137);
			}
		}

	}



/* &fun-call-graph! */
	obj_t BGl_z62funzd2callzd2graphz12z70zzeffect_cgraphz00(obj_t BgL_envz00_2498,
		obj_t BgL_variablez00_2499)
	{
		{	/* Effect/cgraph.scm 31 */
			return
				BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_variablez00_2499));
		}

	}



/* call-graph*! */
	bool_t BGl_callzd2graphza2z12z62zzeffect_cgraphz00(obj_t BgL_nodeza2za2_176,
		obj_t BgL_ownerz00_177)
	{
		{	/* Effect/cgraph.scm 205 */
			{
				obj_t BgL_l1309z00_1525;

				BgL_l1309z00_1525 = BgL_nodeza2za2_176;
			BgL_zc3z04anonymousza31385ze3z87_1526:
				if (PAIRP(BgL_l1309z00_1525))
					{	/* Effect/cgraph.scm 206 */
						{	/* Effect/cgraph.scm 206 */
							obj_t BgL_nodez00_1528;

							BgL_nodez00_1528 = CAR(BgL_l1309z00_1525);
							BGl_callzd2graphz12zc0zzeffect_cgraphz00(
								((BgL_nodez00_bglt) BgL_nodez00_1528),
								((BgL_variablez00_bglt) BgL_ownerz00_177));
						}
						{
							obj_t BgL_l1309z00_3357;

							BgL_l1309z00_3357 = CDR(BgL_l1309z00_1525);
							BgL_l1309z00_1525 = BgL_l1309z00_3357;
							goto BgL_zc3z04anonymousza31385ze3z87_1526;
						}
					}
				else
					{	/* Effect/cgraph.scm 206 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* get-var/side-effect */
	BGL_EXPORTED_DEF obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 250 */
			return BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00;
		}

	}



/* &get-var/side-effect */
	obj_t BGl_z62getzd2varzf2sidezd2effectz90zzeffect_cgraphz00(obj_t
		BgL_envz00_2500)
	{
		{	/* Effect/cgraph.scm 250 */
			return BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00();
		}

	}



/* get-var/all */
	BGL_EXPORTED_DEF obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 261 */
			return BGl_za2varzf2allza2zf2zzeffect_cgraphz00;
		}

	}



/* &get-var/all */
	obj_t BGl_z62getzd2varzf2allz42zzeffect_cgraphz00(obj_t BgL_envz00_2501)
	{
		{	/* Effect/cgraph.scm 261 */
			return BGl_getzd2varzf2allz20zzeffect_cgraphz00();
		}

	}



/* reset-effect-tables! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 272 */
			BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BNIL;
			return (BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BNIL, BUNSPEC);
		}

	}



/* &reset-effect-tables! */
	obj_t BGl_z62resetzd2effectzd2tablesz12z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2502)
	{
		{	/* Effect/cgraph.scm 272 */
			return BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00();
		}

	}



/* mark-side-effect! */
	obj_t BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_vz00_188)
	{
		{	/* Effect/cgraph.scm 279 */
			{	/* Effect/cgraph.scm 282 */
				BgL_valuez00_bglt BgL_funz00_1531;

				BgL_funz00_1531 =
					(((BgL_variablez00_bglt) COBJECT(BgL_vz00_188))->BgL_valuez00);
				if (CBOOL(
						(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_funz00_1531)))->BgL_sidezd2effectzd2)))
					{	/* Effect/cgraph.scm 284 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									((obj_t) BgL_vz00_188),
									BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00)))
							{	/* Effect/cgraph.scm 287 */
								return CNST_TABLE_REF(((long) 0));
							}
						else
							{	/* Effect/cgraph.scm 287 */
								return (BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 =
									MAKE_YOUNG_PAIR(
										((obj_t) BgL_vz00_188),
										BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00),
									BUNSPEC);
							}
					}
				else
					{	/* Effect/cgraph.scm 284 */
						BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 =
							MAKE_YOUNG_PAIR(
							((obj_t) BgL_vz00_188),
							BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00);
						return ((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
											BgL_funz00_1531)))->BgL_sidezd2effectzd2) =
							((obj_t) BTRUE), BUNSPEC);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			{	/* Effect/cgraph.scm 21 */
				obj_t BgL_arg1441z00_1538;
				obj_t BgL_arg1442z00_1539;

				{	/* Effect/cgraph.scm 21 */
					obj_t BgL_v1311z00_1572;

					BgL_v1311z00_1572 = create_vector(((long) 1));
					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_arg1476z00_1573;

						BgL_arg1476z00_1573 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc1906z00zzeffect_cgraphz00,
							BGl_proc1905z00zzeffect_cgraphz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 2)));
						VECTOR_SET(BgL_v1311z00_1572, ((long) 0), BgL_arg1476z00_1573);
					}
					BgL_arg1441z00_1538 = BgL_v1311z00_1572;
				}
				{	/* Effect/cgraph.scm 21 */
					obj_t BgL_v1312z00_1583;

					BgL_v1312z00_1583 = create_vector(((long) 0));
					BgL_arg1442z00_1539 = BgL_v1312z00_1583;
				}
				BGl_localzf2fromzf2zzeffect_cgraphz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 4)), BGl_localz00zzast_varz00, ((long) 19681),
					BGl_proc1910z00zzeffect_cgraphz00, BGl_proc1909z00zzeffect_cgraphz00,
					BFALSE, BGl_proc1908z00zzeffect_cgraphz00,
					BGl_proc1907z00zzeffect_cgraphz00, BgL_arg1441z00_1538,
					BgL_arg1442z00_1539);
			}
			{	/* Effect/cgraph.scm 22 */
				obj_t BgL_arg1521z00_1592;
				obj_t BgL_arg1528z00_1593;

				{	/* Effect/cgraph.scm 22 */
					obj_t BgL_v1313z00_1635;

					BgL_v1313z00_1635 = create_vector(((long) 1));
					{	/* Effect/cgraph.scm 22 */
						obj_t BgL_arg1564z00_1636;

						BgL_arg1564z00_1636 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc1912z00zzeffect_cgraphz00,
							BGl_proc1911z00zzeffect_cgraphz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 2)));
						VECTOR_SET(BgL_v1313z00_1635, ((long) 0), BgL_arg1564z00_1636);
					}
					BgL_arg1521z00_1592 = BgL_v1313z00_1635;
				}
				{	/* Effect/cgraph.scm 22 */
					obj_t BgL_v1314z00_1646;

					BgL_v1314z00_1646 = create_vector(((long) 0));
					BgL_arg1528z00_1593 = BgL_v1314z00_1646;
				}
				return (BGl_globalzf2fromzf2zzeffect_cgraphz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
						CNST_TABLE_REF(((long) 4)), BGl_globalz00zzast_varz00,
						((long) 6327), BGl_proc1916z00zzeffect_cgraphz00,
						BGl_proc1915z00zzeffect_cgraphz00, BFALSE,
						BGl_proc1914z00zzeffect_cgraphz00,
						BGl_proc1913z00zzeffect_cgraphz00, BgL_arg1521z00_1592,
						BgL_arg1528z00_1593), BUNSPEC);
		}}

	}



/* &lambda1542 */
	BgL_globalz00_bglt BGl_z62lambda1542z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2515, obj_t BgL_o1144z00_2516)
	{
		{	/* Effect/cgraph.scm 22 */
			{	/* Effect/cgraph.scm 22 */
				long BgL_arg1552z00_2704;

				{	/* Effect/cgraph.scm 22 */
					obj_t BgL_arg1558z00_2705;

					{	/* Effect/cgraph.scm 22 */
						obj_t BgL_arg1561z00_2706;

						{	/* Effect/cgraph.scm 22 */
							long BgL_arg1816z00_2707;

							{	/* Effect/cgraph.scm 22 */
								long BgL_arg1817z00_2708;

								{	/* Effect/cgraph.scm 22 */
									long BgL_res1871z00_2709;

									BgL_res1871z00_2709 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_o1144z00_2516)));
									BgL_arg1817z00_2708 = BgL_res1871z00_2709;
								}
								BgL_arg1816z00_2707 = (BgL_arg1817z00_2708 - OBJECT_TYPE);
							}
							BgL_arg1561z00_2706 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2707);
						}
						BgL_arg1558z00_2705 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1561z00_2706);
					}
					{	/* Effect/cgraph.scm 22 */
						long BgL_res1873z00_2710;

						{	/* Effect/cgraph.scm 22 */
							obj_t BgL_tmpz00_3402;

							BgL_tmpz00_3402 = ((obj_t) BgL_arg1558z00_2705);
							BgL_res1873z00_2710 = BGL_CLASS_INDEX(BgL_tmpz00_3402);
						}
						BgL_arg1552z00_2704 = BgL_res1873z00_2710;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) BgL_o1144z00_2516)), BgL_arg1552z00_2704);
			}
			{	/* Effect/cgraph.scm 22 */
				BgL_objectz00_bglt BgL_tmpz00_3408;

				BgL_tmpz00_3408 =
					((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1144z00_2516));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3408, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1144z00_2516));
			return ((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1144z00_2516));
		}

	}



/* &<@anonymous:1541> */
	obj_t BGl_z62zc3z04anonymousza31541ze3ze5zzeffect_cgraphz00(obj_t
		BgL_envz00_2517, obj_t BgL_new1143z00_2518)
	{
		{	/* Effect/cgraph.scm 22 */
			{
				BgL_globalz00_bglt BgL_auxz00_3416;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1143z00_2518))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 6))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3424;

					{	/* Effect/cgraph.scm 22 */
						obj_t BgL_classz00_2712;

						BgL_classz00_2712 = BGl_typez00zztype_typez00;
						{	/* Effect/cgraph.scm 22 */
							obj_t BgL__ortest_1106z00_2713;

							BgL__ortest_1106z00_2713 = BGL_CLASS_NIL(BgL_classz00_2712);
							if (CBOOL(BgL__ortest_1106z00_2713))
								{	/* Effect/cgraph.scm 22 */
									BgL_auxz00_3424 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2713);
								}
							else
								{	/* Effect/cgraph.scm 22 */
									BgL_auxz00_3424 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2712));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1143z00_2518))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3424), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_3434;

					{	/* Effect/cgraph.scm 22 */
						obj_t BgL_classz00_2714;

						BgL_classz00_2714 = BGl_valuez00zzast_varz00;
						{	/* Effect/cgraph.scm 22 */
							obj_t BgL__ortest_1106z00_2715;

							BgL__ortest_1106z00_2715 = BGL_CLASS_NIL(BgL_classz00_2714);
							if (CBOOL(BgL__ortest_1106z00_2715))
								{	/* Effect/cgraph.scm 22 */
									BgL_auxz00_3434 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2715);
								}
							else
								{	/* Effect/cgraph.scm 22 */
									BgL_auxz00_3434 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2714));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1143z00_2518))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_3434), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1143z00_2518))))->
						BgL_accessz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 6))), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_importz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_evaluablezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_evalzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_libraryz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_pragmaz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BGl_string1917z00zzeffect_cgraphz00), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_initz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1143z00_2518))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalzf2fromzf2_bglt BgL_auxz00_3493;

					{
						obj_t BgL_auxz00_3494;

						{	/* Effect/cgraph.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_3495;

							BgL_tmpz00_3495 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) BgL_new1143z00_2518));
							BgL_auxz00_3494 = BGL_OBJECT_WIDENING(BgL_tmpz00_3495);
						}
						BgL_auxz00_3493 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3494);
					}
					((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3493))->
							BgL_fromz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_3416 = ((BgL_globalz00_bglt) BgL_new1143z00_2518);
				return ((obj_t) BgL_auxz00_3416);
			}
		}

	}



/* &lambda1538 */
	BgL_globalz00_bglt BGl_z62lambda1538z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2519, obj_t BgL_o1140z00_2520)
	{
		{	/* Effect/cgraph.scm 22 */
			{	/* Effect/cgraph.scm 22 */
				BgL_globalzf2fromzf2_bglt BgL_wide1142z00_2717;

				BgL_wide1142z00_2717 =
					((BgL_globalzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_globalzf2fromzf2_bgl))));
				{	/* Effect/cgraph.scm 22 */
					obj_t BgL_auxz00_3508;
					BgL_objectz00_bglt BgL_tmpz00_3504;

					BgL_auxz00_3508 = ((obj_t) BgL_wide1142z00_2717);
					BgL_tmpz00_3504 =
						((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1140z00_2520)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3504, BgL_auxz00_3508);
				}
				((BgL_objectz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1140z00_2520)));
				{	/* Effect/cgraph.scm 22 */
					long BgL_arg1540z00_2718;

					{	/* Effect/cgraph.scm 22 */
						long BgL_res1870z00_2719;

						BgL_res1870z00_2719 =
							BGL_CLASS_INDEX(BGl_globalzf2fromzf2zzeffect_cgraphz00);
						BgL_arg1540z00_2718 = BgL_res1870z00_2719;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_o1140z00_2520))),
						BgL_arg1540z00_2718);
				}
				return
					((BgL_globalz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1140z00_2520)));
			}
		}

	}



/* &lambda1529 */
	BgL_globalz00_bglt BGl_z62lambda1529z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2521, obj_t BgL_id1119z00_2522, obj_t BgL_name1120z00_2523,
		obj_t BgL_type1121z00_2524, obj_t BgL_value1122z00_2525,
		obj_t BgL_access1123z00_2526, obj_t BgL_fastzd2alpha1124zd2_2527,
		obj_t BgL_removable1125z00_2528, obj_t BgL_occurrence1126z00_2529,
		obj_t BgL_occurrencew1127z00_2530, obj_t BgL_userzf31128zf3_2531,
		obj_t BgL_module1129z00_2532, obj_t BgL_import1130z00_2533,
		obj_t BgL_evaluablezf31131zf3_2534, obj_t BgL_evalzf31132zf3_2535,
		obj_t BgL_library1133z00_2536, obj_t BgL_pragma1134z00_2537,
		obj_t BgL_src1135z00_2538, obj_t BgL_jvmzd2typezd2name1136z00_2539,
		obj_t BgL_init1137z00_2540, obj_t BgL_alias1138z00_2541,
		obj_t BgL_from1139z00_2542)
	{
		{	/* Effect/cgraph.scm 22 */
			{	/* Effect/cgraph.scm 22 */
				long BgL_occurrence1126z00_2723;
				long BgL_occurrencew1127z00_2724;
				bool_t BgL_userzf31128zf3_2725;
				bool_t BgL_evaluablezf31131zf3_2727;
				bool_t BgL_evalzf31132zf3_2728;

				BgL_occurrence1126z00_2723 = (long) CINT(BgL_occurrence1126z00_2529);
				BgL_occurrencew1127z00_2724 = (long) CINT(BgL_occurrencew1127z00_2530);
				BgL_userzf31128zf3_2725 = CBOOL(BgL_userzf31128zf3_2531);
				BgL_evaluablezf31131zf3_2727 = CBOOL(BgL_evaluablezf31131zf3_2534);
				BgL_evalzf31132zf3_2728 = CBOOL(BgL_evalzf31132zf3_2535);
				{	/* Effect/cgraph.scm 22 */
					BgL_globalz00_bglt BgL_new1191z00_2730;

					{	/* Effect/cgraph.scm 22 */
						BgL_globalz00_bglt BgL_tmp1189z00_2731;
						BgL_globalzf2fromzf2_bglt BgL_wide1190z00_2732;

						{
							BgL_globalz00_bglt BgL_auxz00_3527;

							{	/* Effect/cgraph.scm 22 */
								BgL_globalz00_bglt BgL_new1188z00_2733;

								BgL_new1188z00_2733 =
									((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalz00_bgl))));
								{	/* Effect/cgraph.scm 22 */
									long BgL_arg1537z00_2734;

									{	/* Effect/cgraph.scm 22 */
										long BgL_res1868z00_2735;

										BgL_res1868z00_2735 =
											BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
										BgL_arg1537z00_2734 = BgL_res1868z00_2735;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1188z00_2733),
										BgL_arg1537z00_2734);
								}
								{	/* Effect/cgraph.scm 22 */
									BgL_objectz00_bglt BgL_tmpz00_3532;

									BgL_tmpz00_3532 = ((BgL_objectz00_bglt) BgL_new1188z00_2733);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3532, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1188z00_2733);
								BgL_auxz00_3527 = BgL_new1188z00_2733;
							}
							BgL_tmp1189z00_2731 = ((BgL_globalz00_bglt) BgL_auxz00_3527);
						}
						BgL_wide1190z00_2732 =
							((BgL_globalzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_globalzf2fromzf2_bgl))));
						{	/* Effect/cgraph.scm 22 */
							obj_t BgL_auxz00_3540;
							BgL_objectz00_bglt BgL_tmpz00_3538;

							BgL_auxz00_3540 = ((obj_t) BgL_wide1190z00_2732);
							BgL_tmpz00_3538 = ((BgL_objectz00_bglt) BgL_tmp1189z00_2731);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3538, BgL_auxz00_3540);
						}
						((BgL_objectz00_bglt) BgL_tmp1189z00_2731);
						{	/* Effect/cgraph.scm 22 */
							long BgL_arg1536z00_2736;

							{	/* Effect/cgraph.scm 22 */
								long BgL_res1869z00_2737;

								BgL_res1869z00_2737 =
									BGL_CLASS_INDEX(BGl_globalzf2fromzf2zzeffect_cgraphz00);
								BgL_arg1536z00_2736 = BgL_res1869z00_2737;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1189z00_2731),
								BgL_arg1536z00_2736);
						}
						BgL_new1191z00_2730 = ((BgL_globalz00_bglt) BgL_tmp1189z00_2731);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1191z00_2730)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1119z00_2522)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_namez00) =
						((obj_t) BgL_name1120z00_2523), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1121z00_2524)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1122z00_2525)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_accessz00) =
						((obj_t) BgL_access1123z00_2526), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1124zd2_2527), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_removablez00) =
						((obj_t) BgL_removable1125z00_2528), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_occurrencez00) =
						((long) BgL_occurrence1126z00_2723), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1127z00_2724), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1191z00_2730)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31128zf3_2725), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1129z00_2532)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_importz00) =
						((obj_t) BgL_import1130z00_2533), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_evaluablezf3zf3) =
						((bool_t) BgL_evaluablezf31131zf3_2727), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_evalzf3zf3) =
						((bool_t) BgL_evalzf31132zf3_2728), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_libraryz00) =
						((obj_t) BgL_library1133z00_2536), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_pragmaz00) =
						((obj_t) BgL_pragma1134z00_2537), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_srcz00) =
						((obj_t) BgL_src1135z00_2538), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_jvmzd2typezd2namez00) =
						((obj_t) ((obj_t) BgL_jvmzd2typezd2name1136z00_2539)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_initz00) =
						((obj_t) BgL_init1137z00_2540), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1191z00_2730)))->BgL_aliasz00) =
						((obj_t) BgL_alias1138z00_2541), BUNSPEC);
					{
						BgL_globalzf2fromzf2_bglt BgL_auxz00_3593;

						{
							obj_t BgL_auxz00_3594;

							{	/* Effect/cgraph.scm 22 */
								BgL_objectz00_bglt BgL_tmpz00_3595;

								BgL_tmpz00_3595 = ((BgL_objectz00_bglt) BgL_new1191z00_2730);
								BgL_auxz00_3594 = BGL_OBJECT_WIDENING(BgL_tmpz00_3595);
							}
							BgL_auxz00_3593 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3594);
						}
						((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3593))->
								BgL_fromz00) = ((obj_t) BgL_from1139z00_2542), BUNSPEC);
					}
					return BgL_new1191z00_2730;
				}
			}
		}

	}



/* &lambda1575 */
	obj_t BGl_z62lambda1575z62zzeffect_cgraphz00(obj_t BgL_envz00_2543,
		obj_t BgL_oz00_2544, obj_t BgL_vz00_2545)
	{
		{	/* Effect/cgraph.scm 22 */
			{
				BgL_globalzf2fromzf2_bglt BgL_auxz00_3600;

				{
					obj_t BgL_auxz00_3601;

					{	/* Effect/cgraph.scm 22 */
						BgL_objectz00_bglt BgL_tmpz00_3602;

						BgL_tmpz00_3602 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_2544));
						BgL_auxz00_3601 = BGL_OBJECT_WIDENING(BgL_tmpz00_3602);
					}
					BgL_auxz00_3600 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3601);
				}
				return
					((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3600))->
						BgL_fromz00) = ((obj_t) BgL_vz00_2545), BUNSPEC);
			}
		}

	}



/* &lambda1574 */
	obj_t BGl_z62lambda1574z62zzeffect_cgraphz00(obj_t BgL_envz00_2546,
		obj_t BgL_oz00_2547)
	{
		{	/* Effect/cgraph.scm 22 */
			{
				BgL_globalzf2fromzf2_bglt BgL_auxz00_3608;

				{
					obj_t BgL_auxz00_3609;

					{	/* Effect/cgraph.scm 22 */
						BgL_objectz00_bglt BgL_tmpz00_3610;

						BgL_tmpz00_3610 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_2547));
						BgL_auxz00_3609 = BGL_OBJECT_WIDENING(BgL_tmpz00_3610);
					}
					BgL_auxz00_3608 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3609);
				}
				return
					(((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3608))->BgL_fromz00);
			}
		}

	}



/* &lambda1463 */
	BgL_localz00_bglt BGl_z62lambda1463z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2548, obj_t BgL_o1117z00_2549)
	{
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				long BgL_arg1464z00_2741;

				{	/* Effect/cgraph.scm 21 */
					obj_t BgL_arg1465z00_2742;

					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_arg1474z00_2743;

						{	/* Effect/cgraph.scm 21 */
							long BgL_arg1816z00_2744;

							{	/* Effect/cgraph.scm 21 */
								long BgL_arg1817z00_2745;

								{	/* Effect/cgraph.scm 21 */
									long BgL_res1865z00_2746;

									BgL_res1865z00_2746 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1117z00_2549)));
									BgL_arg1817z00_2745 = BgL_res1865z00_2746;
								}
								BgL_arg1816z00_2744 = (BgL_arg1817z00_2745 - OBJECT_TYPE);
							}
							BgL_arg1474z00_2743 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2744);
						}
						BgL_arg1465z00_2742 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1474z00_2743);
					}
					{	/* Effect/cgraph.scm 21 */
						long BgL_res1867z00_2747;

						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_tmpz00_3622;

							BgL_tmpz00_3622 = ((obj_t) BgL_arg1465z00_2742);
							BgL_res1867z00_2747 = BGL_CLASS_INDEX(BgL_tmpz00_3622);
						}
						BgL_arg1464z00_2741 = BgL_res1867z00_2747;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1117z00_2549)), BgL_arg1464z00_2741);
			}
			{	/* Effect/cgraph.scm 21 */
				BgL_objectz00_bglt BgL_tmpz00_3628;

				BgL_tmpz00_3628 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2549));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3628, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2549));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2549));
		}

	}



/* &<@anonymous:1462> */
	obj_t BGl_z62zc3z04anonymousza31462ze3ze5zzeffect_cgraphz00(obj_t
		BgL_envz00_2550, obj_t BgL_new1116z00_2551)
	{
		{	/* Effect/cgraph.scm 21 */
			{
				BgL_localz00_bglt BgL_auxz00_3636;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2551))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 6))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3644;

					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_classz00_2749;

						BgL_classz00_2749 = BGl_typez00zztype_typez00;
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL__ortest_1106z00_2750;

							BgL__ortest_1106z00_2750 = BGL_CLASS_NIL(BgL_classz00_2749);
							if (CBOOL(BgL__ortest_1106z00_2750))
								{	/* Effect/cgraph.scm 21 */
									BgL_auxz00_3644 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2750);
								}
							else
								{	/* Effect/cgraph.scm 21 */
									BgL_auxz00_3644 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2749));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2551))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_3644), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_3654;

					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_classz00_2751;

						BgL_classz00_2751 = BGl_valuez00zzast_varz00;
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL__ortest_1106z00_2752;

							BgL__ortest_1106z00_2752 = BGL_CLASS_NIL(BgL_classz00_2751);
							if (CBOOL(BgL__ortest_1106z00_2752))
								{	/* Effect/cgraph.scm 21 */
									BgL_auxz00_3654 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2752);
								}
							else
								{	/* Effect/cgraph.scm 21 */
									BgL_auxz00_3654 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2751));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2551))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_3654), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2551))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2551))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_localzf2fromzf2_bglt BgL_auxz00_3685;

					{
						obj_t BgL_auxz00_3686;

						{	/* Effect/cgraph.scm 21 */
							BgL_objectz00_bglt BgL_tmpz00_3687;

							BgL_tmpz00_3687 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1116z00_2551));
							BgL_auxz00_3686 = BGL_OBJECT_WIDENING(BgL_tmpz00_3687);
						}
						BgL_auxz00_3685 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3686);
					}
					((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3685))->
							BgL_fromz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_3636 = ((BgL_localz00_bglt) BgL_new1116z00_2551);
				return ((obj_t) BgL_auxz00_3636);
			}
		}

	}



/* &lambda1450 */
	BgL_localz00_bglt BGl_z62lambda1450z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2552, obj_t BgL_o1113z00_2553)
	{
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_localzf2fromzf2_bglt BgL_wide1115z00_2754;

				BgL_wide1115z00_2754 =
					((BgL_localzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2fromzf2_bgl))));
				{	/* Effect/cgraph.scm 21 */
					obj_t BgL_auxz00_3700;
					BgL_objectz00_bglt BgL_tmpz00_3696;

					BgL_auxz00_3700 = ((obj_t) BgL_wide1115z00_2754);
					BgL_tmpz00_3696 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2553)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3696, BgL_auxz00_3700);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2553)));
				{	/* Effect/cgraph.scm 21 */
					long BgL_arg1461z00_2755;

					{	/* Effect/cgraph.scm 21 */
						long BgL_res1864z00_2756;

						BgL_res1864z00_2756 =
							BGL_CLASS_INDEX(BGl_localzf2fromzf2zzeffect_cgraphz00);
						BgL_arg1461z00_2755 = BgL_res1864z00_2756;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1113z00_2553))), BgL_arg1461z00_2755);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2553)));
			}
		}

	}



/* &lambda1443 */
	BgL_localz00_bglt BGl_z62lambda1443z62zzeffect_cgraphz00(obj_t
		BgL_envz00_2554, obj_t BgL_id1101z00_2555, obj_t BgL_name1102z00_2556,
		obj_t BgL_type1103z00_2557, obj_t BgL_value1104z00_2558,
		obj_t BgL_access1105z00_2559, obj_t BgL_fastzd2alpha1106zd2_2560,
		obj_t BgL_removable1107z00_2561, obj_t BgL_occurrence1108z00_2562,
		obj_t BgL_occurrencew1109z00_2563, obj_t BgL_userzf31110zf3_2564,
		obj_t BgL_key1111z00_2565, obj_t BgL_from1112z00_2566)
	{
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				long BgL_occurrence1108z00_2760;
				long BgL_occurrencew1109z00_2761;
				bool_t BgL_userzf31110zf3_2762;
				long BgL_key1111z00_2763;

				BgL_occurrence1108z00_2760 = (long) CINT(BgL_occurrence1108z00_2562);
				BgL_occurrencew1109z00_2761 = (long) CINT(BgL_occurrencew1109z00_2563);
				BgL_userzf31110zf3_2762 = CBOOL(BgL_userzf31110zf3_2564);
				BgL_key1111z00_2763 = (long) CINT(BgL_key1111z00_2565);
				{	/* Effect/cgraph.scm 21 */
					BgL_localz00_bglt BgL_new1186z00_2764;

					{	/* Effect/cgraph.scm 21 */
						BgL_localz00_bglt BgL_tmp1184z00_2765;
						BgL_localzf2fromzf2_bglt BgL_wide1185z00_2766;

						{
							BgL_localz00_bglt BgL_auxz00_3718;

							{	/* Effect/cgraph.scm 21 */
								BgL_localz00_bglt BgL_new1183z00_2767;

								BgL_new1183z00_2767 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Effect/cgraph.scm 21 */
									long BgL_arg1449z00_2768;

									{	/* Effect/cgraph.scm 21 */
										long BgL_res1862z00_2769;

										BgL_res1862z00_2769 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1449z00_2768 = BgL_res1862z00_2769;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1183z00_2767),
										BgL_arg1449z00_2768);
								}
								{	/* Effect/cgraph.scm 21 */
									BgL_objectz00_bglt BgL_tmpz00_3723;

									BgL_tmpz00_3723 = ((BgL_objectz00_bglt) BgL_new1183z00_2767);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3723, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1183z00_2767);
								BgL_auxz00_3718 = BgL_new1183z00_2767;
							}
							BgL_tmp1184z00_2765 = ((BgL_localz00_bglt) BgL_auxz00_3718);
						}
						BgL_wide1185z00_2766 =
							((BgL_localzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2fromzf2_bgl))));
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_auxz00_3731;
							BgL_objectz00_bglt BgL_tmpz00_3729;

							BgL_auxz00_3731 = ((obj_t) BgL_wide1185z00_2766);
							BgL_tmpz00_3729 = ((BgL_objectz00_bglt) BgL_tmp1184z00_2765);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3729, BgL_auxz00_3731);
						}
						((BgL_objectz00_bglt) BgL_tmp1184z00_2765);
						{	/* Effect/cgraph.scm 21 */
							long BgL_arg1448z00_2770;

							{	/* Effect/cgraph.scm 21 */
								long BgL_res1863z00_2771;

								BgL_res1863z00_2771 =
									BGL_CLASS_INDEX(BGl_localzf2fromzf2zzeffect_cgraphz00);
								BgL_arg1448z00_2770 = BgL_res1863z00_2771;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1184z00_2765),
								BgL_arg1448z00_2770);
						}
						BgL_new1186z00_2764 = ((BgL_localz00_bglt) BgL_tmp1184z00_2765);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1186z00_2764)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1101z00_2555)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_namez00) =
						((obj_t) BgL_name1102z00_2556), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1103z00_2557)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1104z00_2558)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_accessz00) =
						((obj_t) BgL_access1105z00_2559), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1106zd2_2560), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_removablez00) =
						((obj_t) BgL_removable1107z00_2561), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_occurrencez00) =
						((long) BgL_occurrence1108z00_2760), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1109z00_2761), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1186z00_2764)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31110zf3_2762), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1186z00_2764)))->BgL_keyz00) =
						((long) BgL_key1111z00_2763), BUNSPEC);
					{
						BgL_localzf2fromzf2_bglt BgL_auxz00_3764;

						{
							obj_t BgL_auxz00_3765;

							{	/* Effect/cgraph.scm 21 */
								BgL_objectz00_bglt BgL_tmpz00_3766;

								BgL_tmpz00_3766 = ((BgL_objectz00_bglt) BgL_new1186z00_2764);
								BgL_auxz00_3765 = BGL_OBJECT_WIDENING(BgL_tmpz00_3766);
							}
							BgL_auxz00_3764 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3765);
						}
						((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3764))->
								BgL_fromz00) = ((obj_t) BgL_from1112z00_2566), BUNSPEC);
					}
					return BgL_new1186z00_2764;
				}
			}
		}

	}



/* &lambda1491 */
	obj_t BGl_z62lambda1491z62zzeffect_cgraphz00(obj_t BgL_envz00_2567,
		obj_t BgL_oz00_2568, obj_t BgL_vz00_2569)
	{
		{	/* Effect/cgraph.scm 21 */
			{
				BgL_localzf2fromzf2_bglt BgL_auxz00_3771;

				{
					obj_t BgL_auxz00_3772;

					{	/* Effect/cgraph.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_3773;

						BgL_tmpz00_3773 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2568));
						BgL_auxz00_3772 = BGL_OBJECT_WIDENING(BgL_tmpz00_3773);
					}
					BgL_auxz00_3771 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3772);
				}
				return
					((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3771))->
						BgL_fromz00) = ((obj_t) BgL_vz00_2569), BUNSPEC);
			}
		}

	}



/* &lambda1490 */
	obj_t BGl_z62lambda1490z62zzeffect_cgraphz00(obj_t BgL_envz00_2570,
		obj_t BgL_oz00_2571)
	{
		{	/* Effect/cgraph.scm 21 */
			{
				BgL_localzf2fromzf2_bglt BgL_auxz00_3779;

				{
					obj_t BgL_auxz00_3780;

					{	/* Effect/cgraph.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_3781;

						BgL_tmpz00_3781 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2571));
						BgL_auxz00_3780 = BGL_OBJECT_WIDENING(BgL_tmpz00_3781);
					}
					BgL_auxz00_3779 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3780);
				}
				return
					(((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3779))->BgL_fromz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_proc1918z00zzeffect_cgraphz00, BGl_nodez00zzast_nodez00,
				BGl_string1919z00zzeffect_cgraphz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_proc1920z00zzeffect_cgraphz00, BGl_variablez00zzast_varz00,
				BGl_string1921z00zzeffect_cgraphz00);
		}

	}



/* &save-call!1354 */
	obj_t BGl_z62savezd2callz121354za2zzeffect_cgraphz00(obj_t BgL_envz00_2574,
		obj_t BgL_calleez00_2575, obj_t BgL_ownerz00_2576)
	{
		{	/* Effect/cgraph.scm 211 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 7)),
				BGl_string1922z00zzeffect_cgraphz00,
				((obj_t) ((BgL_variablez00_bglt) BgL_calleez00_2575)));
		}

	}



/* &call-graph!1315 */
	obj_t BGl_z62callzd2graphz121315za2zzeffect_cgraphz00(obj_t BgL_envz00_2577,
		obj_t BgL_nodez00_2578, obj_t BgL_ownerz00_2579)
	{
		{	/* Effect/cgraph.scm 38 */
			return CNST_TABLE_REF(((long) 8));
		}

	}



/* call-graph! */
	obj_t BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_nodez00_bglt
		BgL_nodez00_138, BgL_variablez00_bglt BgL_ownerz00_139)
	{
		{	/* Effect/cgraph.scm 38 */
			{	/* Effect/cgraph.scm 38 */
				obj_t BgL_method1316z00_1661;

				{	/* Effect/cgraph.scm 38 */
					obj_t BgL_res1884z00_2212;

					{	/* Effect/cgraph.scm 38 */
						long BgL_objzd2classzd2numz00_2177;

						{	/* Effect/cgraph.scm 38 */
							long BgL_res1874z00_2180;

							BgL_res1874z00_2180 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_138));
							BgL_objzd2classzd2numz00_2177 = BgL_res1874z00_2180;
						}
						{	/* Effect/cgraph.scm 38 */
							obj_t BgL_arg1813z00_2178;

							BgL_arg1813z00_2178 =
								PROCEDURE_REF(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
								(int) (((long) 1)));
							{	/* Effect/cgraph.scm 38 */
								int BgL_offsetz00_2182;

								BgL_offsetz00_2182 = (int) (BgL_objzd2classzd2numz00_2177);
								{	/* Effect/cgraph.scm 38 */
									long BgL_offsetz00_2183;

									BgL_offsetz00_2183 =
										((long) (BgL_offsetz00_2182) - OBJECT_TYPE);
									{	/* Effect/cgraph.scm 38 */
										long BgL_modz00_2184;

										BgL_modz00_2184 =
											(BgL_offsetz00_2183 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Effect/cgraph.scm 38 */
											long BgL_restz00_2186;

											BgL_restz00_2186 =
												(BgL_offsetz00_2183 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Effect/cgraph.scm 38 */

												{	/* Effect/cgraph.scm 38 */
													obj_t BgL_bucketz00_2188;

													BgL_bucketz00_2188 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2178), BgL_modz00_2184);
													BgL_res1884z00_2212 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2188), BgL_restz00_2186);
					}}}}}}}}
					BgL_method1316z00_1661 = BgL_res1884z00_2212;
				}
				return
					PROCEDURE_ENTRY(BgL_method1316z00_1661) (BgL_method1316z00_1661,
					((obj_t) BgL_nodez00_138), ((obj_t) BgL_ownerz00_139), BEOA);
			}
		}

	}



/* &call-graph! */
	obj_t BGl_z62callzd2graphz12za2zzeffect_cgraphz00(obj_t BgL_envz00_2580,
		obj_t BgL_nodez00_2581, obj_t BgL_ownerz00_2582)
	{
		{	/* Effect/cgraph.scm 38 */
			return
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(
				((BgL_nodez00_bglt) BgL_nodez00_2581),
				((BgL_variablez00_bglt) BgL_ownerz00_2582));
		}

	}



/* save-call! */
	obj_t BGl_savezd2callz12zc0zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_calleez00_178, BgL_variablez00_bglt BgL_ownerz00_179)
	{
		{	/* Effect/cgraph.scm 211 */
			{	/* Effect/cgraph.scm 211 */
				obj_t BgL_method1356z00_1662;

				{	/* Effect/cgraph.scm 211 */
					obj_t BgL_res1895z00_2249;

					{	/* Effect/cgraph.scm 211 */
						long BgL_objzd2classzd2numz00_2214;

						{	/* Effect/cgraph.scm 211 */
							long BgL_res1885z00_2217;

							BgL_res1885z00_2217 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_calleez00_178));
							BgL_objzd2classzd2numz00_2214 = BgL_res1885z00_2217;
						}
						{	/* Effect/cgraph.scm 211 */
							obj_t BgL_arg1813z00_2215;

							BgL_arg1813z00_2215 =
								PROCEDURE_REF(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
								(int) (((long) 1)));
							{	/* Effect/cgraph.scm 211 */
								int BgL_offsetz00_2219;

								BgL_offsetz00_2219 = (int) (BgL_objzd2classzd2numz00_2214);
								{	/* Effect/cgraph.scm 211 */
									long BgL_offsetz00_2220;

									BgL_offsetz00_2220 =
										((long) (BgL_offsetz00_2219) - OBJECT_TYPE);
									{	/* Effect/cgraph.scm 211 */
										long BgL_modz00_2221;

										BgL_modz00_2221 =
											(BgL_offsetz00_2220 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Effect/cgraph.scm 211 */
											long BgL_restz00_2223;

											BgL_restz00_2223 =
												(BgL_offsetz00_2220 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Effect/cgraph.scm 211 */

												{	/* Effect/cgraph.scm 211 */
													obj_t BgL_bucketz00_2225;

													BgL_bucketz00_2225 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2215), BgL_modz00_2221);
													BgL_res1895z00_2249 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2225), BgL_restz00_2223);
					}}}}}}}}
					BgL_method1356z00_1662 = BgL_res1895z00_2249;
				}
				return
					PROCEDURE_ENTRY(BgL_method1356z00_1662) (BgL_method1356z00_1662,
					((obj_t) BgL_calleez00_178), ((obj_t) BgL_ownerz00_179), BEOA);
			}
		}

	}



/* &save-call! */
	obj_t BGl_z62savezd2callz12za2zzeffect_cgraphz00(obj_t BgL_envz00_2583,
		obj_t BgL_calleez00_2584, obj_t BgL_ownerz00_2585)
	{
		{	/* Effect/cgraph.scm 211 */
			return
				BGl_savezd2callz12zc0zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_calleez00_2584),
				((BgL_variablez00_bglt) BgL_ownerz00_2585));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1923z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_syncz00zzast_nodez00, BGl_proc1925z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_appz00zzast_nodez00, BGl_proc1926z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1927z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1928z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_externz00zzast_nodez00, BGl_proc1929z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_castz00zzast_nodez00, BGl_proc1930z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_setqz00zzast_nodez00, BGl_proc1931z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1932z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_failz00zzast_nodez00, BGl_proc1933z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_switchz00zzast_nodez00, BGl_proc1934z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1935z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1936z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1937z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1938z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1939z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1940z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1941z00zzeffect_cgraphz00,
				BGl_string1924z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_globalz00zzast_varz00, BGl_proc1942z00zzeffect_cgraphz00,
				BGl_string1943z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_globalzf2fromzf2zzeffect_cgraphz00,
				BGl_proc1944z00zzeffect_cgraphz00, BGl_string1943z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_localz00zzast_varz00, BGl_proc1945z00zzeffect_cgraphz00,
				BGl_string1943z00zzeffect_cgraphz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_localzf2fromzf2zzeffect_cgraphz00,
				BGl_proc1946z00zzeffect_cgraphz00, BGl_string1943z00zzeffect_cgraphz00);
		}

	}



/* &save-call!-local/fro1364 */
	obj_t BGl_z62savezd2callz12zd2localzf2fro1364z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2608, obj_t BgL_calleez00_2609, obj_t BgL_ownerz00_2610)
	{
		{	/* Effect/cgraph.scm 242 */
			{	/* Effect/cgraph.scm 244 */
				bool_t BgL_test2084z00_3886;

				{	/* Effect/cgraph.scm 244 */
					obj_t BgL_arg1745z00_2779;

					{
						BgL_localzf2fromzf2_bglt BgL_auxz00_3887;

						{
							obj_t BgL_auxz00_3888;

							{	/* Effect/cgraph.scm 244 */
								BgL_objectz00_bglt BgL_tmpz00_3889;

								BgL_tmpz00_3889 =
									((BgL_objectz00_bglt)
									((BgL_localz00_bglt) BgL_calleez00_2609));
								BgL_auxz00_3888 = BGL_OBJECT_WIDENING(BgL_tmpz00_3889);
							}
							BgL_auxz00_3887 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3888);
						}
						BgL_arg1745z00_2779 =
							(((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3887))->
							BgL_fromz00);
					}
					BgL_test2084z00_3886 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_ownerz00_2610,
							BgL_arg1745z00_2779));
				}
				if (BgL_test2084z00_3886)
					{	/* Effect/cgraph.scm 244 */
						return BFALSE;
					}
				else
					{
						obj_t BgL_auxz00_3904;
						BgL_localzf2fromzf2_bglt BgL_auxz00_3897;

						{	/* Effect/cgraph.scm 245 */
							obj_t BgL_arg1744z00_2780;

							{
								BgL_localzf2fromzf2_bglt BgL_auxz00_3905;

								{
									obj_t BgL_auxz00_3906;

									{	/* Effect/cgraph.scm 245 */
										BgL_objectz00_bglt BgL_tmpz00_3907;

										BgL_tmpz00_3907 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_calleez00_2609));
										BgL_auxz00_3906 = BGL_OBJECT_WIDENING(BgL_tmpz00_3907);
									}
									BgL_auxz00_3905 =
										((BgL_localzf2fromzf2_bglt) BgL_auxz00_3906);
								}
								BgL_arg1744z00_2780 =
									(((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3905))->
									BgL_fromz00);
							}
							BgL_auxz00_3904 =
								MAKE_YOUNG_PAIR(BgL_ownerz00_2610, BgL_arg1744z00_2780);
						}
						{
							obj_t BgL_auxz00_3898;

							{	/* Effect/cgraph.scm 245 */
								BgL_objectz00_bglt BgL_tmpz00_3899;

								BgL_tmpz00_3899 =
									((BgL_objectz00_bglt)
									((BgL_localz00_bglt) BgL_calleez00_2609));
								BgL_auxz00_3898 = BGL_OBJECT_WIDENING(BgL_tmpz00_3899);
							}
							BgL_auxz00_3897 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3898);
						}
						return
							((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3897))->
								BgL_fromz00) = ((obj_t) BgL_auxz00_3904), BUNSPEC);
					}
			}
		}

	}



/* &save-call!-local1362 */
	obj_t BGl_z62savezd2callz12zd2local1362z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2611, obj_t BgL_calleez00_2612, obj_t BgL_ownerz00_2613)
	{
		{	/* Effect/cgraph.scm 236 */
			{	/* Effect/cgraph.scm 237 */
				BgL_localz00_bglt BgL_arg1740z00_2782;

				{	/* Effect/cgraph.scm 237 */
					BgL_localzf2fromzf2_bglt BgL_wide1180z00_2783;

					BgL_wide1180z00_2783 =
						((BgL_localzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzf2fromzf2_bgl))));
					{	/* Effect/cgraph.scm 237 */
						obj_t BgL_auxz00_3920;
						BgL_objectz00_bglt BgL_tmpz00_3916;

						BgL_auxz00_3920 = ((obj_t) BgL_wide1180z00_2783);
						BgL_tmpz00_3916 =
							((BgL_objectz00_bglt)
							((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_calleez00_2612)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3916, BgL_auxz00_3920);
					}
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_calleez00_2612)));
					{	/* Effect/cgraph.scm 237 */
						long BgL_arg1741z00_2784;

						{	/* Effect/cgraph.scm 237 */
							long BgL_res1904z00_2785;

							BgL_res1904z00_2785 =
								BGL_CLASS_INDEX(BGl_localzf2fromzf2zzeffect_cgraphz00);
							BgL_arg1741z00_2784 = BgL_res1904z00_2785;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_localz00_bglt)
									((BgL_localz00_bglt) BgL_calleez00_2612))),
							BgL_arg1741z00_2784);
					}
					((BgL_localz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_calleez00_2612)));
				}
				{
					BgL_localzf2fromzf2_bglt BgL_auxz00_3934;

					{
						obj_t BgL_auxz00_3935;

						{	/* Effect/cgraph.scm 237 */
							BgL_objectz00_bglt BgL_tmpz00_3936;

							BgL_tmpz00_3936 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_calleez00_2612)));
							BgL_auxz00_3935 = BGL_OBJECT_WIDENING(BgL_tmpz00_3936);
						}
						BgL_auxz00_3934 = ((BgL_localzf2fromzf2_bglt) BgL_auxz00_3935);
					}
					((((BgL_localzf2fromzf2_bglt) COBJECT(BgL_auxz00_3934))->
							BgL_fromz00) = ((obj_t) BNIL), BUNSPEC);
				}
				BgL_arg1740z00_2782 =
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_calleez00_2612));
				return
					BGl_savezd2callz12zc0zzeffect_cgraphz00(
					((BgL_variablez00_bglt) BgL_arg1740z00_2782),
					((BgL_variablez00_bglt) BgL_ownerz00_2613));
			}
		}

	}



/* &save-call!-global/fr1360 */
	obj_t BGl_z62savezd2callz12zd2globalzf2fr1360z82zzeffect_cgraphz00(obj_t
		BgL_envz00_2614, obj_t BgL_calleez00_2615, obj_t BgL_ownerz00_2616)
	{
		{	/* Effect/cgraph.scm 228 */
			{	/* Effect/cgraph.scm 230 */
				bool_t BgL_test2085z00_3948;

				{	/* Effect/cgraph.scm 230 */
					obj_t BgL_arg1739z00_2787;

					{
						BgL_globalzf2fromzf2_bglt BgL_auxz00_3949;

						{
							obj_t BgL_auxz00_3950;

							{	/* Effect/cgraph.scm 230 */
								BgL_objectz00_bglt BgL_tmpz00_3951;

								BgL_tmpz00_3951 =
									((BgL_objectz00_bglt)
									((BgL_globalz00_bglt) BgL_calleez00_2615));
								BgL_auxz00_3950 = BGL_OBJECT_WIDENING(BgL_tmpz00_3951);
							}
							BgL_auxz00_3949 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3950);
						}
						BgL_arg1739z00_2787 =
							(((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3949))->
							BgL_fromz00);
					}
					BgL_test2085z00_3948 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_ownerz00_2616,
							BgL_arg1739z00_2787));
				}
				if (BgL_test2085z00_3948)
					{	/* Effect/cgraph.scm 230 */
						return BFALSE;
					}
				else
					{
						obj_t BgL_auxz00_3966;
						BgL_globalzf2fromzf2_bglt BgL_auxz00_3959;

						{	/* Effect/cgraph.scm 231 */
							obj_t BgL_arg1738z00_2788;

							{
								BgL_globalzf2fromzf2_bglt BgL_auxz00_3967;

								{
									obj_t BgL_auxz00_3968;

									{	/* Effect/cgraph.scm 231 */
										BgL_objectz00_bglt BgL_tmpz00_3969;

										BgL_tmpz00_3969 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_calleez00_2615));
										BgL_auxz00_3968 = BGL_OBJECT_WIDENING(BgL_tmpz00_3969);
									}
									BgL_auxz00_3967 =
										((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3968);
								}
								BgL_arg1738z00_2788 =
									(((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3967))->
									BgL_fromz00);
							}
							BgL_auxz00_3966 =
								MAKE_YOUNG_PAIR(BgL_ownerz00_2616, BgL_arg1738z00_2788);
						}
						{
							obj_t BgL_auxz00_3960;

							{	/* Effect/cgraph.scm 231 */
								BgL_objectz00_bglt BgL_tmpz00_3961;

								BgL_tmpz00_3961 =
									((BgL_objectz00_bglt)
									((BgL_globalz00_bglt) BgL_calleez00_2615));
								BgL_auxz00_3960 = BGL_OBJECT_WIDENING(BgL_tmpz00_3961);
							}
							BgL_auxz00_3959 = ((BgL_globalzf2fromzf2_bglt) BgL_auxz00_3960);
						}
						return
							((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_3959))->
								BgL_fromz00) = ((obj_t) BgL_auxz00_3966), BUNSPEC);
					}
			}
		}

	}



/* &save-call!-global1358 */
	obj_t BGl_z62savezd2callz12zd2global1358z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2617, obj_t BgL_calleez00_2618, obj_t BgL_ownerz00_2619)
	{
		{	/* Effect/cgraph.scm 216 */
			{	/* Effect/cgraph.scm 217 */
				BgL_valuez00_bglt BgL_funz00_2790;

				BgL_funz00_2790 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_calleez00_2618))))->BgL_valuez00);
				{	/* Effect/cgraph.scm 218 */
					bool_t BgL_test2086z00_3980;

					{	/* Effect/cgraph.scm 218 */
						bool_t BgL_test2087z00_3981;

						{	/* Effect/cgraph.scm 218 */
							bool_t BgL_res1901z00_2791;

							BgL_res1901z00_2791 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_2790), BGl_cfunz00zzast_varz00);
							BgL_test2087z00_3981 = BgL_res1901z00_2791;
						}
						if (BgL_test2087z00_3981)
							{	/* Effect/cgraph.scm 218 */
								BgL_test2086z00_3980 = ((bool_t) 1);
							}
						else
							{	/* Effect/cgraph.scm 219 */
								bool_t BgL_test2088z00_3984;

								{	/* Effect/cgraph.scm 219 */
									bool_t BgL_res1902z00_2792;

									BgL_res1902z00_2792 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_2790), BGl_sfunz00zzast_varz00);
									BgL_test2088z00_3984 = BgL_res1902z00_2792;
								}
								if (BgL_test2088z00_3984)
									{	/* Effect/cgraph.scm 219 */
										BgL_test2086z00_3980 =
											(
											(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt) BgL_calleez00_2618)))->
												BgL_importz00) == CNST_TABLE_REF(((long) 9)));
									}
								else
									{	/* Effect/cgraph.scm 219 */
										BgL_test2086z00_3980 = ((bool_t) 0);
									}
							}
					}
					if (BgL_test2086z00_3980)
						{	/* Effect/cgraph.scm 218 */
							if (CBOOL(
									(((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt) BgL_funz00_2790)))->
										BgL_sidezd2effectzd2)))
								{	/* Effect/cgraph.scm 221 */
									return
										BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
										((BgL_variablez00_bglt) BgL_ownerz00_2619));
								}
							else
								{	/* Effect/cgraph.scm 221 */
									return BFALSE;
								}
						}
					else
						{	/* Effect/cgraph.scm 223 */
							BgL_globalz00_bglt BgL_arg1728z00_2793;

							{	/* Effect/cgraph.scm 223 */
								BgL_globalzf2fromzf2_bglt BgL_wide1175z00_2794;

								BgL_wide1175z00_2794 =
									((BgL_globalzf2fromzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalzf2fromzf2_bgl))));
								{	/* Effect/cgraph.scm 223 */
									obj_t BgL_auxz00_4002;
									BgL_objectz00_bglt BgL_tmpz00_3998;

									BgL_auxz00_4002 = ((obj_t) BgL_wide1175z00_2794);
									BgL_tmpz00_3998 =
										((BgL_objectz00_bglt)
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_calleez00_2618)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3998, BgL_auxz00_4002);
								}
								((BgL_objectz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_calleez00_2618)));
								{	/* Effect/cgraph.scm 223 */
									long BgL_arg1729z00_2795;

									{	/* Effect/cgraph.scm 223 */
										long BgL_res1903z00_2796;

										BgL_res1903z00_2796 =
											BGL_CLASS_INDEX(BGl_globalzf2fromzf2zzeffect_cgraphz00);
										BgL_arg1729z00_2795 = BgL_res1903z00_2796;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_calleez00_2618))),
										BgL_arg1729z00_2795);
								}
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_calleez00_2618)));
							}
							{
								BgL_globalzf2fromzf2_bglt BgL_auxz00_4016;

								{
									obj_t BgL_auxz00_4017;

									{	/* Effect/cgraph.scm 223 */
										BgL_objectz00_bglt BgL_tmpz00_4018;

										BgL_tmpz00_4018 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_calleez00_2618)));
										BgL_auxz00_4017 = BGL_OBJECT_WIDENING(BgL_tmpz00_4018);
									}
									BgL_auxz00_4016 =
										((BgL_globalzf2fromzf2_bglt) BgL_auxz00_4017);
								}
								((((BgL_globalzf2fromzf2_bglt) COBJECT(BgL_auxz00_4016))->
										BgL_fromz00) = ((obj_t) BNIL), BUNSPEC);
							}
							BgL_arg1728z00_2793 =
								((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_calleez00_2618));
							return
								BGl_savezd2callz12zc0zzeffect_cgraphz00(
								((BgL_variablez00_bglt) BgL_arg1728z00_2793),
								((BgL_variablez00_bglt) BgL_ownerz00_2619));
						}
				}
			}
		}

	}



/* &call-graph!-box-set!1353 */
	obj_t BGl_z62callzd2graphz12zd2boxzd2setz121353zb0zzeffect_cgraphz00(obj_t
		BgL_envz00_2620, obj_t BgL_nodez00_2621, obj_t BgL_ownerz00_2622)
	{
		{	/* Effect/cgraph.scm 196 */
			BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_ownerz00_2622));
			{	/* Effect/cgraph.scm 199 */
				BgL_varz00_bglt BgL_arg1712z00_2798;

				BgL_arg1712z00_2798 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2621)))->BgL_varz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(
					((BgL_nodez00_bglt) BgL_arg1712z00_2798),
					((BgL_variablez00_bglt) BgL_ownerz00_2622));
			}
			{	/* Effect/cgraph.scm 200 */
				BgL_nodez00_bglt BgL_arg1719z00_2799;

				BgL_arg1719z00_2799 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2621)))->BgL_valuez00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1719z00_2799,
					((BgL_variablez00_bglt) BgL_ownerz00_2622));
			}
		}

	}



/* &call-graph!-box-ref1351 */
	obj_t BGl_z62callzd2graphz12zd2boxzd2ref1351za2zzeffect_cgraphz00(obj_t
		BgL_envz00_2623, obj_t BgL_nodez00_2624, obj_t BgL_ownerz00_2625)
	{
		{	/* Effect/cgraph.scm 188 */
			{	/* Effect/cgraph.scm 189 */
				BgL_varz00_bglt BgL_arg1711z00_2801;

				BgL_arg1711z00_2801 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2624)))->BgL_varz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(
					((BgL_nodez00_bglt) BgL_arg1711z00_2801),
					((BgL_variablez00_bglt) BgL_ownerz00_2625));
			}
		}

	}



/* &call-graph!-make-box1349 */
	obj_t BGl_z62callzd2graphz12zd2makezd2box1349za2zzeffect_cgraphz00(obj_t
		BgL_envz00_2626, obj_t BgL_nodez00_2627, obj_t BgL_ownerz00_2628)
	{
		{	/* Effect/cgraph.scm 182 */
			{	/* Effect/cgraph.scm 183 */
				BgL_nodez00_bglt BgL_arg1708z00_2803;

				BgL_arg1708z00_2803 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2627)))->BgL_valuez00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1708z00_2803,
					((BgL_variablez00_bglt) BgL_ownerz00_2628));
			}
		}

	}



/* &call-graph!-jump-ex-1347 */
	obj_t BGl_z62callzd2graphz12zd2jumpzd2exzd21347z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2629, obj_t BgL_nodez00_2630, obj_t BgL_ownerz00_2631)
	{
		{	/* Effect/cgraph.scm 173 */
			BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_ownerz00_2631));
			{	/* Effect/cgraph.scm 176 */
				BgL_nodez00_bglt BgL_arg1704z00_2805;

				BgL_arg1704z00_2805 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2630)))->BgL_exitz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1704z00_2805,
					((BgL_variablez00_bglt) BgL_ownerz00_2631));
			}
			{	/* Effect/cgraph.scm 177 */
				BgL_nodez00_bglt BgL_arg1707z00_2806;

				BgL_arg1707z00_2806 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2630)))->BgL_valuez00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1707z00_2806,
					((BgL_variablez00_bglt) BgL_ownerz00_2631));
			}
		}

	}



/* &call-graph!-set-ex-i1345 */
	obj_t BGl_z62callzd2graphz12zd2setzd2exzd2i1345z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2632, obj_t BgL_nodez00_2633, obj_t BgL_ownerz00_2634)
	{
		{	/* Effect/cgraph.scm 165 */
			BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_ownerz00_2634));
			{	/* Effect/cgraph.scm 168 */
				BgL_nodez00_bglt BgL_arg1697z00_2808;

				BgL_arg1697z00_2808 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2633)))->BgL_bodyz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1697z00_2808,
					((BgL_variablez00_bglt) BgL_ownerz00_2634));
			}
		}

	}



/* &call-graph!-let-var1343 */
	obj_t BGl_z62callzd2graphz12zd2letzd2var1343za2zzeffect_cgraphz00(obj_t
		BgL_envz00_2635, obj_t BgL_nodez00_2636, obj_t BgL_ownerz00_2637)
	{
		{	/* Effect/cgraph.scm 155 */
			{	/* Effect/cgraph.scm 156 */
				bool_t BgL_tmpz00_4066;

				{	/* Effect/cgraph.scm 157 */
					BgL_nodez00_bglt BgL_arg1692z00_2810;

					BgL_arg1692z00_2810 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2636)))->BgL_bodyz00);
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1692z00_2810,
						((BgL_variablez00_bglt) BgL_ownerz00_2637));
				}
				{	/* Effect/cgraph.scm 158 */
					obj_t BgL_g1308z00_2811;

					BgL_g1308z00_2811 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2636)))->BgL_bindingsz00);
					{
						obj_t BgL_l1306z00_2813;

						BgL_l1306z00_2813 = BgL_g1308z00_2811;
					BgL_zc3z04anonymousza31693ze3z87_2812:
						if (PAIRP(BgL_l1306z00_2813))
							{	/* Effect/cgraph.scm 158 */
								{	/* Effect/cgraph.scm 159 */
									obj_t BgL_bindingz00_2814;

									BgL_bindingz00_2814 = CAR(BgL_l1306z00_2813);
									{	/* Effect/cgraph.scm 159 */
										obj_t BgL_arg1695z00_2815;

										BgL_arg1695z00_2815 = CDR(((obj_t) BgL_bindingz00_2814));
										BGl_callzd2graphz12zc0zzeffect_cgraphz00(
											((BgL_nodez00_bglt) BgL_arg1695z00_2815),
											((BgL_variablez00_bglt) BgL_ownerz00_2637));
									}
								}
								{
									obj_t BgL_l1306z00_4081;

									BgL_l1306z00_4081 = CDR(BgL_l1306z00_2813);
									BgL_l1306z00_2813 = BgL_l1306z00_4081;
									goto BgL_zc3z04anonymousza31693ze3z87_2812;
								}
							}
						else
							{	/* Effect/cgraph.scm 158 */
								BgL_tmpz00_4066 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4066);
			}
		}

	}



/* &call-graph!-let-fun1341 */
	obj_t BGl_z62callzd2graphz12zd2letzd2fun1341za2zzeffect_cgraphz00(obj_t
		BgL_envz00_2638, obj_t BgL_nodez00_2639, obj_t BgL_ownerz00_2640)
	{
		{	/* Effect/cgraph.scm 145 */
			{	/* Effect/cgraph.scm 147 */
				obj_t BgL_g1305z00_2817;

				BgL_g1305z00_2817 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2639)))->BgL_localsz00);
				{
					obj_t BgL_l1303z00_2819;

					BgL_l1303z00_2819 = BgL_g1305z00_2817;
				BgL_zc3z04anonymousza31685ze3z87_2818:
					if (PAIRP(BgL_l1303z00_2819))
						{	/* Effect/cgraph.scm 147 */
							{	/* Effect/cgraph.scm 148 */
								obj_t BgL_localz00_2820;

								BgL_localz00_2820 = CAR(BgL_l1303z00_2819);
								BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
									((BgL_variablez00_bglt) BgL_localz00_2820));
							}
							{
								obj_t BgL_l1303z00_4091;

								BgL_l1303z00_4091 = CDR(BgL_l1303z00_2819);
								BgL_l1303z00_2819 = BgL_l1303z00_4091;
								goto BgL_zc3z04anonymousza31685ze3z87_2818;
							}
						}
					else
						{	/* Effect/cgraph.scm 147 */
							((bool_t) 1);
						}
				}
			}
			{	/* Effect/cgraph.scm 150 */
				BgL_nodez00_bglt BgL_arg1688z00_2821;

				BgL_arg1688z00_2821 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2639)))->BgL_bodyz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1688z00_2821,
					((BgL_variablez00_bglt) BgL_ownerz00_2640));
			}
		}

	}



/* &call-graph!-switch1339 */
	obj_t BGl_z62callzd2graphz12zd2switch1339z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2641, obj_t BgL_nodez00_2642, obj_t BgL_ownerz00_2643)
	{
		{	/* Effect/cgraph.scm 135 */
			{	/* Effect/cgraph.scm 136 */
				bool_t BgL_tmpz00_4097;

				{	/* Effect/cgraph.scm 137 */
					BgL_nodez00_bglt BgL_arg1667z00_2823;

					BgL_arg1667z00_2823 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2642)))->BgL_testz00);
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1667z00_2823,
						((BgL_variablez00_bglt) BgL_ownerz00_2643));
				}
				{	/* Effect/cgraph.scm 138 */
					obj_t BgL_g1302z00_2824;

					BgL_g1302z00_2824 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2642)))->BgL_clausesz00);
					{
						obj_t BgL_l1300z00_2826;

						BgL_l1300z00_2826 = BgL_g1302z00_2824;
					BgL_zc3z04anonymousza31668ze3z87_2825:
						if (PAIRP(BgL_l1300z00_2826))
							{	/* Effect/cgraph.scm 138 */
								{	/* Effect/cgraph.scm 139 */
									obj_t BgL_clausez00_2827;

									BgL_clausez00_2827 = CAR(BgL_l1300z00_2826);
									{	/* Effect/cgraph.scm 139 */
										obj_t BgL_arg1672z00_2828;

										BgL_arg1672z00_2828 = CDR(((obj_t) BgL_clausez00_2827));
										BGl_callzd2graphz12zc0zzeffect_cgraphz00(
											((BgL_nodez00_bglt) BgL_arg1672z00_2828),
											((BgL_variablez00_bglt) BgL_ownerz00_2643));
									}
								}
								{
									obj_t BgL_l1300z00_4112;

									BgL_l1300z00_4112 = CDR(BgL_l1300z00_2826);
									BgL_l1300z00_2826 = BgL_l1300z00_4112;
									goto BgL_zc3z04anonymousza31668ze3z87_2825;
								}
							}
						else
							{	/* Effect/cgraph.scm 138 */
								BgL_tmpz00_4097 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4097);
			}
		}

	}



/* &call-graph!-fail1337 */
	obj_t BGl_z62callzd2graphz12zd2fail1337z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2644, obj_t BgL_nodez00_2645, obj_t BgL_ownerz00_2646)
	{
		{	/* Effect/cgraph.scm 125 */
			BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_ownerz00_2646));
			{	/* Effect/cgraph.scm 128 */
				BgL_nodez00_bglt BgL_arg1662z00_2830;

				BgL_arg1662z00_2830 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2645)))->BgL_procz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1662z00_2830,
					((BgL_variablez00_bglt) BgL_ownerz00_2646));
			}
			{	/* Effect/cgraph.scm 129 */
				BgL_nodez00_bglt BgL_arg1663z00_2831;

				BgL_arg1663z00_2831 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2645)))->BgL_msgz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1663z00_2831,
					((BgL_variablez00_bglt) BgL_ownerz00_2646));
			}
			{	/* Effect/cgraph.scm 130 */
				BgL_nodez00_bglt BgL_arg1664z00_2832;

				BgL_arg1664z00_2832 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2645)))->BgL_objz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1664z00_2832,
					((BgL_variablez00_bglt) BgL_ownerz00_2646));
			}
		}

	}



/* &call-graph!-conditio1335 */
	obj_t BGl_z62callzd2graphz12zd2conditio1335z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2647, obj_t BgL_nodez00_2648, obj_t BgL_ownerz00_2649)
	{
		{	/* Effect/cgraph.scm 116 */
			{	/* Effect/cgraph.scm 118 */
				BgL_nodez00_bglt BgL_arg1641z00_2834;

				BgL_arg1641z00_2834 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2648)))->BgL_testz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1641z00_2834,
					((BgL_variablez00_bglt) BgL_ownerz00_2649));
			}
			{	/* Effect/cgraph.scm 119 */
				BgL_nodez00_bglt BgL_arg1644z00_2835;

				BgL_arg1644z00_2835 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2648)))->BgL_truez00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1644z00_2835,
					((BgL_variablez00_bglt) BgL_ownerz00_2649));
			}
			{	/* Effect/cgraph.scm 120 */
				BgL_nodez00_bglt BgL_arg1652z00_2836;

				BgL_arg1652z00_2836 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2648)))->BgL_falsez00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1652z00_2836,
					((BgL_variablez00_bglt) BgL_ownerz00_2649));
			}
		}

	}



/* &call-graph!-setq1332 */
	obj_t BGl_z62callzd2graphz12zd2setq1332z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2650, obj_t BgL_nodez00_2651, obj_t BgL_ownerz00_2652)
	{
		{	/* Effect/cgraph.scm 106 */
			{	/* Effect/cgraph.scm 108 */
				bool_t BgL_test2093z00_4141;

				if (BGl_isazf3zf3zz__objectz00(BgL_ownerz00_2652,
						BGl_localz00zzast_varz00))
					{	/* Effect/cgraph.scm 108 */
						BgL_test2093z00_4141 = ((bool_t) 1);
					}
				else
					{	/* Effect/cgraph.scm 108 */
						BgL_variablez00_bglt BgL_arg1631z00_2838;

						BgL_arg1631z00_2838 =
							(((BgL_varz00_bglt) COBJECT(
									(((BgL_setqz00_bglt) COBJECT(
												((BgL_setqz00_bglt) BgL_nodez00_2651)))->BgL_varz00)))->
							BgL_variablez00);
						{	/* Effect/cgraph.scm 108 */
							bool_t BgL_res1897z00_2839;

							BgL_res1897z00_2839 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1631z00_2838), BGl_globalz00zzast_varz00);
							BgL_test2093z00_4141 = BgL_res1897z00_2839;
						}
					}
				if (BgL_test2093z00_4141)
					{	/* Effect/cgraph.scm 108 */
						BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
							((BgL_variablez00_bglt) BgL_ownerz00_2652));
					}
				else
					{	/* Effect/cgraph.scm 108 */
						BFALSE;
					}
			}
			{	/* Effect/cgraph.scm 110 */
				BgL_varz00_bglt BgL_arg1639z00_2840;

				BgL_arg1639z00_2840 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2651)))->BgL_varz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(
					((BgL_nodez00_bglt) BgL_arg1639z00_2840),
					((BgL_variablez00_bglt) BgL_ownerz00_2652));
			}
			{	/* Effect/cgraph.scm 111 */
				BgL_nodez00_bglt BgL_arg1640z00_2841;

				BgL_arg1640z00_2841 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2651)))->BgL_valuez00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1640z00_2841,
					((BgL_variablez00_bglt) BgL_ownerz00_2652));
			}
		}

	}



/* &call-graph!-cast1330 */
	obj_t BGl_z62callzd2graphz12zd2cast1330z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2653, obj_t BgL_nodez00_2654, obj_t BgL_ownerz00_2655)
	{
		{	/* Effect/cgraph.scm 95 */
			{	/* Effect/cgraph.scm 97 */
				BgL_nodez00_bglt BgL_arg1624z00_2843;

				BgL_arg1624z00_2843 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2654)))->BgL_argz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1624z00_2843,
					((BgL_variablez00_bglt) BgL_ownerz00_2655));
			}
		}

	}



/* &call-graph!-extern1328 */
	obj_t BGl_z62callzd2graphz12zd2extern1328z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2656, obj_t BgL_nodez00_2657, obj_t BgL_ownerz00_2658)
	{
		{	/* Effect/cgraph.scm 86 */
			{	/* Effect/cgraph.scm 87 */
				bool_t BgL_tmpz00_4164;

				if (CBOOL(
						(((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt)
										((BgL_externz00_bglt) BgL_nodez00_2657))))->
							BgL_sidezd2effectzd2)))
					{	/* Effect/cgraph.scm 88 */
						BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
							((BgL_variablez00_bglt) BgL_ownerz00_2658));
					}
				else
					{	/* Effect/cgraph.scm 88 */
						BFALSE;
					}
				BgL_tmpz00_4164 =
					BGl_callzd2graphza2z12z62zzeffect_cgraphz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2657)))->BgL_exprza2za2),
					BgL_ownerz00_2658);
				return BBOOL(BgL_tmpz00_4164);
			}
		}

	}



/* &call-graph!-funcall1326 */
	obj_t BGl_z62callzd2graphz12zd2funcall1326z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2659, obj_t BgL_nodez00_2660, obj_t BgL_ownerz00_2661)
	{
		{	/* Effect/cgraph.scm 77 */
			{	/* Effect/cgraph.scm 78 */
				bool_t BgL_tmpz00_4176;

				BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
					((BgL_variablez00_bglt) BgL_ownerz00_2661));
				{	/* Effect/cgraph.scm 80 */
					BgL_nodez00_bglt BgL_arg1606z00_2846;

					BgL_arg1606z00_2846 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2660)))->BgL_funz00);
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1606z00_2846,
						((BgL_variablez00_bglt) BgL_ownerz00_2661));
				}
				BgL_tmpz00_4176 =
					BGl_callzd2graphza2z12z62zzeffect_cgraphz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2660)))->BgL_argsz00),
					BgL_ownerz00_2661);
				return BBOOL(BgL_tmpz00_4176);
			}
		}

	}



/* &call-graph!-app-ly1324 */
	obj_t BGl_z62callzd2graphz12zd2appzd2ly1324za2zzeffect_cgraphz00(obj_t
		BgL_envz00_2662, obj_t BgL_nodez00_2663, obj_t BgL_ownerz00_2664)
	{
		{	/* Effect/cgraph.scm 68 */
			BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
				((BgL_variablez00_bglt) BgL_ownerz00_2664));
			{	/* Effect/cgraph.scm 71 */
				BgL_nodez00_bglt BgL_arg1604z00_2848;

				BgL_arg1604z00_2848 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2663)))->BgL_funz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1604z00_2848,
					((BgL_variablez00_bglt) BgL_ownerz00_2664));
			}
			{	/* Effect/cgraph.scm 72 */
				BgL_nodez00_bglt BgL_arg1605z00_2849;

				BgL_arg1605z00_2849 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2663)))->BgL_argz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1605z00_2849,
					((BgL_variablez00_bglt) BgL_ownerz00_2664));
			}
		}

	}



/* &call-graph!-app1322 */
	obj_t BGl_z62callzd2graphz12zd2app1322z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2665, obj_t BgL_nodez00_2666, obj_t BgL_ownerz00_2667)
	{
		{	/* Effect/cgraph.scm 58 */
			{	/* Effect/cgraph.scm 59 */
				bool_t BgL_tmpz00_4197;

				{	/* Effect/cgraph.scm 62 */
					BgL_variablez00_bglt BgL_arg1593z00_2851;

					BgL_arg1593z00_2851 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2666)))->BgL_funz00)))->
						BgL_variablez00);
					BGl_savezd2callz12zc0zzeffect_cgraphz00(BgL_arg1593z00_2851,
						((BgL_variablez00_bglt) BgL_ownerz00_2667));
				}
				BgL_tmpz00_4197 =
					BGl_callzd2graphza2z12z62zzeffect_cgraphz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2666)))->BgL_argsz00),
					BgL_ownerz00_2667);
				return BBOOL(BgL_tmpz00_4197);
			}
		}

	}



/* &call-graph!-sync1320 */
	obj_t BGl_z62callzd2graphz12zd2sync1320z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2668, obj_t BgL_nodez00_2669, obj_t BgL_ownerz00_2670)
	{
		{	/* Effect/cgraph.scm 50 */
			{	/* Effect/cgraph.scm 51 */
				BgL_nodez00_bglt BgL_arg1588z00_2853;

				BgL_arg1588z00_2853 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2669)))->BgL_mutexz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1588z00_2853,
					((BgL_variablez00_bglt) BgL_ownerz00_2670));
			}
			{	/* Effect/cgraph.scm 52 */
				BgL_nodez00_bglt BgL_arg1589z00_2854;

				BgL_arg1589z00_2854 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2669)))->BgL_prelockz00);
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1589z00_2854,
					((BgL_variablez00_bglt) BgL_ownerz00_2670));
			}
			{	/* Effect/cgraph.scm 53 */
				BgL_nodez00_bglt BgL_arg1592z00_2855;

				BgL_arg1592z00_2855 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2669)))->BgL_bodyz00);
				return
					BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_arg1592z00_2855,
					((BgL_variablez00_bglt) BgL_ownerz00_2670));
			}
		}

	}



/* &call-graph!-sequence1318 */
	obj_t BGl_z62callzd2graphz12zd2sequence1318z70zzeffect_cgraphz00(obj_t
		BgL_envz00_2671, obj_t BgL_nodez00_2672, obj_t BgL_ownerz00_2673)
	{
		{	/* Effect/cgraph.scm 44 */
			return
				BBOOL(BGl_callzd2graphza2z12z62zzeffect_cgraphz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2672)))->BgL_nodesz00),
					BgL_ownerz00_2673));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00()
	{
		{	/* Effect/cgraph.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1947z00zzeffect_cgraphz00));
		}

	}

#ifdef __cplusplus
}
#endif
