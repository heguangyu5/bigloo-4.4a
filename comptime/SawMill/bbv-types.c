/*===========================================================================*/
/*   (SawMill/bbv-types.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/bbv-types.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                     *BgL_rtl_vlengthz00_bglt;

	typedef struct BgL_rtl_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                        *BgL_rtl_instanceofz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_setfieldz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_constrz00;
	}                 *BgL_rtl_newz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_funsz00;
		obj_t BgL_rettypez00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

	typedef struct BgL_rtl_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_totypez00;
		struct BgL_typez00_bgl *BgL_fromtypez00;
	}                  *BgL_rtl_castz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_rtl_regzf2razf2_bgl
	{
		int BgL_numz00;
		obj_t BgL_colorz00;
		obj_t BgL_coalescez00;
		int BgL_occurrencesz00;
		obj_t BgL_interferez00;
		obj_t BgL_interfere2z00;
	}                      *BgL_rtl_regzf2razf2_bglt;

	typedef struct BgL_regsetz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_lengthz00;
		int BgL_msiza7eza7;
		obj_t BgL_regvz00;
		obj_t BgL_reglz00;
		obj_t BgL_stringz00;
	}                *BgL_regsetz00_bglt;

	typedef struct BgL_blockvz00_bgl
	{
		obj_t BgL_versionsz00;
		long BgL_z52markz52;
	}                *BgL_blockvz00_bglt;

	typedef struct BgL_blocksz00_bgl
	{
		obj_t BgL_ictxz00;
		obj_t BgL_octxsz00;
		long BgL_z52markz52;
		obj_t BgL_z52parentz52;
		obj_t BgL_z52hashz52;
		obj_t BgL_z52blacklistz52;
	}                *BgL_blocksz00_bglt;

	typedef struct BgL_rtl_inszf2bbvzf2_bgl
	{
		obj_t BgL_defz00;
		obj_t BgL_outz00;
		obj_t BgL_inz00;
		obj_t BgL_z52hashz52;
	}                       *BgL_rtl_inszf2bbvzf2_bglt;

	typedef struct BgL_bbvzd2ctxentryzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_rtl_regz00_bgl *BgL_regz00;
		struct BgL_typez00_bgl *BgL_typz00;
		bool_t BgL_flagz00;
		obj_t BgL_valuez00;
		obj_t BgL_aliasesz00;
	}                        *BgL_bbvzd2ctxentryzd2_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2 = BUNSPEC;
	static obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62ctxzd2getzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_vref1735z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2equalzf3zd2rtl_reg1768z91zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_inszf2b1766z63zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_cast_1810z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static BgL_rtl_regz00_bglt
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_vset1798z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2 =
		BUNSPEC;
	static obj_t BGl_z62bbvzd2hashzd2rtl_instanc1739z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_store1794z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62bbvzd2equalzf3zd2rtl_new1800z91zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62dumpzd2rtl_inszf2bbv1703z42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_bbvzd2typeszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2truezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ctxzd2ze3stringz31zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62rtl_inszd2nopzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_regsetz00zzsaw_regsetz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_dumpza2za2zzsaw_defsz00(obj_t, obj_t, int);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32140ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_IMPORT obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_ppzd2intzd2valueze70ze7zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32214ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32109ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_bbvzd2typeszd2();
	static obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_globa1782z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_typeof(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_pragm1806z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2falsezf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2 =
		BUNSPEC;
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_call1802z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_instanceofz00zzsaw_defsz00;
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_setfi1796z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_z62bbvzd2equalzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32129ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_vallo1786z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32162ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62ctxzd2ze3stringz53zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_storeg1741z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT long bgl_symbol_hash_number(obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62lambda2107z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2108z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2boolzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32147ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(obj_t,
		BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_blockSz00zzsaw_bbvzd2typeszd2 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_blockVz00zzsaw_bbvzd2typeszd2 = BUNSPEC;
	static obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t BGl_z62bbvzd2hashzd2rtl_vlength1737z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_cast1808z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2115z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2116z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_cast_nu1757z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_call1749z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2124z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2127z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32270ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_light1804z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2130z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2138z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2139z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32255ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62dumpzd2blockS1705zb0zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2(obj_t,
		BgL_bbvzd2ctxentryzd2_bglt);
	static obj_t BGl_z62lambda2145z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	extern obj_t BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2;
	static obj_t BGl_z62lambda2146z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62bbvzd2equalzf3zd2blockS1764z91zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2153z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	extern obj_t BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62lambda2154z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_lightfu1751z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2gozf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_switc1774z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2160z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2161z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2typeszd2();
	static obj_t BGl_z62bbvzd2hashzd2rtl_fun1719z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_cast1755z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2167z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2168z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62lambda2175z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_loadfun1727z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2176z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2 =
		BUNSPEC;
	static obj_t BGl_z62rtl_inszd2callzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda2184z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda2187z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32098ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_bbvzd2typeszd2(obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda2190z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2typecheckzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2198z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2199z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_valloc1733z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32189ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2atom1711z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2truezf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_loopze70ze7zzsaw_bbvzd2typeszd2(int, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze71ze7zzsaw_bbvzd2typeszd2(int, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze72ze7zzsaw_bbvzd2typeszd2(int, BgL_rtl_regz00_bglt,
		BgL_bbvzd2ctxentryzd2_bglt, obj_t);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2ifnezf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_callzd2predicatezb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_vleng1790z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_insta1792z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_new1747z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt,
		int);
	static obj_t BGl_z62zc3z04anonymousza31909ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2lastzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_dumpzd2marginzd2zzsaw_defsz00(obj_t, int);
	static obj_t BGl_z62bbvzd2hashzd2rtl_return1721z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_loadg1725z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	static obj_t BGl_z62bbvzd2hashzd2rtl_vset1745z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_bbvzd2typeszd2 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62bbvzd2hashzd2type1709z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2typeszd2(int, int, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2typeszd2(BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32200ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2typeszd2();
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_vref1788z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2boolzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl__extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_setfiel1743z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2vlenzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_bbvzd2typeszd2();
	static obj_t BGl__extendzd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static obj_t BGl_z62bbvzd2equalzf3zd2rtl_fun1770z91zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62bbvzd2hashzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_loadi1723z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2loadizf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2indexza2zd2zzsaw_bbvzd2typeszd2 = BUNSPEC;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_newzd2ctxentryze70z35zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t, obj_t);
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_newzd2ctxentryze71z35zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32221ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32117ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2movzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32207ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2 = BUNSPEC;
	static BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2typeszd2();
	static obj_t BGl_z62bbvzd2hashzd2rtl_getfiel1731z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	extern obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_getfi1784z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	static obj_t BGl_refinezd2oneze70z35zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62bbvzd2equalzf31758z43zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_rtl_selectz00zzsaw_defsz00;
	BGL_IMPORT obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32243ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32155ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt);
	static obj_t BGl_z62bbvzd2hashzd2rtl_pragma1753z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62aliaszd2ctxzb0zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_globalr1729z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2equalzf3zd2atom1762z91zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_loadf1780z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bbvzd2hashzd2rtl_reg1717z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	extern obj_t BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2205z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_z62lambda2206z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2falsezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32262ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2lastzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	static obj_t BGl_z62lambda2212z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2213z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2219z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t
		BGl_z62bbvzd2hashzd2rtl_inszf2bbv1715z90zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2branchzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62lambda2220z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvzd2typeszd2(obj_t);
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62lambda2227z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62lambda2229z62zzsaw_bbvzd2typeszd2(obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t
		BGl_rtl_inszd2loadizd2valuez00zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t,
		BgL_rtl_regz00_bglt, BgL_rtl_regz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_loadg1778z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda2235z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2236z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2typeszd2();
	BGL_EXPORTED_DECL obj_t BGl_paramszd2ze3ctxz31zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2typeszd2();
	static obj_t BGl_unaliaszd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t,
		BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2241z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2242z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2ifeqzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2typeszd2();
	static obj_t BGl_z62lambda2247z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2248z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl_z62zc3z04anonymousza32177ze3ze5zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62bbvzd2hash1706zb0zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62lambda2253z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2254z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2093z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2096z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2 = BUNSPEC;
	static BgL_blockz00_bglt BGl_z62lambda2099z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, int);
	static obj_t BGl_z62bbvzd2hashzd2blockS1713z62zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2260z62zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62lambda2261z62zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t BGl_z62rtl_inszd2vlenzf3z43zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	static obj_t BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_regsetzd2nilzd2zzsaw_bbvzd2typeszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2typeszd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl__refinezd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_loadi1776z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	static BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvzd2typeszd2(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62paramszd2ze3ctxz53zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt);
	static obj_t
		BGl_z62bbvzd2equalzf3zd2rtl_selec1772z91zzsaw_bbvzd2typeszd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t __cnst[33];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73241za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3100z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2115za7623242z00,
		BGl_z62lambda2115z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3101z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2099za7623243z00,
		BGl_z62lambda2099z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3102z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3244za7,
		BGl_z62zc3z04anonymousza32098ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3103z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2096za7623245z00,
		BGl_z62lambda2096z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3104z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2093za7623246z00,
		BGl_z62lambda2093z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3105z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3247za7,
		BGl_z62zc3z04anonymousza32140ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3106z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2139za7623248z00,
		BGl_z62lambda2139z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3107z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2138za7623249z00,
		BGl_z62lambda2138z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3108z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3250za7,
		BGl_z62zc3z04anonymousza32147ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3109z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2146za7623251z00,
		BGl_z62lambda2146z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2truezf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2tru3252z00,
		BGl_z62rtl_inszd2truezf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2nilza73253za7,
		BGl_z62regsetzd2nilzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3110z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2145za7623254z00,
		BGl_z62lambda2145z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3111z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3255za7,
		BGl_z62zc3z04anonymousza32155ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3112z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2154za7623256z00,
		BGl_z62lambda2154z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3113z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2153za7623257z00,
		BGl_z62lambda2153z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3114z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3258za7,
		BGl_z62zc3z04anonymousza32162ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3115z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2161za7623259z00,
		BGl_z62lambda2161z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3116z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2160za7623260z00,
		BGl_z62lambda2160z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3117z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3261za7,
		BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3118z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2168za7623262z00,
		BGl_z62lambda2168z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3119z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2167za7623263z00,
		BGl_z62lambda2167z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3120z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3264za7,
		BGl_z62zc3z04anonymousza32177ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3121z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2176za7623265z00,
		BGl_z62lambda2176z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3122z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2175za7623266z00,
		BGl_z62lambda2175z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3123z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2130za7623267z00,
		BGl_z62lambda2130z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3124z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3268za7,
		BGl_z62zc3z04anonymousza32129ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3125z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2127za7623269z00,
		BGl_z62lambda2127z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3126z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2124za7623270z00,
		BGl_z62lambda2124z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3127z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3271za7,
		BGl_z62zc3z04anonymousza32200ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3128z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2199za7623272z00,
		BGl_z62lambda2199z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3129z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2198za7623273z00,
		BGl_z62lambda2198z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3218z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3218za700za7za7s3274za7, "not implemented", 15);
	      DEFINE_STRING(BGl_string3219z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3219za700za7za7s3275za7, "(block ", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3130z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3276za7,
		BGl_z62zc3z04anonymousza32207ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3131z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2206za7623277z00,
		BGl_z62lambda2206z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3132z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2205za7623278z00,
		BGl_z62lambda2205z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3133z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3279za7,
		BGl_z62zc3z04anonymousza32214ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3134z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2213za7623280z00,
		BGl_z62lambda2213z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3220z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3220za700za7za7s3281za7, " ;; parent=", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3135z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2212za7623282z00,
		BGl_z62lambda2212z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3221z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3221za700za7za7s3283za7, " ;; ictx=", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3136z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3284za7,
		BGl_z62zc3z04anonymousza32221ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3222z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3222za700za7za7s3285za7, " ;; octx=", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3137z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2220za7623286z00,
		BGl_z62lambda2220z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3223z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3223za700za7za7s3287za7, ":preds ", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3138z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2219za7623288z00,
		BGl_z62lambda2219z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3224z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3224za700za7za7s3289za7, ":succs ", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3139z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2190za7623290z00,
		BGl_z62lambda2190z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3225z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3225za700za7za7s3291za7, ")\n", 2);
	      DEFINE_STRING(BGl_string3226z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3226za700za7za7s3292za7, "[", 1);
	      DEFINE_STRING(BGl_string3227z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3227za700za7za7s3293za7, " <- ", 4);
	      DEFINE_STRING(BGl_string3228z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3228za700za7za7s3294za7, "]", 1);
	      DEFINE_STRING(BGl_string3229z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3229za700za7za7s3295za7, " #|fun=", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3140z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3296za7,
		BGl_z62zc3z04anonymousza32189ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3141z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2187za7623297z00,
		BGl_z62lambda2187z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3142z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2184za7623298z00,
		BGl_z62lambda2184z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3143z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2236za7623299z00,
		BGl_z62lambda2236z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3144z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2235za7623300z00,
		BGl_z62lambda2235z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3230z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3230za700za7za7s3301za7, " def=", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3145z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3302za7,
		BGl_z62zc3z04anonymousza32243ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3231z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3231za700za7za7s3303za7, " in=", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3146z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2242za7623304z00,
		BGl_z62lambda2242z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3232z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3232za700za7za7s3305za7, " out=", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3147z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2241za7623306z00,
		BGl_z62lambda2241z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3233z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3233za700za7za7s3307za7, "|#", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3148z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2248za7623308z00,
		BGl_z62lambda2248z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3234za700za7za7s3309za7, "saw_bbv-types", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3149z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2247za7623310z00,
		BGl_z62lambda2247z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3235z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3235za700za7za7s3311za7,
		"bbv-ctxentry aliases value bool flag typ reg rtl_ins/bbv in out def blockS %blacklist %hash obj %parent octxs ictx saw_bbv-types blockV long %mark pair-nil versions _ vlen -INF +INF MINFX MAXFX-1 MAXFX interval int-size ",
		220);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2branchzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2bra3312z00,
		BGl_z62rtl_inszd2branchzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3150z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3313za7,
		BGl_z62zc3z04anonymousza32255ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3151z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2254za7623314z00,
		BGl_z62lambda2254z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3152z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2253za7623315z00,
		BGl_z62lambda2253z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3153z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3316za7,
		BGl_z62zc3z04anonymousza32262ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3154z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2261za7623317z00,
		BGl_z62lambda2261z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3155z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2260za7623318z00,
		BGl_z62lambda2260z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3156z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3319za7,
		BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3157z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2229za7623320z00,
		BGl_z62lambda2229z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3158z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2227za7623321z00,
		BGl_z62lambda2227z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3159z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hash1703322z00,
		BGl_z62bbvzd2hash1706zb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3161z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3323za7,
		BGl_z62bbvzd2equalzf31758z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3163z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762dumpza7d2rtl_in3324z00,
		BGl_z62dumpzd2rtl_inszf2bbv1703z42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3165z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762dumpza7d2blocks3325z00,
		BGl_z62dumpzd2blockS1705zb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3166z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23326za7,
		BGl_z62bbvzd2hashzd2type1709z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3090z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3090za700za7za7s3327za7, "no-", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3168z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23328za7,
		BGl_z62bbvzd2hashzd2atom1711z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3091z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3091za700za7za7s3329za7, "~s", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3169z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23330za7,
		BGl_z62bbvzd2hashzd2blockS1713z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3092z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3092za700za7za7s3331za7, "[~a..~a]", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73332za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2typeszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2regvzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2regv3333z00,
		BGl_z62regsetzd2regvzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3170z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23334za7,
		BGl_z62bbvzd2hashzd2rtl_inszf2bbv1715z90zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3171z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23335za7,
		BGl_z62bbvzd2hashzd2rtl_reg1717z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3172z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23336za7,
		BGl_z62bbvzd2hashzd2rtl_fun1719z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3173z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23337za7,
		BGl_z62bbvzd2hashzd2rtl_return1721z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3174z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23338za7,
		BGl_z62bbvzd2hashzd2rtl_loadi1723z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3175z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23339za7,
		BGl_z62bbvzd2hashzd2rtl_loadg1725z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3176z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23340za7,
		BGl_z62bbvzd2hashzd2rtl_loadfun1727z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3177z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23341za7,
		BGl_z62bbvzd2hashzd2rtl_globalr1729z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3178z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23342za7,
		BGl_z62bbvzd2hashzd2rtl_getfiel1731z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3179z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23343za7,
		BGl_z62bbvzd2hashzd2rtl_valloc1733z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2leng3344z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3180z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23345za7,
		BGl_z62bbvzd2hashzd2rtl_vref1735z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3181z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23346za7,
		BGl_z62bbvzd2hashzd2rtl_vlength1737z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3182z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23347za7,
		BGl_z62bbvzd2hashzd2rtl_instanc1739z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3183z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23348za7,
		BGl_z62bbvzd2hashzd2rtl_storeg1741z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3184z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23349za7,
		BGl_z62bbvzd2hashzd2rtl_setfiel1743z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3185z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23350za7,
		BGl_z62bbvzd2hashzd2rtl_vset1745z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3186z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23351za7,
		BGl_z62bbvzd2hashzd2rtl_new1747z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3187z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23352za7,
		BGl_z62bbvzd2hashzd2rtl_call1749z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3188z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23353za7,
		BGl_z62bbvzd2hashzd2rtl_lightfu1751z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3189z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23354za7,
		BGl_z62bbvzd2hashzd2rtl_pragma1753z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3190z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23355za7,
		BGl_z62bbvzd2hashzd2rtl_cast1755z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73356za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3191z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7d23357za7,
		BGl_z62bbvzd2hashzd2rtl_cast_nu1757z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3192z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3358za7,
		BGl_z62bbvzd2equalzf3zd2atom1762z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3194z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3359za7,
		BGl_z62bbvzd2equalzf3zd2blockS1764z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3195z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3360za7,
		BGl_z62bbvzd2equalzf3zd2rtl_inszf2b1766z63zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3196z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3361za7,
		BGl_z62bbvzd2equalzf3zd2rtl_reg1768z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3197z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3362za7,
		BGl_z62bbvzd2equalzf3zd2rtl_fun1770z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2ifnezf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2ifn3363z00,
		BGl_z62rtl_inszd2ifnezf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3198z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3364za7,
		BGl_z62bbvzd2equalzf3zd2rtl_selec1772z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3199z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3365za7,
		BGl_z62bbvzd2equalzf3zd2rtl_switc1774z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73366za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_paramszd2ze3ctxzd2envze3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762paramsza7d2za7e3c3367za7,
		BGl_z62paramszd2ze3ctxz53zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73368za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73369za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2stri3370z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_refinezd2ctxzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl__refineza7d2ctxza7d23371z00, opt_generic_entry,
		BGl__refinezd2ctxzd2zzsaw_bbvzd2typeszd2, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razf3zd2envzd3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73372za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73373za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73374za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762makeza7d2regset3375z00,
		BGl_z62makezd2regsetzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extendzd2normaliza7ezd2ctxzd2envz75zzsaw_bbvzd2typeszd2,
		BgL_bgl__extendza7d2normal3376za7, opt_generic_entry,
		BGl__extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2falsezf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2fal3377z00,
		BGl_z62rtl_inszd2falsezf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7f3za791za73378z00,
		BGl_z62regsetzf3z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73379za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ctxzd2getzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762ctxza7d2getza7b0za73380z00,
		BGl_z62ctxzd2getzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2movzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2mov3381z00,
		BGl_z62rtl_inszd2movzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2reglzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2regl3382z00,
		BGl_z62regsetzd2reglzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2gozf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2goza73383za7,
		BGl_z62rtl_inszd2gozf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3384za7,
		BGl_z62bbvzd2equalzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	extern obj_t BGl_dumpzd2envzd2zzsaw_defsz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3200z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3385za7,
		BGl_z62bbvzd2equalzf3zd2rtl_loadi1776z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3201z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3386za7,
		BGl_z62bbvzd2equalzf3zd2rtl_loadg1778z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3202z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3387za7,
		BGl_z62bbvzd2equalzf3zd2rtl_loadf1780z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3203z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3388za7,
		BGl_z62bbvzd2equalzf3zd2rtl_globa1782z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3204z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3389za7,
		BGl_z62bbvzd2equalzf3zd2rtl_getfi1784z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3205z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3390za7,
		BGl_z62bbvzd2equalzf3zd2rtl_vallo1786z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3206z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3391za7,
		BGl_z62bbvzd2equalzf3zd2rtl_vref1788z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3207z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3392za7,
		BGl_z62bbvzd2equalzf3zd2rtl_vleng1790z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73393za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3208z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3394za7,
		BGl_z62bbvzd2equalzf3zd2rtl_insta1792z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3209z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3395za7,
		BGl_z62bbvzd2equalzf3zd2rtl_store1794z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3210z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3396za7,
		BGl_z62bbvzd2equalzf3zd2rtl_setfi1796z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3211z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3397za7,
		BGl_z62bbvzd2equalzf3zd2rtl_vset1798z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3212z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3398za7,
		BGl_z62bbvzd2equalzf3zd2rtl_new1800z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3213z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3399za7,
		BGl_z62bbvzd2equalzf3zd2rtl_call1802z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3214z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3400za7,
		BGl_z62bbvzd2equalzf3zd2rtl_light1804z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3215z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3401za7,
		BGl_z62bbvzd2equalzf3zd2rtl_pragm1806z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3216z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3402za7,
		BGl_z62bbvzd2equalzf3zd2rtl_cast1808z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3217z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2equalza7f3403za7,
		BGl_z62bbvzd2equalzf3zd2rtl_cast_1810z91zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73404za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73405za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2typeszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73406za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73407za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2typeszd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3160z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3160za700za7za7s3408za7, "bbv-hash1706", 12);
	      DEFINE_STRING(BGl_string3162z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3162za700za7za7s3409za7, "bbv-equal?1758", 14);
	      DEFINE_STRING(BGl_string3164z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3164za700za7za7s3410za7, "dump", 4);
	      DEFINE_STRING(BGl_string3167z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3167za700za7za7s3411za7, "bbv-hash", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2nopzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2nop3412z00,
		BGl_z62rtl_inszd2nopzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3093z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3413za7,
		BGl_z62zc3z04anonymousza31909ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3094z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3414za7,
		BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3095z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3415za7,
		BGl_z62zc3z04anonymousza32109ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3096z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2108za7623416z00,
		BGl_z62lambda2108z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3097z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2107za7623417z00,
		BGl_z62lambda2107z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3098z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762za7c3za704anonymo3418za7,
		BGl_z62zc3z04anonymousza32117ze3ze5zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3099z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762lambda2116za7623419z00,
		BGl_z62lambda2116z62zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2lastzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2las3420z00,
		BGl_z62rtl_inszd2lastzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2msiza7ezd2envza7zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2msiza73421za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3193z00zzsaw_bbvzd2typeszd2,
		BgL_bgl_string3193za700za7za7s3422za7, "bbv-equal?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ctxzd2ze3stringzd2envze3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762ctxza7d2za7e3stri3423za7,
		BGl_z62ctxzd2ze3stringz53zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73424za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_aliaszd2ctxzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762aliasza7d2ctxza7b3425za7,
		BGl_z62aliaszd2ctxzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2typecheckzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2typ3426z00,
		BGl_z62rtl_inszd2typecheckzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2loadizf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2loa3427z00,
		BGl_z62rtl_inszd2loadizf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2callzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2cal3428z00,
		BGl_z62rtl_inszd2callzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73429za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73430za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73431za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2typeszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2ifeqzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2ife3432z00,
		BGl_z62rtl_inszd2ifeqzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2stri3433z00,
		BGl_z62regsetzd2stringzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73434za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2typeszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762makeza7d2rtl_re3435z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762regsetza7d2leng3436z00,
		BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2vlenzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2vle3437z00,
		BGl_z62rtl_inszd2vlenzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_callzd2predicatezd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_callza7d2pr3438z00,
		BGl_z62rtl_callzd2predicatezb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73439za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_extendzd2ctxzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl__extendza7d2ctxza7d23440z00, opt_generic_entry,
		BGl__extendzd2ctxzd2zzsaw_bbvzd2typeszd2, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2boolzf3zd2envzf3zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_insza7d2boo3441z00,
		BGl_z62rtl_inszd2boolzf3z43zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762bbvza7d2hashza7b03442za7,
		BGl_z62bbvzd2hashzb0zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_bbvzd2typeszd2,
		BgL_bgl_za762rtl_regza7f2raza73443za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2typeszd2, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_blockSz00zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_blockVz00zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2maxzd2indexza2zd2zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2));
		     ADD_ROOT((void *) (&BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(long
		BgL_checksumz00_6178, char *BgL_fromz00_6179)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_bbvzd2typeszd2))
				{
					BGl_requirezd2initializa7ationz75zzsaw_bbvzd2typeszd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_bbvzd2typeszd2();
					BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2typeszd2();
					BGl_cnstzd2initzd2zzsaw_bbvzd2typeszd2();
					BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2typeszd2();
					BGl_objectzd2initzd2zzsaw_bbvzd2typeszd2();
					BGl_genericzd2initzd2zzsaw_bbvzd2typeszd2();
					BGl_methodzd2initzd2zzsaw_bbvzd2typeszd2();
					return BGl_toplevelzd2initzd2zzsaw_bbvzd2typeszd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_bbv-types");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_bbv-types");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			{	/* SawMill/bbv-types.scm 15 */
				obj_t BgL_cportz00_5521;

				{	/* SawMill/bbv-types.scm 15 */
					obj_t BgL_stringz00_5529;

					BgL_stringz00_5529 = BGl_string3235z00zzsaw_bbvzd2typeszd2;
					{	/* SawMill/bbv-types.scm 15 */
						obj_t BgL_startz00_5530;

						BgL_startz00_5530 = BINT(((long) 0));
						{	/* SawMill/bbv-types.scm 15 */
							obj_t BgL_endz00_5531;

							BgL_endz00_5531 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5529)));
							{	/* SawMill/bbv-types.scm 15 */

								BgL_cportz00_5521 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5529, BgL_startz00_5530, BgL_endz00_5531);
				}}}}
				{
					long BgL_iz00_5522;

					BgL_iz00_5522 = ((long) 32);
				BgL_loopz00_5523:
					if ((BgL_iz00_5522 == ((long) -1)))
						{	/* SawMill/bbv-types.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/bbv-types.scm 15 */
							{	/* SawMill/bbv-types.scm 15 */
								obj_t BgL_arg3239z00_5525;

								{	/* SawMill/bbv-types.scm 15 */

									{	/* SawMill/bbv-types.scm 15 */
										obj_t BgL_locationz00_5527;

										BgL_locationz00_5527 = BBOOL(((bool_t) 0));
										{	/* SawMill/bbv-types.scm 15 */

											BgL_arg3239z00_5525 =
												BGl_readz00zz__readerz00(BgL_cportz00_5521,
												BgL_locationz00_5527);
										}
									}
								}
								{	/* SawMill/bbv-types.scm 15 */
									int BgL_tmpz00_6217;

									BgL_tmpz00_6217 = (int) (BgL_iz00_5522);
									CNST_TABLE_SET(BgL_tmpz00_6217, BgL_arg3239z00_5525);
							}}
							{	/* SawMill/bbv-types.scm 15 */
								int BgL_auxz00_5528;

								BgL_auxz00_5528 = (int) ((BgL_iz00_5522 - ((long) 1)));
								{
									long BgL_iz00_6222;

									BgL_iz00_6222 = (long) (BgL_auxz00_5528);
									BgL_iz00_5522 = BgL_iz00_6222;
									goto BgL_loopz00_5523;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			{	/* SawMill/bbv-types.scm 99 */
				long BgL_arg1811z00_2036;

				{	/* SawMill/bbv-types.scm 99 */
					obj_t BgL_arg1820z00_2037;

					BgL_arg1820z00_2037 =
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 0)));
					BgL_arg1811z00_2036 = ((long) CINT(BgL_arg1820z00_2037) - ((long) 2));
				}
				BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2 =
					make_bllong((((BGL_LONGLONG_T) 1) << (int) (BgL_arg1811z00_2036)));
			}
			BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2 =
				make_bllong(
				(NEG(BLLONG_TO_LLONG(BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2)) -
					((BGL_LONGLONG_T) 1)));
			BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2 =
				BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2;
			{	/* SawMill/bbv-types.scm 103 */
				BGL_LONGLONG_T BgL_za71za7_3940;

				BgL_za71za7_3940 =
					BLLONG_TO_LLONG(BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2);
				BGl_za2maxzd2indexza2zd2zzsaw_bbvzd2typeszd2 =
					make_bllong((BgL_za71za7_3940 - ((BGL_LONGLONG_T) 1)));
			}
			{	/* SawMill/bbv-types.scm 105 */
				BGL_LONGLONG_T BgL_za71za7_3943;

				BgL_za71za7_3943 =
					BLLONG_TO_LLONG(BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2);
				BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2 =
					make_bllong((BgL_za71za7_3943 + ((BGL_LONGLONG_T) 1)));
			}
			{	/* SawMill/bbv-types.scm 106 */
				BGL_LONGLONG_T BgL_za71za7_3946;

				BgL_za71za7_3946 =
					BLLONG_TO_LLONG(BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2);
				BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2 =
					make_bllong((BgL_za71za7_3946 - ((BGL_LONGLONG_T) 1)));
			}
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_bbvzd2typeszd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2039;

				BgL_headz00_2039 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2040;
					obj_t BgL_tailz00_2041;

					BgL_prevz00_2040 = BgL_headz00_2039;
					BgL_tailz00_2041 = BgL_l1z00_1;
				BgL_loopz00_2042:
					if (PAIRP(BgL_tailz00_2041))
						{
							obj_t BgL_newzd2prevzd2_2044;

							BgL_newzd2prevzd2_2044 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2041), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2040, BgL_newzd2prevzd2_2044);
							{
								obj_t BgL_tailz00_6252;
								obj_t BgL_prevz00_6251;

								BgL_prevz00_6251 = BgL_newzd2prevzd2_2044;
								BgL_tailz00_6252 = CDR(BgL_tailz00_2041);
								BgL_tailz00_2041 = BgL_tailz00_6252;
								BgL_prevz00_2040 = BgL_prevz00_6251;
								goto BgL_loopz00_2042;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2039);
				}
			}
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2typeszd2(BgL_typez00_bglt
		BgL_type1179z00_3, obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1205z00_5534;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1203z00_5535;
					BgL_rtl_regzf2razf2_bglt BgL_wide1204z00_5536;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_6255;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1202z00_5537;

							BgL_new1202z00_5537 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1827z00_5538;

								{	/* SawMill/regset.sch 55 */
									long BgL_res2872z00_5539;

									BgL_res2872z00_5539 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1827z00_5538 = BgL_res2872z00_5539;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1202z00_5537),
									BgL_arg1827z00_5538);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_6260;

								BgL_tmpz00_6260 = ((BgL_objectz00_bglt) BgL_new1202z00_5537);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6260, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1202z00_5537);
							BgL_auxz00_6255 = BgL_new1202z00_5537;
						}
						BgL_tmp1203z00_5535 = ((BgL_rtl_regz00_bglt) BgL_auxz00_6255);
					}
					BgL_wide1204z00_5536 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_6268;
						BgL_objectz00_bglt BgL_tmpz00_6266;

						BgL_auxz00_6268 = ((obj_t) BgL_wide1204z00_5536);
						BgL_tmpz00_6266 = ((BgL_objectz00_bglt) BgL_tmp1203z00_5535);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6266, BgL_auxz00_6268);
					}
					((BgL_objectz00_bglt) BgL_tmp1203z00_5535);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1826z00_5540;

						{	/* SawMill/regset.sch 55 */
							long BgL_res2873z00_5541;

							BgL_res2873z00_5541 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1826z00_5540 = BgL_res2873z00_5541;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1203z00_5535), BgL_arg1826z00_5540);
					}
					BgL_new1205z00_5534 = ((BgL_rtl_regz00_bglt) BgL_tmp1203z00_5535);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1205z00_5534)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1205z00_5534)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1205z00_5534)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1205z00_5534)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1205z00_5534)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1205z00_5534)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6288;

					{
						obj_t BgL_auxz00_6289;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6290;

							BgL_tmpz00_6290 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6289 = BGL_OBJECT_WIDENING(BgL_tmpz00_6290);
						}
						BgL_auxz00_6288 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6289);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6288))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6295;

					{
						obj_t BgL_auxz00_6296;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6297;

							BgL_tmpz00_6297 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6296 = BGL_OBJECT_WIDENING(BgL_tmpz00_6297);
						}
						BgL_auxz00_6295 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6296);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6295))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6302;

					{
						obj_t BgL_auxz00_6303;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6304;

							BgL_tmpz00_6304 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6303 = BGL_OBJECT_WIDENING(BgL_tmpz00_6304);
						}
						BgL_auxz00_6302 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6303);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6302))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6309;

					{
						obj_t BgL_auxz00_6310;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6311;

							BgL_tmpz00_6311 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6310 = BGL_OBJECT_WIDENING(BgL_tmpz00_6311);
						}
						BgL_auxz00_6309 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6310);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6309))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6316;

					{
						obj_t BgL_auxz00_6317;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6318;

							BgL_tmpz00_6318 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6317 = BGL_OBJECT_WIDENING(BgL_tmpz00_6318);
						}
						BgL_auxz00_6316 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6317);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6316))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6323;

					{
						obj_t BgL_auxz00_6324;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_6325;

							BgL_tmpz00_6325 = ((BgL_objectz00_bglt) BgL_new1205z00_5534);
							BgL_auxz00_6324 = BGL_OBJECT_WIDENING(BgL_tmpz00_6325);
						}
						BgL_auxz00_6323 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6324);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6323))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1205z00_5534;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4937, obj_t BgL_type1179z00_4938, obj_t BgL_var1180z00_4939,
		obj_t BgL_onexprzf31181zf3_4940, obj_t BgL_name1182z00_4941,
		obj_t BgL_key1183z00_4942, obj_t BgL_hardware1184z00_4943,
		obj_t BgL_num1185z00_4944, obj_t BgL_color1186z00_4945,
		obj_t BgL_coalesce1187z00_4946, obj_t BgL_occurrences1188z00_4947,
		obj_t BgL_interfere1189z00_4948, obj_t BgL_interfere21190z00_4949)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2typeszd2(
				((BgL_typez00_bglt) BgL_type1179z00_4938), BgL_var1180z00_4939,
				BgL_onexprzf31181zf3_4940, BgL_name1182z00_4941, BgL_key1183z00_4942,
				BgL_hardware1184z00_4943, CINT(BgL_num1185z00_4944),
				BgL_color1186z00_4945, BgL_coalesce1187z00_4946,
				CINT(BgL_occurrences1188z00_4947), BgL_interfere1189z00_4948,
				BgL_interfere21190z00_4949);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvzd2typeszd2(obj_t
		BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_4950,
		obj_t BgL_objz00_4951)
	{
		{	/* SawMill/regset.sch 56 */
			return BBOOL(BGl_rtl_regzf2razf3z01zzsaw_bbvzd2typeszd2(BgL_objz00_4951));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_3976;

				BgL_classz00_3976 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_3977;

					BgL__ortest_1106z00_3977 = BGL_CLASS_NIL(BgL_classz00_3976);
					if (CBOOL(BgL__ortest_1106z00_3977))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_3977);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3976));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4952)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2typeszd2();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6344;

				{
					obj_t BgL_auxz00_6345;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_6346;

						BgL_tmpz00_6346 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_6345 = BGL_OBJECT_WIDENING(BgL_tmpz00_6346);
					}
					BgL_auxz00_6344 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6345);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6344))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4953, obj_t BgL_oz00_4954)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4954));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6353;

				{
					obj_t BgL_auxz00_6354;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_6355;

						BgL_tmpz00_6355 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_6354 = BGL_OBJECT_WIDENING(BgL_tmpz00_6355);
					}
					BgL_auxz00_6353 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6354);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6353))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4955, obj_t BgL_oz00_4956, obj_t BgL_vz00_4957)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4956), BgL_vz00_4957);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6362;

				{
					obj_t BgL_auxz00_6363;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_6364;

						BgL_tmpz00_6364 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_6363 = BGL_OBJECT_WIDENING(BgL_tmpz00_6364);
					}
					BgL_auxz00_6362 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6363);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6362))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4958, obj_t BgL_oz00_4959)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4959));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6371;

				{
					obj_t BgL_auxz00_6372;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_6373;

						BgL_tmpz00_6373 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_6372 = BGL_OBJECT_WIDENING(BgL_tmpz00_6373);
					}
					BgL_auxz00_6371 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6372);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6371))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4960, obj_t BgL_oz00_4961, obj_t BgL_vz00_4962)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4961), BgL_vz00_4962);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6380;

				{
					obj_t BgL_auxz00_6381;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_6382;

						BgL_tmpz00_6382 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_6381 = BGL_OBJECT_WIDENING(BgL_tmpz00_6382);
					}
					BgL_auxz00_6380 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6381);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6380))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4963, obj_t BgL_oz00_4964)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2typeszd2(
					((BgL_rtl_regz00_bglt) BgL_oz00_4964)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6390;

				{
					obj_t BgL_auxz00_6391;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_6392;

						BgL_tmpz00_6392 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_6391 = BGL_OBJECT_WIDENING(BgL_tmpz00_6392);
					}
					BgL_auxz00_6390 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6391);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6390))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4965, obj_t BgL_oz00_4966, obj_t BgL_vz00_4967)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4966), CINT(BgL_vz00_4967));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6400;

				{
					obj_t BgL_auxz00_6401;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_6402;

						BgL_tmpz00_6402 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_6401 = BGL_OBJECT_WIDENING(BgL_tmpz00_6402);
					}
					BgL_auxz00_6400 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6401);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6400))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4968, obj_t BgL_oz00_4969)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4969));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6409;

				{
					obj_t BgL_auxz00_6410;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_6411;

						BgL_tmpz00_6411 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_6410 = BGL_OBJECT_WIDENING(BgL_tmpz00_6411);
					}
					BgL_auxz00_6409 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6410);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6409))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4970, obj_t BgL_oz00_4971, obj_t BgL_vz00_4972)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4971), BgL_vz00_4972);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6418;

				{
					obj_t BgL_auxz00_6419;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_6420;

						BgL_tmpz00_6420 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_6419 = BGL_OBJECT_WIDENING(BgL_tmpz00_6420);
					}
					BgL_auxz00_6418 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6419);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6418))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4973, obj_t BgL_oz00_4974)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4974));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6427;

				{
					obj_t BgL_auxz00_6428;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_6429;

						BgL_tmpz00_6429 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_6428 = BGL_OBJECT_WIDENING(BgL_tmpz00_6429);
					}
					BgL_auxz00_6427 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6428);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6427))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4975, obj_t BgL_oz00_4976, obj_t BgL_vz00_4977)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4976), BgL_vz00_4977);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_6436;

				{
					obj_t BgL_auxz00_6437;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_6438;

						BgL_tmpz00_6438 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_6437 = BGL_OBJECT_WIDENING(BgL_tmpz00_6438);
					}
					BgL_auxz00_6436 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6437);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6436))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_4978,
		obj_t BgL_oz00_4979)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2typeszd2(
					((BgL_rtl_regz00_bglt) BgL_oz00_4979)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4980, obj_t BgL_oz00_4981)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4981));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_4982,
		obj_t BgL_oz00_4983)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4983));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_4984,
		obj_t BgL_oz00_4985)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4985));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4986, obj_t BgL_oz00_4987)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4987));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2typeszd2
		(BgL_rtl_regz00_bglt BgL_oz00_44, obj_t BgL_vz00_45)
	{
		{	/* SawMill/regset.sch 77 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_44)))->BgL_onexprzf3zf3) =
				((obj_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &rtl_reg/ra-onexpr?-set! */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4988, obj_t BgL_oz00_4989, obj_t BgL_vz00_4990)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4989), BgL_vz00_4990);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_4991,
		obj_t BgL_oz00_4992)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4992));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* SawMill/regset.sch 79 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_47)))->BgL_varz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &rtl_reg/ra-var-set! */
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4993, obj_t BgL_oz00_4994, obj_t BgL_vz00_4995)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4994), BgL_vz00_4995);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4996, obj_t BgL_oz00_4997)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4997));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2typeszd2(BgL_rtl_regz00_bglt
		BgL_oz00_50, BgL_typez00_bglt BgL_vz00_51)
	{
		{	/* SawMill/regset.sch 81 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_50)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_51), BUNSPEC);
		}

	}



/* &rtl_reg/ra-type-set! */
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_4998, obj_t BgL_oz00_4999, obj_t BgL_vz00_5000)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2typeszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_4999),
				((BgL_typez00_bglt) BgL_vz00_5000));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2typeszd2(int BgL_length1172z00_52,
		int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1207z00_5542;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1206z00_5543;

					BgL_new1206z00_5543 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1828z00_5544;

						{	/* SawMill/regset.sch 84 */
							long BgL_res2874z00_5545;

							BgL_res2874z00_5545 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1828z00_5544 = BgL_res2874z00_5545;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1206z00_5543), BgL_arg1828z00_5544);
					}
					BgL_new1207z00_5542 = BgL_new1206z00_5543;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1207z00_5542))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1207z00_5542))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1207z00_5542))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1207z00_5542))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1207z00_5542))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1207z00_5542;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5001, obj_t BgL_length1172z00_5002,
		obj_t BgL_msiza7e1173za7_5003, obj_t BgL_regv1174z00_5004,
		obj_t BgL_regl1175z00_5005, obj_t BgL_string1176z00_5006)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_bbvzd2typeszd2(CINT(BgL_length1172z00_5002),
				CINT(BgL_msiza7e1173za7_5003), BgL_regv1174z00_5004,
				BgL_regl1175z00_5005, BgL_string1176z00_5006);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_bbvzd2typeszd2(obj_t
		BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5007,
		obj_t BgL_objz00_5008)
	{
		{	/* SawMill/regset.sch 85 */
			return BBOOL(BGl_regsetzf3zf3zzsaw_bbvzd2typeszd2(BgL_objz00_5008));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_3996;

				BgL_classz00_3996 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_3997;

					BgL__ortest_1106z00_3997 = BGL_CLASS_NIL(BgL_classz00_3996);
					if (CBOOL(BgL__ortest_1106z00_3997))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_3997);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3996));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5009)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_bbvzd2typeszd2();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5010,
		obj_t BgL_oz00_5011)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_bbvzd2typeszd2(
				((BgL_regsetz00_bglt) BgL_oz00_5011));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5012, obj_t BgL_oz00_5013, obj_t BgL_vz00_5014)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2typeszd2(
				((BgL_regsetz00_bglt) BgL_oz00_5013), BgL_vz00_5014);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5015,
		obj_t BgL_oz00_5016)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_bbvzd2typeszd2(
				((BgL_regsetz00_bglt) BgL_oz00_5016));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5017,
		obj_t BgL_oz00_5018)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_bbvzd2typeszd2(
				((BgL_regsetz00_bglt) BgL_oz00_5018));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5019,
		obj_t BgL_oz00_5020)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_bbvzd2typeszd2(
					((BgL_regsetz00_bglt) BgL_oz00_5020)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5021,
		obj_t BgL_oz00_5022)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_bbvzd2typeszd2(
					((BgL_regsetz00_bglt) BgL_oz00_5022)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2typeszd2(BgL_regsetz00_bglt
		BgL_oz00_71, int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5023, obj_t BgL_oz00_5024, obj_t BgL_vz00_5025)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2typeszd2(
				((BgL_regsetz00_bglt) BgL_oz00_5024), CINT(BgL_vz00_5025));
		}

	}



/* ctx->string */
	BGL_EXPORTED_DEF obj_t BGl_ctxzd2ze3stringz31zzsaw_bbvzd2typeszd2(obj_t
		BgL_ctxz00_84)
	{
		{	/* SawMill/bbv-types.scm 117 */
			{	/* SawMill/bbv-types.scm 142 */
				obj_t BgL_zc3z04anonymousza31841ze3z87_5026;

				BgL_zc3z04anonymousza31841ze3z87_5026 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31841ze3ze5zzsaw_bbvzd2typeszd2,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31841ze3z87_5026, (int) (((long) 0)),
					BgL_ctxz00_84);
				return
					BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3z04anonymousza31841ze3z87_5026);
			}
		}

	}



/* &ctx->string */
	obj_t BGl_z62ctxzd2ze3stringz53zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5027,
		obj_t BgL_ctxz00_5028)
	{
		{	/* SawMill/bbv-types.scm 117 */
			return BGl_ctxzd2ze3stringz31zzsaw_bbvzd2typeszd2(BgL_ctxz00_5028);
		}

	}



/* &<@anonymous:1841> */
	obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5029, obj_t BgL_opz00_5031)
	{
		{	/* SawMill/bbv-types.scm 140 */
			{	/* SawMill/bbv-types.scm 142 */
				obj_t BgL_ctxz00_5030;

				BgL_ctxz00_5030 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5029, (int) (((long) 0))));
				{	/* SawMill/bbv-types.scm 142 */
					obj_t BgL_arg1842z00_5546;

					if (NULLP(BgL_ctxz00_5030))
						{	/* SawMill/bbv-types.scm 142 */
							BgL_arg1842z00_5546 = BNIL;
						}
					else
						{	/* SawMill/bbv-types.scm 142 */
							obj_t BgL_head1590z00_5547;

							{	/* SawMill/bbv-types.scm 142 */
								obj_t BgL_res2888z00_5548;

								BgL_res2888z00_5548 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1590z00_5547 = BgL_res2888z00_5548;
							}
							{
								obj_t BgL_l1588z00_5550;
								obj_t BgL_tail1591z00_5551;

								BgL_l1588z00_5550 = BgL_ctxz00_5030;
								BgL_tail1591z00_5551 = BgL_head1590z00_5547;
							BgL_zc3z04anonymousza31845ze3z87_5549:
								if (NULLP(BgL_l1588z00_5550))
									{	/* SawMill/bbv-types.scm 142 */
										BgL_arg1842z00_5546 = CDR(BgL_head1590z00_5547);
									}
								else
									{	/* SawMill/bbv-types.scm 142 */
										obj_t BgL_newtail1592z00_5552;

										{	/* SawMill/bbv-types.scm 142 */
											obj_t BgL_arg1848z00_5553;

											{	/* SawMill/bbv-types.scm 142 */
												obj_t BgL_ez00_5554;

												BgL_ez00_5554 = CAR(((obj_t) BgL_l1588z00_5550));
												{	/* SawMill/bbv-types.scm 144 */
													obj_t BgL_v1587z00_5555;

													BgL_v1587z00_5555 = create_vector(((long) 4));
													{	/* SawMill/bbv-types.scm 144 */
														obj_t BgL_arg1850z00_5556;

														{	/* SawMill/bbv-types.scm 144 */
															BgL_rtl_regz00_bglt BgL_arg1851z00_5557;

															BgL_arg1851z00_5557 =
																(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																		((BgL_bbvzd2ctxentryzd2_bglt)
																			BgL_ez00_5554)))->BgL_regz00);
															BgL_arg1850z00_5556 =
																BGl_shapez00zztools_shapez00(((obj_t)
																	BgL_arg1851z00_5557));
														}
														VECTOR_SET(BgL_v1587z00_5555, ((long) 0),
															BgL_arg1850z00_5556);
													}
													{	/* SawMill/bbv-types.scm 145 */
														obj_t BgL_arg1852z00_5558;

														if (
															(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																		((BgL_bbvzd2ctxentryzd2_bglt)
																			BgL_ez00_5554)))->BgL_flagz00))
															{	/* SawMill/bbv-types.scm 146 */
																BgL_typez00_bglt BgL_arg1855z00_5559;

																BgL_arg1855z00_5559 =
																	(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																			((BgL_bbvzd2ctxentryzd2_bglt)
																				BgL_ez00_5554)))->BgL_typz00);
																BgL_arg1852z00_5558 =
																	BGl_shapez00zztools_shapez00(((obj_t)
																		BgL_arg1855z00_5559));
															}
														else
															{	/* SawMill/bbv-types.scm 147 */
																obj_t BgL_arg1856z00_5560;

																{	/* SawMill/bbv-types.scm 147 */
																	BgL_typez00_bglt BgL_arg1857z00_5561;

																	BgL_arg1857z00_5561 =
																		(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																				((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_ez00_5554)))->BgL_typz00);
																	BgL_arg1856z00_5560 =
																		BGl_shapez00zztools_shapez00(((obj_t)
																			BgL_arg1857z00_5561));
																}
																BgL_arg1852z00_5558 =
																	string_append
																	(BGl_string3090z00zzsaw_bbvzd2typeszd2,
																	BgL_arg1856z00_5560);
															}
														VECTOR_SET(BgL_v1587z00_5555, ((long) 1),
															BgL_arg1852z00_5558);
													}
													{	/* SawMill/bbv-types.scm 148 */
														obj_t BgL_arg1858z00_5562;

														{	/* SawMill/bbv-types.scm 148 */
															bool_t BgL_test3452z00_6566;

															{	/* SawMill/bbv-types.scm 148 */
																BgL_typez00_bglt BgL_arg1862z00_5563;

																BgL_arg1862z00_5563 =
																	(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																			((BgL_bbvzd2ctxentryzd2_bglt)
																				BgL_ez00_5554)))->BgL_typz00);
																BgL_test3452z00_6566 =
																	(((obj_t) BgL_arg1862z00_5563) ==
																	BGl_za2intza2z00zztype_cachez00);
															}
															if (BgL_test3452z00_6566)
																{	/* SawMill/bbv-types.scm 149 */
																	obj_t BgL_arg1861z00_5564;

																	BgL_arg1861z00_5564 =
																		(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																				((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_ez00_5554)))->BgL_valuez00);
																	BgL_arg1858z00_5562 =
																		BGl_ppzd2intzd2valueze70ze7zzsaw_bbvzd2typeszd2
																		(BgL_arg1861z00_5564);
																}
															else
																{	/* SawMill/bbv-types.scm 148 */
																	BgL_arg1858z00_5562 =
																		(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																				((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_ez00_5554)))->BgL_valuez00);
																}
														}
														VECTOR_SET(BgL_v1587z00_5555, ((long) 2),
															BgL_arg1858z00_5562);
													}
													{	/* SawMill/bbv-types.scm 151 */
														obj_t BgL_arg1863z00_5565;

														{	/* SawMill/bbv-types.scm 151 */
															obj_t BgL_l1581z00_5566;

															BgL_l1581z00_5566 =
																(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																		((BgL_bbvzd2ctxentryzd2_bglt)
																			BgL_ez00_5554)))->BgL_aliasesz00);
															if (NULLP(BgL_l1581z00_5566))
																{	/* SawMill/bbv-types.scm 151 */
																	BgL_arg1863z00_5565 = BNIL;
																}
															else
																{	/* SawMill/bbv-types.scm 151 */
																	obj_t BgL_head1583z00_5567;

																	{	/* SawMill/bbv-types.scm 151 */
																		obj_t BgL_arg1872z00_5568;

																		BgL_arg1872z00_5568 =
																			BGl_shapez00zztools_shapez00(CAR
																			(BgL_l1581z00_5566));
																		{	/* SawMill/bbv-types.scm 151 */
																			obj_t BgL_res2891z00_5569;

																			BgL_res2891z00_5569 =
																				MAKE_YOUNG_PAIR(BgL_arg1872z00_5568,
																				BNIL);
																			BgL_head1583z00_5567 =
																				BgL_res2891z00_5569;
																		}
																	}
																	{	/* SawMill/bbv-types.scm 151 */
																		obj_t BgL_g1586z00_5570;

																		BgL_g1586z00_5570 = CDR(BgL_l1581z00_5566);
																		{
																			obj_t BgL_l1581z00_5572;
																			obj_t BgL_tail1584z00_5573;

																			BgL_l1581z00_5572 = BgL_g1586z00_5570;
																			BgL_tail1584z00_5573 =
																				BgL_head1583z00_5567;
																		BgL_zc3z04anonymousza31865ze3z87_5571:
																			if (NULLP(BgL_l1581z00_5572))
																				{	/* SawMill/bbv-types.scm 151 */
																					BgL_arg1863z00_5565 =
																						BgL_head1583z00_5567;
																				}
																			else
																				{	/* SawMill/bbv-types.scm 151 */
																					obj_t BgL_newtail1585z00_5574;

																					{	/* SawMill/bbv-types.scm 151 */
																						obj_t BgL_arg1870z00_5575;

																						{	/* SawMill/bbv-types.scm 151 */
																							obj_t BgL_arg1871z00_5576;

																							BgL_arg1871z00_5576 =
																								CAR(
																								((obj_t) BgL_l1581z00_5572));
																							BgL_arg1870z00_5575 =
																								BGl_shapez00zztools_shapez00
																								(BgL_arg1871z00_5576);
																						}
																						{	/* SawMill/bbv-types.scm 151 */
																							obj_t BgL_res2893z00_5577;

																							BgL_res2893z00_5577 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1870z00_5575, BNIL);
																							BgL_newtail1585z00_5574 =
																								BgL_res2893z00_5577;
																						}
																					}
																					SET_CDR(BgL_tail1584z00_5573,
																						BgL_newtail1585z00_5574);
																					{	/* SawMill/bbv-types.scm 151 */
																						obj_t BgL_arg1868z00_5578;

																						BgL_arg1868z00_5578 =
																							CDR(((obj_t) BgL_l1581z00_5572));
																						{
																							obj_t BgL_tail1584z00_6595;
																							obj_t BgL_l1581z00_6594;

																							BgL_l1581z00_6594 =
																								BgL_arg1868z00_5578;
																							BgL_tail1584z00_6595 =
																								BgL_newtail1585z00_5574;
																							BgL_tail1584z00_5573 =
																								BgL_tail1584z00_6595;
																							BgL_l1581z00_5572 =
																								BgL_l1581z00_6594;
																							goto
																								BgL_zc3z04anonymousza31865ze3z87_5571;
																						}
																					}
																				}
																		}
																	}
																}
														}
														VECTOR_SET(BgL_v1587z00_5555, ((long) 3),
															BgL_arg1863z00_5565);
													}
													BgL_arg1848z00_5553 = BgL_v1587z00_5555;
											}}
											{	/* SawMill/bbv-types.scm 142 */
												obj_t BgL_res2894z00_5579;

												BgL_res2894z00_5579 =
													MAKE_YOUNG_PAIR(BgL_arg1848z00_5553, BNIL);
												BgL_newtail1592z00_5552 = BgL_res2894z00_5579;
										}}
										SET_CDR(BgL_tail1591z00_5551, BgL_newtail1592z00_5552);
										{	/* SawMill/bbv-types.scm 142 */
											obj_t BgL_arg1847z00_5580;

											BgL_arg1847z00_5580 = CDR(((obj_t) BgL_l1588z00_5550));
											{
												obj_t BgL_tail1591z00_6602;
												obj_t BgL_l1588z00_6601;

												BgL_l1588z00_6601 = BgL_arg1847z00_5580;
												BgL_tail1591z00_6602 = BgL_newtail1592z00_5552;
												BgL_tail1591z00_5551 = BgL_tail1591z00_6602;
												BgL_l1588z00_5550 = BgL_l1588z00_6601;
												goto BgL_zc3z04anonymousza31845ze3z87_5549;
											}
										}
									}
							}
						}
					{	/* SawMill/bbv-types.scm 141 */
						obj_t BgL_list1843z00_5581;

						BgL_list1843z00_5581 = MAKE_YOUNG_PAIR(BgL_arg1842z00_5546, BNIL);
						return
							BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_opz00_5031,
							BGl_string3091z00zzsaw_bbvzd2typeszd2, BgL_list1843z00_5581);
					}
				}
			}
		}

	}



/* pp-int-value~0 */
	obj_t BGl_ppzd2intzd2valueze70ze7zzsaw_bbvzd2typeszd2(obj_t BgL_vz00_2120)
	{
		{	/* SawMill/bbv-types.scm 134 */
			{
				obj_t BgL_iz00_2137;
				obj_t BgL_az00_2138;

				{	/* SawMill/bbv-types.scm 121 */
					bool_t BgL_test3455z00_6605;

					if (STRUCTP(BgL_vz00_2120))
						{	/* SawMill/bbv-types.scm 121 */
							BgL_test3455z00_6605 =
								(STRUCT_KEY(BgL_vz00_2120) == CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* SawMill/bbv-types.scm 121 */
							BgL_test3455z00_6605 = ((bool_t) 0);
						}
					if (BgL_test3455z00_6605)
						{	/* SawMill/bbv-types.scm 121 */
							BgL_iz00_2137 = STRUCT_REF(BgL_vz00_2120, (int) (((long) 0)));
							BgL_az00_2138 = STRUCT_REF(BgL_vz00_2120, (int) (((long) 1)));
							{	/* SawMill/bbv-types.scm 137 */
								obj_t BgL_arg1893z00_2140;
								obj_t BgL_arg1895z00_2141;

								BgL_arg1893z00_2140 =
									BGl_ppzd2intzd2valueze70ze7zzsaw_bbvzd2typeszd2
									(BgL_iz00_2137);
								BgL_arg1895z00_2141 =
									BGl_ppzd2intzd2valueze70ze7zzsaw_bbvzd2typeszd2
									(BgL_az00_2138);
								{	/* SawMill/bbv-types.scm 137 */
									obj_t BgL_list1896z00_2142;

									{	/* SawMill/bbv-types.scm 137 */
										obj_t BgL_arg1897z00_2143;

										BgL_arg1897z00_2143 =
											MAKE_YOUNG_PAIR(BgL_arg1895z00_2141, BNIL);
										BgL_list1896z00_2142 =
											MAKE_YOUNG_PAIR(BgL_arg1893z00_2140, BgL_arg1897z00_2143);
									}
									return
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string3092z00zzsaw_bbvzd2typeszd2,
										BgL_list1896z00_2142);
								}
							}
						}
					else
						{	/* SawMill/bbv-types.scm 121 */
							if (LLONGP(BgL_vz00_2120))
								{	/* SawMill/bbv-types.scm 123 */
									if (
										(BLLONG_TO_LLONG(BgL_vz00_2120) ==
											BLLONG_TO_LLONG
											(BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2)))
										{	/* SawMill/bbv-types.scm 125 */
											return CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* SawMill/bbv-types.scm 126 */
											bool_t BgL_test3459z00_6627;

											{	/* SawMill/bbv-types.scm 126 */
												BGL_LONGLONG_T BgL_n1z00_4020;

												BgL_n1z00_4020 = BLLONG_TO_LLONG(BgL_vz00_2120);
												{	/* SawMill/bbv-types.scm 126 */
													BGL_LONGLONG_T BgL_tmpz00_6629;

													{	/* SawMill/bbv-types.scm 126 */
														BGL_LONGLONG_T BgL_za71za7_4017;

														BgL_za71za7_4017 =
															BLLONG_TO_LLONG
															(BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2);
														BgL_tmpz00_6629 =
															(BgL_za71za7_4017 - LONG_TO_LLONG(((long) 1)));
													}
													BgL_test3459z00_6627 =
														(BgL_n1z00_4020 == BgL_tmpz00_6629);
											}}
											if (BgL_test3459z00_6627)
												{	/* SawMill/bbv-types.scm 126 */
													return CNST_TABLE_REF(((long) 3));
												}
											else
												{	/* SawMill/bbv-types.scm 126 */
													if (
														(BLLONG_TO_LLONG(BgL_vz00_2120) ==
															BLLONG_TO_LLONG
															(BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2)))
														{	/* SawMill/bbv-types.scm 127 */
															return CNST_TABLE_REF(((long) 4));
														}
													else
														{	/* SawMill/bbv-types.scm 127 */
															if (
																(BLLONG_TO_LLONG(BgL_vz00_2120) ==
																	BLLONG_TO_LLONG
																	(BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2)))
																{	/* SawMill/bbv-types.scm 128 */
																	return CNST_TABLE_REF(((long) 5));
																}
															else
																{	/* SawMill/bbv-types.scm 128 */
																	if (
																		(BLLONG_TO_LLONG(BgL_vz00_2120) ==
																			BLLONG_TO_LLONG
																			(BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2)))
																		{	/* SawMill/bbv-types.scm 129 */
																			return CNST_TABLE_REF(((long) 6));
																		}
																	else
																		{	/* SawMill/bbv-types.scm 129 */
																			return BgL_vz00_2120;
																		}
																}
														}
												}
										}
								}
							else
								{	/* SawMill/bbv-types.scm 123 */
									if (VECTORP(BgL_vz00_2120))
										{	/* SawMill/bbv-types.scm 132 */
											obj_t BgL_arg1888z00_2134;

											BgL_arg1888z00_2134 =
												MAKE_YOUNG_PAIR(BGl_shapez00zztools_shapez00(VECTOR_REF
													(BgL_vz00_2120, ((long) 0))), BNIL);
											return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1888z00_2134);
										}
									else
										{	/* SawMill/bbv-types.scm 131 */
											return CNST_TABLE_REF(((long) 8));
		}}}}}}

	}



/* params->ctx */
	BGL_EXPORTED_DEF obj_t BGl_paramszd2ze3ctxz31zzsaw_bbvzd2typeszd2(obj_t
		BgL_paramsz00_85)
	{
		{	/* SawMill/bbv-types.scm 157 */
			{	/* SawMill/bbv-types.scm 160 */
				obj_t BgL_arg1901z00_2147;

				{	/* SawMill/bbv-types.scm 163 */
					obj_t BgL_list1908z00_2156;

					BgL_list1908z00_2156 = MAKE_YOUNG_PAIR(BgL_paramsz00_85, BNIL);
					BgL_arg1901z00_2147 =
						BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
						(BGl_proc3093z00zzsaw_bbvzd2typeszd2, BgL_list1908z00_2156);
				}
				return
					BGl_sortz00zz__r4_vectors_6_8z00(BGl_proc3094z00zzsaw_bbvzd2typeszd2,
					BgL_arg1901z00_2147);
			}
		}

	}



/* &params->ctx */
	obj_t BGl_z62paramszd2ze3ctxz53zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5034,
		obj_t BgL_paramsz00_5035)
	{
		{	/* SawMill/bbv-types.scm 157 */
			return BGl_paramszd2ze3ctxz31zzsaw_bbvzd2typeszd2(BgL_paramsz00_5035);
		}

	}



/* &<@anonymous:1902> */
	obj_t BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5036, obj_t BgL_xz00_5037, obj_t BgL_yz00_5038)
	{
		{	/* SawMill/bbv-types.scm 160 */
			{	/* SawMill/bbv-types.scm 161 */
				bool_t BgL_tmpz00_6662;

				{	/* SawMill/bbv-types.scm 161 */
					int BgL_arg1903z00_5582;
					int BgL_arg1904z00_5583;

					{	/* SawMill/bbv-types.scm 161 */
						BgL_rtl_regz00_bglt BgL_oz00_5584;

						BgL_oz00_5584 =
							((BgL_rtl_regz00_bglt)
							(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
										((BgL_bbvzd2ctxentryzd2_bglt) BgL_xz00_5037)))->
								BgL_regz00));
						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6666;

							{
								obj_t BgL_auxz00_6667;

								{	/* SawMill/bbv-types.scm 161 */
									BgL_objectz00_bglt BgL_tmpz00_6668;

									BgL_tmpz00_6668 = ((BgL_objectz00_bglt) BgL_oz00_5584);
									BgL_auxz00_6667 = BGL_OBJECT_WIDENING(BgL_tmpz00_6668);
								}
								BgL_auxz00_6666 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6667);
							}
							BgL_arg1903z00_5582 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6666))->
								BgL_numz00);
					}}
					{	/* SawMill/bbv-types.scm 162 */
						BgL_rtl_regz00_bglt BgL_oz00_5585;

						BgL_oz00_5585 =
							((BgL_rtl_regz00_bglt)
							(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
										((BgL_bbvzd2ctxentryzd2_bglt) BgL_yz00_5038)))->
								BgL_regz00));
						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6676;

							{
								obj_t BgL_auxz00_6677;

								{	/* SawMill/bbv-types.scm 162 */
									BgL_objectz00_bglt BgL_tmpz00_6678;

									BgL_tmpz00_6678 = ((BgL_objectz00_bglt) BgL_oz00_5585);
									BgL_auxz00_6677 = BGL_OBJECT_WIDENING(BgL_tmpz00_6678);
								}
								BgL_auxz00_6676 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6677);
							}
							BgL_arg1904z00_5583 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6676))->
								BgL_numz00);
					}}
					BgL_tmpz00_6662 =
						((long) (BgL_arg1903z00_5582) <= (long) (BgL_arg1904z00_5583));
				}
				return BBOOL(BgL_tmpz00_6662);
			}
		}

	}



/* &<@anonymous:1909> */
	obj_t BGl_z62zc3z04anonymousza31909ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5039, obj_t BgL_pz00_5040)
	{
		{	/* SawMill/bbv-types.scm 163 */
			if (BGl_isazf3zf3zz__objectz00(BgL_pz00_5040,
					BGl_rtl_regzf2razf2zzsaw_regsetz00))
				{	/* SawMill/bbv-types.scm 166 */
					bool_t BgL_test3465z00_6689;

					{	/* SawMill/bbv-types.scm 166 */
						BgL_typez00_bglt BgL_arg1914z00_5586;

						BgL_arg1914z00_5586 =
							(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_pz00_5040))))->BgL_typez00);
						BgL_test3465z00_6689 =
							(
							((obj_t) BgL_arg1914z00_5586) == BGl_za2objza2z00zztype_cachez00);
					}
					if (BgL_test3465z00_6689)
						{	/* SawMill/bbv-types.scm 166 */
							return BFALSE;
						}
					else
						{	/* SawMill/bbv-types.scm 167 */
							BgL_bbvzd2ctxentryzd2_bglt BgL_new1212z00_5587;

							{	/* SawMill/bbv-types.scm 168 */
								BgL_bbvzd2ctxentryzd2_bglt BgL_new1211z00_5588;

								BgL_new1211z00_5588 =
									((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_bbvzd2ctxentryzd2_bgl))));
								{	/* SawMill/bbv-types.scm 168 */
									long BgL_arg1913z00_5589;

									{	/* SawMill/bbv-types.scm 168 */
										long BgL_res2895z00_5590;

										BgL_res2895z00_5590 =
											BGL_CLASS_INDEX
											(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
										BgL_arg1913z00_5589 = BgL_res2895z00_5590;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1211z00_5588),
										BgL_arg1913z00_5589);
								}
								BgL_new1212z00_5587 = BgL_new1211z00_5588;
							}
							((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1212z00_5587))->
									BgL_regz00) =
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) (
											(BgL_rtl_regz00_bglt) BgL_pz00_5040))), BUNSPEC);
							((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1212z00_5587))->
									BgL_typz00) =
								((BgL_typez00_bglt) (((BgL_rtl_regz00_bglt)
											COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
														BgL_pz00_5040))))->BgL_typez00)), BUNSPEC);
							((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1212z00_5587))->
									BgL_flagz00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1212z00_5587))->
									BgL_valuez00) =
								((obj_t) CNST_TABLE_REF(((long) 8))), BUNSPEC);
							((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1212z00_5587))->
									BgL_aliasesz00) = ((obj_t) BNIL), BUNSPEC);
							return ((obj_t) BgL_new1212z00_5587);
						}
				}
			else
				{	/* SawMill/bbv-types.scm 164 */
					return BFALSE;
				}
		}

	}



/* ctx-get */
	BGL_EXPORTED_DEF obj_t BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(obj_t
		BgL_ctxz00_86, BgL_rtl_regz00_bglt BgL_regz00_87)
	{
		{	/* SawMill/bbv-types.scm 176 */
			{
				obj_t BgL_ctxz00_2170;

				BgL_ctxz00_2170 = BgL_ctxz00_86;
			BgL_zc3z04anonymousza31915ze3z87_2171:
				if (PAIRP(BgL_ctxz00_2170))
					{	/* SawMill/bbv-types.scm 178 */
						if (
							(((obj_t)
									(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
												((BgL_bbvzd2ctxentryzd2_bglt)
													CAR(BgL_ctxz00_2170))))->BgL_regz00)) ==
								((obj_t) BgL_regz00_87)))
							{	/* SawMill/bbv-types.scm 179 */
								return CAR(BgL_ctxz00_2170);
							}
						else
							{
								obj_t BgL_ctxz00_6721;

								BgL_ctxz00_6721 = CDR(BgL_ctxz00_2170);
								BgL_ctxz00_2170 = BgL_ctxz00_6721;
								goto BgL_zc3z04anonymousza31915ze3z87_2171;
							}
					}
				else
					{	/* SawMill/bbv-types.scm 178 */
						return BFALSE;
					}
			}
		}

	}



/* &ctx-get */
	obj_t BGl_z62ctxzd2getzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5041,
		obj_t BgL_ctxz00_5042, obj_t BgL_regz00_5043)
	{
		{	/* SawMill/bbv-types.scm 176 */
			return
				BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_5042,
				((BgL_rtl_regz00_bglt) BgL_regz00_5043));
		}

	}



/* extend-ctx/entry */
	obj_t BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2(obj_t BgL_ctxz00_88,
		BgL_bbvzd2ctxentryzd2_bglt BgL_entryz00_89)
	{
		{	/* SawMill/bbv-types.scm 189 */
			{	/* SawMill/bbv-types.scm 190 */
				BgL_rtl_regz00_bglt BgL_regz00_2180;

				BgL_regz00_2180 =
					(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_entryz00_89))->BgL_regz00);
				{	/* SawMill/bbv-types.scm 190 */
					int BgL_rnumz00_2181;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_6726;

						{
							obj_t BgL_auxz00_6727;

							{	/* SawMill/bbv-types.scm 191 */
								BgL_objectz00_bglt BgL_tmpz00_6728;

								BgL_tmpz00_6728 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_regz00_2180));
								BgL_auxz00_6727 = BGL_OBJECT_WIDENING(BgL_tmpz00_6728);
							}
							BgL_auxz00_6726 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6727);
						}
						BgL_rnumz00_2181 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6726))->
							BgL_numz00);
					}
					{	/* SawMill/bbv-types.scm 191 */

						return
							BGl_loopze72ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_2181,
							BgL_regz00_2180, BgL_entryz00_89, BgL_ctxz00_88);
					}
				}
			}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzsaw_bbvzd2typeszd2(int BgL_rnumz00_5519,
		BgL_rtl_regz00_bglt BgL_regz00_5518,
		BgL_bbvzd2ctxentryzd2_bglt BgL_entryz00_5517, obj_t BgL_ctxz00_2183)
	{
		{	/* SawMill/bbv-types.scm 192 */
			if (NULLP(BgL_ctxz00_2183))
				{	/* SawMill/bbv-types.scm 195 */
					obj_t BgL_list1926z00_2186;

					BgL_list1926z00_2186 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_entryz00_5517), BNIL);
					return BgL_list1926z00_2186;
				}
			else
				{	/* SawMill/bbv-types.scm 196 */
					bool_t BgL_test3469z00_6739;

					{	/* SawMill/bbv-types.scm 196 */
						int BgL_arg1940z00_2200;

						{	/* SawMill/bbv-types.scm 196 */
							BgL_rtl_regz00_bglt BgL_oz00_4084;

							BgL_oz00_4084 =
								((BgL_rtl_regz00_bglt)
								(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt)
												CAR(((obj_t) BgL_ctxz00_2183)))))->BgL_regz00));
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6745;

								{
									obj_t BgL_auxz00_6746;

									{	/* SawMill/bbv-types.scm 196 */
										BgL_objectz00_bglt BgL_tmpz00_6747;

										BgL_tmpz00_6747 = ((BgL_objectz00_bglt) BgL_oz00_4084);
										BgL_auxz00_6746 = BGL_OBJECT_WIDENING(BgL_tmpz00_6747);
									}
									BgL_auxz00_6745 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6746);
								}
								BgL_arg1940z00_2200 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6745))->
									BgL_numz00);
						}}
						BgL_test3469z00_6739 =
							((long) (BgL_arg1940z00_2200) > (long) (BgL_rnumz00_5519));
					}
					if (BgL_test3469z00_6739)
						{	/* SawMill/bbv-types.scm 196 */
							return
								MAKE_YOUNG_PAIR(((obj_t) BgL_entryz00_5517), BgL_ctxz00_2183);
						}
					else
						{	/* SawMill/bbv-types.scm 196 */
							if (
								(((obj_t)
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt)
														CAR(
															((obj_t) BgL_ctxz00_2183)))))->BgL_regz00)) ==
									((obj_t) BgL_regz00_5518)))
								{	/* SawMill/bbv-types.scm 199 */
									obj_t BgL_arg1934z00_2194;

									BgL_arg1934z00_2194 = CDR(((obj_t) BgL_ctxz00_2183));
									return
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_entryz00_5517), BgL_arg1934z00_2194);
								}
							else
								{	/* SawMill/bbv-types.scm 201 */
									obj_t BgL_arg1935z00_2195;
									obj_t BgL_arg1936z00_2196;

									BgL_arg1935z00_2195 = CAR(((obj_t) BgL_ctxz00_2183));
									{	/* SawMill/bbv-types.scm 201 */
										obj_t BgL_arg1937z00_2197;

										BgL_arg1937z00_2197 = CDR(((obj_t) BgL_ctxz00_2183));
										BgL_arg1936z00_2196 =
											BGl_loopze72ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_5519,
											BgL_regz00_5518, BgL_entryz00_5517, BgL_arg1937z00_2197);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1935z00_2195, BgL_arg1936z00_2196);
								}
						}
				}
		}

	}



/* _extend-ctx */
	obj_t BGl__extendzd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t BgL_env1679z00_96,
		obj_t BgL_opt1678z00_95)
	{
		{	/* SawMill/bbv-types.scm 209 */
			{	/* SawMill/bbv-types.scm 209 */
				obj_t BgL_g1680z00_2204;
				obj_t BgL_g1681z00_2205;
				obj_t BgL_g1682z00_2206;
				obj_t BgL_g1683z00_2207;

				BgL_g1680z00_2204 = VECTOR_REF(BgL_opt1678z00_95, ((long) 0));
				BgL_g1681z00_2205 = VECTOR_REF(BgL_opt1678z00_95, ((long) 1));
				BgL_g1682z00_2206 = VECTOR_REF(BgL_opt1678z00_95, ((long) 2));
				BgL_g1683z00_2207 = VECTOR_REF(BgL_opt1678z00_95, ((long) 3));
				switch (VECTOR_LENGTH(BgL_opt1678z00_95))
					{
					case ((long) 4):

						{	/* SawMill/bbv-types.scm 209 */
							obj_t BgL_valuez00_2211;

							BgL_valuez00_2211 = CNST_TABLE_REF(((long) 8));
							{	/* SawMill/bbv-types.scm 209 */

								return
									BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_g1680z00_2204,
									BgL_g1681z00_2205, BgL_g1682z00_2206, BgL_g1683z00_2207,
									BgL_valuez00_2211);
							}
						}
						break;
					case ((long) 5):

						{	/* SawMill/bbv-types.scm 209 */
							obj_t BgL_valuez00_2212;

							BgL_valuez00_2212 = VECTOR_REF(BgL_opt1678z00_95, ((long) 4));
							{	/* SawMill/bbv-types.scm 209 */

								return
									BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_g1680z00_2204,
									BgL_g1681z00_2205, BgL_g1682z00_2206, BgL_g1683z00_2207,
									BgL_valuez00_2212);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* extend-ctx */
	BGL_EXPORTED_DEF obj_t BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t
		BgL_ctxz00_90, obj_t BgL_regz00_91, obj_t BgL_typez00_92,
		obj_t BgL_flagz00_93, obj_t BgL_valuez00_94)
	{
		{	/* SawMill/bbv-types.scm 209 */
			if (BGl_isazf3zf3zz__objectz00(BgL_regz00_91,
					BGl_rtl_regzf2razf2zzsaw_regsetz00))
				{	/* SawMill/bbv-types.scm 220 */
					int BgL_rnumz00_2215;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_6787;

						{
							obj_t BgL_auxz00_6788;

							{	/* SawMill/bbv-types.scm 220 */
								BgL_objectz00_bglt BgL_tmpz00_6789;

								BgL_tmpz00_6789 =
									((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_91));
								BgL_auxz00_6788 = BGL_OBJECT_WIDENING(BgL_tmpz00_6789);
							}
							BgL_auxz00_6787 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6788);
						}
						BgL_rnumz00_2215 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6787))->
							BgL_numz00);
					}
					{	/* SawMill/bbv-types.scm 221 */
						obj_t BgL_g1216z00_2216;

						BgL_g1216z00_2216 =
							BGl_unaliaszd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_90,
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_91)));
						return
							BGl_loopze71ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_2215,
							BgL_regz00_91, BgL_valuez00_94, BgL_flagz00_93, BgL_typez00_92,
							BgL_g1216z00_2216);
					}
				}
			else
				{	/* SawMill/bbv-types.scm 218 */
					return BgL_ctxz00_90;
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzsaw_bbvzd2typeszd2(int BgL_rnumz00_5516,
		obj_t BgL_regz00_5515, obj_t BgL_valuez00_5514, obj_t BgL_flagz00_5513,
		obj_t BgL_typez00_5512, obj_t BgL_ctxz00_2218)
	{
		{	/* SawMill/bbv-types.scm 221 */
			if (NULLP(BgL_ctxz00_2218))
				{	/* SawMill/bbv-types.scm 224 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2221;

					BgL_nz00_2221 =
						BGl_newzd2ctxentryze71z35zzsaw_bbvzd2typeszd2(BgL_regz00_5515,
						BgL_typez00_5512, BgL_flagz00_5513, BgL_valuez00_5514);
					{	/* SawMill/bbv-types.scm 225 */
						obj_t BgL_list1947z00_2222;

						BgL_list1947z00_2222 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_nz00_2221), BNIL);
						return BgL_list1947z00_2222;
					}
				}
			else
				{	/* SawMill/bbv-types.scm 226 */
					bool_t BgL_test3473z00_6804;

					{	/* SawMill/bbv-types.scm 226 */
						int BgL_arg1963z00_2243;

						{	/* SawMill/bbv-types.scm 226 */
							BgL_rtl_regz00_bglt BgL_oz00_4104;

							BgL_oz00_4104 =
								((BgL_rtl_regz00_bglt)
								(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt)
												CAR(((obj_t) BgL_ctxz00_2218)))))->BgL_regz00));
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6810;

								{
									obj_t BgL_auxz00_6811;

									{	/* SawMill/bbv-types.scm 226 */
										BgL_objectz00_bglt BgL_tmpz00_6812;

										BgL_tmpz00_6812 = ((BgL_objectz00_bglt) BgL_oz00_4104);
										BgL_auxz00_6811 = BGL_OBJECT_WIDENING(BgL_tmpz00_6812);
									}
									BgL_auxz00_6810 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6811);
								}
								BgL_arg1963z00_2243 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6810))->
									BgL_numz00);
						}}
						BgL_test3473z00_6804 =
							((long) (BgL_arg1963z00_2243) > (long) (BgL_rnumz00_5516));
					}
					if (BgL_test3473z00_6804)
						{	/* SawMill/bbv-types.scm 227 */
							BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2227;

							BgL_nz00_2227 =
								BGl_newzd2ctxentryze71z35zzsaw_bbvzd2typeszd2(BgL_regz00_5515,
								BgL_typez00_5512, BgL_flagz00_5513, BgL_valuez00_5514);
							return MAKE_YOUNG_PAIR(((obj_t) BgL_nz00_2227), BgL_ctxz00_2218);
						}
					else
						{	/* SawMill/bbv-types.scm 226 */
							if (
								(((obj_t)
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt)
														CAR(
															((obj_t) BgL_ctxz00_2218)))))->BgL_regz00)) ==
									BgL_regz00_5515))
								{	/* SawMill/bbv-types.scm 230 */
									BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2231;

									{	/* SawMill/bbv-types.scm 230 */
										BgL_bbvzd2ctxentryzd2_bglt BgL_duplicated1219z00_2234;
										BgL_bbvzd2ctxentryzd2_bglt BgL_new1217z00_2235;

										BgL_duplicated1219z00_2234 =
											((BgL_bbvzd2ctxentryzd2_bglt)
											CAR(((obj_t) BgL_ctxz00_2218)));
										{	/* SawMill/bbv-types.scm 230 */
											BgL_bbvzd2ctxentryzd2_bglt BgL_new1220z00_2236;

											BgL_new1220z00_2236 =
												((BgL_bbvzd2ctxentryzd2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_bbvzd2ctxentryzd2_bgl))));
											{	/* SawMill/bbv-types.scm 230 */
												long BgL_arg1957z00_2237;

												{	/* SawMill/bbv-types.scm 230 */
													long BgL_res2905z00_4113;

													BgL_res2905z00_4113 =
														BGL_CLASS_INDEX
														(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
													BgL_arg1957z00_2237 = BgL_res2905z00_4113;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1220z00_2236),
													BgL_arg1957z00_2237);
											}
											BgL_new1217z00_2235 = BgL_new1220z00_2236;
										}
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1217z00_2235))->BgL_regz00) =
											((BgL_rtl_regz00_bglt) (((BgL_bbvzd2ctxentryzd2_bglt)
														COBJECT(BgL_duplicated1219z00_2234))->BgL_regz00)),
											BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1217z00_2235))->BgL_typz00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BgL_typez00_5512)), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1217z00_2235))->BgL_flagz00) =
											((bool_t) CBOOL(BgL_flagz00_5513)), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1217z00_2235))->BgL_valuez00) =
											((obj_t) BgL_valuez00_5514), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1217z00_2235))->BgL_aliasesz00) =
											((obj_t) BNIL), BUNSPEC);
										BgL_nz00_2231 = BgL_new1217z00_2235;
									}
									{	/* SawMill/bbv-types.scm 236 */
										obj_t BgL_arg1956z00_2233;

										BgL_arg1956z00_2233 = CDR(((obj_t) BgL_ctxz00_2218));
										return
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_nz00_2231), BgL_arg1956z00_2233);
									}
								}
							else
								{	/* SawMill/bbv-types.scm 238 */
									obj_t BgL_arg1958z00_2238;
									obj_t BgL_arg1959z00_2239;

									BgL_arg1958z00_2238 = CAR(((obj_t) BgL_ctxz00_2218));
									{	/* SawMill/bbv-types.scm 238 */
										obj_t BgL_arg1960z00_2240;

										BgL_arg1960z00_2240 = CDR(((obj_t) BgL_ctxz00_2218));
										BgL_arg1959z00_2239 =
											BGl_loopze71ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_5516,
											BgL_regz00_5515, BgL_valuez00_5514, BgL_flagz00_5513,
											BgL_typez00_5512, BgL_arg1960z00_2240);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1958z00_2238, BgL_arg1959z00_2239);
								}
						}
				}
		}

	}



/* new-ctxentry~1 */
	BgL_bbvzd2ctxentryzd2_bglt BGl_newzd2ctxentryze71z35zzsaw_bbvzd2typeszd2(obj_t
		BgL_regz00_2247, obj_t BgL_typez00_2248, obj_t BgL_flagz00_2249,
		obj_t BgL_valuez00_2250)
	{
		{	/* SawMill/bbv-types.scm 216 */
			{	/* SawMill/bbv-types.scm 212 */
				BgL_bbvzd2ctxentryzd2_bglt BgL_new1215z00_2252;

				{	/* SawMill/bbv-types.scm 213 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_new1214z00_2253;

					BgL_new1214z00_2253 =
						((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_bbvzd2ctxentryzd2_bgl))));
					{	/* SawMill/bbv-types.scm 213 */
						long BgL_arg1967z00_2254;

						{	/* SawMill/bbv-types.scm 213 */
							long BgL_res2901z00_4095;

							BgL_res2901z00_4095 =
								BGL_CLASS_INDEX(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
							BgL_arg1967z00_2254 = BgL_res2901z00_4095;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1214z00_2253), BgL_arg1967z00_2254);
					}
					BgL_new1215z00_2252 = BgL_new1214z00_2253;
				}
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1215z00_2252))->
						BgL_regz00) =
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_2247)),
					BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1215z00_2252))->
						BgL_typz00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typez00_2248)), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1215z00_2252))->
						BgL_flagz00) = ((bool_t) CBOOL(BgL_flagz00_2249)), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1215z00_2252))->
						BgL_valuez00) = ((obj_t) BgL_valuez00_2250), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1215z00_2252))->
						BgL_aliasesz00) = ((obj_t) BNIL), BUNSPEC);
				return BgL_new1215z00_2252;
			}
		}

	}



/* _extend-normalize-ctx */
	obj_t BGl__extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2(obj_t
		BgL_env1687z00_103, obj_t BgL_opt1686z00_102)
	{
		{	/* SawMill/bbv-types.scm 243 */
			{	/* SawMill/bbv-types.scm 243 */
				obj_t BgL_g1688z00_2256;
				obj_t BgL_g1689z00_2257;
				obj_t BgL_g1690z00_2258;
				obj_t BgL_g1691z00_2259;

				BgL_g1688z00_2256 = VECTOR_REF(BgL_opt1686z00_102, ((long) 0));
				BgL_g1689z00_2257 = VECTOR_REF(BgL_opt1686z00_102, ((long) 1));
				BgL_g1690z00_2258 = VECTOR_REF(BgL_opt1686z00_102, ((long) 2));
				BgL_g1691z00_2259 = VECTOR_REF(BgL_opt1686z00_102, ((long) 3));
				switch (VECTOR_LENGTH(BgL_opt1686z00_102))
					{
					case ((long) 4):

						{	/* SawMill/bbv-types.scm 243 */
							obj_t BgL_valuez00_2263;

							BgL_valuez00_2263 = CNST_TABLE_REF(((long) 8));
							{	/* SawMill/bbv-types.scm 243 */

								{	/* SawMill/bbv-types.scm 243 */
									obj_t BgL_res2907z00_4126;

									{	/* SawMill/bbv-types.scm 244 */
										obj_t BgL_tynormz00_4121;

										BgL_tynormz00_4121 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_g1690z00_2258,
											BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2);
										if (PAIRP(BgL_tynormz00_4121))
											{	/* SawMill/bbv-types.scm 246 */
												obj_t BgL_arg1970z00_4123;

												BgL_arg1970z00_4123 = CDR(BgL_tynormz00_4121);
												BgL_res2907z00_4126 =
													BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(
													((obj_t) BgL_g1688z00_2256), BgL_g1689z00_2257,
													BgL_arg1970z00_4123, BgL_g1691z00_2259,
													BgL_valuez00_2263);
											}
										else
											{	/* SawMill/bbv-types.scm 245 */
												BgL_res2907z00_4126 =
													BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(
													((obj_t) BgL_g1688z00_2256), BgL_g1689z00_2257,
													BgL_g1690z00_2258, BgL_g1691z00_2259,
													BgL_valuez00_2263);
											}
									}
									return BgL_res2907z00_4126;
								}
							}
						}
						break;
					case ((long) 5):

						{	/* SawMill/bbv-types.scm 243 */
							obj_t BgL_valuez00_2264;

							BgL_valuez00_2264 = VECTOR_REF(BgL_opt1686z00_102, ((long) 4));
							{	/* SawMill/bbv-types.scm 243 */

								{	/* SawMill/bbv-types.scm 243 */
									obj_t BgL_res2909z00_4133;

									{	/* SawMill/bbv-types.scm 244 */
										obj_t BgL_tynormz00_4128;

										BgL_tynormz00_4128 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_g1690z00_2258,
											BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2);
										if (PAIRP(BgL_tynormz00_4128))
											{	/* SawMill/bbv-types.scm 246 */
												obj_t BgL_arg1970z00_4130;

												BgL_arg1970z00_4130 = CDR(BgL_tynormz00_4128);
												BgL_res2909z00_4133 =
													BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(
													((obj_t) BgL_g1688z00_2256), BgL_g1689z00_2257,
													BgL_arg1970z00_4130, BgL_g1691z00_2259,
													BgL_valuez00_2264);
											}
										else
											{	/* SawMill/bbv-types.scm 245 */
												BgL_res2909z00_4133 =
													BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(
													((obj_t) BgL_g1688z00_2256), BgL_g1689z00_2257,
													BgL_g1690z00_2258, BgL_g1691z00_2259,
													BgL_valuez00_2264);
											}
									}
									return BgL_res2909z00_4133;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* extend-normalize-ctx */
	BGL_EXPORTED_DEF obj_t
		BGl_extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2(obj_t BgL_ctxz00_97,
		obj_t BgL_regz00_98, obj_t BgL_typez00_99, obj_t BgL_flagz00_100,
		obj_t BgL_valuez00_101)
	{
		{	/* SawMill/bbv-types.scm 243 */
			{	/* SawMill/bbv-types.scm 244 */
				obj_t BgL_tynormz00_4134;

				BgL_tynormz00_4134 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_99,
					BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2);
				if (PAIRP(BgL_tynormz00_4134))
					{	/* SawMill/bbv-types.scm 245 */
						return
							BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_97,
							BgL_regz00_98, CDR(BgL_tynormz00_4134), BgL_flagz00_100,
							BgL_valuez00_101);
					}
				else
					{	/* SawMill/bbv-types.scm 245 */
						return
							BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_97,
							BgL_regz00_98, BgL_typez00_99, BgL_flagz00_100, BgL_valuez00_101);
					}
			}
		}

	}



/* _refine-ctx */
	obj_t BGl__refinezd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t BgL_env1695z00_110,
		obj_t BgL_opt1694z00_109)
	{
		{	/* SawMill/bbv-types.scm 255 */
			{	/* SawMill/bbv-types.scm 255 */
				obj_t BgL_g1696z00_2268;
				obj_t BgL_g1697z00_2269;
				obj_t BgL_g1698z00_2270;
				obj_t BgL_g1699z00_2271;

				BgL_g1696z00_2268 = VECTOR_REF(BgL_opt1694z00_109, ((long) 0));
				BgL_g1697z00_2269 = VECTOR_REF(BgL_opt1694z00_109, ((long) 1));
				BgL_g1698z00_2270 = VECTOR_REF(BgL_opt1694z00_109, ((long) 2));
				BgL_g1699z00_2271 = VECTOR_REF(BgL_opt1694z00_109, ((long) 3));
				switch (VECTOR_LENGTH(BgL_opt1694z00_109))
					{
					case ((long) 4):

						{	/* SawMill/bbv-types.scm 255 */
							obj_t BgL_valuez00_2275;

							BgL_valuez00_2275 = CNST_TABLE_REF(((long) 8));
							{	/* SawMill/bbv-types.scm 255 */

								return
									BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_g1696z00_2268,
									BgL_g1697z00_2269, BgL_g1698z00_2270, BgL_g1699z00_2271,
									BgL_valuez00_2275);
							}
						}
						break;
					case ((long) 5):

						{	/* SawMill/bbv-types.scm 255 */
							obj_t BgL_valuez00_2276;

							BgL_valuez00_2276 = VECTOR_REF(BgL_opt1694z00_109, ((long) 4));
							{	/* SawMill/bbv-types.scm 255 */

								return
									BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_g1696z00_2268,
									BgL_g1697z00_2269, BgL_g1698z00_2270, BgL_g1699z00_2271,
									BgL_valuez00_2276);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* refine-ctx */
	BGL_EXPORTED_DEF obj_t BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t
		BgL_ctxz00_104, obj_t BgL_regz00_105, obj_t BgL_typez00_106,
		obj_t BgL_flagz00_107, obj_t BgL_valuez00_108)
	{
		{	/* SawMill/bbv-types.scm 255 */
			{	/* SawMill/bbv-types.scm 289 */
				obj_t BgL_g1231z00_2279;

				{	/* SawMill/bbv-types.scm 289 */
					obj_t BgL_list1984z00_2299;

					BgL_list1984z00_2299 = MAKE_YOUNG_PAIR(BgL_regz00_105, BNIL);
					BgL_g1231z00_2279 = BgL_list1984z00_2299;
				}
				{
					obj_t BgL_worklistz00_2282;
					obj_t BgL_stackz00_2283;
					obj_t BgL_ctxz00_2284;

					BgL_worklistz00_2282 = BgL_g1231z00_2279;
					BgL_stackz00_2283 = BNIL;
					BgL_ctxz00_2284 = BgL_ctxz00_104;
				BgL_zc3z04anonymousza31972ze3z87_2285:
					if (NULLP(BgL_worklistz00_2282))
						{	/* SawMill/bbv-types.scm 293 */
							return BgL_ctxz00_2284;
						}
					else
						{	/* SawMill/bbv-types.scm 293 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
											((obj_t) BgL_worklistz00_2282)), BgL_stackz00_2283)))
								{	/* SawMill/bbv-types.scm 296 */
									obj_t BgL_arg1976z00_2289;

									BgL_arg1976z00_2289 = CDR(((obj_t) BgL_worklistz00_2282));
									{
										obj_t BgL_worklistz00_6917;

										BgL_worklistz00_6917 = BgL_arg1976z00_2289;
										BgL_worklistz00_2282 = BgL_worklistz00_6917;
										goto BgL_zc3z04anonymousza31972ze3z87_2285;
									}
								}
							else
								{	/* SawMill/bbv-types.scm 298 */
									obj_t BgL_nctxz00_2290;

									{	/* SawMill/bbv-types.scm 299 */
										obj_t BgL_arg1982z00_2296;

										BgL_arg1982z00_2296 = CAR(((obj_t) BgL_worklistz00_2282));
										BgL_nctxz00_2290 =
											BGl_refinezd2oneze70z35zzsaw_bbvzd2typeszd2
											(BgL_valuez00_108, BgL_flagz00_107, BgL_typez00_106,
											BgL_arg1982z00_2296, BgL_ctxz00_2284);
									}
									{	/* SawMill/bbv-types.scm 299 */
										obj_t BgL_aliasesz00_2291;

										{	/* SawMill/bbv-types.scm 300 */
											int BgL_tmpz00_6921;

											BgL_tmpz00_6921 = (int) (((long) 1));
											BgL_aliasesz00_2291 = BGL_MVALUES_VAL(BgL_tmpz00_6921);
										}
										{	/* SawMill/bbv-types.scm 300 */
											obj_t BgL_arg1977z00_2292;
											obj_t BgL_arg1979z00_2293;

											{	/* SawMill/bbv-types.scm 300 */
												obj_t BgL_arg1980z00_2294;

												BgL_arg1980z00_2294 =
													CDR(((obj_t) BgL_worklistz00_2282));
												BgL_arg1977z00_2292 =
													BGl_appendzd221011zd2zzsaw_bbvzd2typeszd2
													(BgL_aliasesz00_2291, BgL_arg1980z00_2294);
											}
											{	/* SawMill/bbv-types.scm 301 */
												obj_t BgL_arg1981z00_2295;

												BgL_arg1981z00_2295 =
													CAR(((obj_t) BgL_worklistz00_2282));
												BgL_arg1979z00_2293 =
													MAKE_YOUNG_PAIR(BgL_arg1981z00_2295,
													BgL_stackz00_2283);
											}
											{
												obj_t BgL_ctxz00_6932;
												obj_t BgL_stackz00_6931;
												obj_t BgL_worklistz00_6930;

												BgL_worklistz00_6930 = BgL_arg1977z00_2292;
												BgL_stackz00_6931 = BgL_arg1979z00_2293;
												BgL_ctxz00_6932 = BgL_nctxz00_2290;
												BgL_ctxz00_2284 = BgL_ctxz00_6932;
												BgL_stackz00_2283 = BgL_stackz00_6931;
												BgL_worklistz00_2282 = BgL_worklistz00_6930;
												goto BgL_zc3z04anonymousza31972ze3z87_2285;
											}
										}
									}
								}
						}
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzsaw_bbvzd2typeszd2(int BgL_rnumz00_5508,
		obj_t BgL_regz00_5507, obj_t BgL_valuez00_5506, obj_t BgL_flagz00_5505,
		obj_t BgL_typez00_5504, obj_t BgL_ctxz00_2314)
	{
		{	/* SawMill/bbv-types.scm 268 */
			if (NULLP(BgL_ctxz00_2314))
				{	/* SawMill/bbv-types.scm 271 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2317;

					BgL_nz00_2317 =
						BGl_newzd2ctxentryze70z35zzsaw_bbvzd2typeszd2(BgL_regz00_5507,
						BgL_typez00_5504, BgL_flagz00_5505, BgL_valuez00_5506);
					{	/* SawMill/bbv-types.scm 272 */
						obj_t BgL_val0_1596z00_2318;

						{	/* SawMill/bbv-types.scm 272 */
							obj_t BgL_list1991z00_2320;

							BgL_list1991z00_2320 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_nz00_2317), BNIL);
							BgL_val0_1596z00_2318 = BgL_list1991z00_2320;
						}
						{	/* SawMill/bbv-types.scm 272 */
							int BgL_res2914z00_4147;

							{	/* SawMill/bbv-types.scm 272 */
								int BgL_tmpz00_6938;

								BgL_tmpz00_6938 = (int) (((long) 2));
								BgL_res2914z00_4147 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6938);
							} BgL_res2914z00_4147;
						}
						{	/* SawMill/bbv-types.scm 272 */
							int BgL_tmpz00_6941;

							BgL_tmpz00_6941 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_6941, BNIL);
						}
						return BgL_val0_1596z00_2318;
					}
				}
			else
				{	/* SawMill/bbv-types.scm 273 */
					bool_t BgL_test3481z00_6944;

					{	/* SawMill/bbv-types.scm 273 */
						int BgL_arg2007z00_2348;

						{	/* SawMill/bbv-types.scm 273 */
							BgL_rtl_regz00_bglt BgL_oz00_4150;

							BgL_oz00_4150 =
								((BgL_rtl_regz00_bglt)
								(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt)
												CAR(((obj_t) BgL_ctxz00_2314)))))->BgL_regz00));
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6950;

								{
									obj_t BgL_auxz00_6951;

									{	/* SawMill/bbv-types.scm 273 */
										BgL_objectz00_bglt BgL_tmpz00_6952;

										BgL_tmpz00_6952 = ((BgL_objectz00_bglt) BgL_oz00_4150);
										BgL_auxz00_6951 = BGL_OBJECT_WIDENING(BgL_tmpz00_6952);
									}
									BgL_auxz00_6950 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6951);
								}
								BgL_arg2007z00_2348 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6950))->
									BgL_numz00);
						}}
						BgL_test3481z00_6944 =
							((long) (BgL_arg2007z00_2348) > (long) (BgL_rnumz00_5508));
					}
					if (BgL_test3481z00_6944)
						{	/* SawMill/bbv-types.scm 274 */
							BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2325;

							BgL_nz00_2325 =
								BGl_newzd2ctxentryze70z35zzsaw_bbvzd2typeszd2(BgL_regz00_5507,
								BgL_typez00_5504, BgL_flagz00_5505, BgL_valuez00_5506);
							{	/* SawMill/bbv-types.scm 275 */
								obj_t BgL_val0_1598z00_2326;

								BgL_val0_1598z00_2326 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_nz00_2325), BgL_ctxz00_2314);
								{	/* SawMill/bbv-types.scm 275 */
									int BgL_res2916z00_4155;

									{	/* SawMill/bbv-types.scm 275 */
										int BgL_tmpz00_6963;

										BgL_tmpz00_6963 = (int) (((long) 2));
										BgL_res2916z00_4155 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6963);
									} BgL_res2916z00_4155;
								}
								{	/* SawMill/bbv-types.scm 275 */
									int BgL_tmpz00_6966;

									BgL_tmpz00_6966 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_6966, BNIL);
								}
								return BgL_val0_1598z00_2326;
							}
						}
					else
						{	/* SawMill/bbv-types.scm 273 */
							if (
								(((obj_t)
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt)
														CAR(
															((obj_t) BgL_ctxz00_2314)))))->BgL_regz00)) ==
									BgL_regz00_5507))
								{	/* SawMill/bbv-types.scm 277 */
									BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2331;

									{	/* SawMill/bbv-types.scm 277 */
										BgL_bbvzd2ctxentryzd2_bglt BgL_duplicated1228z00_2336;
										BgL_bbvzd2ctxentryzd2_bglt BgL_new1226z00_2337;

										BgL_duplicated1228z00_2336 =
											((BgL_bbvzd2ctxentryzd2_bglt)
											CAR(((obj_t) BgL_ctxz00_2314)));
										{	/* SawMill/bbv-types.scm 277 */
											BgL_bbvzd2ctxentryzd2_bglt BgL_new1229z00_2338;

											BgL_new1229z00_2338 =
												((BgL_bbvzd2ctxentryzd2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_bbvzd2ctxentryzd2_bgl))));
											{	/* SawMill/bbv-types.scm 277 */
												long BgL_arg2001z00_2339;

												{	/* SawMill/bbv-types.scm 277 */
													long BgL_res2917z00_4160;

													BgL_res2917z00_4160 =
														BGL_CLASS_INDEX
														(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
													BgL_arg2001z00_2339 = BgL_res2917z00_4160;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1229z00_2338),
													BgL_arg2001z00_2339);
											}
											BgL_new1226z00_2337 = BgL_new1229z00_2338;
										}
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1226z00_2337))->BgL_regz00) =
											((BgL_rtl_regz00_bglt) (((BgL_bbvzd2ctxentryzd2_bglt)
														COBJECT(BgL_duplicated1228z00_2336))->BgL_regz00)),
											BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1226z00_2337))->BgL_typz00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BgL_typez00_5504)), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1226z00_2337))->BgL_flagz00) =
											((bool_t) CBOOL(BgL_flagz00_5505)), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1226z00_2337))->BgL_valuez00) =
											((obj_t) BgL_valuez00_5506), BUNSPEC);
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1226z00_2337))->BgL_aliasesz00) =
											((obj_t) (((BgL_bbvzd2ctxentryzd2_bglt)
														COBJECT(BgL_duplicated1228z00_2336))->
													BgL_aliasesz00)), BUNSPEC);
										BgL_nz00_2331 = BgL_new1226z00_2337;
									}
									{	/* SawMill/bbv-types.scm 281 */
										obj_t BgL_val0_1600z00_2332;
										obj_t BgL_val1_1601z00_2333;

										{	/* SawMill/bbv-types.scm 281 */
											obj_t BgL_arg2000z00_2334;

											BgL_arg2000z00_2334 = CDR(((obj_t) BgL_ctxz00_2314));
											BgL_val0_1600z00_2332 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_nz00_2331), BgL_arg2000z00_2334);
										}
										BgL_val1_1601z00_2333 =
											(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt)
														CAR(((obj_t) BgL_ctxz00_2314)))))->BgL_aliasesz00);
										{	/* SawMill/bbv-types.scm 281 */
											int BgL_res2918z00_4165;

											{	/* SawMill/bbv-types.scm 281 */
												int BgL_tmpz00_7000;

												BgL_tmpz00_7000 = (int) (((long) 2));
												BgL_res2918z00_4165 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7000);
											} BgL_res2918z00_4165;
										}
										{	/* SawMill/bbv-types.scm 281 */
											int BgL_tmpz00_7003;

											BgL_tmpz00_7003 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_7003,
												BgL_val1_1601z00_2333);
										}
										return BgL_val0_1600z00_2332;
									}
								}
							else
								{	/* SawMill/bbv-types.scm 285 */
									obj_t BgL_rctxz00_2340;

									{	/* SawMill/bbv-types.scm 286 */
										obj_t BgL_arg2003z00_2345;

										BgL_arg2003z00_2345 = CDR(((obj_t) BgL_ctxz00_2314));
										BgL_rctxz00_2340 =
											BGl_loopze70ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_5508,
											BgL_regz00_5507, BgL_valuez00_5506, BgL_flagz00_5505,
											BgL_typez00_5504, BgL_arg2003z00_2345);
									}
									{	/* SawMill/bbv-types.scm 286 */
										obj_t BgL_aliasesz00_2341;

										{	/* SawMill/bbv-types.scm 287 */
											int BgL_tmpz00_7009;

											BgL_tmpz00_7009 = (int) (((long) 1));
											BgL_aliasesz00_2341 = BGL_MVALUES_VAL(BgL_tmpz00_7009);
										}
										{	/* SawMill/bbv-types.scm 287 */
											obj_t BgL_val0_1602z00_2342;

											{	/* SawMill/bbv-types.scm 287 */
												obj_t BgL_arg2002z00_2344;

												BgL_arg2002z00_2344 = CAR(((obj_t) BgL_ctxz00_2314));
												BgL_val0_1602z00_2342 =
													MAKE_YOUNG_PAIR(BgL_arg2002z00_2344,
													BgL_rctxz00_2340);
											}
											{	/* SawMill/bbv-types.scm 287 */
												int BgL_res2919z00_4168;

												{	/* SawMill/bbv-types.scm 287 */
													int BgL_tmpz00_7015;

													BgL_tmpz00_7015 = (int) (((long) 2));
													BgL_res2919z00_4168 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7015);
												} BgL_res2919z00_4168;
											}
											{	/* SawMill/bbv-types.scm 287 */
												int BgL_tmpz00_7018;

												BgL_tmpz00_7018 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_7018,
													BgL_aliasesz00_2341);
											}
											return BgL_val0_1602z00_2342;
										}
									}
								}
						}
				}
		}

	}



/* new-ctxentry~0 */
	BgL_bbvzd2ctxentryzd2_bglt BGl_newzd2ctxentryze70z35zzsaw_bbvzd2typeszd2(obj_t
		BgL_regz00_2300, obj_t BgL_typez00_2301, obj_t BgL_flagz00_2302,
		obj_t BgL_valuez00_2303)
	{
		{	/* SawMill/bbv-types.scm 262 */
			{	/* SawMill/bbv-types.scm 258 */
				BgL_bbvzd2ctxentryzd2_bglt BgL_new1225z00_2305;

				{	/* SawMill/bbv-types.scm 259 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_new1224z00_2306;

					BgL_new1224z00_2306 =
						((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_bbvzd2ctxentryzd2_bgl))));
					{	/* SawMill/bbv-types.scm 259 */
						long BgL_arg1986z00_2307;

						{	/* SawMill/bbv-types.scm 259 */
							long BgL_res2911z00_4140;

							BgL_res2911z00_4140 =
								BGL_CLASS_INDEX(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
							BgL_arg1986z00_2307 = BgL_res2911z00_4140;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1224z00_2306), BgL_arg1986z00_2307);
					}
					BgL_new1225z00_2305 = BgL_new1224z00_2306;
				}
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1225z00_2305))->
						BgL_regz00) =
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_2300)),
					BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1225z00_2305))->
						BgL_typz00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typez00_2301)), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1225z00_2305))->
						BgL_flagz00) = ((bool_t) CBOOL(BgL_flagz00_2302)), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1225z00_2305))->
						BgL_valuez00) = ((obj_t) BgL_valuez00_2303), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1225z00_2305))->
						BgL_aliasesz00) = ((obj_t) BNIL), BUNSPEC);
				return BgL_new1225z00_2305;
			}
		}

	}



/* refine-one~0 */
	obj_t BGl_refinezd2oneze70z35zzsaw_bbvzd2typeszd2(obj_t BgL_valuez00_5511,
		obj_t BgL_flagz00_5510, obj_t BgL_typez00_5509, obj_t BgL_regz00_2308,
		obj_t BgL_ctxz00_2309)
	{
		{	/* SawMill/bbv-types.scm 287 */
			if (BGl_isazf3zf3zz__objectz00(BgL_regz00_2308,
					BGl_rtl_regzf2razf2zzsaw_regsetz00))
				{	/* SawMill/bbv-types.scm 267 */
					int BgL_rnumz00_2312;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_7035;

						{
							obj_t BgL_auxz00_7036;

							{	/* SawMill/bbv-types.scm 267 */
								BgL_objectz00_bglt BgL_tmpz00_7037;

								BgL_tmpz00_7037 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_regz00_2308));
								BgL_auxz00_7036 = BGL_OBJECT_WIDENING(BgL_tmpz00_7037);
							}
							BgL_auxz00_7035 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_7036);
						}
						BgL_rnumz00_2312 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_7035))->
							BgL_numz00);
					}
					return
						BGl_loopze70ze7zzsaw_bbvzd2typeszd2(BgL_rnumz00_2312,
						BgL_regz00_2308, BgL_valuez00_5511, BgL_flagz00_5510,
						BgL_typez00_5509, BgL_ctxz00_2309);
				}
			else
				{	/* SawMill/bbv-types.scm 265 */
					return MAKE_YOUNG_PAIR(BgL_ctxz00_2309, BNIL);
				}
		}

	}



/* unalias-ctx */
	obj_t BGl_unaliaszd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t BgL_ctxz00_111,
		BgL_rtl_regz00_bglt BgL_regz00_112)
	{
		{	/* SawMill/bbv-types.scm 306 */
			{
				obj_t BgL_ctxz00_2367;
				BgL_rtl_regz00_bglt BgL_regz00_2368;
				BgL_rtl_regz00_bglt BgL_aliasz00_2369;

				{	/* SawMill/bbv-types.scm 317 */
					obj_t BgL_rez00_2355;

					BgL_rez00_2355 =
						BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_111,
						BgL_regz00_112);
					if (CBOOL(BgL_rez00_2355))
						{
							obj_t BgL_aliasesz00_2359;
							obj_t BgL_ctxz00_2360;

							{	/* SawMill/bbv-types.scm 320 */
								obj_t BgL_arg2011z00_2358;

								BgL_arg2011z00_2358 =
									(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt) BgL_rez00_2355)))->
									BgL_aliasesz00);
								BgL_aliasesz00_2359 = BgL_arg2011z00_2358;
								BgL_ctxz00_2360 = BgL_ctxz00_111;
							BgL_zc3z04anonymousza32012ze3z87_2361:
								if (NULLP(BgL_aliasesz00_2359))
									{	/* SawMill/bbv-types.scm 322 */
										return BgL_ctxz00_2360;
									}
								else
									{	/* SawMill/bbv-types.scm 324 */
										obj_t BgL_arg2014z00_2363;
										obj_t BgL_arg2016z00_2364;

										BgL_arg2014z00_2363 = CDR(((obj_t) BgL_aliasesz00_2359));
										{	/* SawMill/bbv-types.scm 325 */
											obj_t BgL_arg2017z00_2365;

											BgL_arg2017z00_2365 = CAR(((obj_t) BgL_aliasesz00_2359));
											BgL_ctxz00_2367 = BgL_ctxz00_2360;
											BgL_regz00_2368 = BgL_regz00_112;
											BgL_aliasz00_2369 =
												((BgL_rtl_regz00_bglt) BgL_arg2017z00_2365);
											{	/* SawMill/bbv-types.scm 309 */
												obj_t BgL_aez00_2371;

												BgL_aez00_2371 =
													BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_2367,
													BgL_aliasz00_2369);
												if (CBOOL(BgL_aez00_2371))
													{	/* SawMill/bbv-types.scm 313 */
														BgL_bbvzd2ctxentryzd2_bglt BgL_arg2020z00_2373;

														{	/* SawMill/bbv-types.scm 313 */
															BgL_bbvzd2ctxentryzd2_bglt BgL_new1234z00_2375;

															{	/* SawMill/bbv-types.scm 313 */
																BgL_bbvzd2ctxentryzd2_bglt BgL_new1237z00_2377;

																BgL_new1237z00_2377 =
																	((BgL_bbvzd2ctxentryzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_bbvzd2ctxentryzd2_bgl))));
																{	/* SawMill/bbv-types.scm 313 */
																	long BgL_arg2022z00_2378;

																	{	/* SawMill/bbv-types.scm 313 */
																		long BgL_res2922z00_4177;

																		BgL_res2922z00_4177 =
																			BGL_CLASS_INDEX
																			(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
																		BgL_arg2022z00_2378 = BgL_res2922z00_4177;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1237z00_2377),
																		BgL_arg2022z00_2378);
																}
																BgL_new1234z00_2375 = BgL_new1237z00_2377;
															}
															((((BgL_bbvzd2ctxentryzd2_bglt)
																		COBJECT(BgL_new1234z00_2375))->BgL_regz00) =
																((BgL_rtl_regz00_bglt) ((
																			(BgL_bbvzd2ctxentryzd2_bglt)
																			COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_aez00_2371)))->BgL_regz00)),
																BUNSPEC);
															((((BgL_bbvzd2ctxentryzd2_bglt)
																		COBJECT(BgL_new1234z00_2375))->BgL_typz00) =
																((BgL_typez00_bglt) ((
																			(BgL_bbvzd2ctxentryzd2_bglt)
																			COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_aez00_2371)))->BgL_typz00)),
																BUNSPEC);
															((((BgL_bbvzd2ctxentryzd2_bglt)
																		COBJECT(BgL_new1234z00_2375))->
																	BgL_flagz00) =
																((bool_t) (((BgL_bbvzd2ctxentryzd2_bglt)
																			COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_aez00_2371)))->BgL_flagz00)),
																BUNSPEC);
															((((BgL_bbvzd2ctxentryzd2_bglt)
																		COBJECT(BgL_new1234z00_2375))->
																	BgL_valuez00) =
																((obj_t) (((BgL_bbvzd2ctxentryzd2_bglt)
																			COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_aez00_2371)))->BgL_valuez00)),
																BUNSPEC);
															((((BgL_bbvzd2ctxentryzd2_bglt)
																		COBJECT(BgL_new1234z00_2375))->
																	BgL_aliasesz00) =
																((obj_t) bgl_remq(((obj_t) BgL_regz00_2368),
																		(((BgL_bbvzd2ctxentryzd2_bglt)
																				COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																						BgL_aez00_2371)))->
																			BgL_aliasesz00))), BUNSPEC);
															BgL_arg2020z00_2373 = BgL_new1234z00_2375;
														}
														BgL_arg2016z00_2364 =
															BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2
															(BgL_ctxz00_2367, BgL_arg2020z00_2373);
													}
												else
													{	/* SawMill/bbv-types.scm 310 */
														BgL_arg2016z00_2364 = BgL_ctxz00_2367;
													}
											}
										}
										{
											obj_t BgL_ctxz00_7083;
											obj_t BgL_aliasesz00_7082;

											BgL_aliasesz00_7082 = BgL_arg2014z00_2363;
											BgL_ctxz00_7083 = BgL_arg2016z00_2364;
											BgL_ctxz00_2360 = BgL_ctxz00_7083;
											BgL_aliasesz00_2359 = BgL_aliasesz00_7082;
											goto BgL_zc3z04anonymousza32012ze3z87_2361;
										}
									}
							}
						}
					else
						{	/* SawMill/bbv-types.scm 318 */
							return BgL_ctxz00_111;
						}
				}
			}
		}

	}



/* alias-ctx */
	BGL_EXPORTED_DEF obj_t BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t
		BgL_ctxz00_113, BgL_rtl_regz00_bglt BgL_regz00_114,
		BgL_rtl_regz00_bglt BgL_aliasz00_115)
	{
		{	/* SawMill/bbv-types.scm 334 */
			{	/* SawMill/bbv-types.scm 335 */
				obj_t BgL_aez00_2381;

				BgL_aez00_2381 =
					BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_113,
					BgL_aliasz00_115);
				{	/* SawMill/bbv-types.scm 336 */
					obj_t BgL_ctxz00_2382;

					BgL_ctxz00_2382 =
						BGl_unaliaszd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_113,
						BgL_regz00_114);
					{	/* SawMill/bbv-types.scm 337 */

						if (CBOOL(BgL_aez00_2381))
							{	/* SawMill/bbv-types.scm 345 */
								BgL_bbvzd2ctxentryzd2_bglt BgL_nrez00_2384;

								{	/* SawMill/bbv-types.scm 345 */
									BgL_bbvzd2ctxentryzd2_bglt BgL_new1242z00_2412;

									{	/* SawMill/bbv-types.scm 346 */
										BgL_bbvzd2ctxentryzd2_bglt BgL_new1245z00_2414;

										BgL_new1245z00_2414 =
											((BgL_bbvzd2ctxentryzd2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_bbvzd2ctxentryzd2_bgl))));
										{	/* SawMill/bbv-types.scm 346 */
											long BgL_arg2039z00_2415;

											{	/* SawMill/bbv-types.scm 346 */
												long BgL_res2924z00_4184;

												BgL_res2924z00_4184 =
													BGL_CLASS_INDEX
													(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
												BgL_arg2039z00_2415 = BgL_res2924z00_4184;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1245z00_2414),
												BgL_arg2039z00_2415);
										}
										BgL_new1242z00_2412 = BgL_new1245z00_2414;
									}
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1242z00_2412))->BgL_regz00) =
										((BgL_rtl_regz00_bglt) BgL_regz00_114), BUNSPEC);
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1242z00_2412))->BgL_typz00) =
										((BgL_typez00_bglt) (((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
															BgL_aez00_2381)))->BgL_typz00)), BUNSPEC);
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1242z00_2412))->BgL_flagz00) =
										((bool_t) (((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
															BgL_aez00_2381)))->BgL_flagz00)), BUNSPEC);
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1242z00_2412))->BgL_valuez00) =
										((obj_t) (((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
															BgL_aez00_2381)))->BgL_valuez00)), BUNSPEC);
									{
										obj_t BgL_auxz00_7102;

										{	/* SawMill/bbv-types.scm 347 */
											obj_t BgL_arg2038z00_2413;

											BgL_arg2038z00_2413 =
												(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
														((BgL_bbvzd2ctxentryzd2_bglt) BgL_aez00_2381)))->
												BgL_aliasesz00);
											BgL_auxz00_7102 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_aliasz00_115),
												BgL_arg2038z00_2413);
										}
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1242z00_2412))->BgL_aliasesz00) =
											((obj_t) BgL_auxz00_7102), BUNSPEC);
									}
									BgL_nrez00_2384 = BgL_new1242z00_2412;
								}
								{	/* SawMill/bbv-types.scm 348 */
									obj_t BgL_g1246z00_2385;
									obj_t BgL_g1247z00_2386;

									{	/* SawMill/bbv-types.scm 348 */
										obj_t BgL_arg2037z00_2410;

										BgL_arg2037z00_2410 =
											(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt) BgL_aez00_2381)))->
											BgL_aliasesz00);
										BgL_g1246z00_2385 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_aliasz00_115),
											BgL_arg2037z00_2410);
									}
									BgL_g1247z00_2386 =
										BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2
										(BgL_ctxz00_2382, BgL_nrez00_2384);
									{
										obj_t BgL_asz00_2388;
										obj_t BgL_ctxz00_2389;

										BgL_asz00_2388 = BgL_g1246z00_2385;
										BgL_ctxz00_2389 = BgL_g1247z00_2386;
									BgL_zc3z04anonymousza32023ze3z87_2390:
										if (NULLP(BgL_asz00_2388))
											{	/* SawMill/bbv-types.scm 351 */
												return BgL_ctxz00_2389;
											}
										else
											{	/* SawMill/bbv-types.scm 353 */
												obj_t BgL_g1248z00_2392;

												BgL_g1248z00_2392 =
													BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_2389,
													((BgL_rtl_regz00_bglt)
														CAR(((obj_t) BgL_asz00_2388))));
												if (CBOOL(BgL_g1248z00_2392))
													{	/* SawMill/bbv-types.scm 353 */
														if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
																	((obj_t) BgL_regz00_114),
																	(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																				((BgL_bbvzd2ctxentryzd2_bglt)
																					BgL_g1248z00_2392)))->
																		BgL_aliasesz00))))
															{	/* SawMill/bbv-types.scm 358 */
																obj_t BgL_arg2028z00_2398;

																BgL_arg2028z00_2398 =
																	CDR(((obj_t) BgL_asz00_2388));
																{
																	obj_t BgL_asz00_7129;

																	BgL_asz00_7129 = BgL_arg2028z00_2398;
																	BgL_asz00_2388 = BgL_asz00_7129;
																	goto BgL_zc3z04anonymousza32023ze3z87_2390;
																}
															}
														else
															{	/* SawMill/bbv-types.scm 359 */
																BgL_bbvzd2ctxentryzd2_bglt BgL_nz00_2399;

																{	/* SawMill/bbv-types.scm 359 */
																	BgL_bbvzd2ctxentryzd2_bglt
																		BgL_new1251z00_2402;
																	{	/* SawMill/bbv-types.scm 359 */
																		BgL_bbvzd2ctxentryzd2_bglt
																			BgL_new1254z00_2404;
																		BgL_new1254z00_2404 =
																			((BgL_bbvzd2ctxentryzd2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_bbvzd2ctxentryzd2_bgl))));
																		{	/* SawMill/bbv-types.scm 359 */
																			long BgL_arg2033z00_2405;

																			{	/* SawMill/bbv-types.scm 359 */
																				long BgL_res2926z00_4191;

																				BgL_res2926z00_4191 =
																					BGL_CLASS_INDEX
																					(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
																				BgL_arg2033z00_2405 =
																					BgL_res2926z00_4191;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1254z00_2404),
																				BgL_arg2033z00_2405);
																		}
																		BgL_new1251z00_2402 = BgL_new1254z00_2404;
																	}
																	((((BgL_bbvzd2ctxentryzd2_bglt)
																				COBJECT(BgL_new1251z00_2402))->
																			BgL_regz00) =
																		((BgL_rtl_regz00_bglt) ((
																					(BgL_bbvzd2ctxentryzd2_bglt)
																					COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																							BgL_g1248z00_2392)))->
																				BgL_regz00)), BUNSPEC);
																	((((BgL_bbvzd2ctxentryzd2_bglt)
																				COBJECT(BgL_new1251z00_2402))->
																			BgL_typz00) =
																		((BgL_typez00_bglt) ((
																					(BgL_bbvzd2ctxentryzd2_bglt)
																					COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																							BgL_g1248z00_2392)))->
																				BgL_typz00)), BUNSPEC);
																	((((BgL_bbvzd2ctxentryzd2_bglt)
																				COBJECT(BgL_new1251z00_2402))->
																			BgL_flagz00) =
																		((bool_t) (((BgL_bbvzd2ctxentryzd2_bglt)
																					COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																							BgL_g1248z00_2392)))->
																				BgL_flagz00)), BUNSPEC);
																	((((BgL_bbvzd2ctxentryzd2_bglt)
																				COBJECT(BgL_new1251z00_2402))->
																			BgL_valuez00) =
																		((obj_t) (((BgL_bbvzd2ctxentryzd2_bglt)
																					COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
																							BgL_g1248z00_2392)))->
																				BgL_valuez00)), BUNSPEC);
																	{
																		obj_t BgL_auxz00_7146;

																		{	/* SawMill/bbv-types.scm 360 */
																			obj_t BgL_arg2031z00_2403;

																			BgL_arg2031z00_2403 =
																				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																						((BgL_bbvzd2ctxentryzd2_bglt)
																							BgL_g1248z00_2392)))->
																				BgL_aliasesz00);
																			BgL_auxz00_7146 =
																				MAKE_YOUNG_PAIR(((obj_t)
																					BgL_regz00_114), BgL_arg2031z00_2403);
																		}
																		((((BgL_bbvzd2ctxentryzd2_bglt)
																					COBJECT(BgL_new1251z00_2402))->
																				BgL_aliasesz00) =
																			((obj_t) BgL_auxz00_7146), BUNSPEC);
																	}
																	BgL_nz00_2399 = BgL_new1251z00_2402;
																}
																BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2
																	(BgL_ctxz00_2389, BgL_nz00_2399);
																{	/* SawMill/bbv-types.scm 362 */
																	obj_t BgL_arg2029z00_2400;

																	BgL_arg2029z00_2400 =
																		CDR(((obj_t) BgL_asz00_2388));
																	{
																		obj_t BgL_asz00_7155;

																		BgL_asz00_7155 = BgL_arg2029z00_2400;
																		BgL_asz00_2388 = BgL_asz00_7155;
																		goto BgL_zc3z04anonymousza32023ze3z87_2390;
																	}
																}
															}
													}
												else
													{	/* SawMill/bbv-types.scm 364 */
														obj_t BgL_arg2035z00_2407;

														BgL_arg2035z00_2407 = CDR(((obj_t) BgL_asz00_2388));
														{
															obj_t BgL_asz00_7158;

															BgL_asz00_7158 = BgL_arg2035z00_2407;
															BgL_asz00_2388 = BgL_asz00_7158;
															goto BgL_zc3z04anonymousza32023ze3z87_2390;
														}
													}
											}
									}
								}
							}
						else
							{	/* SawMill/bbv-types.scm 339 */
								BgL_bbvzd2ctxentryzd2_bglt BgL_nrez00_2416;

								{	/* SawMill/bbv-types.scm 339 */
									BgL_bbvzd2ctxentryzd2_bglt BgL_new1240z00_2417;

									{	/* SawMill/bbv-types.scm 340 */
										BgL_bbvzd2ctxentryzd2_bglt BgL_new1239z00_2421;

										BgL_new1239z00_2421 =
											((BgL_bbvzd2ctxentryzd2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_bbvzd2ctxentryzd2_bgl))));
										{	/* SawMill/bbv-types.scm 340 */
											long BgL_arg2043z00_2422;

											{	/* SawMill/bbv-types.scm 340 */
												long BgL_res2927z00_4197;

												BgL_res2927z00_4197 =
													BGL_CLASS_INDEX
													(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
												BgL_arg2043z00_2422 = BgL_res2927z00_4197;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1239z00_2421),
												BgL_arg2043z00_2422);
										}
										BgL_new1240z00_2417 = BgL_new1239z00_2421;
									}
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1240z00_2417))->BgL_regz00) =
										((BgL_rtl_regz00_bglt) BgL_regz00_114), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_7164;

										{	/* SawMill/bbv-types.scm 340 */
											obj_t BgL_arg2040z00_2418;

											{	/* SawMill/bbv-types.scm 340 */
												obj_t BgL_arg2041z00_2419;

												{	/* SawMill/bbv-types.scm 340 */
													obj_t BgL_res2928z00_4201;

													{	/* SawMill/bbv-types.scm 340 */
														obj_t BgL_classz00_4200;

														BgL_classz00_4200 =
															BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2;
														BgL_res2928z00_4201 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_4200);
													}
													BgL_arg2041z00_2419 = BgL_res2928z00_4201;
												}
												BgL_arg2040z00_2418 =
													VECTOR_REF(BgL_arg2041z00_2419, ((long) 1));
											}
											BgL_auxz00_7164 =
												((BgL_typez00_bglt)
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg2040z00_2418));
										}
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1240z00_2417))->BgL_typz00) =
											((BgL_typez00_bglt) BgL_auxz00_7164), BUNSPEC);
									}
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1240z00_2417))->BgL_flagz00) =
										((bool_t) ((bool_t) 1)), BUNSPEC);
									((((BgL_bbvzd2ctxentryzd2_bglt)
												COBJECT(BgL_new1240z00_2417))->BgL_valuez00) =
										((obj_t) CNST_TABLE_REF(((long) 8))), BUNSPEC);
									{
										obj_t BgL_auxz00_7173;

										{	/* SawMill/bbv-types.scm 342 */
											obj_t BgL_list2042z00_2420;

											BgL_list2042z00_2420 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_aliasz00_115), BNIL);
											BgL_auxz00_7173 = BgL_list2042z00_2420;
										}
										((((BgL_bbvzd2ctxentryzd2_bglt)
													COBJECT(BgL_new1240z00_2417))->BgL_aliasesz00) =
											((obj_t) BgL_auxz00_7173), BUNSPEC);
									}
									BgL_nrez00_2416 = BgL_new1240z00_2417;
								}
								return
									BGl_extendzd2ctxzf2entryz20zzsaw_bbvzd2typeszd2
									(BgL_ctxz00_2382, BgL_nrez00_2416);
							}
					}
				}
			}
		}

	}



/* &alias-ctx */
	obj_t BGl_z62aliaszd2ctxzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5044,
		obj_t BgL_ctxz00_5045, obj_t BgL_regz00_5046, obj_t BgL_aliasz00_5047)
	{
		{	/* SawMill/bbv-types.scm 334 */
			return
				BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_5045,
				((BgL_rtl_regz00_bglt) BgL_regz00_5046),
				((BgL_rtl_regz00_bglt) BgL_aliasz00_5047));
		}

	}



/* rtl_ins-last? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2lastzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_122)
	{
		{	/* SawMill/bbv-types.scm 410 */
			{	/* SawMill/bbv-types.scm 412 */
				BgL_rtl_funz00_bglt BgL_arg2044z00_4205;

				BgL_arg2044z00_4205 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_122))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2044z00_4205), BGl_rtl_lastz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-last? */
	obj_t BGl_z62rtl_inszd2lastzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5048,
		obj_t BgL_iz00_5049)
	{
		{	/* SawMill/bbv-types.scm 410 */
			return
				BBOOL(BGl_rtl_inszd2lastzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5049)));
		}

	}



/* rtl_ins-nop? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_123)
	{
		{	/* SawMill/bbv-types.scm 417 */
			{	/* SawMill/bbv-types.scm 419 */
				BgL_rtl_funz00_bglt BgL_arg2045z00_4207;

				BgL_arg2045z00_4207 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_123))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2045z00_4207), BGl_rtl_nopz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-nop? */
	obj_t BGl_z62rtl_inszd2nopzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5050,
		obj_t BgL_iz00_5051)
	{
		{	/* SawMill/bbv-types.scm 417 */
			return
				BBOOL(BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5051)));
		}

	}



/* rtl_ins-mov? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_124)
	{
		{	/* SawMill/bbv-types.scm 424 */
			{	/* SawMill/bbv-types.scm 426 */
				BgL_rtl_funz00_bglt BgL_arg2046z00_4209;

				BgL_arg2046z00_4209 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_124))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2046z00_4209), BGl_rtl_movz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-mov? */
	obj_t BGl_z62rtl_inszd2movzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5052,
		obj_t BgL_iz00_5053)
	{
		{	/* SawMill/bbv-types.scm 424 */
			return
				BBOOL(BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5053)));
		}

	}



/* rtl_ins-go? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt BgL_iz00_125)
	{
		{	/* SawMill/bbv-types.scm 431 */
			{	/* SawMill/bbv-types.scm 433 */
				BgL_rtl_funz00_bglt BgL_arg2047z00_4211;

				BgL_arg2047z00_4211 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_125))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2047z00_4211), BGl_rtl_goz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-go? */
	obj_t BGl_z62rtl_inszd2gozf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5054,
		obj_t BgL_iz00_5055)
	{
		{	/* SawMill/bbv-types.scm 431 */
			return
				BBOOL(BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5055)));
		}

	}



/* rtl_ins-ifeq? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_126)
	{
		{	/* SawMill/bbv-types.scm 438 */
			{	/* SawMill/bbv-types.scm 440 */
				BgL_rtl_funz00_bglt BgL_arg2048z00_4213;

				BgL_arg2048z00_4213 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_126))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2048z00_4213), BGl_rtl_ifeqz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-ifeq? */
	obj_t BGl_z62rtl_inszd2ifeqzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5056,
		obj_t BgL_iz00_5057)
	{
		{	/* SawMill/bbv-types.scm 438 */
			return
				BBOOL(BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5057)));
		}

	}



/* rtl_ins-ifne? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_127)
	{
		{	/* SawMill/bbv-types.scm 445 */
			{	/* SawMill/bbv-types.scm 447 */
				BgL_rtl_funz00_bglt BgL_arg2049z00_4215;

				BgL_arg2049z00_4215 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_127))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2049z00_4215), BGl_rtl_ifnez00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-ifne? */
	obj_t BGl_z62rtl_inszd2ifnezf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5058,
		obj_t BgL_iz00_5059)
	{
		{	/* SawMill/bbv-types.scm 445 */
			return
				BBOOL(BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5059)));
		}

	}



/* rtl_ins-call? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_128)
	{
		{	/* SawMill/bbv-types.scm 452 */
			{	/* SawMill/bbv-types.scm 454 */
				BgL_rtl_funz00_bglt BgL_arg2050z00_4217;

				BgL_arg2050z00_4217 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_128))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2050z00_4217), BGl_rtl_callz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-call? */
	obj_t BGl_z62rtl_inszd2callzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5060,
		obj_t BgL_iz00_5061)
	{
		{	/* SawMill/bbv-types.scm 452 */
			return
				BBOOL(BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5061)));
		}

	}



/* rtl_ins-vlen? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2vlenzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_129)
	{
		{	/* SawMill/bbv-types.scm 459 */
			{	/* SawMill/bbv-types.scm 461 */
				BgL_rtl_funz00_bglt BgL_arg2051z00_4219;

				BgL_arg2051z00_4219 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_129))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2051z00_4219), BGl_rtl_vlengthz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-vlen? */
	obj_t BGl_z62rtl_inszd2vlenzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5062,
		obj_t BgL_iz00_5063)
	{
		{	/* SawMill/bbv-types.scm 459 */
			return
				BBOOL(BGl_rtl_inszd2vlenzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5063)));
		}

	}



/* rtl_ins-loadi? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_130)
	{
		{	/* SawMill/bbv-types.scm 466 */
			{	/* SawMill/bbv-types.scm 468 */
				BgL_rtl_funz00_bglt BgL_arg2053z00_4221;

				BgL_arg2053z00_4221 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_130))->BgL_funz00);
				return
					BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_arg2053z00_4221), BGl_rtl_loadiz00zzsaw_defsz00);
			}
		}

	}



/* &rtl_ins-loadi? */
	obj_t BGl_z62rtl_inszd2loadizf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5064,
		obj_t BgL_iz00_5065)
	{
		{	/* SawMill/bbv-types.scm 466 */
			return
				BBOOL(BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5065)));
		}

	}



/* rtl_ins-loadi-value */
	obj_t BGl_rtl_inszd2loadizd2valuez00zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_131)
	{
		{	/* SawMill/bbv-types.scm 473 */
			{	/* SawMill/bbv-types.scm 474 */
				bool_t BgL_test3491z00_7235;

				{	/* SawMill/bbv-types.scm 474 */
					bool_t BgL_res2930z00_4225;

					{	/* SawMill/bbv-types.scm 468 */
						BgL_rtl_funz00_bglt BgL_arg2053z00_4224;

						BgL_arg2053z00_4224 =
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_131))->BgL_funz00);
						BgL_res2930z00_4225 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg2053z00_4224), BGl_rtl_loadiz00zzsaw_defsz00);
					}
					BgL_test3491z00_7235 = BgL_res2930z00_4225;
				}
				if (BgL_test3491z00_7235)
					{	/* SawMill/bbv-types.scm 476 */
						bool_t BgL_test3492z00_7239;

						{	/* SawMill/bbv-types.scm 476 */
							obj_t BgL_arg2060z00_2448;

							BgL_arg2060z00_2448 =
								CAR(
								(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_131))->BgL_argsz00));
							BgL_test3492z00_7239 =
								BGl_isazf3zf3zz__objectz00(BgL_arg2060z00_2448,
								BGl_literalz00zzast_nodez00);
						}
						if (BgL_test3492z00_7239)
							{
								BgL_atomz00_bglt BgL_auxz00_7243;

								{
									BgL_literalz00_bglt BgL_auxz00_7244;

									{	/* SawMill/bbv-types.scm 477 */
										obj_t BgL_pairz00_4227;

										BgL_pairz00_4227 =
											(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_131))->
											BgL_argsz00);
										BgL_auxz00_7244 =
											((BgL_literalz00_bglt) CAR(BgL_pairz00_4227));
									}
									BgL_auxz00_7243 = ((BgL_atomz00_bglt) BgL_auxz00_7244);
								}
								return
									(((BgL_atomz00_bglt) COBJECT(BgL_auxz00_7243))->BgL_valuez00);
							}
						else
							{	/* SawMill/bbv-types.scm 476 */
								return BFALSE;
							}
					}
				else
					{	/* SawMill/bbv-types.scm 474 */
						return BFALSE;
					}
			}
		}

	}



/* rtl_ins-true? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2truezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_132)
	{
		{	/* SawMill/bbv-types.scm 480 */
			return
				(BGl_rtl_inszd2loadizd2valuez00zzsaw_bbvzd2typeszd2(BgL_iz00_132) ==
				BTRUE);
		}

	}



/* &rtl_ins-true? */
	obj_t BGl_z62rtl_inszd2truezf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5066,
		obj_t BgL_iz00_5067)
	{
		{	/* SawMill/bbv-types.scm 480 */
			return
				BBOOL(BGl_rtl_inszd2truezf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5067)));
		}

	}



/* rtl_ins-false? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2falsezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_133)
	{
		{	/* SawMill/bbv-types.scm 483 */
			{	/* SawMill/bbv-types.scm 484 */
				bool_t BgL_test3493z00_7255;

				{	/* SawMill/bbv-types.scm 484 */
					bool_t BgL_res2931z00_4232;

					{	/* SawMill/bbv-types.scm 468 */
						BgL_rtl_funz00_bglt BgL_arg2053z00_4231;

						BgL_arg2053z00_4231 =
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_133))->BgL_funz00);
						BgL_res2931z00_4232 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg2053z00_4231), BGl_rtl_loadiz00zzsaw_defsz00);
					}
					BgL_test3493z00_7255 = BgL_res2931z00_4232;
				}
				if (BgL_test3493z00_7255)
					{	/* SawMill/bbv-types.scm 484 */
						return
							(BGl_rtl_inszd2loadizd2valuez00zzsaw_bbvzd2typeszd2(BgL_iz00_133)
							== BFALSE);
					}
				else
					{	/* SawMill/bbv-types.scm 484 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &rtl_ins-false? */
	obj_t BGl_z62rtl_inszd2falsezf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5068,
		obj_t BgL_iz00_5069)
	{
		{	/* SawMill/bbv-types.scm 483 */
			return
				BBOOL(BGl_rtl_inszd2falsezf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5069)));
		}

	}



/* rtl_ins-branch? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_134)
	{
		{	/* SawMill/bbv-types.scm 490 */
			{	/* SawMill/bbv-types.scm 492 */
				bool_t BgL__ortest_1271z00_2454;

				{	/* SawMill/bbv-types.scm 492 */
					BgL_rtl_funz00_bglt BgL_arg2068z00_2456;

					BgL_arg2068z00_2456 =
						(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_134))->BgL_funz00);
					BgL__ortest_1271z00_2454 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_arg2068z00_2456), BGl_rtl_ifnez00zzsaw_defsz00);
				}
				if (BgL__ortest_1271z00_2454)
					{	/* SawMill/bbv-types.scm 492 */
						return BBOOL(BgL__ortest_1271z00_2454);
					}
				else
					{	/* SawMill/bbv-types.scm 492 */
						BgL_rtl_funz00_bglt BgL_arg2066z00_2455;

						BgL_arg2066z00_2455 =
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_134))->BgL_funz00);
						return
							BBOOL(BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg2066z00_2455), BGl_rtl_ifeqz00zzsaw_defsz00));
					}
			}
		}

	}



/* &rtl_ins-branch? */
	obj_t BGl_z62rtl_inszd2branchzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5070,
		obj_t BgL_iz00_5071)
	{
		{	/* SawMill/bbv-types.scm 490 */
			return
				BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2(
				((BgL_rtl_insz00_bglt) BgL_iz00_5071));
		}

	}



/* rtl_ins-bool? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2boolzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_135)
	{
		{	/* SawMill/bbv-types.scm 497 */
			{	/* SawMill/bbv-types.scm 499 */
				bool_t BgL_test3495z00_7275;

				{	/* SawMill/bbv-types.scm 499 */
					bool_t BgL_test3496z00_7276;

					{	/* SawMill/bbv-types.scm 499 */
						obj_t BgL_arg2077z00_2468;

						BgL_arg2077z00_2468 =
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_135))->BgL_destz00);
						BgL_test3496z00_7276 =
							BGl_isazf3zf3zz__objectz00(BgL_arg2077z00_2468,
							BGl_rtl_regz00zzsaw_defsz00);
					}
					if (BgL_test3496z00_7276)
						{	/* SawMill/bbv-types.scm 499 */
							BgL_rtl_funz00_bglt BgL_arg2076z00_2467;

							BgL_arg2076z00_2467 =
								(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_135))->BgL_funz00);
							BgL_test3495z00_7275 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg2076z00_2467), BGl_rtl_callz00zzsaw_defsz00);
						}
					else
						{	/* SawMill/bbv-types.scm 499 */
							BgL_test3495z00_7275 = ((bool_t) 0);
						}
				}
				if (BgL_test3495z00_7275)
					{	/* SawMill/bbv-types.scm 500 */
						BgL_rtl_callz00_bglt BgL_i1273z00_2463;

						BgL_i1273z00_2463 =
							((BgL_rtl_callz00_bglt)
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_135))->BgL_funz00));
						{	/* SawMill/bbv-types.scm 501 */
							BgL_globalz00_bglt BgL_i1274z00_2464;

							BgL_i1274z00_2464 =
								(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1273z00_2463))->
								BgL_varz00);
							{	/* SawMill/bbv-types.scm 502 */
								BgL_typez00_bglt BgL_arg2075z00_2465;

								BgL_arg2075z00_2465 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_i1274z00_2464)))->
									BgL_typez00);
								return (((obj_t) BgL_arg2075z00_2465) ==
									BGl_za2boolza2z00zztype_cachez00);
							}
						}
					}
				else
					{	/* SawMill/bbv-types.scm 499 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &rtl_ins-bool? */
	obj_t BGl_z62rtl_inszd2boolzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5072,
		obj_t BgL_iz00_5073)
	{
		{	/* SawMill/bbv-types.scm 497 */
			return
				BBOOL(BGl_rtl_inszd2boolzf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_5073)));
		}

	}



/* rtl_ins-typecheck */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_136)
	{
		{	/* SawMill/bbv-types.scm 507 */
			{	/* SawMill/bbv-types.scm 509 */
				obj_t BgL_typz00_2470;

				{	/* SawMill/bbv-types.scm 509 */
					obj_t BgL_arg2078z00_2475;

					BgL_arg2078z00_2475 =
						CAR((((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_136))->BgL_argsz00));
					BgL_typz00_2470 =
						BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2(
						((BgL_rtl_insz00_bglt) BgL_arg2078z00_2475));
				}
				{	/* SawMill/bbv-types.scm 510 */
					obj_t BgL_argsz00_2471;

					BgL_argsz00_2471 =
						BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_iz00_136);
					{	/* SawMill/bbv-types.scm 511 */
						obj_t BgL_val0_1643z00_2472;
						bool_t BgL_val2_1645z00_2474;

						BgL_val0_1643z00_2472 = CAR(((obj_t) BgL_argsz00_2471));
						{	/* SawMill/bbv-types.scm 511 */
							bool_t BgL_res2932z00_4238;

							{	/* SawMill/bbv-types.scm 440 */
								BgL_rtl_funz00_bglt BgL_arg2048z00_4237;

								BgL_arg2048z00_4237 =
									(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_136))->BgL_funz00);
								BgL_res2932z00_4238 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2048z00_4237), BGl_rtl_ifeqz00zzsaw_defsz00);
							}
							BgL_val2_1645z00_2474 = BgL_res2932z00_4238;
						}
						{	/* SawMill/bbv-types.scm 511 */
							int BgL_res2933z00_4239;

							{	/* SawMill/bbv-types.scm 511 */
								int BgL_tmpz00_7302;

								BgL_tmpz00_7302 = (int) (((long) 3));
								BgL_res2933z00_4239 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7302);
							} BgL_res2933z00_4239;
						}
						{	/* SawMill/bbv-types.scm 511 */
							int BgL_tmpz00_7305;

							BgL_tmpz00_7305 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_7305, BgL_typz00_2470);
						}
						{	/* SawMill/bbv-types.scm 511 */
							obj_t BgL_auxz00_7310;
							int BgL_tmpz00_7308;

							BgL_auxz00_7310 = BBOOL(BgL_val2_1645z00_2474);
							BgL_tmpz00_7308 = (int) (((long) 2));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_7308, BgL_auxz00_7310);
						}
						return BgL_val0_1643z00_2472;
					}
				}
			}
		}

	}



/* &rtl_ins-typecheck */
	obj_t BGl_z62rtl_inszd2typecheckzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5074,
		obj_t BgL_iz00_5075)
	{
		{	/* SawMill/bbv-types.scm 507 */
			return
				BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(
				((BgL_rtl_insz00_bglt) BgL_iz00_5075));
		}

	}



/* rtl_call-predicate */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt
		BgL_iz00_137)
	{
		{	/* SawMill/bbv-types.scm 516 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											(((BgL_rtl_callz00_bglt) COBJECT(
														((BgL_rtl_callz00_bglt)
															(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_137))->
																BgL_funz00))))->BgL_varz00))))->
								BgL_valuez00))))->BgL_predicatezd2ofzd2);
		}

	}



/* &rtl_call-predicate */
	obj_t BGl_z62rtl_callzd2predicatezb0zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5076, obj_t BgL_iz00_5077)
	{
		{	/* SawMill/bbv-types.scm 516 */
			return
				BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2(
				((BgL_rtl_insz00_bglt) BgL_iz00_5077));
		}

	}



/* bit-xor* */
	obj_t BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2(obj_t BgL_lstz00_138)
	{
		{	/* SawMill/bbv-types.scm 525 */
			if (NULLP(BgL_lstz00_138))
				{	/* SawMill/bbv-types.scm 526 */
					return BINT(((long) 0));
				}
			else
				{
					obj_t BgL_lstz00_2485;
					obj_t BgL_hashz00_2486;

					BgL_lstz00_2485 = CDR(BgL_lstz00_138);
					BgL_hashz00_2486 = CAR(BgL_lstz00_138);
				BgL_zc3z04anonymousza32082ze3z87_2487:
					if (NULLP(BgL_lstz00_2485))
						{	/* SawMill/bbv-types.scm 530 */
							return BgL_hashz00_2486;
						}
					else
						{
							obj_t BgL_hashz00_7332;
							obj_t BgL_lstz00_7329;

							BgL_lstz00_7329 = CDR(((obj_t) BgL_lstz00_2485));
							BgL_hashz00_7332 =
								BINT(
								((long) CINT(CAR(
											((obj_t) BgL_lstz00_2485))) ^
									(long) CINT(BgL_hashz00_2486)));
							BgL_hashz00_2486 = BgL_hashz00_7332;
							BgL_lstz00_2485 = BgL_lstz00_7329;
							goto BgL_zc3z04anonymousza32082ze3z87_2487;
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			{	/* SawMill/bbv-types.scm 35 */
				obj_t BgL_arg2091z00_2497;
				obj_t BgL_arg2092z00_2498;

				{	/* SawMill/bbv-types.scm 35 */
					obj_t BgL_v1670z00_2525;

					BgL_v1670z00_2525 = create_vector(((long) 2));
					{	/* SawMill/bbv-types.scm 35 */
						obj_t BgL_arg2103z00_2526;

						BgL_arg2103z00_2526 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc3097z00zzsaw_bbvzd2typeszd2,
							BGl_proc3096z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3095z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 10)));
						VECTOR_SET(BgL_v1670z00_2525, ((long) 0), BgL_arg2103z00_2526);
					}
					{	/* SawMill/bbv-types.scm 35 */
						obj_t BgL_arg2110z00_2539;

						BgL_arg2110z00_2539 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc3100z00zzsaw_bbvzd2typeszd2,
							BGl_proc3099z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3098z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 12)));
						VECTOR_SET(BgL_v1670z00_2525, ((long) 1), BgL_arg2110z00_2539);
					}
					BgL_arg2091z00_2497 = BgL_v1670z00_2525;
				}
				{	/* SawMill/bbv-types.scm 35 */
					obj_t BgL_v1671z00_2552;

					BgL_v1671z00_2552 = create_vector(((long) 0));
					BgL_arg2092z00_2498 = BgL_v1671z00_2552;
				}
				BGl_blockVz00zzsaw_bbvzd2typeszd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 13)),
					CNST_TABLE_REF(((long) 14)), BGl_blockz00zzsaw_defsz00,
					((long) 53380), BGl_proc3104z00zzsaw_bbvzd2typeszd2,
					BGl_proc3103z00zzsaw_bbvzd2typeszd2, BFALSE,
					BGl_proc3102z00zzsaw_bbvzd2typeszd2,
					BGl_proc3101z00zzsaw_bbvzd2typeszd2, BgL_arg2091z00_2497,
					BgL_arg2092z00_2498);
			}
			{	/* SawMill/bbv-types.scm 38 */
				obj_t BgL_arg2122z00_2561;
				obj_t BgL_arg2123z00_2562;

				{	/* SawMill/bbv-types.scm 38 */
					obj_t BgL_v1672z00_2593;

					BgL_v1672z00_2593 = create_vector(((long) 6));
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2134z00_2594;

						BgL_arg2134z00_2594 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc3107z00zzsaw_bbvzd2typeszd2,
							BGl_proc3106z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3105z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 10)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 0), BgL_arg2134z00_2594);
					}
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2141z00_2607;

						BgL_arg2141z00_2607 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc3110z00zzsaw_bbvzd2typeszd2,
							BGl_proc3109z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3108z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 10)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 1), BgL_arg2141z00_2607);
					}
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2148z00_2620;

						BgL_arg2148z00_2620 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc3113z00zzsaw_bbvzd2typeszd2,
							BGl_proc3112z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3111z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 12)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 2), BgL_arg2148z00_2620);
					}
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2156z00_2633;

						BgL_arg2156z00_2633 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc3116z00zzsaw_bbvzd2typeszd2,
							BGl_proc3115z00zzsaw_bbvzd2typeszd2, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc3114z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 3), BgL_arg2156z00_2633);
					}
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2163z00_2646;

						BgL_arg2163z00_2646 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc3119z00zzsaw_bbvzd2typeszd2,
							BGl_proc3118z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3117z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 4), BgL_arg2163z00_2646);
					}
					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2170z00_2659;

						BgL_arg2170z00_2659 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc3122z00zzsaw_bbvzd2typeszd2,
							BGl_proc3121z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3120z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1672z00_2593, ((long) 5), BgL_arg2170z00_2659);
					}
					BgL_arg2122z00_2561 = BgL_v1672z00_2593;
				}
				{	/* SawMill/bbv-types.scm 38 */
					obj_t BgL_v1673z00_2672;

					BgL_v1673z00_2672 = create_vector(((long) 0));
					BgL_arg2123z00_2562 = BgL_v1673z00_2672;
				}
				BGl_blockSz00zzsaw_bbvzd2typeszd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 21)),
					CNST_TABLE_REF(((long) 14)), BGl_blockz00zzsaw_defsz00, ((long) 1984),
					BGl_proc3126z00zzsaw_bbvzd2typeszd2,
					BGl_proc3125z00zzsaw_bbvzd2typeszd2, BFALSE,
					BGl_proc3124z00zzsaw_bbvzd2typeszd2,
					BGl_proc3123z00zzsaw_bbvzd2typeszd2, BgL_arg2122z00_2561,
					BgL_arg2123z00_2562);
			}
			{	/* SawMill/bbv-types.scm 45 */
				obj_t BgL_arg2182z00_2681;
				obj_t BgL_arg2183z00_2682;

				{	/* SawMill/bbv-types.scm 45 */
					obj_t BgL_v1674z00_2712;

					BgL_v1674z00_2712 = create_vector(((long) 4));
					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_arg2194z00_2713;

						BgL_arg2194z00_2713 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc3129z00zzsaw_bbvzd2typeszd2,
							BGl_proc3128z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3127z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1674z00_2712, ((long) 0), BgL_arg2194z00_2713);
					}
					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_arg2201z00_2726;

						BgL_arg2201z00_2726 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc3132z00zzsaw_bbvzd2typeszd2,
							BGl_proc3131z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3130z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1674z00_2712, ((long) 1), BgL_arg2201z00_2726);
					}
					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_arg2208z00_2739;

						BgL_arg2208z00_2739 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc3135z00zzsaw_bbvzd2typeszd2,
							BGl_proc3134z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3133z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1674z00_2712, ((long) 2), BgL_arg2208z00_2739);
					}
					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_arg2215z00_2752;

						BgL_arg2215z00_2752 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc3138z00zzsaw_bbvzd2typeszd2,
							BGl_proc3137z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3136z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1674z00_2712, ((long) 3), BgL_arg2215z00_2752);
					}
					BgL_arg2182z00_2681 = BgL_v1674z00_2712;
				}
				{	/* SawMill/bbv-types.scm 45 */
					obj_t BgL_v1675z00_2765;

					BgL_v1675z00_2765 = create_vector(((long) 0));
					BgL_arg2183z00_2682 = BgL_v1675z00_2765;
				}
				BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 25)),
					CNST_TABLE_REF(((long) 14)), BGl_rtl_insz00zzsaw_defsz00,
					((long) 14548), BGl_proc3142z00zzsaw_bbvzd2typeszd2,
					BGl_proc3141z00zzsaw_bbvzd2typeszd2, BFALSE,
					BGl_proc3140z00zzsaw_bbvzd2typeszd2,
					BGl_proc3139z00zzsaw_bbvzd2typeszd2, BgL_arg2182z00_2681,
					BgL_arg2183z00_2682);
			}
			{	/* SawMill/bbv-types.scm 51 */
				obj_t BgL_arg2225z00_2773;
				obj_t BgL_arg2226z00_2774;

				{	/* SawMill/bbv-types.scm 51 */
					obj_t BgL_v1676z00_2789;

					BgL_v1676z00_2789 = create_vector(((long) 5));
					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_arg2232z00_2790;

						BgL_arg2232z00_2790 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc3144z00zzsaw_bbvzd2typeszd2,
							BGl_proc3143z00zzsaw_bbvzd2typeszd2, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_rtl_regz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1676z00_2789, ((long) 0), BgL_arg2232z00_2790);
					}
					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_arg2237z00_2800;

						BgL_arg2237z00_2800 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc3147z00zzsaw_bbvzd2typeszd2,
							BGl_proc3146z00zzsaw_bbvzd2typeszd2, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc3145z00zzsaw_bbvzd2typeszd2,
							BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1676z00_2789, ((long) 1), BgL_arg2237z00_2800);
					}
					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_arg2244z00_2813;

						BgL_arg2244z00_2813 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc3149z00zzsaw_bbvzd2typeszd2,
							BGl_proc3148z00zzsaw_bbvzd2typeszd2, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 29)));
						VECTOR_SET(BgL_v1676z00_2789, ((long) 2), BgL_arg2244z00_2813);
					}
					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_arg2249z00_2823;

						BgL_arg2249z00_2823 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc3152z00zzsaw_bbvzd2typeszd2,
							BGl_proc3151z00zzsaw_bbvzd2typeszd2, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc3150z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1676z00_2789, ((long) 3), BgL_arg2249z00_2823);
					}
					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_arg2256z00_2836;

						BgL_arg2256z00_2836 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc3155z00zzsaw_bbvzd2typeszd2,
							BGl_proc3154z00zzsaw_bbvzd2typeszd2, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc3153z00zzsaw_bbvzd2typeszd2,
							CNST_TABLE_REF(((long) 10)));
						VECTOR_SET(BgL_v1676z00_2789, ((long) 4), BgL_arg2256z00_2836);
					}
					BgL_arg2225z00_2773 = BgL_v1676z00_2789;
				}
				{	/* SawMill/bbv-types.scm 51 */
					obj_t BgL_v1677z00_2849;

					BgL_v1677z00_2849 = create_vector(((long) 0));
					BgL_arg2226z00_2774 = BgL_v1677z00_2849;
				}
				return (BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 32)),
						CNST_TABLE_REF(((long) 14)), BGl_objectz00zz__objectz00,
						((long) 34376), BGl_proc3158z00zzsaw_bbvzd2typeszd2,
						BGl_proc3157z00zzsaw_bbvzd2typeszd2, BFALSE,
						BGl_proc3156z00zzsaw_bbvzd2typeszd2, BFALSE, BgL_arg2225z00_2773,
						BgL_arg2226z00_2774), BUNSPEC);
		}}

	}



/* &<@anonymous:2231> */
	obj_t BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5142, obj_t BgL_new1197z00_5143)
	{
		{	/* SawMill/bbv-types.scm 51 */
			{
				BgL_bbvzd2ctxentryzd2_bglt BgL_auxz00_7427;

				{
					BgL_rtl_regz00_bglt BgL_auxz00_7428;

					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_classz00_5592;

						BgL_classz00_5592 = BGl_rtl_regz00zzsaw_defsz00;
						{	/* SawMill/bbv-types.scm 51 */
							obj_t BgL__ortest_1106z00_5593;

							BgL__ortest_1106z00_5593 = BGL_CLASS_NIL(BgL_classz00_5592);
							if (CBOOL(BgL__ortest_1106z00_5593))
								{	/* SawMill/bbv-types.scm 51 */
									BgL_auxz00_7428 =
										((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_5593);
								}
							else
								{	/* SawMill/bbv-types.scm 51 */
									BgL_auxz00_7428 =
										((BgL_rtl_regz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5592));
								}
						}
					}
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
									((BgL_bbvzd2ctxentryzd2_bglt) BgL_new1197z00_5143)))->
							BgL_regz00) = ((BgL_rtl_regz00_bglt) BgL_auxz00_7428), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_7437;

					{	/* SawMill/bbv-types.scm 51 */
						obj_t BgL_classz00_5594;

						BgL_classz00_5594 = BGl_typez00zztype_typez00;
						{	/* SawMill/bbv-types.scm 51 */
							obj_t BgL__ortest_1106z00_5595;

							BgL__ortest_1106z00_5595 = BGL_CLASS_NIL(BgL_classz00_5594);
							if (CBOOL(BgL__ortest_1106z00_5595))
								{	/* SawMill/bbv-types.scm 51 */
									BgL_auxz00_7437 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5595);
								}
							else
								{	/* SawMill/bbv-types.scm 51 */
									BgL_auxz00_7437 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5594));
								}
						}
					}
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
									((BgL_bbvzd2ctxentryzd2_bglt) BgL_new1197z00_5143)))->
							BgL_typz00) = ((BgL_typez00_bglt) BgL_auxz00_7437), BUNSPEC);
				}
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
								((BgL_bbvzd2ctxentryzd2_bglt) BgL_new1197z00_5143)))->
						BgL_flagz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
									BgL_new1197z00_5143)))->BgL_valuez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(((BgL_bbvzd2ctxentryzd2_bglt)
									BgL_new1197z00_5143)))->BgL_aliasesz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_7427 = ((BgL_bbvzd2ctxentryzd2_bglt) BgL_new1197z00_5143);
				return ((obj_t) BgL_auxz00_7427);
			}
		}

	}



/* &lambda2229 */
	BgL_bbvzd2ctxentryzd2_bglt BGl_z62lambda2229z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5144)
	{
		{	/* SawMill/bbv-types.scm 51 */
			{	/* SawMill/bbv-types.scm 51 */
				BgL_bbvzd2ctxentryzd2_bglt BgL_new1196z00_5596;

				BgL_new1196z00_5596 =
					((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_bbvzd2ctxentryzd2_bgl))));
				{	/* SawMill/bbv-types.scm 51 */
					long BgL_arg2230z00_5597;

					{	/* SawMill/bbv-types.scm 51 */
						long BgL_res2956z00_5598;

						BgL_res2956z00_5598 =
							BGL_CLASS_INDEX(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
						BgL_arg2230z00_5597 = BgL_res2956z00_5598;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1196z00_5596), BgL_arg2230z00_5597);
				}
				return BgL_new1196z00_5596;
			}
		}

	}



/* &lambda2227 */
	BgL_bbvzd2ctxentryzd2_bglt BGl_z62lambda2227z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5145, obj_t BgL_reg1191z00_5146, obj_t BgL_typ1192z00_5147,
		obj_t BgL_flag1193z00_5148, obj_t BgL_value1194z00_5149,
		obj_t BgL_aliases1195z00_5150)
	{
		{	/* SawMill/bbv-types.scm 51 */
			{	/* SawMill/bbv-types.scm 51 */
				bool_t BgL_flag1193z00_5601;

				BgL_flag1193z00_5601 = CBOOL(BgL_flag1193z00_5148);
				{	/* SawMill/bbv-types.scm 51 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_new1328z00_5603;

					{	/* SawMill/bbv-types.scm 51 */
						BgL_bbvzd2ctxentryzd2_bglt BgL_new1327z00_5604;

						BgL_new1327z00_5604 =
							((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_bbvzd2ctxentryzd2_bgl))));
						{	/* SawMill/bbv-types.scm 51 */
							long BgL_arg2228z00_5605;

							{	/* SawMill/bbv-types.scm 51 */
								long BgL_res2955z00_5606;

								BgL_res2955z00_5606 =
									BGL_CLASS_INDEX(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
								BgL_arg2228z00_5605 = BgL_res2955z00_5606;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1327z00_5604),
								BgL_arg2228z00_5605);
						}
						BgL_new1328z00_5603 = BgL_new1327z00_5604;
					}
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1328z00_5603))->
							BgL_regz00) =
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_reg1191z00_5146)),
						BUNSPEC);
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1328z00_5603))->
							BgL_typz00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typ1192z00_5147)),
						BUNSPEC);
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1328z00_5603))->
							BgL_flagz00) = ((bool_t) BgL_flag1193z00_5601), BUNSPEC);
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1328z00_5603))->
							BgL_valuez00) = ((obj_t) BgL_value1194z00_5149), BUNSPEC);
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1328z00_5603))->
							BgL_aliasesz00) =
						((obj_t) ((obj_t) BgL_aliases1195z00_5150)), BUNSPEC);
					return BgL_new1328z00_5603;
				}
			}
		}

	}



/* &<@anonymous:2262> */
	obj_t BGl_z62zc3z04anonymousza32262ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5151)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return BNIL;
		}

	}



/* &lambda2261 */
	obj_t BGl_z62lambda2261z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5152,
		obj_t BgL_oz00_5153, obj_t BgL_vz00_5154)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
							((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5153)))->BgL_aliasesz00) =
				((obj_t) ((obj_t) BgL_vz00_5154)), BUNSPEC);
		}

	}



/* &lambda2260 */
	obj_t BGl_z62lambda2260z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5155,
		obj_t BgL_oz00_5156)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
						((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5156)))->BgL_aliasesz00);
		}

	}



/* &<@anonymous:2255> */
	obj_t BGl_z62zc3z04anonymousza32255ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5157)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return CNST_TABLE_REF(((long) 8));
		}

	}



/* &lambda2254 */
	obj_t BGl_z62lambda2254z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5158,
		obj_t BgL_oz00_5159, obj_t BgL_vz00_5160)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
							((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5159)))->BgL_valuez00) =
				((obj_t) BgL_vz00_5160), BUNSPEC);
		}

	}



/* &lambda2253 */
	obj_t BGl_z62lambda2253z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5161,
		obj_t BgL_oz00_5162)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
						((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5162)))->BgL_valuez00);
		}

	}



/* &lambda2248 */
	obj_t BGl_z62lambda2248z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5163,
		obj_t BgL_oz00_5164, obj_t BgL_vz00_5165)
	{
		{	/* SawMill/bbv-types.scm 51 */
			{	/* SawMill/bbv-types.scm 51 */
				bool_t BgL_vz00_5613;

				BgL_vz00_5613 = CBOOL(BgL_vz00_5165);
				return
					((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
								((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5164)))->BgL_flagz00) =
					((bool_t) BgL_vz00_5613), BUNSPEC);
			}
		}

	}



/* &lambda2247 */
	obj_t BGl_z62lambda2247z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5166,
		obj_t BgL_oz00_5167)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				BBOOL(
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
							((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5167)))->BgL_flagz00));
		}

	}



/* &<@anonymous:2243> */
	obj_t BGl_z62zc3z04anonymousza32243ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5168)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return BGl_za2objza2z00zztype_cachez00;
		}

	}



/* &lambda2242 */
	obj_t BGl_z62lambda2242z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5169,
		obj_t BgL_oz00_5170, obj_t BgL_vz00_5171)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
							((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5170)))->BgL_typz00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_5171)), BUNSPEC);
		}

	}



/* &lambda2241 */
	BgL_typez00_bglt BGl_z62lambda2241z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5172, obj_t BgL_oz00_5173)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
						((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5173)))->BgL_typz00);
		}

	}



/* &lambda2236 */
	obj_t BGl_z62lambda2236z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5174,
		obj_t BgL_oz00_5175, obj_t BgL_vz00_5176)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
							((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5175)))->BgL_regz00) =
				((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_vz00_5176)), BUNSPEC);
		}

	}



/* &lambda2235 */
	BgL_rtl_regz00_bglt BGl_z62lambda2235z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5177, obj_t BgL_oz00_5178)
	{
		{	/* SawMill/bbv-types.scm 51 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
						((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_5178)))->BgL_regz00);
		}

	}



/* &lambda2190 */
	BgL_rtl_insz00_bglt BGl_z62lambda2190z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5179, obj_t BgL_o1189z00_5180)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{	/* SawMill/bbv-types.scm 45 */
				long BgL_arg2191z00_5622;

				{	/* SawMill/bbv-types.scm 45 */
					obj_t BgL_arg2192z00_5623;

					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_arg2193z00_5624;

						{	/* SawMill/bbv-types.scm 45 */
							long BgL_arg1816z00_5625;

							{	/* SawMill/bbv-types.scm 45 */
								long BgL_arg1817z00_5626;

								{	/* SawMill/bbv-types.scm 45 */
									long BgL_res2952z00_5627;

									BgL_res2952z00_5627 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_insz00_bglt) BgL_o1189z00_5180)));
									BgL_arg1817z00_5626 = BgL_res2952z00_5627;
								}
								BgL_arg1816z00_5625 = (BgL_arg1817z00_5626 - OBJECT_TYPE);
							}
							BgL_arg2193z00_5624 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5625);
						}
						BgL_arg2192z00_5623 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2193z00_5624);
					}
					{	/* SawMill/bbv-types.scm 45 */
						long BgL_res2954z00_5628;

						{	/* SawMill/bbv-types.scm 45 */
							obj_t BgL_tmpz00_7503;

							BgL_tmpz00_7503 = ((obj_t) BgL_arg2192z00_5623);
							BgL_res2954z00_5628 = BGL_CLASS_INDEX(BgL_tmpz00_7503);
						}
						BgL_arg2191z00_5622 = BgL_res2954z00_5628;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) BgL_o1189z00_5180)), BgL_arg2191z00_5622);
			}
			{	/* SawMill/bbv-types.scm 45 */
				BgL_objectz00_bglt BgL_tmpz00_7509;

				BgL_tmpz00_7509 =
					((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1189z00_5180));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7509, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1189z00_5180));
			return ((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1189z00_5180));
		}

	}



/* &<@anonymous:2189> */
	obj_t BGl_z62zc3z04anonymousza32189ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5181, obj_t BgL_new1188z00_5182)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_insz00_bglt BgL_auxz00_7517;

				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1188z00_5182))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1188z00_5182))))->BgL_z52spillz52) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1188z00_5182))))->BgL_destz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_7527;

					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_classz00_5630;

						BgL_classz00_5630 = BGl_rtl_funz00zzsaw_defsz00;
						{	/* SawMill/bbv-types.scm 45 */
							obj_t BgL__ortest_1106z00_5631;

							BgL__ortest_1106z00_5631 = BGL_CLASS_NIL(BgL_classz00_5630);
							if (CBOOL(BgL__ortest_1106z00_5631))
								{	/* SawMill/bbv-types.scm 45 */
									BgL_auxz00_7527 =
										((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_5631);
								}
							else
								{	/* SawMill/bbv-types.scm 45 */
									BgL_auxz00_7527 =
										((BgL_rtl_funz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5630));
								}
						}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_new1188z00_5182))))->
							BgL_funz00) = ((BgL_rtl_funz00_bglt) BgL_auxz00_7527), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1188z00_5182))))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7540;

					{
						obj_t BgL_auxz00_7541;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7542;

							BgL_tmpz00_7542 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1188z00_5182));
							BgL_auxz00_7541 = BGL_OBJECT_WIDENING(BgL_tmpz00_7542);
						}
						BgL_auxz00_7540 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7541);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7540))->
							BgL_defz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7548;

					{
						obj_t BgL_auxz00_7549;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7550;

							BgL_tmpz00_7550 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1188z00_5182));
							BgL_auxz00_7549 = BGL_OBJECT_WIDENING(BgL_tmpz00_7550);
						}
						BgL_auxz00_7548 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7549);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7548))->
							BgL_outz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7556;

					{
						obj_t BgL_auxz00_7557;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7558;

							BgL_tmpz00_7558 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1188z00_5182));
							BgL_auxz00_7557 = BGL_OBJECT_WIDENING(BgL_tmpz00_7558);
						}
						BgL_auxz00_7556 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7557);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7556))->BgL_inz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7564;

					{
						obj_t BgL_auxz00_7565;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7566;

							BgL_tmpz00_7566 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1188z00_5182));
							BgL_auxz00_7565 = BGL_OBJECT_WIDENING(BgL_tmpz00_7566);
						}
						BgL_auxz00_7564 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7565);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7564))->
							BgL_z52hashz52) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_7517 = ((BgL_rtl_insz00_bglt) BgL_new1188z00_5182);
				return ((obj_t) BgL_auxz00_7517);
			}
		}

	}



/* &lambda2187 */
	BgL_rtl_insz00_bglt BGl_z62lambda2187z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5183, obj_t BgL_o1185z00_5184)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{	/* SawMill/bbv-types.scm 45 */
				BgL_rtl_inszf2bbvzf2_bglt BgL_wide1187z00_5633;

				BgL_wide1187z00_5633 =
					((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_inszf2bbvzf2_bgl))));
				{	/* SawMill/bbv-types.scm 45 */
					obj_t BgL_auxz00_7579;
					BgL_objectz00_bglt BgL_tmpz00_7575;

					BgL_auxz00_7579 = ((obj_t) BgL_wide1187z00_5633);
					BgL_tmpz00_7575 =
						((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1185z00_5184)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7575, BgL_auxz00_7579);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1185z00_5184)));
				{	/* SawMill/bbv-types.scm 45 */
					long BgL_arg2188z00_5634;

					{	/* SawMill/bbv-types.scm 45 */
						long BgL_res2951z00_5635;

						BgL_res2951z00_5635 =
							BGL_CLASS_INDEX(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
						BgL_arg2188z00_5634 = BgL_res2951z00_5635;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_o1185z00_5184))),
						BgL_arg2188z00_5634);
				}
				return
					((BgL_rtl_insz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1185z00_5184)));
			}
		}

	}



/* &lambda2184 */
	BgL_rtl_insz00_bglt BGl_z62lambda2184z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5185, obj_t BgL_loc1176z00_5186, obj_t BgL_z52spill1177z52_5187,
		obj_t BgL_dest1178z00_5188, obj_t BgL_fun1179z00_5189,
		obj_t BgL_args1180z00_5190, obj_t BgL_def1181z00_5191,
		obj_t BgL_out1182z00_5192, obj_t BgL_in1183z00_5193,
		obj_t BgL_z52hash1184z52_5194)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{	/* SawMill/bbv-types.scm 45 */
				BgL_rtl_insz00_bglt BgL_new1325z00_5639;

				{	/* SawMill/bbv-types.scm 45 */
					BgL_rtl_insz00_bglt BgL_tmp1323z00_5640;
					BgL_rtl_inszf2bbvzf2_bglt BgL_wide1324z00_5641;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_7593;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_rtl_insz00_bglt BgL_new1322z00_5642;

							BgL_new1322z00_5642 =
								((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							{	/* SawMill/bbv-types.scm 45 */
								long BgL_arg2186z00_5643;

								{	/* SawMill/bbv-types.scm 45 */
									long BgL_res2949z00_5644;

									BgL_res2949z00_5644 =
										BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
									BgL_arg2186z00_5643 = BgL_res2949z00_5644;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1322z00_5642),
									BgL_arg2186z00_5643);
							}
							{	/* SawMill/bbv-types.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_7598;

								BgL_tmpz00_7598 = ((BgL_objectz00_bglt) BgL_new1322z00_5642);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7598, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1322z00_5642);
							BgL_auxz00_7593 = BgL_new1322z00_5642;
						}
						BgL_tmp1323z00_5640 = ((BgL_rtl_insz00_bglt) BgL_auxz00_7593);
					}
					BgL_wide1324z00_5641 =
						((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_inszf2bbvzf2_bgl))));
					{	/* SawMill/bbv-types.scm 45 */
						obj_t BgL_auxz00_7606;
						BgL_objectz00_bglt BgL_tmpz00_7604;

						BgL_auxz00_7606 = ((obj_t) BgL_wide1324z00_5641);
						BgL_tmpz00_7604 = ((BgL_objectz00_bglt) BgL_tmp1323z00_5640);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7604, BgL_auxz00_7606);
					}
					((BgL_objectz00_bglt) BgL_tmp1323z00_5640);
					{	/* SawMill/bbv-types.scm 45 */
						long BgL_arg2185z00_5645;

						{	/* SawMill/bbv-types.scm 45 */
							long BgL_res2950z00_5646;

							BgL_res2950z00_5646 =
								BGL_CLASS_INDEX(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
							BgL_arg2185z00_5645 = BgL_res2950z00_5646;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1323z00_5640), BgL_arg2185z00_5645);
					}
					BgL_new1325z00_5639 = ((BgL_rtl_insz00_bglt) BgL_tmp1323z00_5640);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1325z00_5639)))->BgL_locz00) =
					((obj_t) BgL_loc1176z00_5186), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_5639)))->BgL_z52spillz52) =
					((obj_t) ((obj_t) BgL_z52spill1177z52_5187)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_5639)))->BgL_destz00) =
					((obj_t) BgL_dest1178z00_5188), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_5639)))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_fun1179z00_5189)),
					BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_5639)))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1180z00_5190)), BUNSPEC);
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7627;

					{
						obj_t BgL_auxz00_7628;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7629;

							BgL_tmpz00_7629 = ((BgL_objectz00_bglt) BgL_new1325z00_5639);
							BgL_auxz00_7628 = BGL_OBJECT_WIDENING(BgL_tmpz00_7629);
						}
						BgL_auxz00_7627 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7628);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7627))->
							BgL_defz00) = ((obj_t) BgL_def1181z00_5191), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7634;

					{
						obj_t BgL_auxz00_7635;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7636;

							BgL_tmpz00_7636 = ((BgL_objectz00_bglt) BgL_new1325z00_5639);
							BgL_auxz00_7635 = BGL_OBJECT_WIDENING(BgL_tmpz00_7636);
						}
						BgL_auxz00_7634 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7635);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7634))->
							BgL_outz00) = ((obj_t) BgL_out1182z00_5192), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7641;

					{
						obj_t BgL_auxz00_7642;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7643;

							BgL_tmpz00_7643 = ((BgL_objectz00_bglt) BgL_new1325z00_5639);
							BgL_auxz00_7642 = BGL_OBJECT_WIDENING(BgL_tmpz00_7643);
						}
						BgL_auxz00_7641 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7642);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7641))->BgL_inz00) =
						((obj_t) BgL_in1183z00_5193), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7648;

					{
						obj_t BgL_auxz00_7649;

						{	/* SawMill/bbv-types.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_7650;

							BgL_tmpz00_7650 = ((BgL_objectz00_bglt) BgL_new1325z00_5639);
							BgL_auxz00_7649 = BGL_OBJECT_WIDENING(BgL_tmpz00_7650);
						}
						BgL_auxz00_7648 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7649);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7648))->
							BgL_z52hashz52) = ((obj_t) BgL_z52hash1184z52_5194), BUNSPEC);
				}
				return BgL_new1325z00_5639;
			}
		}

	}



/* &<@anonymous:2221> */
	obj_t BGl_z62zc3z04anonymousza32221ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5195)
	{
		{	/* SawMill/bbv-types.scm 45 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2220 */
	obj_t BGl_z62lambda2220z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5196,
		obj_t BgL_oz00_5197, obj_t BgL_vz00_5198)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7656;

				{
					obj_t BgL_auxz00_7657;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7658;

						BgL_tmpz00_7658 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5197));
						BgL_auxz00_7657 = BGL_OBJECT_WIDENING(BgL_tmpz00_7658);
					}
					BgL_auxz00_7656 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7657);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7656))->
						BgL_z52hashz52) = ((obj_t) BgL_vz00_5198), BUNSPEC);
			}
		}

	}



/* &lambda2219 */
	obj_t BGl_z62lambda2219z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5199,
		obj_t BgL_oz00_5200)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7664;

				{
					obj_t BgL_auxz00_7665;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7666;

						BgL_tmpz00_7666 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5200));
						BgL_auxz00_7665 = BGL_OBJECT_WIDENING(BgL_tmpz00_7666);
					}
					BgL_auxz00_7664 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7665);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7664))->
					BgL_z52hashz52);
			}
		}

	}



/* &<@anonymous:2214> */
	obj_t BGl_z62zc3z04anonymousza32214ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5201)
	{
		{	/* SawMill/bbv-types.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda2213 */
	obj_t BGl_z62lambda2213z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5202,
		obj_t BgL_oz00_5203, obj_t BgL_vz00_5204)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7672;

				{
					obj_t BgL_auxz00_7673;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7674;

						BgL_tmpz00_7674 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5203));
						BgL_auxz00_7673 = BGL_OBJECT_WIDENING(BgL_tmpz00_7674);
					}
					BgL_auxz00_7672 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7673);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7672))->BgL_inz00) =
					((obj_t) BgL_vz00_5204), BUNSPEC);
			}
		}

	}



/* &lambda2212 */
	obj_t BGl_z62lambda2212z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5205,
		obj_t BgL_oz00_5206)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7680;

				{
					obj_t BgL_auxz00_7681;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7682;

						BgL_tmpz00_7682 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5206));
						BgL_auxz00_7681 = BGL_OBJECT_WIDENING(BgL_tmpz00_7682);
					}
					BgL_auxz00_7680 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7681);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7680))->BgL_inz00);
			}
		}

	}



/* &<@anonymous:2207> */
	obj_t BGl_z62zc3z04anonymousza32207ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5207)
	{
		{	/* SawMill/bbv-types.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda2206 */
	obj_t BGl_z62lambda2206z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5208,
		obj_t BgL_oz00_5209, obj_t BgL_vz00_5210)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7688;

				{
					obj_t BgL_auxz00_7689;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7690;

						BgL_tmpz00_7690 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5209));
						BgL_auxz00_7689 = BGL_OBJECT_WIDENING(BgL_tmpz00_7690);
					}
					BgL_auxz00_7688 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7689);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7688))->
						BgL_outz00) = ((obj_t) BgL_vz00_5210), BUNSPEC);
			}
		}

	}



/* &lambda2205 */
	obj_t BGl_z62lambda2205z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5211,
		obj_t BgL_oz00_5212)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7696;

				{
					obj_t BgL_auxz00_7697;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7698;

						BgL_tmpz00_7698 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5212));
						BgL_auxz00_7697 = BGL_OBJECT_WIDENING(BgL_tmpz00_7698);
					}
					BgL_auxz00_7696 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7697);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7696))->BgL_outz00);
			}
		}

	}



/* &<@anonymous:2200> */
	obj_t BGl_z62zc3z04anonymousza32200ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5213)
	{
		{	/* SawMill/bbv-types.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda2199 */
	obj_t BGl_z62lambda2199z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5214,
		obj_t BgL_oz00_5215, obj_t BgL_vz00_5216)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7704;

				{
					obj_t BgL_auxz00_7705;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7706;

						BgL_tmpz00_7706 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5215));
						BgL_auxz00_7705 = BGL_OBJECT_WIDENING(BgL_tmpz00_7706);
					}
					BgL_auxz00_7704 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7705);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7704))->
						BgL_defz00) = ((obj_t) BgL_vz00_5216), BUNSPEC);
			}
		}

	}



/* &lambda2198 */
	obj_t BGl_z62lambda2198z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5217,
		obj_t BgL_oz00_5218)
	{
		{	/* SawMill/bbv-types.scm 45 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7712;

				{
					obj_t BgL_auxz00_7713;

					{	/* SawMill/bbv-types.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_7714;

						BgL_tmpz00_7714 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5218));
						BgL_auxz00_7713 = BGL_OBJECT_WIDENING(BgL_tmpz00_7714);
					}
					BgL_auxz00_7712 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_7713);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_7712))->BgL_defz00);
			}
		}

	}



/* &lambda2130 */
	BgL_blockz00_bglt BGl_z62lambda2130z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5219, obj_t BgL_o1174z00_5220)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{	/* SawMill/bbv-types.scm 38 */
				long BgL_arg2131z00_5656;

				{	/* SawMill/bbv-types.scm 38 */
					obj_t BgL_arg2132z00_5657;

					{	/* SawMill/bbv-types.scm 38 */
						obj_t BgL_arg2133z00_5658;

						{	/* SawMill/bbv-types.scm 38 */
							long BgL_arg1816z00_5659;

							{	/* SawMill/bbv-types.scm 38 */
								long BgL_arg1817z00_5660;

								{	/* SawMill/bbv-types.scm 38 */
									long BgL_res2946z00_5661;

									BgL_res2946z00_5661 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1174z00_5220)));
									BgL_arg1817z00_5660 = BgL_res2946z00_5661;
								}
								BgL_arg1816z00_5659 = (BgL_arg1817z00_5660 - OBJECT_TYPE);
							}
							BgL_arg2133z00_5658 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5659);
						}
						BgL_arg2132z00_5657 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2133z00_5658);
					}
					{	/* SawMill/bbv-types.scm 38 */
						long BgL_res2948z00_5662;

						{	/* SawMill/bbv-types.scm 38 */
							obj_t BgL_tmpz00_7726;

							BgL_tmpz00_7726 = ((obj_t) BgL_arg2132z00_5657);
							BgL_res2948z00_5662 = BGL_CLASS_INDEX(BgL_tmpz00_7726);
						}
						BgL_arg2131z00_5656 = BgL_res2948z00_5662;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1174z00_5220)), BgL_arg2131z00_5656);
			}
			{	/* SawMill/bbv-types.scm 38 */
				BgL_objectz00_bglt BgL_tmpz00_7732;

				BgL_tmpz00_7732 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_5220));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7732, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_5220));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_5220));
		}

	}



/* &<@anonymous:2129> */
	obj_t BGl_z62zc3z04anonymousza32129ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5221, obj_t BgL_new1173z00_5222)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blockz00_bglt BgL_auxz00_7740;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1173z00_5222))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_5222))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_5222))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_5222))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_blocksz00_bglt BgL_auxz00_7755;

					{
						obj_t BgL_auxz00_7756;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7757;

							BgL_tmpz00_7757 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7756 = BGL_OBJECT_WIDENING(BgL_tmpz00_7757);
						}
						BgL_auxz00_7755 = ((BgL_blocksz00_bglt) BgL_auxz00_7756);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7755))->BgL_ictxz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_7763;

					{
						obj_t BgL_auxz00_7764;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7765;

							BgL_tmpz00_7765 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7764 = BGL_OBJECT_WIDENING(BgL_tmpz00_7765);
						}
						BgL_auxz00_7763 = ((BgL_blocksz00_bglt) BgL_auxz00_7764);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7763))->BgL_octxsz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_7771;

					{
						obj_t BgL_auxz00_7772;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7773;

							BgL_tmpz00_7773 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7772 = BGL_OBJECT_WIDENING(BgL_tmpz00_7773);
						}
						BgL_auxz00_7771 = ((BgL_blocksz00_bglt) BgL_auxz00_7772);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7771))->BgL_z52markz52) =
						((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_7779;

					{
						obj_t BgL_auxz00_7780;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7781;

							BgL_tmpz00_7781 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7780 = BGL_OBJECT_WIDENING(BgL_tmpz00_7781);
						}
						BgL_auxz00_7779 = ((BgL_blocksz00_bglt) BgL_auxz00_7780);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7779))->BgL_z52parentz52) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_7787;

					{
						obj_t BgL_auxz00_7788;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7789;

							BgL_tmpz00_7789 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7788 = BGL_OBJECT_WIDENING(BgL_tmpz00_7789);
						}
						BgL_auxz00_7787 = ((BgL_blocksz00_bglt) BgL_auxz00_7788);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7787))->BgL_z52hashz52) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_7795;

					{
						obj_t BgL_auxz00_7796;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7797;

							BgL_tmpz00_7797 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_5222));
							BgL_auxz00_7796 = BGL_OBJECT_WIDENING(BgL_tmpz00_7797);
						}
						BgL_auxz00_7795 = ((BgL_blocksz00_bglt) BgL_auxz00_7796);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7795))->
							BgL_z52blacklistz52) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_7740 = ((BgL_blockz00_bglt) BgL_new1173z00_5222);
				return ((obj_t) BgL_auxz00_7740);
			}
		}

	}



/* &lambda2127 */
	BgL_blockz00_bglt BGl_z62lambda2127z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5223, obj_t BgL_o1170z00_5224)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{	/* SawMill/bbv-types.scm 38 */
				BgL_blocksz00_bglt BgL_wide1172z00_5665;

				BgL_wide1172z00_5665 =
					((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_blocksz00_bgl))));
				{	/* SawMill/bbv-types.scm 38 */
					obj_t BgL_auxz00_7810;
					BgL_objectz00_bglt BgL_tmpz00_7806;

					BgL_auxz00_7810 = ((obj_t) BgL_wide1172z00_5665);
					BgL_tmpz00_7806 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_5224)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7806, BgL_auxz00_7810);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_5224)));
				{	/* SawMill/bbv-types.scm 38 */
					long BgL_arg2128z00_5666;

					{	/* SawMill/bbv-types.scm 38 */
						long BgL_res2945z00_5667;

						BgL_res2945z00_5667 =
							BGL_CLASS_INDEX(BGl_blockSz00zzsaw_bbvzd2typeszd2);
						BgL_arg2128z00_5666 = BgL_res2945z00_5667;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1170z00_5224))), BgL_arg2128z00_5666);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_5224)));
			}
		}

	}



/* &lambda2124 */
	BgL_blockz00_bglt BGl_z62lambda2124z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5225, obj_t BgL_label1160z00_5226, obj_t BgL_preds1161z00_5227,
		obj_t BgL_succs1162z00_5228, obj_t BgL_first1163z00_5229,
		obj_t BgL_ictx1164z00_5230, obj_t BgL_octxs1165z00_5231,
		obj_t BgL_z52mark1166z52_5232, obj_t BgL_z52parent1167z52_5233,
		obj_t BgL_z52hash1168z52_5234, obj_t BgL_z52blacklist1169z52_5235)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{	/* SawMill/bbv-types.scm 38 */
				int BgL_label1160z00_5668;
				long BgL_z52mark1166z52_5674;

				BgL_label1160z00_5668 = CINT(BgL_label1160z00_5226);
				BgL_z52mark1166z52_5674 = (long) CINT(BgL_z52mark1166z52_5232);
				{	/* SawMill/bbv-types.scm 38 */
					BgL_blockz00_bglt BgL_new1320z00_5675;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_blockz00_bglt BgL_tmp1318z00_5676;
						BgL_blocksz00_bglt BgL_wide1319z00_5677;

						{
							BgL_blockz00_bglt BgL_auxz00_7826;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_blockz00_bglt BgL_new1317z00_5678;

								BgL_new1317z00_5678 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/bbv-types.scm 38 */
									long BgL_arg2126z00_5679;

									{	/* SawMill/bbv-types.scm 38 */
										long BgL_res2943z00_5680;

										BgL_res2943z00_5680 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg2126z00_5679 = BgL_res2943z00_5680;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1317z00_5678),
										BgL_arg2126z00_5679);
								}
								{	/* SawMill/bbv-types.scm 38 */
									BgL_objectz00_bglt BgL_tmpz00_7831;

									BgL_tmpz00_7831 = ((BgL_objectz00_bglt) BgL_new1317z00_5678);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7831, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1317z00_5678);
								BgL_auxz00_7826 = BgL_new1317z00_5678;
							}
							BgL_tmp1318z00_5676 = ((BgL_blockz00_bglt) BgL_auxz00_7826);
						}
						BgL_wide1319z00_5677 =
							((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_blocksz00_bgl))));
						{	/* SawMill/bbv-types.scm 38 */
							obj_t BgL_auxz00_7839;
							BgL_objectz00_bglt BgL_tmpz00_7837;

							BgL_auxz00_7839 = ((obj_t) BgL_wide1319z00_5677);
							BgL_tmpz00_7837 = ((BgL_objectz00_bglt) BgL_tmp1318z00_5676);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7837, BgL_auxz00_7839);
						}
						((BgL_objectz00_bglt) BgL_tmp1318z00_5676);
						{	/* SawMill/bbv-types.scm 38 */
							long BgL_arg2125z00_5681;

							{	/* SawMill/bbv-types.scm 38 */
								long BgL_res2944z00_5682;

								BgL_res2944z00_5682 =
									BGL_CLASS_INDEX(BGl_blockSz00zzsaw_bbvzd2typeszd2);
								BgL_arg2125z00_5681 = BgL_res2944z00_5682;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1318z00_5676),
								BgL_arg2125z00_5681);
						}
						BgL_new1320z00_5675 = ((BgL_blockz00_bglt) BgL_tmp1318z00_5676);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1320z00_5675)))->BgL_labelz00) =
						((int) BgL_label1160z00_5668), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1320z00_5675)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1161z00_5227)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1320z00_5675)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1162z00_5228)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1320z00_5675)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1163z00_5229)), BUNSPEC);
					{
						BgL_blocksz00_bglt BgL_auxz00_7858;

						{
							obj_t BgL_auxz00_7859;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7860;

								BgL_tmpz00_7860 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7859 = BGL_OBJECT_WIDENING(BgL_tmpz00_7860);
							}
							BgL_auxz00_7858 = ((BgL_blocksz00_bglt) BgL_auxz00_7859);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7858))->BgL_ictxz00) =
							((obj_t) ((obj_t) BgL_ictx1164z00_5230)), BUNSPEC);
					}
					{
						BgL_blocksz00_bglt BgL_auxz00_7866;

						{
							obj_t BgL_auxz00_7867;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7868;

								BgL_tmpz00_7868 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7867 = BGL_OBJECT_WIDENING(BgL_tmpz00_7868);
							}
							BgL_auxz00_7866 = ((BgL_blocksz00_bglt) BgL_auxz00_7867);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7866))->BgL_octxsz00) =
							((obj_t) ((obj_t) BgL_octxs1165z00_5231)), BUNSPEC);
					}
					{
						BgL_blocksz00_bglt BgL_auxz00_7874;

						{
							obj_t BgL_auxz00_7875;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7876;

								BgL_tmpz00_7876 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7875 = BGL_OBJECT_WIDENING(BgL_tmpz00_7876);
							}
							BgL_auxz00_7874 = ((BgL_blocksz00_bglt) BgL_auxz00_7875);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7874))->BgL_z52markz52) =
							((long) BgL_z52mark1166z52_5674), BUNSPEC);
					}
					{
						BgL_blocksz00_bglt BgL_auxz00_7881;

						{
							obj_t BgL_auxz00_7882;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7883;

								BgL_tmpz00_7883 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7882 = BGL_OBJECT_WIDENING(BgL_tmpz00_7883);
							}
							BgL_auxz00_7881 = ((BgL_blocksz00_bglt) BgL_auxz00_7882);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7881))->
								BgL_z52parentz52) =
							((obj_t) BgL_z52parent1167z52_5233), BUNSPEC);
					}
					{
						BgL_blocksz00_bglt BgL_auxz00_7888;

						{
							obj_t BgL_auxz00_7889;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7890;

								BgL_tmpz00_7890 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7889 = BGL_OBJECT_WIDENING(BgL_tmpz00_7890);
							}
							BgL_auxz00_7888 = ((BgL_blocksz00_bglt) BgL_auxz00_7889);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7888))->BgL_z52hashz52) =
							((obj_t) BgL_z52hash1168z52_5234), BUNSPEC);
					}
					{
						BgL_blocksz00_bglt BgL_auxz00_7895;

						{
							obj_t BgL_auxz00_7896;

							{	/* SawMill/bbv-types.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_7897;

								BgL_tmpz00_7897 = ((BgL_objectz00_bglt) BgL_new1320z00_5675);
								BgL_auxz00_7896 = BGL_OBJECT_WIDENING(BgL_tmpz00_7897);
							}
							BgL_auxz00_7895 = ((BgL_blocksz00_bglt) BgL_auxz00_7896);
						}
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7895))->
								BgL_z52blacklistz52) =
							((obj_t) BgL_z52blacklist1169z52_5235), BUNSPEC);
					}
					return BgL_new1320z00_5675;
				}
			}
		}

	}



/* &<@anonymous:2177> */
	obj_t BGl_z62zc3z04anonymousza32177ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5236)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BNIL;
		}

	}



/* &lambda2176 */
	obj_t BGl_z62lambda2176z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5237,
		obj_t BgL_oz00_5238, obj_t BgL_vz00_5239)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7902;

				{
					obj_t BgL_auxz00_7903;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7904;

						BgL_tmpz00_7904 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5238));
						BgL_auxz00_7903 = BGL_OBJECT_WIDENING(BgL_tmpz00_7904);
					}
					BgL_auxz00_7902 = ((BgL_blocksz00_bglt) BgL_auxz00_7903);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7902))->
						BgL_z52blacklistz52) = ((obj_t) BgL_vz00_5239), BUNSPEC);
			}
		}

	}



/* &lambda2175 */
	obj_t BGl_z62lambda2175z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5240,
		obj_t BgL_oz00_5241)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7910;

				{
					obj_t BgL_auxz00_7911;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7912;

						BgL_tmpz00_7912 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5241));
						BgL_auxz00_7911 = BGL_OBJECT_WIDENING(BgL_tmpz00_7912);
					}
					BgL_auxz00_7910 = ((BgL_blocksz00_bglt) BgL_auxz00_7911);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7910))->
					BgL_z52blacklistz52);
			}
		}

	}



/* &<@anonymous:2169> */
	obj_t BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5242)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2168 */
	obj_t BGl_z62lambda2168z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5243,
		obj_t BgL_oz00_5244, obj_t BgL_vz00_5245)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7919;

				{
					obj_t BgL_auxz00_7920;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7921;

						BgL_tmpz00_7921 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5244));
						BgL_auxz00_7920 = BGL_OBJECT_WIDENING(BgL_tmpz00_7921);
					}
					BgL_auxz00_7919 = ((BgL_blocksz00_bglt) BgL_auxz00_7920);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7919))->BgL_z52hashz52) =
					((obj_t) BgL_vz00_5245), BUNSPEC);
			}
		}

	}



/* &lambda2167 */
	obj_t BGl_z62lambda2167z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5246,
		obj_t BgL_oz00_5247)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7927;

				{
					obj_t BgL_auxz00_7928;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7929;

						BgL_tmpz00_7929 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5247));
						BgL_auxz00_7928 = BGL_OBJECT_WIDENING(BgL_tmpz00_7929);
					}
					BgL_auxz00_7927 = ((BgL_blocksz00_bglt) BgL_auxz00_7928);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7927))->BgL_z52hashz52);
			}
		}

	}



/* &<@anonymous:2162> */
	obj_t BGl_z62zc3z04anonymousza32162ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5248)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BUNSPEC;
		}

	}



/* &lambda2161 */
	obj_t BGl_z62lambda2161z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5249,
		obj_t BgL_oz00_5250, obj_t BgL_vz00_5251)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7935;

				{
					obj_t BgL_auxz00_7936;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7937;

						BgL_tmpz00_7937 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5250));
						BgL_auxz00_7936 = BGL_OBJECT_WIDENING(BgL_tmpz00_7937);
					}
					BgL_auxz00_7935 = ((BgL_blocksz00_bglt) BgL_auxz00_7936);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7935))->BgL_z52parentz52) =
					((obj_t) BgL_vz00_5251), BUNSPEC);
			}
		}

	}



/* &lambda2160 */
	obj_t BGl_z62lambda2160z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5252,
		obj_t BgL_oz00_5253)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7943;

				{
					obj_t BgL_auxz00_7944;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7945;

						BgL_tmpz00_7945 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5253));
						BgL_auxz00_7944 = BGL_OBJECT_WIDENING(BgL_tmpz00_7945);
					}
					BgL_auxz00_7943 = ((BgL_blocksz00_bglt) BgL_auxz00_7944);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7943))->BgL_z52parentz52);
			}
		}

	}



/* &<@anonymous:2155> */
	obj_t BGl_z62zc3z04anonymousza32155ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5254)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BINT(((long) -1));
		}

	}



/* &lambda2154 */
	obj_t BGl_z62lambda2154z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5255,
		obj_t BgL_oz00_5256, obj_t BgL_vz00_5257)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{	/* SawMill/bbv-types.scm 38 */
				long BgL_vz00_5690;

				BgL_vz00_5690 = (long) CINT(BgL_vz00_5257);
				{
					BgL_blocksz00_bglt BgL_auxz00_7953;

					{
						obj_t BgL_auxz00_7954;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7955;

							BgL_tmpz00_7955 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5256));
							BgL_auxz00_7954 = BGL_OBJECT_WIDENING(BgL_tmpz00_7955);
						}
						BgL_auxz00_7953 = ((BgL_blocksz00_bglt) BgL_auxz00_7954);
					}
					return
						((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7953))->BgL_z52markz52) =
						((long) BgL_vz00_5690), BUNSPEC);
		}}}

	}



/* &lambda2153 */
	obj_t BGl_z62lambda2153z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5258,
		obj_t BgL_oz00_5259)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{	/* SawMill/bbv-types.scm 38 */
				long BgL_tmpz00_7961;

				{
					BgL_blocksz00_bglt BgL_auxz00_7962;

					{
						obj_t BgL_auxz00_7963;

						{	/* SawMill/bbv-types.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_7964;

							BgL_tmpz00_7964 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5259));
							BgL_auxz00_7963 = BGL_OBJECT_WIDENING(BgL_tmpz00_7964);
						}
						BgL_auxz00_7962 = ((BgL_blocksz00_bglt) BgL_auxz00_7963);
					}
					BgL_tmpz00_7961 =
						(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7962))->BgL_z52markz52);
				}
				return BINT(BgL_tmpz00_7961);
			}
		}

	}



/* &<@anonymous:2147> */
	obj_t BGl_z62zc3z04anonymousza32147ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5260)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BNIL;
		}

	}



/* &lambda2146 */
	obj_t BGl_z62lambda2146z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5261,
		obj_t BgL_oz00_5262, obj_t BgL_vz00_5263)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7971;

				{
					obj_t BgL_auxz00_7972;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7973;

						BgL_tmpz00_7973 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5262));
						BgL_auxz00_7972 = BGL_OBJECT_WIDENING(BgL_tmpz00_7973);
					}
					BgL_auxz00_7971 = ((BgL_blocksz00_bglt) BgL_auxz00_7972);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7971))->BgL_octxsz00) =
					((obj_t) ((obj_t) BgL_vz00_5263)), BUNSPEC);
			}
		}

	}



/* &lambda2145 */
	obj_t BGl_z62lambda2145z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5264,
		obj_t BgL_oz00_5265)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7980;

				{
					obj_t BgL_auxz00_7981;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7982;

						BgL_tmpz00_7982 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5265));
						BgL_auxz00_7981 = BGL_OBJECT_WIDENING(BgL_tmpz00_7982);
					}
					BgL_auxz00_7980 = ((BgL_blocksz00_bglt) BgL_auxz00_7981);
				}
				return (((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7980))->BgL_octxsz00);
			}
		}

	}



/* &<@anonymous:2140> */
	obj_t BGl_z62zc3z04anonymousza32140ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5266)
	{
		{	/* SawMill/bbv-types.scm 38 */
			return BNIL;
		}

	}



/* &lambda2139 */
	obj_t BGl_z62lambda2139z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5267,
		obj_t BgL_oz00_5268, obj_t BgL_vz00_5269)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7988;

				{
					obj_t BgL_auxz00_7989;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7990;

						BgL_tmpz00_7990 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5268));
						BgL_auxz00_7989 = BGL_OBJECT_WIDENING(BgL_tmpz00_7990);
					}
					BgL_auxz00_7988 = ((BgL_blocksz00_bglt) BgL_auxz00_7989);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7988))->BgL_ictxz00) =
					((obj_t) ((obj_t) BgL_vz00_5269)), BUNSPEC);
			}
		}

	}



/* &lambda2138 */
	obj_t BGl_z62lambda2138z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5270,
		obj_t BgL_oz00_5271)
	{
		{	/* SawMill/bbv-types.scm 38 */
			{
				BgL_blocksz00_bglt BgL_auxz00_7997;

				{
					obj_t BgL_auxz00_7998;

					{	/* SawMill/bbv-types.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_7999;

						BgL_tmpz00_7999 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5271));
						BgL_auxz00_7998 = BGL_OBJECT_WIDENING(BgL_tmpz00_7999);
					}
					BgL_auxz00_7997 = ((BgL_blocksz00_bglt) BgL_auxz00_7998);
				}
				return (((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_7997))->BgL_ictxz00);
			}
		}

	}



/* &lambda2099 */
	BgL_blockz00_bglt BGl_z62lambda2099z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5272, obj_t BgL_o1158z00_5273)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{	/* SawMill/bbv-types.scm 35 */
				long BgL_arg2100z00_5699;

				{	/* SawMill/bbv-types.scm 35 */
					obj_t BgL_arg2101z00_5700;

					{	/* SawMill/bbv-types.scm 35 */
						obj_t BgL_arg2102z00_5701;

						{	/* SawMill/bbv-types.scm 35 */
							long BgL_arg1816z00_5702;

							{	/* SawMill/bbv-types.scm 35 */
								long BgL_arg1817z00_5703;

								{	/* SawMill/bbv-types.scm 35 */
									long BgL_res2940z00_5704;

									BgL_res2940z00_5704 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1158z00_5273)));
									BgL_arg1817z00_5703 = BgL_res2940z00_5704;
								}
								BgL_arg1816z00_5702 = (BgL_arg1817z00_5703 - OBJECT_TYPE);
							}
							BgL_arg2102z00_5701 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5702);
						}
						BgL_arg2101z00_5700 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2102z00_5701);
					}
					{	/* SawMill/bbv-types.scm 35 */
						long BgL_res2942z00_5705;

						{	/* SawMill/bbv-types.scm 35 */
							obj_t BgL_tmpz00_8011;

							BgL_tmpz00_8011 = ((obj_t) BgL_arg2101z00_5700);
							BgL_res2942z00_5705 = BGL_CLASS_INDEX(BgL_tmpz00_8011);
						}
						BgL_arg2100z00_5699 = BgL_res2942z00_5705;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1158z00_5273)), BgL_arg2100z00_5699);
			}
			{	/* SawMill/bbv-types.scm 35 */
				BgL_objectz00_bglt BgL_tmpz00_8017;

				BgL_tmpz00_8017 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_5273));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8017, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_5273));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_5273));
		}

	}



/* &<@anonymous:2098> */
	obj_t BGl_z62zc3z04anonymousza32098ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5274, obj_t BgL_new1157z00_5275)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{
				BgL_blockz00_bglt BgL_auxz00_8025;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1157z00_5275))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1157z00_5275))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1157z00_5275))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1157z00_5275))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_blockvz00_bglt BgL_auxz00_8040;

					{
						obj_t BgL_auxz00_8041;

						{	/* SawMill/bbv-types.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_8042;

							BgL_tmpz00_8042 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1157z00_5275));
							BgL_auxz00_8041 = BGL_OBJECT_WIDENING(BgL_tmpz00_8042);
						}
						BgL_auxz00_8040 = ((BgL_blockvz00_bglt) BgL_auxz00_8041);
					}
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8040))->BgL_versionsz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				{
					BgL_blockvz00_bglt BgL_auxz00_8048;

					{
						obj_t BgL_auxz00_8049;

						{	/* SawMill/bbv-types.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_8050;

							BgL_tmpz00_8050 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1157z00_5275));
							BgL_auxz00_8049 = BGL_OBJECT_WIDENING(BgL_tmpz00_8050);
						}
						BgL_auxz00_8048 = ((BgL_blockvz00_bglt) BgL_auxz00_8049);
					}
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8048))->BgL_z52markz52) =
						((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_8025 = ((BgL_blockz00_bglt) BgL_new1157z00_5275);
				return ((obj_t) BgL_auxz00_8025);
			}
		}

	}



/* &lambda2096 */
	BgL_blockz00_bglt BGl_z62lambda2096z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5276, obj_t BgL_o1154z00_5277)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{	/* SawMill/bbv-types.scm 35 */
				BgL_blockvz00_bglt BgL_wide1156z00_5708;

				BgL_wide1156z00_5708 =
					((BgL_blockvz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_blockvz00_bgl))));
				{	/* SawMill/bbv-types.scm 35 */
					obj_t BgL_auxz00_8063;
					BgL_objectz00_bglt BgL_tmpz00_8059;

					BgL_auxz00_8063 = ((obj_t) BgL_wide1156z00_5708);
					BgL_tmpz00_8059 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_5277)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8059, BgL_auxz00_8063);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_5277)));
				{	/* SawMill/bbv-types.scm 35 */
					long BgL_arg2097z00_5709;

					{	/* SawMill/bbv-types.scm 35 */
						long BgL_res2939z00_5710;

						BgL_res2939z00_5710 =
							BGL_CLASS_INDEX(BGl_blockVz00zzsaw_bbvzd2typeszd2);
						BgL_arg2097z00_5709 = BgL_res2939z00_5710;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1154z00_5277))), BgL_arg2097z00_5709);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_5277)));
			}
		}

	}



/* &lambda2093 */
	BgL_blockz00_bglt BGl_z62lambda2093z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5278, obj_t BgL_label1148z00_5279, obj_t BgL_preds1149z00_5280,
		obj_t BgL_succs1150z00_5281, obj_t BgL_first1151z00_5282,
		obj_t BgL_versions1152z00_5283, obj_t BgL_z52mark1153z52_5284)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{	/* SawMill/bbv-types.scm 35 */
				int BgL_label1148z00_5711;
				long BgL_z52mark1153z52_5716;

				BgL_label1148z00_5711 = CINT(BgL_label1148z00_5279);
				BgL_z52mark1153z52_5716 = (long) CINT(BgL_z52mark1153z52_5284);
				{	/* SawMill/bbv-types.scm 35 */
					BgL_blockz00_bglt BgL_new1315z00_5717;

					{	/* SawMill/bbv-types.scm 35 */
						BgL_blockz00_bglt BgL_tmp1313z00_5718;
						BgL_blockvz00_bglt BgL_wide1314z00_5719;

						{
							BgL_blockz00_bglt BgL_auxz00_8079;

							{	/* SawMill/bbv-types.scm 35 */
								BgL_blockz00_bglt BgL_new1312z00_5720;

								BgL_new1312z00_5720 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/bbv-types.scm 35 */
									long BgL_arg2095z00_5721;

									{	/* SawMill/bbv-types.scm 35 */
										long BgL_res2937z00_5722;

										BgL_res2937z00_5722 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg2095z00_5721 = BgL_res2937z00_5722;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1312z00_5720),
										BgL_arg2095z00_5721);
								}
								{	/* SawMill/bbv-types.scm 35 */
									BgL_objectz00_bglt BgL_tmpz00_8084;

									BgL_tmpz00_8084 = ((BgL_objectz00_bglt) BgL_new1312z00_5720);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8084, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1312z00_5720);
								BgL_auxz00_8079 = BgL_new1312z00_5720;
							}
							BgL_tmp1313z00_5718 = ((BgL_blockz00_bglt) BgL_auxz00_8079);
						}
						BgL_wide1314z00_5719 =
							((BgL_blockvz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_blockvz00_bgl))));
						{	/* SawMill/bbv-types.scm 35 */
							obj_t BgL_auxz00_8092;
							BgL_objectz00_bglt BgL_tmpz00_8090;

							BgL_auxz00_8092 = ((obj_t) BgL_wide1314z00_5719);
							BgL_tmpz00_8090 = ((BgL_objectz00_bglt) BgL_tmp1313z00_5718);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8090, BgL_auxz00_8092);
						}
						((BgL_objectz00_bglt) BgL_tmp1313z00_5718);
						{	/* SawMill/bbv-types.scm 35 */
							long BgL_arg2094z00_5723;

							{	/* SawMill/bbv-types.scm 35 */
								long BgL_res2938z00_5724;

								BgL_res2938z00_5724 =
									BGL_CLASS_INDEX(BGl_blockVz00zzsaw_bbvzd2typeszd2);
								BgL_arg2094z00_5723 = BgL_res2938z00_5724;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1313z00_5718),
								BgL_arg2094z00_5723);
						}
						BgL_new1315z00_5717 = ((BgL_blockz00_bglt) BgL_tmp1313z00_5718);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1315z00_5717)))->BgL_labelz00) =
						((int) BgL_label1148z00_5711), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_5717)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1149z00_5280)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_5717)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1150z00_5281)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_5717)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1151z00_5282)), BUNSPEC);
					{
						BgL_blockvz00_bglt BgL_auxz00_8111;

						{
							obj_t BgL_auxz00_8112;

							{	/* SawMill/bbv-types.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_8113;

								BgL_tmpz00_8113 = ((BgL_objectz00_bglt) BgL_new1315z00_5717);
								BgL_auxz00_8112 = BGL_OBJECT_WIDENING(BgL_tmpz00_8113);
							}
							BgL_auxz00_8111 = ((BgL_blockvz00_bglt) BgL_auxz00_8112);
						}
						((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8111))->
								BgL_versionsz00) =
							((obj_t) ((obj_t) BgL_versions1152z00_5283)), BUNSPEC);
					}
					{
						BgL_blockvz00_bglt BgL_auxz00_8119;

						{
							obj_t BgL_auxz00_8120;

							{	/* SawMill/bbv-types.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_8121;

								BgL_tmpz00_8121 = ((BgL_objectz00_bglt) BgL_new1315z00_5717);
								BgL_auxz00_8120 = BGL_OBJECT_WIDENING(BgL_tmpz00_8121);
							}
							BgL_auxz00_8119 = ((BgL_blockvz00_bglt) BgL_auxz00_8120);
						}
						((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8119))->BgL_z52markz52) =
							((long) BgL_z52mark1153z52_5716), BUNSPEC);
					}
					return BgL_new1315z00_5717;
				}
			}
		}

	}



/* &<@anonymous:2117> */
	obj_t BGl_z62zc3z04anonymousza32117ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5285)
	{
		{	/* SawMill/bbv-types.scm 35 */
			return BINT(((long) -1));
		}

	}



/* &lambda2116 */
	obj_t BGl_z62lambda2116z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5286,
		obj_t BgL_oz00_5287, obj_t BgL_vz00_5288)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{	/* SawMill/bbv-types.scm 35 */
				long BgL_vz00_5726;

				BgL_vz00_5726 = (long) CINT(BgL_vz00_5288);
				{
					BgL_blockvz00_bglt BgL_auxz00_8128;

					{
						obj_t BgL_auxz00_8129;

						{	/* SawMill/bbv-types.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_8130;

							BgL_tmpz00_8130 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5287));
							BgL_auxz00_8129 = BGL_OBJECT_WIDENING(BgL_tmpz00_8130);
						}
						BgL_auxz00_8128 = ((BgL_blockvz00_bglt) BgL_auxz00_8129);
					}
					return
						((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8128))->BgL_z52markz52) =
						((long) BgL_vz00_5726), BUNSPEC);
		}}}

	}



/* &lambda2115 */
	obj_t BGl_z62lambda2115z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5289,
		obj_t BgL_oz00_5290)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{	/* SawMill/bbv-types.scm 35 */
				long BgL_tmpz00_8136;

				{
					BgL_blockvz00_bglt BgL_auxz00_8137;

					{
						obj_t BgL_auxz00_8138;

						{	/* SawMill/bbv-types.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_8139;

							BgL_tmpz00_8139 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5290));
							BgL_auxz00_8138 = BGL_OBJECT_WIDENING(BgL_tmpz00_8139);
						}
						BgL_auxz00_8137 = ((BgL_blockvz00_bglt) BgL_auxz00_8138);
					}
					BgL_tmpz00_8136 =
						(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8137))->BgL_z52markz52);
				}
				return BINT(BgL_tmpz00_8136);
			}
		}

	}



/* &<@anonymous:2109> */
	obj_t BGl_z62zc3z04anonymousza32109ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5291)
	{
		{	/* SawMill/bbv-types.scm 35 */
			return BNIL;
		}

	}



/* &lambda2108 */
	obj_t BGl_z62lambda2108z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5292,
		obj_t BgL_oz00_5293, obj_t BgL_vz00_5294)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{
				BgL_blockvz00_bglt BgL_auxz00_8146;

				{
					obj_t BgL_auxz00_8147;

					{	/* SawMill/bbv-types.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_8148;

						BgL_tmpz00_8148 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5293));
						BgL_auxz00_8147 = BGL_OBJECT_WIDENING(BgL_tmpz00_8148);
					}
					BgL_auxz00_8146 = ((BgL_blockvz00_bglt) BgL_auxz00_8147);
				}
				return
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8146))->BgL_versionsz00) =
					((obj_t) ((obj_t) BgL_vz00_5294)), BUNSPEC);
			}
		}

	}



/* &lambda2107 */
	obj_t BGl_z62lambda2107z62zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5295,
		obj_t BgL_oz00_5296)
	{
		{	/* SawMill/bbv-types.scm 35 */
			{
				BgL_blockvz00_bglt BgL_auxz00_8155;

				{
					obj_t BgL_auxz00_8156;

					{	/* SawMill/bbv-types.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_8157;

						BgL_tmpz00_8157 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5296));
						BgL_auxz00_8156 = BGL_OBJECT_WIDENING(BgL_tmpz00_8157);
					}
					BgL_auxz00_8155 = ((BgL_blockvz00_bglt) BgL_auxz00_8156);
				}
				return
					(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_8155))->BgL_versionsz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_proc3159z00zzsaw_bbvzd2typeszd2, BFALSE,
				BGl_string3160z00zzsaw_bbvzd2typeszd2);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_proc3161z00zzsaw_bbvzd2typeszd2, BFALSE,
				BGl_string3162z00zzsaw_bbvzd2typeszd2);
		}

	}



/* &bbv-equal?1758 */
	obj_t BGl_z62bbvzd2equalzf31758z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5299,
		obj_t BgL_xz00_5300, obj_t BgL_yz00_5301)
	{
		{	/* SawMill/bbv-types.scm 740 */
			return BBOOL((BgL_xz00_5300 == BgL_yz00_5301));
		}

	}



/* &bbv-hash1706 */
	obj_t BGl_z62bbvzd2hash1706zb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5302,
		obj_t BgL_oz00_5303)
	{
		{	/* SawMill/bbv-types.scm 537 */
			return BINT(((long) 2345));
		}

	}



/* bbv-hash */
	BGL_EXPORTED_DEF obj_t BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(obj_t
		BgL_oz00_139)
	{
		{	/* SawMill/bbv-types.scm 537 */
			if (BGL_OBJECTP(BgL_oz00_139))
				{	/* SawMill/bbv-types.scm 537 */
					obj_t BgL_method1707z00_2863;

					{	/* SawMill/bbv-types.scm 537 */
						obj_t BgL_res2968z00_4457;

						{	/* SawMill/bbv-types.scm 537 */
							long BgL_objzd2classzd2numz00_4422;

							{	/* SawMill/bbv-types.scm 537 */
								long BgL_res2958z00_4425;

								BgL_res2958z00_4425 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_139));
								BgL_objzd2classzd2numz00_4422 = BgL_res2958z00_4425;
							}
							{	/* SawMill/bbv-types.scm 537 */
								obj_t BgL_arg1813z00_4423;

								BgL_arg1813z00_4423 =
									PROCEDURE_REF(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
									(int) (((long) 1)));
								{	/* SawMill/bbv-types.scm 537 */
									int BgL_offsetz00_4427;

									BgL_offsetz00_4427 = (int) (BgL_objzd2classzd2numz00_4422);
									{	/* SawMill/bbv-types.scm 537 */
										long BgL_offsetz00_4428;

										BgL_offsetz00_4428 =
											((long) (BgL_offsetz00_4427) - OBJECT_TYPE);
										{	/* SawMill/bbv-types.scm 537 */
											long BgL_modz00_4429;

											BgL_modz00_4429 =
												(BgL_offsetz00_4428 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* SawMill/bbv-types.scm 537 */
												long BgL_restz00_4431;

												BgL_restz00_4431 =
													(BgL_offsetz00_4428 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* SawMill/bbv-types.scm 537 */

													{	/* SawMill/bbv-types.scm 537 */
														obj_t BgL_bucketz00_4433;

														BgL_bucketz00_4433 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_4423), BgL_modz00_4429);
														BgL_res2968z00_4457 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4433), BgL_restz00_4431);
						}}}}}}}}
						BgL_method1707z00_2863 = BgL_res2968z00_4457;
					}
					return
						PROCEDURE_ENTRY(BgL_method1707z00_2863) (BgL_method1707z00_2863,
						BgL_oz00_139, BEOA);
				}
			else
				{	/* SawMill/bbv-types.scm 537 */
					obj_t BgL_fun2266z00_2864;

					BgL_fun2266z00_2864 =
						PROCEDURE_REF(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
						(int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun2266z00_2864) (BgL_fun2266z00_2864,
						BgL_oz00_139, BEOA);
				}
		}

	}



/* &bbv-hash */
	obj_t BGl_z62bbvzd2hashzb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5304,
		obj_t BgL_oz00_5305)
	{
		{	/* SawMill/bbv-types.scm 537 */
			return BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(BgL_oz00_5305);
		}

	}



/* bbv-equal? */
	BGL_EXPORTED_DEF bool_t BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(obj_t
		BgL_xz00_165, obj_t BgL_yz00_166)
	{
		{	/* SawMill/bbv-types.scm 740 */
			if (BGL_OBJECTP(BgL_xz00_165))
				{	/* SawMill/bbv-types.scm 740 */
					obj_t BgL_method1760z00_2866;

					{	/* SawMill/bbv-types.scm 740 */
						obj_t BgL_res2981z00_4496;

						{	/* SawMill/bbv-types.scm 740 */
							long BgL_objzd2classzd2numz00_4461;

							{	/* SawMill/bbv-types.scm 740 */
								long BgL_res2971z00_4464;

								BgL_res2971z00_4464 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_xz00_165));
								BgL_objzd2classzd2numz00_4461 = BgL_res2971z00_4464;
							}
							{	/* SawMill/bbv-types.scm 740 */
								obj_t BgL_arg1813z00_4462;

								BgL_arg1813z00_4462 =
									PROCEDURE_REF(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
									(int) (((long) 1)));
								{	/* SawMill/bbv-types.scm 740 */
									int BgL_offsetz00_4466;

									BgL_offsetz00_4466 = (int) (BgL_objzd2classzd2numz00_4461);
									{	/* SawMill/bbv-types.scm 740 */
										long BgL_offsetz00_4467;

										BgL_offsetz00_4467 =
											((long) (BgL_offsetz00_4466) - OBJECT_TYPE);
										{	/* SawMill/bbv-types.scm 740 */
											long BgL_modz00_4468;

											BgL_modz00_4468 =
												(BgL_offsetz00_4467 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* SawMill/bbv-types.scm 740 */
												long BgL_restz00_4470;

												BgL_restz00_4470 =
													(BgL_offsetz00_4467 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* SawMill/bbv-types.scm 740 */

													{	/* SawMill/bbv-types.scm 740 */
														obj_t BgL_bucketz00_4472;

														BgL_bucketz00_4472 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_4462), BgL_modz00_4468);
														BgL_res2981z00_4496 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4472), BgL_restz00_4470);
						}}}}}}}}
						BgL_method1760z00_2866 = BgL_res2981z00_4496;
					}
					return
						CBOOL(PROCEDURE_ENTRY(BgL_method1760z00_2866)
						(BgL_method1760z00_2866, BgL_xz00_165, BgL_yz00_166, BEOA));
				}
			else
				{	/* SawMill/bbv-types.scm 740 */
					obj_t BgL_fun2268z00_2867;

					BgL_fun2268z00_2867 =
						PROCEDURE_REF(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
						(int) (((long) 0)));
					return
						CBOOL(PROCEDURE_ENTRY(BgL_fun2268z00_2867) (BgL_fun2268z00_2867,
							BgL_xz00_165, BgL_yz00_166, BEOA));
				}
		}

	}



/* &bbv-equal? */
	obj_t BGl_z62bbvzd2equalzf3z43zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5306,
		obj_t BgL_xz00_5307, obj_t BgL_yz00_5308)
	{
		{	/* SawMill/bbv-types.scm 740 */
			return
				BBOOL(BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(BgL_xz00_5307,
					BgL_yz00_5308));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2,
				BGl_proc3163z00zzsaw_bbvzd2typeszd2,
				BGl_string3164z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_blockSz00zzsaw_bbvzd2typeszd2,
				BGl_proc3165z00zzsaw_bbvzd2typeszd2,
				BGl_string3164z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2, BGl_typez00zztype_typez00,
				BGl_proc3166z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2, BGl_atomz00zzast_nodez00,
				BGl_proc3168z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_blockSz00zzsaw_bbvzd2typeszd2, BGl_proc3169z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2,
				BGl_proc3170z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_regz00zzsaw_defsz00, BGl_proc3171z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_funz00zzsaw_defsz00, BGl_proc3172z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc3173z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc3174z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc3175z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc3176z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc3177z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc3178z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc3179z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc3180z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc3181z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_instanceofz00zzsaw_defsz00, BGl_proc3182z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc3183z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc3184z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc3185z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc3186z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc3187z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_lightfuncallz00zzsaw_defsz00,
				BGl_proc3188z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_pragmaz00zzsaw_defsz00, BGl_proc3189z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc3190z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc3191z00zzsaw_bbvzd2typeszd2,
				BGl_string3167z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_atomz00zzast_nodez00, BGl_proc3192z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_blockSz00zzsaw_bbvzd2typeszd2, BGl_proc3194z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2,
				BGl_proc3195z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_regz00zzsaw_defsz00, BGl_proc3196z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_funz00zzsaw_defsz00, BGl_proc3197z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_selectz00zzsaw_defsz00, BGl_proc3198z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc3199z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc3200z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc3201z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc3202z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc3203z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc3204z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc3205z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc3206z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc3207z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_instanceofz00zzsaw_defsz00, BGl_proc3208z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc3209z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc3210z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc3211z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc3212z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc3213z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_lightfuncallz00zzsaw_defsz00,
				BGl_proc3214z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_pragmaz00zzsaw_defsz00, BGl_proc3215z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc3216z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc3217z00zzsaw_bbvzd2typeszd2,
				BGl_string3193z00zzsaw_bbvzd2typeszd2);
		}

	}



/* &bbv-equal?-rtl_cast_1810 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_cast_1810z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5362, obj_t BgL_xz00_5363, obj_t BgL_yz00_5364)
	{
		{	/* SawMill/bbv-types.scm 927 */
			{	/* SawMill/bbv-types.scm 928 */
				bool_t BgL_tmpz00_8301;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5364,
						BGl_rtl_cast_nullz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 929 */
						BgL_typez00_bglt BgL_arg2707z00_5732;
						BgL_typez00_bglt BgL_arg2708z00_5733;

						BgL_arg2707z00_5732 =
							(((BgL_rtl_cast_nullz00_bglt) COBJECT(
									((BgL_rtl_cast_nullz00_bglt) BgL_xz00_5363)))->BgL_typez00);
						BgL_arg2708z00_5733 =
							(((BgL_rtl_cast_nullz00_bglt) COBJECT(
									((BgL_rtl_cast_nullz00_bglt) BgL_yz00_5364)))->BgL_typez00);
						BgL_tmpz00_8301 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2707z00_5732), ((obj_t) BgL_arg2708z00_5733));
					}
				else
					{	/* SawMill/bbv-types.scm 928 */
						BgL_tmpz00_8301 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8301);
			}
		}

	}



/* &bbv-equal?-rtl_cast1808 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_cast1808z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5365, obj_t BgL_xz00_5366, obj_t BgL_yz00_5367)
	{
		{	/* SawMill/bbv-types.scm 919 */
			{	/* SawMill/bbv-types.scm 920 */
				bool_t BgL_tmpz00_8312;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5367,
						BGl_rtl_castz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 921 */
						bool_t BgL_test3506z00_8315;

						{	/* SawMill/bbv-types.scm 921 */
							BgL_typez00_bglt BgL_arg2704z00_5735;
							BgL_typez00_bglt BgL_arg2705z00_5736;

							BgL_arg2704z00_5735 =
								(((BgL_rtl_castz00_bglt) COBJECT(
										((BgL_rtl_castz00_bglt) BgL_xz00_5366)))->BgL_totypez00);
							BgL_arg2705z00_5736 =
								(((BgL_rtl_castz00_bglt) COBJECT(
										((BgL_rtl_castz00_bglt) BgL_yz00_5367)))->BgL_totypez00);
							BgL_test3506z00_8315 =
								BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2704z00_5735), ((obj_t) BgL_arg2705z00_5736));
						}
						if (BgL_test3506z00_8315)
							{	/* SawMill/bbv-types.scm 922 */
								BgL_typez00_bglt BgL_arg2702z00_5737;
								BgL_typez00_bglt BgL_arg2703z00_5738;

								BgL_arg2702z00_5737 =
									(((BgL_rtl_castz00_bglt) COBJECT(
											((BgL_rtl_castz00_bglt) BgL_xz00_5366)))->
									BgL_fromtypez00);
								BgL_arg2703z00_5738 =
									(((BgL_rtl_castz00_bglt) COBJECT(((BgL_rtl_castz00_bglt)
												BgL_yz00_5367)))->BgL_fromtypez00);
								BgL_tmpz00_8312 =
									BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
										BgL_arg2702z00_5737), ((obj_t) BgL_arg2703z00_5738));
							}
						else
							{	/* SawMill/bbv-types.scm 921 */
								BgL_tmpz00_8312 = ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-types.scm 920 */
						BgL_tmpz00_8312 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8312);
			}
		}

	}



/* &bbv-equal?-rtl_pragm1806 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_pragm1806z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5368, obj_t BgL_xz00_5369, obj_t BgL_yz00_5370)
	{
		{	/* SawMill/bbv-types.scm 912 */
			{	/* SawMill/bbv-types.scm 913 */
				bool_t BgL_tmpz00_8331;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5370,
						BGl_rtl_pragmaz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 914 */
						obj_t BgL_arg2698z00_5740;
						obj_t BgL_arg2699z00_5741;

						BgL_arg2698z00_5740 =
							(((BgL_rtl_pragmaz00_bglt) COBJECT(
									((BgL_rtl_pragmaz00_bglt) BgL_xz00_5369)))->BgL_formatz00);
						BgL_arg2699z00_5741 =
							(((BgL_rtl_pragmaz00_bglt) COBJECT(
									((BgL_rtl_pragmaz00_bglt) BgL_yz00_5370)))->BgL_formatz00);
						{	/* SawMill/bbv-types.scm 914 */
							bool_t BgL_res3086z00_5742;

							{	/* SawMill/bbv-types.scm 914 */
								long BgL_l1z00_5743;

								BgL_l1z00_5743 = STRING_LENGTH(BgL_arg2698z00_5740);
								if ((BgL_l1z00_5743 == STRING_LENGTH(BgL_arg2699z00_5741)))
									{	/* SawMill/bbv-types.scm 914 */
										int BgL_arg1267z00_5744;

										{	/* SawMill/bbv-types.scm 914 */
											char *BgL_auxz00_8344;
											char *BgL_tmpz00_8342;

											BgL_auxz00_8344 = BSTRING_TO_STRING(BgL_arg2699z00_5741);
											BgL_tmpz00_8342 = BSTRING_TO_STRING(BgL_arg2698z00_5740);
											BgL_arg1267z00_5744 =
												memcmp(BgL_tmpz00_8342, BgL_auxz00_8344,
												BgL_l1z00_5743);
										}
										BgL_res3086z00_5742 =
											((long) (BgL_arg1267z00_5744) == ((long) 0));
									}
								else
									{	/* SawMill/bbv-types.scm 914 */
										BgL_res3086z00_5742 = ((bool_t) 0);
									}
							}
							BgL_tmpz00_8331 = BgL_res3086z00_5742;
						}
					}
				else
					{	/* SawMill/bbv-types.scm 913 */
						BgL_tmpz00_8331 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8331);
			}
		}

	}



/* &bbv-equal?-rtl_light1804 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_light1804z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5371, obj_t BgL_xz00_5372, obj_t BgL_yz00_5373)
	{
		{	/* SawMill/bbv-types.scm 906 */
			return
				BGl_errorz00zz__errorz00(BGl_string3193z00zzsaw_bbvzd2typeszd2,
				BGl_string3218z00zzsaw_bbvzd2typeszd2,
				((obj_t) ((BgL_rtl_lightfuncallz00_bglt) BgL_xz00_5372)));
		}

	}



/* &bbv-equal?-rtl_call1802 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_call1802z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5374, obj_t BgL_xz00_5375, obj_t BgL_yz00_5376)
	{
		{	/* SawMill/bbv-types.scm 899 */
			{	/* SawMill/bbv-types.scm 900 */
				bool_t BgL_tmpz00_8353;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5376,
						BGl_rtl_callz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 901 */
						BgL_globalz00_bglt BgL_arg2694z00_5747;
						BgL_globalz00_bglt BgL_arg2695z00_5748;

						BgL_arg2694z00_5747 =
							(((BgL_rtl_callz00_bglt) COBJECT(
									((BgL_rtl_callz00_bglt) BgL_xz00_5375)))->BgL_varz00);
						BgL_arg2695z00_5748 =
							(((BgL_rtl_callz00_bglt) COBJECT(
									((BgL_rtl_callz00_bglt) BgL_yz00_5376)))->BgL_varz00);
						BgL_tmpz00_8353 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2694z00_5747), ((obj_t) BgL_arg2695z00_5748));
					}
				else
					{	/* SawMill/bbv-types.scm 900 */
						BgL_tmpz00_8353 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8353);
			}
		}

	}



/* &bbv-equal?-rtl_new1800 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_new1800z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5377, obj_t BgL_xz00_5378, obj_t BgL_yz00_5379)
	{
		{	/* SawMill/bbv-types.scm 893 */
			return
				BGl_errorz00zz__errorz00(BGl_string3193z00zzsaw_bbvzd2typeszd2,
				BGl_string3218z00zzsaw_bbvzd2typeszd2,
				((obj_t) ((BgL_rtl_newz00_bglt) BgL_xz00_5378)));
		}

	}



/* &bbv-equal?-rtl_vset1798 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_vset1798z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5380, obj_t BgL_xz00_5381, obj_t BgL_yz00_5382)
	{
		{	/* SawMill/bbv-types.scm 885 */
			{	/* SawMill/bbv-types.scm 886 */
				bool_t BgL_tmpz00_8367;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5382,
						BGl_rtl_vsetz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 887 */
						bool_t BgL_test3511z00_8370;

						{	/* SawMill/bbv-types.scm 887 */
							BgL_typez00_bglt BgL_arg2691z00_5751;
							BgL_typez00_bglt BgL_arg2692z00_5752;

							BgL_arg2691z00_5751 =
								(((BgL_rtl_vsetz00_bglt) COBJECT(
										((BgL_rtl_vsetz00_bglt) BgL_xz00_5381)))->BgL_typez00);
							BgL_arg2692z00_5752 =
								(((BgL_rtl_vsetz00_bglt) COBJECT(
										((BgL_rtl_vsetz00_bglt) BgL_yz00_5382)))->BgL_typez00);
							BgL_test3511z00_8370 =
								BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2691z00_5751), ((obj_t) BgL_arg2692z00_5752));
						}
						if (BgL_test3511z00_8370)
							{	/* SawMill/bbv-types.scm 888 */
								BgL_typez00_bglt BgL_arg2689z00_5753;
								BgL_typez00_bglt BgL_arg2690z00_5754;

								BgL_arg2689z00_5753 =
									(((BgL_rtl_vsetz00_bglt) COBJECT(
											((BgL_rtl_vsetz00_bglt) BgL_xz00_5381)))->BgL_vtypez00);
								BgL_arg2690z00_5754 =
									(((BgL_rtl_vsetz00_bglt) COBJECT(
											((BgL_rtl_vsetz00_bglt) BgL_yz00_5382)))->BgL_vtypez00);
								BgL_tmpz00_8367 =
									BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
									((obj_t) BgL_arg2689z00_5753), ((obj_t) BgL_arg2690z00_5754));
							}
						else
							{	/* SawMill/bbv-types.scm 887 */
								BgL_tmpz00_8367 = ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-types.scm 886 */
						BgL_tmpz00_8367 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8367);
			}
		}

	}



/* &bbv-equal?-rtl_setfi1796 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_setfi1796z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5383, obj_t BgL_xz00_5384, obj_t BgL_yz00_5385)
	{
		{	/* SawMill/bbv-types.scm 876 */
			{	/* SawMill/bbv-types.scm 877 */
				bool_t BgL_tmpz00_8386;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5385,
						BGl_rtl_setfieldz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 878 */
						bool_t BgL_test3513z00_8389;

						{	/* SawMill/bbv-types.scm 878 */
							obj_t BgL_arg2686z00_5756;
							obj_t BgL_arg2687z00_5757;

							BgL_arg2686z00_5756 =
								(((BgL_rtl_setfieldz00_bglt) COBJECT(
										((BgL_rtl_setfieldz00_bglt) BgL_xz00_5384)))->BgL_namez00);
							BgL_arg2687z00_5757 =
								(((BgL_rtl_setfieldz00_bglt) COBJECT(
										((BgL_rtl_setfieldz00_bglt) BgL_yz00_5385)))->BgL_namez00);
							{	/* SawMill/bbv-types.scm 878 */
								bool_t BgL_res3081z00_5758;

								{	/* SawMill/bbv-types.scm 878 */
									long BgL_l1z00_5759;

									BgL_l1z00_5759 = STRING_LENGTH(BgL_arg2686z00_5756);
									if ((BgL_l1z00_5759 == STRING_LENGTH(BgL_arg2687z00_5757)))
										{	/* SawMill/bbv-types.scm 878 */
											int BgL_arg1267z00_5760;

											{	/* SawMill/bbv-types.scm 878 */
												char *BgL_auxz00_8400;
												char *BgL_tmpz00_8398;

												BgL_auxz00_8400 =
													BSTRING_TO_STRING(BgL_arg2687z00_5757);
												BgL_tmpz00_8398 =
													BSTRING_TO_STRING(BgL_arg2686z00_5756);
												BgL_arg1267z00_5760 =
													memcmp(BgL_tmpz00_8398, BgL_auxz00_8400,
													BgL_l1z00_5759);
											}
											BgL_res3081z00_5758 =
												((long) (BgL_arg1267z00_5760) == ((long) 0));
										}
									else
										{	/* SawMill/bbv-types.scm 878 */
											BgL_res3081z00_5758 = ((bool_t) 0);
										}
								}
								BgL_test3513z00_8389 = BgL_res3081z00_5758;
							}
						}
						if (BgL_test3513z00_8389)
							{	/* SawMill/bbv-types.scm 879 */
								bool_t BgL_test3515z00_8405;

								{	/* SawMill/bbv-types.scm 879 */
									BgL_typez00_bglt BgL_arg2683z00_5761;
									BgL_typez00_bglt BgL_arg2684z00_5762;

									BgL_arg2683z00_5761 =
										(((BgL_rtl_setfieldz00_bglt) COBJECT(
												((BgL_rtl_setfieldz00_bglt) BgL_xz00_5384)))->
										BgL_objtypez00);
									BgL_arg2684z00_5762 =
										(((BgL_rtl_setfieldz00_bglt)
											COBJECT(((BgL_rtl_setfieldz00_bglt) BgL_yz00_5385)))->
										BgL_objtypez00);
									BgL_test3515z00_8405 =
										BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
											BgL_arg2683z00_5761), ((obj_t) BgL_arg2684z00_5762));
								}
								if (BgL_test3515z00_8405)
									{	/* SawMill/bbv-types.scm 880 */
										BgL_typez00_bglt BgL_arg2681z00_5763;
										BgL_typez00_bglt BgL_arg2682z00_5764;

										BgL_arg2681z00_5763 =
											(((BgL_rtl_setfieldz00_bglt) COBJECT(
													((BgL_rtl_setfieldz00_bglt) BgL_xz00_5384)))->
											BgL_typez00);
										BgL_arg2682z00_5764 =
											(((BgL_rtl_setfieldz00_bglt)
												COBJECT(((BgL_rtl_setfieldz00_bglt) BgL_yz00_5385)))->
											BgL_typez00);
										BgL_tmpz00_8386 =
											BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
												BgL_arg2681z00_5763), ((obj_t) BgL_arg2682z00_5764));
									}
								else
									{	/* SawMill/bbv-types.scm 879 */
										BgL_tmpz00_8386 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-types.scm 878 */
								BgL_tmpz00_8386 = ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-types.scm 877 */
						BgL_tmpz00_8386 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8386);
			}
		}

	}



/* &bbv-equal?-rtl_store1794 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_store1794z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5386, obj_t BgL_xz00_5387, obj_t BgL_yz00_5388)
	{
		{	/* SawMill/bbv-types.scm 869 */
			{	/* SawMill/bbv-types.scm 870 */
				bool_t BgL_tmpz00_8421;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5388,
						BGl_rtl_storegz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 871 */
						BgL_globalz00_bglt BgL_arg2678z00_5766;
						BgL_globalz00_bglt BgL_arg2679z00_5767;

						BgL_arg2678z00_5766 =
							(((BgL_rtl_storegz00_bglt) COBJECT(
									((BgL_rtl_storegz00_bglt) BgL_xz00_5387)))->BgL_varz00);
						BgL_arg2679z00_5767 =
							(((BgL_rtl_storegz00_bglt) COBJECT(
									((BgL_rtl_storegz00_bglt) BgL_yz00_5388)))->BgL_varz00);
						BgL_tmpz00_8421 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2678z00_5766), ((obj_t) BgL_arg2679z00_5767));
					}
				else
					{	/* SawMill/bbv-types.scm 870 */
						BgL_tmpz00_8421 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8421);
			}
		}

	}



/* &bbv-equal?-rtl_insta1792 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_insta1792z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5389, obj_t BgL_xz00_5390, obj_t BgL_yz00_5391)
	{
		{	/* SawMill/bbv-types.scm 862 */
			{	/* SawMill/bbv-types.scm 863 */
				bool_t BgL_tmpz00_8432;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5391,
						BGl_rtl_instanceofz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 864 */
						BgL_typez00_bglt BgL_arg2675z00_5769;
						BgL_typez00_bglt BgL_arg2676z00_5770;

						BgL_arg2675z00_5769 =
							(((BgL_rtl_instanceofz00_bglt) COBJECT(
									((BgL_rtl_instanceofz00_bglt) BgL_xz00_5390)))->BgL_typez00);
						BgL_arg2676z00_5770 =
							(((BgL_rtl_instanceofz00_bglt) COBJECT(
									((BgL_rtl_instanceofz00_bglt) BgL_yz00_5391)))->BgL_typez00);
						BgL_tmpz00_8432 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2675z00_5769), ((obj_t) BgL_arg2676z00_5770));
					}
				else
					{	/* SawMill/bbv-types.scm 863 */
						BgL_tmpz00_8432 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8432);
			}
		}

	}



/* &bbv-equal?-rtl_vleng1790 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_vleng1790z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5392, obj_t BgL_xz00_5393, obj_t BgL_yz00_5394)
	{
		{	/* SawMill/bbv-types.scm 854 */
			{	/* SawMill/bbv-types.scm 855 */
				bool_t BgL_tmpz00_8443;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5394,
						BGl_rtl_vlengthz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 855 */
						{	/* SawMill/bbv-types.scm 856 */
							BgL_typez00_bglt BgL_arg2669z00_5772;
							BgL_typez00_bglt BgL_arg2670z00_5773;

							BgL_arg2669z00_5772 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_xz00_5393)))->BgL_typez00);
							BgL_arg2670z00_5773 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_yz00_5394)))->BgL_typez00);
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2669z00_5772), ((obj_t) BgL_arg2670z00_5773));
						}
						{	/* SawMill/bbv-types.scm 857 */
							BgL_typez00_bglt BgL_arg2671z00_5774;
							BgL_typez00_bglt BgL_arg2673z00_5775;

							BgL_arg2671z00_5774 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_xz00_5393)))->BgL_vtypez00);
							BgL_arg2673z00_5775 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_yz00_5394)))->BgL_vtypez00);
							BgL_tmpz00_8443 =
								BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2671z00_5774), ((obj_t) BgL_arg2673z00_5775));
						}
					}
				else
					{	/* SawMill/bbv-types.scm 855 */
						BgL_tmpz00_8443 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8443);
			}
		}

	}



/* &bbv-equal?-rtl_vref1788 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_vref1788z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5395, obj_t BgL_xz00_5396, obj_t BgL_yz00_5397)
	{
		{	/* SawMill/bbv-types.scm 846 */
			{	/* SawMill/bbv-types.scm 847 */
				bool_t BgL_tmpz00_8461;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5397,
						BGl_rtl_vrefz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 847 */
						{	/* SawMill/bbv-types.scm 848 */
							BgL_typez00_bglt BgL_arg2664z00_5777;
							BgL_typez00_bglt BgL_arg2665z00_5778;

							BgL_arg2664z00_5777 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_xz00_5396)))->BgL_typez00);
							BgL_arg2665z00_5778 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_yz00_5397)))->BgL_typez00);
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2664z00_5777), ((obj_t) BgL_arg2665z00_5778));
						}
						{	/* SawMill/bbv-types.scm 849 */
							BgL_typez00_bglt BgL_arg2666z00_5779;
							BgL_typez00_bglt BgL_arg2667z00_5780;

							BgL_arg2666z00_5779 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_xz00_5396)))->BgL_vtypez00);
							BgL_arg2667z00_5780 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_yz00_5397)))->BgL_vtypez00);
							BgL_tmpz00_8461 =
								BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2666z00_5779), ((obj_t) BgL_arg2667z00_5780));
						}
					}
				else
					{	/* SawMill/bbv-types.scm 847 */
						BgL_tmpz00_8461 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8461);
			}
		}

	}



/* &bbv-equal?-rtl_vallo1786 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_vallo1786z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5398, obj_t BgL_xz00_5399, obj_t BgL_yz00_5400)
	{
		{	/* SawMill/bbv-types.scm 838 */
			{	/* SawMill/bbv-types.scm 839 */
				bool_t BgL_tmpz00_8479;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5400,
						BGl_rtl_vallocz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 839 */
						{	/* SawMill/bbv-types.scm 840 */
							BgL_typez00_bglt BgL_arg2658z00_5782;
							BgL_typez00_bglt BgL_arg2659z00_5783;

							BgL_arg2658z00_5782 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_xz00_5399)))->BgL_typez00);
							BgL_arg2659z00_5783 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_yz00_5400)))->BgL_typez00);
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2658z00_5782), ((obj_t) BgL_arg2659z00_5783));
						}
						{	/* SawMill/bbv-types.scm 841 */
							BgL_typez00_bglt BgL_arg2661z00_5784;
							BgL_typez00_bglt BgL_arg2662z00_5785;

							BgL_arg2661z00_5784 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_xz00_5399)))->BgL_vtypez00);
							BgL_arg2662z00_5785 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_yz00_5400)))->BgL_vtypez00);
							BgL_tmpz00_8479 =
								BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2661z00_5784), ((obj_t) BgL_arg2662z00_5785));
						}
					}
				else
					{	/* SawMill/bbv-types.scm 839 */
						BgL_tmpz00_8479 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8479);
			}
		}

	}



/* &bbv-equal?-rtl_getfi1784 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_getfi1784z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5401, obj_t BgL_xz00_5402, obj_t BgL_yz00_5403)
	{
		{	/* SawMill/bbv-types.scm 829 */
			{	/* SawMill/bbv-types.scm 830 */
				bool_t BgL_tmpz00_8497;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5403,
						BGl_rtl_getfieldz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 831 */
						bool_t BgL_test3522z00_8500;

						{	/* SawMill/bbv-types.scm 831 */
							obj_t BgL_arg2655z00_5787;
							obj_t BgL_arg2656z00_5788;

							BgL_arg2655z00_5787 =
								(((BgL_rtl_getfieldz00_bglt) COBJECT(
										((BgL_rtl_getfieldz00_bglt) BgL_xz00_5402)))->BgL_namez00);
							BgL_arg2656z00_5788 =
								(((BgL_rtl_getfieldz00_bglt) COBJECT(
										((BgL_rtl_getfieldz00_bglt) BgL_yz00_5403)))->BgL_namez00);
							{	/* SawMill/bbv-types.scm 831 */
								bool_t BgL_res3076z00_5789;

								{	/* SawMill/bbv-types.scm 831 */
									long BgL_l1z00_5790;

									BgL_l1z00_5790 = STRING_LENGTH(BgL_arg2655z00_5787);
									if ((BgL_l1z00_5790 == STRING_LENGTH(BgL_arg2656z00_5788)))
										{	/* SawMill/bbv-types.scm 831 */
											int BgL_arg1267z00_5791;

											{	/* SawMill/bbv-types.scm 831 */
												char *BgL_auxz00_8511;
												char *BgL_tmpz00_8509;

												BgL_auxz00_8511 =
													BSTRING_TO_STRING(BgL_arg2656z00_5788);
												BgL_tmpz00_8509 =
													BSTRING_TO_STRING(BgL_arg2655z00_5787);
												BgL_arg1267z00_5791 =
													memcmp(BgL_tmpz00_8509, BgL_auxz00_8511,
													BgL_l1z00_5790);
											}
											BgL_res3076z00_5789 =
												((long) (BgL_arg1267z00_5791) == ((long) 0));
										}
									else
										{	/* SawMill/bbv-types.scm 831 */
											BgL_res3076z00_5789 = ((bool_t) 0);
										}
								}
								BgL_test3522z00_8500 = BgL_res3076z00_5789;
							}
						}
						if (BgL_test3522z00_8500)
							{	/* SawMill/bbv-types.scm 832 */
								bool_t BgL_test3524z00_8516;

								{	/* SawMill/bbv-types.scm 832 */
									BgL_typez00_bglt BgL_arg2653z00_5792;
									BgL_typez00_bglt BgL_arg2654z00_5793;

									BgL_arg2653z00_5792 =
										(((BgL_rtl_getfieldz00_bglt) COBJECT(
												((BgL_rtl_getfieldz00_bglt) BgL_xz00_5402)))->
										BgL_objtypez00);
									BgL_arg2654z00_5793 =
										(((BgL_rtl_getfieldz00_bglt)
											COBJECT(((BgL_rtl_getfieldz00_bglt) BgL_yz00_5403)))->
										BgL_objtypez00);
									BgL_test3524z00_8516 =
										BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
											BgL_arg2653z00_5792), ((obj_t) BgL_arg2654z00_5793));
								}
								if (BgL_test3524z00_8516)
									{	/* SawMill/bbv-types.scm 833 */
										BgL_typez00_bglt BgL_arg2650z00_5794;
										BgL_typez00_bglt BgL_arg2651z00_5795;

										BgL_arg2650z00_5794 =
											(((BgL_rtl_getfieldz00_bglt) COBJECT(
													((BgL_rtl_getfieldz00_bglt) BgL_xz00_5402)))->
											BgL_typez00);
										BgL_arg2651z00_5795 =
											(((BgL_rtl_getfieldz00_bglt)
												COBJECT(((BgL_rtl_getfieldz00_bglt) BgL_yz00_5403)))->
											BgL_typez00);
										BgL_tmpz00_8497 =
											BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
												BgL_arg2650z00_5794), ((obj_t) BgL_arg2651z00_5795));
									}
								else
									{	/* SawMill/bbv-types.scm 832 */
										BgL_tmpz00_8497 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-types.scm 831 */
								BgL_tmpz00_8497 = ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-types.scm 830 */
						BgL_tmpz00_8497 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8497);
			}
		}

	}



/* &bbv-equal?-rtl_globa1782 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_globa1782z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5404, obj_t BgL_xz00_5405, obj_t BgL_yz00_5406)
	{
		{	/* SawMill/bbv-types.scm 822 */
			{	/* SawMill/bbv-types.scm 823 */
				bool_t BgL_tmpz00_8532;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5406,
						BGl_rtl_globalrefz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 824 */
						BgL_globalz00_bglt BgL_arg2646z00_5797;
						BgL_globalz00_bglt BgL_arg2648z00_5798;

						BgL_arg2646z00_5797 =
							(((BgL_rtl_globalrefz00_bglt) COBJECT(
									((BgL_rtl_globalrefz00_bglt) BgL_xz00_5405)))->BgL_varz00);
						BgL_arg2648z00_5798 =
							(((BgL_rtl_globalrefz00_bglt) COBJECT(
									((BgL_rtl_globalrefz00_bglt) BgL_yz00_5406)))->BgL_varz00);
						BgL_tmpz00_8532 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2646z00_5797), ((obj_t) BgL_arg2648z00_5798));
					}
				else
					{	/* SawMill/bbv-types.scm 823 */
						BgL_tmpz00_8532 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8532);
			}
		}

	}



/* &bbv-equal?-rtl_loadf1780 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_loadf1780z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5407, obj_t BgL_xz00_5408, obj_t BgL_yz00_5409)
	{
		{	/* SawMill/bbv-types.scm 815 */
			{	/* SawMill/bbv-types.scm 816 */
				bool_t BgL_tmpz00_8543;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5409,
						BGl_rtl_loadfunz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 817 */
						BgL_globalz00_bglt BgL_arg2643z00_5800;
						BgL_globalz00_bglt BgL_arg2644z00_5801;

						BgL_arg2643z00_5800 =
							(((BgL_rtl_loadfunz00_bglt) COBJECT(
									((BgL_rtl_loadfunz00_bglt) BgL_xz00_5408)))->BgL_varz00);
						BgL_arg2644z00_5801 =
							(((BgL_rtl_loadfunz00_bglt) COBJECT(
									((BgL_rtl_loadfunz00_bglt) BgL_yz00_5409)))->BgL_varz00);
						BgL_tmpz00_8543 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2643z00_5800), ((obj_t) BgL_arg2644z00_5801));
					}
				else
					{	/* SawMill/bbv-types.scm 816 */
						BgL_tmpz00_8543 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8543);
			}
		}

	}



/* &bbv-equal?-rtl_loadg1778 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_loadg1778z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5410, obj_t BgL_xz00_5411, obj_t BgL_yz00_5412)
	{
		{	/* SawMill/bbv-types.scm 808 */
			{	/* SawMill/bbv-types.scm 809 */
				bool_t BgL_tmpz00_8554;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5412,
						BGl_rtl_loadgz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 810 */
						BgL_globalz00_bglt BgL_arg2640z00_5803;
						BgL_globalz00_bglt BgL_arg2641z00_5804;

						BgL_arg2640z00_5803 =
							(((BgL_rtl_loadgz00_bglt) COBJECT(
									((BgL_rtl_loadgz00_bglt) BgL_xz00_5411)))->BgL_varz00);
						BgL_arg2641z00_5804 =
							(((BgL_rtl_loadgz00_bglt) COBJECT(
									((BgL_rtl_loadgz00_bglt) BgL_yz00_5412)))->BgL_varz00);
						BgL_tmpz00_8554 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2640z00_5803), ((obj_t) BgL_arg2641z00_5804));
					}
				else
					{	/* SawMill/bbv-types.scm 809 */
						BgL_tmpz00_8554 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8554);
			}
		}

	}



/* &bbv-equal?-rtl_loadi1776 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_loadi1776z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5413, obj_t BgL_xz00_5414, obj_t BgL_yz00_5415)
	{
		{	/* SawMill/bbv-types.scm 801 */
			{	/* SawMill/bbv-types.scm 802 */
				bool_t BgL_tmpz00_8565;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5415,
						BGl_rtl_loadiz00zzsaw_defsz00))
					{	/* SawMill/bbv-types.scm 803 */
						BgL_atomz00_bglt BgL_arg2637z00_5806;
						BgL_atomz00_bglt BgL_arg2638z00_5807;

						BgL_arg2637z00_5806 =
							(((BgL_rtl_loadiz00_bglt) COBJECT(
									((BgL_rtl_loadiz00_bglt) BgL_xz00_5414)))->BgL_constantz00);
						BgL_arg2638z00_5807 =
							(((BgL_rtl_loadiz00_bglt) COBJECT(
									((BgL_rtl_loadiz00_bglt) BgL_yz00_5415)))->BgL_constantz00);
						BgL_tmpz00_8565 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2637z00_5806), ((obj_t) BgL_arg2638z00_5807));
					}
				else
					{	/* SawMill/bbv-types.scm 802 */
						BgL_tmpz00_8565 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8565);
			}
		}

	}



/* &bbv-equal?-rtl_switc1774 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_switc1774z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5416, obj_t BgL_xz00_5417, obj_t BgL_yz00_5418)
	{
		{	/* SawMill/bbv-types.scm 793 */
			if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5418,
					BGl_rtl_switchz00zzsaw_defsz00))
				{	/* SawMill/bbv-types.scm 794 */
					if (
						(bgl_list_length(
								(((BgL_rtl_switchz00_bglt) COBJECT(
											((BgL_rtl_switchz00_bglt) BgL_xz00_5417)))->
									BgL_labelsz00)) ==
							bgl_list_length((((BgL_rtl_switchz00_bglt)
										COBJECT(((BgL_rtl_switchz00_bglt) BgL_yz00_5418)))->
									BgL_labelsz00))))
						{	/* SawMill/bbv-types.scm 796 */
							obj_t BgL_arg2624z00_5809;
							obj_t BgL_arg2625z00_5810;

							BgL_arg2624z00_5809 =
								(((BgL_rtl_switchz00_bglt) COBJECT(
										((BgL_rtl_switchz00_bglt) BgL_xz00_5417)))->BgL_labelsz00);
							BgL_arg2625z00_5810 =
								(((BgL_rtl_switchz00_bglt) COBJECT(
										((BgL_rtl_switchz00_bglt) BgL_yz00_5418)))->BgL_labelsz00);
							{	/* SawMill/bbv-types.scm 796 */
								obj_t BgL_list2626z00_5811;

								{	/* SawMill/bbv-types.scm 796 */
									obj_t BgL_arg2628z00_5812;

									BgL_arg2628z00_5812 =
										MAKE_YOUNG_PAIR(BgL_arg2625z00_5810, BNIL);
									BgL_list2626z00_5811 =
										MAKE_YOUNG_PAIR(BgL_arg2624z00_5809, BgL_arg2628z00_5812);
								}
								return
									BGl_everyz00zz__r4_pairs_and_lists_6_3z00
									(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
									BgL_list2626z00_5811);
							}
						}
					else
						{	/* SawMill/bbv-types.scm 795 */
							return BFALSE;
						}
				}
			else
				{	/* SawMill/bbv-types.scm 794 */
					return BFALSE;
				}
		}

	}



/* &bbv-equal?-rtl_selec1772 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_selec1772z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5419, obj_t BgL_xz00_5420, obj_t BgL_yz00_5421)
	{
		{	/* SawMill/bbv-types.scm 784 */
			if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5421,
					BGl_rtl_selectz00zzsaw_defsz00))
				{	/* SawMill/bbv-types.scm 785 */
					if (
						(((obj_t)
								(((BgL_rtl_selectz00_bglt) COBJECT(
											((BgL_rtl_selectz00_bglt) BgL_xz00_5420)))->
									BgL_typez00)) ==
							((obj_t) (((BgL_rtl_selectz00_bglt)
										COBJECT(((BgL_rtl_selectz00_bglt) BgL_xz00_5420)))->
									BgL_typez00))))
						{	/* SawMill/bbv-types.scm 786 */
							if (
								(bgl_list_length(
										(((BgL_rtl_selectz00_bglt) COBJECT(
													((BgL_rtl_selectz00_bglt) BgL_xz00_5420)))->
											BgL_patternsz00)) ==
									bgl_list_length((((BgL_rtl_selectz00_bglt)
												COBJECT(((BgL_rtl_selectz00_bglt) BgL_yz00_5421)))->
											BgL_patternsz00))))
								{	/* SawMill/bbv-types.scm 788 */
									obj_t BgL_arg2611z00_5814;
									obj_t BgL_arg2612z00_5815;

									BgL_arg2611z00_5814 =
										(((BgL_rtl_selectz00_bglt) COBJECT(
												((BgL_rtl_selectz00_bglt) BgL_xz00_5420)))->
										BgL_patternsz00);
									BgL_arg2612z00_5815 =
										(((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
													BgL_yz00_5421)))->BgL_patternsz00);
									{	/* SawMill/bbv-types.scm 788 */
										obj_t BgL_list2613z00_5816;

										{	/* SawMill/bbv-types.scm 788 */
											obj_t BgL_arg2614z00_5817;

											BgL_arg2614z00_5817 =
												MAKE_YOUNG_PAIR(BgL_arg2612z00_5815, BNIL);
											BgL_list2613z00_5816 =
												MAKE_YOUNG_PAIR(BgL_arg2611z00_5814,
												BgL_arg2614z00_5817);
										}
										return
											BGl_everyz00zz__r4_pairs_and_lists_6_3z00
											(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
											BgL_list2613z00_5816);
									}
								}
							else
								{	/* SawMill/bbv-types.scm 787 */
									return BFALSE;
								}
						}
					else
						{	/* SawMill/bbv-types.scm 786 */
							return BFALSE;
						}
				}
			else
				{	/* SawMill/bbv-types.scm 785 */
					return BFALSE;
				}
		}

	}



/* &bbv-equal?-rtl_fun1770 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_fun1770z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5422, obj_t BgL_xz00_5423, obj_t BgL_yz00_5424)
	{
		{	/* SawMill/bbv-types.scm 778 */
			{	/* SawMill/bbv-types.scm 779 */
				bool_t BgL_tmpz00_8618;

				{	/* SawMill/bbv-types.scm 779 */
					obj_t BgL_arg2607z00_5819;
					obj_t BgL_arg2608z00_5820;

					{	/* SawMill/bbv-types.scm 779 */
						long BgL_arg1816z00_5821;

						{	/* SawMill/bbv-types.scm 779 */
							long BgL_arg1817z00_5822;

							{	/* SawMill/bbv-types.scm 779 */
								long BgL_res3066z00_5823;

								BgL_res3066z00_5823 =
									BGL_OBJECT_CLASS_NUM(
									((BgL_objectz00_bglt) ((BgL_rtl_funz00_bglt) BgL_xz00_5423)));
								BgL_arg1817z00_5822 = BgL_res3066z00_5823;
							}
							BgL_arg1816z00_5821 = (BgL_arg1817z00_5822 - OBJECT_TYPE);
						}
						BgL_arg2607z00_5819 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_5821);
					}
					{	/* SawMill/bbv-types.scm 779 */
						long BgL_arg1816z00_5824;

						{	/* SawMill/bbv-types.scm 779 */
							long BgL_arg1817z00_5825;

							{	/* SawMill/bbv-types.scm 779 */
								long BgL_res3068z00_5826;

								BgL_res3068z00_5826 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_yz00_5424));
								BgL_arg1817z00_5825 = BgL_res3068z00_5826;
							}
							BgL_arg1816z00_5824 = (BgL_arg1817z00_5825 - OBJECT_TYPE);
						}
						BgL_arg2608z00_5820 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_5824);
					}
					BgL_tmpz00_8618 = (BgL_arg2607z00_5819 == BgL_arg2608z00_5820);
				}
				return BBOOL(BgL_tmpz00_8618);
			}
		}

	}



/* &bbv-equal?-rtl_reg1768 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_reg1768z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5425, obj_t BgL_xz00_5426, obj_t BgL_yz00_5427)
	{
		{	/* SawMill/bbv-types.scm 770 */
			{	/* SawMill/bbv-types.scm 771 */
				bool_t BgL_tmpz00_8630;

				{	/* SawMill/bbv-types.scm 771 */
					bool_t BgL_test3534z00_8631;

					{	/* SawMill/bbv-types.scm 771 */
						BgL_typez00_bglt BgL_arg2605z00_5828;
						BgL_typez00_bglt BgL_arg2606z00_5829;

						BgL_arg2605z00_5828 =
							(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_xz00_5426)))->BgL_typez00);
						BgL_arg2606z00_5829 =
							(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_yz00_5427)))->BgL_typez00);
						BgL_test3534z00_8631 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2605z00_5828), ((obj_t) BgL_arg2606z00_5829));
					}
					if (BgL_test3534z00_8631)
						{	/* SawMill/bbv-types.scm 772 */
							bool_t BgL_test3535z00_8639;

							{	/* SawMill/bbv-types.scm 772 */
								obj_t BgL_arg2603z00_5830;
								obj_t BgL_arg2604z00_5831;

								BgL_arg2603z00_5830 =
									(((BgL_rtl_regz00_bglt) COBJECT(
											((BgL_rtl_regz00_bglt) BgL_xz00_5426)))->BgL_varz00);
								BgL_arg2604z00_5831 =
									(((BgL_rtl_regz00_bglt) COBJECT(
											((BgL_rtl_regz00_bglt) BgL_yz00_5427)))->BgL_varz00);
								BgL_test3535z00_8639 =
									BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(BgL_arg2603z00_5830,
									BgL_arg2604z00_5831);
							}
							if (BgL_test3535z00_8639)
								{	/* SawMill/bbv-types.scm 773 */
									obj_t BgL_arg2599z00_5832;
									obj_t BgL_arg2602z00_5833;

									BgL_arg2599z00_5832 =
										(((BgL_rtl_regz00_bglt) COBJECT(
												((BgL_rtl_regz00_bglt) BgL_xz00_5426)))->BgL_namez00);
									BgL_arg2602z00_5833 =
										(((BgL_rtl_regz00_bglt) COBJECT(
												((BgL_rtl_regz00_bglt) BgL_yz00_5427)))->BgL_namez00);
									BgL_tmpz00_8630 =
										BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2
										(BgL_arg2599z00_5832, BgL_arg2602z00_5833);
								}
							else
								{	/* SawMill/bbv-types.scm 772 */
									BgL_tmpz00_8630 = ((bool_t) 0);
								}
						}
					else
						{	/* SawMill/bbv-types.scm 771 */
							BgL_tmpz00_8630 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_8630);
			}
		}

	}



/* &bbv-equal?-rtl_ins/b1766 */
	obj_t BGl_z62bbvzd2equalzf3zd2rtl_inszf2b1766z63zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5428, obj_t BgL_xz00_5429, obj_t BgL_yz00_5430)
	{
		{	/* SawMill/bbv-types.scm 761 */
			{	/* SawMill/bbv-types.scm 762 */
				bool_t BgL_tmpz00_8651;

				{	/* SawMill/bbv-types.scm 762 */
					bool_t BgL_test3536z00_8652;

					{	/* SawMill/bbv-types.scm 762 */
						obj_t BgL_arg2597z00_5835;
						obj_t BgL_arg2598z00_5836;

						BgL_arg2597z00_5835 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_xz00_5429))))->BgL_destz00);
						BgL_arg2598z00_5836 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_yz00_5430)))->BgL_destz00);
						BgL_test3536z00_8652 =
							BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(BgL_arg2597z00_5835,
							BgL_arg2598z00_5836);
					}
					if (BgL_test3536z00_8652)
						{	/* SawMill/bbv-types.scm 762 */
							if (
								(bgl_list_length(
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_xz00_5429))))->
											BgL_argsz00)) ==
									bgl_list_length((((BgL_rtl_insz00_bglt)
												COBJECT(((BgL_rtl_insz00_bglt) BgL_yz00_5430)))->
											BgL_argsz00))))
								{	/* SawMill/bbv-types.scm 764 */
									obj_t BgL__andtest_1299z00_5837;

									{	/* SawMill/bbv-types.scm 764 */
										obj_t BgL_arg2588z00_5838;
										obj_t BgL_arg2589z00_5839;

										BgL_arg2588z00_5838 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_xz00_5429))))->
											BgL_argsz00);
										BgL_arg2589z00_5839 =
											(((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
														BgL_yz00_5430)))->BgL_argsz00);
										{	/* SawMill/bbv-types.scm 764 */
											obj_t BgL_list2590z00_5840;

											{	/* SawMill/bbv-types.scm 764 */
												obj_t BgL_arg2591z00_5841;

												BgL_arg2591z00_5841 =
													MAKE_YOUNG_PAIR(BgL_arg2589z00_5839, BNIL);
												BgL_list2590z00_5840 =
													MAKE_YOUNG_PAIR(BgL_arg2588z00_5838,
													BgL_arg2591z00_5841);
											}
											BgL__andtest_1299z00_5837 =
												BGl_everyz00zz__r4_pairs_and_lists_6_3z00
												(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
												BgL_list2590z00_5840);
										}
									}
									if (CBOOL(BgL__andtest_1299z00_5837))
										{	/* SawMill/bbv-types.scm 765 */
											BgL_rtl_funz00_bglt BgL_arg2586z00_5842;
											BgL_rtl_funz00_bglt BgL_arg2587z00_5843;

											BgL_arg2586z00_5842 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_xz00_5429))))->
												BgL_funz00);
											BgL_arg2587z00_5843 =
												(((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
															BgL_yz00_5430)))->BgL_funz00);
											BgL_tmpz00_8651 =
												BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(((obj_t)
													BgL_arg2586z00_5842), ((obj_t) BgL_arg2587z00_5843));
										}
									else
										{	/* SawMill/bbv-types.scm 764 */
											BgL_tmpz00_8651 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/bbv-types.scm 763 */
									BgL_tmpz00_8651 = ((bool_t) 0);
								}
						}
					else
						{	/* SawMill/bbv-types.scm 762 */
							BgL_tmpz00_8651 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_8651);
			}
		}

	}



/* &bbv-equal?-blockS1764 */
	obj_t BGl_z62bbvzd2equalzf3zd2blockS1764z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5431, obj_t BgL_xz00_5432, obj_t BgL_yz00_5433)
	{
		{	/* SawMill/bbv-types.scm 753 */
			if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5433,
					BGl_blockSz00zzsaw_bbvzd2typeszd2))
				{	/* SawMill/bbv-types.scm 754 */
					if (
						(bgl_list_length(
								(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_xz00_5432))))->
									BgL_firstz00)) ==
							bgl_list_length((((BgL_blockz00_bglt)
										COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
													BgL_yz00_5433))))->BgL_firstz00))))
						{	/* SawMill/bbv-types.scm 756 */
							obj_t BgL_arg2577z00_5845;
							obj_t BgL_arg2578z00_5846;

							BgL_arg2577z00_5845 =
								(((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt)
											((BgL_blockz00_bglt) BgL_xz00_5432))))->BgL_firstz00);
							BgL_arg2578z00_5846 =
								(((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt)
											((BgL_blockz00_bglt) BgL_yz00_5433))))->BgL_firstz00);
							{	/* SawMill/bbv-types.scm 756 */
								obj_t BgL_list2579z00_5847;

								{	/* SawMill/bbv-types.scm 756 */
									obj_t BgL_arg2580z00_5848;

									BgL_arg2580z00_5848 =
										MAKE_YOUNG_PAIR(BgL_arg2578z00_5846, BNIL);
									BgL_list2579z00_5847 =
										MAKE_YOUNG_PAIR(BgL_arg2577z00_5845, BgL_arg2580z00_5848);
								}
								return
									BGl_everyz00zz__r4_pairs_and_lists_6_3z00
									(BGl_bbvzd2equalzf3zd2envzf3zzsaw_bbvzd2typeszd2,
									BgL_list2579z00_5847);
							}
						}
					else
						{	/* SawMill/bbv-types.scm 755 */
							return BFALSE;
						}
				}
			else
				{	/* SawMill/bbv-types.scm 754 */
					return BFALSE;
				}
		}

	}



/* &bbv-equal?-atom1762 */
	obj_t BGl_z62bbvzd2equalzf3zd2atom1762z91zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5434, obj_t BgL_xz00_5435, obj_t BgL_yz00_5436)
	{
		{	/* SawMill/bbv-types.scm 746 */
			{	/* SawMill/bbv-types.scm 747 */
				bool_t BgL_tmpz00_8708;

				if (BGl_isazf3zf3zz__objectz00(BgL_yz00_5436, BGl_atomz00zzast_nodez00))
					{	/* SawMill/bbv-types.scm 747 */
						BgL_tmpz00_8708 =
							BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
							(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt) BgL_xz00_5435)))->BgL_valuez00),
							(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt) BgL_yz00_5436)))->BgL_valuez00));
					}
				else
					{	/* SawMill/bbv-types.scm 747 */
						BgL_tmpz00_8708 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_8708);
			}
		}

	}



/* &bbv-hash-rtl_cast_nu1757 */
	obj_t BGl_z62bbvzd2hashzd2rtl_cast_nu1757z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5437, obj_t BgL_oz00_5438)
	{
		{	/* SawMill/bbv-types.scm 734 */
			{

				{	/* SawMill/bbv-types.scm 735 */
					obj_t BgL_arg2562z00_5853;
					obj_t BgL_arg2564z00_5854;

					{	/* SawMill/bbv-types.scm 734 */
						obj_t BgL_nextzd2method1756zd2_5852;

						BgL_nextzd2method1756zd2_5852 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5438)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_cast_nullz00zzsaw_defsz00);
						BgL_arg2562z00_5853 =
							PROCEDURE_ENTRY(BgL_nextzd2method1756zd2_5852)
							(BgL_nextzd2method1756zd2_5852,
							((obj_t) ((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5438)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 735 */
						BgL_typez00_bglt BgL_arg2565z00_5855;

						BgL_arg2565z00_5855 =
							(((BgL_rtl_cast_nullz00_bglt) COBJECT(
									((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5438)))->BgL_typez00);
						BgL_arg2564z00_5854 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2565z00_5855));
					}
					return
						BINT(
						((long) CINT(BgL_arg2562z00_5853) ^
							(long) CINT(BgL_arg2564z00_5854)));
		}}}

	}



/* &bbv-hash-rtl_cast1755 */
	obj_t BGl_z62bbvzd2hashzd2rtl_cast1755z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5439, obj_t BgL_oz00_5440)
	{
		{	/* SawMill/bbv-types.scm 727 */
			{

				{	/* SawMill/bbv-types.scm 728 */
					obj_t BgL_arg2552z00_5859;
					long BgL_arg2553z00_5860;

					{	/* SawMill/bbv-types.scm 727 */
						obj_t BgL_nextzd2method1754zd2_5858;

						BgL_nextzd2method1754zd2_5858 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_castz00_bglt) BgL_oz00_5440)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_castz00zzsaw_defsz00);
						BgL_arg2552z00_5859 =
							PROCEDURE_ENTRY(BgL_nextzd2method1754zd2_5858)
							(BgL_nextzd2method1754zd2_5858,
							((obj_t) ((BgL_rtl_castz00_bglt) BgL_oz00_5440)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 729 */
						obj_t BgL_arg2554z00_5861;
						obj_t BgL_arg2556z00_5862;

						{	/* SawMill/bbv-types.scm 729 */
							BgL_typez00_bglt BgL_arg2558z00_5863;

							BgL_arg2558z00_5863 =
								(((BgL_rtl_castz00_bglt) COBJECT(
										((BgL_rtl_castz00_bglt) BgL_oz00_5440)))->BgL_fromtypez00);
							BgL_arg2554z00_5861 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2558z00_5863));
						}
						{	/* SawMill/bbv-types.scm 729 */
							BgL_typez00_bglt BgL_arg2559z00_5864;

							BgL_arg2559z00_5864 =
								(((BgL_rtl_castz00_bglt) COBJECT(
										((BgL_rtl_castz00_bglt) BgL_oz00_5440)))->BgL_totypez00);
							BgL_arg2556z00_5862 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2559z00_5864));
						}
						BgL_arg2553z00_5860 =
							(
							(long) CINT(BgL_arg2554z00_5861) ^
							(long) CINT(BgL_arg2556z00_5862));
					}
					return BINT(((long) CINT(BgL_arg2552z00_5859) ^ BgL_arg2553z00_5860));
		}}}

	}



/* &bbv-hash-rtl_pragma1753 */
	obj_t BGl_z62bbvzd2hashzd2rtl_pragma1753z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5441, obj_t BgL_oz00_5442)
	{
		{	/* SawMill/bbv-types.scm 720 */
			{

				{	/* SawMill/bbv-types.scm 721 */
					obj_t BgL_arg2544z00_5868;
					obj_t BgL_arg2545z00_5869;

					{	/* SawMill/bbv-types.scm 720 */
						obj_t BgL_nextzd2method1752zd2_5867;

						BgL_nextzd2method1752zd2_5867 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_pragmaz00_bglt) BgL_oz00_5442)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_pragmaz00zzsaw_defsz00);
						BgL_arg2544z00_5868 =
							PROCEDURE_ENTRY(BgL_nextzd2method1752zd2_5867)
							(BgL_nextzd2method1752zd2_5867,
							((obj_t) ((BgL_rtl_pragmaz00_bglt) BgL_oz00_5442)), BEOA);
					}
					BgL_arg2545z00_5869 =
						BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
						(((BgL_rtl_pragmaz00_bglt) COBJECT(
									((BgL_rtl_pragmaz00_bglt) BgL_oz00_5442)))->BgL_formatz00));
					return
						BINT(
						((long) CINT(BgL_arg2544z00_5868) ^
							(long) CINT(BgL_arg2545z00_5869)));
		}}}

	}



/* &bbv-hash-rtl_lightfu1751 */
	obj_t BGl_z62bbvzd2hashzd2rtl_lightfu1751z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5443, obj_t BgL_oz00_5444)
	{
		{	/* SawMill/bbv-types.scm 710 */
			{

				{	/* SawMill/bbv-types.scm 711 */
					obj_t BgL_arg2521z00_5873;
					long BgL_arg2522z00_5874;

					{	/* SawMill/bbv-types.scm 710 */
						obj_t BgL_nextzd2method1750zd2_5872;

						BgL_nextzd2method1750zd2_5872 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5444)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_lightfuncallz00zzsaw_defsz00);
						BgL_arg2521z00_5873 =
							PROCEDURE_ENTRY(BgL_nextzd2method1750zd2_5872)
							(BgL_nextzd2method1750zd2_5872,
							((obj_t) ((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5444)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 713 */
						obj_t BgL_arg2523z00_5875;
						long BgL_arg2525z00_5876;

						BgL_arg2523z00_5875 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
										((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5444)))->
								BgL_namez00));
						{	/* SawMill/bbv-types.scm 714 */
							obj_t BgL_arg2527z00_5877;
							obj_t BgL_arg2529z00_5878;

							BgL_arg2527z00_5877 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
											((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5444)))->
									BgL_rettypez00));
							{	/* SawMill/bbv-types.scm 715 */
								obj_t BgL_arg2532z00_5879;

								{	/* SawMill/bbv-types.scm 715 */
									obj_t BgL_l1664z00_5880;

									BgL_l1664z00_5880 =
										(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
												((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5444)))->
										BgL_funsz00);
									if (NULLP(BgL_l1664z00_5880))
										{	/* SawMill/bbv-types.scm 715 */
											BgL_arg2532z00_5879 = BNIL;
										}
									else
										{	/* SawMill/bbv-types.scm 715 */
											obj_t BgL_head1666z00_5881;

											{	/* SawMill/bbv-types.scm 715 */
												obj_t BgL_arg2541z00_5882;

												BgL_arg2541z00_5882 =
													BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(CAR
													(BgL_l1664z00_5880));
												{	/* SawMill/bbv-types.scm 715 */
													obj_t BgL_res3054z00_5883;

													BgL_res3054z00_5883 =
														MAKE_YOUNG_PAIR(BgL_arg2541z00_5882, BNIL);
													BgL_head1666z00_5881 = BgL_res3054z00_5883;
												}
											}
											{	/* SawMill/bbv-types.scm 715 */
												obj_t BgL_g1669z00_5884;

												BgL_g1669z00_5884 = CDR(BgL_l1664z00_5880);
												{
													obj_t BgL_l1664z00_5886;
													obj_t BgL_tail1667z00_5887;

													BgL_l1664z00_5886 = BgL_g1669z00_5884;
													BgL_tail1667z00_5887 = BgL_head1666z00_5881;
												BgL_zc3z04anonymousza32534ze3z87_5885:
													if (NULLP(BgL_l1664z00_5886))
														{	/* SawMill/bbv-types.scm 715 */
															BgL_arg2532z00_5879 = BgL_head1666z00_5881;
														}
													else
														{	/* SawMill/bbv-types.scm 715 */
															obj_t BgL_newtail1668z00_5888;

															{	/* SawMill/bbv-types.scm 715 */
																obj_t BgL_arg2538z00_5889;

																{	/* SawMill/bbv-types.scm 715 */
																	obj_t BgL_arg2539z00_5890;

																	BgL_arg2539z00_5890 =
																		CAR(((obj_t) BgL_l1664z00_5886));
																	BgL_arg2538z00_5889 =
																		BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
																		(BgL_arg2539z00_5890);
																}
																{	/* SawMill/bbv-types.scm 715 */
																	obj_t BgL_res3056z00_5891;

																	BgL_res3056z00_5891 =
																		MAKE_YOUNG_PAIR(BgL_arg2538z00_5889, BNIL);
																	BgL_newtail1668z00_5888 = BgL_res3056z00_5891;
																}
															}
															SET_CDR(BgL_tail1667z00_5887,
																BgL_newtail1668z00_5888);
															{	/* SawMill/bbv-types.scm 715 */
																obj_t BgL_arg2536z00_5892;

																BgL_arg2536z00_5892 =
																	CDR(((obj_t) BgL_l1664z00_5886));
																{
																	obj_t BgL_tail1667z00_8806;
																	obj_t BgL_l1664z00_8805;

																	BgL_l1664z00_8805 = BgL_arg2536z00_5892;
																	BgL_tail1667z00_8806 =
																		BgL_newtail1668z00_5888;
																	BgL_tail1667z00_5887 = BgL_tail1667z00_8806;
																	BgL_l1664z00_5886 = BgL_l1664z00_8805;
																	goto BgL_zc3z04anonymousza32534ze3z87_5885;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg2529z00_5878 =
									BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2(BgL_arg2532z00_5879);
							}
							BgL_arg2525z00_5876 =
								(
								(long) CINT(BgL_arg2527z00_5877) ^
								(long) CINT(BgL_arg2529z00_5878));
						}
						BgL_arg2522z00_5874 =
							((long) CINT(BgL_arg2523z00_5875) ^ BgL_arg2525z00_5876);
					}
					return BINT(((long) CINT(BgL_arg2521z00_5873) ^ BgL_arg2522z00_5874));
		}}}

	}



/* &bbv-hash-rtl_call1749 */
	obj_t BGl_z62bbvzd2hashzd2rtl_call1749z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5445, obj_t BgL_oz00_5446)
	{
		{	/* SawMill/bbv-types.scm 703 */
			{

				{	/* SawMill/bbv-types.scm 705 */
					obj_t BgL_arg2518z00_5896;
					obj_t BgL_arg2519z00_5897;

					{	/* SawMill/bbv-types.scm 703 */
						obj_t BgL_nextzd2method1748zd2_5895;

						BgL_nextzd2method1748zd2_5895 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_callz00_bglt) BgL_oz00_5446)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_callz00zzsaw_defsz00);
						BgL_arg2518z00_5896 =
							PROCEDURE_ENTRY(BgL_nextzd2method1748zd2_5895)
							(BgL_nextzd2method1748zd2_5895,
							((obj_t) ((BgL_rtl_callz00_bglt) BgL_oz00_5446)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 705 */
						BgL_globalz00_bglt BgL_arg2520z00_5898;

						BgL_arg2520z00_5898 =
							(((BgL_rtl_callz00_bglt) COBJECT(
									((BgL_rtl_callz00_bglt) BgL_oz00_5446)))->BgL_varz00);
						BgL_arg2519z00_5897 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2520z00_5898));
					}
					return
						BINT(
						((long) CINT(BgL_arg2518z00_5896) ^
							(long) CINT(BgL_arg2519z00_5897)));
		}}}

	}



/* &bbv-hash-rtl_new1747 */
	obj_t BGl_z62bbvzd2hashzd2rtl_new1747z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5447, obj_t BgL_oz00_5448)
	{
		{	/* SawMill/bbv-types.scm 694 */
			{

				{	/* SawMill/bbv-types.scm 695 */
					obj_t BgL_arg2491z00_5902;
					long BgL_arg2494z00_5903;

					{	/* SawMill/bbv-types.scm 694 */
						obj_t BgL_nextzd2method1746zd2_5901;

						BgL_nextzd2method1746zd2_5901 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_newz00_bglt) BgL_oz00_5448)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_newz00zzsaw_defsz00);
						BgL_arg2491z00_5902 =
							PROCEDURE_ENTRY(BgL_nextzd2method1746zd2_5901)
							(BgL_nextzd2method1746zd2_5901,
							((obj_t) ((BgL_rtl_newz00_bglt) BgL_oz00_5448)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 697 */
						obj_t BgL_arg2496z00_5904;
						obj_t BgL_arg2497z00_5905;

						{	/* SawMill/bbv-types.scm 697 */
							BgL_typez00_bglt BgL_arg2499z00_5906;

							BgL_arg2499z00_5906 =
								(((BgL_rtl_newz00_bglt) COBJECT(
										((BgL_rtl_newz00_bglt) BgL_oz00_5448)))->BgL_typez00);
							BgL_arg2496z00_5904 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2499z00_5906));
						}
						{	/* SawMill/bbv-types.scm 698 */
							obj_t BgL_arg2500z00_5907;

							{	/* SawMill/bbv-types.scm 698 */
								obj_t BgL_l1658z00_5908;

								BgL_l1658z00_5908 =
									(((BgL_rtl_newz00_bglt) COBJECT(
											((BgL_rtl_newz00_bglt) BgL_oz00_5448)))->BgL_constrz00);
								if (NULLP(BgL_l1658z00_5908))
									{	/* SawMill/bbv-types.scm 698 */
										BgL_arg2500z00_5907 = BNIL;
									}
								else
									{	/* SawMill/bbv-types.scm 698 */
										obj_t BgL_head1660z00_5909;

										{	/* SawMill/bbv-types.scm 698 */
											obj_t BgL_arg2512z00_5910;

											BgL_arg2512z00_5910 =
												BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(CAR
												(BgL_l1658z00_5908));
											{	/* SawMill/bbv-types.scm 698 */
												obj_t BgL_res3047z00_5911;

												BgL_res3047z00_5911 =
													MAKE_YOUNG_PAIR(BgL_arg2512z00_5910, BNIL);
												BgL_head1660z00_5909 = BgL_res3047z00_5911;
											}
										}
										{	/* SawMill/bbv-types.scm 698 */
											obj_t BgL_g1663z00_5912;

											BgL_g1663z00_5912 = CDR(BgL_l1658z00_5908);
											{
												obj_t BgL_l1658z00_5914;
												obj_t BgL_tail1661z00_5915;

												BgL_l1658z00_5914 = BgL_g1663z00_5912;
												BgL_tail1661z00_5915 = BgL_head1660z00_5909;
											BgL_zc3z04anonymousza32502ze3z87_5913:
												if (NULLP(BgL_l1658z00_5914))
													{	/* SawMill/bbv-types.scm 698 */
														BgL_arg2500z00_5907 = BgL_head1660z00_5909;
													}
												else
													{	/* SawMill/bbv-types.scm 698 */
														obj_t BgL_newtail1662z00_5916;

														{	/* SawMill/bbv-types.scm 698 */
															obj_t BgL_arg2506z00_5917;

															{	/* SawMill/bbv-types.scm 698 */
																obj_t BgL_arg2508z00_5918;

																BgL_arg2508z00_5918 =
																	CAR(((obj_t) BgL_l1658z00_5914));
																BgL_arg2506z00_5917 =
																	BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
																	(BgL_arg2508z00_5918);
															}
															{	/* SawMill/bbv-types.scm 698 */
																obj_t BgL_res3049z00_5919;

																BgL_res3049z00_5919 =
																	MAKE_YOUNG_PAIR(BgL_arg2506z00_5917, BNIL);
																BgL_newtail1662z00_5916 = BgL_res3049z00_5919;
															}
														}
														SET_CDR(BgL_tail1661z00_5915,
															BgL_newtail1662z00_5916);
														{	/* SawMill/bbv-types.scm 698 */
															obj_t BgL_arg2504z00_5920;

															BgL_arg2504z00_5920 =
																CDR(((obj_t) BgL_l1658z00_5914));
															{
																obj_t BgL_tail1661z00_8864;
																obj_t BgL_l1658z00_8863;

																BgL_l1658z00_8863 = BgL_arg2504z00_5920;
																BgL_tail1661z00_8864 = BgL_newtail1662z00_5916;
																BgL_tail1661z00_5915 = BgL_tail1661z00_8864;
																BgL_l1658z00_5914 = BgL_l1658z00_8863;
																goto BgL_zc3z04anonymousza32502ze3z87_5913;
															}
														}
													}
											}
										}
									}
							}
							BgL_arg2497z00_5905 =
								BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2(BgL_arg2500z00_5907);
						}
						BgL_arg2494z00_5903 =
							(
							(long) CINT(BgL_arg2496z00_5904) ^
							(long) CINT(BgL_arg2497z00_5905));
					}
					return BINT(((long) CINT(BgL_arg2491z00_5902) ^ BgL_arg2494z00_5903));
		}}}

	}



/* &bbv-hash-rtl_vset1745 */
	obj_t BGl_z62bbvzd2hashzd2rtl_vset1745z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5449, obj_t BgL_oz00_5450)
	{
		{	/* SawMill/bbv-types.scm 687 */
			{

				{	/* SawMill/bbv-types.scm 688 */
					obj_t BgL_arg2482z00_5924;
					long BgL_arg2483z00_5925;

					{	/* SawMill/bbv-types.scm 687 */
						obj_t BgL_nextzd2method1744zd2_5923;

						BgL_nextzd2method1744zd2_5923 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_vsetz00_bglt) BgL_oz00_5450)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_vsetz00zzsaw_defsz00);
						BgL_arg2482z00_5924 =
							PROCEDURE_ENTRY(BgL_nextzd2method1744zd2_5923)
							(BgL_nextzd2method1744zd2_5923,
							((obj_t) ((BgL_rtl_vsetz00_bglt) BgL_oz00_5450)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 689 */
						obj_t BgL_arg2484z00_5926;
						obj_t BgL_arg2486z00_5927;

						{	/* SawMill/bbv-types.scm 689 */
							BgL_typez00_bglt BgL_arg2487z00_5928;

							BgL_arg2487z00_5928 =
								(((BgL_rtl_vsetz00_bglt) COBJECT(
										((BgL_rtl_vsetz00_bglt) BgL_oz00_5450)))->BgL_typez00);
							BgL_arg2484z00_5926 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2487z00_5928));
						}
						{	/* SawMill/bbv-types.scm 689 */
							BgL_typez00_bglt BgL_arg2488z00_5929;

							BgL_arg2488z00_5929 =
								(((BgL_rtl_vsetz00_bglt) COBJECT(
										((BgL_rtl_vsetz00_bglt) BgL_oz00_5450)))->BgL_vtypez00);
							BgL_arg2486z00_5927 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2488z00_5929));
						}
						BgL_arg2483z00_5925 =
							(
							(long) CINT(BgL_arg2484z00_5926) ^
							(long) CINT(BgL_arg2486z00_5927));
					}
					return BINT(((long) CINT(BgL_arg2482z00_5924) ^ BgL_arg2483z00_5925));
		}}}

	}



/* &bbv-hash-rtl_setfiel1743 */
	obj_t BGl_z62bbvzd2hashzd2rtl_setfiel1743z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5451, obj_t BgL_oz00_5452)
	{
		{	/* SawMill/bbv-types.scm 678 */
			{

				{	/* SawMill/bbv-types.scm 679 */
					obj_t BgL_arg2470z00_5933;
					long BgL_arg2471z00_5934;

					{	/* SawMill/bbv-types.scm 678 */
						obj_t BgL_nextzd2method1742zd2_5932;

						BgL_nextzd2method1742zd2_5932 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_setfieldz00_bglt) BgL_oz00_5452)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_setfieldz00zzsaw_defsz00);
						BgL_arg2470z00_5933 =
							PROCEDURE_ENTRY(BgL_nextzd2method1742zd2_5932)
							(BgL_nextzd2method1742zd2_5932,
							((obj_t) ((BgL_rtl_setfieldz00_bglt) BgL_oz00_5452)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 681 */
						obj_t BgL_arg2473z00_5935;
						long BgL_arg2474z00_5936;

						BgL_arg2473z00_5935 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							(((BgL_rtl_setfieldz00_bglt) COBJECT(
										((BgL_rtl_setfieldz00_bglt) BgL_oz00_5452)))->BgL_namez00));
						{	/* SawMill/bbv-types.scm 682 */
							obj_t BgL_arg2476z00_5937;
							obj_t BgL_arg2477z00_5938;

							{	/* SawMill/bbv-types.scm 682 */
								BgL_typez00_bglt BgL_arg2479z00_5939;

								BgL_arg2479z00_5939 =
									(((BgL_rtl_setfieldz00_bglt) COBJECT(
											((BgL_rtl_setfieldz00_bglt) BgL_oz00_5452)))->
									BgL_objtypez00);
								BgL_arg2476z00_5937 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t)
										BgL_arg2479z00_5939));
							}
							{	/* SawMill/bbv-types.scm 682 */
								BgL_typez00_bglt BgL_arg2481z00_5940;

								BgL_arg2481z00_5940 =
									(((BgL_rtl_setfieldz00_bglt) COBJECT(
											((BgL_rtl_setfieldz00_bglt) BgL_oz00_5452)))->
									BgL_typez00);
								BgL_arg2477z00_5938 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t)
										BgL_arg2481z00_5940));
							}
							BgL_arg2474z00_5936 =
								(
								(long) CINT(BgL_arg2476z00_5937) ^
								(long) CINT(BgL_arg2477z00_5938));
						}
						BgL_arg2471z00_5934 =
							((long) CINT(BgL_arg2473z00_5935) ^ BgL_arg2474z00_5936);
					}
					return BINT(((long) CINT(BgL_arg2470z00_5933) ^ BgL_arg2471z00_5934));
		}}}

	}



/* &bbv-hash-rtl_storeg1741 */
	obj_t BGl_z62bbvzd2hashzd2rtl_storeg1741z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5453, obj_t BgL_oz00_5454)
	{
		{	/* SawMill/bbv-types.scm 669 */
			{

				{	/* SawMill/bbv-types.scm 670 */
					obj_t BgL_arg2462z00_5944;
					long BgL_arg2463z00_5945;

					{	/* SawMill/bbv-types.scm 669 */
						obj_t BgL_nextzd2method1740zd2_5943;

						BgL_nextzd2method1740zd2_5943 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_storegz00_bglt) BgL_oz00_5454)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_storegz00zzsaw_defsz00);
						BgL_arg2462z00_5944 =
							PROCEDURE_ENTRY(BgL_nextzd2method1740zd2_5943)
							(BgL_nextzd2method1740zd2_5943,
							((obj_t) ((BgL_rtl_storegz00_bglt) BgL_oz00_5454)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 672 */
						BgL_globalz00_bglt BgL_i1292z00_5946;

						BgL_i1292z00_5946 =
							(((BgL_rtl_storegz00_bglt) COBJECT(
									((BgL_rtl_storegz00_bglt) BgL_oz00_5454)))->BgL_varz00);
						{	/* SawMill/bbv-types.scm 673 */
							obj_t BgL_arg2464z00_5947;
							obj_t BgL_arg2466z00_5948;

							BgL_arg2464z00_5947 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								(((BgL_globalz00_bglt) COBJECT(BgL_i1292z00_5946))->
									BgL_modulez00));
							{	/* SawMill/bbv-types.scm 673 */
								obj_t BgL_arg2469z00_5949;

								BgL_arg2469z00_5949 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_i1292z00_5946)))->BgL_idz00);
								BgL_arg2466z00_5948 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(BgL_arg2469z00_5949);
							}
							BgL_arg2463z00_5945 =
								(
								(long) CINT(BgL_arg2464z00_5947) ^
								(long) CINT(BgL_arg2466z00_5948));
					}}
					return BINT(((long) CINT(BgL_arg2462z00_5944) ^ BgL_arg2463z00_5945));
		}}}

	}



/* &bbv-hash-rtl_instanc1739 */
	obj_t BGl_z62bbvzd2hashzd2rtl_instanc1739z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5455, obj_t BgL_oz00_5456)
	{
		{	/* SawMill/bbv-types.scm 662 */
			{

				{	/* SawMill/bbv-types.scm 663 */
					obj_t BgL_arg2458z00_5953;
					obj_t BgL_arg2460z00_5954;

					{	/* SawMill/bbv-types.scm 662 */
						obj_t BgL_nextzd2method1738zd2_5952;

						BgL_nextzd2method1738zd2_5952 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_instanceofz00_bglt) BgL_oz00_5456)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_instanceofz00zzsaw_defsz00);
						BgL_arg2458z00_5953 =
							PROCEDURE_ENTRY(BgL_nextzd2method1738zd2_5952)
							(BgL_nextzd2method1738zd2_5952,
							((obj_t) ((BgL_rtl_instanceofz00_bglt) BgL_oz00_5456)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 664 */
						BgL_typez00_bglt BgL_arg2461z00_5955;

						BgL_arg2461z00_5955 =
							(((BgL_rtl_instanceofz00_bglt) COBJECT(
									((BgL_rtl_instanceofz00_bglt) BgL_oz00_5456)))->BgL_typez00);
						BgL_arg2460z00_5954 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2461z00_5955));
					}
					return
						BINT(
						((long) CINT(BgL_arg2458z00_5953) ^
							(long) CINT(BgL_arg2460z00_5954)));
		}}}

	}



/* &bbv-hash-rtl_vlength1737 */
	obj_t BGl_z62bbvzd2hashzd2rtl_vlength1737z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5457, obj_t BgL_oz00_5458)
	{
		{	/* SawMill/bbv-types.scm 655 */
			{

				{	/* SawMill/bbv-types.scm 656 */
					obj_t BgL_arg2451z00_5959;
					long BgL_arg2452z00_5960;

					{	/* SawMill/bbv-types.scm 655 */
						obj_t BgL_nextzd2method1736zd2_5958;

						BgL_nextzd2method1736zd2_5958 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_vlengthz00_bglt) BgL_oz00_5458)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_vlengthz00zzsaw_defsz00);
						BgL_arg2451z00_5959 =
							PROCEDURE_ENTRY(BgL_nextzd2method1736zd2_5958)
							(BgL_nextzd2method1736zd2_5958,
							((obj_t) ((BgL_rtl_vlengthz00_bglt) BgL_oz00_5458)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 657 */
						obj_t BgL_arg2453z00_5961;
						obj_t BgL_arg2455z00_5962;

						{	/* SawMill/bbv-types.scm 657 */
							BgL_typez00_bglt BgL_arg2456z00_5963;

							BgL_arg2456z00_5963 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_oz00_5458)))->BgL_typez00);
							BgL_arg2453z00_5961 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2456z00_5963));
						}
						{	/* SawMill/bbv-types.scm 657 */
							BgL_typez00_bglt BgL_arg2457z00_5964;

							BgL_arg2457z00_5964 =
								(((BgL_rtl_vlengthz00_bglt) COBJECT(
										((BgL_rtl_vlengthz00_bglt) BgL_oz00_5458)))->BgL_vtypez00);
							BgL_arg2455z00_5962 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2457z00_5964));
						}
						BgL_arg2452z00_5960 =
							(
							(long) CINT(BgL_arg2453z00_5961) ^
							(long) CINT(BgL_arg2455z00_5962));
					}
					return BINT(((long) CINT(BgL_arg2451z00_5959) ^ BgL_arg2452z00_5960));
		}}}

	}



/* &bbv-hash-rtl_vref1735 */
	obj_t BGl_z62bbvzd2hashzd2rtl_vref1735z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5459, obj_t BgL_oz00_5460)
	{
		{	/* SawMill/bbv-types.scm 648 */
			{

				{	/* SawMill/bbv-types.scm 649 */
					obj_t BgL_arg2444z00_5968;
					long BgL_arg2446z00_5969;

					{	/* SawMill/bbv-types.scm 648 */
						obj_t BgL_nextzd2method1734zd2_5967;

						BgL_nextzd2method1734zd2_5967 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_vrefz00_bglt) BgL_oz00_5460)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_vrefz00zzsaw_defsz00);
						BgL_arg2444z00_5968 =
							PROCEDURE_ENTRY(BgL_nextzd2method1734zd2_5967)
							(BgL_nextzd2method1734zd2_5967,
							((obj_t) ((BgL_rtl_vrefz00_bglt) BgL_oz00_5460)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 650 */
						obj_t BgL_arg2447z00_5970;
						obj_t BgL_arg2448z00_5971;

						{	/* SawMill/bbv-types.scm 650 */
							BgL_typez00_bglt BgL_arg2449z00_5972;

							BgL_arg2449z00_5972 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_oz00_5460)))->BgL_typez00);
							BgL_arg2447z00_5970 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2449z00_5972));
						}
						{	/* SawMill/bbv-types.scm 650 */
							BgL_typez00_bglt BgL_arg2450z00_5973;

							BgL_arg2450z00_5973 =
								(((BgL_rtl_vrefz00_bglt) COBJECT(
										((BgL_rtl_vrefz00_bglt) BgL_oz00_5460)))->BgL_vtypez00);
							BgL_arg2448z00_5971 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2450z00_5973));
						}
						BgL_arg2446z00_5969 =
							(
							(long) CINT(BgL_arg2447z00_5970) ^
							(long) CINT(BgL_arg2448z00_5971));
					}
					return BINT(((long) CINT(BgL_arg2444z00_5968) ^ BgL_arg2446z00_5969));
		}}}

	}



/* &bbv-hash-rtl_valloc1733 */
	obj_t BGl_z62bbvzd2hashzd2rtl_valloc1733z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5461, obj_t BgL_oz00_5462)
	{
		{	/* SawMill/bbv-types.scm 641 */
			{

				{	/* SawMill/bbv-types.scm 642 */
					obj_t BgL_arg2435z00_5977;
					long BgL_arg2437z00_5978;

					{	/* SawMill/bbv-types.scm 641 */
						obj_t BgL_nextzd2method1732zd2_5976;

						BgL_nextzd2method1732zd2_5976 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_vallocz00_bglt) BgL_oz00_5462)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_vallocz00zzsaw_defsz00);
						BgL_arg2435z00_5977 =
							PROCEDURE_ENTRY(BgL_nextzd2method1732zd2_5976)
							(BgL_nextzd2method1732zd2_5976,
							((obj_t) ((BgL_rtl_vallocz00_bglt) BgL_oz00_5462)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 643 */
						obj_t BgL_arg2438z00_5979;
						obj_t BgL_arg2439z00_5980;

						{	/* SawMill/bbv-types.scm 643 */
							BgL_typez00_bglt BgL_arg2441z00_5981;

							BgL_arg2441z00_5981 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_oz00_5462)))->BgL_typez00);
							BgL_arg2438z00_5979 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2441z00_5981));
						}
						{	/* SawMill/bbv-types.scm 643 */
							BgL_typez00_bglt BgL_arg2443z00_5982;

							BgL_arg2443z00_5982 =
								(((BgL_rtl_vallocz00_bglt) COBJECT(
										((BgL_rtl_vallocz00_bglt) BgL_oz00_5462)))->BgL_vtypez00);
							BgL_arg2439z00_5980 =
								BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
								((obj_t) BgL_arg2443z00_5982));
						}
						BgL_arg2437z00_5978 =
							(
							(long) CINT(BgL_arg2438z00_5979) ^
							(long) CINT(BgL_arg2439z00_5980));
					}
					return BINT(((long) CINT(BgL_arg2435z00_5977) ^ BgL_arg2437z00_5978));
		}}}

	}



/* &bbv-hash-rtl_getfiel1731 */
	obj_t BGl_z62bbvzd2hashzd2rtl_getfiel1731z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5463, obj_t BgL_oz00_5464)
	{
		{	/* SawMill/bbv-types.scm 632 */
			{

				{	/* SawMill/bbv-types.scm 633 */
					obj_t BgL_arg2422z00_5986;
					long BgL_arg2424z00_5987;

					{	/* SawMill/bbv-types.scm 632 */
						obj_t BgL_nextzd2method1730zd2_5985;

						BgL_nextzd2method1730zd2_5985 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_getfieldz00_bglt) BgL_oz00_5464)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_getfieldz00zzsaw_defsz00);
						BgL_arg2422z00_5986 =
							PROCEDURE_ENTRY(BgL_nextzd2method1730zd2_5985)
							(BgL_nextzd2method1730zd2_5985,
							((obj_t) ((BgL_rtl_getfieldz00_bglt) BgL_oz00_5464)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 635 */
						obj_t BgL_arg2425z00_5988;
						long BgL_arg2426z00_5989;

						BgL_arg2425z00_5988 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							(((BgL_rtl_getfieldz00_bglt) COBJECT(
										((BgL_rtl_getfieldz00_bglt) BgL_oz00_5464)))->BgL_namez00));
						{	/* SawMill/bbv-types.scm 636 */
							obj_t BgL_arg2428z00_5990;
							obj_t BgL_arg2430z00_5991;

							{	/* SawMill/bbv-types.scm 636 */
								BgL_typez00_bglt BgL_arg2431z00_5992;

								BgL_arg2431z00_5992 =
									(((BgL_rtl_getfieldz00_bglt) COBJECT(
											((BgL_rtl_getfieldz00_bglt) BgL_oz00_5464)))->
									BgL_objtypez00);
								BgL_arg2428z00_5990 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t)
										BgL_arg2431z00_5992));
							}
							{	/* SawMill/bbv-types.scm 636 */
								BgL_typez00_bglt BgL_arg2433z00_5993;

								BgL_arg2433z00_5993 =
									(((BgL_rtl_getfieldz00_bglt) COBJECT(
											((BgL_rtl_getfieldz00_bglt) BgL_oz00_5464)))->
									BgL_typez00);
								BgL_arg2430z00_5991 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t)
										BgL_arg2433z00_5993));
							}
							BgL_arg2426z00_5989 =
								(
								(long) CINT(BgL_arg2428z00_5990) ^
								(long) CINT(BgL_arg2430z00_5991));
						}
						BgL_arg2424z00_5987 =
							((long) CINT(BgL_arg2425z00_5988) ^ BgL_arg2426z00_5989);
					}
					return BINT(((long) CINT(BgL_arg2422z00_5986) ^ BgL_arg2424z00_5987));
		}}}

	}



/* &bbv-hash-rtl_globalr1729 */
	obj_t BGl_z62bbvzd2hashzd2rtl_globalr1729z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5465, obj_t BgL_oz00_5466)
	{
		{	/* SawMill/bbv-types.scm 625 */
			{

				{	/* SawMill/bbv-types.scm 627 */
					obj_t BgL_arg2419z00_5997;
					obj_t BgL_arg2420z00_5998;

					{	/* SawMill/bbv-types.scm 625 */
						obj_t BgL_nextzd2method1728zd2_5996;

						BgL_nextzd2method1728zd2_5996 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_globalrefz00_bglt) BgL_oz00_5466)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_globalrefz00zzsaw_defsz00);
						BgL_arg2419z00_5997 =
							PROCEDURE_ENTRY(BgL_nextzd2method1728zd2_5996)
							(BgL_nextzd2method1728zd2_5996,
							((obj_t) ((BgL_rtl_globalrefz00_bglt) BgL_oz00_5466)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 627 */
						BgL_globalz00_bglt BgL_arg2421z00_5999;

						BgL_arg2421z00_5999 =
							(((BgL_rtl_globalrefz00_bglt) COBJECT(
									((BgL_rtl_globalrefz00_bglt) BgL_oz00_5466)))->BgL_varz00);
						BgL_arg2420z00_5998 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2421z00_5999));
					}
					return
						BINT(
						((long) CINT(BgL_arg2419z00_5997) ^
							(long) CINT(BgL_arg2420z00_5998)));
		}}}

	}



/* &bbv-hash-rtl_loadfun1727 */
	obj_t BGl_z62bbvzd2hashzd2rtl_loadfun1727z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5467, obj_t BgL_oz00_5468)
	{
		{	/* SawMill/bbv-types.scm 618 */
			{

				{	/* SawMill/bbv-types.scm 620 */
					obj_t BgL_arg2415z00_6003;
					obj_t BgL_arg2416z00_6004;

					{	/* SawMill/bbv-types.scm 618 */
						obj_t BgL_nextzd2method1726zd2_6002;

						BgL_nextzd2method1726zd2_6002 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_loadfunz00_bglt) BgL_oz00_5468)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_loadfunz00zzsaw_defsz00);
						BgL_arg2415z00_6003 =
							PROCEDURE_ENTRY(BgL_nextzd2method1726zd2_6002)
							(BgL_nextzd2method1726zd2_6002,
							((obj_t) ((BgL_rtl_loadfunz00_bglt) BgL_oz00_5468)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 620 */
						BgL_globalz00_bglt BgL_arg2418z00_6005;

						BgL_arg2418z00_6005 =
							(((BgL_rtl_loadfunz00_bglt) COBJECT(
									((BgL_rtl_loadfunz00_bglt) BgL_oz00_5468)))->BgL_varz00);
						BgL_arg2416z00_6004 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2418z00_6005));
					}
					return
						BINT(
						((long) CINT(BgL_arg2415z00_6003) ^
							(long) CINT(BgL_arg2416z00_6004)));
		}}}

	}



/* &bbv-hash-rtl_loadg1725 */
	obj_t BGl_z62bbvzd2hashzd2rtl_loadg1725z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5469, obj_t BgL_oz00_5470)
	{
		{	/* SawMill/bbv-types.scm 611 */
			{

				{	/* SawMill/bbv-types.scm 613 */
					obj_t BgL_arg2412z00_6009;
					obj_t BgL_arg2413z00_6010;

					{	/* SawMill/bbv-types.scm 611 */
						obj_t BgL_nextzd2method1724zd2_6008;

						BgL_nextzd2method1724zd2_6008 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_loadgz00_bglt) BgL_oz00_5470)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_loadgz00zzsaw_defsz00);
						BgL_arg2412z00_6009 =
							PROCEDURE_ENTRY(BgL_nextzd2method1724zd2_6008)
							(BgL_nextzd2method1724zd2_6008,
							((obj_t) ((BgL_rtl_loadgz00_bglt) BgL_oz00_5470)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 613 */
						BgL_globalz00_bglt BgL_arg2414z00_6011;

						BgL_arg2414z00_6011 =
							(((BgL_rtl_loadgz00_bglt) COBJECT(
									((BgL_rtl_loadgz00_bglt) BgL_oz00_5470)))->BgL_varz00);
						BgL_arg2413z00_6010 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2414z00_6011));
					}
					return
						BINT(
						((long) CINT(BgL_arg2412z00_6009) ^
							(long) CINT(BgL_arg2413z00_6010)));
		}}}

	}



/* &bbv-hash-rtl_loadi1723 */
	obj_t BGl_z62bbvzd2hashzd2rtl_loadi1723z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5471, obj_t BgL_oz00_5472)
	{
		{	/* SawMill/bbv-types.scm 604 */
			{

				{	/* SawMill/bbv-types.scm 606 */
					obj_t BgL_arg2407z00_6015;
					obj_t BgL_arg2409z00_6016;

					{	/* SawMill/bbv-types.scm 604 */
						obj_t BgL_nextzd2method1722zd2_6014;

						BgL_nextzd2method1722zd2_6014 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_loadiz00_bglt) BgL_oz00_5472)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_loadiz00zzsaw_defsz00);
						BgL_arg2407z00_6015 =
							PROCEDURE_ENTRY(BgL_nextzd2method1722zd2_6014)
							(BgL_nextzd2method1722zd2_6014,
							((obj_t) ((BgL_rtl_loadiz00_bglt) BgL_oz00_5472)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 606 */
						BgL_atomz00_bglt BgL_arg2411z00_6017;

						BgL_arg2411z00_6017 =
							(((BgL_rtl_loadiz00_bglt) COBJECT(
									((BgL_rtl_loadiz00_bglt) BgL_oz00_5472)))->BgL_constantz00);
						BgL_arg2409z00_6016 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2411z00_6017));
					}
					return
						BINT(
						((long) CINT(BgL_arg2407z00_6015) ^
							(long) CINT(BgL_arg2409z00_6016)));
		}}}

	}



/* &bbv-hash-rtl_return1721 */
	obj_t BGl_z62bbvzd2hashzd2rtl_return1721z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5473, obj_t BgL_oz00_5474)
	{
		{	/* SawMill/bbv-types.scm 597 */
			{

				{	/* SawMill/bbv-types.scm 599 */
					obj_t BgL_arg2404z00_6021;
					obj_t BgL_arg2405z00_6022;

					{	/* SawMill/bbv-types.scm 597 */
						obj_t BgL_nextzd2method1720zd2_6020;

						BgL_nextzd2method1720zd2_6020 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_returnz00_bglt) BgL_oz00_5474)),
							BGl_bbvzd2hashzd2envz00zzsaw_bbvzd2typeszd2,
							BGl_rtl_returnz00zzsaw_defsz00);
						BgL_arg2404z00_6021 =
							PROCEDURE_ENTRY(BgL_nextzd2method1720zd2_6020)
							(BgL_nextzd2method1720zd2_6020,
							((obj_t) ((BgL_rtl_returnz00_bglt) BgL_oz00_5474)), BEOA);
					}
					{	/* SawMill/bbv-types.scm 599 */
						BgL_typez00_bglt BgL_arg2406z00_6023;

						BgL_arg2406z00_6023 =
							(((BgL_rtl_returnz00_bglt) COBJECT(
									((BgL_rtl_returnz00_bglt) BgL_oz00_5474)))->BgL_typez00);
						BgL_arg2405z00_6022 =
							BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
							((obj_t) BgL_arg2406z00_6023));
					}
					return
						BINT(
						((long) CINT(BgL_arg2404z00_6021) ^
							(long) CINT(BgL_arg2405z00_6022)));
		}}}

	}



/* &bbv-hash-rtl_fun1719 */
	obj_t BGl_z62bbvzd2hashzd2rtl_fun1719z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5475, obj_t BgL_oz00_5476)
	{
		{	/* SawMill/bbv-types.scm 591 */
			{	/* SawMill/bbv-types.scm 592 */
				obj_t BgL_arg2399z00_6025;

				{	/* SawMill/bbv-types.scm 592 */
					obj_t BgL_arg2402z00_6026;

					{	/* SawMill/bbv-types.scm 592 */
						long BgL_arg1816z00_6027;

						{	/* SawMill/bbv-types.scm 592 */
							long BgL_arg1817z00_6028;

							{	/* SawMill/bbv-types.scm 592 */
								long BgL_res3022z00_6029;

								BgL_res3022z00_6029 =
									BGL_OBJECT_CLASS_NUM(
									((BgL_objectz00_bglt) ((BgL_rtl_funz00_bglt) BgL_oz00_5476)));
								BgL_arg1817z00_6028 = BgL_res3022z00_6029;
							}
							BgL_arg1816z00_6027 = (BgL_arg1817z00_6028 - OBJECT_TYPE);
						}
						BgL_arg2402z00_6026 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_6027);
					}
					BgL_arg2399z00_6025 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg2402z00_6026);
				}
				return BINT(bgl_symbol_hash_number(BgL_arg2399z00_6025));
			}
		}

	}



/* &bbv-hash-rtl_reg1717 */
	obj_t BGl_z62bbvzd2hashzd2rtl_reg1717z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5477, obj_t BgL_oz00_5478)
	{
		{	/* SawMill/bbv-types.scm 583 */
			{	/* SawMill/bbv-types.scm 585 */
				obj_t BgL_arg2391z00_6031;
				long BgL_arg2392z00_6032;

				{	/* SawMill/bbv-types.scm 585 */
					BgL_typez00_bglt BgL_arg2393z00_6033;

					BgL_arg2393z00_6033 =
						(((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_oz00_5478)))->BgL_typez00);
					BgL_arg2391z00_6031 =
						BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
						((obj_t) BgL_arg2393z00_6033));
				}
				BgL_arg2392z00_6032 =
					(bgl_symbol_hash_number(
						(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_oz00_5478)))->BgL_namez00)) ^
					bgl_symbol_hash_number(
						(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_oz00_5478)))->BgL_keyz00)));
				return BINT(((long) CINT(BgL_arg2391z00_6031) ^ BgL_arg2392z00_6032));
		}}

	}



/* &bbv-hash-rtl_ins/bbv1715 */
	obj_t BGl_z62bbvzd2hashzd2rtl_inszf2bbv1715z90zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5479, obj_t BgL_oz00_5480)
	{
		{	/* SawMill/bbv-types.scm 569 */
			{	/* SawMill/bbv-types.scm 571 */
				bool_t BgL_test3546z00_9166;

				{	/* SawMill/bbv-types.scm 571 */
					obj_t BgL_tmpz00_9167;

					{
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9168;

						{
							obj_t BgL_auxz00_9169;

							{	/* SawMill/bbv-types.scm 571 */
								BgL_objectz00_bglt BgL_tmpz00_9170;

								BgL_tmpz00_9170 =
									((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5480));
								BgL_auxz00_9169 = BGL_OBJECT_WIDENING(BgL_tmpz00_9170);
							}
							BgL_auxz00_9168 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9169);
						}
						BgL_tmpz00_9167 =
							(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9168))->
							BgL_z52hashz52);
					}
					BgL_test3546z00_9166 = CBOOL(BgL_tmpz00_9167);
				}
				if (BgL_test3546z00_9166)
					{	/* SawMill/bbv-types.scm 571 */
						BFALSE;
					}
				else
					{
						obj_t BgL_auxz00_9184;
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9177;

						{	/* SawMill/bbv-types.scm 574 */
							obj_t BgL_arg2371z00_6035;
							long BgL_arg2372z00_6036;

							{	/* SawMill/bbv-types.scm 574 */
								obj_t BgL_arg2374z00_6037;

								BgL_arg2374z00_6037 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt)
												((BgL_rtl_insz00_bglt) BgL_oz00_5480))))->BgL_destz00);
								BgL_arg2371z00_6035 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(BgL_arg2374z00_6037);
							}
							{	/* SawMill/bbv-types.scm 576 */
								obj_t BgL_arg2376z00_6038;
								obj_t BgL_arg2377z00_6039;

								{	/* SawMill/bbv-types.scm 576 */
									obj_t BgL_arg2379z00_6040;

									{	/* SawMill/bbv-types.scm 576 */
										obj_t BgL_l1652z00_6041;

										BgL_l1652z00_6041 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_oz00_5480))))->
											BgL_argsz00);
										if (NULLP(BgL_l1652z00_6041))
											{	/* SawMill/bbv-types.scm 576 */
												BgL_arg2379z00_6040 = BNIL;
											}
										else
											{	/* SawMill/bbv-types.scm 576 */
												obj_t BgL_head1654z00_6042;

												{	/* SawMill/bbv-types.scm 576 */
													obj_t BgL_arg2388z00_6043;

													{	/* SawMill/bbv-types.scm 576 */
														obj_t BgL_arg2389z00_6044;

														BgL_arg2389z00_6044 = CAR(BgL_l1652z00_6041);
														BgL_arg2388z00_6043 =
															BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
															(BgL_arg2389z00_6044);
													}
													{	/* SawMill/bbv-types.scm 576 */
														obj_t BgL_res3015z00_6045;

														BgL_res3015z00_6045 =
															MAKE_YOUNG_PAIR(BgL_arg2388z00_6043, BNIL);
														BgL_head1654z00_6042 = BgL_res3015z00_6045;
													}
												}
												{	/* SawMill/bbv-types.scm 576 */
													obj_t BgL_g1657z00_6046;

													BgL_g1657z00_6046 = CDR(BgL_l1652z00_6041);
													{
														obj_t BgL_l1652z00_6048;
														obj_t BgL_tail1655z00_6049;

														BgL_l1652z00_6048 = BgL_g1657z00_6046;
														BgL_tail1655z00_6049 = BgL_head1654z00_6042;
													BgL_zc3z04anonymousza32381ze3z87_6047:
														if (NULLP(BgL_l1652z00_6048))
															{	/* SawMill/bbv-types.scm 576 */
																BgL_arg2379z00_6040 = BgL_head1654z00_6042;
															}
														else
															{	/* SawMill/bbv-types.scm 576 */
																obj_t BgL_newtail1656z00_6050;

																{	/* SawMill/bbv-types.scm 576 */
																	obj_t BgL_arg2384z00_6051;

																	{	/* SawMill/bbv-types.scm 576 */
																		obj_t BgL_arg2385z00_6052;

																		BgL_arg2385z00_6052 =
																			CAR(((obj_t) BgL_l1652z00_6048));
																		BgL_arg2384z00_6051 =
																			BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
																			(BgL_arg2385z00_6052);
																	}
																	{	/* SawMill/bbv-types.scm 576 */
																		obj_t BgL_res3017z00_6053;

																		BgL_res3017z00_6053 =
																			MAKE_YOUNG_PAIR(BgL_arg2384z00_6051,
																			BNIL);
																		BgL_newtail1656z00_6050 =
																			BgL_res3017z00_6053;
																	}
																}
																SET_CDR(BgL_tail1655z00_6049,
																	BgL_newtail1656z00_6050);
																{	/* SawMill/bbv-types.scm 576 */
																	obj_t BgL_arg2383z00_6054;

																	BgL_arg2383z00_6054 =
																		CDR(((obj_t) BgL_l1652z00_6048));
																	{
																		obj_t BgL_tail1655z00_9208;
																		obj_t BgL_l1652z00_9207;

																		BgL_l1652z00_9207 = BgL_arg2383z00_6054;
																		BgL_tail1655z00_9208 =
																			BgL_newtail1656z00_6050;
																		BgL_tail1655z00_6049 = BgL_tail1655z00_9208;
																		BgL_l1652z00_6048 = BgL_l1652z00_9207;
																		goto BgL_zc3z04anonymousza32381ze3z87_6047;
																	}
																}
															}
													}
												}
											}
									}
									BgL_arg2376z00_6038 =
										BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2
										(BgL_arg2379z00_6040);
								}
								{	/* SawMill/bbv-types.scm 577 */
									BgL_rtl_funz00_bglt BgL_arg2390z00_6055;

									BgL_arg2390z00_6055 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_oz00_5480))))->BgL_funz00);
									BgL_arg2377z00_6039 =
										BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(
										((obj_t) BgL_arg2390z00_6055));
								}
								BgL_arg2372z00_6036 =
									(
									(long) CINT(BgL_arg2376z00_6038) ^
									(long) CINT(BgL_arg2377z00_6039));
							}
							BgL_auxz00_9184 =
								BINT(((long) CINT(BgL_arg2371z00_6035) ^ BgL_arg2372z00_6036));
						}
						{
							obj_t BgL_auxz00_9178;

							{	/* SawMill/bbv-types.scm 572 */
								BgL_objectz00_bglt BgL_tmpz00_9179;

								BgL_tmpz00_9179 =
									((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5480));
								BgL_auxz00_9178 = BGL_OBJECT_WIDENING(BgL_tmpz00_9179);
							}
							BgL_auxz00_9177 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9178);
						}
						((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9177))->
								BgL_z52hashz52) = ((obj_t) BgL_auxz00_9184), BUNSPEC);
			}}
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9222;

				{
					obj_t BgL_auxz00_9223;

					{	/* SawMill/bbv-types.scm 578 */
						BgL_objectz00_bglt BgL_tmpz00_9224;

						BgL_tmpz00_9224 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_5480));
						BgL_auxz00_9223 = BGL_OBJECT_WIDENING(BgL_tmpz00_9224);
					}
					BgL_auxz00_9222 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9223);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9222))->
					BgL_z52hashz52);
			}
		}

	}



/* &bbv-hash-blockS1713 */
	obj_t BGl_z62bbvzd2hashzd2blockS1713z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5481, obj_t BgL_oz00_5482)
	{
		{	/* SawMill/bbv-types.scm 557 */
			{
				obj_t BgL_insz00_6058;

				{	/* SawMill/bbv-types.scm 563 */
					bool_t BgL_test3549z00_9230;

					{	/* SawMill/bbv-types.scm 563 */
						obj_t BgL_tmpz00_9231;

						{
							BgL_blocksz00_bglt BgL_auxz00_9232;

							{
								obj_t BgL_auxz00_9233;

								{	/* SawMill/bbv-types.scm 563 */
									BgL_objectz00_bglt BgL_tmpz00_9234;

									BgL_tmpz00_9234 =
										((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5482));
									BgL_auxz00_9233 = BGL_OBJECT_WIDENING(BgL_tmpz00_9234);
								}
								BgL_auxz00_9232 = ((BgL_blocksz00_bglt) BgL_auxz00_9233);
							}
							BgL_tmpz00_9231 =
								(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9232))->
								BgL_z52hashz52);
						}
						BgL_test3549z00_9230 = CBOOL(BgL_tmpz00_9231);
					}
					if (BgL_test3549z00_9230)
						{	/* SawMill/bbv-types.scm 563 */
							BFALSE;
						}
					else
						{
							obj_t BgL_auxz00_9248;
							BgL_blocksz00_bglt BgL_auxz00_9241;

							{	/* SawMill/bbv-types.scm 563 */
								obj_t BgL_arg2358z00_6072;

								BgL_arg2358z00_6072 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_oz00_5482))))->BgL_firstz00);
								BgL_insz00_6058 = BgL_arg2358z00_6072;
								{	/* SawMill/bbv-types.scm 560 */
									obj_t BgL_arg2361z00_6059;

									{	/* SawMill/bbv-types.scm 560 */
										obj_t BgL_head1648z00_6060;

										{	/* SawMill/bbv-types.scm 560 */
											obj_t BgL_arg2368z00_6061;

											BgL_arg2368z00_6061 =
												BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(CAR
												(BgL_insz00_6058));
											{	/* SawMill/bbv-types.scm 560 */
												obj_t BgL_res3011z00_6062;

												BgL_res3011z00_6062 =
													MAKE_YOUNG_PAIR(BgL_arg2368z00_6061, BNIL);
												BgL_head1648z00_6060 = BgL_res3011z00_6062;
											}
										}
										{	/* SawMill/bbv-types.scm 560 */
											obj_t BgL_g1651z00_6063;

											BgL_g1651z00_6063 = CDR(BgL_insz00_6058);
											{
												obj_t BgL_l1646z00_6065;
												obj_t BgL_tail1649z00_6066;

												BgL_l1646z00_6065 = BgL_g1651z00_6063;
												BgL_tail1649z00_6066 = BgL_head1648z00_6060;
											BgL_zc3z04anonymousza32363ze3z87_6064:
												if (NULLP(BgL_l1646z00_6065))
													{	/* SawMill/bbv-types.scm 560 */
														BgL_arg2361z00_6059 = BgL_head1648z00_6060;
													}
												else
													{	/* SawMill/bbv-types.scm 560 */
														obj_t BgL_newtail1650z00_6067;

														{	/* SawMill/bbv-types.scm 560 */
															obj_t BgL_arg2366z00_6068;

															{	/* SawMill/bbv-types.scm 560 */
																obj_t BgL_arg2367z00_6069;

																BgL_arg2367z00_6069 =
																	CAR(((obj_t) BgL_l1646z00_6065));
																BgL_arg2366z00_6068 =
																	BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
																	(BgL_arg2367z00_6069);
															}
															{	/* SawMill/bbv-types.scm 560 */
																obj_t BgL_res3013z00_6070;

																BgL_res3013z00_6070 =
																	MAKE_YOUNG_PAIR(BgL_arg2366z00_6068, BNIL);
																BgL_newtail1650z00_6067 = BgL_res3013z00_6070;
															}
														}
														SET_CDR(BgL_tail1649z00_6066,
															BgL_newtail1650z00_6067);
														{	/* SawMill/bbv-types.scm 560 */
															obj_t BgL_arg2365z00_6071;

															BgL_arg2365z00_6071 =
																CDR(((obj_t) BgL_l1646z00_6065));
															{
																obj_t BgL_tail1649z00_9266;
																obj_t BgL_l1646z00_9265;

																BgL_l1646z00_9265 = BgL_arg2365z00_6071;
																BgL_tail1649z00_9266 = BgL_newtail1650z00_6067;
																BgL_tail1649z00_6066 = BgL_tail1649z00_9266;
																BgL_l1646z00_6065 = BgL_l1646z00_9265;
																goto BgL_zc3z04anonymousza32363ze3z87_6064;
															}
														}
													}
											}
										}
									}
									BgL_auxz00_9248 =
										BGl_bitzd2xorza2z70zzsaw_bbvzd2typeszd2
										(BgL_arg2361z00_6059);
								}
							}
							{
								obj_t BgL_auxz00_9242;

								{	/* SawMill/bbv-types.scm 563 */
									BgL_objectz00_bglt BgL_tmpz00_9243;

									BgL_tmpz00_9243 =
										((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5482));
									BgL_auxz00_9242 = BGL_OBJECT_WIDENING(BgL_tmpz00_9243);
								}
								BgL_auxz00_9241 = ((BgL_blocksz00_bglt) BgL_auxz00_9242);
							}
							((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9241))->
									BgL_z52hashz52) = ((obj_t) BgL_auxz00_9248), BUNSPEC);
						}
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_9269;

					{
						obj_t BgL_auxz00_9270;

						{	/* SawMill/bbv-types.scm 564 */
							BgL_objectz00_bglt BgL_tmpz00_9271;

							BgL_tmpz00_9271 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5482));
							BgL_auxz00_9270 = BGL_OBJECT_WIDENING(BgL_tmpz00_9271);
						}
						BgL_auxz00_9269 = ((BgL_blocksz00_bglt) BgL_auxz00_9270);
					}
					return
						(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9269))->BgL_z52hashz52);
				}
			}
		}

	}



/* &bbv-hash-atom1711 */
	obj_t BGl_z62bbvzd2hashzd2atom1711z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5483, obj_t BgL_oz00_5484)
	{
		{	/* SawMill/bbv-types.scm 550 */
			{	/* SawMill/bbv-types.scm 552 */
				obj_t BgL_arg2356z00_6074;

				BgL_arg2356z00_6074 =
					(((BgL_atomz00_bglt) COBJECT(
							((BgL_atomz00_bglt) BgL_oz00_5484)))->BgL_valuez00);
				return BINT(BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg2356z00_6074));
			}
		}

	}



/* &bbv-hash-type1709 */
	obj_t BGl_z62bbvzd2hashzd2type1709z62zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5485, obj_t BgL_oz00_5486)
	{
		{	/* SawMill/bbv-types.scm 543 */
			{	/* SawMill/bbv-types.scm 545 */
				obj_t BgL_arg2355z00_6076;

				BgL_arg2355z00_6076 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_5486)))->BgL_idz00);
				return BINT(bgl_symbol_hash_number(BgL_arg2355z00_6076));
			}
		}

	}



/* &dump-blockS1705 */
	obj_t BGl_z62dumpzd2blockS1705zb0zzsaw_bbvzd2typeszd2(obj_t BgL_envz00_5487,
		obj_t BgL_oz00_5488, obj_t BgL_pz00_5489, obj_t BgL_mz00_5490)
	{
		{	/* SawMill/bbv-types.scm 388 */
			{	/* SawMill/bbv-types.scm 390 */
				obj_t BgL_tmpz00_9285;

				BgL_tmpz00_9285 = ((obj_t) BgL_pz00_5489);
				bgl_display_string(BGl_string3219z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9285);
			}
			{	/* SawMill/bbv-types.scm 390 */
				int BgL_arg2321z00_6078;

				BgL_arg2321z00_6078 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_oz00_5488))))->BgL_labelz00);
				bgl_display_obj(BINT(BgL_arg2321z00_6078), BgL_pz00_5489);
			}
			{	/* SawMill/bbv-types.scm 390 */
				obj_t BgL_tmpz00_9293;

				BgL_tmpz00_9293 = ((obj_t) BgL_pz00_5489);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_9293);
			}
			{	/* SawMill/bbv-types.scm 392 */
				obj_t BgL_tmpz00_9296;

				BgL_tmpz00_9296 = ((obj_t) BgL_pz00_5489);
				bgl_display_string(BGl_string3220z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9296);
			}
			{	/* SawMill/bbv-types.scm 392 */
				int BgL_arg2322z00_6079;

				{	/* SawMill/bbv-types.scm 392 */
					obj_t BgL_arg2323z00_6080;

					{
						BgL_blocksz00_bglt BgL_auxz00_9299;

						{
							obj_t BgL_auxz00_9300;

							{	/* SawMill/bbv-types.scm 392 */
								BgL_objectz00_bglt BgL_tmpz00_9301;

								BgL_tmpz00_9301 =
									((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5488));
								BgL_auxz00_9300 = BGL_OBJECT_WIDENING(BgL_tmpz00_9301);
							}
							BgL_auxz00_9299 = ((BgL_blocksz00_bglt) BgL_auxz00_9300);
						}
						BgL_arg2323z00_6080 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9299))->
							BgL_z52parentz52);
					}
					BgL_arg2322z00_6079 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_arg2323z00_6080)))->BgL_labelz00);
				}
				bgl_display_obj(BINT(BgL_arg2322z00_6079), BgL_pz00_5489);
			}
			{	/* SawMill/bbv-types.scm 392 */
				obj_t BgL_tmpz00_9311;

				BgL_tmpz00_9311 = ((obj_t) BgL_pz00_5489);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_9311);
			}
			{	/* SawMill/bbv-types.scm 393 */
				obj_t BgL_tmpz00_9314;

				BgL_tmpz00_9314 = ((obj_t) BgL_pz00_5489);
				bgl_display_string(BGl_string3221z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9314);
			}
			{	/* SawMill/bbv-types.scm 393 */
				obj_t BgL_arg2324z00_6081;

				{	/* SawMill/bbv-types.scm 393 */
					obj_t BgL_arg2325z00_6082;

					{
						BgL_blocksz00_bglt BgL_auxz00_9317;

						{
							obj_t BgL_auxz00_9318;

							{	/* SawMill/bbv-types.scm 393 */
								BgL_objectz00_bglt BgL_tmpz00_9319;

								BgL_tmpz00_9319 =
									((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5488));
								BgL_auxz00_9318 = BGL_OBJECT_WIDENING(BgL_tmpz00_9319);
							}
							BgL_auxz00_9317 = ((BgL_blocksz00_bglt) BgL_auxz00_9318);
						}
						BgL_arg2325z00_6082 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9317))->BgL_ictxz00);
					}
					BgL_arg2324z00_6081 =
						BGl_ctxzd2ze3stringz31zzsaw_bbvzd2typeszd2(BgL_arg2325z00_6082);
				}
				bgl_display_obj(BgL_arg2324z00_6081, BgL_pz00_5489);
			}
			{	/* SawMill/bbv-types.scm 393 */
				obj_t BgL_tmpz00_9327;

				BgL_tmpz00_9327 = ((obj_t) BgL_pz00_5489);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_9327);
			}
			{	/* SawMill/bbv-types.scm 394 */
				obj_t BgL_g1628z00_6083;

				{
					BgL_blocksz00_bglt BgL_auxz00_9330;

					{
						obj_t BgL_auxz00_9331;

						{	/* SawMill/bbv-types.scm 394 */
							BgL_objectz00_bglt BgL_tmpz00_9332;

							BgL_tmpz00_9332 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_5488));
							BgL_auxz00_9331 = BGL_OBJECT_WIDENING(BgL_tmpz00_9332);
						}
						BgL_auxz00_9330 = ((BgL_blocksz00_bglt) BgL_auxz00_9331);
					}
					BgL_g1628z00_6083 =
						(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_9330))->BgL_octxsz00);
				}
				{
					obj_t BgL_l1626z00_6085;

					BgL_l1626z00_6085 = BgL_g1628z00_6083;
				BgL_zc3z04anonymousza32326ze3z87_6084:
					if (PAIRP(BgL_l1626z00_6085))
						{	/* SawMill/bbv-types.scm 394 */
							{	/* SawMill/bbv-types.scm 395 */
								obj_t BgL_ctxz00_6086;

								BgL_ctxz00_6086 = CAR(BgL_l1626z00_6085);
								{	/* SawMill/bbv-types.scm 395 */
									obj_t BgL_tmpz00_9341;

									BgL_tmpz00_9341 = ((obj_t) BgL_pz00_5489);
									bgl_display_string(BGl_string3222z00zzsaw_bbvzd2typeszd2,
										BgL_tmpz00_9341);
								}
								bgl_display_obj(BGl_ctxzd2ze3stringz31zzsaw_bbvzd2typeszd2
									(BgL_ctxz00_6086), BgL_pz00_5489);
								{	/* SawMill/bbv-types.scm 395 */
									obj_t BgL_tmpz00_9346;

									BgL_tmpz00_9346 = ((obj_t) BgL_pz00_5489);
									bgl_display_char(((unsigned char) 10), BgL_tmpz00_9346);
							}}
							{
								obj_t BgL_l1626z00_9349;

								BgL_l1626z00_9349 = CDR(BgL_l1626z00_6085);
								BgL_l1626z00_6085 = BgL_l1626z00_9349;
								goto BgL_zc3z04anonymousza32326ze3z87_6084;
							}
						}
					else
						{	/* SawMill/bbv-types.scm 394 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/bbv-types.scm 399 */
				long BgL_arg2331z00_6087;

				BgL_arg2331z00_6087 = ((long) CINT(BgL_mz00_5490) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_5489,
					(int) (BgL_arg2331z00_6087));
			}
			{	/* SawMill/bbv-types.scm 400 */
				obj_t BgL_tmpz00_9355;

				BgL_tmpz00_9355 = ((obj_t) BgL_pz00_5489);
				bgl_display_string(BGl_string3223z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9355);
			}
			{	/* SawMill/bbv-types.scm 400 */
				obj_t BgL_arg2332z00_6088;

				{	/* SawMill/bbv-types.scm 400 */
					obj_t BgL_l1629z00_6089;

					BgL_l1629z00_6089 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_oz00_5488))))->BgL_predsz00);
					if (NULLP(BgL_l1629z00_6089))
						{	/* SawMill/bbv-types.scm 400 */
							BgL_arg2332z00_6088 = BNIL;
						}
					else
						{	/* SawMill/bbv-types.scm 400 */
							obj_t BgL_head1631z00_6090;

							{	/* SawMill/bbv-types.scm 400 */
								int BgL_arg2339z00_6091;

								BgL_arg2339z00_6091 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												CAR(BgL_l1629z00_6089))))->BgL_labelz00);
								{	/* SawMill/bbv-types.scm 400 */
									obj_t BgL_res2999z00_6092;

									BgL_res2999z00_6092 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg2339z00_6091), BNIL);
									BgL_head1631z00_6090 = BgL_res2999z00_6092;
							}}
							{	/* SawMill/bbv-types.scm 400 */
								obj_t BgL_g1634z00_6093;

								BgL_g1634z00_6093 = CDR(BgL_l1629z00_6089);
								{
									obj_t BgL_l1629z00_6095;
									obj_t BgL_tail1632z00_6096;

									BgL_l1629z00_6095 = BgL_g1634z00_6093;
									BgL_tail1632z00_6096 = BgL_head1631z00_6090;
								BgL_zc3z04anonymousza32334ze3z87_6094:
									if (NULLP(BgL_l1629z00_6095))
										{	/* SawMill/bbv-types.scm 400 */
											BgL_arg2332z00_6088 = BgL_head1631z00_6090;
										}
									else
										{	/* SawMill/bbv-types.scm 400 */
											obj_t BgL_newtail1633z00_6097;

											{	/* SawMill/bbv-types.scm 400 */
												int BgL_arg2337z00_6098;

												BgL_arg2337z00_6098 =
													(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt)
																CAR(
																	((obj_t) BgL_l1629z00_6095)))))->
													BgL_labelz00);
												{	/* SawMill/bbv-types.scm 400 */
													obj_t BgL_res3001z00_6099;

													BgL_res3001z00_6099 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2337z00_6098), BNIL);
													BgL_newtail1633z00_6097 = BgL_res3001z00_6099;
											}}
											SET_CDR(BgL_tail1632z00_6096, BgL_newtail1633z00_6097);
											{	/* SawMill/bbv-types.scm 400 */
												obj_t BgL_arg2336z00_6100;

												BgL_arg2336z00_6100 = CDR(((obj_t) BgL_l1629z00_6095));
												{
													obj_t BgL_tail1632z00_9381;
													obj_t BgL_l1629z00_9380;

													BgL_l1629z00_9380 = BgL_arg2336z00_6100;
													BgL_tail1632z00_9381 = BgL_newtail1633z00_6097;
													BgL_tail1632z00_6096 = BgL_tail1632z00_9381;
													BgL_l1629z00_6095 = BgL_l1629z00_9380;
													goto BgL_zc3z04anonymousza32334ze3z87_6094;
												}
											}
										}
								}
							}
						}
				}
				bgl_display_obj(BgL_arg2332z00_6088, BgL_pz00_5489);
			}
			{	/* SawMill/bbv-types.scm 400 */
				obj_t BgL_tmpz00_9383;

				BgL_tmpz00_9383 = ((obj_t) BgL_pz00_5489);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_9383);
			}
			{	/* SawMill/bbv-types.scm 401 */
				long BgL_arg2341z00_6101;

				BgL_arg2341z00_6101 = ((long) CINT(BgL_mz00_5490) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_5489,
					(int) (BgL_arg2341z00_6101));
			}
			{	/* SawMill/bbv-types.scm 402 */
				obj_t BgL_tmpz00_9390;

				BgL_tmpz00_9390 = ((obj_t) BgL_pz00_5489);
				bgl_display_string(BGl_string3224z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9390);
			}
			{	/* SawMill/bbv-types.scm 402 */
				obj_t BgL_arg2342z00_6102;

				{	/* SawMill/bbv-types.scm 402 */
					obj_t BgL_l1636z00_6103;

					BgL_l1636z00_6103 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_oz00_5488))))->BgL_succsz00);
					if (NULLP(BgL_l1636z00_6103))
						{	/* SawMill/bbv-types.scm 402 */
							BgL_arg2342z00_6102 = BNIL;
						}
					else
						{	/* SawMill/bbv-types.scm 402 */
							obj_t BgL_head1638z00_6104;

							{	/* SawMill/bbv-types.scm 402 */
								int BgL_arg2350z00_6105;

								BgL_arg2350z00_6105 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												CAR(BgL_l1636z00_6103))))->BgL_labelz00);
								{	/* SawMill/bbv-types.scm 402 */
									obj_t BgL_res3004z00_6106;

									BgL_res3004z00_6106 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg2350z00_6105), BNIL);
									BgL_head1638z00_6104 = BgL_res3004z00_6106;
							}}
							{	/* SawMill/bbv-types.scm 402 */
								obj_t BgL_g1641z00_6107;

								BgL_g1641z00_6107 = CDR(BgL_l1636z00_6103);
								{
									obj_t BgL_l1636z00_6109;
									obj_t BgL_tail1639z00_6110;

									BgL_l1636z00_6109 = BgL_g1641z00_6107;
									BgL_tail1639z00_6110 = BgL_head1638z00_6104;
								BgL_zc3z04anonymousza32344ze3z87_6108:
									if (NULLP(BgL_l1636z00_6109))
										{	/* SawMill/bbv-types.scm 402 */
											BgL_arg2342z00_6102 = BgL_head1638z00_6104;
										}
									else
										{	/* SawMill/bbv-types.scm 402 */
											obj_t BgL_newtail1640z00_6111;

											{	/* SawMill/bbv-types.scm 402 */
												int BgL_arg2347z00_6112;

												BgL_arg2347z00_6112 =
													(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt)
																CAR(
																	((obj_t) BgL_l1636z00_6109)))))->
													BgL_labelz00);
												{	/* SawMill/bbv-types.scm 402 */
													obj_t BgL_res3006z00_6113;

													BgL_res3006z00_6113 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2347z00_6112), BNIL);
													BgL_newtail1640z00_6111 = BgL_res3006z00_6113;
											}}
											SET_CDR(BgL_tail1639z00_6110, BgL_newtail1640z00_6111);
											{	/* SawMill/bbv-types.scm 402 */
												obj_t BgL_arg2346z00_6114;

												BgL_arg2346z00_6114 = CDR(((obj_t) BgL_l1636z00_6109));
												{
													obj_t BgL_tail1639z00_9416;
													obj_t BgL_l1636z00_9415;

													BgL_l1636z00_9415 = BgL_arg2346z00_6114;
													BgL_tail1639z00_9416 = BgL_newtail1640z00_6111;
													BgL_tail1639z00_6110 = BgL_tail1639z00_9416;
													BgL_l1636z00_6109 = BgL_l1636z00_9415;
													goto BgL_zc3z04anonymousza32344ze3z87_6108;
												}
											}
										}
								}
							}
						}
				}
				bgl_display_obj(BgL_arg2342z00_6102, BgL_pz00_5489);
			}
			{	/* SawMill/bbv-types.scm 402 */
				obj_t BgL_tmpz00_9418;

				BgL_tmpz00_9418 = ((obj_t) BgL_pz00_5489);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_9418);
			}
			{	/* SawMill/bbv-types.scm 403 */
				long BgL_arg2352z00_6115;

				BgL_arg2352z00_6115 = ((long) CINT(BgL_mz00_5490) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_5489,
					(int) (BgL_arg2352z00_6115));
			}
			{	/* SawMill/bbv-types.scm 404 */
				obj_t BgL_arg2353z00_6116;
				long BgL_arg2354z00_6117;

				BgL_arg2353z00_6116 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_oz00_5488))))->BgL_firstz00);
				BgL_arg2354z00_6117 = ((long) CINT(BgL_mz00_5490) + ((long) 1));
				BGl_dumpza2za2zzsaw_defsz00(BgL_arg2353z00_6116, BgL_pz00_5489,
					(int) (BgL_arg2354z00_6117));
			}
			{	/* SawMill/bbv-types.scm 405 */
				obj_t BgL_tmpz00_9432;

				BgL_tmpz00_9432 = ((obj_t) BgL_pz00_5489);
				return
					bgl_display_string(BGl_string3225z00zzsaw_bbvzd2typeszd2,
					BgL_tmpz00_9432);
			}
		}

	}



/* &dump-rtl_ins/bbv1703 */
	obj_t BGl_z62dumpzd2rtl_inszf2bbv1703z42zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5491, obj_t BgL_oz00_5492, obj_t BgL_pz00_5493,
		obj_t BgL_mz00_5494)
	{
		{	/* SawMill/bbv-types.scm 369 */
			{	/* SawMill/bbv-types.scm 373 */
				obj_t BgL_zc3z04anonymousza32270ze3z87_6119;

				BgL_zc3z04anonymousza32270ze3z87_6119 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza32270ze3ze5zzsaw_bbvzd2typeszd2,
					(int) (((long) 0)), (int) (((long) 4)));
				PROCEDURE_SET(BgL_zc3z04anonymousza32270ze3z87_6119, (int) (((long) 0)),
					BgL_pz00_5493);
				PROCEDURE_SET(BgL_zc3z04anonymousza32270ze3z87_6119, (int) (((long) 1)),
					((obj_t) ((BgL_rtl_insz00_bglt) BgL_oz00_5492)));
				PROCEDURE_SET(BgL_zc3z04anonymousza32270ze3z87_6119, (int) (((long) 2)),
					BgL_mz00_5494);
				PROCEDURE_SET(BgL_zc3z04anonymousza32270ze3z87_6119, (int) (((long) 3)),
					((obj_t) ((BgL_rtl_insz00_bglt) BgL_oz00_5492)));
				return
					BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_pz00_5493,
					BgL_zc3z04anonymousza32270ze3z87_6119);
			}
		}

	}



/* &<@anonymous:2270> */
	obj_t BGl_z62zc3z04anonymousza32270ze3ze5zzsaw_bbvzd2typeszd2(obj_t
		BgL_envz00_5495)
	{
		{	/* SawMill/bbv-types.scm 372 */
			{	/* SawMill/bbv-types.scm 373 */
				obj_t BgL_pz00_5496;
				BgL_rtl_insz00_bglt BgL_i1255z00_5497;
				obj_t BgL_mz00_5498;
				BgL_rtl_insz00_bglt BgL_oz00_5499;

				BgL_pz00_5496 = PROCEDURE_REF(BgL_envz00_5495, (int) (((long) 0)));
				BgL_i1255z00_5497 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_5495, (int) (((long) 1))));
				BgL_mz00_5498 = PROCEDURE_REF(BgL_envz00_5495, (int) (((long) 2)));
				BgL_oz00_5499 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_5495, (int) (((long) 3))));
				if (CBOOL(
						(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_i1255z00_5497)))->BgL_destz00)))
					{	/* SawMill/bbv-types.scm 373 */
						{	/* SawMill/bbv-types.scm 374 */
							obj_t BgL_tmpz00_9465;

							BgL_tmpz00_9465 = ((obj_t) BgL_pz00_5496);
							bgl_display_string(BGl_string3226z00zzsaw_bbvzd2typeszd2,
								BgL_tmpz00_9465);
						}
						{	/* SawMill/bbv-types.scm 375 */
							obj_t BgL_arg2272z00_6120;

							BgL_arg2272z00_6120 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_i1255z00_5497)))->BgL_destz00);
							BGl_dumpz00zzsaw_defsz00(BgL_arg2272z00_6120, BgL_pz00_5496,
								CINT(BgL_mz00_5498));
						}
						{	/* SawMill/bbv-types.scm 376 */
							obj_t BgL_tmpz00_9472;

							BgL_tmpz00_9472 = ((obj_t) BgL_pz00_5496);
							bgl_display_string(BGl_string3227z00zzsaw_bbvzd2typeszd2,
								BgL_tmpz00_9472);
						}
					}
				else
					{	/* SawMill/bbv-types.scm 373 */
						BFALSE;
					}
				BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(
					((BgL_rtl_insz00_bglt) BgL_oz00_5499), BgL_pz00_5496, BgL_mz00_5498);
				if (CBOOL(
						(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_i1255z00_5497)))->BgL_destz00)))
					{	/* SawMill/bbv-types.scm 378 */
						obj_t BgL_tmpz00_9481;

						BgL_tmpz00_9481 = ((obj_t) BgL_pz00_5496);
						bgl_display_string(BGl_string3228z00zzsaw_bbvzd2typeszd2,
							BgL_tmpz00_9481);
					}
				else
					{	/* SawMill/bbv-types.scm 378 */
						BFALSE;
					}
				{	/* SawMill/bbv-types.scm 379 */
					obj_t BgL_arg2275z00_6121;

					{	/* SawMill/bbv-types.scm 379 */
						BgL_rtl_funz00_bglt BgL_arg2278z00_6122;

						BgL_arg2278z00_6122 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_i1255z00_5497)))->BgL_funz00);
						BgL_arg2275z00_6121 = bgl_typeof(((obj_t) BgL_arg2278z00_6122));
					}
					{	/* SawMill/bbv-types.scm 379 */
						obj_t BgL_list2276z00_6123;

						{	/* SawMill/bbv-types.scm 379 */
							obj_t BgL_arg2277z00_6124;

							BgL_arg2277z00_6124 = MAKE_YOUNG_PAIR(BgL_arg2275z00_6121, BNIL);
							BgL_list2276z00_6123 =
								MAKE_YOUNG_PAIR(BGl_string3229z00zzsaw_bbvzd2typeszd2,
								BgL_arg2277z00_6124);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2276z00_6123);
					}
				}
				{	/* SawMill/bbv-types.scm 380 */
					obj_t BgL_arg2280z00_6125;

					{	/* SawMill/bbv-types.scm 380 */
						obj_t BgL_l1604z00_6126;

						{	/* SawMill/bbv-types.scm 380 */
							obj_t BgL_arg2291z00_6127;

							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9491;

								{
									obj_t BgL_auxz00_9492;

									{	/* SawMill/bbv-types.scm 380 */
										BgL_objectz00_bglt BgL_tmpz00_9493;

										BgL_tmpz00_9493 = ((BgL_objectz00_bglt) BgL_i1255z00_5497);
										BgL_auxz00_9492 = BGL_OBJECT_WIDENING(BgL_tmpz00_9493);
									}
									BgL_auxz00_9491 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9492);
								}
								BgL_arg2291z00_6127 =
									(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9491))->
									BgL_defz00);
							}
							BgL_l1604z00_6126 =
								BGl_regsetzd2ze3listz31zzsaw_regsetz00(
								((BgL_regsetz00_bglt) BgL_arg2291z00_6127));
						}
						if (NULLP(BgL_l1604z00_6126))
							{	/* SawMill/bbv-types.scm 380 */
								BgL_arg2280z00_6125 = BNIL;
							}
						else
							{	/* SawMill/bbv-types.scm 380 */
								obj_t BgL_head1606z00_6128;

								{	/* SawMill/bbv-types.scm 380 */
									obj_t BgL_arg2289z00_6129;

									BgL_arg2289z00_6129 =
										BGl_shapez00zztools_shapez00(CAR(BgL_l1604z00_6126));
									{	/* SawMill/bbv-types.scm 380 */
										obj_t BgL_res2984z00_6130;

										BgL_res2984z00_6130 =
											MAKE_YOUNG_PAIR(BgL_arg2289z00_6129, BNIL);
										BgL_head1606z00_6128 = BgL_res2984z00_6130;
									}
								}
								{	/* SawMill/bbv-types.scm 380 */
									obj_t BgL_g1609z00_6131;

									BgL_g1609z00_6131 = CDR(BgL_l1604z00_6126);
									{
										obj_t BgL_l1604z00_6133;
										obj_t BgL_tail1607z00_6134;

										BgL_l1604z00_6133 = BgL_g1609z00_6131;
										BgL_tail1607z00_6134 = BgL_head1606z00_6128;
									BgL_zc3z04anonymousza32284ze3z87_6132:
										if (NULLP(BgL_l1604z00_6133))
											{	/* SawMill/bbv-types.scm 380 */
												BgL_arg2280z00_6125 = BgL_head1606z00_6128;
											}
										else
											{	/* SawMill/bbv-types.scm 380 */
												obj_t BgL_newtail1608z00_6135;

												{	/* SawMill/bbv-types.scm 380 */
													obj_t BgL_arg2287z00_6136;

													{	/* SawMill/bbv-types.scm 380 */
														obj_t BgL_arg2288z00_6137;

														BgL_arg2288z00_6137 =
															CAR(((obj_t) BgL_l1604z00_6133));
														BgL_arg2287z00_6136 =
															BGl_shapez00zztools_shapez00(BgL_arg2288z00_6137);
													}
													{	/* SawMill/bbv-types.scm 380 */
														obj_t BgL_res2986z00_6138;

														BgL_res2986z00_6138 =
															MAKE_YOUNG_PAIR(BgL_arg2287z00_6136, BNIL);
														BgL_newtail1608z00_6135 = BgL_res2986z00_6138;
													}
												}
												SET_CDR(BgL_tail1607z00_6134, BgL_newtail1608z00_6135);
												{	/* SawMill/bbv-types.scm 380 */
													obj_t BgL_arg2286z00_6139;

													BgL_arg2286z00_6139 =
														CDR(((obj_t) BgL_l1604z00_6133));
													{
														obj_t BgL_tail1607z00_9516;
														obj_t BgL_l1604z00_9515;

														BgL_l1604z00_9515 = BgL_arg2286z00_6139;
														BgL_tail1607z00_9516 = BgL_newtail1608z00_6135;
														BgL_tail1607z00_6134 = BgL_tail1607z00_9516;
														BgL_l1604z00_6133 = BgL_l1604z00_9515;
														goto BgL_zc3z04anonymousza32284ze3z87_6132;
													}
												}
											}
									}
								}
							}
					}
					{	/* SawMill/bbv-types.scm 380 */
						obj_t BgL_list2281z00_6140;

						{	/* SawMill/bbv-types.scm 380 */
							obj_t BgL_arg2282z00_6141;

							BgL_arg2282z00_6141 = MAKE_YOUNG_PAIR(BgL_arg2280z00_6125, BNIL);
							BgL_list2281z00_6140 =
								MAKE_YOUNG_PAIR(BGl_string3230z00zzsaw_bbvzd2typeszd2,
								BgL_arg2282z00_6141);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2281z00_6140);
					}
				}
				{	/* SawMill/bbv-types.scm 381 */
					obj_t BgL_arg2292z00_6142;

					{	/* SawMill/bbv-types.scm 381 */
						obj_t BgL_l1610z00_6143;

						{	/* SawMill/bbv-types.scm 381 */
							obj_t BgL_arg2305z00_6144;

							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9520;

								{
									obj_t BgL_auxz00_9521;

									{	/* SawMill/bbv-types.scm 381 */
										BgL_objectz00_bglt BgL_tmpz00_9522;

										BgL_tmpz00_9522 = ((BgL_objectz00_bglt) BgL_i1255z00_5497);
										BgL_auxz00_9521 = BGL_OBJECT_WIDENING(BgL_tmpz00_9522);
									}
									BgL_auxz00_9520 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9521);
								}
								BgL_arg2305z00_6144 =
									(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9520))->
									BgL_inz00);
							}
							BgL_l1610z00_6143 =
								BGl_regsetzd2ze3listz31zzsaw_regsetz00(
								((BgL_regsetz00_bglt) BgL_arg2305z00_6144));
						}
						if (NULLP(BgL_l1610z00_6143))
							{	/* SawMill/bbv-types.scm 381 */
								BgL_arg2292z00_6142 = BNIL;
							}
						else
							{	/* SawMill/bbv-types.scm 381 */
								obj_t BgL_head1612z00_6145;

								{	/* SawMill/bbv-types.scm 381 */
									obj_t BgL_arg2302z00_6146;

									BgL_arg2302z00_6146 =
										BGl_shapez00zztools_shapez00(CAR(BgL_l1610z00_6143));
									{	/* SawMill/bbv-types.scm 381 */
										obj_t BgL_res2988z00_6147;

										BgL_res2988z00_6147 =
											MAKE_YOUNG_PAIR(BgL_arg2302z00_6146, BNIL);
										BgL_head1612z00_6145 = BgL_res2988z00_6147;
									}
								}
								{	/* SawMill/bbv-types.scm 381 */
									obj_t BgL_g1615z00_6148;

									BgL_g1615z00_6148 = CDR(BgL_l1610z00_6143);
									{
										obj_t BgL_l1610z00_6150;
										obj_t BgL_tail1613z00_6151;

										BgL_l1610z00_6150 = BgL_g1615z00_6148;
										BgL_tail1613z00_6151 = BgL_head1612z00_6145;
									BgL_zc3z04anonymousza32296ze3z87_6149:
										if (NULLP(BgL_l1610z00_6150))
											{	/* SawMill/bbv-types.scm 381 */
												BgL_arg2292z00_6142 = BgL_head1612z00_6145;
											}
										else
											{	/* SawMill/bbv-types.scm 381 */
												obj_t BgL_newtail1614z00_6152;

												{	/* SawMill/bbv-types.scm 381 */
													obj_t BgL_arg2299z00_6153;

													{	/* SawMill/bbv-types.scm 381 */
														obj_t BgL_arg2300z00_6154;

														BgL_arg2300z00_6154 =
															CAR(((obj_t) BgL_l1610z00_6150));
														BgL_arg2299z00_6153 =
															BGl_shapez00zztools_shapez00(BgL_arg2300z00_6154);
													}
													{	/* SawMill/bbv-types.scm 381 */
														obj_t BgL_res2990z00_6155;

														BgL_res2990z00_6155 =
															MAKE_YOUNG_PAIR(BgL_arg2299z00_6153, BNIL);
														BgL_newtail1614z00_6152 = BgL_res2990z00_6155;
													}
												}
												SET_CDR(BgL_tail1613z00_6151, BgL_newtail1614z00_6152);
												{	/* SawMill/bbv-types.scm 381 */
													obj_t BgL_arg2298z00_6156;

													BgL_arg2298z00_6156 =
														CDR(((obj_t) BgL_l1610z00_6150));
													{
														obj_t BgL_tail1613z00_9545;
														obj_t BgL_l1610z00_9544;

														BgL_l1610z00_9544 = BgL_arg2298z00_6156;
														BgL_tail1613z00_9545 = BgL_newtail1614z00_6152;
														BgL_tail1613z00_6151 = BgL_tail1613z00_9545;
														BgL_l1610z00_6150 = BgL_l1610z00_9544;
														goto BgL_zc3z04anonymousza32296ze3z87_6149;
													}
												}
											}
									}
								}
							}
					}
					{	/* SawMill/bbv-types.scm 381 */
						obj_t BgL_list2293z00_6157;

						{	/* SawMill/bbv-types.scm 381 */
							obj_t BgL_arg2294z00_6158;

							BgL_arg2294z00_6158 = MAKE_YOUNG_PAIR(BgL_arg2292z00_6142, BNIL);
							BgL_list2293z00_6157 =
								MAKE_YOUNG_PAIR(BGl_string3231z00zzsaw_bbvzd2typeszd2,
								BgL_arg2294z00_6158);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2293z00_6157);
					}
				}
				{	/* SawMill/bbv-types.scm 382 */
					obj_t BgL_arg2306z00_6159;

					{	/* SawMill/bbv-types.scm 382 */
						obj_t BgL_l1616z00_6160;

						{	/* SawMill/bbv-types.scm 382 */
							obj_t BgL_arg2319z00_6161;

							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_9549;

								{
									obj_t BgL_auxz00_9550;

									{	/* SawMill/bbv-types.scm 382 */
										BgL_objectz00_bglt BgL_tmpz00_9551;

										BgL_tmpz00_9551 = ((BgL_objectz00_bglt) BgL_i1255z00_5497);
										BgL_auxz00_9550 = BGL_OBJECT_WIDENING(BgL_tmpz00_9551);
									}
									BgL_auxz00_9549 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_9550);
								}
								BgL_arg2319z00_6161 =
									(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_9549))->
									BgL_outz00);
							}
							BgL_l1616z00_6160 =
								BGl_regsetzd2ze3listz31zzsaw_regsetz00(
								((BgL_regsetz00_bglt) BgL_arg2319z00_6161));
						}
						if (NULLP(BgL_l1616z00_6160))
							{	/* SawMill/bbv-types.scm 382 */
								BgL_arg2306z00_6159 = BNIL;
							}
						else
							{	/* SawMill/bbv-types.scm 382 */
								obj_t BgL_head1618z00_6162;

								{	/* SawMill/bbv-types.scm 382 */
									obj_t BgL_arg2316z00_6163;

									BgL_arg2316z00_6163 =
										BGl_shapez00zztools_shapez00(CAR(BgL_l1616z00_6160));
									{	/* SawMill/bbv-types.scm 382 */
										obj_t BgL_res2992z00_6164;

										BgL_res2992z00_6164 =
											MAKE_YOUNG_PAIR(BgL_arg2316z00_6163, BNIL);
										BgL_head1618z00_6162 = BgL_res2992z00_6164;
									}
								}
								{	/* SawMill/bbv-types.scm 382 */
									obj_t BgL_g1621z00_6165;

									BgL_g1621z00_6165 = CDR(BgL_l1616z00_6160);
									{
										obj_t BgL_l1616z00_6167;
										obj_t BgL_tail1619z00_6168;

										BgL_l1616z00_6167 = BgL_g1621z00_6165;
										BgL_tail1619z00_6168 = BgL_head1618z00_6162;
									BgL_zc3z04anonymousza32310ze3z87_6166:
										if (NULLP(BgL_l1616z00_6167))
											{	/* SawMill/bbv-types.scm 382 */
												BgL_arg2306z00_6159 = BgL_head1618z00_6162;
											}
										else
											{	/* SawMill/bbv-types.scm 382 */
												obj_t BgL_newtail1620z00_6169;

												{	/* SawMill/bbv-types.scm 382 */
													obj_t BgL_arg2313z00_6170;

													{	/* SawMill/bbv-types.scm 382 */
														obj_t BgL_arg2314z00_6171;

														BgL_arg2314z00_6171 =
															CAR(((obj_t) BgL_l1616z00_6167));
														BgL_arg2313z00_6170 =
															BGl_shapez00zztools_shapez00(BgL_arg2314z00_6171);
													}
													{	/* SawMill/bbv-types.scm 382 */
														obj_t BgL_res2994z00_6172;

														BgL_res2994z00_6172 =
															MAKE_YOUNG_PAIR(BgL_arg2313z00_6170, BNIL);
														BgL_newtail1620z00_6169 = BgL_res2994z00_6172;
													}
												}
												SET_CDR(BgL_tail1619z00_6168, BgL_newtail1620z00_6169);
												{	/* SawMill/bbv-types.scm 382 */
													obj_t BgL_arg2312z00_6173;

													BgL_arg2312z00_6173 =
														CDR(((obj_t) BgL_l1616z00_6167));
													{
														obj_t BgL_tail1619z00_9574;
														obj_t BgL_l1616z00_9573;

														BgL_l1616z00_9573 = BgL_arg2312z00_6173;
														BgL_tail1619z00_9574 = BgL_newtail1620z00_6169;
														BgL_tail1619z00_6168 = BgL_tail1619z00_9574;
														BgL_l1616z00_6167 = BgL_l1616z00_9573;
														goto BgL_zc3z04anonymousza32310ze3z87_6166;
													}
												}
											}
									}
								}
							}
					}
					{	/* SawMill/bbv-types.scm 382 */
						obj_t BgL_list2307z00_6174;

						{	/* SawMill/bbv-types.scm 382 */
							obj_t BgL_arg2308z00_6175;

							BgL_arg2308z00_6175 = MAKE_YOUNG_PAIR(BgL_arg2306z00_6159, BNIL);
							BgL_list2307z00_6174 =
								MAKE_YOUNG_PAIR(BGl_string3232z00zzsaw_bbvzd2typeszd2,
								BgL_arg2308z00_6175);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2307z00_6174);
					}
				}
				{	/* SawMill/bbv-types.scm 383 */
					obj_t BgL_arg2320z00_6176;

					{	/* SawMill/bbv-types.scm 383 */
						obj_t BgL_res2995z00_6177;

						{	/* SawMill/bbv-types.scm 383 */
							obj_t BgL_tmpz00_9578;

							BgL_tmpz00_9578 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2995z00_6177 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_9578);
						}
						BgL_arg2320z00_6176 = BgL_res2995z00_6177;
					}
					return
						bgl_display_string(BGl_string3233z00zzsaw_bbvzd2typeszd2,
						BgL_arg2320z00_6176);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2typeszd2()
	{
		{	/* SawMill/bbv-types.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(((long) 237915310),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
			return
				BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(((long) 486661379),
				BSTRING_TO_STRING(BGl_string3234z00zzsaw_bbvzd2typeszd2));
		}

	}

#ifdef __cplusplus
}
#endif
