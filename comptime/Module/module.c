/*===========================================================================*/
/*   (Module/module.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/module.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ccompzd2idzd2zzmodule_modulez00(BgL_ccompz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00();
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_zc3z04anonymousza31264ze3ze70z60zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ccompzd2producerzd2zzmodule_modulez00(BgL_ccompz00_bglt);
	static obj_t BGl_objectzd2initzd2zzmodule_modulez00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00();
	static obj_t BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00();
	BGL_EXPORTED_DECL bool_t BGl_ccompzf3zf3zzmodule_modulez00(obj_t);
	static obj_t BGl_appendzd221011zd2zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_modulez00();
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
	extern obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_ccompz00zzmodule_modulez00 = BUNSPEC;
	static obj_t BGl_dozd2consumezd2modulez00zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_modulezd2mclausezd2zzmodule_modulez00(obj_t);
	static bool_t
		BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00();
	BGL_EXPORTED_DECL obj_t
		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 = BUNSPEC;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_z62modulezd2initializa7ationzd2idzc5zzmodule_modulez00(obj_t,
		obj_t);
	static obj_t BGl_z62dumpzd2modulezb0zzmodule_modulez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
	extern obj_t BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00();
	static obj_t BGl_z62unknownzd2clausezd2producerz62zzmodule_modulez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_modulez00();
	BGL_EXPORTED_DECL obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2locationza2zd2zzmodule_modulez00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t
		BGl_ccompzd2finaliza7erz75zzmodule_modulez00(BgL_ccompz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 =
		BUNSPEC;
	extern obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
	static obj_t BGl_z62zc3z04anonymousza31742ze3ze5zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzmodule_modulez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzmodule_modulez00(obj_t);
	static obj_t BGl_findzd2clausezd2consumerz00zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
	extern obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00();
	static obj_t BGl_zc3z04anonymousza31423ze3ze70z60zzmodule_modulez00(obj_t,
		obj_t);
	static obj_t BGl_producezd2libraryzd2clausesz00zzmodule_modulez00(obj_t);
	static obj_t BGl_z62producezd2modulezd2clausez12z70zzmodule_modulez00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
	extern obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00;
	extern obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2mainza2z00zzmodule_modulez00 = BUNSPEC;
	static obj_t BGl_z62modulezd2checksumzd2objectz62zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
	static BgL_ccompz00_bglt BGl_z62lambda1686z62zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_ccompz00_bglt BGl_z62lambda1688z62zzmodule_modulez00(obj_t);
	static obj_t BGl_z62ccompzd2producerzb0zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62producezd2modulez12za2zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1698z62zzmodule_modulez00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_z62lambda1699z62zzmodule_modulez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t, obj_t);
	static BgL_ccompz00_bglt BGl_z62ccompzd2nilzb0zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL BgL_ccompz00_bglt
		BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_modulez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31693ze3ze5zzmodule_modulez00(obj_t,
		obj_t);
	extern obj_t BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static BgL_ccompz00_bglt BGl_z62makezd2ccompzb0zzmodule_modulez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
	BGL_EXPORTED_DECL obj_t
		BGl_ccompzd2consumerzd2zzmodule_modulez00(BgL_ccompz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzmodule_modulez00();
	BGL_EXPORTED_DECL BgL_ccompz00_bglt BGl_ccompzd2nilzd2zzmodule_modulez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_modulez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t);
	extern obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_dozd2modulezd2zzmodule_modulez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62consumezd2modulezd2clausez12z70zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t
		BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00();
	extern obj_t
		BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2moduleza2z00zzmodule_modulez00 = BUNSPEC;
	extern obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_optionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_z62unknownzd2clausezd2consumerz62zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62ccompzf3z91zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzmodule_modulez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_modulez00();
	static obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzmodule_modulez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_modulez00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_modulez00();
	static obj_t BGl_z62zc3z04anonymousza31731ze3ze5zzmodule_modulez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31715ze3ze5zzmodule_modulez00(obj_t,
		obj_t);
	static obj_t BGl_z62consumezd2modulez12za2zzmodule_modulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62ccompzd2idzb0zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62ccompzd2finaliza7erz17zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1712z62zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1713z62zzmodule_modulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	static obj_t BGl_checksumzd2modulezd2zzmodule_modulez00(obj_t);
	static obj_t BGl_z62lambda1728z62zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1729z62zzmodule_modulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2clausezd2producerz00zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1740z62zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1741z62zzmodule_modulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	static obj_t BGl_z62ccompzd2consumerzb0zzmodule_modulez00(obj_t, obj_t);
	static obj_t __cnst[23];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ccompzd2finaliza7erzd2envza7zzmodule_modulez00,
		BgL_bgl_za762ccompza7d2final1858z00,
		BGl_z62ccompzd2finaliza7erz17zzmodule_modulez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_leavezd2functionzd2envz00zztools_errorz00;
	   
		 
		DEFINE_STRING(BGl_string1811z00zzmodule_modulez00,
		BgL_bgl_string1811za700za7za7m1859za7, "Module", 6);
	      DEFINE_STRING(BGl_string1812z00zzmodule_modulez00,
		BgL_bgl_string1812za700za7za7m1860za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1813z00zzmodule_modulez00,
		BgL_bgl_string1813za700za7za7m1861za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1814z00zzmodule_modulez00,
		BgL_bgl_string1814za700za7za7m1862za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1815z00zzmodule_modulez00,
		BgL_bgl_string1815za700za7za7m1863za7, "Illegal module form", 19);
	      DEFINE_STRING(BGl_string1816z00zzmodule_modulez00,
		BgL_bgl_string1816za700za7za7m1864za7, "module ~a", 9);
	      DEFINE_STRING(BGl_string1817z00zzmodule_modulez00,
		BgL_bgl_string1817za700za7za7m1865za7, " error", 6);
	      DEFINE_STRING(BGl_string1818z00zzmodule_modulez00,
		BgL_bgl_string1818za700za7za7m1866za7, "s", 1);
	      DEFINE_STRING(BGl_string1819z00zzmodule_modulez00,
		BgL_bgl_string1819za700za7za7m1867za7, "", 0);
	      DEFINE_STRING(BGl_string1820z00zzmodule_modulez00,
		BgL_bgl_string1820za700za7za7m1868za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1821z00zzmodule_modulez00,
		BgL_bgl_string1821za700za7za7m1869za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1822z00zzmodule_modulez00,
		BgL_bgl_string1822za700za7za7m1870za7, "Illegal module name", 19);
	      DEFINE_STRING(BGl_string1823z00zzmodule_modulez00,
		BgL_bgl_string1823za700za7za7m1871za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string1824z00zzmodule_modulez00,
		BgL_bgl_string1824za700za7za7m1872za7, "Unknown module clause", 21);
	      DEFINE_STRING(BGl_string1825z00zzmodule_modulez00,
		BgL_bgl_string1825za700za7za7m1873za7, " vs ", 4);
	      DEFINE_STRING(BGl_string1826z00zzmodule_modulez00,
		BgL_bgl_string1826za700za7za7m1874za7, "conflict in module's name: ", 27);
	      DEFINE_STRING(BGl_string1827z00zzmodule_modulez00,
		BgL_bgl_string1827za700za7za7m1875za7, "Module declaration", 18);
	      DEFINE_STRING(BGl_string1828z00zzmodule_modulez00,
		BgL_bgl_string1828za700za7za7m1876za7, "Illegal module declaration", 26);
	      DEFINE_STRING(BGl_string1829z00zzmodule_modulez00,
		BgL_bgl_string1829za700za7za7m1877za7, ".ebgl", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzd2nilzd2envz00zzmodule_modulez00,
		BgL_bgl_za762ccompza7d2nilza7b1878za7,
		BGl_z62ccompzd2nilzb0zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1830z00zzmodule_modulez00,
		BgL_bgl_string1830za700za7za7m1879za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1831z00zzmodule_modulez00,
		BgL_bgl_string1831za700za7za7m1880za7, "Module checksum object", 22);
	      DEFINE_STRING(BGl_string1832z00zzmodule_modulez00,
		BgL_bgl_string1832za700za7za7m1881za7, ".mco", 4);
	      DEFINE_STRING(BGl_string1833z00zzmodule_modulez00,
		BgL_bgl_string1833za700za7za7m1882za7, "module checksum", 15);
	      DEFINE_STRING(BGl_string1834z00zzmodule_modulez00,
		BgL_bgl_string1834za700za7za7m1883za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string1835z00zzmodule_modulez00,
		BgL_bgl_string1835za700za7za7m1884za7, "Can't open file for input", 25);
	      DEFINE_STRING(BGl_string1853z00zzmodule_modulez00,
		BgL_bgl_string1853za700za7za7m1885za7, "module_module", 13);
	      DEFINE_STRING(BGl_string1854z00zzmodule_modulez00,
		BgL_bgl_string1854za700za7za7m1886za7,
		"void _ module_module ccomp finalizer consumer procedure producer symbol id mco dump-module --to-stdout module-initialization include cond-expand (library _) library (leave-function additional-heap-restore-globals!) (eval foreign t) main module pass-started ",
		257);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2modulezd2envz00zzmodule_modulez00,
		BgL_bgl_za762dumpza7d2module1887z00,
		BGl_z62dumpzd2modulezb0zzmodule_modulez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzd2idzd2envz00zzmodule_modulez00,
		BgL_bgl_za762ccompza7d2idza7b01888za7,
		BGl_z62ccompzd2idzb0zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2checksumzd2objectzd2envzd2zzmodule_modulez00,
		BgL_bgl_za762moduleza7d2chec1889z00,
		BGl_z62modulezd2checksumzd2objectz62zzmodule_modulez00, 0L, BUNSPEC, 0);
	extern obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00;
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consumezd2modulezd2clausez12zd2envzc0zzmodule_modulez00,
		BgL_bgl_za762consumeza7d2mod1890z00,
		BGl_z62consumezd2modulezd2clausez12z70zzmodule_modulez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zzmodule_modulez00,
		BgL_bgl_za762lambda1699za7621891z00, BGl_z62lambda1699z62zzmodule_modulez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1837z00zzmodule_modulez00,
		BgL_bgl_za762lambda1698za7621892z00, BGl_z62lambda1698z62zzmodule_modulez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1838z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1893za7,
		BGl_z62zc3z04anonymousza31714ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1839z00zzmodule_modulez00,
		BgL_bgl_za762lambda1713za7621894z00, BGl_z62lambda1713z62zzmodule_modulez00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzf3zd2envz21zzmodule_modulez00,
		BgL_bgl_za762ccompza7f3za791za7za71895za7,
		BGl_z62ccompzf3z91zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consumezd2modulez12zd2envz12zzmodule_modulez00,
		BgL_bgl_za762consumeza7d2mod1896z00,
		BGl_z62consumezd2modulez12za2zzmodule_modulez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1840z00zzmodule_modulez00,
		BgL_bgl_za762lambda1712za7621897z00, BGl_z62lambda1712z62zzmodule_modulez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1841z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1898za7,
		BGl_z62zc3z04anonymousza31730ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1842z00zzmodule_modulez00,
		BgL_bgl_za762lambda1729za7621899z00, BGl_z62lambda1729z62zzmodule_modulez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1843z00zzmodule_modulez00,
		BgL_bgl_za762lambda1728za7621900z00, BGl_z62lambda1728z62zzmodule_modulez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1844z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1901za7,
		BGl_z62zc3z04anonymousza31742ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1845z00zzmodule_modulez00,
		BgL_bgl_za762lambda1741za7621902z00, BGl_z62lambda1741z62zzmodule_modulez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1846z00zzmodule_modulez00,
		BgL_bgl_za762lambda1740za7621903z00, BGl_z62lambda1740z62zzmodule_modulez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1847z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1904za7,
		BGl_z62zc3z04anonymousza31693ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1848z00zzmodule_modulez00,
		BgL_bgl_za762lambda1688za7621905z00, BGl_z62lambda1688z62zzmodule_modulez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1849z00zzmodule_modulez00,
		BgL_bgl_za762lambda1686za7621906z00, BGl_z62lambda1686z62zzmodule_modulez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1850z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1907za7,
		BGl_z62zc3z04anonymousza31743ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1851z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1908za7,
		BGl_z62zc3z04anonymousza31731ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1852z00zzmodule_modulez00,
		BgL_bgl_za762za7c3za704anonymo1909za7,
		BGl_z62zc3z04anonymousza31715ze3ze5zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzd2consumerzd2envz00zzmodule_modulez00,
		BgL_bgl_za762ccompza7d2consu1910z00,
		BGl_z62ccompzd2consumerzb0zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00,
		BgL_bgl_za762moduleza7d2init1911z00,
		BGl_z62modulezd2initializa7ationzd2idzc5zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccompzd2producerzd2envz00zzmodule_modulez00,
		BgL_bgl_za762ccompza7d2produ1912z00,
		BGl_z62ccompzd2producerzb0zzmodule_modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_producezd2modulezd2clausez12zd2envzc0zzmodule_modulez00,
		BgL_bgl_za762produceza7d2mod1913z00,
		BGl_z62producezd2modulezd2clausez12z70zzmodule_modulez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ccompzd2envz00zzmodule_modulez00,
		BgL_bgl_za762makeza7d2ccompza71914za7,
		BGl_z62makezd2ccompzb0zzmodule_modulez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_producezd2modulez12zd2envz12zzmodule_modulez00,
		BgL_bgl_za762produceza7d2mod1915z00,
		BGl_z62producezd2modulez12za2zzmodule_modulez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
		     ADD_ROOT((void *) (&BGl_ccompz00zzmodule_modulez00));
		   
			 ADD_ROOT((void *) (&BGl_za2clausezd2compilersza2zd2zzmodule_modulez00));
		     ADD_ROOT((void *) (&BGl_za2modulezd2locationza2zd2zzmodule_modulez00));
		     ADD_ROOT((void *) (&BGl_za2modulezd2checksumza2zd2zzmodule_modulez00));
		     ADD_ROOT((void *) (&BGl_za2mainza2z00zzmodule_modulez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_modulez00));
		     ADD_ROOT((void *) (&BGl_za2moduleza2z00zzmodule_modulez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long
		BgL_checksumz00_985, char *BgL_fromz00_986)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_modulez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_modulez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_modulez00();
					BGl_libraryzd2moduleszd2initz00zzmodule_modulez00();
					BGl_cnstzd2initzd2zzmodule_modulez00();
					BGl_importedzd2moduleszd2initz00zzmodule_modulez00();
					BGl_objectzd2initzd2zzmodule_modulez00();
					return BGl_toplevelzd2initzd2zzmodule_modulez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_module");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_module");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_module");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			{	/* Module/module.scm 15 */
				obj_t BgL_cportz00_941;

				{	/* Module/module.scm 15 */
					obj_t BgL_stringz00_949;

					BgL_stringz00_949 = BGl_string1854z00zzmodule_modulez00;
					{	/* Module/module.scm 15 */
						obj_t BgL_startz00_950;

						BgL_startz00_950 = BINT(((long) 0));
						{	/* Module/module.scm 15 */
							obj_t BgL_endz00_951;

							BgL_endz00_951 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_949)));
							{	/* Module/module.scm 15 */

								BgL_cportz00_941 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_949, BgL_startz00_950, BgL_endz00_951);
				}}}}
				{
					long BgL_iz00_942;

					BgL_iz00_942 = ((long) 22);
				BgL_loopz00_943:
					if ((BgL_iz00_942 == ((long) -1)))
						{	/* Module/module.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/module.scm 15 */
							{	/* Module/module.scm 15 */
								obj_t BgL_arg1856z00_945;

								{	/* Module/module.scm 15 */

									{	/* Module/module.scm 15 */
										obj_t BgL_locationz00_947;

										BgL_locationz00_947 = BBOOL(((bool_t) 0));
										{	/* Module/module.scm 15 */

											BgL_arg1856z00_945 =
												BGl_readz00zz__readerz00(BgL_cportz00_941,
												BgL_locationz00_947);
										}
									}
								}
								{	/* Module/module.scm 15 */
									int BgL_tmpz00_1021;

									BgL_tmpz00_1021 = (int) (BgL_iz00_942);
									CNST_TABLE_SET(BgL_tmpz00_1021, BgL_arg1856z00_945);
							}}
							{	/* Module/module.scm 15 */
								int BgL_auxz00_948;

								BgL_auxz00_948 = (int) ((BgL_iz00_942 - ((long) 1)));
								{
									long BgL_iz00_1026;

									BgL_iz00_1026 = (long) (BgL_auxz00_948);
									BgL_iz00_942 = BgL_iz00_1026;
									goto BgL_loopz00_943;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			BGl_za2moduleza2z00zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 = BFALSE;
			BGl_za2mainza2z00zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 = BFALSE;
			BGl_za2modulezd2locationza2zd2zzmodule_modulez00 = BFALSE;
			return (BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 =
				BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_modulez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_67;

				BgL_headz00_67 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_68;
					obj_t BgL_tailz00_69;

					BgL_prevz00_68 = BgL_headz00_67;
					BgL_tailz00_69 = BgL_l1z00_1;
				BgL_loopz00_70:
					if (PAIRP(BgL_tailz00_69))
						{
							obj_t BgL_newzd2prevzd2_72;

							BgL_newzd2prevzd2_72 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_69), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_68, BgL_newzd2prevzd2_72);
							{
								obj_t BgL_tailz00_1036;
								obj_t BgL_prevz00_1035;

								BgL_prevz00_1035 = BgL_newzd2prevzd2_72;
								BgL_tailz00_1036 = CDR(BgL_tailz00_69);
								BgL_tailz00_69 = BgL_tailz00_1036;
								BgL_prevz00_68 = BgL_prevz00_1035;
								goto BgL_loopz00_70;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_67);
				}
			}
		}

	}



/* make-ccomp */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t
		BgL_id1019z00_25, obj_t BgL_producer1020z00_26,
		obj_t BgL_consumer1021z00_27, obj_t BgL_finaliza7er1022za7_28)
	{
		{	/* Module/module.sch 25 */
			{	/* Module/module.sch 25 */
				BgL_ccompz00_bglt BgL_new1059z00_954;

				{	/* Module/module.sch 25 */
					BgL_ccompz00_bglt BgL_new1057z00_955;

					BgL_new1057z00_955 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/module.sch 25 */
						long BgL_arg1114z00_956;

						{	/* Module/module.sch 25 */
							long BgL_res1746z00_957;

							BgL_res1746z00_957 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1114z00_956 = BgL_res1746z00_957;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1057z00_955), BgL_arg1114z00_956);
					}
					BgL_new1059z00_954 = BgL_new1057z00_955;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1059z00_954))->BgL_idz00) =
					((obj_t) BgL_id1019z00_25), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1059z00_954))->BgL_producerz00) =
					((obj_t) BgL_producer1020z00_26), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1059z00_954))->BgL_consumerz00) =
					((obj_t) BgL_consumer1021z00_27), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1059z00_954))->
						BgL_finaliza7erza7) = ((obj_t) BgL_finaliza7er1022za7_28), BUNSPEC);
				return BgL_new1059z00_954;
			}
		}

	}



/* &make-ccomp */
	BgL_ccompz00_bglt BGl_z62makezd2ccompzb0zzmodule_modulez00(obj_t
		BgL_envz00_837, obj_t BgL_id1019z00_838, obj_t BgL_producer1020z00_839,
		obj_t BgL_consumer1021z00_840, obj_t BgL_finaliza7er1022za7_841)
	{
		{	/* Module/module.sch 25 */
			return
				BGl_makezd2ccompzd2zzmodule_modulez00(BgL_id1019z00_838,
				BgL_producer1020z00_839, BgL_consumer1021z00_840,
				BgL_finaliza7er1022za7_841);
		}

	}



/* ccomp? */
	BGL_EXPORTED_DEF bool_t BGl_ccompzf3zf3zzmodule_modulez00(obj_t BgL_objz00_29)
	{
		{	/* Module/module.sch 26 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_29,
				BGl_ccompz00zzmodule_modulez00);
		}

	}



/* &ccomp? */
	obj_t BGl_z62ccompzf3z91zzmodule_modulez00(obj_t BgL_envz00_842,
		obj_t BgL_objz00_843)
	{
		{	/* Module/module.sch 26 */
			return BBOOL(BGl_ccompzf3zf3zzmodule_modulez00(BgL_objz00_843));
		}

	}



/* ccomp-nil */
	BGL_EXPORTED_DEF BgL_ccompz00_bglt BGl_ccompzd2nilzd2zzmodule_modulez00()
	{
		{	/* Module/module.sch 27 */
			{	/* Module/module.sch 27 */
				obj_t BgL_classz00_637;

				BgL_classz00_637 = BGl_ccompz00zzmodule_modulez00;
				{	/* Module/module.sch 27 */
					obj_t BgL__ortest_1106z00_638;

					BgL__ortest_1106z00_638 = BGL_CLASS_NIL(BgL_classz00_637);
					if (CBOOL(BgL__ortest_1106z00_638))
						{	/* Module/module.sch 27 */
							return ((BgL_ccompz00_bglt) BgL__ortest_1106z00_638);
						}
					else
						{	/* Module/module.sch 27 */
							return
								((BgL_ccompz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_637));
						}
				}
			}
		}

	}



/* &ccomp-nil */
	BgL_ccompz00_bglt BGl_z62ccompzd2nilzb0zzmodule_modulez00(obj_t
		BgL_envz00_844)
	{
		{	/* Module/module.sch 27 */
			return BGl_ccompzd2nilzd2zzmodule_modulez00();
		}

	}



/* ccomp-finalizer */
	BGL_EXPORTED_DEF obj_t
		BGl_ccompzd2finaliza7erz75zzmodule_modulez00(BgL_ccompz00_bglt BgL_oz00_30)
	{
		{	/* Module/module.sch 28 */
			return (((BgL_ccompz00_bglt) COBJECT(BgL_oz00_30))->BgL_finaliza7erza7);
		}

	}



/* &ccomp-finalizer */
	obj_t BGl_z62ccompzd2finaliza7erz17zzmodule_modulez00(obj_t BgL_envz00_845,
		obj_t BgL_oz00_846)
	{
		{	/* Module/module.sch 28 */
			return
				BGl_ccompzd2finaliza7erz75zzmodule_modulez00(
				((BgL_ccompz00_bglt) BgL_oz00_846));
		}

	}



/* ccomp-consumer */
	BGL_EXPORTED_DEF obj_t
		BGl_ccompzd2consumerzd2zzmodule_modulez00(BgL_ccompz00_bglt BgL_oz00_33)
	{
		{	/* Module/module.sch 30 */
			return (((BgL_ccompz00_bglt) COBJECT(BgL_oz00_33))->BgL_consumerz00);
		}

	}



/* &ccomp-consumer */
	obj_t BGl_z62ccompzd2consumerzb0zzmodule_modulez00(obj_t BgL_envz00_847,
		obj_t BgL_oz00_848)
	{
		{	/* Module/module.sch 30 */
			return
				BGl_ccompzd2consumerzd2zzmodule_modulez00(
				((BgL_ccompz00_bglt) BgL_oz00_848));
		}

	}



/* ccomp-producer */
	BGL_EXPORTED_DEF obj_t
		BGl_ccompzd2producerzd2zzmodule_modulez00(BgL_ccompz00_bglt BgL_oz00_36)
	{
		{	/* Module/module.sch 32 */
			return (((BgL_ccompz00_bglt) COBJECT(BgL_oz00_36))->BgL_producerz00);
		}

	}



/* &ccomp-producer */
	obj_t BGl_z62ccompzd2producerzb0zzmodule_modulez00(obj_t BgL_envz00_849,
		obj_t BgL_oz00_850)
	{
		{	/* Module/module.sch 32 */
			return
				BGl_ccompzd2producerzd2zzmodule_modulez00(
				((BgL_ccompz00_bglt) BgL_oz00_850));
		}

	}



/* ccomp-id */
	BGL_EXPORTED_DEF obj_t BGl_ccompzd2idzd2zzmodule_modulez00(BgL_ccompz00_bglt
		BgL_oz00_39)
	{
		{	/* Module/module.sch 34 */
			return (((BgL_ccompz00_bglt) COBJECT(BgL_oz00_39))->BgL_idz00);
		}

	}



/* &ccomp-id */
	obj_t BGl_z62ccompzd2idzb0zzmodule_modulez00(obj_t BgL_envz00_851,
		obj_t BgL_oz00_852)
	{
		{	/* Module/module.sch 34 */
			return
				BGl_ccompzd2idzd2zzmodule_modulez00(((BgL_ccompz00_bglt) BgL_oz00_852));
		}

	}



/* module-mclause */
	obj_t BGl_modulezd2mclausezd2zzmodule_modulez00(obj_t BgL_modz00_42)
	{
		{	/* Module/module.scm 86 */
			{	/* Module/module.scm 87 */
				bool_t BgL_test1920z00_1070;

				{	/* Module/module.scm 87 */
					obj_t BgL_tmpz00_1071;

					BgL_tmpz00_1071 =
						BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
					BgL_test1920z00_1070 = PROCEDUREP(BgL_tmpz00_1071);
				}
				if (BgL_test1920z00_1070)
					{	/* Module/module.scm 88 */
						obj_t BgL_fun1117z00_94;

						BgL_fun1117z00_94 =
							BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
						return
							PROCEDURE_ENTRY(BgL_fun1117z00_94) (BgL_fun1117z00_94,
							BgL_modz00_42, BEOA);
					}
				else
					{	/* Module/module.scm 87 */
						return BgL_modz00_42;
					}
			}
		}

	}



/* produce-module! */
	BGL_EXPORTED_DEF obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t
		BgL_modz00_43)
	{
		{	/* Module/module.scm 101 */
			{	/* Module/module.scm 102 */
				obj_t BgL_list1119z00_96;

				{	/* Module/module.scm 102 */
					obj_t BgL_arg1121z00_97;

					{	/* Module/module.scm 102 */
						obj_t BgL_arg1122z00_98;

						BgL_arg1122z00_98 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1121z00_97 =
							MAKE_YOUNG_PAIR(BGl_string1811z00zzmodule_modulez00,
							BgL_arg1122z00_98);
					}
					BgL_list1119z00_96 =
						MAKE_YOUNG_PAIR(BGl_string1812z00zzmodule_modulez00,
						BgL_arg1121z00_97);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1119z00_96);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1811z00zzmodule_modulez00;
			{	/* Module/module.scm 102 */
				obj_t BgL_g1060z00_99;

				BgL_g1060z00_99 = BNIL;
				{
					obj_t BgL_hooksz00_102;
					obj_t BgL_hnamesz00_103;

					BgL_hooksz00_102 = BgL_g1060z00_99;
					BgL_hnamesz00_103 = BNIL;
				BgL_zc3z04anonymousza31123ze3z87_104:
					if (NULLP(BgL_hooksz00_102))
						{	/* Module/module.scm 102 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Module/module.scm 102 */
							bool_t BgL_test1922z00_1089;

							{	/* Module/module.scm 102 */
								obj_t BgL_fun1130z00_111;

								BgL_fun1130z00_111 = CAR(((obj_t) BgL_hooksz00_102));
								BgL_test1922z00_1089 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1130z00_111) (BgL_fun1130z00_111,
										BEOA));
							}
							if (BgL_test1922z00_1089)
								{	/* Module/module.scm 102 */
									obj_t BgL_arg1127z00_108;
									obj_t BgL_arg1128z00_109;

									BgL_arg1127z00_108 = CDR(((obj_t) BgL_hooksz00_102));
									BgL_arg1128z00_109 = CDR(((obj_t) BgL_hnamesz00_103));
									{
										obj_t BgL_hnamesz00_1101;
										obj_t BgL_hooksz00_1100;

										BgL_hooksz00_1100 = BgL_arg1127z00_108;
										BgL_hnamesz00_1101 = BgL_arg1128z00_109;
										BgL_hnamesz00_103 = BgL_hnamesz00_1101;
										BgL_hooksz00_102 = BgL_hooksz00_1100;
										goto BgL_zc3z04anonymousza31123ze3z87_104;
									}
								}
							else
								{	/* Module/module.scm 102 */
									obj_t BgL_arg1129z00_110;

									BgL_arg1129z00_110 = CAR(((obj_t) BgL_hnamesz00_103));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1811z00zzmodule_modulez00,
										BGl_string1813z00zzmodule_modulez00, BgL_arg1129z00_110);
								}
						}
				}
			}
			{	/* Module/module.scm 103 */
				obj_t BgL_mclausez00_114;

				BgL_mclausez00_114 =
					BGl_modulezd2mclausezd2zzmodule_modulez00(BgL_modz00_43);
				{

					if (PAIRP(BgL_mclausez00_114))
						{	/* Module/module.scm 104 */
							obj_t BgL_cdrzd2143zd2_121;

							BgL_cdrzd2143zd2_121 = CDR(BgL_mclausez00_114);
							if ((CAR(BgL_mclausez00_114) == CNST_TABLE_REF(((long) 1))))
								{	/* Module/module.scm 104 */
									if (PAIRP(BgL_cdrzd2143zd2_121))
										{	/* Module/module.scm 104 */
											obj_t BgL_carzd2146zd2_125;

											BgL_carzd2146zd2_125 = CAR(BgL_cdrzd2143zd2_121);
											if (SYMBOLP(BgL_carzd2146zd2_125))
												{	/* Module/module.scm 104 */
													return
														BGl_dozd2modulezd2zzmodule_modulez00
														(BgL_mclausez00_114, BgL_carzd2146zd2_125,
														CDR(BgL_cdrzd2143zd2_121));
												}
											else
												{	/* Module/module.scm 104 */
												BgL_tagzd2136zd2_118:
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1814z00zzmodule_modulez00,
														BGl_string1815z00zzmodule_modulez00, BgL_modz00_43,
														BNIL);
												}
										}
									else
										{	/* Module/module.scm 104 */
											goto BgL_tagzd2136zd2_118;
										}
								}
							else
								{	/* Module/module.scm 104 */
									goto BgL_tagzd2136zd2_118;
								}
						}
					else
						{	/* Module/module.scm 104 */
							goto BgL_tagzd2136zd2_118;
						}
				}
			}
		}

	}



/* &produce-module! */
	obj_t BGl_z62producezd2modulez12za2zzmodule_modulez00(obj_t BgL_envz00_853,
		obj_t BgL_modz00_854)
	{
		{	/* Module/module.scm 101 */
			return BGl_producezd2modulez12zc0zzmodule_modulez00(BgL_modz00_854);
		}

	}



/* do-module */
	obj_t BGl_dozd2modulezd2zzmodule_modulez00(obj_t BgL_mclausez00_44,
		obj_t BgL_namez00_45, obj_t BgL_clausesz00_46)
	{
		{	/* Module/module.scm 113 */
			{	/* Module/module.scm 114 */
				obj_t BgL_clausesz00_130;

				{	/* Module/module.scm 114 */
					obj_t BgL_arg1194z00_171;
					obj_t BgL_arg1197z00_172;

					BgL_arg1194z00_171 = BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
					if (SYMBOLP(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* Module/module.scm 116 */
							obj_t BgL_arg1201z00_174;

							{	/* Module/module.scm 116 */
								obj_t BgL_arg1208z00_175;

								BgL_arg1208z00_175 =
									MAKE_YOUNG_PAIR(BGl_za2mainza2z00zzmodule_modulez00, BNIL);
								BgL_arg1201z00_174 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
									BgL_arg1208z00_175);
							}
							BgL_arg1197z00_172 =
								MAKE_YOUNG_PAIR(BgL_arg1201z00_174, BgL_clausesz00_46);
						}
					else
						{	/* Module/module.scm 115 */
							BgL_arg1197z00_172 = BgL_clausesz00_46;
						}
					BgL_clausesz00_130 =
						MAKE_YOUNG_PAIR(BgL_arg1194z00_171, BgL_arg1197z00_172);
				}
				{	/* Module/module.scm 118 */
					bool_t BgL_test1928z00_1130;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_45,
								CNST_TABLE_REF(((long) 3)))))
						{	/* Module/module.scm 335 */
							BgL_test1928z00_1130 = ((bool_t) 0);
						}
					else
						{	/* Module/module.scm 335 */
							BgL_test1928z00_1130 = ((bool_t) 1);
						}
					if (BgL_test1928z00_1130)
						{	/* Module/module.scm 118 */
							{	/* Module/module.scm 121 */
								obj_t BgL_arg1155z00_132;

								{	/* Module/module.scm 121 */
									obj_t BgL_arg1156z00_133;

									{	/* Module/module.scm 121 */
										obj_t BgL_list1157z00_134;

										BgL_list1157z00_134 = MAKE_YOUNG_PAIR(BgL_namez00_45, BNIL);
										BgL_arg1156z00_133 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string1816z00zzmodule_modulez00,
											BgL_list1157z00_134);
									}
									BgL_arg1155z00_132 = bstring_to_symbol(BgL_arg1156z00_133);
								}
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1155z00_132);
							}
							BGl_za2moduleza2z00zzmodule_modulez00 = BgL_namez00_45;
							BGl_za2modulezd2clauseza2zd2zzmodule_modulez00 =
								BgL_mclausez00_44;
							{	/* Module/module.scm 124 */
								bool_t BgL_test1930z00_1139;

								{	/* Module/module.scm 124 */
									bool_t BgL_res1755z00_658;

									BgL_res1755z00_658 = EPAIRP(BgL_mclausez00_44);
									BgL_test1930z00_1139 = BgL_res1755z00_658;
								}
								if (BgL_test1930z00_1139)
									{	/* Module/module.scm 124 */
										BGl_za2modulezd2locationza2zd2zzmodule_modulez00 =
											CER(((obj_t) BgL_mclausez00_44));
									}
								else
									{	/* Module/module.scm 124 */
										BGl_za2modulezd2locationza2zd2zzmodule_modulez00 = BFALSE;
									}
							}
							BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00
								();
							{	/* Module/module.scm 128 */
								obj_t BgL_clausesz00_136;

								BgL_clausesz00_136 =
									BGl_producezd2libraryzd2clausesz00zzmodule_modulez00
									(BgL_clausesz00_130);
								BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
								{
									obj_t BgL_l1076z00_138;

									BgL_l1076z00_138 = BgL_clausesz00_136;
								BgL_zc3z04anonymousza31159ze3z87_139:
									if (PAIRP(BgL_l1076z00_138))
										{	/* Module/module.scm 133 */
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(CAR
												(BgL_l1076z00_138));
											{
												obj_t BgL_l1076z00_1150;

												BgL_l1076z00_1150 = CDR(BgL_l1076z00_138);
												BgL_l1076z00_138 = BgL_l1076z00_1150;
												goto BgL_zc3z04anonymousza31159ze3z87_139;
											}
										}
									else
										{	/* Module/module.scm 133 */
											((bool_t) 1);
										}
								}
								BGl_za2modulezd2checksumza2zd2zzmodule_modulez00 =
									BGl_checksumzd2modulezd2zzmodule_modulez00(BgL_mclausez00_44);
								{	/* Module/module.scm 135 */
									obj_t BgL_valuez00_144;

									BgL_valuez00_144 =
										BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00
										();
									if (((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Module/module.scm 135 */
											{	/* Module/module.scm 135 */
												obj_t BgL_port1078z00_146;

												{	/* Module/module.scm 135 */
													obj_t BgL_res1758z00_666;

													{	/* Module/module.scm 135 */
														obj_t BgL_tmpz00_1157;

														BgL_tmpz00_1157 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1758z00_666 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1157);
													}
													BgL_port1078z00_146 = BgL_res1758z00_666;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port1078z00_146);
												bgl_display_string(BGl_string1817z00zzmodule_modulez00,
													BgL_port1078z00_146);
												{	/* Module/module.scm 135 */
													obj_t BgL_arg1169z00_147;

													{	/* Module/module.scm 135 */
														bool_t BgL_test1933z00_1162;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Module/module.scm 135 */
																if (INTEGERP
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
																	{	/* Module/module.scm 135 */
																		BgL_test1933z00_1162 =
																			(
																			(long)
																			CINT
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																			> ((long) 1));
																	}
																else
																	{	/* Module/module.scm 135 */
																		BgL_test1933z00_1162 =
																			BGl_2ze3ze3zz__r4_numbers_6_5z00
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																			BINT(((long) 1)));
															}}
														else
															{	/* Module/module.scm 135 */
																BgL_test1933z00_1162 = ((bool_t) 0);
															}
														if (BgL_test1933z00_1162)
															{	/* Module/module.scm 135 */
																BgL_arg1169z00_147 =
																	BGl_string1818z00zzmodule_modulez00;
															}
														else
															{	/* Module/module.scm 135 */
																BgL_arg1169z00_147 =
																	BGl_string1819z00zzmodule_modulez00;
															}
													}
													bgl_display_obj(BgL_arg1169z00_147,
														BgL_port1078z00_146);
												}
												bgl_display_string(BGl_string1820z00zzmodule_modulez00,
													BgL_port1078z00_146);
												bgl_display_char(((unsigned char) 10),
													BgL_port1078z00_146);
											}
											{	/* Module/module.scm 135 */
												obj_t BgL_list1173z00_153;

												BgL_list1173z00_153 =
													MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list1173z00_153);
											}
										}
									else
										{	/* Module/module.scm 135 */
											obj_t BgL_g1062z00_154;
											obj_t BgL_g1063z00_155;

											{	/* Module/module.scm 135 */
												obj_t BgL_list1188z00_168;

												{	/* Module/module.scm 135 */
													obj_t BgL_arg1190z00_169;

													BgL_arg1190z00_169 =
														MAKE_YOUNG_PAIR
														(BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00,
														BNIL);
													BgL_list1188z00_168 =
														MAKE_YOUNG_PAIR
														(BGl_leavezd2functionzd2envz00zztools_errorz00,
														BgL_arg1190z00_169);
												}
												BgL_g1062z00_154 = BgL_list1188z00_168;
											}
											BgL_g1063z00_155 = CNST_TABLE_REF(((long) 4));
											{
												obj_t BgL_hooksz00_157;
												obj_t BgL_hnamesz00_158;

												BgL_hooksz00_157 = BgL_g1062z00_154;
												BgL_hnamesz00_158 = BgL_g1063z00_155;
											BgL_zc3z04anonymousza31174ze3z87_159:
												if (NULLP(BgL_hooksz00_157))
													{	/* Module/module.scm 135 */
														return BgL_valuez00_144;
													}
												else
													{	/* Module/module.scm 135 */
														bool_t BgL_test1937z00_1182;

														{	/* Module/module.scm 135 */
															obj_t BgL_fun1187z00_166;

															BgL_fun1187z00_166 =
																CAR(((obj_t) BgL_hooksz00_157));
															BgL_test1937z00_1182 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1187z00_166)
																(BgL_fun1187z00_166, BEOA));
														}
														if (BgL_test1937z00_1182)
															{	/* Module/module.scm 135 */
																obj_t BgL_arg1178z00_163;
																obj_t BgL_arg1179z00_164;

																BgL_arg1178z00_163 =
																	CDR(((obj_t) BgL_hooksz00_157));
																BgL_arg1179z00_164 =
																	CDR(((obj_t) BgL_hnamesz00_158));
																{
																	obj_t BgL_hnamesz00_1194;
																	obj_t BgL_hooksz00_1193;

																	BgL_hooksz00_1193 = BgL_arg1178z00_163;
																	BgL_hnamesz00_1194 = BgL_arg1179z00_164;
																	BgL_hnamesz00_158 = BgL_hnamesz00_1194;
																	BgL_hooksz00_157 = BgL_hooksz00_1193;
																	goto BgL_zc3z04anonymousza31174ze3z87_159;
																}
															}
														else
															{	/* Module/module.scm 135 */
																obj_t BgL_arg1186z00_165;

																BgL_arg1186z00_165 =
																	CAR(((obj_t) BgL_hnamesz00_158));
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_za2currentzd2passza2zd2zzengine_passz00,
																	BGl_string1821z00zzmodule_modulez00,
																	BgL_arg1186z00_165);
															}
													}
											}
										}
								}
							}
						}
					else
						{	/* Module/module.scm 118 */
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1814z00zzmodule_modulez00,
								BGl_string1822z00zzmodule_modulez00, BgL_mclausez00_44, BNIL);
						}
				}
			}
		}

	}



/* produce-library-clauses */
	obj_t BGl_producezd2libraryzd2clausesz00zzmodule_modulez00(obj_t
		BgL_clausesz00_47)
	{
		{	/* Module/module.scm 142 */
			{	/* Module/module.scm 143 */
				obj_t BgL_producerz00_176;

				BgL_producerz00_176 =
					BGl_findzd2clausezd2producerz00zzmodule_modulez00(CNST_TABLE_REF((
							(long) 5)), CNST_TABLE_REF(((long) 6)));
				{
					obj_t BgL_clausesz00_179;
					obj_t BgL_resz00_180;

					BgL_clausesz00_179 = BgL_clausesz00_47;
					BgL_resz00_180 = BNIL;
				BgL_zc3z04anonymousza31209ze3z87_181:
					if (NULLP(BgL_clausesz00_179))
						{	/* Module/module.scm 147 */
							return bgl_reverse_bang(BgL_resz00_180);
						}
					else
						{	/* Module/module.scm 150 */
							obj_t BgL_g1065z00_183;

							BgL_g1065z00_183 = CAR(((obj_t) BgL_clausesz00_179));
							{
								obj_t BgL_cz00_185;

								BgL_cz00_185 = BgL_g1065z00_183;
							BgL_zc3z04anonymousza31211ze3z87_186:
								{
									obj_t BgL_filesz00_189;

									if (PAIRP(BgL_cz00_185))
										{	/* Module/module.scm 150 */
											if ((CAR(BgL_cz00_185) == CNST_TABLE_REF(((long) 7))))
												{	/* Module/module.scm 150 */
													{	/* Module/module.scm 153 */
														obj_t BgL_ncz00_204;

														BgL_ncz00_204 =
															BGl_prognzd2firstzd2expressionz00zztools_prognz00
															(BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00
															(BgL_cz00_185));
														{	/* Module/module.scm 155 */
															bool_t BgL_test1941z00_1215;

															if ((BgL_ncz00_204 == BUNSPEC))
																{	/* Module/module.scm 155 */
																	BgL_test1941z00_1215 = ((bool_t) 1);
																}
															else
																{	/* Module/module.scm 155 */
																	BgL_test1941z00_1215 =
																		(BgL_ncz00_204 == BFALSE);
																}
															if (BgL_test1941z00_1215)
																{	/* Module/module.scm 156 */
																	obj_t BgL_arg1245z00_207;

																	BgL_arg1245z00_207 =
																		CDR(((obj_t) BgL_clausesz00_179));
																	{
																		obj_t BgL_clausesz00_1221;

																		BgL_clausesz00_1221 = BgL_arg1245z00_207;
																		BgL_clausesz00_179 = BgL_clausesz00_1221;
																		goto BgL_zc3z04anonymousza31209ze3z87_181;
																	}
																}
															else
																{
																	obj_t BgL_cz00_1222;

																	BgL_cz00_1222 = BgL_ncz00_204;
																	BgL_cz00_185 = BgL_cz00_1222;
																	goto BgL_zc3z04anonymousza31211ze3z87_186;
																}
														}
													}
												}
											else
												{	/* Module/module.scm 150 */
													if ((CAR(BgL_cz00_185) == CNST_TABLE_REF(((long) 5))))
														{	/* Module/module.scm 150 */
															PROCEDURE_ENTRY(BgL_producerz00_176)
																(BgL_producerz00_176, BgL_cz00_185, BEOA);
															{	/* Module/module.scm 160 */
																obj_t BgL_arg1247z00_210;

																BgL_arg1247z00_210 =
																	CDR(((obj_t) BgL_clausesz00_179));
																{
																	obj_t BgL_clausesz00_1233;

																	BgL_clausesz00_1233 = BgL_arg1247z00_210;
																	BgL_clausesz00_179 = BgL_clausesz00_1233;
																	goto BgL_zc3z04anonymousza31209ze3z87_181;
																}
															}
														}
													else
														{	/* Module/module.scm 150 */
															if (
																(CAR(BgL_cz00_185) ==
																	CNST_TABLE_REF(((long) 8))))
																{	/* Module/module.scm 150 */
																	BgL_filesz00_189 = CDR(BgL_cz00_185);
																	BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00
																		(BgL_producerz00_176, BgL_filesz00_189);
																	{	/* Module/module.scm 163 */
																		obj_t BgL_arg1250z00_211;
																		obj_t BgL_arg1252z00_212;

																		BgL_arg1250z00_211 =
																			CDR(((obj_t) BgL_clausesz00_179));
																		BgL_arg1252z00_212 =
																			MAKE_YOUNG_PAIR(BgL_cz00_185,
																			BgL_resz00_180);
																		{
																			obj_t BgL_resz00_1243;
																			obj_t BgL_clausesz00_1242;

																			BgL_clausesz00_1242 = BgL_arg1250z00_211;
																			BgL_resz00_1243 = BgL_arg1252z00_212;
																			BgL_resz00_180 = BgL_resz00_1243;
																			BgL_clausesz00_179 = BgL_clausesz00_1242;
																			goto BgL_zc3z04anonymousza31209ze3z87_181;
																		}
																	}
																}
															else
																{	/* Module/module.scm 150 */
																BgL_tagzd2155zd2_191:
																	{	/* Module/module.scm 165 */
																		obj_t BgL_arg1253z00_213;
																		obj_t BgL_arg1254z00_214;

																		BgL_arg1253z00_213 =
																			CDR(((obj_t) BgL_clausesz00_179));
																		BgL_arg1254z00_214 =
																			MAKE_YOUNG_PAIR(BgL_cz00_185,
																			BgL_resz00_180);
																		{
																			obj_t BgL_resz00_1249;
																			obj_t BgL_clausesz00_1248;

																			BgL_clausesz00_1248 = BgL_arg1253z00_213;
																			BgL_resz00_1249 = BgL_arg1254z00_214;
																			BgL_resz00_180 = BgL_resz00_1249;
																			BgL_clausesz00_179 = BgL_clausesz00_1248;
																			goto BgL_zc3z04anonymousza31209ze3z87_181;
																		}
																	}
																}
														}
												}
										}
									else
										{	/* Module/module.scm 150 */
											goto BgL_tagzd2155zd2_191;
										}
								}
							}
						}
				}
			}
		}

	}



/* produce-include-library-clauses */
	bool_t BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00(obj_t
		BgL_producerz00_48, obj_t BgL_filesz00_49)
	{
		{	/* Module/module.scm 170 */
			{
				obj_t BgL_clausez00_235;

				{	/* Module/module.scm 186 */
					obj_t BgL_g1084z00_218;

					BgL_g1084z00_218 =
						BGl_zc3z04anonymousza31264ze3ze70z60zzmodule_modulez00
						(BgL_filesz00_49);
					{
						obj_t BgL_l1081z00_220;

						BgL_l1081z00_220 = BgL_g1084z00_218;
					BgL_zc3z04anonymousza31255ze3z87_221:
						if (PAIRP(BgL_l1081z00_220))
							{	/* Module/module.scm 187 */
								BgL_clausez00_235 = CAR(BgL_l1081z00_220);
								{

									if (PAIRP(BgL_clausez00_235))
										{	/* Module/module.scm 184 */
											if (
												(CAR(BgL_clausez00_235) == CNST_TABLE_REF(((long) 5))))
												{	/* Module/module.scm 184 */
													PROCEDURE_ENTRY(BgL_producerz00_48)
														(BgL_producerz00_48, BgL_clausez00_235, BEOA);
												}
											else
												{	/* Module/module.scm 184 */
													if (
														(CAR(BgL_clausez00_235) ==
															CNST_TABLE_REF(((long) 8))))
														{	/* Module/module.scm 184 */
															obj_t BgL_arg1282z00_248;

															BgL_arg1282z00_248 = CDR(BgL_clausez00_235);
															BBOOL
																(BGl_producezd2includezd2libraryzd2clauseszd2zzmodule_modulez00
																(BgL_producerz00_48, BgL_arg1282z00_248));
														}
													else
														{	/* Module/module.scm 184 */
															if (
																(CAR(BgL_clausez00_235) ==
																	CNST_TABLE_REF(((long) 7))))
																{	/* Module/module.scm 184 */
																	{	/* Module/module.scm 179 */
																		obj_t BgL_ncz00_254;

																		BgL_ncz00_254 =
																			BGl_prognzd2firstzd2expressionz00zztools_prognz00
																			(BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00
																			(BgL_clausez00_235));
																		{	/* Module/module.scm 181 */
																			bool_t BgL_test1950z00_1276;

																			if ((BgL_ncz00_254 == BUNSPEC))
																				{	/* Module/module.scm 181 */
																					BgL_test1950z00_1276 = ((bool_t) 1);
																				}
																			else
																				{	/* Module/module.scm 181 */
																					BgL_test1950z00_1276 =
																						(BgL_ncz00_254 == BFALSE);
																				}
																			if (BgL_test1950z00_1276)
																				{	/* Module/module.scm 181 */
																					BFALSE;
																				}
																			else
																				{	/* Module/module.scm 182 */
																					obj_t BgL_arg1291z00_257;

																					{	/* Module/module.scm 182 */
																						obj_t BgL_list1292z00_258;

																						BgL_list1292z00_258 =
																							MAKE_YOUNG_PAIR(BgL_ncz00_254,
																							BNIL);
																						BgL_arg1291z00_257 =
																							BgL_list1292z00_258;
																					}
																					BGl_producezd2libraryzd2clausesz00zzmodule_modulez00
																						(BgL_arg1291z00_257);
																				}
																		}
																	}
																}
															else
																{	/* Module/module.scm 184 */
																	BUNSPEC;
																}
														}
												}
										}
									else
										{	/* Module/module.scm 184 */
											BUNSPEC;
										}
								}
								{
									obj_t BgL_l1081z00_1283;

									BgL_l1081z00_1283 = CDR(BgL_l1081z00_220);
									BgL_l1081z00_220 = BgL_l1081z00_1283;
									goto BgL_zc3z04anonymousza31255ze3z87_221;
								}
							}
						else
							{	/* Module/module.scm 187 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}

	}



/* <@anonymous:1264>~0 */
	obj_t BGl_zc3z04anonymousza31264ze3ze70z60zzmodule_modulez00(obj_t
		BgL_l1080z00_227)
	{
		{	/* Module/module.scm 187 */
			if (NULLP(BgL_l1080z00_227))
				{	/* Module/module.scm 187 */
					return BNIL;
				}
			else
				{	/* Module/module.scm 187 */
					obj_t BgL_arg1268z00_230;
					obj_t BgL_arg1270z00_231;

					{	/* Module/module.scm 187 */
						obj_t BgL_arg1271z00_232;

						BgL_arg1271z00_232 = CAR(((obj_t) BgL_l1080z00_227));
						BgL_arg1268z00_230 =
							BGl_readzd2directiveszd2zzread_includez00(BgL_arg1271z00_232);
					}
					{	/* Module/module.scm 187 */
						obj_t BgL_arg1273z00_233;

						BgL_arg1273z00_233 = CDR(((obj_t) BgL_l1080z00_227));
						BgL_arg1270z00_231 =
							BGl_zc3z04anonymousza31264ze3ze70z60zzmodule_modulez00
							(BgL_arg1273z00_233);
					}
					return bgl_append2(BgL_arg1268z00_230, BgL_arg1270z00_231);
				}
		}

	}



/* finalize-clause-compilations */
	obj_t BGl_finaliza7ezd2clausezd2compilationsza7zzmodule_modulez00()
	{
		{	/* Module/module.scm 192 */
			{
				obj_t BgL_ccz00_264;
				obj_t BgL_unitsz00_265;

				BgL_ccz00_264 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_unitsz00_265 = BNIL;
			BgL_zc3z04anonymousza31296ze3z87_266:
				if (NULLP(BgL_ccz00_264))
					{	/* Module/module.scm 195 */
						return
							BGl_appendzd221011zd2zzmodule_modulez00
							(BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00(),
							BgL_unitsz00_265);
					}
				else
					{	/* Module/module.scm 197 */
						obj_t BgL_finaliza7erza7_269;

						BgL_finaliza7erza7_269 =
							(((BgL_ccompz00_bglt) COBJECT(
									((BgL_ccompz00_bglt)
										CAR(((obj_t) BgL_ccz00_264)))))->BgL_finaliza7erza7);
						{	/* Module/module.scm 197 */
							obj_t BgL_finalresz00_270;

							BgL_finalresz00_270 =
								PROCEDURE_ENTRY(BgL_finaliza7erza7_269) (BgL_finaliza7erza7_269,
								BEOA);
							{	/* Module/module.scm 198 */

								{	/* Module/module.scm 199 */
									obj_t BgL_arg1299z00_271;
									obj_t BgL_arg1300z00_272;

									BgL_arg1299z00_271 = CDR(((obj_t) BgL_ccz00_264));
									if (PAIRP(BgL_finalresz00_270))
										{	/* Module/module.scm 200 */
											BgL_arg1300z00_272 =
												BGl_appendzd221011zd2zzmodule_modulez00
												(BgL_finalresz00_270, BgL_unitsz00_265);
										}
									else
										{	/* Module/module.scm 200 */
											BgL_arg1300z00_272 = BgL_unitsz00_265;
										}
									{
										obj_t BgL_unitsz00_1311;
										obj_t BgL_ccz00_1310;

										BgL_ccz00_1310 = BgL_arg1299z00_271;
										BgL_unitsz00_1311 = BgL_arg1300z00_272;
										BgL_unitsz00_265 = BgL_unitsz00_1311;
										BgL_ccz00_264 = BgL_ccz00_1310;
										goto BgL_zc3z04anonymousza31296ze3z87_266;
									}
								}
							}
						}
					}
			}
		}

	}



/* produce-module-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_clausez00_50)
	{
		{	/* Module/module.scm 207 */
			{
				obj_t BgL_cz00_277;

				BgL_cz00_277 = BgL_clausez00_50;
			BgL_zc3z04anonymousza31304ze3z87_278:
				{

					if (PAIRP(BgL_cz00_277))
						{	/* Module/module.scm 208 */
							if ((CAR(BgL_cz00_277) == CNST_TABLE_REF(((long) 7))))
								{	/* Module/module.scm 208 */
									{	/* Module/module.scm 211 */
										obj_t BgL_ncz00_290;

										BgL_ncz00_290 =
											BGl_prognzd2firstzd2expressionz00zztools_prognz00
											(BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00
											(BgL_cz00_277));
										{	/* Module/module.scm 213 */
											bool_t BgL_test1957z00_1320;

											if ((BgL_ncz00_290 == BFALSE))
												{	/* Module/module.scm 213 */
													BgL_test1957z00_1320 = ((bool_t) 1);
												}
											else
												{	/* Module/module.scm 213 */
													BgL_test1957z00_1320 = (BgL_ncz00_290 == BUNSPEC);
												}
											if (BgL_test1957z00_1320)
												{	/* Module/module.scm 213 */
													return BFALSE;
												}
											else
												{
													obj_t BgL_cz00_1324;

													BgL_cz00_1324 = BgL_ncz00_290;
													BgL_cz00_277 = BgL_cz00_1324;
													goto BgL_zc3z04anonymousza31304ze3z87_278;
												}
										}
									}
								}
							else
								{	/* Module/module.scm 208 */
									obj_t BgL_carzd2197zd2_287;

									BgL_carzd2197zd2_287 = CAR(BgL_cz00_277);
									if (SYMBOLP(BgL_carzd2197zd2_287))
										{	/* Module/module.scm 216 */
											obj_t BgL_fun1314z00_715;

											BgL_fun1314z00_715 =
												BGl_findzd2clausezd2producerz00zzmodule_modulez00
												(BgL_carzd2197zd2_287, BgL_clausez00_50);
											return
												PROCEDURE_ENTRY(BgL_fun1314z00_715) (BgL_fun1314z00_715,
												BgL_cz00_277, BEOA);
										}
									else
										{	/* Module/module.scm 208 */
										BgL_tagzd2190zd2_282:
											{	/* Module/module.scm 218 */
												obj_t BgL_list1315z00_296;

												BgL_list1315z00_296 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1814z00zzmodule_modulez00,
													BGl_string1823z00zzmodule_modulez00, BgL_clausez00_50,
													BgL_list1315z00_296);
											}
										}
								}
						}
					else
						{	/* Module/module.scm 208 */
							goto BgL_tagzd2190zd2_282;
						}
				}
			}
		}

	}



/* &produce-module-clause! */
	obj_t BGl_z62producezd2modulezd2clausez12z70zzmodule_modulez00(obj_t
		BgL_envz00_857, obj_t BgL_clausez00_858)
	{
		{	/* Module/module.scm 207 */
			return
				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
				(BgL_clausez00_858);
		}

	}



/* install-module-clauses-compiler! */
	obj_t BGl_installzd2modulezd2clauseszd2compilerz12zc0zzmodule_modulez00()
	{
		{	/* Module/module.scm 228 */
			if (NULLP(BGl_za2clausezd2compilersza2zd2zzmodule_modulez00))
				{	/* Module/module.scm 232 */
					obj_t BgL_arg1317z00_299;
					obj_t BgL_arg1319z00_300;
					obj_t BgL_arg1322z00_301;
					obj_t BgL_arg1324z00_302;
					obj_t BgL_arg1325z00_303;
					obj_t BgL_arg1326z00_304;
					obj_t BgL_arg1327z00_305;
					obj_t BgL_arg1328z00_306;
					obj_t BgL_arg1329z00_307;
					obj_t BgL_arg1330z00_308;
					obj_t BgL_arg1331z00_309;
					obj_t BgL_arg1334z00_310;
					obj_t BgL_arg1335z00_311;
					obj_t BgL_arg1337z00_312;
					obj_t BgL_arg1338z00_313;
					obj_t BgL_arg1339z00_314;
					obj_t BgL_arg1340z00_315;

					BgL_arg1317z00_299 = BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
					BgL_arg1319z00_300 = BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
					BgL_arg1322z00_301 = BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
					BgL_arg1324z00_302 = BGl_makezd2usezd2compilerz00zzmodule_impusez00();
					BgL_arg1325z00_303 =
						BGl_makezd2importzd2compilerz00zzmodule_impusez00();
					BgL_arg1326z00_304 =
						BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
					BgL_arg1327z00_305 = BGl_makezd2javazd2compilerz00zzmodule_javaz00();
					BgL_arg1328z00_306 =
						BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
					BgL_arg1329z00_307 =
						BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
					BgL_arg1330z00_308 =
						BGl_makezd2includezd2compilerz00zzmodule_includez00();
					BgL_arg1331z00_309 = BGl_makezd2withzd2compilerz00zzmodule_withz00();
					BgL_arg1334z00_310 =
						BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
					BgL_arg1335z00_311 =
						BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
					BgL_arg1337z00_312 = BGl_makezd2typezd2compilerz00zzmodule_typez00();
					BgL_arg1338z00_313 =
						BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
					BgL_arg1339z00_314 =
						BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
					BgL_arg1340z00_315 =
						BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
					{	/* Module/module.scm 232 */
						obj_t BgL_list1341z00_316;

						{	/* Module/module.scm 232 */
							obj_t BgL_arg1344z00_317;

							{	/* Module/module.scm 232 */
								obj_t BgL_arg1345z00_318;

								{	/* Module/module.scm 232 */
									obj_t BgL_arg1346z00_319;

									{	/* Module/module.scm 232 */
										obj_t BgL_arg1347z00_320;

										{	/* Module/module.scm 232 */
											obj_t BgL_arg1348z00_321;

											{	/* Module/module.scm 232 */
												obj_t BgL_arg1351z00_322;

												{	/* Module/module.scm 232 */
													obj_t BgL_arg1352z00_323;

													{	/* Module/module.scm 232 */
														obj_t BgL_arg1357z00_324;

														{	/* Module/module.scm 232 */
															obj_t BgL_arg1360z00_325;

															{	/* Module/module.scm 232 */
																obj_t BgL_arg1361z00_326;

																{	/* Module/module.scm 232 */
																	obj_t BgL_arg1363z00_327;

																	{	/* Module/module.scm 232 */
																		obj_t BgL_arg1364z00_328;

																		{	/* Module/module.scm 232 */
																			obj_t BgL_arg1367z00_329;

																			{	/* Module/module.scm 232 */
																				obj_t BgL_arg1370z00_330;

																				{	/* Module/module.scm 232 */
																					obj_t BgL_arg1371z00_331;

																					{	/* Module/module.scm 232 */
																						obj_t BgL_arg1372z00_332;

																						BgL_arg1372z00_332 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1340z00_315, BNIL);
																						BgL_arg1371z00_331 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1339z00_314,
																							BgL_arg1372z00_332);
																					}
																					BgL_arg1370z00_330 =
																						MAKE_YOUNG_PAIR(BgL_arg1338z00_313,
																						BgL_arg1371z00_331);
																				}
																				BgL_arg1367z00_329 =
																					MAKE_YOUNG_PAIR(BgL_arg1337z00_312,
																					BgL_arg1370z00_330);
																			}
																			BgL_arg1364z00_328 =
																				MAKE_YOUNG_PAIR(BgL_arg1335z00_311,
																				BgL_arg1367z00_329);
																		}
																		BgL_arg1363z00_327 =
																			MAKE_YOUNG_PAIR(BgL_arg1334z00_310,
																			BgL_arg1364z00_328);
																	}
																	BgL_arg1361z00_326 =
																		MAKE_YOUNG_PAIR(BgL_arg1331z00_309,
																		BgL_arg1363z00_327);
																}
																BgL_arg1360z00_325 =
																	MAKE_YOUNG_PAIR(BgL_arg1330z00_308,
																	BgL_arg1361z00_326);
															}
															BgL_arg1357z00_324 =
																MAKE_YOUNG_PAIR(BgL_arg1329z00_307,
																BgL_arg1360z00_325);
														}
														BgL_arg1352z00_323 =
															MAKE_YOUNG_PAIR(BgL_arg1328z00_306,
															BgL_arg1357z00_324);
													}
													BgL_arg1351z00_322 =
														MAKE_YOUNG_PAIR(BgL_arg1327z00_305,
														BgL_arg1352z00_323);
												}
												BgL_arg1348z00_321 =
													MAKE_YOUNG_PAIR(BgL_arg1326z00_304,
													BgL_arg1351z00_322);
											}
											BgL_arg1347z00_320 =
												MAKE_YOUNG_PAIR(BgL_arg1325z00_303, BgL_arg1348z00_321);
										}
										BgL_arg1346z00_319 =
											MAKE_YOUNG_PAIR(BgL_arg1324z00_302, BgL_arg1347z00_320);
									}
									BgL_arg1345z00_318 =
										MAKE_YOUNG_PAIR(BgL_arg1322z00_301, BgL_arg1346z00_319);
								}
								BgL_arg1344z00_317 =
									MAKE_YOUNG_PAIR(BgL_arg1319z00_300, BgL_arg1345z00_318);
							}
							BgL_list1341z00_316 =
								MAKE_YOUNG_PAIR(BgL_arg1317z00_299, BgL_arg1344z00_317);
						}
						return (BGl_za2clausezd2compilersza2zd2zzmodule_modulez00 =
							BgL_list1341z00_316, BUNSPEC);
					}
				}
			else
				{	/* Module/module.scm 230 */
					return BFALSE;
				}
		}

	}



/* find-clause-producer */
	obj_t BGl_findzd2clausezd2producerz00zzmodule_modulez00(obj_t
		BgL_keywordz00_51, obj_t BgL_clausez00_52)
	{
		{	/* Module/module.scm 253 */
			{	/* Module/module.scm 255 */
				obj_t BgL_unknownzd2clausezd2producerz00_859;

				BgL_unknownzd2clausezd2producerz00_859 =
					MAKE_FX_PROCEDURE
					(BGl_z62unknownzd2clausezd2producerz62zzmodule_modulez00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_unknownzd2clausezd2producerz00_859,
					(int) (((long) 0)), BgL_clausez00_52);
				{
					obj_t BgL_ccz00_335;

					BgL_ccz00_335 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_zc3z04anonymousza31373ze3z87_336:
					if (NULLP(BgL_ccz00_335))
						{	/* Module/module.scm 258 */
							return BgL_unknownzd2clausezd2producerz00_859;
						}
					else
						{	/* Module/module.scm 258 */
							if (
								((((BgL_ccompz00_bglt) COBJECT(
												((BgL_ccompz00_bglt)
													CAR(
														((obj_t) BgL_ccz00_335)))))->BgL_idz00) ==
									BgL_keywordz00_51))
								{	/* Module/module.scm 260 */
									return
										(((BgL_ccompz00_bglt) COBJECT(
												((BgL_ccompz00_bglt)
													CAR(((obj_t) BgL_ccz00_335)))))->BgL_producerz00);
								}
							else
								{
									obj_t BgL_ccz00_1389;

									BgL_ccz00_1389 = CDR(((obj_t) BgL_ccz00_335));
									BgL_ccz00_335 = BgL_ccz00_1389;
									goto BgL_zc3z04anonymousza31373ze3z87_336;
								}
						}
				}
			}
		}

	}



/* &unknown-clause-producer */
	obj_t BGl_z62unknownzd2clausezd2producerz62zzmodule_modulez00(obj_t
		BgL_envz00_860, obj_t BgL_valuesz00_862)
	{
		{	/* Module/module.scm 255 */
			{	/* Module/module.scm 255 */
				obj_t BgL_clausez00_861;

				BgL_clausez00_861 = PROCEDURE_REF(BgL_envz00_860, (int) (((long) 0)));
				{	/* Module/module.scm 255 */
					obj_t BgL_list1420z00_958;

					BgL_list1420z00_958 = MAKE_YOUNG_PAIR(BNIL, BNIL);
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string1814z00zzmodule_modulez00,
						BGl_string1824z00zzmodule_modulez00, BgL_clausez00_861,
						BgL_list1420z00_958);
				}
			}
		}

	}



/* module-initialization-id */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t BgL_idz00_53)
	{
		{	/* Module/module.scm 268 */
			return CNST_TABLE_REF(((long) 9));
		}

	}



/* &module-initialization-id */
	obj_t BGl_z62modulezd2initializa7ationzd2idzc5zzmodule_modulez00(obj_t
		BgL_envz00_863, obj_t BgL_idz00_864)
	{
		{	/* Module/module.scm 268 */
			return
				BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(BgL_idz00_864);
		}

	}



/* do-consume-module */
	obj_t BGl_dozd2consumezd2modulez00zzmodule_modulez00(obj_t BgL_pnamez00_54,
		obj_t BgL_mclausez00_55, obj_t BgL_namez00_56, obj_t BgL_clausesz00_57)
	{
		{	/* Module/module.scm 274 */
			{	/* Module/module.scm 276 */
				bool_t BgL_test1963z00_1398;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_56,
							CNST_TABLE_REF(((long) 3)))))
					{	/* Module/module.scm 335 */
						BgL_test1963z00_1398 = ((bool_t) 0);
					}
				else
					{	/* Module/module.scm 335 */
						BgL_test1963z00_1398 = ((bool_t) 1);
					}
				if (BgL_test1963z00_1398)
					{	/* Module/module.scm 276 */
						if ((BgL_pnamez00_54 == BgL_namez00_56))
							{	/* Module/module.scm 278 */
								return
									BGl_zc3z04anonymousza31423ze3ze70z60zzmodule_modulez00
									(BgL_namez00_56, BgL_clausesz00_57);
							}
						else
							{	/* Module/module.scm 281 */
								obj_t BgL_arg1449z00_361;

								{	/* Module/module.scm 281 */
									obj_t BgL_arg1461z00_363;
									obj_t BgL_arg1462z00_364;

									{	/* Module/module.scm 281 */
										obj_t BgL_res1777z00_731;

										{	/* Module/module.scm 281 */
											obj_t BgL_arg1466z00_730;

											BgL_arg1466z00_730 = SYMBOL_TO_STRING(BgL_namez00_56);
											BgL_res1777z00_731 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_730);
										}
										BgL_arg1461z00_363 = BgL_res1777z00_731;
									}
									{	/* Module/module.scm 282 */
										obj_t BgL_res1778z00_734;

										{	/* Module/module.scm 282 */
											obj_t BgL_arg1466z00_733;

											BgL_arg1466z00_733 = SYMBOL_TO_STRING(BgL_pnamez00_54);
											BgL_res1778z00_734 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_733);
										}
										BgL_arg1462z00_364 = BgL_res1778z00_734;
									}
									{	/* Module/module.scm 280 */
										obj_t BgL_list1463z00_365;

										{	/* Module/module.scm 280 */
											obj_t BgL_arg1464z00_366;

											{	/* Module/module.scm 280 */
												obj_t BgL_arg1465z00_367;

												{	/* Module/module.scm 280 */
													obj_t BgL_arg1474z00_368;

													BgL_arg1474z00_368 =
														MAKE_YOUNG_PAIR(BgL_arg1462z00_364, BNIL);
													BgL_arg1465z00_367 =
														MAKE_YOUNG_PAIR(BGl_string1825z00zzmodule_modulez00,
														BgL_arg1474z00_368);
												}
												BgL_arg1464z00_366 =
													MAKE_YOUNG_PAIR(BgL_arg1461z00_363,
													BgL_arg1465z00_367);
											}
											BgL_list1463z00_365 =
												MAKE_YOUNG_PAIR(BGl_string1826z00zzmodule_modulez00,
												BgL_arg1464z00_366);
										}
										BgL_arg1449z00_361 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1463z00_365);
									}
								}
								{	/* Module/module.scm 279 */
									obj_t BgL_list1450z00_362;

									BgL_list1450z00_362 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string1827z00zzmodule_modulez00, BgL_arg1449z00_361,
										BgL_mclausez00_55, BgL_list1450z00_362);
								}
							}
					}
				else
					{	/* Module/module.scm 277 */
						obj_t BgL_list1475z00_369;

						BgL_list1475z00_369 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1814z00zzmodule_modulez00,
							BGl_string1822z00zzmodule_modulez00, BgL_mclausez00_55,
							BgL_list1475z00_369);
					}
			}
		}

	}



/* <@anonymous:1423>~0 */
	obj_t BGl_zc3z04anonymousza31423ze3ze70z60zzmodule_modulez00(obj_t
		BgL_namez00_939, obj_t BgL_l1086z00_353)
	{
		{	/* Module/module.scm 286 */
			if (NULLP(BgL_l1086z00_353))
				{	/* Module/module.scm 286 */
					return BNIL;
				}
			else
				{	/* Module/module.scm 286 */
					obj_t BgL_arg1441z00_356;
					obj_t BgL_arg1442z00_357;

					{	/* Module/module.scm 286 */
						obj_t BgL_cz00_358;

						BgL_cz00_358 = CAR(((obj_t) BgL_l1086z00_353));
						BgL_arg1441z00_356 =
							BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00
							(BgL_namez00_939, BgL_cz00_358);
					}
					{	/* Module/module.scm 286 */
						obj_t BgL_arg1448z00_359;

						BgL_arg1448z00_359 = CDR(((obj_t) BgL_l1086z00_353));
						BgL_arg1442z00_357 =
							BGl_zc3z04anonymousza31423ze3ze70z60zzmodule_modulez00
							(BgL_namez00_939, BgL_arg1448z00_359);
					}
					return bgl_append2(BgL_arg1441z00_356, BgL_arg1442z00_357);
				}
		}

	}



/* consume-module! */
	BGL_EXPORTED_DEF obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t
		BgL_pnamez00_58, obj_t BgL_modz00_59)
	{
		{	/* Module/module.scm 291 */
			{	/* Module/module.scm 292 */
				obj_t BgL_mclausez00_370;

				BgL_mclausez00_370 =
					BGl_modulezd2mclausezd2zzmodule_modulez00(BgL_modz00_59);
				{

					if (PAIRP(BgL_mclausez00_370))
						{	/* Module/module.scm 293 */
							obj_t BgL_cdrzd2212zd2_377;

							BgL_cdrzd2212zd2_377 = CDR(BgL_mclausez00_370);
							if ((CAR(BgL_mclausez00_370) == CNST_TABLE_REF(((long) 1))))
								{	/* Module/module.scm 293 */
									if (PAIRP(BgL_cdrzd2212zd2_377))
										{	/* Module/module.scm 293 */
											obj_t BgL_carzd2215zd2_381;

											BgL_carzd2215zd2_381 = CAR(BgL_cdrzd2212zd2_377);
											if (SYMBOLP(BgL_carzd2215zd2_381))
												{	/* Module/module.scm 293 */
													return
														BGl_dozd2consumezd2modulez00zzmodule_modulez00
														(BgL_pnamez00_58, BgL_mclausez00_370,
														BgL_carzd2215zd2_381, CDR(BgL_cdrzd2212zd2_377));
												}
											else
												{	/* Module/module.scm 293 */
												BgL_tagzd2205zd2_374:
													{	/* Module/module.scm 297 */
														obj_t BgL_list1494z00_385;

														BgL_list1494z00_385 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string1814z00zzmodule_modulez00,
															BGl_string1828z00zzmodule_modulez00,
															BgL_modz00_59, BgL_list1494z00_385);
													}
												}
										}
									else
										{	/* Module/module.scm 293 */
											goto BgL_tagzd2205zd2_374;
										}
								}
							else
								{	/* Module/module.scm 293 */
									goto BgL_tagzd2205zd2_374;
								}
						}
					else
						{	/* Module/module.scm 293 */
							goto BgL_tagzd2205zd2_374;
						}
				}
			}
		}

	}



/* &consume-module! */
	obj_t BGl_z62consumezd2modulez12za2zzmodule_modulez00(obj_t BgL_envz00_865,
		obj_t BgL_pnamez00_866, obj_t BgL_modz00_867)
	{
		{	/* Module/module.scm 291 */
			return
				BGl_consumezd2modulez12zc0zzmodule_modulez00(BgL_pnamez00_866,
				BgL_modz00_867);
		}

	}



/* consume-module-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t
		BgL_modulez00_60, obj_t BgL_clausez00_61)
	{
		{	/* Module/module.scm 302 */
			{
				obj_t BgL_cz00_387;

				BgL_cz00_387 = BgL_clausez00_61;
			BgL_zc3z04anonymousza31495ze3z87_388:
				{

					if (PAIRP(BgL_cz00_387))
						{	/* Module/module.scm 303 */
							if ((CAR(BgL_cz00_387) == CNST_TABLE_REF(((long) 7))))
								{	/* Module/module.scm 303 */
									{	/* Module/module.scm 306 */
										obj_t BgL_ncz00_402;

										BgL_ncz00_402 =
											BGl_prognzd2firstzd2expressionz00zztools_prognz00
											(BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00
											(BgL_clausez00_61));
										{	/* Module/module.scm 308 */
											bool_t BgL_test1973z00_1454;

											if ((BgL_ncz00_402 == BUNSPEC))
												{	/* Module/module.scm 308 */
													BgL_test1973z00_1454 = ((bool_t) 1);
												}
											else
												{	/* Module/module.scm 308 */
													BgL_test1973z00_1454 = (BgL_ncz00_402 == BFALSE);
												}
											if (BgL_test1973z00_1454)
												{	/* Module/module.scm 308 */
													return BNIL;
												}
											else
												{
													obj_t BgL_cz00_1458;

													BgL_cz00_1458 = BgL_ncz00_402;
													BgL_cz00_387 = BgL_cz00_1458;
													goto BgL_zc3z04anonymousza31495ze3z87_388;
												}
										}
									}
								}
							else
								{	/* Module/module.scm 303 */
									obj_t BgL_carzd2233zd2_398;

									BgL_carzd2233zd2_398 = CAR(BgL_cz00_387);
									if (SYMBOLP(BgL_carzd2233zd2_398))
										{	/* Module/module.scm 312 */
											obj_t BgL_fun1530z00_748;

											BgL_fun1530z00_748 =
												BGl_findzd2clausezd2consumerz00zzmodule_modulez00
												(BgL_carzd2233zd2_398, BgL_clausez00_61);
											return
												PROCEDURE_ENTRY(BgL_fun1530z00_748) (BgL_fun1530z00_748,
												BgL_modulez00_60, BgL_cz00_387, BEOA);
										}
									else
										{	/* Module/module.scm 303 */
										BgL_tagzd2223zd2_393:
											{	/* Module/module.scm 314 */
												obj_t BgL_list1531z00_408;

												BgL_list1531z00_408 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1814z00zzmodule_modulez00,
													BGl_string1823z00zzmodule_modulez00, BgL_clausez00_61,
													BgL_list1531z00_408);
											}
										}
								}
						}
					else
						{	/* Module/module.scm 303 */
							goto BgL_tagzd2223zd2_393;
						}
				}
			}
		}

	}



/* &consume-module-clause! */
	obj_t BGl_z62consumezd2modulezd2clausez12z70zzmodule_modulez00(obj_t
		BgL_envz00_868, obj_t BgL_modulez00_869, obj_t BgL_clausez00_870)
	{
		{	/* Module/module.scm 302 */
			return
				BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(BgL_modulez00_869,
				BgL_clausez00_870);
		}

	}



/* find-clause-consumer */
	obj_t BGl_findzd2clausezd2consumerz00zzmodule_modulez00(obj_t
		BgL_keywordz00_62, obj_t BgL_clausez00_63)
	{
		{	/* Module/module.scm 319 */
			{	/* Module/module.scm 321 */
				obj_t BgL_unknownzd2clausezd2consumerz00_871;

				BgL_unknownzd2clausezd2consumerz00_871 =
					MAKE_FX_PROCEDURE
					(BGl_z62unknownzd2clausezd2consumerz62zzmodule_modulez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_unknownzd2clausezd2consumerz00_871,
					(int) (((long) 0)), BgL_clausez00_63);
				{
					obj_t BgL_ccz00_412;

					BgL_ccz00_412 = BGl_za2clausezd2compilersza2zd2zzmodule_modulez00;
				BgL_zc3z04anonymousza31532ze3z87_413:
					if (NULLP(BgL_ccz00_412))
						{	/* Module/module.scm 324 */
							return BgL_unknownzd2clausezd2consumerz00_871;
						}
					else
						{	/* Module/module.scm 324 */
							if (
								((((BgL_ccompz00_bglt) COBJECT(
												((BgL_ccompz00_bglt)
													CAR(
														((obj_t) BgL_ccz00_412)))))->BgL_idz00) ==
									BgL_keywordz00_62))
								{	/* Module/module.scm 326 */
									return
										(((BgL_ccompz00_bglt) COBJECT(
												((BgL_ccompz00_bglt)
													CAR(((obj_t) BgL_ccz00_412)))))->BgL_consumerz00);
								}
							else
								{
									obj_t BgL_ccz00_1488;

									BgL_ccz00_1488 = CDR(((obj_t) BgL_ccz00_412));
									BgL_ccz00_412 = BgL_ccz00_1488;
									goto BgL_zc3z04anonymousza31532ze3z87_413;
								}
						}
				}
			}
		}

	}



/* &unknown-clause-consumer */
	obj_t BGl_z62unknownzd2clausezd2consumerz62zzmodule_modulez00(obj_t
		BgL_envz00_872, obj_t BgL_modulez00_874, obj_t BgL_valuesz00_875)
	{
		{	/* Module/module.scm 321 */
			{	/* Module/module.scm 321 */
				obj_t BgL_clausez00_873;

				BgL_clausez00_873 = PROCEDURE_REF(BgL_envz00_872, (int) (((long) 0)));
				{	/* Module/module.scm 321 */
					obj_t BgL_list1560z00_960;

					BgL_list1560z00_960 = MAKE_YOUNG_PAIR(BNIL, BNIL);
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string1814z00zzmodule_modulez00,
						BGl_string1824z00zzmodule_modulez00, BgL_clausez00_873,
						BgL_list1560z00_960);
				}
			}
		}

	}



/* checksum-module */
	obj_t BGl_checksumzd2modulezd2zzmodule_modulez00(obj_t BgL_modz00_65)
	{
		{	/* Module/module.scm 340 */
			{	/* Module/module.scm 341 */
				obj_t BgL_mclausez00_429;

				BgL_mclausez00_429 =
					BGl_modulezd2mclausezd2zzmodule_modulez00(BgL_modz00_65);
				{
					obj_t BgL_namez00_430;
					obj_t BgL_clausesz00_431;

					if (PAIRP(BgL_mclausez00_429))
						{	/* Module/module.scm 342 */
							obj_t BgL_cdrzd2251zd2_436;

							BgL_cdrzd2251zd2_436 = CDR(BgL_mclausez00_429);
							if ((CAR(BgL_mclausez00_429) == CNST_TABLE_REF(((long) 1))))
								{	/* Module/module.scm 342 */
									if (PAIRP(BgL_cdrzd2251zd2_436))
										{	/* Module/module.scm 342 */
											obj_t BgL_carzd2254zd2_440;

											BgL_carzd2254zd2_440 = CAR(BgL_cdrzd2251zd2_436);
											if (SYMBOLP(BgL_carzd2254zd2_440))
												{	/* Module/module.scm 342 */
													BgL_namez00_430 = BgL_carzd2254zd2_440;
													BgL_clausesz00_431 = CDR(BgL_cdrzd2251zd2_436);
													{	/* Module/module.scm 345 */
														bool_t BgL_test1982z00_1508;

														if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_namez00_430, CNST_TABLE_REF(((long) 3)))))
															{	/* Module/module.scm 335 */
																BgL_test1982z00_1508 = ((bool_t) 0);
															}
														else
															{	/* Module/module.scm 335 */
																BgL_test1982z00_1508 = ((bool_t) 1);
															}
														if (BgL_test1982z00_1508)
															{	/* Module/module.scm 345 */
																return
																	BINT
																	(BGl_modulezd2checksumzd2zzmodule_checksumz00
																	(BgL_mclausez00_429,
																		BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00));
															}
														else
															{	/* Module/module.scm 346 */
																obj_t BgL_list1577z00_445;

																BgL_list1577z00_445 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																return
																	BGl_userzd2errorzd2zztools_errorz00
																	(BGl_string1814z00zzmodule_modulez00,
																	BGl_string1822z00zzmodule_modulez00,
																	BgL_modz00_65, BgL_list1577z00_445);
															}
													}
												}
											else
												{	/* Module/module.scm 342 */
												BgL_tagzd2244zd2_433:
													{	/* Module/module.scm 350 */
														obj_t BgL_list1578z00_446;

														BgL_list1578z00_446 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string1814z00zzmodule_modulez00,
															BGl_string1828z00zzmodule_modulez00,
															BgL_modz00_65, BgL_list1578z00_446);
													}
												}
										}
									else
										{	/* Module/module.scm 342 */
											goto BgL_tagzd2244zd2_433;
										}
								}
							else
								{	/* Module/module.scm 342 */
									goto BgL_tagzd2244zd2_433;
								}
						}
					else
						{	/* Module/module.scm 342 */
							goto BgL_tagzd2244zd2_433;
						}
				}
			}
		}

	}



/* dump-module */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t
		BgL_modulez00_66)
	{
		{	/* Module/module.scm 355 */
			{	/* Module/module.scm 356 */
				obj_t BgL_outz00_447;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Module/module.scm 357 */
						BgL_outz00_447 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Module/module.scm 357 */
						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 10))))
							{	/* Module/module.scm 359 */
								BgL_outz00_447 = BFALSE;
							}
						else
							{	/* Module/module.scm 361 */
								bool_t BgL_test1986z00_1525;

								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* Module/module.scm 361 */
										obj_t BgL_tmpz00_1528;

										BgL_tmpz00_1528 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_test1986z00_1525 = STRINGP(BgL_tmpz00_1528);
									}
								else
									{	/* Module/module.scm 361 */
										BgL_test1986z00_1525 = ((bool_t) 0);
									}
								if (BgL_test1986z00_1525)
									{	/* Module/module.scm 361 */
										BgL_outz00_447 =
											string_append(BGl_prefixz00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
											BGl_string1829z00zzmodule_modulez00);
									}
								else
									{	/* Module/module.scm 361 */
										BgL_outz00_447 = BFALSE;
									}
							}
					}
				{	/* Module/module.scm 356 */
					obj_t BgL_portz00_448;

					if (STRINGP(BgL_outz00_447))
						{	/* Module/module.scm 366 */

							BgL_portz00_448 =
								BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_outz00_447, BTRUE);
						}
					else
						{	/* Module/module.scm 367 */
							obj_t BgL_res1792z00_774;

							{	/* Module/module.scm 367 */
								obj_t BgL_tmpz00_1537;

								BgL_tmpz00_1537 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1792z00_774 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1537);
							}
							BgL_portz00_448 = BgL_res1792z00_774;
						}
					{	/* Module/module.scm 365 */

						if (OUTPUT_PORTP(BgL_portz00_448))
							{	/* Module/module.scm 370 */
								obj_t BgL_exitd1067z00_450;

								BgL_exitd1067z00_450 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Module/module.scm 374 */
									obj_t BgL_zc3z04anonymousza31581ze3z87_876;

									BgL_zc3z04anonymousza31581ze3z87_876 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31581ze3ze5zzmodule_modulez00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31581ze3z87_876,
										(int) (((long) 0)), BgL_portz00_448);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1067z00_450,
										BgL_zc3z04anonymousza31581ze3z87_876);
									{	/* Module/module.scm 372 */
										obj_t BgL_tmp1069z00_452;

										{	/* Module/module.scm 372 */
											obj_t BgL_list1580z00_453;

											BgL_list1580z00_453 =
												MAKE_YOUNG_PAIR(BgL_portz00_448, BNIL);
											BGl_writez00zz__r4_output_6_10_3z00(BgL_modulez00_66,
												BgL_list1580z00_453);
										}
										BgL_tmp1069z00_452 =
											bgl_display_char(((unsigned char) 10), BgL_portz00_448);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1067z00_450);
										bgl_close_output_port(BgL_portz00_448);
										return BgL_tmp1069z00_452;
									}
								}
							}
						else
							{	/* Module/module.scm 368 */
								return
									BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 11)),
									BGl_string1830z00zzmodule_modulez00, BgL_outz00_447);
		}}}}}

	}



/* &dump-module */
	obj_t BGl_z62dumpzd2modulezb0zzmodule_modulez00(obj_t BgL_envz00_877,
		obj_t BgL_modulez00_878)
	{
		{	/* Module/module.scm 355 */
			return BGl_dumpzd2modulezd2zzmodule_modulez00(BgL_modulez00_878);
		}

	}



/* &<@anonymous:1581> */
	obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_879)
	{
		{	/* Module/module.scm 370 */
			{	/* Module/module.scm 374 */
				obj_t BgL_portz00_880;

				BgL_portz00_880 = PROCEDURE_REF(BgL_envz00_879, (int) (((long) 0)));
				return bgl_close_output_port(((obj_t) BgL_portz00_880));
			}
		}

	}



/* module-checksum-object */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00()
	{
		{	/* Module/module.scm 379 */
			{	/* Module/module.scm 380 */
				obj_t BgL_list1598z00_468;

				{	/* Module/module.scm 380 */
					obj_t BgL_arg1599z00_469;

					{	/* Module/module.scm 380 */
						obj_t BgL_arg1604z00_470;

						BgL_arg1604z00_470 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1599z00_469 =
							MAKE_YOUNG_PAIR(BGl_string1831z00zzmodule_modulez00,
							BgL_arg1604z00_470);
					}
					BgL_list1598z00_468 =
						MAKE_YOUNG_PAIR(BGl_string1812z00zzmodule_modulez00,
						BgL_arg1599z00_469);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1598z00_468);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1831z00zzmodule_modulez00;
			{	/* Module/module.scm 380 */
				obj_t BgL_g1070z00_471;

				BgL_g1070z00_471 = BNIL;
				{
					obj_t BgL_hooksz00_474;
					obj_t BgL_hnamesz00_475;

					BgL_hooksz00_474 = BgL_g1070z00_471;
					BgL_hnamesz00_475 = BNIL;
				BgL_zc3z04anonymousza31605ze3z87_476:
					if (NULLP(BgL_hooksz00_474))
						{	/* Module/module.scm 380 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Module/module.scm 380 */
							bool_t BgL_test1991z00_1571;

							{	/* Module/module.scm 380 */
								obj_t BgL_fun1614z00_483;

								BgL_fun1614z00_483 = CAR(((obj_t) BgL_hooksz00_474));
								BgL_test1991z00_1571 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1614z00_483) (BgL_fun1614z00_483,
										BEOA));
							}
							if (BgL_test1991z00_1571)
								{	/* Module/module.scm 380 */
									obj_t BgL_arg1611z00_480;
									obj_t BgL_arg1612z00_481;

									BgL_arg1611z00_480 = CDR(((obj_t) BgL_hooksz00_474));
									BgL_arg1612z00_481 = CDR(((obj_t) BgL_hnamesz00_475));
									{
										obj_t BgL_hnamesz00_1583;
										obj_t BgL_hooksz00_1582;

										BgL_hooksz00_1582 = BgL_arg1611z00_480;
										BgL_hnamesz00_1583 = BgL_arg1612z00_481;
										BgL_hnamesz00_475 = BgL_hnamesz00_1583;
										BgL_hooksz00_474 = BgL_hooksz00_1582;
										goto BgL_zc3z04anonymousza31605ze3z87_476;
									}
								}
							else
								{	/* Module/module.scm 380 */
									obj_t BgL_arg1613z00_482;

									BgL_arg1613z00_482 = CAR(((obj_t) BgL_hnamesz00_475));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1831z00zzmodule_modulez00,
										BGl_string1813z00zzmodule_modulez00, BgL_arg1613z00_482);
								}
						}
				}
			}
			{	/* Module/module.scm 381 */
				obj_t BgL_checksumz00_486;
				obj_t BgL_destz00_487;

				BgL_checksumz00_486 = BGl_za2modulezd2checksumza2zd2zzmodule_modulez00;
				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Module/module.scm 382 */
						if (
							(BGl_za2passza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 12))))
							{	/* Module/module.scm 387 */
								BgL_destz00_487 = BGl_za2destza2z00zzengine_paramz00;
							}
						else
							{	/* Module/module.scm 387 */
								BgL_destz00_487 =
									string_append(BGl_prefixz00zz__osz00
									(BGl_za2destza2z00zzengine_paramz00),
									BGl_string1832z00zzmodule_modulez00);
							}
					}
				else
					{	/* Module/module.scm 383 */
						bool_t BgL_test1994z00_1594;

						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* Module/module.scm 384 */
								obj_t BgL_tmpz00_1597;

								BgL_tmpz00_1597 =
									CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								BgL_test1994z00_1594 = STRINGP(BgL_tmpz00_1597);
							}
						else
							{	/* Module/module.scm 383 */
								BgL_test1994z00_1594 = ((bool_t) 0);
							}
						if (BgL_test1994z00_1594)
							{	/* Module/module.scm 383 */
								BgL_destz00_487 =
									string_append(BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
									BGl_string1832z00zzmodule_modulez00);
							}
						else
							{	/* Module/module.scm 383 */
								BgL_destz00_487 = BFALSE;
							}
					}
				{

					{	/* Module/module.scm 402 */
						bool_t BgL_test1996z00_1603;

						if (STRINGP(BgL_destz00_487))
							{	/* Module/module.scm 402 */
								BgL_test1996z00_1603 =
									fexists(BSTRING_TO_STRING(BgL_destz00_487));
							}
						else
							{	/* Module/module.scm 402 */
								BgL_test1996z00_1603 = ((bool_t) 0);
							}
						if (BgL_test1996z00_1603)
							{	/* Module/module.scm 405 */
								obj_t BgL_iportz00_491;

								{	/* Module/module.scm 405 */

									BgL_iportz00_491 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_destz00_487, BTRUE, BINT(((long) 5000000)));
								}
								if (INPUT_PORTP(BgL_iportz00_491))
									{	/* Module/module.scm 410 */
										obj_t BgL_csz00_493;

										{	/* Module/module.scm 410 */

											{	/* Module/module.scm 410 */

												BgL_csz00_493 =
													BGl_readz00zz__readerz00(BgL_iportz00_491, BFALSE);
											}
										}
										bgl_close_input_port(BgL_iportz00_491);
										if (
											((long) CINT(BgL_csz00_493) ==
												(long) CINT(BgL_checksumz00_486)))
											{	/* Module/module.scm 412 */
												BFALSE;
											}
										else
											{	/* Module/module.scm 412 */
												{	/* Module/module.scm 414 */
													char *BgL_stringz00_804;

													BgL_stringz00_804 =
														BSTRING_TO_STRING(BgL_destz00_487);
													if (unlink(BgL_stringz00_804))
														{	/* Module/module.scm 414 */
															((bool_t) 0);
														}
													else
														{	/* Module/module.scm 414 */
															((bool_t) 1);
														}
												}
											BgL_zc3z04anonymousza31621ze3z87_502:
												if (STRINGP(BgL_destz00_487))
													{	/* Module/module.scm 392 */
														obj_t BgL_oportz00_504;

														{	/* Module/module.scm 392 */

															BgL_oportz00_504 =
																BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
																(BgL_destz00_487, BTRUE);
														}
														if (OUTPUT_PORTP(BgL_oportz00_504))
															{	/* Module/module.scm 393 */
																bgl_display_obj(BgL_checksumz00_486,
																	BgL_oportz00_504);
																bgl_display_char(((unsigned char) 10),
																	BgL_oportz00_504);
																bgl_close_output_port(BgL_oportz00_504);
															}
														else
															{	/* Module/module.scm 393 */
																BGl_errorz00zz__errorz00
																	(BGl_string1833z00zzmodule_modulez00,
																	BGl_string1834z00zzmodule_modulez00,
																	BgL_destz00_487);
															}
													}
												else
													{	/* Module/module.scm 400 */
														obj_t BgL_port1088z00_509;

														{	/* Module/module.scm 400 */
															obj_t BgL_res1799z00_795;

															{	/* Module/module.scm 400 */
																obj_t BgL_tmpz00_1630;

																BgL_tmpz00_1630 = BGL_CURRENT_DYNAMIC_ENV();
																BgL_res1799z00_795 =
																	BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1630);
															}
															BgL_port1088z00_509 = BgL_res1799z00_795;
														}
														bgl_display_obj(BgL_checksumz00_486,
															BgL_port1088z00_509);
														bgl_display_char(((unsigned char) 10),
															BgL_port1088z00_509);
									}}}
								else
									{	/* Module/module.scm 406 */
										BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1833z00zzmodule_modulez00,
											BGl_string1835z00zzmodule_modulez00, BgL_destz00_487,
											BNIL);
									}
							}
						else
							{	/* Module/module.scm 402 */
								goto BgL_zc3z04anonymousza31621ze3z87_502;
							}
					}
				}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Module/module.scm 418 */
					{	/* Module/module.scm 418 */
						obj_t BgL_port1089z00_523;

						{	/* Module/module.scm 418 */
							obj_t BgL_res1804z00_809;

							{	/* Module/module.scm 418 */
								obj_t BgL_tmpz00_1639;

								BgL_tmpz00_1639 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1804z00_809 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1639);
							}
							BgL_port1089z00_523 = BgL_res1804z00_809;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1089z00_523);
						bgl_display_string(BGl_string1817z00zzmodule_modulez00,
							BgL_port1089z00_523);
						{	/* Module/module.scm 418 */
							obj_t BgL_arg1644z00_524;

							{	/* Module/module.scm 418 */
								bool_t BgL_test2004z00_1644;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Module/module.scm 418 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Module/module.scm 418 */
												BgL_test2004z00_1644 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Module/module.scm 418 */
												BgL_test2004z00_1644 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Module/module.scm 418 */
										BgL_test2004z00_1644 = ((bool_t) 0);
									}
								if (BgL_test2004z00_1644)
									{	/* Module/module.scm 418 */
										BgL_arg1644z00_524 = BGl_string1818z00zzmodule_modulez00;
									}
								else
									{	/* Module/module.scm 418 */
										BgL_arg1644z00_524 = BGl_string1819z00zzmodule_modulez00;
									}
							}
							bgl_display_obj(BgL_arg1644z00_524, BgL_port1089z00_523);
						}
						bgl_display_string(BGl_string1820z00zzmodule_modulez00,
							BgL_port1089z00_523);
						bgl_display_char(((unsigned char) 10), BgL_port1089z00_523);
					}
					{	/* Module/module.scm 418 */
						obj_t BgL_list1648z00_530;

						BgL_list1648z00_530 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1648z00_530);
					}
				}
			else
				{	/* Module/module.scm 418 */
					obj_t BgL_g1072z00_531;

					BgL_g1072z00_531 = BNIL;
					{
						obj_t BgL_hooksz00_534;
						obj_t BgL_hnamesz00_535;

						BgL_hooksz00_534 = BgL_g1072z00_531;
						BgL_hnamesz00_535 = BNIL;
					BgL_zc3z04anonymousza31649ze3z87_536:
						if (NULLP(BgL_hooksz00_534))
							{	/* Module/module.scm 418 */
								return BTRUE;
							}
						else
							{	/* Module/module.scm 418 */
								bool_t BgL_test2008z00_1661;

								{	/* Module/module.scm 418 */
									obj_t BgL_fun1665z00_543;

									BgL_fun1665z00_543 = CAR(((obj_t) BgL_hooksz00_534));
									BgL_test2008z00_1661 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1665z00_543)
										(BgL_fun1665z00_543, BEOA));
								}
								if (BgL_test2008z00_1661)
									{	/* Module/module.scm 418 */
										obj_t BgL_arg1662z00_540;
										obj_t BgL_arg1663z00_541;

										BgL_arg1662z00_540 = CDR(((obj_t) BgL_hooksz00_534));
										BgL_arg1663z00_541 = CDR(((obj_t) BgL_hnamesz00_535));
										{
											obj_t BgL_hnamesz00_1673;
											obj_t BgL_hooksz00_1672;

											BgL_hooksz00_1672 = BgL_arg1662z00_540;
											BgL_hnamesz00_1673 = BgL_arg1663z00_541;
											BgL_hnamesz00_535 = BgL_hnamesz00_1673;
											BgL_hooksz00_534 = BgL_hooksz00_1672;
											goto BgL_zc3z04anonymousza31649ze3z87_536;
										}
									}
								else
									{	/* Module/module.scm 418 */
										obj_t BgL_arg1664z00_542;

										BgL_arg1664z00_542 = CAR(((obj_t) BgL_hnamesz00_535));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1821z00zzmodule_modulez00, BgL_arg1664z00_542);
									}
							}
					}
				}
		}

	}



/* &module-checksum-object */
	obj_t BGl_z62modulezd2checksumzd2objectz62zzmodule_modulez00(obj_t
		BgL_envz00_881)
	{
		{	/* Module/module.scm 379 */
			return BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			{	/* Module/module.scm 45 */
				obj_t BgL_arg1684z00_549;
				obj_t BgL_arg1685z00_550;

				{	/* Module/module.scm 45 */
					obj_t BgL_v1090z00_564;

					BgL_v1090z00_564 = create_vector(((long) 4));
					{	/* Module/module.scm 45 */
						obj_t BgL_arg1695z00_565;

						BgL_arg1695z00_565 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc1837z00zzmodule_modulez00,
							BGl_proc1836z00zzmodule_modulez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1090z00_564, ((long) 0), BgL_arg1695z00_565);
					}
					{	/* Module/module.scm 45 */
						obj_t BgL_arg1704z00_575;

						BgL_arg1704z00_575 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc1840z00zzmodule_modulez00,
							BGl_proc1839z00zzmodule_modulez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1838z00zzmodule_modulez00,
							CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1090z00_564, ((long) 1), BgL_arg1704z00_575);
					}
					{	/* Module/module.scm 45 */
						obj_t BgL_arg1719z00_590;

						BgL_arg1719z00_590 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc1843z00zzmodule_modulez00,
							BGl_proc1842z00zzmodule_modulez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1841z00zzmodule_modulez00,
							CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1090z00_564, ((long) 2), BgL_arg1719z00_590);
					}
					{	/* Module/module.scm 45 */
						obj_t BgL_arg1732z00_606;

						BgL_arg1732z00_606 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc1846z00zzmodule_modulez00,
							BGl_proc1845z00zzmodule_modulez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1844z00zzmodule_modulez00,
							CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1090z00_564, ((long) 3), BgL_arg1732z00_606);
					}
					BgL_arg1684z00_549 = BgL_v1090z00_564;
				}
				{	/* Module/module.scm 45 */
					obj_t BgL_v1091z00_620;

					BgL_v1091z00_620 = create_vector(((long) 0));
					BgL_arg1685z00_550 = BgL_v1091z00_620;
				}
				return (BGl_ccompz00zzmodule_modulez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 19)),
						CNST_TABLE_REF(((long) 20)), BGl_objectz00zz__objectz00,
						((long) 46620), BGl_proc1849z00zzmodule_modulez00,
						BGl_proc1848z00zzmodule_modulez00, BFALSE,
						BGl_proc1847z00zzmodule_modulez00, BFALSE, BgL_arg1684z00_549,
						BgL_arg1685z00_550), BUNSPEC);
		}}

	}



/* &<@anonymous:1693> */
	obj_t BGl_z62zc3z04anonymousza31693ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_902, obj_t BgL_new1052z00_903)
	{
		{	/* Module/module.scm 45 */
			{
				BgL_ccompz00_bglt BgL_auxz00_1699;

				((((BgL_ccompz00_bglt) COBJECT(
								((BgL_ccompz00_bglt) BgL_new1052z00_903)))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 21))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(((BgL_ccompz00_bglt)
									BgL_new1052z00_903)))->BgL_producerz00) =
					((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(((BgL_ccompz00_bglt)
									BgL_new1052z00_903)))->BgL_consumerz00) =
					((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(((BgL_ccompz00_bglt)
									BgL_new1052z00_903)))->BgL_finaliza7erza7) =
					((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				BgL_auxz00_1699 = ((BgL_ccompz00_bglt) BgL_new1052z00_903);
				return ((obj_t) BgL_auxz00_1699);
			}
		}

	}



/* &lambda1688 */
	BgL_ccompz00_bglt BGl_z62lambda1688z62zzmodule_modulez00(obj_t BgL_envz00_904)
	{
		{	/* Module/module.scm 45 */
			{	/* Module/module.scm 45 */
				BgL_ccompz00_bglt BgL_new1051z00_962;

				BgL_new1051z00_962 =
					((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ccompz00_bgl))));
				{	/* Module/module.scm 45 */
					long BgL_arg1692z00_963;

					{	/* Module/module.scm 45 */
						long BgL_res1810z00_964;

						BgL_res1810z00_964 =
							BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
						BgL_arg1692z00_963 = BgL_res1810z00_964;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1051z00_962), BgL_arg1692z00_963);
				}
				return BgL_new1051z00_962;
			}
		}

	}



/* &lambda1686 */
	BgL_ccompz00_bglt BGl_z62lambda1686z62zzmodule_modulez00(obj_t BgL_envz00_905,
		obj_t BgL_id1047z00_906, obj_t BgL_producer1048z00_907,
		obj_t BgL_consumer1049z00_908, obj_t BgL_finaliza7er1050za7_909)
	{
		{	/* Module/module.scm 45 */
			{	/* Module/module.scm 45 */
				BgL_ccompz00_bglt BgL_new1075z00_969;

				{	/* Module/module.scm 45 */
					BgL_ccompz00_bglt BgL_new1074z00_970;

					BgL_new1074z00_970 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/module.scm 45 */
						long BgL_arg1687z00_971;

						{	/* Module/module.scm 45 */
							long BgL_res1809z00_972;

							BgL_res1809z00_972 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1687z00_971 = BgL_res1809z00_972;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1074z00_970), BgL_arg1687z00_971);
					}
					BgL_new1075z00_969 = BgL_new1074z00_970;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_969))->BgL_idz00) =
					((obj_t) ((obj_t) BgL_id1047z00_906)), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_969))->BgL_producerz00) =
					((obj_t) ((obj_t) BgL_producer1048z00_907)), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_969))->BgL_consumerz00) =
					((obj_t) ((obj_t) BgL_consumer1049z00_908)), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_969))->
						BgL_finaliza7erza7) =
					((obj_t) ((obj_t) BgL_finaliza7er1050za7_909)), BUNSPEC);
				return BgL_new1075z00_969;
			}
		}

	}



/* &<@anonymous:1742> */
	obj_t BGl_z62zc3z04anonymousza31742ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_910)
	{
		{	/* Module/module.scm 45 */
			return BGl_proc1850z00zzmodule_modulez00;
		}

	}



/* &lambda1741 */
	obj_t BGl_z62lambda1741z62zzmodule_modulez00(obj_t BgL_envz00_911,
		obj_t BgL_oz00_912, obj_t BgL_vz00_913)
	{
		{	/* Module/module.scm 45 */
			return
				((((BgL_ccompz00_bglt) COBJECT(
							((BgL_ccompz00_bglt) BgL_oz00_912)))->BgL_finaliza7erza7) =
				((obj_t) ((obj_t) BgL_vz00_913)), BUNSPEC);
		}

	}



/* &lambda1740 */
	obj_t BGl_z62lambda1740z62zzmodule_modulez00(obj_t BgL_envz00_914,
		obj_t BgL_oz00_915)
	{
		{	/* Module/module.scm 45 */
			return
				(((BgL_ccompz00_bglt) COBJECT(
						((BgL_ccompz00_bglt) BgL_oz00_915)))->BgL_finaliza7erza7);
		}

	}



/* &<@anonymous:1743> */
	obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_916)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 22));
		}

	}



/* &<@anonymous:1730> */
	obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_917)
	{
		{	/* Module/module.scm 45 */
			return BGl_proc1851z00zzmodule_modulez00;
		}

	}



/* &lambda1729 */
	obj_t BGl_z62lambda1729z62zzmodule_modulez00(obj_t BgL_envz00_918,
		obj_t BgL_oz00_919, obj_t BgL_vz00_920)
	{
		{	/* Module/module.scm 45 */
			return
				((((BgL_ccompz00_bglt) COBJECT(
							((BgL_ccompz00_bglt) BgL_oz00_919)))->BgL_consumerz00) = ((obj_t)
					((obj_t) BgL_vz00_920)), BUNSPEC);
		}

	}



/* &lambda1728 */
	obj_t BGl_z62lambda1728z62zzmodule_modulez00(obj_t BgL_envz00_921,
		obj_t BgL_oz00_922)
	{
		{	/* Module/module.scm 45 */
			return
				(((BgL_ccompz00_bglt) COBJECT(
						((BgL_ccompz00_bglt) BgL_oz00_922)))->BgL_consumerz00);
		}

	}



/* &<@anonymous:1731> */
	obj_t BGl_z62zc3z04anonymousza31731ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_923, obj_t BgL_mz00_924, obj_t BgL_cz00_925)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &<@anonymous:1714> */
	obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_926)
	{
		{	/* Module/module.scm 45 */
			return BGl_proc1852z00zzmodule_modulez00;
		}

	}



/* &lambda1713 */
	obj_t BGl_z62lambda1713z62zzmodule_modulez00(obj_t BgL_envz00_927,
		obj_t BgL_oz00_928, obj_t BgL_vz00_929)
	{
		{	/* Module/module.scm 45 */
			return
				((((BgL_ccompz00_bglt) COBJECT(
							((BgL_ccompz00_bglt) BgL_oz00_928)))->BgL_producerz00) = ((obj_t)
					((obj_t) BgL_vz00_929)), BUNSPEC);
		}

	}



/* &lambda1712 */
	obj_t BGl_z62lambda1712z62zzmodule_modulez00(obj_t BgL_envz00_930,
		obj_t BgL_oz00_931)
	{
		{	/* Module/module.scm 45 */
			return
				(((BgL_ccompz00_bglt) COBJECT(
						((BgL_ccompz00_bglt) BgL_oz00_931)))->BgL_producerz00);
		}

	}



/* &<@anonymous:1715> */
	obj_t BGl_z62zc3z04anonymousza31715ze3ze5zzmodule_modulez00(obj_t
		BgL_envz00_932, obj_t BgL_cz00_933)
	{
		{	/* Module/module.scm 50 */
			return BNIL;
		}

	}



/* &lambda1699 */
	obj_t BGl_z62lambda1699z62zzmodule_modulez00(obj_t BgL_envz00_934,
		obj_t BgL_oz00_935, obj_t BgL_vz00_936)
	{
		{	/* Module/module.scm 45 */
			return
				((((BgL_ccompz00_bglt) COBJECT(
							((BgL_ccompz00_bglt) BgL_oz00_935)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_936)), BUNSPEC);
		}

	}



/* &lambda1698 */
	obj_t BGl_z62lambda1698z62zzmodule_modulez00(obj_t BgL_envz00_937,
		obj_t BgL_oz00_938)
	{
		{	/* Module/module.scm 45 */
			return
				(((BgL_ccompz00_bglt) COBJECT(
						((BgL_ccompz00_bglt) BgL_oz00_938)))->BgL_idz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_modulez00()
	{
		{	/* Module/module.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 147989034),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_mainz00(((long) 210000959),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_statexpz00(((long) 161201135),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_withz00(((long) 54249533),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 410404681),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 42743827),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 93940891),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_loadz00(((long) 422032789),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 433305537),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 457474423),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_optionz00(((long) 130650123),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 316726430),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzread_includez00(((long) 236487969),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
			return
				BGl_modulezd2initializa7ationz75zzread_inlinez00(((long) 500058920),
				BSTRING_TO_STRING(BGl_string1853z00zzmodule_modulez00));
		}

	}

#ifdef __cplusplus
}
#endif
