/*===========================================================================*/
/*   (Cgen/emit_cop.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/emit_cop.scm) */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_cblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                *BgL_cblockz00_bglt;

	typedef struct BgL_creturnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                 *BgL_creturnz00_bglt;

	typedef struct BgL_cvoidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_cvoidz00_bglt;

	typedef struct BgL_catomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_valuez00;
	}               *BgL_catomz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_ccastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_copz00_bgl *BgL_argz00;
	}               *BgL_ccastz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_cifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		struct BgL_copz00_bgl *BgL_truez00;
		struct BgL_copz00_bgl *BgL_falsez00;
	}             *BgL_cifz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_typez00;
	}                  *BgL_cfuncallz00_bglt;

	typedef struct BgL_capplyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		struct BgL_copz00_bgl *BgL_argz00;
	}                *BgL_capplyz00_bglt;

	typedef struct BgL_cappz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}              *BgL_cappz00_bglt;

	typedef struct BgL_cfailz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_procz00;
		struct BgL_copz00_bgl *BgL_msgz00;
		struct BgL_copz00_bgl *BgL_objz00;
	}               *BgL_cfailz00_bglt;

	typedef struct BgL_cswitchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
	}                 *BgL_cswitchz00_bglt;

	typedef struct BgL_cmakezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
		obj_t BgL_stackablez00;
	}                     *BgL_cmakezd2boxzd2_bglt;

	typedef struct BgL_cboxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
	}                    *BgL_cboxzd2refzd2_bglt;

	typedef struct BgL_cboxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                       *BgL_cboxzd2setz12zc0_bglt;

	typedef struct BgL_csetzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_jumpzd2valuezd2;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                        *BgL_csetzd2exzd2itz00_bglt;

	typedef struct BgL_cjumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                         *BgL_cjumpzd2exzd2itz00_bglt;

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;


	static obj_t BGl_z62emitzd2copzd2cfuncall1391z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2ccast1375z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_clabelz00zzcgen_copz00;
	extern obj_t BGl_cboxzd2refzd2zzcgen_copz00;
	static obj_t BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC;
	static obj_t BGl_z62emitzd2copzd2csetq1383z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_z62emitzd2copzd2cif1385z62zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_csetzd2exzd2itz00zzcgen_copz00;
	static obj_t BGl_objectzd2initzd2zzcgen_emitzd2copzd2();
	static obj_t BGl_z62emitzd2copzd2cpragma1372z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
	static obj_t BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 = BUNSPEC;
	static obj_t BGl_z62getzd2currentzd2bdbzd2loczb0zzcgen_emitzd2copzd2(obj_t);
	static obj_t BGl_z62emitzd2copzd2cvoid1368z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_z62emitzd2copzb0zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_capplyz00zzcgen_copz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	static obj_t BGl_appendzd221011zd2zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcgen_emitzd2copzd2();
	static obj_t BGl_z62emitzd2copzd2varc1370z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_z62emitzd2copzd2localzd2var1387zb0zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_outzd2callze70z35zzcgen_emitzd2copzd2(obj_t,
		BgL_cfuncallz00_bglt);
	extern obj_t BGl_cmakezd2boxzd2zzcgen_copz00;
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2capply1393z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62emitzd2bdbzd2locz62zzcgen_emitzd2copzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2();
	static obj_t BGl_z62emitzd2copzd2stop1381z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62emitzd2copzd2csetzd2exzd2it1407z62zzcgen_emitzd2copzd2(obj_t, obj_t);
	extern obj_t BGl_cboxzd2setz12zc0zzcgen_copz00;
	BGL_EXPORTED_DECL bool_t
		BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_z62emitzd2copzd2capp1395z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static bool_t
		BGl_emitzd2regularzd2cfuncallzf2eoaze70z15zzcgen_emitzd2copzd2
		(BgL_cfuncallz00_bglt);
	extern obj_t BGl_cblockz00zzcgen_copz00;
	static obj_t BGl_z62emitzd2copzd2catom1366z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_bdbzd2blockzd2zzcgen_copz00;
	static obj_t BGl_gczd2rootszd2initz00zzcgen_emitzd2copzd2();
	extern obj_t BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
	static obj_t
		BGl_z62emitzd2copzd2cboxzd2setz121405za2zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2cmakezd2box1401zb0zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cfailz00zzcgen_copz00;
	static obj_t BGl_z62emitzd2copzd2cboxzd2ref1403zb0zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_stopz00zzcgen_copz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_za2stdcza2z00zzengine_paramz00;
	extern obj_t BGl_creturnz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_thezd2stringze70z35zzcgen_emitzd2copzd2(obj_t);
	static obj_t BGl_z62emitzd2copzd2cswitch1399z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62emitzd2cop1354zb0zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2 = BUNSPEC;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_z62emitzd2copzd2cgoto1360z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_cappz00zzcgen_copz00;
	BGL_EXPORTED_DECL obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
	static obj_t BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_cgotoz00zzcgen_copz00;
	extern obj_t BGl_csequencez00zzcgen_copz00;
	static obj_t BGl_genericzd2initzd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_cvoidz00zzcgen_copz00;
	static obj_t BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62emitzd2copzd2cfail1397z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	static obj_t BGl_z62emitzd2copzd2csequence1377z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2bdbzd2block1389zb0zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nopz00zzcgen_copz00;
	static obj_t BGl_z62emitzd2copzd2cblock1362z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62emitzd2copzd2nop1379z62zzcgen_emitzd2copzd2(obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2clabel1358z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cifz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static bool_t
		BGl_emitzd2prefixzd2cappze70ze7zzcgen_emitzd2copzd2(BgL_cappz00_bglt);
	extern obj_t BGl_csetqz00zzcgen_copz00;
	extern obj_t BGl_localzd2varzd2zzcgen_copz00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_cswitchz00zzcgen_copz00;
	static obj_t BGl_cnstzd2initzd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_copz00zzcgen_copz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2();
	BGL_IMPORT obj_t bgl_display_fixnum(obj_t, obj_t);
	static obj_t BGl_z62emitzd2copzd2creturn1364z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_catomz00zzcgen_copz00;
	static obj_t
		BGl_z62emitzd2copzd2cjumpzd2exzd2it1409z62zzcgen_emitzd2copzd2(obj_t,
		obj_t);
	extern obj_t BGl_cfuncallz00zzcgen_copz00;
	extern obj_t BGl_ccastz00zzcgen_copz00;
	extern obj_t BGl_cjumpzd2exzd2itz00zzcgen_copz00;
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	extern obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62resetzd2bdbzd2locz12z70zzcgen_emitzd2copzd2(obj_t);
	extern obj_t BGl_varcz00zzcgen_copz00;
	static obj_t __cnst[9];


	   
		 
		DEFINE_STRING(BGl_string2323z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2323za700za7za7c2418za7, "\n#line ", 7);
	      DEFINE_STRING(BGl_string2324z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2324za700za7za7c2419za7, " \"", 2);
	      DEFINE_STRING(BGl_string2325z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2325za700za7za7c2420za7, "/* ", 3);
	      DEFINE_STRING(BGl_string2326z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2326za700za7za7c2421za7, " ", 1);
	      DEFINE_STRING(BGl_string2327z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2327za700za7za7c2422za7, " */", 3);
	      DEFINE_STRING(BGl_string2329z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2329za700za7za7c2423za7, "emit-cop1354", 12);
	      DEFINE_STRING(BGl_string2330z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2330za700za7za7c2424za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2332z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2332za700za7za7c2425za7, "emit-cop", 8);
	      DEFINE_STRING(BGl_string2358z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2358za700za7za7c2426za7, "JUMP_EXIT( ", 11);
	      DEFINE_STRING(BGl_string2359z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2359za700za7za7c2427za7, "if( SET_EXIT(", 13);
	      DEFINE_STRING(BGl_string2360z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2360za700za7za7c2428za7, ") ) { ", 6);
	      DEFINE_STRING(BGl_string2361z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2361za700za7za7c2429za7, ";", 1);
	      DEFINE_STRING(BGl_string2362z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2362za700za7za7c2430za7, "} else {\n", 9);
	      DEFINE_STRING(BGl_string2363z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2363za700za7za7c2431za7, "#if( SIGSETJMP_SAVESIGS == 0 )\n",
		31);
	      DEFINE_STRING(BGl_string2364z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2364za700za7za7c2432za7, "  bgl_restore_signal_handlers();\n",
		33);
	      DEFINE_STRING(BGl_string2365z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2365za700za7za7c2433za7, "#endif\n", 7);
	      DEFINE_STRING(BGl_string2366z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2366za700za7za7c2434za7, "} ", 2);
	      DEFINE_STRING(BGl_string2367z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2367za700za7za7c2435za7, "CELL_SET(", 9);
	      DEFINE_STRING(BGl_string2368z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2368za700za7za7c2436za7, ", ", 2);
	      DEFINE_STRING(BGl_string2369z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2369za700za7za7c2437za7, "CELL_REF(", 9);
	      DEFINE_STRING(BGl_string2370z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2370za700za7za7c2438za7, "MAKE_CELL_STACK(", 16);
	      DEFINE_STRING(BGl_string2371z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2371za700za7za7c2439za7, "MAKE_CELL(", 10);
	      DEFINE_STRING(BGl_string2372z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2372za700za7za7c2440za7, "switch( ", 8);
	      DEFINE_STRING(BGl_string2373z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2373za700za7za7c2441za7, ") { ", 4);
	      DEFINE_STRING(BGl_string2374z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2374za700za7za7c2442za7, "default: ", 9);
	      DEFINE_STRING(BGl_string2375z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2375za700za7za7c2443za7, "; ", 2);
	      DEFINE_STRING(BGl_string2376z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2376za700za7za7c2444za7, "case ", 5);
	      DEFINE_STRING(BGl_string2377z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2377za700za7za7c2445za7, " : ", 3);
	      DEFINE_STRING(BGl_string2378z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2378za700za7za7c2446za7, "break;", 6);
	      DEFINE_STRING(BGl_string2379z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2379za700za7za7c2447za7, "exit( -1 );", 11);
	      DEFINE_STRING(BGl_string2380z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2380za700za7za7c2448za7, "FAILURE(", 8);
	      DEFINE_STRING(BGl_string2381z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2381za700za7za7c2449za7, ");", 2);
	      DEFINE_STRING(BGl_string2382z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2382za700za7za7c2450za7, "the_failure(", 12);
	      DEFINE_STRING(BGl_string2383z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2383za700za7za7c2451za7, "), exit( -1 );", 14);
	      DEFINE_STRING(BGl_string2384z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2384za700za7za7c2452za7, "Illegal infix macro", 19);
	      DEFINE_STRING(BGl_string2385z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2385za700za7za7c2453za7, "apply(", 6);
	      DEFINE_STRING(BGl_string2386z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2386za700za7za7c2454za7, "PROCEDURE_L_ENTRY", 17);
	      DEFINE_STRING(BGl_string2387z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2387za700za7za7c2455za7, ")", 1);
	      DEFINE_STRING(BGl_string2388z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2388za700za7za7c2456za7, "PROCEDURE_ENTRY", 15);
	      DEFINE_STRING(BGl_string2389z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2389za700za7za7c2457za7, "(VA_PROCEDUREP( ", 16);
	      DEFINE_STRING(BGl_string2390z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2390za700za7za7c2458za7, " ) ? ", 5);
	      DEFINE_STRING(BGl_string2391z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2391za700za7za7c2459za7, " )", 2);
	      DEFINE_STRING(BGl_string2392z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2392za700za7za7c2460za7, "(", 1);
	      DEFINE_STRING(BGl_string2393z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2393za700za7za7c2461za7, ")(", 2);
	      DEFINE_STRING(BGl_string2394z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2394za700za7za7c2462za7, "((", 2);
	      DEFINE_STRING(BGl_string2395z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2395za700za7za7c2463za7, "(*)())", 6);
	      DEFINE_STRING(BGl_string2396z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2396za700za7za7c2464za7, "))(", 3);
	      DEFINE_STRING(BGl_string2397z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2397za700za7za7c2465za7,
		"int bigloo_dummy_bdb; bigloo_dummy_bdb = 0; { ", 46);
	      DEFINE_STRING(BGl_string2398z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2398za700za7za7c2466za7, "", 0);
	      DEFINE_STRING(BGl_string2399z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2399za700za7za7c2467za7, " = ((", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2bdbzd2locz12zd2envzc0zzcgen_emitzd2copzd2,
		BgL_bgl_za762resetza7d2bdbza7d2468za7,
		BGl_z62resetzd2bdbzd2locz12z70zzcgen_emitzd2copzd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2bdbzd2loczd2envzd2zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2bdbza7d22469za7,
		BGl_z62emitzd2bdbzd2locz62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2400z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2400za700za7za7c2470za7, ")BUNSPEC)", 9);
	      DEFINE_STRING(BGl_string2401z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2401za700za7za7c2471za7, "if(", 3);
	      DEFINE_STRING(BGl_string2402z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2402za700za7za7c2472za7, " else ", 6);
	      DEFINE_STRING(BGl_string2403z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2403za700za7za7c2473za7, " = ", 3);
	      DEFINE_STRING(BGl_string2404z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2404za700za7za7c2474za7, "( ", 2);
	      DEFINE_STRING(BGl_string2405z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2405za700za7za7c2475za7, ") ", 2);
	      DEFINE_STRING(BGl_string2406z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2406za700za7za7c2476za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2407z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2407za700za7za7c2477za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2408z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2408za700za7za7c2478za7, "$", 1);
	      DEFINE_STRING(BGl_string2409z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2409za700za7za7c2479za7, "BGL_REAL_CNST( ", 15);
	      DEFINE_STRING(BGl_string2410z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2410za700za7za7c2480za7, "return ", 7);
	      DEFINE_STRING(BGl_string2411z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2411za700za7za7c2481za7, "{ ", 2);
	      DEFINE_STRING(BGl_string2412z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2412za700za7za7c2482za7, "goto ", 5);
	      DEFINE_STRING(BGl_string2413z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2413za700za7za7c2483za7, "cgen_emit-cop", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2cop1352484z00,
		BGl_z62emitzd2cop1354zb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2414z00zzcgen_emitzd2copzd2,
		BgL_bgl_string2414za700za7za7c2485za7,
		"sreal bigloo light elight foreign bfalse else emit-cop1354 location ", 68);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2331z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22486za7,
		BGl_z62emitzd2copzd2clabel1358z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2333z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22487za7,
		BGl_z62emitzd2copzd2cgoto1360z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2334z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22488za7,
		BGl_z62emitzd2copzd2cblock1362z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2335z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22489za7,
		BGl_z62emitzd2copzd2creturn1364z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2336z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22490za7,
		BGl_z62emitzd2copzd2catom1366z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2337z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22491za7,
		BGl_z62emitzd2copzd2cvoid1368z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2338z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22492za7,
		BGl_z62emitzd2copzd2varc1370z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2339z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22493za7,
		BGl_z62emitzd2copzd2cpragma1372z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2340z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22494za7,
		BGl_z62emitzd2copzd2ccast1375z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2341z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22495za7,
		BGl_z62emitzd2copzd2csequence1377z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22496za7,
		BGl_z62emitzd2copzd2nop1379z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2343z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22497za7,
		BGl_z62emitzd2copzd2stop1381z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2344z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22498za7,
		BGl_z62emitzd2copzd2csetq1383z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2345z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22499za7,
		BGl_z62emitzd2copzd2cif1385z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22500za7,
		BGl_z62emitzd2copzd2localzd2var1387zb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2347z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22501za7,
		BGl_z62emitzd2copzd2bdbzd2block1389zb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22502za7,
		BGl_z62emitzd2copzd2cfuncall1391z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22503za7,
		BGl_z62emitzd2copzd2capply1393z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22504za7,
		BGl_z62emitzd2copzd2capp1395z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22505za7,
		BGl_z62emitzd2copzd2cfail1397z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22506za7,
		BGl_z62emitzd2copzd2cswitch1399z62zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2353z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22507za7,
		BGl_z62emitzd2copzd2cmakezd2box1401zb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2354z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22508za7,
		BGl_z62emitzd2copzd2cboxzd2ref1403zb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2355z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22509za7,
		BGl_z62emitzd2copzd2cboxzd2setz121405za2zzcgen_emitzd2copzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2356z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22510za7,
		BGl_z62emitzd2copzd2csetzd2exzd2it1407z62zzcgen_emitzd2copzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2357z00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7d22511za7,
		BGl_z62emitzd2copzd2cjumpzd2exzd2it1409z62zzcgen_emitzd2copzd2, 0L, BUNSPEC,
		1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
		BgL_bgl_za762emitza7d2copza7b02512za7,
		BGl_z62emitzd2copzb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2currentzd2bdbzd2loczd2envz00zzcgen_emitzd2copzd2,
		BgL_bgl_za762getza7d2current2513z00,
		BGl_z62getzd2currentzd2bdbzd2loczb0zzcgen_emitzd2copzd2, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2));
		     ADD_ROOT((void *) (&BGl_za2bfalseza2z00zzcgen_emitzd2copzd2));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long
		BgL_checksumz00_3687, char *BgL_fromz00_3688)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2))
				{
					BGl_requirezd2initializa7ationz75zzcgen_emitzd2copzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcgen_emitzd2copzd2();
					BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2();
					BGl_cnstzd2initzd2zzcgen_emitzd2copzd2();
					BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2();
					BGl_genericzd2initzd2zzcgen_emitzd2copzd2();
					BGl_methodzd2initzd2zzcgen_emitzd2copzd2();
					return BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 0), "cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cgen_emit-cop");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"cgen_emit-cop");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			{	/* Cgen/emit_cop.scm 15 */
				obj_t BgL_cportz00_3421;

				{	/* Cgen/emit_cop.scm 15 */
					obj_t BgL_stringz00_3429;

					BgL_stringz00_3429 = BGl_string2414z00zzcgen_emitzd2copzd2;
					{	/* Cgen/emit_cop.scm 15 */
						obj_t BgL_startz00_3430;

						BgL_startz00_3430 = BINT(((long) 0));
						{	/* Cgen/emit_cop.scm 15 */
							obj_t BgL_endz00_3431;

							BgL_endz00_3431 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3429)));
							{	/* Cgen/emit_cop.scm 15 */

								BgL_cportz00_3421 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3429, BgL_startz00_3430, BgL_endz00_3431);
				}}}}
				{
					long BgL_iz00_3422;

					BgL_iz00_3422 = ((long) 8);
				BgL_loopz00_3423:
					if ((BgL_iz00_3422 == ((long) -1)))
						{	/* Cgen/emit_cop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/emit_cop.scm 15 */
							{	/* Cgen/emit_cop.scm 15 */
								obj_t BgL_arg2416z00_3425;

								{	/* Cgen/emit_cop.scm 15 */

									{	/* Cgen/emit_cop.scm 15 */
										obj_t BgL_locationz00_3427;

										BgL_locationz00_3427 = BBOOL(((bool_t) 0));
										{	/* Cgen/emit_cop.scm 15 */

											BgL_arg2416z00_3425 =
												BGl_readz00zz__readerz00(BgL_cportz00_3421,
												BgL_locationz00_3427);
										}
									}
								}
								{	/* Cgen/emit_cop.scm 15 */
									int BgL_tmpz00_3724;

									BgL_tmpz00_3724 = (int) (BgL_iz00_3422);
									CNST_TABLE_SET(BgL_tmpz00_3724, BgL_arg2416z00_3425);
							}}
							{	/* Cgen/emit_cop.scm 15 */
								int BgL_auxz00_3428;

								BgL_auxz00_3428 = (int) ((BgL_iz00_3422 - ((long) 1)));
								{
									long BgL_iz00_3729;

									BgL_iz00_3729 = (long) (BgL_auxz00_3428);
									BgL_iz00_3422 = BgL_iz00_3729;
									goto BgL_loopz00_3423;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 = BFALSE;
			return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcgen_emitzd2copzd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1673;

				BgL_headz00_1673 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1674;
					obj_t BgL_tailz00_1675;

					BgL_prevz00_1674 = BgL_headz00_1673;
					BgL_tailz00_1675 = BgL_l1z00_1;
				BgL_loopz00_1676:
					if (PAIRP(BgL_tailz00_1675))
						{
							obj_t BgL_newzd2prevzd2_1678;

							BgL_newzd2prevzd2_1678 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1675), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1674, BgL_newzd2prevzd2_1678);
							{
								obj_t BgL_tailz00_3739;
								obj_t BgL_prevz00_3738;

								BgL_prevz00_3738 = BgL_newzd2prevzd2_1678;
								BgL_tailz00_3739 = CDR(BgL_tailz00_1675);
								BgL_tailz00_1675 = BgL_tailz00_3739;
								BgL_prevz00_1674 = BgL_prevz00_3738;
								goto BgL_loopz00_1676;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1673);
				}
			}
		}

	}



/* reset-bdb-loc! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 646 */
			return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 = BUNSPEC, BUNSPEC);
		}

	}



/* &reset-bdb-loc! */
	obj_t BGl_z62resetzd2bdbzd2locz12z70zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3331)
	{
		{	/* Cgen/emit_cop.scm 646 */
			return BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
		}

	}



/* get-current-bdb-loc */
	BGL_EXPORTED_DEF obj_t BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 652 */
			return BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
		}

	}



/* &get-current-bdb-loc */
	obj_t BGl_z62getzd2currentzd2bdbzd2loczb0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3332)
	{
		{	/* Cgen/emit_cop.scm 652 */
			return BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2();
		}

	}



/* emit-bdb-loc */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t
		BgL_curzd2loczd2_44)
	{
		{	/* Cgen/emit_cop.scm 663 */
		BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2:
			{	/* Cgen/emit_cop.scm 665 */
				bool_t BgL_test2517z00_3744;

				if (CBOOL(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00))
					{	/* Cgen/emit_cop.scm 665 */
						BgL_test2517z00_3744 =
							CBOOL
							(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00);
					}
				else
					{	/* Cgen/emit_cop.scm 665 */
						BgL_test2517z00_3744 = ((bool_t) 1);
					}
				if (BgL_test2517z00_3744)
					{	/* Cgen/emit_cop.scm 665 */
						return
							bgl_display_char(((unsigned char) 10),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 667 */
						bool_t BgL_test2519z00_3749;

						if (STRUCTP(BgL_curzd2loczd2_44))
							{	/* Cgen/emit_cop.scm 667 */
								BgL_test2519z00_3749 =
									(STRUCT_KEY(BgL_curzd2loczd2_44) ==
									CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Cgen/emit_cop.scm 667 */
								BgL_test2519z00_3749 = ((bool_t) 0);
							}
						if (BgL_test2519z00_3749)
							{	/* Cgen/emit_cop.scm 680 */
								obj_t BgL_curzd2fnamezd2_1695;
								obj_t BgL_curzd2linezd2_1696;

								BgL_curzd2fnamezd2_1695 =
									STRUCT_REF(BgL_curzd2loczd2_44, (int) (((long) 0)));
								BgL_curzd2linezd2_1696 =
									STRUCT_REF(BgL_curzd2loczd2_44, (int) (((long) 2)));
								{	/* Cgen/emit_cop.scm 682 */
									bool_t BgL_test2521z00_3759;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BgL_curzd2linezd2_1696))
										{	/* Cgen/emit_cop.scm 682 */
											BgL_test2521z00_3759 = STRINGP(BgL_curzd2fnamezd2_1695);
										}
									else
										{	/* Cgen/emit_cop.scm 682 */
											BgL_test2521z00_3759 = ((bool_t) 0);
										}
									if (BgL_test2521z00_3759)
										{	/* Cgen/emit_cop.scm 683 */
											obj_t BgL_port1353z00_1699;

											BgL_port1353z00_1699 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											{	/* Cgen/emit_cop.scm 683 */
												obj_t BgL_tmpz00_3763;

												BgL_tmpz00_3763 = ((obj_t) BgL_port1353z00_1699);
												bgl_display_string
													(BGl_string2323z00zzcgen_emitzd2copzd2,
													BgL_tmpz00_3763);
											}
											bgl_display_obj(BgL_curzd2linezd2_1696,
												BgL_port1353z00_1699);
											{	/* Cgen/emit_cop.scm 683 */
												obj_t BgL_tmpz00_3767;

												BgL_tmpz00_3767 = ((obj_t) BgL_port1353z00_1699);
												bgl_display_string
													(BGl_string2324z00zzcgen_emitzd2copzd2,
													BgL_tmpz00_3767);
											}
											bgl_display_obj(BgL_curzd2fnamezd2_1695,
												BgL_port1353z00_1699);
											{	/* Cgen/emit_cop.scm 683 */
												obj_t BgL_tmpz00_3771;

												BgL_tmpz00_3771 = ((obj_t) BgL_port1353z00_1699);
												bgl_display_char(((unsigned char) '"'),
													BgL_tmpz00_3771);
											}
											{	/* Cgen/emit_cop.scm 683 */
												obj_t BgL_tmpz00_3774;

												BgL_tmpz00_3774 = ((obj_t) BgL_port1353z00_1699);
												bgl_display_char(((unsigned char) 10), BgL_tmpz00_3774);
										}}
									else
										{	/* Cgen/emit_cop.scm 682 */
											BFALSE;
										}
								}
								return (BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2 =
									BgL_curzd2loczd2_44, BUNSPEC);
							}
						else
							{	/* Cgen/emit_cop.scm 669 */
								bool_t BgL_test2523z00_3777;

								{	/* Cgen/emit_cop.scm 669 */
									obj_t BgL_oz00_2781;

									BgL_oz00_2781 = BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
									if (STRUCTP(BgL_oz00_2781))
										{	/* Cgen/emit_cop.scm 669 */
											BgL_test2523z00_3777 =
												(STRUCT_KEY(BgL_oz00_2781) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Cgen/emit_cop.scm 669 */
											BgL_test2523z00_3777 = ((bool_t) 0);
										}
								}
								if (BgL_test2523z00_3777)
									{
										obj_t BgL_curzd2loczd2_3783;

										BgL_curzd2loczd2_3783 =
											BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2;
										BgL_curzd2loczd2_44 = BgL_curzd2loczd2_3783;
										goto BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2;
									}
								else
									{	/* Cgen/emit_cop.scm 671 */
										bool_t BgL_test2525z00_3784;

										{	/* Cgen/emit_cop.scm 671 */
											obj_t BgL_oz00_2787;

											BgL_oz00_2787 =
												BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
											if (STRUCTP(BgL_oz00_2787))
												{	/* Cgen/emit_cop.scm 671 */
													BgL_test2525z00_3784 =
														(STRUCT_KEY(BgL_oz00_2787) ==
														CNST_TABLE_REF(((long) 0)));
												}
											else
												{	/* Cgen/emit_cop.scm 671 */
													BgL_test2525z00_3784 = ((bool_t) 0);
												}
										}
										if (BgL_test2525z00_3784)
											{
												obj_t BgL_curzd2loczd2_3790;

												BgL_curzd2loczd2_3790 =
													BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
												BgL_curzd2loczd2_44 = BgL_curzd2loczd2_3790;
												goto BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2;
											}
										else
											{	/* Cgen/emit_cop.scm 671 */
												if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
													{	/* Cgen/emit_cop.scm 678 */
														obj_t BgL_port1352z00_1704;

														BgL_port1352z00_1704 =
															BGl_za2czd2portza2zd2zzbackend_c_emitz00;
														{	/* Cgen/emit_cop.scm 678 */
															obj_t BgL_tmpz00_3793;

															BgL_tmpz00_3793 = ((obj_t) BgL_port1352z00_1704);
															bgl_display_string
																(BGl_string2323z00zzcgen_emitzd2copzd2,
																BgL_tmpz00_3793);
														}
														bgl_display_fixnum(BINT(((long) 1)),
															((obj_t) BgL_port1352z00_1704));
														{	/* Cgen/emit_cop.scm 678 */
															obj_t BgL_tmpz00_3799;

															BgL_tmpz00_3799 = ((obj_t) BgL_port1352z00_1704);
															bgl_display_string
																(BGl_string2324z00zzcgen_emitzd2copzd2,
																BgL_tmpz00_3799);
														}
														bgl_display_obj(CAR
															(BGl_za2srczd2filesza2zd2zzengine_paramz00),
															BgL_port1352z00_1704);
														{	/* Cgen/emit_cop.scm 678 */
															obj_t BgL_tmpz00_3804;

															BgL_tmpz00_3804 = ((obj_t) BgL_port1352z00_1704);
															bgl_display_char(((unsigned char) '"'),
																BgL_tmpz00_3804);
														}
														{	/* Cgen/emit_cop.scm 678 */
															obj_t BgL_tmpz00_3807;

															BgL_tmpz00_3807 = ((obj_t) BgL_port1352z00_1704);
															return
																bgl_display_char(((unsigned char) 10),
																BgL_tmpz00_3807);
													}}
												else
													{	/* Cgen/emit_cop.scm 675 */
														return BFALSE;
													}
											}
									}
							}
					}
			}
		}

	}



/* &emit-bdb-loc */
	obj_t BGl_z62emitzd2bdbzd2locz62zzcgen_emitzd2copzd2(obj_t BgL_envz00_3333,
		obj_t BgL_curzd2loczd2_3334)
	{
		{	/* Cgen/emit_cop.scm 663 */
			return BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_curzd2loczd2_3334);
		}

	}



/* emit-bdb-loc-comment */
	obj_t BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2(obj_t
		BgL_curzd2loczd2_45)
	{
		{	/* Cgen/emit_cop.scm 692 */
			{	/* Cgen/emit_cop.scm 693 */
				bool_t BgL_test2528z00_3811;

				if (STRUCTP(BgL_curzd2loczd2_45))
					{	/* Cgen/emit_cop.scm 693 */
						BgL_test2528z00_3811 =
							(STRUCT_KEY(BgL_curzd2loczd2_45) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Cgen/emit_cop.scm 693 */
						BgL_test2528z00_3811 = ((bool_t) 0);
					}
				if (BgL_test2528z00_3811)
					{	/* Cgen/emit_cop.scm 693 */
						bgl_display_string(BGl_string2325z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* Cgen/emit_cop.scm 696 */
							obj_t BgL_arg1476z00_1707;

							BgL_arg1476z00_1707 =
								STRUCT_REF(BgL_curzd2loczd2_45, (int) (((long) 0)));
							bgl_display_obj(BgL_arg1476z00_1707,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						bgl_display_string(BGl_string2326z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* Cgen/emit_cop.scm 698 */
							obj_t BgL_arg1477z00_1708;

							BgL_arg1477z00_1708 =
								STRUCT_REF(BgL_curzd2loczd2_45, (int) (((long) 2)));
							bgl_display_obj(BgL_arg1477z00_1708,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						return
							bgl_display_string(BGl_string2327z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 693 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_proc2328z00zzcgen_emitzd2copzd2, BGl_copz00zzcgen_copz00,
				BGl_string2329z00zzcgen_emitzd2copzd2);
		}

	}



/* &emit-cop1354 */
	obj_t BGl_z62emitzd2cop1354zb0zzcgen_emitzd2copzd2(obj_t BgL_envz00_3336,
		obj_t BgL_copz00_3337)
	{
		{	/* Cgen/emit_cop.scm 45 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string2330z00zzcgen_emitzd2copzd2,
				((obj_t) ((BgL_copz00_bglt) BgL_copz00_3337)));
		}

	}



/* emit-cop */
	BGL_EXPORTED_DEF bool_t BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt
		BgL_copz00_17)
	{
		{	/* Cgen/emit_cop.scm 45 */
			{	/* Cgen/emit_cop.scm 45 */
				obj_t BgL_method1356z00_1713;

				{	/* Cgen/emit_cop.scm 45 */
					obj_t BgL_res2235z00_2854;

					{	/* Cgen/emit_cop.scm 45 */
						long BgL_objzd2classzd2numz00_2819;

						{	/* Cgen/emit_cop.scm 45 */
							long BgL_res2225z00_2822;

							BgL_res2225z00_2822 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_copz00_17));
							BgL_objzd2classzd2numz00_2819 = BgL_res2225z00_2822;
						}
						{	/* Cgen/emit_cop.scm 45 */
							obj_t BgL_arg1813z00_2820;

							BgL_arg1813z00_2820 =
								PROCEDURE_REF(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
								(int) (((long) 1)));
							{	/* Cgen/emit_cop.scm 45 */
								int BgL_offsetz00_2824;

								BgL_offsetz00_2824 = (int) (BgL_objzd2classzd2numz00_2819);
								{	/* Cgen/emit_cop.scm 45 */
									long BgL_offsetz00_2825;

									BgL_offsetz00_2825 =
										((long) (BgL_offsetz00_2824) - OBJECT_TYPE);
									{	/* Cgen/emit_cop.scm 45 */
										long BgL_modz00_2826;

										BgL_modz00_2826 =
											(BgL_offsetz00_2825 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cgen/emit_cop.scm 45 */
											long BgL_restz00_2828;

											BgL_restz00_2828 =
												(BgL_offsetz00_2825 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cgen/emit_cop.scm 45 */

												{	/* Cgen/emit_cop.scm 45 */
													obj_t BgL_bucketz00_2830;

													BgL_bucketz00_2830 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2820), BgL_modz00_2826);
													BgL_res2235z00_2854 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2830), BgL_restz00_2828);
					}}}}}}}}
					BgL_method1356z00_1713 = BgL_res2235z00_2854;
				}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method1356z00_1713) (BgL_method1356z00_1713,
						((obj_t) BgL_copz00_17), BEOA));
			}
		}

	}



/* &emit-cop */
	obj_t BGl_z62emitzd2copzb0zzcgen_emitzd2copzd2(obj_t BgL_envz00_3338,
		obj_t BgL_copz00_3339)
	{
		{	/* Cgen/emit_cop.scm 45 */
			return
				BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
					((BgL_copz00_bglt) BgL_copz00_3339)));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_clabelz00zzcgen_copz00, BGl_proc2331z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cgotoz00zzcgen_copz00,
				BGl_proc2333z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cblockz00zzcgen_copz00, BGl_proc2334z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_creturnz00zzcgen_copz00, BGl_proc2335z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_catomz00zzcgen_copz00,
				BGl_proc2336z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cvoidz00zzcgen_copz00,
				BGl_proc2337z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_varcz00zzcgen_copz00,
				BGl_proc2338z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cpragmaz00zzcgen_copz00, BGl_proc2339z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_ccastz00zzcgen_copz00,
				BGl_proc2340z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_csequencez00zzcgen_copz00, BGl_proc2341z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_nopz00zzcgen_copz00,
				BGl_proc2342z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_stopz00zzcgen_copz00,
				BGl_proc2343z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_csetqz00zzcgen_copz00,
				BGl_proc2344z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cifz00zzcgen_copz00,
				BGl_proc2345z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_localzd2varzd2zzcgen_copz00, BGl_proc2346z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_bdbzd2blockzd2zzcgen_copz00, BGl_proc2347z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cfuncallz00zzcgen_copz00, BGl_proc2348z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_capplyz00zzcgen_copz00, BGl_proc2349z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cappz00zzcgen_copz00,
				BGl_proc2350z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2, BGl_cfailz00zzcgen_copz00,
				BGl_proc2351z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cswitchz00zzcgen_copz00, BGl_proc2352z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cmakezd2boxzd2zzcgen_copz00, BGl_proc2353z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cboxzd2refzd2zzcgen_copz00, BGl_proc2354z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cboxzd2setz12zc0zzcgen_copz00, BGl_proc2355z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_csetzd2exzd2itz00zzcgen_copz00, BGl_proc2356z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2copzd2envz00zzcgen_emitzd2copzd2,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00,
				BGl_proc2357z00zzcgen_emitzd2copzd2,
				BGl_string2332z00zzcgen_emitzd2copzd2);
		}

	}



/* &emit-cop-cjump-ex-it1409 */
	obj_t BGl_z62emitzd2copzd2cjumpzd2exzd2it1409z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3366, obj_t BgL_copz00_3367)
	{
		{	/* Cgen/emit_cop.scm 626 */
			{	/* Cgen/emit_cop.scm 627 */
				bool_t BgL_tmpz00_3891;

				{	/* Cgen/emit_cop.scm 628 */
					obj_t BgL_arg2122z00_3436;

					BgL_arg2122z00_3436 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cjumpzd2exzd2itz00_bglt) BgL_copz00_3367))))->
						BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2122z00_3436);
				}
				bgl_display_string(BGl_string2358z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cjumpzd2exzd2itz00_bglt)
							COBJECT(((BgL_cjumpzd2exzd2itz00_bglt) BgL_copz00_3367)))->
						BgL_exitz00));
				bgl_display_char(((unsigned char) ','),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cjumpzd2exzd2itz00_bglt)
							COBJECT(((BgL_cjumpzd2exzd2itz00_bglt) BgL_copz00_3367)))->
						BgL_valuez00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_3891 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_3891);
			}
		}

	}



/* &emit-cop-cset-ex-it1407 */
	obj_t BGl_z62emitzd2copzd2csetzd2exzd2it1407z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3368, obj_t BgL_copz00_3369)
	{
		{	/* Cgen/emit_cop.scm 604 */
			{	/* Cgen/emit_cop.scm 605 */
				bool_t BgL_tmpz00_3906;

				{	/* Cgen/emit_cop.scm 606 */
					obj_t BgL_arg2114z00_3438;

					BgL_arg2114z00_3438 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369))))->
						BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2114z00_3438);
				}
				bgl_display_string(BGl_string2359z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_csetzd2exzd2itz00_bglt)
							COBJECT(((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369)))->
						BgL_exitz00));
				bgl_display_string(BGl_string2360z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				if (BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_csetzd2exzd2itz00_bglt)
								COBJECT(((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369)))->
							BgL_jumpzd2valuezd2)))
					{	/* Cgen/emit_cop.scm 611 */
						bgl_display_string(BGl_string2361z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 611 */
						BFALSE;
					}
				{	/* Cgen/emit_cop.scm 612 */
					obj_t BgL_arg2119z00_3439;

					BgL_arg2119z00_3439 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369))))->
						BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2119z00_3439);
				}
				bgl_display_string(BGl_string2362z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				bgl_display_string(BGl_string2363z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				bgl_display_string(BGl_string2364z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				bgl_display_string(BGl_string2365z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_csetzd2exzd2itz00_bglt)
							COBJECT(((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369)))->
						BgL_bodyz00));
				{	/* Cgen/emit_cop.scm 618 */
					obj_t BgL_arg2121z00_3440;

					BgL_arg2121z00_3440 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetzd2exzd2itz00_bglt) BgL_copz00_3369))))->
						BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2121z00_3440);
				}
				bgl_display_string(BGl_string2366z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_3906 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_3906);
			}
		}

	}



/* &emit-cop-cbox-set!1405 */
	obj_t BGl_z62emitzd2copzd2cboxzd2setz121405za2zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3370, obj_t BgL_copz00_3371)
	{
		{	/* Cgen/emit_cop.scm 591 */
			{	/* Cgen/emit_cop.scm 592 */
				bool_t BgL_tmpz00_3938;

				{	/* Cgen/emit_cop.scm 593 */
					obj_t BgL_arg2110z00_3442;

					BgL_arg2110z00_3442 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cboxzd2setz12zc0_bglt) BgL_copz00_3371))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2110z00_3442);
				}
				bgl_display_string(BGl_string2367z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cboxzd2setz12zc0_bglt)
							COBJECT(((BgL_cboxzd2setz12zc0_bglt) BgL_copz00_3371)))->
						BgL_varz00));
				bgl_display_string(BGl_string2368z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cboxzd2setz12zc0_bglt)
							COBJECT(((BgL_cboxzd2setz12zc0_bglt) BgL_copz00_3371)))->
						BgL_valuez00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_3938 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_3938);
			}
		}

	}



/* &emit-cop-cbox-ref1403 */
	obj_t BGl_z62emitzd2copzd2cboxzd2ref1403zb0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3372, obj_t BgL_copz00_3373)
	{
		{	/* Cgen/emit_cop.scm 580 */
			{	/* Cgen/emit_cop.scm 581 */
				bool_t BgL_tmpz00_3953;

				{	/* Cgen/emit_cop.scm 582 */
					obj_t BgL_arg2108z00_3444;

					BgL_arg2108z00_3444 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cboxzd2refzd2_bglt) BgL_copz00_3373))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2108z00_3444);
				}
				bgl_display_string(BGl_string2369z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cboxzd2refzd2_bglt)
							COBJECT(((BgL_cboxzd2refzd2_bglt) BgL_copz00_3373)))->
						BgL_varz00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_3953 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_3953);
			}
		}

	}



/* &emit-cop-cmake-box1401 */
	obj_t BGl_z62emitzd2copzd2cmakezd2box1401zb0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3374, obj_t BgL_copz00_3375)
	{
		{	/* Cgen/emit_cop.scm 561 */
			{	/* Cgen/emit_cop.scm 562 */
				bool_t BgL_tmpz00_3964;

				{	/* Cgen/emit_cop.scm 563 */
					obj_t BgL_arg2100z00_3446;

					BgL_arg2100z00_3446 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cmakezd2boxzd2_bglt) BgL_copz00_3375))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2100z00_3446);
				}
				{	/* Cgen/emit_cop.scm 564 */
					bool_t BgL_test2531z00_3969;

					{	/* Cgen/emit_cop.scm 564 */
						obj_t BgL_arg2107z00_3447;

						BgL_arg2107z00_3447 =
							(((BgL_cmakezd2boxzd2_bglt) COBJECT(
									((BgL_cmakezd2boxzd2_bglt) BgL_copz00_3375)))->
							BgL_stackablez00);
						BgL_test2531z00_3969 =
							BGl_isazf3zf3zz__objectz00(BgL_arg2107z00_3447,
							BGl_localz00zzast_varz00);
					}
					if (BgL_test2531z00_3969)
						{	/* Cgen/emit_cop.scm 564 */
							bgl_display_string(BGl_string2370z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cmakezd2boxzd2_bglt)
										COBJECT(((BgL_cmakezd2boxzd2_bglt) BgL_copz00_3375)))->
									BgL_valuez00));
							bgl_display_char(((unsigned char) ','),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* Cgen/emit_cop.scm 569 */
								obj_t BgL_arg2104z00_3448;

								BgL_arg2104z00_3448 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												(((BgL_cmakezd2boxzd2_bglt) COBJECT(
															((BgL_cmakezd2boxzd2_bglt) BgL_copz00_3375)))->
													BgL_stackablez00))))->BgL_namez00);
								bgl_display_obj(BgL_arg2104z00_3448,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
							bgl_display_char(((unsigned char) ')'),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* Cgen/emit_cop.scm 564 */
							bgl_display_string(BGl_string2371z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cmakezd2boxzd2_bglt)
										COBJECT(((BgL_cmakezd2boxzd2_bglt) BgL_copz00_3375)))->
									BgL_valuez00));
							bgl_display_char(((unsigned char) ')'),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}}
				BgL_tmpz00_3964 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_3964);
			}
		}

	}



/* &emit-cop-cswitch1399 */
	obj_t BGl_z62emitzd2copzd2cswitch1399z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3376, obj_t BgL_copz00_3377)
	{
		{	/* Cgen/emit_cop.scm 517 */
			{	/* Cgen/emit_cop.scm 518 */
				bool_t BgL_tmpz00_3990;

				{	/* Cgen/emit_cop.scm 519 */
					obj_t BgL_arg2070z00_3450;

					BgL_arg2070z00_3450 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cswitchz00_bglt) BgL_copz00_3377))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2070z00_3450);
				}
				bgl_display_string(BGl_string2372z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cswitchz00_bglt)
							COBJECT(((BgL_cswitchz00_bglt) BgL_copz00_3377)))->BgL_testz00));
				bgl_display_string(BGl_string2373z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{
					obj_t BgL_clausesz00_3452;
					obj_t BgL_seenz00_3453;

					BgL_clausesz00_3452 =
						(((BgL_cswitchz00_bglt) COBJECT(
								((BgL_cswitchz00_bglt) BgL_copz00_3377)))->BgL_clausesz00);
					BgL_seenz00_3453 = BNIL;
				BgL_loopz00_3451:
					{	/* Cgen/emit_cop.scm 526 */
						obj_t BgL_clausez00_3454;

						BgL_clausez00_3454 = CAR(((obj_t) BgL_clausesz00_3452));
						if (
							(CAR(((obj_t) BgL_clausez00_3454)) == CNST_TABLE_REF(((long) 2))))
							{	/* Cgen/emit_cop.scm 529 */
								obj_t BgL_locz00_3455;

								BgL_locz00_3455 =
									(((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt)
												CDR(((obj_t) BgL_clausez00_3454)))))->BgL_locz00);
								BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_locz00_3455);
								bgl_display_string(BGl_string2374z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								{	/* Cgen/emit_cop.scm 532 */
									bool_t BgL_test2533z00_4013;

									{	/* Cgen/emit_cop.scm 532 */
										obj_t BgL_arg2079z00_3456;

										BgL_arg2079z00_3456 = CDR(((obj_t) BgL_clausez00_3454));
										BgL_test2533z00_4013 =
											BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
											((BgL_copz00_bglt) BgL_arg2079z00_3456));
									}
									if (BgL_test2533z00_4013)
										{	/* Cgen/emit_cop.scm 532 */
											bgl_display_string(BGl_string2375z00zzcgen_emitzd2copzd2,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											BNIL;
										}
									else
										{	/* Cgen/emit_cop.scm 532 */
											BFALSE;
										}
								}
								bgl_display_string(BGl_string2366z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								BgL_tmpz00_3990 = ((bool_t) 0);
							}
						else
							{	/* Cgen/emit_cop.scm 540 */
								bool_t BgL_test2534z00_4020;

								{
									obj_t BgL_l1345z00_3458;

									BgL_l1345z00_3458 = CAR(((obj_t) BgL_clausez00_3454));
								BgL_zc3z04anonymousza32096ze3z87_3457:
									if (NULLP(BgL_l1345z00_3458))
										{	/* Cgen/emit_cop.scm 540 */
											BgL_test2534z00_4020 = ((bool_t) 1);
										}
									else
										{	/* Cgen/emit_cop.scm 540 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
															((obj_t) BgL_l1345z00_3458)), BgL_seenz00_3453)))
												{
													obj_t BgL_l1345z00_4028;

													BgL_l1345z00_4028 = CDR(((obj_t) BgL_l1345z00_3458));
													BgL_l1345z00_3458 = BgL_l1345z00_4028;
													goto BgL_zc3z04anonymousza32096ze3z87_3457;
												}
											else
												{	/* Cgen/emit_cop.scm 540 */
													BgL_test2534z00_4020 = ((bool_t) 0);
												}
										}
								}
								if (BgL_test2534z00_4020)
									{	/* Cgen/emit_cop.scm 541 */
										obj_t BgL_arg2085z00_3459;

										BgL_arg2085z00_3459 = CDR(((obj_t) BgL_clausesz00_3452));
										{
											obj_t BgL_clausesz00_4035;

											BgL_clausesz00_4035 = BgL_arg2085z00_3459;
											BgL_clausesz00_3452 = BgL_clausesz00_4035;
											goto BgL_loopz00_3451;
										}
									}
								else
									{	/* Cgen/emit_cop.scm 540 */
										{	/* Cgen/emit_cop.scm 543 */
											obj_t BgL_g1351z00_3460;

											BgL_g1351z00_3460 = CAR(((obj_t) BgL_clausez00_3454));
											{
												obj_t BgL_l1349z00_3462;

												BgL_l1349z00_3462 = BgL_g1351z00_3460;
											BgL_zc3z04anonymousza32086ze3z87_3461:
												if (PAIRP(BgL_l1349z00_3462))
													{	/* Cgen/emit_cop.scm 549 */
														{	/* Cgen/emit_cop.scm 544 */
															obj_t BgL_tz00_3463;

															BgL_tz00_3463 = CAR(BgL_l1349z00_3462);
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_tz00_3463, BgL_seenz00_3453)))
																{	/* Cgen/emit_cop.scm 544 */
																	BFALSE;
																}
															else
																{	/* Cgen/emit_cop.scm 544 */
																	bgl_display_string
																		(BGl_string2376z00zzcgen_emitzd2copzd2,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00
																		(BgL_tz00_3463);
																	bgl_display_string
																		(BGl_string2377z00zzcgen_emitzd2copzd2,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	bgl_display_char(((unsigned char) 10),
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}}
														{
															obj_t BgL_l1349z00_4048;

															BgL_l1349z00_4048 = CDR(BgL_l1349z00_3462);
															BgL_l1349z00_3462 = BgL_l1349z00_4048;
															goto BgL_zc3z04anonymousza32086ze3z87_3461;
														}
													}
												else
													{	/* Cgen/emit_cop.scm 549 */
														((bool_t) 1);
													}
											}
										}
										{	/* Cgen/emit_cop.scm 550 */
											bool_t BgL_test2539z00_4050;

											{	/* Cgen/emit_cop.scm 550 */
												obj_t BgL_arg2092z00_3464;

												BgL_arg2092z00_3464 = CDR(((obj_t) BgL_clausez00_3454));
												BgL_test2539z00_4050 =
													BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
													((BgL_copz00_bglt) BgL_arg2092z00_3464));
											}
											if (BgL_test2539z00_4050)
												{	/* Cgen/emit_cop.scm 550 */
													bgl_display_string
														(BGl_string2375z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BNIL;
												}
											else
												{	/* Cgen/emit_cop.scm 550 */
													BFALSE;
												}
										}
										bgl_display_string(BGl_string2378z00zzcgen_emitzd2copzd2,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/emit_cop.scm 556 */
											obj_t BgL_arg2093z00_3465;
											obj_t BgL_arg2094z00_3466;

											BgL_arg2093z00_3465 = CDR(((obj_t) BgL_clausesz00_3452));
											{	/* Cgen/emit_cop.scm 556 */
												obj_t BgL_arg2095z00_3467;

												BgL_arg2095z00_3467 = CAR(((obj_t) BgL_clausez00_3454));
												BgL_arg2094z00_3466 =
													BGl_appendzd221011zd2zzcgen_emitzd2copzd2
													(BgL_arg2095z00_3467, BgL_seenz00_3453);
											}
											{
												obj_t BgL_seenz00_4063;
												obj_t BgL_clausesz00_4062;

												BgL_clausesz00_4062 = BgL_arg2093z00_3465;
												BgL_seenz00_4063 = BgL_arg2094z00_3466;
												BgL_seenz00_3453 = BgL_seenz00_4063;
												BgL_clausesz00_3452 = BgL_clausesz00_4062;
												goto BgL_loopz00_3451;
											}
										}
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_3990);
			}
		}

	}



/* &emit-cop-cfail1397 */
	obj_t BGl_z62emitzd2copzd2cfail1397z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3378, obj_t BgL_copz00_3379)
	{
		{	/* Cgen/emit_cop.scm 486 */
			{	/* Cgen/emit_cop.scm 487 */
				bool_t BgL_tmpz00_4067;

				{	/* Cgen/emit_cop.scm 488 */
					obj_t BgL_arg2022z00_3469;

					BgL_arg2022z00_3469 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cfailz00_bglt) BgL_copz00_3379))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg2022z00_3469);
				}
				if (CBOOL(BGl_za2bfalseza2z00zzcgen_emitzd2copzd2))
					{	/* Cgen/emit_cop.scm 489 */
						BFALSE;
					}
				else
					{	/* Cgen/emit_cop.scm 489 */
						BGl_za2bfalseza2z00zzcgen_emitzd2copzd2 =
							BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									3)), CNST_TABLE_REF(((long) 4)));
					}
				{	/* Cgen/emit_cop.scm 492 */
					bool_t BgL_test2541z00_4077;

					{	/* Cgen/emit_cop.scm 492 */
						bool_t BgL_test2542z00_4078;

						{	/* Cgen/emit_cop.scm 492 */
							BgL_copz00_bglt BgL_arg2069z00_3470;

							BgL_arg2069z00_3470 =
								(((BgL_cfailz00_bglt) COBJECT(
										((BgL_cfailz00_bglt) BgL_copz00_3379)))->BgL_procz00);
							{	/* Cgen/emit_cop.scm 492 */
								bool_t BgL_res2316z00_3471;

								BgL_res2316z00_3471 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2069z00_3470), BGl_varcz00zzcgen_copz00);
								BgL_test2542z00_4078 = BgL_res2316z00_3471;
						}}
						if (BgL_test2542z00_4078)
							{	/* Cgen/emit_cop.scm 492 */
								bool_t BgL_test2543z00_4083;

								{	/* Cgen/emit_cop.scm 492 */
									BgL_variablez00_bglt BgL_arg2066z00_3472;

									BgL_arg2066z00_3472 =
										(((BgL_varcz00_bglt) COBJECT(
												((BgL_varcz00_bglt)
													(((BgL_cfailz00_bglt) COBJECT(
																((BgL_cfailz00_bglt) BgL_copz00_3379)))->
														BgL_procz00))))->BgL_variablez00);
									BgL_test2543z00_4083 =
										(((obj_t) BgL_arg2066z00_3472) ==
										BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
								}
								if (BgL_test2543z00_4083)
									{	/* Cgen/emit_cop.scm 493 */
										bool_t BgL_test2544z00_4090;

										{	/* Cgen/emit_cop.scm 493 */
											BgL_copz00_bglt BgL_arg2065z00_3473;

											BgL_arg2065z00_3473 =
												(((BgL_cfailz00_bglt) COBJECT(
														((BgL_cfailz00_bglt) BgL_copz00_3379)))->
												BgL_msgz00);
											{	/* Cgen/emit_cop.scm 493 */
												bool_t BgL_res2317z00_3474;

												BgL_res2317z00_3474 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_arg2065z00_3473),
													BGl_varcz00zzcgen_copz00);
												BgL_test2544z00_4090 = BgL_res2317z00_3474;
											}
										}
										if (BgL_test2544z00_4090)
											{	/* Cgen/emit_cop.scm 493 */
												bool_t BgL_test2545z00_4095;

												{	/* Cgen/emit_cop.scm 493 */
													BgL_variablez00_bglt BgL_arg2062z00_3475;

													BgL_arg2062z00_3475 =
														(((BgL_varcz00_bglt) COBJECT(
																((BgL_varcz00_bglt)
																	(((BgL_cfailz00_bglt) COBJECT(
																				((BgL_cfailz00_bglt)
																					BgL_copz00_3379)))->BgL_msgz00))))->
														BgL_variablez00);
													BgL_test2545z00_4095 =
														(((obj_t) BgL_arg2062z00_3475) ==
														BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
												}
												if (BgL_test2545z00_4095)
													{	/* Cgen/emit_cop.scm 494 */
														bool_t BgL_test2546z00_4102;

														{	/* Cgen/emit_cop.scm 494 */
															BgL_copz00_bglt BgL_arg2061z00_3476;

															BgL_arg2061z00_3476 =
																(((BgL_cfailz00_bglt) COBJECT(
																		((BgL_cfailz00_bglt) BgL_copz00_3379)))->
																BgL_objz00);
															{	/* Cgen/emit_cop.scm 494 */
																bool_t BgL_res2318z00_3477;

																BgL_res2318z00_3477 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_arg2061z00_3476),
																	BGl_varcz00zzcgen_copz00);
																BgL_test2546z00_4102 = BgL_res2318z00_3477;
															}
														}
														if (BgL_test2546z00_4102)
															{	/* Cgen/emit_cop.scm 494 */
																BgL_variablez00_bglt BgL_arg2059z00_3478;

																BgL_arg2059z00_3478 =
																	(((BgL_varcz00_bglt) COBJECT(
																			((BgL_varcz00_bglt)
																				(((BgL_cfailz00_bglt) COBJECT(
																							((BgL_cfailz00_bglt)
																								BgL_copz00_3379)))->
																					BgL_objz00))))->BgL_variablez00);
																BgL_test2541z00_4077 =
																	(((obj_t) BgL_arg2059z00_3478) ==
																	BGl_za2bfalseza2z00zzcgen_emitzd2copzd2);
															}
														else
															{	/* Cgen/emit_cop.scm 494 */
																BgL_test2541z00_4077 = ((bool_t) 0);
															}
													}
												else
													{	/* Cgen/emit_cop.scm 493 */
														BgL_test2541z00_4077 = ((bool_t) 0);
													}
											}
										else
											{	/* Cgen/emit_cop.scm 493 */
												BgL_test2541z00_4077 = ((bool_t) 0);
											}
									}
								else
									{	/* Cgen/emit_cop.scm 492 */
										BgL_test2541z00_4077 = ((bool_t) 0);
									}
							}
						else
							{	/* Cgen/emit_cop.scm 492 */
								BgL_test2541z00_4077 = ((bool_t) 0);
							}
					}
					if (BgL_test2541z00_4077)
						{	/* Cgen/emit_cop.scm 492 */
							bgl_display_string(BGl_string2379z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* Cgen/emit_cop.scm 492 */
							if (
								((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) <=
									((long) 0)))
								{	/* Cgen/emit_cop.scm 496 */
									bgl_display_string(BGl_string2380z00zzcgen_emitzd2copzd2,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_procz00));
									bgl_display_char(((unsigned char) ','),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_msgz00));
									bgl_display_char(((unsigned char) ','),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_objz00));
									bgl_display_string(BGl_string2381z00zzcgen_emitzd2copzd2,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								}
							else
								{	/* Cgen/emit_cop.scm 496 */
									bgl_display_string(BGl_string2382z00zzcgen_emitzd2copzd2,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_procz00));
									bgl_display_char(((unsigned char) ','),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_msgz00));
									bgl_display_char(((unsigned char) ','),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfailz00_bglt)
												COBJECT(((BgL_cfailz00_bglt) BgL_copz00_3379)))->
											BgL_objz00));
									bgl_display_string(BGl_string2383z00zzcgen_emitzd2copzd2,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}}}
				BgL_tmpz00_4067 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4067);
			}
		}

	}



/* &emit-cop-capp1395 */
	obj_t BGl_z62emitzd2copzd2capp1395z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3380, obj_t BgL_copz00_3381)
	{
		{	/* Cgen/emit_cop.scm 420 */
			{

				{	/* Cgen/emit_cop.scm 465 */
					BgL_variablez00_bglt BgL_funz00_3493;
					obj_t BgL_locz00_3494;

					BgL_funz00_3493 =
						(((BgL_varcz00_bglt) COBJECT(
								((BgL_varcz00_bglt)
									(((BgL_cappz00_bglt) COBJECT(
												((BgL_cappz00_bglt) BgL_copz00_3381)))->BgL_funz00))))->
						BgL_variablez00);
					BgL_locz00_3494 =
						(((BgL_copz00_bglt) COBJECT(((BgL_copz00_bglt) ((BgL_cappz00_bglt)
										BgL_copz00_3381))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_locz00_3494);
					{	/* Cgen/emit_cop.scm 469 */
						bool_t BgL_test2548z00_4152;

						{	/* Cgen/emit_cop.scm 469 */
							bool_t BgL_test2549z00_4153;

							{	/* Cgen/emit_cop.scm 469 */
								BgL_valuez00_bglt BgL_arg1987z00_3495;

								BgL_arg1987z00_3495 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_funz00_3493))))->
									BgL_valuez00);
								{	/* Cgen/emit_cop.scm 469 */
									bool_t BgL_res2314z00_3496;

									BgL_res2314z00_3496 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1987z00_3495), BGl_cfunz00zzast_varz00);
									BgL_test2549z00_4153 = BgL_res2314z00_3496;
								}
							}
							if (BgL_test2549z00_4153)
								{	/* Cgen/emit_cop.scm 469 */
									BgL_test2548z00_4152 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_funz00_3493))))->
														BgL_valuez00))))->BgL_infixzf3zf3);
								}
							else
								{	/* Cgen/emit_cop.scm 469 */
									BgL_test2548z00_4152 = ((bool_t) 0);
								}
						}
						if (BgL_test2548z00_4152)
							{	/* Cgen/emit_cop.scm 470 */
								bool_t BgL_tmpz00_4164;

								{	/* Cgen/emit_cop.scm 423 */
									obj_t BgL_actualsz00_3482;

									BgL_actualsz00_3482 =
										(((BgL_cappz00_bglt) COBJECT(
												((BgL_cappz00_bglt) BgL_copz00_3381)))->BgL_argsz00);
									bgl_display_char(((unsigned char) '('),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									if (NULLP(BgL_actualsz00_3482))
										{	/* Cgen/emit_cop.scm 427 */
											BgL_copz00_bglt BgL_arg1991z00_3483;

											BgL_arg1991z00_3483 =
												(((BgL_cappz00_bglt) COBJECT(
														((BgL_cappz00_bglt) BgL_copz00_3381)))->BgL_funz00);
											BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2
												(BgL_arg1991z00_3483));
										}
									else
										{	/* Cgen/emit_cop.scm 426 */
											if (NULLP(CDR(((obj_t) BgL_actualsz00_3482))))
												{	/* Cgen/emit_cop.scm 428 */
													{	/* Cgen/emit_cop.scm 429 */
														obj_t BgL_arg1995z00_3484;

														BgL_arg1995z00_3484 =
															CAR(((obj_t) BgL_actualsz00_3482));
														BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
															((BgL_copz00_bglt) BgL_arg1995z00_3484));
													}
													{	/* Cgen/emit_cop.scm 430 */
														BgL_copz00_bglt BgL_arg1996z00_3485;

														BgL_arg1996z00_3485 =
															(((BgL_cappz00_bglt) COBJECT(
																	((BgL_cappz00_bglt) BgL_copz00_3381)))->
															BgL_funz00);
														BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2
															(BgL_arg1996z00_3485));
													}
												}
											else
												{	/* Cgen/emit_cop.scm 431 */
													bool_t BgL_test2552z00_4186;

													{	/* Cgen/emit_cop.scm 431 */
														obj_t BgL_tmpz00_4187;

														{	/* Cgen/emit_cop.scm 431 */
															obj_t BgL_pairz00_3486;

															BgL_pairz00_3486 =
																CDR(((obj_t) BgL_actualsz00_3482));
															BgL_tmpz00_4187 = CDR(BgL_pairz00_3486);
														}
														BgL_test2552z00_4186 = NULLP(BgL_tmpz00_4187);
													}
													if (BgL_test2552z00_4186)
														{	/* Cgen/emit_cop.scm 431 */
															{	/* Cgen/emit_cop.scm 432 */
																obj_t BgL_arg1999z00_3487;

																BgL_arg1999z00_3487 =
																	CAR(((obj_t) BgL_actualsz00_3482));
																BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																	((BgL_copz00_bglt) BgL_arg1999z00_3487));
															}
															BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																(((BgL_cappz00_bglt) COBJECT(
																			((BgL_cappz00_bglt) BgL_copz00_3381)))->
																	BgL_funz00));
															{	/* Cgen/emit_cop.scm 434 */
																obj_t BgL_arg2001z00_3488;

																{	/* Cgen/emit_cop.scm 434 */
																	obj_t BgL_pairz00_3489;

																	BgL_pairz00_3489 =
																		CDR(((obj_t) BgL_actualsz00_3482));
																	BgL_arg2001z00_3488 = CAR(BgL_pairz00_3489);
																}
																BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																		((BgL_copz00_bglt) BgL_arg2001z00_3488)));
															}
														}
													else
														{	/* Cgen/emit_cop.scm 437 */
															obj_t BgL_arg2002z00_3490;

															{	/* Cgen/emit_cop.scm 437 */
																BgL_variablez00_bglt BgL_arg2003z00_3491;

																BgL_arg2003z00_3491 =
																	(((BgL_varcz00_bglt) COBJECT(
																			((BgL_varcz00_bglt)
																				(((BgL_cappz00_bglt) COBJECT(
																							((BgL_cappz00_bglt)
																								BgL_copz00_3381)))->
																					BgL_funz00))))->BgL_variablez00);
																BgL_arg2002z00_3490 =
																	BGl_shapez00zztools_shapez00(((obj_t)
																		BgL_arg2003z00_3491));
															}
															BGl_errorz00zz__errorz00
																(BGl_string2332z00zzcgen_emitzd2copzd2,
																BGl_string2384z00zzcgen_emitzd2copzd2,
																BgL_arg2002z00_3490);
														}
												}
										}
									bgl_display_char(((unsigned char) ')'),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BgL_tmpz00_4164 = ((bool_t) 1);
								}
								return BBOOL(BgL_tmpz00_4164);
							}
						else
							{	/* Cgen/emit_cop.scm 471 */
								bool_t BgL_test2553z00_4214;

								{	/* Cgen/emit_cop.scm 471 */
									bool_t BgL_test2554z00_4215;

									{	/* Cgen/emit_cop.scm 471 */
										BgL_valuez00_bglt BgL_arg1985z00_3497;

										BgL_arg1985z00_3497 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_funz00_3493))))->
											BgL_valuez00);
										{	/* Cgen/emit_cop.scm 471 */
											bool_t BgL_res2315z00_3498;

											BgL_res2315z00_3498 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1985z00_3497), BGl_cfunz00zzast_varz00);
											BgL_test2554z00_4215 = BgL_res2315z00_3498;
										}
									}
									if (BgL_test2554z00_4215)
										{	/* Cgen/emit_cop.scm 471 */
											BgL_test2553z00_4214 =
												(((BgL_cfunz00_bglt) COBJECT(
														((BgL_cfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_funz00_3493))))->BgL_valuez00))))->
												BgL_macrozf3zf3);
										}
									else
										{	/* Cgen/emit_cop.scm 471 */
											BgL_test2553z00_4214 = ((bool_t) 0);
										}
								}
								if (BgL_test2553z00_4214)
									{	/* Cgen/emit_cop.scm 471 */
										{	/* Cgen/emit_cop.scm 461 */
											obj_t BgL_oz00_3492;

											BgL_oz00_3492 =
												BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
											BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00
												= BTRUE;
											BGl_emitzd2prefixzd2cappze70ze7zzcgen_emitzd2copzd2((
													(BgL_cappz00_bglt) BgL_copz00_3381));
											return
												(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00
												= BgL_oz00_3492, BUNSPEC);
										}
									}
								else
									{	/* Cgen/emit_cop.scm 471 */
										return
											BBOOL(BGl_emitzd2prefixzd2cappze70ze7zzcgen_emitzd2copzd2(
												((BgL_cappz00_bglt) BgL_copz00_3381)));
									}
							}
					}
				}
			}
		}

	}



/* emit-prefix-capp~0 */
	bool_t BGl_emitzd2prefixzd2cappze70ze7zzcgen_emitzd2copzd2(BgL_cappz00_bglt
		BgL_copz00_3419)
	{
		{	/* Cgen/emit_cop.scm 458 */
			{	/* Cgen/emit_cop.scm 442 */
				obj_t BgL_actualsz00_2329;

				BgL_actualsz00_2329 =
					(((BgL_cappz00_bglt) COBJECT(BgL_copz00_3419))->BgL_argsz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
					(((BgL_cappz00_bglt) COBJECT(BgL_copz00_3419))->BgL_funz00));
				bgl_display_char(((unsigned char) '('),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				if (NULLP(BgL_actualsz00_2329))
					{	/* Cgen/emit_cop.scm 445 */
						bgl_display_char(((unsigned char) ')'),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						return ((bool_t) 1);
					}
				else
					{
						obj_t BgL_actualsz00_2333;

						BgL_actualsz00_2333 = BgL_actualsz00_2329;
					BgL_zc3z04anonymousza32012ze3z87_2334:
						if (NULLP(CDR(((obj_t) BgL_actualsz00_2333))))
							{	/* Cgen/emit_cop.scm 450 */
								{	/* Cgen/emit_cop.scm 452 */
									obj_t BgL_arg2016z00_2337;

									BgL_arg2016z00_2337 = CAR(((obj_t) BgL_actualsz00_2333));
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
										((BgL_copz00_bglt) BgL_arg2016z00_2337));
								}
								bgl_display_char(((unsigned char) ')'),
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								return ((bool_t) 1);
							}
						else
							{	/* Cgen/emit_cop.scm 450 */
								{	/* Cgen/emit_cop.scm 456 */
									obj_t BgL_arg2017z00_2338;

									BgL_arg2017z00_2338 = CAR(((obj_t) BgL_actualsz00_2333));
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
										((BgL_copz00_bglt) BgL_arg2017z00_2338));
								}
								bgl_display_string(BGl_string2368z00zzcgen_emitzd2copzd2,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								{	/* Cgen/emit_cop.scm 458 */
									obj_t BgL_arg2018z00_2339;

									BgL_arg2018z00_2339 = CDR(((obj_t) BgL_actualsz00_2333));
									{
										obj_t BgL_actualsz00_4254;

										BgL_actualsz00_4254 = BgL_arg2018z00_2339;
										BgL_actualsz00_2333 = BgL_actualsz00_4254;
										goto BgL_zc3z04anonymousza32012ze3z87_2334;
									}
								}
							}
					}
			}
		}

	}



/* &emit-cop-capply1393 */
	obj_t BGl_z62emitzd2copzd2capply1393z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3382, obj_t BgL_copz00_3383)
	{
		{	/* Cgen/emit_cop.scm 407 */
			{	/* Cgen/emit_cop.scm 408 */
				bool_t BgL_tmpz00_4255;

				{	/* Cgen/emit_cop.scm 409 */
					obj_t BgL_arg1971z00_3500;

					BgL_arg1971z00_3500 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_capplyz00_bglt) BgL_copz00_3383))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1971z00_3500);
				}
				bgl_display_string(BGl_string2385z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_capplyz00_bglt)
							COBJECT(((BgL_capplyz00_bglt) BgL_copz00_3383)))->BgL_funz00));
				bgl_display_string(BGl_string2368z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_capplyz00_bglt)
							COBJECT(((BgL_capplyz00_bglt) BgL_copz00_3383)))->BgL_argz00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_4255 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_4255);
			}
		}

	}



/* &emit-cop-cfuncall1391 */
	obj_t BGl_z62emitzd2copzd2cfuncall1391z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3384, obj_t BgL_copz00_3385)
	{
		{	/* Cgen/emit_cop.scm 304 */
			{	/* Cgen/emit_cop.scm 307 */
				bool_t BgL_tmpz00_4270;

				{
					BgL_cfuncallz00_bglt BgL_copz00_3530;
					BgL_cfuncallz00_bglt BgL_copz00_3522;
					BgL_cfuncallz00_bglt BgL_copz00_3514;
					BgL_cfuncallz00_bglt BgL_copz00_3506;

					{	/* Cgen/emit_cop.scm 393 */
						obj_t BgL_arg1930z00_3531;

						BgL_arg1930z00_3531 =
							(((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt)
										((BgL_cfuncallz00_bglt) BgL_copz00_3385))))->BgL_locz00);
						BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1930z00_3531);
					}
					{	/* Cgen/emit_cop.scm 394 */
						obj_t BgL_casezd2valuezd2_3532;

						BgL_casezd2valuezd2_3532 =
							(((BgL_cfuncallz00_bglt) COBJECT(
									((BgL_cfuncallz00_bglt) BgL_copz00_3385)))->BgL_strengthz00);
						if ((BgL_casezd2valuezd2_3532 == CNST_TABLE_REF(((long) 5))))
							{	/* Cgen/emit_cop.scm 394 */
								BgL_copz00_3506 = ((BgL_cfuncallz00_bglt) BgL_copz00_3385);
								{	/* Cgen/emit_cop.scm 323 */
									obj_t BgL_actualsz00_3507;

									BgL_actualsz00_3507 =
										(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_3506))->
										BgL_argsz00);
									BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfuncallz00_bglt)
												COBJECT(BgL_copz00_3506))->BgL_funz00));
									bgl_display_char(((unsigned char) '('),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									{
										obj_t BgL_actualsz00_3509;

										BgL_actualsz00_3509 = BgL_actualsz00_3507;
									BgL_loopz00_3508:
										{	/* Cgen/emit_cop.scm 329 */
											bool_t BgL_test2558z00_4284;

											{	/* Cgen/emit_cop.scm 329 */
												obj_t BgL_tmpz00_4285;

												{	/* Cgen/emit_cop.scm 329 */
													obj_t BgL_pairz00_3510;

													BgL_pairz00_3510 = CDR(((obj_t) BgL_actualsz00_3509));
													BgL_tmpz00_4285 = CDR(BgL_pairz00_3510);
												}
												BgL_test2558z00_4284 = NULLP(BgL_tmpz00_4285);
											}
											if (BgL_test2558z00_4284)
												{	/* Cgen/emit_cop.scm 329 */
													{	/* Cgen/emit_cop.scm 331 */
														obj_t BgL_arg1937z00_3511;

														BgL_arg1937z00_3511 =
															CAR(((obj_t) BgL_actualsz00_3509));
														BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
															((BgL_copz00_bglt) BgL_arg1937z00_3511));
													}
													bgl_display_char(((unsigned char) ')'),
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													BgL_tmpz00_4270 = ((bool_t) 1);
												}
											else
												{	/* Cgen/emit_cop.scm 329 */
													{	/* Cgen/emit_cop.scm 335 */
														obj_t BgL_arg1938z00_3512;

														BgL_arg1938z00_3512 =
															CAR(((obj_t) BgL_actualsz00_3509));
														BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
															((BgL_copz00_bglt) BgL_arg1938z00_3512));
													}
													bgl_display_string
														(BGl_string2368z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													{	/* Cgen/emit_cop.scm 337 */
														obj_t BgL_arg1939z00_3513;

														BgL_arg1939z00_3513 =
															CDR(((obj_t) BgL_actualsz00_3509));
														{
															obj_t BgL_actualsz00_4302;

															BgL_actualsz00_4302 = BgL_arg1939z00_3513;
															BgL_actualsz00_3509 = BgL_actualsz00_4302;
															goto BgL_loopz00_3508;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Cgen/emit_cop.scm 394 */
								if ((BgL_casezd2valuezd2_3532 == CNST_TABLE_REF(((long) 6))))
									{	/* Cgen/emit_cop.scm 394 */
										BgL_copz00_3514 = ((BgL_cfuncallz00_bglt) BgL_copz00_3385);
										{	/* Cgen/emit_cop.scm 339 */
											obj_t BgL_actualsz00_3515;

											BgL_actualsz00_3515 =
												(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_3514))->
												BgL_argsz00);
											BGl_outzd2callze70z35zzcgen_emitzd2copzd2
												(BGl_string2386z00zzcgen_emitzd2copzd2,
												BgL_copz00_3514);
											{
												obj_t BgL_actualsz00_3517;

												BgL_actualsz00_3517 = BgL_actualsz00_3515;
											BgL_loopz00_3516:
												{	/* Cgen/emit_cop.scm 344 */
													bool_t BgL_test2560z00_4309;

													{	/* Cgen/emit_cop.scm 344 */
														obj_t BgL_tmpz00_4310;

														{	/* Cgen/emit_cop.scm 344 */
															obj_t BgL_pairz00_3518;

															BgL_pairz00_3518 =
																CDR(((obj_t) BgL_actualsz00_3517));
															BgL_tmpz00_4310 = CDR(BgL_pairz00_3518);
														}
														BgL_test2560z00_4309 = NULLP(BgL_tmpz00_4310);
													}
													if (BgL_test2560z00_4309)
														{	/* Cgen/emit_cop.scm 344 */
															{	/* Cgen/emit_cop.scm 346 */
																obj_t BgL_arg1944z00_3519;

																BgL_arg1944z00_3519 =
																	CAR(((obj_t) BgL_actualsz00_3517));
																BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																	((BgL_copz00_bglt) BgL_arg1944z00_3519));
															}
															bgl_display_string
																(BGl_string2387z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															BgL_tmpz00_4270 = ((bool_t) 1);
														}
													else
														{	/* Cgen/emit_cop.scm 344 */
															{	/* Cgen/emit_cop.scm 350 */
																obj_t BgL_arg1945z00_3520;

																BgL_arg1945z00_3520 =
																	CAR(((obj_t) BgL_actualsz00_3517));
																BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																	((BgL_copz00_bglt) BgL_arg1945z00_3520));
															}
															bgl_display_string
																(BGl_string2368z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															{	/* Cgen/emit_cop.scm 352 */
																obj_t BgL_arg1946z00_3521;

																BgL_arg1946z00_3521 =
																	CDR(((obj_t) BgL_actualsz00_3517));
																{
																	obj_t BgL_actualsz00_4327;

																	BgL_actualsz00_4327 = BgL_arg1946z00_3521;
																	BgL_actualsz00_3517 = BgL_actualsz00_4327;
																	goto BgL_loopz00_3516;
																}
															}
														}
												}
											}
										}
									}
								else
									{	/* Cgen/emit_cop.scm 394 */
										if (CBOOL(BGl_za2stdcza2z00zzengine_paramz00))
											{	/* Cgen/emit_cop.scm 400 */
												BgL_copz00_3530 =
													((BgL_cfuncallz00_bglt) BgL_copz00_3385);
												bgl_display_string
													(BGl_string2389z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												BGl_emitzd2copzd2zzcgen_emitzd2copzd2(((
															(BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_3530))->
														BgL_funz00));
												bgl_display_string
													(BGl_string2390z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												BGl_emitzd2regularzd2cfuncallzf2eoaze70z15zzcgen_emitzd2copzd2
													(BgL_copz00_3530);
												bgl_display_string
													(BGl_string2377z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												BgL_copz00_3522 = BgL_copz00_3530;
												{	/* Cgen/emit_cop.scm 369 */
													obj_t BgL_actualsz00_3523;

													BgL_actualsz00_3523 =
														(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_3522))->
														BgL_argsz00);
													BGl_outzd2callze70z35zzcgen_emitzd2copzd2
														(BGl_string2388z00zzcgen_emitzd2copzd2,
														BgL_copz00_3522);
													{
														obj_t BgL_actualsz00_3525;

														BgL_actualsz00_3525 = BgL_actualsz00_3523;
													BgL_loopz00_3524:
														{	/* Cgen/emit_cop.scm 374 */
															bool_t BgL_test2562z00_4339;

															{	/* Cgen/emit_cop.scm 374 */
																obj_t BgL_tmpz00_4340;

																{	/* Cgen/emit_cop.scm 374 */
																	obj_t BgL_pairz00_3526;

																	BgL_pairz00_3526 =
																		CDR(((obj_t) BgL_actualsz00_3525));
																	BgL_tmpz00_4340 = CDR(BgL_pairz00_3526);
																}
																BgL_test2562z00_4339 = NULLP(BgL_tmpz00_4340);
															}
															if (BgL_test2562z00_4339)
																{	/* Cgen/emit_cop.scm 374 */
																	{	/* Cgen/emit_cop.scm 376 */
																		obj_t BgL_arg1958z00_3527;

																		BgL_arg1958z00_3527 =
																			CAR(((obj_t) BgL_actualsz00_3525));
																		BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																			((BgL_copz00_bglt) BgL_arg1958z00_3527));
																	}
																	bgl_display_string
																		(BGl_string2387z00zzcgen_emitzd2copzd2,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	((bool_t) 1);
																}
															else
																{	/* Cgen/emit_cop.scm 374 */
																	{	/* Cgen/emit_cop.scm 380 */
																		obj_t BgL_arg1959z00_3528;

																		BgL_arg1959z00_3528 =
																			CAR(((obj_t) BgL_actualsz00_3525));
																		BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
																			((BgL_copz00_bglt) BgL_arg1959z00_3528));
																	}
																	bgl_display_string
																		(BGl_string2368z00zzcgen_emitzd2copzd2,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	{	/* Cgen/emit_cop.scm 382 */
																		obj_t BgL_arg1960z00_3529;

																		BgL_arg1960z00_3529 =
																			CDR(((obj_t) BgL_actualsz00_3525));
																		{
																			obj_t BgL_actualsz00_4357;

																			BgL_actualsz00_4357 = BgL_arg1960z00_3529;
																			BgL_actualsz00_3525 = BgL_actualsz00_4357;
																			goto BgL_loopz00_3524;
																		}
																	}
																}
														}
													}
												}
												bgl_display_string
													(BGl_string2391z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												BgL_tmpz00_4270 = ((bool_t) 1);
											}
										else
											{	/* Cgen/emit_cop.scm 400 */
												BgL_tmpz00_4270 =
													BGl_emitzd2regularzd2cfuncallzf2eoaze70z15zzcgen_emitzd2copzd2
													(((BgL_cfuncallz00_bglt) BgL_copz00_3385));
											}
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_4270);
			}
		}

	}



/* emit-regular-cfuncall/eoa~0 */
	bool_t
		BGl_emitzd2regularzd2cfuncallzf2eoaze70z15zzcgen_emitzd2copzd2
		(BgL_cfuncallz00_bglt BgL_copz00_2209)
	{
		{	/* Cgen/emit_cop.scm 353 */
			{	/* Cgen/emit_cop.scm 354 */
				obj_t BgL_actualsz00_2242;

				BgL_actualsz00_2242 =
					(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_2209))->BgL_argsz00);
				BGl_outzd2callze70z35zzcgen_emitzd2copzd2
					(BGl_string2388z00zzcgen_emitzd2copzd2, BgL_copz00_2209);
				{
					obj_t BgL_actualsz00_2244;

					BgL_actualsz00_2244 = BgL_actualsz00_2242;
				BgL_zc3z04anonymousza31948ze3z87_2245:
					if (NULLP(CDR(((obj_t) BgL_actualsz00_2244))))
						{	/* Cgen/emit_cop.scm 359 */
							{	/* Cgen/emit_cop.scm 361 */
								obj_t BgL_arg1951z00_2248;

								BgL_arg1951z00_2248 = CAR(((obj_t) BgL_actualsz00_2244));
								BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
									((BgL_copz00_bglt) BgL_arg1951z00_2248));
							}
							bgl_display_string(BGl_string2387z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							return ((bool_t) 1);
						}
					else
						{	/* Cgen/emit_cop.scm 359 */
							{	/* Cgen/emit_cop.scm 365 */
								obj_t BgL_arg1952z00_2249;

								BgL_arg1952z00_2249 = CAR(((obj_t) BgL_actualsz00_2244));
								BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
									((BgL_copz00_bglt) BgL_arg1952z00_2249));
							}
							bgl_display_string(BGl_string2368z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* Cgen/emit_cop.scm 367 */
								obj_t BgL_arg1953z00_2250;

								BgL_arg1953z00_2250 = CDR(((obj_t) BgL_actualsz00_2244));
								{
									obj_t BgL_actualsz00_4381;

									BgL_actualsz00_4381 = BgL_arg1953z00_2250;
									BgL_actualsz00_2244 = BgL_actualsz00_4381;
									goto BgL_zc3z04anonymousza31948ze3z87_2245;
								}
							}
						}
				}
			}
		}

	}



/* out-call~0 */
	obj_t BGl_outzd2callze70z35zzcgen_emitzd2copzd2(obj_t BgL_opz00_2265,
		BgL_cfuncallz00_bglt BgL_copz00_2266)
	{
		{	/* Cgen/emit_cop.scm 320 */
			{	/* Cgen/emit_cop.scm 307 */
				bool_t BgL_test2564z00_4382;

				{	/* Cgen/emit_cop.scm 307 */
					obj_t BgL_arg1970z00_2274;

					BgL_arg1970z00_2274 =
						(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_2266))->BgL_typez00);
					BgL_test2564z00_4382 =
						(BgL_arg1970z00_2274 == BGl_za2objza2z00zztype_cachez00);
				}
				if (BgL_test2564z00_4382)
					{	/* Cgen/emit_cop.scm 307 */
						bgl_display_obj(BgL_opz00_2265,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						bgl_display_string(BGl_string2392z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfuncallz00_bglt)
									COBJECT(BgL_copz00_2266))->BgL_funz00));
						return bgl_display_string(BGl_string2393z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 307 */
						bgl_display_string(BGl_string2394z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* Cgen/emit_cop.scm 315 */
							obj_t BgL_arg1967z00_2271;

							BgL_arg1967z00_2271 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt)
											(((BgL_cfuncallz00_bglt) COBJECT(BgL_copz00_2266))->
												BgL_typez00))))->BgL_namez00);
							bgl_display_obj(BgL_arg1967z00_2271,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						bgl_display_string(BGl_string2395z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						bgl_display_obj(BgL_opz00_2265,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						bgl_display_string(BGl_string2392z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cfuncallz00_bglt)
									COBJECT(BgL_copz00_2266))->BgL_funz00));
						return bgl_display_string(BGl_string2396z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
			}
		}

	}



/* &emit-cop-bdb-block1389 */
	obj_t BGl_z62emitzd2copzd2bdbzd2block1389zb0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3386, obj_t BgL_copz00_3387)
	{
		{	/* Cgen/emit_cop.scm 293 */
			{	/* Cgen/emit_cop.scm 295 */
				obj_t BgL_arg1928z00_3534;

				BgL_arg1928z00_3534 =
					(((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt)
								((BgL_bdbzd2blockzd2_bglt) BgL_copz00_3387))))->BgL_locz00);
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1928z00_3534);
			}
			{	/* Cgen/emit_cop.scm 296 */
				obj_t BgL_port1163z00_3535;

				BgL_port1163z00_3535 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* Cgen/emit_cop.scm 296 */
					obj_t BgL_tmpz00_4405;

					BgL_tmpz00_4405 = ((obj_t) BgL_port1163z00_3535);
					bgl_display_string(BGl_string2397z00zzcgen_emitzd2copzd2,
						BgL_tmpz00_4405);
				}
			}
			BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
				(((BgL_bdbzd2blockzd2_bglt) COBJECT(
							((BgL_bdbzd2blockzd2_bglt) BgL_copz00_3387)))->BgL_bodyz00));
			bgl_display_string(BGl_string2366z00zzcgen_emitzd2copzd2,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			return BNIL;
		}

	}



/* &emit-cop-local-var1387 */
	obj_t BGl_z62emitzd2copzd2localzd2var1387zb0zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3388, obj_t BgL_copz00_3389)
	{
		{	/* Cgen/emit_cop.scm 270 */
			{	/* Cgen/emit_cop.scm 271 */
				bool_t BgL_tmpz00_4412;

				{	/* Cgen/emit_cop.scm 272 */
					obj_t BgL_arg1912z00_3537;

					BgL_arg1912z00_3537 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_localzd2varzd2_bglt) BgL_copz00_3389))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1912z00_3537);
				}
				{	/* Cgen/emit_cop.scm 273 */
					obj_t BgL_g1344z00_3538;

					BgL_g1344z00_3538 =
						(((BgL_localzd2varzd2_bglt) COBJECT(
								((BgL_localzd2varzd2_bglt) BgL_copz00_3389)))->BgL_varsz00);
					{
						obj_t BgL_l1342z00_3540;

						BgL_l1342z00_3540 = BgL_g1344z00_3538;
					BgL_zc3z04anonymousza31913ze3z87_3539:
						if (PAIRP(BgL_l1342z00_3540))
							{	/* Cgen/emit_cop.scm 273 */
								{	/* Cgen/emit_cop.scm 274 */
									obj_t BgL_localz00_3541;

									BgL_localz00_3541 = CAR(BgL_l1342z00_3540);
									{	/* Cgen/emit_cop.scm 274 */
										obj_t BgL_port1161z00_3542;

										BgL_port1161z00_3542 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										{	/* Cgen/emit_cop.scm 275 */
											obj_t BgL_arg1915z00_3543;

											{	/* Cgen/emit_cop.scm 275 */
												BgL_typez00_bglt BgL_arg1916z00_3544;
												obj_t BgL_arg1917z00_3545;

												BgL_arg1916z00_3544 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_localz00_3541))))->
													BgL_typez00);
												BgL_arg1917z00_3545 =
													(((BgL_variablez00_bglt)
														COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
																	BgL_localz00_3541))))->BgL_namez00);
												BgL_arg1915z00_3543 =
													BGl_makezd2typedzd2declarationz00zztype_toolsz00
													(BgL_arg1916z00_3544, BgL_arg1917z00_3545);
											}
											bgl_display_obj(BgL_arg1915z00_3543,
												BgL_port1161z00_3542);
										}
										{	/* Cgen/emit_cop.scm 277 */
											obj_t BgL_arg1918z00_3546;

											{	/* Cgen/emit_cop.scm 277 */
												bool_t BgL_test2566z00_4430;

												if (
													((long)
														CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
														((long) 0)))
													{	/* Cgen/emit_cop.scm 277 */
														BgL_test2566z00_4430 =
															(
															(((BgL_typez00_bglt) COBJECT(
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_localz00_3541))))->
																			BgL_typez00)))->BgL_classz00) ==
															CNST_TABLE_REF(((long) 7)));
													}
												else
													{	/* Cgen/emit_cop.scm 277 */
														BgL_test2566z00_4430 = ((bool_t) 0);
													}
												if (BgL_test2566z00_4430)
													{	/* Cgen/emit_cop.scm 282 */
														obj_t BgL_arg1923z00_3547;

														{	/* Cgen/emit_cop.scm 282 */
															BgL_typez00_bglt BgL_arg1924z00_3548;

															BgL_arg1924z00_3548 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				BgL_localz00_3541))))->BgL_typez00);
															BgL_arg1923z00_3547 =
																BGl_makezd2typedzd2declarationz00zztype_toolsz00
																(BgL_arg1924z00_3548,
																BGl_string2398z00zzcgen_emitzd2copzd2);
														}
														BgL_arg1918z00_3546 =
															string_append_3
															(BGl_string2399z00zzcgen_emitzd2copzd2,
															BgL_arg1923z00_3547,
															BGl_string2400z00zzcgen_emitzd2copzd2);
													}
												else
													{	/* Cgen/emit_cop.scm 277 */
														BgL_arg1918z00_3546 =
															BGl_string2398z00zzcgen_emitzd2copzd2;
													}
											}
											bgl_display_obj(BgL_arg1918z00_3546,
												BgL_port1161z00_3542);
										}
										{	/* Cgen/emit_cop.scm 274 */
											obj_t BgL_tmpz00_4446;

											BgL_tmpz00_4446 = ((obj_t) BgL_port1161z00_3542);
											bgl_display_char(((unsigned char) ';'), BgL_tmpz00_4446);
								}}}
								{
									obj_t BgL_l1342z00_4449;

									BgL_l1342z00_4449 = CDR(BgL_l1342z00_3540);
									BgL_l1342z00_3540 = BgL_l1342z00_4449;
									goto BgL_zc3z04anonymousza31913ze3z87_3539;
								}
							}
						else
							{	/* Cgen/emit_cop.scm 273 */
								((bool_t) 1);
							}
					}
				}
				BgL_tmpz00_4412 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4412);
			}
		}

	}



/* &emit-cop-cif1385 */
	obj_t BGl_z62emitzd2copzd2cif1385z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3390, obj_t BgL_copz00_3391)
	{
		{	/* Cgen/emit_cop.scm 257 */
			{	/* Cgen/emit_cop.scm 258 */
				bool_t BgL_tmpz00_4452;

				{	/* Cgen/emit_cop.scm 259 */
					obj_t BgL_arg1908z00_3550;

					BgL_arg1908z00_3550 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cifz00_bglt) BgL_copz00_3391))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1908z00_3550);
				}
				bgl_display_string(BGl_string2401z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cifz00_bglt)
							COBJECT(((BgL_cifz00_bglt) BgL_copz00_3391)))->BgL_testz00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cifz00_bglt)
							COBJECT(((BgL_cifz00_bglt) BgL_copz00_3391)))->BgL_truez00));
				bgl_display_string(BGl_string2402z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_4452 =
					BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_cifz00_bglt)
							COBJECT(((BgL_cifz00_bglt) BgL_copz00_3391)))->BgL_falsez00));
				return BBOOL(BgL_tmpz00_4452);
			}
		}

	}



/* &emit-cop-csetq1383 */
	obj_t BGl_z62emitzd2copzd2csetq1383z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3392, obj_t BgL_copz00_3393)
	{
		{	/* Cgen/emit_cop.scm 243 */
			{	/* Cgen/emit_cop.scm 244 */
				bool_t BgL_tmpz00_4470;

				{	/* Cgen/emit_cop.scm 246 */
					obj_t BgL_arg1905z00_3552;

					BgL_arg1905z00_3552 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetqz00_bglt) BgL_copz00_3393))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1905z00_3552);
				}
				{	/* Cgen/emit_cop.scm 247 */
					BgL_varcz00_bglt BgL_arg1906z00_3553;

					BgL_arg1906z00_3553 =
						(((BgL_csetqz00_bglt) COBJECT(
								((BgL_csetqz00_bglt) BgL_copz00_3393)))->BgL_varz00);
					BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
						((BgL_copz00_bglt) BgL_arg1906z00_3553));
				}
				bgl_display_string(BGl_string2403z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_csetqz00_bglt)
							COBJECT(((BgL_csetqz00_bglt) BgL_copz00_3393)))->BgL_valuez00));
				BgL_tmpz00_4470 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_4470);
			}
		}

	}



/* &emit-cop-stop1381 */
	obj_t BGl_z62emitzd2copzd2stop1381z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3394, obj_t BgL_copz00_3395)
	{
		{	/* Cgen/emit_cop.scm 230 */
			{	/* Cgen/emit_cop.scm 231 */
				bool_t BgL_tmpz00_4484;

				if (BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
						(((BgL_stopz00_bglt) COBJECT(
									((BgL_stopz00_bglt) BgL_copz00_3395)))->BgL_valuez00)))
					{	/* Cgen/emit_cop.scm 232 */
						bgl_display_string(BGl_string2375z00zzcgen_emitzd2copzd2,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						BNIL;
					}
				else
					{	/* Cgen/emit_cop.scm 232 */
						BFALSE;
					}
				BgL_tmpz00_4484 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4484);
			}
		}

	}



/* &emit-cop-nop1379 */
	obj_t BGl_z62emitzd2copzd2nop1379z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3396, obj_t BgL_copz00_3397)
	{
		{	/* Cgen/emit_cop.scm 221 */
			{	/* Cgen/emit_cop.scm 223 */
				bool_t BgL_tmpz00_4491;

				bgl_display_string(BGl_string2375z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_4491 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4491);
			}
		}

	}



/* &emit-cop-csequence1377 */
	obj_t BGl_z62emitzd2copzd2csequence1377z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3398, obj_t BgL_copz00_3399)
	{
		{	/* Cgen/emit_cop.scm 178 */
			if (
				(((BgL_csequencez00_bglt) COBJECT(
							((BgL_csequencez00_bglt) BgL_copz00_3399)))->BgL_czd2expzf3z21))
				{	/* Cgen/emit_cop.scm 180 */
					if (NULLP(
							(((BgL_csequencez00_bglt) COBJECT(
										((BgL_csequencez00_bglt) BgL_copz00_3399)))->BgL_copsz00)))
						{	/* Cgen/emit_cop.scm 182 */
							return BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BUNSPEC);
						}
					else
						{	/* Cgen/emit_cop.scm 182 */
							bgl_display_string(BGl_string2404z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{
								obj_t BgL_expz00_3558;

								{	/* Cgen/emit_cop.scm 187 */
									obj_t BgL_arg1883z00_3563;

									BgL_arg1883z00_3563 =
										(((BgL_csequencez00_bglt) COBJECT(
												((BgL_csequencez00_bglt) BgL_copz00_3399)))->
										BgL_copsz00);
									{	/* Cgen/emit_cop.scm 187 */
										bool_t BgL_tmpz00_4505;

										BgL_expz00_3558 = BgL_arg1883z00_3563;
									BgL_liipz00_3557:
										if (NULLP(CDR(((obj_t) BgL_expz00_3558))))
											{	/* Cgen/emit_cop.scm 188 */
												{	/* Cgen/emit_cop.scm 190 */
													obj_t BgL_arg1887z00_3559;

													BgL_arg1887z00_3559 = CAR(((obj_t) BgL_expz00_3558));
													BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
														((BgL_copz00_bglt) BgL_arg1887z00_3559));
												}
												bgl_display_string
													(BGl_string2405z00zzcgen_emitzd2copzd2,
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												BgL_tmpz00_4505 = ((bool_t) 1);
											}
										else
											{	/* Cgen/emit_cop.scm 188 */
												{	/* Cgen/emit_cop.scm 195 */
													obj_t BgL_arg1888z00_3560;

													BgL_arg1888z00_3560 = CAR(((obj_t) BgL_expz00_3558));
													BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
														((BgL_copz00_bglt) BgL_arg1888z00_3560));
												}
												{	/* Cgen/emit_cop.scm 196 */
													bool_t BgL_test2572z00_4519;

													{	/* Cgen/emit_cop.scm 196 */
														obj_t BgL_arg1892z00_3561;

														BgL_arg1892z00_3561 =
															CAR(((obj_t) BgL_expz00_3558));
														BgL_test2572z00_4519 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1892z00_3561,
															BGl_cfailz00zzcgen_copz00);
													}
													if (BgL_test2572z00_4519)
														{	/* Cgen/emit_cop.scm 196 */
															bgl_display_string
																(BGl_string2405z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															BgL_tmpz00_4505 = ((bool_t) 1);
														}
													else
														{	/* Cgen/emit_cop.scm 196 */
															bgl_display_string
																(BGl_string2368z00zzcgen_emitzd2copzd2,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															{	/* Cgen/emit_cop.scm 204 */
																obj_t BgL_arg1891z00_3562;

																BgL_arg1891z00_3562 =
																	CDR(((obj_t) BgL_expz00_3558));
																{
																	obj_t BgL_expz00_4527;

																	BgL_expz00_4527 = BgL_arg1891z00_3562;
																	BgL_expz00_3558 = BgL_expz00_4527;
																	goto BgL_liipz00_3557;
																}
															}
														}
												}
											}
										return BBOOL(BgL_tmpz00_4505);
									}
								}
							}
						}
				}
			else
				{
					obj_t BgL_expz00_3565;

					{	/* Cgen/emit_cop.scm 205 */
						obj_t BgL_arg1896z00_3568;

						BgL_arg1896z00_3568 =
							(((BgL_csequencez00_bglt) COBJECT(
									((BgL_csequencez00_bglt) BgL_copz00_3399)))->BgL_copsz00);
						{	/* Cgen/emit_cop.scm 205 */
							bool_t BgL_tmpz00_4531;

							BgL_expz00_3565 = BgL_arg1896z00_3568;
						BgL_liipz00_3564:
							if (NULLP(BgL_expz00_3565))
								{	/* Cgen/emit_cop.scm 206 */
									BgL_tmpz00_4531 = ((bool_t) 0);
								}
							else
								{	/* Cgen/emit_cop.scm 208 */
									obj_t BgL_ez00_3566;

									BgL_ez00_3566 = CAR(((obj_t) BgL_expz00_3565));
									if (BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
											((BgL_copz00_bglt) BgL_ez00_3566)))
										{	/* Cgen/emit_cop.scm 209 */
											bgl_display_string(BGl_string2375z00zzcgen_emitzd2copzd2,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											BNIL;
										}
									else
										{	/* Cgen/emit_cop.scm 209 */
											BFALSE;
										}
									if (BGl_isazf3zf3zz__objectz00(BgL_ez00_3566,
											BGl_cfailz00zzcgen_copz00))
										{
											obj_t BgL_expz00_4542;

											BgL_expz00_4542 = BNIL;
											BgL_expz00_3565 = BgL_expz00_4542;
											goto BgL_liipz00_3564;
										}
									else
										{	/* Cgen/emit_cop.scm 216 */
											obj_t BgL_arg1901z00_3567;

											BgL_arg1901z00_3567 = CDR(((obj_t) BgL_expz00_3565));
											{
												obj_t BgL_expz00_4545;

												BgL_expz00_4545 = BgL_arg1901z00_3567;
												BgL_expz00_3565 = BgL_expz00_4545;
												goto BgL_liipz00_3564;
											}
										}
								}
							return BBOOL(BgL_tmpz00_4531);
						}
					}
				}
		}

	}



/* &emit-cop-ccast1375 */
	obj_t BGl_z62emitzd2copzd2ccast1375z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3400, obj_t BgL_copz00_3401)
	{
		{	/* Cgen/emit_cop.scm 165 */
			{	/* Cgen/emit_cop.scm 166 */
				bool_t BgL_tmpz00_4547;

				{	/* Cgen/emit_cop.scm 167 */
					obj_t BgL_arg1876z00_3570;

					BgL_arg1876z00_3570 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_ccastz00_bglt) BgL_copz00_3401))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1876z00_3570);
				}
				bgl_display_string(BGl_string2394z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{	/* Cgen/emit_cop.scm 169 */
					obj_t BgL_arg1877z00_3571;

					BgL_arg1877z00_3571 =
						(((BgL_typez00_bglt) COBJECT(
								(((BgL_ccastz00_bglt) COBJECT(
											((BgL_ccastz00_bglt) BgL_copz00_3401)))->BgL_typez00)))->
						BgL_namez00);
					bgl_display_obj(BgL_arg1877z00_3571,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_ccastz00_bglt)
							COBJECT(((BgL_ccastz00_bglt) BgL_copz00_3401)))->BgL_argz00));
				bgl_display_char(((unsigned char) ')'),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				BgL_tmpz00_4547 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_4547);
			}
		}

	}



/* &emit-cop-cpragma1372 */
	obj_t BGl_z62emitzd2copzd2cpragma1372z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3402, obj_t BgL_copz00_3403)
	{
		{	/* Cgen/emit_cop.scm 135 */
			{	/* Cgen/emit_cop.scm 137 */
				obj_t BgL_arg1631z00_3573;

				BgL_arg1631z00_3573 =
					(((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt)
								((BgL_cpragmaz00_bglt) BgL_copz00_3403))))->BgL_locz00);
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1631z00_3573);
			}
			if (NULLP(
					(((BgL_cpragmaz00_bglt) COBJECT(
								((BgL_cpragmaz00_bglt) BgL_copz00_3403)))->BgL_argsz00)))
				{	/* Cgen/emit_cop.scm 139 */
					obj_t BgL_arg1639z00_3574;

					BgL_arg1639z00_3574 =
						(((BgL_cpragmaz00_bglt) COBJECT(
								((BgL_cpragmaz00_bglt) BgL_copz00_3403)))->BgL_formatz00);
					return
						bgl_display_obj(BgL_arg1639z00_3574,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* Cgen/emit_cop.scm 140 */
					obj_t BgL_sportz00_3575;

					{	/* Cgen/emit_cop.scm 140 */
						obj_t BgL_arg1873z00_3576;

						BgL_arg1873z00_3576 =
							(((BgL_cpragmaz00_bglt) COBJECT(
									((BgL_cpragmaz00_bglt) BgL_copz00_3403)))->BgL_formatz00);
						{	/* Cgen/emit_cop.scm 140 */
							long BgL_endz00_3577;

							BgL_endz00_3577 = STRING_LENGTH(BgL_arg1873z00_3576);
							{	/* Cgen/emit_cop.scm 140 */

								BgL_sportz00_3575 =
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BgL_arg1873z00_3576, BINT(((long) 0)),
									BINT(BgL_endz00_3577));
					}}}
					{	/* Cgen/emit_cop.scm 140 */
						obj_t BgL_argsz00_3578;

						BgL_argsz00_3578 =
							BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(
							(((BgL_cpragmaz00_bglt) COBJECT(
										((BgL_cpragmaz00_bglt) BgL_copz00_3403)))->BgL_argsz00));
						{
							obj_t BgL_iportz00_3580;

							{	/* Cgen/emit_cop.scm 142 */

								BgL_iportz00_3580 = BgL_sportz00_3575;
								{
									obj_t BgL_iportz00_3654;
									long BgL_lastzd2matchzd2_3655;
									long BgL_forwardz00_3656;
									long BgL_bufposz00_3657;
									obj_t BgL_iportz00_3639;
									long BgL_lastzd2matchzd2_3640;
									long BgL_forwardz00_3641;
									long BgL_bufposz00_3642;
									obj_t BgL_iportz00_3627;
									long BgL_lastzd2matchzd2_3628;
									long BgL_forwardz00_3629;
									long BgL_bufposz00_3630;
									obj_t BgL_iportz00_3617;
									long BgL_lastzd2matchzd2_3618;
									long BgL_forwardz00_3619;
									long BgL_bufposz00_3620;
									obj_t BgL_iportz00_3605;
									long BgL_lastzd2matchzd2_3606;
									long BgL_forwardz00_3607;
									long BgL_bufposz00_3608;

								BgL_ignorez00_3581:
									{	/* Cgen/emit_cop.scm 142 */
										long BgL_res2290z00_3588;

										BgL_res2290z00_3588 = RGC_START_MATCH(BgL_iportz00_3580);
										BgL_res2290z00_3588;
									}
									{	/* Cgen/emit_cop.scm 142 */
										long BgL_matchz00_3589;

										{	/* Cgen/emit_cop.scm 142 */
											long BgL_arg1870z00_3590;
											long BgL_arg1871z00_3591;

											{	/* Cgen/emit_cop.scm 142 */
												long BgL_res2291z00_3592;

												BgL_res2291z00_3592 =
													RGC_BUFFER_FORWARD(BgL_iportz00_3580);
												BgL_arg1870z00_3590 = BgL_res2291z00_3592;
											}
											{	/* Cgen/emit_cop.scm 142 */
												long BgL_res2292z00_3593;

												BgL_res2292z00_3593 =
													RGC_BUFFER_BUFPOS(BgL_iportz00_3580);
												BgL_arg1871z00_3591 = BgL_res2292z00_3593;
											}
											BgL_iportz00_3617 = BgL_iportz00_3580;
											BgL_lastzd2matchzd2_3618 = ((long) 3);
											BgL_forwardz00_3619 = BgL_arg1870z00_3590;
											BgL_bufposz00_3620 = BgL_arg1871z00_3591;
										BgL_statezd20zd21145z00_3584:
											if ((BgL_forwardz00_3619 == BgL_bufposz00_3620))
												{	/* Cgen/emit_cop.scm 142 */
													if (rgc_fill_buffer(BgL_iportz00_3617))
														{	/* Cgen/emit_cop.scm 142 */
															long BgL_arg1704z00_3621;
															long BgL_arg1707z00_3622;

															{	/* Cgen/emit_cop.scm 142 */
																long BgL_res2269z00_3623;

																BgL_res2269z00_3623 =
																	RGC_BUFFER_FORWARD(BgL_iportz00_3617);
																BgL_arg1704z00_3621 = BgL_res2269z00_3623;
															}
															{	/* Cgen/emit_cop.scm 142 */
																long BgL_res2270z00_3624;

																BgL_res2270z00_3624 =
																	RGC_BUFFER_BUFPOS(BgL_iportz00_3617);
																BgL_arg1707z00_3622 = BgL_res2270z00_3624;
															}
															{
																long BgL_bufposz00_4593;
																long BgL_forwardz00_4592;

																BgL_forwardz00_4592 = BgL_arg1704z00_3621;
																BgL_bufposz00_4593 = BgL_arg1707z00_3622;
																BgL_bufposz00_3620 = BgL_bufposz00_4593;
																BgL_forwardz00_3619 = BgL_forwardz00_4592;
																goto BgL_statezd20zd21145z00_3584;
															}
														}
													else
														{	/* Cgen/emit_cop.scm 142 */
															BgL_matchz00_3589 = BgL_lastzd2matchzd2_3618;
														}
												}
											else
												{	/* Cgen/emit_cop.scm 142 */
													int BgL_curz00_3625;

													{	/* Cgen/emit_cop.scm 142 */
														int BgL_res2271z00_3626;

														BgL_res2271z00_3626 =
															RGC_BUFFER_GET_CHAR(BgL_iportz00_3617,
															BgL_forwardz00_3619);
														BgL_curz00_3625 = BgL_res2271z00_3626;
													}
													{	/* Cgen/emit_cop.scm 142 */

														if (((long) (BgL_curz00_3625) == ((long) 36)))
															{	/* Cgen/emit_cop.scm 142 */
																BgL_iportz00_3639 = BgL_iportz00_3617;
																BgL_lastzd2matchzd2_3640 =
																	BgL_lastzd2matchzd2_3618;
																BgL_forwardz00_3641 =
																	(((long) 1) + BgL_forwardz00_3619);
																BgL_bufposz00_3642 = BgL_bufposz00_3620;
															BgL_statezd22zd21147z00_3586:
																{	/* Cgen/emit_cop.scm 142 */
																	long BgL_newzd2matchzd2_3643;

																	{	/* Cgen/emit_cop.scm 142 */
																		long BgL_res2246z00_3644;

																		BgL_res2246z00_3644 =
																			RGC_STOP_MATCH(BgL_iportz00_3639,
																			BgL_forwardz00_3641);
																		BgL_res2246z00_3644;
																	}
																	BgL_newzd2matchzd2_3643 = ((long) 3);
																	if (
																		(BgL_forwardz00_3641 == BgL_bufposz00_3642))
																		{	/* Cgen/emit_cop.scm 142 */
																			if (rgc_fill_buffer(BgL_iportz00_3639))
																				{	/* Cgen/emit_cop.scm 142 */
																					long BgL_arg1667z00_3645;
																					long BgL_arg1669z00_3646;

																					{	/* Cgen/emit_cop.scm 142 */
																						long BgL_res2249z00_3647;

																						BgL_res2249z00_3647 =
																							RGC_BUFFER_FORWARD
																							(BgL_iportz00_3639);
																						BgL_arg1667z00_3645 =
																							BgL_res2249z00_3647;
																					}
																					{	/* Cgen/emit_cop.scm 142 */
																						long BgL_res2250z00_3648;

																						BgL_res2250z00_3648 =
																							RGC_BUFFER_BUFPOS
																							(BgL_iportz00_3639);
																						BgL_arg1669z00_3646 =
																							BgL_res2250z00_3648;
																					}
																					{
																						long BgL_bufposz00_4606;
																						long BgL_forwardz00_4605;

																						BgL_forwardz00_4605 =
																							BgL_arg1667z00_3645;
																						BgL_bufposz00_4606 =
																							BgL_arg1669z00_3646;
																						BgL_bufposz00_3642 =
																							BgL_bufposz00_4606;
																						BgL_forwardz00_3641 =
																							BgL_forwardz00_4605;
																						goto BgL_statezd22zd21147z00_3586;
																					}
																				}
																			else
																				{	/* Cgen/emit_cop.scm 142 */
																					BgL_matchz00_3589 =
																						BgL_newzd2matchzd2_3643;
																				}
																		}
																	else
																		{	/* Cgen/emit_cop.scm 142 */
																			int BgL_curz00_3649;

																			{	/* Cgen/emit_cop.scm 142 */
																				int BgL_res2251z00_3650;

																				BgL_res2251z00_3650 =
																					RGC_BUFFER_GET_CHAR(BgL_iportz00_3639,
																					BgL_forwardz00_3641);
																				BgL_curz00_3649 = BgL_res2251z00_3650;
																			}
																			{	/* Cgen/emit_cop.scm 142 */

																				{	/* Cgen/emit_cop.scm 142 */
																					bool_t BgL_test2582z00_4608;

																					if (
																						((long) (BgL_curz00_3649) >=
																							((long) 48)))
																						{	/* Cgen/emit_cop.scm 142 */
																							BgL_test2582z00_4608 =
																								(
																								(long) (BgL_curz00_3649) <
																								((long) 58));
																						}
																					else
																						{	/* Cgen/emit_cop.scm 142 */
																							BgL_test2582z00_4608 =
																								((bool_t) 0);
																						}
																					if (BgL_test2582z00_4608)
																						{	/* Cgen/emit_cop.scm 142 */
																							BgL_iportz00_3605 =
																								BgL_iportz00_3639;
																							BgL_lastzd2matchzd2_3606 =
																								BgL_newzd2matchzd2_3643;
																							BgL_forwardz00_3607 =
																								(((long) 1) +
																								BgL_forwardz00_3641);
																							BgL_bufposz00_3608 =
																								BgL_bufposz00_3642;
																						BgL_statezd24zd21149z00_3583:
																							{	/* Cgen/emit_cop.scm 142 */
																								long BgL_newzd2matchzd2_3609;

																								{	/* Cgen/emit_cop.scm 142 */
																									long BgL_res2275z00_3610;

																									BgL_res2275z00_3610 =
																										RGC_STOP_MATCH
																										(BgL_iportz00_3605,
																										BgL_forwardz00_3607);
																									BgL_res2275z00_3610;
																								}
																								BgL_newzd2matchzd2_3609 =
																									((long) 0);
																								if ((BgL_forwardz00_3607 ==
																										BgL_bufposz00_3608))
																									{	/* Cgen/emit_cop.scm 142 */
																										if (rgc_fill_buffer
																											(BgL_iportz00_3605))
																											{	/* Cgen/emit_cop.scm 142 */
																												long
																													BgL_arg1719z00_3611;
																												long
																													BgL_arg1725z00_3612;
																												{	/* Cgen/emit_cop.scm 142 */
																													long
																														BgL_res2278z00_3613;
																													BgL_res2278z00_3613 =
																														RGC_BUFFER_FORWARD
																														(BgL_iportz00_3605);
																													BgL_arg1719z00_3611 =
																														BgL_res2278z00_3613;
																												}
																												{	/* Cgen/emit_cop.scm 142 */
																													long
																														BgL_res2279z00_3614;
																													BgL_res2279z00_3614 =
																														RGC_BUFFER_BUFPOS
																														(BgL_iportz00_3605);
																													BgL_arg1725z00_3612 =
																														BgL_res2279z00_3614;
																												}
																												{
																													long
																														BgL_bufposz00_4622;
																													long
																														BgL_forwardz00_4621;
																													BgL_forwardz00_4621 =
																														BgL_arg1719z00_3611;
																													BgL_bufposz00_4622 =
																														BgL_arg1725z00_3612;
																													BgL_bufposz00_3608 =
																														BgL_bufposz00_4622;
																													BgL_forwardz00_3607 =
																														BgL_forwardz00_4621;
																													goto
																														BgL_statezd24zd21149z00_3583;
																												}
																											}
																										else
																											{	/* Cgen/emit_cop.scm 142 */
																												BgL_matchz00_3589 =
																													BgL_newzd2matchzd2_3609;
																											}
																									}
																								else
																									{	/* Cgen/emit_cop.scm 142 */
																										int BgL_curz00_3615;

																										{	/* Cgen/emit_cop.scm 142 */
																											int BgL_res2280z00_3616;

																											BgL_res2280z00_3616 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_iportz00_3605,
																												BgL_forwardz00_3607);
																											BgL_curz00_3615 =
																												BgL_res2280z00_3616;
																										}
																										{	/* Cgen/emit_cop.scm 142 */

																											{	/* Cgen/emit_cop.scm 142 */
																												bool_t
																													BgL_test2586z00_4624;
																												if (((long)
																														(BgL_curz00_3615) >=
																														((long) 48)))
																													{	/* Cgen/emit_cop.scm 142 */
																														BgL_test2586z00_4624
																															=
																															((long)
																															(BgL_curz00_3615)
																															< ((long) 58));
																													}
																												else
																													{	/* Cgen/emit_cop.scm 142 */
																														BgL_test2586z00_4624
																															= ((bool_t) 0);
																													}
																												if (BgL_test2586z00_4624)
																													{
																														long
																															BgL_forwardz00_4631;
																														long
																															BgL_lastzd2matchzd2_4630;
																														BgL_lastzd2matchzd2_4630
																															=
																															BgL_newzd2matchzd2_3609;
																														BgL_forwardz00_4631
																															=
																															(((long) 1) +
																															BgL_forwardz00_3607);
																														BgL_forwardz00_3607
																															=
																															BgL_forwardz00_4631;
																														BgL_lastzd2matchzd2_3606
																															=
																															BgL_lastzd2matchzd2_4630;
																														goto
																															BgL_statezd24zd21149z00_3583;
																													}
																												else
																													{	/* Cgen/emit_cop.scm 142 */
																														BgL_matchz00_3589 =
																															BgL_newzd2matchzd2_3609;
																													}
																											}
																										}
																									}
																							}
																						}
																					else
																						{	/* Cgen/emit_cop.scm 142 */
																							if (
																								((long) (BgL_curz00_3649) ==
																									((long) 36)))
																								{	/* Cgen/emit_cop.scm 142 */
																									long BgL_arg1684z00_3651;

																									BgL_arg1684z00_3651 =
																										(((long) 1) +
																										BgL_forwardz00_3641);
																									{	/* Cgen/emit_cop.scm 142 */
																										long
																											BgL_newzd2matchzd2_3652;
																										{	/* Cgen/emit_cop.scm 142 */
																											long BgL_res2257z00_3653;

																											BgL_res2257z00_3653 =
																												RGC_STOP_MATCH
																												(BgL_iportz00_3639,
																												BgL_arg1684z00_3651);
																											BgL_res2257z00_3653;
																										}
																										BgL_newzd2matchzd2_3652 =
																											((long) 1);
																										BgL_matchz00_3589 =
																											BgL_newzd2matchzd2_3652;
																								}}
																							else
																								{	/* Cgen/emit_cop.scm 142 */
																									BgL_matchz00_3589 =
																										BgL_newzd2matchzd2_3643;
																								}
																						}
																				}
																			}
																		}
																}
															}
														else
															{	/* Cgen/emit_cop.scm 142 */
																BgL_iportz00_3627 = BgL_iportz00_3617;
																BgL_lastzd2matchzd2_3628 =
																	BgL_lastzd2matchzd2_3618;
																BgL_forwardz00_3629 =
																	(((long) 1) + BgL_forwardz00_3619);
																BgL_bufposz00_3630 = BgL_bufposz00_3620;
															BgL_statezd21zd21146z00_3585:
																{	/* Cgen/emit_cop.scm 142 */
																	long BgL_newzd2matchzd2_3631;

																	{	/* Cgen/emit_cop.scm 142 */
																		long BgL_res2258z00_3632;

																		BgL_res2258z00_3632 =
																			RGC_STOP_MATCH(BgL_iportz00_3627,
																			BgL_forwardz00_3629);
																		BgL_res2258z00_3632;
																	}
																	BgL_newzd2matchzd2_3631 = ((long) 2);
																	if (
																		(BgL_forwardz00_3629 == BgL_bufposz00_3630))
																		{	/* Cgen/emit_cop.scm 142 */
																			if (rgc_fill_buffer(BgL_iportz00_3627))
																				{	/* Cgen/emit_cop.scm 142 */
																					long BgL_arg1688z00_3633;
																					long BgL_arg1692z00_3634;

																					{	/* Cgen/emit_cop.scm 142 */
																						long BgL_res2261z00_3635;

																						BgL_res2261z00_3635 =
																							RGC_BUFFER_FORWARD
																							(BgL_iportz00_3627);
																						BgL_arg1688z00_3633 =
																							BgL_res2261z00_3635;
																					}
																					{	/* Cgen/emit_cop.scm 142 */
																						long BgL_res2262z00_3636;

																						BgL_res2262z00_3636 =
																							RGC_BUFFER_BUFPOS
																							(BgL_iportz00_3627);
																						BgL_arg1692z00_3634 =
																							BgL_res2262z00_3636;
																					}
																					{
																						long BgL_bufposz00_4648;
																						long BgL_forwardz00_4647;

																						BgL_forwardz00_4647 =
																							BgL_arg1688z00_3633;
																						BgL_bufposz00_4648 =
																							BgL_arg1692z00_3634;
																						BgL_bufposz00_3630 =
																							BgL_bufposz00_4648;
																						BgL_forwardz00_3629 =
																							BgL_forwardz00_4647;
																						goto BgL_statezd21zd21146z00_3585;
																					}
																				}
																			else
																				{	/* Cgen/emit_cop.scm 142 */
																					BgL_matchz00_3589 =
																						BgL_newzd2matchzd2_3631;
																				}
																		}
																	else
																		{	/* Cgen/emit_cop.scm 142 */
																			int BgL_curz00_3637;

																			{	/* Cgen/emit_cop.scm 142 */
																				int BgL_res2263z00_3638;

																				BgL_res2263z00_3638 =
																					RGC_BUFFER_GET_CHAR(BgL_iportz00_3627,
																					BgL_forwardz00_3629);
																				BgL_curz00_3637 = BgL_res2263z00_3638;
																			}
																			{	/* Cgen/emit_cop.scm 142 */

																				if (
																					((long) (BgL_curz00_3637) ==
																						((long) 36)))
																					{	/* Cgen/emit_cop.scm 142 */
																						BgL_matchz00_3589 =
																							BgL_newzd2matchzd2_3631;
																					}
																				else
																					{	/* Cgen/emit_cop.scm 142 */
																						BgL_iportz00_3654 =
																							BgL_iportz00_3627;
																						BgL_lastzd2matchzd2_3655 =
																							BgL_newzd2matchzd2_3631;
																						BgL_forwardz00_3656 =
																							(((long) 1) +
																							BgL_forwardz00_3629);
																						BgL_bufposz00_3657 =
																							BgL_bufposz00_3630;
																					BgL_statezd26zd21151z00_3587:
																						{	/* Cgen/emit_cop.scm 142 */
																							long BgL_newzd2matchzd2_3658;

																							{	/* Cgen/emit_cop.scm 142 */
																								long BgL_res2238z00_3659;

																								BgL_res2238z00_3659 =
																									RGC_STOP_MATCH
																									(BgL_iportz00_3654,
																									BgL_forwardz00_3656);
																								BgL_res2238z00_3659;
																							}
																							BgL_newzd2matchzd2_3658 =
																								((long) 2);
																							if ((BgL_forwardz00_3656 ==
																									BgL_bufposz00_3657))
																								{	/* Cgen/emit_cop.scm 142 */
																									if (rgc_fill_buffer
																										(BgL_iportz00_3654))
																										{	/* Cgen/emit_cop.scm 142 */
																											long BgL_arg1644z00_3660;
																											long BgL_arg1652z00_3661;

																											{	/* Cgen/emit_cop.scm 142 */
																												long
																													BgL_res2241z00_3662;
																												BgL_res2241z00_3662 =
																													RGC_BUFFER_FORWARD
																													(BgL_iportz00_3654);
																												BgL_arg1644z00_3660 =
																													BgL_res2241z00_3662;
																											}
																											{	/* Cgen/emit_cop.scm 142 */
																												long
																													BgL_res2242z00_3663;
																												BgL_res2242z00_3663 =
																													RGC_BUFFER_BUFPOS
																													(BgL_iportz00_3654);
																												BgL_arg1652z00_3661 =
																													BgL_res2242z00_3663;
																											}
																											{
																												long BgL_bufposz00_4661;
																												long
																													BgL_forwardz00_4660;
																												BgL_forwardz00_4660 =
																													BgL_arg1644z00_3660;
																												BgL_bufposz00_4661 =
																													BgL_arg1652z00_3661;
																												BgL_bufposz00_3657 =
																													BgL_bufposz00_4661;
																												BgL_forwardz00_3656 =
																													BgL_forwardz00_4660;
																												goto
																													BgL_statezd26zd21151z00_3587;
																											}
																										}
																									else
																										{	/* Cgen/emit_cop.scm 142 */
																											BgL_matchz00_3589 =
																												BgL_newzd2matchzd2_3658;
																										}
																								}
																							else
																								{	/* Cgen/emit_cop.scm 142 */
																									int BgL_curz00_3664;

																									{	/* Cgen/emit_cop.scm 142 */
																										int BgL_res2243z00_3665;

																										BgL_res2243z00_3665 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_iportz00_3654,
																											BgL_forwardz00_3656);
																										BgL_curz00_3664 =
																											BgL_res2243z00_3665;
																									}
																									{	/* Cgen/emit_cop.scm 142 */

																										if (
																											((long) (BgL_curz00_3664)
																												== ((long) 36)))
																											{	/* Cgen/emit_cop.scm 142 */
																												BgL_matchz00_3589 =
																													BgL_newzd2matchzd2_3658;
																											}
																										else
																											{
																												long
																													BgL_forwardz00_4667;
																												long
																													BgL_lastzd2matchzd2_4666;
																												BgL_lastzd2matchzd2_4666
																													=
																													BgL_newzd2matchzd2_3658;
																												BgL_forwardz00_4667 =
																													(((long) 1) +
																													BgL_forwardz00_3656);
																												BgL_forwardz00_3656 =
																													BgL_forwardz00_4667;
																												BgL_lastzd2matchzd2_3655
																													=
																													BgL_lastzd2matchzd2_4666;
																												goto
																													BgL_statezd26zd21151z00_3587;
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
										RGC_SET_FILEPOS(BgL_iportz00_3580);
										{

											switch (BgL_matchz00_3589)
												{
												case ((long) 3):

													{	/* Cgen/emit_cop.scm 142 */
														bool_t BgL_test2595z00_4672;

														{	/* Cgen/emit_cop.scm 142 */
															long BgL_arg1855z00_3602;

															{	/* Cgen/emit_cop.scm 142 */
																long BgL_res2287z00_3603;

																BgL_res2287z00_3603 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_3580);
																BgL_arg1855z00_3602 = BgL_res2287z00_3603;
															}
															BgL_test2595z00_4672 =
																(BgL_arg1855z00_3602 == ((long) 0));
														}
														if (BgL_test2595z00_4672)
															{	/* Cgen/emit_cop.scm 142 */
																BEOF;
															}
														else
															{	/* Cgen/emit_cop.scm 142 */
																unsigned char BgL_res2289z00_3604;

																BgL_res2289z00_3604 =
																	RGC_BUFFER_CHARACTER(BgL_iportz00_3580);
																BCHAR(BgL_res2289z00_3604);
													}} break;
												case ((long) 2):

													{	/* Cgen/emit_cop.scm 154 */
														obj_t BgL_arg1863z00_3595;

														BgL_arg1863z00_3595 =
															BGl_thezd2stringze70z35zzcgen_emitzd2copzd2
															(BgL_iportz00_3580);
														bgl_display_obj(BgL_arg1863z00_3595,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}
													goto BgL_ignorez00_3581;
													break;
												case ((long) 1):

													bgl_display_string
														(BGl_string2408z00zzcgen_emitzd2copzd2,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													goto BgL_ignorez00_3581;
													break;
												case ((long) 0):

													{	/* Cgen/emit_cop.scm 144 */
														obj_t BgL_strz00_3596;

														BgL_strz00_3596 =
															BGl_thezd2stringze70z35zzcgen_emitzd2copzd2
															(BgL_iportz00_3580);
														{	/* Cgen/emit_cop.scm 144 */
															long BgL_lenz00_3597;

															{	/* Cgen/emit_cop.scm 142 */
																long BgL_res2293z00_3598;

																BgL_res2293z00_3598 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_3580);
																BgL_lenz00_3597 = BgL_res2293z00_3598;
															}
															{	/* Cgen/emit_cop.scm 145 */
																obj_t BgL_indexz00_3599;

																{	/* Cgen/emit_cop.scm 147 */
																	obj_t BgL_arg1868z00_3600;

																	BgL_arg1868z00_3600 =
																		c_substring(BgL_strz00_3596, ((long) 1),
																		BgL_lenz00_3597);
																	{	/* Cgen/emit_cop.scm 146 */

																		BgL_indexz00_3599 =
																			BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																			(BgL_arg1868z00_3600, BINT(((long) 10)));
																}}
																{	/* Cgen/emit_cop.scm 146 */

																	{	/* Cgen/emit_cop.scm 148 */
																		obj_t BgL_arg1865z00_3601;

																		BgL_arg1865z00_3601 =
																			VECTOR_REF(BgL_argsz00_3578,
																			((long) CINT(BgL_indexz00_3599) -
																				((long) 1)));
																		BGl_emitzd2copzd2zzcgen_emitzd2copzd2((
																				(BgL_copz00_bglt) BgL_arg1865z00_3601));
																	}
																	goto BgL_ignorez00_3581;
																}
															}
														}
													}
													break;
												default:
													BGl_errorz00zz__errorz00
														(BGl_string2406z00zzcgen_emitzd2copzd2,
														BGl_string2407z00zzcgen_emitzd2copzd2,
														BINT(BgL_matchz00_3589));
												}
										}
									}
								}
								bgl_close_input_port(BgL_sportz00_3575);
								return BTRUE;
							}
						}
					}
				}
		}

	}



/* the-string~0 */
	obj_t BGl_thezd2stringze70z35zzcgen_emitzd2copzd2(obj_t BgL_iportz00_3418)
	{
		{	/* Cgen/emit_cop.scm 142 */
			{	/* Cgen/emit_cop.scm 142 */
				long BgL_arg1738z00_1929;

				{	/* Cgen/emit_cop.scm 142 */
					long BgL_res2284z00_2996;

					BgL_res2284z00_2996 = RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_3418);
					BgL_arg1738z00_1929 = BgL_res2284z00_2996;
				}
				return
					rgc_buffer_substring(BgL_iportz00_3418, ((long) 0),
					BgL_arg1738z00_1929);
		}}

	}



/* &emit-cop-varc1370 */
	obj_t BGl_z62emitzd2copzd2varc1370z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3404, obj_t BgL_copz00_3405)
	{
		{	/* Cgen/emit_cop.scm 118 */
			{	/* Cgen/emit_cop.scm 119 */
				bool_t BgL_tmpz00_4696;

				{	/* Cgen/emit_cop.scm 120 */
					bool_t BgL_test2596z00_4697;

					{	/* Cgen/emit_cop.scm 120 */
						bool_t BgL_test2597z00_4698;

						{	/* Cgen/emit_cop.scm 120 */
							BgL_variablez00_bglt BgL_arg1627z00_3667;

							BgL_arg1627z00_3667 =
								(((BgL_varcz00_bglt) COBJECT(
										((BgL_varcz00_bglt) BgL_copz00_3405)))->BgL_variablez00);
							BgL_test2597z00_4698 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1627z00_3667), BGl_globalz00zzast_varz00);
						}
						if (BgL_test2597z00_4698)
							{	/* Cgen/emit_cop.scm 121 */
								BgL_globalz00_bglt BgL_i1142z00_3668;

								BgL_i1142z00_3668 =
									((BgL_globalz00_bglt)
									(((BgL_varcz00_bglt) COBJECT(
												((BgL_varcz00_bglt) BgL_copz00_3405)))->
										BgL_variablez00));
								{	/* Cgen/emit_cop.scm 122 */
									bool_t BgL_test2598z00_4706;

									{	/* Cgen/emit_cop.scm 122 */
										BgL_valuez00_bglt BgL_arg1626z00_3669;

										BgL_arg1626z00_3669 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_i1142z00_3668)))->
											BgL_valuez00);
										BgL_test2598z00_4706 =
											BGl_isazf3zf3zz__objectz00(((obj_t) BgL_arg1626z00_3669),
											BGl_scnstz00zzast_varz00);
									}
									if (BgL_test2598z00_4706)
										{	/* Cgen/emit_cop.scm 122 */
											BgL_test2596z00_4697 =
												(
												(((BgL_scnstz00_bglt) COBJECT(
															((BgL_scnstz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_i1142z00_3668)))->BgL_valuez00))))->
													BgL_classz00) == CNST_TABLE_REF(((long) 8)));
										}
									else
										{	/* Cgen/emit_cop.scm 122 */
											BgL_test2596z00_4697 = ((bool_t) 0);
										}
								}
							}
						else
							{	/* Cgen/emit_cop.scm 120 */
								BgL_test2596z00_4697 = ((bool_t) 0);
							}
					}
					if (BgL_test2596z00_4697)
						{	/* Cgen/emit_cop.scm 120 */
							bgl_display_string(BGl_string2409z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* Cgen/emit_cop.scm 127 */
								obj_t BgL_arg1606z00_3670;

								BgL_arg1606z00_3670 =
									(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varcz00_bglt) COBJECT(
														((BgL_varcz00_bglt) BgL_copz00_3405)))->
												BgL_variablez00)))->BgL_namez00);
								bgl_display_obj(BgL_arg1606z00_3670,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
							bgl_display_string(BGl_string2387z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* Cgen/emit_cop.scm 129 */
							obj_t BgL_arg1612z00_3671;

							BgL_arg1612z00_3671 =
								(((BgL_variablez00_bglt) COBJECT(
										(((BgL_varcz00_bglt) COBJECT(
													((BgL_varcz00_bglt) BgL_copz00_3405)))->
											BgL_variablez00)))->BgL_namez00);
							bgl_display_obj(BgL_arg1612z00_3671,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
				}
				BgL_tmpz00_4696 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_4696);
			}
		}

	}



/* &emit-cop-cvoid1368 */
	obj_t BGl_z62emitzd2copzd2cvoid1368z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3406, obj_t BgL_copz00_3407)
	{
		{	/* Cgen/emit_cop.scm 111 */
			return
				BBOOL(BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
					(((BgL_cvoidz00_bglt) COBJECT(
								((BgL_cvoidz00_bglt) BgL_copz00_3407)))->BgL_valuez00)));
		}

	}



/* &emit-cop-catom1366 */
	obj_t BGl_z62emitzd2copzd2catom1366z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3408, obj_t BgL_copz00_3409)
	{
		{	/* Cgen/emit_cop.scm 103 */
			{	/* Cgen/emit_cop.scm 104 */
				bool_t BgL_tmpz00_4732;

				BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(
					(((BgL_catomz00_bglt) COBJECT(
								((BgL_catomz00_bglt) BgL_copz00_3409)))->BgL_valuez00));
				BgL_tmpz00_4732 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_4732);
			}
		}

	}



/* &emit-cop-creturn1364 */
	obj_t BGl_z62emitzd2copzd2creturn1364z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3410, obj_t BgL_copz00_3411)
	{
		{	/* Cgen/emit_cop.scm 92 */
			{	/* Cgen/emit_cop.scm 93 */
				bool_t BgL_tmpz00_4737;

				{	/* Cgen/emit_cop.scm 94 */
					obj_t BgL_arg1573z00_3675;

					BgL_arg1573z00_3675 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_creturnz00_bglt) BgL_copz00_3411))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1573z00_3675);
				}
				bgl_display_string(BGl_string2410z00zzcgen_emitzd2copzd2,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				if (BGl_emitzd2copzd2zzcgen_emitzd2copzd2((((BgL_creturnz00_bglt)
								COBJECT(((BgL_creturnz00_bglt) BgL_copz00_3411)))->
							BgL_valuez00)))
					{	/* Cgen/emit_cop.scm 96 */
						bgl_display_char(((unsigned char) ';'),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 96 */
						BFALSE;
					}
				BgL_tmpz00_4737 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4737);
			}
		}

	}



/* &emit-cop-cblock1362 */
	obj_t BGl_z62emitzd2copzd2cblock1362z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3412, obj_t BgL_copz00_3413)
	{
		{	/* Cgen/emit_cop.scm 71 */
			{	/* Cgen/emit_cop.scm 72 */
				bool_t BgL_tmpz00_4749;

				{	/* Cgen/emit_cop.scm 73 */
					obj_t BgL_arg1536z00_3677;

					BgL_arg1536z00_3677 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cblockz00_bglt) BgL_copz00_3413))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1536z00_3677);
				}
				{	/* Cgen/emit_cop.scm 74 */
					bool_t BgL_test2600z00_4754;

					{	/* Cgen/emit_cop.scm 74 */
						BgL_copz00_bglt BgL_arg1565z00_3678;

						BgL_arg1565z00_3678 =
							(((BgL_cblockz00_bglt) COBJECT(
									((BgL_cblockz00_bglt) BgL_copz00_3413)))->BgL_bodyz00);
						BgL_test2600z00_4754 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1565z00_3678), BGl_cblockz00zzcgen_copz00);
					}
					if (BgL_test2600z00_4754)
						{	/* Cgen/emit_cop.scm 74 */
							BgL_tmpz00_4749 =
								BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
								(((BgL_cblockz00_bglt) COBJECT(
											((BgL_cblockz00_bglt) BgL_copz00_3413)))->BgL_bodyz00));
						}
					else
						{	/* Cgen/emit_cop.scm 74 */
							bgl_display_string(BGl_string2411z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* Cgen/emit_cop.scm 79 */
								obj_t BgL_arg1552z00_3679;

								BgL_arg1552z00_3679 =
									(((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt)
												((BgL_cblockz00_bglt) BgL_copz00_3413))))->BgL_locz00);
								BGl_emitzd2bdbzd2loczd2commentzd2zzcgen_emitzd2copzd2
									(BgL_arg1552z00_3679);
							}
							if (BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
									(((BgL_cblockz00_bglt) COBJECT(
												((BgL_cblockz00_bglt) BgL_copz00_3413)))->BgL_bodyz00)))
								{	/* Cgen/emit_cop.scm 80 */
									BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
										(BGl_za2bdbzd2locza2zd2zzcgen_emitzd2copzd2);
									bgl_display_string(BGl_string2375z00zzcgen_emitzd2copzd2,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BNIL;
								}
							else
								{	/* Cgen/emit_cop.scm 80 */
									BFALSE;
								}
							bgl_display_string(BGl_string2366z00zzcgen_emitzd2copzd2,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							BgL_tmpz00_4749 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_4749);
			}
		}

	}



/* &emit-cop-cgoto1360 */
	obj_t BGl_z62emitzd2copzd2cgoto1360z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3414, obj_t BgL_copz00_3415)
	{
		{	/* Cgen/emit_cop.scm 62 */
			{	/* Cgen/emit_cop.scm 63 */
				bool_t BgL_tmpz00_4775;

				{	/* Cgen/emit_cop.scm 64 */
					obj_t BgL_arg1518z00_3681;

					BgL_arg1518z00_3681 =
						(((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cgotoz00_bglt) BgL_copz00_3415))))->BgL_locz00);
					BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1518z00_3681);
				}
				{	/* Cgen/emit_cop.scm 65 */
					obj_t BgL_port1136z00_3682;

					BgL_port1136z00_3682 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* Cgen/emit_cop.scm 65 */
						obj_t BgL_tmpz00_4780;

						BgL_tmpz00_4780 = ((obj_t) BgL_port1136z00_3682);
						bgl_display_string(BGl_string2412z00zzcgen_emitzd2copzd2,
							BgL_tmpz00_4780);
					}
					bgl_display_obj(
						(((BgL_clabelz00_bglt) COBJECT(
									(((BgL_cgotoz00_bglt) COBJECT(
												((BgL_cgotoz00_bglt) BgL_copz00_3415)))->
										BgL_labelz00)))->BgL_namez00), BgL_port1136z00_3682);
					{	/* Cgen/emit_cop.scm 65 */
						obj_t BgL_tmpz00_4787;

						BgL_tmpz00_4787 = ((obj_t) BgL_port1136z00_3682);
						bgl_display_char(((unsigned char) ';'), BgL_tmpz00_4787);
				}}
				BgL_tmpz00_4775 = ((bool_t) 0);
				return BBOOL(BgL_tmpz00_4775);
			}
		}

	}



/* &emit-cop-clabel1358 */
	obj_t BGl_z62emitzd2copzd2clabel1358z62zzcgen_emitzd2copzd2(obj_t
		BgL_envz00_3416, obj_t BgL_copz00_3417)
	{
		{	/* Cgen/emit_cop.scm 50 */
			{	/* Cgen/emit_cop.scm 51 */
				bool_t BgL_tmpz00_4791;

				if (
					(((BgL_clabelz00_bglt) COBJECT(
								((BgL_clabelz00_bglt) BgL_copz00_3417)))->BgL_usedzf3zf3))
					{	/* Cgen/emit_cop.scm 52 */
						{	/* Cgen/emit_cop.scm 54 */
							obj_t BgL_arg1493z00_3684;

							BgL_arg1493z00_3684 =
								(((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt)
											((BgL_clabelz00_bglt) BgL_copz00_3417))))->BgL_locz00);
							BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BgL_arg1493z00_3684);
						}
						{	/* Cgen/emit_cop.scm 55 */
							obj_t BgL_arg1495z00_3685;

							BgL_arg1495z00_3685 =
								(((BgL_clabelz00_bglt) COBJECT(
										((BgL_clabelz00_bglt) BgL_copz00_3417)))->BgL_namez00);
							bgl_display_obj(BgL_arg1495z00_3685,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
						bgl_display_char(((unsigned char) ':'),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* Cgen/emit_cop.scm 52 */
						BFALSE;
					}
				{	/* Cgen/emit_cop.scm 57 */
					obj_t BgL_arg1497z00_3686;

					BgL_arg1497z00_3686 =
						(((BgL_clabelz00_bglt) COBJECT(
								((BgL_clabelz00_bglt) BgL_copz00_3417)))->BgL_bodyz00);
					BgL_tmpz00_4791 =
						BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
						((BgL_copz00_bglt) BgL_arg1497z00_3686));
				}
				return BBOOL(BgL_tmpz00_4791);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_emitzd2copzd2()
	{
		{	/* Cgen/emit_cop.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2413z00zzcgen_emitzd2copzd2));
		}

	}

#ifdef __cplusplus
}
#endif
