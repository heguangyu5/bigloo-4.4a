/*===========================================================================*/
/*   (Jas/as.scm)                                                            */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/as.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_jastypez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}                 *BgL_jastypez00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_attributez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_typez00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_infoz00;
	}                   *BgL_attributez00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	extern obj_t BGl_classfilez00zzjas_classfilez00;
	extern BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_getzd2localvarszd2zzjas_asz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static bool_t
		BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00(BgL_classfilez00_bglt);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static BgL_attributez00_bglt
		BGl_aszd2codezd2zzjas_asz00(BgL_classfilez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_za2za2sdefileza2za2z00zzjas_asz00 = BUNSPEC;
	extern obj_t BGl_resolvezd2widezd2zzjas_widez00;
	BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_asz00();
	extern obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2warningza2zd2zzjas_asz00 = BUNSPEC;
	static long BGl_aszd2fieldzd2modifiersz00zzjas_asz00(obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	extern obj_t BGl_methodz00zzjas_classfilez00;
	static obj_t BGl_appendzd221011zd2zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_asz00();
	static obj_t BGl_getzd2bytecodezd2zzjas_asz00(obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_zc3z04exitza31307ze3ze70z60zzjas_asz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2asfilezd2zzjas_asz00(obj_t, obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	extern obj_t BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00;
	static obj_t BGl_z62jvmzd2aszb0zzjas_asz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2asfilezb0zzjas_asz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_smapfilez00zzjas_asz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static long BGl_za2za2maxposza2za2z00zzjas_asz00;
	extern obj_t BGl_classez00zzjas_classfilez00;
	BGL_IMPORT long bgl_list_length(obj_t);
	static bool_t BGl_za2profileza2z00zzjas_asz00;
	static obj_t BGl_gczd2rootszd2initz00zzjas_asz00();
	static obj_t BGl_za2za2maxlineza2za2z00zzjas_asz00 = BUNSPEC;
	static obj_t BGl_reorderzd2classfilezd2zzjas_asz00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_za2za2maxcharza2za2z00zzjas_asz00 = BUNSPEC;
	static long BGl_aszd2classzd2modifiersz00zzjas_asz00(obj_t);
	extern obj_t BGl_fieldz00zzjas_classfilez00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_resolvezd2opcodeszd2zzjas_opcodez00;
	extern obj_t BGl_fieldzd2orzd2methodz00zzjas_classfilez00;
	static obj_t BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static long BGl_aszd2methodzd2modifiersz00zzjas_asz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BUNSPEC;
	extern int BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	extern BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static BgL_attributez00_bglt BGl_smapz00zzjas_asz00(BgL_classfilez00_bglt);
	extern obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	static obj_t BGl_pathnamez00zzjas_asz00(obj_t);
	static obj_t BGl_za2za2sdefullfileza2za2z00zzjas_asz00 = BUNSPEC;
	static obj_t BGl_scanzd2infoszd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	extern obj_t BGl_attributez00zzjas_classfilez00;
	static obj_t BGl_requirezd2initializa7ationz75zzjas_asz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_asz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzjas_asz00(obj_t, obj_t);
	static BgL_attributez00_bglt
		BGl_makezd2linezd2attributez00zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_asz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31312ze3ze5zzjas_asz00(obj_t);
	extern obj_t BGl_peepz00zzjas_peepz00;
	static obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzjas_asz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31983ze3ze5zzjas_asz00(obj_t, obj_t);
	static obj_t BGl_aszd2declarezd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_linezd2compresszd2zzjas_asz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static BgL_attributez00_bglt BGl_srcfilez00zzjas_asz00(BgL_classfilez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32061ze3ze5zzjas_asz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_infoze70ze7zzjas_asz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern obj_t BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	extern obj_t BGl_resolvezd2labelszd2zzjas_labelsz00;
	static obj_t BGl_getzd2lineszd2zzjas_asz00(obj_t, long);
	extern BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	extern obj_t BGl_producez00zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static BgL_attributez00_bglt
		BGl_makezd2localvarszd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_asz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_asz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_asz00();
	extern BgL_jastypez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern int BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_getzd2handlerszd2zzjas_asz00(obj_t);
	extern obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t, obj_t);
	static obj_t BGl_asz00zzjas_asz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t
		BGl_getzd2procedurezd2codeze70ze7zzjas_asz00(BgL_classfilez00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_aszd2methodzd2zzjas_asz00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00();
	extern int BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t __cnst[29];


	   
		 
		DEFINE_STRING(BGl_string2317z00zzjas_asz00,
		BgL_bgl_string2317za700za7za7j2365za7, "Jas", 3);
	      DEFINE_STRING(BGl_string2318z00zzjas_asz00,
		BgL_bgl_string2318za700za7za7j2366za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string2319z00zzjas_asz00,
		BgL_bgl_string2319za700za7za7j2367za7, "_", 1);
	      DEFINE_STRING(BGl_string2320z00zzjas_asz00,
		BgL_bgl_string2320za700za7za7j2368za7, "BgL__", 5);
	      DEFINE_STRING(BGl_string2321z00zzjas_asz00,
		BgL_bgl_string2321za700za7za7j2369za7, "apply", 5);
	      DEFINE_STRING(BGl_string2322z00zzjas_asz00,
		BgL_bgl_string2322za700za7za7j2370za7, "jas", 3);
	      DEFINE_STRING(BGl_string2323z00zzjas_asz00,
		BgL_bgl_string2323za700za7za7j2371za7, "bad module definition", 21);
	      DEFINE_STRING(BGl_string2324z00zzjas_asz00,
		BgL_bgl_string2324za700za7za7j2372za7, "SourceFile", 10);
	      DEFINE_STRING(BGl_string2325z00zzjas_asz00,
		BgL_bgl_string2325za700za7za7j2373za7, "SourceDebugExtension", 20);
	      DEFINE_STRING(BGl_string2326z00zzjas_asz00,
		BgL_bgl_string2326za700za7za7j2374za7, "BiglooChar", 10);
	      DEFINE_STRING(BGl_string2327z00zzjas_asz00,
		BgL_bgl_string2327za700za7za7j2375za7, "Bigloo", 6);
	      DEFINE_STRING(BGl_string2328z00zzjas_asz00,
		BgL_bgl_string2328za700za7za7j2376za7, "~a#1,1:~a,~a\n", 13);
	      DEFINE_STRING(BGl_string2329z00zzjas_asz00,
		BgL_bgl_string2329za700za7za7j2377za7, "*L\n", 3);
	      DEFINE_STRING(BGl_string2330z00zzjas_asz00,
		BgL_bgl_string2330za700za7za7j2378za7, "\n", 1);
	      DEFINE_STRING(BGl_string2331z00zzjas_asz00,
		BgL_bgl_string2331za700za7za7j2379za7, "+ 1 ", 4);
	      DEFINE_STRING(BGl_string2332z00zzjas_asz00,
		BgL_bgl_string2332za700za7za7j2380za7, "*F\n", 3);
	      DEFINE_STRING(BGl_string2333z00zzjas_asz00,
		BgL_bgl_string2333za700za7za7j2381za7, "*S Bigloo\n", 10);
	      DEFINE_STRING(BGl_string2334z00zzjas_asz00,
		BgL_bgl_string2334za700za7za7j2382za7, "", 0);
	      DEFINE_STRING(BGl_string2335z00zzjas_asz00,
		BgL_bgl_string2335za700za7za7j2383za7, "*E\n", 3);
	      DEFINE_STRING(BGl_string2336z00zzjas_asz00,
		BgL_bgl_string2336za700za7za7j2384za7, ":1\n", 3);
	      DEFINE_STRING(BGl_string2337z00zzjas_asz00,
		BgL_bgl_string2337za700za7za7j2385za7, "1#1,", 4);
	      DEFINE_STRING(BGl_string2338z00zzjas_asz00,
		BgL_bgl_string2338za700za7za7j2386za7, "*S ", 3);
	      DEFINE_STRING(BGl_string2339z00zzjas_asz00,
		BgL_bgl_string2339za700za7za7j2387za7, "SMAP\n", 5);
	      DEFINE_STRING(BGl_string2340z00zzjas_asz00,
		BgL_bgl_string2340za700za7za7j2388za7, "L", 1);
	      DEFINE_STRING(BGl_string2341z00zzjas_asz00,
		BgL_bgl_string2341za700za7za7j2389za7, ";", 1);
	      DEFINE_STRING(BGl_string2342z00zzjas_asz00,
		BgL_bgl_string2342za700za7za7j2390za7, "bad declaration", 15);
	      DEFINE_STRING(BGl_string2343z00zzjas_asz00,
		BgL_bgl_string2343za700za7za7j2391za7, "as", 2);
	      DEFINE_STRING(BGl_string2344z00zzjas_asz00,
		BgL_bgl_string2344za700za7za7j2392za7, "bad method modifier", 19);
	      DEFINE_STRING(BGl_string2345z00zzjas_asz00,
		BgL_bgl_string2345za700za7za7j2393za7, "bad field modifier", 18);
	      DEFINE_STRING(BGl_string2346z00zzjas_asz00,
		BgL_bgl_string2346za700za7za7j2394za7, "bad method definition", 21);
	      DEFINE_STRING(BGl_string2347z00zzjas_asz00,
		BgL_bgl_string2347za700za7za7j2395za7,
		"You should consider splitting this function in small pieces.", 60);
	      DEFINE_STRING(BGl_string2348z00zzjas_asz00,
		BgL_bgl_string2348za700za7za7j2396za7, ", limit size: 8000).\n", 21);
	      DEFINE_STRING(BGl_string2349z00zzjas_asz00,
		BgL_bgl_string2349za700za7za7j2397za7,
		"Method too large. This may cause some troubles to Jvm jits (current size: ",
		74);
	      DEFINE_STRING(BGl_string2350z00zzjas_asz00,
		BgL_bgl_string2350za700za7za7j2398za7, "Code", 4);
	      DEFINE_STRING(BGl_string2351z00zzjas_asz00,
		BgL_bgl_string2351za700za7za7j2399za7, "LineNumberTable", 15);
	      DEFINE_STRING(BGl_string2354z00zzjas_asz00,
		BgL_bgl_string2354za700za7za7j2400za7, "LocalVariableTable", 18);
	      DEFINE_STRING(BGl_string2355z00zzjas_asz00,
		BgL_bgl_string2355za700za7za7j2401za7,
		"You should consider splitting this source file in small pieces.", 63);
	      DEFINE_STRING(BGl_string2356z00zzjas_asz00,
		BgL_bgl_string2356za700za7za7j2402za7, ", limit size: 65535).\n", 22);
	      DEFINE_STRING(BGl_string2357z00zzjas_asz00,
		BgL_bgl_string2357za700za7za7j2403za7,
		"Source file too large for generating character information (current size: ",
		74);
	      DEFINE_STRING(BGl_string2358z00zzjas_asz00,
		BgL_bgl_string2358za700za7za7j2404za7, "*jvm-char-info*", 15);
	      DEFINE_STRING(BGl_string2360z00zzjas_asz00,
		BgL_bgl_string2360za700za7za7j2405za7, "jas_as", 6);
	      DEFINE_STRING(BGl_string2361z00zzjas_asz00,
		BgL_bgl_string2361za700za7za7j2406za7,
		"localvariable linenumber code native synchronized transient volatile static protected private abstract interface super final public field class function bytevector srcfile sde sourcefile fields declare as method list_to_vector invokestatic jas-global-value ",
		257);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2asfilezd2envz00zzjas_asz00,
		BgL_bgl_za762jvmza7d2asfileza72407za7, BGl_z62jvmzd2asfilezb0zzjas_asz00,
		0L, BUNSPEC, 2);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2352z00zzjas_asz00,
		BgL_bgl_za762za7c3za704anonymo2408za7,
		BGl_z62zc3z04anonymousza31980ze3ze5zzjas_asz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2353z00zzjas_asz00,
		BgL_bgl_za762za7c3za704anonymo2409za7,
		BGl_z62zc3z04anonymousza31983ze3ze5zzjas_asz00);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2359z00zzjas_asz00,
		BgL_bgl_za762za7c3za704anonymo2410za7,
		BGl_z62zc3z04anonymousza32061ze3ze5zzjas_asz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_readzd2envzd2zz__readerz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2aszd2envz00zzjas_asz00,
		BgL_bgl_za762jvmza7d2asza7b0za7za72411za7, BGl_z62jvmzd2aszb0zzjas_asz00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2za2sdefileza2za2z00zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2jaszd2warningza2zd2zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2za2allzd2linesza2za2zd2zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2za2maxlineza2za2z00zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2za2maxcharza2za2z00zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_za2za2sdefullfileza2za2z00zzjas_asz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_asz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long
		BgL_checksumz00_2068, char *BgL_fromz00_2069)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_asz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_asz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_asz00();
					BGl_libraryzd2moduleszd2initz00zzjas_asz00();
					BGl_cnstzd2initzd2zzjas_asz00();
					BGl_importedzd2moduleszd2initz00zzjas_asz00();
					return BGl_toplevelzd2initzd2zzjas_asz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_as");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "jas_as");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"jas_as");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			{	/* Jas/as.scm 1 */
				obj_t BgL_cportz00_2046;

				{	/* Jas/as.scm 1 */
					obj_t BgL_stringz00_2054;

					BgL_stringz00_2054 = BGl_string2361z00zzjas_asz00;
					{	/* Jas/as.scm 1 */
						obj_t BgL_startz00_2055;

						BgL_startz00_2055 = BINT(((long) 0));
						{	/* Jas/as.scm 1 */
							obj_t BgL_endz00_2056;

							BgL_endz00_2056 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2054)));
							{	/* Jas/as.scm 1 */

								BgL_cportz00_2046 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2054, BgL_startz00_2055, BgL_endz00_2056);
				}}}}
				{
					long BgL_iz00_2047;

					BgL_iz00_2047 = ((long) 28);
				BgL_loopz00_2048:
					if ((BgL_iz00_2047 == ((long) -1)))
						{	/* Jas/as.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/as.scm 1 */
							{	/* Jas/as.scm 1 */
								obj_t BgL_arg2363z00_2050;

								{	/* Jas/as.scm 1 */

									{	/* Jas/as.scm 1 */
										obj_t BgL_locationz00_2052;

										BgL_locationz00_2052 = BBOOL(((bool_t) 0));
										{	/* Jas/as.scm 1 */

											BgL_arg2363z00_2050 =
												BGl_readz00zz__readerz00(BgL_cportz00_2046,
												BgL_locationz00_2052);
										}
									}
								}
								{	/* Jas/as.scm 1 */
									int BgL_tmpz00_2103;

									BgL_tmpz00_2103 = (int) (BgL_iz00_2047);
									CNST_TABLE_SET(BgL_tmpz00_2103, BgL_arg2363z00_2050);
							}}
							{	/* Jas/as.scm 1 */
								int BgL_auxz00_2053;

								BgL_auxz00_2053 = (int) ((BgL_iz00_2047 - ((long) 1)));
								{
									long BgL_iz00_2108;

									BgL_iz00_2108 = (long) (BgL_auxz00_2053);
									BgL_iz00_2047 = BgL_iz00_2108;
									goto BgL_loopz00_2048;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			BGl_za2jaszd2warningza2zd2zzjas_asz00 = BFALSE;
			BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
			BGl_za2za2sdefileza2za2z00zzjas_asz00 = BFALSE;
			BGl_za2za2sdefullfileza2za2z00zzjas_asz00 = BFALSE;
			BGl_za2za2maxposza2za2z00zzjas_asz00 = ((long) 0);
			BGl_za2za2maxcharza2za2z00zzjas_asz00 = BINT(((long) 0));
			BGl_za2za2maxlineza2za2z00zzjas_asz00 = BINT(((long) 0));
			BGl_za2profileza2z00zzjas_asz00 = ((bool_t) 0);
			BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 = BNIL;
			return (BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_asz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_287;

				BgL_headz00_287 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_288;
					obj_t BgL_tailz00_289;

					BgL_prevz00_288 = BgL_headz00_287;
					BgL_tailz00_289 = BgL_l1z00_1;
				BgL_loopz00_290:
					if (PAIRP(BgL_tailz00_289))
						{
							obj_t BgL_newzd2prevzd2_292;

							BgL_newzd2prevzd2_292 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_289), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_288, BgL_newzd2prevzd2_292);
							{
								obj_t BgL_tailz00_2120;
								obj_t BgL_prevz00_2119;

								BgL_prevz00_2119 = BgL_newzd2prevzd2_292;
								BgL_tailz00_2120 = CDR(BgL_tailz00_289);
								BgL_tailz00_289 = BgL_tailz00_2120;
								BgL_prevz00_288 = BgL_prevz00_2119;
								goto BgL_loopz00_290;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_287);
				}
			}
		}

	}



/* jvm-asfile */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2asfilezd2zzjas_asz00(obj_t BgL_fileinz00_3,
		obj_t BgL_fileoutz00_4)
	{
		{	/* Jas/as.scm 35 */
			{	/* Jas/as.scm 36 */
				obj_t BgL_portz00_295;

				BgL_portz00_295 =
					BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_fileoutz00_4);
				if (BINARY_PORTP(BgL_portz00_295))
					{	/* Jas/as.scm 37 */
						BFALSE;
					}
				else
					{	/* Jas/as.scm 37 */
						BGl_errorz00zz__errorz00(BGl_string2317z00zzjas_asz00,
							BGl_string2318z00zzjas_asz00, BgL_fileoutz00_4);
					}
				{	/* Jas/as.scm 39 */
					obj_t BgL_res1058z00_2023;

					BgL_res1058z00_2023 = MAKE_CELL(BUNSPEC);
					if (CBOOL(BGl_zc3z04exitza31307ze3ze70z60zzjas_asz00(BgL_fileinz00_3,
								BgL_portz00_295, BgL_res1058z00_2023)))
						{	/* Jas/as.scm 39 */
							obj_t BgL_ez00_1274;

							BgL_ez00_1274 = CELL_REF(BgL_res1058z00_2023);
							{	/* Jas/as.scm 41 */
								char *BgL_stringz00_1275;

								BgL_stringz00_1275 = BSTRING_TO_STRING(BgL_fileoutz00_4);
								if (unlink(BgL_stringz00_1275))
									{	/* Jas/as.scm 41 */
										((bool_t) 0);
									}
								else
									{	/* Jas/as.scm 41 */
										((bool_t) 1);
									}
							}
							return BGl_raisez00zz__errorz00(BgL_ez00_1274);
						}
					else
						{	/* Jas/as.scm 39 */
							return CELL_REF(BgL_res1058z00_2023);
						}
				}
			}
		}

	}



/* <@exit:1307>~0 */
	obj_t BGl_zc3z04exitza31307ze3ze70z60zzjas_asz00(obj_t BgL_fileinz00_2045,
		obj_t BgL_portz00_2044, obj_t BgL_res1058z00_2043)
	{
		{	/* Jas/as.scm 39 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1067z00_324;

			if (SET_EXIT(BgL_an_exit1067z00_324))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1067z00_324 = (void *) jmpbuf;
					{	/* Jas/as.scm 39 */

						PUSH_EXIT(BgL_an_exit1067z00_324, ((long) 1));
						{	/* Jas/as.scm 39 */
							obj_t BgL_an_exitd1068z00_325;

							BgL_an_exitd1068z00_325 = ((obj_t) (&exitd));
							{	/* Jas/as.scm 39 */
								bool_t BgL_res1070z00_328;

								{	/* Jas/as.scm 39 */
									obj_t BgL_ohs1056z00_329;

									BgL_ohs1056z00_329 = BGL_ERROR_HANDLER_GET();
									{	/* Jas/as.scm 39 */
										obj_t BgL_exitd1061z00_330;

										BgL_exitd1061z00_330 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31313ze3z87_2010;

											BgL_zc3z04anonymousza31313ze3z87_2010 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31313ze3ze5zzjas_asz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31313ze3z87_2010,
												(int) (((long) 0)), BgL_ohs1056z00_329);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1061z00_330,
												BgL_zc3z04anonymousza31313ze3z87_2010);
											{	/* Jas/as.scm 39 */
												bool_t BgL_tmp1063z00_332;

												{	/* Jas/as.scm 39 */
													obj_t BgL_arg1308z00_333;

													{	/* Jas/as.scm 39 */
														obj_t BgL_zc3z04anonymousza31310ze3z87_2009;

														BgL_zc3z04anonymousza31310ze3z87_2009 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31310ze3ze5zzjas_asz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31310ze3z87_2009,
															(int) (((long) 0)),
															((obj_t) BgL_res1058z00_2043));
														PROCEDURE_SET(BgL_zc3z04anonymousza31310ze3z87_2009,
															(int) (((long) 1)), BgL_an_exitd1068z00_325);
														BgL_arg1308z00_333 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31310ze3z87_2009,
															BgL_ohs1056z00_329);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1308z00_333);
													BUNSPEC;
												}
												{	/* Jas/as.scm 39 */
													obj_t BgL_auxz00_2027;

													{	/* Jas/as.scm 43 */
														obj_t BgL_exitd1064z00_338;

														BgL_exitd1064z00_338 = ((obj_t) (&exitd));
														{	/* Jas/as.scm 45 */
															obj_t BgL_zc3z04anonymousza31312ze3z87_2008;

															BgL_zc3z04anonymousza31312ze3z87_2008 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31312ze3ze5zzjas_asz00,
																(int) (((long) 0)), (int) (((long) 1)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31312ze3z87_2008,
																(int) (((long) 0)), BgL_portz00_2044);
															BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																(BgL_exitd1064z00_338,
																BgL_zc3z04anonymousza31312ze3z87_2008);
															{	/* Jas/as.scm 44 */
																obj_t BgL_tmp1066z00_340;

																BgL_tmp1066z00_340 =
																	BGl_jvmzd2aszd2zzjas_asz00
																	(BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
																	(BgL_fileinz00_2045,
																		BGl_readzd2envzd2zz__readerz00),
																	BgL_portz00_2044);
																BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																	(BgL_exitd1064z00_338);
																close_binary_port(((obj_t) BgL_portz00_2044));
																BgL_auxz00_2027 = BgL_tmp1066z00_340;
													}}}
													CELL_SET(BgL_res1058z00_2043, BgL_auxz00_2027);
												}
												BgL_tmp1063z00_332 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1061z00_330);
												BGL_ERROR_HANDLER_SET(BgL_ohs1056z00_329);
												BUNSPEC;
												BgL_res1070z00_328 = BgL_tmp1063z00_332;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1070z00_328);
							}
						}
					}
				}
		}

	}



/* &jvm-asfile */
	obj_t BGl_z62jvmzd2asfilezb0zzjas_asz00(obj_t BgL_envz00_2011,
		obj_t BgL_fileinz00_2012, obj_t BgL_fileoutz00_2013)
	{
		{	/* Jas/as.scm 35 */
			return
				BGl_jvmzd2asfilezd2zzjas_asz00(BgL_fileinz00_2012, BgL_fileoutz00_2013);
		}

	}



/* &<@anonymous:1312> */
	obj_t BGl_z62zc3z04anonymousza31312ze3ze5zzjas_asz00(obj_t BgL_envz00_2014)
	{
		{	/* Jas/as.scm 43 */
			{	/* Jas/as.scm 45 */
				obj_t BgL_portz00_2015;

				BgL_portz00_2015 = PROCEDURE_REF(BgL_envz00_2014, (int) (((long) 0)));
				return close_binary_port(((obj_t) BgL_portz00_2015));
			}
		}

	}



/* &<@anonymous:1310> */
	obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzjas_asz00(obj_t BgL_envz00_2016,
		obj_t BgL_ez00_2019)
	{
		{	/* Jas/as.scm 39 */
			{	/* Jas/as.scm 39 */
				obj_t BgL_res1058z00_2017;
				obj_t BgL_an_exitd1068z00_2018;

				BgL_res1058z00_2017 =
					PROCEDURE_REF(BgL_envz00_2016, (int) (((long) 0)));
				BgL_an_exitd1068z00_2018 =
					PROCEDURE_REF(BgL_envz00_2016, (int) (((long) 1)));
				CELL_SET(BgL_res1058z00_2017, BgL_ez00_2019);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1068z00_2018, BTRUE);
			}
		}

	}



/* &<@anonymous:1313> */
	obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzjas_asz00(obj_t BgL_envz00_2021)
	{
		{	/* Jas/as.scm 39 */
			{
				obj_t BgL_ohs1056z00_2022;

				BgL_ohs1056z00_2022 =
					PROCEDURE_REF(BgL_envz00_2021, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1056z00_2022);
				return BUNSPEC;
			}
		}

	}



/* jvm-as */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t BgL_lz00_5,
		obj_t BgL_outchanz00_6)
	{
		{	/* Jas/as.scm 47 */
			{	/* Jas/as.scm 48 */
				obj_t BgL_classfilez00_349;

				BgL_classfilez00_349 =
					BGl_asz00zzjas_asz00(BGl_jaszd2profilezd2zzjas_profilez00
					(BgL_lz00_5));
				BGl_reorderzd2classfilezd2zzjas_asz00(((BgL_classfilez00_bglt)
						BgL_classfilez00_349), BgL_lz00_5);
				BGl_producez00zzjas_producez00(BgL_outchanz00_6, BgL_classfilez00_349);
				{	/* Jas/as.scm 53 */
					obj_t BgL_g1242z00_350;

					BgL_g1242z00_350 =
						(((BgL_classfilez00_bglt) COBJECT(
								((BgL_classfilez00_bglt) BgL_classfilez00_349)))->
						BgL_globalsz00);
					{
						obj_t BgL_l1240z00_352;

						{	/* Jas/as.scm 54 */
							bool_t BgL_tmpz00_2189;

							BgL_l1240z00_352 = BgL_g1242z00_350;
						BgL_zc3z04anonymousza31315ze3z87_353:
							if (PAIRP(BgL_l1240z00_352))
								{	/* Jas/as.scm 54 */
									{	/* Jas/as.scm 53 */
										obj_t BgL_sz00_355;

										BgL_sz00_355 = CAR(BgL_l1240z00_352);
										BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_sz00_355,
											CNST_TABLE_REF(((long) 0)));
									}
									{
										obj_t BgL_l1240z00_2195;

										BgL_l1240z00_2195 = CDR(BgL_l1240z00_352);
										BgL_l1240z00_352 = BgL_l1240z00_2195;
										goto BgL_zc3z04anonymousza31315ze3z87_353;
									}
								}
							else
								{	/* Jas/as.scm 54 */
									BgL_tmpz00_2189 = ((bool_t) 1);
								}
							return BBOOL(BgL_tmpz00_2189);
						}
					}
				}
			}
		}

	}



/* &jvm-as */
	obj_t BGl_z62jvmzd2aszb0zzjas_asz00(obj_t BgL_envz00_2029,
		obj_t BgL_lz00_2030, obj_t BgL_outchanz00_2031)
	{
		{	/* Jas/as.scm 47 */
			return BGl_jvmzd2aszd2zzjas_asz00(BgL_lz00_2030, BgL_outchanz00_2031);
		}

	}



/* reorder-classfile */
	obj_t BGl_reorderzd2classfilezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classez00_7, obj_t BgL_lz00_8)
	{
		{	/* Jas/as.scm 60 */
			{	/* Jas/as.scm 61 */
				obj_t BgL_defsz00_359;

				{	/* Jas/as.scm 61 */
					obj_t BgL_pairz00_1288;

					{	/* Jas/as.scm 61 */
						obj_t BgL_pairz00_1287;

						{	/* Jas/as.scm 61 */
							obj_t BgL_pairz00_1286;

							BgL_pairz00_1286 = CDR(((obj_t) BgL_lz00_8));
							BgL_pairz00_1287 = CDR(BgL_pairz00_1286);
						}
						BgL_pairz00_1288 = CDR(BgL_pairz00_1287);
					}
					BgL_defsz00_359 = CDR(CDR(BgL_pairz00_1288));
				}
				{
					obj_t BgL_codez00_410;
					obj_t BgL_accz00_411;
					obj_t BgL_namez00_435;

					{	/* Jas/as.scm 111 */
						obj_t BgL_codez00_363;

						BgL_codez00_363 =
							BGl_getzd2procedurezd2codeze70ze7zzjas_asz00(BgL_classez00_7,
							BgL_defsz00_359, BGl_string2321z00zzjas_asz00);
						if (CBOOL(BgL_codez00_363))
							{	/* Jas/as.scm 113 */
								obj_t BgL_closuresz00_364;
								obj_t BgL_methodsz00_365;

								BgL_codez00_410 = BgL_codez00_363;
								BgL_accz00_411 = BNIL;
							BgL_zc3z04anonymousza31358ze3z87_412:
								if (NULLP(BgL_codez00_410))
									{	/* Jas/as.scm 75 */
										BgL_closuresz00_364 = BgL_accz00_411;
									}
								else
									{	/* Jas/as.scm 76 */
										bool_t BgL_test2421z00_2210;

										{	/* Jas/as.scm 76 */
											bool_t BgL_test2422z00_2211;

											{	/* Jas/as.scm 76 */
												obj_t BgL_tmpz00_2212;

												BgL_tmpz00_2212 = CAR(((obj_t) BgL_codez00_410));
												BgL_test2422z00_2211 = PAIRP(BgL_tmpz00_2212);
											}
											if (BgL_test2422z00_2211)
												{	/* Jas/as.scm 76 */
													bool_t BgL_test2423z00_2216;

													{	/* Jas/as.scm 76 */
														obj_t BgL_tmpz00_2217;

														{	/* Jas/as.scm 76 */
															obj_t BgL_pairz00_1331;

															BgL_pairz00_1331 = CAR(((obj_t) BgL_codez00_410));
															BgL_tmpz00_2217 = CAR(BgL_pairz00_1331);
														}
														BgL_test2423z00_2216 =
															(BgL_tmpz00_2217 == CNST_TABLE_REF(((long) 1)));
													}
													if (BgL_test2423z00_2216)
														{	/* Jas/as.scm 77 */
															bool_t BgL_test2424z00_2223;

															{	/* Jas/as.scm 77 */
																obj_t BgL_tmpz00_2224;

																{	/* Jas/as.scm 77 */
																	obj_t BgL_pairz00_1337;

																	{	/* Jas/as.scm 77 */
																		obj_t BgL_pairz00_1336;

																		BgL_pairz00_1336 =
																			CAR(((obj_t) BgL_codez00_410));
																		BgL_pairz00_1337 = CDR(BgL_pairz00_1336);
																	}
																	BgL_tmpz00_2224 = CAR(BgL_pairz00_1337);
																}
																BgL_test2424z00_2223 =
																	(BgL_tmpz00_2224 ==
																	CNST_TABLE_REF(((long) 2)));
															}
															if (BgL_test2424z00_2223)
																{	/* Jas/as.scm 77 */
																	BgL_test2421z00_2210 = ((bool_t) 0);
																}
															else
																{	/* Jas/as.scm 77 */
																	BgL_test2421z00_2210 = ((bool_t) 1);
																}
														}
													else
														{	/* Jas/as.scm 76 */
															BgL_test2421z00_2210 = ((bool_t) 0);
														}
												}
											else
												{	/* Jas/as.scm 76 */
													BgL_test2421z00_2210 = ((bool_t) 0);
												}
										}
										if (BgL_test2421z00_2210)
											{	/* Jas/as.scm 78 */
												obj_t BgL_arg1381z00_424;
												obj_t BgL_arg1382z00_425;

												BgL_arg1381z00_424 = CDR(((obj_t) BgL_codez00_410));
												{	/* Jas/as.scm 79 */
													BgL_methodz00_bglt BgL_arg1383z00_426;

													{	/* Jas/as.scm 79 */
														obj_t BgL_arg1384z00_427;

														{	/* Jas/as.scm 79 */
															obj_t BgL_pairz00_1344;

															{	/* Jas/as.scm 79 */
																obj_t BgL_pairz00_1343;

																BgL_pairz00_1343 =
																	CAR(((obj_t) BgL_codez00_410));
																BgL_pairz00_1344 = CDR(BgL_pairz00_1343);
															}
															BgL_arg1384z00_427 = CAR(BgL_pairz00_1344);
														}
														BgL_namez00_435 = BgL_arg1384z00_427;
														{	/* Jas/as.scm 85 */
															BgL_methodz00_bglt BgL_mz00_437;

															BgL_mz00_437 =
																BGl_declaredzd2methodzd2zzjas_classfilez00
																(BgL_classez00_7, BgL_namez00_435);
															{	/* Jas/as.scm 85 */
																obj_t BgL_stubz00_438;

																BgL_stubz00_438 =
																	(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																			((BgL_fieldzd2orzd2methodz00_bglt)
																				BgL_mz00_437)))->BgL_namez00);
																{	/* Jas/as.scm 86 */

																	{	/* Jas/as.scm 87 */
																		bool_t BgL_test2425z00_2240;

																		if (bigloo_strncmp(BgL_stubz00_438,
																				BGl_string2319z00zzjas_asz00,
																				((long) 1)))
																			{	/* Jas/as.scm 87 */
																				BgL_test2425z00_2240 = ((bool_t) 1);
																			}
																		else
																			{	/* Jas/as.scm 87 */
																				BgL_test2425z00_2240 =
																					bigloo_strncmp(BgL_stubz00_438,
																					BGl_string2320z00zzjas_asz00,
																					((long) 5));
																			}
																		if (BgL_test2425z00_2240)
																			{	/* Jas/as.scm 90 */
																				obj_t BgL_ownerz00_441;

																				{	/* Jas/as.scm 90 */
																					obj_t BgL_arg1495z00_480;

																					BgL_arg1495z00_480 =
																						(((BgL_fieldzd2orzd2methodz00_bglt)
																							COBJECT((
																									(BgL_fieldzd2orzd2methodz00_bglt)
																									BgL_mz00_437)))->
																						BgL_ownerz00);
																					{	/* Jas/as.scm 90 */
																						obj_t BgL_res2145z00_1359;

																						{	/* Jas/as.scm 90 */
																							obj_t BgL_arg1466z00_1358;

																							BgL_arg1466z00_1358 =
																								SYMBOL_TO_STRING(
																								((obj_t) BgL_arg1495z00_480));
																							BgL_res2145z00_1359 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1358);
																						}
																						BgL_ownerz00_441 =
																							BgL_res2145z00_1359;
																					}
																				}
																				{	/* Jas/as.scm 90 */
																					obj_t BgL_name2z00_442;

																					{	/* Jas/as.scm 91 */
																						obj_t BgL_res2146z00_1362;

																						{	/* Jas/as.scm 91 */
																							obj_t BgL_arg1466z00_1361;

																							BgL_arg1466z00_1361 =
																								SYMBOL_TO_STRING(
																								((obj_t) BgL_namez00_435));
																							BgL_res2146z00_1362 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1361);
																						}
																						BgL_name2z00_442 =
																							BgL_res2146z00_1362;
																					}
																					{	/* Jas/as.scm 91 */
																						obj_t BgL_nameprocz00_443;

																						BgL_nameprocz00_443 =
																							string_append(c_substring
																							(BgL_name2z00_442, ((long) 0),
																								STRING_LENGTH
																								(BgL_ownerz00_441)),
																							c_substring(BgL_name2z00_442,
																								(((long) 1) +
																									STRING_LENGTH
																									(BgL_ownerz00_441)),
																								STRING_LENGTH
																								(BgL_name2z00_442)));
																						{	/* Jas/as.scm 92 */
																							obj_t BgL_proczd2inzd2codez00_444;

																							{	/* Jas/as.scm 97 */
																								obj_t BgL_hook1247z00_448;

																								BgL_hook1247z00_448 =
																									MAKE_YOUNG_PAIR(BFALSE, BNIL);
																								{	/* Jas/as.scm 103 */
																									obj_t BgL_g1248z00_449;

																									{	/* Jas/as.scm 103 */
																										obj_t BgL_arg1464z00_473;

																										BgL_arg1464z00_473 =
																											(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_mz00_437)))->BgL_namez00);
																										BgL_g1248z00_449 =
																											BGl_getzd2procedurezd2codeze70ze7zzjas_asz00
																											(BgL_classez00_7,
																											BgL_lz00_8,
																											BgL_arg1464z00_473);
																									}
																									{
																										obj_t BgL_l1244z00_451;
																										obj_t BgL_h1245z00_452;

																										BgL_l1244z00_451 =
																											BgL_g1248z00_449;
																										BgL_h1245z00_452 =
																											BgL_hook1247z00_448;
																									BgL_zc3z04anonymousza31397ze3z87_453:
																										if (NULLP
																											(BgL_l1244z00_451))
																											{	/* Jas/as.scm 103 */
																												BgL_proczd2inzd2codez00_444
																													=
																													CDR
																													(BgL_hook1247z00_448);
																											}
																										else
																											{	/* Jas/as.scm 103 */
																												bool_t
																													BgL_test2428z00_2266;
																												{	/* Jas/as.scm 99 */
																													obj_t BgL_xz00_466;

																													BgL_xz00_466 =
																														CAR(
																														((obj_t)
																															BgL_l1244z00_451));
																													if (PAIRP
																														(BgL_xz00_466))
																														{	/* Jas/as.scm 99 */
																															if (
																																(CAR
																																	(BgL_xz00_466)
																																	==
																																	CNST_TABLE_REF
																																	(((long) 1))))
																																{	/* Jas/as.scm 100 */
																																	BgL_test2428z00_2266
																																		=
																																		(CAR(CDR
																																			(BgL_xz00_466))
																																		==
																																		bstring_to_symbol
																																		(BgL_nameprocz00_443));
																																}
																															else
																																{	/* Jas/as.scm 100 */
																																	BgL_test2428z00_2266
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																													else
																														{	/* Jas/as.scm 99 */
																															BgL_test2428z00_2266
																																= ((bool_t) 0);
																														}
																												}
																												if (BgL_test2428z00_2266)
																													{	/* Jas/as.scm 103 */
																														obj_t
																															BgL_nh1246z00_462;
																														{	/* Jas/as.scm 103 */
																															obj_t
																																BgL_arg1442z00_464;
																															BgL_arg1442z00_464
																																=
																																CAR(((obj_t)
																																	BgL_l1244z00_451));
																															{	/* Jas/as.scm 103 */
																																obj_t
																																	BgL_res2157z00_1393;
																																BgL_res2157z00_1393
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1442z00_464,
																																	BNIL);
																																BgL_nh1246z00_462
																																	=
																																	BgL_res2157z00_1393;
																															}
																														}
																														SET_CDR
																															(BgL_h1245z00_452,
																															BgL_nh1246z00_462);
																														{	/* Jas/as.scm 103 */
																															obj_t
																																BgL_arg1441z00_463;
																															BgL_arg1441z00_463
																																=
																																CDR(((obj_t)
																																	BgL_l1244z00_451));
																															{
																																obj_t
																																	BgL_h1245z00_2286;
																																obj_t
																																	BgL_l1244z00_2285;
																																BgL_l1244z00_2285
																																	=
																																	BgL_arg1441z00_463;
																																BgL_h1245z00_2286
																																	=
																																	BgL_nh1246z00_462;
																																BgL_h1245z00_452
																																	=
																																	BgL_h1245z00_2286;
																																BgL_l1244z00_451
																																	=
																																	BgL_l1244z00_2285;
																																goto
																																	BgL_zc3z04anonymousza31397ze3z87_453;
																															}
																														}
																													}
																												else
																													{	/* Jas/as.scm 103 */
																														obj_t
																															BgL_arg1448z00_465;
																														BgL_arg1448z00_465 =
																															CDR(((obj_t)
																																BgL_l1244z00_451));
																														{
																															obj_t
																																BgL_l1244z00_2289;
																															BgL_l1244z00_2289
																																=
																																BgL_arg1448z00_465;
																															BgL_l1244z00_451 =
																																BgL_l1244z00_2289;
																															goto
																																BgL_zc3z04anonymousza31397ze3z87_453;
																														}
																													}
																											}
																									}
																								}
																							}
																							{	/* Jas/as.scm 97 */

																								if (NULLP
																									(BgL_proczd2inzd2codez00_444))
																									{	/* Jas/as.scm 106 */
																										BgL_arg1383z00_426 =
																											BGl_declaredzd2methodzd2zzjas_classfilez00
																											(BgL_classez00_7,
																											BgL_namez00_435);
																									}
																								else
																									{	/* Jas/as.scm 107 */
																										obj_t BgL_arg1394z00_446;

																										{	/* Jas/as.scm 107 */
																											obj_t BgL_pairz00_1399;

																											BgL_pairz00_1399 =
																												CAR(
																												((obj_t)
																													BgL_proczd2inzd2codez00_444));
																											BgL_arg1394z00_446 =
																												CAR(CDR
																												(BgL_pairz00_1399));
																										}
																										BgL_arg1383z00_426 =
																											BGl_declaredzd2methodzd2zzjas_classfilez00
																											(BgL_classez00_7,
																											BgL_arg1394z00_446);
																									}
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* Jas/as.scm 87 */
																				BgL_arg1383z00_426 =
																					BGl_declaredzd2methodzd2zzjas_classfilez00
																					(BgL_classez00_7, BgL_namez00_435);
																			}
																	}
																}
															}
														}
													}
													BgL_arg1382z00_425 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1383z00_426), BgL_accz00_411);
												}
												{
													obj_t BgL_accz00_2302;
													obj_t BgL_codez00_2301;

													BgL_codez00_2301 = BgL_arg1381z00_424;
													BgL_accz00_2302 = BgL_arg1382z00_425;
													BgL_accz00_411 = BgL_accz00_2302;
													BgL_codez00_410 = BgL_codez00_2301;
													goto BgL_zc3z04anonymousza31358ze3z87_412;
												}
											}
										else
											{	/* Jas/as.scm 80 */
												obj_t BgL_arg1385z00_428;

												BgL_arg1385z00_428 = CDR(((obj_t) BgL_codez00_410));
												{
													obj_t BgL_codez00_2305;

													BgL_codez00_2305 = BgL_arg1385z00_428;
													BgL_codez00_410 = BgL_codez00_2305;
													goto BgL_zc3z04anonymousza31358ze3z87_412;
												}
											}
									}
								BgL_methodsz00_365 =
									(((BgL_classfilez00_bglt) COBJECT(BgL_classez00_7))->
									BgL_methodsz00);
								{
									obj_t BgL_l1249z00_367;

									BgL_l1249z00_367 = BgL_closuresz00_364;
								BgL_zc3z04anonymousza31320ze3z87_368:
									if (PAIRP(BgL_l1249z00_367))
										{	/* Jas/as.scm 116 */
											{	/* Jas/as.scm 116 */
												obj_t BgL_xz00_370;

												BgL_xz00_370 = CAR(BgL_l1249z00_367);
												BgL_methodsz00_365 =
													bgl_remq_bang(BgL_xz00_370, BgL_methodsz00_365);
											}
											{
												obj_t BgL_l1249z00_2311;

												BgL_l1249z00_2311 = CDR(BgL_l1249z00_367);
												BgL_l1249z00_367 = BgL_l1249z00_2311;
												goto BgL_zc3z04anonymousza31320ze3z87_368;
											}
										}
									else
										{	/* Jas/as.scm 116 */
											((bool_t) 1);
										}
								}
								return
									((((BgL_classfilez00_bglt) COBJECT(BgL_classez00_7))->
										BgL_methodsz00) =
									((obj_t) BGl_appendzd221011zd2zzjas_asz00(BgL_methodsz00_365,
											BgL_closuresz00_364)), BUNSPEC);
							}
						else
							{	/* Jas/as.scm 112 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* get-procedure-code~0 */
	obj_t BGl_getzd2procedurezd2codeze70ze7zzjas_asz00(BgL_classfilez00_bglt
		BgL_classez00_2042, obj_t BgL_lz00_374, obj_t BgL_procnamez00_375)
	{
		{	/* Jas/as.scm 71 */
		BGl_getzd2procedurezd2codeze70ze7zzjas_asz00:
			{

				if (NULLP(BgL_lz00_374))
					{	/* Jas/as.scm 71 */
						return BFALSE;
					}
				else
					{	/* Jas/as.scm 71 */
						if (PAIRP(BgL_lz00_374))
							{	/* Jas/as.scm 71 */
								obj_t BgL_carzd2120zd2_388;

								BgL_carzd2120zd2_388 = CAR(BgL_lz00_374);
								if (PAIRP(BgL_carzd2120zd2_388))
									{	/* Jas/as.scm 71 */
										obj_t BgL_cdrzd2127zd2_390;

										BgL_cdrzd2127zd2_390 = CDR(BgL_carzd2120zd2_388);
										if (
											(CAR(BgL_carzd2120zd2_388) == CNST_TABLE_REF(((long) 3))))
											{	/* Jas/as.scm 71 */
												if (PAIRP(BgL_cdrzd2127zd2_390))
													{	/* Jas/as.scm 71 */
														obj_t BgL_cdrzd2133zd2_394;

														BgL_cdrzd2133zd2_394 = CDR(BgL_cdrzd2127zd2_390);
														if (PAIRP(BgL_cdrzd2133zd2_394))
															{	/* Jas/as.scm 71 */
																obj_t BgL_cdrzd2139zd2_396;

																BgL_cdrzd2139zd2_396 =
																	CDR(BgL_cdrzd2133zd2_394);
																if (PAIRP(BgL_cdrzd2139zd2_396))
																	{	/* Jas/as.scm 71 */
																		obj_t BgL_arg1334z00_398;
																		obj_t BgL_arg1338z00_401;

																		BgL_arg1334z00_398 =
																			CAR(BgL_cdrzd2127zd2_390);
																		BgL_arg1338z00_401 =
																			CDR(BgL_cdrzd2139zd2_396);
																		{	/* Jas/as.scm 67 */
																			BgL_methodz00_bglt BgL_mz00_1317;

																			BgL_mz00_1317 =
																				BGl_declaredzd2methodzd2zzjas_classfilez00
																				(BgL_classez00_2042,
																				BgL_arg1334z00_398);
																			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_mz00_1317)))->BgL_namez00), BgL_procnamez00_375))
																				{	/* Jas/as.scm 68 */
																					return BgL_arg1338z00_401;
																				}
																			else
																				{	/* Jas/as.scm 70 */
																					obj_t BgL_arg1351z00_1320;

																					BgL_arg1351z00_1320 =
																						CDR(((obj_t) BgL_lz00_374));
																					{
																						obj_t BgL_lz00_2344;

																						BgL_lz00_2344 = BgL_arg1351z00_1320;
																						BgL_lz00_374 = BgL_lz00_2344;
																						goto
																							BGl_getzd2procedurezd2codeze70ze7zzjas_asz00;
																					}
																				}
																		}
																	}
																else
																	{	/* Jas/as.scm 71 */
																	BgL_tagzd2103zd2_384:
																		{	/* Jas/as.scm 71 */
																			obj_t BgL_arg1357z00_409;

																			BgL_arg1357z00_409 =
																				CDR(((obj_t) BgL_lz00_374));
																			{
																				obj_t BgL_lz00_2347;

																				BgL_lz00_2347 = BgL_arg1357z00_409;
																				BgL_lz00_374 = BgL_lz00_2347;
																				goto
																					BGl_getzd2procedurezd2codeze70ze7zzjas_asz00;
																			}
																		}
																	}
															}
														else
															{	/* Jas/as.scm 71 */
																goto BgL_tagzd2103zd2_384;
															}
													}
												else
													{	/* Jas/as.scm 71 */
														goto BgL_tagzd2103zd2_384;
													}
											}
										else
											{	/* Jas/as.scm 71 */
												goto BgL_tagzd2103zd2_384;
											}
									}
								else
									{	/* Jas/as.scm 71 */
										goto BgL_tagzd2103zd2_384;
									}
							}
						else
							{	/* Jas/as.scm 71 */
								goto BgL_tagzd2103zd2_384;
							}
					}
			}
		}

	}



/* as */
	obj_t BGl_asz00zzjas_asz00(obj_t BgL_lz00_9)
	{
		{	/* Jas/as.scm 123 */
			{
				obj_t BgL_keyz00_486;
				obj_t BgL_thisz00_487;
				obj_t BgL_extendz00_488;
				obj_t BgL_implementsz00_489;
				obj_t BgL_declsz00_490;
				obj_t BgL_infosz00_491;

				if (NULLP(BgL_lz00_9))
					{	/* Jas/as.scm 124 */
					BgL_tagzd2149zd2_493:
						return
							BGl_errorz00zz__errorz00(BGl_string2322z00zzjas_asz00,
							BGl_string2323z00zzjas_asz00, BgL_lz00_9);
					}
				else
					{	/* Jas/as.scm 124 */
						obj_t BgL_cdrzd2166zd2_496;

						BgL_cdrzd2166zd2_496 = CDR(BgL_lz00_9);
						{	/* Jas/as.scm 124 */
							obj_t BgL_keyz00_497;

							BgL_keyz00_497 = CAR(BgL_lz00_9);
							if (PAIRP(BgL_cdrzd2166zd2_496))
								{	/* Jas/as.scm 124 */
									obj_t BgL_carzd2173zd2_499;
									obj_t BgL_cdrzd2174zd2_500;

									BgL_carzd2173zd2_499 = CAR(BgL_cdrzd2166zd2_496);
									BgL_cdrzd2174zd2_500 = CDR(BgL_cdrzd2166zd2_496);
									if (SYMBOLP(BgL_carzd2173zd2_499))
										{	/* Jas/as.scm 124 */
											if (PAIRP(BgL_cdrzd2174zd2_500))
												{	/* Jas/as.scm 124 */
													obj_t BgL_carzd2181zd2_504;
													obj_t BgL_cdrzd2182zd2_505;

													BgL_carzd2181zd2_504 = CAR(BgL_cdrzd2174zd2_500);
													BgL_cdrzd2182zd2_505 = CDR(BgL_cdrzd2174zd2_500);
													if (SYMBOLP(BgL_carzd2181zd2_504))
														{	/* Jas/as.scm 124 */
															if (PAIRP(BgL_cdrzd2182zd2_505))
																{	/* Jas/as.scm 124 */
																	obj_t BgL_carzd2188zd2_509;
																	obj_t BgL_cdrzd2189zd2_510;

																	BgL_carzd2188zd2_509 =
																		CAR(BgL_cdrzd2182zd2_505);
																	BgL_cdrzd2189zd2_510 =
																		CDR(BgL_cdrzd2182zd2_505);
																	{
																		obj_t BgL_gzd2205zd2_530;
																		obj_t BgL_gzd2192zd2_514;

																		BgL_gzd2192zd2_514 = BgL_carzd2188zd2_509;
																		if (NULLP(BgL_gzd2192zd2_514))
																			{	/* Jas/as.scm 124 */
																				if (PAIRP(BgL_cdrzd2189zd2_510))
																					{	/* Jas/as.scm 124 */
																						obj_t BgL_carzd2196zd2_518;

																						BgL_carzd2196zd2_518 =
																							CAR(BgL_cdrzd2189zd2_510);
																						if (PAIRP(BgL_carzd2196zd2_518))
																							{	/* Jas/as.scm 124 */
																								if (
																									(CAR(BgL_carzd2196zd2_518) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Jas/as.scm 124 */
																										obj_t BgL_arg1521z00_522;
																										obj_t BgL_arg1528z00_523;

																										BgL_arg1521z00_522 =
																											CDR(BgL_carzd2196zd2_518);
																										BgL_arg1528z00_523 =
																											CDR(BgL_cdrzd2189zd2_510);
																										{
																											BgL_classfilez00_bglt
																												BgL_auxz00_2382;
																											BgL_keyz00_486 =
																												BgL_keyz00_497;
																											BgL_thisz00_487 =
																												BgL_carzd2173zd2_499;
																											BgL_extendz00_488 =
																												BgL_carzd2181zd2_504;
																											BgL_implementsz00_489 =
																												BgL_carzd2188zd2_509;
																											BgL_declsz00_490 =
																												BgL_arg1521z00_522;
																											BgL_infosz00_491 =
																												BgL_arg1528z00_523;
																										BgL_tagzd2148zd2_492:
																											{	/* Jas/as.scm 129 */
																												BgL_classfilez00_bglt
																													BgL_classfilez00_548;
																												{	/* Jas/as.scm 129 */
																													BgL_classfilez00_bglt
																														BgL_new1074z00_589;
																													{	/* Jas/classfile.scm 42 */
																														BgL_classfilez00_bglt
																															BgL_new1073z00_592;
																														BgL_new1073z00_592 =
																															(
																															(BgL_classfilez00_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_classfilez00_bgl))));
																														{	/* Jas/classfile.scm 42 */
																															long
																																BgL_arg1612z00_593;
																															{	/* Jas/classfile.scm 42 */
																																long
																																	BgL_res2160z00_1411;
																																BgL_res2160z00_1411
																																	=
																																	BGL_CLASS_INDEX
																																	(BGl_classfilez00zzjas_classfilez00);
																																BgL_arg1612z00_593
																																	=
																																	BgL_res2160z00_1411;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1073z00_592), BgL_arg1612z00_593);
																														}
																														BgL_new1074z00_589 =
																															BgL_new1073z00_592;
																													}
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_currentzd2methodzd2) = ((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_globalsz00) = ((obj_t) BNIL), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_poolz00) = ((obj_t) BNIL), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_poolzd2siza7ez75) = ((obj_t) BINT(((long) 1))), BUNSPEC);
																													{
																														obj_t
																															BgL_auxz00_2393;
																														{	/* Jas/classfile.scm 44 */
																															obj_t
																																BgL_arg1606z00_590;
																															{	/* Jas/classfile.scm 44 */
																																obj_t
																																	BgL_arg1611z00_591;
																																{	/* Jas/classfile.scm 44 */
																																	obj_t
																																		BgL_res2161z00_1415;
																																	{	/* Jas/classfile.scm 44 */
																																		obj_t
																																			BgL_classz00_1414;
																																		BgL_classz00_1414
																																			=
																																			BGl_classfilez00zzjas_classfilez00;
																																		BgL_res2161z00_1415
																																			=
																																			BGL_CLASS_ALL_FIELDS
																																			(BgL_classz00_1414);
																																	}
																																	BgL_arg1611z00_591
																																		=
																																		BgL_res2161z00_1415;
																																}
																																BgL_arg1606z00_590
																																	=
																																	VECTOR_REF
																																	(BgL_arg1611z00_591,
																																	((long) 4));
																															}
																															BgL_auxz00_2393 =
																																BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																																(BgL_arg1606z00_590);
																														}
																														((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_pooledzd2nameszd2) = ((obj_t) BgL_auxz00_2393), BUNSPEC);
																													}
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_flagsz00) = ((obj_t) BFALSE), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_mez00) = ((obj_t) BFALSE), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_superz00) = ((obj_t) BFALSE), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_interfacesz00) = ((obj_t) BNIL), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_fieldsz00) = ((obj_t) BNIL), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_methodsz00) = ((obj_t) BNIL), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_new1074z00_589))->BgL_attributesz00) = ((obj_t) BNIL), BUNSPEC);
																													BgL_classfilez00_548 =
																														BgL_new1074z00_589;
																												}
																												if (NULLP
																													(BgL_declsz00_490))
																													{	/* Jas/as.scm 130 */
																														BNIL;
																													}
																												else
																													{	/* Jas/as.scm 130 */
																														obj_t
																															BgL_head1253z00_551;
																														{	/* Jas/as.scm 130 */
																															obj_t
																																BgL_res2163z00_1418;
																															BgL_res2163z00_1418
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															BgL_head1253z00_551
																																=
																																BgL_res2163z00_1418;
																														}
																														{
																															obj_t
																																BgL_l1251z00_553;
																															obj_t
																																BgL_tail1254z00_554;
																															BgL_l1251z00_553 =
																																BgL_declsz00_490;
																															BgL_tail1254z00_554
																																=
																																BgL_head1253z00_551;
																														BgL_zc3z04anonymousza31580ze3z87_555:
																															if (NULLP
																																(BgL_l1251z00_553))
																																{	/* Jas/as.scm 130 */
																																	CDR
																																		(BgL_head1253z00_551);
																																}
																															else
																																{	/* Jas/as.scm 130 */
																																	obj_t
																																		BgL_newtail1255z00_557;
																																	{	/* Jas/as.scm 130 */
																																		obj_t
																																			BgL_arg1584z00_559;
																																		{	/* Jas/as.scm 130 */
																																			obj_t
																																				BgL_declz00_560;
																																			BgL_declz00_560
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_l1251z00_553));
																																			BgL_arg1584z00_559
																																				=
																																				BGl_aszd2declarezd2zzjas_asz00
																																				(BgL_classfilez00_548,
																																				BgL_declz00_560);
																																		}
																																		{	/* Jas/as.scm 130 */
																																			obj_t
																																				BgL_res2165z00_1422;
																																			BgL_res2165z00_1422
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1584z00_559,
																																				BNIL);
																																			BgL_newtail1255z00_557
																																				=
																																				BgL_res2165z00_1422;
																																		}
																																	}
																																	SET_CDR
																																		(BgL_tail1254z00_554,
																																		BgL_newtail1255z00_557);
																																	{	/* Jas/as.scm 130 */
																																		obj_t
																																			BgL_arg1582z00_558;
																																		BgL_arg1582z00_558
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_l1251z00_553));
																																		{
																																			obj_t
																																				BgL_tail1254z00_2419;
																																			obj_t
																																				BgL_l1251z00_2418;
																																			BgL_l1251z00_2418
																																				=
																																				BgL_arg1582z00_558;
																																			BgL_tail1254z00_2419
																																				=
																																				BgL_newtail1255z00_557;
																																			BgL_tail1254z00_554
																																				=
																																				BgL_tail1254z00_2419;
																																			BgL_l1251z00_553
																																				=
																																				BgL_l1251z00_2418;
																																			goto
																																				BgL_zc3z04anonymousza31580ze3z87_555;
																																		}
																																	}
																																}
																														}
																													}
																												BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00
																													(BgL_classfilez00_548);
																												{	/* Jas/as.scm 134 */
																													BgL_classez00_bglt
																														BgL_cthisz00_564;
																													BgL_classez00_bglt
																														BgL_cextendz00_565;
																													BgL_cthisz00_564 =
																														BGl_declaredzd2classzd2zzjas_classfilez00
																														(BgL_classfilez00_548,
																														BgL_thisz00_487);
																													BgL_cextendz00_565 =
																														BGl_declaredzd2classzd2zzjas_classfilez00
																														(BgL_classfilez00_548,
																														BgL_extendz00_488);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_flagsz00) = ((obj_t) (((BgL_classez00_bglt) COBJECT(BgL_cthisz00_564))->BgL_flagsz00)), BUNSPEC);
																													((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_mez00) = ((obj_t) BINT(BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_548, BgL_cthisz00_564))), BUNSPEC);
																												}
																												((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_superz00) = ((obj_t) BINT(BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_548, BgL_extendz00_488))), BUNSPEC);
																												{
																													obj_t BgL_auxz00_2431;

																													if (NULLP
																														(BgL_implementsz00_489))
																														{	/* Jas/as.scm 139 */
																															BgL_auxz00_2431 =
																																BNIL;
																														}
																													else
																														{	/* Jas/as.scm 139 */
																															obj_t
																																BgL_head1258z00_568;
																															{	/* Jas/as.scm 139 */
																																int
																																	BgL_arg1593z00_580;
																																{	/* Jas/as.scm 139 */
																																	obj_t
																																		BgL_arg1597z00_581;
																																	BgL_arg1597z00_581
																																		=
																																		CAR(((obj_t)
																																			BgL_implementsz00_489));
																																	BgL_arg1593z00_580
																																		=
																																		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																																		(BgL_classfilez00_548,
																																		BgL_arg1597z00_581);
																																}
																																{	/* Jas/as.scm 139 */
																																	obj_t
																																		BgL_res2167z00_1429;
																																	BgL_res2167z00_1429
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BINT
																																		(BgL_arg1593z00_580),
																																		BNIL);
																																	BgL_head1258z00_568
																																		=
																																		BgL_res2167z00_1429;
																															}}
																															{	/* Jas/as.scm 139 */
																																obj_t
																																	BgL_g1261z00_569;
																																BgL_g1261z00_569
																																	=
																																	CDR(((obj_t)
																																		BgL_implementsz00_489));
																																{
																																	obj_t
																																		BgL_l1256z00_571;
																																	obj_t
																																		BgL_tail1259z00_572;
																																	BgL_l1256z00_571
																																		=
																																		BgL_g1261z00_569;
																																	BgL_tail1259z00_572
																																		=
																																		BgL_head1258z00_568;
																																BgL_zc3z04anonymousza31586ze3z87_573:
																																	if (NULLP
																																		(BgL_l1256z00_571))
																																		{	/* Jas/as.scm 139 */
																																			BgL_auxz00_2431
																																				=
																																				BgL_head1258z00_568;
																																		}
																																	else
																																		{	/* Jas/as.scm 139 */
																																			obj_t
																																				BgL_newtail1260z00_575;
																																			{	/* Jas/as.scm 139 */
																																				int
																																					BgL_arg1589z00_577;
																																				{	/* Jas/as.scm 139 */
																																					obj_t
																																						BgL_arg1592z00_578;
																																					BgL_arg1592z00_578
																																						=
																																						CAR(
																																						((obj_t) BgL_l1256z00_571));
																																					BgL_arg1589z00_577
																																						=
																																						BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																																						(BgL_classfilez00_548,
																																						BgL_arg1592z00_578);
																																				}
																																				{	/* Jas/as.scm 139 */
																																					obj_t
																																						BgL_res2169z00_1433;
																																					BgL_res2169z00_1433
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BINT
																																						(BgL_arg1589z00_577),
																																						BNIL);
																																					BgL_newtail1260z00_575
																																						=
																																						BgL_res2169z00_1433;
																																			}}
																																			SET_CDR
																																				(BgL_tail1259z00_572,
																																				BgL_newtail1260z00_575);
																																			{	/* Jas/as.scm 139 */
																																				obj_t
																																					BgL_arg1588z00_576;
																																				BgL_arg1588z00_576
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_l1256z00_571));
																																				{
																																					obj_t
																																						BgL_tail1259z00_2452;
																																					obj_t
																																						BgL_l1256z00_2451;
																																					BgL_l1256z00_2451
																																						=
																																						BgL_arg1588z00_576;
																																					BgL_tail1259z00_2452
																																						=
																																						BgL_newtail1260z00_575;
																																					BgL_tail1259z00_572
																																						=
																																						BgL_tail1259z00_2452;
																																					BgL_l1256z00_571
																																						=
																																						BgL_l1256z00_2451;
																																					goto
																																						BgL_zc3z04anonymousza31586ze3z87_573;
																																				}
																																			}
																																		}
																																}
																															}
																														}
																													((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_interfacesz00) = ((obj_t) BgL_auxz00_2431), BUNSPEC);
																												}
																												BGl_scanzd2infoszd2zzjas_asz00
																													(BgL_classfilez00_548,
																													BgL_infosz00_491);
																												if (STRINGP
																													(BGl_za2za2sdefullfileza2za2z00zzjas_asz00))
																													{
																														obj_t
																															BgL_auxz00_2457;
																														{	/* Jas/as.scm 143 */
																															BgL_attributez00_bglt
																																BgL_arg1599z00_584;
																															obj_t
																																BgL_arg1604z00_585;
																															BgL_arg1599z00_584
																																=
																																BGl_smapz00zzjas_asz00
																																(BgL_classfilez00_548);
																															BgL_arg1604z00_585
																																=
																																(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_attributesz00);
																															BgL_auxz00_2457 =
																																MAKE_YOUNG_PAIR(
																																((obj_t)
																																	BgL_arg1599z00_584),
																																BgL_arg1604z00_585);
																														}
																														((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_548))->BgL_attributesz00) = ((obj_t) BgL_auxz00_2457), BUNSPEC);
																													}
																												else
																													{	/* Jas/as.scm 141 */
																														BFALSE;
																													}
																												BgL_auxz00_2382 =
																													BgL_classfilez00_548;
																											}
																											return
																												((obj_t)
																												BgL_auxz00_2382);
																										}
																									}
																								else
																									{	/* Jas/as.scm 124 */
																										goto BgL_tagzd2149zd2_493;
																									}
																							}
																						else
																							{	/* Jas/as.scm 124 */
																								goto BgL_tagzd2149zd2_493;
																							}
																					}
																				else
																					{	/* Jas/as.scm 124 */
																						goto BgL_tagzd2149zd2_493;
																					}
																			}
																		else
																			{	/* Jas/as.scm 124 */
																				if (PAIRP(BgL_gzd2192zd2_514))
																					{	/* Jas/as.scm 124 */
																						bool_t BgL_test2457z00_2466;

																						{	/* Jas/as.scm 124 */
																							obj_t BgL_tmpz00_2467;

																							BgL_tmpz00_2467 =
																								CAR(BgL_gzd2192zd2_514);
																							BgL_test2457z00_2466 =
																								SYMBOLP(BgL_tmpz00_2467);
																						}
																						if (BgL_test2457z00_2466)
																							{	/* Jas/as.scm 124 */
																								BgL_gzd2205zd2_530 =
																									CDR(BgL_gzd2192zd2_514);
																							BgL_zc3z04anonymousza31554ze3z87_531:
																								if (NULLP
																									(BgL_gzd2205zd2_530))
																									{	/* Jas/as.scm 124 */
																										if (PAIRP
																											(BgL_cdrzd2189zd2_510))
																											{	/* Jas/as.scm 124 */
																												obj_t
																													BgL_carzd2209zd2_534;
																												BgL_carzd2209zd2_534 =
																													CAR
																													(BgL_cdrzd2189zd2_510);
																												if (PAIRP
																													(BgL_carzd2209zd2_534))
																													{	/* Jas/as.scm 124 */
																														if (
																															(CAR
																																(BgL_carzd2209zd2_534)
																																==
																																CNST_TABLE_REF((
																																		(long) 5))))
																															{	/* Jas/as.scm 124 */
																																obj_t
																																	BgL_arg1561z00_538;
																																obj_t
																																	BgL_arg1564z00_539;
																																BgL_arg1561z00_538
																																	=
																																	CDR
																																	(BgL_carzd2209zd2_534);
																																BgL_arg1564z00_539
																																	=
																																	CDR
																																	(BgL_cdrzd2189zd2_510);
																																{
																																	BgL_classfilez00_bglt
																																		BgL_auxz00_2483;
																																	{
																																		obj_t
																																			BgL_infosz00_2489;
																																		obj_t
																																			BgL_declsz00_2488;
																																		obj_t
																																			BgL_implementsz00_2487;
																																		obj_t
																																			BgL_extendz00_2486;
																																		obj_t
																																			BgL_thisz00_2485;
																																		obj_t
																																			BgL_keyz00_2484;
																																		BgL_keyz00_2484
																																			=
																																			BgL_keyz00_497;
																																		BgL_thisz00_2485
																																			=
																																			BgL_carzd2173zd2_499;
																																		BgL_extendz00_2486
																																			=
																																			BgL_carzd2181zd2_504;
																																		BgL_implementsz00_2487
																																			=
																																			BgL_carzd2188zd2_509;
																																		BgL_declsz00_2488
																																			=
																																			BgL_arg1561z00_538;
																																		BgL_infosz00_2489
																																			=
																																			BgL_arg1564z00_539;
																																		BgL_infosz00_491
																																			=
																																			BgL_infosz00_2489;
																																		BgL_declsz00_490
																																			=
																																			BgL_declsz00_2488;
																																		BgL_implementsz00_489
																																			=
																																			BgL_implementsz00_2487;
																																		BgL_extendz00_488
																																			=
																																			BgL_extendz00_2486;
																																		BgL_thisz00_487
																																			=
																																			BgL_thisz00_2485;
																																		BgL_keyz00_486
																																			=
																																			BgL_keyz00_2484;
																																		goto
																																			BgL_tagzd2148zd2_492;
																																	}
																																	return
																																		((obj_t)
																																		BgL_auxz00_2483);
																																}
																															}
																														else
																															{	/* Jas/as.scm 124 */
																																goto
																																	BgL_tagzd2149zd2_493;
																															}
																													}
																												else
																													{	/* Jas/as.scm 124 */
																														goto
																															BgL_tagzd2149zd2_493;
																													}
																											}
																										else
																											{	/* Jas/as.scm 124 */
																												goto
																													BgL_tagzd2149zd2_493;
																											}
																									}
																								else
																									{	/* Jas/as.scm 124 */
																										if (PAIRP
																											(BgL_gzd2205zd2_530))
																											{	/* Jas/as.scm 124 */
																												bool_t
																													BgL_test2463z00_2493;
																												{	/* Jas/as.scm 124 */
																													obj_t BgL_tmpz00_2494;

																													BgL_tmpz00_2494 =
																														CAR
																														(BgL_gzd2205zd2_530);
																													BgL_test2463z00_2493 =
																														SYMBOLP
																														(BgL_tmpz00_2494);
																												}
																												if (BgL_test2463z00_2493)
																													{
																														obj_t
																															BgL_gzd2205zd2_2497;
																														BgL_gzd2205zd2_2497
																															=
																															CDR
																															(BgL_gzd2205zd2_530);
																														BgL_gzd2205zd2_530 =
																															BgL_gzd2205zd2_2497;
																														goto
																															BgL_zc3z04anonymousza31554ze3z87_531;
																													}
																												else
																													{	/* Jas/as.scm 124 */
																														goto
																															BgL_tagzd2149zd2_493;
																													}
																											}
																										else
																											{	/* Jas/as.scm 124 */
																												goto
																													BgL_tagzd2149zd2_493;
																											}
																									}
																							}
																						else
																							{	/* Jas/as.scm 124 */
																								goto BgL_tagzd2149zd2_493;
																							}
																					}
																				else
																					{	/* Jas/as.scm 124 */
																						goto BgL_tagzd2149zd2_493;
																					}
																			}
																	}
																}
															else
																{	/* Jas/as.scm 124 */
																	goto BgL_tagzd2149zd2_493;
																}
														}
													else
														{	/* Jas/as.scm 124 */
															goto BgL_tagzd2149zd2_493;
														}
												}
											else
												{	/* Jas/as.scm 124 */
													goto BgL_tagzd2149zd2_493;
												}
										}
									else
										{	/* Jas/as.scm 124 */
											goto BgL_tagzd2149zd2_493;
										}
								}
							else
								{	/* Jas/as.scm 124 */
									goto BgL_tagzd2149zd2_493;
								}
						}
					}
			}
		}

	}



/* set-field-method-type */
	bool_t BGl_setzd2fieldzd2methodzd2typezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_10)
	{
		{	/* Jas/as.scm 147 */
			{	/* Jas/as.scm 148 */
				obj_t BgL_g1264z00_594;

				BgL_g1264z00_594 =
					(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_10))->
					BgL_globalsz00);
				{
					obj_t BgL_l1262z00_596;

					BgL_l1262z00_596 = BgL_g1264z00_594;
				BgL_zc3z04anonymousza31613ze3z87_597:
					if (PAIRP(BgL_l1262z00_596))
						{	/* Jas/as.scm 155 */
							{	/* Jas/as.scm 151 */
								obj_t BgL_slotz00_599;

								BgL_slotz00_599 = CAR(BgL_l1262z00_596);
								{	/* Jas/as.scm 151 */
									obj_t BgL_valuez00_600;

									BgL_valuez00_600 =
										BGl_getpropz00zz__r4_symbols_6_4z00(BgL_slotz00_599,
										CNST_TABLE_REF(((long) 0)));
									if (BGl_isazf3zf3zz__objectz00(BgL_valuez00_600,
											BGl_fieldzd2orzd2methodz00zzjas_classfilez00))
										{
											obj_t BgL_auxz00_2508;

											{	/* Jas/as.scm 154 */
												obj_t BgL_arg1624z00_603;

												BgL_arg1624z00_603 =
													(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
															((BgL_fieldzd2orzd2methodz00_bglt)
																BgL_valuez00_600)))->BgL_usertypez00);
												BgL_auxz00_2508 =
													((obj_t)
													BGl_aszd2typezd2zzjas_classfilez00
													(BgL_classfilez00_10, BgL_arg1624z00_603));
											}
											((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
															((BgL_fieldzd2orzd2methodz00_bglt)
																BgL_valuez00_600)))->BgL_typez00) =
												((obj_t) BgL_auxz00_2508), BUNSPEC);
										}
									else
										{	/* Jas/as.scm 152 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1262z00_2515;

								BgL_l1262z00_2515 = CDR(BgL_l1262z00_596);
								BgL_l1262z00_596 = BgL_l1262z00_2515;
								goto BgL_zc3z04anonymousza31613ze3z87_597;
							}
						}
					else
						{	/* Jas/as.scm 155 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* scan-infos */
	obj_t BGl_scanzd2infoszd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_11, obj_t BgL_infosz00_12)
	{
		{	/* Jas/as.scm 157 */
		BGl_scanzd2infoszd2zzjas_asz00:
			if (NULLP(BgL_infosz00_12))
				{	/* Jas/as.scm 159 */
					return ((obj_t) BgL_classfilez00_11);
				}
			else
				{	/* Jas/as.scm 160 */
					bool_t BgL_test2467z00_2520;

					{	/* Jas/as.scm 160 */
						obj_t BgL_tmpz00_2521;

						{	/* Jas/as.scm 160 */
							obj_t BgL_pairz00_1484;

							BgL_pairz00_1484 = CAR(((obj_t) BgL_infosz00_12));
							BgL_tmpz00_2521 = CAR(BgL_pairz00_1484);
						}
						BgL_test2467z00_2520 =
							(BgL_tmpz00_2521 == CNST_TABLE_REF(((long) 6)));
					}
					if (BgL_test2467z00_2520)
						{	/* Jas/as.scm 160 */
							{
								obj_t BgL_auxz00_2527;

								{	/* Jas/as.scm 162 */
									obj_t BgL_l1265z00_610;

									{	/* Jas/as.scm 162 */
										obj_t BgL_pairz00_1488;

										BgL_pairz00_1488 = CAR(((obj_t) BgL_infosz00_12));
										BgL_l1265z00_610 = CDR(BgL_pairz00_1488);
									}
									if (NULLP(BgL_l1265z00_610))
										{	/* Jas/as.scm 162 */
											BgL_auxz00_2527 = BNIL;
										}
									else
										{	/* Jas/as.scm 162 */
											obj_t BgL_head1267z00_612;

											{	/* Jas/as.scm 162 */
												obj_t BgL_res2191z00_1490;

												BgL_res2191z00_1490 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_head1267z00_612 = BgL_res2191z00_1490;
											}
											{
												obj_t BgL_l1265z00_614;
												obj_t BgL_tail1268z00_615;

												BgL_l1265z00_614 = BgL_l1265z00_610;
												BgL_tail1268z00_615 = BgL_head1267z00_612;
											BgL_zc3z04anonymousza31634ze3z87_616:
												if (NULLP(BgL_l1265z00_614))
													{	/* Jas/as.scm 162 */
														BgL_auxz00_2527 = CDR(BgL_head1267z00_612);
													}
												else
													{	/* Jas/as.scm 162 */
														obj_t BgL_newtail1269z00_618;

														{	/* Jas/as.scm 162 */
															BgL_fieldz00_bglt BgL_arg1640z00_620;

															{	/* Jas/as.scm 162 */
																obj_t BgL_fz00_621;

																BgL_fz00_621 = CAR(((obj_t) BgL_l1265z00_614));
																{	/* Jas/as.scm 329 */
																	BgL_fieldz00_bglt BgL_fieldz00_1494;

																	BgL_fieldz00_1494 =
																		BGl_declaredzd2fieldzd2zzjas_classfilez00
																		(BgL_classfilez00_11, BgL_fz00_621);
																	BGl_poolzd2fieldzd2zzjas_classfilez00
																		(BgL_classfilez00_11, BgL_fieldz00_1494);
																	BgL_arg1640z00_620 = BgL_fieldz00_1494;
																}
															}
															{	/* Jas/as.scm 162 */
																obj_t BgL_res2193z00_1495;

																BgL_res2193z00_1495 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1640z00_620), BNIL);
																BgL_newtail1269z00_618 = BgL_res2193z00_1495;
															}
														}
														SET_CDR(BgL_tail1268z00_615,
															BgL_newtail1269z00_618);
														{	/* Jas/as.scm 162 */
															obj_t BgL_arg1639z00_619;

															BgL_arg1639z00_619 =
																CDR(((obj_t) BgL_l1265z00_614));
															{
																obj_t BgL_tail1268z00_2547;
																obj_t BgL_l1265z00_2546;

																BgL_l1265z00_2546 = BgL_arg1639z00_619;
																BgL_tail1268z00_2547 = BgL_newtail1269z00_618;
																BgL_tail1268z00_615 = BgL_tail1268z00_2547;
																BgL_l1265z00_614 = BgL_l1265z00_2546;
																goto BgL_zc3z04anonymousza31634ze3z87_616;
															}
														}
													}
											}
										}
								}
								((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_11))->
										BgL_fieldsz00) = ((obj_t) BgL_auxz00_2527), BUNSPEC);
							}
							{	/* Jas/as.scm 163 */
								obj_t BgL_arg1641z00_623;

								BgL_arg1641z00_623 = CDR(((obj_t) BgL_infosz00_12));
								{
									obj_t BgL_infosz00_2551;

									BgL_infosz00_2551 = BgL_arg1641z00_623;
									BgL_infosz00_12 = BgL_infosz00_2551;
									goto BGl_scanzd2infoszd2zzjas_asz00;
								}
							}
						}
					else
						{	/* Jas/as.scm 164 */
							bool_t BgL_test2470z00_2552;

							{	/* Jas/as.scm 164 */
								obj_t BgL_tmpz00_2553;

								{	/* Jas/as.scm 164 */
									obj_t BgL_pairz00_1502;

									BgL_pairz00_1502 = CAR(((obj_t) BgL_infosz00_12));
									BgL_tmpz00_2553 = CAR(BgL_pairz00_1502);
								}
								BgL_test2470z00_2552 =
									(BgL_tmpz00_2553 == CNST_TABLE_REF(((long) 7)));
							}
							if (BgL_test2470z00_2552)
								{	/* Jas/as.scm 164 */
									{
										obj_t BgL_auxz00_2559;

										{	/* Jas/as.scm 166 */
											BgL_attributez00_bglt BgL_arg1652z00_627;
											obj_t BgL_arg1662z00_628;

											{	/* Jas/as.scm 166 */
												obj_t BgL_arg1663z00_629;

												{	/* Jas/as.scm 166 */
													obj_t BgL_pairz00_1508;

													{	/* Jas/as.scm 166 */
														obj_t BgL_pairz00_1507;

														BgL_pairz00_1507 = CAR(((obj_t) BgL_infosz00_12));
														BgL_pairz00_1508 = CDR(BgL_pairz00_1507);
													}
													BgL_arg1663z00_629 = CAR(BgL_pairz00_1508);
												}
												BgL_arg1652z00_627 =
													BGl_srcfilez00zzjas_asz00(BgL_classfilez00_11,
													BgL_arg1663z00_629);
											}
											BgL_arg1662z00_628 =
												(((BgL_classfilez00_bglt)
													COBJECT(BgL_classfilez00_11))->BgL_attributesz00);
											BgL_auxz00_2559 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1652z00_627),
												BgL_arg1662z00_628);
										}
										((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_11))->
												BgL_attributesz00) =
											((obj_t) BgL_auxz00_2559), BUNSPEC);
									}
									{	/* Jas/as.scm 167 */
										obj_t BgL_arg1664z00_630;

										BgL_arg1664z00_630 = CDR(((obj_t) BgL_infosz00_12));
										{
											obj_t BgL_infosz00_2571;

											BgL_infosz00_2571 = BgL_arg1664z00_630;
											BgL_infosz00_12 = BgL_infosz00_2571;
											goto BGl_scanzd2infoszd2zzjas_asz00;
										}
									}
								}
							else
								{	/* Jas/as.scm 168 */
									bool_t BgL_test2471z00_2572;

									{	/* Jas/as.scm 168 */
										obj_t BgL_tmpz00_2573;

										{	/* Jas/as.scm 168 */
											obj_t BgL_pairz00_1513;

											BgL_pairz00_1513 = CAR(((obj_t) BgL_infosz00_12));
											BgL_tmpz00_2573 = CAR(BgL_pairz00_1513);
										}
										BgL_test2471z00_2572 =
											(BgL_tmpz00_2573 == CNST_TABLE_REF(((long) 8)));
									}
									if (BgL_test2471z00_2572)
										{	/* Jas/as.scm 168 */
											{	/* Jas/as.scm 169 */
												obj_t BgL_pairz00_1519;

												{	/* Jas/as.scm 169 */
													obj_t BgL_pairz00_1518;

													BgL_pairz00_1518 = CAR(((obj_t) BgL_infosz00_12));
													BgL_pairz00_1519 = CDR(BgL_pairz00_1518);
												}
												BGl_za2za2sdefileza2za2z00zzjas_asz00 =
													CAR(BgL_pairz00_1519);
											}
											{	/* Jas/as.scm 170 */
												obj_t BgL_pairz00_1527;

												{	/* Jas/as.scm 170 */
													obj_t BgL_pairz00_1526;

													{	/* Jas/as.scm 170 */
														obj_t BgL_pairz00_1525;

														BgL_pairz00_1525 = CAR(((obj_t) BgL_infosz00_12));
														BgL_pairz00_1526 = CDR(BgL_pairz00_1525);
													}
													BgL_pairz00_1527 = CDR(BgL_pairz00_1526);
												}
												BGl_za2za2sdefullfileza2za2z00zzjas_asz00 =
													CAR(BgL_pairz00_1527);
											}
											{	/* Jas/as.scm 171 */
												obj_t BgL_arg1669z00_633;

												BgL_arg1669z00_633 = CDR(((obj_t) BgL_infosz00_12));
												{
													obj_t BgL_infosz00_2590;

													BgL_infosz00_2590 = BgL_arg1669z00_633;
													BgL_infosz00_12 = BgL_infosz00_2590;
													goto BGl_scanzd2infoszd2zzjas_asz00;
												}
											}
										}
									else
										{	/* Jas/as.scm 168 */
											{
												obj_t BgL_auxz00_2591;

												{	/* Jas/as.scm 174 */
													obj_t BgL_head1272z00_637;

													{	/* Jas/as.scm 174 */
														obj_t BgL_res2195z00_1530;

														BgL_res2195z00_1530 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1272z00_637 = BgL_res2195z00_1530;
													}
													{
														obj_t BgL_l1270z00_639;
														obj_t BgL_tail1273z00_640;

														BgL_l1270z00_639 = BgL_infosz00_12;
														BgL_tail1273z00_640 = BgL_head1272z00_637;
													BgL_zc3z04anonymousza31671ze3z87_641:
														if (NULLP(BgL_l1270z00_639))
															{	/* Jas/as.scm 174 */
																BgL_auxz00_2591 = CDR(BgL_head1272z00_637);
															}
														else
															{	/* Jas/as.scm 174 */
																obj_t BgL_newtail1274z00_643;

																{	/* Jas/as.scm 174 */
																	obj_t BgL_arg1685z00_645;

																	{	/* Jas/as.scm 174 */
																		obj_t BgL_mz00_646;

																		BgL_mz00_646 =
																			CAR(((obj_t) BgL_l1270z00_639));
																		BgL_arg1685z00_645 =
																			BGl_aszd2methodzd2zzjas_asz00
																			(BgL_classfilez00_11, BgL_mz00_646);
																	}
																	{	/* Jas/as.scm 174 */
																		obj_t BgL_res2197z00_1534;

																		BgL_res2197z00_1534 =
																			MAKE_YOUNG_PAIR(BgL_arg1685z00_645, BNIL);
																		BgL_newtail1274z00_643 =
																			BgL_res2197z00_1534;
																	}
																}
																SET_CDR(BgL_tail1273z00_640,
																	BgL_newtail1274z00_643);
																{	/* Jas/as.scm 174 */
																	obj_t BgL_arg1684z00_644;

																	BgL_arg1684z00_644 =
																		CDR(((obj_t) BgL_l1270z00_639));
																	{
																		obj_t BgL_tail1273z00_2604;
																		obj_t BgL_l1270z00_2603;

																		BgL_l1270z00_2603 = BgL_arg1684z00_644;
																		BgL_tail1273z00_2604 =
																			BgL_newtail1274z00_643;
																		BgL_tail1273z00_640 = BgL_tail1273z00_2604;
																		BgL_l1270z00_639 = BgL_l1270z00_2603;
																		goto BgL_zc3z04anonymousza31671ze3z87_641;
																	}
																}
															}
													}
												}
												((((BgL_classfilez00_bglt)
															COBJECT(BgL_classfilez00_11))->BgL_methodsz00) =
													((obj_t) BgL_auxz00_2591), BUNSPEC);
											}
											if (NULLP(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00))
												{	/* Jas/as.scm 176 */
													BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
												}
											else
												{	/* Jas/as.scm 176 */
													BFALSE;
												}
											if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
												{	/* Jas/as.scm 177 */
													return
														BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00();
												}
											else
												{	/* Jas/as.scm 177 */
													return BFALSE;
												}
										}
								}
						}
				}
		}

	}



/* srcfile */
	BgL_attributez00_bglt BGl_srcfilez00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_13, obj_t BgL_namez00_14)
	{
		{	/* Jas/as.scm 182 */
			{	/* Jas/as.scm 183 */
				BgL_attributez00_bglt BgL_new1082z00_652;

				{	/* Jas/as.scm 184 */
					BgL_attributez00_bglt BgL_new1081z00_653;

					BgL_new1081z00_653 =
						((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_attributez00_bgl))));
					{	/* Jas/as.scm 184 */
						long BgL_arg1695z00_654;

						{	/* Jas/as.scm 184 */
							long BgL_res2199z00_1540;

							BgL_res2199z00_1540 =
								BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
							BgL_arg1695z00_654 = BgL_res2199z00_1540;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1081z00_653), BgL_arg1695z00_654);
					}
					BgL_new1082z00_652 = BgL_new1081z00_653;
				}
				((((BgL_attributez00_bglt) COBJECT(BgL_new1082z00_652))->BgL_typez00) =
					((obj_t) CNST_TABLE_REF(((long) 9))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1082z00_652))->BgL_namez00) =
					((obj_t)
						BINT(BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_13,
								BGl_string2324z00zzjas_asz00))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1082z00_652))->
						BgL_siza7eza7) = ((obj_t) BINT(((long) 2))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1082z00_652))->BgL_infoz00) =
					((obj_t)
						BINT(BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_13,
								BgL_namez00_14))), BUNSPEC);
				return BgL_new1082z00_652;
			}
		}

	}



/* smap */
	BgL_attributez00_bglt BGl_smapz00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_15)
	{
		{	/* Jas/as.scm 192 */
			{	/* Jas/as.scm 193 */
				obj_t BgL_smapfilez00_655;

				BgL_smapfilez00_655 =
					BGl_stringzd2ze3utf8z31zzjas_libz00(BGl_smapfilez00zzjas_asz00());
				{	/* Jas/as.scm 194 */
					BgL_attributez00_bglt BgL_new1084z00_656;

					{	/* Jas/as.scm 195 */
						BgL_attributez00_bglt BgL_new1083z00_657;

						BgL_new1083z00_657 =
							((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_attributez00_bgl))));
						{	/* Jas/as.scm 195 */
							long BgL_arg1696z00_658;

							{	/* Jas/as.scm 195 */
								long BgL_res2200z00_1544;

								BgL_res2200z00_1544 =
									BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
								BgL_arg1696z00_658 = BgL_res2200z00_1544;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1083z00_657), BgL_arg1696z00_658);
						}
						BgL_new1084z00_656 = BgL_new1083z00_657;
					}
					((((BgL_attributez00_bglt) COBJECT(BgL_new1084z00_656))->
							BgL_typez00) = ((obj_t) CNST_TABLE_REF(((long) 10))), BUNSPEC);
					((((BgL_attributez00_bglt) COBJECT(BgL_new1084z00_656))->
							BgL_namez00) =
						((obj_t)
							BINT(BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_15,
									BGl_string2325z00zzjas_asz00))), BUNSPEC);
					((((BgL_attributez00_bglt) COBJECT(BgL_new1084z00_656))->
							BgL_siza7eza7) =
						((obj_t) BINT(STRING_LENGTH(((obj_t) BgL_smapfilez00_655)))),
						BUNSPEC);
					((((BgL_attributez00_bglt) COBJECT(BgL_new1084z00_656))->
							BgL_infoz00) = ((obj_t) BgL_smapfilez00_655), BUNSPEC);
					return BgL_new1084z00_656;
				}
			}
		}

	}



/* smapfile */
	obj_t BGl_smapfilez00zzjas_asz00()
	{
		{	/* Jas/as.scm 200 */
			{	/* Jas/as.scm 207 */
				obj_t BgL_arg1698z00_660;
				obj_t BgL_arg1704z00_661;
				obj_t BgL_arg1707z00_662;

				if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
					{	/* Jas/as.scm 207 */
						BgL_arg1698z00_660 = BGl_string2326z00zzjas_asz00;
					}
				else
					{	/* Jas/as.scm 207 */
						BgL_arg1698z00_660 = BGl_string2327z00zzjas_asz00;
					}
				{	/* Jas/as.scm 214 */
					obj_t BgL_arg1746z00_683;

					if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
						{	/* Jas/as.scm 214 */
							BgL_arg1746z00_683 = BGl_za2za2maxcharza2za2z00zzjas_asz00;
						}
					else
						{	/* Jas/as.scm 214 */
							BgL_arg1746z00_683 = BGl_za2za2maxlineza2za2z00zzjas_asz00;
						}
					{	/* Jas/as.scm 214 */

						BgL_arg1704z00_661 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) CINT(BgL_arg1746z00_683), ((long) 10));
				}}
				if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
					{	/* Jas/as.scm 225 */
						obj_t BgL_arg1747z00_686;

						{	/* Jas/as.scm 225 */
							obj_t BgL_runner1809z00_718;

							{	/* Jas/as.scm 226 */
								obj_t BgL_l1275z00_696;

								BgL_l1275z00_696 = BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00;
								if (NULLP(BgL_l1275z00_696))
									{	/* Jas/as.scm 226 */
										BgL_runner1809z00_718 = BNIL;
									}
								else
									{	/* Jas/as.scm 226 */
										obj_t BgL_head1277z00_698;

										{	/* Jas/as.scm 226 */
											obj_t BgL_res2203z00_1550;

											BgL_res2203z00_1550 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1277z00_698 = BgL_res2203z00_1550;
										}
										{
											obj_t BgL_l1275z00_700;
											obj_t BgL_tail1278z00_701;

											BgL_l1275z00_700 = BgL_l1275z00_696;
											BgL_tail1278z00_701 = BgL_head1277z00_698;
										BgL_zc3z04anonymousza31770ze3z87_702:
											if (NULLP(BgL_l1275z00_700))
												{	/* Jas/as.scm 226 */
													BgL_runner1809z00_718 = CDR(BgL_head1277z00_698);
												}
											else
												{	/* Jas/as.scm 226 */
													obj_t BgL_newtail1279z00_704;

													{	/* Jas/as.scm 226 */
														obj_t BgL_arg1778z00_706;

														{	/* Jas/as.scm 226 */
															obj_t BgL_xz00_707;

															BgL_xz00_707 = CAR(((obj_t) BgL_l1275z00_700));
															{	/* Jas/as.scm 228 */
																obj_t BgL_arg1779z00_708;
																obj_t BgL_arg1782z00_709;
																long BgL_arg1784z00_710;

																BgL_arg1779z00_708 =
																	CAR(((obj_t) BgL_xz00_707));
																{	/* Jas/as.scm 228 */
																	obj_t BgL_pairz00_1558;

																	BgL_pairz00_1558 =
																		CDR(((obj_t) BgL_xz00_707));
																	BgL_arg1782z00_709 = CAR(BgL_pairz00_1558);
																}
																{	/* Jas/as.scm 229 */
																	long BgL_tmpz00_2662;

																	{	/* Jas/as.scm 229 */
																		long BgL_auxz00_2669;
																		long BgL_tmpz00_2663;

																		{	/* Jas/as.scm 229 */
																			obj_t BgL_pairz00_1568;

																			BgL_pairz00_1568 =
																				CDR(((obj_t) BgL_xz00_707));
																			BgL_auxz00_2669 =
																				(long) CINT(CAR(BgL_pairz00_1568));
																		}
																		{	/* Jas/as.scm 229 */
																			obj_t BgL_pairz00_1564;

																			{	/* Jas/as.scm 229 */
																				obj_t BgL_pairz00_1563;

																				BgL_pairz00_1563 =
																					CDR(((obj_t) BgL_xz00_707));
																				BgL_pairz00_1564 =
																					CDR(BgL_pairz00_1563);
																			}
																			BgL_tmpz00_2663 =
																				(long) CINT(CAR(BgL_pairz00_1564));
																		}
																		BgL_tmpz00_2662 =
																			(BgL_tmpz00_2663 - BgL_auxz00_2669);
																	}
																	BgL_arg1784z00_710 =
																		(((long) 1) + BgL_tmpz00_2662);
																}
																{	/* Jas/as.scm 227 */
																	obj_t BgL_list1785z00_711;

																	{	/* Jas/as.scm 227 */
																		obj_t BgL_arg1790z00_712;

																		{	/* Jas/as.scm 227 */
																			obj_t BgL_arg1796z00_713;

																			BgL_arg1796z00_713 =
																				MAKE_YOUNG_PAIR(BINT
																				(BgL_arg1784z00_710), BNIL);
																			BgL_arg1790z00_712 =
																				MAKE_YOUNG_PAIR(BgL_arg1782z00_709,
																				BgL_arg1796z00_713);
																		}
																		BgL_list1785z00_711 =
																			MAKE_YOUNG_PAIR(BgL_arg1779z00_708,
																			BgL_arg1790z00_712);
																	}
																	BgL_arg1778z00_706 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string2328z00zzjas_asz00,
																		BgL_list1785z00_711);
														}}}
														{	/* Jas/as.scm 226 */
															obj_t BgL_res2207z00_1574;

															BgL_res2207z00_1574 =
																MAKE_YOUNG_PAIR(BgL_arg1778z00_706, BNIL);
															BgL_newtail1279z00_704 = BgL_res2207z00_1574;
													}}
													SET_CDR(BgL_tail1278z00_701, BgL_newtail1279z00_704);
													{	/* Jas/as.scm 226 */
														obj_t BgL_arg1775z00_705;

														BgL_arg1775z00_705 =
															CDR(((obj_t) BgL_l1275z00_700));
														{
															obj_t BgL_tail1278z00_2686;
															obj_t BgL_l1275z00_2685;

															BgL_l1275z00_2685 = BgL_arg1775z00_705;
															BgL_tail1278z00_2686 = BgL_newtail1279z00_704;
															BgL_tail1278z00_701 = BgL_tail1278z00_2686;
															BgL_l1275z00_700 = BgL_l1275z00_2685;
															goto BgL_zc3z04anonymousza31770ze3z87_702;
														}
													}
												}
										}
									}
							}
							BgL_arg1747z00_686 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_runner1809z00_718);
						}
						{	/* Jas/as.scm 219 */
							obj_t BgL_list1748z00_687;

							{	/* Jas/as.scm 219 */
								obj_t BgL_arg1754z00_688;

								{	/* Jas/as.scm 219 */
									obj_t BgL_arg1755z00_689;

									{	/* Jas/as.scm 219 */
										obj_t BgL_arg1756z00_690;

										{	/* Jas/as.scm 219 */
											obj_t BgL_arg1757z00_691;

											{	/* Jas/as.scm 219 */
												obj_t BgL_arg1759z00_692;

												{	/* Jas/as.scm 219 */
													obj_t BgL_arg1760z00_693;

													{	/* Jas/as.scm 219 */
														obj_t BgL_arg1761z00_694;

														{	/* Jas/as.scm 219 */
															obj_t BgL_arg1768z00_695;

															BgL_arg1768z00_695 =
																MAKE_YOUNG_PAIR(BgL_arg1747z00_686, BNIL);
															BgL_arg1761z00_694 =
																MAKE_YOUNG_PAIR(BGl_string2329z00zzjas_asz00,
																BgL_arg1768z00_695);
														}
														BgL_arg1760z00_693 =
															MAKE_YOUNG_PAIR(BGl_string2330z00zzjas_asz00,
															BgL_arg1761z00_694);
													}
													BgL_arg1759z00_692 =
														MAKE_YOUNG_PAIR
														(BGl_za2za2sdefullfileza2za2z00zzjas_asz00,
														BgL_arg1760z00_693);
												}
												BgL_arg1757z00_691 =
													MAKE_YOUNG_PAIR(BGl_string2330z00zzjas_asz00,
													BgL_arg1759z00_692);
											}
											BgL_arg1756z00_690 =
												MAKE_YOUNG_PAIR(BGl_za2za2sdefileza2za2z00zzjas_asz00,
												BgL_arg1757z00_691);
										}
										BgL_arg1755z00_689 =
											MAKE_YOUNG_PAIR(BGl_string2331z00zzjas_asz00,
											BgL_arg1756z00_690);
									}
									BgL_arg1754z00_688 =
										MAKE_YOUNG_PAIR(BGl_string2332z00zzjas_asz00,
										BgL_arg1755z00_689);
								}
								BgL_list1748z00_687 =
									MAKE_YOUNG_PAIR(BGl_string2333z00zzjas_asz00,
									BgL_arg1754z00_688);
							}
							BgL_arg1707z00_662 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1748z00_687);
						}
					}
				else
					{	/* Jas/as.scm 218 */
						BgL_arg1707z00_662 = BGl_string2334z00zzjas_asz00;
					}
				{	/* Jas/as.scm 201 */
					obj_t BgL_list1708z00_663;

					{	/* Jas/as.scm 201 */
						obj_t BgL_arg1711z00_664;

						{	/* Jas/as.scm 201 */
							obj_t BgL_arg1712z00_665;

							{	/* Jas/as.scm 201 */
								obj_t BgL_arg1719z00_666;

								{	/* Jas/as.scm 201 */
									obj_t BgL_arg1725z00_667;

									{	/* Jas/as.scm 201 */
										obj_t BgL_arg1726z00_668;

										{	/* Jas/as.scm 201 */
											obj_t BgL_arg1727z00_669;

											{	/* Jas/as.scm 201 */
												obj_t BgL_arg1728z00_670;

												{	/* Jas/as.scm 201 */
													obj_t BgL_arg1729z00_671;

													{	/* Jas/as.scm 201 */
														obj_t BgL_arg1731z00_672;

														{	/* Jas/as.scm 201 */
															obj_t BgL_arg1732z00_673;

															{	/* Jas/as.scm 201 */
																obj_t BgL_arg1733z00_674;

																{	/* Jas/as.scm 201 */
																	obj_t BgL_arg1738z00_675;

																	{	/* Jas/as.scm 201 */
																		obj_t BgL_arg1739z00_676;

																		{	/* Jas/as.scm 201 */
																			obj_t BgL_arg1740z00_677;

																			{	/* Jas/as.scm 201 */
																				obj_t BgL_arg1741z00_678;

																				{	/* Jas/as.scm 201 */
																					obj_t BgL_arg1742z00_679;

																					{	/* Jas/as.scm 201 */
																						obj_t BgL_arg1743z00_680;

																						{	/* Jas/as.scm 201 */
																							obj_t BgL_arg1744z00_681;

																							{	/* Jas/as.scm 201 */
																								obj_t BgL_arg1745z00_682;

																								BgL_arg1745z00_682 =
																									MAKE_YOUNG_PAIR
																									(BGl_string2335z00zzjas_asz00,
																									BNIL);
																								BgL_arg1744z00_681 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1707z00_662,
																									BgL_arg1745z00_682);
																							}
																							BgL_arg1743z00_680 =
																								MAKE_YOUNG_PAIR
																								(BGl_string2336z00zzjas_asz00,
																								BgL_arg1744z00_681);
																						}
																						BgL_arg1742z00_679 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1704z00_661,
																							BgL_arg1743z00_680);
																					}
																					BgL_arg1741z00_678 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2337z00zzjas_asz00,
																						BgL_arg1742z00_679);
																				}
																				BgL_arg1740z00_677 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2329z00zzjas_asz00,
																					BgL_arg1741z00_678);
																			}
																			BgL_arg1739z00_676 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2330z00zzjas_asz00,
																				BgL_arg1740z00_677);
																		}
																		BgL_arg1738z00_675 =
																			MAKE_YOUNG_PAIR
																			(BGl_za2za2sdefullfileza2za2z00zzjas_asz00,
																			BgL_arg1739z00_676);
																	}
																	BgL_arg1733z00_674 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2330z00zzjas_asz00,
																		BgL_arg1738z00_675);
																}
																BgL_arg1732z00_673 =
																	MAKE_YOUNG_PAIR
																	(BGl_za2za2sdefileza2za2z00zzjas_asz00,
																	BgL_arg1733z00_674);
															}
															BgL_arg1731z00_672 =
																MAKE_YOUNG_PAIR(BGl_string2331z00zzjas_asz00,
																BgL_arg1732z00_673);
														}
														BgL_arg1729z00_671 =
															MAKE_YOUNG_PAIR(BGl_string2332z00zzjas_asz00,
															BgL_arg1731z00_672);
													}
													BgL_arg1728z00_670 =
														MAKE_YOUNG_PAIR(BGl_string2330z00zzjas_asz00,
														BgL_arg1729z00_671);
												}
												BgL_arg1727z00_669 =
													MAKE_YOUNG_PAIR(BgL_arg1698z00_660,
													BgL_arg1728z00_670);
											}
											BgL_arg1726z00_668 =
												MAKE_YOUNG_PAIR(BGl_string2338z00zzjas_asz00,
												BgL_arg1727z00_669);
										}
										BgL_arg1725z00_667 =
											MAKE_YOUNG_PAIR(BGl_string2330z00zzjas_asz00,
											BgL_arg1726z00_668);
									}
									BgL_arg1719z00_666 =
										MAKE_YOUNG_PAIR(BGl_string2327z00zzjas_asz00,
										BgL_arg1725z00_667);
								}
								BgL_arg1712z00_665 =
									MAKE_YOUNG_PAIR(BGl_string2330z00zzjas_asz00,
									BgL_arg1719z00_666);
							}
							BgL_arg1711z00_664 =
								MAKE_YOUNG_PAIR(BGl_za2za2sdefileza2za2z00zzjas_asz00,
								BgL_arg1712z00_665);
						}
						BgL_list1708z00_663 =
							MAKE_YOUNG_PAIR(BGl_string2339z00zzjas_asz00, BgL_arg1711z00_664);
					}
					return
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1708z00_663);
				}
			}
		}

	}



/* as-declare */
	obj_t BGl_aszd2declarezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_16, obj_t BgL_declz00_17)
	{
		{	/* Jas/as.scm 237 */
			{
				obj_t BgL_gnamez00_719;
				obj_t BgL_valuez00_720;

				if (PAIRP(BgL_declz00_17))
					{	/* Jas/as.scm 238 */
						obj_t BgL_cdrzd2226zd2_725;

						BgL_cdrzd2226zd2_725 = CDR(BgL_declz00_17);
						if (PAIRP(BgL_cdrzd2226zd2_725))
							{	/* Jas/as.scm 238 */
								if (NULLP(CDR(BgL_cdrzd2226zd2_725)))
									{	/* Jas/as.scm 238 */
										BgL_gnamez00_719 = CAR(BgL_declz00_17);
										BgL_valuez00_720 = CAR(BgL_cdrzd2226zd2_725);
										{	/* Jas/as.scm 240 */
											obj_t BgL_arg1827z00_732;

											{
												obj_t BgL_classz00_741;
												obj_t BgL_modifiersz00_742;
												obj_t BgL_tretz00_743;
												obj_t BgL_namez00_744;
												obj_t BgL_targsz00_745;
												obj_t BgL_classz00_736;
												obj_t BgL_modifiersz00_737;
												obj_t BgL_typez00_738;
												obj_t BgL_namez00_739;
												obj_t BgL_modifiersz00_733;
												obj_t BgL_namez00_734;

												if (PAIRP(BgL_valuez00_720))
													{	/* Jas/as.scm 240 */
														obj_t BgL_cdrzd2246zd2_750;

														BgL_cdrzd2246zd2_750 = CDR(BgL_valuez00_720);
														if (
															(CAR(BgL_valuez00_720) ==
																CNST_TABLE_REF(((long) 12))))
															{	/* Jas/as.scm 240 */
																if (PAIRP(BgL_cdrzd2246zd2_750))
																	{	/* Jas/as.scm 240 */
																		obj_t BgL_cdrzd2250zd2_754;

																		BgL_cdrzd2250zd2_754 =
																			CDR(BgL_cdrzd2246zd2_750);
																		if (PAIRP(BgL_cdrzd2250zd2_754))
																			{	/* Jas/as.scm 240 */
																				obj_t BgL_carzd2253zd2_756;

																				BgL_carzd2253zd2_756 =
																					CAR(BgL_cdrzd2250zd2_754);
																				if (STRINGP(BgL_carzd2253zd2_756))
																					{	/* Jas/as.scm 240 */
																						if (NULLP(CDR
																								(BgL_cdrzd2250zd2_754)))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_arg1838z00_760;

																								BgL_arg1838z00_760 =
																									CAR(BgL_cdrzd2246zd2_750);
																								{
																									BgL_classez00_bglt
																										BgL_auxz00_2746;
																									BgL_modifiersz00_733 =
																										BgL_arg1838z00_760;
																									BgL_namez00_734 =
																										BgL_carzd2253zd2_756;
																									{	/* Jas/as.scm 243 */
																										obj_t BgL_namezf2zf2_799;

																										BgL_namezf2zf2_799 =
																											BGl_pathnamez00zzjas_asz00
																											(BgL_namez00_734);
																										{	/* Jas/as.scm 244 */
																											BgL_classez00_bglt
																												BgL_new1086z00_800;
																											{	/* Jas/as.scm 245 */
																												BgL_classez00_bglt
																													BgL_new1085z00_801;
																												BgL_new1085z00_801 =
																													((BgL_classez00_bglt)
																													BOBJECT(GC_MALLOC
																														(sizeof(struct
																																BgL_classez00_bgl))));
																												{	/* Jas/as.scm 245 */
																													long
																														BgL_arg1872z00_802;
																													{	/* Jas/as.scm 245 */
																														long
																															BgL_res2208z00_1578;
																														BgL_res2208z00_1578
																															=
																															BGL_CLASS_INDEX
																															(BGl_classez00zzjas_classfilez00);
																														BgL_arg1872z00_802 =
																															BgL_res2208z00_1578;
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(((BgL_objectz00_bglt) BgL_new1085z00_801), BgL_arg1872z00_802);
																												}
																												BgL_new1086z00_800 =
																													BgL_new1085z00_801;
																											}
																											((((BgL_jastypez00_bglt)
																														COBJECT((
																																(BgL_jastypez00_bglt)
																																BgL_new1086z00_800)))->
																													BgL_codez00) =
																												((obj_t)
																													string_append_3
																													(BGl_string2340z00zzjas_asz00,
																														BgL_namezf2zf2_799,
																														BGl_string2341z00zzjas_asz00)),
																												BUNSPEC);
																											((((BgL_jastypez00_bglt)
																														COBJECT((
																																(BgL_jastypez00_bglt)
																																BgL_new1086z00_800)))->
																													BgL_vectz00) =
																												((obj_t) BFALSE),
																												BUNSPEC);
																											((((BgL_classez00_bglt)
																														COBJECT
																														(BgL_new1086z00_800))->
																													BgL_flagsz00) =
																												((obj_t)
																													BINT
																													(BGl_aszd2classzd2modifiersz00zzjas_asz00
																														(BgL_modifiersz00_733))),
																												BUNSPEC);
																											((((BgL_classez00_bglt)
																														COBJECT
																														(BgL_new1086z00_800))->
																													BgL_namez00) =
																												((obj_t)
																													BgL_namezf2zf2_799),
																												BUNSPEC);
																											((((BgL_classez00_bglt)
																														COBJECT
																														(BgL_new1086z00_800))->
																													BgL_poolz00) =
																												((obj_t) BFALSE),
																												BUNSPEC);
																											BgL_auxz00_2746 =
																												BgL_new1086z00_800;
																									}}
																									BgL_arg1827z00_732 =
																										((obj_t) BgL_auxz00_2746);
																							}}
																						else
																							{	/* Jas/as.scm 240 */
																							BgL_tagzd2235zd2_747:
																								BgL_arg1827z00_732 =
																									BGl_jaszd2errorzd2zzjas_classfilez00
																									(BgL_classfilez00_16,
																									BGl_string2342z00zzjas_asz00,
																									BgL_declz00_17);
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd2235zd2_747;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd2235zd2_747;
																			}
																	}
																else
																	{	/* Jas/as.scm 240 */
																		goto BgL_tagzd2235zd2_747;
																	}
															}
														else
															{	/* Jas/as.scm 240 */
																if (
																	(CAR(BgL_valuez00_720) ==
																		CNST_TABLE_REF(((long) 13))))
																	{	/* Jas/as.scm 240 */
																		if (PAIRP(BgL_cdrzd2246zd2_750))
																			{	/* Jas/as.scm 240 */
																				obj_t BgL_cdrzd2355zd2_766;

																				BgL_cdrzd2355zd2_766 =
																					CDR(BgL_cdrzd2246zd2_750);
																				if (PAIRP(BgL_cdrzd2355zd2_766))
																					{	/* Jas/as.scm 240 */
																						obj_t BgL_cdrzd2361zd2_768;

																						BgL_cdrzd2361zd2_768 =
																							CDR(BgL_cdrzd2355zd2_766);
																						if (PAIRP(BgL_cdrzd2361zd2_768))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_cdrzd2366zd2_770;

																								BgL_cdrzd2366zd2_770 =
																									CDR(BgL_cdrzd2361zd2_768);
																								if (PAIRP(BgL_cdrzd2366zd2_770))
																									{	/* Jas/as.scm 240 */
																										obj_t BgL_carzd2369zd2_772;

																										BgL_carzd2369zd2_772 =
																											CAR(BgL_cdrzd2366zd2_770);
																										if (STRINGP
																											(BgL_carzd2369zd2_772))
																											{	/* Jas/as.scm 240 */
																												if (NULLP(CDR
																														(BgL_cdrzd2366zd2_770)))
																													{	/* Jas/as.scm 240 */
																														obj_t
																															BgL_arg1850z00_776;
																														obj_t
																															BgL_arg1851z00_777;
																														obj_t
																															BgL_arg1852z00_778;
																														BgL_arg1850z00_776 =
																															CAR
																															(BgL_cdrzd2246zd2_750);
																														BgL_arg1851z00_777 =
																															CAR
																															(BgL_cdrzd2355zd2_766);
																														BgL_arg1852z00_778 =
																															CAR
																															(BgL_cdrzd2361zd2_768);
																														{
																															BgL_fieldz00_bglt
																																BgL_auxz00_2788;
																															BgL_classz00_736 =
																																BgL_arg1850z00_776;
																															BgL_modifiersz00_737
																																=
																																BgL_arg1851z00_777;
																															BgL_typez00_738 =
																																BgL_arg1852z00_778;
																															BgL_namez00_739 =
																																BgL_carzd2369zd2_772;
																															{	/* Jas/as.scm 249 */
																																BgL_fieldz00_bglt
																																	BgL_new1088z00_803;
																																{	/* Jas/as.scm 250 */
																																	BgL_fieldz00_bglt
																																		BgL_new1087z00_804;
																																	BgL_new1087z00_804
																																		=
																																		(
																																		(BgL_fieldz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_fieldz00_bgl))));
																																	{	/* Jas/as.scm 250 */
																																		long
																																			BgL_arg1873z00_805;
																																		{	/* Jas/as.scm 250 */
																																			long
																																				BgL_res2209z00_1582;
																																			BgL_res2209z00_1582
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_fieldz00zzjas_classfilez00);
																																			BgL_arg1873z00_805
																																				=
																																				BgL_res2209z00_1582;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1087z00_804), BgL_arg1873z00_805);
																																	}
																																	BgL_new1088z00_803
																																		=
																																		BgL_new1087z00_804;
																																}
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_flagsz00) = ((obj_t) BINT(BGl_aszd2fieldzd2modifiersz00zzjas_asz00(BgL_modifiersz00_737))), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_namez00) = ((obj_t) BgL_namez00_739), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_ownerz00) = ((obj_t) BgL_classz00_736), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_usertypez00) = ((obj_t) BgL_typez00_738), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_typez00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_pnamez00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_descriptorz00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_poolz00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_803)))->BgL_attributesz00) = ((obj_t) BNIL), BUNSPEC);
																																BgL_auxz00_2788
																																	=
																																	BgL_new1088z00_803;
																															}
																															BgL_arg1827z00_732
																																=
																																((obj_t)
																																BgL_auxz00_2788);
																													}}
																												else
																													{	/* Jas/as.scm 240 */
																														goto
																															BgL_tagzd2235zd2_747;
																													}
																											}
																										else
																											{	/* Jas/as.scm 240 */
																												goto
																													BgL_tagzd2235zd2_747;
																											}
																									}
																								else
																									{	/* Jas/as.scm 240 */
																										goto BgL_tagzd2235zd2_747;
																									}
																							}
																						else
																							{	/* Jas/as.scm 240 */
																								goto BgL_tagzd2235zd2_747;
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd2235zd2_747;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd2235zd2_747;
																			}
																	}
																else
																	{	/* Jas/as.scm 240 */
																		obj_t BgL_cdrzd2445zd2_780;

																		BgL_cdrzd2445zd2_780 =
																			CDR(BgL_valuez00_720);
																		if (
																			(CAR(BgL_valuez00_720) ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Jas/as.scm 240 */
																				if (PAIRP(BgL_cdrzd2445zd2_780))
																					{	/* Jas/as.scm 240 */
																						obj_t BgL_cdrzd2452zd2_784;

																						BgL_cdrzd2452zd2_784 =
																							CDR(BgL_cdrzd2445zd2_780);
																						if (PAIRP(BgL_cdrzd2452zd2_784))
																							{	/* Jas/as.scm 240 */
																								obj_t BgL_cdrzd2459zd2_786;

																								BgL_cdrzd2459zd2_786 =
																									CDR(BgL_cdrzd2452zd2_784);
																								if (PAIRP(BgL_cdrzd2459zd2_786))
																									{	/* Jas/as.scm 240 */
																										obj_t BgL_cdrzd2465zd2_788;

																										BgL_cdrzd2465zd2_788 =
																											CDR(BgL_cdrzd2459zd2_786);
																										if (PAIRP
																											(BgL_cdrzd2465zd2_788))
																											{	/* Jas/as.scm 240 */
																												obj_t
																													BgL_carzd2469zd2_790;
																												BgL_carzd2469zd2_790 =
																													CAR
																													(BgL_cdrzd2465zd2_788);
																												if (STRINGP
																													(BgL_carzd2469zd2_790))
																													{	/* Jas/as.scm 240 */
																														obj_t
																															BgL_arg1862z00_792;
																														obj_t
																															BgL_arg1863z00_793;
																														obj_t
																															BgL_arg1865z00_794;
																														obj_t
																															BgL_arg1866z00_795;
																														BgL_arg1862z00_792 =
																															CAR
																															(BgL_cdrzd2445zd2_780);
																														BgL_arg1863z00_793 =
																															CAR
																															(BgL_cdrzd2452zd2_784);
																														BgL_arg1865z00_794 =
																															CAR
																															(BgL_cdrzd2459zd2_786);
																														BgL_arg1866z00_795 =
																															CDR
																															(BgL_cdrzd2465zd2_788);
																														{
																															BgL_methodz00_bglt
																																BgL_auxz00_2837;
																															BgL_classz00_741 =
																																BgL_arg1862z00_792;
																															BgL_modifiersz00_742
																																=
																																BgL_arg1863z00_793;
																															BgL_tretz00_743 =
																																BgL_arg1865z00_794;
																															BgL_namez00_744 =
																																BgL_carzd2469zd2_790;
																															BgL_targsz00_745 =
																																BgL_arg1866z00_795;
																															{	/* Jas/as.scm 255 */
																																BgL_methodz00_bglt
																																	BgL_new1090z00_806;
																																{	/* Jas/as.scm 256 */
																																	BgL_methodz00_bglt
																																		BgL_new1089z00_809;
																																	BgL_new1089z00_809
																																		=
																																		(
																																		(BgL_methodz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_methodz00_bgl))));
																																	{	/* Jas/as.scm 256 */
																																		long
																																			BgL_arg1877z00_810;
																																		{	/* Jas/as.scm 256 */
																																			long
																																				BgL_res2210z00_1586;
																																			BgL_res2210z00_1586
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_methodz00zzjas_classfilez00);
																																			BgL_arg1877z00_810
																																				=
																																				BgL_res2210z00_1586;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1089z00_809), BgL_arg1877z00_810);
																																	}
																																	BgL_new1090z00_806
																																		=
																																		BgL_new1089z00_809;
																																}
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_flagsz00) = ((obj_t) BINT(BGl_aszd2methodzd2modifiersz00zzjas_asz00(BgL_modifiersz00_742))), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_namez00) = ((obj_t) BgL_namez00_744), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_ownerz00) = ((obj_t) BgL_classz00_741), BUNSPEC);
																																{
																																	obj_t
																																		BgL_auxz00_2850;
																																	{	/* Jas/as.scm 259 */
																																		obj_t
																																			BgL_arg1874z00_807;
																																		{	/* Jas/as.scm 259 */
																																			obj_t
																																				BgL_arg1876z00_808;
																																			BgL_arg1876z00_808
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_targsz00_745,
																																				BNIL);
																																			BgL_arg1874z00_807
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_tretz00_743,
																																				BgL_arg1876z00_808);
																																		}
																																		BgL_auxz00_2850
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					11)),
																																			BgL_arg1874z00_807);
																																	}
																																	((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_usertypez00) = ((obj_t) BgL_auxz00_2850), BUNSPEC);
																																}
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_typez00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_pnamez00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_descriptorz00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_poolz00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1090z00_806)))->BgL_attributesz00) = ((obj_t) BNIL), BUNSPEC);
																																BgL_auxz00_2837
																																	=
																																	BgL_new1090z00_806;
																															}
																															BgL_arg1827z00_732
																																=
																																((obj_t)
																																BgL_auxz00_2837);
																													}}
																												else
																													{	/* Jas/as.scm 240 */
																														goto
																															BgL_tagzd2235zd2_747;
																													}
																											}
																										else
																											{	/* Jas/as.scm 240 */
																												goto
																													BgL_tagzd2235zd2_747;
																											}
																									}
																								else
																									{	/* Jas/as.scm 240 */
																										goto BgL_tagzd2235zd2_747;
																									}
																							}
																						else
																							{	/* Jas/as.scm 240 */
																								goto BgL_tagzd2235zd2_747;
																							}
																					}
																				else
																					{	/* Jas/as.scm 240 */
																						goto BgL_tagzd2235zd2_747;
																					}
																			}
																		else
																			{	/* Jas/as.scm 240 */
																				goto BgL_tagzd2235zd2_747;
																			}
																	}
															}
													}
												else
													{	/* Jas/as.scm 240 */
														goto BgL_tagzd2235zd2_747;
													}
											}
											return
												BGl_aszd2assignzd2zzjas_classfilez00
												(BgL_classfilez00_16, BgL_gnamez00_719,
												BgL_arg1827z00_732);
										}
									}
								else
									{	/* Jas/as.scm 238 */
									BgL_tagzd2219zd2_722:
										return
											BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_16,
											BGl_string2342z00zzjas_asz00, BgL_declz00_17);
									}
							}
						else
							{	/* Jas/as.scm 238 */
								goto BgL_tagzd2219zd2_722;
							}
					}
				else
					{	/* Jas/as.scm 238 */
						goto BgL_tagzd2219zd2_722;
					}
			}
		}

	}



/* pathname */
	obj_t BGl_pathnamez00zzjas_asz00(obj_t BgL_strz00_18)
	{
		{	/* Jas/as.scm 263 */
			{	/* Jas/as.scm 264 */
				long BgL_lenz00_811;

				BgL_lenz00_811 = STRING_LENGTH(BgL_strz00_18);
				{	/* Jas/as.scm 264 */
					obj_t BgL_resz00_812;

					{	/* Jas/as.scm 265 */

						BgL_resz00_812 = make_string(BgL_lenz00_811, ((unsigned char) ' '));
					}
					{	/* Jas/as.scm 265 */

						{	/* Jas/as.scm 266 */
							long BgL_g1091z00_813;

							BgL_g1091z00_813 = (BgL_lenz00_811 - ((long) 1));
							{
								long BgL_iz00_815;

								BgL_iz00_815 = BgL_g1091z00_813;
							BgL_zc3z04anonymousza31878ze3z87_816:
								if ((BgL_iz00_815 == ((long) -1)))
									{	/* Jas/as.scm 268 */
										return BgL_resz00_812;
									}
								else
									{	/* Jas/as.scm 268 */
										if (
											(STRING_REF(BgL_strz00_18,
													BgL_iz00_815) == ((unsigned char) '.')))
											{	/* Jas/as.scm 270 */
												STRING_SET(BgL_resz00_812, BgL_iz00_815,
													((unsigned char) '/'));
												{
													long BgL_iz00_2881;

													BgL_iz00_2881 = (BgL_iz00_815 - ((long) 1));
													BgL_iz00_815 = BgL_iz00_2881;
													goto BgL_zc3z04anonymousza31878ze3z87_816;
												}
											}
										else
											{	/* Jas/as.scm 270 */
												{	/* Jas/as.scm 274 */
													unsigned char BgL_tmpz00_2883;

													BgL_tmpz00_2883 =
														STRING_REF(BgL_strz00_18, BgL_iz00_815);
													STRING_SET(BgL_resz00_812, BgL_iz00_815,
														BgL_tmpz00_2883);
												}
												{
													long BgL_iz00_2886;

													BgL_iz00_2886 = (BgL_iz00_815 - ((long) 1));
													BgL_iz00_815 = BgL_iz00_2886;
													goto BgL_zc3z04anonymousza31878ze3z87_816;
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



/* as-class-modifiers */
	long BGl_aszd2classzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_19)
	{
		{	/* Jas/as.scm 278 */
			{	/* Jas/as.scm 279 */
				long BgL_rz00_827;

				BgL_rz00_827 = ((long) 0);
				{
					obj_t BgL_l1280z00_829;

					BgL_l1280z00_829 = BgL_modifiersz00_19;
				BgL_zc3z04anonymousza31887ze3z87_830:
					if (PAIRP(BgL_l1280z00_829))
						{	/* Jas/as.scm 280 */
							{	/* Jas/as.scm 282 */
								obj_t BgL_namez00_832;

								BgL_namez00_832 = CAR(BgL_l1280z00_829);
								if ((BgL_namez00_832 == CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 282 */
										BgL_rz00_827 = (BgL_rz00_827 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 282 */
										if ((BgL_namez00_832 == CNST_TABLE_REF(((long) 15))))
											{	/* Jas/as.scm 282 */
												BgL_rz00_827 = (BgL_rz00_827 | ((long) 16));
											}
										else
											{	/* Jas/as.scm 282 */
												if ((BgL_namez00_832 == CNST_TABLE_REF(((long) 16))))
													{	/* Jas/as.scm 282 */
														BgL_rz00_827 = (BgL_rz00_827 | ((long) 32));
													}
												else
													{	/* Jas/as.scm 282 */
														if (
															(BgL_namez00_832 == CNST_TABLE_REF(((long) 17))))
															{	/* Jas/as.scm 282 */
																BgL_rz00_827 = (BgL_rz00_827 | ((long) 512));
															}
														else
															{	/* Jas/as.scm 282 */
																if (
																	(BgL_namez00_832 ==
																		CNST_TABLE_REF(((long) 18))))
																	{	/* Jas/as.scm 282 */
																		BgL_rz00_827 =
																			(BgL_rz00_827 | ((long) 1024));
																	}
																else
																	{	/* Jas/as.scm 282 */
																		BGl_errorz00zz__errorz00
																			(BGl_string2343z00zzjas_asz00,
																			BGl_string2344z00zzjas_asz00,
																			BgL_namez00_832);
																	}
															}
													}
											}
									}
							}
							{
								obj_t BgL_l1280z00_2912;

								BgL_l1280z00_2912 = CDR(BgL_l1280z00_829);
								BgL_l1280z00_829 = BgL_l1280z00_2912;
								goto BgL_zc3z04anonymousza31887ze3z87_830;
							}
						}
					else
						{	/* Jas/as.scm 280 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_827;
			}
		}

	}



/* as-field-modifiers */
	long BGl_aszd2fieldzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_20)
	{
		{	/* Jas/as.scm 292 */
			{	/* Jas/as.scm 293 */
				long BgL_rz00_842;

				BgL_rz00_842 = ((long) 0);
				{
					obj_t BgL_l1282z00_844;

					BgL_l1282z00_844 = BgL_modifiersz00_20;
				BgL_zc3z04anonymousza31896ze3z87_845:
					if (PAIRP(BgL_l1282z00_844))
						{	/* Jas/as.scm 294 */
							{	/* Jas/as.scm 296 */
								obj_t BgL_namez00_847;

								BgL_namez00_847 = CAR(BgL_l1282z00_844);
								if ((BgL_namez00_847 == CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 296 */
										BgL_rz00_842 = (BgL_rz00_842 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 296 */
										if ((BgL_namez00_847 == CNST_TABLE_REF(((long) 19))))
											{	/* Jas/as.scm 296 */
												BgL_rz00_842 = (BgL_rz00_842 | ((long) 2));
											}
										else
											{	/* Jas/as.scm 296 */
												if ((BgL_namez00_847 == CNST_TABLE_REF(((long) 20))))
													{	/* Jas/as.scm 296 */
														BgL_rz00_842 = (BgL_rz00_842 | ((long) 4));
													}
												else
													{	/* Jas/as.scm 296 */
														if (
															(BgL_namez00_847 == CNST_TABLE_REF(((long) 21))))
															{	/* Jas/as.scm 296 */
																BgL_rz00_842 = (BgL_rz00_842 | ((long) 8));
															}
														else
															{	/* Jas/as.scm 296 */
																if (
																	(BgL_namez00_847 ==
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Jas/as.scm 296 */
																		BgL_rz00_842 = (BgL_rz00_842 | ((long) 16));
																	}
																else
																	{	/* Jas/as.scm 296 */
																		if (
																			(BgL_namez00_847 ==
																				CNST_TABLE_REF(((long) 22))))
																			{	/* Jas/as.scm 296 */
																				BgL_rz00_842 =
																					(BgL_rz00_842 | ((long) 64));
																			}
																		else
																			{	/* Jas/as.scm 296 */
																				if (
																					(BgL_namez00_847 ==
																						CNST_TABLE_REF(((long) 23))))
																					{	/* Jas/as.scm 296 */
																						BgL_rz00_842 =
																							(BgL_rz00_842 | ((long) 128));
																					}
																				else
																					{	/* Jas/as.scm 296 */
																						BGl_errorz00zz__errorz00
																							(BGl_string2343z00zzjas_asz00,
																							BGl_string2345z00zzjas_asz00,
																							BgL_namez00_847);
																					}
																			}
																	}
															}
													}
											}
									}
							}
							{
								obj_t BgL_l1282z00_2946;

								BgL_l1282z00_2946 = CDR(BgL_l1282z00_844);
								BgL_l1282z00_844 = BgL_l1282z00_2946;
								goto BgL_zc3z04anonymousza31896ze3z87_845;
							}
						}
					else
						{	/* Jas/as.scm 294 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_842;
			}
		}

	}



/* as-method-modifiers */
	long BGl_aszd2methodzd2modifiersz00zzjas_asz00(obj_t BgL_modifiersz00_21)
	{
		{	/* Jas/as.scm 308 */
			{	/* Jas/as.scm 309 */
				long BgL_rz00_859;

				BgL_rz00_859 = ((long) 0);
				{
					obj_t BgL_l1284z00_861;

					BgL_l1284z00_861 = BgL_modifiersz00_21;
				BgL_zc3z04anonymousza31906ze3z87_862:
					if (PAIRP(BgL_l1284z00_861))
						{	/* Jas/as.scm 310 */
							{	/* Jas/as.scm 312 */
								obj_t BgL_namez00_864;

								BgL_namez00_864 = CAR(BgL_l1284z00_861);
								if ((BgL_namez00_864 == CNST_TABLE_REF(((long) 14))))
									{	/* Jas/as.scm 312 */
										BgL_rz00_859 = (BgL_rz00_859 | ((long) 1));
									}
								else
									{	/* Jas/as.scm 312 */
										if ((BgL_namez00_864 == CNST_TABLE_REF(((long) 19))))
											{	/* Jas/as.scm 312 */
												BgL_rz00_859 = (BgL_rz00_859 | ((long) 2));
											}
										else
											{	/* Jas/as.scm 312 */
												if ((BgL_namez00_864 == CNST_TABLE_REF(((long) 20))))
													{	/* Jas/as.scm 312 */
														BgL_rz00_859 = (BgL_rz00_859 | ((long) 4));
													}
												else
													{	/* Jas/as.scm 312 */
														if (
															(BgL_namez00_864 == CNST_TABLE_REF(((long) 21))))
															{	/* Jas/as.scm 312 */
																BgL_rz00_859 = (BgL_rz00_859 | ((long) 8));
															}
														else
															{	/* Jas/as.scm 312 */
																if (
																	(BgL_namez00_864 ==
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Jas/as.scm 312 */
																		BgL_rz00_859 = (BgL_rz00_859 | ((long) 16));
																	}
																else
																	{	/* Jas/as.scm 312 */
																		if (
																			(BgL_namez00_864 ==
																				CNST_TABLE_REF(((long) 24))))
																			{	/* Jas/as.scm 312 */
																				BgL_rz00_859 =
																					(BgL_rz00_859 | ((long) 32));
																			}
																		else
																			{	/* Jas/as.scm 312 */
																				if (
																					(BgL_namez00_864 ==
																						CNST_TABLE_REF(((long) 25))))
																					{	/* Jas/as.scm 312 */
																						BgL_rz00_859 =
																							(BgL_rz00_859 | ((long) 256));
																					}
																				else
																					{	/* Jas/as.scm 312 */
																						if (
																							(BgL_namez00_864 ==
																								CNST_TABLE_REF(((long) 18))))
																							{	/* Jas/as.scm 312 */
																								BgL_rz00_859 =
																									(BgL_rz00_859 | ((long)
																										1024));
																							}
																						else
																							{	/* Jas/as.scm 312 */
																								BGl_errorz00zz__errorz00
																									(BGl_string2343z00zzjas_asz00,
																									BGl_string2344z00zzjas_asz00,
																									BgL_namez00_864);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
							}
							{
								obj_t BgL_l1284z00_2984;

								BgL_l1284z00_2984 = CDR(BgL_l1284z00_861);
								BgL_l1284z00_861 = BgL_l1284z00_2984;
								goto BgL_zc3z04anonymousza31906ze3z87_862;
							}
						}
					else
						{	/* Jas/as.scm 310 */
							((bool_t) 1);
						}
				}
				return BgL_rz00_859;
			}
		}

	}



/* as-method */
	obj_t BGl_aszd2methodzd2zzjas_asz00(BgL_classfilez00_bglt BgL_classfilez00_24,
		obj_t BgL_declz00_25)
	{
		{	/* Jas/as.scm 338 */
			{
				obj_t BgL_gnamez00_878;
				obj_t BgL_paramsz00_879;
				obj_t BgL_localsz00_880;
				obj_t BgL_codez00_881;

				if (PAIRP(BgL_declz00_25))
					{	/* Jas/as.scm 339 */
						obj_t BgL_cdrzd2507zd2_886;

						BgL_cdrzd2507zd2_886 = CDR(BgL_declz00_25);
						if ((CAR(BgL_declz00_25) == CNST_TABLE_REF(((long) 3))))
							{	/* Jas/as.scm 339 */
								if (PAIRP(BgL_cdrzd2507zd2_886))
									{	/* Jas/as.scm 339 */
										obj_t BgL_cdrzd2513zd2_890;

										BgL_cdrzd2513zd2_890 = CDR(BgL_cdrzd2507zd2_886);
										if (PAIRP(BgL_cdrzd2513zd2_890))
											{	/* Jas/as.scm 339 */
												obj_t BgL_cdrzd2519zd2_892;

												BgL_cdrzd2519zd2_892 = CDR(BgL_cdrzd2513zd2_890);
												if (PAIRP(BgL_cdrzd2519zd2_892))
													{	/* Jas/as.scm 339 */
														obj_t BgL_arg1923z00_894;
														obj_t BgL_arg1924z00_895;
														obj_t BgL_arg1925z00_896;
														obj_t BgL_arg1926z00_897;

														BgL_arg1923z00_894 = CAR(BgL_cdrzd2507zd2_886);
														BgL_arg1924z00_895 = CAR(BgL_cdrzd2513zd2_890);
														BgL_arg1925z00_896 = CAR(BgL_cdrzd2519zd2_892);
														BgL_arg1926z00_897 = CDR(BgL_cdrzd2519zd2_892);
														{
															BgL_methodz00_bglt BgL_auxz00_3005;

															BgL_gnamez00_878 = BgL_arg1923z00_894;
															BgL_paramsz00_879 = BgL_arg1924z00_895;
															BgL_localsz00_880 = BgL_arg1925z00_896;
															BgL_codez00_881 = BgL_arg1926z00_897;
															((((BgL_classfilez00_bglt)
																		COBJECT(BgL_classfilez00_24))->
																	BgL_currentzd2methodzd2) =
																((obj_t) BgL_gnamez00_878), BUNSPEC);
															{	/* Jas/as.scm 342 */
																BgL_methodz00_bglt BgL_mz00_899;

																BgL_mz00_899 =
																	BGl_declaredzd2methodzd2zzjas_classfilez00
																	(BgL_classfilez00_24, BgL_gnamez00_878);
																BGl_poolzd2localzd2methodz00zzjas_classfilez00
																	(BgL_classfilez00_24, BgL_mz00_899);
																{
																	obj_t BgL_auxz00_3009;

																	{	/* Jas/as.scm 345 */
																		BgL_attributez00_bglt BgL_arg1928z00_901;
																		obj_t BgL_arg1929z00_902;

																		BgL_arg1928z00_901 =
																			BGl_aszd2codezd2zzjas_asz00
																			(BgL_classfilez00_24, BgL_paramsz00_879,
																			BgL_localsz00_880, BgL_codez00_881);
																		BgL_arg1929z00_902 =
																			(((BgL_fieldzd2orzd2methodz00_bglt)
																				COBJECT((
																						(BgL_fieldzd2orzd2methodz00_bglt)
																						BgL_mz00_899)))->BgL_attributesz00);
																		BgL_auxz00_3009 =
																			MAKE_YOUNG_PAIR(((obj_t)
																				BgL_arg1928z00_901),
																			BgL_arg1929z00_902);
																	}
																	((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																					((BgL_fieldzd2orzd2methodz00_bglt)
																						BgL_mz00_899)))->
																			BgL_attributesz00) =
																		((obj_t) BgL_auxz00_3009), BUNSPEC);
																}
																BgL_auxz00_3005 = BgL_mz00_899;
															}
															return ((obj_t) BgL_auxz00_3005);
														}
													}
												else
													{	/* Jas/as.scm 339 */
													BgL_tagzd2496zd2_883:
														return
															BGl_errorz00zz__errorz00
															(BGl_string2343z00zzjas_asz00,
															BGl_string2346z00zzjas_asz00, BgL_declz00_25);
													}
											}
										else
											{	/* Jas/as.scm 339 */
												goto BgL_tagzd2496zd2_883;
											}
									}
								else
									{	/* Jas/as.scm 339 */
										goto BgL_tagzd2496zd2_883;
									}
							}
						else
							{	/* Jas/as.scm 339 */
								goto BgL_tagzd2496zd2_883;
							}
					}
				else
					{	/* Jas/as.scm 339 */
						goto BgL_tagzd2496zd2_883;
					}
			}
		}

	}



/* as-code */
	BgL_attributez00_bglt BGl_aszd2codezd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_26, obj_t BgL_paramz00_27, obj_t BgL_localsz00_28,
		obj_t BgL_codez00_29)
	{
		{	/* Jas/as.scm 350 */
			{	/* Jas/as.scm 351 */
				obj_t BgL_l1z00_903;

				BgL_l1z00_903 =
					PROCEDURE_ENTRY(BGl_resolvezd2opcodeszd2zzjas_opcodez00)
					(BGl_resolvezd2opcodeszd2zzjas_opcodez00,
					((obj_t) BgL_classfilez00_26), BgL_paramz00_27, BgL_localsz00_28,
					BgL_codez00_29, BEOA);
				{	/* Jas/as.scm 351 */
					obj_t BgL_lpz00_904;

					BgL_lpz00_904 =
						PROCEDURE_ENTRY(BGl_peepz00zzjas_peepz00) (BGl_peepz00zzjas_peepz00,
						((obj_t) BgL_classfilez00_26), BgL_paramz00_27, BgL_localsz00_28,
						BgL_l1z00_903, BEOA);
					{	/* Jas/as.scm 352 */
						obj_t BgL_lwz00_905;

						BgL_lwz00_905 =
							PROCEDURE_ENTRY(BGl_resolvezd2widezd2zzjas_widez00)
							(BGl_resolvezd2widezd2zzjas_widez00,
							((obj_t) BgL_classfilez00_26), BgL_lpz00_904, BEOA);
						{	/* Jas/as.scm 353 */
							obj_t BgL_l3z00_906;

							BgL_l3z00_906 =
								PROCEDURE_ENTRY(BGl_resolvezd2labelszd2zzjas_labelsz00)
								(BGl_resolvezd2labelszd2zzjas_labelsz00,
								((obj_t) BgL_classfilez00_26), BgL_lwz00_905, BEOA);
							{	/* Jas/as.scm 354 */
								obj_t BgL_handlersz00_907;

								BgL_handlersz00_907 =
									BGl_getzd2handlerszd2zzjas_asz00(BgL_l3z00_906);
								{	/* Jas/as.scm 355 */
									obj_t BgL_lines0z00_908;

									BgL_lines0z00_908 =
										BGl_getzd2lineszd2zzjas_asz00(BgL_l3z00_906, ((long) 0));
									{	/* Jas/as.scm 356 */
										obj_t BgL_linesz00_909;

										if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
											{	/* Jas/as.scm 357 */
												BgL_linesz00_909 = BgL_lines0z00_908;
											}
										else
											{	/* Jas/as.scm 357 */
												BgL_linesz00_909 =
													BGl_linezd2compresszd2zzjas_asz00(BgL_lines0z00_908,
													BINT(((long) -1)));
											}
										{	/* Jas/as.scm 357 */
											obj_t BgL_localvarsz00_910;

											BgL_localvarsz00_910 =
												BGl_getzd2localvarszd2zzjas_asz00(BgL_l3z00_906);
											{	/* Jas/as.scm 360 */
												obj_t BgL_bytecodez00_911;

												BgL_bytecodez00_911 =
													BGl_getzd2bytecodezd2zzjas_asz00(BgL_l3z00_906);
												{	/* Jas/as.scm 361 */

													BGl_za2za2allzd2linesza2za2zd2zzjas_asz00 =
														BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
														(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00,
														BgL_lines0z00_908);
													{	/* Jas/as.scm 363 */
														long BgL_nz00_912;

														BgL_nz00_912 = bgl_list_length(BgL_bytecodez00_911);
														{	/* Jas/as.scm 364 */
															bool_t BgL_test2533z00_3057;

															if ((BgL_nz00_912 >= ((long) 8000)))
																{	/* Jas/as.scm 364 */
																	if (CBOOL
																		(BGl_za2jaszd2warningza2zd2zzjas_asz00))
																		{	/* Jas/as.scm 364 */
																			BgL_test2533z00_3057 = ((bool_t) 0);
																		}
																	else
																		{	/* Jas/as.scm 364 */
																			BgL_test2533z00_3057 = ((bool_t) 1);
																		}
																}
															else
																{	/* Jas/as.scm 364 */
																	BgL_test2533z00_3057 = ((bool_t) 0);
																}
															if (BgL_test2533z00_3057)
																{	/* Jas/as.scm 365 */
																	obj_t BgL_arg1932z00_915;

																	BgL_arg1932z00_915 =
																		(((BgL_classfilez00_bglt)
																			COBJECT(BgL_classfilez00_26))->
																		BgL_currentzd2methodzd2);
																	{	/* Jas/as.scm 365 */
																		obj_t BgL_list1933z00_916;

																		{	/* Jas/as.scm 365 */
																			obj_t BgL_arg1934z00_917;

																			{	/* Jas/as.scm 365 */
																				obj_t BgL_arg1935z00_918;

																				{	/* Jas/as.scm 365 */
																					obj_t BgL_arg1936z00_919;

																					{	/* Jas/as.scm 365 */
																						obj_t BgL_arg1937z00_920;

																						BgL_arg1937z00_920 =
																							MAKE_YOUNG_PAIR
																							(BGl_string2347z00zzjas_asz00,
																							BNIL);
																						BgL_arg1936z00_919 =
																							MAKE_YOUNG_PAIR
																							(BGl_string2348z00zzjas_asz00,
																							BgL_arg1937z00_920);
																					}
																					BgL_arg1935z00_918 =
																						MAKE_YOUNG_PAIR(BINT(BgL_nz00_912),
																						BgL_arg1936z00_919);
																				}
																				BgL_arg1934z00_917 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2349z00zzjas_asz00,
																					BgL_arg1935z00_918);
																			}
																			BgL_list1933z00_916 =
																				MAKE_YOUNG_PAIR(BgL_arg1932z00_915,
																				BgL_arg1934z00_917);
																		}
																		BGl_warningz00zz__errorz00
																			(BgL_list1933z00_916);
																	}
																}
															else
																{	/* Jas/as.scm 364 */
																	BFALSE;
																}
														}
													}
													if (NULLP(BgL_linesz00_909))
														{	/* Jas/as.scm 369 */
															obj_t BgL_arg1939z00_923;

															{	/* Jas/as.scm 369 */
																obj_t BgL_list1940z00_924;

																{	/* Jas/as.scm 369 */
																	obj_t BgL_arg1941z00_925;

																	{	/* Jas/as.scm 369 */
																		obj_t BgL_arg1942z00_926;

																		BgL_arg1942z00_926 =
																			MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
																		BgL_arg1941z00_925 =
																			MAKE_YOUNG_PAIR(BINT(((long) 0)),
																			BgL_arg1942z00_926);
																	}
																	BgL_list1940z00_924 =
																		MAKE_YOUNG_PAIR(BINT(((long) 0)),
																		BgL_arg1941z00_925);
																}
																BgL_arg1939z00_923 = BgL_list1940z00_924;
															}
															BgL_linesz00_909 =
																MAKE_YOUNG_PAIR(BgL_arg1939z00_923, BNIL);
														}
													else
														{	/* Jas/as.scm 369 */
															BFALSE;
														}
													{	/* Jas/as.scm 370 */
														BgL_attributez00_bglt BgL_new1094z00_927;

														{	/* Jas/as.scm 371 */
															BgL_attributez00_bglt BgL_new1093z00_954;

															BgL_new1093z00_954 =
																((BgL_attributez00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_attributez00_bgl))));
															{	/* Jas/as.scm 371 */
																long BgL_arg1970z00_955;

																{	/* Jas/as.scm 371 */
																	long BgL_res2289z00_1777;

																	BgL_res2289z00_1777 =
																		BGL_CLASS_INDEX
																		(BGl_attributez00zzjas_classfilez00);
																	BgL_arg1970z00_955 = BgL_res2289z00_1777;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1093z00_954),
																	BgL_arg1970z00_955);
															}
															BgL_new1094z00_927 = BgL_new1093z00_954;
														}
														((((BgL_attributez00_bglt)
																	COBJECT(BgL_new1094z00_927))->BgL_typez00) =
															((obj_t) CNST_TABLE_REF(((long) 26))), BUNSPEC);
														((((BgL_attributez00_bglt)
																	COBJECT(BgL_new1094z00_927))->BgL_namez00) =
															((obj_t)
																BINT(BGl_poolzd2namezd2zzjas_classfilez00
																	(BgL_classfilez00_26,
																		BGl_string2350z00zzjas_asz00))), BUNSPEC);
														{
															obj_t BgL_auxz00_3088;

															{	/* Jas/as.scm 373 */
																obj_t BgL_arg1943z00_928;

																{	/* Jas/as.scm 373 */
																	long BgL_arg1944z00_929;
																	obj_t BgL_arg1945z00_930;

																	BgL_arg1944z00_929 =
																		bgl_list_length(BgL_bytecodez00_911);
																	{	/* Jas/as.scm 373 */
																		obj_t BgL_arg1946z00_931;
																		obj_t BgL_arg1947z00_932;

																		BgL_arg1946z00_931 =
																			BGl_2za2za2zz__r4_numbers_6_5z00(BINT((
																					(long) 8)),
																			BINT(bgl_list_length
																				(BgL_handlersz00_907)));
																		{	/* Jas/as.scm 374 */
																			obj_t BgL_arg1949z00_934;
																			obj_t BgL_arg1951z00_935;

																			{	/* Jas/as.scm 374 */
																				bool_t BgL_test2537z00_3094;

																				{	/* Jas/as.scm 374 */
																					obj_t BgL_objz00_1780;

																					BgL_objz00_1780 = BgL_linesz00_909;
																					BgL_test2537z00_3094 =
																						NULLP(BgL_objz00_1780);
																				}
																				if (BgL_test2537z00_3094)
																					{	/* Jas/as.scm 374 */
																						BgL_arg1949z00_934 =
																							BINT(((long) 0));
																					}
																				else
																					{	/* Jas/as.scm 374 */
																						obj_t BgL_arg1953z00_937;

																						{	/* Jas/as.scm 374 */
																							long BgL_arg1954z00_938;

																							BgL_arg1954z00_938 =
																								bgl_list_length
																								(BgL_linesz00_909);
																							BgL_arg1953z00_937 =
																								BGl_2za2za2zz__r4_numbers_6_5z00
																								(BINT(((long) 4)),
																								BINT(BgL_arg1954z00_938));
																						}
																						BgL_arg1949z00_934 =
																							BGl_2zb2zb2zz__r4_numbers_6_5z00
																							(BINT(((long) 8)),
																							BgL_arg1953z00_937);
																			}}
																			if (NULLP(BgL_localvarsz00_910))
																				{	/* Jas/as.scm 375 */
																					BgL_arg1951z00_935 = BINT(((long) 0));
																				}
																			else
																				{	/* Jas/as.scm 375 */
																					BgL_arg1951z00_935 =
																						BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BINT(((long) 8)),
																						BGl_2za2za2zz__r4_numbers_6_5z00
																						(BINT(((long) 10)),
																							BINT(bgl_list_length
																								(BgL_localvarsz00_910))));
																				}
																			BgL_arg1947z00_932 =
																				BGl_2zb2zb2zz__r4_numbers_6_5z00
																				(BgL_arg1949z00_934,
																				BgL_arg1951z00_935);
																		}
																		BgL_arg1945z00_930 =
																			BGl_2zb2zb2zz__r4_numbers_6_5z00
																			(BgL_arg1946z00_931, BgL_arg1947z00_932);
																	}
																	BgL_arg1943z00_928 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																		(BgL_arg1944z00_929), BgL_arg1945z00_930);
																}
																BgL_auxz00_3088 =
																	BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long)
																			12)), BgL_arg1943z00_928);
															}
															((((BgL_attributez00_bglt)
																		COBJECT(BgL_new1094z00_927))->
																	BgL_siza7eza7) =
																((obj_t) BgL_auxz00_3088), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_3119;

															{	/* Jas/as.scm 376 */
																obj_t BgL_arg1958z00_942;
																obj_t BgL_arg1959z00_943;

																BgL_arg1958z00_942 =
																	BGl_stkzd2analysiszd2zzjas_stackz00(
																	((obj_t) BgL_classfilez00_26), BgL_lpz00_904);
																{	/* Jas/as.scm 380 */
																	obj_t BgL_arg1960z00_944;

																	{	/* Jas/as.scm 380 */
																		obj_t BgL_arg1961z00_945;

																		{	/* Jas/as.scm 380 */
																			obj_t BgL_arg1962z00_946;

																			{	/* Jas/as.scm 380 */
																				obj_t BgL_arg1963z00_947;
																				obj_t BgL_arg1964z00_948;

																				{	/* Jas/as.scm 380 */
																					bool_t BgL_test2539z00_3122;

																					{	/* Jas/as.scm 380 */
																						obj_t BgL_objz00_1783;

																						BgL_objz00_1783 = BgL_linesz00_909;
																						BgL_test2539z00_3122 =
																							NULLP(BgL_objz00_1783);
																					}
																					if (BgL_test2539z00_3122)
																						{	/* Jas/as.scm 380 */
																							BgL_arg1963z00_947 = BNIL;
																						}
																					else
																						{	/* Jas/as.scm 381 */
																							BgL_attributez00_bglt
																								BgL_arg1966z00_950;
																							BgL_arg1966z00_950 =
																								BGl_makezd2linezd2attributez00zzjas_asz00
																								(BgL_classfilez00_26,
																								BgL_linesz00_909);
																							BgL_arg1963z00_947 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg1966z00_950), BNIL);
																						}
																				}
																				{	/* Jas/as.scm 382 */
																					obj_t BgL_arg1967z00_951;

																					if (NULLP(BgL_localvarsz00_910))
																						{	/* Jas/as.scm 382 */
																							BgL_arg1967z00_951 = BNIL;
																						}
																					else
																						{	/* Jas/as.scm 383 */
																							BgL_attributez00_bglt
																								BgL_arg1969z00_953;
																							BgL_arg1969z00_953 =
																								BGl_makezd2localvarszd2zzjas_asz00
																								(BgL_classfilez00_26,
																								BgL_localvarsz00_910);
																							BgL_arg1967z00_951 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg1969z00_953), BNIL);
																						}
																					BgL_arg1964z00_948 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1967z00_951, BNIL);
																				}
																				BgL_arg1962z00_946 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1963z00_947,
																					BgL_arg1964z00_948);
																			}
																			BgL_arg1961z00_945 =
																				MAKE_YOUNG_PAIR(BgL_handlersz00_907,
																				BgL_arg1962z00_946);
																		}
																		BgL_arg1960z00_944 =
																			MAKE_YOUNG_PAIR(BgL_bytecodez00_911,
																			BgL_arg1961z00_945);
																	}
																	BgL_arg1959z00_943 =
																		MAKE_YOUNG_PAIR
																		(BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00,
																		BgL_arg1960z00_944);
																}
																BgL_auxz00_3119 =
																	MAKE_YOUNG_PAIR(BgL_arg1958z00_942,
																	BgL_arg1959z00_943);
															}
															((((BgL_attributez00_bglt)
																		COBJECT(BgL_new1094z00_927))->BgL_infoz00) =
																((obj_t) BgL_auxz00_3119), BUNSPEC);
														}
														return BgL_new1094z00_927;
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



/* make-line-attribute */
	BgL_attributez00_bglt
		BGl_makezd2linezd2attributez00zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_30, obj_t BgL_linesz00_31)
	{
		{	/* Jas/as.scm 385 */
			{	/* Jas/as.scm 386 */
				BgL_attributez00_bglt BgL_new1096z00_956;

				{	/* Jas/as.scm 387 */
					BgL_attributez00_bglt BgL_new1095z00_981;

					BgL_new1095z00_981 =
						((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_attributez00_bgl))));
					{	/* Jas/as.scm 387 */
						long BgL_arg1986z00_982;

						{	/* Jas/as.scm 387 */
							long BgL_res2294z00_1787;

							BgL_res2294z00_1787 =
								BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
							BgL_arg1986z00_982 = BgL_res2294z00_1787;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1095z00_981), BgL_arg1986z00_982);
					}
					BgL_new1096z00_956 = BgL_new1095z00_981;
				}
				((((BgL_attributez00_bglt) COBJECT(BgL_new1096z00_956))->BgL_typez00) =
					((obj_t) CNST_TABLE_REF(((long) 27))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1096z00_956))->BgL_namez00) =
					((obj_t)
						BINT(BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_30,
								BGl_string2351z00zzjas_asz00))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1096z00_956))->
						BgL_siza7eza7) =
					((obj_t) BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 2)),
							BGl_2za2za2zz__r4_numbers_6_5z00(BINT(((long) 4)),
								BINT(bgl_list_length(BgL_linesz00_31))))), BUNSPEC);
				{
					obj_t BgL_auxz00_3155;

					{	/* Jas/as.scm 390 */
						obj_t BgL_fun1291z00_959;

						if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
							{	/* Jas/as.scm 390 */
								BgL_fun1291z00_959 = BGl_proc2352z00zzjas_asz00;
							}
						else
							{	/* Jas/as.scm 390 */
								BgL_fun1291z00_959 = BGl_proc2353z00zzjas_asz00;
							}
						if (NULLP(BgL_linesz00_31))
							{	/* Jas/as.scm 390 */
								BgL_auxz00_3155 = BNIL;
							}
						else
							{	/* Jas/as.scm 390 */
								obj_t BgL_head1288z00_962;

								{	/* Jas/as.scm 390 */
									obj_t BgL_res2296z00_1807;

									BgL_res2296z00_1807 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1288z00_962 = BgL_res2296z00_1807;
								}
								{
									obj_t BgL_l1286z00_964;
									obj_t BgL_tail1289z00_965;

									BgL_l1286z00_964 = BgL_linesz00_31;
									BgL_tail1289z00_965 = BgL_head1288z00_962;
								BgL_zc3z04anonymousza31974ze3z87_966:
									if (NULLP(BgL_l1286z00_964))
										{	/* Jas/as.scm 390 */
											BgL_auxz00_3155 = CDR(BgL_head1288z00_962);
										}
									else
										{	/* Jas/as.scm 390 */
											obj_t BgL_newtail1290z00_968;

											{	/* Jas/as.scm 390 */
												obj_t BgL_arg1977z00_970;

												{	/* Jas/as.scm 390 */
													obj_t BgL_arg1979z00_971;

													BgL_arg1979z00_971 = CAR(((obj_t) BgL_l1286z00_964));
													BgL_arg1977z00_970 =
														((obj_t(*)())PROCEDURE_L_ENTRY(BgL_fun1291z00_959))
														(BgL_fun1291z00_959, BgL_arg1979z00_971);
												}
												{	/* Jas/as.scm 390 */
													obj_t BgL_res2298z00_1811;

													BgL_res2298z00_1811 =
														MAKE_YOUNG_PAIR(BgL_arg1977z00_970, BNIL);
													BgL_newtail1290z00_968 = BgL_res2298z00_1811;
												}
											}
											SET_CDR(BgL_tail1289z00_965, BgL_newtail1290z00_968);
											{	/* Jas/as.scm 390 */
												obj_t BgL_arg1976z00_969;

												BgL_arg1976z00_969 = CDR(((obj_t) BgL_l1286z00_964));
												{
													obj_t BgL_tail1289z00_3175;
													obj_t BgL_l1286z00_3174;

													BgL_l1286z00_3174 = BgL_arg1976z00_969;
													BgL_tail1289z00_3175 = BgL_newtail1290z00_968;
													BgL_tail1289z00_965 = BgL_tail1289z00_3175;
													BgL_l1286z00_964 = BgL_l1286z00_3174;
													goto BgL_zc3z04anonymousza31974ze3z87_966;
												}
											}
										}
								}
							}
					}
					((((BgL_attributez00_bglt) COBJECT(BgL_new1096z00_956))->
							BgL_infoz00) = ((obj_t) BgL_auxz00_3155), BUNSPEC);
				}
				return BgL_new1096z00_956;
			}
		}

	}



/* &<@anonymous:1980> */
	obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzjas_asz00(obj_t BgL_envz00_2034,
		obj_t BgL_xz00_2035)
	{
		{	/* Jas/as.scm 391 */
			{	/* Jas/as.scm 391 */
				obj_t BgL_arg1981z00_2059;
				obj_t BgL_arg1982z00_2060;

				BgL_arg1981z00_2059 = CAR(((obj_t) BgL_xz00_2035));
				{	/* Jas/as.scm 391 */
					obj_t BgL_pairz00_2061;

					{	/* Jas/as.scm 391 */
						obj_t BgL_pairz00_2062;

						BgL_pairz00_2062 = CDR(((obj_t) BgL_xz00_2035));
						BgL_pairz00_2061 = CDR(BgL_pairz00_2062);
					}
					BgL_arg1982z00_2060 = CAR(BgL_pairz00_2061);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1981z00_2059, BgL_arg1982z00_2060);
			}
		}

	}



/* &<@anonymous:1983> */
	obj_t BGl_z62zc3z04anonymousza31983ze3ze5zzjas_asz00(obj_t BgL_envz00_2036,
		obj_t BgL_xz00_2037)
	{
		{	/* Jas/as.scm 392 */
			{	/* Jas/as.scm 392 */
				obj_t BgL_arg1984z00_2063;
				obj_t BgL_arg1985z00_2064;

				BgL_arg1984z00_2063 = CAR(((obj_t) BgL_xz00_2037));
				{	/* Jas/as.scm 392 */
					obj_t BgL_pairz00_2065;

					BgL_pairz00_2065 = CDR(((obj_t) BgL_xz00_2037));
					BgL_arg1985z00_2064 = CAR(BgL_pairz00_2065);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1984z00_2063, BgL_arg1985z00_2064);
			}
		}

	}



/* make-localvars */
	BgL_attributez00_bglt BGl_makezd2localvarszd2zzjas_asz00(BgL_classfilez00_bglt
		BgL_classfilez00_32, obj_t BgL_localvarsz00_33)
	{
		{	/* Jas/as.scm 394 */
			{	/* Jas/as.scm 395 */
				BgL_attributez00_bglt BgL_new1099z00_983;

				{	/* Jas/as.scm 396 */
					BgL_attributez00_bglt BgL_new1098z00_986;

					BgL_new1098z00_986 =
						((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_attributez00_bgl))));
					{	/* Jas/as.scm 396 */
						long BgL_arg1989z00_987;

						{	/* Jas/as.scm 396 */
							long BgL_res2299z00_1815;

							BgL_res2299z00_1815 =
								BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
							BgL_arg1989z00_987 = BgL_res2299z00_1815;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1098z00_986), BgL_arg1989z00_987);
					}
					BgL_new1099z00_983 = BgL_new1098z00_986;
				}
				((((BgL_attributez00_bglt) COBJECT(BgL_new1099z00_983))->BgL_typez00) =
					((obj_t) CNST_TABLE_REF(((long) 28))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1099z00_983))->BgL_namez00) =
					((obj_t)
						BINT(BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_32,
								BGl_string2354z00zzjas_asz00))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1099z00_983))->
						BgL_siza7eza7) =
					((obj_t) BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 2)),
							BGl_2za2za2zz__r4_numbers_6_5z00(BINT(((long) 10)),
								BINT(bgl_list_length(BgL_localvarsz00_33))))), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1099z00_983))->BgL_infoz00) =
					((obj_t) BgL_localvarsz00_33), BUNSPEC);
				return BgL_new1099z00_983;
			}
		}

	}



/* get-handlers */
	obj_t BGl_getzd2handlerszd2zzjas_asz00(obj_t BgL_lz00_34)
	{
		{	/* Jas/as.scm 402 */
		BGl_getzd2handlerszd2zzjas_asz00:
			if (NULLP(BgL_lz00_34))
				{	/* Jas/as.scm 403 */
					return BgL_lz00_34;
				}
			else
				{	/* Jas/as.scm 404 */
					bool_t BgL_test2545z00_3209;

					{	/* Jas/as.scm 404 */
						obj_t BgL_tmpz00_3210;

						{	/* Jas/as.scm 404 */
							obj_t BgL_pairz00_1822;

							BgL_pairz00_1822 = CAR(((obj_t) BgL_lz00_34));
							BgL_tmpz00_3210 = CAR(BgL_pairz00_1822);
						}
						BgL_test2545z00_3209 = (BgL_tmpz00_3210 == BINT(((long) 202)));
					}
					if (BgL_test2545z00_3209)
						{	/* Jas/as.scm 404 */
							obj_t BgL_arg1993z00_991;
							obj_t BgL_arg1995z00_992;

							{	/* Jas/as.scm 404 */
								obj_t BgL_pairz00_1826;

								BgL_pairz00_1826 = CAR(((obj_t) BgL_lz00_34));
								BgL_arg1993z00_991 = CDR(BgL_pairz00_1826);
							}
							{	/* Jas/as.scm 404 */
								obj_t BgL_arg1996z00_993;

								BgL_arg1996z00_993 = CDR(((obj_t) BgL_lz00_34));
								BgL_arg1995z00_992 =
									BGl_getzd2handlerszd2zzjas_asz00(BgL_arg1996z00_993);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1993z00_991, BgL_arg1995z00_992);
						}
					else
						{	/* Jas/as.scm 405 */
							obj_t BgL_arg1997z00_994;

							BgL_arg1997z00_994 = CDR(((obj_t) BgL_lz00_34));
							{
								obj_t BgL_lz00_3225;

								BgL_lz00_3225 = BgL_arg1997z00_994;
								BgL_lz00_34 = BgL_lz00_3225;
								goto BGl_getzd2handlerszd2zzjas_asz00;
							}
						}
				}
		}

	}



/* get-lines */
	obj_t BGl_getzd2lineszd2zzjas_asz00(obj_t BgL_lz00_35, long BgL_pcz00_36)
	{
		{	/* Jas/as.scm 409 */
		BGl_getzd2lineszd2zzjas_asz00:
			if (NULLP(BgL_lz00_35))
				{	/* Jas/as.scm 410 */
					{	/* Jas/as.scm 411 */
						bool_t BgL_test2547z00_3228;

						if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
							{	/* Jas/as.scm 411 */
								BgL_test2547z00_3228 =
									(
									(long) CINT(BGl_za2za2maxcharza2za2z00zzjas_asz00) >
									((long) 65535));
							}
						else
							{	/* Jas/as.scm 411 */
								BgL_test2547z00_3228 = ((bool_t) 0);
							}
						if (BgL_test2547z00_3228)
							{	/* Jas/as.scm 411 */
								{	/* Jas/as.scm 412 */
									obj_t BgL_list2001z00_998;

									{	/* Jas/as.scm 412 */
										obj_t BgL_arg2002z00_999;

										{	/* Jas/as.scm 412 */
											obj_t BgL_arg2003z00_1000;

											{	/* Jas/as.scm 412 */
												obj_t BgL_arg2004z00_1001;

												{	/* Jas/as.scm 412 */
													obj_t BgL_arg2005z00_1002;

													BgL_arg2005z00_1002 =
														MAKE_YOUNG_PAIR(BGl_string2355z00zzjas_asz00, BNIL);
													BgL_arg2004z00_1001 =
														MAKE_YOUNG_PAIR(BGl_string2356z00zzjas_asz00,
														BgL_arg2005z00_1002);
												}
												BgL_arg2003z00_1000 =
													MAKE_YOUNG_PAIR(BGl_za2za2maxcharza2za2z00zzjas_asz00,
													BgL_arg2004z00_1001);
											}
											BgL_arg2002z00_999 =
												MAKE_YOUNG_PAIR(BGl_string2357z00zzjas_asz00,
												BgL_arg2003z00_1000);
										}
										BgL_list2001z00_998 =
											MAKE_YOUNG_PAIR(BGl_string2358z00zzjas_asz00,
											BgL_arg2002z00_999);
									}
									BGl_warningz00zz__errorz00(BgL_list2001z00_998);
								}
								BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00 = BFALSE;
							}
						else
							{	/* Jas/as.scm 411 */
								BFALSE;
							}
					}
					return BgL_lz00_35;
				}
			else
				{	/* Jas/as.scm 417 */
					bool_t BgL_test2549z00_3239;

					{	/* Jas/as.scm 417 */
						obj_t BgL_tmpz00_3240;

						{	/* Jas/as.scm 417 */
							obj_t BgL_pairz00_1835;

							BgL_pairz00_1835 = CAR(((obj_t) BgL_lz00_35));
							BgL_tmpz00_3240 = CAR(BgL_pairz00_1835);
						}
						BgL_test2549z00_3239 = (BgL_tmpz00_3240 == BINT(((long) 202)));
					}
					if (BgL_test2549z00_3239)
						{	/* Jas/as.scm 417 */
							obj_t BgL_arg2010z00_1005;

							BgL_arg2010z00_1005 = CDR(((obj_t) BgL_lz00_35));
							{
								obj_t BgL_lz00_3248;

								BgL_lz00_3248 = BgL_arg2010z00_1005;
								BgL_lz00_35 = BgL_lz00_3248;
								goto BGl_getzd2lineszd2zzjas_asz00;
							}
						}
					else
						{	/* Jas/as.scm 418 */
							bool_t BgL_test2550z00_3249;

							{	/* Jas/as.scm 418 */
								obj_t BgL_tmpz00_3250;

								{	/* Jas/as.scm 418 */
									obj_t BgL_pairz00_1840;

									BgL_pairz00_1840 = CAR(((obj_t) BgL_lz00_35));
									BgL_tmpz00_3250 = CAR(BgL_pairz00_1840);
								}
								BgL_test2550z00_3249 = (BgL_tmpz00_3250 == BINT(((long) 203)));
							}
							if (BgL_test2550z00_3249)
								{	/* Jas/as.scm 418 */
									{	/* Jas/as.scm 419 */
										bool_t BgL_test2551z00_3256;

										{	/* Jas/as.scm 419 */
											long BgL_n1z00_1847;
											long BgL_n2z00_1848;

											{	/* Jas/as.scm 419 */
												obj_t BgL_pairz00_1846;

												{	/* Jas/as.scm 419 */
													obj_t BgL_pairz00_1845;

													BgL_pairz00_1845 = CAR(((obj_t) BgL_lz00_35));
													BgL_pairz00_1846 = CDR(BgL_pairz00_1845);
												}
												BgL_n1z00_1847 = (long) CINT(CAR(BgL_pairz00_1846));
											}
											BgL_n2z00_1848 =
												(long) CINT(BGl_za2za2maxlineza2za2z00zzjas_asz00);
											BgL_test2551z00_3256 = (BgL_n1z00_1847 > BgL_n2z00_1848);
										}
										if (BgL_test2551z00_3256)
											{	/* Jas/as.scm 419 */
												obj_t BgL_pairz00_1855;

												{	/* Jas/as.scm 419 */
													obj_t BgL_pairz00_1854;

													BgL_pairz00_1854 = CAR(((obj_t) BgL_lz00_35));
													BgL_pairz00_1855 = CDR(BgL_pairz00_1854);
												}
												BGl_za2za2maxlineza2za2z00zzjas_asz00 =
													CAR(BgL_pairz00_1855);
											}
										else
											{	/* Jas/as.scm 419 */
												BFALSE;
											}
									}
									{	/* Jas/as.scm 420 */
										bool_t BgL_test2552z00_3268;

										{	/* Jas/as.scm 420 */
											long BgL_n1z00_1864;
											long BgL_n2z00_1865;

											{	/* Jas/as.scm 420 */
												obj_t BgL_pairz00_1863;

												{	/* Jas/as.scm 420 */
													obj_t BgL_pairz00_1862;

													{	/* Jas/as.scm 420 */
														obj_t BgL_pairz00_1861;

														BgL_pairz00_1861 = CAR(((obj_t) BgL_lz00_35));
														BgL_pairz00_1862 = CDR(BgL_pairz00_1861);
													}
													BgL_pairz00_1863 = CDR(BgL_pairz00_1862);
												}
												BgL_n1z00_1864 = (long) CINT(CAR(BgL_pairz00_1863));
											}
											BgL_n2z00_1865 =
												(long) CINT(BGl_za2za2maxcharza2za2z00zzjas_asz00);
											BgL_test2552z00_3268 = (BgL_n1z00_1864 > BgL_n2z00_1865);
										}
										if (BgL_test2552z00_3268)
											{	/* Jas/as.scm 420 */
												obj_t BgL_pairz00_1874;

												{	/* Jas/as.scm 420 */
													obj_t BgL_pairz00_1873;

													{	/* Jas/as.scm 420 */
														obj_t BgL_pairz00_1872;

														BgL_pairz00_1872 = CAR(((obj_t) BgL_lz00_35));
														BgL_pairz00_1873 = CDR(BgL_pairz00_1872);
													}
													BgL_pairz00_1874 = CDR(BgL_pairz00_1873);
												}
												BGl_za2za2maxcharza2za2z00zzjas_asz00 =
													CAR(BgL_pairz00_1874);
											}
										else
											{	/* Jas/as.scm 420 */
												BFALSE;
											}
									}
									{	/* Jas/as.scm 421 */
										obj_t BgL_arg2021z00_1014;
										obj_t BgL_arg2022z00_1015;

										{	/* Jas/as.scm 421 */
											obj_t BgL_arg2023z00_1016;
											obj_t BgL_arg2026z00_1017;

											{	/* Jas/as.scm 421 */
												obj_t BgL_pairz00_1880;

												{	/* Jas/as.scm 421 */
													obj_t BgL_pairz00_1879;

													BgL_pairz00_1879 = CAR(((obj_t) BgL_lz00_35));
													BgL_pairz00_1880 = CDR(BgL_pairz00_1879);
												}
												BgL_arg2023z00_1016 = CAR(BgL_pairz00_1880);
											}
											{	/* Jas/as.scm 421 */
												obj_t BgL_pairz00_1888;

												{	/* Jas/as.scm 421 */
													obj_t BgL_pairz00_1887;

													{	/* Jas/as.scm 421 */
														obj_t BgL_pairz00_1886;

														BgL_pairz00_1886 = CAR(((obj_t) BgL_lz00_35));
														BgL_pairz00_1887 = CDR(BgL_pairz00_1886);
													}
													BgL_pairz00_1888 = CDR(BgL_pairz00_1887);
												}
												BgL_arg2026z00_1017 = CAR(BgL_pairz00_1888);
											}
											{	/* Jas/as.scm 421 */
												obj_t BgL_list2027z00_1018;

												{	/* Jas/as.scm 421 */
													obj_t BgL_arg2028z00_1019;

													{	/* Jas/as.scm 421 */
														obj_t BgL_arg2029z00_1020;

														BgL_arg2029z00_1020 =
															MAKE_YOUNG_PAIR(BgL_arg2026z00_1017, BNIL);
														BgL_arg2028z00_1019 =
															MAKE_YOUNG_PAIR(BgL_arg2023z00_1016,
															BgL_arg2029z00_1020);
													}
													BgL_list2027z00_1018 =
														MAKE_YOUNG_PAIR(BINT(BgL_pcz00_36),
														BgL_arg2028z00_1019);
												}
												BgL_arg2021z00_1014 = BgL_list2027z00_1018;
											}
										}
										{	/* Jas/as.scm 421 */
											obj_t BgL_arg2031z00_1021;

											BgL_arg2031z00_1021 = CDR(((obj_t) BgL_lz00_35));
											BgL_arg2022z00_1015 =
												BGl_getzd2lineszd2zzjas_asz00(BgL_arg2031z00_1021,
												BgL_pcz00_36);
										}
										return
											MAKE_YOUNG_PAIR(BgL_arg2021z00_1014, BgL_arg2022z00_1015);
									}
								}
							else
								{	/* Jas/as.scm 422 */
									bool_t BgL_test2553z00_3299;

									{	/* Jas/as.scm 422 */
										obj_t BgL_tmpz00_3300;

										{	/* Jas/as.scm 422 */
											obj_t BgL_pairz00_1894;

											BgL_pairz00_1894 = CAR(((obj_t) BgL_lz00_35));
											BgL_tmpz00_3300 = CAR(BgL_pairz00_1894);
										}
										BgL_test2553z00_3299 =
											(BgL_tmpz00_3300 == BINT(((long) 204)));
									}
									if (BgL_test2553z00_3299)
										{	/* Jas/as.scm 422 */
											obj_t BgL_arg2035z00_1024;

											BgL_arg2035z00_1024 = CDR(((obj_t) BgL_lz00_35));
											{
												obj_t BgL_lz00_3308;

												BgL_lz00_3308 = BgL_arg2035z00_1024;
												BgL_lz00_35 = BgL_lz00_3308;
												goto BGl_getzd2lineszd2zzjas_asz00;
											}
										}
									else
										{	/* Jas/as.scm 423 */
											bool_t BgL_test2554z00_3309;

											{	/* Jas/as.scm 423 */
												obj_t BgL_tmpz00_3310;

												{	/* Jas/as.scm 423 */
													obj_t BgL_pairz00_1899;

													BgL_pairz00_1899 = CAR(((obj_t) BgL_lz00_35));
													BgL_tmpz00_3310 = CAR(BgL_pairz00_1899);
												}
												BgL_test2554z00_3309 =
													(BgL_tmpz00_3310 == BINT(((long) 205)));
											}
											if (BgL_test2554z00_3309)
												{	/* Jas/as.scm 423 */
													obj_t BgL_arg2038z00_1027;

													BgL_arg2038z00_1027 = CDR(((obj_t) BgL_lz00_35));
													{
														obj_t BgL_lz00_3318;

														BgL_lz00_3318 = BgL_arg2038z00_1027;
														BgL_lz00_35 = BgL_lz00_3318;
														goto BGl_getzd2lineszd2zzjas_asz00;
													}
												}
											else
												{	/* Jas/as.scm 424 */
													obj_t BgL_arg2039z00_1028;
													long BgL_arg2040z00_1029;

													BgL_arg2039z00_1028 = CDR(((obj_t) BgL_lz00_35));
													BgL_arg2040z00_1029 =
														(BgL_pcz00_36 +
														bgl_list_length(CAR(((obj_t) BgL_lz00_35))));
													{
														long BgL_pcz00_3326;
														obj_t BgL_lz00_3325;

														BgL_lz00_3325 = BgL_arg2039z00_1028;
														BgL_pcz00_3326 = BgL_arg2040z00_1029;
														BgL_pcz00_36 = BgL_pcz00_3326;
														BgL_lz00_35 = BgL_lz00_3325;
														goto BGl_getzd2lineszd2zzjas_asz00;
													}
												}
										}
								}
						}
				}
		}

	}



/* line-compress */
	obj_t BGl_linezd2compresszd2zzjas_asz00(obj_t BgL_lz00_37,
		obj_t BgL_linez00_38)
	{
		{	/* Jas/as.scm 426 */
		BGl_linezd2compresszd2zzjas_asz00:
			if (NULLP(BgL_lz00_37))
				{	/* Jas/as.scm 428 */
					return BgL_lz00_37;
				}
			else
				{	/* Jas/as.scm 429 */
					bool_t BgL_test2556z00_3329;

					{	/* Jas/as.scm 429 */
						obj_t BgL_tmpz00_3330;

						{	/* Jas/as.scm 429 */
							obj_t BgL_pairz00_1912;

							{	/* Jas/as.scm 429 */
								obj_t BgL_pairz00_1911;

								BgL_pairz00_1911 = CAR(((obj_t) BgL_lz00_37));
								BgL_pairz00_1912 = CDR(BgL_pairz00_1911);
							}
							BgL_tmpz00_3330 = CAR(BgL_pairz00_1912);
						}
						BgL_test2556z00_3329 = (BgL_tmpz00_3330 == BgL_linez00_38);
					}
					if (BgL_test2556z00_3329)
						{	/* Jas/as.scm 429 */
							obj_t BgL_arg2051z00_1039;

							BgL_arg2051z00_1039 = CDR(((obj_t) BgL_lz00_37));
							{
								obj_t BgL_lz00_3338;

								BgL_lz00_3338 = BgL_arg2051z00_1039;
								BgL_lz00_37 = BgL_lz00_3338;
								goto BGl_linezd2compresszd2zzjas_asz00;
							}
						}
					else
						{	/* Jas/as.scm 431 */
							obj_t BgL_arg2053z00_1040;
							obj_t BgL_arg2055z00_1041;

							BgL_arg2053z00_1040 = CAR(((obj_t) BgL_lz00_37));
							{	/* Jas/as.scm 431 */
								obj_t BgL_arg2056z00_1042;
								obj_t BgL_arg2057z00_1043;

								BgL_arg2056z00_1042 = CDR(((obj_t) BgL_lz00_37));
								{	/* Jas/as.scm 431 */
									obj_t BgL_pairz00_1921;

									{	/* Jas/as.scm 431 */
										obj_t BgL_pairz00_1920;

										BgL_pairz00_1920 = CAR(((obj_t) BgL_lz00_37));
										BgL_pairz00_1921 = CDR(BgL_pairz00_1920);
									}
									BgL_arg2057z00_1043 = CAR(BgL_pairz00_1921);
								}
								BgL_arg2055z00_1041 =
									BGl_linezd2compresszd2zzjas_asz00(BgL_arg2056z00_1042,
									BgL_arg2057z00_1043);
							}
							return MAKE_YOUNG_PAIR(BgL_arg2053z00_1040, BgL_arg2055z00_1041);
						}
				}
		}

	}



/* pos-info->line-info! */
	obj_t BGl_poszd2infozd2ze3linezd2infoz12z23zzjas_asz00()
	{
		{	/* Jas/as.scm 433 */
			{	/* Jas/as.scm 449 */
				obj_t BgL_xz00_1046;

				BgL_xz00_1046 =
					BGl_sortz00zz__r4_vectors_6_8z00
					(BGl_za2za2allzd2linesza2za2zd2zzjas_asz00,
					BGl_proc2359z00zzjas_asz00);
				return (BGl_za2za2poszd2ze3lineza2za2z31zzjas_asz00 =
					BGl_infoze70ze7zzjas_asz00(BgL_xz00_1046, BFALSE, BINT(((long) 0)),
						BINT(((long) 0))), BUNSPEC);
		}}

	}



/* info~0 */
	obj_t BGl_infoze70ze7zzjas_asz00(obj_t BgL_lz00_1054, obj_t BgL_linez00_1055,
		obj_t BgL_miniz00_1056, obj_t BgL_maxiz00_1057)
	{
		{	/* Jas/as.scm 448 */
		BGl_infoze70ze7zzjas_asz00:
			if (NULLP(BgL_lz00_1054))
				{	/* Jas/as.scm 436 */
					if (CBOOL(BgL_linez00_1055))
						{	/* Jas/as.scm 438 */
							obj_t BgL_arg2066z00_1060;

							{	/* Jas/as.scm 438 */
								obj_t BgL_list2067z00_1061;

								{	/* Jas/as.scm 438 */
									obj_t BgL_arg2068z00_1062;

									{	/* Jas/as.scm 438 */
										obj_t BgL_arg2069z00_1063;

										BgL_arg2069z00_1063 =
											MAKE_YOUNG_PAIR(BgL_maxiz00_1057, BNIL);
										BgL_arg2068z00_1062 =
											MAKE_YOUNG_PAIR(BgL_miniz00_1056, BgL_arg2069z00_1063);
									}
									BgL_list2067z00_1061 =
										MAKE_YOUNG_PAIR(BgL_linez00_1055, BgL_arg2068z00_1062);
								}
								BgL_arg2066z00_1060 = BgL_list2067z00_1061;
							}
							return MAKE_YOUNG_PAIR(BgL_arg2066z00_1060, BNIL);
						}
					else
						{	/* Jas/as.scm 437 */
							return BNIL;
						}
				}
			else
				{	/* Jas/as.scm 436 */
					if (CBOOL(BgL_linez00_1055))
						{	/* Jas/as.scm 443 */
							bool_t BgL_test2560z00_3363;

							{	/* Jas/as.scm 443 */
								long BgL_tmpz00_3364;

								{	/* Jas/as.scm 443 */
									obj_t BgL_tmpz00_3366;

									{	/* Jas/as.scm 443 */
										obj_t BgL_pairz00_1925;

										BgL_pairz00_1925 = CAR(((obj_t) BgL_lz00_1054));
										BgL_tmpz00_3366 = CAR(CDR(BgL_pairz00_1925));
									}
									BgL_tmpz00_3364 = (long) CINT(BgL_tmpz00_3366);
								}
								BgL_test2560z00_3363 =
									((long) CINT(BgL_linez00_1055) == BgL_tmpz00_3364);
							}
							if (BgL_test2560z00_3363)
								{	/* Jas/as.scm 444 */
									obj_t BgL_posz00_1067;

									{	/* Jas/as.scm 444 */
										obj_t BgL_pairz00_1933;

										BgL_pairz00_1933 = CAR(((obj_t) BgL_lz00_1054));
										BgL_posz00_1067 = CAR(CDR(CDR(BgL_pairz00_1933)));
									}
									{	/* Jas/as.scm 445 */
										obj_t BgL_arg2075z00_1068;
										obj_t BgL_arg2076z00_1069;
										obj_t BgL_arg2077z00_1070;

										BgL_arg2075z00_1068 = CDR(((obj_t) BgL_lz00_1054));
										BgL_arg2076z00_1069 =
											BGl_2minz00zz__r4_numbers_6_5z00(BgL_miniz00_1056,
											BgL_posz00_1067);
										BgL_arg2077z00_1070 =
											BGl_2maxz00zz__r4_numbers_6_5z00(BgL_maxiz00_1057,
											BgL_posz00_1067);
										{
											obj_t BgL_maxiz00_3384;
											obj_t BgL_miniz00_3383;
											obj_t BgL_lz00_3382;

											BgL_lz00_3382 = BgL_arg2075z00_1068;
											BgL_miniz00_3383 = BgL_arg2076z00_1069;
											BgL_maxiz00_3384 = BgL_arg2077z00_1070;
											BgL_maxiz00_1057 = BgL_maxiz00_3384;
											BgL_miniz00_1056 = BgL_miniz00_3383;
											BgL_lz00_1054 = BgL_lz00_3382;
											goto BGl_infoze70ze7zzjas_asz00;
										}
									}
								}
							else
								{	/* Jas/as.scm 447 */
									obj_t BgL_arg2079z00_1076;
									obj_t BgL_arg2080z00_1077;

									{	/* Jas/as.scm 447 */
										obj_t BgL_list2081z00_1078;

										{	/* Jas/as.scm 447 */
											obj_t BgL_arg2082z00_1079;

											{	/* Jas/as.scm 447 */
												obj_t BgL_arg2083z00_1080;

												BgL_arg2083z00_1080 =
													MAKE_YOUNG_PAIR(BgL_maxiz00_1057, BNIL);
												BgL_arg2082z00_1079 =
													MAKE_YOUNG_PAIR(BgL_miniz00_1056,
													BgL_arg2083z00_1080);
											}
											BgL_list2081z00_1078 =
												MAKE_YOUNG_PAIR(BgL_linez00_1055, BgL_arg2082z00_1079);
										}
										BgL_arg2079z00_1076 = BgL_list2081z00_1078;
									}
									BgL_arg2080z00_1077 =
										BGl_infoze70ze7zzjas_asz00(BgL_lz00_1054, BFALSE,
										BINT(((long) 0)), BINT(((long) 0)));
									return
										MAKE_YOUNG_PAIR(BgL_arg2079z00_1076, BgL_arg2080z00_1077);
								}
						}
					else
						{	/* Jas/as.scm 441 */
							obj_t BgL_posz00_1083;

							{	/* Jas/as.scm 441 */
								obj_t BgL_pairz00_1942;

								BgL_pairz00_1942 = CAR(((obj_t) BgL_lz00_1054));
								BgL_posz00_1083 = CAR(CDR(CDR(BgL_pairz00_1942)));
							}
							{	/* Jas/as.scm 442 */
								obj_t BgL_arg2086z00_1084;

								{	/* Jas/as.scm 442 */
									obj_t BgL_pairz00_1949;

									BgL_pairz00_1949 = CAR(((obj_t) BgL_lz00_1054));
									BgL_arg2086z00_1084 = CAR(CDR(BgL_pairz00_1949));
								}
								{
									obj_t BgL_maxiz00_3403;
									obj_t BgL_miniz00_3402;
									obj_t BgL_linez00_3401;

									BgL_linez00_3401 = BgL_arg2086z00_1084;
									BgL_miniz00_3402 = BgL_posz00_1083;
									BgL_maxiz00_3403 = BgL_posz00_1083;
									BgL_maxiz00_1057 = BgL_maxiz00_3403;
									BgL_miniz00_1056 = BgL_miniz00_3402;
									BgL_linez00_1055 = BgL_linez00_3401;
									goto BGl_infoze70ze7zzjas_asz00;
								}
							}
						}
				}
		}

	}



/* &<@anonymous:2061> */
	obj_t BGl_z62zc3z04anonymousza32061ze3ze5zzjas_asz00(obj_t BgL_envz00_2039,
		obj_t BgL_xz00_2040, obj_t BgL_yz00_2041)
	{
		{	/* Jas/as.scm 449 */
			{	/* Jas/as.scm 449 */
				bool_t BgL_tmpz00_3404;

				{	/* Jas/as.scm 449 */
					long BgL_auxz00_3410;
					long BgL_tmpz00_3405;

					{	/* Jas/as.scm 449 */
						obj_t BgL_pairz00_2067;

						BgL_pairz00_2067 = CDR(((obj_t) BgL_yz00_2041));
						BgL_auxz00_3410 = (long) CINT(CAR(BgL_pairz00_2067));
					}
					{	/* Jas/as.scm 449 */
						obj_t BgL_pairz00_2066;

						BgL_pairz00_2066 = CDR(((obj_t) BgL_xz00_2040));
						BgL_tmpz00_3405 = (long) CINT(CAR(BgL_pairz00_2066));
					}
					BgL_tmpz00_3404 = (BgL_tmpz00_3405 <= BgL_auxz00_3410);
				}
				return BBOOL(BgL_tmpz00_3404);
			}
		}

	}



/* get-localvars */
	obj_t BGl_getzd2localvarszd2zzjas_asz00(obj_t BgL_lz00_39)
	{
		{	/* Jas/as.scm 453 */
		BGl_getzd2localvarszd2zzjas_asz00:
			if (NULLP(BgL_lz00_39))
				{	/* Jas/as.scm 455 */
					return BgL_lz00_39;
				}
			else
				{	/* Jas/as.scm 456 */
					bool_t BgL_test2562z00_3419;

					{	/* Jas/as.scm 456 */
						obj_t BgL_tmpz00_3420;

						{	/* Jas/as.scm 456 */
							obj_t BgL_pairz00_1970;

							BgL_pairz00_1970 = CAR(((obj_t) BgL_lz00_39));
							BgL_tmpz00_3420 = CAR(BgL_pairz00_1970);
						}
						BgL_test2562z00_3419 = (BgL_tmpz00_3420 == BINT(((long) 205)));
					}
					if (BgL_test2562z00_3419)
						{	/* Jas/as.scm 457 */
							obj_t BgL_arg2092z00_1091;
							obj_t BgL_arg2093z00_1092;

							{	/* Jas/as.scm 457 */
								obj_t BgL_pairz00_1974;

								BgL_pairz00_1974 = CAR(((obj_t) BgL_lz00_39));
								BgL_arg2092z00_1091 = CDR(BgL_pairz00_1974);
							}
							{	/* Jas/as.scm 457 */
								obj_t BgL_arg2094z00_1093;

								BgL_arg2094z00_1093 = CDR(((obj_t) BgL_lz00_39));
								BgL_arg2093z00_1092 =
									BGl_getzd2localvarszd2zzjas_asz00(BgL_arg2094z00_1093);
							}
							return MAKE_YOUNG_PAIR(BgL_arg2092z00_1091, BgL_arg2093z00_1092);
						}
					else
						{	/* Jas/as.scm 458 */
							obj_t BgL_arg2095z00_1094;

							BgL_arg2095z00_1094 = CDR(((obj_t) BgL_lz00_39));
							{
								obj_t BgL_lz00_3435;

								BgL_lz00_3435 = BgL_arg2095z00_1094;
								BgL_lz00_39 = BgL_lz00_3435;
								goto BGl_getzd2localvarszd2zzjas_asz00;
							}
						}
				}
		}

	}



/* get-bytecode */
	obj_t BGl_getzd2bytecodezd2zzjas_asz00(obj_t BgL_lz00_40)
	{
		{	/* Jas/as.scm 461 */
		BGl_getzd2bytecodezd2zzjas_asz00:
			if (NULLP(BgL_lz00_40))
				{	/* Jas/as.scm 462 */
					return BgL_lz00_40;
				}
			else
				{	/* Jas/as.scm 463 */
					bool_t BgL_test2564z00_3438;

					{	/* Jas/as.scm 463 */
						obj_t BgL_tmpz00_3439;

						{	/* Jas/as.scm 463 */
							obj_t BgL_pairz00_1981;

							BgL_pairz00_1981 = CAR(((obj_t) BgL_lz00_40));
							BgL_tmpz00_3439 = CAR(BgL_pairz00_1981);
						}
						BgL_test2564z00_3438 = (BgL_tmpz00_3439 == BINT(((long) 202)));
					}
					if (BgL_test2564z00_3438)
						{	/* Jas/as.scm 463 */
							obj_t BgL_arg2100z00_1099;

							BgL_arg2100z00_1099 = CDR(((obj_t) BgL_lz00_40));
							{
								obj_t BgL_lz00_3447;

								BgL_lz00_3447 = BgL_arg2100z00_1099;
								BgL_lz00_40 = BgL_lz00_3447;
								goto BGl_getzd2bytecodezd2zzjas_asz00;
							}
						}
					else
						{	/* Jas/as.scm 464 */
							bool_t BgL_test2565z00_3448;

							{	/* Jas/as.scm 464 */
								obj_t BgL_tmpz00_3449;

								{	/* Jas/as.scm 464 */
									obj_t BgL_pairz00_1986;

									BgL_pairz00_1986 = CAR(((obj_t) BgL_lz00_40));
									BgL_tmpz00_3449 = CAR(BgL_pairz00_1986);
								}
								BgL_test2565z00_3448 = (BgL_tmpz00_3449 == BINT(((long) 203)));
							}
							if (BgL_test2565z00_3448)
								{	/* Jas/as.scm 464 */
									obj_t BgL_arg2103z00_1102;

									BgL_arg2103z00_1102 = CDR(((obj_t) BgL_lz00_40));
									{
										obj_t BgL_lz00_3457;

										BgL_lz00_3457 = BgL_arg2103z00_1102;
										BgL_lz00_40 = BgL_lz00_3457;
										goto BGl_getzd2bytecodezd2zzjas_asz00;
									}
								}
							else
								{	/* Jas/as.scm 465 */
									bool_t BgL_test2566z00_3458;

									{	/* Jas/as.scm 465 */
										obj_t BgL_tmpz00_3459;

										{	/* Jas/as.scm 465 */
											obj_t BgL_pairz00_1991;

											BgL_pairz00_1991 = CAR(((obj_t) BgL_lz00_40));
											BgL_tmpz00_3459 = CAR(BgL_pairz00_1991);
										}
										BgL_test2566z00_3458 =
											(BgL_tmpz00_3459 == BINT(((long) 204)));
									}
									if (BgL_test2566z00_3458)
										{	/* Jas/as.scm 465 */
											obj_t BgL_arg2106z00_1105;

											BgL_arg2106z00_1105 = CDR(((obj_t) BgL_lz00_40));
											{
												obj_t BgL_lz00_3467;

												BgL_lz00_3467 = BgL_arg2106z00_1105;
												BgL_lz00_40 = BgL_lz00_3467;
												goto BGl_getzd2bytecodezd2zzjas_asz00;
											}
										}
									else
										{	/* Jas/as.scm 466 */
											bool_t BgL_test2567z00_3468;

											{	/* Jas/as.scm 466 */
												obj_t BgL_tmpz00_3469;

												{	/* Jas/as.scm 466 */
													obj_t BgL_pairz00_1996;

													BgL_pairz00_1996 = CAR(((obj_t) BgL_lz00_40));
													BgL_tmpz00_3469 = CAR(BgL_pairz00_1996);
												}
												BgL_test2567z00_3468 =
													(BgL_tmpz00_3469 == BINT(((long) 205)));
											}
											if (BgL_test2567z00_3468)
												{	/* Jas/as.scm 466 */
													obj_t BgL_arg2109z00_1108;

													BgL_arg2109z00_1108 = CDR(((obj_t) BgL_lz00_40));
													{
														obj_t BgL_lz00_3477;

														BgL_lz00_3477 = BgL_arg2109z00_1108;
														BgL_lz00_40 = BgL_lz00_3477;
														goto BGl_getzd2bytecodezd2zzjas_asz00;
													}
												}
											else
												{	/* Jas/as.scm 467 */
													obj_t BgL_arg2110z00_1109;
													obj_t BgL_arg2111z00_1110;

													BgL_arg2110z00_1109 = CAR(((obj_t) BgL_lz00_40));
													{	/* Jas/as.scm 467 */
														obj_t BgL_arg2112z00_1111;

														BgL_arg2112z00_1111 = CDR(((obj_t) BgL_lz00_40));
														BgL_arg2111z00_1110 =
															BGl_getzd2bytecodezd2zzjas_asz00
															(BgL_arg2112z00_1111);
													}
													return
														BGl_appendzd221011zd2zzjas_asz00
														(BgL_arg2110z00_1109, BgL_arg2111z00_1110);
												}
										}
								}
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_asz00()
	{
		{	/* Jas/as.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_producez00(((long) 468081775),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_profilez00(((long) 474882225),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_opcodez00(((long) 412837442),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_peepz00(((long) 121595924),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_widez00(((long) 108239054),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			BGl_modulezd2initializa7ationz75zzjas_labelsz00(((long) 208213046),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_stackz00(((long) 163304421),
				BSTRING_TO_STRING(BGl_string2360z00zzjas_asz00));
		}

	}

#ifdef __cplusplus
}
#endif
