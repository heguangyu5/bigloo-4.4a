/*===========================================================================*/
/*   (BackEnd/jvm.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/jvm.scm) */
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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_lightzd2funcallszd2;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;


	static obj_t BGl_jvmasdumpz00zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2ppzd2widthza2zd2zz__ppz00;
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	BGL_IMPORT bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_zc3z04exitza31760ze3ze70z60zzbackend_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzbackend_jvmz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_jasnamez00zzbackend_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_za2ppzd2caseza2zd2zz__ppz00;
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	static obj_t BGl_addsuffixz00zzbackend_jvmz00(obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzbackend_jvmz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_jvmz00();
	extern obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	extern obj_t BGl_findzd2mainzd2zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	extern obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62startzd2jvmzd2emissionz12z70zzbackend_jvmz00(obj_t);
	extern obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00;
	static obj_t BGl_z62buildzd2jvmzd2backendz62zzbackend_jvmz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31705ze3ze5zzbackend_jvmz00(obj_t);
	static obj_t BGl_z62backendzd2linkzd2objects1490z62zzbackend_jvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_jvmz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31708ze3ze5zzbackend_jvmz00(obj_t);
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	static obj_t BGl_jvmzd2filenamezd2zzbackend_jvmz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	static obj_t BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 = BUNSPEC;
	extern obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_jvmz00 = BUNSPEC;
	extern obj_t BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(obj_t);
	extern obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_jvmz00();
	static obj_t BGl_z62zc3z04anonymousza31769ze3ze5zzbackend_jvmz00(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_jvmz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_emitze70ze7zzbackend_jvmz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31698ze3ze5zzbackend_jvmz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00();
	extern obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jvmz00zzbackend_jvm_classz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2cnstzd2tablezd2n1488zb0zzbackend_jvmz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	static obj_t BGl_jvmzd2dirnamezd2zzbackend_jvmz00(obj_t);
	extern obj_t BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
	static obj_t BGl_cnstzd2initzd2zzbackend_jvmz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvmz00();
	static obj_t BGl_z62backendzd2compilezd2jvm1483z62zzbackend_jvmz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t bgl_directoryp(char *);
	extern obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	static obj_t BGl_z62backendzd2subtypezf3zd2jvm1494z91zzbackend_jvmz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_iszd2subtypezf3z21zztype_typeofz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2linkzd2jvm1485z62zzbackend_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_z62zc3z04anonymousza31826ze3ze5zzbackend_jvmz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31770ze3ze5zzbackend_jvmz00(obj_t);
	static obj_t BGl_z62backendzd2checkzd2inline1492z62zzbackend_jvmz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzbackend_jvmz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31771ze3ze5zzbackend_jvmz00(obj_t);
	static obj_t __cnst[21];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_buildzd2jvmzd2backendzd2envzd2zzbackend_jvmz00,
		BgL_bgl_za762buildza7d2jvmza7d2122za7,
		BGl_z62buildzd2jvmzd2backendz62zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2082z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2com2123z00,
		BGl_z62backendzd2compilezd2jvm1483z62zzbackend_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2084z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2lin2124z00,
		BGl_z62backendzd2linkzd2jvm1485z62zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2086z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2cns2125z00,
		BGl_z62backendzd2cnstzd2tablezd2n1488zb0zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2088z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2lin2126z00,
		BGl_z62backendzd2linkzd2objects1490z62zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2090z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2che2127z00,
		BGl_z62backendzd2checkzd2inline1492z62zzbackend_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2092z00zzbackend_jvmz00,
		BgL_bgl_za762backendza7d2sub2128z00,
		BGl_z62backendzd2subtypezf3zd2jvm1494z91zzbackend_jvmz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00;
	extern obj_t BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2107z00zzbackend_jvmz00,
		BgL_bgl_za762za7c3za704anonymo2129za7,
		BGl_z62zc3z04anonymousza31698ze3ze5zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzbackend_jvmz00,
		BgL_bgl_za762za7c3za704anonymo2130za7,
		BGl_z62zc3z04anonymousza31705ze3ze5zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzbackend_jvmz00,
		BgL_bgl_za762za7c3za704anonymo2131za7,
		BGl_z62zc3z04anonymousza31708ze3ze5zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2066z00zzbackend_jvmz00,
		BgL_bgl_string2066za700za7za7b2132za7, ".", 1);
	      DEFINE_STRING(BGl_string2067z00zzbackend_jvmz00,
		BgL_bgl_string2067za700za7za7b2133za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2068z00zzbackend_jvmz00,
		BgL_bgl_string2068za700za7za7b2134za7, "jheap", 5);
	      DEFINE_STRING(BGl_string2069z00zzbackend_jvmz00,
		BgL_bgl_string2069za700za7za7b2135za7, "", 0);
	      DEFINE_STRING(BGl_string2070z00zzbackend_jvmz00,
		BgL_bgl_string2070za700za7za7b2136za7, "'.", 2);
	      DEFINE_STRING(BGl_string2071z00zzbackend_jvmz00,
		BgL_bgl_string2071za700za7za7b2137za7, "', class path is `", 18);
	      DEFINE_STRING(BGl_string2072z00zzbackend_jvmz00,
		BgL_bgl_string2072za700za7za7b2138za7, " is `", 5);
	      DEFINE_STRING(BGl_string2073z00zzbackend_jvmz00,
		BgL_bgl_string2073za700za7za7b2139za7, "Package name for module ", 24);
	      DEFINE_STRING(BGl_string2074z00zzbackend_jvmz00,
		BgL_bgl_string2074za700za7za7b2140za7,
		"Incompatible package name and class path.", 41);
	      DEFINE_STRING(BGl_string2075z00zzbackend_jvmz00,
		BgL_bgl_string2075za700za7za7b2141za7, ".jast", 5);
	      DEFINE_STRING(BGl_string2076z00zzbackend_jvmz00,
		BgL_bgl_string2076za700za7za7b2142za7, ".jas", 4);
	      DEFINE_STRING(BGl_string2077z00zzbackend_jvmz00,
		BgL_bgl_string2077za700za7za7b2143za7, ".class", 6);
	      DEFINE_STRING(BGl_string2078z00zzbackend_jvmz00,
		BgL_bgl_string2078za700za7za7b2144za7, "start-jvm-emission!", 19);
	      DEFINE_STRING(BGl_string2079z00zzbackend_jvmz00,
		BgL_bgl_string2079za700za7za7b2145za7,
		"Can't write dest file because directory doesn't exist", 53);
	      DEFINE_STRING(BGl_string2080z00zzbackend_jvmz00,
		BgL_bgl_string2080za700za7za7b2146za7, "JVMMAIN", 7);
	      DEFINE_STRING(BGl_string2081z00zzbackend_jvmz00,
		BgL_bgl_string2081za700za7za7b2147za7, ".bgl", 4);
	      DEFINE_STRING(BGl_string2083z00zzbackend_jvmz00,
		BgL_bgl_string2083za700za7za7b2148za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string2085z00zzbackend_jvmz00,
		BgL_bgl_string2085za700za7za7b2149za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string2087z00zzbackend_jvmz00,
		BgL_bgl_string2087za700za7za7b2150za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string2089z00zzbackend_jvmz00,
		BgL_bgl_string2089za700za7za7b2151za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string2091z00zzbackend_jvmz00,
		BgL_bgl_string2091za700za7za7b2152za7, "backend-check-inlines", 21);
	      DEFINE_STRING(BGl_string2093z00zzbackend_jvmz00,
		BgL_bgl_string2093za700za7za7b2153za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string2094z00zzbackend_jvmz00,
		BgL_bgl_string2094za700za7za7b2154za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2095z00zzbackend_jvmz00,
		BgL_bgl_string2095za700za7za7b2155za7, "No source file found", 20);
	      DEFINE_STRING(BGl_string2096z00zzbackend_jvmz00,
		BgL_bgl_string2096za700za7za7b2156za7, "link", 4);
	      DEFINE_STRING(BGl_string2097z00zzbackend_jvmz00,
		BgL_bgl_string2097za700za7za7b2157za7, "\"", 1);
	      DEFINE_STRING(BGl_string2098z00zzbackend_jvmz00,
		BgL_bgl_string2098za700za7za7b2158za7, "Illegal file", 12);
	      DEFINE_STRING(BGl_string2099z00zzbackend_jvmz00,
		BgL_bgl_string2099za700za7za7b2159za7, "__cnst", 6);
	extern obj_t BGl_backendzd2compilezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2envz00zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_startzd2jvmzd2emissionz12zd2envzc0zzbackend_jvmz00,
		BgL_bgl_za762startza7d2jvmza7d2160za7,
		BGl_z62startzd2jvmzd2emissionz12z70zzbackend_jvmz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string2100z00zzbackend_jvmz00,
		BgL_bgl_string2100za700za7za7b2161za7, "Jvm", 3);
	      DEFINE_STRING(BGl_string2101z00zzbackend_jvmz00,
		BgL_bgl_string2101za700za7za7b2162za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2102z00zzbackend_jvmz00,
		BgL_bgl_string2102za700za7za7b2163za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2103z00zzbackend_jvmz00,
		BgL_bgl_string2103za700za7za7b2164za7, "]", 1);
	      DEFINE_STRING(BGl_string2104z00zzbackend_jvmz00,
		BgL_bgl_string2104za700za7za7b2165za7, " qualified type name: ", 22);
	      DEFINE_STRING(BGl_string2105z00zzbackend_jvmz00,
		BgL_bgl_string2105za700za7za7b2166za7, "      [module: ", 15);
	      DEFINE_STRING(BGl_string2106z00zzbackend_jvmz00,
		BgL_bgl_string2106za700za7za7b2167za7, "a.class", 7);
	      DEFINE_STRING(BGl_string2110z00zzbackend_jvmz00,
		BgL_bgl_string2110za700za7za7b2168za7, "/", 1);
	      DEFINE_STRING(BGl_string2111z00zzbackend_jvmz00,
		BgL_bgl_string2111za700za7za7b2169za7, "/a.class", 8);
	      DEFINE_STRING(BGl_string2112z00zzbackend_jvmz00,
		BgL_bgl_string2112za700za7za7b2170za7, "\n", 1);
	      DEFINE_STRING(BGl_string2113z00zzbackend_jvmz00,
		BgL_bgl_string2113za700za7za7b2171za7, "        class: ", 15);
	      DEFINE_STRING(BGl_string2114z00zzbackend_jvmz00,
		BgL_bgl_string2114za700za7za7b2172za7, "jvm-dump", 8);
	      DEFINE_STRING(BGl_string2115z00zzbackend_jvmz00,
		BgL_bgl_string2115za700za7za7b2173za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string2116z00zzbackend_jvmz00,
		BgL_bgl_string2116za700za7za7b2174za7, "backend_jvm", 11);
	      DEFINE_STRING(BGl_string2117z00zzbackend_jvmz00,
		BgL_bgl_string2117za700za7za7b2175za7,
		"done cc (ld distrib) pass-started (start-jvm-emission!) module eval library java.lang.Object object ld class jvmas jast lower unamed (jvm) (java) native bigloo-jvm jvm ",
		168);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_jvmz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long
		BgL_checksumz00_3222, char *BgL_fromz00_3223)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_jvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_jvmz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_jvmz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00();
					BGl_cnstzd2initzd2zzbackend_jvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_jvmz00();
					BGl_methodzd2initzd2zzbackend_jvmz00();
					return BGl_toplevelzd2initzd2zzbackend_jvmz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_jvm");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			{	/* BackEnd/jvm.scm 15 */
				obj_t BgL_cportz00_3066;

				{	/* BackEnd/jvm.scm 15 */
					obj_t BgL_stringz00_3074;

					BgL_stringz00_3074 = BGl_string2117z00zzbackend_jvmz00;
					{	/* BackEnd/jvm.scm 15 */
						obj_t BgL_startz00_3075;

						BgL_startz00_3075 = BINT(((long) 0));
						{	/* BackEnd/jvm.scm 15 */
							obj_t BgL_endz00_3076;

							BgL_endz00_3076 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3074)));
							{	/* BackEnd/jvm.scm 15 */

								BgL_cportz00_3066 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3074, BgL_startz00_3075, BgL_endz00_3076);
				}}}}
				{
					long BgL_iz00_3067;

					BgL_iz00_3067 = ((long) 20);
				BgL_loopz00_3068:
					if ((BgL_iz00_3067 == ((long) -1)))
						{	/* BackEnd/jvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/jvm.scm 15 */
							{	/* BackEnd/jvm.scm 15 */
								obj_t BgL_arg2119z00_3070;

								{	/* BackEnd/jvm.scm 15 */

									{	/* BackEnd/jvm.scm 15 */
										obj_t BgL_locationz00_3072;

										BgL_locationz00_3072 = BBOOL(((bool_t) 0));
										{	/* BackEnd/jvm.scm 15 */

											BgL_arg2119z00_3070 =
												BGl_readz00zz__readerz00(BgL_cportz00_3066,
												BgL_locationz00_3072);
										}
									}
								}
								{	/* BackEnd/jvm.scm 15 */
									int BgL_tmpz00_3255;

									BgL_tmpz00_3255 = (int) (BgL_iz00_3067);
									CNST_TABLE_SET(BgL_tmpz00_3255, BgL_arg2119z00_3070);
							}}
							{	/* BackEnd/jvm.scm 15 */
								int BgL_auxz00_3073;

								BgL_auxz00_3073 = (int) ((BgL_iz00_3067 - ((long) 1)));
								{
									long BgL_iz00_3260;

									BgL_iz00_3260 = (long) (BgL_auxz00_3073);
									BgL_iz00_3067 = BgL_iz00_3260;
									goto BgL_loopz00_3068;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						0)), BGl_buildzd2jvmzd2backendzd2envzd2zzbackend_jvmz00);
			BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
				BGl_string2066z00zzbackend_jvmz00;
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzbackend_jvmz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1902;

				BgL_headz00_1902 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1903;
					obj_t BgL_tailz00_1904;

					BgL_prevz00_1903 = BgL_headz00_1902;
					BgL_tailz00_1904 = BgL_l1z00_1;
				BgL_loopz00_1905:
					if (PAIRP(BgL_tailz00_1904))
						{
							obj_t BgL_newzd2prevzd2_1907;

							BgL_newzd2prevzd2_1907 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1904), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1903, BgL_newzd2prevzd2_1907);
							{
								obj_t BgL_tailz00_3272;
								obj_t BgL_prevz00_3271;

								BgL_prevz00_3271 = BgL_newzd2prevzd2_1907;
								BgL_tailz00_3272 = CDR(BgL_tailz00_1904);
								BgL_tailz00_1904 = BgL_tailz00_3272;
								BgL_prevz00_1903 = BgL_prevz00_3271;
								goto BgL_loopz00_1905;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1902);
				}
			}
		}

	}



/* &build-jvm-backend */
	obj_t BGl_z62buildzd2jvmzd2backendz62zzbackend_jvmz00(obj_t BgL_envz00_2994)
	{
		{	/* BackEnd/jvm.scm 52 */
			{
				BgL_jvmz00_bglt BgL_auxz00_3275;

				{	/* BackEnd/jvm.scm 53 */
					BgL_jvmz00_bglt BgL_new1112z00_3079;

					{	/* BackEnd/jvm.scm 54 */
						BgL_jvmz00_bglt BgL_new1111z00_3080;

						BgL_new1111z00_3080 =
							((BgL_jvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jvmz00_bgl))));
						{	/* BackEnd/jvm.scm 54 */
							long BgL_arg1521z00_3081;

							{	/* BackEnd/jvm.scm 54 */
								long BgL_res1971z00_3082;

								BgL_res1971z00_3082 =
									BGL_CLASS_INDEX(BGl_jvmz00zzbackend_jvm_classz00);
								BgL_arg1521z00_3081 = BgL_res1971z00_3082;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1111z00_3080),
								BgL_arg1521z00_3081);
						}
						BgL_new1112z00_3079 = BgL_new1111z00_3080;
					}
					((((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_new1112z00_3079)))->
							BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_srfi0z00) =
						((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_namez00) =
						((obj_t) BGl_string2067z00zzbackend_jvmz00), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_externzd2variableszd2) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_externzd2functionszd2) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_externzd2typeszd2) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_variablesz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_functionsz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_typesz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_typedz00) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_heapzd2suffixzd2) =
						((obj_t) BGl_string2068z00zzbackend_jvmz00), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_heapzd2compatiblezd2) =
						((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_callccz00) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_qualifiedzd2typeszd2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_effectzb2zb2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_removezd2emptyzd2letz00) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_foreignzd2closurezd2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_typedzd2eqzd2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_tracezd2supportzd2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_foreignzd2clausezd2supportz00) =
						((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_debugzd2supportzd2) =
						((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_pragmazd2supportzd2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_tvectorzd2descrzd2supportz00) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_requirezd2tailczd2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_registersz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_pregistersz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_boundzd2checkzd2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_typezd2checkzd2) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1112z00_3079)))->BgL_typedzd2funcallzd2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_qnamez00) =
						((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_classesz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->
							BgL_currentzd2classzd2) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->
							BgL_declarationsz00) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_fieldsz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_methodsz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->
							BgL_currentzd2methodzd2) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_codez00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->
							BgL_lightzd2funcallszd2) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1112z00_3079))->BgL_inlinez00) =
						((obj_t) BTRUE), BUNSPEC);
					{	/* BackEnd/jvm.scm 53 */
						obj_t BgL_fun1519z00_3083;

						BgL_fun1519z00_3083 =
							BGl_classzd2constructorzd2zz__objectz00
							(BGl_jvmz00zzbackend_jvm_classz00);
						PROCEDURE_ENTRY(BgL_fun1519z00_3083) (BgL_fun1519z00_3083,
							((obj_t) BgL_new1112z00_3079), BEOA);
					}
					BgL_auxz00_3275 = BgL_new1112z00_3079;
				}
				return ((obj_t) BgL_auxz00_3275);
			}
		}

	}



/* jvm-check-package */
	obj_t BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00(obj_t BgL_modulez00_4,
		obj_t BgL_pathz00_5)
	{
		{	/* BackEnd/jvm.scm 127 */
			{
				obj_t BgL_basez00_1931;
				obj_t BgL_pathz00_1932;

				{	/* BackEnd/jvm.scm 144 */
					obj_t BgL_qtypez00_1915;

					BgL_qtypez00_1915 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_modulez00_4);
					{	/* BackEnd/jvm.scm 144 */
						obj_t BgL_basez00_1916;

						{	/* BackEnd/jvm.scm 145 */
							obj_t BgL_prez00_1928;

							BgL_prez00_1928 = BGl_prefixz00zz__osz00(BgL_qtypez00_1915);
							{	/* BackEnd/jvm.scm 147 */
								bool_t BgL_test2179z00_3363;

								{	/* BackEnd/jvm.scm 147 */
									bool_t BgL_res1988z00_2766;

									{	/* BackEnd/jvm.scm 147 */
										long BgL_l1z00_2753;

										BgL_l1z00_2753 = STRING_LENGTH(BgL_prez00_1928);
										if ((BgL_l1z00_2753 == ((long) 0)))
											{	/* BackEnd/jvm.scm 147 */
												int BgL_arg1267z00_2756;

												{	/* BackEnd/jvm.scm 147 */
													char *BgL_auxz00_3369;
													char *BgL_tmpz00_3367;

													BgL_auxz00_3369 =
														BSTRING_TO_STRING
														(BGl_string2069z00zzbackend_jvmz00);
													BgL_tmpz00_3367 = BSTRING_TO_STRING(BgL_prez00_1928);
													BgL_arg1267z00_2756 =
														memcmp(BgL_tmpz00_3367, BgL_auxz00_3369,
														BgL_l1z00_2753);
												}
												BgL_res1988z00_2766 =
													((long) (BgL_arg1267z00_2756) == ((long) 0));
											}
										else
											{	/* BackEnd/jvm.scm 147 */
												BgL_res1988z00_2766 = ((bool_t) 0);
											}
									}
									BgL_test2179z00_3363 = BgL_res1988z00_2766;
								}
								if (BgL_test2179z00_3363)
									{	/* BackEnd/jvm.scm 147 */
										BgL_basez00_1916 = BGl_string2066z00zzbackend_jvmz00;
									}
								else
									{	/* BackEnd/jvm.scm 149 */
										bool_t BgL_test2181z00_3374;

										{	/* BackEnd/jvm.scm 149 */
											bool_t BgL_res1993z00_2782;

											{	/* BackEnd/jvm.scm 149 */
												long BgL_l1z00_2769;

												BgL_l1z00_2769 = STRING_LENGTH(BgL_prez00_1928);
												if (
													(BgL_l1z00_2769 == STRING_LENGTH(BgL_qtypez00_1915)))
													{	/* BackEnd/jvm.scm 149 */
														int BgL_arg1267z00_2772;

														{	/* BackEnd/jvm.scm 149 */
															char *BgL_auxz00_3381;
															char *BgL_tmpz00_3379;

															BgL_auxz00_3381 =
																BSTRING_TO_STRING(BgL_qtypez00_1915);
															BgL_tmpz00_3379 =
																BSTRING_TO_STRING(BgL_prez00_1928);
															BgL_arg1267z00_2772 =
																memcmp(BgL_tmpz00_3379, BgL_auxz00_3381,
																BgL_l1z00_2769);
														}
														BgL_res1993z00_2782 =
															((long) (BgL_arg1267z00_2772) == ((long) 0));
													}
												else
													{	/* BackEnd/jvm.scm 149 */
														BgL_res1993z00_2782 = ((bool_t) 0);
													}
											}
											BgL_test2181z00_3374 = BgL_res1993z00_2782;
										}
										if (BgL_test2181z00_3374)
											{	/* BackEnd/jvm.scm 149 */
												BgL_basez00_1916 = BGl_string2066z00zzbackend_jvmz00;
											}
										else
											{	/* BackEnd/jvm.scm 149 */
												BgL_basez00_1916 = BgL_prez00_1928;
											}
									}
							}
						}
						{	/* BackEnd/jvm.scm 145 */

							{	/* BackEnd/jvm.scm 153 */
								bool_t BgL_test2183z00_3386;

								BgL_basez00_1931 =
									BGl_jvmzd2filenamezd2zzbackend_jvmz00(BgL_basez00_1916);
								BgL_pathz00_1932 = BgL_pathz00_5;
								{	/* BackEnd/jvm.scm 129 */
									long BgL_lbasez00_1934;
									long BgL_lpathz00_1935;

									BgL_lbasez00_1934 = STRING_LENGTH(BgL_basez00_1931);
									BgL_lpathz00_1935 = STRING_LENGTH(BgL_pathz00_1932);
									if ((BgL_lpathz00_1935 < BgL_lbasez00_1934))
										{	/* BackEnd/jvm.scm 131 */
											BgL_test2183z00_3386 = ((bool_t) 0);
										}
									else
										{
											long BgL_rpathz00_1940;
											long BgL_rbasez00_1941;

											BgL_rpathz00_1940 = (BgL_lpathz00_1935 - ((long) 1));
											BgL_rbasez00_1941 = (BgL_lbasez00_1934 - ((long) 1));
										BgL_zc3z04anonymousza31570ze3z87_1942:
											if ((BgL_rbasez00_1941 == ((long) -1)))
												{	/* BackEnd/jvm.scm 135 */
													BgL_test2183z00_3386 = ((bool_t) 1);
												}
											else
												{	/* BackEnd/jvm.scm 137 */
													unsigned char BgL_cbasez00_1944;
													unsigned char BgL_cpathz00_1945;

													BgL_cbasez00_1944 =
														STRING_REF(BgL_basez00_1931, BgL_rbasez00_1941);
													BgL_cpathz00_1945 =
														STRING_REF(BgL_pathz00_1932, BgL_rpathz00_1940);
													{	/* BackEnd/jvm.scm 139 */
														bool_t BgL_test2186z00_3395;

														if ((BgL_cbasez00_1944 == BgL_cpathz00_1945))
															{	/* BackEnd/jvm.scm 139 */
																BgL_test2186z00_3395 = ((bool_t) 1);
															}
														else
															{	/* BackEnd/jvm.scm 139 */
																if (
																	(BgL_cpathz00_1945 == ((unsigned char) '/')))
																	{	/* BackEnd/jvm.scm 140 */
																		BgL_test2186z00_3395 =
																			(BgL_cbasez00_1944 ==
																			((unsigned char) '.'));
																	}
																else
																	{	/* BackEnd/jvm.scm 140 */
																		BgL_test2186z00_3395 = ((bool_t) 0);
																	}
															}
														if (BgL_test2186z00_3395)
															{
																long BgL_rbasez00_3403;
																long BgL_rpathz00_3401;

																BgL_rpathz00_3401 =
																	(BgL_rpathz00_1940 - ((long) 1));
																BgL_rbasez00_3403 =
																	(BgL_rbasez00_1941 - ((long) 1));
																BgL_rbasez00_1941 = BgL_rbasez00_3403;
																BgL_rpathz00_1940 = BgL_rpathz00_3401;
																goto BgL_zc3z04anonymousza31570ze3z87_1942;
															}
														else
															{	/* BackEnd/jvm.scm 139 */
																BgL_test2183z00_3386 = ((bool_t) 0);
															}
													}
												}
										}
								}
								if (BgL_test2183z00_3386)
									{	/* BackEnd/jvm.scm 153 */
										return BFALSE;
									}
								else
									{	/* BackEnd/jvm.scm 154 */
										obj_t BgL_list1530z00_1919;

										{	/* BackEnd/jvm.scm 154 */
											obj_t BgL_arg1536z00_1920;

											{	/* BackEnd/jvm.scm 154 */
												obj_t BgL_arg1537z00_1921;

												{	/* BackEnd/jvm.scm 154 */
													obj_t BgL_arg1540z00_1922;

													{	/* BackEnd/jvm.scm 154 */
														obj_t BgL_arg1552z00_1923;

														{	/* BackEnd/jvm.scm 154 */
															obj_t BgL_arg1558z00_1924;

															{	/* BackEnd/jvm.scm 154 */
																obj_t BgL_arg1561z00_1925;

																{	/* BackEnd/jvm.scm 154 */
																	obj_t BgL_arg1564z00_1926;

																	BgL_arg1564z00_1926 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2070z00zzbackend_jvmz00, BNIL);
																	BgL_arg1561z00_1925 =
																		MAKE_YOUNG_PAIR(BgL_pathz00_5,
																		BgL_arg1564z00_1926);
																}
																BgL_arg1558z00_1924 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2071z00zzbackend_jvmz00,
																	BgL_arg1561z00_1925);
															}
															BgL_arg1552z00_1923 =
																MAKE_YOUNG_PAIR(BgL_basez00_1916,
																BgL_arg1558z00_1924);
														}
														BgL_arg1540z00_1922 =
															MAKE_YOUNG_PAIR(BGl_string2072z00zzbackend_jvmz00,
															BgL_arg1552z00_1923);
													}
													BgL_arg1537z00_1921 =
														MAKE_YOUNG_PAIR
														(BGl_za2moduleza2z00zzmodule_modulez00,
														BgL_arg1540z00_1922);
												}
												BgL_arg1536z00_1920 =
													MAKE_YOUNG_PAIR(BGl_string2073z00zzbackend_jvmz00,
													BgL_arg1537z00_1921);
											}
											BgL_list1530z00_1919 =
												MAKE_YOUNG_PAIR(BGl_string2074z00zzbackend_jvmz00,
												BgL_arg1536z00_1920);
										}
										return BGl_warningz00zz__errorz00(BgL_list1530z00_1919);
									}
							}
						}
					}
				}
			}
		}

	}



/* jvmasdump */
	obj_t BGl_jvmasdumpz00zzbackend_jvmz00(obj_t BgL_classfilez00_6,
		obj_t BgL_portz00_7)
	{
		{	/* BackEnd/jvm.scm 160 */
			{	/* BackEnd/jvm.scm 161 */
				obj_t BgL_owz00_1955;
				obj_t BgL_ocz00_1956;

				BgL_owz00_1955 = BGl_za2ppzd2widthza2zd2zz__ppz00;
				BgL_ocz00_1956 = BGl_za2ppzd2caseza2zd2zz__ppz00;
				BGl_za2ppzd2widthza2zd2zz__ppz00 = BINT(((long) 10240));
				BGl_za2ppzd2caseza2zd2zz__ppz00 = CNST_TABLE_REF(((long) 6));
				{	/* BackEnd/jvm.scm 164 */
					obj_t BgL_list1579z00_1957;

					BgL_list1579z00_1957 = MAKE_YOUNG_PAIR(BgL_portz00_7, BNIL);
					BGl_ppz00zz__ppz00(BgL_classfilez00_6, BgL_list1579z00_1957);
				}
				BGl_za2ppzd2caseza2zd2zz__ppz00 = BgL_ocz00_1956;
				return (BGl_za2ppzd2widthza2zd2zz__ppz00 = BgL_owz00_1955, BUNSPEC);
			}
		}

	}



/* addsuffix */
	obj_t BGl_addsuffixz00zzbackend_jvmz00(obj_t BgL_namez00_8)
	{
		{	/* BackEnd/jvm.scm 168 */
			{	/* BackEnd/jvm.scm 170 */
				obj_t BgL_arg1582z00_1958;

				{	/* BackEnd/jvm.scm 170 */
					obj_t BgL_casezd2valuezd2_1959;

					BgL_casezd2valuezd2_1959 = BGl_za2passza2z00zzengine_paramz00;
					if ((BgL_casezd2valuezd2_1959 == CNST_TABLE_REF(((long) 7))))
						{	/* BackEnd/jvm.scm 170 */
							BgL_arg1582z00_1958 = BGl_string2075z00zzbackend_jvmz00;
						}
					else
						{	/* BackEnd/jvm.scm 170 */
							if ((BgL_casezd2valuezd2_1959 == CNST_TABLE_REF(((long) 8))))
								{	/* BackEnd/jvm.scm 170 */
									BgL_arg1582z00_1958 = BGl_string2076z00zzbackend_jvmz00;
								}
							else
								{	/* BackEnd/jvm.scm 170 */
									BgL_arg1582z00_1958 = BGl_string2077z00zzbackend_jvmz00;
								}
						}
				}
				return string_append(BgL_namez00_8, BgL_arg1582z00_1958);
			}
		}

	}



/* jasname */
	obj_t BGl_jasnamez00zzbackend_jvmz00(obj_t BgL_cfz00_9)
	{
		{	/* BackEnd/jvm.scm 178 */
			if (PAIRP(BgL_cfz00_9))
				{	/* BackEnd/jvm.scm 179 */
					obj_t BgL_carzd2139zd2_1966;

					BgL_carzd2139zd2_1966 = CAR(BgL_cfz00_9);
					if (PAIRP(BgL_carzd2139zd2_1966))
						{	/* BackEnd/jvm.scm 179 */
							obj_t BgL_cdrzd2143zd2_1968;

							BgL_cdrzd2143zd2_1968 = CDR(BgL_carzd2139zd2_1966);
							if ((CAR(BgL_carzd2139zd2_1966) == CNST_TABLE_REF(((long) 9))))
								{	/* BackEnd/jvm.scm 179 */
									if (PAIRP(BgL_cdrzd2143zd2_1968))
										{	/* BackEnd/jvm.scm 179 */
											if (NULLP(CDR(BgL_cdrzd2143zd2_1968)))
												{	/* BackEnd/jvm.scm 179 */
													obj_t BgL_arg1597z00_1974;

													BgL_arg1597z00_1974 = CAR(BgL_cdrzd2143zd2_1968);
													{	/* BackEnd/jvm.scm 181 */
														obj_t BgL_arg1605z00_2796;

														{	/* BackEnd/jvm.scm 181 */
															obj_t BgL_res1999z00_2799;

															{	/* BackEnd/jvm.scm 181 */
																obj_t BgL_arg1466z00_2798;

																BgL_arg1466z00_2798 =
																	SYMBOL_TO_STRING(
																	((obj_t) BgL_arg1597z00_1974));
																BgL_res1999z00_2799 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_2798);
															}
															BgL_arg1605z00_2796 = BgL_res1999z00_2799;
														}
														return
															BGl_addsuffixz00zzbackend_jvmz00
															(BgL_arg1605z00_2796);
													}
												}
											else
												{	/* BackEnd/jvm.scm 179 */
													return BFALSE;
												}
										}
									else
										{	/* BackEnd/jvm.scm 179 */
											return BFALSE;
										}
								}
							else
								{	/* BackEnd/jvm.scm 179 */
									return BFALSE;
								}
						}
					else
						{	/* BackEnd/jvm.scm 179 */
							return BFALSE;
						}
				}
			else
				{	/* BackEnd/jvm.scm 179 */
					return BFALSE;
				}
		}

	}



/* jvm-filename */
	obj_t BGl_jvmzd2filenamezd2zzbackend_jvmz00(obj_t BgL_namez00_10)
	{
		{	/* BackEnd/jvm.scm 186 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* BackEnd/jvm.scm 188 */
					bool_t BgL_test2197z00_3450;

					{	/* BackEnd/jvm.scm 188 */
						bool_t BgL_res2005z00_2817;

						{	/* BackEnd/jvm.scm 188 */
							long BgL_l1z00_2804;

							BgL_l1z00_2804 = STRING_LENGTH(BgL_namez00_10);
							if ((BgL_l1z00_2804 == ((long) 1)))
								{	/* BackEnd/jvm.scm 188 */
									int BgL_arg1267z00_2807;

									{	/* BackEnd/jvm.scm 188 */
										char *BgL_auxz00_3456;
										char *BgL_tmpz00_3454;

										BgL_auxz00_3456 =
											BSTRING_TO_STRING(BGl_string2066z00zzbackend_jvmz00);
										BgL_tmpz00_3454 = BSTRING_TO_STRING(BgL_namez00_10);
										BgL_arg1267z00_2807 =
											memcmp(BgL_tmpz00_3454, BgL_auxz00_3456, BgL_l1z00_2804);
									}
									BgL_res2005z00_2817 =
										((long) (BgL_arg1267z00_2807) == ((long) 0));
								}
							else
								{	/* BackEnd/jvm.scm 188 */
									BgL_res2005z00_2817 = ((bool_t) 0);
								}
						}
						BgL_test2197z00_3450 = BgL_res2005z00_2817;
					}
					if (BgL_test2197z00_3450)
						{	/* BackEnd/jvm.scm 188 */
							return BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
						}
					else
						{	/* BackEnd/jvm.scm 188 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00, BgL_namez00_10);
						}
				}
			else
				{	/* BackEnd/jvm.scm 187 */
					return BgL_namez00_10;
				}
		}

	}



/* jvm-dirname */
	obj_t BGl_jvmzd2dirnamezd2zzbackend_jvmz00(obj_t BgL_filez00_11)
	{
		{	/* BackEnd/jvm.scm 196 */
			{	/* BackEnd/jvm.scm 197 */
				obj_t BgL_dfilez00_1980;

				BgL_dfilez00_1980 = BGl_dirnamez00zz__osz00(BgL_filez00_11);
				{	/* BackEnd/jvm.scm 197 */
					obj_t BgL_dirz00_1981;

					BgL_dirz00_1981 =
						BGl_jvmzd2filenamezd2zzbackend_jvmz00(BgL_dfilez00_1980);
					{	/* BackEnd/jvm.scm 198 */

						{	/* BackEnd/jvm.scm 199 */
							bool_t BgL_test2199z00_3464;

							{	/* BackEnd/jvm.scm 199 */
								bool_t BgL_test2200z00_3465;

								{	/* BackEnd/jvm.scm 199 */
									bool_t BgL_res2010z00_2833;

									{	/* BackEnd/jvm.scm 199 */
										long BgL_l1z00_2820;

										BgL_l1z00_2820 = STRING_LENGTH(BgL_dfilez00_1980);
										if ((BgL_l1z00_2820 == ((long) 0)))
											{	/* BackEnd/jvm.scm 199 */
												int BgL_arg1267z00_2823;

												{	/* BackEnd/jvm.scm 199 */
													char *BgL_auxz00_3471;
													char *BgL_tmpz00_3469;

													BgL_auxz00_3471 =
														BSTRING_TO_STRING
														(BGl_string2069z00zzbackend_jvmz00);
													BgL_tmpz00_3469 =
														BSTRING_TO_STRING(BgL_dfilez00_1980);
													BgL_arg1267z00_2823 =
														memcmp(BgL_tmpz00_3469, BgL_auxz00_3471,
														BgL_l1z00_2820);
												}
												BgL_res2010z00_2833 =
													((long) (BgL_arg1267z00_2823) == ((long) 0));
											}
										else
											{	/* BackEnd/jvm.scm 199 */
												BgL_res2010z00_2833 = ((bool_t) 0);
											}
									}
									BgL_test2200z00_3465 = BgL_res2010z00_2833;
								}
								if (BgL_test2200z00_3465)
									{	/* BackEnd/jvm.scm 199 */
										BgL_test2199z00_3464 = ((bool_t) 0);
									}
								else
									{	/* BackEnd/jvm.scm 199 */
										if (bgl_directoryp(BSTRING_TO_STRING(BgL_dfilez00_1980)))
											{	/* BackEnd/jvm.scm 200 */
												BgL_test2199z00_3464 = ((bool_t) 0);
											}
										else
											{	/* BackEnd/jvm.scm 200 */
												if (fexists(BSTRING_TO_STRING(BgL_dfilez00_1980)))
													{	/* BackEnd/jvm.scm 201 */
														BgL_test2199z00_3464 = ((bool_t) 0);
													}
												else
													{	/* BackEnd/jvm.scm 202 */
														bool_t BgL__ortest_1136z00_1991;

														if (STRINGP
															(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
															{	/* BackEnd/jvm.scm 202 */
																BgL__ortest_1136z00_1991 = ((bool_t) 0);
															}
														else
															{	/* BackEnd/jvm.scm 202 */
																BgL__ortest_1136z00_1991 = ((bool_t) 1);
															}
														if (BgL__ortest_1136z00_1991)
															{	/* BackEnd/jvm.scm 202 */
																BgL_test2199z00_3464 = BgL__ortest_1136z00_1991;
															}
														else
															{	/* BackEnd/jvm.scm 202 */
																BgL_test2199z00_3464 =
																	bgl_directoryp(BSTRING_TO_STRING
																	(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00));
															}
													}
											}
									}
							}
							if (BgL_test2199z00_3464)
								{	/* BackEnd/jvm.scm 199 */
									BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
										(BgL_dirz00_1981);
								}
							else
								{	/* BackEnd/jvm.scm 199 */
									((bool_t) 0);
								}
						}
						return BgL_dirz00_1981;
					}
				}
			}
		}

	}



/* &start-jvm-emission! */
	obj_t BGl_z62startzd2jvmzd2emissionz12z70zzbackend_jvmz00(obj_t
		BgL_envz00_2995)
	{
		{	/* BackEnd/jvm.scm 211 */
			if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
				{	/* BackEnd/jvm.scm 214 */
					obj_t BgL_dnamez00_3087;

					BgL_dnamez00_3087 =
						BGl_dirnamez00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
					{	/* BackEnd/jvm.scm 215 */
						bool_t BgL_test2207z00_3491;

						{	/* BackEnd/jvm.scm 215 */
							bool_t BgL_res2020z00_3088;

							{	/* BackEnd/jvm.scm 215 */
								long BgL_l1z00_3089;

								BgL_l1z00_3089 = STRING_LENGTH(BgL_dnamez00_3087);
								if ((BgL_l1z00_3089 == ((long) 0)))
									{	/* BackEnd/jvm.scm 215 */
										int BgL_arg1267z00_3090;

										{	/* BackEnd/jvm.scm 215 */
											char *BgL_auxz00_3497;
											char *BgL_tmpz00_3495;

											BgL_auxz00_3497 =
												BSTRING_TO_STRING(BGl_string2069z00zzbackend_jvmz00);
											BgL_tmpz00_3495 = BSTRING_TO_STRING(BgL_dnamez00_3087);
											BgL_arg1267z00_3090 =
												memcmp(BgL_tmpz00_3495, BgL_auxz00_3497,
												BgL_l1z00_3089);
										}
										BgL_res2020z00_3088 =
											((long) (BgL_arg1267z00_3090) == ((long) 0));
									}
								else
									{	/* BackEnd/jvm.scm 215 */
										BgL_res2020z00_3088 = ((bool_t) 0);
									}
							}
							BgL_test2207z00_3491 = BgL_res2020z00_3088;
						}
						if (BgL_test2207z00_3491)
							{	/* BackEnd/jvm.scm 215 */
								BFALSE;
							}
						else
							{	/* BackEnd/jvm.scm 215 */
								BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
									BGl_jvmzd2dirnamezd2zzbackend_jvmz00
									(BGl_za2destza2z00zzengine_paramz00);
							}
					}
				}
			else
				{	/* BackEnd/jvm.scm 213 */
					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 10))))
						{	/* BackEnd/jvm.scm 217 */
							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/jvm.scm 218 */
									BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
										BGl_jvmzd2dirnamezd2zzbackend_jvmz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* BackEnd/jvm.scm 218 */
									BFALSE;
								}
						}
					else
						{	/* BackEnd/jvm.scm 217 */
							BFALSE;
						}
				}
			{	/* BackEnd/jvm.scm 220 */
				bool_t BgL_test2211z00_3510;

				if (fexists(BSTRING_TO_STRING
						(BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00)))
					{	/* BackEnd/jvm.scm 220 */
						BgL_test2211z00_3510 =
							bgl_directoryp(BSTRING_TO_STRING
							(BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00));
					}
				else
					{	/* BackEnd/jvm.scm 220 */
						BgL_test2211z00_3510 = ((bool_t) 0);
					}
				if (BgL_test2211z00_3510)
					{	/* BackEnd/jvm.scm 220 */
						return BTRUE;
					}
				else
					{	/* BackEnd/jvm.scm 220 */
						return
							BGl_errorz00zz__errorz00(BGl_string2078z00zzbackend_jvmz00,
							BGl_string2079z00zzbackend_jvmz00,
							BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00);
					}
			}
		}

	}



/* make-tmp-file-name */
	obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 255 */
			return
				string_append(BGl_string2080z00zzbackend_jvmz00,
				BGl_string2081z00zzbackend_jvmz00);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2082z00zzbackend_jvmz00,
				BGl_string2083z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2084z00zzbackend_jvmz00,
				BGl_string2085z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2086z00zzbackend_jvmz00,
				BGl_string2087z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2088z00zzbackend_jvmz00,
				BGl_string2089z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2090z00zzbackend_jvmz00,
				BGl_string2091z00zzbackend_jvmz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2092z00zzbackend_jvmz00,
				BGl_string2093z00zzbackend_jvmz00);
		}

	}



/* &backend-subtype?-jvm1494 */
	obj_t BGl_z62backendzd2subtypezf3zd2jvm1494z91zzbackend_jvmz00(obj_t
		BgL_envz00_3010, obj_t BgL_bz00_3011, obj_t BgL_t1z00_3012,
		obj_t BgL_t2z00_3013)
	{
		{	/* BackEnd/jvm.scm 367 */
			{	/* BackEnd/jvm.scm 368 */
				bool_t BgL__ortest_1145z00_3092;

				BgL__ortest_1145z00_3092 = (BgL_t1z00_3012 == BgL_t2z00_3013);
				if (BgL__ortest_1145z00_3092)
					{	/* BackEnd/jvm.scm 368 */
						return BBOOL(BgL__ortest_1145z00_3092);
					}
				else
					{	/* BackEnd/jvm.scm 369 */
						bool_t BgL__ortest_1146z00_3093;

						BgL__ortest_1146z00_3093 =
							(
							(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_t1z00_3012)))->BgL_idz00) ==
							(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_t2z00_3013)))->BgL_idz00));
						if (BgL__ortest_1146z00_3093)
							{	/* BackEnd/jvm.scm 369 */
								return BBOOL(BgL__ortest_1146z00_3093);
							}
						else
							{	/* BackEnd/jvm.scm 370 */
								bool_t BgL__ortest_1147z00_3094;

								if (BGl_isazf3zf3zz__objectz00(BgL_t1z00_3012,
										BGl_tclassz00zzobject_classz00))
									{	/* BackEnd/jvm.scm 370 */
										BgL__ortest_1147z00_3094 =
											(
											(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_t2z00_3013)))->BgL_idz00) ==
											CNST_TABLE_REF(((long) 11)));
									}
								else
									{	/* BackEnd/jvm.scm 370 */
										BgL__ortest_1147z00_3094 = ((bool_t) 0);
									}
								if (BgL__ortest_1147z00_3094)
									{	/* BackEnd/jvm.scm 370 */
										return BBOOL(BgL__ortest_1147z00_3094);
									}
								else
									{	/* BackEnd/jvm.scm 371 */
										bool_t BgL__ortest_1148z00_3095;

										BgL__ortest_1148z00_3095 =
											(
											(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_t2z00_3013)))->
												BgL_namez00) == CNST_TABLE_REF(((long) 12)));
										if (BgL__ortest_1148z00_3095)
											{	/* BackEnd/jvm.scm 371 */
												return BBOOL(BgL__ortest_1148z00_3095);
											}
										else
											{	/* BackEnd/jvm.scm 372 */
												bool_t BgL__ortest_1149z00_3096;

												BgL__ortest_1149z00_3096 =
													(
													(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_t1z00_3012)))->
														BgL_namez00) ==
													(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
																	BgL_t2z00_3013)))->BgL_namez00));
												if (BgL__ortest_1149z00_3096)
													{	/* BackEnd/jvm.scm 372 */
														return BBOOL(BgL__ortest_1149z00_3096);
													}
												else
													{	/* BackEnd/jvm.scm 373 */
														obj_t BgL__ortest_1150z00_3097;

														BgL__ortest_1150z00_3097 =
															BGl_iszd2subtypezf3z21zztype_typeofz00
															(BgL_t1z00_3012, BgL_t2z00_3013);
														if (CBOOL(BgL__ortest_1150z00_3097))
															{	/* BackEnd/jvm.scm 373 */
																return BgL__ortest_1150z00_3097;
															}
														else
															{	/* BackEnd/jvm.scm 373 */
																return
																	BBOOL(BGl_subzd2typezf3z21zztype_envz00(
																		((BgL_typez00_bglt) BgL_t1z00_3012),
																		((BgL_typez00_bglt) BgL_t2z00_3013)));
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* &backend-check-inline1492 */
	obj_t BGl_z62backendzd2checkzd2inline1492z62zzbackend_jvmz00(obj_t
		BgL_envz00_3014, obj_t BgL_mez00_3015)
	{
		{	/* BackEnd/jvm.scm 361 */
			if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
				{	/* BackEnd/jvm.scm 362 */
					return BFALSE;
				}
			else
				{	/* BackEnd/jvm.scm 362 */
					return BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
				}
		}

	}



/* &backend-link-objects1490 */
	obj_t BGl_z62backendzd2linkzd2objects1490z62zzbackend_jvmz00(obj_t
		BgL_envz00_3016, obj_t BgL_mez00_3017, obj_t BgL_sourcesz00_3018)
	{
		{	/* BackEnd/jvm.scm 261 */
			if (NULLP(BgL_sourcesz00_3018))
				{	/* BackEnd/jvm.scm 266 */
					obj_t BgL_firstz00_3100;

					BgL_firstz00_3100 =
						BGl_prefixz00zz__osz00(CAR
						(BGl_za2ozd2filesza2zd2zzengine_paramz00));
					{	/* BackEnd/jvm.scm 267 */
						obj_t BgL_list1775z00_3101;

						{	/* BackEnd/jvm.scm 267 */
							obj_t BgL_arg1778z00_3102;

							{	/* BackEnd/jvm.scm 267 */
								obj_t BgL_arg1779z00_3103;

								{	/* BackEnd/jvm.scm 267 */
									obj_t BgL_arg1782z00_3104;

									BgL_arg1782z00_3104 =
										MAKE_YOUNG_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00,
										BNIL);
									BgL_arg1779z00_3103 =
										MAKE_YOUNG_PAIR(BGl_string2094z00zzbackend_jvmz00,
										BgL_arg1782z00_3104);
								}
								BgL_arg1778z00_3102 =
									MAKE_YOUNG_PAIR(BGl_string2095z00zzbackend_jvmz00,
									BgL_arg1779z00_3103);
							}
							BgL_list1775z00_3101 =
								MAKE_YOUNG_PAIR(BGl_string2096z00zzbackend_jvmz00,
								BgL_arg1778z00_3102);
						}
						BGl_warningz00zz__errorz00(BgL_list1775z00_3101);
					}
					BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
					BGl_readzd2jfilezd2zzread_jvmz00();
					return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BFALSE);
				}
			else
				{
					obj_t BgL_sourcesz00_3106;
					obj_t BgL_clsz00_3107;
					obj_t BgL_mainzd2modulezd2_3108;
					obj_t BgL_mainz00_3109;
					obj_t BgL_fmainz00_3110;
					obj_t BgL_librariesz00_3111;

					BgL_sourcesz00_3106 = BgL_sourcesz00_3018;
					BgL_clsz00_3107 = BNIL;
					BgL_mainzd2modulezd2_3108 = BFALSE;
					BgL_mainz00_3109 = BFALSE;
					BgL_fmainz00_3110 = BGl_string2069z00zzbackend_jvmz00;
					BgL_librariesz00_3111 = BNIL;
				BgL_loopz00_3105:
					if (NULLP(BgL_sourcesz00_3106))
						{	/* BackEnd/jvm.scm 278 */
							if (CBOOL(BgL_mainz00_3109))
								{	/* BackEnd/jvm.scm 282 */
									obj_t BgL_firstz00_3112;

									BgL_firstz00_3112 =
										BGl_prefixz00zz__osz00(CAR
										(BGl_za2ozd2filesza2zd2zzengine_paramz00));
									{
										obj_t BgL_l1480z00_3114;

										BgL_l1480z00_3114 = BgL_librariesz00_3111;
									BgL_zc3z04anonymousza31787ze3z87_3113:
										if (PAIRP(BgL_l1480z00_3114))
											{	/* BackEnd/jvm.scm 285 */
												{	/* BackEnd/jvm.scm 286 */
													obj_t BgL_libz00_3115;

													BgL_libz00_3115 = CAR(BgL_l1480z00_3114);
													{
														obj_t BgL_clausesz00_3121;
														obj_t BgL_libsz00_3118;

														if (PAIRP(BgL_libz00_3115))
															{	/* BackEnd/jvm.scm 286 */
																if (
																	(CAR(BgL_libz00_3115) ==
																		CNST_TABLE_REF(((long) 13))))
																	{	/* BackEnd/jvm.scm 286 */
																		BgL_libsz00_3118 = CDR(BgL_libz00_3115);
																		{
																			obj_t BgL_l1471z00_3120;

																			BgL_l1471z00_3120 = BgL_libsz00_3118;
																		BgL_zc3z04anonymousza31810ze3z87_3119:
																			if (PAIRP(BgL_l1471z00_3120))
																				{	/* BackEnd/jvm.scm 288 */
																					BGl_usezd2libraryz12zc0zzmodule_alibraryz00
																						(CAR(BgL_l1471z00_3120));
																					{
																						obj_t BgL_l1471z00_3596;

																						BgL_l1471z00_3596 =
																							CDR(BgL_l1471z00_3120);
																						BgL_l1471z00_3120 =
																							BgL_l1471z00_3596;
																						goto
																							BgL_zc3z04anonymousza31810ze3z87_3119;
																					}
																				}
																			else
																				{	/* BackEnd/jvm.scm 288 */
																					((bool_t) 1);
																				}
																		}
																	}
																else
																	{	/* BackEnd/jvm.scm 286 */
																		if (
																			(CAR(BgL_libz00_3115) ==
																				CNST_TABLE_REF(((long) 14))))
																			{	/* BackEnd/jvm.scm 286 */
																				BgL_clausesz00_3121 =
																					CDR(BgL_libz00_3115);
																				{	/* BackEnd/jvm.scm 290 */
																					obj_t BgL_fun1479z00_3122;

																					{	/* BackEnd/jvm.scm 290 */
																						obj_t
																							BgL_zc3z04anonymousza31826ze3z87_3123;
																						{	/* BackEnd/jvm.scm 286 */
																							int BgL_tmpz00_3603;

																							BgL_tmpz00_3603 =
																								(int) (((long) 0));
																							BgL_zc3z04anonymousza31826ze3z87_3123
																								=
																								MAKE_EL_PROCEDURE
																								(BgL_tmpz00_3603);
																						}
																						BgL_fun1479z00_3122 =
																							BgL_zc3z04anonymousza31826ze3z87_3123;
																					}
																					{
																						obj_t BgL_l1477z00_3125;

																						BgL_l1477z00_3125 =
																							BgL_clausesz00_3121;
																					BgL_zc3z04anonymousza31822ze3z87_3124:
																						if (PAIRP
																							(BgL_l1477z00_3125))
																							{	/* BackEnd/jvm.scm 290 */
																								{	/* BackEnd/jvm.scm 290 */
																									obj_t BgL_arg1824z00_3126;

																									BgL_arg1824z00_3126 =
																										CAR(BgL_l1477z00_3125);
																									BGl_z62zc3z04anonymousza31826ze3ze5zzbackend_jvmz00
																										(BgL_fun1479z00_3122,
																										BgL_arg1824z00_3126);
																								}
																								{
																									obj_t BgL_l1477z00_3613;

																									BgL_l1477z00_3613 =
																										CDR(BgL_l1477z00_3125);
																									BgL_l1477z00_3125 =
																										BgL_l1477z00_3613;
																									goto
																										BgL_zc3z04anonymousza31822ze3z87_3124;
																								}
																							}
																						else
																							{	/* BackEnd/jvm.scm 290 */
																								((bool_t) 1);
																							}
																					}
																				}
																			}
																		else
																			{	/* BackEnd/jvm.scm 286 */
																				((bool_t) 0);
																			}
																	}
															}
														else
															{	/* BackEnd/jvm.scm 286 */
																((bool_t) 0);
															}
													}
												}
												{
													obj_t BgL_l1480z00_3616;

													BgL_l1480z00_3616 = CDR(BgL_l1480z00_3114);
													BgL_l1480z00_3114 = BgL_l1480z00_3616;
													goto BgL_zc3z04anonymousza31787ze3z87_3113;
												}
											}
										else
											{	/* BackEnd/jvm.scm 285 */
												((bool_t) 1);
											}
									}
									BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
									{	/* BackEnd/jvm.scm 298 */
										obj_t BgL_list1843z00_3127;

										BgL_list1843z00_3127 =
											MAKE_YOUNG_PAIR(BgL_fmainz00_3110, BNIL);
										BGl_za2srczd2filesza2zd2zzengine_paramz00 =
											BgL_list1843z00_3127;
									}
									BGl_readzd2jfilezd2zzread_jvmz00();
									return
										BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BgL_mainzd2modulezd2_3108);
								}
							else
								{	/* BackEnd/jvm.scm 301 */
									obj_t BgL_tmpz00_3128;

									BgL_tmpz00_3128 =
										BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00();
									BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_tmpz00_3128,
										CBOOL(BgL_mainz00_3109),
										bstring_to_symbol(BGl_string2080z00zzbackend_jvmz00),
										BgL_clsz00_3107, BgL_librariesz00_3111);
									{	/* BackEnd/jvm.scm 303 */
										obj_t BgL_list1847z00_3129;

										BgL_list1847z00_3129 =
											MAKE_YOUNG_PAIR(BgL_tmpz00_3128, BNIL);
										BGl_za2srczd2filesza2zd2zzengine_paramz00 =
											BgL_list1847z00_3129;
									}
									{
										obj_t BgL_raz00_3131;
										obj_t BgL_resz00_3132;

										BgL_raz00_3131 = BGl_za2restzd2argsza2zd2zzengine_paramz00;
										BgL_resz00_3132 = BNIL;
									BgL_liipz00_3130:
										if (NULLP(BgL_raz00_3131))
											{	/* BackEnd/jvm.scm 309 */
												BGl_za2restzd2argsza2zd2zzengine_paramz00 =
													bgl_reverse_bang(BgL_resz00_3132);
											}
										else
											{	/* BackEnd/jvm.scm 311 */
												bool_t BgL_test2231z00_3630;

												{	/* BackEnd/jvm.scm 311 */
													obj_t BgL_arg1858z00_3133;

													{	/* BackEnd/jvm.scm 311 */
														obj_t BgL_arg1859z00_3134;

														BgL_arg1859z00_3134 = CAR(((obj_t) BgL_raz00_3131));
														BgL_arg1858z00_3133 =
															BGl_suffixz00zz__osz00(BgL_arg1859z00_3134);
													}
													BgL_test2231z00_3630 =
														CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1858z00_3133,
															BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
												}
												if (BgL_test2231z00_3630)
													{	/* BackEnd/jvm.scm 312 */
														obj_t BgL_arg1853z00_3135;

														BgL_arg1853z00_3135 = CDR(((obj_t) BgL_raz00_3131));
														{
															obj_t BgL_raz00_3638;

															BgL_raz00_3638 = BgL_arg1853z00_3135;
															BgL_raz00_3131 = BgL_raz00_3638;
															goto BgL_liipz00_3130;
														}
													}
												else
													{	/* BackEnd/jvm.scm 314 */
														obj_t BgL_arg1855z00_3136;
														obj_t BgL_arg1856z00_3137;

														BgL_arg1855z00_3136 = CDR(((obj_t) BgL_raz00_3131));
														{	/* BackEnd/jvm.scm 314 */
															obj_t BgL_arg1857z00_3138;

															BgL_arg1857z00_3138 =
																CAR(((obj_t) BgL_raz00_3131));
															BgL_arg1856z00_3137 =
																MAKE_YOUNG_PAIR(BgL_arg1857z00_3138,
																BgL_resz00_3132);
														}
														{
															obj_t BgL_resz00_3645;
															obj_t BgL_raz00_3644;

															BgL_raz00_3644 = BgL_arg1855z00_3136;
															BgL_resz00_3645 = BgL_arg1856z00_3137;
															BgL_resz00_3132 = BgL_resz00_3645;
															BgL_raz00_3131 = BgL_raz00_3644;
															goto BgL_liipz00_3130;
														}
													}
											}
									}
									{	/* BackEnd/jvm.scm 315 */
										obj_t BgL_exitd1141z00_3139;

										BgL_exitd1141z00_3139 = BGL_EXITD_TOP_AS_OBJ();
										{	/* BackEnd/jvm.scm 318 */
											obj_t BgL_zc3z04anonymousza31860ze3z87_3140;

											BgL_zc3z04anonymousza31860ze3z87_3140 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31860ze3ze5zzbackend_jvmz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31860ze3z87_3140,
												(int) (((long) 0)), BgL_tmpz00_3128);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1141z00_3139,
												BgL_zc3z04anonymousza31860ze3z87_3140);
											{	/* BackEnd/jvm.scm 316 */
												obj_t BgL_tmp1143z00_3141;

												BgL_tmp1143z00_3141 =
													BGl_compilerz00zzengine_compilerz00();
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1141z00_3139);
												BGl_z62zc3z04anonymousza31860ze3ze5zzbackend_jvmz00
													(BgL_zc3z04anonymousza31860ze3z87_3140);
												BgL_tmp1143z00_3141;
									}}}
									return BINT(((long) 0));
						}}
					else
						{	/* BackEnd/jvm.scm 324 */
							obj_t BgL_portz00_3142;

							{	/* BackEnd/jvm.scm 324 */
								obj_t BgL_arg1896z00_3143;

								{	/* BackEnd/jvm.scm 324 */
									obj_t BgL_pairz00_3144;

									BgL_pairz00_3144 = CAR(((obj_t) BgL_sourcesz00_3106));
									BgL_arg1896z00_3143 = CAR(BgL_pairz00_3144);
								}
								{	/* BackEnd/jvm.scm 324 */

									BgL_portz00_3142 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_arg1896z00_3143, BTRUE, BINT(((long) 5000000)));
							}}
							if (INPUT_PORTP(BgL_portz00_3142))
								{	/* BackEnd/jvm.scm 327 */
									obj_t BgL_expz00_3145;

									{	/* BackEnd/jvm.scm 327 */
										obj_t BgL_list1894z00_3146;

										BgL_list1894z00_3146 =
											MAKE_YOUNG_PAIR(BgL_portz00_3142, BNIL);
										BgL_expz00_3145 =
											BGl_compilerzd2readzd2zzread_readerz00
											(BgL_list1894z00_3146);
									}
									bgl_close_input_port(BgL_portz00_3142);
									{
										obj_t BgL_namez00_3149;

										if (PAIRP(BgL_expz00_3145))
											{	/* BackEnd/jvm.scm 329 */
												obj_t BgL_cdrzd2177zd2_3175;

												BgL_cdrzd2177zd2_3175 = CDR(BgL_expz00_3145);
												if (
													(CAR(BgL_expz00_3145) == CNST_TABLE_REF(((long) 15))))
													{	/* BackEnd/jvm.scm 329 */
														if (PAIRP(BgL_cdrzd2177zd2_3175))
															{	/* BackEnd/jvm.scm 329 */
																BgL_namez00_3149 = CAR(BgL_cdrzd2177zd2_3175);
																{	/* BackEnd/jvm.scm 331 */
																	obj_t BgL_libsz00_3150;
																	obj_t BgL_nmainz00_3151;

																	{	/* BackEnd/jvm.scm 331 */
																		obj_t BgL_arg1891z00_3152;

																		{	/* BackEnd/jvm.scm 331 */
																			obj_t BgL_pairz00_3153;

																			BgL_pairz00_3153 =
																				CDR(((obj_t) BgL_expz00_3145));
																			BgL_arg1891z00_3152 =
																				CDR(BgL_pairz00_3153);
																		}
																		BgL_libsz00_3150 =
																			BGl_findzd2librarieszd2zzengine_linkz00
																			(BgL_arg1891z00_3152);
																	}
																	{	/* BackEnd/jvm.scm 332 */
																		obj_t BgL_arg1892z00_3154;

																		{	/* BackEnd/jvm.scm 332 */
																			obj_t BgL_pairz00_3155;

																			BgL_pairz00_3155 =
																				CDR(((obj_t) BgL_expz00_3145));
																			BgL_arg1892z00_3154 =
																				CDR(BgL_pairz00_3155);
																		}
																		BgL_nmainz00_3151 =
																			BGl_findzd2mainzd2zzengine_linkz00
																			(BgL_arg1892z00_3154);
																	}
																	{	/* BackEnd/jvm.scm 336 */
																		obj_t BgL_arg1871z00_3156;

																		{	/* BackEnd/jvm.scm 336 */
																			obj_t BgL_arg1873z00_3157;

																			{	/* BackEnd/jvm.scm 336 */
																				obj_t BgL_arg1876z00_3158;

																				{	/* BackEnd/jvm.scm 336 */
																					obj_t BgL_arg1877z00_3159;

																					{	/* BackEnd/jvm.scm 336 */
																						obj_t BgL_pairz00_3160;

																						BgL_pairz00_3160 =
																							CAR(
																							((obj_t) BgL_sourcesz00_3106));
																						BgL_arg1877z00_3159 =
																							CDR(BgL_pairz00_3160);
																					}
																					BgL_arg1876z00_3158 =
																						BGl_prefixz00zz__osz00
																						(BgL_arg1877z00_3159);
																				}
																				BgL_arg1873z00_3157 =
																					BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
																					(BgL_arg1876z00_3158);
																			}
																			BgL_arg1871z00_3156 =
																				BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																				(BgL_arg1873z00_3157, FILE_SEPARATOR,
																				(char) (((unsigned char) '.')));
																		}
																		BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																			(BgL_namez00_3149, BgL_arg1871z00_3156,
																			BNIL);
																	}
																	{	/* BackEnd/jvm.scm 339 */
																		obj_t BgL_arg1878z00_3161;
																		obj_t BgL_arg1879z00_3162;
																		obj_t BgL_arg1881z00_3163;
																		obj_t BgL_arg1882z00_3164;
																		obj_t BgL_arg1883z00_3165;
																		obj_t BgL_arg1884z00_3166;

																		BgL_arg1878z00_3161 =
																			CDR(((obj_t) BgL_sourcesz00_3106));
																		{	/* BackEnd/jvm.scm 342 */
																			obj_t BgL_arg1885z00_3167;

																			{	/* BackEnd/jvm.scm 342 */
																				obj_t BgL_arg1886z00_3168;

																				{	/* BackEnd/jvm.scm 342 */
																					obj_t BgL_arg1889z00_3169;

																					{	/* BackEnd/jvm.scm 342 */
																						obj_t BgL_pairz00_3170;

																						BgL_pairz00_3170 =
																							CAR(
																							((obj_t) BgL_sourcesz00_3106));
																						BgL_arg1889z00_3169 =
																							CAR(BgL_pairz00_3170);
																					}
																					BgL_arg1886z00_3168 =
																						string_append_3
																						(BGl_string2097z00zzbackend_jvmz00,
																						BgL_arg1889z00_3169,
																						BGl_string2097z00zzbackend_jvmz00);
																				}
																				{	/* BackEnd/jvm.scm 340 */
																					obj_t BgL_list1887z00_3171;

																					{	/* BackEnd/jvm.scm 340 */
																						obj_t BgL_arg1888z00_3172;

																						BgL_arg1888z00_3172 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1886z00_3168, BNIL);
																						BgL_list1887z00_3171 =
																							MAKE_YOUNG_PAIR(BgL_namez00_3149,
																							BgL_arg1888z00_3172);
																					}
																					BgL_arg1885z00_3167 =
																						BgL_list1887z00_3171;
																			}}
																			BgL_arg1879z00_3162 =
																				MAKE_YOUNG_PAIR(BgL_arg1885z00_3167,
																				BgL_clsz00_3107);
																		}
																		if (CBOOL(BgL_nmainz00_3151))
																			{	/* BackEnd/jvm.scm 344 */
																				BgL_arg1881z00_3163 = BgL_namez00_3149;
																			}
																		else
																			{	/* BackEnd/jvm.scm 344 */
																				BgL_arg1881z00_3163 =
																					BgL_mainzd2modulezd2_3108;
																			}
																		if (CBOOL(BgL_nmainz00_3151))
																			{	/* BackEnd/jvm.scm 345 */
																				BgL_arg1882z00_3164 = BgL_nmainz00_3151;
																			}
																		else
																			{	/* BackEnd/jvm.scm 345 */
																				BgL_arg1882z00_3164 = BgL_mainz00_3109;
																			}
																		if (CBOOL(BgL_nmainz00_3151))
																			{	/* BackEnd/jvm.scm 346 */
																				obj_t BgL_pairz00_3173;

																				BgL_pairz00_3173 =
																					CAR(((obj_t) BgL_sourcesz00_3106));
																				BgL_arg1883z00_3165 =
																					CAR(BgL_pairz00_3173);
																			}
																		else
																			{	/* BackEnd/jvm.scm 346 */
																				BgL_arg1883z00_3165 = BgL_fmainz00_3110;
																			}
																		BgL_arg1884z00_3166 =
																			BGl_appendzd221011zd2zzbackend_jvmz00
																			(BgL_libsz00_3150, BgL_librariesz00_3111);
																		{
																			obj_t BgL_librariesz00_3716;
																			obj_t BgL_fmainz00_3715;
																			obj_t BgL_mainz00_3714;
																			obj_t BgL_mainzd2modulezd2_3713;
																			obj_t BgL_clsz00_3712;
																			obj_t BgL_sourcesz00_3711;

																			BgL_sourcesz00_3711 = BgL_arg1878z00_3161;
																			BgL_clsz00_3712 = BgL_arg1879z00_3162;
																			BgL_mainzd2modulezd2_3713 =
																				BgL_arg1881z00_3163;
																			BgL_mainz00_3714 = BgL_arg1882z00_3164;
																			BgL_fmainz00_3715 = BgL_arg1883z00_3165;
																			BgL_librariesz00_3716 =
																				BgL_arg1884z00_3166;
																			BgL_librariesz00_3111 =
																				BgL_librariesz00_3716;
																			BgL_fmainz00_3110 = BgL_fmainz00_3715;
																			BgL_mainz00_3109 = BgL_mainz00_3714;
																			BgL_mainzd2modulezd2_3108 =
																				BgL_mainzd2modulezd2_3713;
																			BgL_clsz00_3107 = BgL_clsz00_3712;
																			BgL_sourcesz00_3106 = BgL_sourcesz00_3711;
																			goto BgL_loopz00_3105;
																		}
																	}
																}
															}
														else
															{	/* BackEnd/jvm.scm 329 */
															BgL_tagzd2172zd2_3148:
																{	/* BackEnd/jvm.scm 351 */
																	obj_t BgL_arg1893z00_3174;

																	BgL_arg1893z00_3174 =
																		CDR(((obj_t) BgL_sourcesz00_3106));
																	{
																		obj_t BgL_sourcesz00_3720;

																		BgL_sourcesz00_3720 = BgL_arg1893z00_3174;
																		BgL_sourcesz00_3106 = BgL_sourcesz00_3720;
																		goto BgL_loopz00_3105;
																	}
																}
															}
													}
												else
													{	/* BackEnd/jvm.scm 329 */
														goto BgL_tagzd2172zd2_3148;
													}
											}
										else
											{	/* BackEnd/jvm.scm 329 */
												goto BgL_tagzd2172zd2_3148;
											}
									}
								}
							else
								{	/* BackEnd/jvm.scm 326 */
									obj_t BgL_arg1895z00_3176;

									{	/* BackEnd/jvm.scm 326 */
										obj_t BgL_pairz00_3177;

										BgL_pairz00_3177 = CAR(((obj_t) BgL_sourcesz00_3106));
										BgL_arg1895z00_3176 = CAR(BgL_pairz00_3177);
									}
									return
										BGl_errorz00zz__errorz00(BGl_string2069z00zzbackend_jvmz00,
										BGl_string2098z00zzbackend_jvmz00, BgL_arg1895z00_3176);
								}
						}
				}
		}

	}



/* &<@anonymous:1826> */
	bool_t BGl_z62zc3z04anonymousza31826ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3019, obj_t BgL_ezd2165zd2_3020)
	{
		{	/* BackEnd/jvm.scm 290 */
			{
				obj_t BgL_libsz00_3179;

				if (PAIRP(BgL_ezd2165zd2_3020))
					{	/* BackEnd/jvm.scm 290 */
						if ((CAR(BgL_ezd2165zd2_3020) == CNST_TABLE_REF(((long) 13))))
							{	/* BackEnd/jvm.scm 290 */
								BgL_libsz00_3179 = CDR(BgL_ezd2165zd2_3020);
								{
									obj_t BgL_l1473z00_3181;

									BgL_l1473z00_3181 = BgL_libsz00_3179;
								BgL_zc3z04anonymousza31832ze3z87_3180:
									if (PAIRP(BgL_l1473z00_3181))
										{	/* BackEnd/jvm.scm 292 */
											BGl_usezd2libraryz12zc0zzmodule_alibraryz00(CAR
												(BgL_l1473z00_3181));
											{
												obj_t BgL_l1473z00_3735;

												BgL_l1473z00_3735 = CDR(BgL_l1473z00_3181);
												BgL_l1473z00_3181 = BgL_l1473z00_3735;
												goto BgL_zc3z04anonymousza31832ze3z87_3180;
											}
										}
									else
										{	/* BackEnd/jvm.scm 292 */
											((bool_t) 1);
										}
								}
								{
									obj_t BgL_l1475z00_3183;

									BgL_l1475z00_3183 = BgL_libsz00_3179;
								BgL_zc3z04anonymousza31837ze3z87_3182:
									if (PAIRP(BgL_l1475z00_3183))
										{	/* BackEnd/jvm.scm 293 */
											BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(CAR
												(BgL_l1475z00_3183));
											{
												obj_t BgL_l1475z00_3741;

												BgL_l1475z00_3741 = CDR(BgL_l1475z00_3183);
												BgL_l1475z00_3183 = BgL_l1475z00_3741;
												goto BgL_zc3z04anonymousza31837ze3z87_3182;
											}
										}
									else
										{	/* BackEnd/jvm.scm 293 */
											return ((bool_t) 1);
										}
								}
							}
						else
							{	/* BackEnd/jvm.scm 290 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* BackEnd/jvm.scm 290 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &<@anonymous:1860> */
	obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3021)
	{
		{	/* BackEnd/jvm.scm 315 */
			{	/* BackEnd/jvm.scm 318 */
				obj_t BgL_tmpz00_3022;

				BgL_tmpz00_3022 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3021, (int) (((long) 0))));
				{	/* BackEnd/jvm.scm 318 */
					bool_t BgL_tmpz00_3747;

					BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
					{	/* BackEnd/jvm.scm 319 */
						obj_t BgL_prez00_3184;

						BgL_prez00_3184 = BGl_prefixz00zz__osz00(BgL_tmpz00_3022);
						{	/* BackEnd/jvm.scm 319 */
							obj_t BgL_classzd2filezd2_3185;

							BgL_classzd2filezd2_3185 =
								string_append(BgL_prez00_3184,
								BGl_string2077z00zzbackend_jvmz00);
							{	/* BackEnd/jvm.scm 320 */

								if (fexists(BSTRING_TO_STRING(BgL_tmpz00_3022)))
									{	/* BackEnd/jvm.scm 322 */
										char *BgL_stringz00_3186;

										BgL_stringz00_3186 = BSTRING_TO_STRING(BgL_tmpz00_3022);
										if (unlink(BgL_stringz00_3186))
											{	/* BackEnd/jvm.scm 322 */
												BgL_tmpz00_3747 = ((bool_t) 0);
											}
										else
											{	/* BackEnd/jvm.scm 322 */
												BgL_tmpz00_3747 = ((bool_t) 1);
											}
									}
								else
									{	/* BackEnd/jvm.scm 321 */
										BgL_tmpz00_3747 = ((bool_t) 0);
									}
							}
						}
					}
					return BBOOL(BgL_tmpz00_3747);
				}
			}
		}

	}



/* &backend-cnst-table-n1488 */
	obj_t BGl_z62backendzd2cnstzd2tablezd2n1488zb0zzbackend_jvmz00(obj_t
		BgL_envz00_3023, obj_t BgL_mez00_3024, obj_t BgL_offsetz00_3025)
	{
		{	/* BackEnd/jvm.scm 237 */
			return BGl_string2099z00zzbackend_jvmz00;
		}

	}



/* &backend-link-jvm1485 */
	obj_t BGl_z62backendzd2linkzd2jvm1485z62zzbackend_jvmz00(obj_t
		BgL_envz00_3026, obj_t BgL_mez00_3027, obj_t BgL_resultz00_3028)
	{
		{	/* BackEnd/jvm.scm 230 */
			return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BFALSE);
		}

	}



/* &backend-compile-jvm1483 */
	obj_t BGl_z62backendzd2compilezd2jvm1483z62zzbackend_jvmz00(obj_t
		BgL_envz00_3029, obj_t BgL_mez00_3030)
	{
		{	/* BackEnd/jvm.scm 65 */
			{	/* BackEnd/jvm.scm 67 */
				obj_t BgL_list1632z00_3190;

				{	/* BackEnd/jvm.scm 67 */
					obj_t BgL_arg1634z00_3191;

					{	/* BackEnd/jvm.scm 67 */
						obj_t BgL_arg1639z00_3192;

						BgL_arg1639z00_3192 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1634z00_3191 =
							MAKE_YOUNG_PAIR(BGl_string2100z00zzbackend_jvmz00,
							BgL_arg1639z00_3192);
					}
					BgL_list1632z00_3190 =
						MAKE_YOUNG_PAIR(BGl_string2101z00zzbackend_jvmz00,
						BgL_arg1634z00_3191);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1632z00_3190);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2100z00zzbackend_jvmz00;
			{	/* BackEnd/jvm.scm 67 */
				obj_t BgL_g1116z00_3193;
				obj_t BgL_g1117z00_3194;

				{	/* BackEnd/jvm.scm 67 */
					obj_t BgL_list1664z00_3195;

					BgL_list1664z00_3195 =
						MAKE_YOUNG_PAIR
						(BGl_startzd2jvmzd2emissionz12zd2envzc0zzbackend_jvmz00, BNIL);
					BgL_g1116z00_3193 = BgL_list1664z00_3195;
				}
				BgL_g1117z00_3194 = CNST_TABLE_REF(((long) 16));
				{
					obj_t BgL_hooksz00_3197;
					obj_t BgL_hnamesz00_3198;

					BgL_hooksz00_3197 = BgL_g1116z00_3193;
					BgL_hnamesz00_3198 = BgL_g1117z00_3194;
				BgL_loopz00_3196:
					if (NULLP(BgL_hooksz00_3197))
						{	/* BackEnd/jvm.scm 67 */
							CNST_TABLE_REF(((long) 17));
						}
					else
						{	/* BackEnd/jvm.scm 67 */
							bool_t BgL_test2246z00_3771;

							{	/* BackEnd/jvm.scm 67 */
								obj_t BgL_fun1663z00_3199;

								BgL_fun1663z00_3199 = CAR(((obj_t) BgL_hooksz00_3197));
								BgL_test2246z00_3771 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1663z00_3199)
									(BgL_fun1663z00_3199, BEOA));
							}
							if (BgL_test2246z00_3771)
								{	/* BackEnd/jvm.scm 67 */
									obj_t BgL_arg1644z00_3200;
									obj_t BgL_arg1652z00_3201;

									BgL_arg1644z00_3200 = CDR(((obj_t) BgL_hooksz00_3197));
									BgL_arg1652z00_3201 = CDR(((obj_t) BgL_hnamesz00_3198));
									{
										obj_t BgL_hnamesz00_3783;
										obj_t BgL_hooksz00_3782;

										BgL_hooksz00_3782 = BgL_arg1644z00_3200;
										BgL_hnamesz00_3783 = BgL_arg1652z00_3201;
										BgL_hnamesz00_3198 = BgL_hnamesz00_3783;
										BgL_hooksz00_3197 = BgL_hooksz00_3782;
										goto BgL_loopz00_3196;
									}
								}
							else
								{	/* BackEnd/jvm.scm 67 */
									obj_t BgL_arg1662z00_3202;

									BgL_arg1662z00_3202 = CAR(((obj_t) BgL_hnamesz00_3198));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2100z00zzbackend_jvmz00,
										BGl_string2102z00zzbackend_jvmz00, BgL_arg1662z00_3202);
								}
						}
				}
			}
			{	/* BackEnd/jvm.scm 69 */
				obj_t BgL_arg1667z00_3203;

				BgL_arg1667z00_3203 =
					BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{	/* BackEnd/jvm.scm 68 */
					obj_t BgL_list1668z00_3204;

					{	/* BackEnd/jvm.scm 68 */
						obj_t BgL_arg1669z00_3205;

						{	/* BackEnd/jvm.scm 68 */
							obj_t BgL_arg1672z00_3206;

							{	/* BackEnd/jvm.scm 68 */
								obj_t BgL_arg1684z00_3207;

								{	/* BackEnd/jvm.scm 68 */
									obj_t BgL_arg1685z00_3208;

									{	/* BackEnd/jvm.scm 68 */
										obj_t BgL_arg1686z00_3209;

										BgL_arg1686z00_3209 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
										BgL_arg1685z00_3208 =
											MAKE_YOUNG_PAIR(BGl_string2103z00zzbackend_jvmz00,
											BgL_arg1686z00_3209);
									}
									BgL_arg1684z00_3207 =
										MAKE_YOUNG_PAIR(BgL_arg1667z00_3203, BgL_arg1685z00_3208);
								}
								BgL_arg1672z00_3206 =
									MAKE_YOUNG_PAIR(BGl_string2104z00zzbackend_jvmz00,
									BgL_arg1684z00_3207);
							}
							BgL_arg1669z00_3205 =
								MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
								BgL_arg1672z00_3206);
						}
						BgL_list1668z00_3204 =
							MAKE_YOUNG_PAIR(BGl_string2105z00zzbackend_jvmz00,
							BgL_arg1669z00_3205);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1668z00_3204);
			}}
			{	/* BackEnd/jvm.scm 71 */
				obj_t BgL_arg1687z00_3210;

				BgL_arg1687z00_3210 =
					bstring_to_symbol(BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
					(BGl_za2moduleza2z00zzmodule_modulez00));
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_mez00_3030)))->
						BgL_qnamez00) = ((obj_t) BgL_arg1687z00_3210), BUNSPEC);
			}
			{	/* BackEnd/jvm.scm 74 */
				bool_t BgL_test2247z00_3801;

				if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
					{	/* BackEnd/jvm.scm 74 */
						BgL_test2247z00_3801 = ((bool_t) 0);
					}
				else
					{	/* BackEnd/jvm.scm 74 */
						if (CBOOL(BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00))
							{	/* BackEnd/jvm.scm 74 */
								BgL_test2247z00_3801 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BGl_za2passza2z00zzengine_paramz00,
										CNST_TABLE_REF(((long) 18))));
							}
						else
							{	/* BackEnd/jvm.scm 74 */
								BgL_test2247z00_3801 = ((bool_t) 0);
							}
					}
				if (BgL_test2247z00_3801)
					{	/* BackEnd/jvm.scm 74 */
						BGl_za2mainza2z00zzmodule_modulez00 =
							BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
					}
				else
					{	/* BackEnd/jvm.scm 74 */
						BFALSE;
					}
			}
			BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00
				(BGl_za2moduleza2z00zzmodule_modulez00,
				BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00);
			{	/* BackEnd/jvm.scm 102 */
				obj_t BgL_lza2za2_3212;
				obj_t BgL_bnamez00_3213;

				BgL_lza2za2_3212 =
					BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(
					((BgL_jvmz00_bglt) BgL_mez00_3030));
				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 10))))
					{	/* BackEnd/jvm.scm 104 */
						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* BackEnd/jvm.scm 105 */
								BgL_bnamez00_3213 =
									BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
									(BGl_basenamez00zz__osz00(CAR
											(BGl_za2srczd2filesza2zd2zzengine_paramz00))));
							}
						else
							{	/* BackEnd/jvm.scm 105 */
								BgL_bnamez00_3213 = BGl_string2106z00zzbackend_jvmz00;
							}
					}
				else
					{	/* BackEnd/jvm.scm 104 */
						if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
							{	/* BackEnd/jvm.scm 108 */
								BgL_bnamez00_3213 =
									BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
									(BGl_basenamez00zz__osz00
										(BGl_za2destza2z00zzengine_paramz00)));
							}
						else
							{	/* BackEnd/jvm.scm 108 */
								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* BackEnd/jvm.scm 109 */
										BgL_bnamez00_3213 =
											BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
											(BGl_basenamez00zz__osz00(CAR
													(BGl_za2srczd2filesza2zd2zzengine_paramz00))));
									}
								else
									{	/* BackEnd/jvm.scm 109 */
										BgL_bnamez00_3213 = BFALSE;
									}
							}
					}
				{	/* BackEnd/jvm.scm 114 */
					obj_t BgL_arg1692z00_3214;

					BgL_arg1692z00_3214 = CAR(((obj_t) BgL_lza2za2_3212));
					BGl_emitze70ze7zzbackend_jvmz00(BgL_arg1692z00_3214,
						BgL_bnamez00_3213);
				}
				{	/* BackEnd/jvm.scm 115 */
					obj_t BgL_g1470z00_3215;

					BgL_g1470z00_3215 = CDR(((obj_t) BgL_lza2za2_3212));
					{
						obj_t BgL_l1468z00_3217;

						BgL_l1468z00_3217 = BgL_g1470z00_3215;
					BgL_zc3z04anonymousza31693ze3z87_3216:
						if (PAIRP(BgL_l1468z00_3217))
							{	/* BackEnd/jvm.scm 116 */
								{	/* BackEnd/jvm.scm 115 */
									obj_t BgL_cfz00_3218;

									BgL_cfz00_3218 = CAR(BgL_l1468z00_3217);
									BGl_emitze70ze7zzbackend_jvmz00(BgL_cfz00_3218,
										BGl_jasnamez00zzbackend_jvmz00(BgL_cfz00_3218));
								}
								{
									obj_t BgL_l1468z00_3843;

									BgL_l1468z00_3843 = CDR(BgL_l1468z00_3217);
									BgL_l1468z00_3217 = BgL_l1468z00_3843;
									goto BgL_zc3z04anonymousza31693ze3z87_3216;
								}
							}
						else
							{	/* BackEnd/jvm.scm 116 */
								((bool_t) 1);
							}
					}
				}
				BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 19)),
					BGl_proc2107z00zzbackend_jvmz00);
				BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 8)),
					BGl_proc2108z00zzbackend_jvmz00);
				return BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long)
							7)), BGl_proc2109z00zzbackend_jvmz00);
		}}

	}



/* <@exit:1760>~0 */
	obj_t BGl_zc3z04exitza31760ze3ze70z60zzbackend_jvmz00(obj_t
		BgL_classfilez00_3065, obj_t BgL_portz00_3064, obj_t BgL_res1120z00_3063)
	{
		{	/* BackEnd/jvm.scm 94 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1129z00_2114;

			if (SET_EXIT(BgL_an_exit1129z00_2114))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1129z00_2114 = (void *) jmpbuf;
					{	/* BackEnd/jvm.scm 94 */

						PUSH_EXIT(BgL_an_exit1129z00_2114, ((long) 1));
						{	/* BackEnd/jvm.scm 94 */
							obj_t BgL_an_exitd1130z00_2115;

							BgL_an_exitd1130z00_2115 = ((obj_t) (&exitd));
							{	/* BackEnd/jvm.scm 94 */
								bool_t BgL_res1132z00_2118;

								{	/* BackEnd/jvm.scm 94 */
									obj_t BgL_ohs1118z00_2119;

									BgL_ohs1118z00_2119 = BGL_ERROR_HANDLER_GET();
									{	/* BackEnd/jvm.scm 94 */
										obj_t BgL_exitd1123z00_2120;

										BgL_exitd1123z00_2120 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31771ze3z87_3006;

											BgL_zc3z04anonymousza31771ze3z87_3006 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31771ze3ze5zzbackend_jvmz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31771ze3z87_3006,
												(int) (((long) 0)), BgL_ohs1118z00_2119);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1123z00_2120,
												BgL_zc3z04anonymousza31771ze3z87_3006);
											{	/* BackEnd/jvm.scm 94 */
												bool_t BgL_tmp1125z00_2122;

												{	/* BackEnd/jvm.scm 94 */
													obj_t BgL_arg1761z00_2123;

													{	/* BackEnd/jvm.scm 94 */
														obj_t BgL_zc3z04anonymousza31769ze3z87_3007;

														BgL_zc3z04anonymousza31769ze3z87_3007 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31769ze3ze5zzbackend_jvmz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31769ze3z87_3007,
															(int) (((long) 0)),
															((obj_t) BgL_res1120z00_3063));
														PROCEDURE_SET(BgL_zc3z04anonymousza31769ze3z87_3007,
															(int) (((long) 1)), BgL_an_exitd1130z00_2115);
														BgL_arg1761z00_2123 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31769ze3z87_3007,
															BgL_ohs1118z00_2119);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1761z00_2123);
													BUNSPEC;
												}
												{	/* BackEnd/jvm.scm 94 */
													obj_t BgL_auxz00_3032;

													{	/* BackEnd/jvm.scm 98 */
														obj_t BgL_exitd1126z00_2128;

														BgL_exitd1126z00_2128 = ((obj_t) (&exitd));
														{	/* BackEnd/jvm.scm 100 */
															obj_t BgL_zc3z04anonymousza31770ze3z87_3008;

															BgL_zc3z04anonymousza31770ze3z87_3008 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31770ze3ze5zzbackend_jvmz00,
																(int) (((long) 0)), (int) (((long) 1)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31770ze3z87_3008,
																(int) (((long) 0)), BgL_portz00_3064);
															BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																(BgL_exitd1126z00_2128,
																BgL_zc3z04anonymousza31770ze3z87_3008);
															{	/* BackEnd/jvm.scm 99 */
																obj_t BgL_tmp1128z00_2130;

																BgL_tmp1128z00_2130 =
																	BGl_jvmzd2aszd2zzjas_asz00
																	(BgL_classfilez00_3065, BgL_portz00_3064);
																BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																	(BgL_exitd1126z00_2128);
																close_binary_port(((obj_t) BgL_portz00_3064));
																BgL_auxz00_3032 = BgL_tmp1128z00_2130;
													}}}
													CELL_SET(BgL_res1120z00_3063, BgL_auxz00_3032);
												}
												BgL_tmp1125z00_2122 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1123z00_2120);
												BGL_ERROR_HANDLER_SET(BgL_ohs1118z00_2119);
												BUNSPEC;
												BgL_res1132z00_2118 = BgL_tmp1125z00_2122;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1132z00_2118);
							}
						}
					}
				}
		}

	}



/* emit~0 */
	obj_t BGl_emitze70ze7zzbackend_jvmz00(obj_t BgL_classfilez00_2069,
		obj_t BgL_destz00_2070)
	{
		{	/* BackEnd/jvm.scm 100 */
			{	/* BackEnd/jvm.scm 78 */
				obj_t BgL_dirz00_2072;

				BgL_dirz00_2072 = BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00;
				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 8))))
					{	/* BackEnd/jvm.scm 80 */
						obj_t BgL_portz00_2074;

						if (STRINGP(BgL_destz00_2070))
							{	/* BackEnd/jvm.scm 83 */
								obj_t BgL_arg1742z00_2079;

								BgL_arg1742z00_2079 =
									string_append_3(BgL_dirz00_2072,
									BGl_string2110z00zzbackend_jvmz00, BgL_destz00_2070);
								{	/* BackEnd/jvm.scm 82 */

									BgL_portz00_2074 =
										BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_arg1742z00_2079, BTRUE);
								}
							}
						else
							{	/* BackEnd/jvm.scm 81 */
								obj_t BgL_res2026z00_2872;

								{	/* BackEnd/jvm.scm 81 */
									obj_t BgL_tmpz00_3892;

									BgL_tmpz00_3892 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2026z00_2872 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3892);
								}
								BgL_portz00_2074 = BgL_res2026z00_2872;
							}
						BGl_jvmasdumpz00zzbackend_jvmz00(BgL_classfilez00_2069,
							BgL_portz00_2074);
						{	/* BackEnd/jvm.scm 85 */
							bool_t BgL_test2257z00_3896;

							{	/* BackEnd/jvm.scm 85 */
								obj_t BgL_arg1740z00_2077;

								{	/* BackEnd/jvm.scm 85 */
									obj_t BgL_res2027z00_2874;

									{	/* BackEnd/jvm.scm 85 */
										obj_t BgL_tmpz00_3897;

										BgL_tmpz00_3897 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2027z00_2874 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3897);
									}
									BgL_arg1740z00_2077 = BgL_res2027z00_2874;
								}
								BgL_test2257z00_3896 =
									(BgL_portz00_2074 == BgL_arg1740z00_2077);
							}
							if (BgL_test2257z00_3896)
								{	/* BackEnd/jvm.scm 85 */
									return BFALSE;
								}
							else
								{	/* BackEnd/jvm.scm 85 */
									return bgl_close_output_port(((obj_t) BgL_portz00_2074));
								}
						}
					}
				else
					{	/* BackEnd/jvm.scm 87 */
						obj_t BgL_cnamez00_2082;

						if (STRINGP(BgL_destz00_2070))
							{	/* BackEnd/jvm.scm 87 */
								BgL_cnamez00_2082 =
									string_append_3(BgL_dirz00_2072,
									BGl_string2110z00zzbackend_jvmz00, BgL_destz00_2070);
							}
						else
							{	/* BackEnd/jvm.scm 87 */
								BgL_cnamez00_2082 =
									string_append(BgL_dirz00_2072,
									BGl_string2111z00zzbackend_jvmz00);
							}
						{	/* BackEnd/jvm.scm 87 */
							obj_t BgL_portz00_2083;

							BgL_portz00_2083 =
								BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
								(BgL_cnamez00_2082);
							{	/* BackEnd/jvm.scm 90 */

								{	/* BackEnd/jvm.scm 91 */
									obj_t BgL_list1743z00_2084;

									{	/* BackEnd/jvm.scm 91 */
										obj_t BgL_arg1744z00_2085;

										{	/* BackEnd/jvm.scm 91 */
											obj_t BgL_arg1745z00_2086;

											BgL_arg1745z00_2086 =
												MAKE_YOUNG_PAIR(BGl_string2112z00zzbackend_jvmz00,
												BNIL);
											BgL_arg1744z00_2085 =
												MAKE_YOUNG_PAIR(BgL_cnamez00_2082, BgL_arg1745z00_2086);
										}
										BgL_list1743z00_2084 =
											MAKE_YOUNG_PAIR(BGl_string2113z00zzbackend_jvmz00,
											BgL_arg1744z00_2085);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1743z00_2084);
								}
								if (BINARY_PORTP(BgL_portz00_2083))
									{	/* BackEnd/jvm.scm 92 */
										BFALSE;
									}
								else
									{	/* BackEnd/jvm.scm 92 */
										BGl_errorz00zz__errorz00(BGl_string2114z00zzbackend_jvmz00,
											BGl_string2115z00zzbackend_jvmz00, BgL_cnamez00_2082);
									}
								{	/* BackEnd/jvm.scm 94 */
									obj_t BgL_res1120z00_3031;

									BgL_res1120z00_3031 = MAKE_CELL(BUNSPEC);
									if (CBOOL(BGl_zc3z04exitza31760ze3ze70z60zzbackend_jvmz00
											(BgL_classfilez00_2069, BgL_portz00_2083,
												BgL_res1120z00_3031)))
										{	/* BackEnd/jvm.scm 94 */
											obj_t BgL_ez00_2882;

											BgL_ez00_2882 = CELL_REF(BgL_res1120z00_3031);
											{	/* BackEnd/jvm.scm 96 */
												char *BgL_stringz00_2883;

												BgL_stringz00_2883 =
													BSTRING_TO_STRING(BgL_cnamez00_2082);
												if (unlink(BgL_stringz00_2883))
													{	/* BackEnd/jvm.scm 96 */
														((bool_t) 0);
													}
												else
													{	/* BackEnd/jvm.scm 96 */
														((bool_t) 1);
													}
											}
											return BGl_raisez00zz__errorz00(BgL_ez00_2882);
										}
									else
										{	/* BackEnd/jvm.scm 94 */
											return CELL_REF(BgL_res1120z00_3031);
										}
								}
							}
						}
					}
			}
		}

	}



/* &<@anonymous:1708> */
	obj_t BGl_z62zc3z04anonymousza31708ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3034)
	{
		{	/* BackEnd/jvm.scm 119 */
			return CNST_TABLE_REF(((long) 20));
		}

	}



/* &<@anonymous:1705> */
	obj_t BGl_z62zc3z04anonymousza31705ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3035)
	{
		{	/* BackEnd/jvm.scm 118 */
			return CNST_TABLE_REF(((long) 20));
		}

	}



/* &<@anonymous:1698> */
	obj_t BGl_z62zc3z04anonymousza31698ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3036)
	{
		{	/* BackEnd/jvm.scm 117 */
			return CNST_TABLE_REF(((long) 20));
		}

	}



/* &<@anonymous:1770> */
	obj_t BGl_z62zc3z04anonymousza31770ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3037)
	{
		{	/* BackEnd/jvm.scm 98 */
			{	/* BackEnd/jvm.scm 100 */
				obj_t BgL_portz00_3038;

				BgL_portz00_3038 = PROCEDURE_REF(BgL_envz00_3037, (int) (((long) 0)));
				return close_binary_port(((obj_t) BgL_portz00_3038));
			}
		}

	}



/* &<@anonymous:1769> */
	obj_t BGl_z62zc3z04anonymousza31769ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3039, obj_t BgL_ez00_3042)
	{
		{	/* BackEnd/jvm.scm 94 */
			{	/* BackEnd/jvm.scm 94 */
				obj_t BgL_res1120z00_3040;
				obj_t BgL_an_exitd1130z00_3041;

				BgL_res1120z00_3040 =
					PROCEDURE_REF(BgL_envz00_3039, (int) (((long) 0)));
				BgL_an_exitd1130z00_3041 =
					PROCEDURE_REF(BgL_envz00_3039, (int) (((long) 1)));
				CELL_SET(BgL_res1120z00_3040, BgL_ez00_3042);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1130z00_3041, BTRUE);
			}
		}

	}



/* &<@anonymous:1771> */
	obj_t BGl_z62zc3z04anonymousza31771ze3ze5zzbackend_jvmz00(obj_t
		BgL_envz00_3044)
	{
		{	/* BackEnd/jvm.scm 94 */
			{
				obj_t BgL_ohs1118z00_3045;

				BgL_ohs1118z00_3045 =
					PROCEDURE_REF(BgL_envz00_3044, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1118z00_3045);
				return BUNSPEC;
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvmz00()
	{
		{	/* BackEnd/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 117219677),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 412406778),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 316726430),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 65543845),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzjas_asz00(((long) 476839606),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzjas_peepz00(((long) 121595924),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(((long) 100353820),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(((long) 14468775),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(((long) 252555412),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 32737868),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
			return
				BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string2116z00zzbackend_jvmz00));
		}

	}

#ifdef __cplusplus
}
#endif
