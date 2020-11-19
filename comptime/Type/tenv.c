/*===========================================================================*/
/*   (Type/tenv.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/tenv.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;


	static BgL_typez00_bglt BGl_z62declarezd2aliastypez12za2zztype_envz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	extern obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t, obj_t, bool_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2tenvzd2zztype_envz00();
	static obj_t BGl_objectzd2initzd2zztype_envz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2foreignzd2typez12z12zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62declarezd2subtypez12za2zztype_envz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static bool_t BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00;
	static obj_t BGl_methodzd2initzd2zztype_envz00();
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t, obj_t, obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31272ze3ze5zztype_envz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_z62forzd2eachzd2typez12z70zztype_envz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztype_envz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62usezd2typez12za2zztype_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62addzd2tenvz12za2zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31475ze3ze5zztype_envz00(obj_t, obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62findzd2typezf2locationz42zztype_envz00(obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_envz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztype_envz00();
	static obj_t BGl_z62subzd2typezf3z43zztype_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztype_envz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_z62initializa7ezd2Tenvz12z05zztype_envz00(obj_t);
	static BgL_typez00_bglt
		BGl_z62usezd2foreignzd2typezf2importzd2locz12z50zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t BGl_checkzd2typeszd2zztype_envz00();
	static obj_t BGl_z62zc3z04anonymousza31240ze3ze5zztype_envz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_findzd2typezf2locationz20zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static BgL_typez00_bglt BGl_bindzd2typez12zc0zztype_envz00(obj_t, bool_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31228ze3ze5zztype_envz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62usezd2typezf2importzd2locz12z82zztype_envz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2existszf3z43zztype_envz00(obj_t, obj_t);
	static obj_t BGl_z62checkzd2typeszb0zztype_envz00(obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	static obj_t BGl_z62setzd2tenvz12za2zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_creatorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_predicatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31519ze3ze5zztype_envz00(obj_t);
	static BgL_typez00_bglt BGl_z62usezd2foreignzd2typez12z70zztype_envz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zztype_envz00();
	static obj_t BGl_z62zc3z04anonymousza31269ze3ze5zztype_envz00(obj_t);
	extern obj_t BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_envz00();
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static BgL_typez00_bglt BGl_z62findzd2typezb0zztype_envz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_envz00();
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	static obj_t BGl_za2Tenvza2z00zztype_envz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31466ze3ze5zztype_envz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62declarezd2typez12za2zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2tenvzb0zztype_envz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31576ze3ze5zztype_envz00(obj_t);
	static obj_t BGl_uninitializa7edzd2typesz75zztype_envz00();
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2typez12zd2envz12zztype_envz00,
		BgL_bgl_za762declareza7d2typ1770z00,
		BGl_z62declarezd2typez12za2zztype_envz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2typeszd2envz00zztype_envz00,
		BgL_bgl_za762checkza7d2types1771z00, BGl_z62checkzd2typeszb0zztype_envz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2tenvzd2envz00zztype_envz00,
		BgL_bgl_za762getza7d2tenvza7b01772za7, BGl_z62getzd2tenvzb0zztype_envz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2tenvz12zd2envz12zztype_envz00,
		BgL_bgl_za762addza7d2tenvza7121773za7, BGl_z62addzd2tenvz12za2zztype_envz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zztype_envz00,
		BgL_bgl_za762za7c3za704anonymo1774za7,
		BGl_z62zc3z04anonymousza31240ze3ze5zztype_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zztype_envz00,
		BgL_bgl_za762za7c3za704anonymo1775za7,
		BGl_z62zc3z04anonymousza31269ze3ze5zztype_envz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zztype_envz00,
		BgL_bgl_za762za7c3za704anonymo1776za7,
		BGl_z62zc3z04anonymousza31272ze3ze5zztype_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Tenvz12zd2envzb5zztype_envz00,
		BgL_bgl_za762initializa7a7eza71777za7,
		BGl_z62initializa7ezd2Tenvz12z05zztype_envz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2aliastypez12zd2envz12zztype_envz00,
		BgL_bgl_za762declareza7d2ali1778z00,
		BGl_z62declarezd2aliastypez12za2zztype_envz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2typezf2importzd2locz12zd2envz32zztype_envz00,
		BgL_bgl_za762useza7d2typeza7f21779za7,
		BGl_z62usezd2typezf2importzd2locz12z82zztype_envz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2typezd2envz00zztype_envz00,
		BgL_bgl_za762findza7d2typeza7b1780za7, BGl_z62findzd2typezb0zztype_envz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_subzd2typezf3zd2envzf3zztype_envz00,
		BgL_bgl_za762subza7d2typeza7f31781za7, BGl_z62subzd2typezf3z43zztype_envz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2typezf2locationzd2envzf2zztype_envz00,
		BgL_bgl_za762findza7d2typeza7f1782za7,
		BGl_z62findzd2typezf2locationz42zztype_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2subtypez12zd2envz12zztype_envz00,
		BgL_bgl_za762declareza7d2sub1783z00,
		BGl_z62declarezd2subtypez12za2zztype_envz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1750z00zztype_envz00,
		BgL_bgl_string1750za700za7za7t1784za7, "Can't find super class of", 25);
	      DEFINE_STRING(BGl_string1753z00zztype_envz00,
		BgL_bgl_string1753za700za7za7t1785za7, "add-Tenv!", 9);
	      DEFINE_STRING(BGl_string1754z00zztype_envz00,
		BgL_bgl_string1754za700za7za7t1786za7, "Illegal type heap redefinition",
		30);
	      DEFINE_STRING(BGl_string1755z00zztype_envz00,
		BgL_bgl_string1755za700za7za7t1787za7, "Can't find type", 15);
	      DEFINE_STRING(BGl_string1756z00zztype_envz00,
		BgL_bgl_string1756za700za7za7t1788za7, "Type redefinition", 17);
	      DEFINE_STRING(BGl_string1757z00zztype_envz00,
		BgL_bgl_string1757za700za7za7t1789za7, "declare-type!", 13);
	      DEFINE_STRING(BGl_string1758z00zztype_envz00,
		BgL_bgl_string1758za700za7za7t1790za7, "Illegal type class", 18);
	      DEFINE_STRING(BGl_string1759z00zztype_envz00,
		BgL_bgl_string1759za700za7za7t1791za7, " type(s) used but not defined.",
		30);
	      DEFINE_STRING(BGl_string1760z00zztype_envz00,
		BgL_bgl_string1760za700za7za7t1792za7, "Stopping compilation...", 23);
	      DEFINE_STRING(BGl_string1761z00zztype_envz00,
		BgL_bgl_string1761za700za7za7t1793za7,
		"Undefined type used in export clause", 36);
	      DEFINE_STRING(BGl_string1762z00zztype_envz00,
		BgL_bgl_string1762za700za7za7t1794za7, "Undefined used type", 19);
	      DEFINE_STRING(BGl_string1763z00zztype_envz00,
		BgL_bgl_string1763za700za7za7t1795za7, "Undefined type", 14);
	      DEFINE_STRING(BGl_string1764z00zztype_envz00,
		BgL_bgl_string1764za700za7za7t1796za7, "type_env", 8);
	      DEFINE_STRING(BGl_string1765z00zztype_envz00,
		BgL_bgl_string1765za700za7za7t1797za7,
		"(bigloo C _ java) use-type! bigloo bind-type! find-type heap add-Tenv the-global-environment ",
		93);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2typez12zd2envzc0zztype_envz00,
		BgL_bgl_za762forza7d2eachza7d21798za7,
		BGl_z62forzd2eachzd2typez12z70zztype_envz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_usezd2typez12zd2envz12zztype_envz00,
		BgL_bgl_za762useza7d2typeza7121799za7, BGl_z62usezd2typez12za2zztype_envz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2tenvz12zd2envz12zztype_envz00,
		BgL_bgl_za762setza7d2tenvza7121800za7, BGl_z62setzd2tenvz12za2zztype_envz00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2envz00zz__errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2foreignzd2typez12zd2envzc0zztype_envz00,
		BgL_bgl_za762useza7d2foreign1801z00,
		BGl_z62usezd2foreignzd2typez12z70zztype_envz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2existszf3zd2envzf3zztype_envz00,
		BgL_bgl_za762typeza7d2exists1802z00,
		BGl_z62typezd2existszf3z43zztype_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2foreignzd2typezf2importzd2locz12zd2envze0zztype_envz00,
		BgL_bgl_za762useza7d2foreign1803z00,
		BGl_z62usezd2foreignzd2typezf2importzd2locz12z50zztype_envz00, 0L, BUNSPEC,
		3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_envz00));
		     ADD_ROOT((void *) (&BGl_za2Tenvza2z00zztype_envz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long
		BgL_checksumz00_2011, char *BgL_fromz00_2012)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_envz00))
				{
					BGl_requirezd2initializa7ationz75zztype_envz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_envz00();
					BGl_libraryzd2moduleszd2initz00zztype_envz00();
					BGl_cnstzd2initzd2zztype_envz00();
					BGl_importedzd2moduleszd2initz00zztype_envz00();
					return BGl_toplevelzd2initzd2zztype_envz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "type_env");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			{	/* Type/tenv.scm 15 */
				obj_t BgL_cportz00_1923;

				{	/* Type/tenv.scm 15 */
					obj_t BgL_stringz00_1931;

					BgL_stringz00_1931 = BGl_string1765z00zztype_envz00;
					{	/* Type/tenv.scm 15 */
						obj_t BgL_startz00_1932;

						BgL_startz00_1932 = BINT(((long) 0));
						{	/* Type/tenv.scm 15 */
							obj_t BgL_endz00_1933;

							BgL_endz00_1933 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1931)));
							{	/* Type/tenv.scm 15 */

								BgL_cportz00_1923 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1931, BgL_startz00_1932, BgL_endz00_1933);
				}}}}
				{
					long BgL_iz00_1924;

					BgL_iz00_1924 = ((long) 7);
				BgL_loopz00_1925:
					if ((BgL_iz00_1924 == ((long) -1)))
						{	/* Type/tenv.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/tenv.scm 15 */
							{	/* Type/tenv.scm 15 */
								obj_t BgL_arg1768z00_1927;

								{	/* Type/tenv.scm 15 */

									{	/* Type/tenv.scm 15 */
										obj_t BgL_locationz00_1929;

										BgL_locationz00_1929 = BBOOL(((bool_t) 0));
										{	/* Type/tenv.scm 15 */

											BgL_arg1768z00_1927 =
												BGl_readz00zz__readerz00(BgL_cportz00_1923,
												BgL_locationz00_1929);
										}
									}
								}
								{	/* Type/tenv.scm 15 */
									int BgL_tmpz00_2041;

									BgL_tmpz00_2041 = (int) (BgL_iz00_1924);
									CNST_TABLE_SET(BgL_tmpz00_2041, BgL_arg1768z00_1927);
							}}
							{	/* Type/tenv.scm 15 */
								int BgL_auxz00_1930;

								BgL_auxz00_1930 = (int) ((BgL_iz00_1924 - ((long) 1)));
								{
									long BgL_iz00_2046;

									BgL_iz00_2046 = (long) (BgL_auxz00_1930);
									BgL_iz00_1924 = BgL_iz00_2046;
									goto BgL_loopz00_1925;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			BGl_za2Tenvza2z00zztype_envz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00 =
				((bool_t) 0), BUNSPEC);
		}

	}



/* initialize-Tenv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00()
	{
		{	/* Type/tenv.scm 75 */
			if (BGl_hashtablezf3zf3zz__hashz00(BGl_za2Tenvza2z00zztype_envz00))
				{	/* Type/tenv.scm 77 */
					return BFALSE;
				}
			else
				{	/* Type/tenv.scm 77 */
					return (BGl_za2Tenvza2z00zztype_envz00 =
						BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
				}
		}

	}



/* &initialize-Tenv! */
	obj_t BGl_z62initializa7ezd2Tenvz12z05zztype_envz00(obj_t BgL_envz00_1833)
	{
		{	/* Type/tenv.scm 75 */
			return BGl_initializa7ezd2Tenvz12z67zztype_envz00();
		}

	}



/* get-tenv */
	BGL_EXPORTED_DEF obj_t BGl_getzd2tenvzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 83 */
			return BGl_za2Tenvza2z00zztype_envz00;
		}

	}



/* &get-tenv */
	obj_t BGl_z62getzd2tenvzb0zztype_envz00(obj_t BgL_envz00_1834)
	{
		{	/* Type/tenv.scm 83 */
			return BGl_getzd2tenvzd2zztype_envz00();
		}

	}



/* set-tenv! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t BgL_tenvz00_21)
	{
		{	/* Type/tenv.scm 89 */
			BGl_initializa7ezd2Tenvz12z67zztype_envz00();
			return BGl_addzd2tenvz12zc0zztype_envz00(BgL_tenvz00_21);
		}

	}



/* &set-tenv! */
	obj_t BGl_z62setzd2tenvz12za2zztype_envz00(obj_t BgL_envz00_1835,
		obj_t BgL_tenvz00_1836)
	{
		{	/* Type/tenv.scm 89 */
			return BGl_setzd2tenvz12zc0zztype_envz00(BgL_tenvz00_1836);
		}

	}



/* add-tenv! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t BgL_tenvz00_22)
	{
		{	/* Type/tenv.scm 101 */
			{	/* Type/tenv.scm 155 */
				obj_t BgL_rememberzd2listzd2_1857;
				obj_t BgL_tvectorzd2listzd2_1858;

				BgL_rememberzd2listzd2_1857 = MAKE_CELL(BNIL);
				BgL_tvectorzd2listzd2_1858 = MAKE_CELL(BNIL);
				{	/* Type/tenv.scm 167 */
					obj_t BgL_zc3z04anonymousza31228ze3z87_1840;

					BgL_zc3z04anonymousza31228ze3z87_1840 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31228ze3ze5zztype_envz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31228ze3z87_1840,
						(int) (((long) 0)), ((obj_t) BgL_rememberzd2listzd2_1857));
					PROCEDURE_SET(BgL_zc3z04anonymousza31228ze3z87_1840,
						(int) (((long) 1)), ((obj_t) BgL_tvectorzd2listzd2_1858));
					BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_22,
						BgL_zc3z04anonymousza31228ze3z87_1840);
				}
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_22,
					BGl_proc1749z00zztype_envz00);
				{
					obj_t BgL_l1178z00_1298;

					BgL_l1178z00_1298 = CELL_REF(BgL_rememberzd2listzd2_1857);
				BgL_zc3z04anonymousza31244ze3z87_1299:
					if (PAIRP(BgL_l1178z00_1298))
						{	/* Type/tenv.scm 200 */
							{	/* Type/tenv.scm 201 */
								obj_t BgL_newz00_1301;

								BgL_newz00_1301 = CAR(BgL_l1178z00_1298);
								if (BGl_isazf3zf3zz__objectz00(BgL_newz00_1301,
										BGl_tclassz00zzobject_classz00))
									{	/* Type/tenv.scm 203 */
										obj_t BgL_superz00_1303;

										{
											BgL_tclassz00_bglt BgL_auxz00_2074;

											{
												obj_t BgL_auxz00_2075;

												{	/* Type/tenv.scm 203 */
													BgL_objectz00_bglt BgL_tmpz00_2076;

													BgL_tmpz00_2076 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_newz00_1301));
													BgL_auxz00_2075 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2076);
												}
												BgL_auxz00_2074 =
													((BgL_tclassz00_bglt) BgL_auxz00_2075);
											}
											BgL_superz00_1303 =
												(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2074))->
												BgL_itszd2superzd2);
										}
										if (BGl_isazf3zf3zz__objectz00(BgL_superz00_1303,
												BGl_tclassz00zzobject_classz00))
											{	/* Type/tenv.scm 205 */
												obj_t BgL_superzd2idzd2_1305;

												BgL_superzd2idzd2_1305 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt)
																((BgL_typez00_bglt) BgL_superz00_1303))))->
													BgL_idz00);
												{	/* Type/tenv.scm 205 */
													BgL_typez00_bglt BgL_oldzd2szd2_1306;

													BgL_oldzd2szd2_1306 =
														BGl_findzd2typezd2zztype_envz00
														(BgL_superzd2idzd2_1305);
													{	/* Type/tenv.scm 206 */

														{	/* Type/tenv.scm 207 */
															bool_t BgL_test1813z00_2088;

															{	/* Type/tenv.scm 207 */
																bool_t BgL_res1726z00_1748;

																BgL_res1726z00_1748 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_oldzd2szd2_1306),
																	BGl_tclassz00zzobject_classz00);
																BgL_test1813z00_2088 = BgL_res1726z00_1748;
															}
															if (BgL_test1813z00_2088)
																{
																	BgL_tclassz00_bglt BgL_auxz00_2091;

																	{
																		obj_t BgL_auxz00_2092;

																		{	/* Type/tenv.scm 211 */
																			BgL_objectz00_bglt BgL_tmpz00_2093;

																			BgL_tmpz00_2093 =
																				((BgL_objectz00_bglt)
																				((BgL_typez00_bglt) BgL_newz00_1301));
																			BgL_auxz00_2092 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2093);
																		}
																		BgL_auxz00_2091 =
																			((BgL_tclassz00_bglt) BgL_auxz00_2092);
																	}
																	((((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_2091))->
																			BgL_itszd2superzd2) =
																		((obj_t) ((obj_t) BgL_oldzd2szd2_1306)),
																		BUNSPEC);
																}
															else
																{	/* Type/tenv.scm 210 */
																	obj_t BgL_arg1250z00_1308;

																	BgL_arg1250z00_1308 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					((BgL_typez00_bglt)
																						BgL_newz00_1301))))->BgL_namez00);
																	BGl_errorz00zz__errorz00(CNST_TABLE_REF((
																				(long) 1)),
																		BGl_string1750z00zztype_envz00,
																		BgL_arg1250z00_1308);
											}}}}}
										else
											{	/* Type/tenv.scm 204 */
												BFALSE;
											}
									}
								else
									{	/* Type/tenv.scm 201 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l1178z00_2105;

								BgL_l1178z00_2105 = CDR(BgL_l1178z00_1298);
								BgL_l1178z00_1298 = BgL_l1178z00_2105;
								goto BgL_zc3z04anonymousza31244ze3z87_1299;
							}
						}
					else
						{	/* Type/tenv.scm 200 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l1180z00_1312;

					BgL_l1180z00_1312 = CELL_REF(BgL_tvectorzd2listzd2_1858);
				BgL_zc3z04anonymousza31253ze3z87_1313:
					if (PAIRP(BgL_l1180z00_1312))
						{	/* Type/tenv.scm 214 */
							{	/* Type/tenv.scm 215 */
								obj_t BgL_newz00_1315;

								BgL_newz00_1315 = CAR(BgL_l1180z00_1312);
								BGl_delayzd2tvectorz12zc0zzmodule_typez00(BgL_newz00_1315,
									CNST_TABLE_REF(((long) 2)), ((bool_t) 0));
							}
							{
								obj_t BgL_l1180z00_2112;

								BgL_l1180z00_2112 = CDR(BgL_l1180z00_1312);
								BgL_l1180z00_1312 = BgL_l1180z00_2112;
								goto BgL_zc3z04anonymousza31253ze3z87_1313;
							}
						}
					else
						{	/* Type/tenv.scm 214 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l1182z00_1319;

					BgL_l1182z00_1319 = CELL_REF(BgL_rememberzd2listzd2_1857);
				BgL_zc3z04anonymousza31257ze3z87_1320:
					if (PAIRP(BgL_l1182z00_1319))
						{	/* Type/tenv.scm 222 */
							{	/* Type/tenv.scm 223 */
								obj_t BgL_nz00_1322;

								BgL_nz00_1322 = CAR(BgL_l1182z00_1319);
								if (BGl_isazf3zf3zz__objectz00(BgL_nz00_1322,
										BGl_tclassz00zzobject_classz00))
									{	/* Type/tenv.scm 230 */
										obj_t BgL_arg1263z00_1324;

										BgL_arg1263z00_1324 =
											BGl_makezd2promisezd2zz__r4_control_features_6_9z00
											(BGl_proc1751z00zztype_envz00);
										((obj_t)
											BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00((
													(BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_nz00_1322)), BgL_arg1263z00_1324));
									}
								else
									{	/* Type/tenv.scm 223 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l1182z00_2124;

								BgL_l1182z00_2124 = CDR(BgL_l1182z00_1319);
								BgL_l1182z00_1319 = BgL_l1182z00_2124;
								goto BgL_zc3z04anonymousza31257ze3z87_1320;
							}
						}
					else
						{	/* Type/tenv.scm 222 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
				BGl_proc1752z00zztype_envz00);
		}

	}



/* &add-tenv! */
	obj_t BGl_z62addzd2tenvz12za2zztype_envz00(obj_t BgL_envz00_1841,
		obj_t BgL_tenvz00_1842)
	{
		{	/* Type/tenv.scm 101 */
			return BGl_addzd2tenvz12zc0zztype_envz00(BgL_tenvz00_1842);
		}

	}



/* &<@anonymous:1272> */
	obj_t BGl_z62zc3z04anonymousza31272ze3ze5zztype_envz00(obj_t BgL_envz00_1843,
		obj_t BgL_kz00_1844, obj_t BgL_newz00_1845)
	{
		{	/* Type/tenv.scm 239 */
			{	/* Type/tenv.scm 240 */
				bool_t BgL_tmpz00_2128;

				{
					obj_t BgL_typez00_1937;

					BgL_typez00_1937 = BgL_newz00_1845;
					{	/* Type/tenv.scm 105 */
						bool_t BgL_test1817z00_2129;

						{	/* Type/tenv.scm 105 */
							obj_t BgL_arg1281z00_1938;

							BgL_arg1281z00_1938 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_typez00_1937)))->BgL_aliasz00);
							BgL_test1817z00_2129 =
								BGl_isazf3zf3zz__objectz00(BgL_arg1281z00_1938,
								BGl_typez00zztype_typez00);
						}
						if (BgL_test1817z00_2129)
							{	/* Type/tenv.scm 106 */
								BgL_typez00_bglt BgL_arg1276z00_1939;

								{	/* Type/tenv.scm 106 */
									obj_t BgL_arg1277z00_1940;

									BgL_arg1277z00_1940 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt)
													(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_typez00_1937)))->
														BgL_aliasz00))))->BgL_idz00);
									BgL_arg1276z00_1939 =
										BGl_findzd2typezd2zztype_envz00(BgL_arg1277z00_1940);
								}
								((((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_typez00_1937)))->BgL_aliasz00) =
									((obj_t) ((obj_t) BgL_arg1276z00_1939)), BUNSPEC);
							}
						else
							{	/* Type/tenv.scm 105 */
								BFALSE;
							}
					}
					{	/* Type/tenv.scm 109 */
						obj_t BgL_arg1282z00_1941;

						{	/* Type/tenv.scm 109 */
							obj_t BgL_l1161z00_1942;

							BgL_l1161z00_1942 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_typez00_1937)))->BgL_parentsz00);
							if (NULLP(BgL_l1161z00_1942))
								{	/* Type/tenv.scm 109 */
									BgL_arg1282z00_1941 = BNIL;
								}
							else
								{	/* Type/tenv.scm 109 */
									obj_t BgL_head1163z00_1943;

									{	/* Type/tenv.scm 109 */
										obj_t BgL_res1711z00_1944;

										BgL_res1711z00_1944 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1163z00_1943 = BgL_res1711z00_1944;
									}
									{
										obj_t BgL_l1161z00_1946;
										obj_t BgL_tail1164z00_1947;

										BgL_l1161z00_1946 = BgL_l1161z00_1942;
										BgL_tail1164z00_1947 = BgL_head1163z00_1943;
									BgL_zc3z04anonymousza31284ze3z87_1945:
										if (NULLP(BgL_l1161z00_1946))
											{	/* Type/tenv.scm 109 */
												BgL_arg1282z00_1941 = CDR(BgL_head1163z00_1943);
											}
										else
											{	/* Type/tenv.scm 109 */
												obj_t BgL_newtail1165z00_1948;

												{	/* Type/tenv.scm 109 */
													BgL_typez00_bglt BgL_arg1287z00_1949;

													{	/* Type/tenv.scm 109 */
														obj_t BgL_parentz00_1950;

														BgL_parentz00_1950 =
															CAR(((obj_t) BgL_l1161z00_1946));
														{	/* Type/tenv.scm 110 */
															obj_t BgL_arg1288z00_1951;

															BgL_arg1288z00_1951 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt) BgL_parentz00_1950)))->
																BgL_idz00);
															BgL_arg1287z00_1949 =
																BGl_findzd2typezd2zztype_envz00
																(BgL_arg1288z00_1951);
														}
													}
													{	/* Type/tenv.scm 109 */
														obj_t BgL_res1713z00_1952;

														BgL_res1713z00_1952 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1287z00_1949), BNIL);
														BgL_newtail1165z00_1948 = BgL_res1713z00_1952;
													}
												}
												SET_CDR(BgL_tail1164z00_1947, BgL_newtail1165z00_1948);
												{	/* Type/tenv.scm 109 */
													obj_t BgL_arg1286z00_1953;

													BgL_arg1286z00_1953 =
														CDR(((obj_t) BgL_l1161z00_1946));
													{
														obj_t BgL_tail1164z00_2160;
														obj_t BgL_l1161z00_2159;

														BgL_l1161z00_2159 = BgL_arg1286z00_1953;
														BgL_tail1164z00_2160 = BgL_newtail1165z00_1948;
														BgL_tail1164z00_1947 = BgL_tail1164z00_2160;
														BgL_l1161z00_1946 = BgL_l1161z00_2159;
														goto BgL_zc3z04anonymousza31284ze3z87_1945;
													}
												}
											}
									}
								}
						}
						((((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_typez00_1937)))->BgL_parentsz00) =
							((obj_t) BgL_arg1282z00_1941), BUNSPEC);
					}
					{	/* Type/tenv.scm 113 */
						obj_t BgL_g1174z00_1954;

						BgL_g1174z00_1954 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_typez00_1937)))->BgL_coercezd2tozd2);
						{
							obj_t BgL_l1172z00_1956;

							BgL_l1172z00_1956 = BgL_g1174z00_1954;
						BgL_zc3z04anonymousza31289ze3z87_1955:
							if (PAIRP(BgL_l1172z00_1956))
								{	/* Type/tenv.scm 124 */
									{	/* Type/tenv.scm 114 */
										obj_t BgL_coercerz00_1957;

										BgL_coercerz00_1957 = CAR(BgL_l1172z00_1956);
										{	/* Type/tenv.scm 114 */
											obj_t BgL_fromz00_1958;
											obj_t BgL_toz00_1959;

											BgL_fromz00_1958 =
												STRUCT_REF(
												((obj_t) BgL_coercerz00_1957), (int) (((long) 0)));
											BgL_toz00_1959 =
												STRUCT_REF(
												((obj_t) BgL_coercerz00_1957), (int) (((long) 1)));
											{	/* Type/tenv.scm 116 */
												BgL_typez00_bglt BgL_arg1291z00_1960;

												{	/* Type/tenv.scm 116 */
													obj_t BgL_arg1292z00_1961;

													BgL_arg1292z00_1961 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_fromz00_1958)))->
														BgL_idz00);
													BgL_arg1291z00_1960 =
														BGl_findzd2typezd2zztype_envz00
														(BgL_arg1292z00_1961);
												}
												{	/* Type/tenv.scm 116 */
													obj_t BgL_auxz00_2181;
													int BgL_auxz00_2179;
													obj_t BgL_tmpz00_2177;

													BgL_auxz00_2181 = ((obj_t) BgL_arg1291z00_1960);
													BgL_auxz00_2179 = (int) (((long) 0));
													BgL_tmpz00_2177 = ((obj_t) BgL_coercerz00_1957);
													STRUCT_SET(BgL_tmpz00_2177, BgL_auxz00_2179,
														BgL_auxz00_2181);
											}}
											{	/* Type/tenv.scm 117 */
												BgL_typez00_bglt BgL_arg1295z00_1962;

												{	/* Type/tenv.scm 117 */
													obj_t BgL_arg1296z00_1963;

													BgL_arg1296z00_1963 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_toz00_1959)))->
														BgL_idz00);
													BgL_arg1295z00_1962 =
														BGl_findzd2typezd2zztype_envz00
														(BgL_arg1296z00_1963);
												}
												{	/* Type/tenv.scm 117 */
													obj_t BgL_auxz00_2191;
													int BgL_auxz00_2189;
													obj_t BgL_tmpz00_2187;

													BgL_auxz00_2191 = ((obj_t) BgL_arg1295z00_1962);
													BgL_auxz00_2189 = (int) (((long) 1));
													BgL_tmpz00_2187 = ((obj_t) BgL_coercerz00_1957);
													STRUCT_SET(BgL_tmpz00_2187, BgL_auxz00_2189,
														BgL_auxz00_2191);
											}}
											{	/* Type/tenv.scm 118 */
												obj_t BgL_g1168z00_1964;

												BgL_g1168z00_1964 =
													STRUCT_REF(
													((obj_t) BgL_coercerz00_1957), (int) (((long) 2)));
												{
													obj_t BgL_l1166z00_1966;

													BgL_l1166z00_1966 = BgL_g1168z00_1964;
												BgL_zc3z04anonymousza31297ze3z87_1965:
													if (PAIRP(BgL_l1166z00_1966))
														{	/* Type/tenv.scm 120 */
															{	/* Type/tenv.scm 119 */
																obj_t BgL_coz00_1967;

																BgL_coz00_1967 = CAR(BgL_l1166z00_1966);
																{	/* Type/tenv.scm 119 */
																	BgL_typez00_bglt BgL_arg1299z00_1968;

																	{	/* Type/tenv.scm 119 */
																		obj_t BgL_arg1300z00_1969;

																		BgL_arg1300z00_1969 =
																			(((BgL_typez00_bglt) COBJECT(
																					((BgL_typez00_bglt)
																						CDR(
																							((obj_t) BgL_coz00_1967)))))->
																			BgL_idz00);
																		BgL_arg1299z00_1968 =
																			BGl_findzd2typezd2zztype_envz00
																			(BgL_arg1300z00_1969);
																	}
																	{	/* Type/tenv.scm 119 */
																		obj_t BgL_auxz00_2207;
																		obj_t BgL_tmpz00_2205;

																		BgL_auxz00_2207 =
																			((obj_t) BgL_arg1299z00_1968);
																		BgL_tmpz00_2205 = ((obj_t) BgL_coz00_1967);
																		SET_CDR(BgL_tmpz00_2205, BgL_auxz00_2207);
																	}
																}
															}
															{
																obj_t BgL_l1166z00_2210;

																BgL_l1166z00_2210 = CDR(BgL_l1166z00_1966);
																BgL_l1166z00_1966 = BgL_l1166z00_2210;
																goto BgL_zc3z04anonymousza31297ze3z87_1965;
															}
														}
													else
														{	/* Type/tenv.scm 120 */
															((bool_t) 1);
														}
												}
											}
											{	/* Type/tenv.scm 121 */
												obj_t BgL_g1171z00_1970;

												BgL_g1171z00_1970 =
													STRUCT_REF(
													((obj_t) BgL_coercerz00_1957), (int) (((long) 3)));
												{
													obj_t BgL_l1169z00_1972;

													BgL_l1169z00_1972 = BgL_g1171z00_1970;
												BgL_zc3z04anonymousza31304ze3z87_1971:
													if (PAIRP(BgL_l1169z00_1972))
														{	/* Type/tenv.scm 123 */
															{	/* Type/tenv.scm 122 */
																obj_t BgL_coz00_1973;

																BgL_coz00_1973 = CAR(BgL_l1169z00_1972);
																{	/* Type/tenv.scm 122 */
																	BgL_typez00_bglt BgL_arg1306z00_1974;

																	{	/* Type/tenv.scm 122 */
																		obj_t BgL_arg1307z00_1975;

																		BgL_arg1307z00_1975 =
																			(((BgL_typez00_bglt) COBJECT(
																					((BgL_typez00_bglt)
																						CDR(
																							((obj_t) BgL_coz00_1973)))))->
																			BgL_idz00);
																		BgL_arg1306z00_1974 =
																			BGl_findzd2typezd2zztype_envz00
																			(BgL_arg1307z00_1975);
																	}
																	{	/* Type/tenv.scm 122 */
																		obj_t BgL_auxz00_2225;
																		obj_t BgL_tmpz00_2223;

																		BgL_auxz00_2225 =
																			((obj_t) BgL_arg1306z00_1974);
																		BgL_tmpz00_2223 = ((obj_t) BgL_coz00_1973);
																		SET_CDR(BgL_tmpz00_2223, BgL_auxz00_2225);
																	}
																}
															}
															{
																obj_t BgL_l1169z00_2228;

																BgL_l1169z00_2228 = CDR(BgL_l1169z00_1972);
																BgL_l1169z00_1972 = BgL_l1169z00_2228;
																goto BgL_zc3z04anonymousza31304ze3z87_1971;
															}
														}
													else
														{	/* Type/tenv.scm 123 */
															((bool_t) 1);
														}
												}
											}
										}
									}
									{
										obj_t BgL_l1172z00_2230;

										BgL_l1172z00_2230 = CDR(BgL_l1172z00_1956);
										BgL_l1172z00_1956 = BgL_l1172z00_2230;
										goto BgL_zc3z04anonymousza31289ze3z87_1955;
									}
								}
							else
								{	/* Type/tenv.scm 124 */
									BgL_tmpz00_2128 = ((bool_t) 1);
								}
						}
					}
				}
				return BBOOL(BgL_tmpz00_2128);
			}
		}

	}



/* &<@anonymous:1269> */
	obj_t BGl_z62zc3z04anonymousza31269ze3ze5zztype_envz00(obj_t BgL_envz00_1846)
	{
		{	/* Type/tenv.scm 226 */
			return BNIL;
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zztype_envz00(obj_t BgL_envz00_1847,
		obj_t BgL_kz00_1848, obj_t BgL_newz00_1849)
	{
		{	/* Type/tenv.scm 191 */
			{	/* Type/tenv.scm 192 */
				obj_t BgL_idz00_1976;

				BgL_idz00_1976 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_newz00_1849)))->BgL_idz00);
				{	/* Type/tenv.scm 192 */
					obj_t BgL_oldz00_1977;

					BgL_oldz00_1977 =
						BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
						BgL_idz00_1976);
					{	/* Type/tenv.scm 193 */

						if (BGl_ctypezf3zf3zzforeign_ctypez00(BgL_oldz00_1977))
							{	/* Type/tenv.scm 195 */
								obj_t BgL_lz00_1978;

								BgL_lz00_1978 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_oldz00_1977)))->BgL_locationz00);
								{	/* Type/tenv.scm 197 */
									obj_t BgL_arg1243z00_1979;

									BgL_arg1243z00_1979 =
										BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
										((BgL_typez00_bglt) BgL_oldz00_1977),
										((BgL_typez00_bglt) BgL_oldz00_1977), BgL_lz00_1978);
									return
										BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
										(BgL_arg1243z00_1979);
								}
							}
						else
							{	/* Type/tenv.scm 194 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1228> */
	obj_t BGl_z62zc3z04anonymousza31228ze3ze5zztype_envz00(obj_t BgL_envz00_1850,
		obj_t BgL_kz00_1853, obj_t BgL_newz00_1854)
	{
		{	/* Type/tenv.scm 166 */
			{	/* Type/tenv.scm 167 */
				obj_t BgL_rememberzd2listzd2_1851;
				obj_t BgL_tvectorzd2listzd2_1852;

				BgL_rememberzd2listzd2_1851 =
					PROCEDURE_REF(BgL_envz00_1850, (int) (((long) 0)));
				BgL_tvectorzd2listzd2_1852 =
					PROCEDURE_REF(BgL_envz00_1850, (int) (((long) 1)));
				{
					BgL_typez00_bglt BgL_oldz00_1987;
					obj_t BgL_newz00_1988;
					BgL_typez00_bglt BgL_fromz00_1982;
					BgL_typez00_bglt BgL_toz00_1983;

					{	/* Type/tenv.scm 167 */
						obj_t BgL_idz00_1998;

						BgL_idz00_1998 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_newz00_1854)))->BgL_idz00);
						{	/* Type/tenv.scm 167 */
							obj_t BgL_oldz00_1999;

							BgL_oldz00_1999 =
								BGl_hashtablezd2getzd2zz__hashz00
								(BGl_za2Tenvza2z00zztype_envz00, BgL_idz00_1998);
							{	/* Type/tenv.scm 168 */

								if (BGl_isazf3zf3zz__objectz00(BgL_oldz00_1999,
										BGl_typez00zztype_typez00))
									{	/* Type/tenv.scm 170 */
										if (
											(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_oldz00_1999)))->
												BgL_initzf3zf3))
											{	/* Type/tenv.scm 189 */
												bool_t BgL_tmpz00_2256;

												BgL_oldz00_1987 = ((BgL_typez00_bglt) BgL_oldz00_1999);
												BgL_newz00_1988 = BgL_newz00_1854;
												{	/* Type/tenv.scm 134 */
													obj_t BgL_g1177z00_1989;

													BgL_g1177z00_1989 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_newz00_1988)))->
														BgL_coercezd2tozd2);
													{
														obj_t BgL_l1175z00_1991;

														BgL_l1175z00_1991 = BgL_g1177z00_1989;
													BgL_zc3z04anonymousza31324ze3z87_1990:
														if (PAIRP(BgL_l1175z00_1991))
															{	/* Type/tenv.scm 144 */
																{	/* Type/tenv.scm 135 */
																	obj_t BgL_coercerz00_1992;

																	BgL_coercerz00_1992 = CAR(BgL_l1175z00_1991);
																	{	/* Type/tenv.scm 135 */
																		obj_t BgL_toz00_1993;

																		BgL_toz00_1993 =
																			STRUCT_REF(
																			((obj_t) BgL_coercerz00_1992),
																			(int) (((long) 1)));
																		{	/* Type/tenv.scm 136 */
																			obj_t BgL_tidz00_1994;

																			BgL_tidz00_1994 =
																				(((BgL_typez00_bglt) COBJECT(
																						((BgL_typez00_bglt)
																							BgL_toz00_1993)))->BgL_idz00);
																			{	/* Type/tenv.scm 137 */
																				bool_t BgL_tidzd2existszf3z21_1995;

																				BgL_tidzd2existszf3z21_1995 =
																					BGl_typezd2existszf3z21zztype_envz00
																					(BgL_tidz00_1994);
																				{	/* Type/tenv.scm 138 */

																					{	/* Type/tenv.scm 139 */
																						bool_t BgL_test1830z00_2268;

																						if (BgL_tidzd2existszf3z21_1995)
																							{	/* Type/tenv.scm 140 */
																								bool_t BgL_test1832z00_2270;

																								{	/* Type/tenv.scm 140 */
																									BgL_typez00_bglt
																										BgL_arg1334z00_1996;
																									BgL_arg1334z00_1996 =
																										BGl_findzd2typezd2zztype_envz00
																										(BgL_tidz00_1994);
																									{	/* Type/tenv.scm 140 */
																										obj_t BgL_tmpz00_2272;

																										BgL_fromz00_1982 =
																											BgL_oldz00_1987;
																										BgL_toz00_1983 =
																											BgL_arg1334z00_1996;
																										{
																											obj_t BgL_coercerz00_1985;

																											BgL_coercerz00_1985 =
																												(((BgL_typez00_bglt)
																													COBJECT
																													(BgL_fromz00_1982))->
																												BgL_coercezd2tozd2);
																										BgL_loopz00_1984:
																											if (NULLP
																												(BgL_coercerz00_1985))
																												{	/* Type/tenv.scm 129 */
																													BgL_tmpz00_2272 =
																														BFALSE;
																												}
																											else
																												{	/* Type/tenv.scm 130 */
																													bool_t
																														BgL_test1834z00_2275;
																													{	/* Type/tenv.scm 130 */
																														obj_t
																															BgL_tmpz00_2276;
																														{	/* Type/tenv.scm 130 */
																															obj_t
																																BgL_sz00_1986;
																															BgL_sz00_1986 =
																																CAR(((obj_t)
																																	BgL_coercerz00_1985));
																															BgL_tmpz00_2276 =
																																STRUCT_REF
																																(BgL_sz00_1986,
																																(int) (((long)
																																		1)));
																														}
																														BgL_test1834z00_2275
																															=
																															(BgL_tmpz00_2276
																															==
																															((obj_t)
																																BgL_toz00_1983));
																													}
																													if (BgL_test1834z00_2275)
																														{	/* Type/tenv.scm 130 */
																															BgL_tmpz00_2272 =
																																CAR(
																																((obj_t)
																																	BgL_coercerz00_1985));
																														}
																													else
																														{
																															obj_t
																																BgL_coercerz00_2285;
																															BgL_coercerz00_2285
																																=
																																CDR(((obj_t)
																																	BgL_coercerz00_1985));
																															BgL_coercerz00_1985
																																=
																																BgL_coercerz00_2285;
																															goto
																																BgL_loopz00_1984;
																														}
																												}
																										}
																										BgL_test1832z00_2270 =
																											CBOOL(BgL_tmpz00_2272);
																									}
																								}
																								if (BgL_test1832z00_2270)
																									{	/* Type/tenv.scm 140 */
																										BgL_test1830z00_2268 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Type/tenv.scm 140 */
																										BgL_test1830z00_2268 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Type/tenv.scm 139 */
																								BgL_test1830z00_2268 =
																									((bool_t) 1);
																							}
																						if (BgL_test1830z00_2268)
																							{	/* Type/tenv.scm 143 */
																								obj_t BgL_arg1330z00_1997;

																								BgL_arg1330z00_1997 =
																									MAKE_YOUNG_PAIR
																									(BgL_coercerz00_1992,
																									(((BgL_typez00_bglt)
																											COBJECT
																											(BgL_oldz00_1987))->
																										BgL_coercezd2tozd2));
																								((((BgL_typez00_bglt)
																											COBJECT
																											(BgL_oldz00_1987))->
																										BgL_coercezd2tozd2) =
																									((obj_t) BgL_arg1330z00_1997),
																									BUNSPEC);
																							}
																						else
																							{	/* Type/tenv.scm 139 */
																								BFALSE;
																							}
																					}
																				}
																			}
																		}
																	}
																}
																{
																	obj_t BgL_l1175z00_2293;

																	BgL_l1175z00_2293 = CDR(BgL_l1175z00_1991);
																	BgL_l1175z00_1991 = BgL_l1175z00_2293;
																	goto BgL_zc3z04anonymousza31324ze3z87_1990;
																}
															}
														else
															{	/* Type/tenv.scm 144 */
																BgL_tmpz00_2256 = ((bool_t) 1);
															}
													}
												}
												return BBOOL(BgL_tmpz00_2256);
											}
										else
											{	/* Type/tenv.scm 181 */
												BGl_errorz00zz__errorz00(BGl_string1753z00zztype_envz00,
													BGl_string1754z00zztype_envz00, BgL_idz00_1998);
												return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long)
															55)));
									}}
								else
									{	/* Type/tenv.scm 170 */
										BGl_hashtablezd2putz12zc0zz__hashz00
											(BGl_za2Tenvza2z00zztype_envz00, BgL_idz00_1998,
											BgL_newz00_1854);
										if (BGl_isazf3zf3zz__objectz00(BgL_newz00_1854,
												BGl_tclassz00zzobject_classz00))
											{	/* Type/tenv.scm 172 */
												BGl_heapzd2addzd2classz12z12zzobject_classz00(
													((BgL_typez00_bglt) BgL_newz00_1854));
												{	/* Type/tenv.scm 174 */
													obj_t BgL_auxz00_2000;

													BgL_auxz00_2000 =
														MAKE_YOUNG_PAIR(BgL_newz00_1854,
														CELL_REF(BgL_rememberzd2listzd2_1851));
													CELL_SET(BgL_rememberzd2listzd2_1851,
														BgL_auxz00_2000);
												}
											}
										else
											{	/* Type/tenv.scm 172 */
												BFALSE;
											}
										if (BGl_isazf3zf3zz__objectz00(BgL_newz00_1854,
												BGl_jclassz00zzobject_classz00))
											{	/* Type/tenv.scm 176 */
												BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00
													(BgL_newz00_1854);
											}
										else
											{	/* Type/tenv.scm 176 */
												BFALSE;
											}
										if (BGl_isazf3zf3zz__objectz00(BgL_newz00_1854,
												BGl_tvecz00zztvector_tvectorz00))
											{	/* Type/tenv.scm 179 */
												obj_t BgL_auxz00_2001;

												BgL_auxz00_2001 =
													MAKE_YOUNG_PAIR(BgL_newz00_1854,
													CELL_REF(BgL_tvectorzd2listzd2_1852));
												return
													CELL_SET(BgL_tvectorzd2listzd2_1852, BgL_auxz00_2001);
											}
										else
											{	/* Type/tenv.scm 178 */
												return BFALSE;
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* find-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t
		BgL_idz00_23)
	{
		{	/* Type/tenv.scm 245 */
			{	/* Type/tenv.scm 246 */
				obj_t BgL_typez00_1443;

				BgL_typez00_1443 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_23);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1443,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 247 */
						return ((BgL_typez00_bglt) BgL_typez00_1443);
					}
				else
					{	/* Type/tenv.scm 247 */
						return
							((BgL_typez00_bglt)
							BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
								BGl_string1755z00zztype_envz00, BgL_idz00_23));
		}}}

	}



/* &find-type */
	BgL_typez00_bglt BGl_z62findzd2typezb0zztype_envz00(obj_t BgL_envz00_1861,
		obj_t BgL_idz00_1862)
	{
		{	/* Type/tenv.scm 245 */
			return BGl_findzd2typezd2zztype_envz00(BgL_idz00_1862);
		}

	}



/* find-type/location */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_findzd2typezf2locationz20zztype_envz00(obj_t BgL_idz00_24,
		obj_t BgL_locz00_25)
	{
		{	/* Type/tenv.scm 254 */
			{	/* Type/tenv.scm 255 */
				obj_t BgL_typez00_1445;

				BgL_typez00_1445 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_24);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1445,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 256 */
						return ((BgL_typez00_bglt) BgL_typez00_1445);
					}
				else
					{	/* Type/tenv.scm 256 */
						return
							((BgL_typez00_bglt)
							BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_25,
								CNST_TABLE_REF(((long) 3)), BGl_string1755z00zztype_envz00,
								BgL_idz00_24, BNIL));
		}}}

	}



/* &find-type/location */
	BgL_typez00_bglt BGl_z62findzd2typezf2locationz42zztype_envz00(obj_t
		BgL_envz00_1863, obj_t BgL_idz00_1864, obj_t BgL_locz00_1865)
	{
		{	/* Type/tenv.scm 254 */
			return
				BGl_findzd2typezf2locationz20zztype_envz00(BgL_idz00_1864,
				BgL_locz00_1865);
		}

	}



/* type-exists? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t
		BgL_idz00_26)
	{
		{	/* Type/tenv.scm 265 */
			{	/* Type/tenv.scm 266 */
				obj_t BgL_typez00_1448;

				BgL_typez00_1448 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_26);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1448,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 267 */
						return
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_typez00_1448)))->BgL_initzf3zf3);
					}
				else
					{	/* Type/tenv.scm 267 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &type-exists? */
	obj_t BGl_z62typezd2existszf3z43zztype_envz00(obj_t BgL_envz00_1866,
		obj_t BgL_idz00_1867)
	{
		{	/* Type/tenv.scm 265 */
			return BBOOL(BGl_typezd2existszf3z21zztype_envz00(BgL_idz00_1867));
		}

	}



/* bind-type! */
	BgL_typez00_bglt BGl_bindzd2typez12zc0zztype_envz00(obj_t BgL_idz00_27,
		bool_t BgL_initzf3zf3_28, obj_t BgL_locz00_29)
	{
		{	/* Type/tenv.scm 274 */
			{	/* Type/tenv.scm 275 */
				obj_t BgL_typez00_1450;

				BgL_typez00_1450 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_27);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1450,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 277 */
						bool_t BgL_test1842z00_2338;

						if (CBOOL
							(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
							{	/* Type/tenv.scm 277 */
								BgL_test1842z00_2338 = ((bool_t) 0);
							}
						else
							{	/* Type/tenv.scm 277 */
								if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
									{	/* Type/tenv.scm 278 */
										BgL_test1842z00_2338 = ((bool_t) 0);
									}
								else
									{	/* Type/tenv.scm 278 */
										BgL_test1842z00_2338 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_typez00_1450)))->
											BgL_initzf3zf3);
									}
							}
						if (BgL_test1842z00_2338)
							{	/* Type/tenv.scm 280 */
								obj_t BgL_arg1357z00_1453;

								BgL_arg1357z00_1453 =
									BGl_shapez00zztools_shapez00(BgL_typez00_1450);
								return
									((BgL_typez00_bglt)
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
												4)), BGl_string1756z00zztype_envz00,
										BgL_arg1357z00_1453, BNIL));
							}
						else
							{	/* Type/tenv.scm 277 */
								{	/* Type/tenv.scm 282 */
									bool_t BgL_test1845z00_2349;

									if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
										{	/* Type/tenv.scm 283 */
											BgL_test1845z00_2349 = ((bool_t) 0);
										}
									else
										{	/* Type/tenv.scm 283 */
											BgL_test1845z00_2349 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_typez00_1450)))->
												BgL_initzf3zf3);
										}
									if (BgL_test1845z00_2349)
										{	/* Type/tenv.scm 282 */
											if (CBOOL
												(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
												{	/* Type/tenv.scm 285 */
													BFALSE;
												}
											else
												{	/* Type/tenv.scm 288 */
													obj_t BgL_arg1361z00_1457;

													BgL_arg1361z00_1457 =
														BGl_shapez00zztools_shapez00(BgL_typez00_1450);
													BGl_userzd2warningzd2zztools_errorz00(CNST_TABLE_REF((
																(long) 4)), BGl_string1756z00zztype_envz00,
														BgL_arg1361z00_1457);
										}}
									else
										{	/* Type/tenv.scm 282 */
											BFALSE;
										}
								}
								if (BgL_initzf3zf3_28)
									{	/* Type/tenv.scm 291 */
										((((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_typez00_1450)))->
												BgL_initzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								else
									{	/* Type/tenv.scm 291 */
										BFALSE;
									}
								return ((BgL_typez00_bglt) BgL_typez00_1450);
							}
					}
				else
					{	/* Type/tenv.scm 294 */
						BgL_typez00_bglt BgL_newz00_1459;

						{	/* Type/tenv.scm 294 */
							BgL_typez00_bglt BgL_new1081z00_1460;

							{	/* Type/tenv.scm 294 */
								BgL_typez00_bglt BgL_new1080z00_1461;

								BgL_new1080z00_1461 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Type/tenv.scm 294 */
									long BgL_arg1363z00_1462;

									{	/* Type/tenv.scm 294 */
										long BgL_res1735z00_1771;

										BgL_res1735z00_1771 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1363z00_1462 = BgL_res1735z00_1771;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1080z00_1461),
										BgL_arg1363z00_1462);
								}
								{	/* Type/tenv.scm 294 */
									BgL_objectz00_bglt BgL_tmpz00_2367;

									BgL_tmpz00_2367 = ((BgL_objectz00_bglt) BgL_new1080z00_1461);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2367, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1080z00_1461);
								BgL_new1081z00_1460 = BgL_new1080z00_1461;
							}
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->BgL_idz00) =
								((obj_t) BgL_idz00_27), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_namez00) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_siza7eza7) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_classz00) =
								((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_coercezd2tozd2) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_parentsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_initzf3zf3) = ((bool_t) BgL_initzf3zf3_28), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_magiczf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->BgL_z42z42) =
								((obj_t) BTRUE), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_aliasz00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_pointedzd2tozd2byz00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_tvectorz00) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_locationz00) = ((obj_t) BgL_locz00_29), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_importzd2locationzd2) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_typez00_bglt) COBJECT(BgL_new1081z00_1460))->
									BgL_occurrencez00) = ((int) (int) (((long) 0))), BUNSPEC);
							BgL_newz00_1459 = BgL_new1081z00_1460;
						}
						BGl_hashtablezd2putz12zc0zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
							BgL_idz00_27, ((obj_t) BgL_newz00_1459));
						return BgL_newz00_1459;
					}
			}
		}

	}



/* use-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t
		BgL_idz00_30, obj_t BgL_locz00_31)
	{
		{	/* Type/tenv.scm 301 */
			{	/* Type/tenv.scm 303 */
				obj_t BgL_typez00_1463;

				BgL_typez00_1463 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_30);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1463,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 305 */
						BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
							((BgL_typez00_bglt) BgL_typez00_1463));
						return ((BgL_typez00_bglt) BgL_typez00_1463);
					}
				else
					{	/* Type/tenv.scm 305 */
						if (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00)
							{	/* Type/tenv.scm 308 */
								return
									((BgL_typez00_bglt)
									BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_31,
										CNST_TABLE_REF(((long) 6)), BGl_string1755z00zztype_envz00,
										BgL_idz00_30, BNIL));
							}
						else
							{	/* Type/tenv.scm 308 */
								{	/* Type/tenv.scm 312 */
									BgL_typez00_bglt BgL_typez00_1466;

									BgL_typez00_1466 =
										BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_30,
										((bool_t) 0), BgL_locz00_31);
									BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
										(BgL_typez00_1466);
									return BgL_typez00_1466;
								}
							}
					}
			}
		}

	}



/* &use-type! */
	BgL_typez00_bglt BGl_z62usezd2typez12za2zztype_envz00(obj_t BgL_envz00_1868,
		obj_t BgL_idz00_1869, obj_t BgL_locz00_1870)
	{
		{	/* Type/tenv.scm 301 */
			return BGl_usezd2typez12zc0zztype_envz00(BgL_idz00_1869, BgL_locz00_1870);
		}

	}



/* use-type/import-loc! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t BgL_idz00_32,
		obj_t BgL_locz00_33, obj_t BgL_lociz00_34)
	{
		{	/* Type/tenv.scm 319 */
			{	/* Type/tenv.scm 321 */
				obj_t BgL_typez00_1467;

				BgL_typez00_1467 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_32);
				if (BGl_isazf3zf3zz__objectz00(BgL_typez00_1467,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 323 */
						return ((BgL_typez00_bglt) BgL_typez00_1467);
					}
				else
					{	/* Type/tenv.scm 323 */
						if (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00)
							{	/* Type/tenv.scm 325 */
								return
									((BgL_typez00_bglt)
									BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_33,
										CNST_TABLE_REF(((long) 6)), BGl_string1755z00zztype_envz00,
										BgL_idz00_32, BNIL));
							}
						else
							{	/* Type/tenv.scm 325 */
								{	/* Type/tenv.scm 329 */
									BgL_typez00_bglt BgL_typez00_1470;

									BgL_typez00_1470 =
										BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_32,
										((bool_t) 0), BgL_locz00_33);
									((((BgL_typez00_bglt) COBJECT(BgL_typez00_1470))->
											BgL_importzd2locationzd2) =
										((obj_t) BgL_lociz00_34), BUNSPEC);
									return BgL_typez00_1470;
								}
							}
					}
			}
		}

	}



/* &use-type/import-loc! */
	BgL_typez00_bglt BGl_z62usezd2typezf2importzd2locz12z82zztype_envz00(obj_t
		BgL_envz00_1871, obj_t BgL_idz00_1872, obj_t BgL_locz00_1873,
		obj_t BgL_lociz00_1874)
	{
		{	/* Type/tenv.scm 319 */
			return
				BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(BgL_idz00_1872,
				BgL_locz00_1873, BgL_lociz00_1874);
		}

	}



/* use-foreign-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2foreignzd2typez12z12zztype_envz00(obj_t BgL_idz00_35,
		obj_t BgL_locz00_36)
	{
		{	/* Type/tenv.scm 342 */
			{	/* Type/tenv.scm 344 */
				obj_t BgL_tidz00_1471;

				BgL_tidz00_1471 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_35, BgL_locz00_36);
				{	/* Type/tenv.scm 349 */
					bool_t BgL_test1853z00_2415;

					{	/* Type/tenv.scm 349 */
						obj_t BgL_arg1382z00_1476;
						BgL_typez00_bglt BgL_arg1383z00_1477;

						BgL_arg1382z00_1476 = CDR(BgL_tidz00_1471);
						BgL_arg1383z00_1477 = BGl_getzd2defaultzd2typez00zztype_cachez00();
						BgL_test1853z00_2415 =
							(BgL_arg1382z00_1476 == ((obj_t) BgL_arg1383z00_1477));
					}
					if (BgL_test1853z00_2415)
						{	/* Type/tenv.scm 349 */
							return
								BGl_usezd2typez12zc0zztype_envz00(CAR(BgL_tidz00_1471),
								BgL_locz00_36);
						}
					else
						{	/* Type/tenv.scm 349 */
							return ((BgL_typez00_bglt) CDR(BgL_tidz00_1471));
						}
				}
			}
		}

	}



/* &use-foreign-type! */
	BgL_typez00_bglt BGl_z62usezd2foreignzd2typez12z70zztype_envz00(obj_t
		BgL_envz00_1875, obj_t BgL_idz00_1876, obj_t BgL_locz00_1877)
	{
		{	/* Type/tenv.scm 342 */
			return
				BGl_usezd2foreignzd2typez12z12zztype_envz00(BgL_idz00_1876,
				BgL_locz00_1877);
		}

	}



/* use-foreign-type/import-loc! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t
		BgL_idz00_37, obj_t BgL_locz00_38, obj_t BgL_lociz00_39)
	{
		{	/* Type/tenv.scm 364 */
			{	/* Type/tenv.scm 366 */
				obj_t BgL_tidz00_1478;

				BgL_tidz00_1478 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_37, BgL_locz00_38);
				{	/* Type/tenv.scm 371 */
					bool_t BgL_test1854z00_2426;

					{	/* Type/tenv.scm 371 */
						obj_t BgL_arg1396z00_1483;
						BgL_typez00_bglt BgL_arg1417z00_1484;

						BgL_arg1396z00_1483 = CDR(BgL_tidz00_1478);
						BgL_arg1417z00_1484 = BGl_getzd2defaultzd2typez00zztype_cachez00();
						BgL_test1854z00_2426 =
							(BgL_arg1396z00_1483 == ((obj_t) BgL_arg1417z00_1484));
					}
					if (BgL_test1854z00_2426)
						{	/* Type/tenv.scm 371 */
							return
								BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(CAR
								(BgL_tidz00_1478), BgL_locz00_38, BgL_lociz00_39);
						}
					else
						{	/* Type/tenv.scm 371 */
							return ((BgL_typez00_bglt) CDR(BgL_tidz00_1478));
						}
				}
			}
		}

	}



/* &use-foreign-type/import-loc! */
	BgL_typez00_bglt
		BGl_z62usezd2foreignzd2typezf2importzd2locz12z50zztype_envz00(obj_t
		BgL_envz00_1878, obj_t BgL_idz00_1879, obj_t BgL_locz00_1880,
		obj_t BgL_lociz00_1881)
	{
		{	/* Type/tenv.scm 364 */
			return
				BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
				(BgL_idz00_1879, BgL_locz00_1880, BgL_lociz00_1881);
		}

	}



/* declare-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t
		BgL_idz00_40, obj_t BgL_namez00_41, obj_t BgL_classz00_42)
	{
		{	/* Type/tenv.scm 380 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_classz00_42,
						CNST_TABLE_REF(((long) 7)))))
				{	/* Type/tenv.scm 386 */
					BgL_typez00_bglt BgL_typez00_1486;

					BgL_typez00_1486 =
						BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_40, ((bool_t) 1),
						BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_typez00_1486))->BgL_namez00) =
						((obj_t) BgL_namez00_41), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_typez00_1486))->BgL_z42z42) =
						((obj_t) BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_41)),
						BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_typez00_1486))->BgL_classz00) =
						((obj_t) BgL_classz00_42), BUNSPEC);
					return BgL_typez00_1486;
				}
			else
				{	/* Type/tenv.scm 382 */
					return
						((BgL_typez00_bglt)
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1757z00zztype_envz00,
							BGl_string1758z00zztype_envz00, BgL_classz00_42, BNIL));
				}
		}

	}



/* &declare-type! */
	BgL_typez00_bglt BGl_z62declarezd2typez12za2zztype_envz00(obj_t
		BgL_envz00_1882, obj_t BgL_idz00_1883, obj_t BgL_namez00_1884,
		obj_t BgL_classz00_1885)
	{
		{	/* Type/tenv.scm 380 */
			return
				BGl_declarezd2typez12zc0zztype_envz00(BgL_idz00_1883, BgL_namez00_1884,
				BgL_classz00_1885);
		}

	}



/* declare-subtype! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2subtypez12zc0zztype_envz00(obj_t BgL_idz00_43,
		obj_t BgL_namez00_44, obj_t BgL_parentsz00_45, obj_t BgL_classz00_46)
	{
		{	/* Type/tenv.scm 397 */
			{	/* Type/tenv.scm 400 */
				BgL_typez00_bglt BgL_typez00_1489;
				obj_t BgL_parentsz00_1490;

				BgL_typez00_1489 =
					BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_43, ((bool_t) 1),
					BUNSPEC);
				if (NULLP(BgL_parentsz00_45))
					{	/* Type/tenv.scm 401 */
						BgL_parentsz00_1490 = BNIL;
					}
				else
					{	/* Type/tenv.scm 401 */
						obj_t BgL_head1186z00_1494;

						{	/* Type/tenv.scm 401 */
							BgL_typez00_bglt BgL_arg1462z00_1506;

							{	/* Type/tenv.scm 401 */
								obj_t BgL_arg1464z00_1507;

								BgL_arg1464z00_1507 = CAR(((obj_t) BgL_parentsz00_45));
								BgL_arg1462z00_1506 =
									BGl_findzd2typezd2zztype_envz00(BgL_arg1464z00_1507);
							}
							{	/* Type/tenv.scm 401 */
								obj_t BgL_res1739z00_1789;

								BgL_res1739z00_1789 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1462z00_1506), BNIL);
								BgL_head1186z00_1494 = BgL_res1739z00_1789;
							}
						}
						{	/* Type/tenv.scm 401 */
							obj_t BgL_g1189z00_1495;

							BgL_g1189z00_1495 = CDR(((obj_t) BgL_parentsz00_45));
							{
								obj_t BgL_l1184z00_1497;
								obj_t BgL_tail1187z00_1498;

								BgL_l1184z00_1497 = BgL_g1189z00_1495;
								BgL_tail1187z00_1498 = BgL_head1186z00_1494;
							BgL_zc3z04anonymousza31443ze3z87_1499:
								if (NULLP(BgL_l1184z00_1497))
									{	/* Type/tenv.scm 401 */
										BgL_parentsz00_1490 = BgL_head1186z00_1494;
									}
								else
									{	/* Type/tenv.scm 401 */
										obj_t BgL_newtail1188z00_1501;

										{	/* Type/tenv.scm 401 */
											BgL_typez00_bglt BgL_arg1449z00_1503;

											{	/* Type/tenv.scm 401 */
												obj_t BgL_arg1461z00_1504;

												BgL_arg1461z00_1504 = CAR(((obj_t) BgL_l1184z00_1497));
												BgL_arg1449z00_1503 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg1461z00_1504);
											}
											{	/* Type/tenv.scm 401 */
												obj_t BgL_res1741z00_1793;

												BgL_res1741z00_1793 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1449z00_1503), BNIL);
												BgL_newtail1188z00_1501 = BgL_res1741z00_1793;
											}
										}
										SET_CDR(BgL_tail1187z00_1498, BgL_newtail1188z00_1501);
										{	/* Type/tenv.scm 401 */
											obj_t BgL_arg1448z00_1502;

											BgL_arg1448z00_1502 = CDR(((obj_t) BgL_l1184z00_1497));
											{
												obj_t BgL_tail1187z00_2469;
												obj_t BgL_l1184z00_2468;

												BgL_l1184z00_2468 = BgL_arg1448z00_1502;
												BgL_tail1187z00_2469 = BgL_newtail1188z00_1501;
												BgL_tail1187z00_1498 = BgL_tail1187z00_2469;
												BgL_l1184z00_1497 = BgL_l1184z00_2468;
												goto BgL_zc3z04anonymousza31443ze3z87_1499;
											}
										}
									}
							}
						}
					}
				((((BgL_typez00_bglt) COBJECT(BgL_typez00_1489))->BgL_namez00) =
					((obj_t) BgL_namez00_44), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_typez00_1489))->BgL_z42z42) =
					((obj_t) BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_44)),
					BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_typez00_1489))->BgL_classz00) =
					((obj_t) BgL_classz00_46), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_typez00_1489))->BgL_parentsz00) =
					((obj_t) BgL_parentsz00_1490), BUNSPEC);
				return BgL_typez00_1489;
			}
		}

	}



/* &declare-subtype! */
	BgL_typez00_bglt BGl_z62declarezd2subtypez12za2zztype_envz00(obj_t
		BgL_envz00_1886, obj_t BgL_idz00_1887, obj_t BgL_namez00_1888,
		obj_t BgL_parentsz00_1889, obj_t BgL_classz00_1890)
	{
		{	/* Type/tenv.scm 397 */
			return
				BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_1887,
				BgL_namez00_1888, BgL_parentsz00_1889, BgL_classz00_1890);
		}

	}



/* declare-aliastype! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t BgL_idz00_47,
		obj_t BgL_namez00_48, obj_t BgL_classz00_49,
		BgL_typez00_bglt BgL_aliasz00_50)
	{
		{	/* Type/tenv.scm 411 */
			{	/* Type/tenv.scm 413 */
				BgL_typez00_bglt BgL_typez00_1800;

				BgL_typez00_1800 =
					BGl_declarezd2typez12zc0zztype_envz00(BgL_idz00_47, BgL_namez00_48,
					BgL_classz00_49);
				((((BgL_typez00_bglt) COBJECT(BgL_typez00_1800))->BgL_aliasz00) =
					((obj_t) ((obj_t) BgL_aliasz00_50)), BUNSPEC);
				return BgL_typez00_1800;
			}
		}

	}



/* &declare-aliastype! */
	BgL_typez00_bglt BGl_z62declarezd2aliastypez12za2zztype_envz00(obj_t
		BgL_envz00_1891, obj_t BgL_idz00_1892, obj_t BgL_namez00_1893,
		obj_t BgL_classz00_1894, obj_t BgL_aliasz00_1895)
	{
		{	/* Type/tenv.scm 411 */
			return
				BGl_declarezd2aliastypez12zc0zztype_envz00(BgL_idz00_1892,
				BgL_namez00_1893, BgL_classz00_1894,
				((BgL_typez00_bglt) BgL_aliasz00_1895));
		}

	}



/* for-each-type! */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t
		BgL_procz00_51)
	{
		{	/* Type/tenv.scm 420 */
			{	/* Type/tenv.scm 421 */
				obj_t BgL_zc3z04anonymousza31466ze3z87_1896;

				BgL_zc3z04anonymousza31466ze3z87_1896 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31466ze3ze5zztype_envz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31466ze3z87_1896,
					(int) (((long) 0)), ((obj_t) BgL_procz00_51));
				return
					BGl_hashtablezd2forzd2eachz00zz__hashz00
					(BGl_za2Tenvza2z00zztype_envz00,
					BgL_zc3z04anonymousza31466ze3z87_1896);
			}
		}

	}



/* &for-each-type! */
	obj_t BGl_z62forzd2eachzd2typez12z70zztype_envz00(obj_t BgL_envz00_1897,
		obj_t BgL_procz00_1898)
	{
		{	/* Type/tenv.scm 420 */
			return BGl_forzd2eachzd2typez12z12zztype_envz00(BgL_procz00_1898);
		}

	}



/* &<@anonymous:1466> */
	obj_t BGl_z62zc3z04anonymousza31466ze3ze5zztype_envz00(obj_t BgL_envz00_1899,
		obj_t BgL_kz00_1901, obj_t BgL_xz00_1902)
	{
		{	/* Type/tenv.scm 421 */
			{	/* Type/tenv.scm 421 */
				obj_t BgL_procz00_1900;

				BgL_procz00_1900 = PROCEDURE_REF(BgL_envz00_1899, (int) (((long) 0)));
				return
					PROCEDURE_ENTRY(BgL_procz00_1900) (BgL_procz00_1900, BgL_xz00_1902,
					BEOA);
			}
		}

	}



/* uninitialized-types */
	obj_t BGl_uninitializa7edzd2typesz75zztype_envz00()
	{
		{	/* Type/tenv.scm 428 */
			{	/* Type/tenv.scm 429 */
				obj_t BgL_uninitz00_1908;

				BgL_uninitz00_1908 = MAKE_CELL(BNIL);
				{	/* Type/tenv.scm 431 */
					obj_t BgL_zc3z04anonymousza31475ze3z87_1903;

					BgL_zc3z04anonymousza31475ze3z87_1903 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31475ze3ze5zztype_envz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31475ze3z87_1903,
						(int) (((long) 0)), ((obj_t) BgL_uninitz00_1908));
					BGl_forzd2eachzd2typez12z12zztype_envz00
						(BgL_zc3z04anonymousza31475ze3z87_1903);
				}
				return CELL_REF(BgL_uninitz00_1908);
			}
		}

	}



/* &<@anonymous:1475> */
	obj_t BGl_z62zc3z04anonymousza31475ze3ze5zztype_envz00(obj_t BgL_envz00_1904,
		obj_t BgL_tz00_1906)
	{
		{	/* Type/tenv.scm 430 */
			{	/* Type/tenv.scm 431 */
				obj_t BgL_uninitz00_1905;

				BgL_uninitz00_1905 = PROCEDURE_REF(BgL_envz00_1904, (int) (((long) 0)));
				if (
					(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_tz00_1906)))->BgL_initzf3zf3))
					{	/* Type/tenv.scm 431 */
						return BFALSE;
					}
				else
					{	/* Type/tenv.scm 432 */
						obj_t BgL_auxz00_2002;

						BgL_auxz00_2002 =
							MAKE_YOUNG_PAIR(BgL_tz00_1906, CELL_REF(BgL_uninitz00_1905));
						return CELL_SET(BgL_uninitz00_1905, BgL_auxz00_2002);
					}
			}
		}

	}



/* check-types */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2typeszd2zztype_envz00()
	{
		{	/* Type/tenv.scm 449 */
			{	/* Type/tenv.scm 450 */
				obj_t BgL_utz00_1520;

				BgL_utz00_1520 = BGl_uninitializa7edzd2typesz75zztype_envz00();
				if (PAIRP(BgL_utz00_1520))
					{	/* Type/tenv.scm 451 */
						{	/* Type/tenv.scm 452 */
							obj_t BgL_arg1489z00_1522;

							{	/* Type/tenv.scm 452 */
								obj_t BgL_res1743z00_1805;

								{	/* Type/tenv.scm 452 */
									obj_t BgL_tmpz00_2511;

									BgL_tmpz00_2511 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1743z00_1805 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2511);
								}
								BgL_arg1489z00_1522 = BgL_res1743z00_1805;
							}
							bgl_display_char(((unsigned char) 10), BgL_arg1489z00_1522);
						}
						{	/* Type/tenv.scm 453 */
							obj_t BgL_port1190z00_1523;

							{	/* Type/tenv.scm 453 */
								obj_t BgL_res1744z00_1808;

								{	/* Type/tenv.scm 453 */
									obj_t BgL_tmpz00_2515;

									BgL_tmpz00_2515 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1744z00_1808 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2515);
								}
								BgL_port1190z00_1523 = BgL_res1744z00_1808;
							}
							{	/* Type/tenv.scm 454 */
								long BgL_arg1493z00_1524;

								BgL_arg1493z00_1524 = bgl_list_length(BgL_utz00_1520);
								bgl_display_obj(BINT(BgL_arg1493z00_1524),
									BgL_port1190z00_1523);
							}
							bgl_display_string(BGl_string1759z00zztype_envz00,
								BgL_port1190z00_1523);
							bgl_display_char(((unsigned char) 10), BgL_port1190z00_1523);
						}
						{
							obj_t BgL_utz00_1526;

							BgL_utz00_1526 = BgL_utz00_1520;
						BgL_zc3z04anonymousza31494ze3z87_1527:
							if (NULLP(BgL_utz00_1526))
								{	/* Type/tenv.scm 457 */
									{	/* Type/tenv.scm 458 */
										obj_t BgL_port1191z00_1529;

										{	/* Type/tenv.scm 458 */
											obj_t BgL_res1746z00_1814;

											{	/* Type/tenv.scm 458 */
												obj_t BgL_tmpz00_2525;

												BgL_tmpz00_2525 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1746z00_1814 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2525);
											}
											BgL_port1191z00_1529 = BgL_res1746z00_1814;
										}
										bgl_display_string(BGl_string1760z00zztype_envz00,
											BgL_port1191z00_1529);
										bgl_display_char(((unsigned char) 10),
											BgL_port1191z00_1529);
									}
									BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 56)));
								}
							else
								{	/* Type/tenv.scm 460 */
									bool_t BgL_test1861z00_2532;

									{	/* Type/tenv.scm 460 */
										obj_t BgL_arg1584z00_1554;

										BgL_arg1584z00_1554 = CAR(((obj_t) BgL_utz00_1526));
										BgL_test1861z00_2532 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1584z00_1554,
											BGl_typez00zztype_typez00);
									}
									if (BgL_test1861z00_2532)
										{	/* Type/tenv.scm 460 */
											{	/* Type/tenv.scm 464 */
												obj_t BgL_zc3z04anonymousza31519ze3z87_1910;

												BgL_zc3z04anonymousza31519ze3z87_1910 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31519ze3ze5zztype_envz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31519ze3z87_1910,
													(int) (((long) 0)), BgL_utz00_1526);
												BGl_withzd2exceptionzd2handlerz00zz__errorz00
													(BGl_errorzd2notifyzd2envz00zz__errorz00,
													BgL_zc3z04anonymousza31519ze3z87_1910);
											}
											{	/* Type/tenv.scm 473 */
												obj_t BgL_arg1573z00_1548;

												BgL_arg1573z00_1548 = CDR(((obj_t) BgL_utz00_1526));
												{
													obj_t BgL_utz00_2544;

													BgL_utz00_2544 = BgL_arg1573z00_1548;
													BgL_utz00_1526 = BgL_utz00_2544;
													goto BgL_zc3z04anonymousza31494ze3z87_1527;
												}
											}
										}
									else
										{	/* Type/tenv.scm 478 */
											obj_t BgL_zc3z04anonymousza31576ze3z87_1911;

											BgL_zc3z04anonymousza31576ze3z87_1911 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31576ze3ze5zztype_envz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31576ze3z87_1911,
												(int) (((long) 0)), BgL_utz00_1526);
											BGl_withzd2exceptionzd2handlerz00zz__errorz00
												(BGl_errorzd2notifyzd2envz00zz__errorz00,
												BgL_zc3z04anonymousza31576ze3z87_1911);
					}}}}
				else
					{	/* Type/tenv.scm 451 */
						BFALSE;
					}
				return (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00 =
					((bool_t) 1), BUNSPEC);
			}
		}

	}



/* &check-types */
	obj_t BGl_z62checkzd2typeszb0zztype_envz00(obj_t BgL_envz00_1912)
	{
		{	/* Type/tenv.scm 449 */
			return BGl_checkzd2typeszd2zztype_envz00();
		}

	}



/* &<@anonymous:1519> */
	obj_t BGl_z62zc3z04anonymousza31519ze3ze5zztype_envz00(obj_t BgL_envz00_1913)
	{
		{	/* Type/tenv.scm 463 */
			{	/* Type/tenv.scm 464 */
				obj_t BgL_utz00_1914;

				BgL_utz00_1914 = PROCEDURE_REF(BgL_envz00_1913, (int) (((long) 0)));
				if (CBOOL(
						(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										CAR(
											((obj_t) BgL_utz00_1914)))))->BgL_importzd2locationzd2)))
					{	/* Type/tenv.scm 465 */
						obj_t BgL_arg1528z00_2003;
						obj_t BgL_arg1536z00_2004;

						BgL_arg1528z00_2003 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										CAR(((obj_t) BgL_utz00_1914)))))->BgL_importzd2locationzd2);
						{	/* Type/tenv.scm 468 */
							obj_t BgL_arg1552z00_2005;

							BgL_arg1552z00_2005 = CAR(((obj_t) BgL_utz00_1914));
							BgL_arg1536z00_2004 =
								BGl_shapez00zztools_shapez00(BgL_arg1552z00_2005);
						}
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00
							(BgL_arg1528z00_2003, BGl_za2moduleza2z00zzmodule_modulez00,
							BGl_string1761z00zztype_envz00, BgL_arg1536z00_2004, BNIL);
					}
				else
					{	/* Type/tenv.scm 469 */
						obj_t BgL_arg1553z00_2006;
						obj_t BgL_arg1558z00_2007;

						BgL_arg1553z00_2006 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										CAR(((obj_t) BgL_utz00_1914)))))->BgL_locationz00);
						{	/* Type/tenv.scm 472 */
							obj_t BgL_arg1564z00_2008;

							BgL_arg1564z00_2008 = CAR(((obj_t) BgL_utz00_1914));
							BgL_arg1558z00_2007 =
								BGl_shapez00zztools_shapez00(BgL_arg1564z00_2008);
						}
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00
							(BgL_arg1553z00_2006, BGl_za2moduleza2z00zzmodule_modulez00,
							BGl_string1762z00zztype_envz00, BgL_arg1558z00_2007, BNIL);
					}
			}
		}

	}



/* &<@anonymous:1576> */
	obj_t BGl_z62zc3z04anonymousza31576ze3ze5zztype_envz00(obj_t BgL_envz00_1915)
	{
		{	/* Type/tenv.scm 477 */
			{	/* Type/tenv.scm 478 */
				obj_t BgL_utz00_1916;

				BgL_utz00_1916 = PROCEDURE_REF(BgL_envz00_1915, (int) (((long) 0)));
				{	/* Type/tenv.scm 478 */
					obj_t BgL_arg1578z00_2009;

					{	/* Type/tenv.scm 478 */
						obj_t BgL_arg1582z00_2010;

						BgL_arg1582z00_2010 = CAR(((obj_t) BgL_utz00_1916));
						BgL_arg1578z00_2009 =
							BGl_shapez00zztools_shapez00(BgL_arg1582z00_2010);
					}
					return
						BGl_errorz00zz__errorz00(BGl_za2moduleza2z00zzmodule_modulez00,
						BGl_string1763z00zztype_envz00, BgL_arg1578z00_2009);
				}
			}
		}

	}



/* sub-type? */
	BGL_EXPORTED_DEF bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt
		BgL_minorz00_52, BgL_typez00_bglt BgL_majorz00_53)
	{
		{	/* Type/tenv.scm 486 */
			if ((((obj_t) BgL_minorz00_52) == ((obj_t) BgL_majorz00_53)))
				{	/* Type/tenv.scm 488 */
					return ((bool_t) 1);
				}
			else
				{	/* Type/tenv.scm 488 */
					return
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_majorz00_53),
							(((BgL_typez00_bglt) COBJECT(BgL_minorz00_52))->BgL_parentsz00)));
				}
		}

	}



/* &sub-type? */
	obj_t BGl_z62subzd2typezf3z43zztype_envz00(obj_t BgL_envz00_1919,
		obj_t BgL_minorz00_1920, obj_t BgL_majorz00_1921)
	{
		{	/* Type/tenv.scm 486 */
			return
				BBOOL(BGl_subzd2typezf3z21zztype_envz00(
					((BgL_typez00_bglt) BgL_minorz00_1920),
					((BgL_typez00_bglt) BgL_majorz00_1921)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_envz00()
	{
		{	/* Type/tenv.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 458694990),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 508385180),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 42743827),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 93940891),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 410404681),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
			return
				BGl_modulezd2initializa7ationz75zztvector_accessz00(((long) 189470641),
				BSTRING_TO_STRING(BGl_string1764z00zztype_envz00));
		}

	}

#ifdef __cplusplus
}
#endif
