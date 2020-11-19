/*===========================================================================*/
/*   (SawMill/defs.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/defs.scm) */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_rtl_lastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_lastz00_bglt;

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_jumpexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                      *BgL_rtl_jumpexitz00_bglt;

	typedef struct BgL_rtl_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_failz00_bglt;

	typedef struct BgL_rtl_notseqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_notseqz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

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

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_purez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_purez00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

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

	typedef struct BgL_rtl_makeboxz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_makeboxz00_bglt;

	typedef struct BgL_rtl_boxrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxrefz00_bglt;

	typedef struct BgL_rtl_effectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_effectz00_bglt;

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

	typedef struct BgL_rtl_boxsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxsetz00_bglt;

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

	typedef struct BgL_rtl_applyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                   *BgL_rtl_applyz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_funsz00;
		obj_t BgL_rettypez00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

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

	typedef struct BgL_rtl_protectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_protectz00_bglt;

	typedef struct BgL_rtl_protectedz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                       *BgL_rtl_protectedz00_bglt;

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


	static BgL_rtl_getfieldz00_bglt
		BGl_z62rtl_getfieldzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_nopz00_bglt BGl_z62makezd2rtl_nopzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_insz00_bglt BGl_z62rtl_inszd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_movzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_rtl_ifeqzd2thenzd2zzsaw_defsz00(BgL_rtl_ifeqz00_bglt);
	static obj_t BGl_z62rtl_inszd2funzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_insz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_failzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_failz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31950ze3ze5zzsaw_defsz00(obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1929z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_protectedz00_bglt BGl_z62lambda2658z62zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_switchzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2497z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_protectedzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_effectzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda2498z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vsetzd2loczd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifeqzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifeqz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vsetzd2typezd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2namezd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt, obj_t);
	static obj_t BGl_z62rtl_inszd2argsza2z12zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzd2varzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62dumpzd2inszd2rhsz62zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_vsetzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static BgL_rtl_castz00_bglt BGl_z62rtl_castzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1931z62zzsaw_defsz00(obj_t);
	static BgL_rtl_protectedz00_bglt BGl_z62lambda2660z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_funcallz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_boxrefzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_switchzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_castzd2totypezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32680ze3ze5zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt
		BGl_makezd2rtl_callzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1937z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1938z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda2668z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2destzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_selectzd2loczd2zzsaw_defsz00(BgL_rtl_selectz00_bglt);
	static obj_t BGl_z62rtl_regzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_getfieldzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62rtl_inszd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_instanceofz00_bglt
		BGl_makezd2rtl_instanceofzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2hardwarezd2zzsaw_defsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_gozd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_goz00_bglt, obj_t);
	static BgL_rtl_loadfunz00_bglt
		BGl_z62makezd2rtl_loadfunzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_valloczf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifeqzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2rettypezd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt,
		BgL_typez00_bglt);
	static BgL_rtl_insz00_bglt BGl_z62lambda2670z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_funzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda1942z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_inszf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda1943z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32592ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1948z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1949z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2678z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2679z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32398ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_vsetzd2vtypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_returnzd2typezd2zzsaw_defsz00(BgL_rtl_returnz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_rtl_returnzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_z62rtl_castzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62dumpzd2funzb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_fun1760z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static BgL_rtl_effectz00_bglt BGl_z62makezd2rtl_effectzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_newzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda1955z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1956z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2685z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2686z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_boxsetz00_bglt BGl_z62rtl_boxsetzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2namezd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt);
	static obj_t BGl_z62rtl_callzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_cast_nullz00_bglt
		BGl_z62makezd2rtl_cast_nullzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt
		BGl_makezd2rtl_lastzd2zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62rtl_cast_nullzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1962z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1963z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2692z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2693z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62rtl_gozd2tozb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_setfieldz00_bglt
		BGl_z62rtl_setfieldzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_returnzd2loczd2zzsaw_defsz00(BgL_rtl_returnz00_bglt);
	static obj_t BGl_z62lambda1969z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_funz00_bglt BGl_z62lambda2699z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vrefz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_castzd2fromtypezd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_cast_nullzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2labelszd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2labelszd2zzsaw_defsz00(BgL_rtl_switchz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifz00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_castzd2fromtypezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vrefzd2vtypezd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt);
	static bool_t BGl_dumpzd2argszd2zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_funcallz00_bglt
		BGl_z62rtl_funcallzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_protectz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2objtypezd2setz12z12zzsaw_defsz00
		(BgL_rtl_setfieldz00_bglt, BgL_typez00_bglt);
	static obj_t BGl_z62lambda1970z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_makeboxzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_vlengthzd2vtypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_boxsetzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62rtl_loadfunzd2varzb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31971ze3ze5zzsaw_defsz00(obj_t);
	static BgL_rtl_funz00_bglt BGl_z62lambda1977z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_go1776z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt BGl_rtl_ifnezd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_boxsetz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_newzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt,
		BgL_typez00_bglt);
	static BgL_globalz00_bglt BGl_z62rtl_callzd2varzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_storegzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_failzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_instanceofz00_bglt
		BGl_rtl_instanceofzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_selectzd2patternszd2zzsaw_defsz00(BgL_rtl_selectz00_bglt);
	static obj_t BGl_z62rtl_setfieldzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_makeboxz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_funz00_bglt BGl_z62lambda1980z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_callzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_notseqzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1987z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1988z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_nopzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2keyzd2zzsaw_defsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t, obj_t, BgL_rtl_funz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_funzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_funcallzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_instanceofzd2loczd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_defsz00();
	static obj_t BGl_z62dumpzd2funzd2rtl_loadfun1768z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifnezd2loczd2zzsaw_defsz00(BgL_rtl_ifnez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_defsz00(obj_t);
	static BgL_rtl_lastz00_bglt BGl_z62lambda1996z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_lastz00_bglt BGl_z62lambda1998z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_boxrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_boxrefz00_bglt,
		obj_t);
	static BgL_rtl_notseqz00_bglt BGl_z62rtl_notseqzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_lightfuncallzd2namezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_instanceofzd2loczd2zzsaw_defsz00(BgL_rtl_instanceofz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32300ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2namezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_rtl_gozd2tozd2zzsaw_defsz00(BgL_rtl_goz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32687ze3ze5zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_effectzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_castzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt
		BGl_makezd2rtl_castzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_pragmazd2formatzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_instanceofzd2typezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpza2za2zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t BGl_z62dumpzd2basiczd2blocksz62zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_boxrefzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_pragmaz00_bglt BGl_z62makezd2rtl_pragmazb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_movz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_notseqzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_applyzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_failzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_applyz00_bglt BGl_z62makezd2rtl_applyzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_valloczf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_lightfuncallzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vsetzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadfunzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_getfieldzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzd2onexprzf3z43zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifeqzd2loczd2zzsaw_defsz00(BgL_rtl_ifeqz00_bglt);
	static BgL_rtl_ifeqz00_bglt BGl_z62makezd2rtl_ifeqzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_boxrefz00_bglt BGl_z62makezd2rtl_boxrefzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_lightfuncallz00_bglt
		BGl_z62rtl_lightfuncallzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62dump1749z62zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_returnzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32052ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62dumpz62zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_storegz00_bglt BGl_z62rtl_storegzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_purez00_bglt BGl_z62makezd2rtl_purezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_vrefzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_loadgz00_bglt BGl_z62makezd2rtl_loadgzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static BgL_rtl_loadiz00_bglt BGl_z62makezd2rtl_loadizb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_cast_nullzd2typezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_gozd2tozd2setz12z12zzsaw_defsz00(BgL_rtl_goz00_bglt,
		BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2destzd2zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static BgL_rtl_globalrefz00_bglt
		BGl_z62rtl_globalrefzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_boxrefzd2loczd2zzsaw_defsz00(BgL_rtl_boxrefz00_bglt);
	static BgL_rtl_vsetz00_bglt BGl_z62makezd2rtl_vsetzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_jumpexitz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_lightfuncallzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_vsetz00_bglt BGl_z62rtl_vsetzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62zc3z04anonymousza32143ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_storegzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2firstzd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_goz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_rtl_switchz00zzsaw_defsz00 = BUNSPEC;
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_showzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_setfieldzd2typezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32128ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_globalrefzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_notseqzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_notseqz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_instanceofz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifnezd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifnez00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_setfieldz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2loczd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt);
	static obj_t BGl_z62rtl_vsetzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_cast_nullzd2loczd2zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_nopzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_nopz00_bglt, obj_t);
	static obj_t BGl_z62rtl_castzd2fromtypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_newzd2constrzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzd2keyzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_cast_nullzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_switchzd2labelszd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32250ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_makezd2blockzd2zzsaw_defsz00(int,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2z52spillze2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62dumpzd2funzd2rtl_mov1764z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_vrefzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_newzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt
		BGl_makezd2rtl_movzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32324ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32235ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_purezd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_purez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_nopzf3zf3zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62rtl_vlengthzd2vtypezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_instanceofzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_blockzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_vallocz00_bglt BGl_z62makezd2rtl_valloczb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2101z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2102z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_ifeqz00_bglt BGl_z62lambda2108z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_applyzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2argszd2zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static BgL_blockz00_bglt BGl_z62makezd2blockzb0zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_rtl_pragmazd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_storegz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_cast_nullz00_bglt
		BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_pragmazf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_ifeqz00_bglt BGl_z62lambda2110z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_valloczd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_cast_nullzd2typezd2zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt);
	static obj_t BGl_z62rtl_makeboxzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_switchzd2patternszd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2117z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2118z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_makeboxz00_bglt
		BGl_z62rtl_makeboxzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32180ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_loadgzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_lastz00_bglt BGl_rtl_lastzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_pragmazd2formatzd2zzsaw_defsz00(BgL_rtl_pragmaz00_bglt);
	static BgL_rtl_ifnez00_bglt BGl_z62lambda2124z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_ifnez00_bglt BGl_z62lambda2126z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32610ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vrefzd2typezd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt);
	static obj_t BGl_z62rtl_returnzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_pragmazd2loczd2zzsaw_defsz00(BgL_rtl_pragmaz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32076ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_applyzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_makeboxzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_vlengthzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_valloczd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_vsetzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62rtl_storegzd2varzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_makeboxzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_makeboxz00_bglt,
		obj_t);
	static BgL_rtl_ifnez00_bglt BGl_z62makezd2rtl_ifnezb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static BgL_rtl_ifnez00_bglt BGl_z62rtl_ifnezd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_makeboxzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2132z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2133z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lastzd2loczd2zzsaw_defsz00(BgL_rtl_lastz00_bglt);
	static BgL_rtl_goz00_bglt BGl_z62lambda2139z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadgzf3zf3zzsaw_defsz00(obj_t);
	static BgL_blockz00_bglt BGl_z62rtl_ifeqzd2thenzb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62rtl_globalrefzd2varzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2objtypezd2setz12z12zzsaw_defsz00
		(BgL_rtl_getfieldz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00();
	static BgL_typez00_bglt BGl_z62rtl_vsetzd2typezb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_loadgzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_insz00_bglt BGl_z62makezd2rtl_inszb0zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_goz00_bglt BGl_z62lambda2141z62zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62lambda2306z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_makezd2rtl_switchzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2307z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2147z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2148z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2destzd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t);
	static obj_t BGl_z62rtl_vrefzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt BGl_rtl_failzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static BgL_rtl_callz00_bglt BGl_z62makezd2rtl_callzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2funszd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt);
	static obj_t BGl_z62rtl_ifnezd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_vlengthzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_failz00zzsaw_defsz00 = BUNSPEC;
	static BgL_typez00_bglt BGl_z62lambda2311z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2312z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_purezf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt
		BGl_makezd2rtl_vrefzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static BgL_rtl_purez00_bglt BGl_z62lambda2155z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_purez00_bglt BGl_z62lambda2157z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32362ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_switchzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2labelzd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt, int);
	static obj_t BGl_z62rtl_castzd2totypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_loadizf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32346ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32419ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vlengthzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_loadgzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_castzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_setfieldzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_funzd2loczd2zzsaw_defsz00(BgL_rtl_funz00_bglt);
	static BgL_rtl_vallocz00_bglt BGl_z62rtl_valloczd2nilzb0zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_vlengthz00_bglt BGl_z62lambda2320z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_ifeqz00_bglt BGl_z62rtl_ifeqzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_vlengthz00_bglt BGl_z62lambda2322z62zzsaw_defsz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_defsz00();
	static BgL_rtl_nopz00_bglt BGl_z62lambda2165z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2328z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_nopz00_bglt BGl_z62lambda2167z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda2329z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vlengthzd2loczd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_failzd2loczd2zzsaw_defsz00(BgL_rtl_failz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32509ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32096ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2argszd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_switchzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_applyzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_applyz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_callzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_callz00_bglt,
		BgL_globalz00_bglt);
	static BgL_rtl_selectz00_bglt BGl_z62makezd2rtl_selectzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2namezd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_castzd2totypezd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt,
		BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda2335z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2336z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_movz00_bglt BGl_z62lambda2176z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_movz00_bglt BGl_z62lambda2178z62zzsaw_defsz00(obj_t);
	static BgL_rtl_lastz00_bglt BGl_z62makezd2rtl_lastzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vlengthz00_bglt
		BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_loadizf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_loadfunzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_globalrefz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_castzd2fromtypezd2zzsaw_defsz00(BgL_rtl_castz00_bglt);
	static obj_t BGl_z62rtl_valloczd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_rtl_protectzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_valloczd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_ifeqzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt BGl_rtl_newzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_instanceofz00_bglt BGl_z62lambda2342z62zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static BgL_rtl_callz00_bglt BGl_z62lambda2504z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_instanceofz00_bglt BGl_z62lambda2344z62zzsaw_defsz00(obj_t);
	static BgL_rtl_protectedz00_bglt
		BGl_z62makezd2rtl_protectedzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_makezd2rtl_storegzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static BgL_rtl_callz00_bglt BGl_z62lambda2507z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32470ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_loadiz00_bglt BGl_z62lambda2186z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_loadiz00_bglt BGl_z62lambda2188z62zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_z62rtl_returnzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_lightfuncallzd2funszb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL bool_t BGl_rtl_purezf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_selectz00_bglt BGl_z62rtl_selectzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_funcallz00_bglt
		BGl_z62makezd2rtl_funcallzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_movzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_movz00_bglt, obj_t);
	static obj_t BGl_z62rtl_pragmazf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2funzd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt,
		BgL_rtl_funz00_bglt);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_rtl_ifnezd2thenzd2zzsaw_defsz00(BgL_rtl_ifnez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda2351z62zzsaw_defsz00(obj_t, obj_t);
	extern obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_z62lambda2352z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_atomz00_bglt BGl_z62lambda2194z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2195z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda2519z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_callzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_callz00_bglt, obj_t);
	static BgL_rtl_makeboxz00_bglt BGl_z62lambda2358z62zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_castzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62blockzd2succszd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszd2destzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_protectzd2loczd2zzsaw_defsz00(BgL_rtl_protectz00_bglt);
	static obj_t BGl_z62rtl_vlengthzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_jumpexitz00_bglt
		BGl_z62rtl_jumpexitzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_protectedzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_newzd2loczd2zzsaw_defsz00(BgL_rtl_newz00_bglt);
	static BgL_rtl_returnz00_bglt BGl_z62makezd2rtl_returnzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt BGl_rtl_applyzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_funcallzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt BGl_rtl_ifzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62lambda2520z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_makeboxz00_bglt BGl_z62lambda2360z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_vrefzd2vtypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_applyz00_bglt BGl_z62lambda2527z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32634ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_boxrefz00_bglt BGl_z62lambda2368z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_setfieldzd2objtypezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62blockzd2predszd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32278ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_effectz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2loczd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt);
	static obj_t BGl_z62rtl_selectzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_lightfuncallzd2funszd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62dumpzd2fun1757zb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_applyz00_bglt BGl_z62lambda2530z62zzsaw_defsz00(obj_t);
	static BgL_rtl_boxrefz00_bglt BGl_z62lambda2370z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32651ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_jumpexitzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blockzd2firstzd2zzsaw_defsz00(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2loczd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_funcallzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_funcallz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_applyzd2loczd2zzsaw_defsz00(BgL_rtl_applyz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_rtl_ifzd2loczd2zzsaw_defsz00(BgL_rtl_ifz00_bglt);
	static BgL_rtl_returnz00_bglt BGl_z62rtl_returnzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadfunz00_bglt
		BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62lambda2700z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_castz00_bglt BGl_z62makezd2rtl_castzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_rtl_funz00_bglt BGl_z62rtl_funzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_lightfuncallz00_bglt BGl_z62lambda2542z62zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_setfieldzd2objtypezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt);
	static BgL_rtl_effectz00_bglt BGl_z62lambda2381z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2705z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2706z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_ifz00_bglt BGl_z62rtl_ifzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_rtl_effectz00_bglt BGl_z62lambda2383z62zzsaw_defsz00(obj_t);
	static BgL_rtl_lightfuncallz00_bglt BGl_z62lambda2545z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_ifeqzd2thenzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32385ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_notseqz00_bglt BGl_z62makezd2rtl_notseqzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_protectz00_bglt
		BGl_z62makezd2rtl_protectzb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_valloczd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_call1778z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_switchzd2patternszb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt,
		obj_t);
	static obj_t BGl_z62dumpzd2rtl_reg1756zb0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_protectzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2713z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2715z62zzsaw_defsz00(obj_t);
	static BgL_rtl_movz00_bglt BGl_z62makezd2rtl_movzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_funcallzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_setfieldz00_bglt
		BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_storegz00_bglt BGl_z62lambda2393z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2555z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2556z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32580ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_storegz00_bglt BGl_z62lambda2396z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32726ze3ze5zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_globalrefzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_returnzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadfunzd2loczd2zzsaw_defsz00(BgL_rtl_loadfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32000ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_funzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_makeboxz00_bglt
		BGl_z62makezd2rtl_makeboxzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_ifzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_rtl_effectzd2nilzd2zzsaw_defsz00();
	static BgL_typez00_bglt BGl_z62rtl_vrefzd2vtypezb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2724z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2563z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2725z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2564z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2568z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2569z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2argszb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32549ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2marginzd2zzsaw_defsz00(obj_t, int);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_selectzd2typezd2zzsaw_defsz00(BgL_rtl_selectz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadgzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_loadgz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_z62rtl_callzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2loczd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt);
	static obj_t BGl_z62lambda2731z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2732z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vrefz00_bglt BGl_rtl_vrefzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_globalrefz00_bglt
		BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00();
	extern obj_t BGl_za2tracezd2portza2zd2zztools_tracez00;
	static BgL_rtl_funcallz00_bglt BGl_z62lambda2576z62zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_funcallz00_bglt BGl_z62lambda2578z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_pragmazd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_lastz00_bglt BGl_z62rtl_lastzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_cast_nullzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_valloczd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_funzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_funz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt BGl_rtl_loadgzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_effectzd2loczd2zzsaw_defsz00(BgL_rtl_effectz00_bglt);
	static BgL_rtl_newz00_bglt BGl_z62rtl_newzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_castzd2totypezd2zzsaw_defsz00(BgL_rtl_castz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_movz00_bglt BGl_rtl_movzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_funz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_jumpexitzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2743z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_lastzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_newz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62lambda2744z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_setfieldzd2objtypezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32672ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vsetzd2vtypezd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_valloczd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32745ze3ze5zzsaw_defsz00(obj_t);
	static BgL_rtl_pragmaz00_bglt BGl_z62lambda2587z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2749z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_returnzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_returnz00_bglt,
		obj_t);
	static BgL_rtl_pragmaz00_bglt BGl_z62lambda2589z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_pragmaz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62shapezd2rtl_reg1748zb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_getfieldzd2namezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_globalr1770z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vrefzd2loczd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_globalrefzd2loczd2zzsaw_defsz00(BgL_rtl_globalrefz00_bglt);
	static obj_t BGl_z62lambda2750z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_selectzd2patternszd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_gozd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_protectedz00_bglt
		BGl_z62rtl_protectedzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_lastzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_globalrefzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_globalrefz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62lambda2597z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2598z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadgzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadgz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadgzd2loczd2zzsaw_defsz00(BgL_rtl_loadgz00_bglt);
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_newzd2constrzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_returnzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_newzd2typezd2zzsaw_defsz00(BgL_rtl_newz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vrefzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_lightfuncallzd2namezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_newzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_effectz00_bglt
		BGl_makezd2rtl_effectzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_movzd2loczd2zzsaw_defsz00(BgL_rtl_movz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vrefzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_boxrefz00zzsaw_defsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static BgL_typez00_bglt BGl_z62rtl_valloczd2vtypezb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_failz00_bglt BGl_z62rtl_failzd2nilzb0zzsaw_defsz00(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_rtl_callzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_getfieldz00_bglt
		BGl_z62makezd2rtl_getfieldzb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_vlengthzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_getfieldzd2namezb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_protectedzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2namezd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vlengthzd2vtypezd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_ifnezf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadizd2constantzd2setz12z12zzsaw_defsz00(BgL_rtl_loadiz00_bglt,
		BgL_atomz00_bglt);
	static obj_t BGl_z62rtl_loadfunzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62blockzd2firstzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_rtl_funcallzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_toplevelzd2initzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_globalrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_globalrefz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_ifzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_boxrefz00_bglt BGl_z62rtl_boxrefzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifeqz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_rtl_loadfunzd2varzd2zzsaw_defsz00(BgL_rtl_loadfunz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_switchz00_bglt
		BGl_rtl_switchzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62dumpzd2rtl_ins1754zb0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_jumpexitzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt BGl_rtl_purezd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_failzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_valloczd2vtypezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vlengthz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2patternszd2zzsaw_defsz00(BgL_rtl_switchz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_purez00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32112ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadfunzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_loadfunz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_blockzd2succszd2zzsaw_defsz00(BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_gozd2tozd2setz12z70zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32766ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_defsz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62rtl_ifzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_funcallzd2loczd2zzsaw_defsz00(BgL_rtl_funcallz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_protectedzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_protectedz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_boxrefzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_loadizd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_makezd2rtl_protectedzd2zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62rtl_getfieldzd2objtypezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_loadfunzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vsetz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2loczd2zzsaw_defsz00(BgL_rtl_switchz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_purezd2loczd2zzsaw_defsz00(BgL_rtl_purez00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_failz00_bglt
		BGl_makezd2rtl_failzd2zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62rtl_vrefzd2typezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vsetzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32694ze3ze5zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_makezd2rtl_funzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_newz00_bglt
		BGl_makezd2rtl_newzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62dumpzd2marginzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_notseqzf3zf3zzsaw_defsz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifnezf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_selectzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32041ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzd2hardwarezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_pragmazd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_pragmaz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_ifnezd2thenzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_instanceofzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_rtl_globalrefzd2varzd2zzsaw_defsz00(BgL_rtl_globalrefz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31982ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2namezd2zzsaw_defsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_getfieldzd2objtypezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadfunzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadfunz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_regzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_regz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt BGl_rtl_loadizd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62zc3z04anonymousza32220ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_rtl_loadgzd2varzd2zzsaw_defsz00(BgL_rtl_loadgz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_rtl_vallocz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt BGl_makezd2rtl_gozd2zzsaw_defsz00(obj_t,
		BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2rettypezd2zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt);
	static obj_t BGl_z62shapezd2rtl_ins1746zb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_cast_nullz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_pragmaz00_bglt
		BGl_makezd2rtl_pragmazd2zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtlzd2dumpzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxsetz00_bglt
		BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_boxsetzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_movz00_bglt BGl_z62rtl_movzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadfunz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_storegzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_newzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt, obj_t);
	static obj_t BGl_z62rtl_movzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_getfieldzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32205ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_vrefzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_vrefz00_bglt BGl_z62makezd2rtl_vrefzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2onexprzf3z21zzsaw_defsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62rtl_vlengthzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_newzd2constrzd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_boxrefz00_bglt
		BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadizd2loczd2zzsaw_defsz00(BgL_rtl_loadiz00_bglt);
	static obj_t BGl_z62rtl_setfieldzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifz00_bglt BGl_makezd2rtl_ifzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifeqzd2thenzd2setz12z12zzsaw_defsz00(BgL_rtl_ifeqz00_bglt,
		BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_boxsetzd2loczd2zzsaw_defsz00(BgL_rtl_boxsetz00_bglt);
	static obj_t BGl_z62rtl_movzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2argszd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_nopz00zzsaw_defsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_rtl_pragmaz00_bglt BGl_z62rtl_pragmazd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_gozf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32029ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vlengthzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_protectzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_storegzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_funcallzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_failzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_globalrefzd2varzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzd2onexprzf3zd2setz12z83zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_ifeqzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t BGl_z62rtl_getfieldzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt,
		obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_loadg1766z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_blockzd2labelzd2zzsaw_defsz00(BgL_blockz00_bglt);
	static BgL_rtl_boxsetz00_bglt BGl_z62makezd2rtl_boxsetzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_vlengthzd2typezd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt);
	static obj_t BGl_z62rtl_pragmazd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_rtl_notseqzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62dumpza2zc0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_vsetzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifnez00zzsaw_defsz00 = BUNSPEC;
	static BgL_blockz00_bglt BGl_z62rtl_ifnezd2thenzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2onexprzf3zd2setz12ze1zzsaw_defsz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_setfieldzd2namezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static BgL_rtl_vrefz00_bglt BGl_z62rtl_vrefzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzd2typezd2zzsaw_defsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62blockzd2succszb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_selectzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt BGl_rtl_nopzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_returnz00_bglt BGl_z62lambda2006z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_jumpexitzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_applyz00_bglt BGl_z62rtl_applyzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_returnz00_bglt BGl_z62lambda2008z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_setfieldzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32064ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_globalrefzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_notseqzd2loczd2zzsaw_defsz00(BgL_rtl_notseqz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_callz00_bglt BGl_rtl_callzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62zc3z04anonymousza31989ze3ze5zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_applyz00_bglt
		BGl_makezd2rtl_applyzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_callz00zzsaw_defsz00 = BUNSPEC;
	static BgL_typez00_bglt BGl_z62lambda2015z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2016z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_selectz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_notseqzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_instanceofzd2typezd2zzsaw_defsz00(BgL_rtl_instanceofz00_bglt);
	BGL_IMPORT obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62rtl_vrefzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_selectzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_atomz00_bglt BGl_z62rtl_loadizd2constantzb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt BGl_rtl_regzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_makezd2rtl_valloczd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_selectzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62rtl_instanceofzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_nopzd2loczd2zzsaw_defsz00(BgL_rtl_nopz00_bglt);
	static obj_t BGl_z62rtl_applyzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_getfieldzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_jumpexitz00_bglt BGl_z62lambda2023z62zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_getfieldzd2objtypezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_switchzd2labelszb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_jumpexitz00_bglt BGl_z62lambda2027z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_protectedzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_newzd2typezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_boxsetzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_boxsetz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_setfieldzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_storegz00_bglt
		BGl_rtl_storegzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_goz00_bglt BGl_z62makezd2rtl_gozb0zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_callzd2loczd2zzsaw_defsz00(BgL_rtl_callz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_storegzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_storegz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_loadgz00_bglt
		BGl_makezd2rtl_loadgzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	static obj_t BGl_z62dumpzd2block1752zb0zzsaw_defsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_loadiz00_bglt
		BGl_makezd2rtl_loadizd2zzsaw_defsz00(obj_t, BgL_atomz00_bglt);
	static obj_t BGl_z62rtl_returnzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_nopz00_bglt
		BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_newzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_failz00_bglt BGl_z62lambda2037z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_failz00_bglt BGl_z62lambda2039z62zzsaw_defsz00(obj_t);
	static BgL_blockz00_bglt BGl_z62blockzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_lastz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_lightfuncallz00_bglt
		BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_boxsetzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t, obj_t);
	static BgL_rtl_loadgz00_bglt BGl_z62lambda2201z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_castz00_bglt BGl_rtl_castzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_loadgz00_bglt BGl_z62lambda2203z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_returnz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_instanceofzd2typezd2setz12z12zzsaw_defsz00
		(BgL_rtl_instanceofz00_bglt, BgL_typez00_bglt);
	static BgL_rtl_ifz00_bglt BGl_z62makezd2rtl_ifzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rtlzd2dumpzd2zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_storegzd2loczd2zzsaw_defsz00(BgL_rtl_storegz00_bglt);
	static BgL_globalz00_bglt BGl_z62lambda2209z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_notseqz00_bglt BGl_z62lambda2048z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_applyz00zzsaw_defsz00 = BUNSPEC;
	static BgL_rtl_globalrefz00_bglt
		BGl_z62makezd2rtl_globalrefzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszd2z52spillzd2setz12z22zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_movzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_returnzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_returnz00_bglt,
		BgL_typez00_bglt);
	static BgL_rtl_purez00_bglt BGl_z62rtl_purezd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static obj_t BGl_z62blockzd2firstzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funcallz00_bglt
		BGl_makezd2rtl_funcallzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_makeboxzd2loczd2zzsaw_defsz00(BgL_rtl_makeboxz00_bglt);
	static obj_t BGl_z62lambda2210z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_notseqz00_bglt BGl_z62lambda2050z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_ifne1774z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_rtl_inszd2funzd2zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static BgL_rtl_loadfunz00_bglt BGl_z62lambda2216z62zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_storegzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_storegz00_bglt,
		obj_t);
	static BgL_rtl_loadfunz00_bglt BGl_z62lambda2218z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32190ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2succszd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt, obj_t);
	static obj_t BGl_z62rtl_setfieldzd2namezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_jumpexitz00_bglt
		BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_loadizd2constantzd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_newzd2constrzd2zzsaw_defsz00(BgL_rtl_newz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_loadizd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadiz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_castzd2loczd2zzsaw_defsz00(BgL_rtl_castz00_bglt);
	static obj_t BGl_z62rtl_castzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_ifz00_bglt BGl_z62lambda2060z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_nopzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lastzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_lastz00_bglt, obj_t);
	static BgL_rtl_ifz00_bglt BGl_z62lambda2062z62zzsaw_defsz00(obj_t);
	static BgL_globalz00_bglt BGl_z62lambda2224z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_loadgz00_bglt BGl_z62rtl_loadgzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda2225z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2z52spillz80zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62dumpzd2funzd2rtl_loadi1762z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2predszd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadgz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_goz00_bglt BGl_rtl_gozd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_rtl_loadiz00zzsaw_defsz00 = BUNSPEC;
	static BgL_rtl_switchz00_bglt BGl_z62makezd2rtl_switchzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32159ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62blockzd2labelzb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_purezd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_vlengthz00_bglt
		BGl_z62rtl_vlengthzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_notseqz00zzsaw_defsz00 = BUNSPEC;
	static BgL_rtl_funz00_bglt BGl_z62makezd2rtl_funzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_newz00_bglt BGl_z62makezd2rtl_newzb0zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_globalrefz00_bglt BGl_z62lambda2231z62zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_ifnezd2thenzd2setz12z12zzsaw_defsz00(BgL_rtl_ifnez00_bglt,
		BgL_blockz00_bglt);
	static BgL_rtl_selectz00_bglt BGl_z62lambda2071z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_globalrefz00_bglt BGl_z62lambda2233z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectedz00_bglt
		BGl_rtl_protectedzd2nilzd2zzsaw_defsz00();
	static BgL_rtl_selectz00_bglt BGl_z62lambda2073z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blockzd2predszd2zzsaw_defsz00(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_getfieldzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_defsz00();
	static BgL_globalz00_bglt BGl_z62lambda2239z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_jumpexitzd2loczd2zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt);
	BGL_EXPORTED_DECL BgL_blockz00_bglt BGl_blockzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_lightfuncallzd2rettypezd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_ifzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_jumpexitz00_bglt
		BGl_z62makezd2rtl_jumpexitzb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifeqz00_bglt
		BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t, BgL_blockz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_defsz00();
	static obj_t BGl_z62rtl_selectzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzd2namezb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_lightfuncallz00_bglt
		BGl_z62makezd2rtl_lightfuncallzb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_loadgzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_instanceofzd2loczd2setz12z12zzsaw_defsz00
		(BgL_rtl_instanceofz00_bglt, obj_t);
	static obj_t BGl_z62lambda2240z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62dumpzd2funzd2rtl_ifeq1772z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2080z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rtl_gozd2loczd2zzsaw_defsz00(BgL_rtl_goz00_bglt);
	static obj_t BGl_z62lambda2081z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda2405z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_effectzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2406z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_getfieldz00_bglt BGl_z62lambda2246z62zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_nopz00_bglt BGl_z62rtl_nopzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_defsz00();
	static obj_t BGl_z62lambda2085z62zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_switchzd2typezd2zzsaw_defsz00(BgL_rtl_switchz00_bglt);
	static obj_t BGl_z62lambda2086z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_getfieldz00_bglt BGl_z62lambda2248z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32533ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_castz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_rtl_purez00_bglt
		BGl_makezd2rtl_purezd2zzsaw_defsz00(obj_t);
	static BgL_rtl_goz00_bglt BGl_z62rtl_gozd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_vlengthzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_makezd2rtl_selectzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_protectz00_bglt
		BGl_makezd2rtl_protectzd2zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_switchzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_rtl_callzd2varzd2zzsaw_defsz00(BgL_rtl_callz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_getfieldz00_bglt
		BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_getfieldzd2namezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt BGl_rtl_inszd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_protectedzd2loczd2zzsaw_defsz00(BgL_rtl_protectedz00_bglt);
	static BgL_rtl_setfieldz00_bglt BGl_z62lambda2414z62zzsaw_defsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static BgL_rtl_switchz00_bglt BGl_z62lambda2092z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2254z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_setfieldz00_bglt BGl_z62lambda2416z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62lambda2255z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_switchz00_bglt BGl_z62lambda2094z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32372ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2259z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_setfieldz00_bglt
		BGl_z62makezd2rtl_setfieldzb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_rtl_instanceofz00_bglt
		BGl_z62rtl_instanceofzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_selectzd2patternszd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_funzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_inszf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt
		BGl_makezd2rtl_vsetzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzd2varzd2zzsaw_defsz00(BgL_rtl_regz00_bglt);
	static BgL_rtl_regz00_bglt BGl_z62rtl_regzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_lightfuncallzd2loczd2setz12z70zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_globalrefzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_makeboxz00_bglt
		BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t);
	static BgL_rtl_protectz00_bglt
		BGl_z62rtl_protectzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_nopzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2260z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2423z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2424z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_cast_nullz00_bglt
		BGl_z62rtl_cast_nullzd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62lambda2264z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2265z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2428z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2429z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_effectz00_bglt BGl_z62rtl_effectzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_gozd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_storegz00_bglt BGl_z62makezd2rtl_storegzb0zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_setfieldzd2typezd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_newzf3z91zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_rtl_storegzd2varzd2zzsaw_defsz00(BgL_rtl_storegz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_lightfuncallzd2funszd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2loczd2zzsaw_defsz00(BgL_rtl_insz00_bglt);
	static BgL_typez00_bglt BGl_z62lambda2434z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_instanceofzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_vallocz00_bglt BGl_z62lambda2273z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2435z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_instanceofz00_bglt
		BGl_z62makezd2rtl_instanceofzb0zzsaw_defsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_getfieldz00zzsaw_defsz00 = BUNSPEC;
	static BgL_rtl_vallocz00_bglt BGl_z62lambda2276z62zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62rtl_setfieldzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_returnz00_bglt
		BGl_makezd2rtl_returnzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_z62rtl_ifnezd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_protectzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_protectzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_lastzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62blockzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_boxsetzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_cast_nullzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_effectzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2z52spillzd2setz12z40zzsaw_defsz00(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vlengthzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt,
		BgL_typez00_bglt);
	static BgL_rtl_vsetz00_bglt BGl_z62lambda2444z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_castz00_bglt BGl_z62lambda2606z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2283z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2284z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_castz00_bglt BGl_z62lambda2608z62zzsaw_defsz00(obj_t);
	static BgL_rtl_vsetz00_bglt BGl_z62lambda2447z62zzsaw_defsz00(obj_t);
	static BgL_typez00_bglt BGl_z62lambda2288z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2289z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_failz00_bglt BGl_z62makezd2rtl_failzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_vsetzd2vtypezb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_gozf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vsetzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_switchzd2patternszd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_cast_nullzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt,
		BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda2614z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2453z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2615z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2454z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_funz00_bglt BGl_z62rtl_inszd2funzb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_vrefz00_bglt BGl_z62lambda2296z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2458z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2459z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_vrefz00_bglt BGl_z62lambda2298z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32449ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62blockzd2labelzd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_purezd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_protectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_protectz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vallocz00_bglt
		BGl_rtl_valloczd2nilzd2zzsaw_defsz00();
	static BgL_typez00_bglt BGl_z62rtl_regzd2typezb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2621z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2622z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_loadiz00_bglt BGl_z62rtl_loadizd2nilzb0zzsaw_defsz00(obj_t);
	static BgL_rtl_loadfunz00_bglt
		BGl_z62rtl_loadfunzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_vsetzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62rtl_loadgzd2varzb0zzsaw_defsz00(obj_t,
		obj_t);
	static BgL_rtl_boxsetz00_bglt BGl_z62lambda2465z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32733ze3ze5zzsaw_defsz00(obj_t);
	static BgL_rtl_boxsetz00_bglt BGl_z62lambda2467z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32482ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_cast_nullz00_bglt BGl_z62lambda2629z62zzsaw_defsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_notseqz00_bglt
		BGl_makezd2rtl_notseqzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32717ze3ze5zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_valloczd2vtypezd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt);
	static BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzb0zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_storegzf3zf3zzsaw_defsz00(obj_t);
	static BgL_rtl_callz00_bglt BGl_z62rtl_callzd2nilzb0zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_valloczd2typezd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_getfieldzd2typezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_vrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt, obj_t);
	static BgL_rtl_cast_nullz00_bglt BGl_z62lambda2632z62zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL BgL_atomz00_bglt
		BGl_rtl_loadizd2constantzd2zzsaw_defsz00(BgL_rtl_loadiz00_bglt);
	static BgL_typez00_bglt BGl_z62lambda2638z62zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_ifeqzf3z91zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_newz00_bglt BGl_z62lambda2477z62zzsaw_defsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2639z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62blockzd2predszb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_protectedz00zzsaw_defsz00 = BUNSPEC;
	static obj_t BGl_z62rtl_selectzd2patternszb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_selectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt,
		obj_t);
	static BgL_rtl_vlengthz00_bglt
		BGl_z62makezd2rtl_vlengthzb0zzsaw_defsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_valloczd2loczd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_lastzf3zf3zzsaw_defsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_pragmazd2formatzd2setz12z12zzsaw_defsz00(BgL_rtl_pragmaz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_vsetz00_bglt BGl_rtl_vsetzd2nilzd2zzsaw_defsz00();
	BGL_EXPORTED_DEF obj_t BGl_blockz00zzsaw_defsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_effectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_effectz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf3zf3zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_pragmazd2formatzb0zzsaw_defsz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62rtl_loadizd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_loadfunzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_newz00_bglt BGl_z62lambda2480z62zzsaw_defsz00(obj_t);
	static BgL_rtl_protectz00_bglt BGl_z62lambda2646z62zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31933ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32662ze3ze5zzsaw_defsz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2487z62zzsaw_defsz00(obj_t, obj_t);
	static BgL_rtl_protectz00_bglt BGl_z62lambda2649z62zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_lightfuncallzd2rettypezb0zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2488z62zzsaw_defsz00(obj_t, obj_t, obj_t);
	static BgL_rtl_switchz00_bglt BGl_z62rtl_switchzd2nilzb0zzsaw_defsz00(obj_t);
	static obj_t BGl_z62rtl_callzd2loczb0zzsaw_defsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_ifnez00_bglt
		BGl_makezd2rtl_ifnezd2zzsaw_defsz00(obj_t, BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_selectz00_bglt
		BGl_rtl_selectzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_z62rtl_switchzf3z91zzsaw_defsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_boxrefzd2loczd2setz12z70zzsaw_defsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_selectzd2typezb0zzsaw_defsz00(obj_t,
		obj_t);
	static obj_t __cnst[81];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_makeboxzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_makeboxza7f3451z00, BGl_z62rtl_makeboxzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_callzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ca3452z00, BGl_z62makezd2rtl_callzb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vrefzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2lo3453z00,
		BGl_z62rtl_vrefzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectedzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_protected3454za7,
		BGl_z62rtl_protectedzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_protectza7f3455z00, BGl_z62rtl_protectzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73456z00,
		BGl_z62rtl_setfieldzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_callzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7d2lo3457z00,
		BGl_z62rtl_callzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762blockza7d2nilza7b3458za7, BGl_z62blockzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_pragmazd2formatzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7d23459z00,
		BGl_z62rtl_pragmazd2formatzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2ni3460z00, BGl_z62rtl_castzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7d23461z00,
		BGl_z62rtl_pragmazd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7d2ni3462z00, BGl_z62rtl_callzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2marginzd2envz00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2margin3463z00, BGl_z62dumpzd2marginzb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2nil3464z00, BGl_z62rtl_inszd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2tozd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7d2toza7b3465za7, BGl_z62rtl_gozd2tozb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vlengthzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d3466z00,
		BGl_z62rtl_vlengthzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_valloczd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_va3467z00,
		BGl_z62makezd2rtl_valloczb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_applyzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_applyza7d2l3468z00, BGl_z62rtl_applyzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_getfieldzd2objtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73469z00,
		BGl_z62rtl_getfieldzd2objtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadfunzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7d3470z00,
		BGl_z62rtl_loadfunzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_castzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ca3471z00, BGl_z62makezd2rtl_castzb0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null3472za7,
		BGl_z62rtl_cast_nullzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7d3473z00,
		BGl_z62rtl_loadfunzd2varzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2argszd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2arg3474z00, BGl_z62rtl_inszd2argszb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_valloczd2vtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23475z00,
		BGl_z62rtl_valloczd2vtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7d23476z00,
		BGl_z62rtl_storegzd2varzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null3477za7,
		BGl_z62rtl_cast_nullzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lastzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lastza7d2ni3478z00, BGl_z62rtl_lastzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_funza7f3za7913479za7, BGl_z62rtl_funzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2typ3480z00, BGl_z62rtl_regzd2typezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_boxrefza7d23481z00,
		BGl_z62rtl_boxrefzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_protectedzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_protected3482za7,
		BGl_z62rtl_protectedzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_nopzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_nopza7d2nil3483z00, BGl_z62rtl_nopzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2z52spillzd2setz12zd2envz92zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2za7523484za7,
		BGl_z62rtl_inszd2z52spillzd2setz12z22zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2blockzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2blockza73485za7, BGl_z62makezd2blockzb0zzsaw_defsz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2argszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2arg3486z00,
		BGl_z62rtl_inszd2argszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d3487z00,
		BGl_z62rtl_vlengthzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3300z00zzsaw_defsz00,
		BgL_bgl_za762lambda2370za7623488z00, BGl_z62lambda2370z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3301z00zzsaw_defsz00,
		BgL_bgl_za762lambda2368za7623489z00, BGl_z62lambda2368z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3302z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3490za7,
		BGl_z62zc3z04anonymousza32385ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3303z00zzsaw_defsz00,
		BgL_bgl_za762lambda2383za7623491z00, BGl_z62lambda2383z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_selectzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_se3492z00,
		BGl_z62makezd2rtl_selectzb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3304z00zzsaw_defsz00,
		BgL_bgl_za762lambda2381za7623493z00, BGl_z62lambda2381z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3305z00zzsaw_defsz00,
		BgL_bgl_za762lambda2406za7623494z00, BGl_z62lambda2406z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3306z00zzsaw_defsz00,
		BgL_bgl_za762lambda2405za7623495z00, BGl_z62lambda2405z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3307z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3496za7,
		BGl_z62zc3z04anonymousza32398ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3308z00zzsaw_defsz00,
		BgL_bgl_za762lambda2396za7623497z00, BGl_z62lambda2396z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3309z00zzsaw_defsz00,
		BgL_bgl_za762lambda2393za7623498z00, BGl_z62lambda2393z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_switchzd2patternszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23499z00,
		BGl_z62rtl_switchzd2patternszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7f33500z00, BGl_z62rtl_selectzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vlengthzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_vl3501z00,
		BGl_z62makezd2rtl_vlengthzb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectedzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_protected3502za7, BGl_z62rtl_protectedzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3310z00zzsaw_defsz00,
		BgL_bgl_za762lambda2424za7623503z00, BGl_z62lambda2424z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3311z00zzsaw_defsz00,
		BgL_bgl_za762lambda2423za7623504z00, BGl_z62lambda2423z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3312z00zzsaw_defsz00,
		BgL_bgl_za762lambda2429za7623505z00, BGl_z62lambda2429z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3313z00zzsaw_defsz00,
		BgL_bgl_za762lambda2428za7623506z00, BGl_z62lambda2428z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2argsza2zd2envza2zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2arg3507z00,
		BGl_z62rtl_inszd2argsza2z12zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3508za7,
		BGl_z62rtl_lightfuncallzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3314z00zzsaw_defsz00,
		BgL_bgl_za762lambda2435za7623509z00, BGl_z62lambda2435z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3315z00zzsaw_defsz00,
		BgL_bgl_za762lambda2434za7623510z00, BGl_z62lambda2434z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3316z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3511za7,
		BGl_z62zc3z04anonymousza32419ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_castzd2fromtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2fr3512z00,
		BGl_z62rtl_castzd2fromtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3317z00zzsaw_defsz00,
		BgL_bgl_za762lambda2416za7623513z00, BGl_z62lambda2416z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2loc3514z00,
		BGl_z62rtl_inszd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3318z00zzsaw_defsz00,
		BgL_bgl_za762lambda2414za7623515z00, BGl_z62lambda2414z62zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3319z00zzsaw_defsz00,
		BgL_bgl_za762lambda2454za7623516z00, BGl_z62lambda2454z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3409z00zzsaw_defsz00,
		BgL_bgl_string3409za700za7za7s3517za7, "", 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzd2vtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2vt3518z00,
		BGl_z62rtl_vrefzd2vtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_globalrefzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_gl3519z00,
		BGl_z62makezd2rtl_globalrefzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_applyzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_applyza7f3za73520za7, BGl_z62rtl_applyzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3320z00zzsaw_defsz00,
		BgL_bgl_za762lambda2453za7623521z00, BGl_z62lambda2453z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3321z00zzsaw_defsz00,
		BgL_bgl_za762lambda2459za7623522z00, BGl_z62lambda2459z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3322z00zzsaw_defsz00,
		BgL_bgl_za762lambda2458za7623523z00, BGl_z62lambda2458z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3160z00zzsaw_defsz00,
		BgL_bgl_za762lambda1938za7623524z00, BGl_z62lambda1938z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3323z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3525za7,
		BGl_z62zc3z04anonymousza32449ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3161z00zzsaw_defsz00,
		BgL_bgl_za762lambda1937za7623526z00, BGl_z62lambda1937z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3324z00zzsaw_defsz00,
		BgL_bgl_za762lambda2447za7623527z00, BGl_z62lambda2447z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3162z00zzsaw_defsz00,
		BgL_bgl_za762lambda1943za7623528z00, BGl_z62lambda1943z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3325z00zzsaw_defsz00,
		BgL_bgl_za762lambda2444za7623529z00, BGl_z62lambda2444z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3163z00zzsaw_defsz00,
		BgL_bgl_za762lambda1942za7623530z00, BGl_z62lambda1942z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3411z00zzsaw_defsz00,
		BgL_bgl_string3411za700za7za7s3531za7, "dump1749", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3326z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3532za7,
		BGl_z62zc3z04anonymousza32470ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3164z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3533za7,
		BGl_z62zc3z04anonymousza31950ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_newzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2loc3534z00,
		BGl_z62rtl_newzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3327z00zzsaw_defsz00,
		BgL_bgl_za762lambda2467za7623535z00, BGl_z62lambda2467z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3165z00zzsaw_defsz00,
		BgL_bgl_za762lambda1949za7623536z00, BGl_z62lambda1949z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3413z00zzsaw_defsz00,
		BgL_bgl_string3413za700za7za7s3537za7, "dump-fun1757", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3328z00zzsaw_defsz00,
		BgL_bgl_za762lambda2465za7623538z00, BGl_z62lambda2465z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3166z00zzsaw_defsz00,
		BgL_bgl_za762lambda1948za7623539z00, BGl_z62lambda1948z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3329z00zzsaw_defsz00,
		BgL_bgl_za762lambda2488za7623540z00, BGl_z62lambda2488z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3167z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3541za7,
		BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3415z00zzsaw_defsz00,
		BgL_bgl_string3415za700za7za7s3542za7, "shape", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3168z00zzsaw_defsz00,
		BgL_bgl_za762lambda1956za7623543z00, BGl_z62lambda1956z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2patternszd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23544z00,
		BGl_z62rtl_switchzd2patternszb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3169z00zzsaw_defsz00,
		BgL_bgl_za762lambda1955za7623545z00, BGl_z62lambda1955z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3418z00zzsaw_defsz00,
		BgL_bgl_string3418za700za7za7s3546za7, "dump", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2hardwarezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2har3547z00,
		BGl_z62rtl_regzd2hardwarezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7f3za7913548za7, BGl_z62rtl_inszf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3330z00zzsaw_defsz00,
		BgL_bgl_za762lambda2487za7623549z00, BGl_z62lambda2487z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_returnzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_re3550z00,
		BGl_z62makezd2rtl_returnzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3331z00zzsaw_defsz00,
		BgL_bgl_za762lambda2498za7623551z00, BGl_z62lambda2498z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3332z00zzsaw_defsz00,
		BgL_bgl_za762lambda2497za7623552z00, BGl_z62lambda2497z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3170z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3553za7,
		BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3333z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3554za7,
		BGl_z62zc3z04anonymousza32482ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3171z00zzsaw_defsz00,
		BgL_bgl_za762lambda1963za7623555z00, BGl_z62lambda1963z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3334z00zzsaw_defsz00,
		BgL_bgl_za762lambda2480za7623556z00, BGl_z62lambda2480z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3172z00zzsaw_defsz00,
		BgL_bgl_za762lambda1962za7623557z00, BGl_z62lambda1962z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3335z00zzsaw_defsz00,
		BgL_bgl_za762lambda2477za7623558z00, BGl_z62lambda2477z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3173z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3559za7,
		BGl_z62zc3z04anonymousza31971ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funcallzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_funcallza7d3560z00,
		BGl_z62rtl_funcallzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_funza7d2loc3561z00, BGl_z62rtl_funzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3336z00zzsaw_defsz00,
		BgL_bgl_za762lambda2520za7623562z00, BGl_z62lambda2520z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3174z00zzsaw_defsz00,
		BgL_bgl_za762lambda1970za7623563z00, BGl_z62lambda1970z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3422z00zzsaw_defsz00,
		BgL_bgl_string3422za700za7za7s3564za7, "dump-fun", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3337z00zzsaw_defsz00,
		BgL_bgl_za762lambda2519za7623565z00, BGl_z62lambda2519z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3175z00zzsaw_defsz00,
		BgL_bgl_za762lambda1969za7623566z00, BGl_z62lambda1969z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3338z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3567za7,
		BGl_z62zc3z04anonymousza32509ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3176z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3568za7,
		BGl_z62zc3z04anonymousza31933ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3339z00zzsaw_defsz00,
		BgL_bgl_za762lambda2507za7623569z00, BGl_z62lambda2507z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3177z00zzsaw_defsz00,
		BgL_bgl_za762lambda1931za7623570z00, BGl_z62lambda1931z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3178z00zzsaw_defsz00,
		BgL_bgl_za762lambda1929za7623571z00, BGl_z62lambda1929z62zzsaw_defsz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3179z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3572za7,
		BGl_z62zc3z04anonymousza31989ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7f3za7913573za7, BGl_z62rtl_newzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3340z00zzsaw_defsz00,
		BgL_bgl_za762lambda2504za7623574z00, BGl_z62lambda2504z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3341z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3575za7,
		BGl_z62zc3z04anonymousza32533ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_protectzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_pr3576z00,
		BGl_z62makezd2rtl_protectzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3342z00zzsaw_defsz00,
		BgL_bgl_za762lambda2530za7623577z00, BGl_z62lambda2530z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3180z00zzsaw_defsz00,
		BgL_bgl_za762lambda1988za7623578z00, BGl_z62lambda1988z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vsetzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2ty3579z00,
		BGl_z62rtl_vsetzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3343z00zzsaw_defsz00,
		BgL_bgl_za762lambda2527za7623580z00, BGl_z62lambda2527z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3181z00zzsaw_defsz00,
		BgL_bgl_za762lambda1987za7623581z00, BGl_z62lambda1987z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3344z00zzsaw_defsz00,
		BgL_bgl_za762lambda2556za7623582z00, BGl_z62lambda2556z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3182z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3583za7,
		BGl_z62zc3z04anonymousza31982ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3345z00zzsaw_defsz00,
		BgL_bgl_za762lambda2555za7623584z00, BGl_z62lambda2555z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3183z00zzsaw_defsz00,
		BgL_bgl_za762lambda1980za7623585z00, BGl_z62lambda1980z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3346z00zzsaw_defsz00,
		BgL_bgl_za762lambda2564za7623586z00, BGl_z62lambda2564z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3184z00zzsaw_defsz00,
		BgL_bgl_za762lambda1977za7623587z00, BGl_z62lambda1977z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3432z00zzsaw_defsz00,
		BgL_bgl_string3432za700za7za7s3588za7, "::", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3347z00zzsaw_defsz00,
		BgL_bgl_za762lambda2563za7623589z00, BGl_z62lambda2563z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3185z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3590za7,
		BGl_z62zc3z04anonymousza32000ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3433z00zzsaw_defsz00,
		BgL_bgl_string3433za700za7za7s3591za7, "[", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3348z00zzsaw_defsz00,
		BgL_bgl_za762lambda2569za7623592z00, BGl_z62lambda2569z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3186z00zzsaw_defsz00,
		BgL_bgl_za762lambda1998za7623593z00, BGl_z62lambda1998z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3434z00zzsaw_defsz00,
		BgL_bgl_string3434za700za7za7s3594za7, " <- ", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3349z00zzsaw_defsz00,
		BgL_bgl_za762lambda2568za7623595z00, BGl_z62lambda2568z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3187z00zzsaw_defsz00,
		BgL_bgl_za762lambda1996za7623596z00, BGl_z62lambda1996z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3435z00zzsaw_defsz00,
		BgL_bgl_string3435za700za7za7s3597za7, " (", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3188z00zzsaw_defsz00,
		BgL_bgl_za762lambda2016za7623598z00, BGl_z62lambda2016z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_STRING(BGl_string3436z00zzsaw_defsz00,
		BgL_bgl_string3436za700za7za7s3599za7, "]", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3189z00zzsaw_defsz00,
		BgL_bgl_za762lambda2015za7623600z00, BGl_z62lambda2015z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3437z00zzsaw_defsz00,
		BgL_bgl_string3437za700za7za7s3601za7, "(block ", 7);
	      DEFINE_STRING(BGl_string3438z00zzsaw_defsz00,
		BgL_bgl_string3438za700za7za7s3602za7, ":preds ", 7);
	      DEFINE_STRING(BGl_string3439z00zzsaw_defsz00,
		BgL_bgl_string3439za700za7za7s3603za7, ":succs ", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2destzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2des3604z00, BGl_z62rtl_inszd2destzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2nil3605z00, BGl_z62rtl_regzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_ifeqzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7d2lo3606z00,
		BGl_z62rtl_ifeqzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3350z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3607za7,
		BGl_z62zc3z04anonymousza32549ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3351z00zzsaw_defsz00,
		BgL_bgl_za762lambda2545za7623608z00, BGl_z62lambda2545z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3352z00zzsaw_defsz00,
		BgL_bgl_za762lambda2542za7623609z00, BGl_z62lambda2542z62zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3190z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3610za7,
		BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3353z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3611za7,
		BGl_z62zc3z04anonymousza32580ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3191z00zzsaw_defsz00,
		BgL_bgl_za762lambda2008za7623612z00, BGl_z62lambda2008z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3354z00zzsaw_defsz00,
		BgL_bgl_za762lambda2578za7623613z00, BGl_z62lambda2578z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3192z00zzsaw_defsz00,
		BgL_bgl_za762lambda2006za7623614z00, BGl_z62lambda2006z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3440z00zzsaw_defsz00,
		BgL_bgl_string3440za700za7za7s3615za7, ")\n", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3355z00zzsaw_defsz00,
		BgL_bgl_za762lambda2576za7623616z00, BGl_z62lambda2576z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3193z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3617za7,
		BGl_z62zc3z04anonymousza32029ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3441z00zzsaw_defsz00,
		BgL_bgl_string3441za700za7za7s3618za7, "*", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3356z00zzsaw_defsz00,
		BgL_bgl_za762lambda2598za7623619z00, BGl_z62lambda2598z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3194z00zzsaw_defsz00,
		BgL_bgl_za762lambda2027za7623620z00, BGl_z62lambda2027z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3442z00zzsaw_defsz00,
		BgL_bgl_string3442za700za7za7s3621za7, "%", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3357z00zzsaw_defsz00,
		BgL_bgl_za762lambda2597za7623622z00, BGl_z62lambda2597z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3195z00zzsaw_defsz00,
		BgL_bgl_za762lambda2023za7623623z00, BGl_z62lambda2023z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3443z00zzsaw_defsz00,
		BgL_bgl_string3443za700za7za7s3624za7, "!", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3358z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3625za7,
		BGl_z62zc3z04anonymousza32592ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3196z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3626za7,
		BGl_z62zc3z04anonymousza32041ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3444z00zzsaw_defsz00,
		BgL_bgl_string3444za700za7za7s3627za7, "$", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3359z00zzsaw_defsz00,
		BgL_bgl_za762lambda2589za7623628z00, BGl_z62lambda2589z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3197z00zzsaw_defsz00,
		BgL_bgl_za762lambda2039za7623629z00, BGl_z62lambda2039z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3445z00zzsaw_defsz00,
		BgL_bgl_string3445za700za7za7s3630za7, "@", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3198z00zzsaw_defsz00,
		BgL_bgl_za762lambda2037za7623631z00, BGl_z62lambda2037z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3446z00zzsaw_defsz00,
		BgL_bgl_string3446za700za7za7s3632za7, "saw_defs", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3199z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3633za7,
		BGl_z62zc3z04anonymousza32052ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3447z00zzsaw_defsz00,
		BgL_bgl_string3447za700za7za7s3634za7,
		"_ block pair first succs preds int label rtl_ins args fun dest %spill rtl_protected rtl_protect rtl_cast_null rtl_cast fromtype totype rtl_pragma format rtl_funcall rtl_lightfuncall rettype funs symbol rtl_apply rtl_call rtl_new pair-nil constr rtl_boxset rtl_vset rtl_setfield rtl_storeg rtl_effect rtl_boxref rtl_makebox rtl_instanceof rtl_vlength rtl_vref rtl_valloc vtype rtl_getfield objtype bstring rtl_globalref rtl_loadfun rtl_loadg rtl_loadi constant rtl_mov rtl_nop rtl_pure rtl_go to rtl_ifne rtl_ifeq then rtl_switch labels rtl_select patterns rtl_if rtl_notseq rtl_fail rtl_jumpexit rtl_return rtl_last rtl_fun loc saw_defs rtl_reg hardware key name onexpr? obj var type #(\"\" \" \" \"  \" \"   \" \"    \" \"     \" \"      \" \"       \") ",
		739);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_movzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_movza7d2nil3635z00, BGl_z62rtl_movzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3360z00zzsaw_defsz00,
		BgL_bgl_za762lambda2587za7623636z00, BGl_z62lambda2587z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3361z00zzsaw_defsz00,
		BgL_bgl_za762lambda2615za7623637z00, BGl_z62lambda2615z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3362z00zzsaw_defsz00,
		BgL_bgl_za762lambda2614za7623638z00, BGl_z62lambda2614z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3363z00zzsaw_defsz00,
		BgL_bgl_za762lambda2622za7623639z00, BGl_z62lambda2622z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3364z00zzsaw_defsz00,
		BgL_bgl_za762lambda2621za7623640z00, BGl_z62lambda2621z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3365z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3641za7,
		BGl_z62zc3z04anonymousza32610ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3366z00zzsaw_defsz00,
		BgL_bgl_za762lambda2608za7623642z00, BGl_z62lambda2608z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3367z00zzsaw_defsz00,
		BgL_bgl_za762lambda2606za7623643z00, BGl_z62lambda2606z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73644z00,
		BGl_z62rtl_getfieldzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3368z00zzsaw_defsz00,
		BgL_bgl_za762lambda2639za7623645z00, BGl_z62lambda2639z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3369z00zzsaw_defsz00,
		BgL_bgl_za762lambda2638za7623646z00, BGl_z62lambda2638z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7f3647z00, BGl_z62rtl_loadfunzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_ifnezd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7d2lo3648z00,
		BGl_z62rtl_ifnezd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3370z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3649za7,
		BGl_z62zc3z04anonymousza32634ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3371z00zzsaw_defsz00,
		BgL_bgl_za762lambda2632za7623650z00, BGl_z62lambda2632z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7d2l3651z00, BGl_z62rtl_loadgzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3372z00zzsaw_defsz00,
		BgL_bgl_za762lambda2629za7623652z00, BGl_z62lambda2629z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3373z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3653za7,
		BGl_z62zc3z04anonymousza32651ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3374z00zzsaw_defsz00,
		BgL_bgl_za762lambda2649za7623654z00, BGl_z62lambda2649z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3375z00zzsaw_defsz00,
		BgL_bgl_za762lambda2646za7623655z00, BGl_z62lambda2646z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3376z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3656za7,
		BGl_z62zc3z04anonymousza32662ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3377z00zzsaw_defsz00,
		BgL_bgl_za762lambda2660za7623657z00, BGl_z62lambda2660z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vrefzd2vtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2vt3658z00,
		BGl_z62rtl_vrefzd2vtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3378z00zzsaw_defsz00,
		BgL_bgl_za762lambda2658za7623659z00, BGl_z62lambda2658z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3379z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3660za7,
		BGl_z62zc3z04anonymousza32680ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxsetzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_boxsetza7d23661z00,
		BGl_z62rtl_boxsetzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3380z00zzsaw_defsz00,
		BgL_bgl_za762lambda2679za7623662z00, BGl_z62lambda2679z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3381z00zzsaw_defsz00,
		BgL_bgl_za762lambda2678za7623663z00, BGl_z62lambda2678z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3382z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3664za7,
		BGl_z62zc3z04anonymousza32687ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3383z00zzsaw_defsz00,
		BgL_bgl_za762lambda2686za7623665z00, BGl_z62lambda2686z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3384z00zzsaw_defsz00,
		BgL_bgl_za762lambda2685za7623666z00, BGl_z62lambda2685z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3385z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3667za7,
		BGl_z62zc3z04anonymousza32694ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadfunzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_lo3668z00,
		BGl_z62makezd2rtl_loadfunzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3386z00zzsaw_defsz00,
		BgL_bgl_za762lambda2693za7623669z00, BGl_z62lambda2693z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3387z00zzsaw_defsz00,
		BgL_bgl_za762lambda2692za7623670z00, BGl_z62lambda2692z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3388z00zzsaw_defsz00,
		BgL_bgl_za762lambda2700za7623671z00, BGl_z62lambda2700z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3389z00zzsaw_defsz00,
		BgL_bgl_za762lambda2699za7623672z00, BGl_z62lambda2699z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7f3za793673za7, BGl_z62rtl_ifnezf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2ni3674z00, BGl_z62rtl_vrefzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7f3za73675za7, BGl_z62rtl_loadgzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vsetzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_vs3676z00, BGl_z62makezd2rtl_vsetzb0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3390z00zzsaw_defsz00,
		BgL_bgl_za762lambda2706za7623677z00, BGl_z62lambda2706z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_cast_nullzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null3678za7,
		BGl_z62rtl_cast_nullzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadizd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7d2l3679z00,
		BGl_z62rtl_loadizd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3391z00zzsaw_defsz00,
		BgL_bgl_za762lambda2705za7623680z00, BGl_z62lambda2705z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3392z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3681za7,
		BGl_z62zc3z04anonymousza32672ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3393z00zzsaw_defsz00,
		BgL_bgl_za762lambda2670za7623682z00, BGl_z62lambda2670z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3394z00zzsaw_defsz00,
		BgL_bgl_za762lambda2668za7623683z00, BGl_z62lambda2668z62zzsaw_defsz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3395z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3684za7,
		BGl_z62zc3z04anonymousza32726ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3396z00zzsaw_defsz00,
		BgL_bgl_za762lambda2725za7623685z00, BGl_z62lambda2725z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3397z00zzsaw_defsz00,
		BgL_bgl_za762lambda2724za7623686z00, BGl_z62lambda2724z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3398z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3687za7,
		BGl_z62zc3z04anonymousza32733ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3399z00zzsaw_defsz00,
		BgL_bgl_za762lambda2732za7623688z00, BGl_z62lambda2732z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_gozd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_go3689z00, BGl_z62makezd2rtl_gozb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23690z00,
		BGl_z62rtl_switchzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d23691z00,
		BGl_z62rtl_selectzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2funszd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3692za7,
		BGl_z62rtl_lightfuncallzd2funszb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7f33693z00, BGl_z62rtl_pragmazf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7d2locza73694za7,
		BGl_z62rtl_gozd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_instanceofzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo3695za7,
		BGl_z62rtl_instanceofzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_switchzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23696z00,
		BGl_z62rtl_switchzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funcallzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_funcallza7f3697z00, BGl_z62rtl_funcallzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzd2onexprzf3zd2setz12zd2envz33zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2one3698z00,
		BGl_z62rtl_regzd2onexprzf3zd2setz12z83zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_ifza7f3za791za73699z00, BGl_z62rtl_ifzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23700z00,
		BGl_z62rtl_valloczd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3701za7,
		BGl_z62rtl_lightfuncallzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2loc3702z00, BGl_z62rtl_newzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_boxrefzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_bo3703z00,
		BGl_z62makezd2rtl_boxrefzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_jumpexitzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_jumpexitza73704z00, BGl_z62rtl_jumpexitzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7d3705z00,
		BGl_z62rtl_loadfunzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7d23706z00,
		BGl_z62rtl_storegzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2namezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3707za7,
		BGl_z62rtl_lightfuncallzd2namezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_effectzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_effectza7f33708z00, BGl_z62rtl_effectzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7d23709z00,
		BGl_z62rtl_returnzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_globalrefzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref3710za7,
		BGl_z62rtl_globalrefzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2predszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762blockza7d2preds3711z00,
		BGl_z62blockzd2predszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7d23712z00,
		BGl_z62rtl_pragmazd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2typ3713z00,
		BGl_z62rtl_regzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2firstzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762blockza7d2first3714z00,
		BGl_z62blockzd2firstzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7f3715z00, BGl_z62rtl_vlengthzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_applyzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_applyza7d2n3716z00, BGl_z62rtl_applyzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7f3za7913717za7, BGl_z62rtl_regzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_instanceofzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo3718za7,
		BGl_z62rtl_instanceofzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_failzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_failza7d2lo3719z00, BGl_z62rtl_failzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifnezd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_if3720z00, BGl_z62makezd2rtl_ifnezb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_boxrefzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_boxrefza7d23721z00,
		BGl_z62rtl_boxrefzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_applyzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ap3722z00,
		BGl_z62makezd2rtl_applyzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_funcallzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_fu3723z00,
		BGl_z62makezd2rtl_funcallzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_getfieldzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ge3724z00,
		BGl_z62makezd2rtl_getfieldzb0zzsaw_defsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_cast_nullzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null3725za7,
		BGl_z62rtl_cast_nullzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2funzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2fun3726z00, BGl_z62rtl_inszd2funzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_castzd2totypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2to3727z00,
		BGl_z62rtl_castzd2totypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_instanceofzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo3728za7, BGl_z62rtl_instanceofzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2lo3729z00, BGl_z62rtl_vsetzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzd2constrzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2con3730z00,
		BGl_z62rtl_newzd2constrzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762blockza7f3za791za7za73731za7, BGl_z62blockzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_getfieldzd2objtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73732z00,
		BGl_z62rtl_getfieldzd2objtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_switchzd2labelszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23733z00,
		BGl_z62rtl_switchzd2labelszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2z52spillzd2envz52zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2za7523734za7,
		BGl_z62rtl_inszd2z52spillze2zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_pragmazd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_pr3735z00,
		BGl_z62makezd2rtl_pragmazb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d3736z00,
		BGl_z62rtl_vlengthzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_returnzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7d23737z00,
		BGl_z62rtl_returnzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_failzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_failza7f3za793738za7, BGl_z62rtl_failzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_movzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_movza7d2loc3739z00,
		BGl_z62rtl_movzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7f3za73740za7, BGl_z62rtl_loadizf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifeqzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_if3741z00, BGl_z62makezd2rtl_ifeqzb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_movzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_movza7f3za7913742za7, BGl_z62rtl_movzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_funzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_fu3743z00, BGl_z62makezd2rtl_funzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_setfieldzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_se3744z00,
		BGl_z62makezd2rtl_setfieldzb0zzsaw_defsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref3745za7,
		BGl_z62rtl_globalrefzd2varzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_valloczd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23746z00,
		BGl_z62rtl_valloczd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7b03747za7, BGl_z62dumpzd2funzb0zzsaw_defsz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funcallzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_funcallza7d3748z00,
		BGl_z62rtl_funcallzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_funzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_funza7d2nil3749z00, BGl_z62rtl_funzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2funszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3750za7,
		BGl_z62rtl_lightfuncallzd2funszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadgzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_lo3751z00,
		BGl_z62makezd2rtl_loadgzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_switchzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23752z00,
		BGl_z62rtl_switchzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_jumpexitzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_jumpexitza73753z00,
		BGl_z62rtl_jumpexitzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2var3754z00,
		BGl_z62rtl_regzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7d2l3755z00, BGl_z62rtl_loadizd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_protectedzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_pr3756z00,
		BGl_z62makezd2rtl_protectedzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7d2locza73757za7, BGl_z62rtl_gozd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23758z00,
		BGl_z62rtl_switchzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7d2lo3759z00, BGl_z62rtl_ifnezd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7f33760z00, BGl_z62rtl_switchzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_valloczd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23761z00,
		BGl_z62rtl_valloczd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_newzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ne3762z00, BGl_z62makezd2rtl_newzb0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_makeboxzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_makeboxza7d3763z00,
		BGl_z62rtl_makeboxzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadgzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7d2v3764z00,
		BGl_z62rtl_loadgzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2succszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762blockza7d2succs3765z00,
		BGl_z62blockzd2succszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7d2n3766z00, BGl_z62rtl_loadgzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxsetzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_boxsetza7d23767z00,
		BGl_z62rtl_boxsetzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzd2vtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2vt3768z00,
		BGl_z62rtl_vsetzd2vtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23769z00,
		BGl_z62rtl_valloczd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzd2patternszd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d23770z00,
		BGl_z62rtl_selectzd2patternszb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizd2constantzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7d2c3771z00,
		BGl_z62rtl_loadizd2constantzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7d23772z00,
		BGl_z62rtl_returnzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_instanceofzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo3773za7,
		BGl_z62rtl_instanceofzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7d2va3774z00, BGl_z62rtl_callzd2varzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d23775z00,
		BGl_z62rtl_selectzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzd2namezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73776z00,
		BGl_z62rtl_getfieldzd2namezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_lastzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_la3777z00, BGl_z62makezd2rtl_lastzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzd2namezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73778z00,
		BGl_z62rtl_setfieldzd2namezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_nopzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_nopza7f3za7913779za7, BGl_z62rtl_nopzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d23780z00,
		BGl_z62rtl_valloczd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3781za7,
		BGl_z62rtl_lightfuncallzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_makeboxzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ma3782z00,
		BGl_z62makezd2rtl_makeboxzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2nil3783z00, BGl_z62rtl_newzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_effectzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_effectza7d23784z00,
		BGl_z62rtl_effectzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadfunzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7d3785z00,
		BGl_z62rtl_loadfunzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_dumpzd2envzd2zzsaw_defsz00,
		BgL_bgl_za762dumpza762za7za7saw_3786z00, BGl_z62dumpz62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_setfieldzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73787z00,
		BGl_z62rtl_setfieldzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7d23788z00,
		BGl_z62rtl_storegzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3200z00zzsaw_defsz00,
		BgL_bgl_za762lambda2050za7623789z00, BGl_z62lambda2050z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3201z00zzsaw_defsz00,
		BgL_bgl_za762lambda2048za7623790z00, BGl_z62lambda2048z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_storegzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7d23791z00,
		BGl_z62rtl_storegzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3202z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3792za7,
		BGl_z62zc3z04anonymousza32064ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3203z00zzsaw_defsz00,
		BgL_bgl_za762lambda2062za7623793z00, BGl_z62lambda2062z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3204z00zzsaw_defsz00,
		BgL_bgl_za762lambda2060za7623794z00, BGl_z62lambda2060z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3205z00zzsaw_defsz00,
		BgL_bgl_za762lambda2081za7623795z00, BGl_z62lambda2081z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3206z00zzsaw_defsz00,
		BgL_bgl_za762lambda2080za7623796z00, BGl_z62lambda2080z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3207z00zzsaw_defsz00,
		BgL_bgl_za762lambda2086za7623797z00, BGl_z62lambda2086z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3208z00zzsaw_defsz00,
		BgL_bgl_za762lambda2085za7623798z00, BGl_z62lambda2085z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3209z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3799za7,
		BGl_z62zc3z04anonymousza32076ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_loadizd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_lo3800z00,
		BGl_z62makezd2rtl_loadizb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2funzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2fun3801z00,
		BGl_z62rtl_inszd2funzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7f33802z00, BGl_z62rtl_valloczf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73803z00, BGl_z62rtl_getfieldzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_selectzd2patternszd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d23804z00,
		BGl_z62rtl_selectzd2patternszd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7f3za793805za7, BGl_z62rtl_castzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2onexprzf3zd2envzf3zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2one3806z00,
		BGl_z62rtl_regzd2onexprzf3z43zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3210z00zzsaw_defsz00,
		BgL_bgl_za762lambda2073za7623807z00, BGl_z62lambda2073z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3211z00zzsaw_defsz00,
		BgL_bgl_za762lambda2071za7623808z00, BGl_z62lambda2071z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3212z00zzsaw_defsz00,
		BgL_bgl_za762lambda2102za7623809z00, BGl_z62lambda2102z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3213z00zzsaw_defsz00,
		BgL_bgl_za762lambda2101za7623810z00, BGl_z62lambda2101z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3214z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3811za7,
		BGl_z62zc3z04anonymousza32096ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3215z00zzsaw_defsz00,
		BgL_bgl_za762lambda2094za7623812z00, BGl_z62lambda2094z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3216z00zzsaw_defsz00,
		BgL_bgl_za762lambda2092za7623813z00, BGl_z62lambda2092z62zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3217z00zzsaw_defsz00,
		BgL_bgl_za762lambda2118za7623814z00, BGl_z62lambda2118z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7d23815z00,
		BGl_z62rtl_returnzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3218z00zzsaw_defsz00,
		BgL_bgl_za762lambda2117za7623816z00, BGl_z62lambda2117z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxsetzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_boxsetza7f33817z00, BGl_z62rtl_boxsetzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3219z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3818za7,
		BGl_z62zc3z04anonymousza32112ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_effectzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ef3819z00,
		BGl_z62makezd2rtl_effectzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtlzd2dumpzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtlza7d2dumpza7b03820za7, BGl_z62rtlzd2dumpzb0zzsaw_defsz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_purezd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_pureza7d2lo3821z00, BGl_z62rtl_purezd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_notseqzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_notseqza7d23822z00,
		BGl_z62rtl_notseqzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_failzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_fa3823z00, BGl_z62makezd2rtl_failzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3220z00zzsaw_defsz00,
		BgL_bgl_za762lambda2110za7623824z00, BGl_z62lambda2110z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vsetzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2lo3825z00,
		BGl_z62rtl_vsetzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3221z00zzsaw_defsz00,
		BgL_bgl_za762lambda2108za7623826z00, BGl_z62lambda2108z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3222z00zzsaw_defsz00,
		BgL_bgl_za762lambda2133za7623827z00, BGl_z62lambda2133z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3223z00zzsaw_defsz00,
		BgL_bgl_za762lambda2132za7623828z00, BGl_z62lambda2132z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3224z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3829za7,
		BGl_z62zc3z04anonymousza32128ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3225z00zzsaw_defsz00,
		BgL_bgl_za762lambda2126za7623830z00, BGl_z62lambda2126z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_applyzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_applyza7d2l3831z00,
		BGl_z62rtl_applyzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3226z00zzsaw_defsz00,
		BgL_bgl_za762lambda2124za7623832z00, BGl_z62lambda2124z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3227z00zzsaw_defsz00,
		BgL_bgl_za762lambda2148za7623833z00, BGl_z62lambda2148z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3228z00zzsaw_defsz00,
		BgL_bgl_za762lambda2147za7623834z00, BGl_z62lambda2147z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_makeboxzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_makeboxza7d3835z00,
		BGl_z62rtl_makeboxzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3229z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3836za7,
		BGl_z62zc3z04anonymousza32143ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3154z00zzsaw_defsz00,
		BgL_bgl_string3154za700za7za7s3837za7, "+-- ", 4);
	      DEFINE_STRING(BGl_string3155z00zzsaw_defsz00,
		BgL_bgl_string3155za700za7za7s3838za7, " ", 1);
	      DEFINE_STRING(BGl_string3156z00zzsaw_defsz00,
		BgL_bgl_string3156za700za7za7s3839za7, "| args:", 7);
	      DEFINE_STRING(BGl_string3157z00zzsaw_defsz00,
		BgL_bgl_string3157za700za7za7s3840za7, "| Basic blocks: ", 16);
	      DEFINE_STRING(BGl_string3158z00zzsaw_defsz00,
		BgL_bgl_string3158za700za7za7s3841za7, "(", 1);
	      DEFINE_STRING(BGl_string3159z00zzsaw_defsz00,
		BgL_bgl_string3159za700za7za7s3842za7, ")", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_movzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_mo3843z00, BGl_z62makezd2rtl_movzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_setfieldzd2namezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73844z00,
		BGl_z62rtl_setfieldzd2namezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzd2thenzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7d2th3845z00, BGl_z62rtl_ifeqzd2thenzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_failzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_failza7d2lo3846z00,
		BGl_z62rtl_failzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3230z00zzsaw_defsz00,
		BgL_bgl_za762lambda2141za7623847z00, BGl_z62lambda2141z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3231z00zzsaw_defsz00,
		BgL_bgl_za762lambda2139za7623848z00, BGl_z62lambda2139z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3232z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3849za7,
		BGl_z62zc3z04anonymousza32159ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3233z00zzsaw_defsz00,
		BgL_bgl_za762lambda2157za7623850z00, BGl_z62lambda2157z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3234z00zzsaw_defsz00,
		BgL_bgl_za762lambda2155za7623851z00, BGl_z62lambda2155z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3235z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3852za7,
		BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_funcallzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_funcallza7d3853z00,
		BGl_z62rtl_funcallzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2ty3854z00, BGl_z62rtl_vsetzd2typezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3236z00zzsaw_defsz00,
		BgL_bgl_za762lambda2167za7623855z00, BGl_z62lambda2167z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3237z00zzsaw_defsz00,
		BgL_bgl_za762lambda2165za7623856z00, BGl_z62lambda2165z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3238z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3857za7,
		BGl_z62zc3z04anonymousza32180ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3239z00zzsaw_defsz00,
		BgL_bgl_za762lambda2178za7623858z00, BGl_z62lambda2178z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifza7d2locza73859za7, BGl_z62rtl_ifzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7f3za793860za7, BGl_z62rtl_vsetzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_setfieldzd2objtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73861z00,
		BGl_z62rtl_setfieldzd2objtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2rettypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3862za7,
		BGl_z62rtl_lightfuncallzd2rettypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpza2zd2envz70zzsaw_defsz00,
		BgL_bgl_za762dumpza7a2za7c0za7za7s3863za7, BGl_z62dumpza2zc0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3400z00zzsaw_defsz00,
		BgL_bgl_za762lambda2731za7623864z00, BGl_z62lambda2731z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_failzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_failza7d2ni3865z00, BGl_z62rtl_failzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3401z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3866za7,
		BGl_z62zc3z04anonymousza32745ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3402z00zzsaw_defsz00,
		BgL_bgl_za762lambda2744za7623867z00, BGl_z62lambda2744z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3240z00zzsaw_defsz00,
		BgL_bgl_za762lambda2176za7623868z00, BGl_z62lambda2176z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3403z00zzsaw_defsz00,
		BgL_bgl_za762lambda2743za7623869z00, BGl_z62lambda2743z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3241z00zzsaw_defsz00,
		BgL_bgl_za762lambda2195za7623870z00, BGl_z62lambda2195z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3404z00zzsaw_defsz00,
		BgL_bgl_za762lambda2750za7623871z00, BGl_z62lambda2750z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3242z00zzsaw_defsz00,
		BgL_bgl_za762lambda2194za7623872z00, BGl_z62lambda2194z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3405z00zzsaw_defsz00,
		BgL_bgl_za762lambda2749za7623873z00, BGl_z62lambda2749z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3243z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3874za7,
		BGl_z62zc3z04anonymousza32190ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3406z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3875za7,
		BGl_z62zc3z04anonymousza32717ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3244z00zzsaw_defsz00,
		BgL_bgl_za762lambda2188za7623876z00, BGl_z62lambda2188z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3407z00zzsaw_defsz00,
		BgL_bgl_za762lambda2715za7623877z00, BGl_z62lambda2715z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3245z00zzsaw_defsz00,
		BgL_bgl_za762lambda2186za7623878z00, BGl_z62lambda2186z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3408z00zzsaw_defsz00,
		BgL_bgl_za762lambda2713za7623879z00, BGl_z62lambda2713z62zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3246z00zzsaw_defsz00,
		BgL_bgl_za762lambda2210za7623880z00, BGl_z62lambda2210z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3247z00zzsaw_defsz00,
		BgL_bgl_za762lambda2209za7623881z00, BGl_z62lambda2209z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3248z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3882za7,
		BGl_z62zc3z04anonymousza32205ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3249z00zzsaw_defsz00,
		BgL_bgl_za762lambda2203za7623883z00, BGl_z62lambda2203z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_purezf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_pureza7f3za793884za7, BGl_z62rtl_purezf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref3885za7,
		BGl_z62rtl_globalrefzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2rettypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3886za7,
		BGl_z62rtl_lightfuncallzd2rettypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2succszd2envz00zzsaw_defsz00,
		BgL_bgl_za762blockza7d2succs3887z00, BGl_z62blockzd2succszb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3410z00zzsaw_defsz00,
		BgL_bgl_za762dump1749za762za7za73888z00, BGl_z62dump1749z62zzsaw_defsz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3412z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2fun1753889z00, BGl_z62dumpzd2fun1757zb0zzsaw_defsz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3250z00zzsaw_defsz00,
		BgL_bgl_za762lambda2201za7623890z00, BGl_z62lambda2201z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3251z00zzsaw_defsz00,
		BgL_bgl_za762lambda2225za7623891z00, BGl_z62lambda2225z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3414z00zzsaw_defsz00,
		BgL_bgl_za762shapeza7d2rtl_i3892z00,
		BGl_z62shapezd2rtl_ins1746zb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3252z00zzsaw_defsz00,
		BgL_bgl_za762lambda2224za7623893z00, BGl_z62lambda2224z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3253z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3894za7,
		BGl_z62zc3z04anonymousza32220ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vsetzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2ni3895z00, BGl_z62rtl_vsetzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3416z00zzsaw_defsz00,
		BgL_bgl_za762shapeza7d2rtl_r3896z00,
		BGl_z62shapezd2rtl_reg1748zb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3254z00zzsaw_defsz00,
		BgL_bgl_za762lambda2218za7623897z00, BGl_z62lambda2218z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3417z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2block13898z00,
		BGl_z62dumpzd2block1752zb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3255z00zzsaw_defsz00,
		BgL_bgl_za762lambda2216za7623899z00, BGl_z62lambda2216z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3256z00zzsaw_defsz00,
		BgL_bgl_za762lambda2240za7623900z00, BGl_z62lambda2240z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3419z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2rtl_in3901z00,
		BGl_z62dumpzd2rtl_ins1754zb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3257z00zzsaw_defsz00,
		BgL_bgl_za762lambda2239za7623902z00, BGl_z62lambda2239z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3258z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3903za7,
		BGl_z62zc3z04anonymousza32235ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3259z00zzsaw_defsz00,
		BgL_bgl_za762lambda2233za7623904z00, BGl_z62lambda2233z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_newzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2typ3905z00, BGl_z62rtl_newzd2typezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_effectzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_effectza7d23906z00,
		BGl_z62rtl_effectzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_returnzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7f33907z00, BGl_z62rtl_returnzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3420z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2rtl_re3908z00,
		BGl_z62dumpzd2rtl_reg1756zb0zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3421z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23909za7,
		BGl_z62dumpzd2funzd2rtl_fun1760z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3260z00zzsaw_defsz00,
		BgL_bgl_za762lambda2231za7623910z00, BGl_z62lambda2231z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3423z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23911za7,
		BGl_z62dumpzd2funzd2rtl_loadi1762z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3261z00zzsaw_defsz00,
		BgL_bgl_za762lambda2255za7623912z00, BGl_z62lambda2255z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_callzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7d2va3913z00,
		BGl_z62rtl_callzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3424z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23914za7,
		BGl_z62dumpzd2funzd2rtl_mov1764z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3262z00zzsaw_defsz00,
		BgL_bgl_za762lambda2254za7623915z00, BGl_z62lambda2254z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3425z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23916za7,
		BGl_z62dumpzd2funzd2rtl_loadg1766z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3263z00zzsaw_defsz00,
		BgL_bgl_za762lambda2260za7623917z00, BGl_z62lambda2260z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3426z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23918za7,
		BGl_z62dumpzd2funzd2rtl_loadfun1768z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3264z00zzsaw_defsz00,
		BgL_bgl_za762lambda2259za7623919z00, BGl_z62lambda2259z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3427z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23920za7,
		BGl_z62dumpzd2funzd2rtl_globalr1770z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3265z00zzsaw_defsz00,
		BgL_bgl_za762lambda2265za7623921z00, BGl_z62lambda2265z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3428z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23922za7,
		BGl_z62dumpzd2funzd2rtl_ifeq1772z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3266z00zzsaw_defsz00,
		BgL_bgl_za762lambda2264za7623923z00, BGl_z62lambda2264z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_getfieldzd2namezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73924z00,
		BGl_z62rtl_getfieldzd2namezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3429z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23925za7,
		BGl_z62dumpzd2funzd2rtl_ifne1774z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3267z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3926za7,
		BGl_z62zc3z04anonymousza32250ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3268z00zzsaw_defsz00,
		BgL_bgl_za762lambda2248za7623927z00, BGl_z62lambda2248z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3269z00zzsaw_defsz00,
		BgL_bgl_za762lambda2246za7623928z00, BGl_z62lambda2246z62zzsaw_defsz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3430z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23929za7,
		BGl_z62dumpzd2funzd2rtl_go1776z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3431z00zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2funza7d23930za7,
		BGl_z62dumpzd2funzd2rtl_call1778z62zzsaw_defsz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3270z00zzsaw_defsz00,
		BgL_bgl_za762lambda2284za7623931z00, BGl_z62lambda2284z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3271z00zzsaw_defsz00,
		BgL_bgl_za762lambda2283za7623932z00, BGl_z62lambda2283z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3272z00zzsaw_defsz00,
		BgL_bgl_za762lambda2289za7623933z00, BGl_z62lambda2289z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2var3934z00, BGl_z62rtl_regzd2varzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3273z00zzsaw_defsz00,
		BgL_bgl_za762lambda2288za7623935z00, BGl_z62lambda2288z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3274z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3936za7,
		BGl_z62zc3z04anonymousza32278ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_castzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2lo3937z00,
		BGl_z62rtl_castzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3275z00zzsaw_defsz00,
		BgL_bgl_za762lambda2276za7623938z00, BGl_z62lambda2276z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3276z00zzsaw_defsz00,
		BgL_bgl_za762lambda2273za7623939z00, BGl_z62lambda2273z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3277z00zzsaw_defsz00,
		BgL_bgl_za762lambda2307za7623940z00, BGl_z62lambda2307z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3278z00zzsaw_defsz00,
		BgL_bgl_za762lambda2306za7623941z00, BGl_z62lambda2306z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3279z00zzsaw_defsz00,
		BgL_bgl_za762lambda2312za7623942z00, BGl_z62lambda2312z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_switchzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_sw3943z00,
		BGl_z62makezd2rtl_switchzb0zzsaw_defsz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2labelzd2envz00zzsaw_defsz00,
		BgL_bgl_za762blockza7d2label3944z00, BGl_z62blockzd2labelzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d3945z00,
		BGl_z62rtl_vlengthzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3280z00zzsaw_defsz00,
		BgL_bgl_za762lambda2311za7623946z00, BGl_z62lambda2311z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_storegzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7f33947z00, BGl_z62rtl_storegzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3281z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3948za7,
		BGl_z62zc3z04anonymousza32300ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3282z00zzsaw_defsz00,
		BgL_bgl_za762lambda2298za7623949z00, BGl_z62lambda2298z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3283z00zzsaw_defsz00,
		BgL_bgl_za762lambda2296za7623950z00, BGl_z62lambda2296z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3284z00zzsaw_defsz00,
		BgL_bgl_za762lambda2329za7623951z00, BGl_z62lambda2329z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3285z00zzsaw_defsz00,
		BgL_bgl_za762lambda2328za7623952z00, BGl_z62lambda2328z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3286z00zzsaw_defsz00,
		BgL_bgl_za762lambda2336za7623953z00, BGl_z62lambda2336z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza73954z00,
		BGl_z62rtl_getfieldzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3287z00zzsaw_defsz00,
		BgL_bgl_za762lambda2335za7623955z00, BGl_z62lambda2335z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3288z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3956za7,
		BGl_z62zc3z04anonymousza32324ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3289z00zzsaw_defsz00,
		BgL_bgl_za762lambda2322za7623957z00, BGl_z62lambda2322z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadfunzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadfunza7d3958z00,
		BGl_z62rtl_loadfunzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2predszd2envz00zzsaw_defsz00,
		BgL_bgl_za762blockza7d2preds3959z00, BGl_z62blockzd2predszb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73960z00,
		BGl_z62rtl_setfieldzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_notseqzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_notseqza7d23961z00,
		BGl_z62rtl_notseqzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_protectza7d3962z00,
		BGl_z62rtl_protectzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7d2lo3963z00, BGl_z62rtl_ifeqzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lastzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_lastza7f3za793964za7, BGl_z62rtl_lastzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3290z00zzsaw_defsz00,
		BgL_bgl_za762lambda2320za7623965z00, BGl_z62lambda2320z62zzsaw_defsz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_pragmazd2formatzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7d23966z00,
		BGl_z62rtl_pragmazd2formatzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3291z00zzsaw_defsz00,
		BgL_bgl_za762lambda2352za7623967z00, BGl_z62lambda2352z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3292z00zzsaw_defsz00,
		BgL_bgl_za762lambda2351za7623968z00, BGl_z62lambda2351z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3293z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3969za7,
		BGl_z62zc3z04anonymousza32346ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2inszd2rhszd2envzd2zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2insza7d23970za7,
		BGl_z62dumpzd2inszd2rhsz62zzsaw_defsz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3294z00zzsaw_defsz00,
		BgL_bgl_za762lambda2344za7623971z00, BGl_z62lambda2344z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3295z00zzsaw_defsz00,
		BgL_bgl_za762lambda2342za7623972z00, BGl_z62lambda2342z62zzsaw_defsz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3296z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3973za7,
		BGl_z62zc3z04anonymousza32362ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3297z00zzsaw_defsz00,
		BgL_bgl_za762lambda2360za7623974z00, BGl_z62lambda2360z62zzsaw_defsz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3298z00zzsaw_defsz00,
		BgL_bgl_za762lambda2358za7623975z00, BGl_z62lambda2358z62zzsaw_defsz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3299z00zzsaw_defsz00,
		BgL_bgl_za762za7c3za704anonymo3976za7,
		BGl_z62zc3z04anonymousza32372ze3ze5zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_notseqzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_notseqza7f33977z00, BGl_z62rtl_notseqzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectedzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_protected3978za7,
		BGl_z62rtl_protectedzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza73979z00,
		BGl_z62rtl_setfieldzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2tozd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7d2toza7d3980za7,
		BGl_z62rtl_gozd2tozd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadizd2constantzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7d2c3981z00,
		BGl_z62rtl_loadizd2constantzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_jumpexitzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_jumpexitza73982z00,
		BGl_z62rtl_jumpexitzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2lo3983z00, BGl_z62rtl_castzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2labelszd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d23984z00,
		BGl_z62rtl_switchzd2labelszb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadizd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadiza7d2n3985z00, BGl_z62rtl_loadizd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_boxsetzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_bo3986z00,
		BGl_z62makezd2rtl_boxsetzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7d2nilza73987za7, BGl_z62rtl_gozd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_jumpexitzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_jumpexitza73988z00,
		BGl_z62rtl_jumpexitzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7d2lo3989z00, BGl_z62rtl_callzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7d2ni3990z00, BGl_z62rtl_ifnezd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_inszd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2loc3991z00, BGl_z62rtl_inszd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_makeboxzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_makeboxza7d3992z00,
		BGl_z62rtl_makeboxzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_vrefzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_vr3993z00, BGl_z62makezd2rtl_vrefzb0zzsaw_defsz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lightfuncallzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc3994za7,
		BGl_z62rtl_lightfuncallzf3z91zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_jumpexitzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ju3995z00,
		BGl_z62makezd2rtl_jumpexitzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vsetzd2vtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vsetza7d2vt3996z00,
		BGl_z62rtl_vsetzd2vtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null3997za7,
		BGl_z62rtl_cast_nullzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_gozf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_goza7f3za791za73998z00, BGl_z62rtl_gozf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_callzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_callza7f3za793999za7, BGl_z62rtl_callzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_lastzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_lastza7d2lo4000z00, BGl_z62rtl_lastzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_getfieldzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza74001z00,
		BGl_z62rtl_getfieldzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzd2fromtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2fr4002z00,
		BGl_z62rtl_castzd2fromtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxrefzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_boxrefza7d24003z00,
		BGl_z62rtl_boxrefzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_nopzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_nopza7d2loc4004z00, BGl_z62rtl_nopzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_notseqzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_no4005z00,
		BGl_z62makezd2rtl_notseqzb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_cast_nullzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_ca4006z00,
		BGl_z62makezd2rtl_cast_nullzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_newzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2typ4007z00,
		BGl_z62rtl_newzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_nopzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_no4008z00, BGl_z62makezd2rtl_nopzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifnezd2thenzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7d2th4009z00, BGl_z62rtl_ifnezd2thenzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7f3za794010za7, BGl_z62rtl_ifeqzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_selectzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d24011z00,
		BGl_z62rtl_selectzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref4012za7, BGl_z62rtl_globalrefzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_setfieldzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza74013z00, BGl_z62rtl_setfieldzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_lightfuncallzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_li4014z00,
		BGl_z62makezd2rtl_lightfuncallzb0zzsaw_defsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_newzd2constrzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_newza7d2con4015z00,
		BGl_z62rtl_newzd2constrzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_loadgzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7d2l4016z00,
		BGl_z62rtl_loadgzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_ifzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_if4017z00, BGl_z62makezd2rtl_ifzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_effectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_effectza7d24018z00,
		BGl_z62rtl_effectzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vrefzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2ty4019z00,
		BGl_z62rtl_vrefzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_setfieldzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza74020z00,
		BGl_z62rtl_setfieldzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_purezd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_pu4021z00, BGl_z62makezd2rtl_purezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_regzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_re4022z00, BGl_z62makezd2rtl_regzb0zzsaw_defsz00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_instanceofzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo4023za7,
		BGl_z62rtl_instanceofzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_purezd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_pureza7d2lo4024z00,
		BGl_z62rtl_purezd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_protectzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_protectza7d4025z00,
		BGl_z62rtl_protectzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_selectzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d24026z00,
		BGl_z62rtl_selectzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lightfuncallzd2namezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_lightfunc4027za7,
		BGl_z62rtl_lightfuncallzd2namezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_ifza7d2locza74028za7,
		BGl_z62rtl_ifzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_castzd2totypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_castza7d2to4029z00,
		BGl_z62rtl_castzd2totypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_setfieldzd2objtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_setfieldza74030z00,
		BGl_z62rtl_setfieldzd2objtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_storegzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_st4031z00,
		BGl_z62makezd2rtl_storegzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_boxrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_boxrefza7f34032z00, BGl_z62rtl_boxrefzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_valloczd2vtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vallocza7d24033z00,
		BGl_z62rtl_valloczd2vtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_purezd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_pureza7d2ni4034z00, BGl_z62rtl_purezd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_notseqzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_notseqza7d24035z00,
		BGl_z62rtl_notseqzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_instanceofzd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_in4036z00,
		BGl_z62makezd2rtl_instanceofzb0zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_ifnezd2thenzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_ifneza7d2th4037z00,
		BGl_z62rtl_ifnezd2thenzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_cast_nullzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_cast_null4038za7, BGl_z62rtl_cast_nullzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2keyzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2key4039z00, BGl_z62rtl_regzd2keyzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_nopzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_nopza7d2loc4040z00,
		BGl_z62rtl_nopzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_getfieldzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza74041z00,
		BGl_z62rtl_getfieldzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_movzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_movza7d2loc4042z00, BGl_z62rtl_movzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifza7d2nilza74043za7, BGl_z62rtl_ifzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vlengthzd2vtypezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d4044z00,
		BGl_z62rtl_vlengthzd2vtypezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_ifeqzd2thenzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7d2th4045z00,
		BGl_z62rtl_ifeqzd2thenzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzf3zd2envz21zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7f3za794046za7, BGl_z62rtl_vrefzf3z91zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_returnzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_returnza7d24047z00,
		BGl_z62rtl_returnzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_getfieldzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_getfieldza74048z00,
		BGl_z62rtl_getfieldzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_storegzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_storegza7d24049z00,
		BGl_z62rtl_storegzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vlengthzd2vtypezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d4050z00,
		BGl_z62rtl_vlengthzd2vtypezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_globalrefzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref4051za7,
		BGl_z62rtl_globalrefzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzd2namezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_regza7d2nam4052z00, BGl_z62rtl_regzd2namezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2firstzd2envz00zzsaw_defsz00,
		BgL_bgl_za762blockza7d2first4053z00, BGl_z62blockzd2firstzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_funzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_funza7d2loc4054z00,
		BGl_z62rtl_funzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_lastzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_lastza7d2lo4055z00,
		BGl_z62rtl_lastzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_boxsetzd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_boxsetza7d24056z00,
		BGl_z62rtl_boxsetzd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2basiczd2blockszd2envzd2zzsaw_defsz00,
		BgL_bgl_za762dumpza7d2basicza74057za7,
		BGl_z62dumpzd2basiczd2blocksz62zzsaw_defsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2destzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_insza7d2des4058z00,
		BGl_z62rtl_inszd2destzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2lo4059z00, BGl_z62rtl_vrefzd2loczb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2labelzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762blockza7d2label4060z00,
		BGl_z62blockzd2labelzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_globalrefzd2varzd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_globalref4061za7,
		BGl_z62rtl_globalrefzd2varzd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_vlengthzd2typezd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_vlengthza7d4062z00,
		BGl_z62rtl_vlengthzd2typezd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_inszd2envz00zzsaw_defsz00,
		BgL_bgl_za762makeza7d2rtl_in4063z00, BGl_z62makezd2rtl_inszb0zzsaw_defsz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_switchzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_switchza7d24064z00,
		BGl_z62rtl_switchzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_vrefzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_vrefza7d2ty4065z00, BGl_z62rtl_vrefzd2typezb0zzsaw_defsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_selectzd2typezd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_selectza7d24066z00,
		BGl_z62rtl_selectzd2typezb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_instanceofzd2loczd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_instanceo4067za7,
		BGl_z62rtl_instanceofzd2loczb0zzsaw_defsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_pragmazd2loczd2setz12zd2envzc0zzsaw_defsz00,
		BgL_bgl_za762rtl_pragmaza7d24068z00,
		BGl_z62rtl_pragmazd2loczd2setz12z70zzsaw_defsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_protectzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_protectza7d4069z00,
		BGl_z62rtl_protectzd2nilzb0zzsaw_defsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_ifeqzd2nilzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_ifeqza7d2ni4070z00, BGl_z62rtl_ifeqzd2nilzb0zzsaw_defsz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_loadgzd2varzd2envz00zzsaw_defsz00,
		BgL_bgl_za762rtl_loadgza7d2v4071z00, BGl_z62rtl_loadgzd2varzb0zzsaw_defsz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_rtl_insz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_funcallz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_vrefz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_protectz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_boxsetz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_makeboxz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_lightfuncallz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_movz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_jumpexitz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_goz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_switchz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_instanceofz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_setfieldz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_ifz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_storegz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_failz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_globalrefz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_effectz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_funz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_newz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_pragmaz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_boxrefz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_ifeqz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_vlengthz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_purez00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_vsetz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_regz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_vallocz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_cast_nullz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_loadfunz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_nopz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_ifnez00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_callz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_selectz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_lastz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_returnz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_applyz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_loadgz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_loadiz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_notseqz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_castz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_getfieldz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_rtl_protectedz00zzsaw_defsz00));
		     ADD_ROOT((void *) (&BGl_blockz00zzsaw_defsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long
		BgL_checksumz00_7672, char *BgL_fromz00_7673)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_defsz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_defsz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_defsz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_defsz00();
					BGl_cnstzd2initzd2zzsaw_defsz00();
					BGl_importedzd2moduleszd2initz00zzsaw_defsz00();
					BGl_objectzd2initzd2zzsaw_defsz00();
					BGl_genericzd2initzd2zzsaw_defsz00();
					BGl_methodzd2initzd2zzsaw_defsz00();
					return BGl_toplevelzd2initzd2zzsaw_defsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_defs");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_defs");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			{	/* SawMill/defs.scm 1 */
				obj_t BgL_cportz00_6800;

				{	/* SawMill/defs.scm 1 */
					obj_t BgL_stringz00_6808;

					BgL_stringz00_6808 = BGl_string3447z00zzsaw_defsz00;
					{	/* SawMill/defs.scm 1 */
						obj_t BgL_startz00_6809;

						BgL_startz00_6809 = BINT(((long) 0));
						{	/* SawMill/defs.scm 1 */
							obj_t BgL_endz00_6810;

							BgL_endz00_6810 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_6808)));
							{	/* SawMill/defs.scm 1 */

								BgL_cportz00_6800 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_6808, BgL_startz00_6809, BgL_endz00_6810);
				}}}}
				{
					long BgL_iz00_6801;

					BgL_iz00_6801 = ((long) 80);
				BgL_loopz00_6802:
					if ((BgL_iz00_6801 == ((long) -1)))
						{	/* SawMill/defs.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/defs.scm 1 */
							{	/* SawMill/defs.scm 1 */
								obj_t BgL_arg3449z00_6804;

								{	/* SawMill/defs.scm 1 */

									{	/* SawMill/defs.scm 1 */
										obj_t BgL_locationz00_6806;

										BgL_locationz00_6806 = BBOOL(((bool_t) 0));
										{	/* SawMill/defs.scm 1 */

											BgL_arg3449z00_6804 =
												BGl_readz00zz__readerz00(BgL_cportz00_6800,
												BgL_locationz00_6806);
										}
									}
								}
								{	/* SawMill/defs.scm 1 */
									int BgL_tmpz00_7705;

									BgL_tmpz00_7705 = (int) (BgL_iz00_6801);
									CNST_TABLE_SET(BgL_tmpz00_7705, BgL_arg3449z00_6804);
							}}
							{	/* SawMill/defs.scm 1 */
								int BgL_auxz00_6807;

								BgL_auxz00_6807 = (int) ((BgL_iz00_6801 - ((long) 1)));
								{
									long BgL_iz00_7710;

									BgL_iz00_7710 = (long) (BgL_auxz00_6807);
									BgL_iz00_6801 = BgL_iz00_7710;
									goto BgL_loopz00_6802;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_defsz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1828;

				BgL_headz00_1828 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1829;
					obj_t BgL_tailz00_1830;

					BgL_prevz00_1829 = BgL_headz00_1828;
					BgL_tailz00_1830 = BgL_l1z00_1;
				BgL_loopz00_1831:
					if (PAIRP(BgL_tailz00_1830))
						{
							obj_t BgL_newzd2prevzd2_1833;

							BgL_newzd2prevzd2_1833 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1830), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1829, BgL_newzd2prevzd2_1833);
							{
								obj_t BgL_tailz00_7720;
								obj_t BgL_prevz00_7719;

								BgL_prevz00_7719 = BgL_newzd2prevzd2_1833;
								BgL_tailz00_7720 = CDR(BgL_tailz00_1830);
								BgL_tailz00_1830 = BgL_tailz00_7720;
								BgL_prevz00_1829 = BgL_prevz00_7719;
								goto BgL_loopz00_1831;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1828);
				}
			}
		}

	}



/* make-rtl_reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt BgL_type1484z00_3,
		obj_t BgL_var1485z00_4, obj_t BgL_onexprzf31486zf3_5,
		obj_t BgL_name1487z00_6, obj_t BgL_key1488z00_7,
		obj_t BgL_hardware1489z00_8)
	{
		{	/* SawMill/defs.sch 509 */
			{	/* SawMill/defs.sch 509 */
				BgL_rtl_regz00_bglt BgL_new1334z00_6813;

				{	/* SawMill/defs.sch 509 */
					BgL_rtl_regz00_bglt BgL_new1333z00_6814;

					BgL_new1333z00_6814 =
						((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regz00_bgl))));
					{	/* SawMill/defs.sch 509 */
						long BgL_arg1790z00_6815;

						{	/* SawMill/defs.sch 509 */
							long BgL_res2957z00_6816;

							BgL_res2957z00_6816 =
								BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
							BgL_arg1790z00_6815 = BgL_res2957z00_6816;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1333z00_6814), BgL_arg1790z00_6815);
					}
					{	/* SawMill/defs.sch 509 */
						BgL_objectz00_bglt BgL_tmpz00_7727;

						BgL_tmpz00_7727 = ((BgL_objectz00_bglt) BgL_new1333z00_6814);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7727, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1333z00_6814);
					BgL_new1334z00_6813 = BgL_new1333z00_6814;
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1484z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->BgL_varz00) =
					((obj_t) BgL_var1485z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->
						BgL_onexprzf3zf3) = ((obj_t) BgL_onexprzf31486zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->BgL_namez00) =
					((obj_t) BgL_name1487z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->BgL_keyz00) =
					((obj_t) BgL_key1488z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1334z00_6813))->
						BgL_hardwarez00) = ((obj_t) BgL_hardware1489z00_8), BUNSPEC);
				return BgL_new1334z00_6813;
			}
		}

	}



/* &make-rtl_reg */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzb0zzsaw_defsz00(obj_t
		BgL_envz00_5127, obj_t BgL_type1484z00_5128, obj_t BgL_var1485z00_5129,
		obj_t BgL_onexprzf31486zf3_5130, obj_t BgL_name1487z00_5131,
		obj_t BgL_key1488z00_5132, obj_t BgL_hardware1489z00_5133)
	{
		{	/* SawMill/defs.sch 509 */
			return
				BGl_makezd2rtl_regzd2zzsaw_defsz00(
				((BgL_typez00_bglt) BgL_type1484z00_5128), BgL_var1485z00_5129,
				BgL_onexprzf31486zf3_5130, BgL_name1487z00_5131, BgL_key1488z00_5132,
				BgL_hardware1489z00_5133);
		}

	}



/* rtl_reg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf3zf3zzsaw_defsz00(obj_t BgL_objz00_9)
	{
		{	/* SawMill/defs.sch 510 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_9, BGl_rtl_regz00zzsaw_defsz00);
		}

	}



/* &rtl_reg? */
	obj_t BGl_z62rtl_regzf3z91zzsaw_defsz00(obj_t BgL_envz00_5134,
		obj_t BgL_objz00_5135)
	{
		{	/* SawMill/defs.sch 510 */
			return BBOOL(BGl_rtl_regzf3zf3zzsaw_defsz00(BgL_objz00_5135));
		}

	}



/* rtl_reg-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt BGl_rtl_regzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 511 */
			{	/* SawMill/defs.sch 511 */
				obj_t BgL_classz00_3963;

				BgL_classz00_3963 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 511 */
					obj_t BgL__ortest_1106z00_3964;

					BgL__ortest_1106z00_3964 = BGL_CLASS_NIL(BgL_classz00_3963);
					if (CBOOL(BgL__ortest_1106z00_3964))
						{	/* SawMill/defs.sch 511 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_3964);
						}
					else
						{	/* SawMill/defs.sch 511 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3963));
						}
				}
			}
		}

	}



/* &rtl_reg-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5136)
	{
		{	/* SawMill/defs.sch 511 */
			return BGl_rtl_regzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_reg-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzd2hardwarezd2zzsaw_defsz00(BgL_rtl_regz00_bglt BgL_oz00_10)
	{
		{	/* SawMill/defs.sch 512 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_10))->BgL_hardwarez00);
		}

	}



/* &rtl_reg-hardware */
	obj_t BGl_z62rtl_regzd2hardwarezb0zzsaw_defsz00(obj_t BgL_envz00_5137,
		obj_t BgL_oz00_5138)
	{
		{	/* SawMill/defs.sch 512 */
			return
				BGl_rtl_regzd2hardwarezd2zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5138));
		}

	}



/* rtl_reg-key */
	BGL_EXPORTED_DEF obj_t BGl_rtl_regzd2keyzd2zzsaw_defsz00(BgL_rtl_regz00_bglt
		BgL_oz00_13)
	{
		{	/* SawMill/defs.sch 514 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_13))->BgL_keyz00);
		}

	}



/* &rtl_reg-key */
	obj_t BGl_z62rtl_regzd2keyzb0zzsaw_defsz00(obj_t BgL_envz00_5139,
		obj_t BgL_oz00_5140)
	{
		{	/* SawMill/defs.sch 514 */
			return
				BGl_rtl_regzd2keyzd2zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5140));
		}

	}



/* rtl_reg-name */
	BGL_EXPORTED_DEF obj_t BGl_rtl_regzd2namezd2zzsaw_defsz00(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/defs.sch 516 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_16))->BgL_namez00);
		}

	}



/* &rtl_reg-name */
	obj_t BGl_z62rtl_regzd2namezb0zzsaw_defsz00(obj_t BgL_envz00_5141,
		obj_t BgL_oz00_5142)
	{
		{	/* SawMill/defs.sch 516 */
			return
				BGl_rtl_regzd2namezd2zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5142));
		}

	}



/* rtl_reg-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzd2onexprzf3z21zzsaw_defsz00(BgL_rtl_regz00_bglt BgL_oz00_19)
	{
		{	/* SawMill/defs.sch 518 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_19))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg-onexpr? */
	obj_t BGl_z62rtl_regzd2onexprzf3z43zzsaw_defsz00(obj_t BgL_envz00_5143,
		obj_t BgL_oz00_5144)
	{
		{	/* SawMill/defs.sch 518 */
			return
				BGl_rtl_regzd2onexprzf3z21zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5144));
		}

	}



/* rtl_reg-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzd2onexprzf3zd2setz12ze1zzsaw_defsz00(BgL_rtl_regz00_bglt
		BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/defs.sch 519 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_20))->BgL_onexprzf3zf3) =
				((obj_t) BgL_vz00_21), BUNSPEC);
		}

	}



/* &rtl_reg-onexpr?-set! */
	obj_t BGl_z62rtl_regzd2onexprzf3zd2setz12z83zzsaw_defsz00(obj_t
		BgL_envz00_5145, obj_t BgL_oz00_5146, obj_t BgL_vz00_5147)
	{
		{	/* SawMill/defs.sch 519 */
			return
				BGl_rtl_regzd2onexprzf3zd2setz12ze1zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5146), BgL_vz00_5147);
		}

	}



/* rtl_reg-var */
	BGL_EXPORTED_DEF obj_t BGl_rtl_regzd2varzd2zzsaw_defsz00(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/defs.sch 520 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_22))->BgL_varz00);
		}

	}



/* &rtl_reg-var */
	obj_t BGl_z62rtl_regzd2varzb0zzsaw_defsz00(obj_t BgL_envz00_5148,
		obj_t BgL_oz00_5149)
	{
		{	/* SawMill/defs.sch 520 */
			return
				BGl_rtl_regzd2varzd2zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5149));
		}

	}



/* rtl_reg-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_regz00_bglt BgL_oz00_23,
		obj_t BgL_vz00_24)
	{
		{	/* SawMill/defs.sch 521 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_23))->BgL_varz00) =
				((obj_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &rtl_reg-var-set! */
	obj_t BGl_z62rtl_regzd2varzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5150,
		obj_t BgL_oz00_5151, obj_t BgL_vz00_5152)
	{
		{	/* SawMill/defs.sch 521 */
			return
				BGl_rtl_regzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5151), BgL_vz00_5152);
		}

	}



/* rtl_reg-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzd2typezd2zzsaw_defsz00(BgL_rtl_regz00_bglt BgL_oz00_25)
	{
		{	/* SawMill/defs.sch 522 */
			return (((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_25))->BgL_typez00);
		}

	}



/* &rtl_reg-type */
	BgL_typez00_bglt BGl_z62rtl_regzd2typezb0zzsaw_defsz00(obj_t BgL_envz00_5153,
		obj_t BgL_oz00_5154)
	{
		{	/* SawMill/defs.sch 522 */
			return
				BGl_rtl_regzd2typezd2zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5154));
		}

	}



/* rtl_reg-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_regz00_bglt BgL_oz00_26,
		BgL_typez00_bglt BgL_vz00_27)
	{
		{	/* SawMill/defs.sch 523 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_26))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_27), BUNSPEC);
		}

	}



/* &rtl_reg-type-set! */
	obj_t BGl_z62rtl_regzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5155,
		obj_t BgL_oz00_5156, obj_t BgL_vz00_5157)
	{
		{	/* SawMill/defs.sch 523 */
			return
				BGl_rtl_regzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_5156),
				((BgL_typez00_bglt) BgL_vz00_5157));
		}

	}



/* make-rtl_fun */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt BGl_makezd2rtl_funzd2zzsaw_defsz00(obj_t
		BgL_loc1482z00_28)
	{
		{	/* SawMill/defs.sch 526 */
			{	/* SawMill/defs.sch 526 */
				BgL_rtl_funz00_bglt BgL_new1336z00_6817;

				{	/* SawMill/defs.sch 526 */
					BgL_rtl_funz00_bglt BgL_new1335z00_6818;

					BgL_new1335z00_6818 =
						((BgL_rtl_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_funz00_bgl))));
					{	/* SawMill/defs.sch 526 */
						long BgL_arg1796z00_6819;

						{	/* SawMill/defs.sch 526 */
							long BgL_res2958z00_6820;

							BgL_res2958z00_6820 =
								BGL_CLASS_INDEX(BGl_rtl_funz00zzsaw_defsz00);
							BgL_arg1796z00_6819 = BgL_res2958z00_6820;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1335z00_6818), BgL_arg1796z00_6819);
					}
					BgL_new1336z00_6817 = BgL_new1335z00_6818;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(BgL_new1336z00_6817))->BgL_locz00) =
					((obj_t) BgL_loc1482z00_28), BUNSPEC);
				return BgL_new1336z00_6817;
			}
		}

	}



/* &make-rtl_fun */
	BgL_rtl_funz00_bglt BGl_z62makezd2rtl_funzb0zzsaw_defsz00(obj_t
		BgL_envz00_5158, obj_t BgL_loc1482z00_5159)
	{
		{	/* SawMill/defs.sch 526 */
			return BGl_makezd2rtl_funzd2zzsaw_defsz00(BgL_loc1482z00_5159);
		}

	}



/* rtl_fun? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_funzf3zf3zzsaw_defsz00(obj_t BgL_objz00_29)
	{
		{	/* SawMill/defs.sch 527 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_29, BGl_rtl_funz00zzsaw_defsz00);
		}

	}



/* &rtl_fun? */
	obj_t BGl_z62rtl_funzf3z91zzsaw_defsz00(obj_t BgL_envz00_5160,
		obj_t BgL_objz00_5161)
	{
		{	/* SawMill/defs.sch 527 */
			return BBOOL(BGl_rtl_funzf3zf3zzsaw_defsz00(BgL_objz00_5161));
		}

	}



/* rtl_fun-nil */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 528 */
			{	/* SawMill/defs.sch 528 */
				obj_t BgL_classz00_3972;

				BgL_classz00_3972 = BGl_rtl_funz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 528 */
					obj_t BgL__ortest_1106z00_3973;

					BgL__ortest_1106z00_3973 = BGL_CLASS_NIL(BgL_classz00_3972);
					if (CBOOL(BgL__ortest_1106z00_3973))
						{	/* SawMill/defs.sch 528 */
							return ((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_3973);
						}
					else
						{	/* SawMill/defs.sch 528 */
							return
								((BgL_rtl_funz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3972));
						}
				}
			}
		}

	}



/* &rtl_fun-nil */
	BgL_rtl_funz00_bglt BGl_z62rtl_funzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5162)
	{
		{	/* SawMill/defs.sch 528 */
			return BGl_rtl_funzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_fun-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_funzd2loczd2zzsaw_defsz00(BgL_rtl_funz00_bglt
		BgL_oz00_30)
	{
		{	/* SawMill/defs.sch 529 */
			return (((BgL_rtl_funz00_bglt) COBJECT(BgL_oz00_30))->BgL_locz00);
		}

	}



/* &rtl_fun-loc */
	obj_t BGl_z62rtl_funzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5163,
		obj_t BgL_oz00_5164)
	{
		{	/* SawMill/defs.sch 529 */
			return
				BGl_rtl_funzd2loczd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt) BgL_oz00_5164));
		}

	}



/* rtl_fun-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_funzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_funz00_bglt BgL_oz00_31,
		obj_t BgL_vz00_32)
	{
		{	/* SawMill/defs.sch 530 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(BgL_oz00_31))->BgL_locz00) =
				((obj_t) BgL_vz00_32), BUNSPEC);
		}

	}



/* &rtl_fun-loc-set! */
	obj_t BGl_z62rtl_funzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5165,
		obj_t BgL_oz00_5166, obj_t BgL_vz00_5167)
	{
		{	/* SawMill/defs.sch 530 */
			return
				BGl_rtl_funzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_funz00_bglt) BgL_oz00_5166), BgL_vz00_5167);
		}

	}



/* make-rtl_last */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt
		BGl_makezd2rtl_lastzd2zzsaw_defsz00(obj_t BgL_loc1479z00_33)
	{
		{	/* SawMill/defs.sch 533 */
			{	/* SawMill/defs.sch 533 */
				BgL_rtl_lastz00_bglt BgL_new1338z00_6821;

				{	/* SawMill/defs.sch 533 */
					BgL_rtl_lastz00_bglt BgL_new1337z00_6822;

					BgL_new1337z00_6822 =
						((BgL_rtl_lastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_lastz00_bgl))));
					{	/* SawMill/defs.sch 533 */
						long BgL_arg1798z00_6823;

						{	/* SawMill/defs.sch 533 */
							long BgL_res2959z00_6824;

							BgL_res2959z00_6824 =
								BGL_CLASS_INDEX(BGl_rtl_lastz00zzsaw_defsz00);
							BgL_arg1798z00_6823 = BgL_res2959z00_6824;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1337z00_6822), BgL_arg1798z00_6823);
					}
					BgL_new1338z00_6821 = BgL_new1337z00_6822;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1338z00_6821)))->BgL_locz00) =
					((obj_t) BgL_loc1479z00_33), BUNSPEC);
				return BgL_new1338z00_6821;
			}
		}

	}



/* &make-rtl_last */
	BgL_rtl_lastz00_bglt BGl_z62makezd2rtl_lastzb0zzsaw_defsz00(obj_t
		BgL_envz00_5168, obj_t BgL_loc1479z00_5169)
	{
		{	/* SawMill/defs.sch 533 */
			return BGl_makezd2rtl_lastzd2zzsaw_defsz00(BgL_loc1479z00_5169);
		}

	}



/* rtl_last? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_lastzf3zf3zzsaw_defsz00(obj_t BgL_objz00_34)
	{
		{	/* SawMill/defs.sch 534 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_34, BGl_rtl_lastz00zzsaw_defsz00);
		}

	}



/* &rtl_last? */
	obj_t BGl_z62rtl_lastzf3z91zzsaw_defsz00(obj_t BgL_envz00_5170,
		obj_t BgL_objz00_5171)
	{
		{	/* SawMill/defs.sch 534 */
			return BBOOL(BGl_rtl_lastzf3zf3zzsaw_defsz00(BgL_objz00_5171));
		}

	}



/* rtl_last-nil */
	BGL_EXPORTED_DEF BgL_rtl_lastz00_bglt BGl_rtl_lastzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 535 */
			{	/* SawMill/defs.sch 535 */
				obj_t BgL_classz00_3981;

				BgL_classz00_3981 = BGl_rtl_lastz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 535 */
					obj_t BgL__ortest_1106z00_3982;

					BgL__ortest_1106z00_3982 = BGL_CLASS_NIL(BgL_classz00_3981);
					if (CBOOL(BgL__ortest_1106z00_3982))
						{	/* SawMill/defs.sch 535 */
							return ((BgL_rtl_lastz00_bglt) BgL__ortest_1106z00_3982);
						}
					else
						{	/* SawMill/defs.sch 535 */
							return
								((BgL_rtl_lastz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3981));
						}
				}
			}
		}

	}



/* &rtl_last-nil */
	BgL_rtl_lastz00_bglt BGl_z62rtl_lastzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5172)
	{
		{	/* SawMill/defs.sch 535 */
			return BGl_rtl_lastzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_last-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_lastzd2loczd2zzsaw_defsz00(BgL_rtl_lastz00_bglt
		BgL_oz00_35)
	{
		{	/* SawMill/defs.sch 536 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_35)))->BgL_locz00);
		}

	}



/* &rtl_last-loc */
	obj_t BGl_z62rtl_lastzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5173,
		obj_t BgL_oz00_5174)
	{
		{	/* SawMill/defs.sch 536 */
			return
				BGl_rtl_lastzd2loczd2zzsaw_defsz00(
				((BgL_rtl_lastz00_bglt) BgL_oz00_5174));
		}

	}



/* rtl_last-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lastzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_lastz00_bglt
		BgL_oz00_36, obj_t BgL_vz00_37)
	{
		{	/* SawMill/defs.sch 537 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_36)))->BgL_locz00) =
				((obj_t) BgL_vz00_37), BUNSPEC);
		}

	}



/* &rtl_last-loc-set! */
	obj_t BGl_z62rtl_lastzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5175,
		obj_t BgL_oz00_5176, obj_t BgL_vz00_5177)
	{
		{	/* SawMill/defs.sch 537 */
			return
				BGl_rtl_lastzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_lastz00_bglt) BgL_oz00_5176), BgL_vz00_5177);
		}

	}



/* make-rtl_return */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt
		BGl_makezd2rtl_returnzd2zzsaw_defsz00(obj_t BgL_loc1476z00_38,
		BgL_typez00_bglt BgL_type1477z00_39)
	{
		{	/* SawMill/defs.sch 540 */
			{	/* SawMill/defs.sch 540 */
				BgL_rtl_returnz00_bglt BgL_new1340z00_6825;

				{	/* SawMill/defs.sch 540 */
					BgL_rtl_returnz00_bglt BgL_new1339z00_6826;

					BgL_new1339z00_6826 =
						((BgL_rtl_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_returnz00_bgl))));
					{	/* SawMill/defs.sch 540 */
						long BgL_arg1801z00_6827;

						{	/* SawMill/defs.sch 540 */
							long BgL_res2960z00_6828;

							BgL_res2960z00_6828 =
								BGL_CLASS_INDEX(BGl_rtl_returnz00zzsaw_defsz00);
							BgL_arg1801z00_6827 = BgL_res2960z00_6828;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1339z00_6826), BgL_arg1801z00_6827);
					}
					BgL_new1340z00_6825 = BgL_new1339z00_6826;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1340z00_6825)))->BgL_locz00) =
					((obj_t) BgL_loc1476z00_38), BUNSPEC);
				((((BgL_rtl_returnz00_bglt) COBJECT(BgL_new1340z00_6825))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1477z00_39), BUNSPEC);
				return BgL_new1340z00_6825;
			}
		}

	}



/* &make-rtl_return */
	BgL_rtl_returnz00_bglt BGl_z62makezd2rtl_returnzb0zzsaw_defsz00(obj_t
		BgL_envz00_5178, obj_t BgL_loc1476z00_5179, obj_t BgL_type1477z00_5180)
	{
		{	/* SawMill/defs.sch 540 */
			return
				BGl_makezd2rtl_returnzd2zzsaw_defsz00(BgL_loc1476z00_5179,
				((BgL_typez00_bglt) BgL_type1477z00_5180));
		}

	}



/* rtl_return? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_returnzf3zf3zzsaw_defsz00(obj_t BgL_objz00_40)
	{
		{	/* SawMill/defs.sch 541 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_40,
				BGl_rtl_returnz00zzsaw_defsz00);
		}

	}



/* &rtl_return? */
	obj_t BGl_z62rtl_returnzf3z91zzsaw_defsz00(obj_t BgL_envz00_5181,
		obj_t BgL_objz00_5182)
	{
		{	/* SawMill/defs.sch 541 */
			return BBOOL(BGl_rtl_returnzf3zf3zzsaw_defsz00(BgL_objz00_5182));
		}

	}



/* rtl_return-nil */
	BGL_EXPORTED_DEF BgL_rtl_returnz00_bglt BGl_rtl_returnzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 542 */
			{	/* SawMill/defs.sch 542 */
				obj_t BgL_classz00_3990;

				BgL_classz00_3990 = BGl_rtl_returnz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 542 */
					obj_t BgL__ortest_1106z00_3991;

					BgL__ortest_1106z00_3991 = BGL_CLASS_NIL(BgL_classz00_3990);
					if (CBOOL(BgL__ortest_1106z00_3991))
						{	/* SawMill/defs.sch 542 */
							return ((BgL_rtl_returnz00_bglt) BgL__ortest_1106z00_3991);
						}
					else
						{	/* SawMill/defs.sch 542 */
							return
								((BgL_rtl_returnz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3990));
						}
				}
			}
		}

	}



/* &rtl_return-nil */
	BgL_rtl_returnz00_bglt BGl_z62rtl_returnzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5183)
	{
		{	/* SawMill/defs.sch 542 */
			return BGl_rtl_returnzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_return-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_returnzd2typezd2zzsaw_defsz00(BgL_rtl_returnz00_bglt BgL_oz00_41)
	{
		{	/* SawMill/defs.sch 543 */
			return (((BgL_rtl_returnz00_bglt) COBJECT(BgL_oz00_41))->BgL_typez00);
		}

	}



/* &rtl_return-type */
	BgL_typez00_bglt BGl_z62rtl_returnzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5184, obj_t BgL_oz00_5185)
	{
		{	/* SawMill/defs.sch 543 */
			return
				BGl_rtl_returnzd2typezd2zzsaw_defsz00(
				((BgL_rtl_returnz00_bglt) BgL_oz00_5185));
		}

	}



/* rtl_return-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_returnzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_returnz00_bglt
		BgL_oz00_42, BgL_typez00_bglt BgL_vz00_43)
	{
		{	/* SawMill/defs.sch 544 */
			return
				((((BgL_rtl_returnz00_bglt) COBJECT(BgL_oz00_42))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_43), BUNSPEC);
		}

	}



/* &rtl_return-type-set! */
	obj_t BGl_z62rtl_returnzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5186,
		obj_t BgL_oz00_5187, obj_t BgL_vz00_5188)
	{
		{	/* SawMill/defs.sch 544 */
			return
				BGl_rtl_returnzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_returnz00_bglt) BgL_oz00_5187),
				((BgL_typez00_bglt) BgL_vz00_5188));
		}

	}



/* rtl_return-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_returnzd2loczd2zzsaw_defsz00(BgL_rtl_returnz00_bglt BgL_oz00_44)
	{
		{	/* SawMill/defs.sch 545 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_44)))->BgL_locz00);
		}

	}



/* &rtl_return-loc */
	obj_t BGl_z62rtl_returnzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5189,
		obj_t BgL_oz00_5190)
	{
		{	/* SawMill/defs.sch 545 */
			return
				BGl_rtl_returnzd2loczd2zzsaw_defsz00(
				((BgL_rtl_returnz00_bglt) BgL_oz00_5190));
		}

	}



/* rtl_return-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_returnzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_returnz00_bglt
		BgL_oz00_45, obj_t BgL_vz00_46)
	{
		{	/* SawMill/defs.sch 546 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_45)))->BgL_locz00) =
				((obj_t) BgL_vz00_46), BUNSPEC);
		}

	}



/* &rtl_return-loc-set! */
	obj_t BGl_z62rtl_returnzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5191,
		obj_t BgL_oz00_5192, obj_t BgL_vz00_5193)
	{
		{	/* SawMill/defs.sch 546 */
			return
				BGl_rtl_returnzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_returnz00_bglt) BgL_oz00_5192), BgL_vz00_5193);
		}

	}



/* make-rtl_jumpexit */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t BgL_loc1474z00_47)
	{
		{	/* SawMill/defs.sch 549 */
			{	/* SawMill/defs.sch 549 */
				BgL_rtl_jumpexitz00_bglt BgL_new1342z00_6829;

				{	/* SawMill/defs.sch 549 */
					BgL_rtl_jumpexitz00_bglt BgL_new1341z00_6830;

					BgL_new1341z00_6830 =
						((BgL_rtl_jumpexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_jumpexitz00_bgl))));
					{	/* SawMill/defs.sch 549 */
						long BgL_arg1808z00_6831;

						{	/* SawMill/defs.sch 549 */
							long BgL_res2961z00_6832;

							BgL_res2961z00_6832 =
								BGL_CLASS_INDEX(BGl_rtl_jumpexitz00zzsaw_defsz00);
							BgL_arg1808z00_6831 = BgL_res2961z00_6832;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1341z00_6830), BgL_arg1808z00_6831);
					}
					BgL_new1342z00_6829 = BgL_new1341z00_6830;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1342z00_6829)))->BgL_locz00) =
					((obj_t) BgL_loc1474z00_47), BUNSPEC);
				return BgL_new1342z00_6829;
			}
		}

	}



/* &make-rtl_jumpexit */
	BgL_rtl_jumpexitz00_bglt BGl_z62makezd2rtl_jumpexitzb0zzsaw_defsz00(obj_t
		BgL_envz00_5194, obj_t BgL_loc1474z00_5195)
	{
		{	/* SawMill/defs.sch 549 */
			return BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(BgL_loc1474z00_5195);
		}

	}



/* rtl_jumpexit? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_jumpexitzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_48)
	{
		{	/* SawMill/defs.sch 550 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_48,
				BGl_rtl_jumpexitz00zzsaw_defsz00);
		}

	}



/* &rtl_jumpexit? */
	obj_t BGl_z62rtl_jumpexitzf3z91zzsaw_defsz00(obj_t BgL_envz00_5196,
		obj_t BgL_objz00_5197)
	{
		{	/* SawMill/defs.sch 550 */
			return BBOOL(BGl_rtl_jumpexitzf3zf3zzsaw_defsz00(BgL_objz00_5197));
		}

	}



/* rtl_jumpexit-nil */
	BGL_EXPORTED_DEF BgL_rtl_jumpexitz00_bglt
		BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 551 */
			{	/* SawMill/defs.sch 551 */
				obj_t BgL_classz00_3999;

				BgL_classz00_3999 = BGl_rtl_jumpexitz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 551 */
					obj_t BgL__ortest_1106z00_4000;

					BgL__ortest_1106z00_4000 = BGL_CLASS_NIL(BgL_classz00_3999);
					if (CBOOL(BgL__ortest_1106z00_4000))
						{	/* SawMill/defs.sch 551 */
							return ((BgL_rtl_jumpexitz00_bglt) BgL__ortest_1106z00_4000);
						}
					else
						{	/* SawMill/defs.sch 551 */
							return
								((BgL_rtl_jumpexitz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3999));
						}
				}
			}
		}

	}



/* &rtl_jumpexit-nil */
	BgL_rtl_jumpexitz00_bglt BGl_z62rtl_jumpexitzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5198)
	{
		{	/* SawMill/defs.sch 551 */
			return BGl_rtl_jumpexitzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_jumpexit-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_jumpexitzd2loczd2zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt BgL_oz00_49)
	{
		{	/* SawMill/defs.sch 552 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_49)))->BgL_locz00);
		}

	}



/* &rtl_jumpexit-loc */
	obj_t BGl_z62rtl_jumpexitzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5199,
		obj_t BgL_oz00_5200)
	{
		{	/* SawMill/defs.sch 552 */
			return
				BGl_rtl_jumpexitzd2loczd2zzsaw_defsz00(
				((BgL_rtl_jumpexitz00_bglt) BgL_oz00_5200));
		}

	}



/* rtl_jumpexit-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_jumpexitzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_jumpexitz00_bglt
		BgL_oz00_50, obj_t BgL_vz00_51)
	{
		{	/* SawMill/defs.sch 553 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_50)))->BgL_locz00) =
				((obj_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &rtl_jumpexit-loc-set! */
	obj_t BGl_z62rtl_jumpexitzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5201, obj_t BgL_oz00_5202, obj_t BgL_vz00_5203)
	{
		{	/* SawMill/defs.sch 553 */
			return
				BGl_rtl_jumpexitzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_jumpexitz00_bglt) BgL_oz00_5202), BgL_vz00_5203);
		}

	}



/* make-rtl_fail */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt
		BGl_makezd2rtl_failzd2zzsaw_defsz00(obj_t BgL_loc1472z00_52)
	{
		{	/* SawMill/defs.sch 556 */
			{	/* SawMill/defs.sch 556 */
				BgL_rtl_failz00_bglt BgL_new1344z00_6833;

				{	/* SawMill/defs.sch 556 */
					BgL_rtl_failz00_bglt BgL_new1343z00_6834;

					BgL_new1343z00_6834 =
						((BgL_rtl_failz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_failz00_bgl))));
					{	/* SawMill/defs.sch 556 */
						long BgL_arg1809z00_6835;

						{	/* SawMill/defs.sch 556 */
							long BgL_res2962z00_6836;

							BgL_res2962z00_6836 =
								BGL_CLASS_INDEX(BGl_rtl_failz00zzsaw_defsz00);
							BgL_arg1809z00_6835 = BgL_res2962z00_6836;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1343z00_6834), BgL_arg1809z00_6835);
					}
					BgL_new1344z00_6833 = BgL_new1343z00_6834;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1344z00_6833)))->BgL_locz00) =
					((obj_t) BgL_loc1472z00_52), BUNSPEC);
				return BgL_new1344z00_6833;
			}
		}

	}



/* &make-rtl_fail */
	BgL_rtl_failz00_bglt BGl_z62makezd2rtl_failzb0zzsaw_defsz00(obj_t
		BgL_envz00_5204, obj_t BgL_loc1472z00_5205)
	{
		{	/* SawMill/defs.sch 556 */
			return BGl_makezd2rtl_failzd2zzsaw_defsz00(BgL_loc1472z00_5205);
		}

	}



/* rtl_fail? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_failzf3zf3zzsaw_defsz00(obj_t BgL_objz00_53)
	{
		{	/* SawMill/defs.sch 557 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_53, BGl_rtl_failz00zzsaw_defsz00);
		}

	}



/* &rtl_fail? */
	obj_t BGl_z62rtl_failzf3z91zzsaw_defsz00(obj_t BgL_envz00_5206,
		obj_t BgL_objz00_5207)
	{
		{	/* SawMill/defs.sch 557 */
			return BBOOL(BGl_rtl_failzf3zf3zzsaw_defsz00(BgL_objz00_5207));
		}

	}



/* rtl_fail-nil */
	BGL_EXPORTED_DEF BgL_rtl_failz00_bglt BGl_rtl_failzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 558 */
			{	/* SawMill/defs.sch 558 */
				obj_t BgL_classz00_4008;

				BgL_classz00_4008 = BGl_rtl_failz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 558 */
					obj_t BgL__ortest_1106z00_4009;

					BgL__ortest_1106z00_4009 = BGL_CLASS_NIL(BgL_classz00_4008);
					if (CBOOL(BgL__ortest_1106z00_4009))
						{	/* SawMill/defs.sch 558 */
							return ((BgL_rtl_failz00_bglt) BgL__ortest_1106z00_4009);
						}
					else
						{	/* SawMill/defs.sch 558 */
							return
								((BgL_rtl_failz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4008));
						}
				}
			}
		}

	}



/* &rtl_fail-nil */
	BgL_rtl_failz00_bglt BGl_z62rtl_failzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5208)
	{
		{	/* SawMill/defs.sch 558 */
			return BGl_rtl_failzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_fail-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_failzd2loczd2zzsaw_defsz00(BgL_rtl_failz00_bglt
		BgL_oz00_54)
	{
		{	/* SawMill/defs.sch 559 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_54)))->BgL_locz00);
		}

	}



/* &rtl_fail-loc */
	obj_t BGl_z62rtl_failzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5209,
		obj_t BgL_oz00_5210)
	{
		{	/* SawMill/defs.sch 559 */
			return
				BGl_rtl_failzd2loczd2zzsaw_defsz00(
				((BgL_rtl_failz00_bglt) BgL_oz00_5210));
		}

	}



/* rtl_fail-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_failzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_failz00_bglt
		BgL_oz00_55, obj_t BgL_vz00_56)
	{
		{	/* SawMill/defs.sch 560 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_55)))->BgL_locz00) =
				((obj_t) BgL_vz00_56), BUNSPEC);
		}

	}



/* &rtl_fail-loc-set! */
	obj_t BGl_z62rtl_failzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5211,
		obj_t BgL_oz00_5212, obj_t BgL_vz00_5213)
	{
		{	/* SawMill/defs.sch 560 */
			return
				BGl_rtl_failzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_failz00_bglt) BgL_oz00_5212), BgL_vz00_5213);
		}

	}



/* make-rtl_notseq */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt
		BGl_makezd2rtl_notseqzd2zzsaw_defsz00(obj_t BgL_loc1470z00_57)
	{
		{	/* SawMill/defs.sch 563 */
			{	/* SawMill/defs.sch 563 */
				BgL_rtl_notseqz00_bglt BgL_new1346z00_6837;

				{	/* SawMill/defs.sch 563 */
					BgL_rtl_notseqz00_bglt BgL_new1345z00_6838;

					BgL_new1345z00_6838 =
						((BgL_rtl_notseqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_notseqz00_bgl))));
					{	/* SawMill/defs.sch 563 */
						long BgL_arg1811z00_6839;

						{	/* SawMill/defs.sch 563 */
							long BgL_res2963z00_6840;

							BgL_res2963z00_6840 =
								BGL_CLASS_INDEX(BGl_rtl_notseqz00zzsaw_defsz00);
							BgL_arg1811z00_6839 = BgL_res2963z00_6840;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1345z00_6838), BgL_arg1811z00_6839);
					}
					BgL_new1346z00_6837 = BgL_new1345z00_6838;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1346z00_6837)))->BgL_locz00) =
					((obj_t) BgL_loc1470z00_57), BUNSPEC);
				return BgL_new1346z00_6837;
			}
		}

	}



/* &make-rtl_notseq */
	BgL_rtl_notseqz00_bglt BGl_z62makezd2rtl_notseqzb0zzsaw_defsz00(obj_t
		BgL_envz00_5214, obj_t BgL_loc1470z00_5215)
	{
		{	/* SawMill/defs.sch 563 */
			return BGl_makezd2rtl_notseqzd2zzsaw_defsz00(BgL_loc1470z00_5215);
		}

	}



/* rtl_notseq? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_notseqzf3zf3zzsaw_defsz00(obj_t BgL_objz00_58)
	{
		{	/* SawMill/defs.sch 564 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_58,
				BGl_rtl_notseqz00zzsaw_defsz00);
		}

	}



/* &rtl_notseq? */
	obj_t BGl_z62rtl_notseqzf3z91zzsaw_defsz00(obj_t BgL_envz00_5216,
		obj_t BgL_objz00_5217)
	{
		{	/* SawMill/defs.sch 564 */
			return BBOOL(BGl_rtl_notseqzf3zf3zzsaw_defsz00(BgL_objz00_5217));
		}

	}



/* rtl_notseq-nil */
	BGL_EXPORTED_DEF BgL_rtl_notseqz00_bglt BGl_rtl_notseqzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 565 */
			{	/* SawMill/defs.sch 565 */
				obj_t BgL_classz00_4017;

				BgL_classz00_4017 = BGl_rtl_notseqz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 565 */
					obj_t BgL__ortest_1106z00_4018;

					BgL__ortest_1106z00_4018 = BGL_CLASS_NIL(BgL_classz00_4017);
					if (CBOOL(BgL__ortest_1106z00_4018))
						{	/* SawMill/defs.sch 565 */
							return ((BgL_rtl_notseqz00_bglt) BgL__ortest_1106z00_4018);
						}
					else
						{	/* SawMill/defs.sch 565 */
							return
								((BgL_rtl_notseqz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4017));
						}
				}
			}
		}

	}



/* &rtl_notseq-nil */
	BgL_rtl_notseqz00_bglt BGl_z62rtl_notseqzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5218)
	{
		{	/* SawMill/defs.sch 565 */
			return BGl_rtl_notseqzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_notseq-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_notseqzd2loczd2zzsaw_defsz00(BgL_rtl_notseqz00_bglt BgL_oz00_59)
	{
		{	/* SawMill/defs.sch 566 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_59)))->BgL_locz00);
		}

	}



/* &rtl_notseq-loc */
	obj_t BGl_z62rtl_notseqzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5219,
		obj_t BgL_oz00_5220)
	{
		{	/* SawMill/defs.sch 566 */
			return
				BGl_rtl_notseqzd2loczd2zzsaw_defsz00(
				((BgL_rtl_notseqz00_bglt) BgL_oz00_5220));
		}

	}



/* rtl_notseq-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_notseqzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_notseqz00_bglt
		BgL_oz00_60, obj_t BgL_vz00_61)
	{
		{	/* SawMill/defs.sch 567 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_60)))->BgL_locz00) =
				((obj_t) BgL_vz00_61), BUNSPEC);
		}

	}



/* &rtl_notseq-loc-set! */
	obj_t BGl_z62rtl_notseqzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5221,
		obj_t BgL_oz00_5222, obj_t BgL_vz00_5223)
	{
		{	/* SawMill/defs.sch 567 */
			return
				BGl_rtl_notseqzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_notseqz00_bglt) BgL_oz00_5222), BgL_vz00_5223);
		}

	}



/* make-rtl_if */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt BGl_makezd2rtl_ifzd2zzsaw_defsz00(obj_t
		BgL_loc1468z00_62)
	{
		{	/* SawMill/defs.sch 570 */
			{	/* SawMill/defs.sch 570 */
				BgL_rtl_ifz00_bglt BgL_new1348z00_6841;

				{	/* SawMill/defs.sch 570 */
					BgL_rtl_ifz00_bglt BgL_new1347z00_6842;

					BgL_new1347z00_6842 =
						((BgL_rtl_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifz00_bgl))));
					{	/* SawMill/defs.sch 570 */
						long BgL_arg1820z00_6843;

						{	/* SawMill/defs.sch 570 */
							long BgL_res2964z00_6844;

							BgL_res2964z00_6844 = BGL_CLASS_INDEX(BGl_rtl_ifz00zzsaw_defsz00);
							BgL_arg1820z00_6843 = BgL_res2964z00_6844;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1347z00_6842), BgL_arg1820z00_6843);
					}
					BgL_new1348z00_6841 = BgL_new1347z00_6842;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1348z00_6841)))->BgL_locz00) =
					((obj_t) BgL_loc1468z00_62), BUNSPEC);
				return BgL_new1348z00_6841;
			}
		}

	}



/* &make-rtl_if */
	BgL_rtl_ifz00_bglt BGl_z62makezd2rtl_ifzb0zzsaw_defsz00(obj_t BgL_envz00_5224,
		obj_t BgL_loc1468z00_5225)
	{
		{	/* SawMill/defs.sch 570 */
			return BGl_makezd2rtl_ifzd2zzsaw_defsz00(BgL_loc1468z00_5225);
		}

	}



/* rtl_if? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifzf3zf3zzsaw_defsz00(obj_t BgL_objz00_63)
	{
		{	/* SawMill/defs.sch 571 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_63, BGl_rtl_ifz00zzsaw_defsz00);
		}

	}



/* &rtl_if? */
	obj_t BGl_z62rtl_ifzf3z91zzsaw_defsz00(obj_t BgL_envz00_5226,
		obj_t BgL_objz00_5227)
	{
		{	/* SawMill/defs.sch 571 */
			return BBOOL(BGl_rtl_ifzf3zf3zzsaw_defsz00(BgL_objz00_5227));
		}

	}



/* rtl_if-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifz00_bglt BGl_rtl_ifzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 572 */
			{	/* SawMill/defs.sch 572 */
				obj_t BgL_classz00_4026;

				BgL_classz00_4026 = BGl_rtl_ifz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 572 */
					obj_t BgL__ortest_1106z00_4027;

					BgL__ortest_1106z00_4027 = BGL_CLASS_NIL(BgL_classz00_4026);
					if (CBOOL(BgL__ortest_1106z00_4027))
						{	/* SawMill/defs.sch 572 */
							return ((BgL_rtl_ifz00_bglt) BgL__ortest_1106z00_4027);
						}
					else
						{	/* SawMill/defs.sch 572 */
							return
								((BgL_rtl_ifz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4026));
						}
				}
			}
		}

	}



/* &rtl_if-nil */
	BgL_rtl_ifz00_bglt BGl_z62rtl_ifzd2nilzb0zzsaw_defsz00(obj_t BgL_envz00_5228)
	{
		{	/* SawMill/defs.sch 572 */
			return BGl_rtl_ifzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_if-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifzd2loczd2zzsaw_defsz00(BgL_rtl_ifz00_bglt
		BgL_oz00_64)
	{
		{	/* SawMill/defs.sch 573 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_64)))->BgL_locz00);
		}

	}



/* &rtl_if-loc */
	obj_t BGl_z62rtl_ifzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5229,
		obj_t BgL_oz00_5230)
	{
		{	/* SawMill/defs.sch 573 */
			return
				BGl_rtl_ifzd2loczd2zzsaw_defsz00(((BgL_rtl_ifz00_bglt) BgL_oz00_5230));
		}

	}



/* rtl_if-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_ifzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifz00_bglt BgL_oz00_65,
		obj_t BgL_vz00_66)
	{
		{	/* SawMill/defs.sch 574 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_65)))->BgL_locz00) =
				((obj_t) BgL_vz00_66), BUNSPEC);
		}

	}



/* &rtl_if-loc-set! */
	obj_t BGl_z62rtl_ifzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5231,
		obj_t BgL_oz00_5232, obj_t BgL_vz00_5233)
	{
		{	/* SawMill/defs.sch 574 */
			return
				BGl_rtl_ifzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_ifz00_bglt) BgL_oz00_5232), BgL_vz00_5233);
		}

	}



/* make-rtl_select */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt
		BGl_makezd2rtl_selectzd2zzsaw_defsz00(obj_t BgL_loc1463z00_67,
		BgL_typez00_bglt BgL_type1464z00_68, obj_t BgL_patterns1465z00_69)
	{
		{	/* SawMill/defs.sch 577 */
			{	/* SawMill/defs.sch 577 */
				BgL_rtl_selectz00_bglt BgL_new1350z00_6845;

				{	/* SawMill/defs.sch 577 */
					BgL_rtl_selectz00_bglt BgL_new1349z00_6846;

					BgL_new1349z00_6846 =
						((BgL_rtl_selectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_selectz00_bgl))));
					{	/* SawMill/defs.sch 577 */
						long BgL_arg1821z00_6847;

						{	/* SawMill/defs.sch 577 */
							long BgL_res2965z00_6848;

							BgL_res2965z00_6848 =
								BGL_CLASS_INDEX(BGl_rtl_selectz00zzsaw_defsz00);
							BgL_arg1821z00_6847 = BgL_res2965z00_6848;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1349z00_6846), BgL_arg1821z00_6847);
					}
					BgL_new1350z00_6845 = BgL_new1349z00_6846;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1350z00_6845)))->BgL_locz00) =
					((obj_t) BgL_loc1463z00_67), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1350z00_6845))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1464z00_68), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1350z00_6845))->
						BgL_patternsz00) = ((obj_t) BgL_patterns1465z00_69), BUNSPEC);
				return BgL_new1350z00_6845;
			}
		}

	}



/* &make-rtl_select */
	BgL_rtl_selectz00_bglt BGl_z62makezd2rtl_selectzb0zzsaw_defsz00(obj_t
		BgL_envz00_5234, obj_t BgL_loc1463z00_5235, obj_t BgL_type1464z00_5236,
		obj_t BgL_patterns1465z00_5237)
	{
		{	/* SawMill/defs.sch 577 */
			return
				BGl_makezd2rtl_selectzd2zzsaw_defsz00(BgL_loc1463z00_5235,
				((BgL_typez00_bglt) BgL_type1464z00_5236), BgL_patterns1465z00_5237);
		}

	}



/* rtl_select? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_selectzf3zf3zzsaw_defsz00(obj_t BgL_objz00_70)
	{
		{	/* SawMill/defs.sch 578 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_70,
				BGl_rtl_selectz00zzsaw_defsz00);
		}

	}



/* &rtl_select? */
	obj_t BGl_z62rtl_selectzf3z91zzsaw_defsz00(obj_t BgL_envz00_5238,
		obj_t BgL_objz00_5239)
	{
		{	/* SawMill/defs.sch 578 */
			return BBOOL(BGl_rtl_selectzf3zf3zzsaw_defsz00(BgL_objz00_5239));
		}

	}



/* rtl_select-nil */
	BGL_EXPORTED_DEF BgL_rtl_selectz00_bglt BGl_rtl_selectzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 579 */
			{	/* SawMill/defs.sch 579 */
				obj_t BgL_classz00_4035;

				BgL_classz00_4035 = BGl_rtl_selectz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 579 */
					obj_t BgL__ortest_1106z00_4036;

					BgL__ortest_1106z00_4036 = BGL_CLASS_NIL(BgL_classz00_4035);
					if (CBOOL(BgL__ortest_1106z00_4036))
						{	/* SawMill/defs.sch 579 */
							return ((BgL_rtl_selectz00_bglt) BgL__ortest_1106z00_4036);
						}
					else
						{	/* SawMill/defs.sch 579 */
							return
								((BgL_rtl_selectz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4035));
						}
				}
			}
		}

	}



/* &rtl_select-nil */
	BgL_rtl_selectz00_bglt BGl_z62rtl_selectzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5240)
	{
		{	/* SawMill/defs.sch 579 */
			return BGl_rtl_selectzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_select-patterns */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_selectzd2patternszd2zzsaw_defsz00(BgL_rtl_selectz00_bglt
		BgL_oz00_71)
	{
		{	/* SawMill/defs.sch 580 */
			return (((BgL_rtl_selectz00_bglt) COBJECT(BgL_oz00_71))->BgL_patternsz00);
		}

	}



/* &rtl_select-patterns */
	obj_t BGl_z62rtl_selectzd2patternszb0zzsaw_defsz00(obj_t BgL_envz00_5241,
		obj_t BgL_oz00_5242)
	{
		{	/* SawMill/defs.sch 580 */
			return
				BGl_rtl_selectzd2patternszd2zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5242));
		}

	}



/* rtl_select-patterns-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_selectzd2patternszd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt
		BgL_oz00_72, obj_t BgL_vz00_73)
	{
		{	/* SawMill/defs.sch 581 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_oz00_72))->BgL_patternsz00) =
				((obj_t) BgL_vz00_73), BUNSPEC);
		}

	}



/* &rtl_select-patterns-set! */
	obj_t BGl_z62rtl_selectzd2patternszd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5243, obj_t BgL_oz00_5244, obj_t BgL_vz00_5245)
	{
		{	/* SawMill/defs.sch 581 */
			return
				BGl_rtl_selectzd2patternszd2setz12z12zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5244), BgL_vz00_5245);
		}

	}



/* rtl_select-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_selectzd2typezd2zzsaw_defsz00(BgL_rtl_selectz00_bglt BgL_oz00_74)
	{
		{	/* SawMill/defs.sch 582 */
			return (((BgL_rtl_selectz00_bglt) COBJECT(BgL_oz00_74))->BgL_typez00);
		}

	}



/* &rtl_select-type */
	BgL_typez00_bglt BGl_z62rtl_selectzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5246, obj_t BgL_oz00_5247)
	{
		{	/* SawMill/defs.sch 582 */
			return
				BGl_rtl_selectzd2typezd2zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5247));
		}

	}



/* rtl_select-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_selectzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt
		BgL_oz00_75, BgL_typez00_bglt BgL_vz00_76)
	{
		{	/* SawMill/defs.sch 583 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_oz00_75))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_76), BUNSPEC);
		}

	}



/* &rtl_select-type-set! */
	obj_t BGl_z62rtl_selectzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5248,
		obj_t BgL_oz00_5249, obj_t BgL_vz00_5250)
	{
		{	/* SawMill/defs.sch 583 */
			return
				BGl_rtl_selectzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5249),
				((BgL_typez00_bglt) BgL_vz00_5250));
		}

	}



/* rtl_select-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_selectzd2loczd2zzsaw_defsz00(BgL_rtl_selectz00_bglt BgL_oz00_77)
	{
		{	/* SawMill/defs.sch 584 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_77)))->BgL_locz00);
		}

	}



/* &rtl_select-loc */
	obj_t BGl_z62rtl_selectzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5251,
		obj_t BgL_oz00_5252)
	{
		{	/* SawMill/defs.sch 584 */
			return
				BGl_rtl_selectzd2loczd2zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5252));
		}

	}



/* rtl_select-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_selectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_selectz00_bglt
		BgL_oz00_78, obj_t BgL_vz00_79)
	{
		{	/* SawMill/defs.sch 585 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_78)))->BgL_locz00) =
				((obj_t) BgL_vz00_79), BUNSPEC);
		}

	}



/* &rtl_select-loc-set! */
	obj_t BGl_z62rtl_selectzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5253,
		obj_t BgL_oz00_5254, obj_t BgL_vz00_5255)
	{
		{	/* SawMill/defs.sch 585 */
			return
				BGl_rtl_selectzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_selectz00_bglt) BgL_oz00_5254), BgL_vz00_5255);
		}

	}



/* make-rtl_switch */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt
		BGl_makezd2rtl_switchzd2zzsaw_defsz00(obj_t BgL_loc1458z00_80,
		BgL_typez00_bglt BgL_type1459z00_81, obj_t BgL_patterns1460z00_82,
		obj_t BgL_labels1461z00_83)
	{
		{	/* SawMill/defs.sch 588 */
			{	/* SawMill/defs.sch 588 */
				BgL_rtl_switchz00_bglt BgL_new1352z00_6849;

				{	/* SawMill/defs.sch 588 */
					BgL_rtl_switchz00_bglt BgL_new1351z00_6850;

					BgL_new1351z00_6850 =
						((BgL_rtl_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_switchz00_bgl))));
					{	/* SawMill/defs.sch 588 */
						long BgL_arg1822z00_6851;

						{	/* SawMill/defs.sch 588 */
							long BgL_res2966z00_6852;

							BgL_res2966z00_6852 =
								BGL_CLASS_INDEX(BGl_rtl_switchz00zzsaw_defsz00);
							BgL_arg1822z00_6851 = BgL_res2966z00_6852;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1351z00_6850), BgL_arg1822z00_6851);
					}
					BgL_new1352z00_6849 = BgL_new1351z00_6850;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1352z00_6849)))->BgL_locz00) =
					((obj_t) BgL_loc1458z00_80), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
									BgL_new1352z00_6849)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1459z00_81), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
									BgL_new1352z00_6849)))->BgL_patternsz00) =
					((obj_t) BgL_patterns1460z00_82), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) COBJECT(BgL_new1352z00_6849))->
						BgL_labelsz00) = ((obj_t) BgL_labels1461z00_83), BUNSPEC);
				return BgL_new1352z00_6849;
			}
		}

	}



/* &make-rtl_switch */
	BgL_rtl_switchz00_bglt BGl_z62makezd2rtl_switchzb0zzsaw_defsz00(obj_t
		BgL_envz00_5256, obj_t BgL_loc1458z00_5257, obj_t BgL_type1459z00_5258,
		obj_t BgL_patterns1460z00_5259, obj_t BgL_labels1461z00_5260)
	{
		{	/* SawMill/defs.sch 588 */
			return
				BGl_makezd2rtl_switchzd2zzsaw_defsz00(BgL_loc1458z00_5257,
				((BgL_typez00_bglt) BgL_type1459z00_5258), BgL_patterns1460z00_5259,
				BgL_labels1461z00_5260);
		}

	}



/* rtl_switch? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_switchzf3zf3zzsaw_defsz00(obj_t BgL_objz00_84)
	{
		{	/* SawMill/defs.sch 589 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_84,
				BGl_rtl_switchz00zzsaw_defsz00);
		}

	}



/* &rtl_switch? */
	obj_t BGl_z62rtl_switchzf3z91zzsaw_defsz00(obj_t BgL_envz00_5261,
		obj_t BgL_objz00_5262)
	{
		{	/* SawMill/defs.sch 589 */
			return BBOOL(BGl_rtl_switchzf3zf3zzsaw_defsz00(BgL_objz00_5262));
		}

	}



/* rtl_switch-nil */
	BGL_EXPORTED_DEF BgL_rtl_switchz00_bglt BGl_rtl_switchzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 590 */
			{	/* SawMill/defs.sch 590 */
				obj_t BgL_classz00_4044;

				BgL_classz00_4044 = BGl_rtl_switchz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 590 */
					obj_t BgL__ortest_1106z00_4045;

					BgL__ortest_1106z00_4045 = BGL_CLASS_NIL(BgL_classz00_4044);
					if (CBOOL(BgL__ortest_1106z00_4045))
						{	/* SawMill/defs.sch 590 */
							return ((BgL_rtl_switchz00_bglt) BgL__ortest_1106z00_4045);
						}
					else
						{	/* SawMill/defs.sch 590 */
							return
								((BgL_rtl_switchz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4044));
						}
				}
			}
		}

	}



/* &rtl_switch-nil */
	BgL_rtl_switchz00_bglt BGl_z62rtl_switchzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5263)
	{
		{	/* SawMill/defs.sch 590 */
			return BGl_rtl_switchzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_switch-labels */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2labelszd2zzsaw_defsz00(BgL_rtl_switchz00_bglt BgL_oz00_85)
	{
		{	/* SawMill/defs.sch 591 */
			return (((BgL_rtl_switchz00_bglt) COBJECT(BgL_oz00_85))->BgL_labelsz00);
		}

	}



/* &rtl_switch-labels */
	obj_t BGl_z62rtl_switchzd2labelszb0zzsaw_defsz00(obj_t BgL_envz00_5264,
		obj_t BgL_oz00_5265)
	{
		{	/* SawMill/defs.sch 591 */
			return
				BGl_rtl_switchzd2labelszd2zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5265));
		}

	}



/* rtl_switch-labels-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2labelszd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_oz00_86, obj_t BgL_vz00_87)
	{
		{	/* SawMill/defs.sch 592 */
			return
				((((BgL_rtl_switchz00_bglt) COBJECT(BgL_oz00_86))->BgL_labelsz00) =
				((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &rtl_switch-labels-set! */
	obj_t BGl_z62rtl_switchzd2labelszd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5266, obj_t BgL_oz00_5267, obj_t BgL_vz00_5268)
	{
		{	/* SawMill/defs.sch 592 */
			return
				BGl_rtl_switchzd2labelszd2setz12z12zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5267), BgL_vz00_5268);
		}

	}



/* rtl_switch-patterns */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2patternszd2zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_oz00_88)
	{
		{	/* SawMill/defs.sch 593 */
			return
				(((BgL_rtl_selectz00_bglt) COBJECT(
						((BgL_rtl_selectz00_bglt) BgL_oz00_88)))->BgL_patternsz00);
		}

	}



/* &rtl_switch-patterns */
	obj_t BGl_z62rtl_switchzd2patternszb0zzsaw_defsz00(obj_t BgL_envz00_5269,
		obj_t BgL_oz00_5270)
	{
		{	/* SawMill/defs.sch 593 */
			return
				BGl_rtl_switchzd2patternszd2zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5270));
		}

	}



/* rtl_switch-patterns-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2patternszd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_oz00_89, obj_t BgL_vz00_90)
	{
		{	/* SawMill/defs.sch 594 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(
							((BgL_rtl_selectz00_bglt) BgL_oz00_89)))->BgL_patternsz00) =
				((obj_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &rtl_switch-patterns-set! */
	obj_t BGl_z62rtl_switchzd2patternszd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5271, obj_t BgL_oz00_5272, obj_t BgL_vz00_5273)
	{
		{	/* SawMill/defs.sch 594 */
			return
				BGl_rtl_switchzd2patternszd2setz12z12zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5272), BgL_vz00_5273);
		}

	}



/* rtl_switch-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_switchzd2typezd2zzsaw_defsz00(BgL_rtl_switchz00_bglt BgL_oz00_91)
	{
		{	/* SawMill/defs.sch 595 */
			return
				(((BgL_rtl_selectz00_bglt) COBJECT(
						((BgL_rtl_selectz00_bglt) BgL_oz00_91)))->BgL_typez00);
		}

	}



/* &rtl_switch-type */
	BgL_typez00_bglt BGl_z62rtl_switchzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5274, obj_t BgL_oz00_5275)
	{
		{	/* SawMill/defs.sch 595 */
			return
				BGl_rtl_switchzd2typezd2zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5275));
		}

	}



/* rtl_switch-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_oz00_92, BgL_typez00_bglt BgL_vz00_93)
	{
		{	/* SawMill/defs.sch 596 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(
							((BgL_rtl_selectz00_bglt) BgL_oz00_92)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_93), BUNSPEC);
		}

	}



/* &rtl_switch-type-set! */
	obj_t BGl_z62rtl_switchzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5276,
		obj_t BgL_oz00_5277, obj_t BgL_vz00_5278)
	{
		{	/* SawMill/defs.sch 596 */
			return
				BGl_rtl_switchzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5277),
				((BgL_typez00_bglt) BgL_vz00_5278));
		}

	}



/* rtl_switch-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2loczd2zzsaw_defsz00(BgL_rtl_switchz00_bglt BgL_oz00_94)
	{
		{	/* SawMill/defs.sch 597 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_94)))->BgL_locz00);
		}

	}



/* &rtl_switch-loc */
	obj_t BGl_z62rtl_switchzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5279,
		obj_t BgL_oz00_5280)
	{
		{	/* SawMill/defs.sch 597 */
			return
				BGl_rtl_switchzd2loczd2zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5280));
		}

	}



/* rtl_switch-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_switchzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_switchz00_bglt
		BgL_oz00_95, obj_t BgL_vz00_96)
	{
		{	/* SawMill/defs.sch 598 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_95)))->BgL_locz00) =
				((obj_t) BgL_vz00_96), BUNSPEC);
		}

	}



/* &rtl_switch-loc-set! */
	obj_t BGl_z62rtl_switchzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5281,
		obj_t BgL_oz00_5282, obj_t BgL_vz00_5283)
	{
		{	/* SawMill/defs.sch 598 */
			return
				BGl_rtl_switchzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_switchz00_bglt) BgL_oz00_5282), BgL_vz00_5283);
		}

	}



/* make-rtl_ifeq */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt
		BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(obj_t BgL_loc1455z00_97,
		BgL_blockz00_bglt BgL_then1456z00_98)
	{
		{	/* SawMill/defs.sch 601 */
			{	/* SawMill/defs.sch 601 */
				BgL_rtl_ifeqz00_bglt BgL_new1354z00_6853;

				{	/* SawMill/defs.sch 601 */
					BgL_rtl_ifeqz00_bglt BgL_new1353z00_6854;

					BgL_new1353z00_6854 =
						((BgL_rtl_ifeqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifeqz00_bgl))));
					{	/* SawMill/defs.sch 601 */
						long BgL_arg1823z00_6855;

						{	/* SawMill/defs.sch 601 */
							long BgL_res2967z00_6856;

							BgL_res2967z00_6856 =
								BGL_CLASS_INDEX(BGl_rtl_ifeqz00zzsaw_defsz00);
							BgL_arg1823z00_6855 = BgL_res2967z00_6856;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1353z00_6854), BgL_arg1823z00_6855);
					}
					BgL_new1354z00_6853 = BgL_new1353z00_6854;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1354z00_6853)))->BgL_locz00) =
					((obj_t) BgL_loc1455z00_97), BUNSPEC);
				((((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_new1354z00_6853))->BgL_thenz00) =
					((BgL_blockz00_bglt) BgL_then1456z00_98), BUNSPEC);
				return BgL_new1354z00_6853;
			}
		}

	}



/* &make-rtl_ifeq */
	BgL_rtl_ifeqz00_bglt BGl_z62makezd2rtl_ifeqzb0zzsaw_defsz00(obj_t
		BgL_envz00_5284, obj_t BgL_loc1455z00_5285, obj_t BgL_then1456z00_5286)
	{
		{	/* SawMill/defs.sch 601 */
			return
				BGl_makezd2rtl_ifeqzd2zzsaw_defsz00(BgL_loc1455z00_5285,
				((BgL_blockz00_bglt) BgL_then1456z00_5286));
		}

	}



/* rtl_ifeq? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifeqzf3zf3zzsaw_defsz00(obj_t BgL_objz00_99)
	{
		{	/* SawMill/defs.sch 602 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_99, BGl_rtl_ifeqz00zzsaw_defsz00);
		}

	}



/* &rtl_ifeq? */
	obj_t BGl_z62rtl_ifeqzf3z91zzsaw_defsz00(obj_t BgL_envz00_5287,
		obj_t BgL_objz00_5288)
	{
		{	/* SawMill/defs.sch 602 */
			return BBOOL(BGl_rtl_ifeqzf3zf3zzsaw_defsz00(BgL_objz00_5288));
		}

	}



/* rtl_ifeq-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifeqz00_bglt BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 603 */
			{	/* SawMill/defs.sch 603 */
				obj_t BgL_classz00_4053;

				BgL_classz00_4053 = BGl_rtl_ifeqz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 603 */
					obj_t BgL__ortest_1106z00_4054;

					BgL__ortest_1106z00_4054 = BGL_CLASS_NIL(BgL_classz00_4053);
					if (CBOOL(BgL__ortest_1106z00_4054))
						{	/* SawMill/defs.sch 603 */
							return ((BgL_rtl_ifeqz00_bglt) BgL__ortest_1106z00_4054);
						}
					else
						{	/* SawMill/defs.sch 603 */
							return
								((BgL_rtl_ifeqz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4053));
						}
				}
			}
		}

	}



/* &rtl_ifeq-nil */
	BgL_rtl_ifeqz00_bglt BGl_z62rtl_ifeqzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5289)
	{
		{	/* SawMill/defs.sch 603 */
			return BGl_rtl_ifeqzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_ifeq-then */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_rtl_ifeqzd2thenzd2zzsaw_defsz00(BgL_rtl_ifeqz00_bglt BgL_oz00_100)
	{
		{	/* SawMill/defs.sch 604 */
			return (((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_oz00_100))->BgL_thenz00);
		}

	}



/* &rtl_ifeq-then */
	BgL_blockz00_bglt BGl_z62rtl_ifeqzd2thenzb0zzsaw_defsz00(obj_t
		BgL_envz00_5290, obj_t BgL_oz00_5291)
	{
		{	/* SawMill/defs.sch 604 */
			return
				BGl_rtl_ifeqzd2thenzd2zzsaw_defsz00(
				((BgL_rtl_ifeqz00_bglt) BgL_oz00_5291));
		}

	}



/* rtl_ifeq-then-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_ifeqzd2thenzd2setz12z12zzsaw_defsz00(BgL_rtl_ifeqz00_bglt
		BgL_oz00_101, BgL_blockz00_bglt BgL_vz00_102)
	{
		{	/* SawMill/defs.sch 605 */
			return
				((((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_oz00_101))->BgL_thenz00) =
				((BgL_blockz00_bglt) BgL_vz00_102), BUNSPEC);
		}

	}



/* &rtl_ifeq-then-set! */
	obj_t BGl_z62rtl_ifeqzd2thenzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5292,
		obj_t BgL_oz00_5293, obj_t BgL_vz00_5294)
	{
		{	/* SawMill/defs.sch 605 */
			return
				BGl_rtl_ifeqzd2thenzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_ifeqz00_bglt) BgL_oz00_5293),
				((BgL_blockz00_bglt) BgL_vz00_5294));
		}

	}



/* rtl_ifeq-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifeqzd2loczd2zzsaw_defsz00(BgL_rtl_ifeqz00_bglt
		BgL_oz00_103)
	{
		{	/* SawMill/defs.sch 606 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_103)))->BgL_locz00);
		}

	}



/* &rtl_ifeq-loc */
	obj_t BGl_z62rtl_ifeqzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5295,
		obj_t BgL_oz00_5296)
	{
		{	/* SawMill/defs.sch 606 */
			return
				BGl_rtl_ifeqzd2loczd2zzsaw_defsz00(
				((BgL_rtl_ifeqz00_bglt) BgL_oz00_5296));
		}

	}



/* rtl_ifeq-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_ifeqzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifeqz00_bglt
		BgL_oz00_104, obj_t BgL_vz00_105)
	{
		{	/* SawMill/defs.sch 607 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_104)))->BgL_locz00) =
				((obj_t) BgL_vz00_105), BUNSPEC);
		}

	}



/* &rtl_ifeq-loc-set! */
	obj_t BGl_z62rtl_ifeqzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5297,
		obj_t BgL_oz00_5298, obj_t BgL_vz00_5299)
	{
		{	/* SawMill/defs.sch 607 */
			return
				BGl_rtl_ifeqzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_ifeqz00_bglt) BgL_oz00_5298), BgL_vz00_5299);
		}

	}



/* make-rtl_ifne */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt
		BGl_makezd2rtl_ifnezd2zzsaw_defsz00(obj_t BgL_loc1452z00_106,
		BgL_blockz00_bglt BgL_then1453z00_107)
	{
		{	/* SawMill/defs.sch 610 */
			{	/* SawMill/defs.sch 610 */
				BgL_rtl_ifnez00_bglt BgL_new1356z00_6857;

				{	/* SawMill/defs.sch 610 */
					BgL_rtl_ifnez00_bglt BgL_new1355z00_6858;

					BgL_new1355z00_6858 =
						((BgL_rtl_ifnez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifnez00_bgl))));
					{	/* SawMill/defs.sch 610 */
						long BgL_arg1824z00_6859;

						{	/* SawMill/defs.sch 610 */
							long BgL_res2968z00_6860;

							BgL_res2968z00_6860 =
								BGL_CLASS_INDEX(BGl_rtl_ifnez00zzsaw_defsz00);
							BgL_arg1824z00_6859 = BgL_res2968z00_6860;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1355z00_6858), BgL_arg1824z00_6859);
					}
					BgL_new1356z00_6857 = BgL_new1355z00_6858;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1356z00_6857)))->BgL_locz00) =
					((obj_t) BgL_loc1452z00_106), BUNSPEC);
				((((BgL_rtl_ifnez00_bglt) COBJECT(BgL_new1356z00_6857))->BgL_thenz00) =
					((BgL_blockz00_bglt) BgL_then1453z00_107), BUNSPEC);
				return BgL_new1356z00_6857;
			}
		}

	}



/* &make-rtl_ifne */
	BgL_rtl_ifnez00_bglt BGl_z62makezd2rtl_ifnezb0zzsaw_defsz00(obj_t
		BgL_envz00_5300, obj_t BgL_loc1452z00_5301, obj_t BgL_then1453z00_5302)
	{
		{	/* SawMill/defs.sch 610 */
			return
				BGl_makezd2rtl_ifnezd2zzsaw_defsz00(BgL_loc1452z00_5301,
				((BgL_blockz00_bglt) BgL_then1453z00_5302));
		}

	}



/* rtl_ifne? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_ifnezf3zf3zzsaw_defsz00(obj_t BgL_objz00_108)
	{
		{	/* SawMill/defs.sch 611 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_108,
				BGl_rtl_ifnez00zzsaw_defsz00);
		}

	}



/* &rtl_ifne? */
	obj_t BGl_z62rtl_ifnezf3z91zzsaw_defsz00(obj_t BgL_envz00_5303,
		obj_t BgL_objz00_5304)
	{
		{	/* SawMill/defs.sch 611 */
			return BBOOL(BGl_rtl_ifnezf3zf3zzsaw_defsz00(BgL_objz00_5304));
		}

	}



/* rtl_ifne-nil */
	BGL_EXPORTED_DEF BgL_rtl_ifnez00_bglt BGl_rtl_ifnezd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 612 */
			{	/* SawMill/defs.sch 612 */
				obj_t BgL_classz00_4062;

				BgL_classz00_4062 = BGl_rtl_ifnez00zzsaw_defsz00;
				{	/* SawMill/defs.sch 612 */
					obj_t BgL__ortest_1106z00_4063;

					BgL__ortest_1106z00_4063 = BGL_CLASS_NIL(BgL_classz00_4062);
					if (CBOOL(BgL__ortest_1106z00_4063))
						{	/* SawMill/defs.sch 612 */
							return ((BgL_rtl_ifnez00_bglt) BgL__ortest_1106z00_4063);
						}
					else
						{	/* SawMill/defs.sch 612 */
							return
								((BgL_rtl_ifnez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4062));
						}
				}
			}
		}

	}



/* &rtl_ifne-nil */
	BgL_rtl_ifnez00_bglt BGl_z62rtl_ifnezd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5305)
	{
		{	/* SawMill/defs.sch 612 */
			return BGl_rtl_ifnezd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_ifne-then */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_rtl_ifnezd2thenzd2zzsaw_defsz00(BgL_rtl_ifnez00_bglt BgL_oz00_109)
	{
		{	/* SawMill/defs.sch 613 */
			return (((BgL_rtl_ifnez00_bglt) COBJECT(BgL_oz00_109))->BgL_thenz00);
		}

	}



/* &rtl_ifne-then */
	BgL_blockz00_bglt BGl_z62rtl_ifnezd2thenzb0zzsaw_defsz00(obj_t
		BgL_envz00_5306, obj_t BgL_oz00_5307)
	{
		{	/* SawMill/defs.sch 613 */
			return
				BGl_rtl_ifnezd2thenzd2zzsaw_defsz00(
				((BgL_rtl_ifnez00_bglt) BgL_oz00_5307));
		}

	}



/* rtl_ifne-then-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_ifnezd2thenzd2setz12z12zzsaw_defsz00(BgL_rtl_ifnez00_bglt
		BgL_oz00_110, BgL_blockz00_bglt BgL_vz00_111)
	{
		{	/* SawMill/defs.sch 614 */
			return
				((((BgL_rtl_ifnez00_bglt) COBJECT(BgL_oz00_110))->BgL_thenz00) =
				((BgL_blockz00_bglt) BgL_vz00_111), BUNSPEC);
		}

	}



/* &rtl_ifne-then-set! */
	obj_t BGl_z62rtl_ifnezd2thenzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5308,
		obj_t BgL_oz00_5309, obj_t BgL_vz00_5310)
	{
		{	/* SawMill/defs.sch 614 */
			return
				BGl_rtl_ifnezd2thenzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_ifnez00_bglt) BgL_oz00_5309),
				((BgL_blockz00_bglt) BgL_vz00_5310));
		}

	}



/* rtl_ifne-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_ifnezd2loczd2zzsaw_defsz00(BgL_rtl_ifnez00_bglt
		BgL_oz00_112)
	{
		{	/* SawMill/defs.sch 615 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_112)))->BgL_locz00);
		}

	}



/* &rtl_ifne-loc */
	obj_t BGl_z62rtl_ifnezd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5311,
		obj_t BgL_oz00_5312)
	{
		{	/* SawMill/defs.sch 615 */
			return
				BGl_rtl_ifnezd2loczd2zzsaw_defsz00(
				((BgL_rtl_ifnez00_bglt) BgL_oz00_5312));
		}

	}



/* rtl_ifne-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_ifnezd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_ifnez00_bglt
		BgL_oz00_113, obj_t BgL_vz00_114)
	{
		{	/* SawMill/defs.sch 616 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_113)))->BgL_locz00) =
				((obj_t) BgL_vz00_114), BUNSPEC);
		}

	}



/* &rtl_ifne-loc-set! */
	obj_t BGl_z62rtl_ifnezd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5313,
		obj_t BgL_oz00_5314, obj_t BgL_vz00_5315)
	{
		{	/* SawMill/defs.sch 616 */
			return
				BGl_rtl_ifnezd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_ifnez00_bglt) BgL_oz00_5314), BgL_vz00_5315);
		}

	}



/* make-rtl_go */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt BGl_makezd2rtl_gozd2zzsaw_defsz00(obj_t
		BgL_loc1447z00_115, BgL_blockz00_bglt BgL_to1448z00_116)
	{
		{	/* SawMill/defs.sch 619 */
			{	/* SawMill/defs.sch 619 */
				BgL_rtl_goz00_bglt BgL_new1358z00_6861;

				{	/* SawMill/defs.sch 619 */
					BgL_rtl_goz00_bglt BgL_new1357z00_6862;

					BgL_new1357z00_6862 =
						((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_goz00_bgl))));
					{	/* SawMill/defs.sch 619 */
						long BgL_arg1825z00_6863;

						{	/* SawMill/defs.sch 619 */
							long BgL_res2969z00_6864;

							BgL_res2969z00_6864 = BGL_CLASS_INDEX(BGl_rtl_goz00zzsaw_defsz00);
							BgL_arg1825z00_6863 = BgL_res2969z00_6864;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1357z00_6862), BgL_arg1825z00_6863);
					}
					BgL_new1358z00_6861 = BgL_new1357z00_6862;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1358z00_6861)))->BgL_locz00) =
					((obj_t) BgL_loc1447z00_115), BUNSPEC);
				((((BgL_rtl_goz00_bglt) COBJECT(BgL_new1358z00_6861))->BgL_toz00) =
					((BgL_blockz00_bglt) BgL_to1448z00_116), BUNSPEC);
				return BgL_new1358z00_6861;
			}
		}

	}



/* &make-rtl_go */
	BgL_rtl_goz00_bglt BGl_z62makezd2rtl_gozb0zzsaw_defsz00(obj_t BgL_envz00_5316,
		obj_t BgL_loc1447z00_5317, obj_t BgL_to1448z00_5318)
	{
		{	/* SawMill/defs.sch 619 */
			return
				BGl_makezd2rtl_gozd2zzsaw_defsz00(BgL_loc1447z00_5317,
				((BgL_blockz00_bglt) BgL_to1448z00_5318));
		}

	}



/* rtl_go? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_gozf3zf3zzsaw_defsz00(obj_t BgL_objz00_117)
	{
		{	/* SawMill/defs.sch 620 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_117, BGl_rtl_goz00zzsaw_defsz00);
		}

	}



/* &rtl_go? */
	obj_t BGl_z62rtl_gozf3z91zzsaw_defsz00(obj_t BgL_envz00_5319,
		obj_t BgL_objz00_5320)
	{
		{	/* SawMill/defs.sch 620 */
			return BBOOL(BGl_rtl_gozf3zf3zzsaw_defsz00(BgL_objz00_5320));
		}

	}



/* rtl_go-nil */
	BGL_EXPORTED_DEF BgL_rtl_goz00_bglt BGl_rtl_gozd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 621 */
			{	/* SawMill/defs.sch 621 */
				obj_t BgL_classz00_4071;

				BgL_classz00_4071 = BGl_rtl_goz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 621 */
					obj_t BgL__ortest_1106z00_4072;

					BgL__ortest_1106z00_4072 = BGL_CLASS_NIL(BgL_classz00_4071);
					if (CBOOL(BgL__ortest_1106z00_4072))
						{	/* SawMill/defs.sch 621 */
							return ((BgL_rtl_goz00_bglt) BgL__ortest_1106z00_4072);
						}
					else
						{	/* SawMill/defs.sch 621 */
							return
								((BgL_rtl_goz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4071));
						}
				}
			}
		}

	}



/* &rtl_go-nil */
	BgL_rtl_goz00_bglt BGl_z62rtl_gozd2nilzb0zzsaw_defsz00(obj_t BgL_envz00_5321)
	{
		{	/* SawMill/defs.sch 621 */
			return BGl_rtl_gozd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_go-to */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_rtl_gozd2tozd2zzsaw_defsz00(BgL_rtl_goz00_bglt BgL_oz00_118)
	{
		{	/* SawMill/defs.sch 622 */
			return (((BgL_rtl_goz00_bglt) COBJECT(BgL_oz00_118))->BgL_toz00);
		}

	}



/* &rtl_go-to */
	BgL_blockz00_bglt BGl_z62rtl_gozd2tozb0zzsaw_defsz00(obj_t BgL_envz00_5322,
		obj_t BgL_oz00_5323)
	{
		{	/* SawMill/defs.sch 622 */
			return
				BGl_rtl_gozd2tozd2zzsaw_defsz00(((BgL_rtl_goz00_bglt) BgL_oz00_5323));
		}

	}



/* rtl_go-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_gozd2tozd2setz12z12zzsaw_defsz00(BgL_rtl_goz00_bglt BgL_oz00_119,
		BgL_blockz00_bglt BgL_vz00_120)
	{
		{	/* SawMill/defs.sch 623 */
			return
				((((BgL_rtl_goz00_bglt) COBJECT(BgL_oz00_119))->BgL_toz00) =
				((BgL_blockz00_bglt) BgL_vz00_120), BUNSPEC);
		}

	}



/* &rtl_go-to-set! */
	obj_t BGl_z62rtl_gozd2tozd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5324,
		obj_t BgL_oz00_5325, obj_t BgL_vz00_5326)
	{
		{	/* SawMill/defs.sch 623 */
			return
				BGl_rtl_gozd2tozd2setz12z12zzsaw_defsz00(
				((BgL_rtl_goz00_bglt) BgL_oz00_5325),
				((BgL_blockz00_bglt) BgL_vz00_5326));
		}

	}



/* rtl_go-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_gozd2loczd2zzsaw_defsz00(BgL_rtl_goz00_bglt
		BgL_oz00_121)
	{
		{	/* SawMill/defs.sch 624 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_121)))->BgL_locz00);
		}

	}



/* &rtl_go-loc */
	obj_t BGl_z62rtl_gozd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5327,
		obj_t BgL_oz00_5328)
	{
		{	/* SawMill/defs.sch 624 */
			return
				BGl_rtl_gozd2loczd2zzsaw_defsz00(((BgL_rtl_goz00_bglt) BgL_oz00_5328));
		}

	}



/* rtl_go-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_gozd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_goz00_bglt BgL_oz00_122,
		obj_t BgL_vz00_123)
	{
		{	/* SawMill/defs.sch 625 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_122)))->BgL_locz00) =
				((obj_t) BgL_vz00_123), BUNSPEC);
		}

	}



/* &rtl_go-loc-set! */
	obj_t BGl_z62rtl_gozd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5329,
		obj_t BgL_oz00_5330, obj_t BgL_vz00_5331)
	{
		{	/* SawMill/defs.sch 625 */
			return
				BGl_rtl_gozd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_goz00_bglt) BgL_oz00_5330), BgL_vz00_5331);
		}

	}



/* make-rtl_pure */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt
		BGl_makezd2rtl_purezd2zzsaw_defsz00(obj_t BgL_loc1445z00_124)
	{
		{	/* SawMill/defs.sch 628 */
			{	/* SawMill/defs.sch 628 */
				BgL_rtl_purez00_bglt BgL_new1360z00_6865;

				{	/* SawMill/defs.sch 628 */
					BgL_rtl_purez00_bglt BgL_new1359z00_6866;

					BgL_new1359z00_6866 =
						((BgL_rtl_purez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_purez00_bgl))));
					{	/* SawMill/defs.sch 628 */
						long BgL_arg1826z00_6867;

						{	/* SawMill/defs.sch 628 */
							long BgL_res2970z00_6868;

							BgL_res2970z00_6868 =
								BGL_CLASS_INDEX(BGl_rtl_purez00zzsaw_defsz00);
							BgL_arg1826z00_6867 = BgL_res2970z00_6868;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1359z00_6866), BgL_arg1826z00_6867);
					}
					BgL_new1360z00_6865 = BgL_new1359z00_6866;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1360z00_6865)))->BgL_locz00) =
					((obj_t) BgL_loc1445z00_124), BUNSPEC);
				return BgL_new1360z00_6865;
			}
		}

	}



/* &make-rtl_pure */
	BgL_rtl_purez00_bglt BGl_z62makezd2rtl_purezb0zzsaw_defsz00(obj_t
		BgL_envz00_5332, obj_t BgL_loc1445z00_5333)
	{
		{	/* SawMill/defs.sch 628 */
			return BGl_makezd2rtl_purezd2zzsaw_defsz00(BgL_loc1445z00_5333);
		}

	}



/* rtl_pure? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_purezf3zf3zzsaw_defsz00(obj_t BgL_objz00_125)
	{
		{	/* SawMill/defs.sch 629 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_125,
				BGl_rtl_purez00zzsaw_defsz00);
		}

	}



/* &rtl_pure? */
	obj_t BGl_z62rtl_purezf3z91zzsaw_defsz00(obj_t BgL_envz00_5334,
		obj_t BgL_objz00_5335)
	{
		{	/* SawMill/defs.sch 629 */
			return BBOOL(BGl_rtl_purezf3zf3zzsaw_defsz00(BgL_objz00_5335));
		}

	}



/* rtl_pure-nil */
	BGL_EXPORTED_DEF BgL_rtl_purez00_bglt BGl_rtl_purezd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 630 */
			{	/* SawMill/defs.sch 630 */
				obj_t BgL_classz00_4080;

				BgL_classz00_4080 = BGl_rtl_purez00zzsaw_defsz00;
				{	/* SawMill/defs.sch 630 */
					obj_t BgL__ortest_1106z00_4081;

					BgL__ortest_1106z00_4081 = BGL_CLASS_NIL(BgL_classz00_4080);
					if (CBOOL(BgL__ortest_1106z00_4081))
						{	/* SawMill/defs.sch 630 */
							return ((BgL_rtl_purez00_bglt) BgL__ortest_1106z00_4081);
						}
					else
						{	/* SawMill/defs.sch 630 */
							return
								((BgL_rtl_purez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4080));
						}
				}
			}
		}

	}



/* &rtl_pure-nil */
	BgL_rtl_purez00_bglt BGl_z62rtl_purezd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5336)
	{
		{	/* SawMill/defs.sch 630 */
			return BGl_rtl_purezd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_pure-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_purezd2loczd2zzsaw_defsz00(BgL_rtl_purez00_bglt
		BgL_oz00_126)
	{
		{	/* SawMill/defs.sch 631 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_126)))->BgL_locz00);
		}

	}



/* &rtl_pure-loc */
	obj_t BGl_z62rtl_purezd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5337,
		obj_t BgL_oz00_5338)
	{
		{	/* SawMill/defs.sch 631 */
			return
				BGl_rtl_purezd2loczd2zzsaw_defsz00(
				((BgL_rtl_purez00_bglt) BgL_oz00_5338));
		}

	}



/* rtl_pure-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_purezd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_purez00_bglt
		BgL_oz00_127, obj_t BgL_vz00_128)
	{
		{	/* SawMill/defs.sch 632 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_127)))->BgL_locz00) =
				((obj_t) BgL_vz00_128), BUNSPEC);
		}

	}



/* &rtl_pure-loc-set! */
	obj_t BGl_z62rtl_purezd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5339,
		obj_t BgL_oz00_5340, obj_t BgL_vz00_5341)
	{
		{	/* SawMill/defs.sch 632 */
			return
				BGl_rtl_purezd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_purez00_bglt) BgL_oz00_5340), BgL_vz00_5341);
		}

	}



/* make-rtl_nop */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t
		BgL_loc1443z00_129)
	{
		{	/* SawMill/defs.sch 635 */
			{	/* SawMill/defs.sch 635 */
				BgL_rtl_nopz00_bglt BgL_new1362z00_6869;

				{	/* SawMill/defs.sch 635 */
					BgL_rtl_nopz00_bglt BgL_new1361z00_6870;

					BgL_new1361z00_6870 =
						((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_nopz00_bgl))));
					{	/* SawMill/defs.sch 635 */
						long BgL_arg1827z00_6871;

						{	/* SawMill/defs.sch 635 */
							long BgL_res2971z00_6872;

							BgL_res2971z00_6872 =
								BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
							BgL_arg1827z00_6871 = BgL_res2971z00_6872;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1361z00_6870), BgL_arg1827z00_6871);
					}
					BgL_new1362z00_6869 = BgL_new1361z00_6870;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1362z00_6869)))->BgL_locz00) =
					((obj_t) BgL_loc1443z00_129), BUNSPEC);
				return BgL_new1362z00_6869;
			}
		}

	}



/* &make-rtl_nop */
	BgL_rtl_nopz00_bglt BGl_z62makezd2rtl_nopzb0zzsaw_defsz00(obj_t
		BgL_envz00_5342, obj_t BgL_loc1443z00_5343)
	{
		{	/* SawMill/defs.sch 635 */
			return BGl_makezd2rtl_nopzd2zzsaw_defsz00(BgL_loc1443z00_5343);
		}

	}



/* rtl_nop? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_nopzf3zf3zzsaw_defsz00(obj_t BgL_objz00_130)
	{
		{	/* SawMill/defs.sch 636 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_130, BGl_rtl_nopz00zzsaw_defsz00);
		}

	}



/* &rtl_nop? */
	obj_t BGl_z62rtl_nopzf3z91zzsaw_defsz00(obj_t BgL_envz00_5344,
		obj_t BgL_objz00_5345)
	{
		{	/* SawMill/defs.sch 636 */
			return BBOOL(BGl_rtl_nopzf3zf3zzsaw_defsz00(BgL_objz00_5345));
		}

	}



/* rtl_nop-nil */
	BGL_EXPORTED_DEF BgL_rtl_nopz00_bglt BGl_rtl_nopzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 637 */
			{	/* SawMill/defs.sch 637 */
				obj_t BgL_classz00_4089;

				BgL_classz00_4089 = BGl_rtl_nopz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 637 */
					obj_t BgL__ortest_1106z00_4090;

					BgL__ortest_1106z00_4090 = BGL_CLASS_NIL(BgL_classz00_4089);
					if (CBOOL(BgL__ortest_1106z00_4090))
						{	/* SawMill/defs.sch 637 */
							return ((BgL_rtl_nopz00_bglt) BgL__ortest_1106z00_4090);
						}
					else
						{	/* SawMill/defs.sch 637 */
							return
								((BgL_rtl_nopz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4089));
						}
				}
			}
		}

	}



/* &rtl_nop-nil */
	BgL_rtl_nopz00_bglt BGl_z62rtl_nopzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5346)
	{
		{	/* SawMill/defs.sch 637 */
			return BGl_rtl_nopzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_nop-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_nopzd2loczd2zzsaw_defsz00(BgL_rtl_nopz00_bglt
		BgL_oz00_131)
	{
		{	/* SawMill/defs.sch 638 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_131)))->BgL_locz00);
		}

	}



/* &rtl_nop-loc */
	obj_t BGl_z62rtl_nopzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5347,
		obj_t BgL_oz00_5348)
	{
		{	/* SawMill/defs.sch 638 */
			return
				BGl_rtl_nopzd2loczd2zzsaw_defsz00(
				((BgL_rtl_nopz00_bglt) BgL_oz00_5348));
		}

	}



/* rtl_nop-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_nopzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_nopz00_bglt BgL_oz00_132,
		obj_t BgL_vz00_133)
	{
		{	/* SawMill/defs.sch 639 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_132)))->BgL_locz00) =
				((obj_t) BgL_vz00_133), BUNSPEC);
		}

	}



/* &rtl_nop-loc-set! */
	obj_t BGl_z62rtl_nopzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5349,
		obj_t BgL_oz00_5350, obj_t BgL_vz00_5351)
	{
		{	/* SawMill/defs.sch 639 */
			return
				BGl_rtl_nopzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_nopz00_bglt) BgL_oz00_5350), BgL_vz00_5351);
		}

	}



/* make-rtl_mov */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt BGl_makezd2rtl_movzd2zzsaw_defsz00(obj_t
		BgL_loc1441z00_134)
	{
		{	/* SawMill/defs.sch 642 */
			{	/* SawMill/defs.sch 642 */
				BgL_rtl_movz00_bglt BgL_new1364z00_6873;

				{	/* SawMill/defs.sch 642 */
					BgL_rtl_movz00_bglt BgL_new1363z00_6874;

					BgL_new1363z00_6874 =
						((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_movz00_bgl))));
					{	/* SawMill/defs.sch 642 */
						long BgL_arg1828z00_6875;

						{	/* SawMill/defs.sch 642 */
							long BgL_res2972z00_6876;

							BgL_res2972z00_6876 =
								BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
							BgL_arg1828z00_6875 = BgL_res2972z00_6876;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1363z00_6874), BgL_arg1828z00_6875);
					}
					BgL_new1364z00_6873 = BgL_new1363z00_6874;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1364z00_6873)))->BgL_locz00) =
					((obj_t) BgL_loc1441z00_134), BUNSPEC);
				return BgL_new1364z00_6873;
			}
		}

	}



/* &make-rtl_mov */
	BgL_rtl_movz00_bglt BGl_z62makezd2rtl_movzb0zzsaw_defsz00(obj_t
		BgL_envz00_5352, obj_t BgL_loc1441z00_5353)
	{
		{	/* SawMill/defs.sch 642 */
			return BGl_makezd2rtl_movzd2zzsaw_defsz00(BgL_loc1441z00_5353);
		}

	}



/* rtl_mov? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_movzf3zf3zzsaw_defsz00(obj_t BgL_objz00_135)
	{
		{	/* SawMill/defs.sch 643 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_135, BGl_rtl_movz00zzsaw_defsz00);
		}

	}



/* &rtl_mov? */
	obj_t BGl_z62rtl_movzf3z91zzsaw_defsz00(obj_t BgL_envz00_5354,
		obj_t BgL_objz00_5355)
	{
		{	/* SawMill/defs.sch 643 */
			return BBOOL(BGl_rtl_movzf3zf3zzsaw_defsz00(BgL_objz00_5355));
		}

	}



/* rtl_mov-nil */
	BGL_EXPORTED_DEF BgL_rtl_movz00_bglt BGl_rtl_movzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 644 */
			{	/* SawMill/defs.sch 644 */
				obj_t BgL_classz00_4098;

				BgL_classz00_4098 = BGl_rtl_movz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 644 */
					obj_t BgL__ortest_1106z00_4099;

					BgL__ortest_1106z00_4099 = BGL_CLASS_NIL(BgL_classz00_4098);
					if (CBOOL(BgL__ortest_1106z00_4099))
						{	/* SawMill/defs.sch 644 */
							return ((BgL_rtl_movz00_bglt) BgL__ortest_1106z00_4099);
						}
					else
						{	/* SawMill/defs.sch 644 */
							return
								((BgL_rtl_movz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4098));
						}
				}
			}
		}

	}



/* &rtl_mov-nil */
	BgL_rtl_movz00_bglt BGl_z62rtl_movzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5356)
	{
		{	/* SawMill/defs.sch 644 */
			return BGl_rtl_movzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_mov-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_movzd2loczd2zzsaw_defsz00(BgL_rtl_movz00_bglt
		BgL_oz00_136)
	{
		{	/* SawMill/defs.sch 645 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_136)))->BgL_locz00);
		}

	}



/* &rtl_mov-loc */
	obj_t BGl_z62rtl_movzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5357,
		obj_t BgL_oz00_5358)
	{
		{	/* SawMill/defs.sch 645 */
			return
				BGl_rtl_movzd2loczd2zzsaw_defsz00(
				((BgL_rtl_movz00_bglt) BgL_oz00_5358));
		}

	}



/* rtl_mov-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_movzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_movz00_bglt BgL_oz00_137,
		obj_t BgL_vz00_138)
	{
		{	/* SawMill/defs.sch 646 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_137)))->BgL_locz00) =
				((obj_t) BgL_vz00_138), BUNSPEC);
		}

	}



/* &rtl_mov-loc-set! */
	obj_t BGl_z62rtl_movzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5359,
		obj_t BgL_oz00_5360, obj_t BgL_vz00_5361)
	{
		{	/* SawMill/defs.sch 646 */
			return
				BGl_rtl_movzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_movz00_bglt) BgL_oz00_5360), BgL_vz00_5361);
		}

	}



/* make-rtl_loadi */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt
		BGl_makezd2rtl_loadizd2zzsaw_defsz00(obj_t BgL_loc1436z00_139,
		BgL_atomz00_bglt BgL_constant1437z00_140)
	{
		{	/* SawMill/defs.sch 649 */
			{	/* SawMill/defs.sch 649 */
				BgL_rtl_loadiz00_bglt BgL_new1366z00_6877;

				{	/* SawMill/defs.sch 649 */
					BgL_rtl_loadiz00_bglt BgL_new1365z00_6878;

					BgL_new1365z00_6878 =
						((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadiz00_bgl))));
					{	/* SawMill/defs.sch 649 */
						long BgL_arg1829z00_6879;

						{	/* SawMill/defs.sch 649 */
							long BgL_res2973z00_6880;

							BgL_res2973z00_6880 =
								BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
							BgL_arg1829z00_6879 = BgL_res2973z00_6880;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1365z00_6878), BgL_arg1829z00_6879);
					}
					BgL_new1366z00_6877 = BgL_new1365z00_6878;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1366z00_6877)))->BgL_locz00) =
					((obj_t) BgL_loc1436z00_139), BUNSPEC);
				((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_new1366z00_6877))->
						BgL_constantz00) =
					((BgL_atomz00_bglt) BgL_constant1437z00_140), BUNSPEC);
				return BgL_new1366z00_6877;
			}
		}

	}



/* &make-rtl_loadi */
	BgL_rtl_loadiz00_bglt BGl_z62makezd2rtl_loadizb0zzsaw_defsz00(obj_t
		BgL_envz00_5362, obj_t BgL_loc1436z00_5363, obj_t BgL_constant1437z00_5364)
	{
		{	/* SawMill/defs.sch 649 */
			return
				BGl_makezd2rtl_loadizd2zzsaw_defsz00(BgL_loc1436z00_5363,
				((BgL_atomz00_bglt) BgL_constant1437z00_5364));
		}

	}



/* rtl_loadi? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadizf3zf3zzsaw_defsz00(obj_t BgL_objz00_141)
	{
		{	/* SawMill/defs.sch 650 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_141,
				BGl_rtl_loadiz00zzsaw_defsz00);
		}

	}



/* &rtl_loadi? */
	obj_t BGl_z62rtl_loadizf3z91zzsaw_defsz00(obj_t BgL_envz00_5365,
		obj_t BgL_objz00_5366)
	{
		{	/* SawMill/defs.sch 650 */
			return BBOOL(BGl_rtl_loadizf3zf3zzsaw_defsz00(BgL_objz00_5366));
		}

	}



/* rtl_loadi-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadiz00_bglt BGl_rtl_loadizd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 651 */
			{	/* SawMill/defs.sch 651 */
				obj_t BgL_classz00_4107;

				BgL_classz00_4107 = BGl_rtl_loadiz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 651 */
					obj_t BgL__ortest_1106z00_4108;

					BgL__ortest_1106z00_4108 = BGL_CLASS_NIL(BgL_classz00_4107);
					if (CBOOL(BgL__ortest_1106z00_4108))
						{	/* SawMill/defs.sch 651 */
							return ((BgL_rtl_loadiz00_bglt) BgL__ortest_1106z00_4108);
						}
					else
						{	/* SawMill/defs.sch 651 */
							return
								((BgL_rtl_loadiz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4107));
						}
				}
			}
		}

	}



/* &rtl_loadi-nil */
	BgL_rtl_loadiz00_bglt BGl_z62rtl_loadizd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5367)
	{
		{	/* SawMill/defs.sch 651 */
			return BGl_rtl_loadizd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_loadi-constant */
	BGL_EXPORTED_DEF BgL_atomz00_bglt
		BGl_rtl_loadizd2constantzd2zzsaw_defsz00(BgL_rtl_loadiz00_bglt BgL_oz00_142)
	{
		{	/* SawMill/defs.sch 652 */
			return (((BgL_rtl_loadiz00_bglt) COBJECT(BgL_oz00_142))->BgL_constantz00);
		}

	}



/* &rtl_loadi-constant */
	BgL_atomz00_bglt BGl_z62rtl_loadizd2constantzb0zzsaw_defsz00(obj_t
		BgL_envz00_5368, obj_t BgL_oz00_5369)
	{
		{	/* SawMill/defs.sch 652 */
			return
				BGl_rtl_loadizd2constantzd2zzsaw_defsz00(
				((BgL_rtl_loadiz00_bglt) BgL_oz00_5369));
		}

	}



/* rtl_loadi-constant-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadizd2constantzd2setz12z12zzsaw_defsz00(BgL_rtl_loadiz00_bglt
		BgL_oz00_143, BgL_atomz00_bglt BgL_vz00_144)
	{
		{	/* SawMill/defs.sch 653 */
			return
				((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_oz00_143))->BgL_constantz00) =
				((BgL_atomz00_bglt) BgL_vz00_144), BUNSPEC);
		}

	}



/* &rtl_loadi-constant-set! */
	obj_t BGl_z62rtl_loadizd2constantzd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5370, obj_t BgL_oz00_5371, obj_t BgL_vz00_5372)
	{
		{	/* SawMill/defs.sch 653 */
			return
				BGl_rtl_loadizd2constantzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadiz00_bglt) BgL_oz00_5371),
				((BgL_atomz00_bglt) BgL_vz00_5372));
		}

	}



/* rtl_loadi-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadizd2loczd2zzsaw_defsz00(BgL_rtl_loadiz00_bglt BgL_oz00_145)
	{
		{	/* SawMill/defs.sch 654 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_145)))->BgL_locz00);
		}

	}



/* &rtl_loadi-loc */
	obj_t BGl_z62rtl_loadizd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5373,
		obj_t BgL_oz00_5374)
	{
		{	/* SawMill/defs.sch 654 */
			return
				BGl_rtl_loadizd2loczd2zzsaw_defsz00(
				((BgL_rtl_loadiz00_bglt) BgL_oz00_5374));
		}

	}



/* rtl_loadi-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadizd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadiz00_bglt
		BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* SawMill/defs.sch 655 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_146)))->BgL_locz00) =
				((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &rtl_loadi-loc-set! */
	obj_t BGl_z62rtl_loadizd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5375,
		obj_t BgL_oz00_5376, obj_t BgL_vz00_5377)
	{
		{	/* SawMill/defs.sch 655 */
			return
				BGl_rtl_loadizd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadiz00_bglt) BgL_oz00_5376), BgL_vz00_5377);
		}

	}



/* make-rtl_loadg */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt
		BGl_makezd2rtl_loadgzd2zzsaw_defsz00(obj_t BgL_loc1432z00_148,
		BgL_globalz00_bglt BgL_var1433z00_149)
	{
		{	/* SawMill/defs.sch 658 */
			{	/* SawMill/defs.sch 658 */
				BgL_rtl_loadgz00_bglt BgL_new1368z00_6881;

				{	/* SawMill/defs.sch 658 */
					BgL_rtl_loadgz00_bglt BgL_new1367z00_6882;

					BgL_new1367z00_6882 =
						((BgL_rtl_loadgz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadgz00_bgl))));
					{	/* SawMill/defs.sch 658 */
						long BgL_arg1830z00_6883;

						{	/* SawMill/defs.sch 658 */
							long BgL_res2974z00_6884;

							BgL_res2974z00_6884 =
								BGL_CLASS_INDEX(BGl_rtl_loadgz00zzsaw_defsz00);
							BgL_arg1830z00_6883 = BgL_res2974z00_6884;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1367z00_6882), BgL_arg1830z00_6883);
					}
					BgL_new1368z00_6881 = BgL_new1367z00_6882;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1368z00_6881)))->BgL_locz00) =
					((obj_t) BgL_loc1432z00_148), BUNSPEC);
				((((BgL_rtl_loadgz00_bglt) COBJECT(BgL_new1368z00_6881))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var1433z00_149), BUNSPEC);
				return BgL_new1368z00_6881;
			}
		}

	}



/* &make-rtl_loadg */
	BgL_rtl_loadgz00_bglt BGl_z62makezd2rtl_loadgzb0zzsaw_defsz00(obj_t
		BgL_envz00_5378, obj_t BgL_loc1432z00_5379, obj_t BgL_var1433z00_5380)
	{
		{	/* SawMill/defs.sch 658 */
			return
				BGl_makezd2rtl_loadgzd2zzsaw_defsz00(BgL_loc1432z00_5379,
				((BgL_globalz00_bglt) BgL_var1433z00_5380));
		}

	}



/* rtl_loadg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadgzf3zf3zzsaw_defsz00(obj_t BgL_objz00_150)
	{
		{	/* SawMill/defs.sch 659 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_150,
				BGl_rtl_loadgz00zzsaw_defsz00);
		}

	}



/* &rtl_loadg? */
	obj_t BGl_z62rtl_loadgzf3z91zzsaw_defsz00(obj_t BgL_envz00_5381,
		obj_t BgL_objz00_5382)
	{
		{	/* SawMill/defs.sch 659 */
			return BBOOL(BGl_rtl_loadgzf3zf3zzsaw_defsz00(BgL_objz00_5382));
		}

	}



/* rtl_loadg-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadgz00_bglt BGl_rtl_loadgzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 660 */
			{	/* SawMill/defs.sch 660 */
				obj_t BgL_classz00_4116;

				BgL_classz00_4116 = BGl_rtl_loadgz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 660 */
					obj_t BgL__ortest_1106z00_4117;

					BgL__ortest_1106z00_4117 = BGL_CLASS_NIL(BgL_classz00_4116);
					if (CBOOL(BgL__ortest_1106z00_4117))
						{	/* SawMill/defs.sch 660 */
							return ((BgL_rtl_loadgz00_bglt) BgL__ortest_1106z00_4117);
						}
					else
						{	/* SawMill/defs.sch 660 */
							return
								((BgL_rtl_loadgz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4116));
						}
				}
			}
		}

	}



/* &rtl_loadg-nil */
	BgL_rtl_loadgz00_bglt BGl_z62rtl_loadgzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5383)
	{
		{	/* SawMill/defs.sch 660 */
			return BGl_rtl_loadgzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_loadg-var */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_rtl_loadgzd2varzd2zzsaw_defsz00(BgL_rtl_loadgz00_bglt BgL_oz00_151)
	{
		{	/* SawMill/defs.sch 661 */
			return (((BgL_rtl_loadgz00_bglt) COBJECT(BgL_oz00_151))->BgL_varz00);
		}

	}



/* &rtl_loadg-var */
	BgL_globalz00_bglt BGl_z62rtl_loadgzd2varzb0zzsaw_defsz00(obj_t
		BgL_envz00_5384, obj_t BgL_oz00_5385)
	{
		{	/* SawMill/defs.sch 661 */
			return
				BGl_rtl_loadgzd2varzd2zzsaw_defsz00(
				((BgL_rtl_loadgz00_bglt) BgL_oz00_5385));
		}

	}



/* rtl_loadg-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadgzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_loadgz00_bglt
		BgL_oz00_152, BgL_globalz00_bglt BgL_vz00_153)
	{
		{	/* SawMill/defs.sch 662 */
			return
				((((BgL_rtl_loadgz00_bglt) COBJECT(BgL_oz00_152))->BgL_varz00) =
				((BgL_globalz00_bglt) BgL_vz00_153), BUNSPEC);
		}

	}



/* &rtl_loadg-var-set! */
	obj_t BGl_z62rtl_loadgzd2varzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5386,
		obj_t BgL_oz00_5387, obj_t BgL_vz00_5388)
	{
		{	/* SawMill/defs.sch 662 */
			return
				BGl_rtl_loadgzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadgz00_bglt) BgL_oz00_5387),
				((BgL_globalz00_bglt) BgL_vz00_5388));
		}

	}



/* rtl_loadg-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadgzd2loczd2zzsaw_defsz00(BgL_rtl_loadgz00_bglt BgL_oz00_154)
	{
		{	/* SawMill/defs.sch 663 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_154)))->BgL_locz00);
		}

	}



/* &rtl_loadg-loc */
	obj_t BGl_z62rtl_loadgzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5389,
		obj_t BgL_oz00_5390)
	{
		{	/* SawMill/defs.sch 663 */
			return
				BGl_rtl_loadgzd2loczd2zzsaw_defsz00(
				((BgL_rtl_loadgz00_bglt) BgL_oz00_5390));
		}

	}



/* rtl_loadg-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadgzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadgz00_bglt
		BgL_oz00_155, obj_t BgL_vz00_156)
	{
		{	/* SawMill/defs.sch 664 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_155)))->BgL_locz00) =
				((obj_t) BgL_vz00_156), BUNSPEC);
		}

	}



/* &rtl_loadg-loc-set! */
	obj_t BGl_z62rtl_loadgzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5391,
		obj_t BgL_oz00_5392, obj_t BgL_vz00_5393)
	{
		{	/* SawMill/defs.sch 664 */
			return
				BGl_rtl_loadgzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadgz00_bglt) BgL_oz00_5392), BgL_vz00_5393);
		}

	}



/* make-rtl_loadfun */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t BgL_loc1429z00_157,
		BgL_globalz00_bglt BgL_var1430z00_158)
	{
		{	/* SawMill/defs.sch 667 */
			{	/* SawMill/defs.sch 667 */
				BgL_rtl_loadfunz00_bglt BgL_new1370z00_6885;

				{	/* SawMill/defs.sch 667 */
					BgL_rtl_loadfunz00_bglt BgL_new1369z00_6886;

					BgL_new1369z00_6886 =
						((BgL_rtl_loadfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadfunz00_bgl))));
					{	/* SawMill/defs.sch 667 */
						long BgL_arg1831z00_6887;

						{	/* SawMill/defs.sch 667 */
							long BgL_res2975z00_6888;

							BgL_res2975z00_6888 =
								BGL_CLASS_INDEX(BGl_rtl_loadfunz00zzsaw_defsz00);
							BgL_arg1831z00_6887 = BgL_res2975z00_6888;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1369z00_6886), BgL_arg1831z00_6887);
					}
					BgL_new1370z00_6885 = BgL_new1369z00_6886;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1370z00_6885)))->BgL_locz00) =
					((obj_t) BgL_loc1429z00_157), BUNSPEC);
				((((BgL_rtl_loadfunz00_bglt) COBJECT(BgL_new1370z00_6885))->
						BgL_varz00) = ((BgL_globalz00_bglt) BgL_var1430z00_158), BUNSPEC);
				return BgL_new1370z00_6885;
			}
		}

	}



/* &make-rtl_loadfun */
	BgL_rtl_loadfunz00_bglt BGl_z62makezd2rtl_loadfunzb0zzsaw_defsz00(obj_t
		BgL_envz00_5394, obj_t BgL_loc1429z00_5395, obj_t BgL_var1430z00_5396)
	{
		{	/* SawMill/defs.sch 667 */
			return
				BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(BgL_loc1429z00_5395,
				((BgL_globalz00_bglt) BgL_var1430z00_5396));
		}

	}



/* rtl_loadfun? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_loadfunzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_159)
	{
		{	/* SawMill/defs.sch 668 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_159,
				BGl_rtl_loadfunz00zzsaw_defsz00);
		}

	}



/* &rtl_loadfun? */
	obj_t BGl_z62rtl_loadfunzf3z91zzsaw_defsz00(obj_t BgL_envz00_5397,
		obj_t BgL_objz00_5398)
	{
		{	/* SawMill/defs.sch 668 */
			return BBOOL(BGl_rtl_loadfunzf3zf3zzsaw_defsz00(BgL_objz00_5398));
		}

	}



/* rtl_loadfun-nil */
	BGL_EXPORTED_DEF BgL_rtl_loadfunz00_bglt
		BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 669 */
			{	/* SawMill/defs.sch 669 */
				obj_t BgL_classz00_4125;

				BgL_classz00_4125 = BGl_rtl_loadfunz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 669 */
					obj_t BgL__ortest_1106z00_4126;

					BgL__ortest_1106z00_4126 = BGL_CLASS_NIL(BgL_classz00_4125);
					if (CBOOL(BgL__ortest_1106z00_4126))
						{	/* SawMill/defs.sch 669 */
							return ((BgL_rtl_loadfunz00_bglt) BgL__ortest_1106z00_4126);
						}
					else
						{	/* SawMill/defs.sch 669 */
							return
								((BgL_rtl_loadfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4125));
						}
				}
			}
		}

	}



/* &rtl_loadfun-nil */
	BgL_rtl_loadfunz00_bglt BGl_z62rtl_loadfunzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5399)
	{
		{	/* SawMill/defs.sch 669 */
			return BGl_rtl_loadfunzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_loadfun-var */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_rtl_loadfunzd2varzd2zzsaw_defsz00(BgL_rtl_loadfunz00_bglt BgL_oz00_160)
	{
		{	/* SawMill/defs.sch 670 */
			return (((BgL_rtl_loadfunz00_bglt) COBJECT(BgL_oz00_160))->BgL_varz00);
		}

	}



/* &rtl_loadfun-var */
	BgL_globalz00_bglt BGl_z62rtl_loadfunzd2varzb0zzsaw_defsz00(obj_t
		BgL_envz00_5400, obj_t BgL_oz00_5401)
	{
		{	/* SawMill/defs.sch 670 */
			return
				BGl_rtl_loadfunzd2varzd2zzsaw_defsz00(
				((BgL_rtl_loadfunz00_bglt) BgL_oz00_5401));
		}

	}



/* rtl_loadfun-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadfunzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_loadfunz00_bglt
		BgL_oz00_161, BgL_globalz00_bglt BgL_vz00_162)
	{
		{	/* SawMill/defs.sch 671 */
			return
				((((BgL_rtl_loadfunz00_bglt) COBJECT(BgL_oz00_161))->BgL_varz00) =
				((BgL_globalz00_bglt) BgL_vz00_162), BUNSPEC);
		}

	}



/* &rtl_loadfun-var-set! */
	obj_t BGl_z62rtl_loadfunzd2varzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5402,
		obj_t BgL_oz00_5403, obj_t BgL_vz00_5404)
	{
		{	/* SawMill/defs.sch 671 */
			return
				BGl_rtl_loadfunzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadfunz00_bglt) BgL_oz00_5403),
				((BgL_globalz00_bglt) BgL_vz00_5404));
		}

	}



/* rtl_loadfun-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadfunzd2loczd2zzsaw_defsz00(BgL_rtl_loadfunz00_bglt BgL_oz00_163)
	{
		{	/* SawMill/defs.sch 672 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_163)))->BgL_locz00);
		}

	}



/* &rtl_loadfun-loc */
	obj_t BGl_z62rtl_loadfunzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5405,
		obj_t BgL_oz00_5406)
	{
		{	/* SawMill/defs.sch 672 */
			return
				BGl_rtl_loadfunzd2loczd2zzsaw_defsz00(
				((BgL_rtl_loadfunz00_bglt) BgL_oz00_5406));
		}

	}



/* rtl_loadfun-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_loadfunzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_loadfunz00_bglt
		BgL_oz00_164, obj_t BgL_vz00_165)
	{
		{	/* SawMill/defs.sch 673 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_164)))->BgL_locz00) =
				((obj_t) BgL_vz00_165), BUNSPEC);
		}

	}



/* &rtl_loadfun-loc-set! */
	obj_t BGl_z62rtl_loadfunzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5407,
		obj_t BgL_oz00_5408, obj_t BgL_vz00_5409)
	{
		{	/* SawMill/defs.sch 673 */
			return
				BGl_rtl_loadfunzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_loadfunz00_bglt) BgL_oz00_5408), BgL_vz00_5409);
		}

	}



/* make-rtl_globalref */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t BgL_loc1425z00_166,
		BgL_globalz00_bglt BgL_var1426z00_167)
	{
		{	/* SawMill/defs.sch 676 */
			{	/* SawMill/defs.sch 676 */
				BgL_rtl_globalrefz00_bglt BgL_new1372z00_6889;

				{	/* SawMill/defs.sch 676 */
					BgL_rtl_globalrefz00_bglt BgL_new1371z00_6890;

					BgL_new1371z00_6890 =
						((BgL_rtl_globalrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_globalrefz00_bgl))));
					{	/* SawMill/defs.sch 676 */
						long BgL_arg1832z00_6891;

						{	/* SawMill/defs.sch 676 */
							long BgL_res2976z00_6892;

							BgL_res2976z00_6892 =
								BGL_CLASS_INDEX(BGl_rtl_globalrefz00zzsaw_defsz00);
							BgL_arg1832z00_6891 = BgL_res2976z00_6892;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1371z00_6890), BgL_arg1832z00_6891);
					}
					BgL_new1372z00_6889 = BgL_new1371z00_6890;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1372z00_6889)))->BgL_locz00) =
					((obj_t) BgL_loc1425z00_166), BUNSPEC);
				((((BgL_rtl_globalrefz00_bglt) COBJECT(BgL_new1372z00_6889))->
						BgL_varz00) = ((BgL_globalz00_bglt) BgL_var1426z00_167), BUNSPEC);
				return BgL_new1372z00_6889;
			}
		}

	}



/* &make-rtl_globalref */
	BgL_rtl_globalrefz00_bglt BGl_z62makezd2rtl_globalrefzb0zzsaw_defsz00(obj_t
		BgL_envz00_5410, obj_t BgL_loc1425z00_5411, obj_t BgL_var1426z00_5412)
	{
		{	/* SawMill/defs.sch 676 */
			return
				BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(BgL_loc1425z00_5411,
				((BgL_globalz00_bglt) BgL_var1426z00_5412));
		}

	}



/* rtl_globalref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_globalrefzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_168)
	{
		{	/* SawMill/defs.sch 677 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_168,
				BGl_rtl_globalrefz00zzsaw_defsz00);
		}

	}



/* &rtl_globalref? */
	obj_t BGl_z62rtl_globalrefzf3z91zzsaw_defsz00(obj_t BgL_envz00_5413,
		obj_t BgL_objz00_5414)
	{
		{	/* SawMill/defs.sch 677 */
			return BBOOL(BGl_rtl_globalrefzf3zf3zzsaw_defsz00(BgL_objz00_5414));
		}

	}



/* rtl_globalref-nil */
	BGL_EXPORTED_DEF BgL_rtl_globalrefz00_bglt
		BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 678 */
			{	/* SawMill/defs.sch 678 */
				obj_t BgL_classz00_4134;

				BgL_classz00_4134 = BGl_rtl_globalrefz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 678 */
					obj_t BgL__ortest_1106z00_4135;

					BgL__ortest_1106z00_4135 = BGL_CLASS_NIL(BgL_classz00_4134);
					if (CBOOL(BgL__ortest_1106z00_4135))
						{	/* SawMill/defs.sch 678 */
							return ((BgL_rtl_globalrefz00_bglt) BgL__ortest_1106z00_4135);
						}
					else
						{	/* SawMill/defs.sch 678 */
							return
								((BgL_rtl_globalrefz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4134));
						}
				}
			}
		}

	}



/* &rtl_globalref-nil */
	BgL_rtl_globalrefz00_bglt BGl_z62rtl_globalrefzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5415)
	{
		{	/* SawMill/defs.sch 678 */
			return BGl_rtl_globalrefzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_globalref-var */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_rtl_globalrefzd2varzd2zzsaw_defsz00(BgL_rtl_globalrefz00_bglt
		BgL_oz00_169)
	{
		{	/* SawMill/defs.sch 679 */
			return (((BgL_rtl_globalrefz00_bglt) COBJECT(BgL_oz00_169))->BgL_varz00);
		}

	}



/* &rtl_globalref-var */
	BgL_globalz00_bglt BGl_z62rtl_globalrefzd2varzb0zzsaw_defsz00(obj_t
		BgL_envz00_5416, obj_t BgL_oz00_5417)
	{
		{	/* SawMill/defs.sch 679 */
			return
				BGl_rtl_globalrefzd2varzd2zzsaw_defsz00(
				((BgL_rtl_globalrefz00_bglt) BgL_oz00_5417));
		}

	}



/* rtl_globalref-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_globalrefzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_globalrefz00_bglt
		BgL_oz00_170, BgL_globalz00_bglt BgL_vz00_171)
	{
		{	/* SawMill/defs.sch 680 */
			return
				((((BgL_rtl_globalrefz00_bglt) COBJECT(BgL_oz00_170))->BgL_varz00) =
				((BgL_globalz00_bglt) BgL_vz00_171), BUNSPEC);
		}

	}



/* &rtl_globalref-var-set! */
	obj_t BGl_z62rtl_globalrefzd2varzd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5418, obj_t BgL_oz00_5419, obj_t BgL_vz00_5420)
	{
		{	/* SawMill/defs.sch 680 */
			return
				BGl_rtl_globalrefzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_globalrefz00_bglt) BgL_oz00_5419),
				((BgL_globalz00_bglt) BgL_vz00_5420));
		}

	}



/* rtl_globalref-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_globalrefzd2loczd2zzsaw_defsz00(BgL_rtl_globalrefz00_bglt
		BgL_oz00_172)
	{
		{	/* SawMill/defs.sch 681 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_172)))->BgL_locz00);
		}

	}



/* &rtl_globalref-loc */
	obj_t BGl_z62rtl_globalrefzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5421,
		obj_t BgL_oz00_5422)
	{
		{	/* SawMill/defs.sch 681 */
			return
				BGl_rtl_globalrefzd2loczd2zzsaw_defsz00(
				((BgL_rtl_globalrefz00_bglt) BgL_oz00_5422));
		}

	}



/* rtl_globalref-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_globalrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_globalrefz00_bglt
		BgL_oz00_173, obj_t BgL_vz00_174)
	{
		{	/* SawMill/defs.sch 682 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_173)))->BgL_locz00) =
				((obj_t) BgL_vz00_174), BUNSPEC);
		}

	}



/* &rtl_globalref-loc-set! */
	obj_t BGl_z62rtl_globalrefzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5423, obj_t BgL_oz00_5424, obj_t BgL_vz00_5425)
	{
		{	/* SawMill/defs.sch 682 */
			return
				BGl_rtl_globalrefzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_globalrefz00_bglt) BgL_oz00_5424), BgL_vz00_5425);
		}

	}



/* make-rtl_getfield */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t BgL_loc1419z00_175,
		obj_t BgL_name1420z00_176, BgL_typez00_bglt BgL_objtype1421z00_177,
		BgL_typez00_bglt BgL_type1422z00_178)
	{
		{	/* SawMill/defs.sch 685 */
			{	/* SawMill/defs.sch 685 */
				BgL_rtl_getfieldz00_bglt BgL_new1374z00_6893;

				{	/* SawMill/defs.sch 685 */
					BgL_rtl_getfieldz00_bglt BgL_new1373z00_6894;

					BgL_new1373z00_6894 =
						((BgL_rtl_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_getfieldz00_bgl))));
					{	/* SawMill/defs.sch 685 */
						long BgL_arg1833z00_6895;

						{	/* SawMill/defs.sch 685 */
							long BgL_res2977z00_6896;

							BgL_res2977z00_6896 =
								BGL_CLASS_INDEX(BGl_rtl_getfieldz00zzsaw_defsz00);
							BgL_arg1833z00_6895 = BgL_res2977z00_6896;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1373z00_6894), BgL_arg1833z00_6895);
					}
					BgL_new1374z00_6893 = BgL_new1373z00_6894;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1374z00_6893)))->BgL_locz00) =
					((obj_t) BgL_loc1419z00_175), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1374z00_6893))->
						BgL_namez00) = ((obj_t) BgL_name1420z00_176), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1374z00_6893))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) BgL_objtype1421z00_177), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1374z00_6893))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1422z00_178), BUNSPEC);
				return BgL_new1374z00_6893;
			}
		}

	}



/* &make-rtl_getfield */
	BgL_rtl_getfieldz00_bglt BGl_z62makezd2rtl_getfieldzb0zzsaw_defsz00(obj_t
		BgL_envz00_5426, obj_t BgL_loc1419z00_5427, obj_t BgL_name1420z00_5428,
		obj_t BgL_objtype1421z00_5429, obj_t BgL_type1422z00_5430)
	{
		{	/* SawMill/defs.sch 685 */
			return
				BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(BgL_loc1419z00_5427,
				BgL_name1420z00_5428, ((BgL_typez00_bglt) BgL_objtype1421z00_5429),
				((BgL_typez00_bglt) BgL_type1422z00_5430));
		}

	}



/* rtl_getfield? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_getfieldzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_179)
	{
		{	/* SawMill/defs.sch 686 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_179,
				BGl_rtl_getfieldz00zzsaw_defsz00);
		}

	}



/* &rtl_getfield? */
	obj_t BGl_z62rtl_getfieldzf3z91zzsaw_defsz00(obj_t BgL_envz00_5431,
		obj_t BgL_objz00_5432)
	{
		{	/* SawMill/defs.sch 686 */
			return BBOOL(BGl_rtl_getfieldzf3zf3zzsaw_defsz00(BgL_objz00_5432));
		}

	}



/* rtl_getfield-nil */
	BGL_EXPORTED_DEF BgL_rtl_getfieldz00_bglt
		BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 687 */
			{	/* SawMill/defs.sch 687 */
				obj_t BgL_classz00_4143;

				BgL_classz00_4143 = BGl_rtl_getfieldz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 687 */
					obj_t BgL__ortest_1106z00_4144;

					BgL__ortest_1106z00_4144 = BGL_CLASS_NIL(BgL_classz00_4143);
					if (CBOOL(BgL__ortest_1106z00_4144))
						{	/* SawMill/defs.sch 687 */
							return ((BgL_rtl_getfieldz00_bglt) BgL__ortest_1106z00_4144);
						}
					else
						{	/* SawMill/defs.sch 687 */
							return
								((BgL_rtl_getfieldz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4143));
						}
				}
			}
		}

	}



/* &rtl_getfield-nil */
	BgL_rtl_getfieldz00_bglt BGl_z62rtl_getfieldzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5433)
	{
		{	/* SawMill/defs.sch 687 */
			return BGl_rtl_getfieldzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_getfield-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_getfieldzd2typezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_180)
	{
		{	/* SawMill/defs.sch 688 */
			return (((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_180))->BgL_typez00);
		}

	}



/* &rtl_getfield-type */
	BgL_typez00_bglt BGl_z62rtl_getfieldzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5434, obj_t BgL_oz00_5435)
	{
		{	/* SawMill/defs.sch 688 */
			return
				BGl_rtl_getfieldzd2typezd2zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5435));
		}

	}



/* rtl_getfield-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_181, BgL_typez00_bglt BgL_vz00_182)
	{
		{	/* SawMill/defs.sch 689 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_181))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_182), BUNSPEC);
		}

	}



/* &rtl_getfield-type-set! */
	obj_t BGl_z62rtl_getfieldzd2typezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5436, obj_t BgL_oz00_5437, obj_t BgL_vz00_5438)
	{
		{	/* SawMill/defs.sch 689 */
			return
				BGl_rtl_getfieldzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5437),
				((BgL_typez00_bglt) BgL_vz00_5438));
		}

	}



/* rtl_getfield-objtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_getfieldzd2objtypezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_183)
	{
		{	/* SawMill/defs.sch 690 */
			return
				(((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_183))->BgL_objtypez00);
		}

	}



/* &rtl_getfield-objtype */
	BgL_typez00_bglt BGl_z62rtl_getfieldzd2objtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5439, obj_t BgL_oz00_5440)
	{
		{	/* SawMill/defs.sch 690 */
			return
				BGl_rtl_getfieldzd2objtypezd2zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5440));
		}

	}



/* rtl_getfield-objtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2objtypezd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_184, BgL_typez00_bglt BgL_vz00_185)
	{
		{	/* SawMill/defs.sch 691 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_184))->BgL_objtypez00) =
				((BgL_typez00_bglt) BgL_vz00_185), BUNSPEC);
		}

	}



/* &rtl_getfield-objtype-set! */
	obj_t BGl_z62rtl_getfieldzd2objtypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5441, obj_t BgL_oz00_5442, obj_t BgL_vz00_5443)
	{
		{	/* SawMill/defs.sch 691 */
			return
				BGl_rtl_getfieldzd2objtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5442),
				((BgL_typez00_bglt) BgL_vz00_5443));
		}

	}



/* rtl_getfield-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2namezd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_186)
	{
		{	/* SawMill/defs.sch 692 */
			return (((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_186))->BgL_namez00);
		}

	}



/* &rtl_getfield-name */
	obj_t BGl_z62rtl_getfieldzd2namezb0zzsaw_defsz00(obj_t BgL_envz00_5444,
		obj_t BgL_oz00_5445)
	{
		{	/* SawMill/defs.sch 692 */
			return
				BGl_rtl_getfieldzd2namezd2zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5445));
		}

	}



/* rtl_getfield-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2namezd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_187, obj_t BgL_vz00_188)
	{
		{	/* SawMill/defs.sch 693 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_oz00_187))->BgL_namez00) =
				((obj_t) BgL_vz00_188), BUNSPEC);
		}

	}



/* &rtl_getfield-name-set! */
	obj_t BGl_z62rtl_getfieldzd2namezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5446, obj_t BgL_oz00_5447, obj_t BgL_vz00_5448)
	{
		{	/* SawMill/defs.sch 693 */
			return
				BGl_rtl_getfieldzd2namezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5447), BgL_vz00_5448);
		}

	}



/* rtl_getfield-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2loczd2zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_189)
	{
		{	/* SawMill/defs.sch 694 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_189)))->BgL_locz00);
		}

	}



/* &rtl_getfield-loc */
	obj_t BGl_z62rtl_getfieldzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5449,
		obj_t BgL_oz00_5450)
	{
		{	/* SawMill/defs.sch 694 */
			return
				BGl_rtl_getfieldzd2loczd2zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5450));
		}

	}



/* rtl_getfield-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_getfieldzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_getfieldz00_bglt
		BgL_oz00_190, obj_t BgL_vz00_191)
	{
		{	/* SawMill/defs.sch 695 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_190)))->BgL_locz00) =
				((obj_t) BgL_vz00_191), BUNSPEC);
		}

	}



/* &rtl_getfield-loc-set! */
	obj_t BGl_z62rtl_getfieldzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5451, obj_t BgL_oz00_5452, obj_t BgL_vz00_5453)
	{
		{	/* SawMill/defs.sch 695 */
			return
				BGl_rtl_getfieldzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_getfieldz00_bglt) BgL_oz00_5452), BgL_vz00_5453);
		}

	}



/* make-rtl_valloc */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt
		BGl_makezd2rtl_valloczd2zzsaw_defsz00(obj_t BgL_loc1415z00_192,
		BgL_typez00_bglt BgL_type1416z00_193, BgL_typez00_bglt BgL_vtype1417z00_194)
	{
		{	/* SawMill/defs.sch 698 */
			{	/* SawMill/defs.sch 698 */
				BgL_rtl_vallocz00_bglt BgL_new1376z00_6897;

				{	/* SawMill/defs.sch 698 */
					BgL_rtl_vallocz00_bglt BgL_new1375z00_6898;

					BgL_new1375z00_6898 =
						((BgL_rtl_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vallocz00_bgl))));
					{	/* SawMill/defs.sch 698 */
						long BgL_arg1835z00_6899;

						{	/* SawMill/defs.sch 698 */
							long BgL_res2978z00_6900;

							BgL_res2978z00_6900 =
								BGL_CLASS_INDEX(BGl_rtl_vallocz00zzsaw_defsz00);
							BgL_arg1835z00_6899 = BgL_res2978z00_6900;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1375z00_6898), BgL_arg1835z00_6899);
					}
					BgL_new1376z00_6897 = BgL_new1375z00_6898;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1376z00_6897)))->BgL_locz00) =
					((obj_t) BgL_loc1415z00_192), BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1376z00_6897))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1416z00_193), BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1376z00_6897))->
						BgL_vtypez00) = ((BgL_typez00_bglt) BgL_vtype1417z00_194), BUNSPEC);
				return BgL_new1376z00_6897;
			}
		}

	}



/* &make-rtl_valloc */
	BgL_rtl_vallocz00_bglt BGl_z62makezd2rtl_valloczb0zzsaw_defsz00(obj_t
		BgL_envz00_5454, obj_t BgL_loc1415z00_5455, obj_t BgL_type1416z00_5456,
		obj_t BgL_vtype1417z00_5457)
	{
		{	/* SawMill/defs.sch 698 */
			return
				BGl_makezd2rtl_valloczd2zzsaw_defsz00(BgL_loc1415z00_5455,
				((BgL_typez00_bglt) BgL_type1416z00_5456),
				((BgL_typez00_bglt) BgL_vtype1417z00_5457));
		}

	}



/* rtl_valloc? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_valloczf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_195)
	{
		{	/* SawMill/defs.sch 699 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_195,
				BGl_rtl_vallocz00zzsaw_defsz00);
		}

	}



/* &rtl_valloc? */
	obj_t BGl_z62rtl_valloczf3z91zzsaw_defsz00(obj_t BgL_envz00_5458,
		obj_t BgL_objz00_5459)
	{
		{	/* SawMill/defs.sch 699 */
			return BBOOL(BGl_rtl_valloczf3zf3zzsaw_defsz00(BgL_objz00_5459));
		}

	}



/* rtl_valloc-nil */
	BGL_EXPORTED_DEF BgL_rtl_vallocz00_bglt BGl_rtl_valloczd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 700 */
			{	/* SawMill/defs.sch 700 */
				obj_t BgL_classz00_4152;

				BgL_classz00_4152 = BGl_rtl_vallocz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 700 */
					obj_t BgL__ortest_1106z00_4153;

					BgL__ortest_1106z00_4153 = BGL_CLASS_NIL(BgL_classz00_4152);
					if (CBOOL(BgL__ortest_1106z00_4153))
						{	/* SawMill/defs.sch 700 */
							return ((BgL_rtl_vallocz00_bglt) BgL__ortest_1106z00_4153);
						}
					else
						{	/* SawMill/defs.sch 700 */
							return
								((BgL_rtl_vallocz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4152));
						}
				}
			}
		}

	}



/* &rtl_valloc-nil */
	BgL_rtl_vallocz00_bglt BGl_z62rtl_valloczd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5460)
	{
		{	/* SawMill/defs.sch 700 */
			return BGl_rtl_valloczd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_valloc-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_valloczd2vtypezd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt BgL_oz00_196)
	{
		{	/* SawMill/defs.sch 701 */
			return (((BgL_rtl_vallocz00_bglt) COBJECT(BgL_oz00_196))->BgL_vtypez00);
		}

	}



/* &rtl_valloc-vtype */
	BgL_typez00_bglt BGl_z62rtl_valloczd2vtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5461, obj_t BgL_oz00_5462)
	{
		{	/* SawMill/defs.sch 701 */
			return
				BGl_rtl_valloczd2vtypezd2zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5462));
		}

	}



/* rtl_valloc-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_valloczd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt
		BgL_oz00_197, BgL_typez00_bglt BgL_vz00_198)
	{
		{	/* SawMill/defs.sch 702 */
			return
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_oz00_197))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_198), BUNSPEC);
		}

	}



/* &rtl_valloc-vtype-set! */
	obj_t BGl_z62rtl_valloczd2vtypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5463, obj_t BgL_oz00_5464, obj_t BgL_vz00_5465)
	{
		{	/* SawMill/defs.sch 702 */
			return
				BGl_rtl_valloczd2vtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5464),
				((BgL_typez00_bglt) BgL_vz00_5465));
		}

	}



/* rtl_valloc-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_valloczd2typezd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt BgL_oz00_199)
	{
		{	/* SawMill/defs.sch 703 */
			return (((BgL_rtl_vallocz00_bglt) COBJECT(BgL_oz00_199))->BgL_typez00);
		}

	}



/* &rtl_valloc-type */
	BgL_typez00_bglt BGl_z62rtl_valloczd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5466, obj_t BgL_oz00_5467)
	{
		{	/* SawMill/defs.sch 703 */
			return
				BGl_rtl_valloczd2typezd2zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5467));
		}

	}



/* rtl_valloc-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_valloczd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt
		BgL_oz00_200, BgL_typez00_bglt BgL_vz00_201)
	{
		{	/* SawMill/defs.sch 704 */
			return
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_oz00_200))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_201), BUNSPEC);
		}

	}



/* &rtl_valloc-type-set! */
	obj_t BGl_z62rtl_valloczd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5468,
		obj_t BgL_oz00_5469, obj_t BgL_vz00_5470)
	{
		{	/* SawMill/defs.sch 704 */
			return
				BGl_rtl_valloczd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5469),
				((BgL_typez00_bglt) BgL_vz00_5470));
		}

	}



/* rtl_valloc-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_valloczd2loczd2zzsaw_defsz00(BgL_rtl_vallocz00_bglt BgL_oz00_202)
	{
		{	/* SawMill/defs.sch 705 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_202)))->BgL_locz00);
		}

	}



/* &rtl_valloc-loc */
	obj_t BGl_z62rtl_valloczd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5471,
		obj_t BgL_oz00_5472)
	{
		{	/* SawMill/defs.sch 705 */
			return
				BGl_rtl_valloczd2loczd2zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5472));
		}

	}



/* rtl_valloc-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_valloczd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vallocz00_bglt
		BgL_oz00_203, obj_t BgL_vz00_204)
	{
		{	/* SawMill/defs.sch 706 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_203)))->BgL_locz00) =
				((obj_t) BgL_vz00_204), BUNSPEC);
		}

	}



/* &rtl_valloc-loc-set! */
	obj_t BGl_z62rtl_valloczd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5473,
		obj_t BgL_oz00_5474, obj_t BgL_vz00_5475)
	{
		{	/* SawMill/defs.sch 706 */
			return
				BGl_rtl_valloczd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vallocz00_bglt) BgL_oz00_5474), BgL_vz00_5475);
		}

	}



/* make-rtl_vref */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt
		BGl_makezd2rtl_vrefzd2zzsaw_defsz00(obj_t BgL_loc1411z00_205,
		BgL_typez00_bglt BgL_type1412z00_206, BgL_typez00_bglt BgL_vtype1413z00_207)
	{
		{	/* SawMill/defs.sch 709 */
			{	/* SawMill/defs.sch 709 */
				BgL_rtl_vrefz00_bglt BgL_new1378z00_6901;

				{	/* SawMill/defs.sch 709 */
					BgL_rtl_vrefz00_bglt BgL_new1377z00_6902;

					BgL_new1377z00_6902 =
						((BgL_rtl_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vrefz00_bgl))));
					{	/* SawMill/defs.sch 709 */
						long BgL_arg1836z00_6903;

						{	/* SawMill/defs.sch 709 */
							long BgL_res2979z00_6904;

							BgL_res2979z00_6904 =
								BGL_CLASS_INDEX(BGl_rtl_vrefz00zzsaw_defsz00);
							BgL_arg1836z00_6903 = BgL_res2979z00_6904;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1377z00_6902), BgL_arg1836z00_6903);
					}
					BgL_new1378z00_6901 = BgL_new1377z00_6902;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1378z00_6901)))->BgL_locz00) =
					((obj_t) BgL_loc1411z00_205), BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1378z00_6901))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1412z00_206), BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1378z00_6901))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype1413z00_207), BUNSPEC);
				return BgL_new1378z00_6901;
			}
		}

	}



/* &make-rtl_vref */
	BgL_rtl_vrefz00_bglt BGl_z62makezd2rtl_vrefzb0zzsaw_defsz00(obj_t
		BgL_envz00_5476, obj_t BgL_loc1411z00_5477, obj_t BgL_type1412z00_5478,
		obj_t BgL_vtype1413z00_5479)
	{
		{	/* SawMill/defs.sch 709 */
			return
				BGl_makezd2rtl_vrefzd2zzsaw_defsz00(BgL_loc1411z00_5477,
				((BgL_typez00_bglt) BgL_type1412z00_5478),
				((BgL_typez00_bglt) BgL_vtype1413z00_5479));
		}

	}



/* rtl_vref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vrefzf3zf3zzsaw_defsz00(obj_t BgL_objz00_208)
	{
		{	/* SawMill/defs.sch 710 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_208,
				BGl_rtl_vrefz00zzsaw_defsz00);
		}

	}



/* &rtl_vref? */
	obj_t BGl_z62rtl_vrefzf3z91zzsaw_defsz00(obj_t BgL_envz00_5480,
		obj_t BgL_objz00_5481)
	{
		{	/* SawMill/defs.sch 710 */
			return BBOOL(BGl_rtl_vrefzf3zf3zzsaw_defsz00(BgL_objz00_5481));
		}

	}



/* rtl_vref-nil */
	BGL_EXPORTED_DEF BgL_rtl_vrefz00_bglt BGl_rtl_vrefzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 711 */
			{	/* SawMill/defs.sch 711 */
				obj_t BgL_classz00_4161;

				BgL_classz00_4161 = BGl_rtl_vrefz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 711 */
					obj_t BgL__ortest_1106z00_4162;

					BgL__ortest_1106z00_4162 = BGL_CLASS_NIL(BgL_classz00_4161);
					if (CBOOL(BgL__ortest_1106z00_4162))
						{	/* SawMill/defs.sch 711 */
							return ((BgL_rtl_vrefz00_bglt) BgL__ortest_1106z00_4162);
						}
					else
						{	/* SawMill/defs.sch 711 */
							return
								((BgL_rtl_vrefz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4161));
						}
				}
			}
		}

	}



/* &rtl_vref-nil */
	BgL_rtl_vrefz00_bglt BGl_z62rtl_vrefzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5482)
	{
		{	/* SawMill/defs.sch 711 */
			return BGl_rtl_vrefzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_vref-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vrefzd2vtypezd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt BgL_oz00_209)
	{
		{	/* SawMill/defs.sch 712 */
			return (((BgL_rtl_vrefz00_bglt) COBJECT(BgL_oz00_209))->BgL_vtypez00);
		}

	}



/* &rtl_vref-vtype */
	BgL_typez00_bglt BGl_z62rtl_vrefzd2vtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5483, obj_t BgL_oz00_5484)
	{
		{	/* SawMill/defs.sch 712 */
			return
				BGl_rtl_vrefzd2vtypezd2zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5484));
		}

	}



/* rtl_vref-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vrefzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt
		BgL_oz00_210, BgL_typez00_bglt BgL_vz00_211)
	{
		{	/* SawMill/defs.sch 713 */
			return
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_oz00_210))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_211), BUNSPEC);
		}

	}



/* &rtl_vref-vtype-set! */
	obj_t BGl_z62rtl_vrefzd2vtypezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5485,
		obj_t BgL_oz00_5486, obj_t BgL_vz00_5487)
	{
		{	/* SawMill/defs.sch 713 */
			return
				BGl_rtl_vrefzd2vtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5486),
				((BgL_typez00_bglt) BgL_vz00_5487));
		}

	}



/* rtl_vref-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vrefzd2typezd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt BgL_oz00_212)
	{
		{	/* SawMill/defs.sch 714 */
			return (((BgL_rtl_vrefz00_bglt) COBJECT(BgL_oz00_212))->BgL_typez00);
		}

	}



/* &rtl_vref-type */
	BgL_typez00_bglt BGl_z62rtl_vrefzd2typezb0zzsaw_defsz00(obj_t BgL_envz00_5488,
		obj_t BgL_oz00_5489)
	{
		{	/* SawMill/defs.sch 714 */
			return
				BGl_rtl_vrefzd2typezd2zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5489));
		}

	}



/* rtl_vref-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vrefzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt
		BgL_oz00_213, BgL_typez00_bglt BgL_vz00_214)
	{
		{	/* SawMill/defs.sch 715 */
			return
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_oz00_213))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_214), BUNSPEC);
		}

	}



/* &rtl_vref-type-set! */
	obj_t BGl_z62rtl_vrefzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5490,
		obj_t BgL_oz00_5491, obj_t BgL_vz00_5492)
	{
		{	/* SawMill/defs.sch 715 */
			return
				BGl_rtl_vrefzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5491),
				((BgL_typez00_bglt) BgL_vz00_5492));
		}

	}



/* rtl_vref-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_vrefzd2loczd2zzsaw_defsz00(BgL_rtl_vrefz00_bglt
		BgL_oz00_215)
	{
		{	/* SawMill/defs.sch 716 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_215)))->BgL_locz00);
		}

	}



/* &rtl_vref-loc */
	obj_t BGl_z62rtl_vrefzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5493,
		obj_t BgL_oz00_5494)
	{
		{	/* SawMill/defs.sch 716 */
			return
				BGl_rtl_vrefzd2loczd2zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5494));
		}

	}



/* rtl_vref-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vrefz00_bglt
		BgL_oz00_216, obj_t BgL_vz00_217)
	{
		{	/* SawMill/defs.sch 717 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_216)))->BgL_locz00) =
				((obj_t) BgL_vz00_217), BUNSPEC);
		}

	}



/* &rtl_vref-loc-set! */
	obj_t BGl_z62rtl_vrefzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5495,
		obj_t BgL_oz00_5496, obj_t BgL_vz00_5497)
	{
		{	/* SawMill/defs.sch 717 */
			return
				BGl_rtl_vrefzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vrefz00_bglt) BgL_oz00_5496), BgL_vz00_5497);
		}

	}



/* make-rtl_vlength */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t BgL_loc1403z00_218,
		BgL_typez00_bglt BgL_type1406z00_219, BgL_typez00_bglt BgL_vtype1407z00_220)
	{
		{	/* SawMill/defs.sch 720 */
			{	/* SawMill/defs.sch 720 */
				BgL_rtl_vlengthz00_bglt BgL_new1380z00_6905;

				{	/* SawMill/defs.sch 720 */
					BgL_rtl_vlengthz00_bglt BgL_new1379z00_6906;

					BgL_new1379z00_6906 =
						((BgL_rtl_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vlengthz00_bgl))));
					{	/* SawMill/defs.sch 720 */
						long BgL_arg1838z00_6907;

						{	/* SawMill/defs.sch 720 */
							long BgL_res2980z00_6908;

							BgL_res2980z00_6908 =
								BGL_CLASS_INDEX(BGl_rtl_vlengthz00zzsaw_defsz00);
							BgL_arg1838z00_6907 = BgL_res2980z00_6908;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1379z00_6906), BgL_arg1838z00_6907);
					}
					BgL_new1380z00_6905 = BgL_new1379z00_6906;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1380z00_6905)))->BgL_locz00) =
					((obj_t) BgL_loc1403z00_218), BUNSPEC);
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1380z00_6905))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1406z00_219), BUNSPEC);
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1380z00_6905))->
						BgL_vtypez00) = ((BgL_typez00_bglt) BgL_vtype1407z00_220), BUNSPEC);
				return BgL_new1380z00_6905;
			}
		}

	}



/* &make-rtl_vlength */
	BgL_rtl_vlengthz00_bglt BGl_z62makezd2rtl_vlengthzb0zzsaw_defsz00(obj_t
		BgL_envz00_5498, obj_t BgL_loc1403z00_5499, obj_t BgL_type1406z00_5500,
		obj_t BgL_vtype1407z00_5501)
	{
		{	/* SawMill/defs.sch 720 */
			return
				BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(BgL_loc1403z00_5499,
				((BgL_typez00_bglt) BgL_type1406z00_5500),
				((BgL_typez00_bglt) BgL_vtype1407z00_5501));
		}

	}



/* rtl_vlength? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vlengthzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_221)
	{
		{	/* SawMill/defs.sch 721 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_221,
				BGl_rtl_vlengthz00zzsaw_defsz00);
		}

	}



/* &rtl_vlength? */
	obj_t BGl_z62rtl_vlengthzf3z91zzsaw_defsz00(obj_t BgL_envz00_5502,
		obj_t BgL_objz00_5503)
	{
		{	/* SawMill/defs.sch 721 */
			return BBOOL(BGl_rtl_vlengthzf3zf3zzsaw_defsz00(BgL_objz00_5503));
		}

	}



/* rtl_vlength-nil */
	BGL_EXPORTED_DEF BgL_rtl_vlengthz00_bglt
		BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 722 */
			{	/* SawMill/defs.sch 722 */
				obj_t BgL_classz00_4170;

				BgL_classz00_4170 = BGl_rtl_vlengthz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 722 */
					obj_t BgL__ortest_1106z00_4171;

					BgL__ortest_1106z00_4171 = BGL_CLASS_NIL(BgL_classz00_4170);
					if (CBOOL(BgL__ortest_1106z00_4171))
						{	/* SawMill/defs.sch 722 */
							return ((BgL_rtl_vlengthz00_bglt) BgL__ortest_1106z00_4171);
						}
					else
						{	/* SawMill/defs.sch 722 */
							return
								((BgL_rtl_vlengthz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4170));
						}
				}
			}
		}

	}



/* &rtl_vlength-nil */
	BgL_rtl_vlengthz00_bglt BGl_z62rtl_vlengthzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5504)
	{
		{	/* SawMill/defs.sch 722 */
			return BGl_rtl_vlengthzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_vlength-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vlengthzd2vtypezd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt
		BgL_oz00_222)
	{
		{	/* SawMill/defs.sch 723 */
			return (((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_oz00_222))->BgL_vtypez00);
		}

	}



/* &rtl_vlength-vtype */
	BgL_typez00_bglt BGl_z62rtl_vlengthzd2vtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5505, obj_t BgL_oz00_5506)
	{
		{	/* SawMill/defs.sch 723 */
			return
				BGl_rtl_vlengthzd2vtypezd2zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5506));
		}

	}



/* rtl_vlength-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vlengthzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt
		BgL_oz00_223, BgL_typez00_bglt BgL_vz00_224)
	{
		{	/* SawMill/defs.sch 724 */
			return
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_oz00_223))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_224), BUNSPEC);
		}

	}



/* &rtl_vlength-vtype-set! */
	obj_t BGl_z62rtl_vlengthzd2vtypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5507, obj_t BgL_oz00_5508, obj_t BgL_vz00_5509)
	{
		{	/* SawMill/defs.sch 724 */
			return
				BGl_rtl_vlengthzd2vtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5508),
				((BgL_typez00_bglt) BgL_vz00_5509));
		}

	}



/* rtl_vlength-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vlengthzd2typezd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt BgL_oz00_225)
	{
		{	/* SawMill/defs.sch 725 */
			return (((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_oz00_225))->BgL_typez00);
		}

	}



/* &rtl_vlength-type */
	BgL_typez00_bglt BGl_z62rtl_vlengthzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5510, obj_t BgL_oz00_5511)
	{
		{	/* SawMill/defs.sch 725 */
			return
				BGl_rtl_vlengthzd2typezd2zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5511));
		}

	}



/* rtl_vlength-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vlengthzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt
		BgL_oz00_226, BgL_typez00_bglt BgL_vz00_227)
	{
		{	/* SawMill/defs.sch 726 */
			return
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_oz00_226))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_227), BUNSPEC);
		}

	}



/* &rtl_vlength-type-set! */
	obj_t BGl_z62rtl_vlengthzd2typezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5512, obj_t BgL_oz00_5513, obj_t BgL_vz00_5514)
	{
		{	/* SawMill/defs.sch 726 */
			return
				BGl_rtl_vlengthzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5513),
				((BgL_typez00_bglt) BgL_vz00_5514));
		}

	}



/* rtl_vlength-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vlengthzd2loczd2zzsaw_defsz00(BgL_rtl_vlengthz00_bglt BgL_oz00_228)
	{
		{	/* SawMill/defs.sch 727 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_228)))->BgL_locz00);
		}

	}



/* &rtl_vlength-loc */
	obj_t BGl_z62rtl_vlengthzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5515,
		obj_t BgL_oz00_5516)
	{
		{	/* SawMill/defs.sch 727 */
			return
				BGl_rtl_vlengthzd2loczd2zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5516));
		}

	}



/* rtl_vlength-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vlengthzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vlengthz00_bglt
		BgL_oz00_229, obj_t BgL_vz00_230)
	{
		{	/* SawMill/defs.sch 728 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_229)))->BgL_locz00) =
				((obj_t) BgL_vz00_230), BUNSPEC);
		}

	}



/* &rtl_vlength-loc-set! */
	obj_t BGl_z62rtl_vlengthzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5517,
		obj_t BgL_oz00_5518, obj_t BgL_vz00_5519)
	{
		{	/* SawMill/defs.sch 728 */
			return
				BGl_rtl_vlengthzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vlengthz00_bglt) BgL_oz00_5518), BgL_vz00_5519);
		}

	}



/* make-rtl_instanceof */
	BGL_EXPORTED_DEF BgL_rtl_instanceofz00_bglt
		BGl_makezd2rtl_instanceofzd2zzsaw_defsz00(obj_t BgL_loc1400z00_231,
		BgL_typez00_bglt BgL_type1401z00_232)
	{
		{	/* SawMill/defs.sch 731 */
			{	/* SawMill/defs.sch 731 */
				BgL_rtl_instanceofz00_bglt BgL_new1382z00_6909;

				{	/* SawMill/defs.sch 731 */
					BgL_rtl_instanceofz00_bglt BgL_new1381z00_6910;

					BgL_new1381z00_6910 =
						((BgL_rtl_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_instanceofz00_bgl))));
					{	/* SawMill/defs.sch 731 */
						long BgL_arg1840z00_6911;

						{	/* SawMill/defs.sch 731 */
							long BgL_res2981z00_6912;

							BgL_res2981z00_6912 =
								BGL_CLASS_INDEX(BGl_rtl_instanceofz00zzsaw_defsz00);
							BgL_arg1840z00_6911 = BgL_res2981z00_6912;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1381z00_6910), BgL_arg1840z00_6911);
					}
					BgL_new1382z00_6909 = BgL_new1381z00_6910;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1382z00_6909)))->BgL_locz00) =
					((obj_t) BgL_loc1400z00_231), BUNSPEC);
				((((BgL_rtl_instanceofz00_bglt) COBJECT(BgL_new1382z00_6909))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1401z00_232), BUNSPEC);
				return BgL_new1382z00_6909;
			}
		}

	}



/* &make-rtl_instanceof */
	BgL_rtl_instanceofz00_bglt BGl_z62makezd2rtl_instanceofzb0zzsaw_defsz00(obj_t
		BgL_envz00_5520, obj_t BgL_loc1400z00_5521, obj_t BgL_type1401z00_5522)
	{
		{	/* SawMill/defs.sch 731 */
			return
				BGl_makezd2rtl_instanceofzd2zzsaw_defsz00(BgL_loc1400z00_5521,
				((BgL_typez00_bglt) BgL_type1401z00_5522));
		}

	}



/* rtl_instanceof? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_instanceofzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_233)
	{
		{	/* SawMill/defs.sch 732 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_233,
				BGl_rtl_instanceofz00zzsaw_defsz00);
		}

	}



/* &rtl_instanceof? */
	obj_t BGl_z62rtl_instanceofzf3z91zzsaw_defsz00(obj_t BgL_envz00_5523,
		obj_t BgL_objz00_5524)
	{
		{	/* SawMill/defs.sch 732 */
			return BBOOL(BGl_rtl_instanceofzf3zf3zzsaw_defsz00(BgL_objz00_5524));
		}

	}



/* rtl_instanceof-nil */
	BGL_EXPORTED_DEF BgL_rtl_instanceofz00_bglt
		BGl_rtl_instanceofzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 733 */
			{	/* SawMill/defs.sch 733 */
				obj_t BgL_classz00_4179;

				BgL_classz00_4179 = BGl_rtl_instanceofz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 733 */
					obj_t BgL__ortest_1106z00_4180;

					BgL__ortest_1106z00_4180 = BGL_CLASS_NIL(BgL_classz00_4179);
					if (CBOOL(BgL__ortest_1106z00_4180))
						{	/* SawMill/defs.sch 733 */
							return ((BgL_rtl_instanceofz00_bglt) BgL__ortest_1106z00_4180);
						}
					else
						{	/* SawMill/defs.sch 733 */
							return
								((BgL_rtl_instanceofz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4179));
						}
				}
			}
		}

	}



/* &rtl_instanceof-nil */
	BgL_rtl_instanceofz00_bglt BGl_z62rtl_instanceofzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5525)
	{
		{	/* SawMill/defs.sch 733 */
			return BGl_rtl_instanceofzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_instanceof-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_instanceofzd2typezd2zzsaw_defsz00(BgL_rtl_instanceofz00_bglt
		BgL_oz00_234)
	{
		{	/* SawMill/defs.sch 734 */
			return
				(((BgL_rtl_instanceofz00_bglt) COBJECT(BgL_oz00_234))->BgL_typez00);
		}

	}



/* &rtl_instanceof-type */
	BgL_typez00_bglt BGl_z62rtl_instanceofzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5526, obj_t BgL_oz00_5527)
	{
		{	/* SawMill/defs.sch 734 */
			return
				BGl_rtl_instanceofzd2typezd2zzsaw_defsz00(
				((BgL_rtl_instanceofz00_bglt) BgL_oz00_5527));
		}

	}



/* rtl_instanceof-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_instanceofzd2typezd2setz12z12zzsaw_defsz00
		(BgL_rtl_instanceofz00_bglt BgL_oz00_235, BgL_typez00_bglt BgL_vz00_236)
	{
		{	/* SawMill/defs.sch 735 */
			return
				((((BgL_rtl_instanceofz00_bglt) COBJECT(BgL_oz00_235))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_236), BUNSPEC);
		}

	}



/* &rtl_instanceof-type-set! */
	obj_t BGl_z62rtl_instanceofzd2typezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5528, obj_t BgL_oz00_5529, obj_t BgL_vz00_5530)
	{
		{	/* SawMill/defs.sch 735 */
			return
				BGl_rtl_instanceofzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_instanceofz00_bglt) BgL_oz00_5529),
				((BgL_typez00_bglt) BgL_vz00_5530));
		}

	}



/* rtl_instanceof-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_instanceofzd2loczd2zzsaw_defsz00(BgL_rtl_instanceofz00_bglt
		BgL_oz00_237)
	{
		{	/* SawMill/defs.sch 736 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_237)))->BgL_locz00);
		}

	}



/* &rtl_instanceof-loc */
	obj_t BGl_z62rtl_instanceofzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5531,
		obj_t BgL_oz00_5532)
	{
		{	/* SawMill/defs.sch 736 */
			return
				BGl_rtl_instanceofzd2loczd2zzsaw_defsz00(
				((BgL_rtl_instanceofz00_bglt) BgL_oz00_5532));
		}

	}



/* rtl_instanceof-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_instanceofzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_instanceofz00_bglt
		BgL_oz00_238, obj_t BgL_vz00_239)
	{
		{	/* SawMill/defs.sch 737 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_238)))->BgL_locz00) =
				((obj_t) BgL_vz00_239), BUNSPEC);
		}

	}



/* &rtl_instanceof-loc-set! */
	obj_t BGl_z62rtl_instanceofzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5533, obj_t BgL_oz00_5534, obj_t BgL_vz00_5535)
	{
		{	/* SawMill/defs.sch 737 */
			return
				BGl_rtl_instanceofzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_instanceofz00_bglt) BgL_oz00_5534), BgL_vz00_5535);
		}

	}



/* make-rtl_makebox */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t BgL_loc1398z00_240)
	{
		{	/* SawMill/defs.sch 740 */
			{	/* SawMill/defs.sch 740 */
				BgL_rtl_makeboxz00_bglt BgL_new1384z00_6913;

				{	/* SawMill/defs.sch 740 */
					BgL_rtl_makeboxz00_bglt BgL_new1383z00_6914;

					BgL_new1383z00_6914 =
						((BgL_rtl_makeboxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_makeboxz00_bgl))));
					{	/* SawMill/defs.sch 740 */
						long BgL_arg1841z00_6915;

						{	/* SawMill/defs.sch 740 */
							long BgL_res2982z00_6916;

							BgL_res2982z00_6916 =
								BGL_CLASS_INDEX(BGl_rtl_makeboxz00zzsaw_defsz00);
							BgL_arg1841z00_6915 = BgL_res2982z00_6916;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1383z00_6914), BgL_arg1841z00_6915);
					}
					BgL_new1384z00_6913 = BgL_new1383z00_6914;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1384z00_6913)))->BgL_locz00) =
					((obj_t) BgL_loc1398z00_240), BUNSPEC);
				return BgL_new1384z00_6913;
			}
		}

	}



/* &make-rtl_makebox */
	BgL_rtl_makeboxz00_bglt BGl_z62makezd2rtl_makeboxzb0zzsaw_defsz00(obj_t
		BgL_envz00_5536, obj_t BgL_loc1398z00_5537)
	{
		{	/* SawMill/defs.sch 740 */
			return BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(BgL_loc1398z00_5537);
		}

	}



/* rtl_makebox? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_makeboxzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_241)
	{
		{	/* SawMill/defs.sch 741 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_241,
				BGl_rtl_makeboxz00zzsaw_defsz00);
		}

	}



/* &rtl_makebox? */
	obj_t BGl_z62rtl_makeboxzf3z91zzsaw_defsz00(obj_t BgL_envz00_5538,
		obj_t BgL_objz00_5539)
	{
		{	/* SawMill/defs.sch 741 */
			return BBOOL(BGl_rtl_makeboxzf3zf3zzsaw_defsz00(BgL_objz00_5539));
		}

	}



/* rtl_makebox-nil */
	BGL_EXPORTED_DEF BgL_rtl_makeboxz00_bglt
		BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 742 */
			{	/* SawMill/defs.sch 742 */
				obj_t BgL_classz00_4188;

				BgL_classz00_4188 = BGl_rtl_makeboxz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 742 */
					obj_t BgL__ortest_1106z00_4189;

					BgL__ortest_1106z00_4189 = BGL_CLASS_NIL(BgL_classz00_4188);
					if (CBOOL(BgL__ortest_1106z00_4189))
						{	/* SawMill/defs.sch 742 */
							return ((BgL_rtl_makeboxz00_bglt) BgL__ortest_1106z00_4189);
						}
					else
						{	/* SawMill/defs.sch 742 */
							return
								((BgL_rtl_makeboxz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4188));
						}
				}
			}
		}

	}



/* &rtl_makebox-nil */
	BgL_rtl_makeboxz00_bglt BGl_z62rtl_makeboxzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5540)
	{
		{	/* SawMill/defs.sch 742 */
			return BGl_rtl_makeboxzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_makebox-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_makeboxzd2loczd2zzsaw_defsz00(BgL_rtl_makeboxz00_bglt BgL_oz00_242)
	{
		{	/* SawMill/defs.sch 743 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_242)))->BgL_locz00);
		}

	}



/* &rtl_makebox-loc */
	obj_t BGl_z62rtl_makeboxzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5541,
		obj_t BgL_oz00_5542)
	{
		{	/* SawMill/defs.sch 743 */
			return
				BGl_rtl_makeboxzd2loczd2zzsaw_defsz00(
				((BgL_rtl_makeboxz00_bglt) BgL_oz00_5542));
		}

	}



/* rtl_makebox-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_makeboxzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_makeboxz00_bglt
		BgL_oz00_243, obj_t BgL_vz00_244)
	{
		{	/* SawMill/defs.sch 744 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_243)))->BgL_locz00) =
				((obj_t) BgL_vz00_244), BUNSPEC);
		}

	}



/* &rtl_makebox-loc-set! */
	obj_t BGl_z62rtl_makeboxzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5543,
		obj_t BgL_oz00_5544, obj_t BgL_vz00_5545)
	{
		{	/* SawMill/defs.sch 744 */
			return
				BGl_rtl_makeboxzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_makeboxz00_bglt) BgL_oz00_5544), BgL_vz00_5545);
		}

	}



/* make-rtl_boxref */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt
		BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t BgL_loc1396z00_245)
	{
		{	/* SawMill/defs.sch 747 */
			{	/* SawMill/defs.sch 747 */
				BgL_rtl_boxrefz00_bglt BgL_new1386z00_6917;

				{	/* SawMill/defs.sch 747 */
					BgL_rtl_boxrefz00_bglt BgL_new1385z00_6918;

					BgL_new1385z00_6918 =
						((BgL_rtl_boxrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_boxrefz00_bgl))));
					{	/* SawMill/defs.sch 747 */
						long BgL_arg1842z00_6919;

						{	/* SawMill/defs.sch 747 */
							long BgL_res2983z00_6920;

							BgL_res2983z00_6920 =
								BGL_CLASS_INDEX(BGl_rtl_boxrefz00zzsaw_defsz00);
							BgL_arg1842z00_6919 = BgL_res2983z00_6920;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1385z00_6918), BgL_arg1842z00_6919);
					}
					BgL_new1386z00_6917 = BgL_new1385z00_6918;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1386z00_6917)))->BgL_locz00) =
					((obj_t) BgL_loc1396z00_245), BUNSPEC);
				return BgL_new1386z00_6917;
			}
		}

	}



/* &make-rtl_boxref */
	BgL_rtl_boxrefz00_bglt BGl_z62makezd2rtl_boxrefzb0zzsaw_defsz00(obj_t
		BgL_envz00_5546, obj_t BgL_loc1396z00_5547)
	{
		{	/* SawMill/defs.sch 747 */
			return BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(BgL_loc1396z00_5547);
		}

	}



/* rtl_boxref? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_boxrefzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_246)
	{
		{	/* SawMill/defs.sch 748 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_246,
				BGl_rtl_boxrefz00zzsaw_defsz00);
		}

	}



/* &rtl_boxref? */
	obj_t BGl_z62rtl_boxrefzf3z91zzsaw_defsz00(obj_t BgL_envz00_5548,
		obj_t BgL_objz00_5549)
	{
		{	/* SawMill/defs.sch 748 */
			return BBOOL(BGl_rtl_boxrefzf3zf3zzsaw_defsz00(BgL_objz00_5549));
		}

	}



/* rtl_boxref-nil */
	BGL_EXPORTED_DEF BgL_rtl_boxrefz00_bglt BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 749 */
			{	/* SawMill/defs.sch 749 */
				obj_t BgL_classz00_4197;

				BgL_classz00_4197 = BGl_rtl_boxrefz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 749 */
					obj_t BgL__ortest_1106z00_4198;

					BgL__ortest_1106z00_4198 = BGL_CLASS_NIL(BgL_classz00_4197);
					if (CBOOL(BgL__ortest_1106z00_4198))
						{	/* SawMill/defs.sch 749 */
							return ((BgL_rtl_boxrefz00_bglt) BgL__ortest_1106z00_4198);
						}
					else
						{	/* SawMill/defs.sch 749 */
							return
								((BgL_rtl_boxrefz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4197));
						}
				}
			}
		}

	}



/* &rtl_boxref-nil */
	BgL_rtl_boxrefz00_bglt BGl_z62rtl_boxrefzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5550)
	{
		{	/* SawMill/defs.sch 749 */
			return BGl_rtl_boxrefzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_boxref-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_boxrefzd2loczd2zzsaw_defsz00(BgL_rtl_boxrefz00_bglt BgL_oz00_247)
	{
		{	/* SawMill/defs.sch 750 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_247)))->BgL_locz00);
		}

	}



/* &rtl_boxref-loc */
	obj_t BGl_z62rtl_boxrefzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5551,
		obj_t BgL_oz00_5552)
	{
		{	/* SawMill/defs.sch 750 */
			return
				BGl_rtl_boxrefzd2loczd2zzsaw_defsz00(
				((BgL_rtl_boxrefz00_bglt) BgL_oz00_5552));
		}

	}



/* rtl_boxref-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_boxrefzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_boxrefz00_bglt
		BgL_oz00_248, obj_t BgL_vz00_249)
	{
		{	/* SawMill/defs.sch 751 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_248)))->BgL_locz00) =
				((obj_t) BgL_vz00_249), BUNSPEC);
		}

	}



/* &rtl_boxref-loc-set! */
	obj_t BGl_z62rtl_boxrefzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5553,
		obj_t BgL_oz00_5554, obj_t BgL_vz00_5555)
	{
		{	/* SawMill/defs.sch 751 */
			return
				BGl_rtl_boxrefzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_boxrefz00_bglt) BgL_oz00_5554), BgL_vz00_5555);
		}

	}



/* make-rtl_effect */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt
		BGl_makezd2rtl_effectzd2zzsaw_defsz00(obj_t BgL_loc1394z00_250)
	{
		{	/* SawMill/defs.sch 754 */
			{	/* SawMill/defs.sch 754 */
				BgL_rtl_effectz00_bglt BgL_new1388z00_6921;

				{	/* SawMill/defs.sch 754 */
					BgL_rtl_effectz00_bglt BgL_new1387z00_6922;

					BgL_new1387z00_6922 =
						((BgL_rtl_effectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_effectz00_bgl))));
					{	/* SawMill/defs.sch 754 */
						long BgL_arg1845z00_6923;

						{	/* SawMill/defs.sch 754 */
							long BgL_res2984z00_6924;

							BgL_res2984z00_6924 =
								BGL_CLASS_INDEX(BGl_rtl_effectz00zzsaw_defsz00);
							BgL_arg1845z00_6923 = BgL_res2984z00_6924;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1387z00_6922), BgL_arg1845z00_6923);
					}
					BgL_new1388z00_6921 = BgL_new1387z00_6922;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1388z00_6921)))->BgL_locz00) =
					((obj_t) BgL_loc1394z00_250), BUNSPEC);
				return BgL_new1388z00_6921;
			}
		}

	}



/* &make-rtl_effect */
	BgL_rtl_effectz00_bglt BGl_z62makezd2rtl_effectzb0zzsaw_defsz00(obj_t
		BgL_envz00_5556, obj_t BgL_loc1394z00_5557)
	{
		{	/* SawMill/defs.sch 754 */
			return BGl_makezd2rtl_effectzd2zzsaw_defsz00(BgL_loc1394z00_5557);
		}

	}



/* rtl_effect? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_effectzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_251)
	{
		{	/* SawMill/defs.sch 755 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_251,
				BGl_rtl_effectz00zzsaw_defsz00);
		}

	}



/* &rtl_effect? */
	obj_t BGl_z62rtl_effectzf3z91zzsaw_defsz00(obj_t BgL_envz00_5558,
		obj_t BgL_objz00_5559)
	{
		{	/* SawMill/defs.sch 755 */
			return BBOOL(BGl_rtl_effectzf3zf3zzsaw_defsz00(BgL_objz00_5559));
		}

	}



/* rtl_effect-nil */
	BGL_EXPORTED_DEF BgL_rtl_effectz00_bglt BGl_rtl_effectzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 756 */
			{	/* SawMill/defs.sch 756 */
				obj_t BgL_classz00_4206;

				BgL_classz00_4206 = BGl_rtl_effectz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 756 */
					obj_t BgL__ortest_1106z00_4207;

					BgL__ortest_1106z00_4207 = BGL_CLASS_NIL(BgL_classz00_4206);
					if (CBOOL(BgL__ortest_1106z00_4207))
						{	/* SawMill/defs.sch 756 */
							return ((BgL_rtl_effectz00_bglt) BgL__ortest_1106z00_4207);
						}
					else
						{	/* SawMill/defs.sch 756 */
							return
								((BgL_rtl_effectz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4206));
						}
				}
			}
		}

	}



/* &rtl_effect-nil */
	BgL_rtl_effectz00_bglt BGl_z62rtl_effectzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5560)
	{
		{	/* SawMill/defs.sch 756 */
			return BGl_rtl_effectzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_effect-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_effectzd2loczd2zzsaw_defsz00(BgL_rtl_effectz00_bglt BgL_oz00_252)
	{
		{	/* SawMill/defs.sch 757 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_252)))->BgL_locz00);
		}

	}



/* &rtl_effect-loc */
	obj_t BGl_z62rtl_effectzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5561,
		obj_t BgL_oz00_5562)
	{
		{	/* SawMill/defs.sch 757 */
			return
				BGl_rtl_effectzd2loczd2zzsaw_defsz00(
				((BgL_rtl_effectz00_bglt) BgL_oz00_5562));
		}

	}



/* rtl_effect-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_effectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_effectz00_bglt
		BgL_oz00_253, obj_t BgL_vz00_254)
	{
		{	/* SawMill/defs.sch 758 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_253)))->BgL_locz00) =
				((obj_t) BgL_vz00_254), BUNSPEC);
		}

	}



/* &rtl_effect-loc-set! */
	obj_t BGl_z62rtl_effectzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5563,
		obj_t BgL_oz00_5564, obj_t BgL_vz00_5565)
	{
		{	/* SawMill/defs.sch 758 */
			return
				BGl_rtl_effectzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_effectz00_bglt) BgL_oz00_5564), BgL_vz00_5565);
		}

	}



/* make-rtl_storeg */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt
		BGl_makezd2rtl_storegzd2zzsaw_defsz00(obj_t BgL_loc1391z00_255,
		BgL_globalz00_bglt BgL_var1392z00_256)
	{
		{	/* SawMill/defs.sch 761 */
			{	/* SawMill/defs.sch 761 */
				BgL_rtl_storegz00_bglt BgL_new1390z00_6925;

				{	/* SawMill/defs.sch 761 */
					BgL_rtl_storegz00_bglt BgL_new1389z00_6926;

					BgL_new1389z00_6926 =
						((BgL_rtl_storegz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_storegz00_bgl))));
					{	/* SawMill/defs.sch 761 */
						long BgL_arg1846z00_6927;

						{	/* SawMill/defs.sch 761 */
							long BgL_res2985z00_6928;

							BgL_res2985z00_6928 =
								BGL_CLASS_INDEX(BGl_rtl_storegz00zzsaw_defsz00);
							BgL_arg1846z00_6927 = BgL_res2985z00_6928;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1389z00_6926), BgL_arg1846z00_6927);
					}
					BgL_new1390z00_6925 = BgL_new1389z00_6926;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1390z00_6925)))->BgL_locz00) =
					((obj_t) BgL_loc1391z00_255), BUNSPEC);
				((((BgL_rtl_storegz00_bglt) COBJECT(BgL_new1390z00_6925))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var1392z00_256), BUNSPEC);
				return BgL_new1390z00_6925;
			}
		}

	}



/* &make-rtl_storeg */
	BgL_rtl_storegz00_bglt BGl_z62makezd2rtl_storegzb0zzsaw_defsz00(obj_t
		BgL_envz00_5566, obj_t BgL_loc1391z00_5567, obj_t BgL_var1392z00_5568)
	{
		{	/* SawMill/defs.sch 761 */
			return
				BGl_makezd2rtl_storegzd2zzsaw_defsz00(BgL_loc1391z00_5567,
				((BgL_globalz00_bglt) BgL_var1392z00_5568));
		}

	}



/* rtl_storeg? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_storegzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_257)
	{
		{	/* SawMill/defs.sch 762 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_257,
				BGl_rtl_storegz00zzsaw_defsz00);
		}

	}



/* &rtl_storeg? */
	obj_t BGl_z62rtl_storegzf3z91zzsaw_defsz00(obj_t BgL_envz00_5569,
		obj_t BgL_objz00_5570)
	{
		{	/* SawMill/defs.sch 762 */
			return BBOOL(BGl_rtl_storegzf3zf3zzsaw_defsz00(BgL_objz00_5570));
		}

	}



/* rtl_storeg-nil */
	BGL_EXPORTED_DEF BgL_rtl_storegz00_bglt BGl_rtl_storegzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 763 */
			{	/* SawMill/defs.sch 763 */
				obj_t BgL_classz00_4215;

				BgL_classz00_4215 = BGl_rtl_storegz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 763 */
					obj_t BgL__ortest_1106z00_4216;

					BgL__ortest_1106z00_4216 = BGL_CLASS_NIL(BgL_classz00_4215);
					if (CBOOL(BgL__ortest_1106z00_4216))
						{	/* SawMill/defs.sch 763 */
							return ((BgL_rtl_storegz00_bglt) BgL__ortest_1106z00_4216);
						}
					else
						{	/* SawMill/defs.sch 763 */
							return
								((BgL_rtl_storegz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4215));
						}
				}
			}
		}

	}



/* &rtl_storeg-nil */
	BgL_rtl_storegz00_bglt BGl_z62rtl_storegzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5571)
	{
		{	/* SawMill/defs.sch 763 */
			return BGl_rtl_storegzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_storeg-var */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_rtl_storegzd2varzd2zzsaw_defsz00(BgL_rtl_storegz00_bglt BgL_oz00_258)
	{
		{	/* SawMill/defs.sch 764 */
			return (((BgL_rtl_storegz00_bglt) COBJECT(BgL_oz00_258))->BgL_varz00);
		}

	}



/* &rtl_storeg-var */
	BgL_globalz00_bglt BGl_z62rtl_storegzd2varzb0zzsaw_defsz00(obj_t
		BgL_envz00_5572, obj_t BgL_oz00_5573)
	{
		{	/* SawMill/defs.sch 764 */
			return
				BGl_rtl_storegzd2varzd2zzsaw_defsz00(
				((BgL_rtl_storegz00_bglt) BgL_oz00_5573));
		}

	}



/* rtl_storeg-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_storegzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_storegz00_bglt
		BgL_oz00_259, BgL_globalz00_bglt BgL_vz00_260)
	{
		{	/* SawMill/defs.sch 765 */
			return
				((((BgL_rtl_storegz00_bglt) COBJECT(BgL_oz00_259))->BgL_varz00) =
				((BgL_globalz00_bglt) BgL_vz00_260), BUNSPEC);
		}

	}



/* &rtl_storeg-var-set! */
	obj_t BGl_z62rtl_storegzd2varzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5574,
		obj_t BgL_oz00_5575, obj_t BgL_vz00_5576)
	{
		{	/* SawMill/defs.sch 765 */
			return
				BGl_rtl_storegzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_storegz00_bglt) BgL_oz00_5575),
				((BgL_globalz00_bglt) BgL_vz00_5576));
		}

	}



/* rtl_storeg-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_storegzd2loczd2zzsaw_defsz00(BgL_rtl_storegz00_bglt BgL_oz00_261)
	{
		{	/* SawMill/defs.sch 766 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_261)))->BgL_locz00);
		}

	}



/* &rtl_storeg-loc */
	obj_t BGl_z62rtl_storegzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5577,
		obj_t BgL_oz00_5578)
	{
		{	/* SawMill/defs.sch 766 */
			return
				BGl_rtl_storegzd2loczd2zzsaw_defsz00(
				((BgL_rtl_storegz00_bglt) BgL_oz00_5578));
		}

	}



/* rtl_storeg-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_storegzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_storegz00_bglt
		BgL_oz00_262, obj_t BgL_vz00_263)
	{
		{	/* SawMill/defs.sch 767 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_262)))->BgL_locz00) =
				((obj_t) BgL_vz00_263), BUNSPEC);
		}

	}



/* &rtl_storeg-loc-set! */
	obj_t BGl_z62rtl_storegzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5579,
		obj_t BgL_oz00_5580, obj_t BgL_vz00_5581)
	{
		{	/* SawMill/defs.sch 767 */
			return
				BGl_rtl_storegzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_storegz00_bglt) BgL_oz00_5580), BgL_vz00_5581);
		}

	}



/* make-rtl_setfield */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t BgL_loc1386z00_264,
		obj_t BgL_name1387z00_265, BgL_typez00_bglt BgL_objtype1388z00_266,
		BgL_typez00_bglt BgL_type1389z00_267)
	{
		{	/* SawMill/defs.sch 770 */
			{	/* SawMill/defs.sch 770 */
				BgL_rtl_setfieldz00_bglt BgL_new1392z00_6929;

				{	/* SawMill/defs.sch 770 */
					BgL_rtl_setfieldz00_bglt BgL_new1391z00_6930;

					BgL_new1391z00_6930 =
						((BgL_rtl_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_setfieldz00_bgl))));
					{	/* SawMill/defs.sch 770 */
						long BgL_arg1847z00_6931;

						{	/* SawMill/defs.sch 770 */
							long BgL_res2986z00_6932;

							BgL_res2986z00_6932 =
								BGL_CLASS_INDEX(BGl_rtl_setfieldz00zzsaw_defsz00);
							BgL_arg1847z00_6931 = BgL_res2986z00_6932;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1391z00_6930), BgL_arg1847z00_6931);
					}
					BgL_new1392z00_6929 = BgL_new1391z00_6930;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1392z00_6929)))->BgL_locz00) =
					((obj_t) BgL_loc1386z00_264), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1392z00_6929))->
						BgL_namez00) = ((obj_t) BgL_name1387z00_265), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1392z00_6929))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) BgL_objtype1388z00_266), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1392z00_6929))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1389z00_267), BUNSPEC);
				return BgL_new1392z00_6929;
			}
		}

	}



/* &make-rtl_setfield */
	BgL_rtl_setfieldz00_bglt BGl_z62makezd2rtl_setfieldzb0zzsaw_defsz00(obj_t
		BgL_envz00_5582, obj_t BgL_loc1386z00_5583, obj_t BgL_name1387z00_5584,
		obj_t BgL_objtype1388z00_5585, obj_t BgL_type1389z00_5586)
	{
		{	/* SawMill/defs.sch 770 */
			return
				BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(BgL_loc1386z00_5583,
				BgL_name1387z00_5584, ((BgL_typez00_bglt) BgL_objtype1388z00_5585),
				((BgL_typez00_bglt) BgL_type1389z00_5586));
		}

	}



/* rtl_setfield? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_setfieldzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_268)
	{
		{	/* SawMill/defs.sch 771 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_268,
				BGl_rtl_setfieldz00zzsaw_defsz00);
		}

	}



/* &rtl_setfield? */
	obj_t BGl_z62rtl_setfieldzf3z91zzsaw_defsz00(obj_t BgL_envz00_5587,
		obj_t BgL_objz00_5588)
	{
		{	/* SawMill/defs.sch 771 */
			return BBOOL(BGl_rtl_setfieldzf3zf3zzsaw_defsz00(BgL_objz00_5588));
		}

	}



/* rtl_setfield-nil */
	BGL_EXPORTED_DEF BgL_rtl_setfieldz00_bglt
		BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 772 */
			{	/* SawMill/defs.sch 772 */
				obj_t BgL_classz00_4224;

				BgL_classz00_4224 = BGl_rtl_setfieldz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 772 */
					obj_t BgL__ortest_1106z00_4225;

					BgL__ortest_1106z00_4225 = BGL_CLASS_NIL(BgL_classz00_4224);
					if (CBOOL(BgL__ortest_1106z00_4225))
						{	/* SawMill/defs.sch 772 */
							return ((BgL_rtl_setfieldz00_bglt) BgL__ortest_1106z00_4225);
						}
					else
						{	/* SawMill/defs.sch 772 */
							return
								((BgL_rtl_setfieldz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4224));
						}
				}
			}
		}

	}



/* &rtl_setfield-nil */
	BgL_rtl_setfieldz00_bglt BGl_z62rtl_setfieldzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5589)
	{
		{	/* SawMill/defs.sch 772 */
			return BGl_rtl_setfieldzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_setfield-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_setfieldzd2typezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_269)
	{
		{	/* SawMill/defs.sch 773 */
			return (((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_269))->BgL_typez00);
		}

	}



/* &rtl_setfield-type */
	BgL_typez00_bglt BGl_z62rtl_setfieldzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5590, obj_t BgL_oz00_5591)
	{
		{	/* SawMill/defs.sch 773 */
			return
				BGl_rtl_setfieldzd2typezd2zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5591));
		}

	}



/* rtl_setfield-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_270, BgL_typez00_bglt BgL_vz00_271)
	{
		{	/* SawMill/defs.sch 774 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_270))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_271), BUNSPEC);
		}

	}



/* &rtl_setfield-type-set! */
	obj_t BGl_z62rtl_setfieldzd2typezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5592, obj_t BgL_oz00_5593, obj_t BgL_vz00_5594)
	{
		{	/* SawMill/defs.sch 774 */
			return
				BGl_rtl_setfieldzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5593),
				((BgL_typez00_bglt) BgL_vz00_5594));
		}

	}



/* rtl_setfield-objtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_setfieldzd2objtypezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_272)
	{
		{	/* SawMill/defs.sch 775 */
			return
				(((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_272))->BgL_objtypez00);
		}

	}



/* &rtl_setfield-objtype */
	BgL_typez00_bglt BGl_z62rtl_setfieldzd2objtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5595, obj_t BgL_oz00_5596)
	{
		{	/* SawMill/defs.sch 775 */
			return
				BGl_rtl_setfieldzd2objtypezd2zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5596));
		}

	}



/* rtl_setfield-objtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2objtypezd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_273, BgL_typez00_bglt BgL_vz00_274)
	{
		{	/* SawMill/defs.sch 776 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_273))->BgL_objtypez00) =
				((BgL_typez00_bglt) BgL_vz00_274), BUNSPEC);
		}

	}



/* &rtl_setfield-objtype-set! */
	obj_t BGl_z62rtl_setfieldzd2objtypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5597, obj_t BgL_oz00_5598, obj_t BgL_vz00_5599)
	{
		{	/* SawMill/defs.sch 776 */
			return
				BGl_rtl_setfieldzd2objtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5598),
				((BgL_typez00_bglt) BgL_vz00_5599));
		}

	}



/* rtl_setfield-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2namezd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_275)
	{
		{	/* SawMill/defs.sch 777 */
			return (((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_275))->BgL_namez00);
		}

	}



/* &rtl_setfield-name */
	obj_t BGl_z62rtl_setfieldzd2namezb0zzsaw_defsz00(obj_t BgL_envz00_5600,
		obj_t BgL_oz00_5601)
	{
		{	/* SawMill/defs.sch 777 */
			return
				BGl_rtl_setfieldzd2namezd2zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5601));
		}

	}



/* rtl_setfield-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2namezd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_276, obj_t BgL_vz00_277)
	{
		{	/* SawMill/defs.sch 778 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_oz00_276))->BgL_namez00) =
				((obj_t) BgL_vz00_277), BUNSPEC);
		}

	}



/* &rtl_setfield-name-set! */
	obj_t BGl_z62rtl_setfieldzd2namezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5602, obj_t BgL_oz00_5603, obj_t BgL_vz00_5604)
	{
		{	/* SawMill/defs.sch 778 */
			return
				BGl_rtl_setfieldzd2namezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5603), BgL_vz00_5604);
		}

	}



/* rtl_setfield-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2loczd2zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_278)
	{
		{	/* SawMill/defs.sch 779 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_278)))->BgL_locz00);
		}

	}



/* &rtl_setfield-loc */
	obj_t BGl_z62rtl_setfieldzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5605,
		obj_t BgL_oz00_5606)
	{
		{	/* SawMill/defs.sch 779 */
			return
				BGl_rtl_setfieldzd2loczd2zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5606));
		}

	}



/* rtl_setfield-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_setfieldzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_setfieldz00_bglt
		BgL_oz00_279, obj_t BgL_vz00_280)
	{
		{	/* SawMill/defs.sch 780 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_279)))->BgL_locz00) =
				((obj_t) BgL_vz00_280), BUNSPEC);
		}

	}



/* &rtl_setfield-loc-set! */
	obj_t BGl_z62rtl_setfieldzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5607, obj_t BgL_oz00_5608, obj_t BgL_vz00_5609)
	{
		{	/* SawMill/defs.sch 780 */
			return
				BGl_rtl_setfieldzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_setfieldz00_bglt) BgL_oz00_5608), BgL_vz00_5609);
		}

	}



/* make-rtl_vset */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt
		BGl_makezd2rtl_vsetzd2zzsaw_defsz00(obj_t BgL_loc1381z00_281,
		BgL_typez00_bglt BgL_type1382z00_282, BgL_typez00_bglt BgL_vtype1383z00_283)
	{
		{	/* SawMill/defs.sch 783 */
			{	/* SawMill/defs.sch 783 */
				BgL_rtl_vsetz00_bglt BgL_new1394z00_6933;

				{	/* SawMill/defs.sch 783 */
					BgL_rtl_vsetz00_bglt BgL_new1393z00_6934;

					BgL_new1393z00_6934 =
						((BgL_rtl_vsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vsetz00_bgl))));
					{	/* SawMill/defs.sch 783 */
						long BgL_arg1848z00_6935;

						{	/* SawMill/defs.sch 783 */
							long BgL_res2987z00_6936;

							BgL_res2987z00_6936 =
								BGL_CLASS_INDEX(BGl_rtl_vsetz00zzsaw_defsz00);
							BgL_arg1848z00_6935 = BgL_res2987z00_6936;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1393z00_6934), BgL_arg1848z00_6935);
					}
					BgL_new1394z00_6933 = BgL_new1393z00_6934;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1394z00_6933)))->BgL_locz00) =
					((obj_t) BgL_loc1381z00_281), BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1394z00_6933))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1382z00_282), BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1394z00_6933))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype1383z00_283), BUNSPEC);
				return BgL_new1394z00_6933;
			}
		}

	}



/* &make-rtl_vset */
	BgL_rtl_vsetz00_bglt BGl_z62makezd2rtl_vsetzb0zzsaw_defsz00(obj_t
		BgL_envz00_5610, obj_t BgL_loc1381z00_5611, obj_t BgL_type1382z00_5612,
		obj_t BgL_vtype1383z00_5613)
	{
		{	/* SawMill/defs.sch 783 */
			return
				BGl_makezd2rtl_vsetzd2zzsaw_defsz00(BgL_loc1381z00_5611,
				((BgL_typez00_bglt) BgL_type1382z00_5612),
				((BgL_typez00_bglt) BgL_vtype1383z00_5613));
		}

	}



/* rtl_vset? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_vsetzf3zf3zzsaw_defsz00(obj_t BgL_objz00_284)
	{
		{	/* SawMill/defs.sch 784 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_284,
				BGl_rtl_vsetz00zzsaw_defsz00);
		}

	}



/* &rtl_vset? */
	obj_t BGl_z62rtl_vsetzf3z91zzsaw_defsz00(obj_t BgL_envz00_5614,
		obj_t BgL_objz00_5615)
	{
		{	/* SawMill/defs.sch 784 */
			return BBOOL(BGl_rtl_vsetzf3zf3zzsaw_defsz00(BgL_objz00_5615));
		}

	}



/* rtl_vset-nil */
	BGL_EXPORTED_DEF BgL_rtl_vsetz00_bglt BGl_rtl_vsetzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 785 */
			{	/* SawMill/defs.sch 785 */
				obj_t BgL_classz00_4233;

				BgL_classz00_4233 = BGl_rtl_vsetz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 785 */
					obj_t BgL__ortest_1106z00_4234;

					BgL__ortest_1106z00_4234 = BGL_CLASS_NIL(BgL_classz00_4233);
					if (CBOOL(BgL__ortest_1106z00_4234))
						{	/* SawMill/defs.sch 785 */
							return ((BgL_rtl_vsetz00_bglt) BgL__ortest_1106z00_4234);
						}
					else
						{	/* SawMill/defs.sch 785 */
							return
								((BgL_rtl_vsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4233));
						}
				}
			}
		}

	}



/* &rtl_vset-nil */
	BgL_rtl_vsetz00_bglt BGl_z62rtl_vsetzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5616)
	{
		{	/* SawMill/defs.sch 785 */
			return BGl_rtl_vsetzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_vset-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vsetzd2vtypezd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt BgL_oz00_285)
	{
		{	/* SawMill/defs.sch 786 */
			return (((BgL_rtl_vsetz00_bglt) COBJECT(BgL_oz00_285))->BgL_vtypez00);
		}

	}



/* &rtl_vset-vtype */
	BgL_typez00_bglt BGl_z62rtl_vsetzd2vtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5617, obj_t BgL_oz00_5618)
	{
		{	/* SawMill/defs.sch 786 */
			return
				BGl_rtl_vsetzd2vtypezd2zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5618));
		}

	}



/* rtl_vset-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vsetzd2vtypezd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt
		BgL_oz00_286, BgL_typez00_bglt BgL_vz00_287)
	{
		{	/* SawMill/defs.sch 787 */
			return
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_oz00_286))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_287), BUNSPEC);
		}

	}



/* &rtl_vset-vtype-set! */
	obj_t BGl_z62rtl_vsetzd2vtypezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5619,
		obj_t BgL_oz00_5620, obj_t BgL_vz00_5621)
	{
		{	/* SawMill/defs.sch 787 */
			return
				BGl_rtl_vsetzd2vtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5620),
				((BgL_typez00_bglt) BgL_vz00_5621));
		}

	}



/* rtl_vset-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_vsetzd2typezd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt BgL_oz00_288)
	{
		{	/* SawMill/defs.sch 788 */
			return (((BgL_rtl_vsetz00_bglt) COBJECT(BgL_oz00_288))->BgL_typez00);
		}

	}



/* &rtl_vset-type */
	BgL_typez00_bglt BGl_z62rtl_vsetzd2typezb0zzsaw_defsz00(obj_t BgL_envz00_5622,
		obj_t BgL_oz00_5623)
	{
		{	/* SawMill/defs.sch 788 */
			return
				BGl_rtl_vsetzd2typezd2zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5623));
		}

	}



/* rtl_vset-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vsetzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt
		BgL_oz00_289, BgL_typez00_bglt BgL_vz00_290)
	{
		{	/* SawMill/defs.sch 789 */
			return
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_oz00_289))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_290), BUNSPEC);
		}

	}



/* &rtl_vset-type-set! */
	obj_t BGl_z62rtl_vsetzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5624,
		obj_t BgL_oz00_5625, obj_t BgL_vz00_5626)
	{
		{	/* SawMill/defs.sch 789 */
			return
				BGl_rtl_vsetzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5625),
				((BgL_typez00_bglt) BgL_vz00_5626));
		}

	}



/* rtl_vset-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_vsetzd2loczd2zzsaw_defsz00(BgL_rtl_vsetz00_bglt
		BgL_oz00_291)
	{
		{	/* SawMill/defs.sch 790 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_291)))->BgL_locz00);
		}

	}



/* &rtl_vset-loc */
	obj_t BGl_z62rtl_vsetzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5627,
		obj_t BgL_oz00_5628)
	{
		{	/* SawMill/defs.sch 790 */
			return
				BGl_rtl_vsetzd2loczd2zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5628));
		}

	}



/* rtl_vset-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_vsetzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_vsetz00_bglt
		BgL_oz00_292, obj_t BgL_vz00_293)
	{
		{	/* SawMill/defs.sch 791 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_292)))->BgL_locz00) =
				((obj_t) BgL_vz00_293), BUNSPEC);
		}

	}



/* &rtl_vset-loc-set! */
	obj_t BGl_z62rtl_vsetzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5629,
		obj_t BgL_oz00_5630, obj_t BgL_vz00_5631)
	{
		{	/* SawMill/defs.sch 791 */
			return
				BGl_rtl_vsetzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_vsetz00_bglt) BgL_oz00_5630), BgL_vz00_5631);
		}

	}



/* make-rtl_boxset */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt
		BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t BgL_loc1379z00_294)
	{
		{	/* SawMill/defs.sch 794 */
			{	/* SawMill/defs.sch 794 */
				BgL_rtl_boxsetz00_bglt BgL_new1396z00_6937;

				{	/* SawMill/defs.sch 794 */
					BgL_rtl_boxsetz00_bglt BgL_new1395z00_6938;

					BgL_new1395z00_6938 =
						((BgL_rtl_boxsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_boxsetz00_bgl))));
					{	/* SawMill/defs.sch 794 */
						long BgL_arg1850z00_6939;

						{	/* SawMill/defs.sch 794 */
							long BgL_res2988z00_6940;

							BgL_res2988z00_6940 =
								BGL_CLASS_INDEX(BGl_rtl_boxsetz00zzsaw_defsz00);
							BgL_arg1850z00_6939 = BgL_res2988z00_6940;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1395z00_6938), BgL_arg1850z00_6939);
					}
					BgL_new1396z00_6937 = BgL_new1395z00_6938;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1396z00_6937)))->BgL_locz00) =
					((obj_t) BgL_loc1379z00_294), BUNSPEC);
				return BgL_new1396z00_6937;
			}
		}

	}



/* &make-rtl_boxset */
	BgL_rtl_boxsetz00_bglt BGl_z62makezd2rtl_boxsetzb0zzsaw_defsz00(obj_t
		BgL_envz00_5632, obj_t BgL_loc1379z00_5633)
	{
		{	/* SawMill/defs.sch 794 */
			return BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(BgL_loc1379z00_5633);
		}

	}



/* rtl_boxset? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_boxsetzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_295)
	{
		{	/* SawMill/defs.sch 795 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_295,
				BGl_rtl_boxsetz00zzsaw_defsz00);
		}

	}



/* &rtl_boxset? */
	obj_t BGl_z62rtl_boxsetzf3z91zzsaw_defsz00(obj_t BgL_envz00_5634,
		obj_t BgL_objz00_5635)
	{
		{	/* SawMill/defs.sch 795 */
			return BBOOL(BGl_rtl_boxsetzf3zf3zzsaw_defsz00(BgL_objz00_5635));
		}

	}



/* rtl_boxset-nil */
	BGL_EXPORTED_DEF BgL_rtl_boxsetz00_bglt BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 796 */
			{	/* SawMill/defs.sch 796 */
				obj_t BgL_classz00_4242;

				BgL_classz00_4242 = BGl_rtl_boxsetz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 796 */
					obj_t BgL__ortest_1106z00_4243;

					BgL__ortest_1106z00_4243 = BGL_CLASS_NIL(BgL_classz00_4242);
					if (CBOOL(BgL__ortest_1106z00_4243))
						{	/* SawMill/defs.sch 796 */
							return ((BgL_rtl_boxsetz00_bglt) BgL__ortest_1106z00_4243);
						}
					else
						{	/* SawMill/defs.sch 796 */
							return
								((BgL_rtl_boxsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4242));
						}
				}
			}
		}

	}



/* &rtl_boxset-nil */
	BgL_rtl_boxsetz00_bglt BGl_z62rtl_boxsetzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5636)
	{
		{	/* SawMill/defs.sch 796 */
			return BGl_rtl_boxsetzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_boxset-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_boxsetzd2loczd2zzsaw_defsz00(BgL_rtl_boxsetz00_bglt BgL_oz00_296)
	{
		{	/* SawMill/defs.sch 797 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_296)))->BgL_locz00);
		}

	}



/* &rtl_boxset-loc */
	obj_t BGl_z62rtl_boxsetzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5637,
		obj_t BgL_oz00_5638)
	{
		{	/* SawMill/defs.sch 797 */
			return
				BGl_rtl_boxsetzd2loczd2zzsaw_defsz00(
				((BgL_rtl_boxsetz00_bglt) BgL_oz00_5638));
		}

	}



/* rtl_boxset-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_boxsetzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_boxsetz00_bglt
		BgL_oz00_297, obj_t BgL_vz00_298)
	{
		{	/* SawMill/defs.sch 798 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_297)))->BgL_locz00) =
				((obj_t) BgL_vz00_298), BUNSPEC);
		}

	}



/* &rtl_boxset-loc-set! */
	obj_t BGl_z62rtl_boxsetzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5639,
		obj_t BgL_oz00_5640, obj_t BgL_vz00_5641)
	{
		{	/* SawMill/defs.sch 798 */
			return
				BGl_rtl_boxsetzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_boxsetz00_bglt) BgL_oz00_5640), BgL_vz00_5641);
		}

	}



/* make-rtl_new */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt BGl_makezd2rtl_newzd2zzsaw_defsz00(obj_t
		BgL_loc1374z00_299, BgL_typez00_bglt BgL_type1376z00_300,
		obj_t BgL_constr1377z00_301)
	{
		{	/* SawMill/defs.sch 801 */
			{	/* SawMill/defs.sch 801 */
				BgL_rtl_newz00_bglt BgL_new1398z00_6941;

				{	/* SawMill/defs.sch 801 */
					BgL_rtl_newz00_bglt BgL_new1397z00_6942;

					BgL_new1397z00_6942 =
						((BgL_rtl_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_newz00_bgl))));
					{	/* SawMill/defs.sch 801 */
						long BgL_arg1851z00_6943;

						{	/* SawMill/defs.sch 801 */
							long BgL_res2989z00_6944;

							BgL_res2989z00_6944 =
								BGL_CLASS_INDEX(BGl_rtl_newz00zzsaw_defsz00);
							BgL_arg1851z00_6943 = BgL_res2989z00_6944;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1397z00_6942), BgL_arg1851z00_6943);
					}
					BgL_new1398z00_6941 = BgL_new1397z00_6942;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1398z00_6941)))->BgL_locz00) =
					((obj_t) BgL_loc1374z00_299), BUNSPEC);
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1398z00_6941))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1376z00_300), BUNSPEC);
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1398z00_6941))->BgL_constrz00) =
					((obj_t) BgL_constr1377z00_301), BUNSPEC);
				return BgL_new1398z00_6941;
			}
		}

	}



/* &make-rtl_new */
	BgL_rtl_newz00_bglt BGl_z62makezd2rtl_newzb0zzsaw_defsz00(obj_t
		BgL_envz00_5642, obj_t BgL_loc1374z00_5643, obj_t BgL_type1376z00_5644,
		obj_t BgL_constr1377z00_5645)
	{
		{	/* SawMill/defs.sch 801 */
			return
				BGl_makezd2rtl_newzd2zzsaw_defsz00(BgL_loc1374z00_5643,
				((BgL_typez00_bglt) BgL_type1376z00_5644), BgL_constr1377z00_5645);
		}

	}



/* rtl_new? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_newzf3zf3zzsaw_defsz00(obj_t BgL_objz00_302)
	{
		{	/* SawMill/defs.sch 802 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_302, BGl_rtl_newz00zzsaw_defsz00);
		}

	}



/* &rtl_new? */
	obj_t BGl_z62rtl_newzf3z91zzsaw_defsz00(obj_t BgL_envz00_5646,
		obj_t BgL_objz00_5647)
	{
		{	/* SawMill/defs.sch 802 */
			return BBOOL(BGl_rtl_newzf3zf3zzsaw_defsz00(BgL_objz00_5647));
		}

	}



/* rtl_new-nil */
	BGL_EXPORTED_DEF BgL_rtl_newz00_bglt BGl_rtl_newzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 803 */
			{	/* SawMill/defs.sch 803 */
				obj_t BgL_classz00_4251;

				BgL_classz00_4251 = BGl_rtl_newz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 803 */
					obj_t BgL__ortest_1106z00_4252;

					BgL__ortest_1106z00_4252 = BGL_CLASS_NIL(BgL_classz00_4251);
					if (CBOOL(BgL__ortest_1106z00_4252))
						{	/* SawMill/defs.sch 803 */
							return ((BgL_rtl_newz00_bglt) BgL__ortest_1106z00_4252);
						}
					else
						{	/* SawMill/defs.sch 803 */
							return
								((BgL_rtl_newz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4251));
						}
				}
			}
		}

	}



/* &rtl_new-nil */
	BgL_rtl_newz00_bglt BGl_z62rtl_newzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5648)
	{
		{	/* SawMill/defs.sch 803 */
			return BGl_rtl_newzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_new-constr */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_newzd2constrzd2zzsaw_defsz00(BgL_rtl_newz00_bglt BgL_oz00_303)
	{
		{	/* SawMill/defs.sch 804 */
			return (((BgL_rtl_newz00_bglt) COBJECT(BgL_oz00_303))->BgL_constrz00);
		}

	}



/* &rtl_new-constr */
	obj_t BGl_z62rtl_newzd2constrzb0zzsaw_defsz00(obj_t BgL_envz00_5649,
		obj_t BgL_oz00_5650)
	{
		{	/* SawMill/defs.sch 804 */
			return
				BGl_rtl_newzd2constrzd2zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5650));
		}

	}



/* rtl_new-constr-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_newzd2constrzd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt
		BgL_oz00_304, obj_t BgL_vz00_305)
	{
		{	/* SawMill/defs.sch 805 */
			return
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_oz00_304))->BgL_constrz00) =
				((obj_t) BgL_vz00_305), BUNSPEC);
		}

	}



/* &rtl_new-constr-set! */
	obj_t BGl_z62rtl_newzd2constrzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5651,
		obj_t BgL_oz00_5652, obj_t BgL_vz00_5653)
	{
		{	/* SawMill/defs.sch 805 */
			return
				BGl_rtl_newzd2constrzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5652), BgL_vz00_5653);
		}

	}



/* rtl_new-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_newzd2typezd2zzsaw_defsz00(BgL_rtl_newz00_bglt BgL_oz00_306)
	{
		{	/* SawMill/defs.sch 806 */
			return (((BgL_rtl_newz00_bglt) COBJECT(BgL_oz00_306))->BgL_typez00);
		}

	}



/* &rtl_new-type */
	BgL_typez00_bglt BGl_z62rtl_newzd2typezb0zzsaw_defsz00(obj_t BgL_envz00_5654,
		obj_t BgL_oz00_5655)
	{
		{	/* SawMill/defs.sch 806 */
			return
				BGl_rtl_newzd2typezd2zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5655));
		}

	}



/* rtl_new-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_newzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt
		BgL_oz00_307, BgL_typez00_bglt BgL_vz00_308)
	{
		{	/* SawMill/defs.sch 807 */
			return
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_oz00_307))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_308), BUNSPEC);
		}

	}



/* &rtl_new-type-set! */
	obj_t BGl_z62rtl_newzd2typezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5656,
		obj_t BgL_oz00_5657, obj_t BgL_vz00_5658)
	{
		{	/* SawMill/defs.sch 807 */
			return
				BGl_rtl_newzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5657),
				((BgL_typez00_bglt) BgL_vz00_5658));
		}

	}



/* rtl_new-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_newzd2loczd2zzsaw_defsz00(BgL_rtl_newz00_bglt
		BgL_oz00_309)
	{
		{	/* SawMill/defs.sch 808 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_309)))->BgL_locz00);
		}

	}



/* &rtl_new-loc */
	obj_t BGl_z62rtl_newzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5659,
		obj_t BgL_oz00_5660)
	{
		{	/* SawMill/defs.sch 808 */
			return
				BGl_rtl_newzd2loczd2zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5660));
		}

	}



/* rtl_new-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_newzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_newz00_bglt BgL_oz00_310,
		obj_t BgL_vz00_311)
	{
		{	/* SawMill/defs.sch 809 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_310)))->BgL_locz00) =
				((obj_t) BgL_vz00_311), BUNSPEC);
		}

	}



/* &rtl_new-loc-set! */
	obj_t BGl_z62rtl_newzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5661,
		obj_t BgL_oz00_5662, obj_t BgL_vz00_5663)
	{
		{	/* SawMill/defs.sch 809 */
			return
				BGl_rtl_newzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_newz00_bglt) BgL_oz00_5662), BgL_vz00_5663);
		}

	}



/* make-rtl_call */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt
		BGl_makezd2rtl_callzd2zzsaw_defsz00(obj_t BgL_loc1371z00_312,
		BgL_globalz00_bglt BgL_var1372z00_313)
	{
		{	/* SawMill/defs.sch 812 */
			{	/* SawMill/defs.sch 812 */
				BgL_rtl_callz00_bglt BgL_new1400z00_6945;

				{	/* SawMill/defs.sch 812 */
					BgL_rtl_callz00_bglt BgL_new1399z00_6946;

					BgL_new1399z00_6946 =
						((BgL_rtl_callz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_callz00_bgl))));
					{	/* SawMill/defs.sch 812 */
						long BgL_arg1852z00_6947;

						{	/* SawMill/defs.sch 812 */
							long BgL_res2990z00_6948;

							BgL_res2990z00_6948 =
								BGL_CLASS_INDEX(BGl_rtl_callz00zzsaw_defsz00);
							BgL_arg1852z00_6947 = BgL_res2990z00_6948;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1399z00_6946), BgL_arg1852z00_6947);
					}
					BgL_new1400z00_6945 = BgL_new1399z00_6946;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1400z00_6945)))->BgL_locz00) =
					((obj_t) BgL_loc1371z00_312), BUNSPEC);
				((((BgL_rtl_callz00_bglt) COBJECT(BgL_new1400z00_6945))->BgL_varz00) =
					((BgL_globalz00_bglt) BgL_var1372z00_313), BUNSPEC);
				return BgL_new1400z00_6945;
			}
		}

	}



/* &make-rtl_call */
	BgL_rtl_callz00_bglt BGl_z62makezd2rtl_callzb0zzsaw_defsz00(obj_t
		BgL_envz00_5664, obj_t BgL_loc1371z00_5665, obj_t BgL_var1372z00_5666)
	{
		{	/* SawMill/defs.sch 812 */
			return
				BGl_makezd2rtl_callzd2zzsaw_defsz00(BgL_loc1371z00_5665,
				((BgL_globalz00_bglt) BgL_var1372z00_5666));
		}

	}



/* rtl_call? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_callzf3zf3zzsaw_defsz00(obj_t BgL_objz00_314)
	{
		{	/* SawMill/defs.sch 813 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_314,
				BGl_rtl_callz00zzsaw_defsz00);
		}

	}



/* &rtl_call? */
	obj_t BGl_z62rtl_callzf3z91zzsaw_defsz00(obj_t BgL_envz00_5667,
		obj_t BgL_objz00_5668)
	{
		{	/* SawMill/defs.sch 813 */
			return BBOOL(BGl_rtl_callzf3zf3zzsaw_defsz00(BgL_objz00_5668));
		}

	}



/* rtl_call-nil */
	BGL_EXPORTED_DEF BgL_rtl_callz00_bglt BGl_rtl_callzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 814 */
			{	/* SawMill/defs.sch 814 */
				obj_t BgL_classz00_4260;

				BgL_classz00_4260 = BGl_rtl_callz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 814 */
					obj_t BgL__ortest_1106z00_4261;

					BgL__ortest_1106z00_4261 = BGL_CLASS_NIL(BgL_classz00_4260);
					if (CBOOL(BgL__ortest_1106z00_4261))
						{	/* SawMill/defs.sch 814 */
							return ((BgL_rtl_callz00_bglt) BgL__ortest_1106z00_4261);
						}
					else
						{	/* SawMill/defs.sch 814 */
							return
								((BgL_rtl_callz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4260));
						}
				}
			}
		}

	}



/* &rtl_call-nil */
	BgL_rtl_callz00_bglt BGl_z62rtl_callzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5669)
	{
		{	/* SawMill/defs.sch 814 */
			return BGl_rtl_callzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_call-var */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_rtl_callzd2varzd2zzsaw_defsz00(BgL_rtl_callz00_bglt BgL_oz00_315)
	{
		{	/* SawMill/defs.sch 815 */
			return (((BgL_rtl_callz00_bglt) COBJECT(BgL_oz00_315))->BgL_varz00);
		}

	}



/* &rtl_call-var */
	BgL_globalz00_bglt BGl_z62rtl_callzd2varzb0zzsaw_defsz00(obj_t
		BgL_envz00_5670, obj_t BgL_oz00_5671)
	{
		{	/* SawMill/defs.sch 815 */
			return
				BGl_rtl_callzd2varzd2zzsaw_defsz00(
				((BgL_rtl_callz00_bglt) BgL_oz00_5671));
		}

	}



/* rtl_call-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_callzd2varzd2setz12z12zzsaw_defsz00(BgL_rtl_callz00_bglt
		BgL_oz00_316, BgL_globalz00_bglt BgL_vz00_317)
	{
		{	/* SawMill/defs.sch 816 */
			return
				((((BgL_rtl_callz00_bglt) COBJECT(BgL_oz00_316))->BgL_varz00) =
				((BgL_globalz00_bglt) BgL_vz00_317), BUNSPEC);
		}

	}



/* &rtl_call-var-set! */
	obj_t BGl_z62rtl_callzd2varzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5672,
		obj_t BgL_oz00_5673, obj_t BgL_vz00_5674)
	{
		{	/* SawMill/defs.sch 816 */
			return
				BGl_rtl_callzd2varzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_callz00_bglt) BgL_oz00_5673),
				((BgL_globalz00_bglt) BgL_vz00_5674));
		}

	}



/* rtl_call-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_callzd2loczd2zzsaw_defsz00(BgL_rtl_callz00_bglt
		BgL_oz00_318)
	{
		{	/* SawMill/defs.sch 817 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_318)))->BgL_locz00);
		}

	}



/* &rtl_call-loc */
	obj_t BGl_z62rtl_callzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5675,
		obj_t BgL_oz00_5676)
	{
		{	/* SawMill/defs.sch 817 */
			return
				BGl_rtl_callzd2loczd2zzsaw_defsz00(
				((BgL_rtl_callz00_bglt) BgL_oz00_5676));
		}

	}



/* rtl_call-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_callzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_callz00_bglt
		BgL_oz00_319, obj_t BgL_vz00_320)
	{
		{	/* SawMill/defs.sch 818 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_319)))->BgL_locz00) =
				((obj_t) BgL_vz00_320), BUNSPEC);
		}

	}



/* &rtl_call-loc-set! */
	obj_t BGl_z62rtl_callzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5677,
		obj_t BgL_oz00_5678, obj_t BgL_vz00_5679)
	{
		{	/* SawMill/defs.sch 818 */
			return
				BGl_rtl_callzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_callz00_bglt) BgL_oz00_5678), BgL_vz00_5679);
		}

	}



/* make-rtl_apply */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt
		BGl_makezd2rtl_applyzd2zzsaw_defsz00(obj_t BgL_loc1369z00_321)
	{
		{	/* SawMill/defs.sch 821 */
			{	/* SawMill/defs.sch 821 */
				BgL_rtl_applyz00_bglt BgL_new1402z00_6949;

				{	/* SawMill/defs.sch 821 */
					BgL_rtl_applyz00_bglt BgL_new1401z00_6950;

					BgL_new1401z00_6950 =
						((BgL_rtl_applyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_applyz00_bgl))));
					{	/* SawMill/defs.sch 821 */
						long BgL_arg1853z00_6951;

						{	/* SawMill/defs.sch 821 */
							long BgL_res2991z00_6952;

							BgL_res2991z00_6952 =
								BGL_CLASS_INDEX(BGl_rtl_applyz00zzsaw_defsz00);
							BgL_arg1853z00_6951 = BgL_res2991z00_6952;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1401z00_6950), BgL_arg1853z00_6951);
					}
					BgL_new1402z00_6949 = BgL_new1401z00_6950;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1402z00_6949)))->BgL_locz00) =
					((obj_t) BgL_loc1369z00_321), BUNSPEC);
				return BgL_new1402z00_6949;
			}
		}

	}



/* &make-rtl_apply */
	BgL_rtl_applyz00_bglt BGl_z62makezd2rtl_applyzb0zzsaw_defsz00(obj_t
		BgL_envz00_5680, obj_t BgL_loc1369z00_5681)
	{
		{	/* SawMill/defs.sch 821 */
			return BGl_makezd2rtl_applyzd2zzsaw_defsz00(BgL_loc1369z00_5681);
		}

	}



/* rtl_apply? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_applyzf3zf3zzsaw_defsz00(obj_t BgL_objz00_322)
	{
		{	/* SawMill/defs.sch 822 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_322,
				BGl_rtl_applyz00zzsaw_defsz00);
		}

	}



/* &rtl_apply? */
	obj_t BGl_z62rtl_applyzf3z91zzsaw_defsz00(obj_t BgL_envz00_5682,
		obj_t BgL_objz00_5683)
	{
		{	/* SawMill/defs.sch 822 */
			return BBOOL(BGl_rtl_applyzf3zf3zzsaw_defsz00(BgL_objz00_5683));
		}

	}



/* rtl_apply-nil */
	BGL_EXPORTED_DEF BgL_rtl_applyz00_bglt BGl_rtl_applyzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 823 */
			{	/* SawMill/defs.sch 823 */
				obj_t BgL_classz00_4269;

				BgL_classz00_4269 = BGl_rtl_applyz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 823 */
					obj_t BgL__ortest_1106z00_4270;

					BgL__ortest_1106z00_4270 = BGL_CLASS_NIL(BgL_classz00_4269);
					if (CBOOL(BgL__ortest_1106z00_4270))
						{	/* SawMill/defs.sch 823 */
							return ((BgL_rtl_applyz00_bglt) BgL__ortest_1106z00_4270);
						}
					else
						{	/* SawMill/defs.sch 823 */
							return
								((BgL_rtl_applyz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4269));
						}
				}
			}
		}

	}



/* &rtl_apply-nil */
	BgL_rtl_applyz00_bglt BGl_z62rtl_applyzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5684)
	{
		{	/* SawMill/defs.sch 823 */
			return BGl_rtl_applyzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_apply-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_applyzd2loczd2zzsaw_defsz00(BgL_rtl_applyz00_bglt BgL_oz00_323)
	{
		{	/* SawMill/defs.sch 824 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_323)))->BgL_locz00);
		}

	}



/* &rtl_apply-loc */
	obj_t BGl_z62rtl_applyzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5685,
		obj_t BgL_oz00_5686)
	{
		{	/* SawMill/defs.sch 824 */
			return
				BGl_rtl_applyzd2loczd2zzsaw_defsz00(
				((BgL_rtl_applyz00_bglt) BgL_oz00_5686));
		}

	}



/* rtl_apply-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_applyzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_applyz00_bglt
		BgL_oz00_324, obj_t BgL_vz00_325)
	{
		{	/* SawMill/defs.sch 825 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_324)))->BgL_locz00) =
				((obj_t) BgL_vz00_325), BUNSPEC);
		}

	}



/* &rtl_apply-loc-set! */
	obj_t BGl_z62rtl_applyzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5687,
		obj_t BgL_oz00_5688, obj_t BgL_vz00_5689)
	{
		{	/* SawMill/defs.sch 825 */
			return
				BGl_rtl_applyzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_applyz00_bglt) BgL_oz00_5688), BgL_vz00_5689);
		}

	}



/* make-rtl_lightfuncall */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t BgL_loc1363z00_326,
		obj_t BgL_name1364z00_327, obj_t BgL_funs1365z00_328,
		obj_t BgL_rettype1366z00_329)
	{
		{	/* SawMill/defs.sch 828 */
			{	/* SawMill/defs.sch 828 */
				BgL_rtl_lightfuncallz00_bglt BgL_new1404z00_6953;

				{	/* SawMill/defs.sch 828 */
					BgL_rtl_lightfuncallz00_bglt BgL_new1403z00_6954;

					BgL_new1403z00_6954 =
						((BgL_rtl_lightfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_lightfuncallz00_bgl))));
					{	/* SawMill/defs.sch 828 */
						long BgL_arg1855z00_6955;

						{	/* SawMill/defs.sch 828 */
							long BgL_res2992z00_6956;

							BgL_res2992z00_6956 =
								BGL_CLASS_INDEX(BGl_rtl_lightfuncallz00zzsaw_defsz00);
							BgL_arg1855z00_6955 = BgL_res2992z00_6956;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1403z00_6954), BgL_arg1855z00_6955);
					}
					BgL_new1404z00_6953 = BgL_new1403z00_6954;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1404z00_6953)))->BgL_locz00) =
					((obj_t) BgL_loc1363z00_326), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1404z00_6953))->
						BgL_namez00) = ((obj_t) BgL_name1364z00_327), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1404z00_6953))->
						BgL_funsz00) = ((obj_t) BgL_funs1365z00_328), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1404z00_6953))->
						BgL_rettypez00) = ((obj_t) BgL_rettype1366z00_329), BUNSPEC);
				return BgL_new1404z00_6953;
			}
		}

	}



/* &make-rtl_lightfuncall */
	BgL_rtl_lightfuncallz00_bglt
		BGl_z62makezd2rtl_lightfuncallzb0zzsaw_defsz00(obj_t BgL_envz00_5690,
		obj_t BgL_loc1363z00_5691, obj_t BgL_name1364z00_5692,
		obj_t BgL_funs1365z00_5693, obj_t BgL_rettype1366z00_5694)
	{
		{	/* SawMill/defs.sch 828 */
			return
				BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(BgL_loc1363z00_5691,
				BgL_name1364z00_5692, BgL_funs1365z00_5693, BgL_rettype1366z00_5694);
		}

	}



/* rtl_lightfuncall? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_lightfuncallzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_330)
	{
		{	/* SawMill/defs.sch 829 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_330,
				BGl_rtl_lightfuncallz00zzsaw_defsz00);
		}

	}



/* &rtl_lightfuncall? */
	obj_t BGl_z62rtl_lightfuncallzf3z91zzsaw_defsz00(obj_t BgL_envz00_5695,
		obj_t BgL_objz00_5696)
	{
		{	/* SawMill/defs.sch 829 */
			return BBOOL(BGl_rtl_lightfuncallzf3zf3zzsaw_defsz00(BgL_objz00_5696));
		}

	}



/* rtl_lightfuncall-nil */
	BGL_EXPORTED_DEF BgL_rtl_lightfuncallz00_bglt
		BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 830 */
			{	/* SawMill/defs.sch 830 */
				obj_t BgL_classz00_4278;

				BgL_classz00_4278 = BGl_rtl_lightfuncallz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 830 */
					obj_t BgL__ortest_1106z00_4279;

					BgL__ortest_1106z00_4279 = BGL_CLASS_NIL(BgL_classz00_4278);
					if (CBOOL(BgL__ortest_1106z00_4279))
						{	/* SawMill/defs.sch 830 */
							return ((BgL_rtl_lightfuncallz00_bglt) BgL__ortest_1106z00_4279);
						}
					else
						{	/* SawMill/defs.sch 830 */
							return
								((BgL_rtl_lightfuncallz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4278));
						}
				}
			}
		}

	}



/* &rtl_lightfuncall-nil */
	BgL_rtl_lightfuncallz00_bglt
		BGl_z62rtl_lightfuncallzd2nilzb0zzsaw_defsz00(obj_t BgL_envz00_5697)
	{
		{	/* SawMill/defs.sch 830 */
			return BGl_rtl_lightfuncallzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_lightfuncall-rettype */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2rettypezd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt
		BgL_oz00_331)
	{
		{	/* SawMill/defs.sch 831 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_331))->
				BgL_rettypez00);
		}

	}



/* &rtl_lightfuncall-rettype */
	obj_t BGl_z62rtl_lightfuncallzd2rettypezb0zzsaw_defsz00(obj_t BgL_envz00_5698,
		obj_t BgL_oz00_5699)
	{
		{	/* SawMill/defs.sch 831 */
			return
				BGl_rtl_lightfuncallzd2rettypezd2zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5699));
		}

	}



/* rtl_lightfuncall-rettype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2rettypezd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt BgL_oz00_332, obj_t BgL_vz00_333)
	{
		{	/* SawMill/defs.sch 832 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_332))->
					BgL_rettypez00) = ((obj_t) BgL_vz00_333), BUNSPEC);
		}

	}



/* &rtl_lightfuncall-rettype-set! */
	obj_t BGl_z62rtl_lightfuncallzd2rettypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5700, obj_t BgL_oz00_5701, obj_t BgL_vz00_5702)
	{
		{	/* SawMill/defs.sch 832 */
			return
				BGl_rtl_lightfuncallzd2rettypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5701), BgL_vz00_5702);
		}

	}



/* rtl_lightfuncall-funs */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2funszd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt
		BgL_oz00_334)
	{
		{	/* SawMill/defs.sch 833 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_334))->BgL_funsz00);
		}

	}



/* &rtl_lightfuncall-funs */
	obj_t BGl_z62rtl_lightfuncallzd2funszb0zzsaw_defsz00(obj_t BgL_envz00_5703,
		obj_t BgL_oz00_5704)
	{
		{	/* SawMill/defs.sch 833 */
			return
				BGl_rtl_lightfuncallzd2funszd2zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5704));
		}

	}



/* rtl_lightfuncall-funs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2funszd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt BgL_oz00_335, obj_t BgL_vz00_336)
	{
		{	/* SawMill/defs.sch 834 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_335))->BgL_funsz00) =
				((obj_t) BgL_vz00_336), BUNSPEC);
		}

	}



/* &rtl_lightfuncall-funs-set! */
	obj_t BGl_z62rtl_lightfuncallzd2funszd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5705, obj_t BgL_oz00_5706, obj_t BgL_vz00_5707)
	{
		{	/* SawMill/defs.sch 834 */
			return
				BGl_rtl_lightfuncallzd2funszd2setz12z12zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5706), BgL_vz00_5707);
		}

	}



/* rtl_lightfuncall-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2namezd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt
		BgL_oz00_337)
	{
		{	/* SawMill/defs.sch 835 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_337))->BgL_namez00);
		}

	}



/* &rtl_lightfuncall-name */
	obj_t BGl_z62rtl_lightfuncallzd2namezb0zzsaw_defsz00(obj_t BgL_envz00_5708,
		obj_t BgL_oz00_5709)
	{
		{	/* SawMill/defs.sch 835 */
			return
				BGl_rtl_lightfuncallzd2namezd2zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5709));
		}

	}



/* rtl_lightfuncall-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2namezd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt BgL_oz00_338, obj_t BgL_vz00_339)
	{
		{	/* SawMill/defs.sch 836 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_oz00_338))->BgL_namez00) =
				((obj_t) BgL_vz00_339), BUNSPEC);
		}

	}



/* &rtl_lightfuncall-name-set! */
	obj_t BGl_z62rtl_lightfuncallzd2namezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5710, obj_t BgL_oz00_5711, obj_t BgL_vz00_5712)
	{
		{	/* SawMill/defs.sch 836 */
			return
				BGl_rtl_lightfuncallzd2namezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5711), BgL_vz00_5712);
		}

	}



/* rtl_lightfuncall-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2loczd2zzsaw_defsz00(BgL_rtl_lightfuncallz00_bglt
		BgL_oz00_340)
	{
		{	/* SawMill/defs.sch 837 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_340)))->BgL_locz00);
		}

	}



/* &rtl_lightfuncall-loc */
	obj_t BGl_z62rtl_lightfuncallzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5713,
		obj_t BgL_oz00_5714)
	{
		{	/* SawMill/defs.sch 837 */
			return
				BGl_rtl_lightfuncallzd2loczd2zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5714));
		}

	}



/* rtl_lightfuncall-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_lightfuncallzd2loczd2setz12z12zzsaw_defsz00
		(BgL_rtl_lightfuncallz00_bglt BgL_oz00_341, obj_t BgL_vz00_342)
	{
		{	/* SawMill/defs.sch 838 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_341)))->BgL_locz00) =
				((obj_t) BgL_vz00_342), BUNSPEC);
		}

	}



/* &rtl_lightfuncall-loc-set! */
	obj_t BGl_z62rtl_lightfuncallzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5715, obj_t BgL_oz00_5716, obj_t BgL_vz00_5717)
	{
		{	/* SawMill/defs.sch 838 */
			return
				BGl_rtl_lightfuncallzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_5716), BgL_vz00_5717);
		}

	}



/* make-rtl_funcall */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_makezd2rtl_funcallzd2zzsaw_defsz00(obj_t BgL_loc1361z00_343)
	{
		{	/* SawMill/defs.sch 841 */
			{	/* SawMill/defs.sch 841 */
				BgL_rtl_funcallz00_bglt BgL_new1406z00_6957;

				{	/* SawMill/defs.sch 841 */
					BgL_rtl_funcallz00_bglt BgL_new1405z00_6958;

					BgL_new1405z00_6958 =
						((BgL_rtl_funcallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_funcallz00_bgl))));
					{	/* SawMill/defs.sch 841 */
						long BgL_arg1856z00_6959;

						{	/* SawMill/defs.sch 841 */
							long BgL_res2993z00_6960;

							BgL_res2993z00_6960 =
								BGL_CLASS_INDEX(BGl_rtl_funcallz00zzsaw_defsz00);
							BgL_arg1856z00_6959 = BgL_res2993z00_6960;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1405z00_6958), BgL_arg1856z00_6959);
					}
					BgL_new1406z00_6957 = BgL_new1405z00_6958;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1406z00_6957)))->BgL_locz00) =
					((obj_t) BgL_loc1361z00_343), BUNSPEC);
				return BgL_new1406z00_6957;
			}
		}

	}



/* &make-rtl_funcall */
	BgL_rtl_funcallz00_bglt BGl_z62makezd2rtl_funcallzb0zzsaw_defsz00(obj_t
		BgL_envz00_5718, obj_t BgL_loc1361z00_5719)
	{
		{	/* SawMill/defs.sch 841 */
			return BGl_makezd2rtl_funcallzd2zzsaw_defsz00(BgL_loc1361z00_5719);
		}

	}



/* rtl_funcall? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_funcallzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_344)
	{
		{	/* SawMill/defs.sch 842 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_344,
				BGl_rtl_funcallz00zzsaw_defsz00);
		}

	}



/* &rtl_funcall? */
	obj_t BGl_z62rtl_funcallzf3z91zzsaw_defsz00(obj_t BgL_envz00_5720,
		obj_t BgL_objz00_5721)
	{
		{	/* SawMill/defs.sch 842 */
			return BBOOL(BGl_rtl_funcallzf3zf3zzsaw_defsz00(BgL_objz00_5721));
		}

	}



/* rtl_funcall-nil */
	BGL_EXPORTED_DEF BgL_rtl_funcallz00_bglt
		BGl_rtl_funcallzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 843 */
			{	/* SawMill/defs.sch 843 */
				obj_t BgL_classz00_4287;

				BgL_classz00_4287 = BGl_rtl_funcallz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 843 */
					obj_t BgL__ortest_1106z00_4288;

					BgL__ortest_1106z00_4288 = BGL_CLASS_NIL(BgL_classz00_4287);
					if (CBOOL(BgL__ortest_1106z00_4288))
						{	/* SawMill/defs.sch 843 */
							return ((BgL_rtl_funcallz00_bglt) BgL__ortest_1106z00_4288);
						}
					else
						{	/* SawMill/defs.sch 843 */
							return
								((BgL_rtl_funcallz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4287));
						}
				}
			}
		}

	}



/* &rtl_funcall-nil */
	BgL_rtl_funcallz00_bglt BGl_z62rtl_funcallzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5722)
	{
		{	/* SawMill/defs.sch 843 */
			return BGl_rtl_funcallzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_funcall-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_funcallzd2loczd2zzsaw_defsz00(BgL_rtl_funcallz00_bglt BgL_oz00_345)
	{
		{	/* SawMill/defs.sch 844 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_345)))->BgL_locz00);
		}

	}



/* &rtl_funcall-loc */
	obj_t BGl_z62rtl_funcallzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5723,
		obj_t BgL_oz00_5724)
	{
		{	/* SawMill/defs.sch 844 */
			return
				BGl_rtl_funcallzd2loczd2zzsaw_defsz00(
				((BgL_rtl_funcallz00_bglt) BgL_oz00_5724));
		}

	}



/* rtl_funcall-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_funcallzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_funcallz00_bglt
		BgL_oz00_346, obj_t BgL_vz00_347)
	{
		{	/* SawMill/defs.sch 845 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_346)))->BgL_locz00) =
				((obj_t) BgL_vz00_347), BUNSPEC);
		}

	}



/* &rtl_funcall-loc-set! */
	obj_t BGl_z62rtl_funcallzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5725,
		obj_t BgL_oz00_5726, obj_t BgL_vz00_5727)
	{
		{	/* SawMill/defs.sch 845 */
			return
				BGl_rtl_funcallzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_funcallz00_bglt) BgL_oz00_5726), BgL_vz00_5727);
		}

	}



/* make-rtl_pragma */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt
		BGl_makezd2rtl_pragmazd2zzsaw_defsz00(obj_t BgL_loc1358z00_348,
		obj_t BgL_format1359z00_349)
	{
		{	/* SawMill/defs.sch 848 */
			{	/* SawMill/defs.sch 848 */
				BgL_rtl_pragmaz00_bglt BgL_new1408z00_6961;

				{	/* SawMill/defs.sch 848 */
					BgL_rtl_pragmaz00_bglt BgL_new1407z00_6962;

					BgL_new1407z00_6962 =
						((BgL_rtl_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_pragmaz00_bgl))));
					{	/* SawMill/defs.sch 848 */
						long BgL_arg1857z00_6963;

						{	/* SawMill/defs.sch 848 */
							long BgL_res2994z00_6964;

							BgL_res2994z00_6964 =
								BGL_CLASS_INDEX(BGl_rtl_pragmaz00zzsaw_defsz00);
							BgL_arg1857z00_6963 = BgL_res2994z00_6964;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1407z00_6962), BgL_arg1857z00_6963);
					}
					BgL_new1408z00_6961 = BgL_new1407z00_6962;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1408z00_6961)))->BgL_locz00) =
					((obj_t) BgL_loc1358z00_348), BUNSPEC);
				((((BgL_rtl_pragmaz00_bglt) COBJECT(BgL_new1408z00_6961))->
						BgL_formatz00) = ((obj_t) BgL_format1359z00_349), BUNSPEC);
				return BgL_new1408z00_6961;
			}
		}

	}



/* &make-rtl_pragma */
	BgL_rtl_pragmaz00_bglt BGl_z62makezd2rtl_pragmazb0zzsaw_defsz00(obj_t
		BgL_envz00_5728, obj_t BgL_loc1358z00_5729, obj_t BgL_format1359z00_5730)
	{
		{	/* SawMill/defs.sch 848 */
			return
				BGl_makezd2rtl_pragmazd2zzsaw_defsz00(BgL_loc1358z00_5729,
				BgL_format1359z00_5730);
		}

	}



/* rtl_pragma? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_pragmazf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_350)
	{
		{	/* SawMill/defs.sch 849 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_350,
				BGl_rtl_pragmaz00zzsaw_defsz00);
		}

	}



/* &rtl_pragma? */
	obj_t BGl_z62rtl_pragmazf3z91zzsaw_defsz00(obj_t BgL_envz00_5731,
		obj_t BgL_objz00_5732)
	{
		{	/* SawMill/defs.sch 849 */
			return BBOOL(BGl_rtl_pragmazf3zf3zzsaw_defsz00(BgL_objz00_5732));
		}

	}



/* rtl_pragma-nil */
	BGL_EXPORTED_DEF BgL_rtl_pragmaz00_bglt BGl_rtl_pragmazd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 850 */
			{	/* SawMill/defs.sch 850 */
				obj_t BgL_classz00_4296;

				BgL_classz00_4296 = BGl_rtl_pragmaz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 850 */
					obj_t BgL__ortest_1106z00_4297;

					BgL__ortest_1106z00_4297 = BGL_CLASS_NIL(BgL_classz00_4296);
					if (CBOOL(BgL__ortest_1106z00_4297))
						{	/* SawMill/defs.sch 850 */
							return ((BgL_rtl_pragmaz00_bglt) BgL__ortest_1106z00_4297);
						}
					else
						{	/* SawMill/defs.sch 850 */
							return
								((BgL_rtl_pragmaz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4296));
						}
				}
			}
		}

	}



/* &rtl_pragma-nil */
	BgL_rtl_pragmaz00_bglt BGl_z62rtl_pragmazd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5733)
	{
		{	/* SawMill/defs.sch 850 */
			return BGl_rtl_pragmazd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_pragma-format */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_pragmazd2formatzd2zzsaw_defsz00(BgL_rtl_pragmaz00_bglt BgL_oz00_351)
	{
		{	/* SawMill/defs.sch 851 */
			return (((BgL_rtl_pragmaz00_bglt) COBJECT(BgL_oz00_351))->BgL_formatz00);
		}

	}



/* &rtl_pragma-format */
	obj_t BGl_z62rtl_pragmazd2formatzb0zzsaw_defsz00(obj_t BgL_envz00_5734,
		obj_t BgL_oz00_5735)
	{
		{	/* SawMill/defs.sch 851 */
			return
				BGl_rtl_pragmazd2formatzd2zzsaw_defsz00(
				((BgL_rtl_pragmaz00_bglt) BgL_oz00_5735));
		}

	}



/* rtl_pragma-format-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_pragmazd2formatzd2setz12z12zzsaw_defsz00(BgL_rtl_pragmaz00_bglt
		BgL_oz00_352, obj_t BgL_vz00_353)
	{
		{	/* SawMill/defs.sch 852 */
			return
				((((BgL_rtl_pragmaz00_bglt) COBJECT(BgL_oz00_352))->BgL_formatz00) =
				((obj_t) BgL_vz00_353), BUNSPEC);
		}

	}



/* &rtl_pragma-format-set! */
	obj_t BGl_z62rtl_pragmazd2formatzd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5736, obj_t BgL_oz00_5737, obj_t BgL_vz00_5738)
	{
		{	/* SawMill/defs.sch 852 */
			return
				BGl_rtl_pragmazd2formatzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_pragmaz00_bglt) BgL_oz00_5737), BgL_vz00_5738);
		}

	}



/* rtl_pragma-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_pragmazd2loczd2zzsaw_defsz00(BgL_rtl_pragmaz00_bglt BgL_oz00_354)
	{
		{	/* SawMill/defs.sch 853 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_354)))->BgL_locz00);
		}

	}



/* &rtl_pragma-loc */
	obj_t BGl_z62rtl_pragmazd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5739,
		obj_t BgL_oz00_5740)
	{
		{	/* SawMill/defs.sch 853 */
			return
				BGl_rtl_pragmazd2loczd2zzsaw_defsz00(
				((BgL_rtl_pragmaz00_bglt) BgL_oz00_5740));
		}

	}



/* rtl_pragma-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_pragmazd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_pragmaz00_bglt
		BgL_oz00_355, obj_t BgL_vz00_356)
	{
		{	/* SawMill/defs.sch 854 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_355)))->BgL_locz00) =
				((obj_t) BgL_vz00_356), BUNSPEC);
		}

	}



/* &rtl_pragma-loc-set! */
	obj_t BGl_z62rtl_pragmazd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5741,
		obj_t BgL_oz00_5742, obj_t BgL_vz00_5743)
	{
		{	/* SawMill/defs.sch 854 */
			return
				BGl_rtl_pragmazd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_pragmaz00_bglt) BgL_oz00_5742), BgL_vz00_5743);
		}

	}



/* make-rtl_cast */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt
		BGl_makezd2rtl_castzd2zzsaw_defsz00(obj_t BgL_loc1354z00_357,
		BgL_typez00_bglt BgL_totype1355z00_358,
		BgL_typez00_bglt BgL_fromtype1356z00_359)
	{
		{	/* SawMill/defs.sch 857 */
			{	/* SawMill/defs.sch 857 */
				BgL_rtl_castz00_bglt BgL_new1410z00_6965;

				{	/* SawMill/defs.sch 857 */
					BgL_rtl_castz00_bglt BgL_new1409z00_6966;

					BgL_new1409z00_6966 =
						((BgL_rtl_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_castz00_bgl))));
					{	/* SawMill/defs.sch 857 */
						long BgL_arg1858z00_6967;

						{	/* SawMill/defs.sch 857 */
							long BgL_res2995z00_6968;

							BgL_res2995z00_6968 =
								BGL_CLASS_INDEX(BGl_rtl_castz00zzsaw_defsz00);
							BgL_arg1858z00_6967 = BgL_res2995z00_6968;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1409z00_6966), BgL_arg1858z00_6967);
					}
					BgL_new1410z00_6965 = BgL_new1409z00_6966;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1410z00_6965)))->BgL_locz00) =
					((obj_t) BgL_loc1354z00_357), BUNSPEC);
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1410z00_6965))->
						BgL_totypez00) =
					((BgL_typez00_bglt) BgL_totype1355z00_358), BUNSPEC);
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1410z00_6965))->
						BgL_fromtypez00) =
					((BgL_typez00_bglt) BgL_fromtype1356z00_359), BUNSPEC);
				return BgL_new1410z00_6965;
			}
		}

	}



/* &make-rtl_cast */
	BgL_rtl_castz00_bglt BGl_z62makezd2rtl_castzb0zzsaw_defsz00(obj_t
		BgL_envz00_5744, obj_t BgL_loc1354z00_5745, obj_t BgL_totype1355z00_5746,
		obj_t BgL_fromtype1356z00_5747)
	{
		{	/* SawMill/defs.sch 857 */
			return
				BGl_makezd2rtl_castzd2zzsaw_defsz00(BgL_loc1354z00_5745,
				((BgL_typez00_bglt) BgL_totype1355z00_5746),
				((BgL_typez00_bglt) BgL_fromtype1356z00_5747));
		}

	}



/* rtl_cast? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_castzf3zf3zzsaw_defsz00(obj_t BgL_objz00_360)
	{
		{	/* SawMill/defs.sch 858 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_360,
				BGl_rtl_castz00zzsaw_defsz00);
		}

	}



/* &rtl_cast? */
	obj_t BGl_z62rtl_castzf3z91zzsaw_defsz00(obj_t BgL_envz00_5748,
		obj_t BgL_objz00_5749)
	{
		{	/* SawMill/defs.sch 858 */
			return BBOOL(BGl_rtl_castzf3zf3zzsaw_defsz00(BgL_objz00_5749));
		}

	}



/* rtl_cast-nil */
	BGL_EXPORTED_DEF BgL_rtl_castz00_bglt BGl_rtl_castzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 859 */
			{	/* SawMill/defs.sch 859 */
				obj_t BgL_classz00_4305;

				BgL_classz00_4305 = BGl_rtl_castz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 859 */
					obj_t BgL__ortest_1106z00_4306;

					BgL__ortest_1106z00_4306 = BGL_CLASS_NIL(BgL_classz00_4305);
					if (CBOOL(BgL__ortest_1106z00_4306))
						{	/* SawMill/defs.sch 859 */
							return ((BgL_rtl_castz00_bglt) BgL__ortest_1106z00_4306);
						}
					else
						{	/* SawMill/defs.sch 859 */
							return
								((BgL_rtl_castz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4305));
						}
				}
			}
		}

	}



/* &rtl_cast-nil */
	BgL_rtl_castz00_bglt BGl_z62rtl_castzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5750)
	{
		{	/* SawMill/defs.sch 859 */
			return BGl_rtl_castzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_cast-fromtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_castzd2fromtypezd2zzsaw_defsz00(BgL_rtl_castz00_bglt BgL_oz00_361)
	{
		{	/* SawMill/defs.sch 860 */
			return (((BgL_rtl_castz00_bglt) COBJECT(BgL_oz00_361))->BgL_fromtypez00);
		}

	}



/* &rtl_cast-fromtype */
	BgL_typez00_bglt BGl_z62rtl_castzd2fromtypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5751, obj_t BgL_oz00_5752)
	{
		{	/* SawMill/defs.sch 860 */
			return
				BGl_rtl_castzd2fromtypezd2zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5752));
		}

	}



/* rtl_cast-fromtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_castzd2fromtypezd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt
		BgL_oz00_362, BgL_typez00_bglt BgL_vz00_363)
	{
		{	/* SawMill/defs.sch 861 */
			return
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_oz00_362))->BgL_fromtypez00) =
				((BgL_typez00_bglt) BgL_vz00_363), BUNSPEC);
		}

	}



/* &rtl_cast-fromtype-set! */
	obj_t BGl_z62rtl_castzd2fromtypezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5753, obj_t BgL_oz00_5754, obj_t BgL_vz00_5755)
	{
		{	/* SawMill/defs.sch 861 */
			return
				BGl_rtl_castzd2fromtypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5754),
				((BgL_typez00_bglt) BgL_vz00_5755));
		}

	}



/* rtl_cast-totype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_castzd2totypezd2zzsaw_defsz00(BgL_rtl_castz00_bglt BgL_oz00_364)
	{
		{	/* SawMill/defs.sch 862 */
			return (((BgL_rtl_castz00_bglt) COBJECT(BgL_oz00_364))->BgL_totypez00);
		}

	}



/* &rtl_cast-totype */
	BgL_typez00_bglt BGl_z62rtl_castzd2totypezb0zzsaw_defsz00(obj_t
		BgL_envz00_5756, obj_t BgL_oz00_5757)
	{
		{	/* SawMill/defs.sch 862 */
			return
				BGl_rtl_castzd2totypezd2zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5757));
		}

	}



/* rtl_cast-totype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_castzd2totypezd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt
		BgL_oz00_365, BgL_typez00_bglt BgL_vz00_366)
	{
		{	/* SawMill/defs.sch 863 */
			return
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_oz00_365))->BgL_totypez00) =
				((BgL_typez00_bglt) BgL_vz00_366), BUNSPEC);
		}

	}



/* &rtl_cast-totype-set! */
	obj_t BGl_z62rtl_castzd2totypezd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5758,
		obj_t BgL_oz00_5759, obj_t BgL_vz00_5760)
	{
		{	/* SawMill/defs.sch 863 */
			return
				BGl_rtl_castzd2totypezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5759),
				((BgL_typez00_bglt) BgL_vz00_5760));
		}

	}



/* rtl_cast-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_castzd2loczd2zzsaw_defsz00(BgL_rtl_castz00_bglt
		BgL_oz00_367)
	{
		{	/* SawMill/defs.sch 864 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_367)))->BgL_locz00);
		}

	}



/* &rtl_cast-loc */
	obj_t BGl_z62rtl_castzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5761,
		obj_t BgL_oz00_5762)
	{
		{	/* SawMill/defs.sch 864 */
			return
				BGl_rtl_castzd2loczd2zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5762));
		}

	}



/* rtl_cast-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_castzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_castz00_bglt
		BgL_oz00_368, obj_t BgL_vz00_369)
	{
		{	/* SawMill/defs.sch 865 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_368)))->BgL_locz00) =
				((obj_t) BgL_vz00_369), BUNSPEC);
		}

	}



/* &rtl_cast-loc-set! */
	obj_t BGl_z62rtl_castzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5763,
		obj_t BgL_oz00_5764, obj_t BgL_vz00_5765)
	{
		{	/* SawMill/defs.sch 865 */
			return
				BGl_rtl_castzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_castz00_bglt) BgL_oz00_5764), BgL_vz00_5765);
		}

	}



/* make-rtl_cast_null */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t BgL_loc1351z00_370,
		BgL_typez00_bglt BgL_type1352z00_371)
	{
		{	/* SawMill/defs.sch 868 */
			{	/* SawMill/defs.sch 868 */
				BgL_rtl_cast_nullz00_bglt BgL_new1412z00_6969;

				{	/* SawMill/defs.sch 868 */
					BgL_rtl_cast_nullz00_bglt BgL_new1411z00_6970;

					BgL_new1411z00_6970 =
						((BgL_rtl_cast_nullz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_cast_nullz00_bgl))));
					{	/* SawMill/defs.sch 868 */
						long BgL_arg1859z00_6971;

						{	/* SawMill/defs.sch 868 */
							long BgL_res2996z00_6972;

							BgL_res2996z00_6972 =
								BGL_CLASS_INDEX(BGl_rtl_cast_nullz00zzsaw_defsz00);
							BgL_arg1859z00_6971 = BgL_res2996z00_6972;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1411z00_6970), BgL_arg1859z00_6971);
					}
					BgL_new1412z00_6969 = BgL_new1411z00_6970;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1412z00_6969)))->BgL_locz00) =
					((obj_t) BgL_loc1351z00_370), BUNSPEC);
				((((BgL_rtl_cast_nullz00_bglt) COBJECT(BgL_new1412z00_6969))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type1352z00_371), BUNSPEC);
				return BgL_new1412z00_6969;
			}
		}

	}



/* &make-rtl_cast_null */
	BgL_rtl_cast_nullz00_bglt BGl_z62makezd2rtl_cast_nullzb0zzsaw_defsz00(obj_t
		BgL_envz00_5766, obj_t BgL_loc1351z00_5767, obj_t BgL_type1352z00_5768)
	{
		{	/* SawMill/defs.sch 868 */
			return
				BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(BgL_loc1351z00_5767,
				((BgL_typez00_bglt) BgL_type1352z00_5768));
		}

	}



/* rtl_cast_null? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_cast_nullzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_372)
	{
		{	/* SawMill/defs.sch 869 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_372,
				BGl_rtl_cast_nullz00zzsaw_defsz00);
		}

	}



/* &rtl_cast_null? */
	obj_t BGl_z62rtl_cast_nullzf3z91zzsaw_defsz00(obj_t BgL_envz00_5769,
		obj_t BgL_objz00_5770)
	{
		{	/* SawMill/defs.sch 869 */
			return BBOOL(BGl_rtl_cast_nullzf3zf3zzsaw_defsz00(BgL_objz00_5770));
		}

	}



/* rtl_cast_null-nil */
	BGL_EXPORTED_DEF BgL_rtl_cast_nullz00_bglt
		BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 870 */
			{	/* SawMill/defs.sch 870 */
				obj_t BgL_classz00_4314;

				BgL_classz00_4314 = BGl_rtl_cast_nullz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 870 */
					obj_t BgL__ortest_1106z00_4315;

					BgL__ortest_1106z00_4315 = BGL_CLASS_NIL(BgL_classz00_4314);
					if (CBOOL(BgL__ortest_1106z00_4315))
						{	/* SawMill/defs.sch 870 */
							return ((BgL_rtl_cast_nullz00_bglt) BgL__ortest_1106z00_4315);
						}
					else
						{	/* SawMill/defs.sch 870 */
							return
								((BgL_rtl_cast_nullz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4314));
						}
				}
			}
		}

	}



/* &rtl_cast_null-nil */
	BgL_rtl_cast_nullz00_bglt BGl_z62rtl_cast_nullzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5771)
	{
		{	/* SawMill/defs.sch 870 */
			return BGl_rtl_cast_nullzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_cast_null-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_cast_nullzd2typezd2zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt
		BgL_oz00_373)
	{
		{	/* SawMill/defs.sch 871 */
			return (((BgL_rtl_cast_nullz00_bglt) COBJECT(BgL_oz00_373))->BgL_typez00);
		}

	}



/* &rtl_cast_null-type */
	BgL_typez00_bglt BGl_z62rtl_cast_nullzd2typezb0zzsaw_defsz00(obj_t
		BgL_envz00_5772, obj_t BgL_oz00_5773)
	{
		{	/* SawMill/defs.sch 871 */
			return
				BGl_rtl_cast_nullzd2typezd2zzsaw_defsz00(
				((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5773));
		}

	}



/* rtl_cast_null-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_cast_nullzd2typezd2setz12z12zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt
		BgL_oz00_374, BgL_typez00_bglt BgL_vz00_375)
	{
		{	/* SawMill/defs.sch 872 */
			return
				((((BgL_rtl_cast_nullz00_bglt) COBJECT(BgL_oz00_374))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_375), BUNSPEC);
		}

	}



/* &rtl_cast_null-type-set! */
	obj_t BGl_z62rtl_cast_nullzd2typezd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5774, obj_t BgL_oz00_5775, obj_t BgL_vz00_5776)
	{
		{	/* SawMill/defs.sch 872 */
			return
				BGl_rtl_cast_nullzd2typezd2setz12z12zzsaw_defsz00(
				((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5775),
				((BgL_typez00_bglt) BgL_vz00_5776));
		}

	}



/* rtl_cast_null-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_cast_nullzd2loczd2zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt
		BgL_oz00_376)
	{
		{	/* SawMill/defs.sch 873 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_376)))->BgL_locz00);
		}

	}



/* &rtl_cast_null-loc */
	obj_t BGl_z62rtl_cast_nullzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5777,
		obj_t BgL_oz00_5778)
	{
		{	/* SawMill/defs.sch 873 */
			return
				BGl_rtl_cast_nullzd2loczd2zzsaw_defsz00(
				((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5778));
		}

	}



/* rtl_cast_null-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_cast_nullzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_cast_nullz00_bglt
		BgL_oz00_377, obj_t BgL_vz00_378)
	{
		{	/* SawMill/defs.sch 874 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_377)))->BgL_locz00) =
				((obj_t) BgL_vz00_378), BUNSPEC);
		}

	}



/* &rtl_cast_null-loc-set! */
	obj_t BGl_z62rtl_cast_nullzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5779, obj_t BgL_oz00_5780, obj_t BgL_vz00_5781)
	{
		{	/* SawMill/defs.sch 874 */
			return
				BGl_rtl_cast_nullzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_cast_nullz00_bglt) BgL_oz00_5780), BgL_vz00_5781);
		}

	}



/* make-rtl_protect */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_makezd2rtl_protectzd2zzsaw_defsz00(obj_t BgL_loc1348z00_379)
	{
		{	/* SawMill/defs.sch 877 */
			{	/* SawMill/defs.sch 877 */
				BgL_rtl_protectz00_bglt BgL_new1414z00_6973;

				{	/* SawMill/defs.sch 877 */
					BgL_rtl_protectz00_bglt BgL_new1413z00_6974;

					BgL_new1413z00_6974 =
						((BgL_rtl_protectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_protectz00_bgl))));
					{	/* SawMill/defs.sch 877 */
						long BgL_arg1861z00_6975;

						{	/* SawMill/defs.sch 877 */
							long BgL_res2997z00_6976;

							BgL_res2997z00_6976 =
								BGL_CLASS_INDEX(BGl_rtl_protectz00zzsaw_defsz00);
							BgL_arg1861z00_6975 = BgL_res2997z00_6976;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1413z00_6974), BgL_arg1861z00_6975);
					}
					BgL_new1414z00_6973 = BgL_new1413z00_6974;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1414z00_6973)))->BgL_locz00) =
					((obj_t) BgL_loc1348z00_379), BUNSPEC);
				return BgL_new1414z00_6973;
			}
		}

	}



/* &make-rtl_protect */
	BgL_rtl_protectz00_bglt BGl_z62makezd2rtl_protectzb0zzsaw_defsz00(obj_t
		BgL_envz00_5782, obj_t BgL_loc1348z00_5783)
	{
		{	/* SawMill/defs.sch 877 */
			return BGl_makezd2rtl_protectzd2zzsaw_defsz00(BgL_loc1348z00_5783);
		}

	}



/* rtl_protect? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_protectzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_380)
	{
		{	/* SawMill/defs.sch 878 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_380,
				BGl_rtl_protectz00zzsaw_defsz00);
		}

	}



/* &rtl_protect? */
	obj_t BGl_z62rtl_protectzf3z91zzsaw_defsz00(obj_t BgL_envz00_5784,
		obj_t BgL_objz00_5785)
	{
		{	/* SawMill/defs.sch 878 */
			return BBOOL(BGl_rtl_protectzf3zf3zzsaw_defsz00(BgL_objz00_5785));
		}

	}



/* rtl_protect-nil */
	BGL_EXPORTED_DEF BgL_rtl_protectz00_bglt
		BGl_rtl_protectzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 879 */
			{	/* SawMill/defs.sch 879 */
				obj_t BgL_classz00_4323;

				BgL_classz00_4323 = BGl_rtl_protectz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 879 */
					obj_t BgL__ortest_1106z00_4324;

					BgL__ortest_1106z00_4324 = BGL_CLASS_NIL(BgL_classz00_4323);
					if (CBOOL(BgL__ortest_1106z00_4324))
						{	/* SawMill/defs.sch 879 */
							return ((BgL_rtl_protectz00_bglt) BgL__ortest_1106z00_4324);
						}
					else
						{	/* SawMill/defs.sch 879 */
							return
								((BgL_rtl_protectz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4323));
						}
				}
			}
		}

	}



/* &rtl_protect-nil */
	BgL_rtl_protectz00_bglt BGl_z62rtl_protectzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5786)
	{
		{	/* SawMill/defs.sch 879 */
			return BGl_rtl_protectzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_protect-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_protectzd2loczd2zzsaw_defsz00(BgL_rtl_protectz00_bglt BgL_oz00_381)
	{
		{	/* SawMill/defs.sch 880 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_381)))->BgL_locz00);
		}

	}



/* &rtl_protect-loc */
	obj_t BGl_z62rtl_protectzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5787,
		obj_t BgL_oz00_5788)
	{
		{	/* SawMill/defs.sch 880 */
			return
				BGl_rtl_protectzd2loczd2zzsaw_defsz00(
				((BgL_rtl_protectz00_bglt) BgL_oz00_5788));
		}

	}



/* rtl_protect-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_protectzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_protectz00_bglt
		BgL_oz00_382, obj_t BgL_vz00_383)
	{
		{	/* SawMill/defs.sch 881 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_382)))->BgL_locz00) =
				((obj_t) BgL_vz00_383), BUNSPEC);
		}

	}



/* &rtl_protect-loc-set! */
	obj_t BGl_z62rtl_protectzd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5789,
		obj_t BgL_oz00_5790, obj_t BgL_vz00_5791)
	{
		{	/* SawMill/defs.sch 881 */
			return
				BGl_rtl_protectzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_protectz00_bglt) BgL_oz00_5790), BgL_vz00_5791);
		}

	}



/* make-rtl_protected */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_makezd2rtl_protectedzd2zzsaw_defsz00(obj_t BgL_loc1345z00_384)
	{
		{	/* SawMill/defs.sch 884 */
			{	/* SawMill/defs.sch 884 */
				BgL_rtl_protectedz00_bglt BgL_new1416z00_6977;

				{	/* SawMill/defs.sch 884 */
					BgL_rtl_protectedz00_bglt BgL_new1415z00_6978;

					BgL_new1415z00_6978 =
						((BgL_rtl_protectedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_protectedz00_bgl))));
					{	/* SawMill/defs.sch 884 */
						long BgL_arg1862z00_6979;

						{	/* SawMill/defs.sch 884 */
							long BgL_res2998z00_6980;

							BgL_res2998z00_6980 =
								BGL_CLASS_INDEX(BGl_rtl_protectedz00zzsaw_defsz00);
							BgL_arg1862z00_6979 = BgL_res2998z00_6980;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1415z00_6978), BgL_arg1862z00_6979);
					}
					BgL_new1416z00_6977 = BgL_new1415z00_6978;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1416z00_6977)))->BgL_locz00) =
					((obj_t) BgL_loc1345z00_384), BUNSPEC);
				return BgL_new1416z00_6977;
			}
		}

	}



/* &make-rtl_protected */
	BgL_rtl_protectedz00_bglt BGl_z62makezd2rtl_protectedzb0zzsaw_defsz00(obj_t
		BgL_envz00_5792, obj_t BgL_loc1345z00_5793)
	{
		{	/* SawMill/defs.sch 884 */
			return BGl_makezd2rtl_protectedzd2zzsaw_defsz00(BgL_loc1345z00_5793);
		}

	}



/* rtl_protected? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_protectedzf3zf3zzsaw_defsz00(obj_t
		BgL_objz00_385)
	{
		{	/* SawMill/defs.sch 885 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_385,
				BGl_rtl_protectedz00zzsaw_defsz00);
		}

	}



/* &rtl_protected? */
	obj_t BGl_z62rtl_protectedzf3z91zzsaw_defsz00(obj_t BgL_envz00_5794,
		obj_t BgL_objz00_5795)
	{
		{	/* SawMill/defs.sch 885 */
			return BBOOL(BGl_rtl_protectedzf3zf3zzsaw_defsz00(BgL_objz00_5795));
		}

	}



/* rtl_protected-nil */
	BGL_EXPORTED_DEF BgL_rtl_protectedz00_bglt
		BGl_rtl_protectedzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 886 */
			{	/* SawMill/defs.sch 886 */
				obj_t BgL_classz00_4332;

				BgL_classz00_4332 = BGl_rtl_protectedz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 886 */
					obj_t BgL__ortest_1106z00_4333;

					BgL__ortest_1106z00_4333 = BGL_CLASS_NIL(BgL_classz00_4332);
					if (CBOOL(BgL__ortest_1106z00_4333))
						{	/* SawMill/defs.sch 886 */
							return ((BgL_rtl_protectedz00_bglt) BgL__ortest_1106z00_4333);
						}
					else
						{	/* SawMill/defs.sch 886 */
							return
								((BgL_rtl_protectedz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4332));
						}
				}
			}
		}

	}



/* &rtl_protected-nil */
	BgL_rtl_protectedz00_bglt BGl_z62rtl_protectedzd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5796)
	{
		{	/* SawMill/defs.sch 886 */
			return BGl_rtl_protectedzd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_protected-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_protectedzd2loczd2zzsaw_defsz00(BgL_rtl_protectedz00_bglt
		BgL_oz00_386)
	{
		{	/* SawMill/defs.sch 887 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_386)))->BgL_locz00);
		}

	}



/* &rtl_protected-loc */
	obj_t BGl_z62rtl_protectedzd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5797,
		obj_t BgL_oz00_5798)
	{
		{	/* SawMill/defs.sch 887 */
			return
				BGl_rtl_protectedzd2loczd2zzsaw_defsz00(
				((BgL_rtl_protectedz00_bglt) BgL_oz00_5798));
		}

	}



/* rtl_protected-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_protectedzd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_protectedz00_bglt
		BgL_oz00_387, obj_t BgL_vz00_388)
	{
		{	/* SawMill/defs.sch 888 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_387)))->BgL_locz00) =
				((obj_t) BgL_vz00_388), BUNSPEC);
		}

	}



/* &rtl_protected-loc-set! */
	obj_t BGl_z62rtl_protectedzd2loczd2setz12z70zzsaw_defsz00(obj_t
		BgL_envz00_5799, obj_t BgL_oz00_5800, obj_t BgL_vz00_5801)
	{
		{	/* SawMill/defs.sch 888 */
			return
				BGl_rtl_protectedzd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_protectedz00_bglt) BgL_oz00_5800), BgL_vz00_5801);
		}

	}



/* make-rtl_ins */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t
		BgL_loc1339z00_389, obj_t BgL_z52spill1340z52_390,
		obj_t BgL_dest1341z00_391, BgL_rtl_funz00_bglt BgL_fun1342z00_392,
		obj_t BgL_args1343z00_393)
	{
		{	/* SawMill/defs.sch 891 */
			{	/* SawMill/defs.sch 891 */
				BgL_rtl_insz00_bglt BgL_new1418z00_6981;

				{	/* SawMill/defs.sch 891 */
					BgL_rtl_insz00_bglt BgL_new1417z00_6982;

					BgL_new1417z00_6982 =
						((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_insz00_bgl))));
					{	/* SawMill/defs.sch 891 */
						long BgL_arg1863z00_6983;

						{	/* SawMill/defs.sch 891 */
							long BgL_res2999z00_6984;

							BgL_res2999z00_6984 =
								BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
							BgL_arg1863z00_6983 = BgL_res2999z00_6984;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1417z00_6982), BgL_arg1863z00_6983);
					}
					{	/* SawMill/defs.sch 891 */
						BgL_objectz00_bglt BgL_tmpz00_9140;

						BgL_tmpz00_9140 = ((BgL_objectz00_bglt) BgL_new1417z00_6982);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9140, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1417z00_6982);
					BgL_new1418z00_6981 = BgL_new1417z00_6982;
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1418z00_6981))->BgL_locz00) =
					((obj_t) BgL_loc1339z00_389), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1418z00_6981))->
						BgL_z52spillz52) = ((obj_t) BgL_z52spill1340z52_390), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1418z00_6981))->BgL_destz00) =
					((obj_t) BgL_dest1341z00_391), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1418z00_6981))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) BgL_fun1342z00_392), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1418z00_6981))->BgL_argsz00) =
					((obj_t) BgL_args1343z00_393), BUNSPEC);
				return BgL_new1418z00_6981;
			}
		}

	}



/* &make-rtl_ins */
	BgL_rtl_insz00_bglt BGl_z62makezd2rtl_inszb0zzsaw_defsz00(obj_t
		BgL_envz00_5802, obj_t BgL_loc1339z00_5803, obj_t BgL_z52spill1340z52_5804,
		obj_t BgL_dest1341z00_5805, obj_t BgL_fun1342z00_5806,
		obj_t BgL_args1343z00_5807)
	{
		{	/* SawMill/defs.sch 891 */
			return
				BGl_makezd2rtl_inszd2zzsaw_defsz00(BgL_loc1339z00_5803,
				BgL_z52spill1340z52_5804, BgL_dest1341z00_5805,
				((BgL_rtl_funz00_bglt) BgL_fun1342z00_5806), BgL_args1343z00_5807);
		}

	}



/* rtl_ins? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_inszf3zf3zzsaw_defsz00(obj_t BgL_objz00_394)
	{
		{	/* SawMill/defs.sch 892 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_394, BGl_rtl_insz00zzsaw_defsz00);
		}

	}



/* &rtl_ins? */
	obj_t BGl_z62rtl_inszf3z91zzsaw_defsz00(obj_t BgL_envz00_5808,
		obj_t BgL_objz00_5809)
	{
		{	/* SawMill/defs.sch 892 */
			return BBOOL(BGl_rtl_inszf3zf3zzsaw_defsz00(BgL_objz00_5809));
		}

	}



/* rtl_ins-nil */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt BGl_rtl_inszd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 893 */
			{	/* SawMill/defs.sch 893 */
				obj_t BgL_classz00_4342;

				BgL_classz00_4342 = BGl_rtl_insz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 893 */
					obj_t BgL__ortest_1106z00_4343;

					BgL__ortest_1106z00_4343 = BGL_CLASS_NIL(BgL_classz00_4342);
					if (CBOOL(BgL__ortest_1106z00_4343))
						{	/* SawMill/defs.sch 893 */
							return ((BgL_rtl_insz00_bglt) BgL__ortest_1106z00_4343);
						}
					else
						{	/* SawMill/defs.sch 893 */
							return
								((BgL_rtl_insz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4342));
						}
				}
			}
		}

	}



/* &rtl_ins-nil */
	BgL_rtl_insz00_bglt BGl_z62rtl_inszd2nilzb0zzsaw_defsz00(obj_t
		BgL_envz00_5810)
	{
		{	/* SawMill/defs.sch 893 */
			return BGl_rtl_inszd2nilzd2zzsaw_defsz00();
		}

	}



/* rtl_ins-args */
	BGL_EXPORTED_DEF obj_t BGl_rtl_inszd2argszd2zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_395)
	{
		{	/* SawMill/defs.sch 894 */
			return (((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_395))->BgL_argsz00);
		}

	}



/* &rtl_ins-args */
	obj_t BGl_z62rtl_inszd2argszb0zzsaw_defsz00(obj_t BgL_envz00_5811,
		obj_t BgL_oz00_5812)
	{
		{	/* SawMill/defs.sch 894 */
			return
				BGl_rtl_inszd2argszd2zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5812));
		}

	}



/* rtl_ins-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2argszd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_396, obj_t BgL_vz00_397)
	{
		{	/* SawMill/defs.sch 895 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_396))->BgL_argsz00) =
				((obj_t) BgL_vz00_397), BUNSPEC);
		}

	}



/* &rtl_ins-args-set! */
	obj_t BGl_z62rtl_inszd2argszd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5813,
		obj_t BgL_oz00_5814, obj_t BgL_vz00_5815)
	{
		{	/* SawMill/defs.sch 895 */
			return
				BGl_rtl_inszd2argszd2setz12z12zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5814), BgL_vz00_5815);
		}

	}



/* rtl_ins-fun */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt
		BGl_rtl_inszd2funzd2zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_398)
	{
		{	/* SawMill/defs.sch 896 */
			return (((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_398))->BgL_funz00);
		}

	}



/* &rtl_ins-fun */
	BgL_rtl_funz00_bglt BGl_z62rtl_inszd2funzb0zzsaw_defsz00(obj_t
		BgL_envz00_5816, obj_t BgL_oz00_5817)
	{
		{	/* SawMill/defs.sch 896 */
			return
				BGl_rtl_inszd2funzd2zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5817));
		}

	}



/* rtl_ins-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2funzd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_399,
		BgL_rtl_funz00_bglt BgL_vz00_400)
	{
		{	/* SawMill/defs.sch 897 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_399))->BgL_funz00) =
				((BgL_rtl_funz00_bglt) BgL_vz00_400), BUNSPEC);
		}

	}



/* &rtl_ins-fun-set! */
	obj_t BGl_z62rtl_inszd2funzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5818,
		obj_t BgL_oz00_5819, obj_t BgL_vz00_5820)
	{
		{	/* SawMill/defs.sch 897 */
			return
				BGl_rtl_inszd2funzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5819),
				((BgL_rtl_funz00_bglt) BgL_vz00_5820));
		}

	}



/* rtl_ins-dest */
	BGL_EXPORTED_DEF obj_t BGl_rtl_inszd2destzd2zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_401)
	{
		{	/* SawMill/defs.sch 898 */
			return (((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_401))->BgL_destz00);
		}

	}



/* &rtl_ins-dest */
	obj_t BGl_z62rtl_inszd2destzb0zzsaw_defsz00(obj_t BgL_envz00_5821,
		obj_t BgL_oz00_5822)
	{
		{	/* SawMill/defs.sch 898 */
			return
				BGl_rtl_inszd2destzd2zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5822));
		}

	}



/* rtl_ins-dest-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2destzd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_402, obj_t BgL_vz00_403)
	{
		{	/* SawMill/defs.sch 899 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_402))->BgL_destz00) =
				((obj_t) BgL_vz00_403), BUNSPEC);
		}

	}



/* &rtl_ins-dest-set! */
	obj_t BGl_z62rtl_inszd2destzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5823,
		obj_t BgL_oz00_5824, obj_t BgL_vz00_5825)
	{
		{	/* SawMill/defs.sch 899 */
			return
				BGl_rtl_inszd2destzd2setz12z12zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5824), BgL_vz00_5825);
		}

	}



/* rtl_ins-%spill */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2z52spillz80zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_404)
	{
		{	/* SawMill/defs.sch 900 */
			return (((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_404))->BgL_z52spillz52);
		}

	}



/* &rtl_ins-%spill */
	obj_t BGl_z62rtl_inszd2z52spillze2zzsaw_defsz00(obj_t BgL_envz00_5826,
		obj_t BgL_oz00_5827)
	{
		{	/* SawMill/defs.sch 900 */
			return
				BGl_rtl_inszd2z52spillz80zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5827));
		}

	}



/* rtl_ins-%spill-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2z52spillzd2setz12z40zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_405, obj_t BgL_vz00_406)
	{
		{	/* SawMill/defs.sch 901 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_405))->BgL_z52spillz52) =
				((obj_t) BgL_vz00_406), BUNSPEC);
		}

	}



/* &rtl_ins-%spill-set! */
	obj_t BGl_z62rtl_inszd2z52spillzd2setz12z22zzsaw_defsz00(obj_t
		BgL_envz00_5828, obj_t BgL_oz00_5829, obj_t BgL_vz00_5830)
	{
		{	/* SawMill/defs.sch 901 */
			return
				BGl_rtl_inszd2z52spillzd2setz12z40zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5829), BgL_vz00_5830);
		}

	}



/* rtl_ins-loc */
	BGL_EXPORTED_DEF obj_t BGl_rtl_inszd2loczd2zzsaw_defsz00(BgL_rtl_insz00_bglt
		BgL_oz00_407)
	{
		{	/* SawMill/defs.sch 902 */
			return (((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_407))->BgL_locz00);
		}

	}



/* &rtl_ins-loc */
	obj_t BGl_z62rtl_inszd2loczb0zzsaw_defsz00(obj_t BgL_envz00_5831,
		obj_t BgL_oz00_5832)
	{
		{	/* SawMill/defs.sch 902 */
			return
				BGl_rtl_inszd2loczd2zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5832));
		}

	}



/* rtl_ins-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2loczd2setz12z12zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_408,
		obj_t BgL_vz00_409)
	{
		{	/* SawMill/defs.sch 903 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_408))->BgL_locz00) =
				((obj_t) BgL_vz00_409), BUNSPEC);
		}

	}



/* &rtl_ins-loc-set! */
	obj_t BGl_z62rtl_inszd2loczd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5833,
		obj_t BgL_oz00_5834, obj_t BgL_vz00_5835)
	{
		{	/* SawMill/defs.sch 903 */
			return
				BGl_rtl_inszd2loczd2setz12z12zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5834), BgL_vz00_5835);
		}

	}



/* make-block */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_makezd2blockzd2zzsaw_defsz00(int
		BgL_label1334z00_410, obj_t BgL_preds1335z00_411,
		obj_t BgL_succs1336z00_412, obj_t BgL_first1337z00_413)
	{
		{	/* SawMill/defs.sch 906 */
			{	/* SawMill/defs.sch 906 */
				BgL_blockz00_bglt BgL_new1420z00_6985;

				{	/* SawMill/defs.sch 906 */
					BgL_blockz00_bglt BgL_new1419z00_6986;

					BgL_new1419z00_6986 =
						((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_blockz00_bgl))));
					{	/* SawMill/defs.sch 906 */
						long BgL_arg1865z00_6987;

						{	/* SawMill/defs.sch 906 */
							long BgL_res3000z00_6988;

							BgL_res3000z00_6988 = BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
							BgL_arg1865z00_6987 = BgL_res3000z00_6988;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1419z00_6986), BgL_arg1865z00_6987);
					}
					{	/* SawMill/defs.sch 906 */
						BgL_objectz00_bglt BgL_tmpz00_9196;

						BgL_tmpz00_9196 = ((BgL_objectz00_bglt) BgL_new1419z00_6986);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9196, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1419z00_6986);
					BgL_new1420z00_6985 = BgL_new1419z00_6986;
				}
				((((BgL_blockz00_bglt) COBJECT(BgL_new1420z00_6985))->BgL_labelz00) =
					((int) BgL_label1334z00_410), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(BgL_new1420z00_6985))->BgL_predsz00) =
					((obj_t) BgL_preds1335z00_411), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(BgL_new1420z00_6985))->BgL_succsz00) =
					((obj_t) BgL_succs1336z00_412), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(BgL_new1420z00_6985))->BgL_firstz00) =
					((obj_t) BgL_first1337z00_413), BUNSPEC);
				return BgL_new1420z00_6985;
			}
		}

	}



/* &make-block */
	BgL_blockz00_bglt BGl_z62makezd2blockzb0zzsaw_defsz00(obj_t BgL_envz00_5836,
		obj_t BgL_label1334z00_5837, obj_t BgL_preds1335z00_5838,
		obj_t BgL_succs1336z00_5839, obj_t BgL_first1337z00_5840)
	{
		{	/* SawMill/defs.sch 906 */
			return
				BGl_makezd2blockzd2zzsaw_defsz00(CINT(BgL_label1334z00_5837),
				BgL_preds1335z00_5838, BgL_succs1336z00_5839, BgL_first1337z00_5840);
		}

	}



/* block? */
	BGL_EXPORTED_DEF bool_t BGl_blockzf3zf3zzsaw_defsz00(obj_t BgL_objz00_414)
	{
		{	/* SawMill/defs.sch 907 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_414, BGl_blockz00zzsaw_defsz00);
		}

	}



/* &block? */
	obj_t BGl_z62blockzf3z91zzsaw_defsz00(obj_t BgL_envz00_5841,
		obj_t BgL_objz00_5842)
	{
		{	/* SawMill/defs.sch 907 */
			return BBOOL(BGl_blockzf3zf3zzsaw_defsz00(BgL_objz00_5842));
		}

	}



/* block-nil */
	BGL_EXPORTED_DEF BgL_blockz00_bglt BGl_blockzd2nilzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.sch 908 */
			{	/* SawMill/defs.sch 908 */
				obj_t BgL_classz00_4352;

				BgL_classz00_4352 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/defs.sch 908 */
					obj_t BgL__ortest_1106z00_4353;

					BgL__ortest_1106z00_4353 = BGL_CLASS_NIL(BgL_classz00_4352);
					if (CBOOL(BgL__ortest_1106z00_4353))
						{	/* SawMill/defs.sch 908 */
							return ((BgL_blockz00_bglt) BgL__ortest_1106z00_4353);
						}
					else
						{	/* SawMill/defs.sch 908 */
							return
								((BgL_blockz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4352));
						}
				}
			}
		}

	}



/* &block-nil */
	BgL_blockz00_bglt BGl_z62blockzd2nilzb0zzsaw_defsz00(obj_t BgL_envz00_5843)
	{
		{	/* SawMill/defs.sch 908 */
			return BGl_blockzd2nilzd2zzsaw_defsz00();
		}

	}



/* block-first */
	BGL_EXPORTED_DEF obj_t BGl_blockzd2firstzd2zzsaw_defsz00(BgL_blockz00_bglt
		BgL_oz00_415)
	{
		{	/* SawMill/defs.sch 909 */
			return (((BgL_blockz00_bglt) COBJECT(BgL_oz00_415))->BgL_firstz00);
		}

	}



/* &block-first */
	obj_t BGl_z62blockzd2firstzb0zzsaw_defsz00(obj_t BgL_envz00_5844,
		obj_t BgL_oz00_5845)
	{
		{	/* SawMill/defs.sch 909 */
			return
				BGl_blockzd2firstzd2zzsaw_defsz00(((BgL_blockz00_bglt) BgL_oz00_5845));
		}

	}



/* block-first-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2firstzd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt BgL_oz00_416,
		obj_t BgL_vz00_417)
	{
		{	/* SawMill/defs.sch 910 */
			return
				((((BgL_blockz00_bglt) COBJECT(BgL_oz00_416))->BgL_firstz00) =
				((obj_t) BgL_vz00_417), BUNSPEC);
		}

	}



/* &block-first-set! */
	obj_t BGl_z62blockzd2firstzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5846,
		obj_t BgL_oz00_5847, obj_t BgL_vz00_5848)
	{
		{	/* SawMill/defs.sch 910 */
			return
				BGl_blockzd2firstzd2setz12z12zzsaw_defsz00(
				((BgL_blockz00_bglt) BgL_oz00_5847), BgL_vz00_5848);
		}

	}



/* block-succs */
	BGL_EXPORTED_DEF obj_t BGl_blockzd2succszd2zzsaw_defsz00(BgL_blockz00_bglt
		BgL_oz00_418)
	{
		{	/* SawMill/defs.sch 911 */
			return (((BgL_blockz00_bglt) COBJECT(BgL_oz00_418))->BgL_succsz00);
		}

	}



/* &block-succs */
	obj_t BGl_z62blockzd2succszb0zzsaw_defsz00(obj_t BgL_envz00_5849,
		obj_t BgL_oz00_5850)
	{
		{	/* SawMill/defs.sch 911 */
			return
				BGl_blockzd2succszd2zzsaw_defsz00(((BgL_blockz00_bglt) BgL_oz00_5850));
		}

	}



/* block-succs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2succszd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt BgL_oz00_419,
		obj_t BgL_vz00_420)
	{
		{	/* SawMill/defs.sch 912 */
			return
				((((BgL_blockz00_bglt) COBJECT(BgL_oz00_419))->BgL_succsz00) =
				((obj_t) BgL_vz00_420), BUNSPEC);
		}

	}



/* &block-succs-set! */
	obj_t BGl_z62blockzd2succszd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5851,
		obj_t BgL_oz00_5852, obj_t BgL_vz00_5853)
	{
		{	/* SawMill/defs.sch 912 */
			return
				BGl_blockzd2succszd2setz12z12zzsaw_defsz00(
				((BgL_blockz00_bglt) BgL_oz00_5852), BgL_vz00_5853);
		}

	}



/* block-preds */
	BGL_EXPORTED_DEF obj_t BGl_blockzd2predszd2zzsaw_defsz00(BgL_blockz00_bglt
		BgL_oz00_421)
	{
		{	/* SawMill/defs.sch 913 */
			return (((BgL_blockz00_bglt) COBJECT(BgL_oz00_421))->BgL_predsz00);
		}

	}



/* &block-preds */
	obj_t BGl_z62blockzd2predszb0zzsaw_defsz00(obj_t BgL_envz00_5854,
		obj_t BgL_oz00_5855)
	{
		{	/* SawMill/defs.sch 913 */
			return
				BGl_blockzd2predszd2zzsaw_defsz00(((BgL_blockz00_bglt) BgL_oz00_5855));
		}

	}



/* block-preds-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2predszd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt BgL_oz00_422,
		obj_t BgL_vz00_423)
	{
		{	/* SawMill/defs.sch 914 */
			return
				((((BgL_blockz00_bglt) COBJECT(BgL_oz00_422))->BgL_predsz00) =
				((obj_t) BgL_vz00_423), BUNSPEC);
		}

	}



/* &block-preds-set! */
	obj_t BGl_z62blockzd2predszd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5856,
		obj_t BgL_oz00_5857, obj_t BgL_vz00_5858)
	{
		{	/* SawMill/defs.sch 914 */
			return
				BGl_blockzd2predszd2setz12z12zzsaw_defsz00(
				((BgL_blockz00_bglt) BgL_oz00_5857), BgL_vz00_5858);
		}

	}



/* block-label */
	BGL_EXPORTED_DEF int BGl_blockzd2labelzd2zzsaw_defsz00(BgL_blockz00_bglt
		BgL_oz00_424)
	{
		{	/* SawMill/defs.sch 915 */
			return (((BgL_blockz00_bglt) COBJECT(BgL_oz00_424))->BgL_labelz00);
		}

	}



/* &block-label */
	obj_t BGl_z62blockzd2labelzb0zzsaw_defsz00(obj_t BgL_envz00_5859,
		obj_t BgL_oz00_5860)
	{
		{	/* SawMill/defs.sch 915 */
			return
				BINT(BGl_blockzd2labelzd2zzsaw_defsz00(
					((BgL_blockz00_bglt) BgL_oz00_5860)));
		}

	}



/* block-label-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2labelzd2setz12z12zzsaw_defsz00(BgL_blockz00_bglt BgL_oz00_425,
		int BgL_vz00_426)
	{
		{	/* SawMill/defs.sch 916 */
			return
				((((BgL_blockz00_bglt) COBJECT(BgL_oz00_425))->BgL_labelz00) =
				((int) BgL_vz00_426), BUNSPEC);
		}

	}



/* &block-label-set! */
	obj_t BGl_z62blockzd2labelzd2setz12z70zzsaw_defsz00(obj_t BgL_envz00_5861,
		obj_t BgL_oz00_5862, obj_t BgL_vz00_5863)
	{
		{	/* SawMill/defs.sch 916 */
			return
				BGl_blockzd2labelzd2setz12z12zzsaw_defsz00(
				((BgL_blockz00_bglt) BgL_oz00_5862), CINT(BgL_vz00_5863));
		}

	}



/* rtl_ins-args* */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_insz00_427)
	{
		{	/* SawMill/defs.scm 96 */
			{	/* SawMill/defs.scm 97 */
				obj_t BgL_g1421z00_1968;

				BgL_g1421z00_1968 =
					(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_427))->BgL_argsz00);
				{
					obj_t BgL_argsz00_1971;
					obj_t BgL_resz00_1972;

					BgL_argsz00_1971 = BgL_g1421z00_1968;
					BgL_resz00_1972 = BNIL;
				BgL_zc3z04anonymousza31866ze3z87_1973:
					if (NULLP(BgL_argsz00_1971))
						{	/* SawMill/defs.scm 100 */
							return BgL_resz00_1972;
						}
					else
						{	/* SawMill/defs.scm 102 */
							bool_t BgL_test4120z00_9245;

							{	/* SawMill/defs.scm 102 */
								obj_t BgL_arg1883z00_1988;

								BgL_arg1883z00_1988 = CAR(((obj_t) BgL_argsz00_1971));
								BgL_test4120z00_9245 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1883z00_1988,
									BGl_rtl_regz00zzsaw_defsz00);
							}
							if (BgL_test4120z00_9245)
								{	/* SawMill/defs.scm 103 */
									obj_t BgL_arg1870z00_1977;
									obj_t BgL_arg1871z00_1978;

									BgL_arg1870z00_1977 = CDR(((obj_t) BgL_argsz00_1971));
									{	/* SawMill/defs.scm 103 */
										obj_t BgL_arg1872z00_1979;

										BgL_arg1872z00_1979 = CAR(((obj_t) BgL_argsz00_1971));
										BgL_arg1871z00_1978 =
											MAKE_YOUNG_PAIR(BgL_arg1872z00_1979, BgL_resz00_1972);
									}
									{
										obj_t BgL_resz00_9255;
										obj_t BgL_argsz00_9254;

										BgL_argsz00_9254 = BgL_arg1870z00_1977;
										BgL_resz00_9255 = BgL_arg1871z00_1978;
										BgL_resz00_1972 = BgL_resz00_9255;
										BgL_argsz00_1971 = BgL_argsz00_9254;
										goto BgL_zc3z04anonymousza31866ze3z87_1973;
									}
								}
							else
								{	/* SawMill/defs.scm 104 */
									bool_t BgL_test4121z00_9256;

									{	/* SawMill/defs.scm 104 */
										obj_t BgL_arg1882z00_1987;

										BgL_arg1882z00_1987 = CAR(((obj_t) BgL_argsz00_1971));
										BgL_test4121z00_9256 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1882z00_1987,
											BGl_rtl_insz00zzsaw_defsz00);
									}
									if (BgL_test4121z00_9256)
										{	/* SawMill/defs.scm 105 */
											obj_t BgL_arg1876z00_1982;
											obj_t BgL_arg1877z00_1983;

											BgL_arg1876z00_1982 = CDR(((obj_t) BgL_argsz00_1971));
											{	/* SawMill/defs.scm 105 */
												obj_t BgL_arg1878z00_1984;

												{	/* SawMill/defs.scm 105 */
													obj_t BgL_arg1879z00_1985;

													BgL_arg1879z00_1985 = CAR(((obj_t) BgL_argsz00_1971));
													BgL_arg1878z00_1984 =
														BGl_rtl_inszd2argsza2z70zzsaw_defsz00(
														((BgL_rtl_insz00_bglt) BgL_arg1879z00_1985));
												}
												BgL_arg1877z00_1983 =
													BGl_appendzd221011zd2zzsaw_defsz00
													(BgL_arg1878z00_1984, BgL_resz00_1972);
											}
											{
												obj_t BgL_resz00_9268;
												obj_t BgL_argsz00_9267;

												BgL_argsz00_9267 = BgL_arg1876z00_1982;
												BgL_resz00_9268 = BgL_arg1877z00_1983;
												BgL_resz00_1972 = BgL_resz00_9268;
												BgL_argsz00_1971 = BgL_argsz00_9267;
												goto BgL_zc3z04anonymousza31866ze3z87_1973;
											}
										}
									else
										{	/* SawMill/defs.scm 107 */
											obj_t BgL_arg1881z00_1986;

											BgL_arg1881z00_1986 = CDR(((obj_t) BgL_argsz00_1971));
											{
												obj_t BgL_argsz00_9271;

												BgL_argsz00_9271 = BgL_arg1881z00_1986;
												BgL_argsz00_1971 = BgL_argsz00_9271;
												goto BgL_zc3z04anonymousza31866ze3z87_1973;
											}
										}
								}
						}
				}
			}
		}

	}



/* &rtl_ins-args* */
	obj_t BGl_z62rtl_inszd2argsza2z12zzsaw_defsz00(obj_t BgL_envz00_5864,
		obj_t BgL_insz00_5865)
	{
		{	/* SawMill/defs.scm 96 */
			return
				BGl_rtl_inszd2argsza2z70zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_insz00_5865));
		}

	}



/* dump-basic-blocks */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(obj_t
		BgL_idz00_430, obj_t BgL_vz00_431, obj_t BgL_paramsz00_432,
		obj_t BgL_lz00_433)
	{
		{	/* SawMill/defs.scm 147 */
			{	/* SawMill/defs.scm 148 */
				obj_t BgL_port1626z00_1990;

				BgL_port1626z00_1990 = BGl_za2tracezd2portza2zd2zztools_tracez00;
				{	/* SawMill/defs.scm 148 */
					obj_t BgL_tmpz00_9274;

					BgL_tmpz00_9274 = ((obj_t) BgL_port1626z00_1990);
					bgl_display_string(BGl_string3154z00zzsaw_defsz00, BgL_tmpz00_9274);
				}
				bgl_display_obj(BgL_idz00_430, BgL_port1626z00_1990);
				{	/* SawMill/defs.scm 148 */
					obj_t BgL_tmpz00_9278;

					BgL_tmpz00_9278 = ((obj_t) BgL_port1626z00_1990);
					bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_9278);
				}
				bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_vz00_431),
					BgL_port1626z00_1990);
				{	/* SawMill/defs.scm 148 */
					obj_t BgL_tmpz00_9283;

					BgL_tmpz00_9283 = ((obj_t) BgL_port1626z00_1990);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_9283);
			}}
			bgl_display_string(BGl_string3156z00zzsaw_defsz00,
				BGl_za2tracezd2portza2zd2zztools_tracez00);
			if (NULLP(BgL_paramsz00_432))
				{	/* SawMill/defs.scm 150 */
					BNIL;
				}
			else
				{	/* SawMill/defs.scm 150 */
					obj_t BgL_head1629z00_1994;

					{	/* SawMill/defs.scm 150 */
						obj_t BgL_res3005z00_4373;

						BgL_res3005z00_4373 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1629z00_1994 = BgL_res3005z00_4373;
					}
					{
						obj_t BgL_l1627z00_1996;
						obj_t BgL_tail1630z00_1997;

						BgL_l1627z00_1996 = BgL_paramsz00_432;
						BgL_tail1630z00_1997 = BgL_head1629z00_1994;
					BgL_zc3z04anonymousza31886ze3z87_1998:
						if (NULLP(BgL_l1627z00_1996))
							{	/* SawMill/defs.scm 150 */
								CDR(BgL_head1629z00_1994);
							}
						else
							{	/* SawMill/defs.scm 150 */
								obj_t BgL_newtail1631z00_2000;

								{	/* SawMill/defs.scm 150 */
									obj_t BgL_arg1889z00_2002;

									{	/* SawMill/defs.scm 150 */
										obj_t BgL_az00_2003;

										BgL_az00_2003 = CAR(((obj_t) BgL_l1627z00_1996));
										bgl_display_string(BGl_string3155z00zzsaw_defsz00,
											BGl_za2tracezd2portza2zd2zztools_tracez00);
										BgL_arg1889z00_2002 =
											BGl_dumpz00zzsaw_defsz00(BgL_az00_2003,
											BGl_za2tracezd2portza2zd2zztools_tracez00,
											(int) (((long) 0)));
									}
									{	/* SawMill/defs.scm 150 */
										obj_t BgL_res3007z00_4379;

										BgL_res3007z00_4379 =
											MAKE_YOUNG_PAIR(BgL_arg1889z00_2002, BNIL);
										BgL_newtail1631z00_2000 = BgL_res3007z00_4379;
								}}
								SET_CDR(BgL_tail1630z00_1997, BgL_newtail1631z00_2000);
								{	/* SawMill/defs.scm 150 */
									obj_t BgL_arg1888z00_2001;

									BgL_arg1888z00_2001 = CDR(((obj_t) BgL_l1627z00_1996));
									{
										obj_t BgL_tail1630z00_9303;
										obj_t BgL_l1627z00_9302;

										BgL_l1627z00_9302 = BgL_arg1888z00_2001;
										BgL_tail1630z00_9303 = BgL_newtail1631z00_2000;
										BgL_tail1630z00_1997 = BgL_tail1630z00_9303;
										BgL_l1627z00_1996 = BgL_l1627z00_9302;
										goto BgL_zc3z04anonymousza31886ze3z87_1998;
									}
								}
							}
					}
				}
			bgl_display_char(((unsigned char) 10),
				BGl_za2tracezd2portza2zd2zztools_tracez00);
			{	/* SawMill/defs.scm 155 */
				obj_t BgL_port1632z00_2005;

				BgL_port1632z00_2005 = BGl_za2tracezd2portza2zd2zztools_tracez00;
				{	/* SawMill/defs.scm 155 */
					obj_t BgL_tmpz00_9305;

					BgL_tmpz00_9305 = ((obj_t) BgL_port1632z00_2005);
					bgl_display_string(BGl_string3157z00zzsaw_defsz00, BgL_tmpz00_9305);
				}
				{	/* SawMill/defs.scm 155 */
					obj_t BgL_tmpz00_9308;

					BgL_tmpz00_9308 = ((obj_t) BgL_port1632z00_2005);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_9308);
			}}
			{
				obj_t BgL_l1633z00_2007;

				{	/* SawMill/defs.scm 156 */
					bool_t BgL_tmpz00_9311;

					BgL_l1633z00_2007 = BgL_lz00_433;
				BgL_zc3z04anonymousza31890ze3z87_2008:
					if (PAIRP(BgL_l1633z00_2007))
						{	/* SawMill/defs.scm 156 */
							{	/* SawMill/defs.scm 157 */
								obj_t BgL_bz00_2010;

								BgL_bz00_2010 = CAR(BgL_l1633z00_2007);
								{	/* SawMill/defs.scm 157 */
									obj_t BgL_portz00_4388;

									BgL_portz00_4388 = BGl_za2tracezd2portza2zd2zztools_tracez00;
									BGl_dumpz00zzsaw_defsz00(BgL_bz00_2010, BgL_portz00_4388,
										(int) (((long) 0)));
									bgl_display_char(((unsigned char) 10), BgL_portz00_4388);
								}
								bgl_display_char(((unsigned char) 10),
									BGl_za2tracezd2portza2zd2zztools_tracez00);
							}
							{
								obj_t BgL_l1633z00_9319;

								BgL_l1633z00_9319 = CDR(BgL_l1633z00_2007);
								BgL_l1633z00_2007 = BgL_l1633z00_9319;
								goto BgL_zc3z04anonymousza31890ze3z87_2008;
							}
						}
					else
						{	/* SawMill/defs.scm 156 */
							BgL_tmpz00_9311 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_9311);
				}
			}
		}

	}



/* &dump-basic-blocks */
	obj_t BGl_z62dumpzd2basiczd2blocksz62zzsaw_defsz00(obj_t BgL_envz00_5866,
		obj_t BgL_idz00_5867, obj_t BgL_vz00_5868, obj_t BgL_paramsz00_5869,
		obj_t BgL_lz00_5870)
	{
		{	/* SawMill/defs.scm 147 */
			return
				BGl_dumpzd2basiczd2blocksz00zzsaw_defsz00(BgL_idz00_5867, BgL_vz00_5868,
				BgL_paramsz00_5869, BgL_lz00_5870);
		}

	}



/* rtl-dump */
	BGL_EXPORTED_DEF obj_t BGl_rtlzd2dumpzd2zzsaw_defsz00(obj_t BgL_objz00_434,
		obj_t BgL_portz00_435)
	{
		{	/* SawMill/defs.scm 164 */
			BGl_dumpz00zzsaw_defsz00(BgL_objz00_434, BgL_portz00_435,
				(int) (((long) 0)));
			return bgl_display_char(((unsigned char) 10), BgL_portz00_435);
		}

	}



/* &rtl-dump */
	obj_t BGl_z62rtlzd2dumpzb0zzsaw_defsz00(obj_t BgL_envz00_5871,
		obj_t BgL_objz00_5872, obj_t BgL_portz00_5873)
	{
		{	/* SawMill/defs.scm 164 */
			return BGl_rtlzd2dumpzd2zzsaw_defsz00(BgL_objz00_5872, BgL_portz00_5873);
		}

	}



/* dump-margin */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2marginzd2zzsaw_defsz00(obj_t BgL_pz00_436,
		int BgL_mz00_437)
	{
		{	/* SawMill/defs.scm 171 */
			{	/* SawMill/defs.scm 172 */
				obj_t BgL_mgsz00_2013;

				BgL_mgsz00_2013 = CNST_TABLE_REF(((long) 0));
				if (((long) (BgL_mz00_437) < VECTOR_LENGTH(BgL_mgsz00_2013)))
					{	/* SawMill/defs.scm 173 */
						return
							bgl_display_obj(VECTOR_REF(BgL_mgsz00_2013,
								(long) (BgL_mz00_437)), BgL_pz00_436);
					}
				else
					{	/* SawMill/defs.scm 173 */
						return
							bgl_display_obj(make_string(
								(long) (BgL_mz00_437), ((unsigned char) ' ')), BgL_pz00_436);
		}}}

	}



/* &dump-margin */
	obj_t BGl_z62dumpzd2marginzb0zzsaw_defsz00(obj_t BgL_envz00_5874,
		obj_t BgL_pz00_5875, obj_t BgL_mz00_5876)
	{
		{	/* SawMill/defs.scm 171 */
			return
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_5875, CINT(BgL_mz00_5876));
		}

	}



/* dump* */
	BGL_EXPORTED_DEF obj_t BGl_dumpza2za2zzsaw_defsz00(obj_t BgL_oz00_441,
		obj_t BgL_pz00_442, int BgL_mz00_443)
	{
		{	/* SawMill/defs.scm 198 */
			if (NULLP(BgL_oz00_441))
				{	/* SawMill/defs.scm 200 */
					return BUNSPEC;
				}
			else
				{	/* SawMill/defs.scm 200 */
					if (NULLP(CDR(((obj_t) BgL_oz00_441))))
						{	/* SawMill/defs.scm 203 */
							obj_t BgL_arg1903z00_2022;

							BgL_arg1903z00_2022 = CAR(((obj_t) BgL_oz00_441));
							return
								BGl_dumpz00zzsaw_defsz00(BgL_arg1903z00_2022, BgL_pz00_442,
								BgL_mz00_443);
						}
					else
						{
							obj_t BgL_oz00_2024;

							{	/* SawMill/defs.scm 205 */
								bool_t BgL_tmpz00_9349;

								BgL_oz00_2024 = BgL_oz00_441;
							BgL_zc3z04anonymousza31904ze3z87_2025:
								{	/* SawMill/defs.scm 206 */
									obj_t BgL_arg1905z00_2026;

									BgL_arg1905z00_2026 = CAR(((obj_t) BgL_oz00_2024));
									BGl_dumpz00zzsaw_defsz00(BgL_arg1905z00_2026, BgL_pz00_442,
										BgL_mz00_443);
								}
								{	/* SawMill/defs.scm 207 */
									bool_t BgL_test4128z00_9353;

									{	/* SawMill/defs.scm 207 */
										obj_t BgL_tmpz00_9354;

										BgL_tmpz00_9354 = CDR(((obj_t) BgL_oz00_2024));
										BgL_test4128z00_9353 = PAIRP(BgL_tmpz00_9354);
									}
									if (BgL_test4128z00_9353)
										{	/* SawMill/defs.scm 207 */
											bgl_display_char(((unsigned char) 10), BgL_pz00_442);
											BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_442,
												BgL_mz00_443);
											{	/* SawMill/defs.scm 210 */
												obj_t BgL_arg1908z00_2029;

												BgL_arg1908z00_2029 = CDR(((obj_t) BgL_oz00_2024));
												{
													obj_t BgL_oz00_9362;

													BgL_oz00_9362 = BgL_arg1908z00_2029;
													BgL_oz00_2024 = BgL_oz00_9362;
													goto BgL_zc3z04anonymousza31904ze3z87_2025;
												}
											}
										}
									else
										{	/* SawMill/defs.scm 207 */
											BgL_tmpz00_9349 = ((bool_t) 0);
										}
								}
								return BBOOL(BgL_tmpz00_9349);
							}
						}
				}
		}

	}



/* &dump* */
	obj_t BGl_z62dumpza2zc0zzsaw_defsz00(obj_t BgL_envz00_5877,
		obj_t BgL_oz00_5878, obj_t BgL_pz00_5879, obj_t BgL_mz00_5880)
	{
		{	/* SawMill/defs.scm 198 */
			return
				BGl_dumpza2za2zzsaw_defsz00(BgL_oz00_5878, BgL_pz00_5879,
				CINT(BgL_mz00_5880));
		}

	}



/* dump-args */
	bool_t BGl_dumpzd2argszd2zzsaw_defsz00(obj_t BgL_argsz00_444,
		obj_t BgL_pz00_445)
	{
		{	/* SawMill/defs.scm 215 */
			{
				obj_t BgL_argsz00_2034;

				BgL_argsz00_2034 = BgL_argsz00_444;
			BgL_zc3z04anonymousza31911ze3z87_2035:
				if (PAIRP(BgL_argsz00_2034))
					{	/* SawMill/defs.scm 218 */
						obj_t BgL_az00_2037;

						BgL_az00_2037 = CAR(BgL_argsz00_2034);
						if (BGl_isazf3zf3zz__objectz00(BgL_az00_2037,
								BGl_rtl_regz00zzsaw_defsz00))
							{	/* SawMill/defs.scm 220 */
								{	/* SawMill/defs.scm 221 */
									obj_t BgL_tmpz00_9371;

									BgL_tmpz00_9371 = ((obj_t) BgL_pz00_445);
									bgl_display_string(BGl_string3155z00zzsaw_defsz00,
										BgL_tmpz00_9371);
								}
								BGl_dumpz00zzsaw_defsz00(BgL_az00_2037, BgL_pz00_445,
									(int) (((long) 0)));
							}
						else
							{	/* SawMill/defs.scm 220 */
								if (BGl_isazf3zf3zz__objectz00(BgL_az00_2037,
										BGl_rtl_insz00zzsaw_defsz00))
									{	/* SawMill/defs.scm 223 */
										{	/* SawMill/defs.scm 224 */
											obj_t BgL_tmpz00_9378;

											BgL_tmpz00_9378 = ((obj_t) BgL_pz00_445);
											bgl_display_string(BGl_string3155z00zzsaw_defsz00,
												BgL_tmpz00_9378);
										}
										{	/* SawMill/defs.scm 270 */
											obj_t BgL_tmpz00_9381;

											BgL_tmpz00_9381 = ((obj_t) BgL_pz00_445);
											bgl_display_string(BGl_string3158z00zzsaw_defsz00,
												BgL_tmpz00_9381);
										}
										{	/* SawMill/defs.scm 271 */
											BgL_rtl_funz00_bglt BgL_arg1916z00_4420;
											obj_t BgL_arg1917z00_4421;
											obj_t BgL_arg1918z00_4422;

											BgL_arg1916z00_4420 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_az00_2037)))->
												BgL_funz00);
											BgL_arg1917z00_4421 =
												(((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
															BgL_az00_2037)))->BgL_destz00);
											BgL_arg1918z00_4422 =
												(((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
															BgL_az00_2037)))->BgL_argsz00);
											BGl_dumpzd2funzd2zzsaw_defsz00(BgL_arg1916z00_4420,
												BgL_arg1917z00_4421, BgL_arg1918z00_4422, BgL_pz00_445,
												BINT(((long) 0)));
										}
										{	/* SawMill/defs.scm 272 */
											obj_t BgL_tmpz00_9392;

											BgL_tmpz00_9392 = ((obj_t) BgL_pz00_445);
											bgl_display_string(BGl_string3159z00zzsaw_defsz00,
												BgL_tmpz00_9392);
									}}
								else
									{	/* SawMill/defs.scm 223 */
										{	/* SawMill/defs.scm 227 */
											obj_t BgL_tmpz00_9395;

											BgL_tmpz00_9395 = ((obj_t) BgL_pz00_445);
											bgl_display_string(BGl_string3155z00zzsaw_defsz00,
												BgL_tmpz00_9395);
										}
										bgl_display_obj(BgL_az00_2037, BgL_pz00_445);
									}
							}
						{
							obj_t BgL_argsz00_9399;

							BgL_argsz00_9399 = CDR(BgL_argsz00_2034);
							BgL_argsz00_2034 = BgL_argsz00_9399;
							goto BgL_zc3z04anonymousza31911ze3z87_2035;
						}
					}
				else
					{	/* SawMill/defs.scm 217 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* dump-ins-rhs */
	BGL_EXPORTED_DEF obj_t
		BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(BgL_rtl_insz00_bglt BgL_oz00_452,
		obj_t BgL_pz00_453, obj_t BgL_mz00_454)
	{
		{	/* SawMill/defs.scm 268 */
			{	/* SawMill/defs.scm 270 */
				obj_t BgL_tmpz00_9401;

				BgL_tmpz00_9401 = ((obj_t) BgL_pz00_453);
				bgl_display_string(BGl_string3158z00zzsaw_defsz00, BgL_tmpz00_9401);
			}
			BGl_dumpzd2funzd2zzsaw_defsz00(
				(((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_452))->BgL_funz00),
				(((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_452))->BgL_destz00),
				(((BgL_rtl_insz00_bglt) COBJECT(BgL_oz00_452))->BgL_argsz00),
				BgL_pz00_453, BgL_mz00_454);
			{	/* SawMill/defs.scm 272 */
				obj_t BgL_tmpz00_9408;

				BgL_tmpz00_9408 = ((obj_t) BgL_pz00_453);
				return
					bgl_display_string(BGl_string3159z00zzsaw_defsz00, BgL_tmpz00_9408);
			}
		}

	}



/* &dump-ins-rhs */
	obj_t BGl_z62dumpzd2inszd2rhsz62zzsaw_defsz00(obj_t BgL_envz00_5881,
		obj_t BgL_oz00_5882, obj_t BgL_pz00_5883, obj_t BgL_mz00_5884)
	{
		{	/* SawMill/defs.scm 268 */
			return
				BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_5882), BgL_pz00_5883, BgL_mz00_5884);
		}

	}



/* show-fun */
	obj_t BGl_showzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt BgL_oz00_458,
		obj_t BgL_pz00_459)
	{
		{	/* SawMill/defs.scm 286 */
			{	/* SawMill/defs.scm 287 */
				obj_t BgL_cz00_2046;

				{	/* SawMill/defs.scm 287 */
					obj_t BgL_arg1921z00_2049;

					{	/* SawMill/defs.scm 287 */
						obj_t BgL_arg1923z00_2050;

						{	/* SawMill/defs.scm 287 */
							long BgL_arg1816z00_4435;

							{	/* SawMill/defs.scm 287 */
								long BgL_arg1817z00_4436;

								{	/* SawMill/defs.scm 287 */
									long BgL_res3017z00_4438;

									BgL_res3017z00_4438 =
										BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_458));
									BgL_arg1817z00_4436 = BgL_res3017z00_4438;
								}
								BgL_arg1816z00_4435 = (BgL_arg1817z00_4436 - OBJECT_TYPE);
							}
							BgL_arg1923z00_2050 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4435);
						}
						BgL_arg1921z00_2049 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg1923z00_2050);
					}
					{	/* SawMill/defs.scm 287 */
						obj_t BgL_res3019z00_4446;

						{	/* SawMill/defs.scm 287 */
							obj_t BgL_arg1466z00_4445;

							BgL_arg1466z00_4445 = SYMBOL_TO_STRING(BgL_arg1921z00_2049);
							BgL_res3019z00_4446 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_4445);
						}
						BgL_cz00_2046 = BgL_res3019z00_4446;
				}}
				return
					bgl_display_obj(c_substring(BgL_cz00_2046, ((long) 4),
						STRING_LENGTH(BgL_cz00_2046)), BgL_pz00_459);
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			{	/* SawMill/defs.scm 12 */
				obj_t BgL_arg1927z00_2054;
				obj_t BgL_arg1928z00_2055;

				{	/* SawMill/defs.scm 12 */
					obj_t BgL_v1655z00_2071;

					BgL_v1655z00_2071 = create_vector(((long) 6));
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1934z00_2072;

						BgL_arg1934z00_2072 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3161z00zzsaw_defsz00,
							BGl_proc3160z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1655z00_2071, ((long) 0), BgL_arg1934z00_2072);
					}
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1939z00_2082;

						BgL_arg1939z00_2082 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3163z00zzsaw_defsz00,
							BGl_proc3162z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1655z00_2071, ((long) 1), BgL_arg1939z00_2082);
					}
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1944z00_2092;

						BgL_arg1944z00_2092 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3166z00zzsaw_defsz00,
							BGl_proc3165z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3164z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1655z00_2071, ((long) 2), BgL_arg1944z00_2092);
					}
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1951z00_2105;

						BgL_arg1951z00_2105 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc3169z00zzsaw_defsz00,
							BGl_proc3168z00zzsaw_defsz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc3167z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1655z00_2071, ((long) 3), BgL_arg1951z00_2105);
					}
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1958z00_2119;

						BgL_arg1958z00_2119 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3172z00zzsaw_defsz00,
							BGl_proc3171z00zzsaw_defsz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc3170z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1655z00_2071, ((long) 4), BgL_arg1958z00_2119);
					}
					{	/* SawMill/defs.scm 12 */
						obj_t BgL_arg1965z00_2133;

						BgL_arg1965z00_2133 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc3175z00zzsaw_defsz00,
							BGl_proc3174z00zzsaw_defsz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc3173z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1655z00_2071, ((long) 5), BgL_arg1965z00_2133);
					}
					BgL_arg1927z00_2054 = BgL_v1655z00_2071;
				}
				{	/* SawMill/defs.scm 12 */
					obj_t BgL_v1656z00_2146;

					BgL_v1656z00_2146 = create_vector(((long) 0));
					BgL_arg1928z00_2055 = BgL_v1656z00_2146;
				}
				BGl_rtl_regz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 8)),
					CNST_TABLE_REF(((long) 9)), BGl_objectz00zz__objectz00,
					((long) 24168), BGl_proc3178z00zzsaw_defsz00,
					BGl_proc3177z00zzsaw_defsz00, BFALSE, BGl_proc3176z00zzsaw_defsz00,
					BFALSE, BgL_arg1927z00_2054, BgL_arg1928z00_2055);
			}
			{	/* SawMill/defs.scm 20 */
				obj_t BgL_arg1975z00_2153;
				obj_t BgL_arg1976z00_2154;

				{	/* SawMill/defs.scm 20 */
					obj_t BgL_v1657z00_2165;

					BgL_v1657z00_2165 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 20 */
						obj_t BgL_arg1983z00_2166;

						BgL_arg1983z00_2166 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc3181z00zzsaw_defsz00,
							BGl_proc3180z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3179z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1657z00_2165, ((long) 0), BgL_arg1983z00_2166);
					}
					BgL_arg1975z00_2153 = BgL_v1657z00_2165;
				}
				{	/* SawMill/defs.scm 20 */
					obj_t BgL_v1658z00_2179;

					BgL_v1658z00_2179 = create_vector(((long) 0));
					BgL_arg1976z00_2154 = BgL_v1658z00_2179;
				}
				BGl_rtl_funz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
					CNST_TABLE_REF(((long) 9)), BGl_objectz00zz__objectz00,
					((long) 50153), BGl_proc3184z00zzsaw_defsz00,
					BGl_proc3183z00zzsaw_defsz00, BFALSE, BGl_proc3182z00zzsaw_defsz00,
					BFALSE, BgL_arg1975z00_2153, BgL_arg1976z00_2154);
			}
			{	/* SawMill/defs.scm 22 */
				obj_t BgL_arg1993z00_2186;
				obj_t BgL_arg1995z00_2187;

				{	/* SawMill/defs.scm 22 */
					obj_t BgL_v1659z00_2198;

					BgL_v1659z00_2198 = create_vector(((long) 0));
					BgL_arg1993z00_2186 = BgL_v1659z00_2198;
				}
				{	/* SawMill/defs.scm 22 */
					obj_t BgL_v1660z00_2199;

					BgL_v1660z00_2199 = create_vector(((long) 0));
					BgL_arg1995z00_2187 = BgL_v1660z00_2199;
				}
				BGl_rtl_lastz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 12)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 46530), BGl_proc3187z00zzsaw_defsz00,
					BGl_proc3186z00zzsaw_defsz00, BFALSE, BGl_proc3185z00zzsaw_defsz00,
					BFALSE, BgL_arg1993z00_2186, BgL_arg1995z00_2187);
			}
			{	/* SawMill/defs.scm 23 */
				obj_t BgL_arg2004z00_2206;
				obj_t BgL_arg2005z00_2207;

				{	/* SawMill/defs.scm 23 */
					obj_t BgL_v1661z00_2219;

					BgL_v1661z00_2219 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 23 */
						obj_t BgL_arg2012z00_2220;

						BgL_arg2012z00_2220 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3189z00zzsaw_defsz00,
							BGl_proc3188z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1661z00_2219, ((long) 0), BgL_arg2012z00_2220);
					}
					BgL_arg2004z00_2206 = BgL_v1661z00_2219;
				}
				{	/* SawMill/defs.scm 23 */
					obj_t BgL_v1662z00_2230;

					BgL_v1662z00_2230 = create_vector(((long) 0));
					BgL_arg2005z00_2207 = BgL_v1662z00_2230;
				}
				BGl_rtl_returnz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 13)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_lastz00zzsaw_defsz00,
					((long) 2954), BGl_proc3192z00zzsaw_defsz00,
					BGl_proc3191z00zzsaw_defsz00, BFALSE, BGl_proc3190z00zzsaw_defsz00,
					BFALSE, BgL_arg2004z00_2206, BgL_arg2005z00_2207);
			}
			{	/* SawMill/defs.scm 24 */
				obj_t BgL_arg2021z00_2237;
				obj_t BgL_arg2022z00_2238;

				{	/* SawMill/defs.scm 24 */
					obj_t BgL_v1663z00_2249;

					BgL_v1663z00_2249 = create_vector(((long) 0));
					BgL_arg2021z00_2237 = BgL_v1663z00_2249;
				}
				{	/* SawMill/defs.scm 24 */
					obj_t BgL_v1664z00_2250;

					BgL_v1664z00_2250 = create_vector(((long) 0));
					BgL_arg2022z00_2238 = BgL_v1664z00_2250;
				}
				BGl_rtl_jumpexitz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 14)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_lastz00zzsaw_defsz00,
					((long) 2260), BGl_proc3195z00zzsaw_defsz00,
					BGl_proc3194z00zzsaw_defsz00, BFALSE, BGl_proc3193z00zzsaw_defsz00,
					BFALSE, BgL_arg2021z00_2237, BgL_arg2022z00_2238);
			}
			{	/* SawMill/defs.scm 25 */
				obj_t BgL_arg2035z00_2257;
				obj_t BgL_arg2036z00_2258;

				{	/* SawMill/defs.scm 25 */
					obj_t BgL_v1665z00_2269;

					BgL_v1665z00_2269 = create_vector(((long) 0));
					BgL_arg2035z00_2257 = BgL_v1665z00_2269;
				}
				{	/* SawMill/defs.scm 25 */
					obj_t BgL_v1666z00_2270;

					BgL_v1666z00_2270 = create_vector(((long) 0));
					BgL_arg2036z00_2258 = BgL_v1666z00_2270;
				}
				BGl_rtl_failz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 15)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_lastz00zzsaw_defsz00,
					((long) 45430), BGl_proc3198z00zzsaw_defsz00,
					BGl_proc3197z00zzsaw_defsz00, BFALSE, BGl_proc3196z00zzsaw_defsz00,
					BFALSE, BgL_arg2035z00_2257, BgL_arg2036z00_2258);
			}
			{	/* SawMill/defs.scm 27 */
				obj_t BgL_arg2046z00_2277;
				obj_t BgL_arg2047z00_2278;

				{	/* SawMill/defs.scm 27 */
					obj_t BgL_v1667z00_2289;

					BgL_v1667z00_2289 = create_vector(((long) 0));
					BgL_arg2046z00_2277 = BgL_v1667z00_2289;
				}
				{	/* SawMill/defs.scm 27 */
					obj_t BgL_v1668z00_2290;

					BgL_v1668z00_2290 = create_vector(((long) 0));
					BgL_arg2047z00_2278 = BgL_v1668z00_2290;
				}
				BGl_rtl_notseqz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 16)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 57594), BGl_proc3201z00zzsaw_defsz00,
					BGl_proc3200z00zzsaw_defsz00, BFALSE, BGl_proc3199z00zzsaw_defsz00,
					BFALSE, BgL_arg2046z00_2277, BgL_arg2047z00_2278);
			}
			{	/* SawMill/defs.scm 28 */
				obj_t BgL_arg2057z00_2297;
				obj_t BgL_arg2059z00_2298;

				{	/* SawMill/defs.scm 28 */
					obj_t BgL_v1669z00_2309;

					BgL_v1669z00_2309 = create_vector(((long) 0));
					BgL_arg2057z00_2297 = BgL_v1669z00_2309;
				}
				{	/* SawMill/defs.scm 28 */
					obj_t BgL_v1670z00_2310;

					BgL_v1670z00_2310 = create_vector(((long) 0));
					BgL_arg2059z00_2298 = BgL_v1670z00_2310;
				}
				BGl_rtl_ifz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 17)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_notseqz00zzsaw_defsz00,
					((long) 31199), BGl_proc3204z00zzsaw_defsz00,
					BGl_proc3203z00zzsaw_defsz00, BFALSE, BGl_proc3202z00zzsaw_defsz00,
					BFALSE, BgL_arg2057z00_2297, BgL_arg2059z00_2298);
			}
			{	/* SawMill/defs.scm 29 */
				obj_t BgL_arg2069z00_2317;
				obj_t BgL_arg2070z00_2318;

				{	/* SawMill/defs.scm 29 */
					obj_t BgL_v1671z00_2331;

					BgL_v1671z00_2331 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg2077z00_2332;

						BgL_arg2077z00_2332 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3206z00zzsaw_defsz00,
							BGl_proc3205z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1671z00_2331, ((long) 0), BgL_arg2077z00_2332);
					}
					{	/* SawMill/defs.scm 29 */
						obj_t BgL_arg2082z00_2342;

						BgL_arg2082z00_2342 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc3208z00zzsaw_defsz00,
							BGl_proc3207z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1671z00_2331, ((long) 1), BgL_arg2082z00_2342);
					}
					BgL_arg2069z00_2317 = BgL_v1671z00_2331;
				}
				{	/* SawMill/defs.scm 29 */
					obj_t BgL_v1672z00_2352;

					BgL_v1672z00_2352 = create_vector(((long) 0));
					BgL_arg2070z00_2318 = BgL_v1672z00_2352;
				}
				BGl_rtl_selectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 19)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_notseqz00zzsaw_defsz00,
					((long) 6195), BGl_proc3211z00zzsaw_defsz00,
					BGl_proc3210z00zzsaw_defsz00, BFALSE, BGl_proc3209z00zzsaw_defsz00,
					BFALSE, BgL_arg2069z00_2317, BgL_arg2070z00_2318);
			}
			{	/* SawMill/defs.scm 30 */
				obj_t BgL_arg2090z00_2359;
				obj_t BgL_arg2091z00_2360;

				{	/* SawMill/defs.scm 30 */
					obj_t BgL_v1673z00_2374;

					BgL_v1673z00_2374 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 30 */
						obj_t BgL_arg2097z00_2375;

						BgL_arg2097z00_2375 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc3213z00zzsaw_defsz00,
							BGl_proc3212z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1673z00_2374, ((long) 0), BgL_arg2097z00_2375);
					}
					BgL_arg2090z00_2359 = BgL_v1673z00_2374;
				}
				{	/* SawMill/defs.scm 30 */
					obj_t BgL_v1674z00_2385;

					BgL_v1674z00_2385 = create_vector(((long) 0));
					BgL_arg2091z00_2360 = BgL_v1674z00_2385;
				}
				BGl_rtl_switchz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 21)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_selectz00zzsaw_defsz00,
					((long) 61565), BGl_proc3216z00zzsaw_defsz00,
					BGl_proc3215z00zzsaw_defsz00, BFALSE, BGl_proc3214z00zzsaw_defsz00,
					BFALSE, BgL_arg2090z00_2359, BgL_arg2091z00_2360);
			}
			{	/* SawMill/defs.scm 31 */
				obj_t BgL_arg2106z00_2392;
				obj_t BgL_arg2107z00_2393;

				{	/* SawMill/defs.scm 31 */
					obj_t BgL_v1675z00_2405;

					BgL_v1675z00_2405 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 31 */
						obj_t BgL_arg2114z00_2406;

						BgL_arg2114z00_2406 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc3218z00zzsaw_defsz00,
							BGl_proc3217z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_blockz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1675z00_2405, ((long) 0), BgL_arg2114z00_2406);
					}
					BgL_arg2106z00_2392 = BgL_v1675z00_2405;
				}
				{	/* SawMill/defs.scm 31 */
					obj_t BgL_v1676z00_2416;

					BgL_v1676z00_2416 = create_vector(((long) 0));
					BgL_arg2107z00_2393 = BgL_v1676z00_2416;
				}
				BGl_rtl_ifeqz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 23)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_notseqz00zzsaw_defsz00,
					((long) 50710), BGl_proc3221z00zzsaw_defsz00,
					BGl_proc3220z00zzsaw_defsz00, BFALSE, BGl_proc3219z00zzsaw_defsz00,
					BFALSE, BgL_arg2106z00_2392, BgL_arg2107z00_2393);
			}
			{	/* SawMill/defs.scm 32 */
				obj_t BgL_arg2122z00_2423;
				obj_t BgL_arg2123z00_2424;

				{	/* SawMill/defs.scm 32 */
					obj_t BgL_v1677z00_2436;

					BgL_v1677z00_2436 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 32 */
						obj_t BgL_arg2129z00_2437;

						BgL_arg2129z00_2437 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc3223z00zzsaw_defsz00,
							BGl_proc3222z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_blockz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1677z00_2436, ((long) 0), BgL_arg2129z00_2437);
					}
					BgL_arg2122z00_2423 = BgL_v1677z00_2436;
				}
				{	/* SawMill/defs.scm 32 */
					obj_t BgL_v1678z00_2447;

					BgL_v1678z00_2447 = create_vector(((long) 0));
					BgL_arg2123z00_2424 = BgL_v1678z00_2447;
				}
				BGl_rtl_ifnez00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 24)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_notseqz00zzsaw_defsz00,
					((long) 43701), BGl_proc3226z00zzsaw_defsz00,
					BGl_proc3225z00zzsaw_defsz00, BFALSE, BGl_proc3224z00zzsaw_defsz00,
					BFALSE, BgL_arg2122z00_2423, BgL_arg2123z00_2424);
			}
			{	/* SawMill/defs.scm 33 */
				obj_t BgL_arg2137z00_2454;
				obj_t BgL_arg2138z00_2455;

				{	/* SawMill/defs.scm 33 */
					obj_t BgL_v1679z00_2467;

					BgL_v1679z00_2467 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 33 */
						obj_t BgL_arg2144z00_2468;

						BgL_arg2144z00_2468 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc3228z00zzsaw_defsz00,
							BGl_proc3227z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_blockz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1679z00_2467, ((long) 0), BgL_arg2144z00_2468);
					}
					BgL_arg2137z00_2454 = BgL_v1679z00_2467;
				}
				{	/* SawMill/defs.scm 33 */
					obj_t BgL_v1680z00_2478;

					BgL_v1680z00_2478 = create_vector(((long) 0));
					BgL_arg2138z00_2455 = BgL_v1680z00_2478;
				}
				BGl_rtl_goz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 26)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_notseqz00zzsaw_defsz00,
					((long) 55465), BGl_proc3231z00zzsaw_defsz00,
					BGl_proc3230z00zzsaw_defsz00, BFALSE, BGl_proc3229z00zzsaw_defsz00,
					BFALSE, BgL_arg2137z00_2454, BgL_arg2138z00_2455);
			}
			{	/* SawMill/defs.scm 35 */
				obj_t BgL_arg2153z00_2485;
				obj_t BgL_arg2154z00_2486;

				{	/* SawMill/defs.scm 35 */
					obj_t BgL_v1681z00_2497;

					BgL_v1681z00_2497 = create_vector(((long) 0));
					BgL_arg2153z00_2485 = BgL_v1681z00_2497;
				}
				{	/* SawMill/defs.scm 35 */
					obj_t BgL_v1682z00_2498;

					BgL_v1682z00_2498 = create_vector(((long) 0));
					BgL_arg2154z00_2486 = BgL_v1682z00_2498;
				}
				BGl_rtl_purez00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 27)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 28858), BGl_proc3234z00zzsaw_defsz00,
					BGl_proc3233z00zzsaw_defsz00, BFALSE, BGl_proc3232z00zzsaw_defsz00,
					BFALSE, BgL_arg2153z00_2485, BgL_arg2154z00_2486);
			}
			{	/* SawMill/defs.scm 36 */
				obj_t BgL_arg2163z00_2505;
				obj_t BgL_arg2164z00_2506;

				{	/* SawMill/defs.scm 36 */
					obj_t BgL_v1683z00_2517;

					BgL_v1683z00_2517 = create_vector(((long) 0));
					BgL_arg2163z00_2505 = BgL_v1683z00_2517;
				}
				{	/* SawMill/defs.scm 36 */
					obj_t BgL_v1684z00_2518;

					BgL_v1684z00_2518 = create_vector(((long) 0));
					BgL_arg2164z00_2506 = BgL_v1684z00_2518;
				}
				BGl_rtl_nopz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 27614), BGl_proc3237z00zzsaw_defsz00,
					BGl_proc3236z00zzsaw_defsz00, BFALSE, BGl_proc3235z00zzsaw_defsz00,
					BFALSE, BgL_arg2163z00_2505, BgL_arg2164z00_2506);
			}
			{	/* SawMill/defs.scm 37 */
				obj_t BgL_arg2174z00_2525;
				obj_t BgL_arg2175z00_2526;

				{	/* SawMill/defs.scm 37 */
					obj_t BgL_v1685z00_2537;

					BgL_v1685z00_2537 = create_vector(((long) 0));
					BgL_arg2174z00_2525 = BgL_v1685z00_2537;
				}
				{	/* SawMill/defs.scm 37 */
					obj_t BgL_v1686z00_2538;

					BgL_v1686z00_2538 = create_vector(((long) 0));
					BgL_arg2175z00_2526 = BgL_v1686z00_2538;
				}
				BGl_rtl_movz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 29)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 12755), BGl_proc3240z00zzsaw_defsz00,
					BGl_proc3239z00zzsaw_defsz00, BFALSE, BGl_proc3238z00zzsaw_defsz00,
					BFALSE, BgL_arg2174z00_2525, BgL_arg2175z00_2526);
			}
			{	/* SawMill/defs.scm 38 */
				obj_t BgL_arg2184z00_2545;
				obj_t BgL_arg2185z00_2546;

				{	/* SawMill/defs.scm 38 */
					obj_t BgL_v1687z00_2558;

					BgL_v1687z00_2558 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 38 */
						obj_t BgL_arg2191z00_2559;

						BgL_arg2191z00_2559 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc3242z00zzsaw_defsz00,
							BGl_proc3241z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_atomz00zzast_nodez00);
						VECTOR_SET(BgL_v1687z00_2558, ((long) 0), BgL_arg2191z00_2559);
					}
					BgL_arg2184z00_2545 = BgL_v1687z00_2558;
				}
				{	/* SawMill/defs.scm 38 */
					obj_t BgL_v1688z00_2569;

					BgL_v1688z00_2569 = create_vector(((long) 0));
					BgL_arg2185z00_2546 = BgL_v1688z00_2569;
				}
				BGl_rtl_loadiz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 31)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 16689), BGl_proc3245z00zzsaw_defsz00,
					BGl_proc3244z00zzsaw_defsz00, BFALSE, BGl_proc3243z00zzsaw_defsz00,
					BFALSE, BgL_arg2184z00_2545, BgL_arg2185z00_2546);
			}
			{	/* SawMill/defs.scm 39 */
				obj_t BgL_arg2199z00_2576;
				obj_t BgL_arg2200z00_2577;

				{	/* SawMill/defs.scm 39 */
					obj_t BgL_v1689z00_2589;

					BgL_v1689z00_2589 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 39 */
						obj_t BgL_arg2206z00_2590;

						BgL_arg2206z00_2590 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3247z00zzsaw_defsz00,
							BGl_proc3246z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1689z00_2589, ((long) 0), BgL_arg2206z00_2590);
					}
					BgL_arg2199z00_2576 = BgL_v1689z00_2589;
				}
				{	/* SawMill/defs.scm 39 */
					obj_t BgL_v1690z00_2600;

					BgL_v1690z00_2600 = create_vector(((long) 0));
					BgL_arg2200z00_2577 = BgL_v1690z00_2600;
				}
				BGl_rtl_loadgz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 32)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 34603), BGl_proc3250z00zzsaw_defsz00,
					BGl_proc3249z00zzsaw_defsz00, BFALSE, BGl_proc3248z00zzsaw_defsz00,
					BFALSE, BgL_arg2199z00_2576, BgL_arg2200z00_2577);
			}
			{	/* SawMill/defs.scm 40 */
				obj_t BgL_arg2214z00_2607;
				obj_t BgL_arg2215z00_2608;

				{	/* SawMill/defs.scm 40 */
					obj_t BgL_v1691z00_2620;

					BgL_v1691z00_2620 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 40 */
						obj_t BgL_arg2221z00_2621;

						BgL_arg2221z00_2621 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3252z00zzsaw_defsz00,
							BGl_proc3251z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1691z00_2620, ((long) 0), BgL_arg2221z00_2621);
					}
					BgL_arg2214z00_2607 = BgL_v1691z00_2620;
				}
				{	/* SawMill/defs.scm 40 */
					obj_t BgL_v1692z00_2631;

					BgL_v1692z00_2631 = create_vector(((long) 0));
					BgL_arg2215z00_2608 = BgL_v1692z00_2631;
				}
				BGl_rtl_loadfunz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 33)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 13359), BGl_proc3255z00zzsaw_defsz00,
					BGl_proc3254z00zzsaw_defsz00, BFALSE, BGl_proc3253z00zzsaw_defsz00,
					BFALSE, BgL_arg2214z00_2607, BgL_arg2215z00_2608);
			}
			{	/* SawMill/defs.scm 41 */
				obj_t BgL_arg2229z00_2638;
				obj_t BgL_arg2230z00_2639;

				{	/* SawMill/defs.scm 41 */
					obj_t BgL_v1693z00_2651;

					BgL_v1693z00_2651 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 41 */
						obj_t BgL_arg2236z00_2652;

						BgL_arg2236z00_2652 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3257z00zzsaw_defsz00,
							BGl_proc3256z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1693z00_2651, ((long) 0), BgL_arg2236z00_2652);
					}
					BgL_arg2229z00_2638 = BgL_v1693z00_2651;
				}
				{	/* SawMill/defs.scm 41 */
					obj_t BgL_v1694z00_2662;

					BgL_v1694z00_2662 = create_vector(((long) 0));
					BgL_arg2230z00_2639 = BgL_v1694z00_2662;
				}
				BGl_rtl_globalrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 34)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 23556), BGl_proc3260z00zzsaw_defsz00,
					BGl_proc3259z00zzsaw_defsz00, BFALSE, BGl_proc3258z00zzsaw_defsz00,
					BFALSE, BgL_arg2229z00_2638, BgL_arg2230z00_2639);
			}
			{	/* SawMill/defs.scm 42 */
				obj_t BgL_arg2244z00_2669;
				obj_t BgL_arg2245z00_2670;

				{	/* SawMill/defs.scm 42 */
					obj_t BgL_v1695z00_2684;

					BgL_v1695z00_2684 = create_vector(((long) 3));
					{	/* SawMill/defs.scm 42 */
						obj_t BgL_arg2251z00_2685;

						BgL_arg2251z00_2685 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc3262z00zzsaw_defsz00,
							BGl_proc3261z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1695z00_2684, ((long) 0), BgL_arg2251z00_2685);
					}
					{	/* SawMill/defs.scm 42 */
						obj_t BgL_arg2256z00_2695;

						BgL_arg2256z00_2695 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc3264z00zzsaw_defsz00,
							BGl_proc3263z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1695z00_2684, ((long) 1), BgL_arg2256z00_2695);
					}
					{	/* SawMill/defs.scm 42 */
						obj_t BgL_arg2261z00_2705;

						BgL_arg2261z00_2705 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3266z00zzsaw_defsz00,
							BGl_proc3265z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1695z00_2684, ((long) 2), BgL_arg2261z00_2705);
					}
					BgL_arg2244z00_2669 = BgL_v1695z00_2684;
				}
				{	/* SawMill/defs.scm 42 */
					obj_t BgL_v1696z00_2715;

					BgL_v1696z00_2715 = create_vector(((long) 0));
					BgL_arg2245z00_2670 = BgL_v1696z00_2715;
				}
				BGl_rtl_getfieldz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 37)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 51035), BGl_proc3269z00zzsaw_defsz00,
					BGl_proc3268z00zzsaw_defsz00, BFALSE, BGl_proc3267z00zzsaw_defsz00,
					BFALSE, BgL_arg2244z00_2669, BgL_arg2245z00_2670);
			}
			{	/* SawMill/defs.scm 43 */
				obj_t BgL_arg2270z00_2722;
				obj_t BgL_arg2272z00_2723;

				{	/* SawMill/defs.scm 43 */
					obj_t BgL_v1697z00_2736;

					BgL_v1697z00_2736 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 43 */
						obj_t BgL_arg2280z00_2737;

						BgL_arg2280z00_2737 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3271z00zzsaw_defsz00,
							BGl_proc3270z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1697z00_2736, ((long) 0), BgL_arg2280z00_2737);
					}
					{	/* SawMill/defs.scm 43 */
						obj_t BgL_arg2285z00_2747;

						BgL_arg2285z00_2747 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc3273z00zzsaw_defsz00,
							BGl_proc3272z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1697z00_2736, ((long) 1), BgL_arg2285z00_2747);
					}
					BgL_arg2270z00_2722 = BgL_v1697z00_2736;
				}
				{	/* SawMill/defs.scm 43 */
					obj_t BgL_v1698z00_2757;

					BgL_v1698z00_2757 = create_vector(((long) 0));
					BgL_arg2272z00_2723 = BgL_v1698z00_2757;
				}
				BGl_rtl_vallocz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 39)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 58258), BGl_proc3276z00zzsaw_defsz00,
					BGl_proc3275z00zzsaw_defsz00, BFALSE, BGl_proc3274z00zzsaw_defsz00,
					BFALSE, BgL_arg2270z00_2722, BgL_arg2272z00_2723);
			}
			{	/* SawMill/defs.scm 44 */
				obj_t BgL_arg2294z00_2764;
				obj_t BgL_arg2295z00_2765;

				{	/* SawMill/defs.scm 44 */
					obj_t BgL_v1699z00_2778;

					BgL_v1699z00_2778 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 44 */
						obj_t BgL_arg2302z00_2779;

						BgL_arg2302z00_2779 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3278z00zzsaw_defsz00,
							BGl_proc3277z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1699z00_2778, ((long) 0), BgL_arg2302z00_2779);
					}
					{	/* SawMill/defs.scm 44 */
						obj_t BgL_arg2308z00_2789;

						BgL_arg2308z00_2789 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc3280z00zzsaw_defsz00,
							BGl_proc3279z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1699z00_2778, ((long) 1), BgL_arg2308z00_2789);
					}
					BgL_arg2294z00_2764 = BgL_v1699z00_2778;
				}
				{	/* SawMill/defs.scm 44 */
					obj_t BgL_v1700z00_2799;

					BgL_v1700z00_2799 = create_vector(((long) 0));
					BgL_arg2295z00_2765 = BgL_v1700z00_2799;
				}
				BGl_rtl_vrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 40)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 12770), BGl_proc3283z00zzsaw_defsz00,
					BGl_proc3282z00zzsaw_defsz00, BFALSE, BGl_proc3281z00zzsaw_defsz00,
					BFALSE, BgL_arg2294z00_2764, BgL_arg2295z00_2765);
			}
			{	/* SawMill/defs.scm 45 */
				obj_t BgL_arg2318z00_2806;
				obj_t BgL_arg2319z00_2807;

				{	/* SawMill/defs.scm 45 */
					obj_t BgL_v1701z00_2820;

					BgL_v1701z00_2820 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 45 */
						obj_t BgL_arg2325z00_2821;

						BgL_arg2325z00_2821 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3285z00zzsaw_defsz00,
							BGl_proc3284z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1701z00_2820, ((long) 0), BgL_arg2325z00_2821);
					}
					{	/* SawMill/defs.scm 45 */
						obj_t BgL_arg2331z00_2831;

						BgL_arg2331z00_2831 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc3287z00zzsaw_defsz00,
							BGl_proc3286z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1701z00_2820, ((long) 1), BgL_arg2331z00_2831);
					}
					BgL_arg2318z00_2806 = BgL_v1701z00_2820;
				}
				{	/* SawMill/defs.scm 45 */
					obj_t BgL_v1702z00_2841;

					BgL_v1702z00_2841 = create_vector(((long) 0));
					BgL_arg2319z00_2807 = BgL_v1702z00_2841;
				}
				BGl_rtl_vlengthz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 41)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 47994), BGl_proc3290z00zzsaw_defsz00,
					BGl_proc3289z00zzsaw_defsz00, BFALSE, BGl_proc3288z00zzsaw_defsz00,
					BFALSE, BgL_arg2318z00_2806, BgL_arg2319z00_2807);
			}
			{	/* SawMill/defs.scm 46 */
				obj_t BgL_arg2340z00_2848;
				obj_t BgL_arg2341z00_2849;

				{	/* SawMill/defs.scm 46 */
					obj_t BgL_v1703z00_2861;

					BgL_v1703z00_2861 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 46 */
						obj_t BgL_arg2347z00_2862;

						BgL_arg2347z00_2862 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3292z00zzsaw_defsz00,
							BGl_proc3291z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1703z00_2861, ((long) 0), BgL_arg2347z00_2862);
					}
					BgL_arg2340z00_2848 = BgL_v1703z00_2861;
				}
				{	/* SawMill/defs.scm 46 */
					obj_t BgL_v1704z00_2872;

					BgL_v1704z00_2872 = create_vector(((long) 0));
					BgL_arg2341z00_2849 = BgL_v1704z00_2872;
				}
				BGl_rtl_instanceofz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 42)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 47700), BGl_proc3295z00zzsaw_defsz00,
					BGl_proc3294z00zzsaw_defsz00, BFALSE, BGl_proc3293z00zzsaw_defsz00,
					BFALSE, BgL_arg2340z00_2848, BgL_arg2341z00_2849);
			}
			{	/* SawMill/defs.scm 47 */
				obj_t BgL_arg2356z00_2879;
				obj_t BgL_arg2357z00_2880;

				{	/* SawMill/defs.scm 47 */
					obj_t BgL_v1705z00_2891;

					BgL_v1705z00_2891 = create_vector(((long) 0));
					BgL_arg2356z00_2879 = BgL_v1705z00_2891;
				}
				{	/* SawMill/defs.scm 47 */
					obj_t BgL_v1706z00_2892;

					BgL_v1706z00_2892 = create_vector(((long) 0));
					BgL_arg2357z00_2880 = BgL_v1706z00_2892;
				}
				BGl_rtl_makeboxz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 43)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 40764), BGl_proc3298z00zzsaw_defsz00,
					BGl_proc3297z00zzsaw_defsz00, BFALSE, BGl_proc3296z00zzsaw_defsz00,
					BFALSE, BgL_arg2356z00_2879, BgL_arg2357z00_2880);
			}
			{	/* SawMill/defs.scm 48 */
				obj_t BgL_arg2366z00_2899;
				obj_t BgL_arg2367z00_2900;

				{	/* SawMill/defs.scm 48 */
					obj_t BgL_v1707z00_2911;

					BgL_v1707z00_2911 = create_vector(((long) 0));
					BgL_arg2366z00_2899 = BgL_v1707z00_2911;
				}
				{	/* SawMill/defs.scm 48 */
					obj_t BgL_v1708z00_2912;

					BgL_v1708z00_2912 = create_vector(((long) 0));
					BgL_arg2367z00_2900 = BgL_v1708z00_2912;
				}
				BGl_rtl_boxrefz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 44)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_purez00zzsaw_defsz00,
					((long) 52634), BGl_proc3301z00zzsaw_defsz00,
					BGl_proc3300z00zzsaw_defsz00, BFALSE, BGl_proc3299z00zzsaw_defsz00,
					BFALSE, BgL_arg2366z00_2899, BgL_arg2367z00_2900);
			}
			{	/* SawMill/defs.scm 50 */
				obj_t BgL_arg2379z00_2919;
				obj_t BgL_arg2380z00_2920;

				{	/* SawMill/defs.scm 50 */
					obj_t BgL_v1709z00_2931;

					BgL_v1709z00_2931 = create_vector(((long) 0));
					BgL_arg2379z00_2919 = BgL_v1709z00_2931;
				}
				{	/* SawMill/defs.scm 50 */
					obj_t BgL_v1710z00_2932;

					BgL_v1710z00_2932 = create_vector(((long) 0));
					BgL_arg2380z00_2920 = BgL_v1710z00_2932;
				}
				BGl_rtl_effectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 45)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 9869), BGl_proc3304z00zzsaw_defsz00,
					BGl_proc3303z00zzsaw_defsz00, BFALSE, BGl_proc3302z00zzsaw_defsz00,
					BFALSE, BgL_arg2379z00_2919, BgL_arg2380z00_2920);
			}
			{	/* SawMill/defs.scm 51 */
				obj_t BgL_arg2391z00_2939;
				obj_t BgL_arg2392z00_2940;

				{	/* SawMill/defs.scm 51 */
					obj_t BgL_v1711z00_2952;

					BgL_v1711z00_2952 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 51 */
						obj_t BgL_arg2399z00_2953;

						BgL_arg2399z00_2953 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3306z00zzsaw_defsz00,
							BGl_proc3305z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1711z00_2952, ((long) 0), BgL_arg2399z00_2953);
					}
					BgL_arg2391z00_2939 = BgL_v1711z00_2952;
				}
				{	/* SawMill/defs.scm 51 */
					obj_t BgL_v1712z00_2963;

					BgL_v1712z00_2963 = create_vector(((long) 0));
					BgL_arg2392z00_2940 = BgL_v1712z00_2963;
				}
				BGl_rtl_storegz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 46)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_effectz00zzsaw_defsz00,
					((long) 9322), BGl_proc3309z00zzsaw_defsz00,
					BGl_proc3308z00zzsaw_defsz00, BFALSE, BGl_proc3307z00zzsaw_defsz00,
					BFALSE, BgL_arg2391z00_2939, BgL_arg2392z00_2940);
			}
			{	/* SawMill/defs.scm 52 */
				obj_t BgL_arg2412z00_2970;
				obj_t BgL_arg2413z00_2971;

				{	/* SawMill/defs.scm 52 */
					obj_t BgL_v1713z00_2985;

					BgL_v1713z00_2985 = create_vector(((long) 3));
					{	/* SawMill/defs.scm 52 */
						obj_t BgL_arg2420z00_2986;

						BgL_arg2420z00_2986 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc3311z00zzsaw_defsz00,
							BGl_proc3310z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1713z00_2985, ((long) 0), BgL_arg2420z00_2986);
					}
					{	/* SawMill/defs.scm 52 */
						obj_t BgL_arg2425z00_2996;

						BgL_arg2425z00_2996 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc3313z00zzsaw_defsz00,
							BGl_proc3312z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1713z00_2985, ((long) 1), BgL_arg2425z00_2996);
					}
					{	/* SawMill/defs.scm 52 */
						obj_t BgL_arg2430z00_3006;

						BgL_arg2430z00_3006 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3315z00zzsaw_defsz00,
							BGl_proc3314z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1713z00_2985, ((long) 2), BgL_arg2430z00_3006);
					}
					BgL_arg2412z00_2970 = BgL_v1713z00_2985;
				}
				{	/* SawMill/defs.scm 52 */
					obj_t BgL_v1715z00_3016;

					BgL_v1715z00_3016 = create_vector(((long) 0));
					BgL_arg2413z00_2971 = BgL_v1715z00_3016;
				}
				BGl_rtl_setfieldz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 47)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_effectz00zzsaw_defsz00,
					((long) 44760), BGl_proc3318z00zzsaw_defsz00,
					BGl_proc3317z00zzsaw_defsz00, BFALSE, BGl_proc3316z00zzsaw_defsz00,
					BFALSE, BgL_arg2412z00_2970, BgL_arg2413z00_2971);
			}
			{	/* SawMill/defs.scm 53 */
				obj_t BgL_arg2441z00_3023;
				obj_t BgL_arg2443z00_3024;

				{	/* SawMill/defs.scm 53 */
					obj_t BgL_v1716z00_3037;

					BgL_v1716z00_3037 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 53 */
						obj_t BgL_arg2450z00_3038;

						BgL_arg2450z00_3038 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3320z00zzsaw_defsz00,
							BGl_proc3319z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1716z00_3037, ((long) 0), BgL_arg2450z00_3038);
					}
					{	/* SawMill/defs.scm 53 */
						obj_t BgL_arg2455z00_3048;

						BgL_arg2455z00_3048 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc3322z00zzsaw_defsz00,
							BGl_proc3321z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1716z00_3037, ((long) 1), BgL_arg2455z00_3048);
					}
					BgL_arg2441z00_3023 = BgL_v1716z00_3037;
				}
				{	/* SawMill/defs.scm 53 */
					obj_t BgL_v1717z00_3058;

					BgL_v1717z00_3058 = create_vector(((long) 0));
					BgL_arg2443z00_3024 = BgL_v1717z00_3058;
				}
				BGl_rtl_vsetz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 48)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_effectz00zzsaw_defsz00,
					((long) 41568), BGl_proc3325z00zzsaw_defsz00,
					BGl_proc3324z00zzsaw_defsz00, BFALSE, BGl_proc3323z00zzsaw_defsz00,
					BFALSE, BgL_arg2441z00_3023, BgL_arg2443z00_3024);
			}
			{	/* SawMill/defs.scm 54 */
				obj_t BgL_arg2463z00_3065;
				obj_t BgL_arg2464z00_3066;

				{	/* SawMill/defs.scm 54 */
					obj_t BgL_v1718z00_3077;

					BgL_v1718z00_3077 = create_vector(((long) 0));
					BgL_arg2463z00_3065 = BgL_v1718z00_3077;
				}
				{	/* SawMill/defs.scm 54 */
					obj_t BgL_v1719z00_3078;

					BgL_v1719z00_3078 = create_vector(((long) 0));
					BgL_arg2464z00_3066 = BgL_v1719z00_3078;
				}
				BGl_rtl_boxsetz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 49)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_effectz00zzsaw_defsz00,
					((long) 28252), BGl_proc3328z00zzsaw_defsz00,
					BGl_proc3327z00zzsaw_defsz00, BFALSE, BGl_proc3326z00zzsaw_defsz00,
					BFALSE, BgL_arg2463z00_3065, BgL_arg2464z00_3066);
			}
			{	/* SawMill/defs.scm 56 */
				obj_t BgL_arg2475z00_3085;
				obj_t BgL_arg2476z00_3086;

				{	/* SawMill/defs.scm 56 */
					obj_t BgL_v1720z00_3099;

					BgL_v1720z00_3099 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 56 */
						obj_t BgL_arg2483z00_3100;

						BgL_arg2483z00_3100 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3330z00zzsaw_defsz00,
							BGl_proc3329z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1720z00_3099, ((long) 0), BgL_arg2483z00_3100);
					}
					{	/* SawMill/defs.scm 56 */
						obj_t BgL_arg2491z00_3110;

						BgL_arg2491z00_3110 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									50)), BGl_proc3332z00zzsaw_defsz00,
							BGl_proc3331z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1720z00_3099, ((long) 1), BgL_arg2491z00_3110);
					}
					BgL_arg2475z00_3085 = BgL_v1720z00_3099;
				}
				{	/* SawMill/defs.scm 56 */
					obj_t BgL_v1721z00_3120;

					BgL_v1721z00_3120 = create_vector(((long) 0));
					BgL_arg2476z00_3086 = BgL_v1721z00_3120;
				}
				BGl_rtl_newz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 52)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 55712), BGl_proc3335z00zzsaw_defsz00,
					BGl_proc3334z00zzsaw_defsz00, BFALSE, BGl_proc3333z00zzsaw_defsz00,
					BFALSE, BgL_arg2475z00_3085, BgL_arg2476z00_3086);
			}
			{	/* SawMill/defs.scm 57 */
				obj_t BgL_arg2502z00_3127;
				obj_t BgL_arg2503z00_3128;

				{	/* SawMill/defs.scm 57 */
					obj_t BgL_v1723z00_3140;

					BgL_v1723z00_3140 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 57 */
						obj_t BgL_arg2512z00_3141;

						BgL_arg2512z00_3141 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc3337z00zzsaw_defsz00,
							BGl_proc3336z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1723z00_3140, ((long) 0), BgL_arg2512z00_3141);
					}
					BgL_arg2502z00_3127 = BgL_v1723z00_3140;
				}
				{	/* SawMill/defs.scm 57 */
					obj_t BgL_v1724z00_3151;

					BgL_v1724z00_3151 = create_vector(((long) 0));
					BgL_arg2503z00_3128 = BgL_v1724z00_3151;
				}
				BGl_rtl_callz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 53)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 38987), BGl_proc3340z00zzsaw_defsz00,
					BGl_proc3339z00zzsaw_defsz00, BFALSE, BGl_proc3338z00zzsaw_defsz00,
					BFALSE, BgL_arg2502z00_3127, BgL_arg2503z00_3128);
			}
			{	/* SawMill/defs.scm 58 */
				obj_t BgL_arg2525z00_3158;
				obj_t BgL_arg2526z00_3159;

				{	/* SawMill/defs.scm 58 */
					obj_t BgL_v1725z00_3170;

					BgL_v1725z00_3170 = create_vector(((long) 0));
					BgL_arg2525z00_3158 = BgL_v1725z00_3170;
				}
				{	/* SawMill/defs.scm 58 */
					obj_t BgL_v1726z00_3171;

					BgL_v1726z00_3171 = create_vector(((long) 0));
					BgL_arg2526z00_3159 = BgL_v1726z00_3171;
				}
				BGl_rtl_applyz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 54)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 20885), BGl_proc3343z00zzsaw_defsz00,
					BGl_proc3342z00zzsaw_defsz00, BFALSE, BGl_proc3341z00zzsaw_defsz00,
					BFALSE, BgL_arg2525z00_3158, BgL_arg2526z00_3159);
			}
			{	/* SawMill/defs.scm 59 */
				obj_t BgL_arg2539z00_3178;
				obj_t BgL_arg2541z00_3179;

				{	/* SawMill/defs.scm 59 */
					obj_t BgL_v1727z00_3193;

					BgL_v1727z00_3193 = create_vector(((long) 3));
					{	/* SawMill/defs.scm 59 */
						obj_t BgL_arg2552z00_3194;

						BgL_arg2552z00_3194 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc3345z00zzsaw_defsz00,
							BGl_proc3344z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 55)));
						VECTOR_SET(BgL_v1727z00_3193, ((long) 0), BgL_arg2552z00_3194);
					}
					{	/* SawMill/defs.scm 59 */
						obj_t BgL_arg2558z00_3204;

						BgL_arg2558z00_3204 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									56)), BGl_proc3347z00zzsaw_defsz00,
							BGl_proc3346z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1727z00_3193, ((long) 1), BgL_arg2558z00_3204);
					}
					{	/* SawMill/defs.scm 59 */
						obj_t BgL_arg2565z00_3214;

						BgL_arg2565z00_3214 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									57)), BGl_proc3349z00zzsaw_defsz00,
							BGl_proc3348z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1727z00_3193, ((long) 2), BgL_arg2565z00_3214);
					}
					BgL_arg2539z00_3178 = BgL_v1727z00_3193;
				}
				{	/* SawMill/defs.scm 59 */
					obj_t BgL_v1728z00_3224;

					BgL_v1728z00_3224 = create_vector(((long) 0));
					BgL_arg2541z00_3179 = BgL_v1728z00_3224;
				}
				BGl_rtl_lightfuncallz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 58)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 38394), BGl_proc3352z00zzsaw_defsz00,
					BGl_proc3351z00zzsaw_defsz00, BFALSE, BGl_proc3350z00zzsaw_defsz00,
					BFALSE, BgL_arg2539z00_3178, BgL_arg2541z00_3179);
			}
			{	/* SawMill/defs.scm 60 */
				obj_t BgL_arg2574z00_3231;
				obj_t BgL_arg2575z00_3232;

				{	/* SawMill/defs.scm 60 */
					obj_t BgL_v1729z00_3243;

					BgL_v1729z00_3243 = create_vector(((long) 0));
					BgL_arg2574z00_3231 = BgL_v1729z00_3243;
				}
				{	/* SawMill/defs.scm 60 */
					obj_t BgL_v1730z00_3244;

					BgL_v1730z00_3244 = create_vector(((long) 0));
					BgL_arg2575z00_3232 = BgL_v1730z00_3244;
				}
				BGl_rtl_funcallz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 59)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 41526), BGl_proc3355z00zzsaw_defsz00,
					BGl_proc3354z00zzsaw_defsz00, BFALSE, BGl_proc3353z00zzsaw_defsz00,
					BFALSE, BgL_arg2574z00_3231, BgL_arg2575z00_3232);
			}
			{	/* SawMill/defs.scm 61 */
				obj_t BgL_arg2585z00_3251;
				obj_t BgL_arg2586z00_3252;

				{	/* SawMill/defs.scm 61 */
					obj_t BgL_v1731z00_3264;

					BgL_v1731z00_3264 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 61 */
						obj_t BgL_arg2594z00_3265;

						BgL_arg2594z00_3265 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									60)), BGl_proc3357z00zzsaw_defsz00,
							BGl_proc3356z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1731z00_3264, ((long) 0), BgL_arg2594z00_3265);
					}
					BgL_arg2585z00_3251 = BgL_v1731z00_3264;
				}
				{	/* SawMill/defs.scm 61 */
					obj_t BgL_v1732z00_3275;

					BgL_v1732z00_3275 = create_vector(((long) 0));
					BgL_arg2586z00_3252 = BgL_v1732z00_3275;
				}
				BGl_rtl_pragmaz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 61)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 34525), BGl_proc3360z00zzsaw_defsz00,
					BGl_proc3359z00zzsaw_defsz00, BFALSE, BGl_proc3358z00zzsaw_defsz00,
					BFALSE, BgL_arg2585z00_3251, BgL_arg2586z00_3252);
			}
			{	/* SawMill/defs.scm 62 */
				obj_t BgL_arg2604z00_3282;
				obj_t BgL_arg2605z00_3283;

				{	/* SawMill/defs.scm 62 */
					obj_t BgL_v1733z00_3296;

					BgL_v1733z00_3296 = create_vector(((long) 2));
					{	/* SawMill/defs.scm 62 */
						obj_t BgL_arg2611z00_3297;

						BgL_arg2611z00_3297 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									62)), BGl_proc3362z00zzsaw_defsz00,
							BGl_proc3361z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1733z00_3296, ((long) 0), BgL_arg2611z00_3297);
					}
					{	/* SawMill/defs.scm 62 */
						obj_t BgL_arg2616z00_3307;

						BgL_arg2616z00_3307 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									63)), BGl_proc3364z00zzsaw_defsz00,
							BGl_proc3363z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1733z00_3296, ((long) 1), BgL_arg2616z00_3307);
					}
					BgL_arg2604z00_3282 = BgL_v1733z00_3296;
				}
				{	/* SawMill/defs.scm 62 */
					obj_t BgL_v1734z00_3317;

					BgL_v1734z00_3317 = create_vector(((long) 0));
					BgL_arg2605z00_3283 = BgL_v1734z00_3317;
				}
				BGl_rtl_castz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 64)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 10948), BGl_proc3367z00zzsaw_defsz00,
					BGl_proc3366z00zzsaw_defsz00, BFALSE, BGl_proc3365z00zzsaw_defsz00,
					BFALSE, BgL_arg2604z00_3282, BgL_arg2605z00_3283);
			}
			{	/* SawMill/defs.scm 63 */
				obj_t BgL_arg2626z00_3324;
				obj_t BgL_arg2628z00_3325;

				{	/* SawMill/defs.scm 63 */
					obj_t BgL_v1735z00_3337;

					BgL_v1735z00_3337 = create_vector(((long) 1));
					{	/* SawMill/defs.scm 63 */
						obj_t BgL_arg2635z00_3338;

						BgL_arg2635z00_3338 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc3369z00zzsaw_defsz00,
							BGl_proc3368z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1735z00_3337, ((long) 0), BgL_arg2635z00_3338);
					}
					BgL_arg2626z00_3324 = BgL_v1735z00_3337;
				}
				{	/* SawMill/defs.scm 63 */
					obj_t BgL_v1736z00_3348;

					BgL_v1736z00_3348 = create_vector(((long) 0));
					BgL_arg2628z00_3325 = BgL_v1736z00_3348;
				}
				BGl_rtl_cast_nullz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 65)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 56814), BGl_proc3372z00zzsaw_defsz00,
					BGl_proc3371z00zzsaw_defsz00, BFALSE, BGl_proc3370z00zzsaw_defsz00,
					BFALSE, BgL_arg2626z00_3324, BgL_arg2628z00_3325);
			}
			{	/* SawMill/defs.scm 64 */
				obj_t BgL_arg2644z00_3355;
				obj_t BgL_arg2645z00_3356;

				{	/* SawMill/defs.scm 64 */
					obj_t BgL_v1737z00_3367;

					BgL_v1737z00_3367 = create_vector(((long) 0));
					BgL_arg2644z00_3355 = BgL_v1737z00_3367;
				}
				{	/* SawMill/defs.scm 64 */
					obj_t BgL_v1738z00_3368;

					BgL_v1738z00_3368 = create_vector(((long) 0));
					BgL_arg2645z00_3356 = BgL_v1738z00_3368;
				}
				BGl_rtl_protectz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 66)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 65074), BGl_proc3375z00zzsaw_defsz00,
					BGl_proc3374z00zzsaw_defsz00, BFALSE, BGl_proc3373z00zzsaw_defsz00,
					BFALSE, BgL_arg2644z00_3355, BgL_arg2645z00_3356);
			}
			{	/* SawMill/defs.scm 65 */
				obj_t BgL_arg2656z00_3375;
				obj_t BgL_arg2657z00_3376;

				{	/* SawMill/defs.scm 65 */
					obj_t BgL_v1739z00_3387;

					BgL_v1739z00_3387 = create_vector(((long) 0));
					BgL_arg2656z00_3375 = BgL_v1739z00_3387;
				}
				{	/* SawMill/defs.scm 65 */
					obj_t BgL_v1740z00_3388;

					BgL_v1740z00_3388 = create_vector(((long) 0));
					BgL_arg2657z00_3376 = BgL_v1740z00_3388;
				}
				BGl_rtl_protectedz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 67)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_funz00zzsaw_defsz00,
					((long) 2957), BGl_proc3378z00zzsaw_defsz00,
					BGl_proc3377z00zzsaw_defsz00, BFALSE, BGl_proc3376z00zzsaw_defsz00,
					BFALSE, BgL_arg2656z00_3375, BgL_arg2657z00_3376);
			}
			{	/* SawMill/defs.scm 68 */
				obj_t BgL_arg2666z00_3395;
				obj_t BgL_arg2667z00_3396;

				{	/* SawMill/defs.scm 68 */
					obj_t BgL_v1741z00_3411;

					BgL_v1741z00_3411 = create_vector(((long) 5));
					{	/* SawMill/defs.scm 68 */
						obj_t BgL_arg2673z00_3412;

						BgL_arg2673z00_3412 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc3381z00zzsaw_defsz00,
							BGl_proc3380z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3379z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1741z00_3411, ((long) 0), BgL_arg2673z00_3412);
					}
					{	/* SawMill/defs.scm 68 */
						obj_t BgL_arg2681z00_3425;

						BgL_arg2681z00_3425 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									68)), BGl_proc3384z00zzsaw_defsz00,
							BGl_proc3383z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3382z00zzsaw_defsz00, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1741z00_3411, ((long) 1), BgL_arg2681z00_3425);
					}
					{	/* SawMill/defs.scm 68 */
						obj_t BgL_arg2688z00_3438;

						BgL_arg2688z00_3438 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									69)), BGl_proc3387z00zzsaw_defsz00,
							BGl_proc3386z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3385z00zzsaw_defsz00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1741z00_3411, ((long) 2), BgL_arg2688z00_3438);
					}
					{	/* SawMill/defs.scm 68 */
						obj_t BgL_arg2695z00_3451;

						BgL_arg2695z00_3451 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									70)), BGl_proc3389z00zzsaw_defsz00,
							BGl_proc3388z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_rtl_funz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1741z00_3411, ((long) 3), BgL_arg2695z00_3451);
					}
					{	/* SawMill/defs.scm 68 */
						obj_t BgL_arg2702z00_3461;

						BgL_arg2702z00_3461 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									71)), BGl_proc3391z00zzsaw_defsz00,
							BGl_proc3390z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1741z00_3411, ((long) 4), BgL_arg2702z00_3461);
					}
					BgL_arg2666z00_3395 = BgL_v1741z00_3411;
				}
				{	/* SawMill/defs.scm 68 */
					obj_t BgL_v1742z00_3471;

					BgL_v1742z00_3471 = create_vector(((long) 0));
					BgL_arg2667z00_3396 = BgL_v1742z00_3471;
				}
				BGl_rtl_insz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 72)),
					CNST_TABLE_REF(((long) 9)), BGl_objectz00zz__objectz00,
					((long) 19408), BGl_proc3394z00zzsaw_defsz00,
					BGl_proc3393z00zzsaw_defsz00, BFALSE, BGl_proc3392z00zzsaw_defsz00,
					BFALSE, BgL_arg2666z00_3395, BgL_arg2667z00_3396);
			}
			{	/* SawMill/defs.scm 76 */
				obj_t BgL_arg2710z00_3478;
				obj_t BgL_arg2712z00_3479;

				{	/* SawMill/defs.scm 76 */
					obj_t BgL_v1743z00_3493;

					BgL_v1743z00_3493 = create_vector(((long) 4));
					{	/* SawMill/defs.scm 76 */
						obj_t BgL_arg2718z00_3494;

						BgL_arg2718z00_3494 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									73)), BGl_proc3397z00zzsaw_defsz00,
							BGl_proc3396z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3395z00zzsaw_defsz00, CNST_TABLE_REF(((long) 74)));
						VECTOR_SET(BgL_v1743z00_3493, ((long) 0), BgL_arg2718z00_3494);
					}
					{	/* SawMill/defs.scm 76 */
						obj_t BgL_arg2727z00_3507;

						BgL_arg2727z00_3507 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									75)), BGl_proc3400z00zzsaw_defsz00,
							BGl_proc3399z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3398z00zzsaw_defsz00, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1743z00_3493, ((long) 1), BgL_arg2727z00_3507);
					}
					{	/* SawMill/defs.scm 76 */
						obj_t BgL_arg2734z00_3520;

						BgL_arg2734z00_3520 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									76)), BGl_proc3403z00zzsaw_defsz00,
							BGl_proc3402z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3401z00zzsaw_defsz00, CNST_TABLE_REF(((long) 51)));
						VECTOR_SET(BgL_v1743z00_3493, ((long) 2), BgL_arg2734z00_3520);
					}
					{	/* SawMill/defs.scm 76 */
						obj_t BgL_arg2746z00_3533;

						BgL_arg2746z00_3533 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									77)), BGl_proc3405z00zzsaw_defsz00,
							BGl_proc3404z00zzsaw_defsz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 78)));
						VECTOR_SET(BgL_v1743z00_3493, ((long) 3), BgL_arg2746z00_3533);
					}
					BgL_arg2710z00_3478 = BgL_v1743z00_3493;
				}
				{	/* SawMill/defs.scm 76 */
					obj_t BgL_v1744z00_3543;

					BgL_v1744z00_3543 = create_vector(((long) 0));
					BgL_arg2712z00_3479 = BgL_v1744z00_3543;
				}
				return (BGl_blockz00zzsaw_defsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 79)),
						CNST_TABLE_REF(((long) 9)), BGl_objectz00zz__objectz00,
						((long) 9344), BGl_proc3408z00zzsaw_defsz00,
						BGl_proc3407z00zzsaw_defsz00, BFALSE, BGl_proc3406z00zzsaw_defsz00,
						BFALSE, BgL_arg2710z00_3478, BgL_arg2712z00_3479), BUNSPEC);
		}}

	}



/* &<@anonymous:2717> */
	obj_t BGl_z62zc3z04anonymousza32717ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6134,
		obj_t BgL_new1332z00_6135)
	{
		{	/* SawMill/defs.scm 76 */
			{
				BgL_blockz00_bglt BgL_auxz00_9825;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_new1332z00_6135)))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1332z00_6135)))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1332z00_6135)))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1332z00_6135)))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_9825 = ((BgL_blockz00_bglt) BgL_new1332z00_6135);
				return ((obj_t) BgL_auxz00_9825);
			}
		}

	}



/* &lambda2715 */
	BgL_blockz00_bglt BGl_z62lambda2715z62zzsaw_defsz00(obj_t BgL_envz00_6136)
	{
		{	/* SawMill/defs.scm 76 */
			{	/* SawMill/defs.scm 76 */
				BgL_blockz00_bglt BgL_new1331z00_6990;

				BgL_new1331z00_6990 =
					((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_blockz00_bgl))));
				{	/* SawMill/defs.scm 76 */
					long BgL_arg2716z00_6991;

					{	/* SawMill/defs.scm 76 */
						long BgL_res3109z00_6992;

						BgL_res3109z00_6992 = BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
						BgL_arg2716z00_6991 = BgL_res3109z00_6992;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1331z00_6990), BgL_arg2716z00_6991);
				}
				{	/* SawMill/defs.scm 76 */
					BgL_objectz00_bglt BgL_tmpz00_9842;

					BgL_tmpz00_9842 = ((BgL_objectz00_bglt) BgL_new1331z00_6990);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9842, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1331z00_6990);
				return BgL_new1331z00_6990;
			}
		}

	}



/* &lambda2713 */
	BgL_blockz00_bglt BGl_z62lambda2713z62zzsaw_defsz00(obj_t BgL_envz00_6137,
		obj_t BgL_label1327z00_6138, obj_t BgL_preds1328z00_6139,
		obj_t BgL_succs1329z00_6140, obj_t BgL_first1330z00_6141)
	{
		{	/* SawMill/defs.scm 76 */
			{	/* SawMill/defs.scm 76 */
				int BgL_label1327z00_6993;

				BgL_label1327z00_6993 = CINT(BgL_label1327z00_6138);
				{	/* SawMill/defs.scm 76 */
					BgL_blockz00_bglt BgL_new1519z00_6997;

					{	/* SawMill/defs.scm 76 */
						BgL_blockz00_bglt BgL_new1518z00_6998;

						BgL_new1518z00_6998 =
							((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						{	/* SawMill/defs.scm 76 */
							long BgL_arg2714z00_6999;

							{	/* SawMill/defs.scm 76 */
								long BgL_res3108z00_7000;

								BgL_res3108z00_7000 =
									BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
								BgL_arg2714z00_6999 = BgL_res3108z00_7000;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1518z00_6998),
								BgL_arg2714z00_6999);
						}
						{	/* SawMill/defs.scm 76 */
							BgL_objectz00_bglt BgL_tmpz00_9851;

							BgL_tmpz00_9851 = ((BgL_objectz00_bglt) BgL_new1518z00_6998);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9851, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1518z00_6998);
						BgL_new1519z00_6997 = BgL_new1518z00_6998;
					}
					((((BgL_blockz00_bglt) COBJECT(BgL_new1519z00_6997))->BgL_labelz00) =
						((int) BgL_label1327z00_6993), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(BgL_new1519z00_6997))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1328z00_6139)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(BgL_new1519z00_6997))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1329z00_6140)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(BgL_new1519z00_6997))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1330z00_6141)), BUNSPEC);
					return BgL_new1519z00_6997;
				}
			}
		}

	}



/* &lambda2750 */
	obj_t BGl_z62lambda2750z62zzsaw_defsz00(obj_t BgL_envz00_6142,
		obj_t BgL_oz00_6143, obj_t BgL_vz00_6144)
	{
		{	/* SawMill/defs.scm 76 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6143)))->BgL_firstz00) = ((obj_t)
					((obj_t) BgL_vz00_6144)), BUNSPEC);
		}

	}



/* &lambda2749 */
	obj_t BGl_z62lambda2749z62zzsaw_defsz00(obj_t BgL_envz00_6145,
		obj_t BgL_oz00_6146)
	{
		{	/* SawMill/defs.scm 76 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_6146)))->BgL_firstz00);
		}

	}



/* &<@anonymous:2745> */
	obj_t BGl_z62zc3z04anonymousza32745ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6147)
	{
		{	/* SawMill/defs.scm 76 */
			return BNIL;
		}

	}



/* &lambda2744 */
	obj_t BGl_z62lambda2744z62zzsaw_defsz00(obj_t BgL_envz00_6148,
		obj_t BgL_oz00_6149, obj_t BgL_vz00_6150)
	{
		{	/* SawMill/defs.scm 76 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6149)))->BgL_succsz00) = ((obj_t)
					((obj_t) BgL_vz00_6150)), BUNSPEC);
		}

	}



/* &lambda2743 */
	obj_t BGl_z62lambda2743z62zzsaw_defsz00(obj_t BgL_envz00_6151,
		obj_t BgL_oz00_6152)
	{
		{	/* SawMill/defs.scm 76 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_6152)))->BgL_succsz00);
		}

	}



/* &<@anonymous:2733> */
	obj_t BGl_z62zc3z04anonymousza32733ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6153)
	{
		{	/* SawMill/defs.scm 76 */
			return BNIL;
		}

	}



/* &lambda2732 */
	obj_t BGl_z62lambda2732z62zzsaw_defsz00(obj_t BgL_envz00_6154,
		obj_t BgL_oz00_6155, obj_t BgL_vz00_6156)
	{
		{	/* SawMill/defs.scm 76 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6155)))->BgL_predsz00) = ((obj_t)
					((obj_t) BgL_vz00_6156)), BUNSPEC);
		}

	}



/* &lambda2731 */
	obj_t BGl_z62lambda2731z62zzsaw_defsz00(obj_t BgL_envz00_6157,
		obj_t BgL_oz00_6158)
	{
		{	/* SawMill/defs.scm 76 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_6158)))->BgL_predsz00);
		}

	}



/* &<@anonymous:2726> */
	obj_t BGl_z62zc3z04anonymousza32726ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6159)
	{
		{	/* SawMill/defs.scm 76 */
			return BINT(((long) 0));
		}

	}



/* &lambda2725 */
	obj_t BGl_z62lambda2725z62zzsaw_defsz00(obj_t BgL_envz00_6160,
		obj_t BgL_oz00_6161, obj_t BgL_vz00_6162)
	{
		{	/* SawMill/defs.scm 76 */
			{	/* SawMill/defs.scm 76 */
				int BgL_vz00_7011;

				BgL_vz00_7011 = CINT(BgL_vz00_6162);
				return
					((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oz00_6161)))->BgL_labelz00) =
					((int) BgL_vz00_7011), BUNSPEC);
		}}

	}



/* &lambda2724 */
	obj_t BGl_z62lambda2724z62zzsaw_defsz00(obj_t BgL_envz00_6163,
		obj_t BgL_oz00_6164)
	{
		{	/* SawMill/defs.scm 76 */
			return
				BINT(
				(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6164)))->BgL_labelz00));
		}

	}



/* &<@anonymous:2672> */
	obj_t BGl_z62zc3z04anonymousza32672ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6165,
		obj_t BgL_new1325z00_6166)
	{
		{	/* SawMill/defs.scm 68 */
			{
				BgL_rtl_insz00_bglt BgL_auxz00_9884;

				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1325z00_6166)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_6166)))->BgL_z52spillz52) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1325z00_6166)))->BgL_destz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_9891;

					{	/* SawMill/defs.scm 68 */
						obj_t BgL_classz00_7014;

						BgL_classz00_7014 = BGl_rtl_funz00zzsaw_defsz00;
						{	/* SawMill/defs.scm 68 */
							obj_t BgL__ortest_1106z00_7015;

							BgL__ortest_1106z00_7015 = BGL_CLASS_NIL(BgL_classz00_7014);
							if (CBOOL(BgL__ortest_1106z00_7015))
								{	/* SawMill/defs.scm 68 */
									BgL_auxz00_9891 =
										((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_7015);
								}
							else
								{	/* SawMill/defs.scm 68 */
									BgL_auxz00_9891 =
										((BgL_rtl_funz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7014));
								}
						}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_new1325z00_6166)))->BgL_funz00) =
						((BgL_rtl_funz00_bglt) BgL_auxz00_9891), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1325z00_6166)))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_9884 = ((BgL_rtl_insz00_bglt) BgL_new1325z00_6166);
				return ((obj_t) BgL_auxz00_9884);
			}
		}

	}



/* &lambda2670 */
	BgL_rtl_insz00_bglt BGl_z62lambda2670z62zzsaw_defsz00(obj_t BgL_envz00_6167)
	{
		{	/* SawMill/defs.scm 68 */
			{	/* SawMill/defs.scm 68 */
				BgL_rtl_insz00_bglt BgL_new1324z00_7016;

				BgL_new1324z00_7016 =
					((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_insz00_bgl))));
				{	/* SawMill/defs.scm 68 */
					long BgL_arg2671z00_7017;

					{	/* SawMill/defs.scm 68 */
						long BgL_res3107z00_7018;

						BgL_res3107z00_7018 = BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
						BgL_arg2671z00_7017 = BgL_res3107z00_7018;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1324z00_7016), BgL_arg2671z00_7017);
				}
				{	/* SawMill/defs.scm 68 */
					BgL_objectz00_bglt BgL_tmpz00_9908;

					BgL_tmpz00_9908 = ((BgL_objectz00_bglt) BgL_new1324z00_7016);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9908, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1324z00_7016);
				return BgL_new1324z00_7016;
			}
		}

	}



/* &lambda2668 */
	BgL_rtl_insz00_bglt BGl_z62lambda2668z62zzsaw_defsz00(obj_t BgL_envz00_6168,
		obj_t BgL_loc1319z00_6169, obj_t BgL_z52spill1320z52_6170,
		obj_t BgL_dest1321z00_6171, obj_t BgL_fun1322z00_6172,
		obj_t BgL_args1323z00_6173)
	{
		{	/* SawMill/defs.scm 68 */
			{	/* SawMill/defs.scm 68 */
				BgL_rtl_insz00_bglt BgL_new1517z00_7022;

				{	/* SawMill/defs.scm 68 */
					BgL_rtl_insz00_bglt BgL_new1516z00_7023;

					BgL_new1516z00_7023 =
						((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_insz00_bgl))));
					{	/* SawMill/defs.scm 68 */
						long BgL_arg2669z00_7024;

						{	/* SawMill/defs.scm 68 */
							long BgL_res3106z00_7025;

							BgL_res3106z00_7025 =
								BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
							BgL_arg2669z00_7024 = BgL_res3106z00_7025;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1516z00_7023), BgL_arg2669z00_7024);
					}
					{	/* SawMill/defs.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_9916;

						BgL_tmpz00_9916 = ((BgL_objectz00_bglt) BgL_new1516z00_7023);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9916, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1516z00_7023);
					BgL_new1517z00_7022 = BgL_new1516z00_7023;
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1517z00_7022))->BgL_locz00) =
					((obj_t) BgL_loc1319z00_6169), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1517z00_7022))->
						BgL_z52spillz52) =
					((obj_t) ((obj_t) BgL_z52spill1320z52_6170)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1517z00_7022))->BgL_destz00) =
					((obj_t) BgL_dest1321z00_6171), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1517z00_7022))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_fun1322z00_6172)),
					BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1517z00_7022))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1323z00_6173)), BUNSPEC);
				return BgL_new1517z00_7022;
			}
		}

	}



/* &lambda2706 */
	obj_t BGl_z62lambda2706z62zzsaw_defsz00(obj_t BgL_envz00_6174,
		obj_t BgL_oz00_6175, obj_t BgL_vz00_6176)
	{
		{	/* SawMill/defs.scm 68 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_6175)))->BgL_argsz00) = ((obj_t)
					((obj_t) BgL_vz00_6176)), BUNSPEC);
		}

	}



/* &lambda2705 */
	obj_t BGl_z62lambda2705z62zzsaw_defsz00(obj_t BgL_envz00_6177,
		obj_t BgL_oz00_6178)
	{
		{	/* SawMill/defs.scm 68 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_6178)))->BgL_argsz00);
		}

	}



/* &lambda2700 */
	obj_t BGl_z62lambda2700z62zzsaw_defsz00(obj_t BgL_envz00_6179,
		obj_t BgL_oz00_6180, obj_t BgL_vz00_6181)
	{
		{	/* SawMill/defs.scm 68 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_6180)))->BgL_funz00) =
				((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_vz00_6181)), BUNSPEC);
		}

	}



/* &lambda2699 */
	BgL_rtl_funz00_bglt BGl_z62lambda2699z62zzsaw_defsz00(obj_t BgL_envz00_6182,
		obj_t BgL_oz00_6183)
	{
		{	/* SawMill/defs.scm 68 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_6183)))->BgL_funz00);
		}

	}



/* &<@anonymous:2694> */
	obj_t BGl_z62zc3z04anonymousza32694ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6184)
	{
		{	/* SawMill/defs.scm 68 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2693 */
	obj_t BGl_z62lambda2693z62zzsaw_defsz00(obj_t BgL_envz00_6185,
		obj_t BgL_oz00_6186, obj_t BgL_vz00_6187)
	{
		{	/* SawMill/defs.scm 68 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_6186)))->BgL_destz00) =
				((obj_t) BgL_vz00_6187), BUNSPEC);
		}

	}



/* &lambda2692 */
	obj_t BGl_z62lambda2692z62zzsaw_defsz00(obj_t BgL_envz00_6188,
		obj_t BgL_oz00_6189)
	{
		{	/* SawMill/defs.scm 68 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_6189)))->BgL_destz00);
		}

	}



/* &<@anonymous:2687> */
	obj_t BGl_z62zc3z04anonymousza32687ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6190)
	{
		{	/* SawMill/defs.scm 68 */
			return BNIL;
		}

	}



/* &lambda2686 */
	obj_t BGl_z62lambda2686z62zzsaw_defsz00(obj_t BgL_envz00_6191,
		obj_t BgL_oz00_6192, obj_t BgL_vz00_6193)
	{
		{	/* SawMill/defs.scm 68 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_6192)))->BgL_z52spillz52) =
				((obj_t) ((obj_t) BgL_vz00_6193)), BUNSPEC);
		}

	}



/* &lambda2685 */
	obj_t BGl_z62lambda2685z62zzsaw_defsz00(obj_t BgL_envz00_6194,
		obj_t BgL_oz00_6195)
	{
		{	/* SawMill/defs.scm 68 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_6195)))->BgL_z52spillz52);
		}

	}



/* &<@anonymous:2680> */
	obj_t BGl_z62zc3z04anonymousza32680ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6196)
	{
		{	/* SawMill/defs.scm 68 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2679 */
	obj_t BGl_z62lambda2679z62zzsaw_defsz00(obj_t BgL_envz00_6197,
		obj_t BgL_oz00_6198, obj_t BgL_vz00_6199)
	{
		{	/* SawMill/defs.scm 68 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_6198)))->BgL_locz00) =
				((obj_t) BgL_vz00_6199), BUNSPEC);
		}

	}



/* &lambda2678 */
	obj_t BGl_z62lambda2678z62zzsaw_defsz00(obj_t BgL_envz00_6200,
		obj_t BgL_oz00_6201)
	{
		{	/* SawMill/defs.scm 68 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_6201)))->BgL_locz00);
		}

	}



/* &<@anonymous:2662> */
	obj_t BGl_z62zc3z04anonymousza32662ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6202,
		obj_t BgL_new1317z00_6203)
	{
		{	/* SawMill/defs.scm 65 */
			{
				BgL_rtl_protectedz00_bglt BgL_auxz00_9953;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_protectedz00_bglt) BgL_new1317z00_6203))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9953 = ((BgL_rtl_protectedz00_bglt) BgL_new1317z00_6203);
				return ((obj_t) BgL_auxz00_9953);
			}
		}

	}



/* &lambda2660 */
	BgL_rtl_protectedz00_bglt BGl_z62lambda2660z62zzsaw_defsz00(obj_t
		BgL_envz00_6204)
	{
		{	/* SawMill/defs.scm 65 */
			{	/* SawMill/defs.scm 65 */
				BgL_rtl_protectedz00_bglt BgL_new1316z00_7040;

				BgL_new1316z00_7040 =
					((BgL_rtl_protectedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_protectedz00_bgl))));
				{	/* SawMill/defs.scm 65 */
					long BgL_arg2661z00_7041;

					{	/* SawMill/defs.scm 65 */
						long BgL_res3105z00_7042;

						BgL_res3105z00_7042 =
							BGL_CLASS_INDEX(BGl_rtl_protectedz00zzsaw_defsz00);
						BgL_arg2661z00_7041 = BgL_res3105z00_7042;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1316z00_7040), BgL_arg2661z00_7041);
				}
				return BgL_new1316z00_7040;
			}
		}

	}



/* &lambda2658 */
	BgL_rtl_protectedz00_bglt BGl_z62lambda2658z62zzsaw_defsz00(obj_t
		BgL_envz00_6205, obj_t BgL_loc1315z00_6206)
	{
		{	/* SawMill/defs.scm 65 */
			{	/* SawMill/defs.scm 65 */
				BgL_rtl_protectedz00_bglt BgL_new1515z00_7043;

				{	/* SawMill/defs.scm 65 */
					BgL_rtl_protectedz00_bglt BgL_new1514z00_7044;

					BgL_new1514z00_7044 =
						((BgL_rtl_protectedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_protectedz00_bgl))));
					{	/* SawMill/defs.scm 65 */
						long BgL_arg2659z00_7045;

						{	/* SawMill/defs.scm 65 */
							long BgL_res3104z00_7046;

							BgL_res3104z00_7046 =
								BGL_CLASS_INDEX(BGl_rtl_protectedz00zzsaw_defsz00);
							BgL_arg2659z00_7045 = BgL_res3104z00_7046;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1514z00_7044), BgL_arg2659z00_7045);
					}
					BgL_new1515z00_7043 = BgL_new1514z00_7044;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1515z00_7043)))->BgL_locz00) =
					((obj_t) BgL_loc1315z00_6206), BUNSPEC);
				return BgL_new1515z00_7043;
			}
		}

	}



/* &<@anonymous:2651> */
	obj_t BGl_z62zc3z04anonymousza32651ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6207,
		obj_t BgL_new1313z00_6208)
	{
		{	/* SawMill/defs.scm 64 */
			{
				BgL_rtl_protectz00_bglt BgL_auxz00_9969;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_protectz00_bglt) BgL_new1313z00_6208))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9969 = ((BgL_rtl_protectz00_bglt) BgL_new1313z00_6208);
				return ((obj_t) BgL_auxz00_9969);
			}
		}

	}



/* &lambda2649 */
	BgL_rtl_protectz00_bglt BGl_z62lambda2649z62zzsaw_defsz00(obj_t
		BgL_envz00_6209)
	{
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectz00_bglt BgL_new1312z00_7048;

				BgL_new1312z00_7048 =
					((BgL_rtl_protectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_protectz00_bgl))));
				{	/* SawMill/defs.scm 64 */
					long BgL_arg2650z00_7049;

					{	/* SawMill/defs.scm 64 */
						long BgL_res3103z00_7050;

						BgL_res3103z00_7050 =
							BGL_CLASS_INDEX(BGl_rtl_protectz00zzsaw_defsz00);
						BgL_arg2650z00_7049 = BgL_res3103z00_7050;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1312z00_7048), BgL_arg2650z00_7049);
				}
				return BgL_new1312z00_7048;
			}
		}

	}



/* &lambda2646 */
	BgL_rtl_protectz00_bglt BGl_z62lambda2646z62zzsaw_defsz00(obj_t
		BgL_envz00_6210, obj_t BgL_loc1310z00_6211)
	{
		{	/* SawMill/defs.scm 64 */
			{	/* SawMill/defs.scm 64 */
				BgL_rtl_protectz00_bglt BgL_new1513z00_7051;

				{	/* SawMill/defs.scm 64 */
					BgL_rtl_protectz00_bglt BgL_new1512z00_7052;

					BgL_new1512z00_7052 =
						((BgL_rtl_protectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_protectz00_bgl))));
					{	/* SawMill/defs.scm 64 */
						long BgL_arg2648z00_7053;

						{	/* SawMill/defs.scm 64 */
							long BgL_res3102z00_7054;

							BgL_res3102z00_7054 =
								BGL_CLASS_INDEX(BGl_rtl_protectz00zzsaw_defsz00);
							BgL_arg2648z00_7053 = BgL_res3102z00_7054;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1512z00_7052), BgL_arg2648z00_7053);
					}
					BgL_new1513z00_7051 = BgL_new1512z00_7052;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1513z00_7051)))->BgL_locz00) =
					((obj_t) BgL_loc1310z00_6211), BUNSPEC);
				return BgL_new1513z00_7051;
			}
		}

	}



/* &<@anonymous:2634> */
	obj_t BGl_z62zc3z04anonymousza32634ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6212,
		obj_t BgL_new1308z00_6213)
	{
		{	/* SawMill/defs.scm 63 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_auxz00_9985;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_cast_nullz00_bglt) BgL_new1308z00_6213))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9989;

					{	/* SawMill/defs.scm 63 */
						obj_t BgL_classz00_7056;

						BgL_classz00_7056 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 63 */
							obj_t BgL__ortest_1106z00_7057;

							BgL__ortest_1106z00_7057 = BGL_CLASS_NIL(BgL_classz00_7056);
							if (CBOOL(BgL__ortest_1106z00_7057))
								{	/* SawMill/defs.scm 63 */
									BgL_auxz00_9989 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7057);
								}
							else
								{	/* SawMill/defs.scm 63 */
									BgL_auxz00_9989 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7056));
								}
						}
					}
					((((BgL_rtl_cast_nullz00_bglt) COBJECT(
									((BgL_rtl_cast_nullz00_bglt) BgL_new1308z00_6213)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_9989), BUNSPEC);
				}
				BgL_auxz00_9985 = ((BgL_rtl_cast_nullz00_bglt) BgL_new1308z00_6213);
				return ((obj_t) BgL_auxz00_9985);
			}
		}

	}



/* &lambda2632 */
	BgL_rtl_cast_nullz00_bglt BGl_z62lambda2632z62zzsaw_defsz00(obj_t
		BgL_envz00_6214)
	{
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_cast_nullz00_bglt BgL_new1307z00_7058;

				BgL_new1307z00_7058 =
					((BgL_rtl_cast_nullz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_cast_nullz00_bgl))));
				{	/* SawMill/defs.scm 63 */
					long BgL_arg2633z00_7059;

					{	/* SawMill/defs.scm 63 */
						long BgL_res3101z00_7060;

						BgL_res3101z00_7060 =
							BGL_CLASS_INDEX(BGl_rtl_cast_nullz00zzsaw_defsz00);
						BgL_arg2633z00_7059 = BgL_res3101z00_7060;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1307z00_7058), BgL_arg2633z00_7059);
				}
				return BgL_new1307z00_7058;
			}
		}

	}



/* &lambda2629 */
	BgL_rtl_cast_nullz00_bglt BGl_z62lambda2629z62zzsaw_defsz00(obj_t
		BgL_envz00_6215, obj_t BgL_loc1304z00_6216, obj_t BgL_type1305z00_6217)
	{
		{	/* SawMill/defs.scm 63 */
			{	/* SawMill/defs.scm 63 */
				BgL_rtl_cast_nullz00_bglt BgL_new1511z00_7062;

				{	/* SawMill/defs.scm 63 */
					BgL_rtl_cast_nullz00_bglt BgL_new1510z00_7063;

					BgL_new1510z00_7063 =
						((BgL_rtl_cast_nullz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_cast_nullz00_bgl))));
					{	/* SawMill/defs.scm 63 */
						long BgL_arg2631z00_7064;

						{	/* SawMill/defs.scm 63 */
							long BgL_res3100z00_7065;

							BgL_res3100z00_7065 =
								BGL_CLASS_INDEX(BGl_rtl_cast_nullz00zzsaw_defsz00);
							BgL_arg2631z00_7064 = BgL_res3100z00_7065;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1510z00_7063), BgL_arg2631z00_7064);
					}
					BgL_new1511z00_7062 = BgL_new1510z00_7063;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1511z00_7062)))->BgL_locz00) =
					((obj_t) BgL_loc1304z00_6216), BUNSPEC);
				((((BgL_rtl_cast_nullz00_bglt) COBJECT(BgL_new1511z00_7062))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1305z00_6217)),
					BUNSPEC);
				return BgL_new1511z00_7062;
			}
		}

	}



/* &lambda2639 */
	obj_t BGl_z62lambda2639z62zzsaw_defsz00(obj_t BgL_envz00_6218,
		obj_t BgL_oz00_6219, obj_t BgL_vz00_6220)
	{
		{	/* SawMill/defs.scm 63 */
			return
				((((BgL_rtl_cast_nullz00_bglt) COBJECT(
							((BgL_rtl_cast_nullz00_bglt) BgL_oz00_6219)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6220)), BUNSPEC);
		}

	}



/* &lambda2638 */
	BgL_typez00_bglt BGl_z62lambda2638z62zzsaw_defsz00(obj_t BgL_envz00_6221,
		obj_t BgL_oz00_6222)
	{
		{	/* SawMill/defs.scm 63 */
			return
				(((BgL_rtl_cast_nullz00_bglt) COBJECT(
						((BgL_rtl_cast_nullz00_bglt) BgL_oz00_6222)))->BgL_typez00);
		}

	}



/* &<@anonymous:2610> */
	obj_t BGl_z62zc3z04anonymousza32610ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6223,
		obj_t BgL_new1302z00_6224)
	{
		{	/* SawMill/defs.scm 62 */
			{
				BgL_rtl_castz00_bglt BgL_auxz00_10017;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_castz00_bglt) BgL_new1302z00_6224))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10021;

					{	/* SawMill/defs.scm 62 */
						obj_t BgL_classz00_7070;

						BgL_classz00_7070 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 62 */
							obj_t BgL__ortest_1106z00_7071;

							BgL__ortest_1106z00_7071 = BGL_CLASS_NIL(BgL_classz00_7070);
							if (CBOOL(BgL__ortest_1106z00_7071))
								{	/* SawMill/defs.scm 62 */
									BgL_auxz00_10021 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7071);
								}
							else
								{	/* SawMill/defs.scm 62 */
									BgL_auxz00_10021 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7070));
								}
						}
					}
					((((BgL_rtl_castz00_bglt) COBJECT(
									((BgL_rtl_castz00_bglt) BgL_new1302z00_6224)))->
							BgL_totypez00) = ((BgL_typez00_bglt) BgL_auxz00_10021), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10030;

					{	/* SawMill/defs.scm 62 */
						obj_t BgL_classz00_7072;

						BgL_classz00_7072 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 62 */
							obj_t BgL__ortest_1106z00_7073;

							BgL__ortest_1106z00_7073 = BGL_CLASS_NIL(BgL_classz00_7072);
							if (CBOOL(BgL__ortest_1106z00_7073))
								{	/* SawMill/defs.scm 62 */
									BgL_auxz00_10030 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7073);
								}
							else
								{	/* SawMill/defs.scm 62 */
									BgL_auxz00_10030 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7072));
								}
						}
					}
					((((BgL_rtl_castz00_bglt) COBJECT(
									((BgL_rtl_castz00_bglt) BgL_new1302z00_6224)))->
							BgL_fromtypez00) =
						((BgL_typez00_bglt) BgL_auxz00_10030), BUNSPEC);
				}
				BgL_auxz00_10017 = ((BgL_rtl_castz00_bglt) BgL_new1302z00_6224);
				return ((obj_t) BgL_auxz00_10017);
			}
		}

	}



/* &lambda2608 */
	BgL_rtl_castz00_bglt BGl_z62lambda2608z62zzsaw_defsz00(obj_t BgL_envz00_6225)
	{
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_castz00_bglt BgL_new1301z00_7074;

				BgL_new1301z00_7074 =
					((BgL_rtl_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_castz00_bgl))));
				{	/* SawMill/defs.scm 62 */
					long BgL_arg2609z00_7075;

					{	/* SawMill/defs.scm 62 */
						long BgL_res3099z00_7076;

						BgL_res3099z00_7076 = BGL_CLASS_INDEX(BGl_rtl_castz00zzsaw_defsz00);
						BgL_arg2609z00_7075 = BgL_res3099z00_7076;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1301z00_7074), BgL_arg2609z00_7075);
				}
				return BgL_new1301z00_7074;
			}
		}

	}



/* &lambda2606 */
	BgL_rtl_castz00_bglt BGl_z62lambda2606z62zzsaw_defsz00(obj_t BgL_envz00_6226,
		obj_t BgL_loc1298z00_6227, obj_t BgL_totype1299z00_6228,
		obj_t BgL_fromtype1300z00_6229)
	{
		{	/* SawMill/defs.scm 62 */
			{	/* SawMill/defs.scm 62 */
				BgL_rtl_castz00_bglt BgL_new1509z00_7079;

				{	/* SawMill/defs.scm 62 */
					BgL_rtl_castz00_bglt BgL_new1508z00_7080;

					BgL_new1508z00_7080 =
						((BgL_rtl_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_castz00_bgl))));
					{	/* SawMill/defs.scm 62 */
						long BgL_arg2607z00_7081;

						{	/* SawMill/defs.scm 62 */
							long BgL_res3098z00_7082;

							BgL_res3098z00_7082 =
								BGL_CLASS_INDEX(BGl_rtl_castz00zzsaw_defsz00);
							BgL_arg2607z00_7081 = BgL_res3098z00_7082;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1508z00_7080), BgL_arg2607z00_7081);
					}
					BgL_new1509z00_7079 = BgL_new1508z00_7080;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1509z00_7079)))->BgL_locz00) =
					((obj_t) BgL_loc1298z00_6227), BUNSPEC);
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1509z00_7079))->
						BgL_totypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_totype1299z00_6228)),
					BUNSPEC);
				((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1509z00_7079))->
						BgL_fromtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_fromtype1300z00_6229)),
					BUNSPEC);
				return BgL_new1509z00_7079;
			}
		}

	}



/* &lambda2622 */
	obj_t BGl_z62lambda2622z62zzsaw_defsz00(obj_t BgL_envz00_6230,
		obj_t BgL_oz00_6231, obj_t BgL_vz00_6232)
	{
		{	/* SawMill/defs.scm 62 */
			return
				((((BgL_rtl_castz00_bglt) COBJECT(
							((BgL_rtl_castz00_bglt) BgL_oz00_6231)))->BgL_fromtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6232)), BUNSPEC);
		}

	}



/* &lambda2621 */
	BgL_typez00_bglt BGl_z62lambda2621z62zzsaw_defsz00(obj_t BgL_envz00_6233,
		obj_t BgL_oz00_6234)
	{
		{	/* SawMill/defs.scm 62 */
			return
				(((BgL_rtl_castz00_bglt) COBJECT(
						((BgL_rtl_castz00_bglt) BgL_oz00_6234)))->BgL_fromtypez00);
		}

	}



/* &lambda2615 */
	obj_t BGl_z62lambda2615z62zzsaw_defsz00(obj_t BgL_envz00_6235,
		obj_t BgL_oz00_6236, obj_t BgL_vz00_6237)
	{
		{	/* SawMill/defs.scm 62 */
			return
				((((BgL_rtl_castz00_bglt) COBJECT(
							((BgL_rtl_castz00_bglt) BgL_oz00_6236)))->BgL_totypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6237)), BUNSPEC);
		}

	}



/* &lambda2614 */
	BgL_typez00_bglt BGl_z62lambda2614z62zzsaw_defsz00(obj_t BgL_envz00_6238,
		obj_t BgL_oz00_6239)
	{
		{	/* SawMill/defs.scm 62 */
			return
				(((BgL_rtl_castz00_bglt) COBJECT(
						((BgL_rtl_castz00_bglt) BgL_oz00_6239)))->BgL_totypez00);
		}

	}



/* &<@anonymous:2592> */
	obj_t BGl_z62zc3z04anonymousza32592ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6240,
		obj_t BgL_new1296z00_6241)
	{
		{	/* SawMill/defs.scm 61 */
			{
				BgL_rtl_pragmaz00_bglt BgL_auxz00_10065;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_pragmaz00_bglt) BgL_new1296z00_6241))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_pragmaz00_bglt) COBJECT(((BgL_rtl_pragmaz00_bglt)
									BgL_new1296z00_6241)))->BgL_formatz00) =
					((obj_t) BGl_string3409z00zzsaw_defsz00), BUNSPEC);
				BgL_auxz00_10065 = ((BgL_rtl_pragmaz00_bglt) BgL_new1296z00_6241);
				return ((obj_t) BgL_auxz00_10065);
			}
		}

	}



/* &lambda2589 */
	BgL_rtl_pragmaz00_bglt BGl_z62lambda2589z62zzsaw_defsz00(obj_t
		BgL_envz00_6242)
	{
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_pragmaz00_bglt BgL_new1295z00_7090;

				BgL_new1295z00_7090 =
					((BgL_rtl_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_pragmaz00_bgl))));
				{	/* SawMill/defs.scm 61 */
					long BgL_arg2591z00_7091;

					{	/* SawMill/defs.scm 61 */
						long BgL_res3097z00_7092;

						BgL_res3097z00_7092 =
							BGL_CLASS_INDEX(BGl_rtl_pragmaz00zzsaw_defsz00);
						BgL_arg2591z00_7091 = BgL_res3097z00_7092;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1295z00_7090), BgL_arg2591z00_7091);
				}
				return BgL_new1295z00_7090;
			}
		}

	}



/* &lambda2587 */
	BgL_rtl_pragmaz00_bglt BGl_z62lambda2587z62zzsaw_defsz00(obj_t
		BgL_envz00_6243, obj_t BgL_loc1293z00_6244, obj_t BgL_format1294z00_6245)
	{
		{	/* SawMill/defs.scm 61 */
			{	/* SawMill/defs.scm 61 */
				BgL_rtl_pragmaz00_bglt BgL_new1507z00_7094;

				{	/* SawMill/defs.scm 61 */
					BgL_rtl_pragmaz00_bglt BgL_new1506z00_7095;

					BgL_new1506z00_7095 =
						((BgL_rtl_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_pragmaz00_bgl))));
					{	/* SawMill/defs.scm 61 */
						long BgL_arg2588z00_7096;

						{	/* SawMill/defs.scm 61 */
							long BgL_res3096z00_7097;

							BgL_res3096z00_7097 =
								BGL_CLASS_INDEX(BGl_rtl_pragmaz00zzsaw_defsz00);
							BgL_arg2588z00_7096 = BgL_res3096z00_7097;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1506z00_7095), BgL_arg2588z00_7096);
					}
					BgL_new1507z00_7094 = BgL_new1506z00_7095;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1507z00_7094)))->BgL_locz00) =
					((obj_t) BgL_loc1293z00_6244), BUNSPEC);
				((((BgL_rtl_pragmaz00_bglt) COBJECT(BgL_new1507z00_7094))->
						BgL_formatz00) =
					((obj_t) ((obj_t) BgL_format1294z00_6245)), BUNSPEC);
				return BgL_new1507z00_7094;
			}
		}

	}



/* &lambda2598 */
	obj_t BGl_z62lambda2598z62zzsaw_defsz00(obj_t BgL_envz00_6246,
		obj_t BgL_oz00_6247, obj_t BgL_vz00_6248)
	{
		{	/* SawMill/defs.scm 61 */
			return
				((((BgL_rtl_pragmaz00_bglt) COBJECT(
							((BgL_rtl_pragmaz00_bglt) BgL_oz00_6247)))->BgL_formatz00) =
				((obj_t) ((obj_t) BgL_vz00_6248)), BUNSPEC);
		}

	}



/* &lambda2597 */
	obj_t BGl_z62lambda2597z62zzsaw_defsz00(obj_t BgL_envz00_6249,
		obj_t BgL_oz00_6250)
	{
		{	/* SawMill/defs.scm 61 */
			return
				(((BgL_rtl_pragmaz00_bglt) COBJECT(
						((BgL_rtl_pragmaz00_bglt) BgL_oz00_6250)))->BgL_formatz00);
		}

	}



/* &<@anonymous:2580> */
	obj_t BGl_z62zc3z04anonymousza32580ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6251,
		obj_t BgL_new1291z00_6252)
	{
		{	/* SawMill/defs.scm 60 */
			{
				BgL_rtl_funcallz00_bglt BgL_auxz00_10090;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_funcallz00_bglt) BgL_new1291z00_6252))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10090 = ((BgL_rtl_funcallz00_bglt) BgL_new1291z00_6252);
				return ((obj_t) BgL_auxz00_10090);
			}
		}

	}



/* &lambda2578 */
	BgL_rtl_funcallz00_bglt BGl_z62lambda2578z62zzsaw_defsz00(obj_t
		BgL_envz00_6253)
	{
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_funcallz00_bglt BgL_new1290z00_7102;

				BgL_new1290z00_7102 =
					((BgL_rtl_funcallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_funcallz00_bgl))));
				{	/* SawMill/defs.scm 60 */
					long BgL_arg2579z00_7103;

					{	/* SawMill/defs.scm 60 */
						long BgL_res3095z00_7104;

						BgL_res3095z00_7104 =
							BGL_CLASS_INDEX(BGl_rtl_funcallz00zzsaw_defsz00);
						BgL_arg2579z00_7103 = BgL_res3095z00_7104;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1290z00_7102), BgL_arg2579z00_7103);
				}
				return BgL_new1290z00_7102;
			}
		}

	}



/* &lambda2576 */
	BgL_rtl_funcallz00_bglt BGl_z62lambda2576z62zzsaw_defsz00(obj_t
		BgL_envz00_6254, obj_t BgL_loc1289z00_6255)
	{
		{	/* SawMill/defs.scm 60 */
			{	/* SawMill/defs.scm 60 */
				BgL_rtl_funcallz00_bglt BgL_new1505z00_7105;

				{	/* SawMill/defs.scm 60 */
					BgL_rtl_funcallz00_bglt BgL_new1504z00_7106;

					BgL_new1504z00_7106 =
						((BgL_rtl_funcallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_funcallz00_bgl))));
					{	/* SawMill/defs.scm 60 */
						long BgL_arg2577z00_7107;

						{	/* SawMill/defs.scm 60 */
							long BgL_res3094z00_7108;

							BgL_res3094z00_7108 =
								BGL_CLASS_INDEX(BGl_rtl_funcallz00zzsaw_defsz00);
							BgL_arg2577z00_7107 = BgL_res3094z00_7108;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1504z00_7106), BgL_arg2577z00_7107);
					}
					BgL_new1505z00_7105 = BgL_new1504z00_7106;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1505z00_7105)))->BgL_locz00) =
					((obj_t) BgL_loc1289z00_6255), BUNSPEC);
				return BgL_new1505z00_7105;
			}
		}

	}



/* &<@anonymous:2549> */
	obj_t BGl_z62zc3z04anonymousza32549ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6256,
		obj_t BgL_new1287z00_6257)
	{
		{	/* SawMill/defs.scm 59 */
			{
				BgL_rtl_lightfuncallz00_bglt BgL_auxz00_10106;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_lightfuncallz00_bglt) BgL_new1287z00_6257))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt)
							COBJECT(((BgL_rtl_lightfuncallz00_bglt) BgL_new1287z00_6257)))->
						BgL_namez00) = ((obj_t) CNST_TABLE_REF(((long) 80))), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt)
							COBJECT(((BgL_rtl_lightfuncallz00_bglt) BgL_new1287z00_6257)))->
						BgL_funsz00) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt)
							COBJECT(((BgL_rtl_lightfuncallz00_bglt) BgL_new1287z00_6257)))->
						BgL_rettypez00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10106 = ((BgL_rtl_lightfuncallz00_bglt) BgL_new1287z00_6257);
				return ((obj_t) BgL_auxz00_10106);
			}
		}

	}



/* &lambda2545 */
	BgL_rtl_lightfuncallz00_bglt BGl_z62lambda2545z62zzsaw_defsz00(obj_t
		BgL_envz00_6258)
	{
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_lightfuncallz00_bglt BgL_new1286z00_7110;

				BgL_new1286z00_7110 =
					((BgL_rtl_lightfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_lightfuncallz00_bgl))));
				{	/* SawMill/defs.scm 59 */
					long BgL_arg2548z00_7111;

					{	/* SawMill/defs.scm 59 */
						long BgL_res3093z00_7112;

						BgL_res3093z00_7112 =
							BGL_CLASS_INDEX(BGl_rtl_lightfuncallz00zzsaw_defsz00);
						BgL_arg2548z00_7111 = BgL_res3093z00_7112;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1286z00_7110), BgL_arg2548z00_7111);
				}
				return BgL_new1286z00_7110;
			}
		}

	}



/* &lambda2542 */
	BgL_rtl_lightfuncallz00_bglt BGl_z62lambda2542z62zzsaw_defsz00(obj_t
		BgL_envz00_6259, obj_t BgL_loc1282z00_6260, obj_t BgL_name1283z00_6261,
		obj_t BgL_funs1284z00_6262, obj_t BgL_rettype1285z00_6263)
	{
		{	/* SawMill/defs.scm 59 */
			{	/* SawMill/defs.scm 59 */
				BgL_rtl_lightfuncallz00_bglt BgL_new1503z00_7115;

				{	/* SawMill/defs.scm 59 */
					BgL_rtl_lightfuncallz00_bglt BgL_new1502z00_7116;

					BgL_new1502z00_7116 =
						((BgL_rtl_lightfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_lightfuncallz00_bgl))));
					{	/* SawMill/defs.scm 59 */
						long BgL_arg2544z00_7117;

						{	/* SawMill/defs.scm 59 */
							long BgL_res3092z00_7118;

							BgL_res3092z00_7118 =
								BGL_CLASS_INDEX(BGl_rtl_lightfuncallz00zzsaw_defsz00);
							BgL_arg2544z00_7117 = BgL_res3092z00_7118;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1502z00_7116), BgL_arg2544z00_7117);
					}
					BgL_new1503z00_7115 = BgL_new1502z00_7116;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1503z00_7115)))->BgL_locz00) =
					((obj_t) BgL_loc1282z00_6260), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1503z00_7115))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1283z00_6261)), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1503z00_7115))->
						BgL_funsz00) = ((obj_t) ((obj_t) BgL_funs1284z00_6262)), BUNSPEC);
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(BgL_new1503z00_7115))->
						BgL_rettypez00) = ((obj_t) BgL_rettype1285z00_6263), BUNSPEC);
				return BgL_new1503z00_7115;
			}
		}

	}



/* &lambda2569 */
	obj_t BGl_z62lambda2569z62zzsaw_defsz00(obj_t BgL_envz00_6264,
		obj_t BgL_oz00_6265, obj_t BgL_vz00_6266)
	{
		{	/* SawMill/defs.scm 59 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(
							((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6265)))->
					BgL_rettypez00) = ((obj_t) BgL_vz00_6266), BUNSPEC);
		}

	}



/* &lambda2568 */
	obj_t BGl_z62lambda2568z62zzsaw_defsz00(obj_t BgL_envz00_6267,
		obj_t BgL_oz00_6268)
	{
		{	/* SawMill/defs.scm 59 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
						((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6268)))->BgL_rettypez00);
		}

	}



/* &lambda2564 */
	obj_t BGl_z62lambda2564z62zzsaw_defsz00(obj_t BgL_envz00_6269,
		obj_t BgL_oz00_6270, obj_t BgL_vz00_6271)
	{
		{	/* SawMill/defs.scm 59 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(
							((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6270)))->BgL_funsz00) =
				((obj_t) ((obj_t) BgL_vz00_6271)), BUNSPEC);
		}

	}



/* &lambda2563 */
	obj_t BGl_z62lambda2563z62zzsaw_defsz00(obj_t BgL_envz00_6272,
		obj_t BgL_oz00_6273)
	{
		{	/* SawMill/defs.scm 59 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
						((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6273)))->BgL_funsz00);
		}

	}



/* &lambda2556 */
	obj_t BGl_z62lambda2556z62zzsaw_defsz00(obj_t BgL_envz00_6274,
		obj_t BgL_oz00_6275, obj_t BgL_vz00_6276)
	{
		{	/* SawMill/defs.scm 59 */
			return
				((((BgL_rtl_lightfuncallz00_bglt) COBJECT(
							((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6275)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_6276)), BUNSPEC);
		}

	}



/* &lambda2555 */
	obj_t BGl_z62lambda2555z62zzsaw_defsz00(obj_t BgL_envz00_6277,
		obj_t BgL_oz00_6278)
	{
		{	/* SawMill/defs.scm 59 */
			return
				(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
						((BgL_rtl_lightfuncallz00_bglt) BgL_oz00_6278)))->BgL_namez00);
		}

	}



/* &<@anonymous:2533> */
	obj_t BGl_z62zc3z04anonymousza32533ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6279,
		obj_t BgL_new1280z00_6280)
	{
		{	/* SawMill/defs.scm 58 */
			{
				BgL_rtl_applyz00_bglt BgL_auxz00_10148;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_applyz00_bglt) BgL_new1280z00_6280))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10148 = ((BgL_rtl_applyz00_bglt) BgL_new1280z00_6280);
				return ((obj_t) BgL_auxz00_10148);
			}
		}

	}



/* &lambda2530 */
	BgL_rtl_applyz00_bglt BGl_z62lambda2530z62zzsaw_defsz00(obj_t BgL_envz00_6281)
	{
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_applyz00_bglt BgL_new1279z00_7128;

				BgL_new1279z00_7128 =
					((BgL_rtl_applyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_applyz00_bgl))));
				{	/* SawMill/defs.scm 58 */
					long BgL_arg2532z00_7129;

					{	/* SawMill/defs.scm 58 */
						long BgL_res3091z00_7130;

						BgL_res3091z00_7130 =
							BGL_CLASS_INDEX(BGl_rtl_applyz00zzsaw_defsz00);
						BgL_arg2532z00_7129 = BgL_res3091z00_7130;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1279z00_7128), BgL_arg2532z00_7129);
				}
				return BgL_new1279z00_7128;
			}
		}

	}



/* &lambda2527 */
	BgL_rtl_applyz00_bglt BGl_z62lambda2527z62zzsaw_defsz00(obj_t BgL_envz00_6282,
		obj_t BgL_loc1278z00_6283)
	{
		{	/* SawMill/defs.scm 58 */
			{	/* SawMill/defs.scm 58 */
				BgL_rtl_applyz00_bglt BgL_new1501z00_7131;

				{	/* SawMill/defs.scm 58 */
					BgL_rtl_applyz00_bglt BgL_new1500z00_7132;

					BgL_new1500z00_7132 =
						((BgL_rtl_applyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_applyz00_bgl))));
					{	/* SawMill/defs.scm 58 */
						long BgL_arg2529z00_7133;

						{	/* SawMill/defs.scm 58 */
							long BgL_res3090z00_7134;

							BgL_res3090z00_7134 =
								BGL_CLASS_INDEX(BGl_rtl_applyz00zzsaw_defsz00);
							BgL_arg2529z00_7133 = BgL_res3090z00_7134;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1500z00_7132), BgL_arg2529z00_7133);
					}
					BgL_new1501z00_7131 = BgL_new1500z00_7132;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1501z00_7131)))->BgL_locz00) =
					((obj_t) BgL_loc1278z00_6283), BUNSPEC);
				return BgL_new1501z00_7131;
			}
		}

	}



/* &<@anonymous:2509> */
	obj_t BGl_z62zc3z04anonymousza32509ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6284,
		obj_t BgL_new1276z00_6285)
	{
		{	/* SawMill/defs.scm 57 */
			{
				BgL_rtl_callz00_bglt BgL_auxz00_10164;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_callz00_bglt) BgL_new1276z00_6285))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalz00_bglt BgL_auxz00_10168;

					{	/* SawMill/defs.scm 57 */
						obj_t BgL_classz00_7136;

						BgL_classz00_7136 = BGl_globalz00zzast_varz00;
						{	/* SawMill/defs.scm 57 */
							obj_t BgL__ortest_1106z00_7137;

							BgL__ortest_1106z00_7137 = BGL_CLASS_NIL(BgL_classz00_7136);
							if (CBOOL(BgL__ortest_1106z00_7137))
								{	/* SawMill/defs.scm 57 */
									BgL_auxz00_10168 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_7137);
								}
							else
								{	/* SawMill/defs.scm 57 */
									BgL_auxz00_10168 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7136));
								}
						}
					}
					((((BgL_rtl_callz00_bglt) COBJECT(
									((BgL_rtl_callz00_bglt) BgL_new1276z00_6285)))->BgL_varz00) =
						((BgL_globalz00_bglt) BgL_auxz00_10168), BUNSPEC);
				}
				BgL_auxz00_10164 = ((BgL_rtl_callz00_bglt) BgL_new1276z00_6285);
				return ((obj_t) BgL_auxz00_10164);
			}
		}

	}



/* &lambda2507 */
	BgL_rtl_callz00_bglt BGl_z62lambda2507z62zzsaw_defsz00(obj_t BgL_envz00_6286)
	{
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_callz00_bglt BgL_new1275z00_7138;

				BgL_new1275z00_7138 =
					((BgL_rtl_callz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_callz00_bgl))));
				{	/* SawMill/defs.scm 57 */
					long BgL_arg2508z00_7139;

					{	/* SawMill/defs.scm 57 */
						long BgL_res3089z00_7140;

						BgL_res3089z00_7140 = BGL_CLASS_INDEX(BGl_rtl_callz00zzsaw_defsz00);
						BgL_arg2508z00_7139 = BgL_res3089z00_7140;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1275z00_7138), BgL_arg2508z00_7139);
				}
				return BgL_new1275z00_7138;
			}
		}

	}



/* &lambda2504 */
	BgL_rtl_callz00_bglt BGl_z62lambda2504z62zzsaw_defsz00(obj_t BgL_envz00_6287,
		obj_t BgL_loc1273z00_6288, obj_t BgL_var1274z00_6289)
	{
		{	/* SawMill/defs.scm 57 */
			{	/* SawMill/defs.scm 57 */
				BgL_rtl_callz00_bglt BgL_new1499z00_7142;

				{	/* SawMill/defs.scm 57 */
					BgL_rtl_callz00_bglt BgL_new1498z00_7143;

					BgL_new1498z00_7143 =
						((BgL_rtl_callz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_callz00_bgl))));
					{	/* SawMill/defs.scm 57 */
						long BgL_arg2506z00_7144;

						{	/* SawMill/defs.scm 57 */
							long BgL_res3088z00_7145;

							BgL_res3088z00_7145 =
								BGL_CLASS_INDEX(BGl_rtl_callz00zzsaw_defsz00);
							BgL_arg2506z00_7144 = BgL_res3088z00_7145;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1498z00_7143), BgL_arg2506z00_7144);
					}
					BgL_new1499z00_7142 = BgL_new1498z00_7143;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1499z00_7142)))->BgL_locz00) =
					((obj_t) BgL_loc1273z00_6288), BUNSPEC);
				((((BgL_rtl_callz00_bglt) COBJECT(BgL_new1499z00_7142))->BgL_varz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_var1274z00_6289)),
					BUNSPEC);
				return BgL_new1499z00_7142;
			}
		}

	}



/* &lambda2520 */
	obj_t BGl_z62lambda2520z62zzsaw_defsz00(obj_t BgL_envz00_6290,
		obj_t BgL_oz00_6291, obj_t BgL_vz00_6292)
	{
		{	/* SawMill/defs.scm 57 */
			return
				((((BgL_rtl_callz00_bglt) COBJECT(
							((BgL_rtl_callz00_bglt) BgL_oz00_6291)))->BgL_varz00) =
				((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_6292)), BUNSPEC);
		}

	}



/* &lambda2519 */
	BgL_globalz00_bglt BGl_z62lambda2519z62zzsaw_defsz00(obj_t BgL_envz00_6293,
		obj_t BgL_oz00_6294)
	{
		{	/* SawMill/defs.scm 57 */
			return
				(((BgL_rtl_callz00_bglt) COBJECT(
						((BgL_rtl_callz00_bglt) BgL_oz00_6294)))->BgL_varz00);
		}

	}



/* &<@anonymous:2482> */
	obj_t BGl_z62zc3z04anonymousza32482ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6295,
		obj_t BgL_new1271z00_6296)
	{
		{	/* SawMill/defs.scm 56 */
			{
				BgL_rtl_newz00_bglt BgL_auxz00_10196;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_newz00_bglt) BgL_new1271z00_6296))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10200;

					{	/* SawMill/defs.scm 56 */
						obj_t BgL_classz00_7150;

						BgL_classz00_7150 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 56 */
							obj_t BgL__ortest_1106z00_7151;

							BgL__ortest_1106z00_7151 = BGL_CLASS_NIL(BgL_classz00_7150);
							if (CBOOL(BgL__ortest_1106z00_7151))
								{	/* SawMill/defs.scm 56 */
									BgL_auxz00_10200 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7151);
								}
							else
								{	/* SawMill/defs.scm 56 */
									BgL_auxz00_10200 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7150));
								}
						}
					}
					((((BgL_rtl_newz00_bglt) COBJECT(
									((BgL_rtl_newz00_bglt) BgL_new1271z00_6296)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_10200), BUNSPEC);
				}
				((((BgL_rtl_newz00_bglt) COBJECT(
								((BgL_rtl_newz00_bglt) BgL_new1271z00_6296)))->BgL_constrz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_10196 = ((BgL_rtl_newz00_bglt) BgL_new1271z00_6296);
				return ((obj_t) BgL_auxz00_10196);
			}
		}

	}



/* &lambda2480 */
	BgL_rtl_newz00_bglt BGl_z62lambda2480z62zzsaw_defsz00(obj_t BgL_envz00_6297)
	{
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_newz00_bglt BgL_new1270z00_7152;

				BgL_new1270z00_7152 =
					((BgL_rtl_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_newz00_bgl))));
				{	/* SawMill/defs.scm 56 */
					long BgL_arg2481z00_7153;

					{	/* SawMill/defs.scm 56 */
						long BgL_res3087z00_7154;

						BgL_res3087z00_7154 = BGL_CLASS_INDEX(BGl_rtl_newz00zzsaw_defsz00);
						BgL_arg2481z00_7153 = BgL_res3087z00_7154;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1270z00_7152), BgL_arg2481z00_7153);
				}
				return BgL_new1270z00_7152;
			}
		}

	}



/* &lambda2477 */
	BgL_rtl_newz00_bglt BGl_z62lambda2477z62zzsaw_defsz00(obj_t BgL_envz00_6298,
		obj_t BgL_loc1267z00_6299, obj_t BgL_type1268z00_6300,
		obj_t BgL_constr1269z00_6301)
	{
		{	/* SawMill/defs.scm 56 */
			{	/* SawMill/defs.scm 56 */
				BgL_rtl_newz00_bglt BgL_new1497z00_7157;

				{	/* SawMill/defs.scm 56 */
					BgL_rtl_newz00_bglt BgL_new1496z00_7158;

					BgL_new1496z00_7158 =
						((BgL_rtl_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_newz00_bgl))));
					{	/* SawMill/defs.scm 56 */
						long BgL_arg2479z00_7159;

						{	/* SawMill/defs.scm 56 */
							long BgL_res3086z00_7160;

							BgL_res3086z00_7160 =
								BGL_CLASS_INDEX(BGl_rtl_newz00zzsaw_defsz00);
							BgL_arg2479z00_7159 = BgL_res3086z00_7160;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1496z00_7158), BgL_arg2479z00_7159);
					}
					BgL_new1497z00_7157 = BgL_new1496z00_7158;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1497z00_7157)))->BgL_locz00) =
					((obj_t) BgL_loc1267z00_6299), BUNSPEC);
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1497z00_7157))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1268z00_6300)),
					BUNSPEC);
				((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1497z00_7157))->BgL_constrz00) =
					((obj_t) ((obj_t) BgL_constr1269z00_6301)), BUNSPEC);
				return BgL_new1497z00_7157;
			}
		}

	}



/* &lambda2498 */
	obj_t BGl_z62lambda2498z62zzsaw_defsz00(obj_t BgL_envz00_6302,
		obj_t BgL_oz00_6303, obj_t BgL_vz00_6304)
	{
		{	/* SawMill/defs.scm 56 */
			return
				((((BgL_rtl_newz00_bglt) COBJECT(
							((BgL_rtl_newz00_bglt) BgL_oz00_6303)))->BgL_constrz00) = ((obj_t)
					((obj_t) BgL_vz00_6304)), BUNSPEC);
		}

	}



/* &lambda2497 */
	obj_t BGl_z62lambda2497z62zzsaw_defsz00(obj_t BgL_envz00_6305,
		obj_t BgL_oz00_6306)
	{
		{	/* SawMill/defs.scm 56 */
			return
				(((BgL_rtl_newz00_bglt) COBJECT(
						((BgL_rtl_newz00_bglt) BgL_oz00_6306)))->BgL_constrz00);
		}

	}



/* &lambda2488 */
	obj_t BGl_z62lambda2488z62zzsaw_defsz00(obj_t BgL_envz00_6307,
		obj_t BgL_oz00_6308, obj_t BgL_vz00_6309)
	{
		{	/* SawMill/defs.scm 56 */
			return
				((((BgL_rtl_newz00_bglt) COBJECT(
							((BgL_rtl_newz00_bglt) BgL_oz00_6308)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6309)), BUNSPEC);
		}

	}



/* &lambda2487 */
	BgL_typez00_bglt BGl_z62lambda2487z62zzsaw_defsz00(obj_t BgL_envz00_6310,
		obj_t BgL_oz00_6311)
	{
		{	/* SawMill/defs.scm 56 */
			return
				(((BgL_rtl_newz00_bglt) COBJECT(
						((BgL_rtl_newz00_bglt) BgL_oz00_6311)))->BgL_typez00);
		}

	}



/* &<@anonymous:2470> */
	obj_t BGl_z62zc3z04anonymousza32470ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6312,
		obj_t BgL_new1265z00_6313)
	{
		{	/* SawMill/defs.scm 54 */
			{
				BgL_rtl_boxsetz00_bglt BgL_auxz00_10237;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_boxsetz00_bglt) BgL_new1265z00_6313))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10237 = ((BgL_rtl_boxsetz00_bglt) BgL_new1265z00_6313);
				return ((obj_t) BgL_auxz00_10237);
			}
		}

	}



/* &lambda2467 */
	BgL_rtl_boxsetz00_bglt BGl_z62lambda2467z62zzsaw_defsz00(obj_t
		BgL_envz00_6314)
	{
		{	/* SawMill/defs.scm 54 */
			{	/* SawMill/defs.scm 54 */
				BgL_rtl_boxsetz00_bglt BgL_new1264z00_7168;

				BgL_new1264z00_7168 =
					((BgL_rtl_boxsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_boxsetz00_bgl))));
				{	/* SawMill/defs.scm 54 */
					long BgL_arg2469z00_7169;

					{	/* SawMill/defs.scm 54 */
						long BgL_res3085z00_7170;

						BgL_res3085z00_7170 =
							BGL_CLASS_INDEX(BGl_rtl_boxsetz00zzsaw_defsz00);
						BgL_arg2469z00_7169 = BgL_res3085z00_7170;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1264z00_7168), BgL_arg2469z00_7169);
				}
				return BgL_new1264z00_7168;
			}
		}

	}



/* &lambda2465 */
	BgL_rtl_boxsetz00_bglt BGl_z62lambda2465z62zzsaw_defsz00(obj_t
		BgL_envz00_6315, obj_t BgL_loc1263z00_6316)
	{
		{	/* SawMill/defs.scm 54 */
			{	/* SawMill/defs.scm 54 */
				BgL_rtl_boxsetz00_bglt BgL_new1495z00_7171;

				{	/* SawMill/defs.scm 54 */
					BgL_rtl_boxsetz00_bglt BgL_new1494z00_7172;

					BgL_new1494z00_7172 =
						((BgL_rtl_boxsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_boxsetz00_bgl))));
					{	/* SawMill/defs.scm 54 */
						long BgL_arg2466z00_7173;

						{	/* SawMill/defs.scm 54 */
							long BgL_res3084z00_7174;

							BgL_res3084z00_7174 =
								BGL_CLASS_INDEX(BGl_rtl_boxsetz00zzsaw_defsz00);
							BgL_arg2466z00_7173 = BgL_res3084z00_7174;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1494z00_7172), BgL_arg2466z00_7173);
					}
					BgL_new1495z00_7171 = BgL_new1494z00_7172;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1495z00_7171)))->BgL_locz00) =
					((obj_t) BgL_loc1263z00_6316), BUNSPEC);
				return BgL_new1495z00_7171;
			}
		}

	}



/* &<@anonymous:2449> */
	obj_t BGl_z62zc3z04anonymousza32449ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6317,
		obj_t BgL_new1261z00_6318)
	{
		{	/* SawMill/defs.scm 53 */
			{
				BgL_rtl_vsetz00_bglt BgL_auxz00_10253;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_vsetz00_bglt) BgL_new1261z00_6318))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10257;

					{	/* SawMill/defs.scm 53 */
						obj_t BgL_classz00_7176;

						BgL_classz00_7176 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 53 */
							obj_t BgL__ortest_1106z00_7177;

							BgL__ortest_1106z00_7177 = BGL_CLASS_NIL(BgL_classz00_7176);
							if (CBOOL(BgL__ortest_1106z00_7177))
								{	/* SawMill/defs.scm 53 */
									BgL_auxz00_10257 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7177);
								}
							else
								{	/* SawMill/defs.scm 53 */
									BgL_auxz00_10257 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7176));
								}
						}
					}
					((((BgL_rtl_vsetz00_bglt) COBJECT(
									((BgL_rtl_vsetz00_bglt) BgL_new1261z00_6318)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_10257), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10266;

					{	/* SawMill/defs.scm 53 */
						obj_t BgL_classz00_7178;

						BgL_classz00_7178 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 53 */
							obj_t BgL__ortest_1106z00_7179;

							BgL__ortest_1106z00_7179 = BGL_CLASS_NIL(BgL_classz00_7178);
							if (CBOOL(BgL__ortest_1106z00_7179))
								{	/* SawMill/defs.scm 53 */
									BgL_auxz00_10266 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7179);
								}
							else
								{	/* SawMill/defs.scm 53 */
									BgL_auxz00_10266 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7178));
								}
						}
					}
					((((BgL_rtl_vsetz00_bglt) COBJECT(
									((BgL_rtl_vsetz00_bglt) BgL_new1261z00_6318)))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10266), BUNSPEC);
				}
				BgL_auxz00_10253 = ((BgL_rtl_vsetz00_bglt) BgL_new1261z00_6318);
				return ((obj_t) BgL_auxz00_10253);
			}
		}

	}



/* &lambda2447 */
	BgL_rtl_vsetz00_bglt BGl_z62lambda2447z62zzsaw_defsz00(obj_t BgL_envz00_6319)
	{
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_vsetz00_bglt BgL_new1260z00_7180;

				BgL_new1260z00_7180 =
					((BgL_rtl_vsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_vsetz00_bgl))));
				{	/* SawMill/defs.scm 53 */
					long BgL_arg2448z00_7181;

					{	/* SawMill/defs.scm 53 */
						long BgL_res3083z00_7182;

						BgL_res3083z00_7182 = BGL_CLASS_INDEX(BGl_rtl_vsetz00zzsaw_defsz00);
						BgL_arg2448z00_7181 = BgL_res3083z00_7182;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1260z00_7180), BgL_arg2448z00_7181);
				}
				return BgL_new1260z00_7180;
			}
		}

	}



/* &lambda2444 */
	BgL_rtl_vsetz00_bglt BGl_z62lambda2444z62zzsaw_defsz00(obj_t BgL_envz00_6320,
		obj_t BgL_loc1257z00_6321, obj_t BgL_type1258z00_6322,
		obj_t BgL_vtype1259z00_6323)
	{
		{	/* SawMill/defs.scm 53 */
			{	/* SawMill/defs.scm 53 */
				BgL_rtl_vsetz00_bglt BgL_new1493z00_7185;

				{	/* SawMill/defs.scm 53 */
					BgL_rtl_vsetz00_bglt BgL_new1492z00_7186;

					BgL_new1492z00_7186 =
						((BgL_rtl_vsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vsetz00_bgl))));
					{	/* SawMill/defs.scm 53 */
						long BgL_arg2446z00_7187;

						{	/* SawMill/defs.scm 53 */
							long BgL_res3082z00_7188;

							BgL_res3082z00_7188 =
								BGL_CLASS_INDEX(BGl_rtl_vsetz00zzsaw_defsz00);
							BgL_arg2446z00_7187 = BgL_res3082z00_7188;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1492z00_7186), BgL_arg2446z00_7187);
					}
					BgL_new1493z00_7185 = BgL_new1492z00_7186;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1493z00_7185)))->BgL_locz00) =
					((obj_t) BgL_loc1257z00_6321), BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1493z00_7185))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1258z00_6322)),
					BUNSPEC);
				((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1493z00_7185))->BgL_vtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1259z00_6323)),
					BUNSPEC);
				return BgL_new1493z00_7185;
			}
		}

	}



/* &lambda2459 */
	obj_t BGl_z62lambda2459z62zzsaw_defsz00(obj_t BgL_envz00_6324,
		obj_t BgL_oz00_6325, obj_t BgL_vz00_6326)
	{
		{	/* SawMill/defs.scm 53 */
			return
				((((BgL_rtl_vsetz00_bglt) COBJECT(
							((BgL_rtl_vsetz00_bglt) BgL_oz00_6325)))->BgL_vtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6326)), BUNSPEC);
		}

	}



/* &lambda2458 */
	BgL_typez00_bglt BGl_z62lambda2458z62zzsaw_defsz00(obj_t BgL_envz00_6327,
		obj_t BgL_oz00_6328)
	{
		{	/* SawMill/defs.scm 53 */
			return
				(((BgL_rtl_vsetz00_bglt) COBJECT(
						((BgL_rtl_vsetz00_bglt) BgL_oz00_6328)))->BgL_vtypez00);
		}

	}



/* &lambda2454 */
	obj_t BGl_z62lambda2454z62zzsaw_defsz00(obj_t BgL_envz00_6329,
		obj_t BgL_oz00_6330, obj_t BgL_vz00_6331)
	{
		{	/* SawMill/defs.scm 53 */
			return
				((((BgL_rtl_vsetz00_bglt) COBJECT(
							((BgL_rtl_vsetz00_bglt) BgL_oz00_6330)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6331)), BUNSPEC);
		}

	}



/* &lambda2453 */
	BgL_typez00_bglt BGl_z62lambda2453z62zzsaw_defsz00(obj_t BgL_envz00_6332,
		obj_t BgL_oz00_6333)
	{
		{	/* SawMill/defs.scm 53 */
			return
				(((BgL_rtl_vsetz00_bglt) COBJECT(
						((BgL_rtl_vsetz00_bglt) BgL_oz00_6333)))->BgL_typez00);
		}

	}



/* &<@anonymous:2419> */
	obj_t BGl_z62zc3z04anonymousza32419ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6334,
		obj_t BgL_new1255z00_6335)
	{
		{	/* SawMill/defs.scm 52 */
			{
				BgL_rtl_setfieldz00_bglt BgL_auxz00_10301;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_setfieldz00_bglt) BgL_new1255z00_6335))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(((BgL_rtl_setfieldz00_bglt)
									BgL_new1255z00_6335)))->BgL_namez00) =
					((obj_t) BGl_string3409z00zzsaw_defsz00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10307;

					{	/* SawMill/defs.scm 52 */
						obj_t BgL_classz00_7196;

						BgL_classz00_7196 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 52 */
							obj_t BgL__ortest_1106z00_7197;

							BgL__ortest_1106z00_7197 = BGL_CLASS_NIL(BgL_classz00_7196);
							if (CBOOL(BgL__ortest_1106z00_7197))
								{	/* SawMill/defs.scm 52 */
									BgL_auxz00_10307 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7197);
								}
							else
								{	/* SawMill/defs.scm 52 */
									BgL_auxz00_10307 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7196));
								}
						}
					}
					((((BgL_rtl_setfieldz00_bglt) COBJECT(
									((BgL_rtl_setfieldz00_bglt) BgL_new1255z00_6335)))->
							BgL_objtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10307), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10316;

					{	/* SawMill/defs.scm 52 */
						obj_t BgL_classz00_7198;

						BgL_classz00_7198 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 52 */
							obj_t BgL__ortest_1106z00_7199;

							BgL__ortest_1106z00_7199 = BGL_CLASS_NIL(BgL_classz00_7198);
							if (CBOOL(BgL__ortest_1106z00_7199))
								{	/* SawMill/defs.scm 52 */
									BgL_auxz00_10316 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7199);
								}
							else
								{	/* SawMill/defs.scm 52 */
									BgL_auxz00_10316 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7198));
								}
						}
					}
					((((BgL_rtl_setfieldz00_bglt) COBJECT(
									((BgL_rtl_setfieldz00_bglt) BgL_new1255z00_6335)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10316), BUNSPEC);
				}
				BgL_auxz00_10301 = ((BgL_rtl_setfieldz00_bglt) BgL_new1255z00_6335);
				return ((obj_t) BgL_auxz00_10301);
			}
		}

	}



/* &lambda2416 */
	BgL_rtl_setfieldz00_bglt BGl_z62lambda2416z62zzsaw_defsz00(obj_t
		BgL_envz00_6336)
	{
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_setfieldz00_bglt BgL_new1254z00_7200;

				BgL_new1254z00_7200 =
					((BgL_rtl_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_setfieldz00_bgl))));
				{	/* SawMill/defs.scm 52 */
					long BgL_arg2418z00_7201;

					{	/* SawMill/defs.scm 52 */
						long BgL_res3081z00_7202;

						BgL_res3081z00_7202 =
							BGL_CLASS_INDEX(BGl_rtl_setfieldz00zzsaw_defsz00);
						BgL_arg2418z00_7201 = BgL_res3081z00_7202;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1254z00_7200), BgL_arg2418z00_7201);
				}
				return BgL_new1254z00_7200;
			}
		}

	}



/* &lambda2414 */
	BgL_rtl_setfieldz00_bglt BGl_z62lambda2414z62zzsaw_defsz00(obj_t
		BgL_envz00_6337, obj_t BgL_loc1250z00_6338, obj_t BgL_name1251z00_6339,
		obj_t BgL_objtype1252z00_6340, obj_t BgL_type1253z00_6341)
	{
		{	/* SawMill/defs.scm 52 */
			{	/* SawMill/defs.scm 52 */
				BgL_rtl_setfieldz00_bglt BgL_new1491z00_7206;

				{	/* SawMill/defs.scm 52 */
					BgL_rtl_setfieldz00_bglt BgL_new1490z00_7207;

					BgL_new1490z00_7207 =
						((BgL_rtl_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_setfieldz00_bgl))));
					{	/* SawMill/defs.scm 52 */
						long BgL_arg2415z00_7208;

						{	/* SawMill/defs.scm 52 */
							long BgL_res3080z00_7209;

							BgL_res3080z00_7209 =
								BGL_CLASS_INDEX(BGl_rtl_setfieldz00zzsaw_defsz00);
							BgL_arg2415z00_7208 = BgL_res3080z00_7209;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1490z00_7207), BgL_arg2415z00_7208);
					}
					BgL_new1491z00_7206 = BgL_new1490z00_7207;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1491z00_7206)))->BgL_locz00) =
					((obj_t) BgL_loc1250z00_6338), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1491z00_7206))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1251z00_6339)), BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1491z00_7206))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_objtype1252z00_6340)),
					BUNSPEC);
				((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1491z00_7206))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1253z00_6341)),
					BUNSPEC);
				return BgL_new1491z00_7206;
			}
		}

	}



/* &lambda2435 */
	obj_t BGl_z62lambda2435z62zzsaw_defsz00(obj_t BgL_envz00_6342,
		obj_t BgL_oz00_6343, obj_t BgL_vz00_6344)
	{
		{	/* SawMill/defs.scm 52 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_oz00_6343)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6344)), BUNSPEC);
		}

	}



/* &lambda2434 */
	BgL_typez00_bglt BGl_z62lambda2434z62zzsaw_defsz00(obj_t BgL_envz00_6345,
		obj_t BgL_oz00_6346)
	{
		{	/* SawMill/defs.scm 52 */
			return
				(((BgL_rtl_setfieldz00_bglt) COBJECT(
						((BgL_rtl_setfieldz00_bglt) BgL_oz00_6346)))->BgL_typez00);
		}

	}



/* &lambda2429 */
	obj_t BGl_z62lambda2429z62zzsaw_defsz00(obj_t BgL_envz00_6347,
		obj_t BgL_oz00_6348, obj_t BgL_vz00_6349)
	{
		{	/* SawMill/defs.scm 52 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_oz00_6348)))->BgL_objtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6349)), BUNSPEC);
		}

	}



/* &lambda2428 */
	BgL_typez00_bglt BGl_z62lambda2428z62zzsaw_defsz00(obj_t BgL_envz00_6350,
		obj_t BgL_oz00_6351)
	{
		{	/* SawMill/defs.scm 52 */
			return
				(((BgL_rtl_setfieldz00_bglt) COBJECT(
						((BgL_rtl_setfieldz00_bglt) BgL_oz00_6351)))->BgL_objtypez00);
		}

	}



/* &lambda2424 */
	obj_t BGl_z62lambda2424z62zzsaw_defsz00(obj_t BgL_envz00_6352,
		obj_t BgL_oz00_6353, obj_t BgL_vz00_6354)
	{
		{	/* SawMill/defs.scm 52 */
			return
				((((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_oz00_6353)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_6354)), BUNSPEC);
		}

	}



/* &lambda2423 */
	obj_t BGl_z62lambda2423z62zzsaw_defsz00(obj_t BgL_envz00_6355,
		obj_t BgL_oz00_6356)
	{
		{	/* SawMill/defs.scm 52 */
			return
				(((BgL_rtl_setfieldz00_bglt) COBJECT(
						((BgL_rtl_setfieldz00_bglt) BgL_oz00_6356)))->BgL_namez00);
		}

	}



/* &<@anonymous:2398> */
	obj_t BGl_z62zc3z04anonymousza32398ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6357,
		obj_t BgL_new1248z00_6358)
	{
		{	/* SawMill/defs.scm 51 */
			{
				BgL_rtl_storegz00_bglt BgL_auxz00_10358;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_storegz00_bglt) BgL_new1248z00_6358))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalz00_bglt BgL_auxz00_10362;

					{	/* SawMill/defs.scm 51 */
						obj_t BgL_classz00_7220;

						BgL_classz00_7220 = BGl_globalz00zzast_varz00;
						{	/* SawMill/defs.scm 51 */
							obj_t BgL__ortest_1106z00_7221;

							BgL__ortest_1106z00_7221 = BGL_CLASS_NIL(BgL_classz00_7220);
							if (CBOOL(BgL__ortest_1106z00_7221))
								{	/* SawMill/defs.scm 51 */
									BgL_auxz00_10362 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_7221);
								}
							else
								{	/* SawMill/defs.scm 51 */
									BgL_auxz00_10362 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7220));
								}
						}
					}
					((((BgL_rtl_storegz00_bglt) COBJECT(
									((BgL_rtl_storegz00_bglt) BgL_new1248z00_6358)))->
							BgL_varz00) = ((BgL_globalz00_bglt) BgL_auxz00_10362), BUNSPEC);
				}
				BgL_auxz00_10358 = ((BgL_rtl_storegz00_bglt) BgL_new1248z00_6358);
				return ((obj_t) BgL_auxz00_10358);
			}
		}

	}



/* &lambda2396 */
	BgL_rtl_storegz00_bglt BGl_z62lambda2396z62zzsaw_defsz00(obj_t
		BgL_envz00_6359)
	{
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_storegz00_bglt BgL_new1247z00_7222;

				BgL_new1247z00_7222 =
					((BgL_rtl_storegz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_storegz00_bgl))));
				{	/* SawMill/defs.scm 51 */
					long BgL_arg2397z00_7223;

					{	/* SawMill/defs.scm 51 */
						long BgL_res3079z00_7224;

						BgL_res3079z00_7224 =
							BGL_CLASS_INDEX(BGl_rtl_storegz00zzsaw_defsz00);
						BgL_arg2397z00_7223 = BgL_res3079z00_7224;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1247z00_7222), BgL_arg2397z00_7223);
				}
				return BgL_new1247z00_7222;
			}
		}

	}



/* &lambda2393 */
	BgL_rtl_storegz00_bglt BGl_z62lambda2393z62zzsaw_defsz00(obj_t
		BgL_envz00_6360, obj_t BgL_loc1245z00_6361, obj_t BgL_var1246z00_6362)
	{
		{	/* SawMill/defs.scm 51 */
			{	/* SawMill/defs.scm 51 */
				BgL_rtl_storegz00_bglt BgL_new1489z00_7226;

				{	/* SawMill/defs.scm 51 */
					BgL_rtl_storegz00_bglt BgL_new1488z00_7227;

					BgL_new1488z00_7227 =
						((BgL_rtl_storegz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_storegz00_bgl))));
					{	/* SawMill/defs.scm 51 */
						long BgL_arg2395z00_7228;

						{	/* SawMill/defs.scm 51 */
							long BgL_res3078z00_7229;

							BgL_res3078z00_7229 =
								BGL_CLASS_INDEX(BGl_rtl_storegz00zzsaw_defsz00);
							BgL_arg2395z00_7228 = BgL_res3078z00_7229;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1488z00_7227), BgL_arg2395z00_7228);
					}
					BgL_new1489z00_7226 = BgL_new1488z00_7227;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1489z00_7226)))->BgL_locz00) =
					((obj_t) BgL_loc1245z00_6361), BUNSPEC);
				((((BgL_rtl_storegz00_bglt) COBJECT(BgL_new1489z00_7226))->BgL_varz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_var1246z00_6362)),
					BUNSPEC);
				return BgL_new1489z00_7226;
			}
		}

	}



/* &lambda2406 */
	obj_t BGl_z62lambda2406z62zzsaw_defsz00(obj_t BgL_envz00_6363,
		obj_t BgL_oz00_6364, obj_t BgL_vz00_6365)
	{
		{	/* SawMill/defs.scm 51 */
			return
				((((BgL_rtl_storegz00_bglt) COBJECT(
							((BgL_rtl_storegz00_bglt) BgL_oz00_6364)))->BgL_varz00) =
				((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_6365)), BUNSPEC);
		}

	}



/* &lambda2405 */
	BgL_globalz00_bglt BGl_z62lambda2405z62zzsaw_defsz00(obj_t BgL_envz00_6366,
		obj_t BgL_oz00_6367)
	{
		{	/* SawMill/defs.scm 51 */
			return
				(((BgL_rtl_storegz00_bglt) COBJECT(
						((BgL_rtl_storegz00_bglt) BgL_oz00_6367)))->BgL_varz00);
		}

	}



/* &<@anonymous:2385> */
	obj_t BGl_z62zc3z04anonymousza32385ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6368,
		obj_t BgL_new1243z00_6369)
	{
		{	/* SawMill/defs.scm 50 */
			{
				BgL_rtl_effectz00_bglt BgL_auxz00_10390;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_effectz00_bglt) BgL_new1243z00_6369))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10390 = ((BgL_rtl_effectz00_bglt) BgL_new1243z00_6369);
				return ((obj_t) BgL_auxz00_10390);
			}
		}

	}



/* &lambda2383 */
	BgL_rtl_effectz00_bglt BGl_z62lambda2383z62zzsaw_defsz00(obj_t
		BgL_envz00_6370)
	{
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_effectz00_bglt BgL_new1242z00_7234;

				BgL_new1242z00_7234 =
					((BgL_rtl_effectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_effectz00_bgl))));
				{	/* SawMill/defs.scm 50 */
					long BgL_arg2384z00_7235;

					{	/* SawMill/defs.scm 50 */
						long BgL_res3077z00_7236;

						BgL_res3077z00_7236 =
							BGL_CLASS_INDEX(BGl_rtl_effectz00zzsaw_defsz00);
						BgL_arg2384z00_7235 = BgL_res3077z00_7236;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1242z00_7234), BgL_arg2384z00_7235);
				}
				return BgL_new1242z00_7234;
			}
		}

	}



/* &lambda2381 */
	BgL_rtl_effectz00_bglt BGl_z62lambda2381z62zzsaw_defsz00(obj_t
		BgL_envz00_6371, obj_t BgL_loc1241z00_6372)
	{
		{	/* SawMill/defs.scm 50 */
			{	/* SawMill/defs.scm 50 */
				BgL_rtl_effectz00_bglt BgL_new1487z00_7237;

				{	/* SawMill/defs.scm 50 */
					BgL_rtl_effectz00_bglt BgL_new1486z00_7238;

					BgL_new1486z00_7238 =
						((BgL_rtl_effectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_effectz00_bgl))));
					{	/* SawMill/defs.scm 50 */
						long BgL_arg2382z00_7239;

						{	/* SawMill/defs.scm 50 */
							long BgL_res3076z00_7240;

							BgL_res3076z00_7240 =
								BGL_CLASS_INDEX(BGl_rtl_effectz00zzsaw_defsz00);
							BgL_arg2382z00_7239 = BgL_res3076z00_7240;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1486z00_7238), BgL_arg2382z00_7239);
					}
					BgL_new1487z00_7237 = BgL_new1486z00_7238;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1487z00_7237)))->BgL_locz00) =
					((obj_t) BgL_loc1241z00_6372), BUNSPEC);
				return BgL_new1487z00_7237;
			}
		}

	}



/* &<@anonymous:2372> */
	obj_t BGl_z62zc3z04anonymousza32372ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6373,
		obj_t BgL_new1239z00_6374)
	{
		{	/* SawMill/defs.scm 48 */
			{
				BgL_rtl_boxrefz00_bglt BgL_auxz00_10406;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_boxrefz00_bglt) BgL_new1239z00_6374))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10406 = ((BgL_rtl_boxrefz00_bglt) BgL_new1239z00_6374);
				return ((obj_t) BgL_auxz00_10406);
			}
		}

	}



/* &lambda2370 */
	BgL_rtl_boxrefz00_bglt BGl_z62lambda2370z62zzsaw_defsz00(obj_t
		BgL_envz00_6375)
	{
		{	/* SawMill/defs.scm 48 */
			{	/* SawMill/defs.scm 48 */
				BgL_rtl_boxrefz00_bglt BgL_new1238z00_7242;

				BgL_new1238z00_7242 =
					((BgL_rtl_boxrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_boxrefz00_bgl))));
				{	/* SawMill/defs.scm 48 */
					long BgL_arg2371z00_7243;

					{	/* SawMill/defs.scm 48 */
						long BgL_res3075z00_7244;

						BgL_res3075z00_7244 =
							BGL_CLASS_INDEX(BGl_rtl_boxrefz00zzsaw_defsz00);
						BgL_arg2371z00_7243 = BgL_res3075z00_7244;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1238z00_7242), BgL_arg2371z00_7243);
				}
				return BgL_new1238z00_7242;
			}
		}

	}



/* &lambda2368 */
	BgL_rtl_boxrefz00_bglt BGl_z62lambda2368z62zzsaw_defsz00(obj_t
		BgL_envz00_6376, obj_t BgL_loc1237z00_6377)
	{
		{	/* SawMill/defs.scm 48 */
			{	/* SawMill/defs.scm 48 */
				BgL_rtl_boxrefz00_bglt BgL_new1485z00_7245;

				{	/* SawMill/defs.scm 48 */
					BgL_rtl_boxrefz00_bglt BgL_new1484z00_7246;

					BgL_new1484z00_7246 =
						((BgL_rtl_boxrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_boxrefz00_bgl))));
					{	/* SawMill/defs.scm 48 */
						long BgL_arg2369z00_7247;

						{	/* SawMill/defs.scm 48 */
							long BgL_res3074z00_7248;

							BgL_res3074z00_7248 =
								BGL_CLASS_INDEX(BGl_rtl_boxrefz00zzsaw_defsz00);
							BgL_arg2369z00_7247 = BgL_res3074z00_7248;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1484z00_7246), BgL_arg2369z00_7247);
					}
					BgL_new1485z00_7245 = BgL_new1484z00_7246;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1485z00_7245)))->BgL_locz00) =
					((obj_t) BgL_loc1237z00_6377), BUNSPEC);
				return BgL_new1485z00_7245;
			}
		}

	}



/* &<@anonymous:2362> */
	obj_t BGl_z62zc3z04anonymousza32362ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6378,
		obj_t BgL_new1235z00_6379)
	{
		{	/* SawMill/defs.scm 47 */
			{
				BgL_rtl_makeboxz00_bglt BgL_auxz00_10422;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_makeboxz00_bglt) BgL_new1235z00_6379))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10422 = ((BgL_rtl_makeboxz00_bglt) BgL_new1235z00_6379);
				return ((obj_t) BgL_auxz00_10422);
			}
		}

	}



/* &lambda2360 */
	BgL_rtl_makeboxz00_bglt BGl_z62lambda2360z62zzsaw_defsz00(obj_t
		BgL_envz00_6380)
	{
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_makeboxz00_bglt BgL_new1234z00_7250;

				BgL_new1234z00_7250 =
					((BgL_rtl_makeboxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_makeboxz00_bgl))));
				{	/* SawMill/defs.scm 47 */
					long BgL_arg2361z00_7251;

					{	/* SawMill/defs.scm 47 */
						long BgL_res3073z00_7252;

						BgL_res3073z00_7252 =
							BGL_CLASS_INDEX(BGl_rtl_makeboxz00zzsaw_defsz00);
						BgL_arg2361z00_7251 = BgL_res3073z00_7252;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1234z00_7250), BgL_arg2361z00_7251);
				}
				return BgL_new1234z00_7250;
			}
		}

	}



/* &lambda2358 */
	BgL_rtl_makeboxz00_bglt BGl_z62lambda2358z62zzsaw_defsz00(obj_t
		BgL_envz00_6381, obj_t BgL_loc1233z00_6382)
	{
		{	/* SawMill/defs.scm 47 */
			{	/* SawMill/defs.scm 47 */
				BgL_rtl_makeboxz00_bglt BgL_new1483z00_7253;

				{	/* SawMill/defs.scm 47 */
					BgL_rtl_makeboxz00_bglt BgL_new1482z00_7254;

					BgL_new1482z00_7254 =
						((BgL_rtl_makeboxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_makeboxz00_bgl))));
					{	/* SawMill/defs.scm 47 */
						long BgL_arg2359z00_7255;

						{	/* SawMill/defs.scm 47 */
							long BgL_res3072z00_7256;

							BgL_res3072z00_7256 =
								BGL_CLASS_INDEX(BGl_rtl_makeboxz00zzsaw_defsz00);
							BgL_arg2359z00_7255 = BgL_res3072z00_7256;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1482z00_7254), BgL_arg2359z00_7255);
					}
					BgL_new1483z00_7253 = BgL_new1482z00_7254;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1483z00_7253)))->BgL_locz00) =
					((obj_t) BgL_loc1233z00_6382), BUNSPEC);
				return BgL_new1483z00_7253;
			}
		}

	}



/* &<@anonymous:2346> */
	obj_t BGl_z62zc3z04anonymousza32346ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6383,
		obj_t BgL_new1231z00_6384)
	{
		{	/* SawMill/defs.scm 46 */
			{
				BgL_rtl_instanceofz00_bglt BgL_auxz00_10438;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_instanceofz00_bglt) BgL_new1231z00_6384))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10442;

					{	/* SawMill/defs.scm 46 */
						obj_t BgL_classz00_7258;

						BgL_classz00_7258 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 46 */
							obj_t BgL__ortest_1106z00_7259;

							BgL__ortest_1106z00_7259 = BGL_CLASS_NIL(BgL_classz00_7258);
							if (CBOOL(BgL__ortest_1106z00_7259))
								{	/* SawMill/defs.scm 46 */
									BgL_auxz00_10442 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7259);
								}
							else
								{	/* SawMill/defs.scm 46 */
									BgL_auxz00_10442 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7258));
								}
						}
					}
					((((BgL_rtl_instanceofz00_bglt) COBJECT(
									((BgL_rtl_instanceofz00_bglt) BgL_new1231z00_6384)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10442), BUNSPEC);
				}
				BgL_auxz00_10438 = ((BgL_rtl_instanceofz00_bglt) BgL_new1231z00_6384);
				return ((obj_t) BgL_auxz00_10438);
			}
		}

	}



/* &lambda2344 */
	BgL_rtl_instanceofz00_bglt BGl_z62lambda2344z62zzsaw_defsz00(obj_t
		BgL_envz00_6385)
	{
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_instanceofz00_bglt BgL_new1230z00_7260;

				BgL_new1230z00_7260 =
					((BgL_rtl_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_instanceofz00_bgl))));
				{	/* SawMill/defs.scm 46 */
					long BgL_arg2345z00_7261;

					{	/* SawMill/defs.scm 46 */
						long BgL_res3071z00_7262;

						BgL_res3071z00_7262 =
							BGL_CLASS_INDEX(BGl_rtl_instanceofz00zzsaw_defsz00);
						BgL_arg2345z00_7261 = BgL_res3071z00_7262;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1230z00_7260), BgL_arg2345z00_7261);
				}
				return BgL_new1230z00_7260;
			}
		}

	}



/* &lambda2342 */
	BgL_rtl_instanceofz00_bglt BGl_z62lambda2342z62zzsaw_defsz00(obj_t
		BgL_envz00_6386, obj_t BgL_loc1228z00_6387, obj_t BgL_type1229z00_6388)
	{
		{	/* SawMill/defs.scm 46 */
			{	/* SawMill/defs.scm 46 */
				BgL_rtl_instanceofz00_bglt BgL_new1481z00_7264;

				{	/* SawMill/defs.scm 46 */
					BgL_rtl_instanceofz00_bglt BgL_new1480z00_7265;

					BgL_new1480z00_7265 =
						((BgL_rtl_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_instanceofz00_bgl))));
					{	/* SawMill/defs.scm 46 */
						long BgL_arg2343z00_7266;

						{	/* SawMill/defs.scm 46 */
							long BgL_res3070z00_7267;

							BgL_res3070z00_7267 =
								BGL_CLASS_INDEX(BGl_rtl_instanceofz00zzsaw_defsz00);
							BgL_arg2343z00_7266 = BgL_res3070z00_7267;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1480z00_7265), BgL_arg2343z00_7266);
					}
					BgL_new1481z00_7264 = BgL_new1480z00_7265;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1481z00_7264)))->BgL_locz00) =
					((obj_t) BgL_loc1228z00_6387), BUNSPEC);
				((((BgL_rtl_instanceofz00_bglt) COBJECT(BgL_new1481z00_7264))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1229z00_6388)),
					BUNSPEC);
				return BgL_new1481z00_7264;
			}
		}

	}



/* &lambda2352 */
	obj_t BGl_z62lambda2352z62zzsaw_defsz00(obj_t BgL_envz00_6389,
		obj_t BgL_oz00_6390, obj_t BgL_vz00_6391)
	{
		{	/* SawMill/defs.scm 46 */
			return
				((((BgL_rtl_instanceofz00_bglt) COBJECT(
							((BgL_rtl_instanceofz00_bglt) BgL_oz00_6390)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6391)), BUNSPEC);
		}

	}



/* &lambda2351 */
	BgL_typez00_bglt BGl_z62lambda2351z62zzsaw_defsz00(obj_t BgL_envz00_6392,
		obj_t BgL_oz00_6393)
	{
		{	/* SawMill/defs.scm 46 */
			return
				(((BgL_rtl_instanceofz00_bglt) COBJECT(
						((BgL_rtl_instanceofz00_bglt) BgL_oz00_6393)))->BgL_typez00);
		}

	}



/* &<@anonymous:2324> */
	obj_t BGl_z62zc3z04anonymousza32324ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6394,
		obj_t BgL_new1226z00_6395)
	{
		{	/* SawMill/defs.scm 45 */
			{
				BgL_rtl_vlengthz00_bglt BgL_auxz00_10470;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_vlengthz00_bglt) BgL_new1226z00_6395))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10474;

					{	/* SawMill/defs.scm 45 */
						obj_t BgL_classz00_7272;

						BgL_classz00_7272 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 45 */
							obj_t BgL__ortest_1106z00_7273;

							BgL__ortest_1106z00_7273 = BGL_CLASS_NIL(BgL_classz00_7272);
							if (CBOOL(BgL__ortest_1106z00_7273))
								{	/* SawMill/defs.scm 45 */
									BgL_auxz00_10474 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7273);
								}
							else
								{	/* SawMill/defs.scm 45 */
									BgL_auxz00_10474 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7272));
								}
						}
					}
					((((BgL_rtl_vlengthz00_bglt) COBJECT(
									((BgL_rtl_vlengthz00_bglt) BgL_new1226z00_6395)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10474), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10483;

					{	/* SawMill/defs.scm 45 */
						obj_t BgL_classz00_7274;

						BgL_classz00_7274 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 45 */
							obj_t BgL__ortest_1106z00_7275;

							BgL__ortest_1106z00_7275 = BGL_CLASS_NIL(BgL_classz00_7274);
							if (CBOOL(BgL__ortest_1106z00_7275))
								{	/* SawMill/defs.scm 45 */
									BgL_auxz00_10483 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7275);
								}
							else
								{	/* SawMill/defs.scm 45 */
									BgL_auxz00_10483 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7274));
								}
						}
					}
					((((BgL_rtl_vlengthz00_bglt) COBJECT(
									((BgL_rtl_vlengthz00_bglt) BgL_new1226z00_6395)))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10483), BUNSPEC);
				}
				BgL_auxz00_10470 = ((BgL_rtl_vlengthz00_bglt) BgL_new1226z00_6395);
				return ((obj_t) BgL_auxz00_10470);
			}
		}

	}



/* &lambda2322 */
	BgL_rtl_vlengthz00_bglt BGl_z62lambda2322z62zzsaw_defsz00(obj_t
		BgL_envz00_6396)
	{
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_vlengthz00_bglt BgL_new1225z00_7276;

				BgL_new1225z00_7276 =
					((BgL_rtl_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_vlengthz00_bgl))));
				{	/* SawMill/defs.scm 45 */
					long BgL_arg2323z00_7277;

					{	/* SawMill/defs.scm 45 */
						long BgL_res3069z00_7278;

						BgL_res3069z00_7278 =
							BGL_CLASS_INDEX(BGl_rtl_vlengthz00zzsaw_defsz00);
						BgL_arg2323z00_7277 = BgL_res3069z00_7278;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1225z00_7276), BgL_arg2323z00_7277);
				}
				return BgL_new1225z00_7276;
			}
		}

	}



/* &lambda2320 */
	BgL_rtl_vlengthz00_bglt BGl_z62lambda2320z62zzsaw_defsz00(obj_t
		BgL_envz00_6397, obj_t BgL_loc1222z00_6398, obj_t BgL_type1223z00_6399,
		obj_t BgL_vtype1224z00_6400)
	{
		{	/* SawMill/defs.scm 45 */
			{	/* SawMill/defs.scm 45 */
				BgL_rtl_vlengthz00_bglt BgL_new1479z00_7281;

				{	/* SawMill/defs.scm 45 */
					BgL_rtl_vlengthz00_bglt BgL_new1478z00_7282;

					BgL_new1478z00_7282 =
						((BgL_rtl_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vlengthz00_bgl))));
					{	/* SawMill/defs.scm 45 */
						long BgL_arg2321z00_7283;

						{	/* SawMill/defs.scm 45 */
							long BgL_res3068z00_7284;

							BgL_res3068z00_7284 =
								BGL_CLASS_INDEX(BGl_rtl_vlengthz00zzsaw_defsz00);
							BgL_arg2321z00_7283 = BgL_res3068z00_7284;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1478z00_7282), BgL_arg2321z00_7283);
					}
					BgL_new1479z00_7281 = BgL_new1478z00_7282;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1479z00_7281)))->BgL_locz00) =
					((obj_t) BgL_loc1222z00_6398), BUNSPEC);
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1479z00_7281))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1223z00_6399)),
					BUNSPEC);
				((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1479z00_7281))->
						BgL_vtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1224z00_6400)),
					BUNSPEC);
				return BgL_new1479z00_7281;
			}
		}

	}



/* &lambda2336 */
	obj_t BGl_z62lambda2336z62zzsaw_defsz00(obj_t BgL_envz00_6401,
		obj_t BgL_oz00_6402, obj_t BgL_vz00_6403)
	{
		{	/* SawMill/defs.scm 45 */
			return
				((((BgL_rtl_vlengthz00_bglt) COBJECT(
							((BgL_rtl_vlengthz00_bglt) BgL_oz00_6402)))->BgL_vtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6403)), BUNSPEC);
		}

	}



/* &lambda2335 */
	BgL_typez00_bglt BGl_z62lambda2335z62zzsaw_defsz00(obj_t BgL_envz00_6404,
		obj_t BgL_oz00_6405)
	{
		{	/* SawMill/defs.scm 45 */
			return
				(((BgL_rtl_vlengthz00_bglt) COBJECT(
						((BgL_rtl_vlengthz00_bglt) BgL_oz00_6405)))->BgL_vtypez00);
		}

	}



/* &lambda2329 */
	obj_t BGl_z62lambda2329z62zzsaw_defsz00(obj_t BgL_envz00_6406,
		obj_t BgL_oz00_6407, obj_t BgL_vz00_6408)
	{
		{	/* SawMill/defs.scm 45 */
			return
				((((BgL_rtl_vlengthz00_bglt) COBJECT(
							((BgL_rtl_vlengthz00_bglt) BgL_oz00_6407)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6408)), BUNSPEC);
		}

	}



/* &lambda2328 */
	BgL_typez00_bglt BGl_z62lambda2328z62zzsaw_defsz00(obj_t BgL_envz00_6409,
		obj_t BgL_oz00_6410)
	{
		{	/* SawMill/defs.scm 45 */
			return
				(((BgL_rtl_vlengthz00_bglt) COBJECT(
						((BgL_rtl_vlengthz00_bglt) BgL_oz00_6410)))->BgL_typez00);
		}

	}



/* &<@anonymous:2300> */
	obj_t BGl_z62zc3z04anonymousza32300ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6411,
		obj_t BgL_new1220z00_6412)
	{
		{	/* SawMill/defs.scm 44 */
			{
				BgL_rtl_vrefz00_bglt BgL_auxz00_10518;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_vrefz00_bglt) BgL_new1220z00_6412))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10522;

					{	/* SawMill/defs.scm 44 */
						obj_t BgL_classz00_7292;

						BgL_classz00_7292 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 44 */
							obj_t BgL__ortest_1106z00_7293;

							BgL__ortest_1106z00_7293 = BGL_CLASS_NIL(BgL_classz00_7292);
							if (CBOOL(BgL__ortest_1106z00_7293))
								{	/* SawMill/defs.scm 44 */
									BgL_auxz00_10522 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7293);
								}
							else
								{	/* SawMill/defs.scm 44 */
									BgL_auxz00_10522 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7292));
								}
						}
					}
					((((BgL_rtl_vrefz00_bglt) COBJECT(
									((BgL_rtl_vrefz00_bglt) BgL_new1220z00_6412)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_10522), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10531;

					{	/* SawMill/defs.scm 44 */
						obj_t BgL_classz00_7294;

						BgL_classz00_7294 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 44 */
							obj_t BgL__ortest_1106z00_7295;

							BgL__ortest_1106z00_7295 = BGL_CLASS_NIL(BgL_classz00_7294);
							if (CBOOL(BgL__ortest_1106z00_7295))
								{	/* SawMill/defs.scm 44 */
									BgL_auxz00_10531 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7295);
								}
							else
								{	/* SawMill/defs.scm 44 */
									BgL_auxz00_10531 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7294));
								}
						}
					}
					((((BgL_rtl_vrefz00_bglt) COBJECT(
									((BgL_rtl_vrefz00_bglt) BgL_new1220z00_6412)))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10531), BUNSPEC);
				}
				BgL_auxz00_10518 = ((BgL_rtl_vrefz00_bglt) BgL_new1220z00_6412);
				return ((obj_t) BgL_auxz00_10518);
			}
		}

	}



/* &lambda2298 */
	BgL_rtl_vrefz00_bglt BGl_z62lambda2298z62zzsaw_defsz00(obj_t BgL_envz00_6413)
	{
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vrefz00_bglt BgL_new1219z00_7296;

				BgL_new1219z00_7296 =
					((BgL_rtl_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_vrefz00_bgl))));
				{	/* SawMill/defs.scm 44 */
					long BgL_arg2299z00_7297;

					{	/* SawMill/defs.scm 44 */
						long BgL_res3067z00_7298;

						BgL_res3067z00_7298 = BGL_CLASS_INDEX(BGl_rtl_vrefz00zzsaw_defsz00);
						BgL_arg2299z00_7297 = BgL_res3067z00_7298;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1219z00_7296), BgL_arg2299z00_7297);
				}
				return BgL_new1219z00_7296;
			}
		}

	}



/* &lambda2296 */
	BgL_rtl_vrefz00_bglt BGl_z62lambda2296z62zzsaw_defsz00(obj_t BgL_envz00_6414,
		obj_t BgL_loc1216z00_6415, obj_t BgL_type1217z00_6416,
		obj_t BgL_vtype1218z00_6417)
	{
		{	/* SawMill/defs.scm 44 */
			{	/* SawMill/defs.scm 44 */
				BgL_rtl_vrefz00_bglt BgL_new1477z00_7301;

				{	/* SawMill/defs.scm 44 */
					BgL_rtl_vrefz00_bglt BgL_new1476z00_7302;

					BgL_new1476z00_7302 =
						((BgL_rtl_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vrefz00_bgl))));
					{	/* SawMill/defs.scm 44 */
						long BgL_arg2297z00_7303;

						{	/* SawMill/defs.scm 44 */
							long BgL_res3066z00_7304;

							BgL_res3066z00_7304 =
								BGL_CLASS_INDEX(BGl_rtl_vrefz00zzsaw_defsz00);
							BgL_arg2297z00_7303 = BgL_res3066z00_7304;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1476z00_7302), BgL_arg2297z00_7303);
					}
					BgL_new1477z00_7301 = BgL_new1476z00_7302;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1477z00_7301)))->BgL_locz00) =
					((obj_t) BgL_loc1216z00_6415), BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1477z00_7301))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1217z00_6416)),
					BUNSPEC);
				((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1477z00_7301))->BgL_vtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1218z00_6417)),
					BUNSPEC);
				return BgL_new1477z00_7301;
			}
		}

	}



/* &lambda2312 */
	obj_t BGl_z62lambda2312z62zzsaw_defsz00(obj_t BgL_envz00_6418,
		obj_t BgL_oz00_6419, obj_t BgL_vz00_6420)
	{
		{	/* SawMill/defs.scm 44 */
			return
				((((BgL_rtl_vrefz00_bglt) COBJECT(
							((BgL_rtl_vrefz00_bglt) BgL_oz00_6419)))->BgL_vtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6420)), BUNSPEC);
		}

	}



/* &lambda2311 */
	BgL_typez00_bglt BGl_z62lambda2311z62zzsaw_defsz00(obj_t BgL_envz00_6421,
		obj_t BgL_oz00_6422)
	{
		{	/* SawMill/defs.scm 44 */
			return
				(((BgL_rtl_vrefz00_bglt) COBJECT(
						((BgL_rtl_vrefz00_bglt) BgL_oz00_6422)))->BgL_vtypez00);
		}

	}



/* &lambda2307 */
	obj_t BGl_z62lambda2307z62zzsaw_defsz00(obj_t BgL_envz00_6423,
		obj_t BgL_oz00_6424, obj_t BgL_vz00_6425)
	{
		{	/* SawMill/defs.scm 44 */
			return
				((((BgL_rtl_vrefz00_bglt) COBJECT(
							((BgL_rtl_vrefz00_bglt) BgL_oz00_6424)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6425)), BUNSPEC);
		}

	}



/* &lambda2306 */
	BgL_typez00_bglt BGl_z62lambda2306z62zzsaw_defsz00(obj_t BgL_envz00_6426,
		obj_t BgL_oz00_6427)
	{
		{	/* SawMill/defs.scm 44 */
			return
				(((BgL_rtl_vrefz00_bglt) COBJECT(
						((BgL_rtl_vrefz00_bglt) BgL_oz00_6427)))->BgL_typez00);
		}

	}



/* &<@anonymous:2278> */
	obj_t BGl_z62zc3z04anonymousza32278ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6428,
		obj_t BgL_new1214z00_6429)
	{
		{	/* SawMill/defs.scm 43 */
			{
				BgL_rtl_vallocz00_bglt BgL_auxz00_10566;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_vallocz00_bglt) BgL_new1214z00_6429))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10570;

					{	/* SawMill/defs.scm 43 */
						obj_t BgL_classz00_7312;

						BgL_classz00_7312 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 43 */
							obj_t BgL__ortest_1106z00_7313;

							BgL__ortest_1106z00_7313 = BGL_CLASS_NIL(BgL_classz00_7312);
							if (CBOOL(BgL__ortest_1106z00_7313))
								{	/* SawMill/defs.scm 43 */
									BgL_auxz00_10570 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7313);
								}
							else
								{	/* SawMill/defs.scm 43 */
									BgL_auxz00_10570 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7312));
								}
						}
					}
					((((BgL_rtl_vallocz00_bglt) COBJECT(
									((BgL_rtl_vallocz00_bglt) BgL_new1214z00_6429)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10570), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10579;

					{	/* SawMill/defs.scm 43 */
						obj_t BgL_classz00_7314;

						BgL_classz00_7314 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 43 */
							obj_t BgL__ortest_1106z00_7315;

							BgL__ortest_1106z00_7315 = BGL_CLASS_NIL(BgL_classz00_7314);
							if (CBOOL(BgL__ortest_1106z00_7315))
								{	/* SawMill/defs.scm 43 */
									BgL_auxz00_10579 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7315);
								}
							else
								{	/* SawMill/defs.scm 43 */
									BgL_auxz00_10579 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7314));
								}
						}
					}
					((((BgL_rtl_vallocz00_bglt) COBJECT(
									((BgL_rtl_vallocz00_bglt) BgL_new1214z00_6429)))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10579), BUNSPEC);
				}
				BgL_auxz00_10566 = ((BgL_rtl_vallocz00_bglt) BgL_new1214z00_6429);
				return ((obj_t) BgL_auxz00_10566);
			}
		}

	}



/* &lambda2276 */
	BgL_rtl_vallocz00_bglt BGl_z62lambda2276z62zzsaw_defsz00(obj_t
		BgL_envz00_6430)
	{
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vallocz00_bglt BgL_new1213z00_7316;

				BgL_new1213z00_7316 =
					((BgL_rtl_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_vallocz00_bgl))));
				{	/* SawMill/defs.scm 43 */
					long BgL_arg2277z00_7317;

					{	/* SawMill/defs.scm 43 */
						long BgL_res3065z00_7318;

						BgL_res3065z00_7318 =
							BGL_CLASS_INDEX(BGl_rtl_vallocz00zzsaw_defsz00);
						BgL_arg2277z00_7317 = BgL_res3065z00_7318;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1213z00_7316), BgL_arg2277z00_7317);
				}
				return BgL_new1213z00_7316;
			}
		}

	}



/* &lambda2273 */
	BgL_rtl_vallocz00_bglt BGl_z62lambda2273z62zzsaw_defsz00(obj_t
		BgL_envz00_6431, obj_t BgL_loc1210z00_6432, obj_t BgL_type1211z00_6433,
		obj_t BgL_vtype1212z00_6434)
	{
		{	/* SawMill/defs.scm 43 */
			{	/* SawMill/defs.scm 43 */
				BgL_rtl_vallocz00_bglt BgL_new1475z00_7321;

				{	/* SawMill/defs.scm 43 */
					BgL_rtl_vallocz00_bglt BgL_new1474z00_7322;

					BgL_new1474z00_7322 =
						((BgL_rtl_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_vallocz00_bgl))));
					{	/* SawMill/defs.scm 43 */
						long BgL_arg2275z00_7323;

						{	/* SawMill/defs.scm 43 */
							long BgL_res3064z00_7324;

							BgL_res3064z00_7324 =
								BGL_CLASS_INDEX(BGl_rtl_vallocz00zzsaw_defsz00);
							BgL_arg2275z00_7323 = BgL_res3064z00_7324;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1474z00_7322), BgL_arg2275z00_7323);
					}
					BgL_new1475z00_7321 = BgL_new1474z00_7322;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1475z00_7321)))->BgL_locz00) =
					((obj_t) BgL_loc1210z00_6432), BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1475z00_7321))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1211z00_6433)),
					BUNSPEC);
				((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1475z00_7321))->
						BgL_vtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1212z00_6434)),
					BUNSPEC);
				return BgL_new1475z00_7321;
			}
		}

	}



/* &lambda2289 */
	obj_t BGl_z62lambda2289z62zzsaw_defsz00(obj_t BgL_envz00_6435,
		obj_t BgL_oz00_6436, obj_t BgL_vz00_6437)
	{
		{	/* SawMill/defs.scm 43 */
			return
				((((BgL_rtl_vallocz00_bglt) COBJECT(
							((BgL_rtl_vallocz00_bglt) BgL_oz00_6436)))->BgL_vtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6437)), BUNSPEC);
		}

	}



/* &lambda2288 */
	BgL_typez00_bglt BGl_z62lambda2288z62zzsaw_defsz00(obj_t BgL_envz00_6438,
		obj_t BgL_oz00_6439)
	{
		{	/* SawMill/defs.scm 43 */
			return
				(((BgL_rtl_vallocz00_bglt) COBJECT(
						((BgL_rtl_vallocz00_bglt) BgL_oz00_6439)))->BgL_vtypez00);
		}

	}



/* &lambda2284 */
	obj_t BGl_z62lambda2284z62zzsaw_defsz00(obj_t BgL_envz00_6440,
		obj_t BgL_oz00_6441, obj_t BgL_vz00_6442)
	{
		{	/* SawMill/defs.scm 43 */
			return
				((((BgL_rtl_vallocz00_bglt) COBJECT(
							((BgL_rtl_vallocz00_bglt) BgL_oz00_6441)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6442)), BUNSPEC);
		}

	}



/* &lambda2283 */
	BgL_typez00_bglt BGl_z62lambda2283z62zzsaw_defsz00(obj_t BgL_envz00_6443,
		obj_t BgL_oz00_6444)
	{
		{	/* SawMill/defs.scm 43 */
			return
				(((BgL_rtl_vallocz00_bglt) COBJECT(
						((BgL_rtl_vallocz00_bglt) BgL_oz00_6444)))->BgL_typez00);
		}

	}



/* &<@anonymous:2250> */
	obj_t BGl_z62zc3z04anonymousza32250ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6445,
		obj_t BgL_new1208z00_6446)
	{
		{	/* SawMill/defs.scm 42 */
			{
				BgL_rtl_getfieldz00_bglt BgL_auxz00_10614;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_getfieldz00_bglt) BgL_new1208z00_6446))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(((BgL_rtl_getfieldz00_bglt)
									BgL_new1208z00_6446)))->BgL_namez00) =
					((obj_t) BGl_string3409z00zzsaw_defsz00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10620;

					{	/* SawMill/defs.scm 42 */
						obj_t BgL_classz00_7332;

						BgL_classz00_7332 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 42 */
							obj_t BgL__ortest_1106z00_7333;

							BgL__ortest_1106z00_7333 = BGL_CLASS_NIL(BgL_classz00_7332);
							if (CBOOL(BgL__ortest_1106z00_7333))
								{	/* SawMill/defs.scm 42 */
									BgL_auxz00_10620 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7333);
								}
							else
								{	/* SawMill/defs.scm 42 */
									BgL_auxz00_10620 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7332));
								}
						}
					}
					((((BgL_rtl_getfieldz00_bglt) COBJECT(
									((BgL_rtl_getfieldz00_bglt) BgL_new1208z00_6446)))->
							BgL_objtypez00) = ((BgL_typez00_bglt) BgL_auxz00_10620), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10629;

					{	/* SawMill/defs.scm 42 */
						obj_t BgL_classz00_7334;

						BgL_classz00_7334 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 42 */
							obj_t BgL__ortest_1106z00_7335;

							BgL__ortest_1106z00_7335 = BGL_CLASS_NIL(BgL_classz00_7334);
							if (CBOOL(BgL__ortest_1106z00_7335))
								{	/* SawMill/defs.scm 42 */
									BgL_auxz00_10629 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7335);
								}
							else
								{	/* SawMill/defs.scm 42 */
									BgL_auxz00_10629 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7334));
								}
						}
					}
					((((BgL_rtl_getfieldz00_bglt) COBJECT(
									((BgL_rtl_getfieldz00_bglt) BgL_new1208z00_6446)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10629), BUNSPEC);
				}
				BgL_auxz00_10614 = ((BgL_rtl_getfieldz00_bglt) BgL_new1208z00_6446);
				return ((obj_t) BgL_auxz00_10614);
			}
		}

	}



/* &lambda2248 */
	BgL_rtl_getfieldz00_bglt BGl_z62lambda2248z62zzsaw_defsz00(obj_t
		BgL_envz00_6447)
	{
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_getfieldz00_bglt BgL_new1207z00_7336;

				BgL_new1207z00_7336 =
					((BgL_rtl_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_getfieldz00_bgl))));
				{	/* SawMill/defs.scm 42 */
					long BgL_arg2249z00_7337;

					{	/* SawMill/defs.scm 42 */
						long BgL_res3063z00_7338;

						BgL_res3063z00_7338 =
							BGL_CLASS_INDEX(BGl_rtl_getfieldz00zzsaw_defsz00);
						BgL_arg2249z00_7337 = BgL_res3063z00_7338;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1207z00_7336), BgL_arg2249z00_7337);
				}
				return BgL_new1207z00_7336;
			}
		}

	}



/* &lambda2246 */
	BgL_rtl_getfieldz00_bglt BGl_z62lambda2246z62zzsaw_defsz00(obj_t
		BgL_envz00_6448, obj_t BgL_loc1203z00_6449, obj_t BgL_name1204z00_6450,
		obj_t BgL_objtype1205z00_6451, obj_t BgL_type1206z00_6452)
	{
		{	/* SawMill/defs.scm 42 */
			{	/* SawMill/defs.scm 42 */
				BgL_rtl_getfieldz00_bglt BgL_new1473z00_7342;

				{	/* SawMill/defs.scm 42 */
					BgL_rtl_getfieldz00_bglt BgL_new1472z00_7343;

					BgL_new1472z00_7343 =
						((BgL_rtl_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_getfieldz00_bgl))));
					{	/* SawMill/defs.scm 42 */
						long BgL_arg2247z00_7344;

						{	/* SawMill/defs.scm 42 */
							long BgL_res3062z00_7345;

							BgL_res3062z00_7345 =
								BGL_CLASS_INDEX(BGl_rtl_getfieldz00zzsaw_defsz00);
							BgL_arg2247z00_7344 = BgL_res3062z00_7345;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1472z00_7343), BgL_arg2247z00_7344);
					}
					BgL_new1473z00_7342 = BgL_new1472z00_7343;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1473z00_7342)))->BgL_locz00) =
					((obj_t) BgL_loc1203z00_6449), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1473z00_7342))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1204z00_6450)), BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1473z00_7342))->
						BgL_objtypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_objtype1205z00_6451)),
					BUNSPEC);
				((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1473z00_7342))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1206z00_6452)),
					BUNSPEC);
				return BgL_new1473z00_7342;
			}
		}

	}



/* &lambda2265 */
	obj_t BGl_z62lambda2265z62zzsaw_defsz00(obj_t BgL_envz00_6453,
		obj_t BgL_oz00_6454, obj_t BgL_vz00_6455)
	{
		{	/* SawMill/defs.scm 42 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_oz00_6454)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6455)), BUNSPEC);
		}

	}



/* &lambda2264 */
	BgL_typez00_bglt BGl_z62lambda2264z62zzsaw_defsz00(obj_t BgL_envz00_6456,
		obj_t BgL_oz00_6457)
	{
		{	/* SawMill/defs.scm 42 */
			return
				(((BgL_rtl_getfieldz00_bglt) COBJECT(
						((BgL_rtl_getfieldz00_bglt) BgL_oz00_6457)))->BgL_typez00);
		}

	}



/* &lambda2260 */
	obj_t BGl_z62lambda2260z62zzsaw_defsz00(obj_t BgL_envz00_6458,
		obj_t BgL_oz00_6459, obj_t BgL_vz00_6460)
	{
		{	/* SawMill/defs.scm 42 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_oz00_6459)))->BgL_objtypez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6460)), BUNSPEC);
		}

	}



/* &lambda2259 */
	BgL_typez00_bglt BGl_z62lambda2259z62zzsaw_defsz00(obj_t BgL_envz00_6461,
		obj_t BgL_oz00_6462)
	{
		{	/* SawMill/defs.scm 42 */
			return
				(((BgL_rtl_getfieldz00_bglt) COBJECT(
						((BgL_rtl_getfieldz00_bglt) BgL_oz00_6462)))->BgL_objtypez00);
		}

	}



/* &lambda2255 */
	obj_t BGl_z62lambda2255z62zzsaw_defsz00(obj_t BgL_envz00_6463,
		obj_t BgL_oz00_6464, obj_t BgL_vz00_6465)
	{
		{	/* SawMill/defs.scm 42 */
			return
				((((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_oz00_6464)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_6465)), BUNSPEC);
		}

	}



/* &lambda2254 */
	obj_t BGl_z62lambda2254z62zzsaw_defsz00(obj_t BgL_envz00_6466,
		obj_t BgL_oz00_6467)
	{
		{	/* SawMill/defs.scm 42 */
			return
				(((BgL_rtl_getfieldz00_bglt) COBJECT(
						((BgL_rtl_getfieldz00_bglt) BgL_oz00_6467)))->BgL_namez00);
		}

	}



/* &<@anonymous:2235> */
	obj_t BGl_z62zc3z04anonymousza32235ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6468,
		obj_t BgL_new1201z00_6469)
	{
		{	/* SawMill/defs.scm 41 */
			{
				BgL_rtl_globalrefz00_bglt BgL_auxz00_10671;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_globalrefz00_bglt) BgL_new1201z00_6469))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalz00_bglt BgL_auxz00_10675;

					{	/* SawMill/defs.scm 41 */
						obj_t BgL_classz00_7356;

						BgL_classz00_7356 = BGl_globalz00zzast_varz00;
						{	/* SawMill/defs.scm 41 */
							obj_t BgL__ortest_1106z00_7357;

							BgL__ortest_1106z00_7357 = BGL_CLASS_NIL(BgL_classz00_7356);
							if (CBOOL(BgL__ortest_1106z00_7357))
								{	/* SawMill/defs.scm 41 */
									BgL_auxz00_10675 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_7357);
								}
							else
								{	/* SawMill/defs.scm 41 */
									BgL_auxz00_10675 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7356));
								}
						}
					}
					((((BgL_rtl_globalrefz00_bglt) COBJECT(
									((BgL_rtl_globalrefz00_bglt) BgL_new1201z00_6469)))->
							BgL_varz00) = ((BgL_globalz00_bglt) BgL_auxz00_10675), BUNSPEC);
				}
				BgL_auxz00_10671 = ((BgL_rtl_globalrefz00_bglt) BgL_new1201z00_6469);
				return ((obj_t) BgL_auxz00_10671);
			}
		}

	}



/* &lambda2233 */
	BgL_rtl_globalrefz00_bglt BGl_z62lambda2233z62zzsaw_defsz00(obj_t
		BgL_envz00_6470)
	{
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_globalrefz00_bglt BgL_new1200z00_7358;

				BgL_new1200z00_7358 =
					((BgL_rtl_globalrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_globalrefz00_bgl))));
				{	/* SawMill/defs.scm 41 */
					long BgL_arg2234z00_7359;

					{	/* SawMill/defs.scm 41 */
						long BgL_res3061z00_7360;

						BgL_res3061z00_7360 =
							BGL_CLASS_INDEX(BGl_rtl_globalrefz00zzsaw_defsz00);
						BgL_arg2234z00_7359 = BgL_res3061z00_7360;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1200z00_7358), BgL_arg2234z00_7359);
				}
				return BgL_new1200z00_7358;
			}
		}

	}



/* &lambda2231 */
	BgL_rtl_globalrefz00_bglt BGl_z62lambda2231z62zzsaw_defsz00(obj_t
		BgL_envz00_6471, obj_t BgL_loc1198z00_6472, obj_t BgL_var1199z00_6473)
	{
		{	/* SawMill/defs.scm 41 */
			{	/* SawMill/defs.scm 41 */
				BgL_rtl_globalrefz00_bglt BgL_new1471z00_7362;

				{	/* SawMill/defs.scm 41 */
					BgL_rtl_globalrefz00_bglt BgL_new1470z00_7363;

					BgL_new1470z00_7363 =
						((BgL_rtl_globalrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_globalrefz00_bgl))));
					{	/* SawMill/defs.scm 41 */
						long BgL_arg2232z00_7364;

						{	/* SawMill/defs.scm 41 */
							long BgL_res3060z00_7365;

							BgL_res3060z00_7365 =
								BGL_CLASS_INDEX(BGl_rtl_globalrefz00zzsaw_defsz00);
							BgL_arg2232z00_7364 = BgL_res3060z00_7365;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1470z00_7363), BgL_arg2232z00_7364);
					}
					BgL_new1471z00_7362 = BgL_new1470z00_7363;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1471z00_7362)))->BgL_locz00) =
					((obj_t) BgL_loc1198z00_6472), BUNSPEC);
				((((BgL_rtl_globalrefz00_bglt) COBJECT(BgL_new1471z00_7362))->
						BgL_varz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_var1199z00_6473)),
					BUNSPEC);
				return BgL_new1471z00_7362;
			}
		}

	}



/* &lambda2240 */
	obj_t BGl_z62lambda2240z62zzsaw_defsz00(obj_t BgL_envz00_6474,
		obj_t BgL_oz00_6475, obj_t BgL_vz00_6476)
	{
		{	/* SawMill/defs.scm 41 */
			return
				((((BgL_rtl_globalrefz00_bglt) COBJECT(
							((BgL_rtl_globalrefz00_bglt) BgL_oz00_6475)))->BgL_varz00) =
				((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_6476)), BUNSPEC);
		}

	}



/* &lambda2239 */
	BgL_globalz00_bglt BGl_z62lambda2239z62zzsaw_defsz00(obj_t BgL_envz00_6477,
		obj_t BgL_oz00_6478)
	{
		{	/* SawMill/defs.scm 41 */
			return
				(((BgL_rtl_globalrefz00_bglt) COBJECT(
						((BgL_rtl_globalrefz00_bglt) BgL_oz00_6478)))->BgL_varz00);
		}

	}



/* &<@anonymous:2220> */
	obj_t BGl_z62zc3z04anonymousza32220ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6479,
		obj_t BgL_new1196z00_6480)
	{
		{	/* SawMill/defs.scm 40 */
			{
				BgL_rtl_loadfunz00_bglt BgL_auxz00_10703;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_loadfunz00_bglt) BgL_new1196z00_6480))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalz00_bglt BgL_auxz00_10707;

					{	/* SawMill/defs.scm 40 */
						obj_t BgL_classz00_7370;

						BgL_classz00_7370 = BGl_globalz00zzast_varz00;
						{	/* SawMill/defs.scm 40 */
							obj_t BgL__ortest_1106z00_7371;

							BgL__ortest_1106z00_7371 = BGL_CLASS_NIL(BgL_classz00_7370);
							if (CBOOL(BgL__ortest_1106z00_7371))
								{	/* SawMill/defs.scm 40 */
									BgL_auxz00_10707 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_7371);
								}
							else
								{	/* SawMill/defs.scm 40 */
									BgL_auxz00_10707 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7370));
								}
						}
					}
					((((BgL_rtl_loadfunz00_bglt) COBJECT(
									((BgL_rtl_loadfunz00_bglt) BgL_new1196z00_6480)))->
							BgL_varz00) = ((BgL_globalz00_bglt) BgL_auxz00_10707), BUNSPEC);
				}
				BgL_auxz00_10703 = ((BgL_rtl_loadfunz00_bglt) BgL_new1196z00_6480);
				return ((obj_t) BgL_auxz00_10703);
			}
		}

	}



/* &lambda2218 */
	BgL_rtl_loadfunz00_bglt BGl_z62lambda2218z62zzsaw_defsz00(obj_t
		BgL_envz00_6481)
	{
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_loadfunz00_bglt BgL_new1195z00_7372;

				BgL_new1195z00_7372 =
					((BgL_rtl_loadfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_loadfunz00_bgl))));
				{	/* SawMill/defs.scm 40 */
					long BgL_arg2219z00_7373;

					{	/* SawMill/defs.scm 40 */
						long BgL_res3059z00_7374;

						BgL_res3059z00_7374 =
							BGL_CLASS_INDEX(BGl_rtl_loadfunz00zzsaw_defsz00);
						BgL_arg2219z00_7373 = BgL_res3059z00_7374;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1195z00_7372), BgL_arg2219z00_7373);
				}
				return BgL_new1195z00_7372;
			}
		}

	}



/* &lambda2216 */
	BgL_rtl_loadfunz00_bglt BGl_z62lambda2216z62zzsaw_defsz00(obj_t
		BgL_envz00_6482, obj_t BgL_loc1193z00_6483, obj_t BgL_var1194z00_6484)
	{
		{	/* SawMill/defs.scm 40 */
			{	/* SawMill/defs.scm 40 */
				BgL_rtl_loadfunz00_bglt BgL_new1469z00_7376;

				{	/* SawMill/defs.scm 40 */
					BgL_rtl_loadfunz00_bglt BgL_new1468z00_7377;

					BgL_new1468z00_7377 =
						((BgL_rtl_loadfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadfunz00_bgl))));
					{	/* SawMill/defs.scm 40 */
						long BgL_arg2217z00_7378;

						{	/* SawMill/defs.scm 40 */
							long BgL_res3058z00_7379;

							BgL_res3058z00_7379 =
								BGL_CLASS_INDEX(BGl_rtl_loadfunz00zzsaw_defsz00);
							BgL_arg2217z00_7378 = BgL_res3058z00_7379;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1468z00_7377), BgL_arg2217z00_7378);
					}
					BgL_new1469z00_7376 = BgL_new1468z00_7377;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1469z00_7376)))->BgL_locz00) =
					((obj_t) BgL_loc1193z00_6483), BUNSPEC);
				((((BgL_rtl_loadfunz00_bglt) COBJECT(BgL_new1469z00_7376))->
						BgL_varz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_var1194z00_6484)),
					BUNSPEC);
				return BgL_new1469z00_7376;
			}
		}

	}



/* &lambda2225 */
	obj_t BGl_z62lambda2225z62zzsaw_defsz00(obj_t BgL_envz00_6485,
		obj_t BgL_oz00_6486, obj_t BgL_vz00_6487)
	{
		{	/* SawMill/defs.scm 40 */
			return
				((((BgL_rtl_loadfunz00_bglt) COBJECT(
							((BgL_rtl_loadfunz00_bglt) BgL_oz00_6486)))->BgL_varz00) =
				((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_6487)), BUNSPEC);
		}

	}



/* &lambda2224 */
	BgL_globalz00_bglt BGl_z62lambda2224z62zzsaw_defsz00(obj_t BgL_envz00_6488,
		obj_t BgL_oz00_6489)
	{
		{	/* SawMill/defs.scm 40 */
			return
				(((BgL_rtl_loadfunz00_bglt) COBJECT(
						((BgL_rtl_loadfunz00_bglt) BgL_oz00_6489)))->BgL_varz00);
		}

	}



/* &<@anonymous:2205> */
	obj_t BGl_z62zc3z04anonymousza32205ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6490,
		obj_t BgL_new1190z00_6491)
	{
		{	/* SawMill/defs.scm 39 */
			{
				BgL_rtl_loadgz00_bglt BgL_auxz00_10735;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_loadgz00_bglt) BgL_new1190z00_6491))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalz00_bglt BgL_auxz00_10739;

					{	/* SawMill/defs.scm 39 */
						obj_t BgL_classz00_7384;

						BgL_classz00_7384 = BGl_globalz00zzast_varz00;
						{	/* SawMill/defs.scm 39 */
							obj_t BgL__ortest_1106z00_7385;

							BgL__ortest_1106z00_7385 = BGL_CLASS_NIL(BgL_classz00_7384);
							if (CBOOL(BgL__ortest_1106z00_7385))
								{	/* SawMill/defs.scm 39 */
									BgL_auxz00_10739 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_7385);
								}
							else
								{	/* SawMill/defs.scm 39 */
									BgL_auxz00_10739 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7384));
								}
						}
					}
					((((BgL_rtl_loadgz00_bglt) COBJECT(
									((BgL_rtl_loadgz00_bglt) BgL_new1190z00_6491)))->BgL_varz00) =
						((BgL_globalz00_bglt) BgL_auxz00_10739), BUNSPEC);
				}
				BgL_auxz00_10735 = ((BgL_rtl_loadgz00_bglt) BgL_new1190z00_6491);
				return ((obj_t) BgL_auxz00_10735);
			}
		}

	}



/* &lambda2203 */
	BgL_rtl_loadgz00_bglt BGl_z62lambda2203z62zzsaw_defsz00(obj_t BgL_envz00_6492)
	{
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadgz00_bglt BgL_new1189z00_7386;

				BgL_new1189z00_7386 =
					((BgL_rtl_loadgz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_loadgz00_bgl))));
				{	/* SawMill/defs.scm 39 */
					long BgL_arg2204z00_7387;

					{	/* SawMill/defs.scm 39 */
						long BgL_res3057z00_7388;

						BgL_res3057z00_7388 =
							BGL_CLASS_INDEX(BGl_rtl_loadgz00zzsaw_defsz00);
						BgL_arg2204z00_7387 = BgL_res3057z00_7388;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1189z00_7386), BgL_arg2204z00_7387);
				}
				return BgL_new1189z00_7386;
			}
		}

	}



/* &lambda2201 */
	BgL_rtl_loadgz00_bglt BGl_z62lambda2201z62zzsaw_defsz00(obj_t BgL_envz00_6493,
		obj_t BgL_loc1187z00_6494, obj_t BgL_var1188z00_6495)
	{
		{	/* SawMill/defs.scm 39 */
			{	/* SawMill/defs.scm 39 */
				BgL_rtl_loadgz00_bglt BgL_new1467z00_7390;

				{	/* SawMill/defs.scm 39 */
					BgL_rtl_loadgz00_bglt BgL_new1466z00_7391;

					BgL_new1466z00_7391 =
						((BgL_rtl_loadgz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadgz00_bgl))));
					{	/* SawMill/defs.scm 39 */
						long BgL_arg2202z00_7392;

						{	/* SawMill/defs.scm 39 */
							long BgL_res3056z00_7393;

							BgL_res3056z00_7393 =
								BGL_CLASS_INDEX(BGl_rtl_loadgz00zzsaw_defsz00);
							BgL_arg2202z00_7392 = BgL_res3056z00_7393;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1466z00_7391), BgL_arg2202z00_7392);
					}
					BgL_new1467z00_7390 = BgL_new1466z00_7391;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1467z00_7390)))->BgL_locz00) =
					((obj_t) BgL_loc1187z00_6494), BUNSPEC);
				((((BgL_rtl_loadgz00_bglt) COBJECT(BgL_new1467z00_7390))->BgL_varz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_var1188z00_6495)),
					BUNSPEC);
				return BgL_new1467z00_7390;
			}
		}

	}



/* &lambda2210 */
	obj_t BGl_z62lambda2210z62zzsaw_defsz00(obj_t BgL_envz00_6496,
		obj_t BgL_oz00_6497, obj_t BgL_vz00_6498)
	{
		{	/* SawMill/defs.scm 39 */
			return
				((((BgL_rtl_loadgz00_bglt) COBJECT(
							((BgL_rtl_loadgz00_bglt) BgL_oz00_6497)))->BgL_varz00) =
				((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_6498)), BUNSPEC);
		}

	}



/* &lambda2209 */
	BgL_globalz00_bglt BGl_z62lambda2209z62zzsaw_defsz00(obj_t BgL_envz00_6499,
		obj_t BgL_oz00_6500)
	{
		{	/* SawMill/defs.scm 39 */
			return
				(((BgL_rtl_loadgz00_bglt) COBJECT(
						((BgL_rtl_loadgz00_bglt) BgL_oz00_6500)))->BgL_varz00);
		}

	}



/* &<@anonymous:2190> */
	obj_t BGl_z62zc3z04anonymousza32190ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6501,
		obj_t BgL_new1185z00_6502)
	{
		{	/* SawMill/defs.scm 38 */
			{
				BgL_rtl_loadiz00_bglt BgL_auxz00_10767;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_loadiz00_bglt) BgL_new1185z00_6502))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_atomz00_bglt BgL_auxz00_10771;

					{	/* SawMill/defs.scm 38 */
						obj_t BgL_classz00_7398;

						BgL_classz00_7398 = BGl_atomz00zzast_nodez00;
						{	/* SawMill/defs.scm 38 */
							obj_t BgL__ortest_1106z00_7399;

							BgL__ortest_1106z00_7399 = BGL_CLASS_NIL(BgL_classz00_7398);
							if (CBOOL(BgL__ortest_1106z00_7399))
								{	/* SawMill/defs.scm 38 */
									BgL_auxz00_10771 =
										((BgL_atomz00_bglt) BgL__ortest_1106z00_7399);
								}
							else
								{	/* SawMill/defs.scm 38 */
									BgL_auxz00_10771 =
										((BgL_atomz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7398));
								}
						}
					}
					((((BgL_rtl_loadiz00_bglt) COBJECT(
									((BgL_rtl_loadiz00_bglt) BgL_new1185z00_6502)))->
							BgL_constantz00) =
						((BgL_atomz00_bglt) BgL_auxz00_10771), BUNSPEC);
				}
				BgL_auxz00_10767 = ((BgL_rtl_loadiz00_bglt) BgL_new1185z00_6502);
				return ((obj_t) BgL_auxz00_10767);
			}
		}

	}



/* &lambda2188 */
	BgL_rtl_loadiz00_bglt BGl_z62lambda2188z62zzsaw_defsz00(obj_t BgL_envz00_6503)
	{
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadiz00_bglt BgL_new1184z00_7400;

				BgL_new1184z00_7400 =
					((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_loadiz00_bgl))));
				{	/* SawMill/defs.scm 38 */
					long BgL_arg2189z00_7401;

					{	/* SawMill/defs.scm 38 */
						long BgL_res3055z00_7402;

						BgL_res3055z00_7402 =
							BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
						BgL_arg2189z00_7401 = BgL_res3055z00_7402;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1184z00_7400), BgL_arg2189z00_7401);
				}
				return BgL_new1184z00_7400;
			}
		}

	}



/* &lambda2186 */
	BgL_rtl_loadiz00_bglt BGl_z62lambda2186z62zzsaw_defsz00(obj_t BgL_envz00_6504,
		obj_t BgL_loc1182z00_6505, obj_t BgL_constant1183z00_6506)
	{
		{	/* SawMill/defs.scm 38 */
			{	/* SawMill/defs.scm 38 */
				BgL_rtl_loadiz00_bglt BgL_new1465z00_7404;

				{	/* SawMill/defs.scm 38 */
					BgL_rtl_loadiz00_bglt BgL_new1464z00_7405;

					BgL_new1464z00_7405 =
						((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadiz00_bgl))));
					{	/* SawMill/defs.scm 38 */
						long BgL_arg2187z00_7406;

						{	/* SawMill/defs.scm 38 */
							long BgL_res3054z00_7407;

							BgL_res3054z00_7407 =
								BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
							BgL_arg2187z00_7406 = BgL_res3054z00_7407;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1464z00_7405), BgL_arg2187z00_7406);
					}
					BgL_new1465z00_7404 = BgL_new1464z00_7405;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1465z00_7404)))->BgL_locz00) =
					((obj_t) BgL_loc1182z00_6505), BUNSPEC);
				((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_new1465z00_7404))->
						BgL_constantz00) =
					((BgL_atomz00_bglt) ((BgL_atomz00_bglt) BgL_constant1183z00_6506)),
					BUNSPEC);
				return BgL_new1465z00_7404;
			}
		}

	}



/* &lambda2195 */
	obj_t BGl_z62lambda2195z62zzsaw_defsz00(obj_t BgL_envz00_6507,
		obj_t BgL_oz00_6508, obj_t BgL_vz00_6509)
	{
		{	/* SawMill/defs.scm 38 */
			return
				((((BgL_rtl_loadiz00_bglt) COBJECT(
							((BgL_rtl_loadiz00_bglt) BgL_oz00_6508)))->BgL_constantz00) =
				((BgL_atomz00_bglt) ((BgL_atomz00_bglt) BgL_vz00_6509)), BUNSPEC);
		}

	}



/* &lambda2194 */
	BgL_atomz00_bglt BGl_z62lambda2194z62zzsaw_defsz00(obj_t BgL_envz00_6510,
		obj_t BgL_oz00_6511)
	{
		{	/* SawMill/defs.scm 38 */
			return
				(((BgL_rtl_loadiz00_bglt) COBJECT(
						((BgL_rtl_loadiz00_bglt) BgL_oz00_6511)))->BgL_constantz00);
		}

	}



/* &<@anonymous:2180> */
	obj_t BGl_z62zc3z04anonymousza32180ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6512,
		obj_t BgL_new1180z00_6513)
	{
		{	/* SawMill/defs.scm 37 */
			{
				BgL_rtl_movz00_bglt BgL_auxz00_10799;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_movz00_bglt) BgL_new1180z00_6513))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10799 = ((BgL_rtl_movz00_bglt) BgL_new1180z00_6513);
				return ((obj_t) BgL_auxz00_10799);
			}
		}

	}



/* &lambda2178 */
	BgL_rtl_movz00_bglt BGl_z62lambda2178z62zzsaw_defsz00(obj_t BgL_envz00_6514)
	{
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_movz00_bglt BgL_new1178z00_7412;

				BgL_new1178z00_7412 =
					((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_movz00_bgl))));
				{	/* SawMill/defs.scm 37 */
					long BgL_arg2179z00_7413;

					{	/* SawMill/defs.scm 37 */
						long BgL_res3053z00_7414;

						BgL_res3053z00_7414 = BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
						BgL_arg2179z00_7413 = BgL_res3053z00_7414;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1178z00_7412), BgL_arg2179z00_7413);
				}
				return BgL_new1178z00_7412;
			}
		}

	}



/* &lambda2176 */
	BgL_rtl_movz00_bglt BGl_z62lambda2176z62zzsaw_defsz00(obj_t BgL_envz00_6515,
		obj_t BgL_loc1177z00_6516)
	{
		{	/* SawMill/defs.scm 37 */
			{	/* SawMill/defs.scm 37 */
				BgL_rtl_movz00_bglt BgL_new1463z00_7415;

				{	/* SawMill/defs.scm 37 */
					BgL_rtl_movz00_bglt BgL_new1462z00_7416;

					BgL_new1462z00_7416 =
						((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_movz00_bgl))));
					{	/* SawMill/defs.scm 37 */
						long BgL_arg2177z00_7417;

						{	/* SawMill/defs.scm 37 */
							long BgL_res3052z00_7418;

							BgL_res3052z00_7418 =
								BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
							BgL_arg2177z00_7417 = BgL_res3052z00_7418;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1462z00_7416), BgL_arg2177z00_7417);
					}
					BgL_new1463z00_7415 = BgL_new1462z00_7416;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1463z00_7415)))->BgL_locz00) =
					((obj_t) BgL_loc1177z00_6516), BUNSPEC);
				return BgL_new1463z00_7415;
			}
		}

	}



/* &<@anonymous:2169> */
	obj_t BGl_z62zc3z04anonymousza32169ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6517,
		obj_t BgL_new1175z00_6518)
	{
		{	/* SawMill/defs.scm 36 */
			{
				BgL_rtl_nopz00_bglt BgL_auxz00_10815;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_nopz00_bglt) BgL_new1175z00_6518))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10815 = ((BgL_rtl_nopz00_bglt) BgL_new1175z00_6518);
				return ((obj_t) BgL_auxz00_10815);
			}
		}

	}



/* &lambda2167 */
	BgL_rtl_nopz00_bglt BGl_z62lambda2167z62zzsaw_defsz00(obj_t BgL_envz00_6519)
	{
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_nopz00_bglt BgL_new1174z00_7420;

				BgL_new1174z00_7420 =
					((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_nopz00_bgl))));
				{	/* SawMill/defs.scm 36 */
					long BgL_arg2168z00_7421;

					{	/* SawMill/defs.scm 36 */
						long BgL_res3051z00_7422;

						BgL_res3051z00_7422 = BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
						BgL_arg2168z00_7421 = BgL_res3051z00_7422;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1174z00_7420), BgL_arg2168z00_7421);
				}
				return BgL_new1174z00_7420;
			}
		}

	}



/* &lambda2165 */
	BgL_rtl_nopz00_bglt BGl_z62lambda2165z62zzsaw_defsz00(obj_t BgL_envz00_6520,
		obj_t BgL_loc1173z00_6521)
	{
		{	/* SawMill/defs.scm 36 */
			{	/* SawMill/defs.scm 36 */
				BgL_rtl_nopz00_bglt BgL_new1461z00_7423;

				{	/* SawMill/defs.scm 36 */
					BgL_rtl_nopz00_bglt BgL_new1460z00_7424;

					BgL_new1460z00_7424 =
						((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_nopz00_bgl))));
					{	/* SawMill/defs.scm 36 */
						long BgL_arg2166z00_7425;

						{	/* SawMill/defs.scm 36 */
							long BgL_res3050z00_7426;

							BgL_res3050z00_7426 =
								BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
							BgL_arg2166z00_7425 = BgL_res3050z00_7426;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1460z00_7424), BgL_arg2166z00_7425);
					}
					BgL_new1461z00_7423 = BgL_new1460z00_7424;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1461z00_7423)))->BgL_locz00) =
					((obj_t) BgL_loc1173z00_6521), BUNSPEC);
				return BgL_new1461z00_7423;
			}
		}

	}



/* &<@anonymous:2159> */
	obj_t BGl_z62zc3z04anonymousza32159ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6522,
		obj_t BgL_new1171z00_6523)
	{
		{	/* SawMill/defs.scm 35 */
			{
				BgL_rtl_purez00_bglt BgL_auxz00_10831;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_purez00_bglt) BgL_new1171z00_6523))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10831 = ((BgL_rtl_purez00_bglt) BgL_new1171z00_6523);
				return ((obj_t) BgL_auxz00_10831);
			}
		}

	}



/* &lambda2157 */
	BgL_rtl_purez00_bglt BGl_z62lambda2157z62zzsaw_defsz00(obj_t BgL_envz00_6524)
	{
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_purez00_bglt BgL_new1170z00_7428;

				BgL_new1170z00_7428 =
					((BgL_rtl_purez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_purez00_bgl))));
				{	/* SawMill/defs.scm 35 */
					long BgL_arg2158z00_7429;

					{	/* SawMill/defs.scm 35 */
						long BgL_res3049z00_7430;

						BgL_res3049z00_7430 = BGL_CLASS_INDEX(BGl_rtl_purez00zzsaw_defsz00);
						BgL_arg2158z00_7429 = BgL_res3049z00_7430;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1170z00_7428), BgL_arg2158z00_7429);
				}
				return BgL_new1170z00_7428;
			}
		}

	}



/* &lambda2155 */
	BgL_rtl_purez00_bglt BGl_z62lambda2155z62zzsaw_defsz00(obj_t BgL_envz00_6525,
		obj_t BgL_loc1169z00_6526)
	{
		{	/* SawMill/defs.scm 35 */
			{	/* SawMill/defs.scm 35 */
				BgL_rtl_purez00_bglt BgL_new1459z00_7431;

				{	/* SawMill/defs.scm 35 */
					BgL_rtl_purez00_bglt BgL_new1458z00_7432;

					BgL_new1458z00_7432 =
						((BgL_rtl_purez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_purez00_bgl))));
					{	/* SawMill/defs.scm 35 */
						long BgL_arg2156z00_7433;

						{	/* SawMill/defs.scm 35 */
							long BgL_res3048z00_7434;

							BgL_res3048z00_7434 =
								BGL_CLASS_INDEX(BGl_rtl_purez00zzsaw_defsz00);
							BgL_arg2156z00_7433 = BgL_res3048z00_7434;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1458z00_7432), BgL_arg2156z00_7433);
					}
					BgL_new1459z00_7431 = BgL_new1458z00_7432;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1459z00_7431)))->BgL_locz00) =
					((obj_t) BgL_loc1169z00_6526), BUNSPEC);
				return BgL_new1459z00_7431;
			}
		}

	}



/* &<@anonymous:2143> */
	obj_t BGl_z62zc3z04anonymousza32143ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6527,
		obj_t BgL_new1167z00_6528)
	{
		{	/* SawMill/defs.scm 33 */
			{
				BgL_rtl_goz00_bglt BgL_auxz00_10847;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_goz00_bglt) BgL_new1167z00_6528))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_blockz00_bglt BgL_auxz00_10851;

					{	/* SawMill/defs.scm 33 */
						obj_t BgL_classz00_7436;

						BgL_classz00_7436 = BGl_blockz00zzsaw_defsz00;
						{	/* SawMill/defs.scm 33 */
							obj_t BgL__ortest_1106z00_7437;

							BgL__ortest_1106z00_7437 = BGL_CLASS_NIL(BgL_classz00_7436);
							if (CBOOL(BgL__ortest_1106z00_7437))
								{	/* SawMill/defs.scm 33 */
									BgL_auxz00_10851 =
										((BgL_blockz00_bglt) BgL__ortest_1106z00_7437);
								}
							else
								{	/* SawMill/defs.scm 33 */
									BgL_auxz00_10851 =
										((BgL_blockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7436));
								}
						}
					}
					((((BgL_rtl_goz00_bglt) COBJECT(
									((BgL_rtl_goz00_bglt) BgL_new1167z00_6528)))->BgL_toz00) =
						((BgL_blockz00_bglt) BgL_auxz00_10851), BUNSPEC);
				}
				BgL_auxz00_10847 = ((BgL_rtl_goz00_bglt) BgL_new1167z00_6528);
				return ((obj_t) BgL_auxz00_10847);
			}
		}

	}



/* &lambda2141 */
	BgL_rtl_goz00_bglt BGl_z62lambda2141z62zzsaw_defsz00(obj_t BgL_envz00_6529)
	{
		{	/* SawMill/defs.scm 33 */
			{	/* SawMill/defs.scm 33 */
				BgL_rtl_goz00_bglt BgL_new1166z00_7438;

				BgL_new1166z00_7438 =
					((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_goz00_bgl))));
				{	/* SawMill/defs.scm 33 */
					long BgL_arg2142z00_7439;

					{	/* SawMill/defs.scm 33 */
						long BgL_res3047z00_7440;

						BgL_res3047z00_7440 = BGL_CLASS_INDEX(BGl_rtl_goz00zzsaw_defsz00);
						BgL_arg2142z00_7439 = BgL_res3047z00_7440;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1166z00_7438), BgL_arg2142z00_7439);
				}
				return BgL_new1166z00_7438;
			}
		}

	}



/* &lambda2139 */
	BgL_rtl_goz00_bglt BGl_z62lambda2139z62zzsaw_defsz00(obj_t BgL_envz00_6530,
		obj_t BgL_loc1164z00_6531, obj_t BgL_to1165z00_6532)
	{
		{	/* SawMill/defs.scm 33 */
			{	/* SawMill/defs.scm 33 */
				BgL_rtl_goz00_bglt BgL_new1457z00_7442;

				{	/* SawMill/defs.scm 33 */
					BgL_rtl_goz00_bglt BgL_new1456z00_7443;

					BgL_new1456z00_7443 =
						((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_goz00_bgl))));
					{	/* SawMill/defs.scm 33 */
						long BgL_arg2140z00_7444;

						{	/* SawMill/defs.scm 33 */
							long BgL_res3046z00_7445;

							BgL_res3046z00_7445 = BGL_CLASS_INDEX(BGl_rtl_goz00zzsaw_defsz00);
							BgL_arg2140z00_7444 = BgL_res3046z00_7445;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1456z00_7443), BgL_arg2140z00_7444);
					}
					BgL_new1457z00_7442 = BgL_new1456z00_7443;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1457z00_7442)))->BgL_locz00) =
					((obj_t) BgL_loc1164z00_6531), BUNSPEC);
				((((BgL_rtl_goz00_bglt) COBJECT(BgL_new1457z00_7442))->BgL_toz00) =
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_to1165z00_6532)),
					BUNSPEC);
				return BgL_new1457z00_7442;
			}
		}

	}



/* &lambda2148 */
	obj_t BGl_z62lambda2148z62zzsaw_defsz00(obj_t BgL_envz00_6533,
		obj_t BgL_oz00_6534, obj_t BgL_vz00_6535)
	{
		{	/* SawMill/defs.scm 33 */
			return
				((((BgL_rtl_goz00_bglt) COBJECT(
							((BgL_rtl_goz00_bglt) BgL_oz00_6534)))->BgL_toz00) =
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_vz00_6535)), BUNSPEC);
		}

	}



/* &lambda2147 */
	BgL_blockz00_bglt BGl_z62lambda2147z62zzsaw_defsz00(obj_t BgL_envz00_6536,
		obj_t BgL_oz00_6537)
	{
		{	/* SawMill/defs.scm 33 */
			return
				(((BgL_rtl_goz00_bglt) COBJECT(
						((BgL_rtl_goz00_bglt) BgL_oz00_6537)))->BgL_toz00);
		}

	}



/* &<@anonymous:2128> */
	obj_t BGl_z62zc3z04anonymousza32128ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6538,
		obj_t BgL_new1162z00_6539)
	{
		{	/* SawMill/defs.scm 32 */
			{
				BgL_rtl_ifnez00_bglt BgL_auxz00_10879;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_ifnez00_bglt) BgL_new1162z00_6539))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_blockz00_bglt BgL_auxz00_10883;

					{	/* SawMill/defs.scm 32 */
						obj_t BgL_classz00_7450;

						BgL_classz00_7450 = BGl_blockz00zzsaw_defsz00;
						{	/* SawMill/defs.scm 32 */
							obj_t BgL__ortest_1106z00_7451;

							BgL__ortest_1106z00_7451 = BGL_CLASS_NIL(BgL_classz00_7450);
							if (CBOOL(BgL__ortest_1106z00_7451))
								{	/* SawMill/defs.scm 32 */
									BgL_auxz00_10883 =
										((BgL_blockz00_bglt) BgL__ortest_1106z00_7451);
								}
							else
								{	/* SawMill/defs.scm 32 */
									BgL_auxz00_10883 =
										((BgL_blockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7450));
								}
						}
					}
					((((BgL_rtl_ifnez00_bglt) COBJECT(
									((BgL_rtl_ifnez00_bglt) BgL_new1162z00_6539)))->BgL_thenz00) =
						((BgL_blockz00_bglt) BgL_auxz00_10883), BUNSPEC);
				}
				BgL_auxz00_10879 = ((BgL_rtl_ifnez00_bglt) BgL_new1162z00_6539);
				return ((obj_t) BgL_auxz00_10879);
			}
		}

	}



/* &lambda2126 */
	BgL_rtl_ifnez00_bglt BGl_z62lambda2126z62zzsaw_defsz00(obj_t BgL_envz00_6540)
	{
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_ifnez00_bglt BgL_new1161z00_7452;

				BgL_new1161z00_7452 =
					((BgL_rtl_ifnez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_ifnez00_bgl))));
				{	/* SawMill/defs.scm 32 */
					long BgL_arg2127z00_7453;

					{	/* SawMill/defs.scm 32 */
						long BgL_res3045z00_7454;

						BgL_res3045z00_7454 = BGL_CLASS_INDEX(BGl_rtl_ifnez00zzsaw_defsz00);
						BgL_arg2127z00_7453 = BgL_res3045z00_7454;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1161z00_7452), BgL_arg2127z00_7453);
				}
				return BgL_new1161z00_7452;
			}
		}

	}



/* &lambda2124 */
	BgL_rtl_ifnez00_bglt BGl_z62lambda2124z62zzsaw_defsz00(obj_t BgL_envz00_6541,
		obj_t BgL_loc1159z00_6542, obj_t BgL_then1160z00_6543)
	{
		{	/* SawMill/defs.scm 32 */
			{	/* SawMill/defs.scm 32 */
				BgL_rtl_ifnez00_bglt BgL_new1455z00_7456;

				{	/* SawMill/defs.scm 32 */
					BgL_rtl_ifnez00_bglt BgL_new1454z00_7457;

					BgL_new1454z00_7457 =
						((BgL_rtl_ifnez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifnez00_bgl))));
					{	/* SawMill/defs.scm 32 */
						long BgL_arg2125z00_7458;

						{	/* SawMill/defs.scm 32 */
							long BgL_res3044z00_7459;

							BgL_res3044z00_7459 =
								BGL_CLASS_INDEX(BGl_rtl_ifnez00zzsaw_defsz00);
							BgL_arg2125z00_7458 = BgL_res3044z00_7459;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1454z00_7457), BgL_arg2125z00_7458);
					}
					BgL_new1455z00_7456 = BgL_new1454z00_7457;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1455z00_7456)))->BgL_locz00) =
					((obj_t) BgL_loc1159z00_6542), BUNSPEC);
				((((BgL_rtl_ifnez00_bglt) COBJECT(BgL_new1455z00_7456))->BgL_thenz00) =
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_then1160z00_6543)),
					BUNSPEC);
				return BgL_new1455z00_7456;
			}
		}

	}



/* &lambda2133 */
	obj_t BGl_z62lambda2133z62zzsaw_defsz00(obj_t BgL_envz00_6544,
		obj_t BgL_oz00_6545, obj_t BgL_vz00_6546)
	{
		{	/* SawMill/defs.scm 32 */
			return
				((((BgL_rtl_ifnez00_bglt) COBJECT(
							((BgL_rtl_ifnez00_bglt) BgL_oz00_6545)))->BgL_thenz00) =
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_vz00_6546)), BUNSPEC);
		}

	}



/* &lambda2132 */
	BgL_blockz00_bglt BGl_z62lambda2132z62zzsaw_defsz00(obj_t BgL_envz00_6547,
		obj_t BgL_oz00_6548)
	{
		{	/* SawMill/defs.scm 32 */
			return
				(((BgL_rtl_ifnez00_bglt) COBJECT(
						((BgL_rtl_ifnez00_bglt) BgL_oz00_6548)))->BgL_thenz00);
		}

	}



/* &<@anonymous:2112> */
	obj_t BGl_z62zc3z04anonymousza32112ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6549,
		obj_t BgL_new1157z00_6550)
	{
		{	/* SawMill/defs.scm 31 */
			{
				BgL_rtl_ifeqz00_bglt BgL_auxz00_10911;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_ifeqz00_bglt) BgL_new1157z00_6550))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_blockz00_bglt BgL_auxz00_10915;

					{	/* SawMill/defs.scm 31 */
						obj_t BgL_classz00_7464;

						BgL_classz00_7464 = BGl_blockz00zzsaw_defsz00;
						{	/* SawMill/defs.scm 31 */
							obj_t BgL__ortest_1106z00_7465;

							BgL__ortest_1106z00_7465 = BGL_CLASS_NIL(BgL_classz00_7464);
							if (CBOOL(BgL__ortest_1106z00_7465))
								{	/* SawMill/defs.scm 31 */
									BgL_auxz00_10915 =
										((BgL_blockz00_bglt) BgL__ortest_1106z00_7465);
								}
							else
								{	/* SawMill/defs.scm 31 */
									BgL_auxz00_10915 =
										((BgL_blockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7464));
								}
						}
					}
					((((BgL_rtl_ifeqz00_bglt) COBJECT(
									((BgL_rtl_ifeqz00_bglt) BgL_new1157z00_6550)))->BgL_thenz00) =
						((BgL_blockz00_bglt) BgL_auxz00_10915), BUNSPEC);
				}
				BgL_auxz00_10911 = ((BgL_rtl_ifeqz00_bglt) BgL_new1157z00_6550);
				return ((obj_t) BgL_auxz00_10911);
			}
		}

	}



/* &lambda2110 */
	BgL_rtl_ifeqz00_bglt BGl_z62lambda2110z62zzsaw_defsz00(obj_t BgL_envz00_6551)
	{
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifeqz00_bglt BgL_new1156z00_7466;

				BgL_new1156z00_7466 =
					((BgL_rtl_ifeqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_ifeqz00_bgl))));
				{	/* SawMill/defs.scm 31 */
					long BgL_arg2111z00_7467;

					{	/* SawMill/defs.scm 31 */
						long BgL_res3043z00_7468;

						BgL_res3043z00_7468 = BGL_CLASS_INDEX(BGl_rtl_ifeqz00zzsaw_defsz00);
						BgL_arg2111z00_7467 = BgL_res3043z00_7468;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1156z00_7466), BgL_arg2111z00_7467);
				}
				return BgL_new1156z00_7466;
			}
		}

	}



/* &lambda2108 */
	BgL_rtl_ifeqz00_bglt BGl_z62lambda2108z62zzsaw_defsz00(obj_t BgL_envz00_6552,
		obj_t BgL_loc1154z00_6553, obj_t BgL_then1155z00_6554)
	{
		{	/* SawMill/defs.scm 31 */
			{	/* SawMill/defs.scm 31 */
				BgL_rtl_ifeqz00_bglt BgL_new1453z00_7470;

				{	/* SawMill/defs.scm 31 */
					BgL_rtl_ifeqz00_bglt BgL_new1452z00_7471;

					BgL_new1452z00_7471 =
						((BgL_rtl_ifeqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifeqz00_bgl))));
					{	/* SawMill/defs.scm 31 */
						long BgL_arg2109z00_7472;

						{	/* SawMill/defs.scm 31 */
							long BgL_res3042z00_7473;

							BgL_res3042z00_7473 =
								BGL_CLASS_INDEX(BGl_rtl_ifeqz00zzsaw_defsz00);
							BgL_arg2109z00_7472 = BgL_res3042z00_7473;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1452z00_7471), BgL_arg2109z00_7472);
					}
					BgL_new1453z00_7470 = BgL_new1452z00_7471;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1453z00_7470)))->BgL_locz00) =
					((obj_t) BgL_loc1154z00_6553), BUNSPEC);
				((((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_new1453z00_7470))->BgL_thenz00) =
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_then1155z00_6554)),
					BUNSPEC);
				return BgL_new1453z00_7470;
			}
		}

	}



/* &lambda2118 */
	obj_t BGl_z62lambda2118z62zzsaw_defsz00(obj_t BgL_envz00_6555,
		obj_t BgL_oz00_6556, obj_t BgL_vz00_6557)
	{
		{	/* SawMill/defs.scm 31 */
			return
				((((BgL_rtl_ifeqz00_bglt) COBJECT(
							((BgL_rtl_ifeqz00_bglt) BgL_oz00_6556)))->BgL_thenz00) =
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_vz00_6557)), BUNSPEC);
		}

	}



/* &lambda2117 */
	BgL_blockz00_bglt BGl_z62lambda2117z62zzsaw_defsz00(obj_t BgL_envz00_6558,
		obj_t BgL_oz00_6559)
	{
		{	/* SawMill/defs.scm 31 */
			return
				(((BgL_rtl_ifeqz00_bglt) COBJECT(
						((BgL_rtl_ifeqz00_bglt) BgL_oz00_6559)))->BgL_thenz00);
		}

	}



/* &<@anonymous:2096> */
	obj_t BGl_z62zc3z04anonymousza32096ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6560,
		obj_t BgL_new1152z00_6561)
	{
		{	/* SawMill/defs.scm 30 */
			{
				BgL_rtl_switchz00_bglt BgL_auxz00_10943;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_switchz00_bglt) BgL_new1152z00_6561))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10947;

					{	/* SawMill/defs.scm 30 */
						obj_t BgL_classz00_7478;

						BgL_classz00_7478 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 30 */
							obj_t BgL__ortest_1106z00_7479;

							BgL__ortest_1106z00_7479 = BGL_CLASS_NIL(BgL_classz00_7478);
							if (CBOOL(BgL__ortest_1106z00_7479))
								{	/* SawMill/defs.scm 30 */
									BgL_auxz00_10947 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7479);
								}
							else
								{	/* SawMill/defs.scm 30 */
									BgL_auxz00_10947 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7478));
								}
						}
					}
					((((BgL_rtl_selectz00_bglt) COBJECT(
									((BgL_rtl_selectz00_bglt)
										((BgL_rtl_switchz00_bglt) BgL_new1152z00_6561))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10947), BUNSPEC);
				}
				((((BgL_rtl_selectz00_bglt) COBJECT(
								((BgL_rtl_selectz00_bglt)
									((BgL_rtl_switchz00_bglt) BgL_new1152z00_6561))))->
						BgL_patternsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) COBJECT(((BgL_rtl_switchz00_bglt)
									BgL_new1152z00_6561)))->BgL_labelsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10943 = ((BgL_rtl_switchz00_bglt) BgL_new1152z00_6561);
				return ((obj_t) BgL_auxz00_10943);
			}
		}

	}



/* &lambda2094 */
	BgL_rtl_switchz00_bglt BGl_z62lambda2094z62zzsaw_defsz00(obj_t
		BgL_envz00_6562)
	{
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_switchz00_bglt BgL_new1151z00_7480;

				BgL_new1151z00_7480 =
					((BgL_rtl_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_switchz00_bgl))));
				{	/* SawMill/defs.scm 30 */
					long BgL_arg2095z00_7481;

					{	/* SawMill/defs.scm 30 */
						long BgL_res3041z00_7482;

						BgL_res3041z00_7482 =
							BGL_CLASS_INDEX(BGl_rtl_switchz00zzsaw_defsz00);
						BgL_arg2095z00_7481 = BgL_res3041z00_7482;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1151z00_7480), BgL_arg2095z00_7481);
				}
				return BgL_new1151z00_7480;
			}
		}

	}



/* &lambda2092 */
	BgL_rtl_switchz00_bglt BGl_z62lambda2092z62zzsaw_defsz00(obj_t
		BgL_envz00_6563, obj_t BgL_loc1147z00_6564, obj_t BgL_type1148z00_6565,
		obj_t BgL_patterns1149z00_6566, obj_t BgL_labels1150z00_6567)
	{
		{	/* SawMill/defs.scm 30 */
			{	/* SawMill/defs.scm 30 */
				BgL_rtl_switchz00_bglt BgL_new1451z00_7484;

				{	/* SawMill/defs.scm 30 */
					BgL_rtl_switchz00_bglt BgL_new1450z00_7485;

					BgL_new1450z00_7485 =
						((BgL_rtl_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_switchz00_bgl))));
					{	/* SawMill/defs.scm 30 */
						long BgL_arg2093z00_7486;

						{	/* SawMill/defs.scm 30 */
							long BgL_res3040z00_7487;

							BgL_res3040z00_7487 =
								BGL_CLASS_INDEX(BGl_rtl_switchz00zzsaw_defsz00);
							BgL_arg2093z00_7486 = BgL_res3040z00_7487;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1450z00_7485), BgL_arg2093z00_7486);
					}
					BgL_new1451z00_7484 = BgL_new1450z00_7485;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1451z00_7484)))->BgL_locz00) =
					((obj_t) BgL_loc1147z00_6564), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
									BgL_new1451z00_7484)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1148z00_6565)),
					BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
									BgL_new1451z00_7484)))->BgL_patternsz00) =
					((obj_t) BgL_patterns1149z00_6566), BUNSPEC);
				((((BgL_rtl_switchz00_bglt) COBJECT(BgL_new1451z00_7484))->
						BgL_labelsz00) = ((obj_t) BgL_labels1150z00_6567), BUNSPEC);
				return BgL_new1451z00_7484;
			}
		}

	}



/* &lambda2102 */
	obj_t BGl_z62lambda2102z62zzsaw_defsz00(obj_t BgL_envz00_6568,
		obj_t BgL_oz00_6569, obj_t BgL_vz00_6570)
	{
		{	/* SawMill/defs.scm 30 */
			return
				((((BgL_rtl_switchz00_bglt) COBJECT(
							((BgL_rtl_switchz00_bglt) BgL_oz00_6569)))->BgL_labelsz00) =
				((obj_t) BgL_vz00_6570), BUNSPEC);
		}

	}



/* &lambda2101 */
	obj_t BGl_z62lambda2101z62zzsaw_defsz00(obj_t BgL_envz00_6571,
		obj_t BgL_oz00_6572)
	{
		{	/* SawMill/defs.scm 30 */
			return
				(((BgL_rtl_switchz00_bglt) COBJECT(
						((BgL_rtl_switchz00_bglt) BgL_oz00_6572)))->BgL_labelsz00);
		}

	}



/* &<@anonymous:2076> */
	obj_t BGl_z62zc3z04anonymousza32076ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6573,
		obj_t BgL_new1145z00_6574)
	{
		{	/* SawMill/defs.scm 29 */
			{
				BgL_rtl_selectz00_bglt BgL_auxz00_10984;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_selectz00_bglt) BgL_new1145z00_6574))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10988;

					{	/* SawMill/defs.scm 29 */
						obj_t BgL_classz00_7491;

						BgL_classz00_7491 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 29 */
							obj_t BgL__ortest_1106z00_7492;

							BgL__ortest_1106z00_7492 = BGL_CLASS_NIL(BgL_classz00_7491);
							if (CBOOL(BgL__ortest_1106z00_7492))
								{	/* SawMill/defs.scm 29 */
									BgL_auxz00_10988 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7492);
								}
							else
								{	/* SawMill/defs.scm 29 */
									BgL_auxz00_10988 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7491));
								}
						}
					}
					((((BgL_rtl_selectz00_bglt) COBJECT(
									((BgL_rtl_selectz00_bglt) BgL_new1145z00_6574)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10988), BUNSPEC);
				}
				((((BgL_rtl_selectz00_bglt) COBJECT(
								((BgL_rtl_selectz00_bglt) BgL_new1145z00_6574)))->
						BgL_patternsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_10984 = ((BgL_rtl_selectz00_bglt) BgL_new1145z00_6574);
				return ((obj_t) BgL_auxz00_10984);
			}
		}

	}



/* &lambda2073 */
	BgL_rtl_selectz00_bglt BGl_z62lambda2073z62zzsaw_defsz00(obj_t
		BgL_envz00_6575)
	{
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_selectz00_bglt BgL_new1144z00_7493;

				BgL_new1144z00_7493 =
					((BgL_rtl_selectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_selectz00_bgl))));
				{	/* SawMill/defs.scm 29 */
					long BgL_arg2075z00_7494;

					{	/* SawMill/defs.scm 29 */
						long BgL_res3039z00_7495;

						BgL_res3039z00_7495 =
							BGL_CLASS_INDEX(BGl_rtl_selectz00zzsaw_defsz00);
						BgL_arg2075z00_7494 = BgL_res3039z00_7495;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1144z00_7493), BgL_arg2075z00_7494);
				}
				return BgL_new1144z00_7493;
			}
		}

	}



/* &lambda2071 */
	BgL_rtl_selectz00_bglt BGl_z62lambda2071z62zzsaw_defsz00(obj_t
		BgL_envz00_6576, obj_t BgL_loc1141z00_6577, obj_t BgL_type1142z00_6578,
		obj_t BgL_patterns1143z00_6579)
	{
		{	/* SawMill/defs.scm 29 */
			{	/* SawMill/defs.scm 29 */
				BgL_rtl_selectz00_bglt BgL_new1449z00_7497;

				{	/* SawMill/defs.scm 29 */
					BgL_rtl_selectz00_bglt BgL_new1448z00_7498;

					BgL_new1448z00_7498 =
						((BgL_rtl_selectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_selectz00_bgl))));
					{	/* SawMill/defs.scm 29 */
						long BgL_arg2072z00_7499;

						{	/* SawMill/defs.scm 29 */
							long BgL_res3038z00_7500;

							BgL_res3038z00_7500 =
								BGL_CLASS_INDEX(BGl_rtl_selectz00zzsaw_defsz00);
							BgL_arg2072z00_7499 = BgL_res3038z00_7500;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1448z00_7498), BgL_arg2072z00_7499);
					}
					BgL_new1449z00_7497 = BgL_new1448z00_7498;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1449z00_7497)))->BgL_locz00) =
					((obj_t) BgL_loc1141z00_6577), BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1449z00_7497))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1142z00_6578)),
					BUNSPEC);
				((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1449z00_7497))->
						BgL_patternsz00) = ((obj_t) BgL_patterns1143z00_6579), BUNSPEC);
				return BgL_new1449z00_7497;
			}
		}

	}



/* &lambda2086 */
	obj_t BGl_z62lambda2086z62zzsaw_defsz00(obj_t BgL_envz00_6580,
		obj_t BgL_oz00_6581, obj_t BgL_vz00_6582)
	{
		{	/* SawMill/defs.scm 29 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(
							((BgL_rtl_selectz00_bglt) BgL_oz00_6581)))->BgL_patternsz00) =
				((obj_t) BgL_vz00_6582), BUNSPEC);
		}

	}



/* &lambda2085 */
	obj_t BGl_z62lambda2085z62zzsaw_defsz00(obj_t BgL_envz00_6583,
		obj_t BgL_oz00_6584)
	{
		{	/* SawMill/defs.scm 29 */
			return
				(((BgL_rtl_selectz00_bglt) COBJECT(
						((BgL_rtl_selectz00_bglt) BgL_oz00_6584)))->BgL_patternsz00);
		}

	}



/* &lambda2081 */
	obj_t BGl_z62lambda2081z62zzsaw_defsz00(obj_t BgL_envz00_6585,
		obj_t BgL_oz00_6586, obj_t BgL_vz00_6587)
	{
		{	/* SawMill/defs.scm 29 */
			return
				((((BgL_rtl_selectz00_bglt) COBJECT(
							((BgL_rtl_selectz00_bglt) BgL_oz00_6586)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6587)), BUNSPEC);
		}

	}



/* &lambda2080 */
	BgL_typez00_bglt BGl_z62lambda2080z62zzsaw_defsz00(obj_t BgL_envz00_6588,
		obj_t BgL_oz00_6589)
	{
		{	/* SawMill/defs.scm 29 */
			return
				(((BgL_rtl_selectz00_bglt) COBJECT(
						((BgL_rtl_selectz00_bglt) BgL_oz00_6589)))->BgL_typez00);
		}

	}



/* &<@anonymous:2064> */
	obj_t BGl_z62zc3z04anonymousza32064ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6590,
		obj_t BgL_new1139z00_6591)
	{
		{	/* SawMill/defs.scm 28 */
			{
				BgL_rtl_ifz00_bglt BgL_auxz00_11023;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_ifz00_bglt) BgL_new1139z00_6591))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11023 = ((BgL_rtl_ifz00_bglt) BgL_new1139z00_6591);
				return ((obj_t) BgL_auxz00_11023);
			}
		}

	}



/* &lambda2062 */
	BgL_rtl_ifz00_bglt BGl_z62lambda2062z62zzsaw_defsz00(obj_t BgL_envz00_6592)
	{
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_ifz00_bglt BgL_new1138z00_7507;

				BgL_new1138z00_7507 =
					((BgL_rtl_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_ifz00_bgl))));
				{	/* SawMill/defs.scm 28 */
					long BgL_arg2063z00_7508;

					{	/* SawMill/defs.scm 28 */
						long BgL_res3037z00_7509;

						BgL_res3037z00_7509 = BGL_CLASS_INDEX(BGl_rtl_ifz00zzsaw_defsz00);
						BgL_arg2063z00_7508 = BgL_res3037z00_7509;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1138z00_7507), BgL_arg2063z00_7508);
				}
				return BgL_new1138z00_7507;
			}
		}

	}



/* &lambda2060 */
	BgL_rtl_ifz00_bglt BGl_z62lambda2060z62zzsaw_defsz00(obj_t BgL_envz00_6593,
		obj_t BgL_loc1137z00_6594)
	{
		{	/* SawMill/defs.scm 28 */
			{	/* SawMill/defs.scm 28 */
				BgL_rtl_ifz00_bglt BgL_new1447z00_7510;

				{	/* SawMill/defs.scm 28 */
					BgL_rtl_ifz00_bglt BgL_new1446z00_7511;

					BgL_new1446z00_7511 =
						((BgL_rtl_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_ifz00_bgl))));
					{	/* SawMill/defs.scm 28 */
						long BgL_arg2061z00_7512;

						{	/* SawMill/defs.scm 28 */
							long BgL_res3036z00_7513;

							BgL_res3036z00_7513 = BGL_CLASS_INDEX(BGl_rtl_ifz00zzsaw_defsz00);
							BgL_arg2061z00_7512 = BgL_res3036z00_7513;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1446z00_7511), BgL_arg2061z00_7512);
					}
					BgL_new1447z00_7510 = BgL_new1446z00_7511;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1447z00_7510)))->BgL_locz00) =
					((obj_t) BgL_loc1137z00_6594), BUNSPEC);
				return BgL_new1447z00_7510;
			}
		}

	}



/* &<@anonymous:2052> */
	obj_t BGl_z62zc3z04anonymousza32052ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6595,
		obj_t BgL_new1135z00_6596)
	{
		{	/* SawMill/defs.scm 27 */
			{
				BgL_rtl_notseqz00_bglt BgL_auxz00_11039;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_notseqz00_bglt) BgL_new1135z00_6596))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11039 = ((BgL_rtl_notseqz00_bglt) BgL_new1135z00_6596);
				return ((obj_t) BgL_auxz00_11039);
			}
		}

	}



/* &lambda2050 */
	BgL_rtl_notseqz00_bglt BGl_z62lambda2050z62zzsaw_defsz00(obj_t
		BgL_envz00_6597)
	{
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_notseqz00_bglt BgL_new1134z00_7515;

				BgL_new1134z00_7515 =
					((BgL_rtl_notseqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_notseqz00_bgl))));
				{	/* SawMill/defs.scm 27 */
					long BgL_arg2051z00_7516;

					{	/* SawMill/defs.scm 27 */
						long BgL_res3035z00_7517;

						BgL_res3035z00_7517 =
							BGL_CLASS_INDEX(BGl_rtl_notseqz00zzsaw_defsz00);
						BgL_arg2051z00_7516 = BgL_res3035z00_7517;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1134z00_7515), BgL_arg2051z00_7516);
				}
				return BgL_new1134z00_7515;
			}
		}

	}



/* &lambda2048 */
	BgL_rtl_notseqz00_bglt BGl_z62lambda2048z62zzsaw_defsz00(obj_t
		BgL_envz00_6598, obj_t BgL_loc1133z00_6599)
	{
		{	/* SawMill/defs.scm 27 */
			{	/* SawMill/defs.scm 27 */
				BgL_rtl_notseqz00_bglt BgL_new1445z00_7518;

				{	/* SawMill/defs.scm 27 */
					BgL_rtl_notseqz00_bglt BgL_new1444z00_7519;

					BgL_new1444z00_7519 =
						((BgL_rtl_notseqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_notseqz00_bgl))));
					{	/* SawMill/defs.scm 27 */
						long BgL_arg2049z00_7520;

						{	/* SawMill/defs.scm 27 */
							long BgL_res3034z00_7521;

							BgL_res3034z00_7521 =
								BGL_CLASS_INDEX(BGl_rtl_notseqz00zzsaw_defsz00);
							BgL_arg2049z00_7520 = BgL_res3034z00_7521;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1444z00_7519), BgL_arg2049z00_7520);
					}
					BgL_new1445z00_7518 = BgL_new1444z00_7519;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1445z00_7518)))->BgL_locz00) =
					((obj_t) BgL_loc1133z00_6599), BUNSPEC);
				return BgL_new1445z00_7518;
			}
		}

	}



/* &<@anonymous:2041> */
	obj_t BGl_z62zc3z04anonymousza32041ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6600,
		obj_t BgL_new1131z00_6601)
	{
		{	/* SawMill/defs.scm 25 */
			{
				BgL_rtl_failz00_bglt BgL_auxz00_11055;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_failz00_bglt) BgL_new1131z00_6601))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11055 = ((BgL_rtl_failz00_bglt) BgL_new1131z00_6601);
				return ((obj_t) BgL_auxz00_11055);
			}
		}

	}



/* &lambda2039 */
	BgL_rtl_failz00_bglt BGl_z62lambda2039z62zzsaw_defsz00(obj_t BgL_envz00_6602)
	{
		{	/* SawMill/defs.scm 25 */
			{	/* SawMill/defs.scm 25 */
				BgL_rtl_failz00_bglt BgL_new1130z00_7523;

				BgL_new1130z00_7523 =
					((BgL_rtl_failz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_failz00_bgl))));
				{	/* SawMill/defs.scm 25 */
					long BgL_arg2040z00_7524;

					{	/* SawMill/defs.scm 25 */
						long BgL_res3033z00_7525;

						BgL_res3033z00_7525 = BGL_CLASS_INDEX(BGl_rtl_failz00zzsaw_defsz00);
						BgL_arg2040z00_7524 = BgL_res3033z00_7525;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1130z00_7523), BgL_arg2040z00_7524);
				}
				return BgL_new1130z00_7523;
			}
		}

	}



/* &lambda2037 */
	BgL_rtl_failz00_bglt BGl_z62lambda2037z62zzsaw_defsz00(obj_t BgL_envz00_6603,
		obj_t BgL_loc1128z00_6604)
	{
		{	/* SawMill/defs.scm 25 */
			{	/* SawMill/defs.scm 25 */
				BgL_rtl_failz00_bglt BgL_new1443z00_7526;

				{	/* SawMill/defs.scm 25 */
					BgL_rtl_failz00_bglt BgL_new1442z00_7527;

					BgL_new1442z00_7527 =
						((BgL_rtl_failz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_failz00_bgl))));
					{	/* SawMill/defs.scm 25 */
						long BgL_arg2038z00_7528;

						{	/* SawMill/defs.scm 25 */
							long BgL_res3032z00_7529;

							BgL_res3032z00_7529 =
								BGL_CLASS_INDEX(BGl_rtl_failz00zzsaw_defsz00);
							BgL_arg2038z00_7528 = BgL_res3032z00_7529;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1442z00_7527), BgL_arg2038z00_7528);
					}
					BgL_new1443z00_7526 = BgL_new1442z00_7527;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1443z00_7526)))->BgL_locz00) =
					((obj_t) BgL_loc1128z00_6604), BUNSPEC);
				return BgL_new1443z00_7526;
			}
		}

	}



/* &<@anonymous:2029> */
	obj_t BGl_z62zc3z04anonymousza32029ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6605,
		obj_t BgL_new1126z00_6606)
	{
		{	/* SawMill/defs.scm 24 */
			{
				BgL_rtl_jumpexitz00_bglt BgL_auxz00_11071;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_jumpexitz00_bglt) BgL_new1126z00_6606))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11071 = ((BgL_rtl_jumpexitz00_bglt) BgL_new1126z00_6606);
				return ((obj_t) BgL_auxz00_11071);
			}
		}

	}



/* &lambda2027 */
	BgL_rtl_jumpexitz00_bglt BGl_z62lambda2027z62zzsaw_defsz00(obj_t
		BgL_envz00_6607)
	{
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_jumpexitz00_bglt BgL_new1125z00_7531;

				BgL_new1125z00_7531 =
					((BgL_rtl_jumpexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_jumpexitz00_bgl))));
				{	/* SawMill/defs.scm 24 */
					long BgL_arg2028z00_7532;

					{	/* SawMill/defs.scm 24 */
						long BgL_res3031z00_7533;

						BgL_res3031z00_7533 =
							BGL_CLASS_INDEX(BGl_rtl_jumpexitz00zzsaw_defsz00);
						BgL_arg2028z00_7532 = BgL_res3031z00_7533;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1125z00_7531), BgL_arg2028z00_7532);
				}
				return BgL_new1125z00_7531;
			}
		}

	}



/* &lambda2023 */
	BgL_rtl_jumpexitz00_bglt BGl_z62lambda2023z62zzsaw_defsz00(obj_t
		BgL_envz00_6608, obj_t BgL_loc1124z00_6609)
	{
		{	/* SawMill/defs.scm 24 */
			{	/* SawMill/defs.scm 24 */
				BgL_rtl_jumpexitz00_bglt BgL_new1441z00_7534;

				{	/* SawMill/defs.scm 24 */
					BgL_rtl_jumpexitz00_bglt BgL_new1440z00_7535;

					BgL_new1440z00_7535 =
						((BgL_rtl_jumpexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_jumpexitz00_bgl))));
					{	/* SawMill/defs.scm 24 */
						long BgL_arg2026z00_7536;

						{	/* SawMill/defs.scm 24 */
							long BgL_res3030z00_7537;

							BgL_res3030z00_7537 =
								BGL_CLASS_INDEX(BGl_rtl_jumpexitz00zzsaw_defsz00);
							BgL_arg2026z00_7536 = BgL_res3030z00_7537;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1440z00_7535), BgL_arg2026z00_7536);
					}
					BgL_new1441z00_7534 = BgL_new1440z00_7535;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1441z00_7534)))->BgL_locz00) =
					((obj_t) BgL_loc1124z00_6609), BUNSPEC);
				return BgL_new1441z00_7534;
			}
		}

	}



/* &<@anonymous:2011> */
	obj_t BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6610,
		obj_t BgL_new1122z00_6611)
	{
		{	/* SawMill/defs.scm 23 */
			{
				BgL_rtl_returnz00_bglt BgL_auxz00_11087;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_returnz00_bglt) BgL_new1122z00_6611))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_11091;

					{	/* SawMill/defs.scm 23 */
						obj_t BgL_classz00_7539;

						BgL_classz00_7539 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 23 */
							obj_t BgL__ortest_1106z00_7540;

							BgL__ortest_1106z00_7540 = BGL_CLASS_NIL(BgL_classz00_7539);
							if (CBOOL(BgL__ortest_1106z00_7540))
								{	/* SawMill/defs.scm 23 */
									BgL_auxz00_11091 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7540);
								}
							else
								{	/* SawMill/defs.scm 23 */
									BgL_auxz00_11091 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7539));
								}
						}
					}
					((((BgL_rtl_returnz00_bglt) COBJECT(
									((BgL_rtl_returnz00_bglt) BgL_new1122z00_6611)))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_11091), BUNSPEC);
				}
				BgL_auxz00_11087 = ((BgL_rtl_returnz00_bglt) BgL_new1122z00_6611);
				return ((obj_t) BgL_auxz00_11087);
			}
		}

	}



/* &lambda2008 */
	BgL_rtl_returnz00_bglt BGl_z62lambda2008z62zzsaw_defsz00(obj_t
		BgL_envz00_6612)
	{
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_returnz00_bglt BgL_new1121z00_7541;

				BgL_new1121z00_7541 =
					((BgL_rtl_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_returnz00_bgl))));
				{	/* SawMill/defs.scm 23 */
					long BgL_arg2010z00_7542;

					{	/* SawMill/defs.scm 23 */
						long BgL_res3029z00_7543;

						BgL_res3029z00_7543 =
							BGL_CLASS_INDEX(BGl_rtl_returnz00zzsaw_defsz00);
						BgL_arg2010z00_7542 = BgL_res3029z00_7543;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1121z00_7541), BgL_arg2010z00_7542);
				}
				return BgL_new1121z00_7541;
			}
		}

	}



/* &lambda2006 */
	BgL_rtl_returnz00_bglt BGl_z62lambda2006z62zzsaw_defsz00(obj_t
		BgL_envz00_6613, obj_t BgL_loc1119z00_6614, obj_t BgL_type1120z00_6615)
	{
		{	/* SawMill/defs.scm 23 */
			{	/* SawMill/defs.scm 23 */
				BgL_rtl_returnz00_bglt BgL_new1439z00_7545;

				{	/* SawMill/defs.scm 23 */
					BgL_rtl_returnz00_bglt BgL_new1438z00_7546;

					BgL_new1438z00_7546 =
						((BgL_rtl_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_returnz00_bgl))));
					{	/* SawMill/defs.scm 23 */
						long BgL_arg2007z00_7547;

						{	/* SawMill/defs.scm 23 */
							long BgL_res3028z00_7548;

							BgL_res3028z00_7548 =
								BGL_CLASS_INDEX(BGl_rtl_returnz00zzsaw_defsz00);
							BgL_arg2007z00_7547 = BgL_res3028z00_7548;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1438z00_7546), BgL_arg2007z00_7547);
					}
					BgL_new1439z00_7545 = BgL_new1438z00_7546;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1439z00_7545)))->BgL_locz00) =
					((obj_t) BgL_loc1119z00_6614), BUNSPEC);
				((((BgL_rtl_returnz00_bglt) COBJECT(BgL_new1439z00_7545))->
						BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1120z00_6615)),
					BUNSPEC);
				return BgL_new1439z00_7545;
			}
		}

	}



/* &lambda2016 */
	obj_t BGl_z62lambda2016z62zzsaw_defsz00(obj_t BgL_envz00_6616,
		obj_t BgL_oz00_6617, obj_t BgL_vz00_6618)
	{
		{	/* SawMill/defs.scm 23 */
			return
				((((BgL_rtl_returnz00_bglt) COBJECT(
							((BgL_rtl_returnz00_bglt) BgL_oz00_6617)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6618)), BUNSPEC);
		}

	}



/* &lambda2015 */
	BgL_typez00_bglt BGl_z62lambda2015z62zzsaw_defsz00(obj_t BgL_envz00_6619,
		obj_t BgL_oz00_6620)
	{
		{	/* SawMill/defs.scm 23 */
			return
				(((BgL_rtl_returnz00_bglt) COBJECT(
						((BgL_rtl_returnz00_bglt) BgL_oz00_6620)))->BgL_typez00);
		}

	}



/* &<@anonymous:2000> */
	obj_t BGl_z62zc3z04anonymousza32000ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6621,
		obj_t BgL_new1117z00_6622)
	{
		{	/* SawMill/defs.scm 22 */
			{
				BgL_rtl_lastz00_bglt BgL_auxz00_11119;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt)
									((BgL_rtl_lastz00_bglt) BgL_new1117z00_6622))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11119 = ((BgL_rtl_lastz00_bglt) BgL_new1117z00_6622);
				return ((obj_t) BgL_auxz00_11119);
			}
		}

	}



/* &lambda1998 */
	BgL_rtl_lastz00_bglt BGl_z62lambda1998z62zzsaw_defsz00(obj_t BgL_envz00_6623)
	{
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_lastz00_bglt BgL_new1116z00_7553;

				BgL_new1116z00_7553 =
					((BgL_rtl_lastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_lastz00_bgl))));
				{	/* SawMill/defs.scm 22 */
					long BgL_arg1999z00_7554;

					{	/* SawMill/defs.scm 22 */
						long BgL_res3027z00_7555;

						BgL_res3027z00_7555 = BGL_CLASS_INDEX(BGl_rtl_lastz00zzsaw_defsz00);
						BgL_arg1999z00_7554 = BgL_res3027z00_7555;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1116z00_7553), BgL_arg1999z00_7554);
				}
				return BgL_new1116z00_7553;
			}
		}

	}



/* &lambda1996 */
	BgL_rtl_lastz00_bglt BGl_z62lambda1996z62zzsaw_defsz00(obj_t BgL_envz00_6624,
		obj_t BgL_loc1114z00_6625)
	{
		{	/* SawMill/defs.scm 22 */
			{	/* SawMill/defs.scm 22 */
				BgL_rtl_lastz00_bglt BgL_new1437z00_7556;

				{	/* SawMill/defs.scm 22 */
					BgL_rtl_lastz00_bglt BgL_new1436z00_7557;

					BgL_new1436z00_7557 =
						((BgL_rtl_lastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_lastz00_bgl))));
					{	/* SawMill/defs.scm 22 */
						long BgL_arg1997z00_7558;

						{	/* SawMill/defs.scm 22 */
							long BgL_res3026z00_7559;

							BgL_res3026z00_7559 =
								BGL_CLASS_INDEX(BGl_rtl_lastz00zzsaw_defsz00);
							BgL_arg1997z00_7558 = BgL_res3026z00_7559;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1436z00_7557), BgL_arg1997z00_7558);
					}
					BgL_new1437z00_7556 = BgL_new1436z00_7557;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1437z00_7556)))->BgL_locz00) =
					((obj_t) BgL_loc1114z00_6625), BUNSPEC);
				return BgL_new1437z00_7556;
			}
		}

	}



/* &<@anonymous:1982> */
	obj_t BGl_z62zc3z04anonymousza31982ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6626,
		obj_t BgL_new1112z00_6627)
	{
		{	/* SawMill/defs.scm 20 */
			{
				BgL_rtl_funz00_bglt BgL_auxz00_11135;

				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1112z00_6627)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11135 = ((BgL_rtl_funz00_bglt) BgL_new1112z00_6627);
				return ((obj_t) BgL_auxz00_11135);
			}
		}

	}



/* &lambda1980 */
	BgL_rtl_funz00_bglt BGl_z62lambda1980z62zzsaw_defsz00(obj_t BgL_envz00_6628)
	{
		{	/* SawMill/defs.scm 20 */
			{	/* SawMill/defs.scm 20 */
				BgL_rtl_funz00_bglt BgL_new1111z00_7561;

				BgL_new1111z00_7561 =
					((BgL_rtl_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_funz00_bgl))));
				{	/* SawMill/defs.scm 20 */
					long BgL_arg1981z00_7562;

					{	/* SawMill/defs.scm 20 */
						long BgL_res3025z00_7563;

						BgL_res3025z00_7563 = BGL_CLASS_INDEX(BGl_rtl_funz00zzsaw_defsz00);
						BgL_arg1981z00_7562 = BgL_res3025z00_7563;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1111z00_7561), BgL_arg1981z00_7562);
				}
				return BgL_new1111z00_7561;
			}
		}

	}



/* &lambda1977 */
	BgL_rtl_funz00_bglt BGl_z62lambda1977z62zzsaw_defsz00(obj_t BgL_envz00_6629,
		obj_t BgL_loc1110z00_6630)
	{
		{	/* SawMill/defs.scm 20 */
			{	/* SawMill/defs.scm 20 */
				BgL_rtl_funz00_bglt BgL_new1435z00_7564;

				{	/* SawMill/defs.scm 20 */
					BgL_rtl_funz00_bglt BgL_new1434z00_7565;

					BgL_new1434z00_7565 =
						((BgL_rtl_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_funz00_bgl))));
					{	/* SawMill/defs.scm 20 */
						long BgL_arg1979z00_7566;

						{	/* SawMill/defs.scm 20 */
							long BgL_res3024z00_7567;

							BgL_res3024z00_7567 =
								BGL_CLASS_INDEX(BGl_rtl_funz00zzsaw_defsz00);
							BgL_arg1979z00_7566 = BgL_res3024z00_7567;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1434z00_7565), BgL_arg1979z00_7566);
					}
					BgL_new1435z00_7564 = BgL_new1434z00_7565;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(BgL_new1435z00_7564))->BgL_locz00) =
					((obj_t) BgL_loc1110z00_6630), BUNSPEC);
				return BgL_new1435z00_7564;
			}
		}

	}



/* &<@anonymous:1989> */
	obj_t BGl_z62zc3z04anonymousza31989ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6631)
	{
		{	/* SawMill/defs.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1988 */
	obj_t BGl_z62lambda1988z62zzsaw_defsz00(obj_t BgL_envz00_6632,
		obj_t BgL_oz00_6633, obj_t BgL_vz00_6634)
	{
		{	/* SawMill/defs.scm 20 */
			return
				((((BgL_rtl_funz00_bglt) COBJECT(
							((BgL_rtl_funz00_bglt) BgL_oz00_6633)))->BgL_locz00) =
				((obj_t) BgL_vz00_6634), BUNSPEC);
		}

	}



/* &lambda1987 */
	obj_t BGl_z62lambda1987z62zzsaw_defsz00(obj_t BgL_envz00_6635,
		obj_t BgL_oz00_6636)
	{
		{	/* SawMill/defs.scm 20 */
			return
				(((BgL_rtl_funz00_bglt) COBJECT(
						((BgL_rtl_funz00_bglt) BgL_oz00_6636)))->BgL_locz00);
		}

	}



/* &<@anonymous:1933> */
	obj_t BGl_z62zc3z04anonymousza31933ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6637,
		obj_t BgL_new1108z00_6638)
	{
		{	/* SawMill/defs.scm 12 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_11154;

				{
					BgL_typez00_bglt BgL_auxz00_11155;

					{	/* SawMill/defs.scm 12 */
						obj_t BgL_classz00_7571;

						BgL_classz00_7571 = BGl_typez00zztype_typez00;
						{	/* SawMill/defs.scm 12 */
							obj_t BgL__ortest_1106z00_7572;

							BgL__ortest_1106z00_7572 = BGL_CLASS_NIL(BgL_classz00_7571);
							if (CBOOL(BgL__ortest_1106z00_7572))
								{	/* SawMill/defs.scm 12 */
									BgL_auxz00_11155 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_7572);
								}
							else
								{	/* SawMill/defs.scm 12 */
									BgL_auxz00_11155 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_7571));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_new1108z00_6638)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_11155), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1108z00_6638)))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1108z00_6638)))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1108z00_6638)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1108z00_6638)))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1108z00_6638)))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_11154 = ((BgL_rtl_regz00_bglt) BgL_new1108z00_6638);
				return ((obj_t) BgL_auxz00_11154);
			}
		}

	}



/* &lambda1931 */
	BgL_rtl_regz00_bglt BGl_z62lambda1931z62zzsaw_defsz00(obj_t BgL_envz00_6639)
	{
		{	/* SawMill/defs.scm 12 */
			{	/* SawMill/defs.scm 12 */
				BgL_rtl_regz00_bglt BgL_new1107z00_7573;

				BgL_new1107z00_7573 =
					((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_regz00_bgl))));
				{	/* SawMill/defs.scm 12 */
					long BgL_arg1932z00_7574;

					{	/* SawMill/defs.scm 12 */
						long BgL_res3023z00_7575;

						BgL_res3023z00_7575 = BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
						BgL_arg1932z00_7574 = BgL_res3023z00_7575;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1107z00_7573), BgL_arg1932z00_7574);
				}
				{	/* SawMill/defs.scm 12 */
					BgL_objectz00_bglt BgL_tmpz00_11180;

					BgL_tmpz00_11180 = ((BgL_objectz00_bglt) BgL_new1107z00_7573);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11180, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1107z00_7573);
				return BgL_new1107z00_7573;
			}
		}

	}



/* &lambda1929 */
	BgL_rtl_regz00_bglt BGl_z62lambda1929z62zzsaw_defsz00(obj_t BgL_envz00_6640,
		obj_t BgL_type1101z00_6641, obj_t BgL_var1102z00_6642,
		obj_t BgL_onexprzf31103zf3_6643, obj_t BgL_name1104z00_6644,
		obj_t BgL_key1105z00_6645, obj_t BgL_hardware1106z00_6646)
	{
		{	/* SawMill/defs.scm 12 */
			{	/* SawMill/defs.scm 12 */
				BgL_rtl_regz00_bglt BgL_new1433z00_7577;

				{	/* SawMill/defs.scm 12 */
					BgL_rtl_regz00_bglt BgL_new1432z00_7578;

					BgL_new1432z00_7578 =
						((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regz00_bgl))));
					{	/* SawMill/defs.scm 12 */
						long BgL_arg1930z00_7579;

						{	/* SawMill/defs.scm 12 */
							long BgL_res3022z00_7580;

							BgL_res3022z00_7580 =
								BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
							BgL_arg1930z00_7579 = BgL_res3022z00_7580;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1432z00_7578), BgL_arg1930z00_7579);
					}
					{	/* SawMill/defs.scm 12 */
						BgL_objectz00_bglt BgL_tmpz00_11188;

						BgL_tmpz00_11188 = ((BgL_objectz00_bglt) BgL_new1432z00_7578);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11188, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1432z00_7578);
					BgL_new1433z00_7577 = BgL_new1432z00_7578;
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1101z00_6641)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->BgL_varz00) =
					((obj_t) BgL_var1102z00_6642), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->
						BgL_onexprzf3zf3) = ((obj_t) BgL_onexprzf31103zf3_6643), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->BgL_namez00) =
					((obj_t) BgL_name1104z00_6644), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->BgL_keyz00) =
					((obj_t) BgL_key1105z00_6645), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1433z00_7577))->
						BgL_hardwarez00) = ((obj_t) BgL_hardware1106z00_6646), BUNSPEC);
				return BgL_new1433z00_7577;
			}
		}

	}



/* &<@anonymous:1971> */
	obj_t BGl_z62zc3z04anonymousza31971ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6647)
	{
		{	/* SawMill/defs.scm 12 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1970 */
	obj_t BGl_z62lambda1970z62zzsaw_defsz00(obj_t BgL_envz00_6648,
		obj_t BgL_oz00_6649, obj_t BgL_vz00_6650)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6649)))->BgL_hardwarez00) =
				((obj_t) BgL_vz00_6650), BUNSPEC);
		}

	}



/* &lambda1969 */
	obj_t BGl_z62lambda1969z62zzsaw_defsz00(obj_t BgL_envz00_6651,
		obj_t BgL_oz00_6652)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6652)))->BgL_hardwarez00);
		}

	}



/* &<@anonymous:1964> */
	obj_t BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6653)
	{
		{	/* SawMill/defs.scm 12 */
			{	/* SawMill/defs.scm 17 */

				{	/* SawMill/defs.scm 17 */

					return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
				}
			}
		}

	}



/* &lambda1963 */
	obj_t BGl_z62lambda1963z62zzsaw_defsz00(obj_t BgL_envz00_6654,
		obj_t BgL_oz00_6655, obj_t BgL_vz00_6656)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6655)))->BgL_keyz00) =
				((obj_t) BgL_vz00_6656), BUNSPEC);
		}

	}



/* &lambda1962 */
	obj_t BGl_z62lambda1962z62zzsaw_defsz00(obj_t BgL_envz00_6657,
		obj_t BgL_oz00_6658)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6658)))->BgL_keyz00);
		}

	}



/* &<@anonymous:1957> */
	obj_t BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6659)
	{
		{	/* SawMill/defs.scm 12 */
			{	/* SawMill/defs.scm 16 */

				{	/* SawMill/defs.scm 16 */

					return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
				}
			}
		}

	}



/* &lambda1956 */
	obj_t BGl_z62lambda1956z62zzsaw_defsz00(obj_t BgL_envz00_6660,
		obj_t BgL_oz00_6661, obj_t BgL_vz00_6662)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6661)))->BgL_namez00) =
				((obj_t) BgL_vz00_6662), BUNSPEC);
		}

	}



/* &lambda1955 */
	obj_t BGl_z62lambda1955z62zzsaw_defsz00(obj_t BgL_envz00_6663,
		obj_t BgL_oz00_6664)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6664)))->BgL_namez00);
		}

	}



/* &<@anonymous:1950> */
	obj_t BGl_z62zc3z04anonymousza31950ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6665)
	{
		{	/* SawMill/defs.scm 12 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1949 */
	obj_t BGl_z62lambda1949z62zzsaw_defsz00(obj_t BgL_envz00_6666,
		obj_t BgL_oz00_6667, obj_t BgL_vz00_6668)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6667)))->BgL_onexprzf3zf3) =
				((obj_t) BgL_vz00_6668), BUNSPEC);
		}

	}



/* &lambda1948 */
	obj_t BGl_z62lambda1948z62zzsaw_defsz00(obj_t BgL_envz00_6669,
		obj_t BgL_oz00_6670)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6670)))->BgL_onexprzf3zf3);
		}

	}



/* &lambda1943 */
	obj_t BGl_z62lambda1943z62zzsaw_defsz00(obj_t BgL_envz00_6671,
		obj_t BgL_oz00_6672, obj_t BgL_vz00_6673)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6672)))->BgL_varz00) =
				((obj_t) BgL_vz00_6673), BUNSPEC);
		}

	}



/* &lambda1942 */
	obj_t BGl_z62lambda1942z62zzsaw_defsz00(obj_t BgL_envz00_6674,
		obj_t BgL_oz00_6675)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6675)))->BgL_varz00);
		}

	}



/* &lambda1938 */
	obj_t BGl_z62lambda1938z62zzsaw_defsz00(obj_t BgL_envz00_6676,
		obj_t BgL_oz00_6677, obj_t BgL_vz00_6678)
	{
		{	/* SawMill/defs.scm 12 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_6677)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_6678)), BUNSPEC);
		}

	}



/* &lambda1937 */
	BgL_typez00_bglt BGl_z62lambda1937z62zzsaw_defsz00(obj_t BgL_envz00_6679,
		obj_t BgL_oz00_6680)
	{
		{	/* SawMill/defs.scm 12 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_6680)))->BgL_typez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_proc3410z00zzsaw_defsz00, BFALSE, BGl_string3411z00zzsaw_defsz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_proc3412z00zzsaw_defsz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string3413z00zzsaw_defsz00);
		}

	}



/* &dump-fun1757 */
	obj_t BGl_z62dumpzd2fun1757zb0zzsaw_defsz00(obj_t BgL_envz00_6683,
		obj_t BgL_oz00_6684, obj_t BgL_destz00_6685, obj_t BgL_argsz00_6686,
		obj_t BgL_pz00_6687, obj_t BgL_mz00_6688)
	{
		{	/* SawMill/defs.scm 293 */
			return BUNSPEC;
		}

	}



/* &dump1749 */
	obj_t BGl_z62dump1749z62zzsaw_defsz00(obj_t BgL_envz00_6689,
		obj_t BgL_oz00_6690, obj_t BgL_pz00_6691, obj_t BgL_mz00_6692)
	{
		{	/* SawMill/defs.scm 180 */
			{	/* SawMill/defs.scm 182 */
				int BgL_mz00_7596;

				BgL_mz00_7596 = CINT(BgL_mz00_6692);
				{	/* SawMill/defs.scm 182 */
					bool_t BgL_test4163z00_11231;

					if (STRINGP(BgL_oz00_6690))
						{	/* SawMill/defs.scm 182 */
							BgL_test4163z00_11231 = ((bool_t) 1);
						}
					else
						{	/* SawMill/defs.scm 182 */
							if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_oz00_6690))
								{	/* SawMill/defs.scm 182 */
									BgL_test4163z00_11231 = ((bool_t) 1);
								}
							else
								{	/* SawMill/defs.scm 182 */
									BgL_test4163z00_11231 = SYMBOLP(BgL_oz00_6690);
								}
						}
					if (BgL_test4163z00_11231)
						{	/* SawMill/defs.scm 182 */
							return bgl_display_obj(BgL_oz00_6690, ((obj_t) BgL_pz00_6691));
						}
					else
						{	/* SawMill/defs.scm 182 */
							if (PAIRP(BgL_oz00_6690))
								{
									obj_t BgL_l1635z00_7598;

									{	/* SawMill/defs.scm 185 */
										bool_t BgL_tmpz00_11241;

										BgL_l1635z00_7598 = BgL_oz00_6690;
									BgL_zc3z04anonymousza32756ze3z87_7597:
										if (PAIRP(BgL_l1635z00_7598))
											{	/* SawMill/defs.scm 185 */
												{	/* SawMill/defs.scm 186 */
													obj_t BgL_oz00_7599;

													BgL_oz00_7599 = CAR(BgL_l1635z00_7598);
													BGl_dumpz00zzsaw_defsz00(BgL_oz00_7599,
														((obj_t) BgL_pz00_6691), BgL_mz00_7596);
													{	/* SawMill/defs.scm 187 */
														obj_t BgL_tmpz00_11247;

														BgL_tmpz00_11247 = ((obj_t) BgL_pz00_6691);
														bgl_display_char(((unsigned char) 10),
															BgL_tmpz00_11247);
													}
													if (((long) (BgL_mz00_7596) > ((long) 0)))
														{	/* SawMill/defs.scm 188 */
															BGl_dumpzd2marginzd2zzsaw_defsz00(
																((obj_t) BgL_pz00_6691), BgL_mz00_7596);
														}
													else
														{	/* SawMill/defs.scm 190 */
															obj_t BgL_tmpz00_11255;

															BgL_tmpz00_11255 = ((obj_t) BgL_pz00_6691);
															bgl_display_char(((unsigned char) 10),
																BgL_tmpz00_11255);
												}}
												{
													obj_t BgL_l1635z00_11258;

													BgL_l1635z00_11258 = CDR(BgL_l1635z00_7598);
													BgL_l1635z00_7598 = BgL_l1635z00_11258;
													goto BgL_zc3z04anonymousza32756ze3z87_7597;
												}
											}
										else
											{	/* SawMill/defs.scm 185 */
												BgL_tmpz00_11241 = ((bool_t) 1);
											}
										return BBOOL(BgL_tmpz00_11241);
									}
								}
							else
								{	/* SawMill/defs.scm 193 */
									obj_t BgL_list2760z00_7600;

									BgL_list2760z00_7600 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_pz00_6691), BNIL);
									return
										BGl_writez00zz__r4_output_6_10_3z00(BgL_oz00_6690,
										BgL_list2760z00_7600);
								}
						}
				}
			}
		}

	}



/* dump */
	BGL_EXPORTED_DEF obj_t BGl_dumpz00zzsaw_defsz00(obj_t BgL_oz00_438,
		obj_t BgL_pz00_439, int BgL_mz00_440)
	{
		{	/* SawMill/defs.scm 180 */
			if (BGL_OBJECTP(BgL_oz00_438))
				{	/* SawMill/defs.scm 180 */
					obj_t BgL_method1750z00_3577;

					{	/* SawMill/defs.scm 180 */
						obj_t BgL_res3126z00_4974;

						{	/* SawMill/defs.scm 180 */
							long BgL_objzd2classzd2numz00_4939;

							{	/* SawMill/defs.scm 180 */
								long BgL_res3116z00_4942;

								BgL_res3116z00_4942 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_438));
								BgL_objzd2classzd2numz00_4939 = BgL_res3116z00_4942;
							}
							{	/* SawMill/defs.scm 180 */
								obj_t BgL_arg1813z00_4940;

								BgL_arg1813z00_4940 =
									PROCEDURE_REF(BGl_dumpzd2envzd2zzsaw_defsz00,
									(int) (((long) 1)));
								{	/* SawMill/defs.scm 180 */
									int BgL_offsetz00_4944;

									BgL_offsetz00_4944 = (int) (BgL_objzd2classzd2numz00_4939);
									{	/* SawMill/defs.scm 180 */
										long BgL_offsetz00_4945;

										BgL_offsetz00_4945 =
											((long) (BgL_offsetz00_4944) - OBJECT_TYPE);
										{	/* SawMill/defs.scm 180 */
											long BgL_modz00_4946;

											BgL_modz00_4946 =
												(BgL_offsetz00_4945 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* SawMill/defs.scm 180 */
												long BgL_restz00_4948;

												BgL_restz00_4948 =
													(BgL_offsetz00_4945 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* SawMill/defs.scm 180 */

													{	/* SawMill/defs.scm 180 */
														obj_t BgL_bucketz00_4950;

														BgL_bucketz00_4950 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_4940), BgL_modz00_4946);
														BgL_res3126z00_4974 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4950), BgL_restz00_4948);
						}}}}}}}}
						BgL_method1750z00_3577 = BgL_res3126z00_4974;
					}
					return
						PROCEDURE_ENTRY(BgL_method1750z00_3577) (BgL_method1750z00_3577,
						BgL_oz00_438, BgL_pz00_439, BINT(BgL_mz00_440), BEOA);
				}
			else
				{	/* SawMill/defs.scm 180 */
					obj_t BgL_fun2764z00_3578;

					BgL_fun2764z00_3578 =
						PROCEDURE_REF(BGl_dumpzd2envzd2zzsaw_defsz00, (int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun2764z00_3578) (BgL_fun2764z00_3578,
						BgL_oz00_438, BgL_pz00_439, BINT(BgL_mz00_440), BEOA);
				}
		}

	}



/* &dump */
	obj_t BGl_z62dumpz62zzsaw_defsz00(obj_t BgL_envz00_6693, obj_t BgL_oz00_6694,
		obj_t BgL_pz00_6695, obj_t BgL_mz00_6696)
	{
		{	/* SawMill/defs.scm 180 */
			return
				BGl_dumpz00zzsaw_defsz00(BgL_oz00_6694, BgL_pz00_6695,
				CINT(BgL_mz00_6696));
		}

	}



/* dump-fun */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2funzd2zzsaw_defsz00(BgL_rtl_funz00_bglt
		BgL_oz00_460, obj_t BgL_destz00_461, obj_t BgL_argsz00_462,
		obj_t BgL_pz00_463, obj_t BgL_mz00_464)
	{
		{	/* SawMill/defs.scm 293 */
			{	/* SawMill/defs.scm 293 */
				obj_t BgL_method1758z00_3579;

				{	/* SawMill/defs.scm 293 */
					obj_t BgL_res3138z00_5012;

					{	/* SawMill/defs.scm 293 */
						long BgL_objzd2classzd2numz00_4977;

						{	/* SawMill/defs.scm 293 */
							long BgL_res3128z00_4980;

							BgL_res3128z00_4980 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_460));
							BgL_objzd2classzd2numz00_4977 = BgL_res3128z00_4980;
						}
						{	/* SawMill/defs.scm 293 */
							obj_t BgL_arg1813z00_4978;

							BgL_arg1813z00_4978 =
								PROCEDURE_REF(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
								(int) (((long) 1)));
							{	/* SawMill/defs.scm 293 */
								int BgL_offsetz00_4982;

								BgL_offsetz00_4982 = (int) (BgL_objzd2classzd2numz00_4977);
								{	/* SawMill/defs.scm 293 */
									long BgL_offsetz00_4983;

									BgL_offsetz00_4983 =
										((long) (BgL_offsetz00_4982) - OBJECT_TYPE);
									{	/* SawMill/defs.scm 293 */
										long BgL_modz00_4984;

										BgL_modz00_4984 =
											(BgL_offsetz00_4983 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/defs.scm 293 */
											long BgL_restz00_4986;

											BgL_restz00_4986 =
												(BgL_offsetz00_4983 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/defs.scm 293 */

												{	/* SawMill/defs.scm 293 */
													obj_t BgL_bucketz00_4988;

													BgL_bucketz00_4988 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4978), BgL_modz00_4984);
													BgL_res3138z00_5012 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4988), BgL_restz00_4986);
					}}}}}}}}
					BgL_method1758z00_3579 = BgL_res3138z00_5012;
				}
				return
					PROCEDURE_ENTRY(BgL_method1758z00_3579) (BgL_method1758z00_3579,
					((obj_t) BgL_oz00_460), BgL_destz00_461, BgL_argsz00_462,
					BgL_pz00_463, BgL_mz00_464, BEOA);
			}
		}

	}



/* &dump-fun */
	obj_t BGl_z62dumpzd2funzb0zzsaw_defsz00(obj_t BgL_envz00_6697,
		obj_t BgL_oz00_6698, obj_t BgL_destz00_6699, obj_t BgL_argsz00_6700,
		obj_t BgL_pz00_6701, obj_t BgL_mz00_6702)
	{
		{	/* SawMill/defs.scm 293 */
			return
				BGl_dumpzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt) BgL_oz00_6698), BgL_destz00_6699,
				BgL_argsz00_6700, BgL_pz00_6701, BgL_mz00_6702);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_rtl_insz00zzsaw_defsz00,
				BGl_proc3414z00zzsaw_defsz00, BGl_string3415z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_rtl_regz00zzsaw_defsz00,
				BGl_proc3416z00zzsaw_defsz00, BGl_string3415z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_blockz00zzsaw_defsz00,
				BGl_proc3417z00zzsaw_defsz00, BGl_string3418z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_rtl_insz00zzsaw_defsz00,
				BGl_proc3419z00zzsaw_defsz00, BGl_string3418z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_rtl_regz00zzsaw_defsz00,
				BGl_proc3420z00zzsaw_defsz00, BGl_string3418z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_proc3421z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc3423z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc3424z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc3425z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_loadfunz00zzsaw_defsz00,
				BGl_proc3426z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc3427z00zzsaw_defsz00,
				BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_ifeqz00zzsaw_defsz00,
				BGl_proc3428z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_ifnez00zzsaw_defsz00,
				BGl_proc3429z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc3430z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2funzd2envz00zzsaw_defsz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc3431z00zzsaw_defsz00, BGl_string3422z00zzsaw_defsz00);
		}

	}



/* &dump-fun-rtl_call1778 */
	obj_t BGl_z62dumpzd2funzd2rtl_call1778z62zzsaw_defsz00(obj_t BgL_envz00_6719,
		obj_t BgL_oz00_6720, obj_t BgL_destz00_6721, obj_t BgL_argsz00_6722,
		obj_t BgL_pz00_6723, obj_t BgL_mz00_6724)
	{
		{	/* SawMill/defs.scm 379 */
			{	/* SawMill/defs.scm 381 */
				obj_t BgL_arg2865z00_7602;

				{	/* SawMill/defs.scm 381 */
					obj_t BgL_ouz00_7603;
					obj_t BgL_oaz00_7604;

					BgL_ouz00_7603 = BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
					BgL_oaz00_7604 = BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
					BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
					BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 = BFALSE;
					{	/* SawMill/defs.scm 385 */
						obj_t BgL_rz00_7605;

						{	/* SawMill/defs.scm 385 */
							BgL_globalz00_bglt BgL_arg2869z00_7606;

							BgL_arg2869z00_7606 =
								(((BgL_rtl_callz00_bglt) COBJECT(
										((BgL_rtl_callz00_bglt) BgL_oz00_6720)))->BgL_varz00);
							BgL_rz00_7605 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2869z00_7606));
						}
						BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BgL_ouz00_7603;
						BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 = BgL_oaz00_7604;
						BgL_arg2865z00_7602 = BgL_rz00_7605;
					}
				}
				bgl_display_obj(BgL_arg2865z00_7602, BgL_pz00_6723);
			}
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6722, BgL_pz00_6723));
		}

	}



/* &dump-fun-rtl_go1776 */
	obj_t BGl_z62dumpzd2funzd2rtl_go1776z62zzsaw_defsz00(obj_t BgL_envz00_6725,
		obj_t BgL_oz00_6726, obj_t BgL_destz00_6727, obj_t BgL_argsz00_6728,
		obj_t BgL_pz00_6729, obj_t BgL_mz00_6730)
	{
		{	/* SawMill/defs.scm 369 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_goz00_bglt) BgL_oz00_6726)), BgL_pz00_6729);
			{	/* SawMill/defs.scm 372 */
				obj_t BgL_tmpz00_11370;

				BgL_tmpz00_11370 = ((obj_t) BgL_pz00_6729);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11370);
			}
			{	/* SawMill/defs.scm 373 */
				int BgL_arg2863z00_7608;

				BgL_arg2863z00_7608 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_goz00_bglt) COBJECT(
										((BgL_rtl_goz00_bglt) BgL_oz00_6726)))->BgL_toz00)))->
					BgL_labelz00);
				bgl_display_obj(BINT(BgL_arg2863z00_7608), BgL_pz00_6729);
			}
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6728, BgL_pz00_6729));
		}

	}



/* &dump-fun-rtl_ifne1774 */
	obj_t BGl_z62dumpzd2funzd2rtl_ifne1774z62zzsaw_defsz00(obj_t BgL_envz00_6731,
		obj_t BgL_oz00_6732, obj_t BgL_destz00_6733, obj_t BgL_argsz00_6734,
		obj_t BgL_pz00_6735, obj_t BgL_mz00_6736)
	{
		{	/* SawMill/defs.scm 359 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_ifnez00_bglt) BgL_oz00_6732)), BgL_pz00_6735);
			BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6734, BgL_pz00_6735);
			{	/* SawMill/defs.scm 363 */
				obj_t BgL_tmpz00_11384;

				BgL_tmpz00_11384 = ((obj_t) BgL_pz00_6735);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11384);
			}
			{	/* SawMill/defs.scm 364 */
				int BgL_arg2861z00_7610;

				BgL_arg2861z00_7610 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifnez00_bglt) COBJECT(
										((BgL_rtl_ifnez00_bglt) BgL_oz00_6732)))->BgL_thenz00)))->
					BgL_labelz00);
				return bgl_display_obj(BINT(BgL_arg2861z00_7610), BgL_pz00_6735);
			}
		}

	}



/* &dump-fun-rtl_ifeq1772 */
	obj_t BGl_z62dumpzd2funzd2rtl_ifeq1772z62zzsaw_defsz00(obj_t BgL_envz00_6737,
		obj_t BgL_oz00_6738, obj_t BgL_destz00_6739, obj_t BgL_argsz00_6740,
		obj_t BgL_pz00_6741, obj_t BgL_mz00_6742)
	{
		{	/* SawMill/defs.scm 349 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_ifeqz00_bglt) BgL_oz00_6738)), BgL_pz00_6741);
			BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6740, BgL_pz00_6741);
			{	/* SawMill/defs.scm 353 */
				obj_t BgL_tmpz00_11396;

				BgL_tmpz00_11396 = ((obj_t) BgL_pz00_6741);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11396);
			}
			{	/* SawMill/defs.scm 354 */
				int BgL_arg2859z00_7612;

				BgL_arg2859z00_7612 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifeqz00_bglt) COBJECT(
										((BgL_rtl_ifeqz00_bglt) BgL_oz00_6738)))->BgL_thenz00)))->
					BgL_labelz00);
				return bgl_display_obj(BINT(BgL_arg2859z00_7612), BgL_pz00_6741);
			}
		}

	}



/* &dump-fun-rtl_globalr1770 */
	obj_t BGl_z62dumpzd2funzd2rtl_globalr1770z62zzsaw_defsz00(obj_t
		BgL_envz00_6743, obj_t BgL_oz00_6744, obj_t BgL_destz00_6745,
		obj_t BgL_argsz00_6746, obj_t BgL_pz00_6747, obj_t BgL_mz00_6748)
	{
		{	/* SawMill/defs.scm 340 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_globalrefz00_bglt) BgL_oz00_6744)), BgL_pz00_6747);
			{	/* SawMill/defs.scm 342 */
				obj_t BgL_tmpz00_11407;

				BgL_tmpz00_11407 = ((obj_t) BgL_pz00_6747);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11407);
			}
			{	/* SawMill/defs.scm 343 */
				obj_t BgL_arg2857z00_7614;

				{	/* SawMill/defs.scm 343 */
					BgL_globalz00_bglt BgL_arg2858z00_7615;

					BgL_arg2858z00_7615 =
						(((BgL_rtl_globalrefz00_bglt) COBJECT(
								((BgL_rtl_globalrefz00_bglt) BgL_oz00_6744)))->BgL_varz00);
					BgL_arg2857z00_7614 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2858z00_7615));
				}
				bgl_display_obj(BgL_arg2857z00_7614, BgL_pz00_6747);
			}
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6746, BgL_pz00_6747));
		}

	}



/* &dump-fun-rtl_loadfun1768 */
	obj_t BGl_z62dumpzd2funzd2rtl_loadfun1768z62zzsaw_defsz00(obj_t
		BgL_envz00_6749, obj_t BgL_oz00_6750, obj_t BgL_destz00_6751,
		obj_t BgL_argsz00_6752, obj_t BgL_pz00_6753, obj_t BgL_mz00_6754)
	{
		{	/* SawMill/defs.scm 331 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_loadfunz00_bglt) BgL_oz00_6750)), BgL_pz00_6753);
			{	/* SawMill/defs.scm 333 */
				obj_t BgL_tmpz00_11420;

				BgL_tmpz00_11420 = ((obj_t) BgL_pz00_6753);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11420);
			}
			{	/* SawMill/defs.scm 334 */
				obj_t BgL_arg2852z00_7617;

				{	/* SawMill/defs.scm 334 */
					BgL_globalz00_bglt BgL_arg2853z00_7618;

					BgL_arg2853z00_7618 =
						(((BgL_rtl_loadfunz00_bglt) COBJECT(
								((BgL_rtl_loadfunz00_bglt) BgL_oz00_6750)))->BgL_varz00);
					BgL_arg2852z00_7617 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2853z00_7618));
				}
				bgl_display_obj(BgL_arg2852z00_7617, BgL_pz00_6753);
			}
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6752, BgL_pz00_6753));
		}

	}



/* &dump-fun-rtl_loadg1766 */
	obj_t BGl_z62dumpzd2funzd2rtl_loadg1766z62zzsaw_defsz00(obj_t BgL_envz00_6755,
		obj_t BgL_oz00_6756, obj_t BgL_destz00_6757, obj_t BgL_argsz00_6758,
		obj_t BgL_pz00_6759, obj_t BgL_mz00_6760)
	{
		{	/* SawMill/defs.scm 322 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_loadgz00_bglt) BgL_oz00_6756)), BgL_pz00_6759);
			{	/* SawMill/defs.scm 324 */
				obj_t BgL_tmpz00_11433;

				BgL_tmpz00_11433 = ((obj_t) BgL_pz00_6759);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11433);
			}
			{	/* SawMill/defs.scm 325 */
				obj_t BgL_arg2850z00_7620;

				{	/* SawMill/defs.scm 325 */
					BgL_globalz00_bglt BgL_arg2851z00_7621;

					BgL_arg2851z00_7621 =
						(((BgL_rtl_loadgz00_bglt) COBJECT(
								((BgL_rtl_loadgz00_bglt) BgL_oz00_6756)))->BgL_varz00);
					BgL_arg2850z00_7620 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2851z00_7621));
				}
				bgl_display_obj(BgL_arg2850z00_7620, BgL_pz00_6759);
			}
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6758, BgL_pz00_6759));
		}

	}



/* &dump-fun-rtl_mov1764 */
	obj_t BGl_z62dumpzd2funzd2rtl_mov1764z62zzsaw_defsz00(obj_t BgL_envz00_6761,
		obj_t BgL_oz00_6762, obj_t BgL_destz00_6763, obj_t BgL_argsz00_6764,
		obj_t BgL_pz00_6765, obj_t BgL_mz00_6766)
	{
		{	/* SawMill/defs.scm 315 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_movz00_bglt) BgL_oz00_6762)), BgL_pz00_6765);
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6764, BgL_pz00_6765));
		}

	}



/* &dump-fun-rtl_loadi1762 */
	obj_t BGl_z62dumpzd2funzd2rtl_loadi1762z62zzsaw_defsz00(obj_t BgL_envz00_6767,
		obj_t BgL_oz00_6768, obj_t BgL_destz00_6769, obj_t BgL_argsz00_6770,
		obj_t BgL_pz00_6771, obj_t BgL_mz00_6772)
	{
		{	/* SawMill/defs.scm 306 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt)
					((BgL_rtl_loadiz00_bglt) BgL_oz00_6768)), BgL_pz00_6771);
			{	/* SawMill/defs.scm 308 */
				obj_t BgL_tmpz00_11451;

				BgL_tmpz00_11451 = ((obj_t) BgL_pz00_6771);
				bgl_display_string(BGl_string3155z00zzsaw_defsz00, BgL_tmpz00_11451);
			}
			bgl_display_obj(
				(((BgL_atomz00_bglt) COBJECT(
							(((BgL_rtl_loadiz00_bglt) COBJECT(
										((BgL_rtl_loadiz00_bglt) BgL_oz00_6768)))->
								BgL_constantz00)))->BgL_valuez00), BgL_pz00_6771);
			return BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6770,
					BgL_pz00_6771));
		}

	}



/* &dump-fun-rtl_fun1760 */
	obj_t BGl_z62dumpzd2funzd2rtl_fun1760z62zzsaw_defsz00(obj_t BgL_envz00_6773,
		obj_t BgL_oz00_6774, obj_t BgL_destz00_6775, obj_t BgL_argsz00_6776,
		obj_t BgL_pz00_6777, obj_t BgL_mz00_6778)
	{
		{	/* SawMill/defs.scm 299 */
			BGl_showzd2funzd2zzsaw_defsz00(
				((BgL_rtl_funz00_bglt) BgL_oz00_6774), BgL_pz00_6777);
			return
				BBOOL(BGl_dumpzd2argszd2zzsaw_defsz00(BgL_argsz00_6776, BgL_pz00_6777));
		}

	}



/* &dump-rtl_reg1756 */
	obj_t BGl_z62dumpzd2rtl_reg1756zb0zzsaw_defsz00(obj_t BgL_envz00_6779,
		obj_t BgL_oz00_6780, obj_t BgL_pz00_6781, obj_t BgL_mz00_6782)
	{
		{	/* SawMill/defs.scm 277 */
			{	/* SawMill/defs.scm 278 */
				obj_t BgL_arg2845z00_7626;

				BgL_arg2845z00_7626 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_rtl_regz00_bglt) BgL_oz00_6780)));
				bgl_display_obj(BgL_arg2845z00_7626, BgL_pz00_6781);
			}
			if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
				{	/* SawMill/defs.scm 279 */
					{	/* SawMill/defs.scm 280 */
						obj_t BgL_tmpz00_11470;

						BgL_tmpz00_11470 = ((obj_t) BgL_pz00_6781);
						bgl_display_string(BGl_string3432z00zzsaw_defsz00,
							BgL_tmpz00_11470);
					}
					{	/* SawMill/defs.scm 281 */
						obj_t BgL_arg2846z00_7627;

						{	/* SawMill/defs.scm 281 */
							BgL_typez00_bglt BgL_arg2847z00_7628;

							BgL_arg2847z00_7628 =
								(((BgL_rtl_regz00_bglt) COBJECT(
										((BgL_rtl_regz00_bglt) BgL_oz00_6780)))->BgL_typez00);
							BgL_arg2846z00_7627 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2847z00_7628));
						}
						return bgl_display_obj(BgL_arg2846z00_7627, BgL_pz00_6781);
					}
				}
			else
				{	/* SawMill/defs.scm 279 */
					return BFALSE;
				}
		}

	}



/* &dump-rtl_ins1754 */
	obj_t BGl_z62dumpzd2rtl_ins1754zb0zzsaw_defsz00(obj_t BgL_envz00_6783,
		obj_t BgL_oz00_6784, obj_t BgL_pz00_6785, obj_t BgL_mz00_6786)
	{
		{	/* SawMill/defs.scm 249 */
			if (CBOOL(
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_oz00_6784)))->BgL_destz00)))
				{	/* SawMill/defs.scm 251 */
					{	/* SawMill/defs.scm 252 */
						obj_t BgL_tmpz00_11482;

						BgL_tmpz00_11482 = ((obj_t) BgL_pz00_6785);
						bgl_display_string(BGl_string3433z00zzsaw_defsz00,
							BgL_tmpz00_11482);
					}
					BGl_dumpz00zzsaw_defsz00(
						(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_6784)))->BgL_destz00),
						BgL_pz00_6785, CINT(BgL_mz00_6786));
					{	/* SawMill/defs.scm 254 */
						obj_t BgL_tmpz00_11489;

						BgL_tmpz00_11489 = ((obj_t) BgL_pz00_6785);
						bgl_display_string(BGl_string3434z00zzsaw_defsz00,
							BgL_tmpz00_11489);
					}
				}
			else
				{	/* SawMill/defs.scm 251 */
					BFALSE;
				}
			BGl_dumpzd2inszd2rhsz00zzsaw_defsz00(
				((BgL_rtl_insz00_bglt) BgL_oz00_6784), BgL_pz00_6785, BgL_mz00_6786);
			if (NULLP(
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_oz00_6784)))->BgL_z52spillz52)))
				{	/* SawMill/defs.scm 256 */
					BFALSE;
				}
			else
				{	/* SawMill/defs.scm 256 */
					{	/* SawMill/defs.scm 257 */
						obj_t BgL_tmpz00_11498;

						BgL_tmpz00_11498 = ((obj_t) BgL_pz00_6785);
						bgl_display_string(BGl_string3435z00zzsaw_defsz00,
							BgL_tmpz00_11498);
					}
					{	/* SawMill/defs.scm 258 */
						obj_t BgL_g1654z00_7630;

						BgL_g1654z00_7630 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_6784)))->BgL_z52spillz52);
						{
							obj_t BgL_l1652z00_7632;

							BgL_l1652z00_7632 = BgL_g1654z00_7630;
						BgL_zc3z04anonymousza32826ze3z87_7631:
							if (PAIRP(BgL_l1652z00_7632))
								{	/* SawMill/defs.scm 258 */
									{	/* SawMill/defs.scm 259 */
										obj_t BgL_rz00_7633;

										BgL_rz00_7633 = CAR(BgL_l1652z00_7632);
										bgl_display_obj(BGl_shapez00zztools_shapez00(BgL_rz00_7633),
											BgL_pz00_6785);
										{	/* SawMill/defs.scm 260 */
											obj_t BgL_tmpz00_11508;

											BgL_tmpz00_11508 = ((obj_t) BgL_pz00_6785);
											bgl_display_string(BGl_string3155z00zzsaw_defsz00,
												BgL_tmpz00_11508);
										}
									}
									{
										obj_t BgL_l1652z00_11511;

										BgL_l1652z00_11511 = CDR(BgL_l1652z00_7632);
										BgL_l1652z00_7632 = BgL_l1652z00_11511;
										goto BgL_zc3z04anonymousza32826ze3z87_7631;
									}
								}
							else
								{	/* SawMill/defs.scm 258 */
									((bool_t) 1);
								}
						}
					}
					{	/* SawMill/defs.scm 262 */
						obj_t BgL_tmpz00_11513;

						BgL_tmpz00_11513 = ((obj_t) BgL_pz00_6785);
						bgl_display_string(BGl_string3159z00zzsaw_defsz00,
							BgL_tmpz00_11513);
					}
				}
			if (CBOOL(
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_oz00_6784)))->BgL_destz00)))
				{	/* SawMill/defs.scm 263 */
					obj_t BgL_tmpz00_11520;

					BgL_tmpz00_11520 = ((obj_t) BgL_pz00_6785);
					return
						bgl_display_string(BGl_string3436z00zzsaw_defsz00,
						BgL_tmpz00_11520);
				}
			else
				{	/* SawMill/defs.scm 263 */
					return BFALSE;
				}
		}

	}



/* &dump-block1752 */
	obj_t BGl_z62dumpzd2block1752zb0zzsaw_defsz00(obj_t BgL_envz00_6787,
		obj_t BgL_oz00_6788, obj_t BgL_pz00_6789, obj_t BgL_mz00_6790)
	{
		{	/* SawMill/defs.scm 234 */
			{	/* SawMill/defs.scm 236 */
				obj_t BgL_tmpz00_11523;

				BgL_tmpz00_11523 = ((obj_t) BgL_pz00_6789);
				bgl_display_string(BGl_string3437z00zzsaw_defsz00, BgL_tmpz00_11523);
			}
			{	/* SawMill/defs.scm 236 */
				int BgL_arg2787z00_7635;

				BgL_arg2787z00_7635 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6788)))->BgL_labelz00);
				bgl_display_obj(BINT(BgL_arg2787z00_7635), BgL_pz00_6789);
			}
			{	/* SawMill/defs.scm 236 */
				obj_t BgL_tmpz00_11530;

				BgL_tmpz00_11530 = ((obj_t) BgL_pz00_6789);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_11530);
			}
			{	/* SawMill/defs.scm 238 */
				long BgL_arg2788z00_7636;

				BgL_arg2788z00_7636 = ((long) CINT(BgL_mz00_6790) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_6789,
					(int) (BgL_arg2788z00_7636));
			}
			{	/* SawMill/defs.scm 239 */
				obj_t BgL_tmpz00_11537;

				BgL_tmpz00_11537 = ((obj_t) BgL_pz00_6789);
				bgl_display_string(BGl_string3438z00zzsaw_defsz00, BgL_tmpz00_11537);
			}
			{	/* SawMill/defs.scm 239 */
				obj_t BgL_arg2789z00_7637;

				{	/* SawMill/defs.scm 239 */
					obj_t BgL_l1638z00_7638;

					BgL_l1638z00_7638 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oz00_6788)))->BgL_predsz00);
					if (NULLP(BgL_l1638z00_7638))
						{	/* SawMill/defs.scm 239 */
							BgL_arg2789z00_7637 = BNIL;
						}
					else
						{	/* SawMill/defs.scm 239 */
							obj_t BgL_head1640z00_7639;

							{	/* SawMill/defs.scm 239 */
								int BgL_arg2801z00_7640;

								BgL_arg2801z00_7640 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												CAR(BgL_l1638z00_7638))))->BgL_labelz00);
								{	/* SawMill/defs.scm 239 */
									obj_t BgL_res3141z00_7641;

									BgL_res3141z00_7641 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg2801z00_7640), BNIL);
									BgL_head1640z00_7639 = BgL_res3141z00_7641;
							}}
							{	/* SawMill/defs.scm 239 */
								obj_t BgL_g1643z00_7642;

								BgL_g1643z00_7642 = CDR(BgL_l1638z00_7638);
								{
									obj_t BgL_l1638z00_7644;
									obj_t BgL_tail1641z00_7645;

									BgL_l1638z00_7644 = BgL_g1643z00_7642;
									BgL_tail1641z00_7645 = BgL_head1640z00_7639;
								BgL_zc3z04anonymousza32791ze3z87_7643:
									if (NULLP(BgL_l1638z00_7644))
										{	/* SawMill/defs.scm 239 */
											BgL_arg2789z00_7637 = BgL_head1640z00_7639;
										}
									else
										{	/* SawMill/defs.scm 239 */
											obj_t BgL_newtail1642z00_7646;

											{	/* SawMill/defs.scm 239 */
												int BgL_arg2799z00_7647;

												BgL_arg2799z00_7647 =
													(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt)
																CAR(
																	((obj_t) BgL_l1638z00_7644)))))->
													BgL_labelz00);
												{	/* SawMill/defs.scm 239 */
													obj_t BgL_res3143z00_7648;

													BgL_res3143z00_7648 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2799z00_7647), BNIL);
													BgL_newtail1642z00_7646 = BgL_res3143z00_7648;
											}}
											SET_CDR(BgL_tail1641z00_7645, BgL_newtail1642z00_7646);
											{	/* SawMill/defs.scm 239 */
												obj_t BgL_arg2795z00_7649;

												BgL_arg2795z00_7649 = CDR(((obj_t) BgL_l1638z00_7644));
												{
													obj_t BgL_tail1641z00_11562;
													obj_t BgL_l1638z00_11561;

													BgL_l1638z00_11561 = BgL_arg2795z00_7649;
													BgL_tail1641z00_11562 = BgL_newtail1642z00_7646;
													BgL_tail1641z00_7645 = BgL_tail1641z00_11562;
													BgL_l1638z00_7644 = BgL_l1638z00_11561;
													goto BgL_zc3z04anonymousza32791ze3z87_7643;
												}
											}
										}
								}
							}
						}
				}
				bgl_display_obj(BgL_arg2789z00_7637, BgL_pz00_6789);
			}
			{	/* SawMill/defs.scm 239 */
				obj_t BgL_tmpz00_11564;

				BgL_tmpz00_11564 = ((obj_t) BgL_pz00_6789);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_11564);
			}
			{	/* SawMill/defs.scm 240 */
				long BgL_arg2805z00_7650;

				BgL_arg2805z00_7650 = ((long) CINT(BgL_mz00_6790) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_6789,
					(int) (BgL_arg2805z00_7650));
			}
			{	/* SawMill/defs.scm 241 */
				obj_t BgL_tmpz00_11571;

				BgL_tmpz00_11571 = ((obj_t) BgL_pz00_6789);
				bgl_display_string(BGl_string3439z00zzsaw_defsz00, BgL_tmpz00_11571);
			}
			{	/* SawMill/defs.scm 241 */
				obj_t BgL_arg2806z00_7651;

				{	/* SawMill/defs.scm 241 */
					obj_t BgL_l1645z00_7652;

					BgL_l1645z00_7652 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oz00_6788)))->BgL_succsz00);
					if (NULLP(BgL_l1645z00_7652))
						{	/* SawMill/defs.scm 241 */
							BgL_arg2806z00_7651 = BNIL;
						}
					else
						{	/* SawMill/defs.scm 241 */
							obj_t BgL_head1647z00_7653;

							{	/* SawMill/defs.scm 241 */
								int BgL_arg2814z00_7654;

								BgL_arg2814z00_7654 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												CAR(BgL_l1645z00_7652))))->BgL_labelz00);
								{	/* SawMill/defs.scm 241 */
									obj_t BgL_res3146z00_7655;

									BgL_res3146z00_7655 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg2814z00_7654), BNIL);
									BgL_head1647z00_7653 = BgL_res3146z00_7655;
							}}
							{	/* SawMill/defs.scm 241 */
								obj_t BgL_g1650z00_7656;

								BgL_g1650z00_7656 = CDR(BgL_l1645z00_7652);
								{
									obj_t BgL_l1645z00_7658;
									obj_t BgL_tail1648z00_7659;

									BgL_l1645z00_7658 = BgL_g1650z00_7656;
									BgL_tail1648z00_7659 = BgL_head1647z00_7653;
								BgL_zc3z04anonymousza32808ze3z87_7657:
									if (NULLP(BgL_l1645z00_7658))
										{	/* SawMill/defs.scm 241 */
											BgL_arg2806z00_7651 = BgL_head1647z00_7653;
										}
									else
										{	/* SawMill/defs.scm 241 */
											obj_t BgL_newtail1649z00_7660;

											{	/* SawMill/defs.scm 241 */
												int BgL_arg2812z00_7661;

												BgL_arg2812z00_7661 =
													(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt)
																CAR(
																	((obj_t) BgL_l1645z00_7658)))))->
													BgL_labelz00);
												{	/* SawMill/defs.scm 241 */
													obj_t BgL_res3148z00_7662;

													BgL_res3148z00_7662 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2812z00_7661), BNIL);
													BgL_newtail1649z00_7660 = BgL_res3148z00_7662;
											}}
											SET_CDR(BgL_tail1648z00_7659, BgL_newtail1649z00_7660);
											{	/* SawMill/defs.scm 241 */
												obj_t BgL_arg2810z00_7663;

												BgL_arg2810z00_7663 = CDR(((obj_t) BgL_l1645z00_7658));
												{
													obj_t BgL_tail1648z00_11596;
													obj_t BgL_l1645z00_11595;

													BgL_l1645z00_11595 = BgL_arg2810z00_7663;
													BgL_tail1648z00_11596 = BgL_newtail1649z00_7660;
													BgL_tail1648z00_7659 = BgL_tail1648z00_11596;
													BgL_l1645z00_7658 = BgL_l1645z00_11595;
													goto BgL_zc3z04anonymousza32808ze3z87_7657;
												}
											}
										}
								}
							}
						}
				}
				bgl_display_obj(BgL_arg2806z00_7651, BgL_pz00_6789);
			}
			{	/* SawMill/defs.scm 241 */
				obj_t BgL_tmpz00_11598;

				BgL_tmpz00_11598 = ((obj_t) BgL_pz00_6789);
				bgl_display_char(((unsigned char) 10), BgL_tmpz00_11598);
			}
			{	/* SawMill/defs.scm 242 */
				long BgL_arg2816z00_7664;

				BgL_arg2816z00_7664 = ((long) CINT(BgL_mz00_6790) + ((long) 1));
				BGl_dumpzd2marginzd2zzsaw_defsz00(BgL_pz00_6789,
					(int) (BgL_arg2816z00_7664));
			}
			{	/* SawMill/defs.scm 243 */
				obj_t BgL_arg2817z00_7665;
				long BgL_arg2819z00_7666;

				BgL_arg2817z00_7665 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_6788)))->BgL_firstz00);
				BgL_arg2819z00_7666 = ((long) CINT(BgL_mz00_6790) + ((long) 1));
				BGl_dumpza2za2zzsaw_defsz00(BgL_arg2817z00_7665, BgL_pz00_6789,
					(int) (BgL_arg2819z00_7666));
			}
			{	/* SawMill/defs.scm 244 */
				obj_t BgL_tmpz00_11611;

				BgL_tmpz00_11611 = ((obj_t) BgL_pz00_6789);
				return
					bgl_display_string(BGl_string3440z00zzsaw_defsz00, BgL_tmpz00_11611);
			}
		}

	}



/* &shape-rtl_reg1748 */
	obj_t BGl_z62shapezd2rtl_reg1748zb0zzsaw_defsz00(obj_t BgL_envz00_6791,
		obj_t BgL_oz00_6792)
	{
		{	/* SawMill/defs.scm 120 */
			{	/* SawMill/defs.scm 121 */
				obj_t BgL_pz00_7668;

				{	/* SawMill/defs.scm 121 */

					{	/* SawMill/defs.scm 121 */

						BgL_pz00_7668 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				if (CBOOL(
						(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->BgL_onexprzf3zf3)))
					{	/* SawMill/defs.scm 124 */
						bgl_display_string(BGl_string3441z00zzsaw_defsz00, BgL_pz00_7668);
						bgl_display_obj(
							(((BgL_rtl_regz00_bglt) COBJECT(
										((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->BgL_namez00),
							BgL_pz00_7668);
					}
				else
					{	/* SawMill/defs.scm 124 */
						if (CBOOL(
								(((BgL_rtl_regz00_bglt) COBJECT(
											((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->
									BgL_hardwarez00)))
							{	/* SawMill/defs.scm 127 */
								bgl_display_string(BGl_string3442z00zzsaw_defsz00,
									BgL_pz00_7668);
								bgl_display_obj((((BgL_rtl_regz00_bglt)
											COBJECT(((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->
										BgL_hardwarez00), BgL_pz00_7668);
							}
						else
							{	/* SawMill/defs.scm 127 */
								if (CBOOL(
										(((BgL_rtl_regz00_bglt) COBJECT(
													((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->BgL_varz00)))
									{	/* SawMill/defs.scm 130 */
										bgl_display_string(BGl_string3443z00zzsaw_defsz00,
											BgL_pz00_7668);
										{	/* SawMill/defs.scm 132 */
											obj_t BgL_arg2774z00_7669;

											BgL_arg2774z00_7669 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															(((BgL_rtl_regz00_bglt) COBJECT(
																		((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->
																BgL_varz00))))->BgL_idz00);
											bgl_display_obj(BgL_arg2774z00_7669, BgL_pz00_7668);
										}
									}
								else
									{	/* SawMill/defs.scm 130 */
										bgl_display_string(BGl_string3444z00zzsaw_defsz00,
											BgL_pz00_7668);
										bgl_display_obj((((BgL_rtl_regz00_bglt)
													COBJECT(((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->
												BgL_namez00), BgL_pz00_7668);
									}
							}
					}
				if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
					{	/* SawMill/defs.scm 136 */
						bgl_display_string(BGl_string3432z00zzsaw_defsz00, BgL_pz00_7668);
						bgl_display_obj(
							(((BgL_typez00_bglt) COBJECT(
										(((BgL_rtl_regz00_bglt) COBJECT(
													((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->
											BgL_typez00)))->BgL_idz00), BgL_pz00_7668);
					}
				else
					{	/* SawMill/defs.scm 136 */
						BFALSE;
					}
				if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
					{	/* SawMill/defs.scm 139 */
						bgl_display_string(BGl_string3445z00zzsaw_defsz00, BgL_pz00_7668);
						bgl_display_obj(
							(((BgL_rtl_regz00_bglt) COBJECT(
										((BgL_rtl_regz00_bglt) BgL_oz00_6792)))->BgL_keyz00),
							BgL_pz00_7668);
					}
				else
					{	/* SawMill/defs.scm 139 */
						BFALSE;
					}
				return bgl_close_output_port(BgL_pz00_7668);
			}
		}

	}



/* &shape-rtl_ins1746 */
	obj_t BGl_z62shapezd2rtl_ins1746zb0zzsaw_defsz00(obj_t BgL_envz00_6793,
		obj_t BgL_iz00_6794)
	{
		{	/* SawMill/defs.scm 112 */
			{	/* SawMill/defs.scm 115 */
				obj_t BgL_zc3z04anonymousza32766ze3z87_7671;

				BgL_zc3z04anonymousza32766ze3z87_7671 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32766ze3ze5zzsaw_defsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza32766ze3z87_7671,
					(int) (((long) 0)), ((obj_t) ((BgL_rtl_insz00_bglt) BgL_iz00_6794)));
				return
					BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3z04anonymousza32766ze3z87_7671);
			}
		}

	}



/* &<@anonymous:2766> */
	obj_t BGl_z62zc3z04anonymousza32766ze3ze5zzsaw_defsz00(obj_t BgL_envz00_6795,
		obj_t BgL_opz00_6797)
	{
		{	/* SawMill/defs.scm 114 */
			{	/* SawMill/defs.scm 115 */
				BgL_rtl_insz00_bglt BgL_iz00_6796;

				BgL_iz00_6796 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_6795, (int) (((long) 0))));
				return
					BGl_dumpz00zzsaw_defsz00(
					((obj_t) BgL_iz00_6796), BgL_opz00_6797, (int) (((long) 0)));
		}}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_defsz00()
	{
		{	/* SawMill/defs.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string3446z00zzsaw_defsz00));
		}

	}

#ifdef __cplusplus
}
#endif
