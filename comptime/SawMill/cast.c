/*===========================================================================*/
/*   (SawMill/cast.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/cast.scm) */
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

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


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_loadg1451z62zzsaw_castz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_loadfu1449z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_cast1469z62zzsaw_castz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_getfie1453z62zzsaw_castz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	static obj_t BGl_objectzd2initzd2zzsaw_castz00();
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_loadi1447z62zzsaw_castz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_instan1463z62zzsaw_castz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_setfie1476z62zzsaw_castz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_castz00();
	static obj_t BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backendz00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62typezd2args1470zb0zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_vset1480z62zzsaw_castz00(obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_addzd2castzd2zzsaw_castz00(obj_t, obj_t);
	extern obj_t BGl_rtl_instanceofz00zzsaw_defsz00;
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_z62typezd2argszd2rtl_return1488z62zzsaw_castz00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2dest1439zb0zzsaw_castz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static BgL_typez00_bglt BGl_z62typezd2destzb0zzsaw_castz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_new1455z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_castz00();
	static BgL_typez00_bglt BGl_typezd2destzd2zzsaw_castz00(BgL_rtl_funz00_bglt,
		obj_t);
	static obj_t BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62typezd2argszb0zzsaw_castz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_boxref1496z62zzsaw_castz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_mov1445z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t BGl_typezd2argszd2zzsaw_castz00(BgL_rtl_funz00_bglt);
	static obj_t BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backendz00_bglt,
		BgL_rtl_funz00_bglt, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_vlengt1461z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_getfie1474z62zzsaw_castz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_cast_n1465z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_castz00 = BUNSPEC;
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_castz00();
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl_genericzd2initzd2zzsaw_castz00();
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_nop1443z62zzsaw_castz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_addzd2castszd2insz00zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_vref1478z62zzsaw_castz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_vref1459z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_valloc1457z62zzsaw_castz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static obj_t BGl_z62typezd2argszd2rtl_funcal1490z62zzsaw_castz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	static obj_t BGl_z62addzd2castszb0zzsaw_castz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_castz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_castz00();
	BGL_EXPORTED_DECL obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_castz00();
	static obj_t BGl_z62typezd2argszd2rtl_boxset1498z62zzsaw_castz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl_z62typezd2argszd2rtl_vlengt1482z62zzsaw_castz00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_apply1494z62zzsaw_castz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t BGl_z62typezd2argszd2rtl_lightf1492z62zzsaw_castz00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_storeg1484z62zzsaw_castz00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2argszd2rtl_call1486z62zzsaw_castz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2rtl_call1467z62zzsaw_castz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1942z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2dest141981z00, BGl_z62typezd2dest1439zb0zzsaw_castz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1944z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2args141982z00, BGl_z62typezd2args1470zb0zzsaw_castz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1946z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1983za7,
		BGl_z62typezd2destzd2rtl_nop1443z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1948z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1984za7,
		BGl_z62typezd2destzd2rtl_mov1445z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1949z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1985za7,
		BGl_z62typezd2destzd2rtl_loadi1447z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1950z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1986za7,
		BGl_z62typezd2destzd2rtl_loadfu1449z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1951z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1987za7,
		BGl_z62typezd2destzd2rtl_loadg1451z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1952z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1988za7,
		BGl_z62typezd2destzd2rtl_getfie1453z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1953z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1989za7,
		BGl_z62typezd2destzd2rtl_new1455z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1990za7,
		BGl_z62typezd2destzd2rtl_valloc1457z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1991za7,
		BGl_z62typezd2destzd2rtl_vref1459z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1992za7,
		BGl_z62typezd2destzd2rtl_vlengt1461z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1993za7,
		BGl_z62typezd2destzd2rtl_instan1463z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1994za7,
		BGl_z62typezd2destzd2rtl_cast_n1465z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1995za7,
		BGl_z62typezd2destzd2rtl_call1467z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7d1996za7,
		BGl_z62typezd2destzd2rtl_cast1469z62zzsaw_castz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d1997za7,
		BGl_z62typezd2argszd2rtl_getfie1474z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d1998za7,
		BGl_z62typezd2argszd2rtl_setfie1476z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d1999za7,
		BGl_z62typezd2argszd2rtl_vref1478z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2000za7,
		BGl_z62typezd2argszd2rtl_vset1480z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2001za7,
		BGl_z62typezd2argszd2rtl_vlengt1482z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2002za7,
		BGl_z62typezd2argszd2rtl_storeg1484z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2003za7,
		BGl_z62typezd2argszd2rtl_call1486z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2004za7,
		BGl_z62typezd2argszd2rtl_return1488z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2005za7,
		BGl_z62typezd2argszd2rtl_funcal1490z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2006za7,
		BGl_z62typezd2argszd2rtl_lightf1492z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2007za7,
		BGl_z62typezd2argszd2rtl_apply1494z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2008za7,
		BGl_z62typezd2argszd2rtl_boxref1496z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7d2009za7,
		BGl_z62typezd2argszd2rtl_boxset1498z62zzsaw_castz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2castszd2envz00zzsaw_castz00,
		BgL_bgl_za762addza7d2castsza7b2010za7, BGl_z62addzd2castszb0zzsaw_castz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2argszd2envz00zzsaw_castz00,
		BgL_bgl_za762typeza7d2argsza7b2011za7, BGl_z62typezd2argszb0zzsaw_castz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1943z00zzsaw_castz00,
		BgL_bgl_string1943za700za7za7s2012za7, "type-dest1439", 13);
	      DEFINE_STRING(BGl_string1945z00zzsaw_castz00,
		BgL_bgl_string1945za700za7za7s2013za7, "type-args1470", 13);
	      DEFINE_STRING(BGl_string1947z00zzsaw_castz00,
		BgL_bgl_string1947za700za7za7s2014za7, "type-dest::type", 15);
	      DEFINE_STRING(BGl_string1962z00zzsaw_castz00,
		BgL_bgl_string1962za700za7za7s2015za7, "type-args", 9);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2destzd2envz00zzsaw_castz00,
		BgL_bgl_za762typeza7d2destza7b2016za7, BGl_z62typezd2destzb0zzsaw_castz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1975z00zzsaw_castz00,
		BgL_bgl_string1975za700za7za7s2017za7, "saw_cast", 8);
	      DEFINE_STRING(BGl_string1976z00zzsaw_castz00,
		BgL_bgl_string1976za700za7za7s2018za7,
		"unspecified int procedure cell obj (bool byte ubyte short ushort char uchar ucs2 void int long ulong elong llong uelong ullong float double) hook ",
		146);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_castz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long
		BgL_checksumz00_3118, char *BgL_fromz00_3119)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_castz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_castz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_castz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_castz00();
					BGl_cnstzd2initzd2zzsaw_castz00();
					BGl_importedzd2moduleszd2initz00zzsaw_castz00();
					BGl_genericzd2initzd2zzsaw_castz00();
					BGl_methodzd2initzd2zzsaw_castz00();
					return BGl_toplevelzd2initzd2zzsaw_castz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_cast");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_cast");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			{	/* SawMill/cast.scm 1 */
				obj_t BgL_cportz00_3032;

				{	/* SawMill/cast.scm 1 */
					obj_t BgL_stringz00_3040;

					BgL_stringz00_3040 = BGl_string1976z00zzsaw_castz00;
					{	/* SawMill/cast.scm 1 */
						obj_t BgL_startz00_3041;

						BgL_startz00_3041 = BINT(((long) 0));
						{	/* SawMill/cast.scm 1 */
							obj_t BgL_endz00_3042;

							BgL_endz00_3042 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3040)));
							{	/* SawMill/cast.scm 1 */

								BgL_cportz00_3032 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3040, BgL_startz00_3041, BgL_endz00_3042);
				}}}}
				{
					long BgL_iz00_3033;

					BgL_iz00_3033 = ((long) 6);
				BgL_loopz00_3034:
					if ((BgL_iz00_3033 == ((long) -1)))
						{	/* SawMill/cast.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/cast.scm 1 */
							{	/* SawMill/cast.scm 1 */
								obj_t BgL_arg1979z00_3036;

								{	/* SawMill/cast.scm 1 */

									{	/* SawMill/cast.scm 1 */
										obj_t BgL_locationz00_3038;

										BgL_locationz00_3038 = BBOOL(((bool_t) 0));
										{	/* SawMill/cast.scm 1 */

											BgL_arg1979z00_3036 =
												BGl_readz00zz__readerz00(BgL_cportz00_3032,
												BgL_locationz00_3038);
										}
									}
								}
								{	/* SawMill/cast.scm 1 */
									int BgL_tmpz00_3148;

									BgL_tmpz00_3148 = (int) (BgL_iz00_3033);
									CNST_TABLE_SET(BgL_tmpz00_3148, BgL_arg1979z00_3036);
							}}
							{	/* SawMill/cast.scm 1 */
								int BgL_auxz00_3039;

								BgL_auxz00_3039 = (int) ((BgL_iz00_3033 - ((long) 1)));
								{
									long BgL_iz00_3153;

									BgL_iz00_3153 = (long) (BgL_auxz00_3039);
									BgL_iz00_3033 = BgL_iz00_3153;
									goto BgL_loopz00_3034;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			return BUNSPEC;
		}

	}



/* add-casts */
	BGL_EXPORTED_DEF obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt
		BgL_backz00_3, obj_t BgL_lz00_4)
	{
		{	/* SawMill/cast.scm 12 */
			{
				obj_t BgL_l1431z00_2117;

				{	/* SawMill/cast.scm 13 */
					bool_t BgL_tmpz00_3156;

					BgL_l1431z00_2117 = BgL_lz00_4;
				BgL_zc3z04anonymousza31522ze3z87_2118:
					if (PAIRP(BgL_l1431z00_2117))
						{	/* SawMill/cast.scm 13 */
							{	/* SawMill/cast.scm 14 */
								obj_t BgL_bz00_2120;

								BgL_bz00_2120 = CAR(BgL_l1431z00_2117);
								{	/* SawMill/cast.scm 14 */
									obj_t BgL_hookz00_2121;

									BgL_hookz00_2121 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
									{	/* SawMill/cast.scm 15 */
										obj_t BgL_g1148z00_2122;

										BgL_g1148z00_2122 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_2120)))->BgL_firstz00);
										{
											obj_t BgL_lz00_2124;
											obj_t BgL_lastz00_2125;

											BgL_lz00_2124 = BgL_g1148z00_2122;
											BgL_lastz00_2125 = BgL_hookz00_2121;
										BgL_zc3z04anonymousza31524ze3z87_2126:
											if (NULLP(BgL_lz00_2124))
												{	/* SawMill/cast.scm 17 */
													obj_t BgL_arg1528z00_2128;

													BgL_arg1528z00_2128 = CDR(BgL_hookz00_2121);
													((((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_bz00_2120)))->
															BgL_firstz00) =
														((obj_t) ((obj_t) BgL_arg1528z00_2128)), BUNSPEC);
												}
											else
												{	/* SawMill/cast.scm 18 */
													obj_t BgL_insz00_2129;

													BgL_insz00_2129 = CAR(((obj_t) BgL_lz00_2124));
													{	/* SawMill/cast.scm 19 */
														obj_t BgL_cinsz00_2131;

														BgL_cinsz00_2131 =
															BGl_addzd2castszd2insz00zzsaw_castz00
															(BgL_backz00_3, BgL_insz00_2129);
														SET_CDR(BgL_lastz00_2125, BgL_cinsz00_2131);
														{	/* SawMill/cast.scm 21 */
															obj_t BgL_arg1536z00_2132;
															obj_t BgL_arg1537z00_2133;

															BgL_arg1536z00_2132 =
																CDR(((obj_t) BgL_lz00_2124));
															BgL_arg1537z00_2133 =
																BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																(BgL_cinsz00_2131);
															{
																obj_t BgL_lastz00_3178;
																obj_t BgL_lz00_3177;

																BgL_lz00_3177 = BgL_arg1536z00_2132;
																BgL_lastz00_3178 = BgL_arg1537z00_2133;
																BgL_lastz00_2125 = BgL_lastz00_3178;
																BgL_lz00_2124 = BgL_lz00_3177;
																goto BgL_zc3z04anonymousza31524ze3z87_2126;
															}
														}
													}
												}
										}
									}
								}
							}
							{
								obj_t BgL_l1431z00_3179;

								BgL_l1431z00_3179 = CDR(BgL_l1431z00_2117);
								BgL_l1431z00_2117 = BgL_l1431z00_3179;
								goto BgL_zc3z04anonymousza31522ze3z87_2118;
							}
						}
					else
						{	/* SawMill/cast.scm 13 */
							BgL_tmpz00_3156 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_3156);
				}
			}
		}

	}



/* &add-casts */
	obj_t BGl_z62addzd2castszb0zzsaw_castz00(obj_t BgL_envz00_2922,
		obj_t BgL_backz00_2923, obj_t BgL_lz00_2924)
	{
		{	/* SawMill/cast.scm 12 */
			return
				BGl_addzd2castszd2zzsaw_castz00(
				((BgL_backendz00_bglt) BgL_backz00_2923), BgL_lz00_2924);
		}

	}



/* add-cast */
	BgL_rtl_insz00_bglt BGl_addzd2castzd2zzsaw_castz00(obj_t BgL_fromz00_5,
		obj_t BgL_toz00_6)
	{
		{	/* SawMill/cast.scm 24 */
			{	/* SawMill/cast.scm 26 */
				BgL_typez00_bglt BgL_typez00_2137;

				BgL_typez00_2137 =
					(((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_toz00_6)))->BgL_typez00);
				{	/* SawMill/cast.scm 27 */
					BgL_rtl_insz00_bglt BgL_new1150z00_2138;

					{	/* SawMill/cast.scm 27 */
						BgL_rtl_insz00_bglt BgL_new1149z00_2142;

						BgL_new1149z00_2142 =
							((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						{	/* SawMill/cast.scm 27 */
							long BgL_arg1558z00_2143;

							{	/* SawMill/cast.scm 27 */
								long BgL_res1906z00_2749;

								BgL_res1906z00_2749 =
									BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
								BgL_arg1558z00_2143 = BgL_res1906z00_2749;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1149z00_2142),
								BgL_arg1558z00_2143);
						}
						{	/* SawMill/cast.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_3190;

							BgL_tmpz00_3190 = ((BgL_objectz00_bglt) BgL_new1149z00_2142);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3190, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1149z00_2142);
						BgL_new1150z00_2138 = BgL_new1149z00_2142;
					}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1150z00_2138))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1150z00_2138))->
							BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1150z00_2138))->BgL_destz00) =
						((obj_t) BgL_toz00_6), BUNSPEC);
					{
						BgL_rtl_funz00_bglt BgL_auxz00_3197;

						{	/* SawMill/cast.scm 28 */
							BgL_rtl_castz00_bglt BgL_new1152z00_2139;

							{	/* SawMill/cast.scm 28 */
								BgL_rtl_castz00_bglt BgL_new1151z00_2140;

								BgL_new1151z00_2140 =
									((BgL_rtl_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_castz00_bgl))));
								{	/* SawMill/cast.scm 28 */
									long BgL_arg1552z00_2141;

									{	/* SawMill/cast.scm 28 */
										long BgL_res1907z00_2754;

										{	/* SawMill/cast.scm 28 */
											obj_t BgL_classz00_2753;

											BgL_classz00_2753 = BGl_rtl_castz00zzsaw_defsz00;
											BgL_res1907z00_2754 = BGL_CLASS_INDEX(BgL_classz00_2753);
										}
										BgL_arg1552z00_2141 = BgL_res1907z00_2754;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1151z00_2140),
										BgL_arg1552z00_2141);
								}
								BgL_new1152z00_2139 = BgL_new1151z00_2140;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1152z00_2139)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1152z00_2139))->
									BgL_totypez00) =
								((BgL_typez00_bglt) BgL_typez00_2137), BUNSPEC);
							((((BgL_rtl_castz00_bglt) COBJECT(BgL_new1152z00_2139))->
									BgL_fromtypez00) =
								((BgL_typez00_bglt) (((BgL_rtl_regz00_bglt)
											COBJECT(((BgL_rtl_regz00_bglt) BgL_fromz00_5)))->
										BgL_typez00)), BUNSPEC);
							BgL_auxz00_3197 = ((BgL_rtl_funz00_bglt) BgL_new1152z00_2139);
						}
						((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1150z00_2138))->
								BgL_funz00) = ((BgL_rtl_funz00_bglt) BgL_auxz00_3197), BUNSPEC);
					}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1150z00_2138))->BgL_argsz00) =
						((obj_t) MAKE_YOUNG_PAIR(BgL_fromz00_5, BNIL)), BUNSPEC);
					return BgL_new1150z00_2138;
				}
			}
		}

	}



/* add-casts-ins */
	obj_t BGl_addzd2castszd2insz00zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_7,
		obj_t BgL_insz00_8)
	{
		{	/* SawMill/cast.scm 33 */
			{	/* SawMill/cast.scm 35 */
				obj_t BgL_castsz00_2145;

				BgL_castsz00_2145 =
					BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backz00_7, BgL_insz00_8);
				{	/* SawMill/cast.scm 36 */
					BgL_rtl_funz00_bglt BgL_arg1561z00_2146;
					obj_t BgL_arg1564z00_2147;
					obj_t BgL_arg1565z00_2148;
					obj_t BgL_arg1573z00_2149;

					BgL_arg1561z00_2146 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_8)))->BgL_funz00);
					BgL_arg1564z00_2147 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_8)))->BgL_argsz00);
					{	/* SawMill/cast.scm 36 */
						BgL_rtl_funz00_bglt BgL_arg1575z00_2150;

						BgL_arg1575z00_2150 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_8)))->BgL_funz00);
						BgL_arg1565z00_2148 =
							BGl_typezd2argszd2zzsaw_castz00(BgL_arg1575z00_2150);
					}
					BgL_arg1573z00_2149 =
						MAKE_YOUNG_PAIR(BgL_insz00_8, BgL_castsz00_2145);
					return
						BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backz00_7,
						BgL_arg1561z00_2146, BgL_arg1564z00_2147, BgL_arg1565z00_2148,
						BgL_arg1573z00_2149);
				}
			}
		}

	}



/* add-cast-dest */
	obj_t BGl_addzd2castzd2destz00zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_9,
		obj_t BgL_insz00_10)
	{
		{	/* SawMill/cast.scm 38 */
			if (CBOOL(
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_10)))->BgL_destz00)))
				{	/* SawMill/cast.scm 41 */
					BgL_typez00_bglt BgL_realz00_2153;
					BgL_typez00_bglt BgL_declaredz00_2154;

					{	/* SawMill/cast.scm 41 */
						BgL_rtl_funz00_bglt BgL_arg1589z00_2165;
						obj_t BgL_arg1592z00_2166;

						BgL_arg1589z00_2165 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_10)))->BgL_funz00);
						BgL_arg1592z00_2166 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_10)))->BgL_argsz00);
						BgL_realz00_2153 =
							BGl_typezd2destzd2zzsaw_castz00(BgL_arg1589z00_2165,
							BgL_arg1592z00_2166);
					}
					BgL_declaredz00_2154 =
						(((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_10)))->
										BgL_destz00))))->BgL_typez00);
					if (CBOOL(BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backz00_9,
								BgL_realz00_2153, ((obj_t) BgL_declaredz00_2154))))
						{	/* SawMill/cast.scm 42 */
							return BNIL;
						}
					else
						{	/* SawMill/cast.scm 44 */
							BgL_rtl_regz00_bglt BgL_rrz00_2156;

							{	/* SawMill/cast.scm 44 */
								BgL_rtl_regz00_bglt BgL_new1157z00_2159;

								{	/* SawMill/cast.scm 45 */
									BgL_rtl_regz00_bglt BgL_new1156z00_2163;

									BgL_new1156z00_2163 =
										((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_regz00_bgl))));
									{	/* SawMill/cast.scm 45 */
										long BgL_arg1588z00_2164;

										{	/* SawMill/cast.scm 45 */
											long BgL_res1908z00_2760;

											BgL_res1908z00_2760 =
												BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
											BgL_arg1588z00_2164 = BgL_res1908z00_2760;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1156z00_2163),
											BgL_arg1588z00_2164);
									}
									{	/* SawMill/cast.scm 45 */
										BgL_objectz00_bglt BgL_tmpz00_3243;

										BgL_tmpz00_3243 =
											((BgL_objectz00_bglt) BgL_new1156z00_2163);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3243, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1156z00_2163);
									BgL_new1157z00_2159 = BgL_new1156z00_2163;
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_realz00_2153), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
										BgL_varz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
										BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_3250;

									{	/* SawMill/cast.scm 47 */

										{	/* SawMill/cast.scm 47 */

											BgL_auxz00_3250 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
											BgL_namez00) = ((obj_t) BgL_auxz00_3250), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_3253;

									{	/* SawMill/cast.scm 47 */
										obj_t BgL_arg1582z00_2161;

										{	/* SawMill/cast.scm 47 */
											obj_t BgL_arg1584z00_2162;

											{	/* SawMill/cast.scm 47 */
												obj_t BgL_res1909z00_2765;

												{	/* SawMill/cast.scm 47 */
													obj_t BgL_classz00_2764;

													BgL_classz00_2764 = BGl_rtl_regz00zzsaw_defsz00;
													BgL_res1909z00_2765 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_2764);
												}
												BgL_arg1584z00_2162 = BgL_res1909z00_2765;
											}
											BgL_arg1582z00_2161 =
												VECTOR_REF(BgL_arg1584z00_2162, ((long) 4));
										}
										BgL_auxz00_3253 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1582z00_2161);
									}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
											BgL_keyz00) = ((obj_t) BgL_auxz00_3253), BUNSPEC);
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1157z00_2159))->
										BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
								BgL_rrz00_2156 = BgL_new1157z00_2159;
							}
							{	/* SawMill/cast.scm 48 */
								obj_t BgL_xz00_2157;

								BgL_xz00_2157 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_10)))->BgL_destz00);
								((((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_10)))->BgL_destz00) =
									((obj_t) ((obj_t) BgL_rrz00_2156)), BUNSPEC);
								{	/* SawMill/cast.scm 50 */
									BgL_rtl_insz00_bglt BgL_arg1578z00_2158;

									BgL_arg1578z00_2158 =
										BGl_addzd2castzd2zzsaw_castz00(
										((obj_t) BgL_rrz00_2156), BgL_xz00_2157);
									return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1578z00_2158), BNIL);
								}
							}
						}
				}
			else
				{	/* SawMill/cast.scm 40 */
					return BNIL;
				}
		}

	}



/* add-cast-args */
	obj_t BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backendz00_bglt
		BgL_backz00_11, BgL_rtl_funz00_bglt BgL_funz00_12, obj_t BgL_argsz00_13,
		obj_t BgL_typesz00_14, obj_t BgL_castsz00_15)
	{
		{	/* SawMill/cast.scm 53 */
			if (NULLP(BgL_typesz00_14))
				{	/* SawMill/cast.scm 54 */
					return BgL_castsz00_15;
				}
			else
				{	/* SawMill/cast.scm 56 */
					obj_t BgL_castsz00_2169;

					{	/* SawMill/cast.scm 56 */
						obj_t BgL_arg1612z00_2183;
						obj_t BgL_arg1613z00_2184;

						BgL_arg1612z00_2183 = CDR(((obj_t) BgL_argsz00_13));
						BgL_arg1613z00_2184 = CDR(((obj_t) BgL_typesz00_14));
						BgL_castsz00_2169 =
							BGl_addzd2castzd2argsz00zzsaw_castz00(BgL_backz00_11,
							BgL_funz00_12, BgL_arg1612z00_2183, BgL_arg1613z00_2184,
							BgL_castsz00_15);
					}
					{	/* SawMill/cast.scm 57 */
						obj_t BgL_rz00_2170;
						obj_t BgL_tz00_2171;

						BgL_rz00_2170 = CAR(((obj_t) BgL_argsz00_13));
						BgL_tz00_2171 = CAR(((obj_t) BgL_typesz00_14));
						{	/* SawMill/cast.scm 58 */
							bool_t BgL_test2026z00_3279;

							{	/* SawMill/cast.scm 58 */
								BgL_typez00_bglt BgL_arg1611z00_2182;

								BgL_arg1611z00_2182 =
									(((BgL_rtl_regz00_bglt) COBJECT(
											((BgL_rtl_regz00_bglt) BgL_rz00_2170)))->BgL_typez00);
								BgL_test2026z00_3279 =
									CBOOL(BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backz00_11,
										BgL_arg1611z00_2182, BgL_tz00_2171));
							}
							if (BgL_test2026z00_3279)
								{	/* SawMill/cast.scm 58 */
									return BgL_castsz00_2169;
								}
							else
								{	/* SawMill/cast.scm 60 */
									BgL_rtl_regz00_bglt BgL_rrz00_2174;

									{	/* SawMill/cast.scm 60 */
										BgL_rtl_regz00_bglt BgL_new1159z00_2176;

										{	/* SawMill/cast.scm 61 */
											BgL_rtl_regz00_bglt BgL_new1158z00_2180;

											BgL_new1158z00_2180 =
												((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_regz00_bgl))));
											{	/* SawMill/cast.scm 61 */
												long BgL_arg1606z00_2181;

												{	/* SawMill/cast.scm 61 */
													long BgL_res1911z00_2775;

													BgL_res1911z00_2775 =
														BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
													BgL_arg1606z00_2181 = BgL_res1911z00_2775;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1158z00_2180),
													BgL_arg1606z00_2181);
											}
											{	/* SawMill/cast.scm 61 */
												BgL_objectz00_bglt BgL_tmpz00_3288;

												BgL_tmpz00_3288 =
													((BgL_objectz00_bglt) BgL_new1158z00_2180);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3288, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1158z00_2180);
											BgL_new1159z00_2176 = BgL_new1158z00_2180;
										}
										((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
												BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_tz00_2171)),
											BUNSPEC);
										((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
												BgL_varz00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
												BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_3296;

											{	/* SawMill/cast.scm 63 */

												{	/* SawMill/cast.scm 63 */

													BgL_auxz00_3296 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}}
											((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
													BgL_namez00) = ((obj_t) BgL_auxz00_3296), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_3299;

											{	/* SawMill/cast.scm 63 */
												obj_t BgL_arg1604z00_2178;

												{	/* SawMill/cast.scm 63 */
													obj_t BgL_arg1605z00_2179;

													{	/* SawMill/cast.scm 63 */
														obj_t BgL_res1912z00_2780;

														{	/* SawMill/cast.scm 63 */
															obj_t BgL_classz00_2779;

															BgL_classz00_2779 = BGl_rtl_regz00zzsaw_defsz00;
															BgL_res1912z00_2780 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_2779);
														}
														BgL_arg1605z00_2179 = BgL_res1912z00_2780;
													}
													BgL_arg1604z00_2178 =
														VECTOR_REF(BgL_arg1605z00_2179, ((long) 4));
												}
												BgL_auxz00_3299 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1604z00_2178);
											}
											((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
													BgL_keyz00) = ((obj_t) BgL_auxz00_3299), BUNSPEC);
										}
										((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1159z00_2176))->
												BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
										BgL_rrz00_2174 = BgL_new1159z00_2176;
									}
									{	/* SawMill/cast.scm 64 */
										obj_t BgL_auxz00_3307;
										obj_t BgL_tmpz00_3305;

										BgL_auxz00_3307 = ((obj_t) BgL_rrz00_2174);
										BgL_tmpz00_3305 = ((obj_t) BgL_argsz00_13);
										SET_CAR(BgL_tmpz00_3305, BgL_auxz00_3307);
									}
									{	/* SawMill/cast.scm 65 */
										BgL_rtl_insz00_bglt BgL_arg1599z00_2175;

										BgL_arg1599z00_2175 =
											BGl_addzd2castzd2zzsaw_castz00(BgL_rz00_2170,
											((obj_t) BgL_rrz00_2174));
										return
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1599z00_2175), BgL_castsz00_2169);
									}
								}
						}
					}
				}
		}

	}



/* assign-type? */
	obj_t BGl_assignzd2typezf3z21zzsaw_castz00(BgL_backendz00_bglt BgL_backz00_16,
		BgL_typez00_bglt BgL_t1z00_17, obj_t BgL_t2z00_18)
	{
		{	/* SawMill/cast.scm 67 */
			{	/* SawMill/cast.scm 68 */
				bool_t BgL__ortest_1160z00_2185;

				BgL__ortest_1160z00_2185 = (((obj_t) BgL_t1z00_17) == BgL_t2z00_18);
				if (BgL__ortest_1160z00_2185)
					{	/* SawMill/cast.scm 68 */
						return BBOOL(BgL__ortest_1160z00_2185);
					}
				else
					{	/* SawMill/cast.scm 69 */
						obj_t BgL__ortest_1161z00_2186;

						BgL__ortest_1161z00_2186 =
							BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_typez00_bglt) COBJECT(BgL_t1z00_17))->BgL_idz00),
							CNST_TABLE_REF(((long) 1)));
						if (CBOOL(BgL__ortest_1161z00_2186))
							{	/* SawMill/cast.scm 69 */
								return BgL__ortest_1161z00_2186;
							}
						else
							{	/* SawMill/cast.scm 70 */
								obj_t BgL__ortest_1162z00_2187;

								BgL__ortest_1162z00_2187 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_t2z00_18)))->BgL_idz00),
									CNST_TABLE_REF(((long) 1)));
								if (CBOOL(BgL__ortest_1162z00_2187))
									{	/* SawMill/cast.scm 70 */
										return BgL__ortest_1162z00_2187;
									}
								else
									{	/* SawMill/cast.scm 70 */
										return
											BGl_backendzd2subtypezf3z21zzbackend_backendz00
											(BgL_backz00_16, ((obj_t) BgL_t1z00_17), BgL_t2z00_18);
									}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_proc1942z00zzsaw_castz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string1943z00zzsaw_castz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_proc1944z00zzsaw_castz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string1945z00zzsaw_castz00);
		}

	}



/* &type-args1470 */
	obj_t BGl_z62typezd2args1470zb0zzsaw_castz00(obj_t BgL_envz00_2927,
		obj_t BgL_funz00_2928)
	{
		{	/* SawMill/cast.scm 130 */
			return BNIL;
		}

	}



/* &type-dest1439 */
	obj_t BGl_z62typezd2dest1439zb0zzsaw_castz00(obj_t BgL_envz00_2929,
		obj_t BgL_funz00_2930, obj_t BgL_argsz00_2931)
	{
		{	/* SawMill/cast.scm 81 */
			return
				((obj_t) BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 2))));
		}

	}



/* type-dest */
	BgL_typez00_bglt BGl_typezd2destzd2zzsaw_castz00(BgL_rtl_funz00_bglt
		BgL_funz00_20, obj_t BgL_argsz00_21)
	{
		{	/* SawMill/cast.scm 81 */
			{	/* SawMill/cast.scm 81 */
				obj_t BgL_method1440z00_2198;

				{	/* SawMill/cast.scm 81 */
					obj_t BgL_res1923z00_2825;

					{	/* SawMill/cast.scm 81 */
						long BgL_objzd2classzd2numz00_2790;

						{	/* SawMill/cast.scm 81 */
							long BgL_res1913z00_2793;

							BgL_res1913z00_2793 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_20));
							BgL_objzd2classzd2numz00_2790 = BgL_res1913z00_2793;
						}
						{	/* SawMill/cast.scm 81 */
							obj_t BgL_arg1813z00_2791;

							BgL_arg1813z00_2791 =
								PROCEDURE_REF(BGl_typezd2destzd2envz00zzsaw_castz00,
								(int) (((long) 1)));
							{	/* SawMill/cast.scm 81 */
								int BgL_offsetz00_2795;

								BgL_offsetz00_2795 = (int) (BgL_objzd2classzd2numz00_2790);
								{	/* SawMill/cast.scm 81 */
									long BgL_offsetz00_2796;

									BgL_offsetz00_2796 =
										((long) (BgL_offsetz00_2795) - OBJECT_TYPE);
									{	/* SawMill/cast.scm 81 */
										long BgL_modz00_2797;

										BgL_modz00_2797 =
											(BgL_offsetz00_2796 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/cast.scm 81 */
											long BgL_restz00_2799;

											BgL_restz00_2799 =
												(BgL_offsetz00_2796 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/cast.scm 81 */

												{	/* SawMill/cast.scm 81 */
													obj_t BgL_bucketz00_2801;

													BgL_bucketz00_2801 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2791), BgL_modz00_2797);
													BgL_res1923z00_2825 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2801), BgL_restz00_2799);
					}}}}}}}}
					BgL_method1440z00_2198 = BgL_res1923z00_2825;
				}
				return
					((BgL_typez00_bglt)
					PROCEDURE_ENTRY(BgL_method1440z00_2198) (BgL_method1440z00_2198,
						((obj_t) BgL_funz00_20), BgL_argsz00_21, BEOA));
			}
		}

	}



/* &type-dest */
	BgL_typez00_bglt BGl_z62typezd2destzb0zzsaw_castz00(obj_t BgL_envz00_2932,
		obj_t BgL_funz00_2933, obj_t BgL_argsz00_2934)
	{
		{	/* SawMill/cast.scm 81 */
			return
				BGl_typezd2destzd2zzsaw_castz00(
				((BgL_rtl_funz00_bglt) BgL_funz00_2933), BgL_argsz00_2934);
		}

	}



/* type-args */
	obj_t BGl_typezd2argszd2zzsaw_castz00(BgL_rtl_funz00_bglt BgL_funz00_50)
	{
		{	/* SawMill/cast.scm 130 */
			{	/* SawMill/cast.scm 130 */
				obj_t BgL_method1472z00_2199;

				{	/* SawMill/cast.scm 130 */
					obj_t BgL_res1934z00_2862;

					{	/* SawMill/cast.scm 130 */
						long BgL_objzd2classzd2numz00_2827;

						{	/* SawMill/cast.scm 130 */
							long BgL_res1924z00_2830;

							BgL_res1924z00_2830 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_50));
							BgL_objzd2classzd2numz00_2827 = BgL_res1924z00_2830;
						}
						{	/* SawMill/cast.scm 130 */
							obj_t BgL_arg1813z00_2828;

							BgL_arg1813z00_2828 =
								PROCEDURE_REF(BGl_typezd2argszd2envz00zzsaw_castz00,
								(int) (((long) 1)));
							{	/* SawMill/cast.scm 130 */
								int BgL_offsetz00_2832;

								BgL_offsetz00_2832 = (int) (BgL_objzd2classzd2numz00_2827);
								{	/* SawMill/cast.scm 130 */
									long BgL_offsetz00_2833;

									BgL_offsetz00_2833 =
										((long) (BgL_offsetz00_2832) - OBJECT_TYPE);
									{	/* SawMill/cast.scm 130 */
										long BgL_modz00_2834;

										BgL_modz00_2834 =
											(BgL_offsetz00_2833 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/cast.scm 130 */
											long BgL_restz00_2836;

											BgL_restz00_2836 =
												(BgL_offsetz00_2833 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/cast.scm 130 */

												{	/* SawMill/cast.scm 130 */
													obj_t BgL_bucketz00_2838;

													BgL_bucketz00_2838 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2828), BgL_modz00_2834);
													BgL_res1934z00_2862 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2838), BgL_restz00_2836);
					}}}}}}}}
					BgL_method1472z00_2199 = BgL_res1934z00_2862;
				}
				return
					PROCEDURE_ENTRY(BgL_method1472z00_2199) (BgL_method1472z00_2199,
					((obj_t) BgL_funz00_50), BEOA);
			}
		}

	}



/* &type-args */
	obj_t BGl_z62typezd2argszb0zzsaw_castz00(obj_t BgL_envz00_2935,
		obj_t BgL_funz00_2936)
	{
		{	/* SawMill/cast.scm 130 */
			return
				BGl_typezd2argszd2zzsaw_castz00(
				((BgL_rtl_funz00_bglt) BgL_funz00_2936));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_nopz00zzsaw_defsz00,
				BGl_proc1946z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc1948z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc1949z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadfunz00zzsaw_defsz00,
				BGl_proc1950z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc1951z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc1952z00zzsaw_castz00,
				BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_newz00zzsaw_defsz00,
				BGl_proc1953z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vallocz00zzsaw_defsz00,
				BGl_proc1954z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc1955z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_vlengthz00zzsaw_defsz00,
				BGl_proc1956z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_rtl_instanceofz00zzsaw_defsz00, BGl_proc1957z00zzsaw_castz00,
				BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc1958z00zzsaw_castz00,
				BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc1959z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2envz00zzsaw_castz00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc1960z00zzsaw_castz00, BGl_string1947z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc1961z00zzsaw_castz00,
				BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc1963z00zzsaw_castz00,
				BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc1964z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc1965z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_vlengthz00zzsaw_defsz00,
				BGl_proc1966z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_storegz00zzsaw_defsz00,
				BGl_proc1967z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc1968z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_returnz00zzsaw_defsz00,
				BGl_proc1969z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_funcallz00zzsaw_defsz00,
				BGl_proc1970z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc1971z00zzsaw_castz00,
				BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc1972z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_boxrefz00zzsaw_defsz00,
				BGl_proc1973z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2argszd2envz00zzsaw_castz00, BGl_rtl_boxsetz00zzsaw_defsz00,
				BGl_proc1974z00zzsaw_castz00, BGl_string1962z00zzsaw_castz00);
		}

	}



/* &type-args-rtl_boxset1498 */
	obj_t BGl_z62typezd2argszd2rtl_boxset1498z62zzsaw_castz00(obj_t
		BgL_envz00_2964, obj_t BgL_funz00_2965)
	{
		{	/* SawMill/cast.scm 176 */
			{	/* SawMill/cast.scm 177 */
				BgL_typez00_bglt BgL_arg1727z00_3049;

				BgL_arg1727z00_3049 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 3)));
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1727z00_3049), BNIL);
			}
		}

	}



/* &type-args-rtl_boxref1496 */
	obj_t BGl_z62typezd2argszd2rtl_boxref1496z62zzsaw_castz00(obj_t
		BgL_envz00_2966, obj_t BgL_funz00_2967)
	{
		{	/* SawMill/cast.scm 173 */
			{	/* SawMill/cast.scm 174 */
				BgL_typez00_bglt BgL_arg1726z00_3051;

				BgL_arg1726z00_3051 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 3)));
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1726z00_3051), BNIL);
			}
		}

	}



/* &type-args-rtl_apply1494 */
	obj_t BGl_z62typezd2argszd2rtl_apply1494z62zzsaw_castz00(obj_t
		BgL_envz00_2968, obj_t BgL_funz00_2969)
	{
		{	/* SawMill/cast.scm 170 */
			{	/* SawMill/cast.scm 171 */
				BgL_typez00_bglt BgL_arg1725z00_3053;

				BgL_arg1725z00_3053 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1725z00_3053), BNIL);
			}
		}

	}



/* &type-args-rtl_lightf1492 */
	obj_t BGl_z62typezd2argszd2rtl_lightf1492z62zzsaw_castz00(obj_t
		BgL_envz00_2970, obj_t BgL_funz00_2971)
	{
		{	/* SawMill/cast.scm 167 */
			{	/* SawMill/cast.scm 168 */
				BgL_typez00_bglt BgL_arg1719z00_3055;

				BgL_arg1719z00_3055 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1719z00_3055), BNIL);
			}
		}

	}



/* &type-args-rtl_funcal1490 */
	obj_t BGl_z62typezd2argszd2rtl_funcal1490z62zzsaw_castz00(obj_t
		BgL_envz00_2972, obj_t BgL_funz00_2973)
	{
		{	/* SawMill/cast.scm 164 */
			{	/* SawMill/cast.scm 165 */
				BgL_typez00_bglt BgL_arg1712z00_3057;

				BgL_arg1712z00_3057 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1712z00_3057), BNIL);
			}
		}

	}



/* &type-args-rtl_return1488 */
	obj_t BGl_z62typezd2argszd2rtl_return1488z62zzsaw_castz00(obj_t
		BgL_envz00_2974, obj_t BgL_funz00_2975)
	{
		{	/* SawMill/cast.scm 161 */
			{	/* SawMill/cast.scm 162 */
				BgL_typez00_bglt BgL_arg1711z00_3059;

				BgL_arg1711z00_3059 =
					(((BgL_rtl_returnz00_bglt) COBJECT(
							((BgL_rtl_returnz00_bglt) BgL_funz00_2975)))->BgL_typez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1711z00_3059), BNIL);
			}
		}

	}



/* &type-args-rtl_call1486 */
	obj_t BGl_z62typezd2argszd2rtl_call1486z62zzsaw_castz00(obj_t BgL_envz00_2976,
		obj_t BgL_funz00_2977)
	{
		{	/* SawMill/cast.scm 151 */
			{	/* SawMill/cast.scm 152 */
				BgL_valuez00_bglt BgL_fz00_3061;

				BgL_fz00_3061 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								(((BgL_rtl_callz00_bglt) COBJECT(
											((BgL_rtl_callz00_bglt) BgL_funz00_2977)))->
									BgL_varz00))))->BgL_valuez00);
				{	/* SawMill/cast.scm 153 */

					{	/* SawMill/cast.scm 154 */
						bool_t BgL_test2030z00_3457;

						{	/* SawMill/cast.scm 154 */
							bool_t BgL_res1935z00_3062;

							BgL_res1935z00_3062 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_fz00_3061), BGl_cfunz00zzast_varz00);
							BgL_test2030z00_3457 = BgL_res1935z00_3062;
						}
						if (BgL_test2030z00_3457)
							{	/* SawMill/cast.scm 154 */
								return
									(((BgL_cfunz00_bglt) COBJECT(
											((BgL_cfunz00_bglt) BgL_fz00_3061)))->BgL_argszd2typezd2);
							}
						else
							{	/* SawMill/cast.scm 156 */
								obj_t BgL_rz00_3063;

								BgL_rz00_3063 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_fz00_3061)))->BgL_argsz00);
								{	/* SawMill/cast.scm 157 */
									bool_t BgL_test2031z00_3464;

									if (NULLP(BgL_rz00_3063))
										{	/* SawMill/cast.scm 157 */
											BgL_test2031z00_3464 = ((bool_t) 1);
										}
									else
										{	/* SawMill/cast.scm 157 */
											obj_t BgL_arg1707z00_3064;

											BgL_arg1707z00_3064 = CAR(((obj_t) BgL_rz00_3063));
											BgL_test2031z00_3464 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1707z00_3064,
												BGl_typez00zztype_typez00);
										}
									if (BgL_test2031z00_3464)
										{	/* SawMill/cast.scm 157 */
											return BgL_rz00_3063;
										}
									else
										{	/* SawMill/cast.scm 157 */
											if (NULLP(BgL_rz00_3063))
												{	/* SawMill/cast.scm 159 */
													return BNIL;
												}
											else
												{	/* SawMill/cast.scm 159 */
													obj_t BgL_head1435z00_3065;

													{	/* SawMill/cast.scm 159 */
														BgL_typez00_bglt BgL_arg1697z00_3066;

														BgL_arg1697z00_3066 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_rz00_3063))))))->
															BgL_typez00);
														{	/* SawMill/cast.scm 159 */
															obj_t BgL_res1939z00_3067;

															BgL_res1939z00_3067 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1697z00_3066), BNIL);
															BgL_head1435z00_3065 = BgL_res1939z00_3067;
														}
													}
													{	/* SawMill/cast.scm 159 */
														obj_t BgL_g1438z00_3068;

														BgL_g1438z00_3068 = CDR(((obj_t) BgL_rz00_3063));
														{
															obj_t BgL_l1433z00_3070;
															obj_t BgL_tail1436z00_3071;

															BgL_l1433z00_3070 = BgL_g1438z00_3068;
															BgL_tail1436z00_3071 = BgL_head1435z00_3065;
														BgL_zc3z04anonymousza31687ze3z87_3069:
															if (NULLP(BgL_l1433z00_3070))
																{	/* SawMill/cast.scm 159 */
																	return BgL_head1435z00_3065;
																}
															else
																{	/* SawMill/cast.scm 159 */
																	obj_t BgL_newtail1437z00_3072;

																	{	/* SawMill/cast.scm 159 */
																		BgL_typez00_bglt BgL_arg1695z00_3073;

																		BgL_arg1695z00_3073 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							CAR(
																								((obj_t)
																									BgL_l1433z00_3070))))))->
																			BgL_typez00);
																		{	/* SawMill/cast.scm 159 */
																			obj_t BgL_res1941z00_3074;

																			BgL_res1941z00_3074 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1695z00_3073), BNIL);
																			BgL_newtail1437z00_3072 =
																				BgL_res1941z00_3074;
																		}
																	}
																	SET_CDR(BgL_tail1436z00_3071,
																		BgL_newtail1437z00_3072);
																	{	/* SawMill/cast.scm 159 */
																		obj_t BgL_arg1692z00_3075;

																		BgL_arg1692z00_3075 =
																			CDR(((obj_t) BgL_l1433z00_3070));
																		{
																			obj_t BgL_tail1436z00_3494;
																			obj_t BgL_l1433z00_3493;

																			BgL_l1433z00_3493 = BgL_arg1692z00_3075;
																			BgL_tail1436z00_3494 =
																				BgL_newtail1437z00_3072;
																			BgL_tail1436z00_3071 =
																				BgL_tail1436z00_3494;
																			BgL_l1433z00_3070 = BgL_l1433z00_3493;
																			goto
																				BgL_zc3z04anonymousza31687ze3z87_3069;
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



/* &type-args-rtl_storeg1484 */
	obj_t BGl_z62typezd2argszd2rtl_storeg1484z62zzsaw_castz00(obj_t
		BgL_envz00_2978, obj_t BgL_funz00_2979)
	{
		{	/* SawMill/cast.scm 148 */
			{	/* SawMill/cast.scm 149 */
				BgL_typez00_bglt BgL_arg1669z00_3077;

				BgL_arg1669z00_3077 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								(((BgL_rtl_storegz00_bglt) COBJECT(
											((BgL_rtl_storegz00_bglt) BgL_funz00_2979)))->
									BgL_varz00))))->BgL_typez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1669z00_3077), BNIL);
			}
		}

	}



/* &type-args-rtl_vlengt1482 */
	obj_t BGl_z62typezd2argszd2rtl_vlengt1482z62zzsaw_castz00(obj_t
		BgL_envz00_2980, obj_t BgL_funz00_2981)
	{
		{	/* SawMill/cast.scm 145 */
			{	/* SawMill/cast.scm 146 */
				BgL_typez00_bglt BgL_arg1667z00_3079;

				BgL_arg1667z00_3079 =
					(((BgL_rtl_vlengthz00_bglt) COBJECT(
							((BgL_rtl_vlengthz00_bglt) BgL_funz00_2981)))->BgL_vtypez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1667z00_3079), BNIL);
			}
		}

	}



/* &type-args-rtl_vset1480 */
	obj_t BGl_z62typezd2argszd2rtl_vset1480z62zzsaw_castz00(obj_t BgL_envz00_2982,
		obj_t BgL_funz00_2983)
	{
		{	/* SawMill/cast.scm 142 */
			{	/* SawMill/cast.scm 143 */
				BgL_typez00_bglt BgL_arg1664z00_3081;

				BgL_arg1664z00_3081 =
					(((BgL_rtl_vsetz00_bglt) COBJECT(
							((BgL_rtl_vsetz00_bglt) BgL_funz00_2983)))->BgL_vtypez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1664z00_3081), BNIL);
			}
		}

	}



/* &type-args-rtl_vref1478 */
	obj_t BGl_z62typezd2argszd2rtl_vref1478z62zzsaw_castz00(obj_t BgL_envz00_2984,
		obj_t BgL_funz00_2985)
	{
		{	/* SawMill/cast.scm 139 */
			{	/* SawMill/cast.scm 140 */
				BgL_typez00_bglt BgL_arg1663z00_3083;

				BgL_arg1663z00_3083 =
					(((BgL_rtl_vrefz00_bglt) COBJECT(
							((BgL_rtl_vrefz00_bglt) BgL_funz00_2985)))->BgL_vtypez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1663z00_3083), BNIL);
			}
		}

	}



/* &type-args-rtl_setfie1476 */
	obj_t BGl_z62typezd2argszd2rtl_setfie1476z62zzsaw_castz00(obj_t
		BgL_envz00_2986, obj_t BgL_funz00_2987)
	{
		{	/* SawMill/cast.scm 136 */
			{	/* SawMill/cast.scm 137 */
				BgL_typez00_bglt BgL_arg1644z00_3085;
				obj_t BgL_arg1652z00_3086;

				BgL_arg1644z00_3085 =
					(((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_funz00_2987)))->BgL_objtypez00);
				{	/* SawMill/cast.scm 137 */
					BgL_typez00_bglt BgL_arg1662z00_3087;

					BgL_arg1662z00_3087 =
						(((BgL_rtl_setfieldz00_bglt) COBJECT(
								((BgL_rtl_setfieldz00_bglt) BgL_funz00_2987)))->BgL_typez00);
					BgL_arg1652z00_3086 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_arg1662z00_3087), BNIL);
				}
				return
					MAKE_YOUNG_PAIR(((obj_t) BgL_arg1644z00_3085), BgL_arg1652z00_3086);
			}
		}

	}



/* &type-args-rtl_getfie1474 */
	obj_t BGl_z62typezd2argszd2rtl_getfie1474z62zzsaw_castz00(obj_t
		BgL_envz00_2988, obj_t BgL_funz00_2989)
	{
		{	/* SawMill/cast.scm 133 */
			{	/* SawMill/cast.scm 134 */
				BgL_typez00_bglt BgL_arg1641z00_3089;

				BgL_arg1641z00_3089 =
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_funz00_2989)))->BgL_objtypez00);
				return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1641z00_3089), BNIL);
			}
		}

	}



/* &type-dest-rtl_cast1469 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_cast1469z62zzsaw_castz00(obj_t
		BgL_envz00_2990, obj_t BgL_funz00_2991, obj_t BgL_argsz00_2992)
	{
		{	/* SawMill/cast.scm 126 */
			return
				(((BgL_rtl_castz00_bglt) COBJECT(
						((BgL_rtl_castz00_bglt) BgL_funz00_2991)))->BgL_totypez00);
		}

	}



/* &type-dest-rtl_call1467 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_call1467z62zzsaw_castz00(obj_t
		BgL_envz00_2993, obj_t BgL_funz00_2994, obj_t BgL_argsz00_2995)
	{
		{	/* SawMill/cast.scm 123 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt)
							(((BgL_rtl_callz00_bglt) COBJECT(
										((BgL_rtl_callz00_bglt) BgL_funz00_2994)))->BgL_varz00))))->
				BgL_typez00);
		}

	}



/* &type-dest-rtl_cast_n1465 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_cast_n1465z62zzsaw_castz00(obj_t
		BgL_envz00_2996, obj_t BgL_funz00_2997, obj_t BgL_argsz00_2998)
	{
		{	/* SawMill/cast.scm 119 */
			return
				(((BgL_rtl_cast_nullz00_bglt) COBJECT(
						((BgL_rtl_cast_nullz00_bglt) BgL_funz00_2997)))->BgL_typez00);
		}

	}



/* &type-dest-rtl_instan1463 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_instan1463z62zzsaw_castz00(obj_t
		BgL_envz00_2999, obj_t BgL_funz00_3000, obj_t BgL_argsz00_3001)
	{
		{	/* SawMill/cast.scm 116 */
			return BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5)));
		}

	}



/* &type-dest-rtl_vlengt1461 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_vlengt1461z62zzsaw_castz00(obj_t
		BgL_envz00_3002, obj_t BgL_funz00_3003, obj_t BgL_argsz00_3004)
	{
		{	/* SawMill/cast.scm 113 */
			return BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 5)));
		}

	}



/* &type-dest-rtl_vref1459 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_vref1459z62zzsaw_castz00(obj_t
		BgL_envz00_3005, obj_t BgL_funz00_3006, obj_t BgL_argsz00_3007)
	{
		{	/* SawMill/cast.scm 110 */
			return
				(((BgL_rtl_vrefz00_bglt) COBJECT(
						((BgL_rtl_vrefz00_bglt) BgL_funz00_3006)))->BgL_typez00);
		}

	}



/* &type-dest-rtl_valloc1457 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_valloc1457z62zzsaw_castz00(obj_t
		BgL_envz00_3008, obj_t BgL_funz00_3009, obj_t BgL_argsz00_3010)
	{
		{	/* SawMill/cast.scm 107 */
			return
				(((BgL_rtl_vallocz00_bglt) COBJECT(
						((BgL_rtl_vallocz00_bglt) BgL_funz00_3009)))->BgL_vtypez00);
		}

	}



/* &type-dest-rtl_new1455 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_new1455z62zzsaw_castz00(obj_t
		BgL_envz00_3011, obj_t BgL_funz00_3012, obj_t BgL_argsz00_3013)
	{
		{	/* SawMill/cast.scm 104 */
			return
				(((BgL_rtl_newz00_bglt) COBJECT(
						((BgL_rtl_newz00_bglt) BgL_funz00_3012)))->BgL_typez00);
		}

	}



/* &type-dest-rtl_getfie1453 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_getfie1453z62zzsaw_castz00(obj_t
		BgL_envz00_3014, obj_t BgL_funz00_3015, obj_t BgL_argsz00_3016)
	{
		{	/* SawMill/cast.scm 101 */
			return
				(((BgL_rtl_getfieldz00_bglt) COBJECT(
						((BgL_rtl_getfieldz00_bglt) BgL_funz00_3015)))->BgL_typez00);
		}

	}



/* &type-dest-rtl_loadg1451 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_loadg1451z62zzsaw_castz00(obj_t
		BgL_envz00_3017, obj_t BgL_funz00_3018, obj_t BgL_argsz00_3019)
	{
		{	/* SawMill/cast.scm 98 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt)
							(((BgL_rtl_loadgz00_bglt) COBJECT(
										((BgL_rtl_loadgz00_bglt) BgL_funz00_3018)))->
								BgL_varz00))))->BgL_typez00);
		}

	}



/* &type-dest-rtl_loadfu1449 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_loadfu1449z62zzsaw_castz00(obj_t
		BgL_envz00_3020, obj_t BgL_funz00_3021, obj_t BgL_argsz00_3022)
	{
		{	/* SawMill/cast.scm 93 */
			return BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 4)));
		}

	}



/* &type-dest-rtl_loadi1447 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_loadi1447z62zzsaw_castz00(obj_t
		BgL_envz00_3023, obj_t BgL_funz00_3024, obj_t BgL_argsz00_3025)
	{
		{	/* SawMill/cast.scm 90 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt)
							(((BgL_rtl_loadiz00_bglt) COBJECT(
										((BgL_rtl_loadiz00_bglt) BgL_funz00_3024)))->
								BgL_constantz00))))->BgL_typez00);
		}

	}



/* &type-dest-rtl_mov1445 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_mov1445z62zzsaw_castz00(obj_t
		BgL_envz00_3026, obj_t BgL_funz00_3027, obj_t BgL_argsz00_3028)
	{
		{	/* SawMill/cast.scm 87 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt)
							CAR(((obj_t) ((obj_t) BgL_argsz00_3028))))))->BgL_typez00);
		}

	}



/* &type-dest-rtl_nop1443 */
	BgL_typez00_bglt BGl_z62typezd2destzd2rtl_nop1443z62zzsaw_castz00(obj_t
		BgL_envz00_3029, obj_t BgL_funz00_3030, obj_t BgL_argsz00_3031)
	{
		{	/* SawMill/cast.scm 84 */
			return BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 6)));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_castz00()
	{
		{	/* SawMill/cast.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1975z00zzsaw_castz00));
		}

	}

#ifdef __cplusplus
}
#endif
