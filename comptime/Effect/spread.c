/*===========================================================================*/
/*   (Effect/spread.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/spread.scm) */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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


	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62spreadzd2sidezd2effectz121243z70zzeffect_spreadz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62spreadzd2sidezd2effectz12z70zzeffect_spreadz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzeffect_spreadz00();
	static bool_t BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	extern obj_t BGl_patchz00zzast_nodez00;
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_spreadz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzeffect_spreadz00();
	static obj_t BGl_genericzd2initzd2zzeffect_spreadz00();
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21246za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21248za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21250za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21252za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21254za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21256za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21258za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21260za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21262za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21264za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21266za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21268za2zzeffect_spreadz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21270za2zzeffect_spreadz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21273za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21275za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21277za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21279za2zzeffect_spreadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
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
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21281za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21283za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21285za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21287za2zzeffect_spreadz00(obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2sidezd2effectz12zd21289za2zzeffect_spreadz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_spreadz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_spreadz00();
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1648z00zzeffect_spreadz00,
		BgL_bgl_string1648za700za7za7e1686za7, "spread-side-effect!1243", 23);
	      DEFINE_STRING(BGl_string1650z00zzeffect_spreadz00,
		BgL_bgl_string1650za700za7za7e1687za7, "spread-side-effect!", 19);
	      DEFINE_STRING(BGl_string1672z00zzeffect_spreadz00,
		BgL_bgl_string1672za700za7za7e1688za7, "effect_spread", 13);
	      DEFINE_STRING(BGl_string1673z00zzeffect_spreadz00,
		BgL_bgl_string1673za700za7za7e1689za7, "read ", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1647z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1690z00,
		BGl_z62spreadzd2sidezd2effectz121243z70zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1649z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1691z00,
		BGl_z62spreadzd2sidezd2effectz12zd21246za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1651z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1692z00,
		BGl_z62spreadzd2sidezd2effectz12zd21248za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1652z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1693z00,
		BGl_z62spreadzd2sidezd2effectz12zd21250za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1653z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1694z00,
		BGl_z62spreadzd2sidezd2effectz12zd21252za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1654z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1695z00,
		BGl_z62spreadzd2sidezd2effectz12zd21254za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1655z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1696z00,
		BGl_z62spreadzd2sidezd2effectz12zd21256za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1656z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1697z00,
		BGl_z62spreadzd2sidezd2effectz12zd21258za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1657z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1698z00,
		BGl_z62spreadzd2sidezd2effectz12zd21260za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1658z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1699z00,
		BGl_z62spreadzd2sidezd2effectz12zd21262za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1659z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1700z00,
		BGl_z62spreadzd2sidezd2effectz12zd21264za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1660z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1701z00,
		BGl_z62spreadzd2sidezd2effectz12zd21266za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1661z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1702z00,
		BGl_z62spreadzd2sidezd2effectz12zd21268za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1662z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1703z00,
		BGl_z62spreadzd2sidezd2effectz12zd21270za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1663z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1704z00,
		BGl_z62spreadzd2sidezd2effectz12zd21273za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1664z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1705z00,
		BGl_z62spreadzd2sidezd2effectz12zd21275za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1665z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1706z00,
		BGl_z62spreadzd2sidezd2effectz12zd21277za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1666z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1707z00,
		BGl_z62spreadzd2sidezd2effectz12zd21279za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1667z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1708z00,
		BGl_z62spreadzd2sidezd2effectz12zd21281za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1668z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1709z00,
		BGl_z62spreadzd2sidezd2effectz12zd21283za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1669z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1710z00,
		BGl_z62spreadzd2sidezd2effectz12zd21285za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1711z00,
		BGl_z62spreadzd2sidezd2effectz12z70zzeffect_spreadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1670z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1712z00,
		BGl_z62spreadzd2sidezd2effectz12zd21287za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1671z00zzeffect_spreadz00,
		BgL_bgl_za762spreadza7d2side1713z00,
		BGl_z62spreadzd2sidezd2effectz12zd21289za2zzeffect_spreadz00, 0L, BUNSPEC,
		1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzeffect_spreadz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long
		BgL_checksumz00_1943, char *BgL_fromz00_1944)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_spreadz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_spreadz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzeffect_spreadz00();
					BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00();
					BGl_cnstzd2initzd2zzeffect_spreadz00();
					BGl_importedzd2moduleszd2initz00zzeffect_spreadz00();
					BGl_genericzd2initzd2zzeffect_spreadz00();
					BGl_methodzd2initzd2zzeffect_spreadz00();
					return BGl_toplevelzd2initzd2zzeffect_spreadz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "effect_spread");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_spread");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_spread");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			{	/* Effect/spread.scm 15 */
				obj_t BgL_cportz00_1868;

				{	/* Effect/spread.scm 15 */
					obj_t BgL_stringz00_1876;

					BgL_stringz00_1876 = BGl_string1673z00zzeffect_spreadz00;
					{	/* Effect/spread.scm 15 */
						obj_t BgL_startz00_1877;

						BgL_startz00_1877 = BINT(((long) 0));
						{	/* Effect/spread.scm 15 */
							obj_t BgL_endz00_1878;

							BgL_endz00_1878 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1876)));
							{	/* Effect/spread.scm 15 */

								BgL_cportz00_1868 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1876, BgL_startz00_1877, BgL_endz00_1878);
				}}}}
				{
					long BgL_iz00_1869;

					BgL_iz00_1869 = ((long) 0);
				BgL_loopz00_1870:
					if ((BgL_iz00_1869 == ((long) -1)))
						{	/* Effect/spread.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/spread.scm 15 */
							{	/* Effect/spread.scm 15 */
								obj_t BgL_arg1684z00_1872;

								{	/* Effect/spread.scm 15 */

									{	/* Effect/spread.scm 15 */
										obj_t BgL_locationz00_1874;

										BgL_locationz00_1874 = BBOOL(((bool_t) 0));
										{	/* Effect/spread.scm 15 */

											BgL_arg1684z00_1872 =
												BGl_readz00zz__readerz00(BgL_cportz00_1868,
												BgL_locationz00_1874);
										}
									}
								}
								{	/* Effect/spread.scm 15 */
									int BgL_tmpz00_1972;

									BgL_tmpz00_1972 = (int) (BgL_iz00_1869);
									CNST_TABLE_SET(BgL_tmpz00_1972, BgL_arg1684z00_1872);
							}}
							{	/* Effect/spread.scm 15 */
								int BgL_auxz00_1875;

								BgL_auxz00_1875 = (int) ((BgL_iz00_1869 - ((long) 1)));
								{
									long BgL_iz00_1977;

									BgL_iz00_1977 = (long) (BgL_auxz00_1875);
									BgL_iz00_1869 = BgL_iz00_1977;
									goto BgL_loopz00_1870;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			return BUNSPEC;
		}

	}



/* spread-side-effect*! */
	bool_t BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(obj_t
		BgL_nodeza2za2_26)
	{
		{	/* Effect/spread.scm 232 */
			{
				obj_t BgL_nodeza2za2_1349;
				bool_t BgL_resz00_1350;

				BgL_nodeza2za2_1349 = BgL_nodeza2za2_26;
				BgL_resz00_1350 = ((bool_t) 0);
			BgL_zc3z04anonymousza31293ze3z87_1351:
				if (NULLP(BgL_nodeza2za2_1349))
					{	/* Effect/spread.scm 235 */
						return BgL_resz00_1350;
					}
				else
					{	/* Effect/spread.scm 237 */
						obj_t BgL_arg1295z00_1353;
						bool_t BgL_arg1296z00_1354;

						BgL_arg1295z00_1353 = CDR(((obj_t) BgL_nodeza2za2_1349));
						{	/* Effect/spread.scm 237 */
							bool_t BgL__ortest_1129z00_1355;

							{	/* Effect/spread.scm 237 */
								obj_t BgL_arg1297z00_1356;

								BgL_arg1297z00_1356 = CAR(((obj_t) BgL_nodeza2za2_1349));
								BgL__ortest_1129z00_1355 =
									BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
									((BgL_nodez00_bglt) BgL_arg1297z00_1356));
							}
							if (BgL__ortest_1129z00_1355)
								{	/* Effect/spread.scm 237 */
									BgL_arg1296z00_1354 = BgL__ortest_1129z00_1355;
								}
							else
								{	/* Effect/spread.scm 237 */
									BgL_arg1296z00_1354 = BgL_resz00_1350;
								}
						}
						{
							bool_t BgL_resz00_1990;
							obj_t BgL_nodeza2za2_1989;

							BgL_nodeza2za2_1989 = BgL_arg1295z00_1353;
							BgL_resz00_1990 = BgL_arg1296z00_1354;
							BgL_resz00_1350 = BgL_resz00_1990;
							BgL_nodeza2za2_1349 = BgL_nodeza2za2_1989;
							goto BgL_zc3z04anonymousza31293ze3z87_1351;
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_proc1647z00zzeffect_spreadz00, BGl_nodez00zzast_nodez00,
				BGl_string1648z00zzeffect_spreadz00);
		}

	}



/* &spread-side-effect!1243 */
	obj_t BGl_z62spreadzd2sidezd2effectz121243z70zzeffect_spreadz00(obj_t
		BgL_envz00_1798, obj_t BgL_nodez00_1799)
	{
		{	/* Effect/spread.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* spread-side-effect! */
	BGL_EXPORTED_DEF bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		{	/* Effect/spread.scm 23 */
			{	/* Effect/spread.scm 23 */
				obj_t BgL_method1244z00_1362;

				{	/* Effect/spread.scm 23 */
					obj_t BgL_res1643z00_1757;

					{	/* Effect/spread.scm 23 */
						long BgL_objzd2classzd2numz00_1722;

						{	/* Effect/spread.scm 23 */
							long BgL_res1633z00_1725;

							BgL_res1633z00_1725 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_3));
							BgL_objzd2classzd2numz00_1722 = BgL_res1633z00_1725;
						}
						{	/* Effect/spread.scm 23 */
							obj_t BgL_arg1813z00_1723;

							BgL_arg1813z00_1723 =
								PROCEDURE_REF
								(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
								(int) (((long) 1)));
							{	/* Effect/spread.scm 23 */
								int BgL_offsetz00_1727;

								BgL_offsetz00_1727 = (int) (BgL_objzd2classzd2numz00_1722);
								{	/* Effect/spread.scm 23 */
									long BgL_offsetz00_1728;

									BgL_offsetz00_1728 =
										((long) (BgL_offsetz00_1727) - OBJECT_TYPE);
									{	/* Effect/spread.scm 23 */
										long BgL_modz00_1729;

										BgL_modz00_1729 =
											(BgL_offsetz00_1728 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Effect/spread.scm 23 */
											long BgL_restz00_1731;

											BgL_restz00_1731 =
												(BgL_offsetz00_1728 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Effect/spread.scm 23 */

												{	/* Effect/spread.scm 23 */
													obj_t BgL_bucketz00_1733;

													BgL_bucketz00_1733 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1723), BgL_modz00_1729);
													BgL_res1643z00_1757 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1733), BgL_restz00_1731);
					}}}}}}}}
					BgL_method1244z00_1362 = BgL_res1643z00_1757;
				}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method1244z00_1362) (BgL_method1244z00_1362,
						((obj_t) BgL_nodez00_3), BEOA));
			}
		}

	}



/* &spread-side-effect! */
	obj_t BGl_z62spreadzd2sidezd2effectz12z70zzeffect_spreadz00(obj_t
		BgL_envz00_1800, obj_t BgL_nodez00_1801)
	{
		{	/* Effect/spread.scm 23 */
			return
				BBOOL(BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					((BgL_nodez00_bglt) BgL_nodez00_1801)));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_varz00zzast_nodez00, BGl_proc1649z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_patchz00zzast_nodez00, BGl_proc1651z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1652z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_syncz00zzast_nodez00, BGl_proc1653z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_appz00zzast_nodez00, BGl_proc1654z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1655z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1656z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_externz00zzast_nodez00, BGl_proc1657z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_castz00zzast_nodez00, BGl_proc1658z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_setqz00zzast_nodez00, BGl_proc1659z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1660z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_failz00zzast_nodez00, BGl_proc1661z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_switchz00zzast_nodez00, BGl_proc1662z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1663z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1664z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1665z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1666z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1667z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1668z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_returnz00zzast_nodez00, BGl_proc1669z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1670z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2sidezd2effectz12zd2envzc0zzeffect_spreadz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1671z00zzeffect_spreadz00,
				BGl_string1650z00zzeffect_spreadz00);
		}

	}



/* &spread-side-effect!-1289 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21289za2zzeffect_spreadz00(obj_t
		BgL_envz00_1824, obj_t BgL_nodez00_1825)
	{
		{	/* Effect/spread.scm 225 */
			{	/* Effect/spread.scm 226 */
				bool_t BgL_tmpz00_2049;

				{	/* Effect/spread.scm 227 */
					BgL_varz00_bglt BgL_arg1388z00_1883;

					BgL_arg1388z00_1883 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_1825)))->BgL_varz00);
					BgL_tmpz00_2049 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						((BgL_nodez00_bglt) BgL_arg1388z00_1883));
				}
				return BBOOL(BgL_tmpz00_2049);
			}
		}

	}



/* &spread-side-effect!-1287 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21287za2zzeffect_spreadz00(obj_t
		BgL_envz00_1826, obj_t BgL_nodez00_1827)
	{
		{	/* Effect/spread.scm 214 */
			return
				BBOOL(BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_1827)))->BgL_bodyz00)));
		}

	}



/* &spread-side-effect!-1285 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21285za2zzeffect_spreadz00(obj_t
		BgL_envz00_1828, obj_t BgL_nodez00_1829)
	{
		{	/* Effect/spread.scm 206 */
			{	/* Effect/spread.scm 207 */
				bool_t BgL_tmpz00_2059;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_1829)))->BgL_valuez00));
				BgL_tmpz00_2059 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2059);
			}
		}

	}



/* &spread-side-effect!-1283 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21283za2zzeffect_spreadz00(obj_t
		BgL_envz00_1830, obj_t BgL_nodez00_1831)
	{
		{	/* Effect/spread.scm 198 */
			{	/* Effect/spread.scm 199 */
				bool_t BgL_tmpz00_2064;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1831)))->BgL_valuez00));
				BgL_tmpz00_2064 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2064);
			}
		}

	}



/* &spread-side-effect!-1281 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21281za2zzeffect_spreadz00(obj_t
		BgL_envz00_1832, obj_t BgL_nodez00_1833)
	{
		{	/* Effect/spread.scm 189 */
			{	/* Effect/spread.scm 190 */
				bool_t BgL_tmpz00_2069;

				{	/* Effect/spread.scm 191 */
					bool_t BgL_resz00_1888;

					BgL_resz00_1888 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_1833)))->BgL_valuez00));
					((((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_nodez00_1833))))->
							BgL_sidezd2effectzd2) =
						((obj_t) BBOOL(BgL_resz00_1888)), BUNSPEC);
					BgL_tmpz00_2069 = BgL_resz00_1888;
				}
				return BBOOL(BgL_tmpz00_2069);
			}
		}

	}



/* &spread-side-effect!-1279 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21279za2zzeffect_spreadz00(obj_t
		BgL_envz00_1834, obj_t BgL_nodez00_1835)
	{
		{	/* Effect/spread.scm 180 */
			{	/* Effect/spread.scm 181 */
				bool_t BgL_tmpz00_2078;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1835)))->
						BgL_exitz00));
				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(((
							(BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
									BgL_nodez00_1835)))->BgL_valuez00));
				BgL_tmpz00_2078 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2078);
			}
		}

	}



/* &spread-side-effect!-1277 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21277za2zzeffect_spreadz00(obj_t
		BgL_envz00_1836, obj_t BgL_nodez00_1837)
	{
		{	/* Effect/spread.scm 173 */
			return
				BBOOL(BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1837)))->
						BgL_bodyz00)));
		}

	}



/* &spread-side-effect!-1275 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21275za2zzeffect_spreadz00(obj_t
		BgL_envz00_1838, obj_t BgL_nodez00_1839)
	{
		{	/* Effect/spread.scm 159 */
			{	/* Effect/spread.scm 160 */
				bool_t BgL_tmpz00_2090;

				{	/* Effect/spread.scm 161 */
					bool_t BgL_g1120z00_1892;

					BgL_g1120z00_1892 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_1839)))->BgL_bodyz00));
					{
						obj_t BgL_bdgsz00_1894;
						bool_t BgL_resz00_1895;

						BgL_bdgsz00_1894 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_1839)))->
							BgL_bindingsz00);
						BgL_resz00_1895 = BgL_g1120z00_1892;
					BgL_loopz00_1893:
						if (NULLP(BgL_bdgsz00_1894))
							{	/* Effect/spread.scm 163 */
								((((BgL_nodezf2effectzf2_bglt) COBJECT(
												((BgL_nodezf2effectzf2_bglt)
													((BgL_letzd2varzd2_bglt) BgL_nodez00_1839))))->
										BgL_sidezd2effectzd2) =
									((obj_t) BBOOL(BgL_resz00_1895)), BUNSPEC);
								BgL_tmpz00_2090 = BgL_resz00_1895;
							}
						else
							{	/* Effect/spread.scm 167 */
								obj_t BgL_arg1364z00_1896;
								bool_t BgL_arg1367z00_1897;

								BgL_arg1364z00_1896 = CDR(((obj_t) BgL_bdgsz00_1894));
								{	/* Effect/spread.scm 168 */
									bool_t BgL__ortest_1121z00_1898;

									{	/* Effect/spread.scm 168 */
										obj_t BgL_arg1370z00_1899;

										{	/* Effect/spread.scm 168 */
											obj_t BgL_pairz00_1900;

											BgL_pairz00_1900 = CAR(((obj_t) BgL_bdgsz00_1894));
											BgL_arg1370z00_1899 = CDR(BgL_pairz00_1900);
										}
										BgL__ortest_1121z00_1898 =
											BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
											((BgL_nodez00_bglt) BgL_arg1370z00_1899));
									}
									if (BgL__ortest_1121z00_1898)
										{	/* Effect/spread.scm 168 */
											BgL_arg1367z00_1897 = BgL__ortest_1121z00_1898;
										}
									else
										{	/* Effect/spread.scm 168 */
											BgL_arg1367z00_1897 = BgL_resz00_1895;
										}
								}
								{
									bool_t BgL_resz00_2109;
									obj_t BgL_bdgsz00_2108;

									BgL_bdgsz00_2108 = BgL_arg1364z00_1896;
									BgL_resz00_2109 = BgL_arg1367z00_1897;
									BgL_resz00_1895 = BgL_resz00_2109;
									BgL_bdgsz00_1894 = BgL_bdgsz00_2108;
									goto BgL_loopz00_1893;
								}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2090);
			}
		}

	}



/* &spread-side-effect!-1273 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21273za2zzeffect_spreadz00(obj_t
		BgL_envz00_1840, obj_t BgL_nodez00_1841)
	{
		{	/* Effect/spread.scm 147 */
			{	/* Effect/spread.scm 148 */
				bool_t BgL_tmpz00_2113;

				{	/* Effect/spread.scm 149 */
					obj_t BgL_g1242z00_1902;

					BgL_g1242z00_1902 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_1841)))->BgL_localsz00);
					{
						obj_t BgL_l1240z00_1904;

						BgL_l1240z00_1904 = BgL_g1242z00_1902;
					BgL_zc3z04anonymousza31349ze3z87_1903:
						if (PAIRP(BgL_l1240z00_1904))
							{	/* Effect/spread.scm 149 */
								{	/* Effect/spread.scm 150 */
									obj_t BgL_localz00_1905;

									BgL_localz00_1905 = CAR(BgL_l1240z00_1904);
									{	/* Effect/spread.scm 150 */
										obj_t BgL_arg1351z00_1906;

										BgL_arg1351z00_1906 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_1905))))->
															BgL_valuez00))))->BgL_bodyz00);
										BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00((
												(BgL_nodez00_bglt) BgL_arg1351z00_1906));
									}
								}
								{
									obj_t BgL_l1240z00_2126;

									BgL_l1240z00_2126 = CDR(BgL_l1240z00_1904);
									BgL_l1240z00_1904 = BgL_l1240z00_2126;
									goto BgL_zc3z04anonymousza31349ze3z87_1903;
								}
							}
						else
							{	/* Effect/spread.scm 149 */
								((bool_t) 1);
							}
					}
				}
				{	/* Effect/spread.scm 152 */
					bool_t BgL_resz00_1907;

					BgL_resz00_1907 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_1841)))->BgL_bodyz00));
					((((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt)
										((BgL_letzd2funzd2_bglt) BgL_nodez00_1841))))->
							BgL_sidezd2effectzd2) =
						((obj_t) BBOOL(BgL_resz00_1907)), BUNSPEC);
					BgL_tmpz00_2113 = BgL_resz00_1907;
				}
				return BBOOL(BgL_tmpz00_2113);
			}
		}

	}



/* &spread-side-effect!-1270 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21270za2zzeffect_spreadz00(obj_t
		BgL_envz00_1842, obj_t BgL_nodez00_1843)
	{
		{	/* Effect/spread.scm 133 */
			{	/* Effect/spread.scm 134 */
				bool_t BgL_tmpz00_2136;

				{	/* Effect/spread.scm 135 */
					bool_t BgL_g1116z00_1909;

					BgL_g1116z00_1909 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_1843)))->BgL_testz00));
					{
						obj_t BgL_clausesz00_1911;
						bool_t BgL_resz00_1912;

						BgL_clausesz00_1911 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_1843)))->BgL_clausesz00);
						BgL_resz00_1912 = BgL_g1116z00_1909;
					BgL_loopz00_1910:
						if (NULLP(BgL_clausesz00_1911))
							{	/* Effect/spread.scm 137 */
								((((BgL_nodezf2effectzf2_bglt) COBJECT(
												((BgL_nodezf2effectzf2_bglt)
													((BgL_switchz00_bglt) BgL_nodez00_1843))))->
										BgL_sidezd2effectzd2) =
									((obj_t) BBOOL(BgL_resz00_1912)), BUNSPEC);
								BgL_tmpz00_2136 = BgL_resz00_1912;
							}
						else
							{	/* Effect/spread.scm 141 */
								obj_t BgL_arg1344z00_1913;
								bool_t BgL_arg1345z00_1914;

								BgL_arg1344z00_1913 = CDR(((obj_t) BgL_clausesz00_1911));
								{	/* Effect/spread.scm 142 */
									bool_t BgL__ortest_1117z00_1915;

									{	/* Effect/spread.scm 142 */
										obj_t BgL_arg1346z00_1916;

										{	/* Effect/spread.scm 142 */
											obj_t BgL_pairz00_1917;

											BgL_pairz00_1917 = CAR(((obj_t) BgL_clausesz00_1911));
											BgL_arg1346z00_1916 = CDR(BgL_pairz00_1917);
										}
										BgL__ortest_1117z00_1915 =
											BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
											((BgL_nodez00_bglt) BgL_arg1346z00_1916));
									}
									if (BgL__ortest_1117z00_1915)
										{	/* Effect/spread.scm 142 */
											BgL_arg1345z00_1914 = BgL__ortest_1117z00_1915;
										}
									else
										{	/* Effect/spread.scm 142 */
											BgL_arg1345z00_1914 = BgL_resz00_1912;
										}
								}
								{
									bool_t BgL_resz00_2155;
									obj_t BgL_clausesz00_2154;

									BgL_clausesz00_2154 = BgL_arg1344z00_1913;
									BgL_resz00_2155 = BgL_arg1345z00_1914;
									BgL_resz00_1912 = BgL_resz00_2155;
									BgL_clausesz00_1911 = BgL_clausesz00_2154;
									goto BgL_loopz00_1910;
								}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2136);
			}
		}

	}



/* &spread-side-effect!-1268 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21268za2zzeffect_spreadz00(obj_t
		BgL_envz00_1844, obj_t BgL_nodez00_1845)
	{
		{	/* Effect/spread.scm 123 */
			{	/* Effect/spread.scm 124 */
				bool_t BgL_tmpz00_2159;

				{	/* Effect/spread.scm 125 */
					bool_t BgL_reszd2proczd2_1919;

					BgL_reszd2proczd2_1919 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_1845)))->BgL_procz00));
					{	/* Effect/spread.scm 125 */
						bool_t BgL_reszd2msgzd2_1920;

						BgL_reszd2msgzd2_1920 =
							BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
							(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_1845)))->BgL_msgz00));
						{	/* Effect/spread.scm 126 */
							bool_t BgL_reszd2objzd2_1921;

							BgL_reszd2objzd2_1921 =
								BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_1845)))->BgL_objz00));
							{	/* Effect/spread.scm 127 */

								BgL_tmpz00_2159 = ((bool_t) 1);
							}
						}
					}
				}
				return BBOOL(BgL_tmpz00_2159);
			}
		}

	}



/* &spread-side-effect!-1266 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21266za2zzeffect_spreadz00(obj_t
		BgL_envz00_1846, obj_t BgL_nodez00_1847)
	{
		{	/* Effect/spread.scm 111 */
			{	/* Effect/spread.scm 112 */
				bool_t BgL_tmpz00_2170;

				{	/* Effect/spread.scm 113 */
					bool_t BgL_reszd2testzd2_1923;

					BgL_reszd2testzd2_1923 =
						BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_1847)))->BgL_testz00));
					{	/* Effect/spread.scm 113 */
						bool_t BgL_reszd2truezd2_1924;

						BgL_reszd2truezd2_1924 =
							BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_1847)))->
								BgL_truez00));
						{	/* Effect/spread.scm 114 */
							bool_t BgL_reszd2falsezd2_1925;

							BgL_reszd2falsezd2_1925 =
								BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
								(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_1847)))->
									BgL_falsez00));
							{	/* Effect/spread.scm 115 */
								bool_t BgL_resz00_1926;

								if (BgL_reszd2testzd2_1923)
									{	/* Effect/spread.scm 116 */
										BgL_resz00_1926 = BgL_reszd2testzd2_1923;
									}
								else
									{	/* Effect/spread.scm 116 */
										if (BgL_reszd2truezd2_1924)
											{	/* Effect/spread.scm 116 */
												BgL_resz00_1926 = BgL_reszd2truezd2_1924;
											}
										else
											{	/* Effect/spread.scm 116 */
												BgL_resz00_1926 = BgL_reszd2falsezd2_1925;
											}
									}
								{	/* Effect/spread.scm 116 */

									((((BgL_nodezf2effectzf2_bglt) COBJECT(
													((BgL_nodezf2effectzf2_bglt)
														((BgL_conditionalz00_bglt) BgL_nodez00_1847))))->
											BgL_sidezd2effectzd2) =
										((obj_t) BBOOL(BgL_resz00_1926)), BUNSPEC);
									BgL_tmpz00_2170 = BgL_resz00_1926;
								}
							}
						}
					}
				}
				return BBOOL(BgL_tmpz00_2170);
			}
		}

	}



/* &spread-side-effect!-1264 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21264za2zzeffect_spreadz00(obj_t
		BgL_envz00_1848, obj_t BgL_nodez00_1849)
	{
		{	/* Effect/spread.scm 103 */
			{	/* Effect/spread.scm 104 */
				bool_t BgL_tmpz00_2187;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_1849)))->BgL_valuez00));
				BgL_tmpz00_2187 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2187);
			}
		}

	}



/* &spread-side-effect!-1262 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21262za2zzeffect_spreadz00(obj_t
		BgL_envz00_1850, obj_t BgL_nodez00_1851)
	{
		{	/* Effect/spread.scm 96 */
			return
				BBOOL(BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_1851)))->BgL_argz00)));
		}

	}



/* &spread-side-effect!-1260 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21260za2zzeffect_spreadz00(obj_t
		BgL_envz00_1852, obj_t BgL_nodez00_1853)
	{
		{	/* Effect/spread.scm 87 */
			{	/* Effect/spread.scm 89 */
				obj_t BgL_resz00_1930;

				{	/* Effect/spread.scm 89 */
					bool_t BgL__ortest_1105z00_1931;

					BgL__ortest_1105z00_1931 =
						BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(
						(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_nodez00_1853)))->BgL_exprza2za2));
					if (BgL__ortest_1105z00_1931)
						{	/* Effect/spread.scm 89 */
							BgL_resz00_1930 = BBOOL(BgL__ortest_1105z00_1931);
						}
					else
						{	/* Effect/spread.scm 89 */
							BgL_resz00_1930 =
								(((BgL_nodezf2effectzf2_bglt) COBJECT(
										((BgL_nodezf2effectzf2_bglt)
											((BgL_externz00_bglt) BgL_nodez00_1853))))->
								BgL_sidezd2effectzd2);
						}
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_externz00_bglt) BgL_nodez00_1853))))->
						BgL_sidezd2effectzd2) = ((obj_t) BgL_resz00_1930), BUNSPEC);
				return BgL_resz00_1930;
			}
		}

	}



/* &spread-side-effect!-1258 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21258za2zzeffect_spreadz00(obj_t
		BgL_envz00_1854, obj_t BgL_nodez00_1855)
	{
		{	/* Effect/spread.scm 78 */
			{	/* Effect/spread.scm 79 */
				bool_t BgL_tmpz00_2207;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_1855)))->BgL_funz00));
				BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_1855)))->BgL_argsz00));
				BgL_tmpz00_2207 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2207);
			}
		}

	}



/* &spread-side-effect!-1256 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21256za2zzeffect_spreadz00(obj_t
		BgL_envz00_1856, obj_t BgL_nodez00_1857)
	{
		{	/* Effect/spread.scm 69 */
			{	/* Effect/spread.scm 70 */
				bool_t BgL_tmpz00_2215;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_1857)))->BgL_funz00));
				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_1857)))->BgL_argz00));
				BgL_tmpz00_2215 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2215);
			}
		}

	}



/* &spread-side-effect!-1254 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21254za2zzeffect_spreadz00(obj_t
		BgL_envz00_1858, obj_t BgL_nodez00_1859)
	{
		{	/* Effect/spread.scm 59 */
			{	/* Effect/spread.scm 61 */
				obj_t BgL_resz00_1935;

				{	/* Effect/spread.scm 61 */
					bool_t BgL__ortest_1101z00_1936;

					BgL__ortest_1101z00_1936 =
						BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(
						(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_1859)))->BgL_argsz00));
					if (BgL__ortest_1101z00_1936)
						{	/* Effect/spread.scm 61 */
							BgL_resz00_1935 = BBOOL(BgL__ortest_1101z00_1936);
						}
					else
						{	/* Effect/spread.scm 61 */
							BgL_resz00_1935 =
								(((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														(((BgL_varz00_bglt) COBJECT(
																	(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_1859)))->
																		BgL_funz00)))->BgL_variablez00)))->
												BgL_valuez00))))->BgL_sidezd2effectzd2);
						}
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_nodez00_1859))))->
						BgL_sidezd2effectzd2) = ((obj_t) BgL_resz00_1935), BUNSPEC);
				return BgL_resz00_1935;
			}
		}

	}



/* &spread-side-effect!-1252 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21252za2zzeffect_spreadz00(obj_t
		BgL_envz00_1860, obj_t BgL_nodez00_1861)
	{
		{	/* Effect/spread.scm 50 */
			{	/* Effect/spread.scm 51 */
				bool_t BgL_tmpz00_2237;

				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_1861)))->BgL_mutexz00));
				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_1861)))->BgL_prelockz00));
				BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_1861)))->BgL_bodyz00));
				BgL_tmpz00_2237 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2237);
			}
		}

	}



/* &spread-side-effect!-1250 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21250za2zzeffect_spreadz00(obj_t
		BgL_envz00_1862, obj_t BgL_nodez00_1863)
	{
		{	/* Effect/spread.scm 42 */
			{	/* Effect/spread.scm 43 */
				bool_t BgL_tmpz00_2248;

				{	/* Effect/spread.scm 43 */
					bool_t BgL_resz00_1939;

					BgL_resz00_1939 =
						BGl_spreadzd2sidezd2effectza2z12zb0zzeffect_spreadz00(
						(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_1863)))->BgL_nodesz00));
					((((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt)
										((BgL_sequencez00_bglt) BgL_nodez00_1863))))->
							BgL_sidezd2effectzd2) =
						((obj_t) BBOOL(BgL_resz00_1939)), BUNSPEC);
					BgL_tmpz00_2248 = BgL_resz00_1939;
				}
				return BBOOL(BgL_tmpz00_2248);
			}
		}

	}



/* &spread-side-effect!-1248 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21248za2zzeffect_spreadz00(obj_t
		BgL_envz00_1864, obj_t BgL_nodez00_1865)
	{
		{	/* Effect/spread.scm 35 */
			{	/* Effect/spread.scm 36 */
				bool_t BgL_tmpz00_2257;

				{	/* Effect/spread.scm 36 */
					obj_t BgL_arg1306z00_1941;

					BgL_arg1306z00_1941 =
						(((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt)
									((BgL_patchz00_bglt) BgL_nodez00_1865))))->BgL_valuez00);
					BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
						((BgL_nodez00_bglt) BgL_arg1306z00_1941));
				}
				BgL_tmpz00_2257 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_2257);
			}
		}

	}



/* &spread-side-effect!-1246 */
	obj_t BGl_z62spreadzd2sidezd2effectz12zd21246za2zzeffect_spreadz00(obj_t
		BgL_envz00_1866, obj_t BgL_nodez00_1867)
	{
		{	/* Effect/spread.scm 29 */
			{	/* Effect/spread.scm 30 */
				bool_t BgL_tmpz00_2264;

				if (
					((((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_1867)))->
										BgL_variablez00)))->BgL_accessz00) ==
						CNST_TABLE_REF(((long) 0))))
					{	/* Effect/spread.scm 30 */
						BgL_tmpz00_2264 = ((bool_t) 0);
					}
				else
					{	/* Effect/spread.scm 30 */
						BgL_tmpz00_2264 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_2264);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_spreadz00()
	{
		{	/* Effect/spread.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1672z00zzeffect_spreadz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1672z00zzeffect_spreadz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1672z00zzeffect_spreadz00));
		}

	}

#ifdef __cplusplus
}
#endif
