/*===========================================================================*/
/*   (SawJvm/jld.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/jld.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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


	static obj_t BGl_z62zc3z04anonymousza31918ze3ze5zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl_z62zc3z04anonymousza31936ze3ze5zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	static obj_t BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_z62generatezd2jvmzd2env2347z62zzsaw_jvm_ldz00();
	extern obj_t BGl_uncygdrivez00zztools_miscz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_ldz00();
	extern obj_t BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31959ze3ze5zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00(obj_t);
	static bool_t BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzsaw_jvm_ldz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_ldz00();
	extern obj_t BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
	static obj_t BGl_uniquez00zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_userzd2libraryzd2zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_zc3z04exitza31748ze3ze70z60zzsaw_jvm_ldz00();
	static obj_t BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00();
	static obj_t BGl_z62generatezd2jvmzd2envz62zzsaw_jvm_ldz00();
	static obj_t BGl_z62zc3z04anonymousza31811ze3ze5zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_ldz00();
	static obj_t BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_splitzd272zd2zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_z62jvmzd2ldzb0zzsaw_jvm_ldz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_za2jvmzd2optionsza2zd2zzengine_paramz00;
	extern obj_t BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	static obj_t BGl_loopze70ze7zzsaw_jvm_ldz00(obj_t, long);
	BGL_IMPORT obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_za2jvmzd2envza2zd2zzengine_paramz00;
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	static obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_zc3z04anonymousza31388ze3ze70z60zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31780ze3ze5zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2jvmzd2javaza2zd2zzengine_paramz00;
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00 = BUNSPEC;
	static bool_t BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza32005ze3ze5zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	extern obj_t BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t);
	static obj_t BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_ldz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	extern obj_t BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31893ze3ze5zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2classpathza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	extern obj_t BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	static obj_t BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static bool_t BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_ldz00();
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00();
	static obj_t BGl_manifestzd2classpathzd2formatz00zzsaw_jvm_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzsaw_jvm_ldz00(obj_t);
	static obj_t BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
	BGL_IMPORT obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t,
		obj_t);
	static obj_t __cnst[16];


	   
		 
		DEFINE_STRING(BGl_string2348z00zzsaw_jvm_ldz00,
		BgL_bgl_string2348za700za7za7s2429za7, ".jar", 4);
	      DEFINE_STRING(BGl_string2349z00zzsaw_jvm_ldz00,
		BgL_bgl_string2349za700za7za7s2430za7, "   . jar", 8);
	      DEFINE_STRING(BGl_string2350z00zzsaw_jvm_ldz00,
		BgL_bgl_string2350za700za7za7s2431za7, ")", 1);
	      DEFINE_STRING(BGl_string2351z00zzsaw_jvm_ldz00,
		BgL_bgl_string2351za700za7za7s2432za7, " (", 2);
	      DEFINE_STRING(BGl_string2352z00zzsaw_jvm_ldz00,
		BgL_bgl_string2352za700za7za7s2433za7, ".class", 6);
	      DEFINE_STRING(BGl_string2353z00zzsaw_jvm_ldz00,
		BgL_bgl_string2353za700za7za7s2434za7, "ld", 2);
	      DEFINE_STRING(BGl_string2354z00zzsaw_jvm_ldz00,
		BgL_bgl_string2354za700za7za7s2435za7, "Can't established JVM main class",
		32);
	      DEFINE_STRING(BGl_string2355z00zzsaw_jvm_ldz00,
		BgL_bgl_string2355za700za7za7s2436za7, "see option -jvm-mainclass", 25);
	      DEFINE_STRING(BGl_string2356z00zzsaw_jvm_ldz00,
		BgL_bgl_string2356za700za7za7s2437za7, "msdos", 5);
	      DEFINE_STRING(BGl_string2357z00zzsaw_jvm_ldz00,
		BgL_bgl_string2357za700za7za7s2438za7, "_u", 2);
	      DEFINE_STRING(BGl_string2358z00zzsaw_jvm_ldz00,
		BgL_bgl_string2358za700za7za7s2439za7, "_s", 2);
	      DEFINE_STRING(BGl_string2359z00zzsaw_jvm_ldz00,
		BgL_bgl_string2359za700za7za7s2440za7, "_eu", 3);
	      DEFINE_STRING(BGl_string2360z00zzsaw_jvm_ldz00,
		BgL_bgl_string2360za700za7za7s2441za7, "_es", 3);
	      DEFINE_STRING(BGl_string2361z00zzsaw_jvm_ldz00,
		BgL_bgl_string2361za700za7za7s2442za7,
		"Can't find ~a zip file (~a) for library -- ", 43);
	      DEFINE_STRING(BGl_string2362z00zzsaw_jvm_ldz00,
		BgL_bgl_string2362za700za7za7s2443za7, "ld:", 3);
	      DEFINE_STRING(BGl_string2363z00zzsaw_jvm_ldz00,
		BgL_bgl_string2363za700za7za7s2444za7,
		"Can't find zip file (~a) for library -- ", 40);
	      DEFINE_STRING(BGl_string2364z00zzsaw_jvm_ldz00,
		BgL_bgl_string2364za700za7za7s2445za7, "jar", 3);
	      DEFINE_STRING(BGl_string2365z00zzsaw_jvm_ldz00,
		BgL_bgl_string2365za700za7za7s2446za7, "No main clause found", 20);
	      DEFINE_STRING(BGl_string2367z00zzsaw_jvm_ldz00,
		BgL_bgl_string2367za700za7za7s2447za7, "mco", 3);
	      DEFINE_STRING(BGl_string2369z00zzsaw_jvm_ldz00,
		BgL_bgl_string2369za700za7za7s2448za7, ".", 1);
	      DEFINE_STRING(BGl_string2370z00zzsaw_jvm_ldz00,
		BgL_bgl_string2370za700za7za7s2449za7, "", 0);
	      DEFINE_STRING(BGl_string2372z00zzsaw_jvm_ldz00,
		BgL_bgl_string2372za700za7za7s2450za7, " ", 1);
	      DEFINE_STRING(BGl_string2373z00zzsaw_jvm_ldz00,
		BgL_bgl_string2373za700za7za7s2451za7, "-C ", 3);
	      DEFINE_STRING(BGl_string2374z00zzsaw_jvm_ldz00,
		BgL_bgl_string2374za700za7za7s2452za7, "]\n", 2);
	      DEFINE_STRING(BGl_string2375z00zzsaw_jvm_ldz00,
		BgL_bgl_string2375za700za7za7s2453za7, "      [", 7);
	      DEFINE_STRING(BGl_string2376z00zzsaw_jvm_ldz00,
		BgL_bgl_string2376za700za7za7s2454za7, "Can't create jar file", 21);
	      DEFINE_STRING(BGl_string2377z00zzsaw_jvm_ldz00,
		BgL_bgl_string2377za700za7za7s2455za7, "X", 1);
	      DEFINE_STRING(BGl_string2378z00zzsaw_jvm_ldz00,
		BgL_bgl_string2378za700za7za7s2456za7, "Manifest", 8);
	      DEFINE_STRING(BGl_string2379z00zzsaw_jvm_ldz00,
		BgL_bgl_string2379za700za7za7s2457za7, "sh", 2);
	      DEFINE_STRING(BGl_string2380z00zzsaw_jvm_ldz00,
		BgL_bgl_string2380za700za7za7s2458za7, "' -- using `sh'", 15);
	      DEFINE_STRING(BGl_string2381z00zzsaw_jvm_ldz00,
		BgL_bgl_string2381za700za7za7s2459za7, "Illegal shell `", 15);
	      DEFINE_STRING(BGl_string2382z00zzsaw_jvm_ldz00,
		BgL_bgl_string2382za700za7za7s2460za7, "generate-jvm-manifest", 21);
	      DEFINE_STRING(BGl_string2383z00zzsaw_jvm_ldz00,
		BgL_bgl_string2383za700za7za7s2461za7, "\n ", 2);
	      DEFINE_STRING(BGl_string2384z00zzsaw_jvm_ldz00,
		BgL_bgl_string2384za700za7za7s2462za7, "' --using `sh'", 14);
	      DEFINE_STRING(BGl_string2385z00zzsaw_jvm_ldz00,
		BgL_bgl_string2385za700za7za7s2463za7, "Illegal shell `:", 16);
	      DEFINE_STRING(BGl_string2386z00zzsaw_jvm_ldz00,
		BgL_bgl_string2386za700za7za7s2464za7, "manifest-classpath-format", 25);
	      DEFINE_STRING(BGl_string2387z00zzsaw_jvm_ldz00,
		BgL_bgl_string2387za700za7za7s2465za7, "Manifest-Version: 1.0", 21);
	      DEFINE_STRING(BGl_string2388z00zzsaw_jvm_ldz00,
		BgL_bgl_string2388za700za7za7s2466za7, "Main-Class: ", 12);
	      DEFINE_STRING(BGl_string2389z00zzsaw_jvm_ldz00,
		BgL_bgl_string2389za700za7za7s2467za7, "Class-Path: ", 12);
	      DEFINE_STRING(BGl_string2390z00zzsaw_jvm_ldz00,
		BgL_bgl_string2390za700za7za7s2468za7, "\n  ", 3);
	      DEFINE_STRING(BGl_string2391z00zzsaw_jvm_ldz00,
		BgL_bgl_string2391za700za7za7s2469za7, "bigloo_u.zip", 12);
	      DEFINE_STRING(BGl_string2392z00zzsaw_jvm_ldz00,
		BgL_bgl_string2392za700za7za7s2470za7, "bigloo_s.zip", 12);
	      DEFINE_STRING(BGl_string2393z00zzsaw_jvm_ldz00,
		BgL_bgl_string2393za700za7za7s2471za7, "Created-By: ", 12);
	      DEFINE_STRING(BGl_string2394z00zzsaw_jvm_ldz00,
		BgL_bgl_string2394za700za7za7s2472za7, "=$", 2);
	      DEFINE_STRING(BGl_string2395z00zzsaw_jvm_ldz00,
		BgL_bgl_string2395za700za7za7s2473za7, "-Dbigloo.", 9);
	      DEFINE_STRING(BGl_string2396z00zzsaw_jvm_ldz00,
		BgL_bgl_string2396za700za7za7s2474za7, "#!/bin/sh", 9);
	      DEFINE_STRING(BGl_string2397z00zzsaw_jvm_ldz00,
		BgL_bgl_string2397za700za7za7s2475za7, "CLASSPATH=", 10);
	      DEFINE_STRING(BGl_string2398z00zzsaw_jvm_ldz00,
		BgL_bgl_string2398za700za7za7s2476za7, "'", 1);
	      DEFINE_STRING(BGl_string2399z00zzsaw_jvm_ldz00,
		BgL_bgl_string2399za700za7za7s2477za7, "$BUGLOOCLASSPATH", 16);
	      DEFINE_STRING(BGl_string2400z00zzsaw_jvm_ldz00,
		BgL_bgl_string2400za700za7za7s2478za7, "$BIGLOOCLASSPATH", 16);
	      DEFINE_STRING(BGl_string2401z00zzsaw_jvm_ldz00,
		BgL_bgl_string2401za700za7za7s2479za7, "export CLASSPATH", 16);
	      DEFINE_STRING(BGl_string2402z00zzsaw_jvm_ldz00,
		BgL_bgl_string2402za700za7za7s2480za7, "exec ", 5);
	      DEFINE_STRING(BGl_string2403z00zzsaw_jvm_ldz00,
		BgL_bgl_string2403za700za7za7s2481za7, " $BIGLOOJAVAOPT $BUGLOOJAVAOPT ",
		31);
	      DEFINE_STRING(BGl_string2404z00zzsaw_jvm_ldz00,
		BgL_bgl_string2404za700za7za7s2482za7, " $*", 3);
	      DEFINE_STRING(BGl_string2405z00zzsaw_jvm_ldz00,
		BgL_bgl_string2405za700za7za7s2483za7, "CLASSPATH=\"", 11);
	      DEFINE_STRING(BGl_string2406z00zzsaw_jvm_ldz00,
		BgL_bgl_string2406za700za7za7s2484za7, "\"", 1);
	      DEFINE_STRING(BGl_string2407z00zzsaw_jvm_ldz00,
		BgL_bgl_string2407za700za7za7s2485za7, " -jar ", 6);
	      DEFINE_STRING(BGl_string2408z00zzsaw_jvm_ldz00,
		BgL_bgl_string2408za700za7za7s2486za7, "`", 1);
	      DEFINE_STRING(BGl_string2409z00zzsaw_jvm_ldz00,
		BgL_bgl_string2409za700za7za7s2487za7, " $0`", 4);
	      DEFINE_STRING(BGl_string2410z00zzsaw_jvm_ldz00,
		BgL_bgl_string2410za700za7za7s2488za7, ".jar $*", 7);
	      DEFINE_STRING(BGl_string2411z00zzsaw_jvm_ldz00,
		BgL_bgl_string2411za700za7za7s2489za7, "@", 1);
	      DEFINE_STRING(BGl_string2412z00zzsaw_jvm_ldz00,
		BgL_bgl_string2412za700za7za7s2490za7, " -cp \"", 6);
	      DEFINE_STRING(BGl_string2413z00zzsaw_jvm_ldz00,
		BgL_bgl_string2413za700za7za7s2491za7, "\\bigloo_u.zip", 13);
	      DEFINE_STRING(BGl_string2414z00zzsaw_jvm_ldz00,
		BgL_bgl_string2414za700za7za7s2492za7, "\\bigloo_s.zip", 13);
	      DEFINE_STRING(BGl_string2415z00zzsaw_jvm_ldz00,
		BgL_bgl_string2415za700za7za7s2493za7, "%BUGLOOCLASSPATH%", 17);
	      DEFINE_STRING(BGl_string2416z00zzsaw_jvm_ldz00,
		BgL_bgl_string2416za700za7za7s2494za7, "\" ", 2);
	      DEFINE_STRING(BGl_string2417z00zzsaw_jvm_ldz00,
		BgL_bgl_string2417za700za7za7s2495za7, " %BIGLOOJAVAOPT% %BUGLOOJAVAOPT% ",
		33);
	      DEFINE_STRING(BGl_string2418z00zzsaw_jvm_ldz00,
		BgL_bgl_string2418za700za7za7s2496za7, " %*", 3);
	      DEFINE_STRING(BGl_string2419z00zzsaw_jvm_ldz00,
		BgL_bgl_string2419za700za7za7s2497za7, "\\", 1);
	      DEFINE_STRING(BGl_string2420z00zzsaw_jvm_ldz00,
		BgL_bgl_string2420za700za7za7s2498za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2421z00zzsaw_jvm_ldz00,
		BgL_bgl_string2421za700za7za7s2499za7, "generate-jvm-script", 19);
	      DEFINE_STRING(BGl_string2422z00zzsaw_jvm_ldz00,
		BgL_bgl_string2422za700za7za7s2500za7, ":", 1);
	      DEFINE_STRING(BGl_string2423z00zzsaw_jvm_ldz00,
		BgL_bgl_string2423za700za7za7s2501za7, ";", 1);
	      DEFINE_STRING(BGl_string2424z00zzsaw_jvm_ldz00,
		BgL_bgl_string2424za700za7za7s2502za7, "saw_jvm_ld", 10);
	      DEFINE_STRING(BGl_string2425z00zzsaw_jvm_ldz00,
		BgL_bgl_string2425za700za7za7s2503za7,
		"dirname-cmd jflags jvflags read write execute zip-directory jar static export wide-class final-class abstract-class class main module ",
		134);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zzsaw_jvm_ldz00,
		BgL_bgl_za762za7c3za704anonymo2504za7,
		BGl_z62zc3z04anonymousza31574ze3ze5zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2368z00zzsaw_jvm_ldz00,
		BgL_bgl_za762za7c3za704anonymo2505za7,
		BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zzsaw_jvm_ldz00,
		BgL_bgl_za762za7c3za704anonymo2506za7,
		BGl_z62zc3z04anonymousza31780ze3ze5zzsaw_jvm_ldz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2ldzd2envz00zzsaw_jvm_ldz00,
		BgL_bgl_za762jvmza7d2ldza7b0za7za72507za7,
		BGl_z62jvmzd2ldzb0zzsaw_jvm_ldz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long
		BgL_checksumz00_3417, char *BgL_fromz00_3418)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_ldz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_ldz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00();
					BGl_cnstzd2initzd2zzsaw_jvm_ldz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00();
					return BGl_methodzd2initzd2zzsaw_jvm_ldz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_ld");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_ld");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			{	/* SawJvm/jld.scm 16 */
				obj_t BgL_cportz00_3253;

				{	/* SawJvm/jld.scm 16 */
					obj_t BgL_stringz00_3261;

					BgL_stringz00_3261 = BGl_string2425z00zzsaw_jvm_ldz00;
					{	/* SawJvm/jld.scm 16 */
						obj_t BgL_startz00_3262;

						BgL_startz00_3262 = BINT(((long) 0));
						{	/* SawJvm/jld.scm 16 */
							obj_t BgL_endz00_3263;

							BgL_endz00_3263 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3261)));
							{	/* SawJvm/jld.scm 16 */

								BgL_cportz00_3253 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3261, BgL_startz00_3262, BgL_endz00_3263);
				}}}}
				{
					long BgL_iz00_3254;

					BgL_iz00_3254 = ((long) 15);
				BgL_loopz00_3255:
					if ((BgL_iz00_3254 == ((long) -1)))
						{	/* SawJvm/jld.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/jld.scm 16 */
							{	/* SawJvm/jld.scm 16 */
								obj_t BgL_arg2427z00_3257;

								{	/* SawJvm/jld.scm 16 */

									{	/* SawJvm/jld.scm 16 */
										obj_t BgL_locationz00_3259;

										BgL_locationz00_3259 = BBOOL(((bool_t) 0));
										{	/* SawJvm/jld.scm 16 */

											BgL_arg2427z00_3257 =
												BGl_readz00zz__readerz00(BgL_cportz00_3253,
												BgL_locationz00_3259);
										}
									}
								}
								{	/* SawJvm/jld.scm 16 */
									int BgL_tmpz00_3452;

									BgL_tmpz00_3452 = (int) (BgL_iz00_3254);
									CNST_TABLE_SET(BgL_tmpz00_3452, BgL_arg2427z00_3257);
							}}
							{	/* SawJvm/jld.scm 16 */
								int BgL_auxz00_3260;

								BgL_auxz00_3260 = (int) ((BgL_iz00_3254 - ((long) 1)));
								{
									long BgL_iz00_3457;

									BgL_iz00_3457 = (long) (BgL_auxz00_3260);
									BgL_iz00_3254 = BgL_iz00_3457;
									goto BgL_loopz00_3255;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_jvm_ldz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1710;

				BgL_headz00_1710 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1711;
					obj_t BgL_tailz00_1712;

					BgL_prevz00_1711 = BgL_headz00_1710;
					BgL_tailz00_1712 = BgL_l1z00_1;
				BgL_loopz00_1713:
					if (PAIRP(BgL_tailz00_1712))
						{
							obj_t BgL_newzd2prevzd2_1715;

							BgL_newzd2prevzd2_1715 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1712), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1711, BgL_newzd2prevzd2_1715);
							{
								obj_t BgL_tailz00_3467;
								obj_t BgL_prevz00_3466;

								BgL_prevz00_3466 = BgL_newzd2prevzd2_1715;
								BgL_tailz00_3467 = CDR(BgL_tailz00_1712);
								BgL_tailz00_1712 = BgL_tailz00_3467;
								BgL_prevz00_1711 = BgL_prevz00_3466;
								goto BgL_loopz00_1713;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1710);
				}
			}
		}

	}



/* jvm-ld */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t
		BgL_linkzd2mainzd2modulez00_3)
	{
		{	/* SawJvm/jld.scm 39 */
			{	/* SawJvm/jld.scm 40 */
				obj_t BgL_targetz00_1718;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 40 */
						BgL_targetz00_1718 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 40 */
						BgL_targetz00_1718 = string_to_bstring(BGL_DEFAULT_A_BAT);
					}
				{	/* SawJvm/jld.scm 40 */
					obj_t BgL_jarnamez00_1719;

					BgL_jarnamez00_1719 =
						string_append(BGl_prefixz00zz__osz00(BgL_targetz00_1718),
						BGl_string2348z00zzsaw_jvm_ldz00);
					{	/* SawJvm/jld.scm 43 */
						obj_t BgL_za7ipsza7_1720;

						{	/* SawJvm/jld.scm 45 */
							obj_t BgL_arg1387z00_1749;

							BgL_arg1387z00_1749 =
								BGl_zc3z04anonymousza31388ze3ze70z60zzsaw_jvm_ldz00
								(BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00);
							BgL_za7ipsza7_1720 =
								BGl_appendzd221011zd2zzsaw_jvm_ldz00(BgL_arg1387z00_1749,
								BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00);
						}
						{	/* SawJvm/jld.scm 44 */

							if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
								{	/* SawJvm/jld.scm 48 */
									obj_t BgL_manifestz00_1721;

									BgL_manifestz00_1721 =
										BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00();
									{	/* SawJvm/jld.scm 48 */
										obj_t BgL_ozd2fileszd2_1722;

										{	/* SawJvm/jld.scm 49 */
											obj_t BgL_arg1367z00_1731;

											{	/* SawJvm/jld.scm 49 */
												obj_t BgL_l1306z00_1732;

												BgL_l1306z00_1732 =
													BGl_za2srczd2filesza2zd2zzengine_paramz00;
												if (NULLP(BgL_l1306z00_1732))
													{	/* SawJvm/jld.scm 49 */
														BgL_arg1367z00_1731 = BNIL;
													}
												else
													{	/* SawJvm/jld.scm 49 */
														obj_t BgL_head1308z00_1734;

														{	/* SawJvm/jld.scm 49 */
															obj_t BgL_arg1384z00_1746;

															{	/* SawJvm/jld.scm 49 */
																obj_t BgL_arg1385z00_1747;

																BgL_arg1385z00_1747 =
																	CAR(((obj_t) BgL_l1306z00_1732));
																BgL_arg1384z00_1746 =
																	BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00
																	(BgL_arg1385z00_1747);
															}
															{	/* SawJvm/jld.scm 49 */
																obj_t BgL_res2178z00_2651;

																BgL_res2178z00_2651 =
																	MAKE_YOUNG_PAIR(BgL_arg1384z00_1746, BNIL);
																BgL_head1308z00_1734 = BgL_res2178z00_2651;
															}
														}
														{	/* SawJvm/jld.scm 49 */
															obj_t BgL_g1311z00_1735;

															BgL_g1311z00_1735 =
																CDR(((obj_t) BgL_l1306z00_1732));
															{
																obj_t BgL_l1306z00_1737;
																obj_t BgL_tail1309z00_1738;

																BgL_l1306z00_1737 = BgL_g1311z00_1735;
																BgL_tail1309z00_1738 = BgL_head1308z00_1734;
															BgL_zc3z04anonymousza31369ze3z87_1739:
																if (NULLP(BgL_l1306z00_1737))
																	{	/* SawJvm/jld.scm 49 */
																		BgL_arg1367z00_1731 = BgL_head1308z00_1734;
																	}
																else
																	{	/* SawJvm/jld.scm 49 */
																		obj_t BgL_newtail1310z00_1741;

																		{	/* SawJvm/jld.scm 49 */
																			obj_t BgL_arg1382z00_1743;

																			{	/* SawJvm/jld.scm 49 */
																				obj_t BgL_arg1383z00_1744;

																				BgL_arg1383z00_1744 =
																					CAR(((obj_t) BgL_l1306z00_1737));
																				BgL_arg1382z00_1743 =
																					BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00
																					(BgL_arg1383z00_1744);
																			}
																			{	/* SawJvm/jld.scm 49 */
																				obj_t BgL_res2180z00_2655;

																				BgL_res2180z00_2655 =
																					MAKE_YOUNG_PAIR(BgL_arg1382z00_1743,
																					BNIL);
																				BgL_newtail1310z00_1741 =
																					BgL_res2180z00_2655;
																			}
																		}
																		SET_CDR(BgL_tail1309z00_1738,
																			BgL_newtail1310z00_1741);
																		{	/* SawJvm/jld.scm 49 */
																			obj_t BgL_arg1381z00_1742;

																			BgL_arg1381z00_1742 =
																				CDR(((obj_t) BgL_l1306z00_1737));
																			{
																				obj_t BgL_tail1309z00_3498;
																				obj_t BgL_l1306z00_3497;

																				BgL_l1306z00_3497 = BgL_arg1381z00_1742;
																				BgL_tail1309z00_3498 =
																					BgL_newtail1310z00_1741;
																				BgL_tail1309z00_1738 =
																					BgL_tail1309z00_3498;
																				BgL_l1306z00_1737 = BgL_l1306z00_3497;
																				goto
																					BgL_zc3z04anonymousza31369ze3z87_1739;
																			}
																		}
																	}
															}
														}
													}
											}
											BgL_ozd2fileszd2_1722 =
												BGl_appendzd221011zd2zzsaw_jvm_ldz00
												(BgL_arg1367z00_1731,
												BGl_za2ozd2filesza2zd2zzengine_paramz00);
										}
										{	/* SawJvm/jld.scm 49 */
											obj_t BgL_allzd2objectszd2_1723;

											BgL_allzd2objectszd2_1723 =
												BGl_uniquez00zzsaw_jvm_ldz00
												(BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00
												(BgL_ozd2fileszd2_1722));
											{	/* SawJvm/jld.scm 51 */

												{	/* SawJvm/jld.scm 52 */
													obj_t BgL_list1353z00_1724;

													BgL_list1353z00_1724 =
														MAKE_YOUNG_PAIR(BGl_string2349z00zzsaw_jvm_ldz00,
														BNIL);
													BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
														BgL_list1353z00_1724);
												}
												{	/* SawJvm/jld.scm 53 */
													obj_t BgL_list1354z00_1725;

													{	/* SawJvm/jld.scm 53 */
														obj_t BgL_arg1357z00_1726;

														{	/* SawJvm/jld.scm 53 */
															obj_t BgL_arg1360z00_1727;

															BgL_arg1360z00_1727 =
																MAKE_YOUNG_PAIR
																(BGl_string2350z00zzsaw_jvm_ldz00, BNIL);
															BgL_arg1357z00_1726 =
																MAKE_YOUNG_PAIR(BgL_jarnamez00_1719,
																BgL_arg1360z00_1727);
														}
														BgL_list1354z00_1725 =
															MAKE_YOUNG_PAIR(BGl_string2351z00zzsaw_jvm_ldz00,
															BgL_arg1357z00_1726);
													}
													BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
														BgL_list1354z00_1725);
												}
												{	/* SawJvm/jld.scm 54 */
													obj_t BgL_list1361z00_1728;

													BgL_list1361z00_1728 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
													BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
														BgL_list1361z00_1728);
												}
												BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00
													(BgL_manifestz00_1721,
													BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00
													(BgL_ozd2fileszd2_1722), BgL_jarnamez00_1719,
													BgL_za7ipsza7_1720);
												BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(BgL_jarnamez00_1719,
													BgL_manifestz00_1721, BgL_allzd2objectszd2_1723);
								}}}}
							else
								{	/* SawJvm/jld.scm 47 */
									BFALSE;
								}
							{	/* SawJvm/jld.scm 61 */
								obj_t BgL_arg1386z00_1748;

								BgL_arg1386z00_1748 =
									BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00
									(BgL_linkzd2mainzd2modulez00_3);
								return
									BBOOL(BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00
									(BgL_targetz00_1718, BgL_arg1386z00_1748, BgL_jarnamez00_1719,
										BgL_za7ipsza7_1720));
							}
						}
					}
				}
			}
		}

	}



/* <@anonymous:1388>~0 */
	obj_t BGl_zc3z04anonymousza31388ze3ze70z60zzsaw_jvm_ldz00(obj_t
		BgL_l1305z00_1751)
	{
		{	/* SawJvm/jld.scm 45 */
			if (NULLP(BgL_l1305z00_1751))
				{	/* SawJvm/jld.scm 45 */
					return BNIL;
				}
			else
				{	/* SawJvm/jld.scm 45 */
					obj_t BgL_arg1394z00_1754;
					obj_t BgL_arg1396z00_1755;

					{	/* SawJvm/jld.scm 45 */
						obj_t BgL_arg1417z00_1756;

						BgL_arg1417z00_1756 = CAR(((obj_t) BgL_l1305z00_1751));
						BgL_arg1394z00_1754 =
							BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(BgL_arg1417z00_1756);
					}
					{	/* SawJvm/jld.scm 45 */
						obj_t BgL_arg1418z00_1757;

						BgL_arg1418z00_1757 = CDR(((obj_t) BgL_l1305z00_1751));
						BgL_arg1396z00_1755 =
							BGl_zc3z04anonymousza31388ze3ze70z60zzsaw_jvm_ldz00
							(BgL_arg1418z00_1757);
					}
					return bgl_append2(BgL_arg1394z00_1754, BgL_arg1396z00_1755);
				}
		}

	}



/* &jvm-ld */
	obj_t BGl_z62jvmzd2ldzb0zzsaw_jvm_ldz00(obj_t BgL_envz00_3212,
		obj_t BgL_linkzd2mainzd2modulez00_3213)
	{
		{	/* SawJvm/jld.scm 39 */
			return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BgL_linkzd2mainzd2modulez00_3213);
		}

	}



/* source->jvm-class */
	obj_t BGl_sourcezd2ze3jvmzd2classze3zzsaw_jvm_ldz00(obj_t BgL_sz00_4)
	{
		{	/* SawJvm/jld.scm 68 */
			{	/* SawJvm/jld.scm 69 */
				obj_t BgL_qz00_1761;

				BgL_qz00_1761 =
					BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_sz00_4);
				{	/* SawJvm/jld.scm 71 */
					obj_t BgL_arg1441z00_1762;

					if (STRINGP(BgL_qz00_1761))
						{	/* SawJvm/jld.scm 71 */
							BgL_arg1441z00_1762 =
								string_append(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
								(BgL_qz00_1761, (char) (((unsigned char) '.')),
									(char) (((unsigned char) '/'))),
								BGl_string2352z00zzsaw_jvm_ldz00);
						}
					else
						{	/* SawJvm/jld.scm 71 */
							BgL_arg1441z00_1762 =
								string_append(BGl_prefixz00zz__osz00(BgL_sz00_4),
								BGl_string2352z00zzsaw_jvm_ldz00);
						}
					return
						BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00
						(BgL_arg1441z00_1762);
				}
			}
		}

	}



/* find-jvm-mainclass */
	obj_t BGl_findzd2jvmzd2mainclassz00zzsaw_jvm_ldz00(obj_t
		BgL_linkzd2mainzd2modulez00_5)
	{
		{	/* SawJvm/jld.scm 78 */
			if (STRINGP(BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00))
				{	/* SawJvm/jld.scm 80 */
					return BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00;
				}
			else
				{	/* SawJvm/jld.scm 80 */
					if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* SawJvm/jld.scm 82 */
							return
								BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
								(BGl_za2moduleza2z00zzmodule_modulez00);
						}
					else
						{	/* SawJvm/jld.scm 82 */
							if (SYMBOLP(BgL_linkzd2mainzd2modulez00_5))
								{	/* SawJvm/jld.scm 84 */
									return
										BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
										(BgL_linkzd2mainzd2modulez00_5);
								}
							else
								{	/* SawJvm/jld.scm 84 */
									return
										BGl_errorz00zz__errorz00(BGl_string2353z00zzsaw_jvm_ldz00,
										BGl_string2354z00zzsaw_jvm_ldz00,
										BGl_string2355z00zzsaw_jvm_ldz00);
								}
						}
				}
		}

	}



/* library->zips */
	obj_t BGl_libraryzd2ze3za7ipsz96zzsaw_jvm_ldz00(obj_t BgL_libz00_6)
	{
		{	/* SawJvm/jld.scm 94 */
			{	/* SawJvm/jld.scm 95 */
				obj_t BgL_dirz00_1768;

				{	/* SawJvm/jld.scm 95 */
					bool_t BgL_test2520z00_3549;

					{	/* SawJvm/jld.scm 95 */
						bool_t BgL_res2188z00_2677;

						{	/* SawJvm/jld.scm 95 */
							obj_t BgL_string1z00_2662;

							BgL_string1z00_2662 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
							{	/* SawJvm/jld.scm 95 */
								long BgL_l1z00_2664;

								BgL_l1z00_2664 = STRING_LENGTH(BgL_string1z00_2662);
								if ((BgL_l1z00_2664 == ((long) 5)))
									{	/* SawJvm/jld.scm 95 */
										int BgL_arg1267z00_2667;

										{	/* SawJvm/jld.scm 95 */
											char *BgL_auxz00_3555;
											char *BgL_tmpz00_3553;

											BgL_auxz00_3555 =
												BSTRING_TO_STRING(BGl_string2356z00zzsaw_jvm_ldz00);
											BgL_tmpz00_3553 = BSTRING_TO_STRING(BgL_string1z00_2662);
											BgL_arg1267z00_2667 =
												memcmp(BgL_tmpz00_3553, BgL_auxz00_3555,
												BgL_l1z00_2664);
										}
										BgL_res2188z00_2677 =
											((long) (BgL_arg1267z00_2667) == ((long) 0));
									}
								else
									{	/* SawJvm/jld.scm 95 */
										BgL_res2188z00_2677 = ((bool_t) 0);
									}
							}
						}
						BgL_test2520z00_3549 = BgL_res2188z00_2677;
					}
					if (BgL_test2520z00_3549)
						{	/* SawJvm/jld.scm 96 */
							obj_t BgL_arg1552z00_1802;

							BgL_arg1552z00_1802 =
								BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
							BgL_dirz00_1768 =
								MAKE_YOUNG_PAIR(BgL_arg1552z00_1802,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
						}
					else
						{	/* SawJvm/jld.scm 95 */
							BgL_dirz00_1768 = BGl_za2libzd2dirza2zd2zzengine_paramz00;
						}
				}
				{	/* SawJvm/jld.scm 95 */
					obj_t BgL_bez00_1769;

					{	/* SawJvm/jld.scm 98 */
						obj_t BgL_arg1540z00_1800;

						BgL_arg1540z00_1800 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_bez00_1769 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1540z00_1800)))->BgL_srfi0z00);
					}
					{	/* SawJvm/jld.scm 98 */
						obj_t BgL_nz00_1770;

						{	/* SawJvm/jld.scm 100 */
							obj_t BgL_arg1536z00_1798;

							{	/* SawJvm/jld.scm 100 */
								bool_t BgL_test2522z00_3565;

								if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
									{	/* SawJvm/jld.scm 100 */
										if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
											{	/* SawJvm/jld.scm 100 */
												BgL_test2522z00_3565 = ((bool_t) 0);
											}
										else
											{	/* SawJvm/jld.scm 100 */
												BgL_test2522z00_3565 = ((bool_t) 1);
											}
									}
								else
									{	/* SawJvm/jld.scm 100 */
										BgL_test2522z00_3565 = ((bool_t) 0);
									}
								if (BgL_test2522z00_3565)
									{	/* SawJvm/jld.scm 100 */
										BgL_arg1536z00_1798 = BGl_string2357z00zzsaw_jvm_ldz00;
									}
								else
									{	/* SawJvm/jld.scm 100 */
										BgL_arg1536z00_1798 = BGl_string2358z00zzsaw_jvm_ldz00;
									}
							}
							BgL_nz00_1770 =
								BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_libz00_6,
								BgL_arg1536z00_1798, BgL_bez00_1769);
						}
						{	/* SawJvm/jld.scm 99 */
							obj_t BgL_fz00_1771;

							BgL_fz00_1771 =
								BGl_findzd2filezf2pathz20zz__osz00
								(BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_nz00_1770,
									BgL_bez00_1769), BgL_dirz00_1768);
							{	/* SawJvm/jld.scm 103 */
								obj_t BgL_nez00_1772;

								{	/* SawJvm/jld.scm 106 */
									obj_t BgL_arg1518z00_1794;

									{	/* SawJvm/jld.scm 106 */
										obj_t BgL_arg1521z00_1795;

										{	/* SawJvm/jld.scm 106 */
											bool_t BgL_test2525z00_3573;

											if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
												{	/* SawJvm/jld.scm 106 */
													if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
														{	/* SawJvm/jld.scm 106 */
															BgL_test2525z00_3573 = ((bool_t) 0);
														}
													else
														{	/* SawJvm/jld.scm 106 */
															BgL_test2525z00_3573 = ((bool_t) 1);
														}
												}
											else
												{	/* SawJvm/jld.scm 106 */
													BgL_test2525z00_3573 = ((bool_t) 0);
												}
											if (BgL_test2525z00_3573)
												{	/* SawJvm/jld.scm 106 */
													BgL_arg1521z00_1795 =
														BGl_string2359z00zzsaw_jvm_ldz00;
												}
											else
												{	/* SawJvm/jld.scm 106 */
													BgL_arg1521z00_1795 =
														BGl_string2360z00zzsaw_jvm_ldz00;
												}
										}
										BgL_arg1518z00_1794 =
											BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_libz00_6,
											BgL_arg1521z00_1795, BgL_bez00_1769);
									}
									BgL_nez00_1772 =
										BGl_makezd2sharedzd2libzd2namezd2zz__osz00
										(BgL_arg1518z00_1794, BgL_bez00_1769);
								}
								{	/* SawJvm/jld.scm 104 */
									obj_t BgL_fez00_1773;

									BgL_fez00_1773 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_nez00_1772,
										BgL_dirz00_1768);
									{	/* SawJvm/jld.scm 108 */

										{	/* SawJvm/jld.scm 110 */
											bool_t BgL_test2528z00_3581;

											if (STRINGP(BgL_fz00_1771))
												{	/* SawJvm/jld.scm 110 */
													BgL_test2528z00_3581 = STRINGP(BgL_fez00_1773);
												}
											else
												{	/* SawJvm/jld.scm 110 */
													BgL_test2528z00_3581 = ((bool_t) 0);
												}
											if (BgL_test2528z00_3581)
												{	/* SawJvm/jld.scm 111 */
													obj_t BgL_list1454z00_1776;

													{	/* SawJvm/jld.scm 111 */
														obj_t BgL_arg1461z00_1777;

														BgL_arg1461z00_1777 =
															MAKE_YOUNG_PAIR(BgL_fez00_1773, BNIL);
														BgL_list1454z00_1776 =
															MAKE_YOUNG_PAIR(BgL_fz00_1771,
															BgL_arg1461z00_1777);
													}
													return BgL_list1454z00_1776;
												}
											else
												{	/* SawJvm/jld.scm 110 */
													if (STRINGP(BgL_fz00_1771))
														{	/* SawJvm/jld.scm 112 */
															{	/* SawJvm/jld.scm 115 */
																obj_t BgL_arg1464z00_1779;

																{	/* SawJvm/jld.scm 115 */
																	obj_t BgL_arg1477z00_1783;

																	{	/* SawJvm/jld.scm 115 */
																		bool_t BgL_test2531z00_3589;

																		if (CBOOL
																			(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
																			{	/* SawJvm/jld.scm 115 */
																				if (CBOOL
																					(BGl_za2purifyza2z00zzengine_paramz00))
																					{	/* SawJvm/jld.scm 115 */
																						BgL_test2531z00_3589 = ((bool_t) 0);
																					}
																				else
																					{	/* SawJvm/jld.scm 115 */
																						BgL_test2531z00_3589 = ((bool_t) 1);
																					}
																			}
																		else
																			{	/* SawJvm/jld.scm 115 */
																				BgL_test2531z00_3589 = ((bool_t) 0);
																			}
																		if (BgL_test2531z00_3589)
																			{	/* SawJvm/jld.scm 115 */
																				BgL_arg1477z00_1783 =
																					BGl_string2359z00zzsaw_jvm_ldz00;
																			}
																		else
																			{	/* SawJvm/jld.scm 115 */
																				BgL_arg1477z00_1783 =
																					BGl_string2360z00zzsaw_jvm_ldz00;
																			}
																	}
																	{	/* SawJvm/jld.scm 114 */
																		obj_t BgL_list1478z00_1784;

																		{	/* SawJvm/jld.scm 114 */
																			obj_t BgL_arg1489z00_1785;

																			BgL_arg1489z00_1785 =
																				MAKE_YOUNG_PAIR(BgL_nez00_1772, BNIL);
																			BgL_list1478z00_1784 =
																				MAKE_YOUNG_PAIR(BgL_arg1477z00_1783,
																				BgL_arg1489z00_1785);
																		}
																		BgL_arg1464z00_1779 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string2361z00zzsaw_jvm_ldz00,
																			BgL_list1478z00_1784);
																	}
																}
																{	/* SawJvm/jld.scm 113 */
																	obj_t BgL_list1465z00_1780;

																	{	/* SawJvm/jld.scm 113 */
																		obj_t BgL_arg1474z00_1781;

																		{	/* SawJvm/jld.scm 113 */
																			obj_t BgL_arg1476z00_1782;

																			BgL_arg1476z00_1782 =
																				MAKE_YOUNG_PAIR(BgL_libz00_6, BNIL);
																			BgL_arg1474z00_1781 =
																				MAKE_YOUNG_PAIR(BgL_arg1464z00_1779,
																				BgL_arg1476z00_1782);
																		}
																		BgL_list1465z00_1780 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2362z00zzsaw_jvm_ldz00,
																			BgL_arg1474z00_1781);
																	}
																	BGl_warningz00zz__errorz00
																		(BgL_list1465z00_1780);
																}
															}
															{	/* SawJvm/jld.scm 118 */
																obj_t BgL_list1491z00_1787;

																BgL_list1491z00_1787 =
																	MAKE_YOUNG_PAIR(BgL_fz00_1771, BNIL);
																return BgL_list1491z00_1787;
															}
														}
													else
														{	/* SawJvm/jld.scm 112 */
															{	/* SawJvm/jld.scm 121 */
																obj_t BgL_arg1493z00_1788;

																{	/* SawJvm/jld.scm 121 */
																	obj_t BgL_list1498z00_1792;

																	BgL_list1498z00_1792 =
																		MAKE_YOUNG_PAIR(BgL_nz00_1770, BNIL);
																	BgL_arg1493z00_1788 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string2363z00zzsaw_jvm_ldz00,
																		BgL_list1498z00_1792);
																}
																{	/* SawJvm/jld.scm 120 */
																	obj_t BgL_list1494z00_1789;

																	{	/* SawJvm/jld.scm 120 */
																		obj_t BgL_arg1495z00_1790;

																		{	/* SawJvm/jld.scm 120 */
																			obj_t BgL_arg1497z00_1791;

																			BgL_arg1497z00_1791 =
																				MAKE_YOUNG_PAIR(BgL_libz00_6, BNIL);
																			BgL_arg1495z00_1790 =
																				MAKE_YOUNG_PAIR(BgL_arg1493z00_1788,
																				BgL_arg1497z00_1791);
																		}
																		BgL_list1494z00_1789 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2362z00zzsaw_jvm_ldz00,
																			BgL_arg1495z00_1790);
																	}
																	BGl_warningz00zz__errorz00
																		(BgL_list1494z00_1789);
																}
															}
															return BNIL;
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



/* find-jvm-main */
	obj_t BGl_findzd2jvmzd2mainz00zzsaw_jvm_ldz00(obj_t BgL_ozd2fileszd2_7)
	{
		{	/* SawJvm/jld.scm 128 */
			{	/* SawJvm/jld.scm 129 */
				bool_t BgL_test2534z00_3608;

				{	/* SawJvm/jld.scm 129 */
					bool_t BgL_res2195z00_2687;

					{	/* SawJvm/jld.scm 129 */
						obj_t BgL_objz00_2686;

						BgL_objz00_2686 = BGl_za2mainza2z00zzmodule_modulez00;
						BgL_res2195z00_2687 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_2686,
							BGl_globalz00zzast_varz00);
					}
					BgL_test2534z00_3608 = BgL_res2195z00_2687;
				}
				if (BgL_test2534z00_3608)
					{	/* SawJvm/jld.scm 129 */
						return
							BGl_prefixz00zz__osz00(CAR
							(BGl_za2srczd2filesza2zd2zzengine_paramz00));
					}
				else
					{
						obj_t BgL_ozd2fileszd2_1806;

						BgL_ozd2fileszd2_1806 = BgL_ozd2fileszd2_7;
					BgL_zc3z04anonymousza31559ze3z87_1807:
						if (NULLP(BgL_ozd2fileszd2_1806))
							{	/* SawJvm/jld.scm 132 */
								return
									BGl_errorz00zz__errorz00(BGl_string2364z00zzsaw_jvm_ldz00,
									BGl_string2365z00zzsaw_jvm_ldz00, BgL_ozd2fileszd2_1806);
							}
						else
							{	/* SawJvm/jld.scm 134 */
								obj_t BgL_prefz00_1809;

								{	/* SawJvm/jld.scm 134 */
									obj_t BgL_arg1624z00_1855;

									{	/* SawJvm/jld.scm 134 */
										obj_t BgL_arg1626z00_1856;

										BgL_arg1626z00_1856 = CAR(((obj_t) BgL_ozd2fileszd2_1806));
										BgL_arg1624z00_1855 =
											BGl_prefixz00zz__osz00(BgL_arg1626z00_1856);
									}
									BgL_prefz00_1809 =
										BGl_unprofzd2srczd2namez00zzengine_linkz00
										(BgL_arg1624z00_1855);
								}
								{	/* SawJvm/jld.scm 134 */
									obj_t BgL_bprefz00_1810;

									BgL_bprefz00_1810 =
										BGl_basenamez00zz__osz00(BgL_prefz00_1809);
									{	/* SawJvm/jld.scm 135 */
										obj_t BgL_scmzd2filezd2_1811;

										BgL_scmzd2filezd2_1811 =
											BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_1809,
											BgL_bprefz00_1810);
										{	/* SawJvm/jld.scm 136 */

											{	/* SawJvm/jld.scm 137 */
												bool_t BgL_test2536z00_3621;

												if (STRINGP(BgL_scmzd2filezd2_1811))
													{	/* SawJvm/jld.scm 137 */
														if (fexists(BSTRING_TO_STRING
																(BgL_scmzd2filezd2_1811)))
															{	/* SawJvm/jld.scm 138 */
																BgL_test2536z00_3621 = ((bool_t) 0);
															}
														else
															{	/* SawJvm/jld.scm 138 */
																BgL_test2536z00_3621 = ((bool_t) 1);
															}
													}
												else
													{	/* SawJvm/jld.scm 137 */
														BgL_test2536z00_3621 = ((bool_t) 1);
													}
												if (BgL_test2536z00_3621)
													{	/* SawJvm/jld.scm 139 */
														obj_t BgL_arg1564z00_1815;

														BgL_arg1564z00_1815 =
															CDR(((obj_t) BgL_ozd2fileszd2_1806));
														{
															obj_t BgL_ozd2fileszd2_3629;

															BgL_ozd2fileszd2_3629 = BgL_arg1564z00_1815;
															BgL_ozd2fileszd2_1806 = BgL_ozd2fileszd2_3629;
															goto BgL_zc3z04anonymousza31559ze3z87_1807;
														}
													}
												else
													{	/* SawJvm/jld.scm 140 */
														obj_t BgL__ortest_1107z00_1816;

														BgL__ortest_1107z00_1816 =
															BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
															(BgL_scmzd2filezd2_1811,
															BGl_proc2366z00zzsaw_jvm_ldz00);
														if (CBOOL(BgL__ortest_1107z00_1816))
															{	/* SawJvm/jld.scm 140 */
																return BgL__ortest_1107z00_1816;
															}
														else
															{	/* SawJvm/jld.scm 146 */
																obj_t BgL_arg1565z00_1817;

																BgL_arg1565z00_1817 =
																	CDR(((obj_t) BgL_ozd2fileszd2_1806));
																{
																	obj_t BgL_ozd2fileszd2_3635;

																	BgL_ozd2fileszd2_3635 = BgL_arg1565z00_1817;
																	BgL_ozd2fileszd2_1806 = BgL_ozd2fileszd2_3635;
																	goto BgL_zc3z04anonymousza31559ze3z87_1807;
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



/* &<@anonymous:1574> */
	obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3215)
	{
		{	/* SawJvm/jld.scm 141 */
			{	/* SawJvm/jld.scm 142 */
				obj_t BgL_ezd2105zd2_3266;

				BgL_ezd2105zd2_3266 = BGl_compilerzd2readzd2zzread_readerz00(BNIL);
				if (PAIRP(BgL_ezd2105zd2_3266))
					{	/* SawJvm/jld.scm 141 */
						obj_t BgL_cdrzd2109zd2_3267;

						BgL_cdrzd2109zd2_3267 = CDR(BgL_ezd2105zd2_3266);
						if ((CAR(BgL_ezd2105zd2_3266) == CNST_TABLE_REF(((long) 0))))
							{	/* SawJvm/jld.scm 141 */
								if (PAIRP(BgL_cdrzd2109zd2_3267))
									{
										obj_t BgL_gzd2114zd2_3269;

										BgL_gzd2114zd2_3269 = CDR(BgL_cdrzd2109zd2_3267);
									BgL_zc3z04anonymousza31583ze3z87_3268:
										if (PAIRP(BgL_gzd2114zd2_3269))
											{	/* SawJvm/jld.scm 141 */
												obj_t BgL_carzd2116zd2_3270;

												BgL_carzd2116zd2_3270 = CAR(BgL_gzd2114zd2_3269);
												if (PAIRP(BgL_carzd2116zd2_3270))
													{	/* SawJvm/jld.scm 141 */
														obj_t BgL_cdrzd2119zd2_3271;

														BgL_cdrzd2119zd2_3271 = CDR(BgL_carzd2116zd2_3270);
														if (
															(CAR(BgL_carzd2116zd2_3270) ==
																CNST_TABLE_REF(((long) 1))))
															{	/* SawJvm/jld.scm 141 */
																if (PAIRP(BgL_cdrzd2119zd2_3271))
																	{	/* SawJvm/jld.scm 141 */
																		if (NULLP(CDR(BgL_cdrzd2119zd2_3271)))
																			{	/* SawJvm/jld.scm 141 */
																				obj_t BgL_arg1597z00_3272;

																				BgL_arg1597z00_3272 =
																					CAR(((obj_t) BgL_cdrzd2109zd2_3267));
																				return
																					BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
																					(BgL_arg1597z00_3272);
																			}
																		else
																			{
																				obj_t BgL_gzd2114zd2_3664;

																				BgL_gzd2114zd2_3664 =
																					CDR(BgL_gzd2114zd2_3269);
																				BgL_gzd2114zd2_3269 =
																					BgL_gzd2114zd2_3664;
																				goto
																					BgL_zc3z04anonymousza31583ze3z87_3268;
																			}
																	}
																else
																	{
																		obj_t BgL_gzd2114zd2_3666;

																		BgL_gzd2114zd2_3666 =
																			CDR(BgL_gzd2114zd2_3269);
																		BgL_gzd2114zd2_3269 = BgL_gzd2114zd2_3666;
																		goto BgL_zc3z04anonymousza31583ze3z87_3268;
																	}
															}
														else
															{
																obj_t BgL_gzd2114zd2_3668;

																BgL_gzd2114zd2_3668 = CDR(BgL_gzd2114zd2_3269);
																BgL_gzd2114zd2_3269 = BgL_gzd2114zd2_3668;
																goto BgL_zc3z04anonymousza31583ze3z87_3268;
															}
													}
												else
													{
														obj_t BgL_gzd2114zd2_3670;

														BgL_gzd2114zd2_3670 = CDR(BgL_gzd2114zd2_3269);
														BgL_gzd2114zd2_3269 = BgL_gzd2114zd2_3670;
														goto BgL_zc3z04anonymousza31583ze3z87_3268;
													}
											}
										else
											{	/* SawJvm/jld.scm 141 */
												return BFALSE;
											}
									}
								else
									{	/* SawJvm/jld.scm 141 */
										return BFALSE;
									}
							}
						else
							{	/* SawJvm/jld.scm 141 */
								return BFALSE;
							}
					}
				else
					{	/* SawJvm/jld.scm 141 */
						return BFALSE;
					}
			}
		}

	}



/* objects->classes */
	obj_t BGl_objectszd2ze3classesz31zzsaw_jvm_ldz00(obj_t BgL_objectsz00_8)
	{
		{	/* SawJvm/jld.scm 151 */
			{
				obj_t BgL_sourcez00_1966;

				{
					obj_t BgL_objectsz00_1864;
					obj_t BgL_classesz00_1865;

					BgL_objectsz00_1864 = BgL_objectsz00_8;
					BgL_classesz00_1865 = BNIL;
				BgL_zc3z04anonymousza31627ze3z87_1866:
					if (NULLP(BgL_objectsz00_1864))
						{	/* SawJvm/jld.scm 220 */
							return BgL_classesz00_1865;
						}
					else
						{	/* SawJvm/jld.scm 222 */
							obj_t BgL_objectz00_1868;

							BgL_objectz00_1868 = CAR(((obj_t) BgL_objectsz00_1864));
							{	/* SawJvm/jld.scm 222 */
								obj_t BgL_prefz00_1869;

								BgL_prefz00_1869 =
									BGl_unprofzd2srczd2namez00zzengine_linkz00
									(BGl_prefixz00zz__osz00(BgL_objectz00_1868));
								{	/* SawJvm/jld.scm 223 */
									obj_t BgL_bprefz00_1870;

									BgL_bprefz00_1870 =
										BGl_basenamez00zz__osz00(BgL_prefz00_1869);
									{	/* SawJvm/jld.scm 224 */
										obj_t BgL_scmzd2filezd2_1871;

										BgL_scmzd2filezd2_1871 =
											BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_1869,
											BgL_bprefz00_1870);
										{	/* SawJvm/jld.scm 225 */

											{	/* SawJvm/jld.scm 226 */
												bool_t BgL_test2549z00_3681;

												if (STRINGP(BgL_scmzd2filezd2_1871))
													{	/* SawJvm/jld.scm 226 */
														BgL_test2549z00_3681 =
															fexists(BSTRING_TO_STRING
															(BgL_scmzd2filezd2_1871));
													}
												else
													{	/* SawJvm/jld.scm 226 */
														BgL_test2549z00_3681 = ((bool_t) 0);
													}
												if (BgL_test2549z00_3681)
													{	/* SawJvm/jld.scm 227 */
														obj_t BgL_arg1631z00_1874;
														obj_t BgL_arg1634z00_1875;

														BgL_arg1631z00_1874 =
															CDR(((obj_t) BgL_objectsz00_1864));
														{	/* SawJvm/jld.scm 228 */
															obj_t BgL_tmpz00_3688;

															{	/* SawJvm/jld.scm 229 */
																obj_t BgL_auxz00_3689;

																BgL_sourcez00_1966 = BgL_scmzd2filezd2_1871;
																{	/* SawJvm/jld.scm 201 */
																	bool_t BgL_test2551z00_3690;

																	{	/* SawJvm/jld.scm 201 */
																		bool_t BgL_test2552z00_3691;

																		{	/* SawJvm/jld.scm 201 */
																			obj_t BgL_arg1784z00_2008;

																			BgL_arg1784z00_2008 =
																				BGl_suffixz00zz__osz00
																				(BgL_sourcez00_1966);
																			{	/* SawJvm/jld.scm 201 */
																				bool_t BgL_res2236z00_2803;

																				{	/* SawJvm/jld.scm 201 */
																					long BgL_l1z00_2790;

																					BgL_l1z00_2790 =
																						STRING_LENGTH(BgL_arg1784z00_2008);
																					if ((BgL_l1z00_2790 == ((long) 3)))
																						{	/* SawJvm/jld.scm 201 */
																							int BgL_arg1267z00_2793;

																							{	/* SawJvm/jld.scm 201 */
																								char *BgL_auxz00_3698;
																								char *BgL_tmpz00_3696;

																								BgL_auxz00_3698 =
																									BSTRING_TO_STRING
																									(BGl_string2367z00zzsaw_jvm_ldz00);
																								BgL_tmpz00_3696 =
																									BSTRING_TO_STRING
																									(BgL_arg1784z00_2008);
																								BgL_arg1267z00_2793 =
																									memcmp(BgL_tmpz00_3696,
																									BgL_auxz00_3698,
																									BgL_l1z00_2790);
																							}
																							BgL_res2236z00_2803 =
																								(
																								(long) (BgL_arg1267z00_2793) ==
																								((long) 0));
																						}
																					else
																						{	/* SawJvm/jld.scm 201 */
																							BgL_res2236z00_2803 =
																								((bool_t) 0);
																						}
																				}
																				BgL_test2552z00_3691 =
																					BgL_res2236z00_2803;
																			}
																		}
																		if (BgL_test2552z00_3691)
																			{	/* SawJvm/jld.scm 201 */
																				BgL_test2551z00_3690 = ((bool_t) 0);
																			}
																		else
																			{	/* SawJvm/jld.scm 201 */
																				BgL_test2551z00_3690 =
																					fexists(BSTRING_TO_STRING
																					(BgL_sourcez00_1966));
																			}
																	}
																	if (BgL_test2551z00_3690)
																		{	/* SawJvm/jld.scm 201 */
																			BgL_auxz00_3689 =
																				BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
																				(BgL_sourcez00_1966,
																				BGl_proc2368z00zzsaw_jvm_ldz00);
																		}
																	else
																		{	/* SawJvm/jld.scm 201 */
																			BgL_auxz00_3689 = BNIL;
																		}
																}
																BgL_tmpz00_3688 =
																	BGl_appendzd221011zd2zzsaw_jvm_ldz00
																	(BgL_auxz00_3689, BgL_classesz00_1865);
															}
															BgL_arg1634z00_1875 =
																MAKE_YOUNG_PAIR(BgL_objectz00_1868,
																BgL_tmpz00_3688);
														}
														{
															obj_t BgL_classesz00_3709;
															obj_t BgL_objectsz00_3708;

															BgL_objectsz00_3708 = BgL_arg1631z00_1874;
															BgL_classesz00_3709 = BgL_arg1634z00_1875;
															BgL_classesz00_1865 = BgL_classesz00_3709;
															BgL_objectsz00_1864 = BgL_objectsz00_3708;
															goto BgL_zc3z04anonymousza31627ze3z87_1866;
														}
													}
												else
													{	/* SawJvm/jld.scm 230 */
														obj_t BgL_arg1641z00_1878;
														obj_t BgL_arg1644z00_1879;

														BgL_arg1641z00_1878 =
															CDR(((obj_t) BgL_objectsz00_1864));
														BgL_arg1644z00_1879 =
															MAKE_YOUNG_PAIR(BgL_objectz00_1868,
															BgL_classesz00_1865);
														{
															obj_t BgL_classesz00_3714;
															obj_t BgL_objectsz00_3713;

															BgL_objectsz00_3713 = BgL_arg1641z00_1878;
															BgL_classesz00_3714 = BgL_arg1644z00_1879;
															BgL_classesz00_1865 = BgL_classesz00_3714;
															BgL_objectsz00_1864 = BgL_objectsz00_3713;
															goto BgL_zc3z04anonymousza31627ze3z87_1866;
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



/* &<@anonymous:1747> */
	obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3219)
	{
		{	/* SawJvm/jld.scm 204 */
			return BGl_zc3z04exitza31748ze3ze70z60zzsaw_jvm_ldz00();
		}

	}



/* <@exit:1748>~0 */
	obj_t BGl_zc3z04exitza31748ze3ze70z60zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 205 */
			{
				obj_t BgL_idz00_1883;
				obj_t BgL_modz00_1959;
				obj_t BgL_modz00_1909;
				obj_t BgL_basez00_1910;
				obj_t BgL_clausesz00_1911;
				jmp_buf_t jmpbuf;
				void *BgL_an_exit1109z00_1975;

				if (SET_EXIT(BgL_an_exit1109z00_1975))
					{
						return BGL_EXIT_VALUE();
					}
				else
					{
#if( SIGSETJMP_SAVESIGS == 0 )
						bgl_restore_signal_handlers();
#endif

						BgL_an_exit1109z00_1975 = (void *) jmpbuf;
						{	/* SawJvm/jld.scm 205 */

							PUSH_EXIT(BgL_an_exit1109z00_1975, ((long) 1));
							{	/* SawJvm/jld.scm 205 */
								obj_t BgL_an_exitd1110z00_1976;

								BgL_an_exitd1110z00_1976 = ((obj_t) (&exitd));
								{	/* SawJvm/jld.scm 206 */
									obj_t BgL_res1112z00_1979;

									{	/* SawJvm/jld.scm 206 */
										obj_t BgL_mz00_1980;

										{	/* SawJvm/jld.scm 207 */
											obj_t BgL_zc3z04anonymousza31779ze3z87_3216;

											BgL_zc3z04anonymousza31779ze3z87_3216 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_ldz00,
												(int) (((long) 1)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31779ze3z87_3216,
												(int) (((long) 0)), BgL_an_exitd1110z00_1976);
											BgL_mz00_1980 =
												BGl_withzd2exceptionzd2handlerz00zz__errorz00
												(BgL_zc3z04anonymousza31779ze3z87_3216,
												BGl_proc2371z00zzsaw_jvm_ldz00);
										}
										if (PAIRP(BgL_mz00_1980))
											{	/* SawJvm/jld.scm 209 */
												obj_t BgL_cdrzd2161zd2_1987;

												BgL_cdrzd2161zd2_1987 = CDR(BgL_mz00_1980);
												if ((CAR(BgL_mz00_1980) == CNST_TABLE_REF(((long) 0))))
													{	/* SawJvm/jld.scm 209 */
														if (PAIRP(BgL_cdrzd2161zd2_1987))
															{	/* SawJvm/jld.scm 209 */
																obj_t BgL_arg1759z00_1991;
																obj_t BgL_arg1760z00_1992;

																BgL_arg1759z00_1991 =
																	CAR(BgL_cdrzd2161zd2_1987);
																BgL_arg1760z00_1992 =
																	CDR(BgL_cdrzd2161zd2_1987);
																BgL_modz00_1909 = BgL_arg1759z00_1991;
																{	/* SawJvm/jld.scm 212 */
																	obj_t BgL_auxz00_3812;

																	BgL_modz00_1959 = BgL_arg1759z00_1991;
																	{	/* SawJvm/jld.scm 193 */
																		obj_t BgL_dz00_1961;

																		BgL_dz00_1961 =
																			BGl_dirnamez00zz__osz00
																			(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																			(BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
																				(BgL_modz00_1959),
																				(char) (((unsigned char) '.')),
																				FILE_SEPARATOR));
																		{	/* SawJvm/jld.scm 197 */
																			bool_t BgL_test2572z00_3817;

																			{	/* SawJvm/jld.scm 197 */
																				bool_t BgL_res2231z00_2787;

																				{	/* SawJvm/jld.scm 197 */
																					long BgL_l1z00_2774;

																					BgL_l1z00_2774 =
																						STRING_LENGTH(BgL_dz00_1961);
																					if ((BgL_l1z00_2774 == ((long) 1)))
																						{	/* SawJvm/jld.scm 197 */
																							int BgL_arg1267z00_2777;

																							{	/* SawJvm/jld.scm 197 */
																								char *BgL_auxz00_3823;
																								char *BgL_tmpz00_3821;

																								BgL_auxz00_3823 =
																									BSTRING_TO_STRING
																									(BGl_string2369z00zzsaw_jvm_ldz00);
																								BgL_tmpz00_3821 =
																									BSTRING_TO_STRING
																									(BgL_dz00_1961);
																								BgL_arg1267z00_2777 =
																									memcmp(BgL_tmpz00_3821,
																									BgL_auxz00_3823,
																									BgL_l1z00_2774);
																							}
																							BgL_res2231z00_2787 =
																								(
																								(long) (BgL_arg1267z00_2777) ==
																								((long) 0));
																						}
																					else
																						{	/* SawJvm/jld.scm 197 */
																							BgL_res2231z00_2787 =
																								((bool_t) 0);
																						}
																				}
																				BgL_test2572z00_3817 =
																					BgL_res2231z00_2787;
																			}
																			if (BgL_test2572z00_3817)
																				{	/* SawJvm/jld.scm 197 */
																					BgL_auxz00_3812 =
																						BGl_string2370z00zzsaw_jvm_ldz00;
																				}
																			else
																				{	/* SawJvm/jld.scm 197 */
																					BgL_auxz00_3812 = BgL_dz00_1961;
																				}
																		}
																	}
																	BgL_basez00_1910 =
																		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00
																		(BgL_auxz00_3812);
																}
																BgL_clausesz00_1911 = BgL_arg1760z00_1992;
																{
																	obj_t BgL_clausesz00_1915;
																	obj_t BgL_classesz00_1916;

																	BgL_clausesz00_1915 = BgL_clausesz00_1911;
																	BgL_classesz00_1916 = BNIL;
																BgL_zc3z04anonymousza31698ze3z87_1917:
																	if (NULLP(BgL_clausesz00_1915))
																		{	/* SawJvm/jld.scm 168 */
																			BgL_res1112z00_1979 = BgL_classesz00_1916;
																		}
																	else
																		{
																			obj_t BgL_statexpz00_1919;

																			{	/* SawJvm/jld.scm 170 */
																				obj_t BgL_ezd2132zd2_1922;

																				BgL_ezd2132zd2_1922 =
																					CAR(((obj_t) BgL_clausesz00_1915));
																				if (PAIRP(BgL_ezd2132zd2_1922))
																					{	/* SawJvm/jld.scm 170 */
																						obj_t BgL_carzd2135zd2_1924;
																						obj_t BgL_cdrzd2136zd2_1925;

																						BgL_carzd2135zd2_1924 =
																							CAR(BgL_ezd2132zd2_1922);
																						BgL_cdrzd2136zd2_1925 =
																							CDR(BgL_ezd2132zd2_1922);
																						if (
																							(BgL_carzd2135zd2_1924 ==
																								CNST_TABLE_REF(((long) 6))))
																							{	/* SawJvm/jld.scm 170 */
																								BgL_statexpz00_1919 =
																									BgL_cdrzd2136zd2_1925;
																							BgL_tagzd2130zd2_1920:
																								{
																									obj_t BgL_statexpz00_1929;
																									obj_t BgL_classesz00_1930;

																									BgL_statexpz00_1929 =
																										BgL_statexpz00_1919;
																									BgL_classesz00_1930 =
																										BgL_classesz00_1916;
																								BgL_zc3z04anonymousza31703ze3z87_1931:
																									if (NULLP
																										(BgL_statexpz00_1929))
																										{	/* SawJvm/jld.scm 175 */
																											obj_t BgL_arg1707z00_1933;

																											BgL_arg1707z00_1933 =
																												CDR(
																												((obj_t)
																													BgL_clausesz00_1915));
																											{
																												obj_t
																													BgL_classesz00_3752;
																												obj_t
																													BgL_clausesz00_3751;
																												BgL_clausesz00_3751 =
																													BgL_arg1707z00_1933;
																												BgL_classesz00_3752 =
																													BgL_classesz00_1930;
																												BgL_classesz00_1916 =
																													BgL_classesz00_3752;
																												BgL_clausesz00_1915 =
																													BgL_clausesz00_3751;
																												goto
																													BgL_zc3z04anonymousza31698ze3z87_1917;
																											}
																										}
																									else
																										{
																											obj_t BgL_identz00_1934;

																											{	/* SawJvm/jld.scm 177 */
																												obj_t
																													BgL_ezd2141zd2_1937;
																												BgL_ezd2141zd2_1937 =
																													CAR(((obj_t)
																														BgL_statexpz00_1929));
																												if (PAIRP
																													(BgL_ezd2141zd2_1937))
																													{	/* SawJvm/jld.scm 177 */
																														obj_t
																															BgL_carzd2144zd2_1939;
																														obj_t
																															BgL_cdrzd2145zd2_1940;
																														BgL_carzd2144zd2_1939
																															=
																															CAR
																															(BgL_ezd2141zd2_1937);
																														BgL_cdrzd2145zd2_1940
																															=
																															CDR
																															(BgL_ezd2141zd2_1937);
																														{

																															if (
																																(BgL_carzd2144zd2_1939
																																	==
																																	CNST_TABLE_REF
																																	(((long) 2))))
																																{	/* SawJvm/jld.scm 177 */
																																BgL_kapzd2146zd2_1941:
																																	if (PAIRP
																																		(BgL_cdrzd2145zd2_1940))
																																		{	/* SawJvm/jld.scm 177 */
																																			BgL_identz00_1934
																																				=
																																				CAR
																																				(BgL_cdrzd2145zd2_1940);
																																			{	/* SawJvm/jld.scm 180 */
																																				obj_t
																																					BgL_idz00_1949;
																																				BgL_idz00_1883
																																					=
																																					BgL_identz00_1934;
																																				{	/* SawJvm/jld.scm 153 */
																																					obj_t
																																						BgL_stringz00_1885;
																																					{	/* SawJvm/jld.scm 153 */
																																						obj_t
																																							BgL_res2205z00_2716;
																																						{	/* SawJvm/jld.scm 153 */
																																							obj_t
																																								BgL_arg1466z00_2715;
																																							BgL_arg1466z00_2715
																																								=
																																								SYMBOL_TO_STRING
																																								(
																																								((obj_t) BgL_idz00_1883));
																																							BgL_res2205z00_2716
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg1466z00_2715);
																																						}
																																						BgL_stringz00_1885
																																							=
																																							BgL_res2205z00_2716;
																																					}
																																					{	/* SawJvm/jld.scm 153 */
																																						long
																																							BgL_lenz00_1886;
																																						BgL_lenz00_1886
																																							=
																																							STRING_LENGTH
																																							(BgL_stringz00_1885);
																																						{	/* SawJvm/jld.scm 154 */

																																							{
																																								long
																																									BgL_walkerz00_1888;
																																								BgL_walkerz00_1888
																																									=
																																									(
																																									(long)
																																									0);
																																							BgL_zc3z04anonymousza31654ze3z87_1889:
																																								if ((BgL_walkerz00_1888 == BgL_lenz00_1886))
																																									{	/* SawJvm/jld.scm 157 */
																																										BgL_idz00_1949
																																											=
																																											BgL_idz00_1883;
																																									}
																																								else
																																									{	/* SawJvm/jld.scm 159 */
																																										bool_t
																																											BgL_test2565z00_3770;
																																										if ((STRING_REF(BgL_stringz00_1885, BgL_walkerz00_1888) == ((unsigned char) ':')))
																																											{	/* SawJvm/jld.scm 159 */
																																												if ((BgL_walkerz00_1888 < (BgL_lenz00_1886 - ((long) 1))))
																																													{	/* SawJvm/jld.scm 160 */
																																														BgL_test2565z00_3770
																																															=
																																															(STRING_REF
																																															(BgL_stringz00_1885,
																																																(BgL_walkerz00_1888
																																																	+
																																																	((long) 1))) == ((unsigned char) ':'));
																																													}
																																												else
																																													{	/* SawJvm/jld.scm 160 */
																																														BgL_test2565z00_3770
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																										else
																																											{	/* SawJvm/jld.scm 159 */
																																												BgL_test2565z00_3770
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_test2565z00_3770)
																																											{	/* SawJvm/jld.scm 159 */
																																												BgL_idz00_1949
																																													=
																																													bstring_to_symbol
																																													(c_substring
																																													(BgL_stringz00_1885,
																																														((long) 0), BgL_walkerz00_1888));
																																											}
																																										else
																																											{
																																												long
																																													BgL_walkerz00_3782;
																																												BgL_walkerz00_3782
																																													=
																																													(BgL_walkerz00_1888
																																													+
																																													((long) 1));
																																												BgL_walkerz00_1888
																																													=
																																													BgL_walkerz00_3782;
																																												goto
																																													BgL_zc3z04anonymousza31654ze3z87_1889;
																																											}
																																									}
																																							}
																																						}
																																					}
																																				}
																																				{	/* SawJvm/jld.scm 180 */
																																					obj_t
																																						BgL_mglz00_1950;
																																					BgL_mglz00_1950
																																						=
																																						BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00
																																						(BgL_idz00_1949,
																																						BgL_modz00_1909);
																																					{	/* SawJvm/jld.scm 181 */

																																						{	/* SawJvm/jld.scm 182 */
																																							obj_t
																																								BgL_arg1725z00_1951;
																																							obj_t
																																								BgL_arg1726z00_1952;
																																							BgL_arg1725z00_1951
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_statexpz00_1929));
																																							BgL_arg1726z00_1952
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_makezd2filezd2namez00zz__osz00
																																								(BgL_basez00_1910,
																																									string_append
																																									(BgL_mglz00_1950,
																																										BGl_string2352z00zzsaw_jvm_ldz00)),
																																								BgL_classesz00_1930);
																																							{
																																								obj_t
																																									BgL_classesz00_3791;
																																								obj_t
																																									BgL_statexpz00_3790;
																																								BgL_statexpz00_3790
																																									=
																																									BgL_arg1725z00_1951;
																																								BgL_classesz00_3791
																																									=
																																									BgL_arg1726z00_1952;
																																								BgL_classesz00_1930
																																									=
																																									BgL_classesz00_3791;
																																								BgL_statexpz00_1929
																																									=
																																									BgL_statexpz00_3790;
																																								goto
																																									BgL_zc3z04anonymousza31703ze3z87_1931;
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	else
																																		{	/* SawJvm/jld.scm 177 */
																																		BgL_tagzd2140zd2_1936:
																																			{	/* SawJvm/jld.scm 188 */
																																				obj_t
																																					BgL_arg1729z00_1955;
																																				BgL_arg1729z00_1955
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_statexpz00_1929));
																																				{
																																					obj_t
																																						BgL_statexpz00_3795;
																																					BgL_statexpz00_3795
																																						=
																																						BgL_arg1729z00_1955;
																																					BgL_statexpz00_1929
																																						=
																																						BgL_statexpz00_3795;
																																					goto
																																						BgL_zc3z04anonymousza31703ze3z87_1931;
																																				}
																																			}
																																		}
																																}
																															else
																																{	/* SawJvm/jld.scm 177 */
																																	if (
																																		(BgL_carzd2144zd2_1939
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					3))))
																																		{	/* SawJvm/jld.scm 177 */
																																			goto
																																				BgL_kapzd2146zd2_1941;
																																		}
																																	else
																																		{	/* SawJvm/jld.scm 177 */
																																			if (
																																				(BgL_carzd2144zd2_1939
																																					==
																																					CNST_TABLE_REF
																																					(((long) 4))))
																																				{	/* SawJvm/jld.scm 177 */
																																					goto
																																						BgL_kapzd2146zd2_1941;
																																				}
																																			else
																																				{	/* SawJvm/jld.scm 177 */
																																					if (
																																						(BgL_carzd2144zd2_1939
																																							==
																																							CNST_TABLE_REF
																																							(((long) 5))))
																																						{	/* SawJvm/jld.scm 177 */
																																							goto
																																								BgL_kapzd2146zd2_1941;
																																						}
																																					else
																																						{	/* SawJvm/jld.scm 177 */
																																							goto
																																								BgL_tagzd2140zd2_1936;
																																						}
																																				}
																																		}
																																}
																														}
																													}
																												else
																													{	/* SawJvm/jld.scm 177 */
																														goto
																															BgL_tagzd2140zd2_1936;
																													}
																											}
																										}
																								}
																							}
																						else
																							{	/* SawJvm/jld.scm 170 */
																								if (
																									(BgL_carzd2135zd2_1924 ==
																										CNST_TABLE_REF(((long) 7))))
																									{
																										obj_t BgL_statexpz00_3808;

																										BgL_statexpz00_3808 =
																											BgL_cdrzd2136zd2_1925;
																										BgL_statexpz00_1919 =
																											BgL_statexpz00_3808;
																										goto BgL_tagzd2130zd2_1920;
																									}
																								else
																									{	/* SawJvm/jld.scm 170 */
																									BgL_tagzd2131zd2_1921:
																										{	/* SawJvm/jld.scm 191 */
																											obj_t BgL_arg1731z00_1957;

																											BgL_arg1731z00_1957 =
																												CDR(
																												((obj_t)
																													BgL_clausesz00_1915));
																											{
																												obj_t
																													BgL_clausesz00_3811;
																												BgL_clausesz00_3811 =
																													BgL_arg1731z00_1957;
																												BgL_clausesz00_1915 =
																													BgL_clausesz00_3811;
																												goto
																													BgL_zc3z04anonymousza31698ze3z87_1917;
																											}
																										}
																									}
																							}
																					}
																				else
																					{	/* SawJvm/jld.scm 170 */
																						goto BgL_tagzd2131zd2_1921;
																					}
																			}
																		}
																}
															}
														else
															{	/* SawJvm/jld.scm 209 */
																BgL_res1112z00_1979 = BNIL;
															}
													}
												else
													{	/* SawJvm/jld.scm 209 */
														BgL_res1112z00_1979 = BNIL;
													}
											}
										else
											{	/* SawJvm/jld.scm 209 */
												BgL_res1112z00_1979 = BNIL;
											}
									}
									POP_EXIT();
									return BgL_res1112z00_1979;
								}
							}
						}
					}
			}
		}

	}



/* &<@anonymous:1780> */
	obj_t BGl_z62zc3z04anonymousza31780ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3220)
	{
		{	/* SawJvm/jld.scm 208 */
			{	/* SawJvm/jld.scm 208 */
				obj_t BgL_arg1782z00_3273;

				{	/* SawJvm/jld.scm 208 */
					obj_t BgL_res2238z00_3274;

					{	/* SawJvm/jld.scm 208 */
						obj_t BgL_tmpz00_3830;

						BgL_tmpz00_3830 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2238z00_3274 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_3830);
					}
					BgL_arg1782z00_3273 = BgL_res2238z00_3274;
				}
				{	/* SawJvm/jld.scm 208 */

					{	/* SawJvm/jld.scm 208 */

						return BGl_readz00zz__readerz00(BgL_arg1782z00_3273, BFALSE);
					}
				}
			}
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3221, obj_t BgL__z00_3223)
	{
		{	/* SawJvm/jld.scm 207 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_REF(BgL_envz00_3221,
					(int) (((long) 0))), BNIL);
		}

	}



/* unique */
	obj_t BGl_uniquez00zzsaw_jvm_ldz00(obj_t BgL_lstz00_9)
	{
		{	/* SawJvm/jld.scm 236 */
			{	/* SawJvm/jld.scm 237 */
				obj_t BgL_tz00_2013;

				BgL_tz00_2013 = BGl_makezd2hashtablezd2zz__hashz00(BNIL);
				{
					obj_t BgL_l1312z00_2015;

					BgL_l1312z00_2015 = BgL_lstz00_9;
				BgL_zc3z04anonymousza31785ze3z87_2016:
					if (PAIRP(BgL_l1312z00_2015))
						{	/* SawJvm/jld.scm 238 */
							{	/* SawJvm/jld.scm 238 */
								obj_t BgL_fz00_2018;

								BgL_fz00_2018 = CAR(BgL_l1312z00_2015);
								BGl_hashtablezd2putz12zc0zz__hashz00(BgL_tz00_2013,
									BgL_fz00_2018, BgL_fz00_2018);
							}
							{
								obj_t BgL_l1312z00_3842;

								BgL_l1312z00_3842 = CDR(BgL_l1312z00_2015);
								BgL_l1312z00_2015 = BgL_l1312z00_3842;
								goto BgL_zc3z04anonymousza31785ze3z87_2016;
							}
						}
					else
						{	/* SawJvm/jld.scm 238 */
							((bool_t) 1);
						}
				}
				return BGl_hashtablezd2ze3listz31zz__hashz00(BgL_tz00_2013);
			}
		}

	}



/* jvm-jar */
	obj_t BGl_jvmzd2jarzd2zzsaw_jvm_ldz00(obj_t BgL_targetz00_10,
		obj_t BgL_manifestz00_11, obj_t BgL_objectsz00_12)
	{
		{	/* SawJvm/jld.scm 244 */
			{	/* SawJvm/jld.scm 245 */
				obj_t BgL_cmdz00_2022;

				if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
					{
						obj_t BgL_objectsz00_2039;
						obj_t BgL_cmdz00_2040;

						BgL_objectsz00_2039 = BgL_objectsz00_12;
						BgL_cmdz00_2040 = BGl_string2370z00zzsaw_jvm_ldz00;
					BgL_zc3z04anonymousza31813ze3z87_2041:
						if (NULLP(BgL_objectsz00_2039))
							{	/* SawJvm/jld.scm 249 */
								obj_t BgL_arg1820z00_2043;

								BgL_arg1820z00_2043 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											8)));
								{	/* SawJvm/jld.scm 249 */
									obj_t BgL_list1821z00_2044;

									{	/* SawJvm/jld.scm 249 */
										obj_t BgL_arg1822z00_2045;

										{	/* SawJvm/jld.scm 249 */
											obj_t BgL_arg1823z00_2046;

											{	/* SawJvm/jld.scm 249 */
												obj_t BgL_arg1824z00_2047;

												{	/* SawJvm/jld.scm 249 */
													obj_t BgL_arg1825z00_2048;

													{	/* SawJvm/jld.scm 249 */
														obj_t BgL_arg1826z00_2049;

														{	/* SawJvm/jld.scm 249 */
															obj_t BgL_arg1827z00_2050;

															BgL_arg1827z00_2050 =
																MAKE_YOUNG_PAIR(BgL_cmdz00_2040, BNIL);
															BgL_arg1826z00_2049 =
																MAKE_YOUNG_PAIR
																(BGl_string2372z00zzsaw_jvm_ldz00,
																BgL_arg1827z00_2050);
														}
														BgL_arg1825z00_2048 =
															MAKE_YOUNG_PAIR(BgL_targetz00_10,
															BgL_arg1826z00_2049);
													}
													BgL_arg1824z00_2047 =
														MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
														BgL_arg1825z00_2048);
												}
												BgL_arg1823z00_2046 =
													MAKE_YOUNG_PAIR(BgL_manifestz00_11,
													BgL_arg1824z00_2047);
											}
											BgL_arg1822z00_2045 =
												MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
												BgL_arg1823z00_2046);
										}
										BgL_list1821z00_2044 =
											MAKE_YOUNG_PAIR(BgL_arg1820z00_2043, BgL_arg1822z00_2045);
									}
									BgL_cmdz00_2022 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1821z00_2044);
							}}
						else
							{	/* SawJvm/jld.scm 253 */
								obj_t BgL_arg1828z00_2051;
								obj_t BgL_arg1829z00_2052;

								BgL_arg1828z00_2051 = CDR(((obj_t) BgL_objectsz00_2039));
								{	/* SawJvm/jld.scm 256 */
									obj_t BgL_arg1830z00_2053;

									{	/* SawJvm/jld.scm 256 */
										obj_t BgL_arg1840z00_2060;

										BgL_arg1840z00_2060 = CAR(((obj_t) BgL_objectsz00_2039));
										BgL_arg1830z00_2053 =
											BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
											(BgL_arg1840z00_2060);
									}
									{	/* SawJvm/jld.scm 254 */
										obj_t BgL_list1831z00_2054;

										{	/* SawJvm/jld.scm 254 */
											obj_t BgL_arg1832z00_2055;

											{	/* SawJvm/jld.scm 254 */
												obj_t BgL_arg1833z00_2056;

												{	/* SawJvm/jld.scm 254 */
													obj_t BgL_arg1835z00_2057;

													{	/* SawJvm/jld.scm 254 */
														obj_t BgL_arg1836z00_2058;

														{	/* SawJvm/jld.scm 254 */
															obj_t BgL_arg1838z00_2059;

															BgL_arg1838z00_2059 =
																MAKE_YOUNG_PAIR(BgL_cmdz00_2040, BNIL);
															BgL_arg1836z00_2058 =
																MAKE_YOUNG_PAIR
																(BGl_string2372z00zzsaw_jvm_ldz00,
																BgL_arg1838z00_2059);
														}
														BgL_arg1835z00_2057 =
															MAKE_YOUNG_PAIR(BgL_arg1830z00_2053,
															BgL_arg1836z00_2058);
													}
													BgL_arg1833z00_2056 =
														MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
														BgL_arg1835z00_2057);
												}
												BgL_arg1832z00_2055 =
													MAKE_YOUNG_PAIR
													(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00,
													BgL_arg1833z00_2056);
											}
											BgL_list1831z00_2054 =
												MAKE_YOUNG_PAIR(BGl_string2373z00zzsaw_jvm_ldz00,
												BgL_arg1832z00_2055);
										}
										BgL_arg1829z00_2052 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1831z00_2054);
									}
								}
								{
									obj_t BgL_cmdz00_3872;
									obj_t BgL_objectsz00_3871;

									BgL_objectsz00_3871 = BgL_arg1828z00_2051;
									BgL_cmdz00_3872 = BgL_arg1829z00_2052;
									BgL_cmdz00_2040 = BgL_cmdz00_3872;
									BgL_objectsz00_2039 = BgL_objectsz00_3871;
									goto BgL_zc3z04anonymousza31813ze3z87_2041;
								}
							}
					}
				else
					{
						obj_t BgL_objectsz00_2063;
						obj_t BgL_cmdz00_2064;

						BgL_objectsz00_2063 = BgL_objectsz00_12;
						BgL_cmdz00_2064 = BGl_string2370z00zzsaw_jvm_ldz00;
					BgL_zc3z04anonymousza31841ze3z87_2065:
						if (NULLP(BgL_objectsz00_2063))
							{	/* SawJvm/jld.scm 260 */
								obj_t BgL_arg1845z00_2067;

								BgL_arg1845z00_2067 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											8)));
								{	/* SawJvm/jld.scm 260 */
									obj_t BgL_list1846z00_2068;

									{	/* SawJvm/jld.scm 260 */
										obj_t BgL_arg1847z00_2069;

										{	/* SawJvm/jld.scm 260 */
											obj_t BgL_arg1848z00_2070;

											{	/* SawJvm/jld.scm 260 */
												obj_t BgL_arg1850z00_2071;

												{	/* SawJvm/jld.scm 260 */
													obj_t BgL_arg1851z00_2072;

													{	/* SawJvm/jld.scm 260 */
														obj_t BgL_arg1852z00_2073;

														{	/* SawJvm/jld.scm 260 */
															obj_t BgL_arg1853z00_2074;

															BgL_arg1853z00_2074 =
																MAKE_YOUNG_PAIR(BgL_cmdz00_2064, BNIL);
															BgL_arg1852z00_2073 =
																MAKE_YOUNG_PAIR
																(BGl_string2372z00zzsaw_jvm_ldz00,
																BgL_arg1853z00_2074);
														}
														BgL_arg1851z00_2072 =
															MAKE_YOUNG_PAIR(BgL_targetz00_10,
															BgL_arg1852z00_2073);
													}
													BgL_arg1850z00_2071 =
														MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
														BgL_arg1851z00_2072);
												}
												BgL_arg1848z00_2070 =
													MAKE_YOUNG_PAIR(BgL_manifestz00_11,
													BgL_arg1850z00_2071);
											}
											BgL_arg1847z00_2069 =
												MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
												BgL_arg1848z00_2070);
										}
										BgL_list1846z00_2068 =
											MAKE_YOUNG_PAIR(BgL_arg1845z00_2067, BgL_arg1847z00_2069);
									}
									BgL_cmdz00_2022 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1846z00_2068);
							}}
						else
							{	/* SawJvm/jld.scm 264 */
								obj_t BgL_arg1855z00_2075;
								obj_t BgL_arg1856z00_2076;

								BgL_arg1855z00_2075 = CDR(((obj_t) BgL_objectsz00_2063));
								{	/* SawJvm/jld.scm 265 */
									obj_t BgL_arg1857z00_2077;

									BgL_arg1857z00_2077 = CAR(((obj_t) BgL_objectsz00_2063));
									BgL_arg1856z00_2076 =
										string_append_3(BgL_arg1857z00_2077,
										BGl_string2372z00zzsaw_jvm_ldz00, BgL_cmdz00_2064);
								}
								{
									obj_t BgL_cmdz00_3891;
									obj_t BgL_objectsz00_3890;

									BgL_objectsz00_3890 = BgL_arg1855z00_2075;
									BgL_cmdz00_3891 = BgL_arg1856z00_2076;
									BgL_cmdz00_2064 = BgL_cmdz00_3891;
									BgL_objectsz00_2063 = BgL_objectsz00_3890;
									goto BgL_zc3z04anonymousza31841ze3z87_2065;
								}
							}
					}
				{	/* SawJvm/jld.scm 267 */
					obj_t BgL_list1792z00_2023;

					{	/* SawJvm/jld.scm 267 */
						obj_t BgL_arg1796z00_2024;

						{	/* SawJvm/jld.scm 267 */
							obj_t BgL_arg1798z00_2025;

							BgL_arg1798z00_2025 =
								MAKE_YOUNG_PAIR(BGl_string2374z00zzsaw_jvm_ldz00, BNIL);
							BgL_arg1796z00_2024 =
								MAKE_YOUNG_PAIR(BgL_cmdz00_2022, BgL_arg1798z00_2025);
						}
						BgL_list1792z00_2023 =
							MAKE_YOUNG_PAIR(BGl_string2375z00zzsaw_jvm_ldz00,
							BgL_arg1796z00_2024);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1792z00_2023);
				}
				{	/* SawJvm/jld.scm 268 */
					obj_t BgL_exitd1117z00_2026;

					BgL_exitd1117z00_2026 = BGL_EXITD_TOP_AS_OBJ();
					{	/* SawJvm/jld.scm 272 */
						obj_t BgL_zc3z04anonymousza31811ze3z87_3224;

						BgL_zc3z04anonymousza31811ze3z87_3224 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31811ze3ze5zzsaw_jvm_ldz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31811ze3z87_3224,
							(int) (((long) 0)), BgL_manifestz00_11);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1117z00_2026,
							BgL_zc3z04anonymousza31811ze3z87_3224);
						{	/* SawJvm/jld.scm 269 */
							obj_t BgL_tmp1119z00_2028;

							{	/* SawJvm/jld.scm 269 */
								bool_t BgL_test2578z00_3904;

								{	/* SawJvm/jld.scm 269 */
									obj_t BgL_arg1809z00_2033;

									{	/* SawJvm/jld.scm 269 */
										obj_t BgL_list1810z00_2034;

										BgL_list1810z00_2034 =
											MAKE_YOUNG_PAIR(BgL_cmdz00_2022, BNIL);
										BgL_arg1809z00_2033 =
											BGl_systemz00zz__osz00(BgL_list1810z00_2034);
									}
									BgL_test2578z00_3904 =
										((long) CINT(BgL_arg1809z00_2033) == ((long) 0));
								}
								if (BgL_test2578z00_3904)
									{	/* SawJvm/jld.scm 269 */
										BgL_tmp1119z00_2028 = BTRUE;
									}
								else
									{	/* SawJvm/jld.scm 269 */
										BgL_tmp1119z00_2028 =
											BGl_errorz00zz__errorz00
											(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 8))), BGl_string2376z00zzsaw_jvm_ldz00,
											BgL_targetz00_10);
							}}
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1117z00_2026);
							BGl_z62zc3z04anonymousza31811ze3ze5zzsaw_jvm_ldz00
								(BgL_zc3z04anonymousza31811ze3z87_3224);
							return BgL_tmp1119z00_2028;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1811> */
	obj_t BGl_z62zc3z04anonymousza31811ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3225)
	{
		{	/* SawJvm/jld.scm 268 */
			{	/* SawJvm/jld.scm 272 */
				obj_t BgL_manifestz00_3226;

				BgL_manifestz00_3226 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3225, (int) (((long) 0))));
				{	/* SawJvm/jld.scm 272 */
					bool_t BgL_tmpz00_3917;

					if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
						{	/* SawJvm/jld.scm 273 */
							char *BgL_stringz00_3275;

							BgL_stringz00_3275 = BSTRING_TO_STRING(BgL_manifestz00_3226);
							if (unlink(BgL_stringz00_3275))
								{	/* SawJvm/jld.scm 273 */
									BgL_tmpz00_3917 = ((bool_t) 0);
								}
							else
								{	/* SawJvm/jld.scm 273 */
									BgL_tmpz00_3917 = ((bool_t) 1);
								}
						}
					else
						{	/* SawJvm/jld.scm 272 */
							BgL_tmpz00_3917 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_3917);
				}
			}
		}

	}



/* make-manifest-name */
	obj_t BGl_makezd2manifestzd2namez00zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 278 */
			{
				obj_t BgL_namez00_2843;

				BgL_namez00_2843 = BGl_string2378z00zzsaw_jvm_ldz00;
			BgL_loopz00_2842:
				if (fexists(BSTRING_TO_STRING(BgL_namez00_2843)))
					{
						obj_t BgL_namez00_3927;

						BgL_namez00_3927 =
							string_append(BgL_namez00_2843, BGl_string2377z00zzsaw_jvm_ldz00);
						BgL_namez00_2843 = BgL_namez00_3927;
						goto BgL_loopz00_2842;
					}
				else
					{	/* SawJvm/jld.scm 280 */
						return BgL_namez00_2843;
					}
			}
		}

	}



/* jvm-bigloo-classpath */
	obj_t BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 287 */
			{	/* SawJvm/jld.scm 289 */
				obj_t BgL_arg1862z00_2085;

				if (STRINGP(BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 289 */
						BgL_arg1862z00_2085 =
							BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 289 */
						BgL_arg1862z00_2085 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									9)));
					}
				return BGl_uncygdrivez00zztools_miscz00(BgL_arg1862z00_2085);
			}
		}

	}



/* generate-jvm-manifest */
	obj_t BGl_generatezd2jvmzd2manifestz00zzsaw_jvm_ldz00(obj_t BgL_fnamez00_14,
		obj_t BgL_mainz00_15, obj_t BgL_jarnamez00_16, obj_t BgL_za7ipsza7_17)
	{
		{	/* SawJvm/jld.scm 304 */
			{	/* SawJvm/jld.scm 306 */
				bool_t BgL_test2583z00_3934;

				{	/* SawJvm/jld.scm 306 */
					bool_t BgL_res2256z00_2868;

					{	/* SawJvm/jld.scm 306 */
						obj_t BgL_string1z00_2853;

						BgL_string1z00_2853 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
						{	/* SawJvm/jld.scm 306 */
							long BgL_l1z00_2855;

							BgL_l1z00_2855 = STRING_LENGTH(BgL_string1z00_2853);
							if ((BgL_l1z00_2855 == ((long) 2)))
								{	/* SawJvm/jld.scm 306 */
									int BgL_arg1267z00_2858;

									{	/* SawJvm/jld.scm 306 */
										char *BgL_auxz00_3940;
										char *BgL_tmpz00_3938;

										BgL_auxz00_3940 =
											BSTRING_TO_STRING(BGl_string2379z00zzsaw_jvm_ldz00);
										BgL_tmpz00_3938 = BSTRING_TO_STRING(BgL_string1z00_2853);
										BgL_arg1267z00_2858 =
											memcmp(BgL_tmpz00_3938, BgL_auxz00_3940, BgL_l1z00_2855);
									}
									BgL_res2256z00_2868 =
										((long) (BgL_arg1267z00_2858) == ((long) 0));
								}
							else
								{	/* SawJvm/jld.scm 306 */
									BgL_res2256z00_2868 = ((bool_t) 0);
								}
						}
					}
					BgL_test2583z00_3934 = BgL_res2256z00_2868;
				}
				if (BgL_test2583z00_3934)
					{	/* SawJvm/jld.scm 306 */
						return
							BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00
							(BgL_fnamez00_14, BgL_mainz00_15, BgL_za7ipsza7_17);
					}
				else
					{	/* SawJvm/jld.scm 308 */
						bool_t BgL_test2585z00_3946;

						{	/* SawJvm/jld.scm 308 */
							bool_t BgL_res2261z00_2884;

							{	/* SawJvm/jld.scm 308 */
								obj_t BgL_string1z00_2869;

								BgL_string1z00_2869 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
								{	/* SawJvm/jld.scm 308 */
									long BgL_l1z00_2871;

									BgL_l1z00_2871 = STRING_LENGTH(BgL_string1z00_2869);
									if ((BgL_l1z00_2871 == ((long) 5)))
										{	/* SawJvm/jld.scm 308 */
											int BgL_arg1267z00_2874;

											{	/* SawJvm/jld.scm 308 */
												char *BgL_auxz00_3952;
												char *BgL_tmpz00_3950;

												BgL_auxz00_3952 =
													BSTRING_TO_STRING(BGl_string2356z00zzsaw_jvm_ldz00);
												BgL_tmpz00_3950 =
													BSTRING_TO_STRING(BgL_string1z00_2869);
												BgL_arg1267z00_2874 =
													memcmp(BgL_tmpz00_3950, BgL_auxz00_3952,
													BgL_l1z00_2871);
											}
											BgL_res2261z00_2884 =
												((long) (BgL_arg1267z00_2874) == ((long) 0));
										}
									else
										{	/* SawJvm/jld.scm 308 */
											BgL_res2261z00_2884 = ((bool_t) 0);
										}
								}
							}
							BgL_test2585z00_3946 = BgL_res2261z00_2884;
						}
						if (BgL_test2585z00_3946)
							{	/* SawJvm/jld.scm 308 */
								return
									BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00
									(BgL_fnamez00_14, BgL_mainz00_15, BgL_jarnamez00_16);
							}
						else
							{	/* SawJvm/jld.scm 308 */
								{	/* SawJvm/jld.scm 311 */
									obj_t BgL_list1867z00_2090;

									{	/* SawJvm/jld.scm 311 */
										obj_t BgL_arg1868z00_2091;

										{	/* SawJvm/jld.scm 311 */
											obj_t BgL_arg1870z00_2092;

											{	/* SawJvm/jld.scm 311 */
												obj_t BgL_arg1871z00_2093;

												BgL_arg1871z00_2093 =
													MAKE_YOUNG_PAIR(BGl_string2380z00zzsaw_jvm_ldz00,
													BNIL);
												BgL_arg1870z00_2092 =
													MAKE_YOUNG_PAIR
													(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
													BgL_arg1871z00_2093);
											}
											BgL_arg1868z00_2091 =
												MAKE_YOUNG_PAIR(BGl_string2381z00zzsaw_jvm_ldz00,
												BgL_arg1870z00_2092);
										}
										BgL_list1867z00_2090 =
											MAKE_YOUNG_PAIR(BGl_string2382z00zzsaw_jvm_ldz00,
											BgL_arg1868z00_2091);
									}
									BGl_warningz00zz__errorz00(BgL_list1867z00_2090);
								}
								return
									BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00
									(BgL_fnamez00_14, BgL_mainz00_15, BgL_za7ipsza7_17);
							}
					}
			}
		}

	}



/* split-72 */
	obj_t BGl_splitzd272zd2zzsaw_jvm_ldz00(obj_t BgL_strz00_18)
	{
		{	/* SawJvm/jld.scm 318 */
			return BGl_loopze70ze7zzsaw_jvm_ldz00(BgL_strz00_18, ((long) 0));
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzsaw_jvm_ldz00(obj_t BgL_strz00_3252,
		long BgL_oz00_2095)
	{
		{	/* SawJvm/jld.scm 319 */
			if (
				((STRING_LENGTH(
							((obj_t) BgL_strz00_3252)) - BgL_oz00_2095) <= ((long) 72)))
				{	/* SawJvm/jld.scm 320 */
					if ((BgL_oz00_2095 == ((long) 0)))
						{	/* SawJvm/jld.scm 321 */
							return BgL_strz00_3252;
						}
					else
						{	/* SawJvm/jld.scm 323 */
							long BgL_arg1877z00_2101;

							BgL_arg1877z00_2101 = STRING_LENGTH(((obj_t) BgL_strz00_3252));
							{	/* SawJvm/jld.scm 323 */
								obj_t BgL_res2267z00_2899;

								BgL_res2267z00_2899 =
									c_substring(
									((obj_t) BgL_strz00_3252), BgL_oz00_2095,
									BgL_arg1877z00_2101);
								return BgL_res2267z00_2899;
							}
						}
				}
			else
				{	/* SawJvm/jld.scm 324 */
					obj_t BgL_arg1878z00_2102;
					obj_t BgL_arg1879z00_2103;

					{	/* SawJvm/jld.scm 324 */
						long BgL_arg1881z00_2104;

						BgL_arg1881z00_2104 = (BgL_oz00_2095 + ((long) 71));
						{	/* SawJvm/jld.scm 324 */
							obj_t BgL_res2269z00_2905;

							BgL_res2269z00_2905 =
								c_substring(
								((obj_t) BgL_strz00_3252), BgL_oz00_2095, BgL_arg1881z00_2104);
							BgL_arg1878z00_2102 = BgL_res2269z00_2905;
					}}
					BgL_arg1879z00_2103 =
						BGl_loopze70ze7zzsaw_jvm_ldz00(BgL_strz00_3252,
						(BgL_oz00_2095 + ((long) 72)));
					return
						string_append_3(BgL_arg1878z00_2102,
						BGl_string2383z00zzsaw_jvm_ldz00, BgL_arg1879z00_2103);
				}
		}

	}



/* manifest-classpath-format */
	obj_t BGl_manifestzd2classpathzd2formatz00zzsaw_jvm_ldz00(obj_t
		BgL_classpathz00_19)
	{
		{	/* SawJvm/jld.scm 332 */
			{	/* SawJvm/jld.scm 333 */
				bool_t BgL_test2589z00_3982;

				{	/* SawJvm/jld.scm 333 */
					bool_t BgL_res2275z00_2923;

					{	/* SawJvm/jld.scm 333 */
						obj_t BgL_string1z00_2908;

						BgL_string1z00_2908 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
						{	/* SawJvm/jld.scm 333 */
							long BgL_l1z00_2910;

							BgL_l1z00_2910 = STRING_LENGTH(BgL_string1z00_2908);
							if ((BgL_l1z00_2910 == ((long) 2)))
								{	/* SawJvm/jld.scm 333 */
									int BgL_arg1267z00_2913;

									{	/* SawJvm/jld.scm 333 */
										char *BgL_auxz00_3988;
										char *BgL_tmpz00_3986;

										BgL_auxz00_3988 =
											BSTRING_TO_STRING(BGl_string2379z00zzsaw_jvm_ldz00);
										BgL_tmpz00_3986 = BSTRING_TO_STRING(BgL_string1z00_2908);
										BgL_arg1267z00_2913 =
											memcmp(BgL_tmpz00_3986, BgL_auxz00_3988, BgL_l1z00_2910);
									}
									BgL_res2275z00_2923 =
										((long) (BgL_arg1267z00_2913) == ((long) 0));
								}
							else
								{	/* SawJvm/jld.scm 333 */
									BgL_res2275z00_2923 = ((bool_t) 0);
								}
						}
					}
					BgL_test2589z00_3982 = BgL_res2275z00_2923;
				}
				if (BgL_test2589z00_3982)
					{	/* SawJvm/jld.scm 333 */
						return
							BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_classpathz00_19,
							(char) (((unsigned char) ':')), (char) (((unsigned char) ' ')));
					}
				else
					{	/* SawJvm/jld.scm 335 */
						bool_t BgL_test2591z00_3996;

						{	/* SawJvm/jld.scm 335 */
							bool_t BgL_res2280z00_2939;

							{	/* SawJvm/jld.scm 335 */
								obj_t BgL_string1z00_2924;

								BgL_string1z00_2924 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
								{	/* SawJvm/jld.scm 335 */
									long BgL_l1z00_2926;

									BgL_l1z00_2926 = STRING_LENGTH(BgL_string1z00_2924);
									if ((BgL_l1z00_2926 == ((long) 5)))
										{	/* SawJvm/jld.scm 335 */
											int BgL_arg1267z00_2929;

											{	/* SawJvm/jld.scm 335 */
												char *BgL_auxz00_4002;
												char *BgL_tmpz00_4000;

												BgL_auxz00_4002 =
													BSTRING_TO_STRING(BGl_string2356z00zzsaw_jvm_ldz00);
												BgL_tmpz00_4000 =
													BSTRING_TO_STRING(BgL_string1z00_2924);
												BgL_arg1267z00_2929 =
													memcmp(BgL_tmpz00_4000, BgL_auxz00_4002,
													BgL_l1z00_2926);
											}
											BgL_res2280z00_2939 =
												((long) (BgL_arg1267z00_2929) == ((long) 0));
										}
									else
										{	/* SawJvm/jld.scm 335 */
											BgL_res2280z00_2939 = ((bool_t) 0);
										}
								}
							}
							BgL_test2591z00_3996 = BgL_res2280z00_2939;
						}
						if (BgL_test2591z00_3996)
							{	/* SawJvm/jld.scm 335 */
								return
									BGl_stringzd2replacezd2zz__r4_strings_6_7z00
									(BgL_classpathz00_19, (char) (((unsigned char) ';')),
									(char) (((unsigned char) ' ')));
							}
						else
							{	/* SawJvm/jld.scm 335 */
								{	/* SawJvm/jld.scm 338 */
									obj_t BgL_list1887z00_2111;

									{	/* SawJvm/jld.scm 338 */
										obj_t BgL_arg1888z00_2112;

										{	/* SawJvm/jld.scm 338 */
											obj_t BgL_arg1889z00_2113;

											{	/* SawJvm/jld.scm 338 */
												obj_t BgL_arg1891z00_2114;

												BgL_arg1891z00_2114 =
													MAKE_YOUNG_PAIR(BGl_string2384z00zzsaw_jvm_ldz00,
													BNIL);
												BgL_arg1889z00_2113 =
													MAKE_YOUNG_PAIR
													(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
													BgL_arg1891z00_2114);
											}
											BgL_arg1888z00_2112 =
												MAKE_YOUNG_PAIR(BGl_string2385z00zzsaw_jvm_ldz00,
												BgL_arg1889z00_2113);
										}
										BgL_list1887z00_2111 =
											MAKE_YOUNG_PAIR(BGl_string2386z00zzsaw_jvm_ldz00,
											BgL_arg1888z00_2112);
									}
									BGl_warningz00zz__errorz00(BgL_list1887z00_2111);
								}
								return
									BGl_stringzd2replacezd2zz__r4_strings_6_7z00
									(BgL_classpathz00_19, (char) (((unsigned char) ':')),
									(char) (((unsigned char) ' ')));
		}}}}

	}



/* generate-sh-jvm-manifest */
	obj_t BGl_generatezd2shzd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t
		BgL_fnamez00_20, obj_t BgL_mainz00_21, obj_t BgL_za7ipsza7_22)
	{
		{	/* SawJvm/jld.scm 345 */
			{	/* SawJvm/jld.scm 348 */
				obj_t BgL_zc3z04anonymousza31893ze3z87_3227;

				BgL_zc3z04anonymousza31893ze3z87_3227 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31893ze3ze5zzsaw_jvm_ldz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31893ze3z87_3227,
					(int) (((long) 0)), BgL_mainz00_21);
				PROCEDURE_SET(BgL_zc3z04anonymousza31893ze3z87_3227,
					(int) (((long) 1)), BgL_za7ipsza7_22);
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_fnamez00_20, BgL_zc3z04anonymousza31893ze3z87_3227);
			}
		}

	}



/* &<@anonymous:1893> */
	obj_t BGl_z62zc3z04anonymousza31893ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3228)
	{
		{	/* SawJvm/jld.scm 347 */
			{	/* SawJvm/jld.scm 348 */
				obj_t BgL_mainz00_3229;
				obj_t BgL_za7ipsza7_3230;

				BgL_mainz00_3229 = PROCEDURE_REF(BgL_envz00_3228, (int) (((long) 0)));
				BgL_za7ipsza7_3230 = PROCEDURE_REF(BgL_envz00_3228, (int) (((long) 1)));
				{	/* SawJvm/jld.scm 348 */
					obj_t BgL_port1314z00_3276;

					{	/* SawJvm/jld.scm 348 */
						obj_t BgL_res2281z00_3277;

						{	/* SawJvm/jld.scm 348 */
							obj_t BgL_tmpz00_4030;

							BgL_tmpz00_4030 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2281z00_3277 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4030);
						}
						BgL_port1314z00_3276 = BgL_res2281z00_3277;
					}
					bgl_display_string(BGl_string2387z00zzsaw_jvm_ldz00,
						BgL_port1314z00_3276);
					bgl_display_char(((unsigned char) 10), BgL_port1314z00_3276);
				}
				{	/* SawJvm/jld.scm 349 */
					obj_t BgL_port1315z00_3278;

					{	/* SawJvm/jld.scm 349 */
						obj_t BgL_res2282z00_3279;

						{	/* SawJvm/jld.scm 349 */
							obj_t BgL_tmpz00_4035;

							BgL_tmpz00_4035 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2282z00_3279 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4035);
						}
						BgL_port1315z00_3278 = BgL_res2282z00_3279;
					}
					bgl_display_string(BGl_string2388z00zzsaw_jvm_ldz00,
						BgL_port1315z00_3278);
					bgl_display_obj(BgL_mainz00_3229, BgL_port1315z00_3278);
					bgl_display_char(((unsigned char) 10), BgL_port1315z00_3278);
				}
				{	/* SawJvm/jld.scm 351 */
					obj_t BgL_arg1895z00_3280;

					BgL_arg1895z00_3280 =
						BGl_splitzd272zd2zzsaw_jvm_ldz00
						(BGl_manifestzd2classpathzd2formatz00zzsaw_jvm_ldz00
						(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00));
					{	/* SawJvm/jld.scm 350 */
						obj_t BgL_list1896z00_3281;

						{	/* SawJvm/jld.scm 350 */
							obj_t BgL_arg1897z00_3282;

							BgL_arg1897z00_3282 = MAKE_YOUNG_PAIR(BgL_arg1895z00_3280, BNIL);
							BgL_list1896z00_3281 =
								MAKE_YOUNG_PAIR(BGl_string2389z00zzsaw_jvm_ldz00,
								BgL_arg1897z00_3282);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1896z00_3281);
				}}
				{	/* SawJvm/jld.scm 354 */
					obj_t BgL_arg1901z00_3283;

					{	/* SawJvm/jld.scm 354 */
						obj_t BgL_res2283z00_3284;

						{	/* SawJvm/jld.scm 354 */
							obj_t BgL_tmpz00_4046;

							BgL_tmpz00_4046 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2283z00_3284 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4046);
						}
						BgL_arg1901z00_3283 = BgL_res2283z00_3284;
					}
					bgl_display_string(BGl_string2390z00zzsaw_jvm_ldz00,
						BgL_arg1901z00_3283);
				}
				{	/* SawJvm/jld.scm 357 */
					obj_t BgL_arg1902z00_3285;
					obj_t BgL_arg1903z00_3286;

					{	/* SawJvm/jld.scm 357 */
						obj_t BgL_arg1904z00_3287;

						{	/* SawJvm/jld.scm 357 */
							obj_t BgL_arg1905z00_3288;
							obj_t BgL_arg1906z00_3289;

							BgL_arg1905z00_3288 =
								BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
							{	/* SawJvm/jld.scm 358 */
								bool_t BgL_test2593z00_4051;

								if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
									{	/* SawJvm/jld.scm 358 */
										if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
											{	/* SawJvm/jld.scm 358 */
												BgL_test2593z00_4051 = ((bool_t) 0);
											}
										else
											{	/* SawJvm/jld.scm 358 */
												BgL_test2593z00_4051 = ((bool_t) 1);
											}
									}
								else
									{	/* SawJvm/jld.scm 358 */
										BgL_test2593z00_4051 = ((bool_t) 0);
									}
								if (BgL_test2593z00_4051)
									{	/* SawJvm/jld.scm 358 */
										BgL_arg1906z00_3289 = BGl_string2391z00zzsaw_jvm_ldz00;
									}
								else
									{	/* SawJvm/jld.scm 358 */
										BgL_arg1906z00_3289 = BGl_string2392z00zzsaw_jvm_ldz00;
									}
							}
							BgL_arg1904z00_3287 =
								BGl_makezd2filezd2namez00zz__osz00(BgL_arg1905z00_3288,
								BgL_arg1906z00_3289);
						}
						BgL_arg1902z00_3285 =
							BGl_splitzd272zd2zzsaw_jvm_ldz00(BgL_arg1904z00_3287);
					}
					{	/* SawJvm/jld.scm 355 */
						obj_t BgL_res2284z00_3290;

						{	/* SawJvm/jld.scm 355 */
							obj_t BgL_tmpz00_4058;

							BgL_tmpz00_4058 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2284z00_3290 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4058);
						}
						BgL_arg1903z00_3286 = BgL_res2284z00_3290;
					}
					bgl_display_obj(BgL_arg1902z00_3285, BgL_arg1903z00_3286);
				}
				{
					obj_t BgL_l1316z00_3292;

					BgL_l1316z00_3292 = BgL_za7ipsza7_3230;
				BgL_zc3z04anonymousza31908ze3z87_3291:
					if (PAIRP(BgL_l1316z00_3292))
						{	/* SawJvm/jld.scm 361 */
							{	/* SawJvm/jld.scm 365 */
								obj_t BgL_lz00_3293;

								BgL_lz00_3293 = CAR(BgL_l1316z00_3292);
								{	/* SawJvm/jld.scm 365 */
									obj_t BgL_arg1910z00_3294;

									{	/* SawJvm/jld.scm 365 */
										obj_t BgL_res2286z00_3295;

										{	/* SawJvm/jld.scm 365 */
											obj_t BgL_tmpz00_4065;

											BgL_tmpz00_4065 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2286z00_3295 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4065);
										}
										BgL_arg1910z00_3294 = BgL_res2286z00_3295;
									}
									bgl_display_string(BGl_string2390z00zzsaw_jvm_ldz00,
										BgL_arg1910z00_3294);
								}
								{	/* SawJvm/jld.scm 366 */
									obj_t BgL_arg1911z00_3296;
									obj_t BgL_arg1912z00_3297;

									BgL_arg1911z00_3296 =
										BGl_splitzd272zd2zzsaw_jvm_ldz00
										(BGl_userzd2libraryzd2zzsaw_jvm_ldz00(BgL_lz00_3293));
									{	/* SawJvm/jld.scm 366 */
										obj_t BgL_res2287z00_3298;

										{	/* SawJvm/jld.scm 366 */
											obj_t BgL_tmpz00_4071;

											BgL_tmpz00_4071 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2287z00_3298 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4071);
										}
										BgL_arg1912z00_3297 = BgL_res2287z00_3298;
									}
									bgl_display_obj(BgL_arg1911z00_3296, BgL_arg1912z00_3297);
								}
							}
							{
								obj_t BgL_l1316z00_4075;

								BgL_l1316z00_4075 = CDR(BgL_l1316z00_3292);
								BgL_l1316z00_3292 = BgL_l1316z00_4075;
								goto BgL_zc3z04anonymousza31908ze3z87_3291;
							}
						}
					else
						{	/* SawJvm/jld.scm 361 */
							((bool_t) 1);
						}
				}
				{	/* SawJvm/jld.scm 368 */
					obj_t BgL_arg1915z00_3299;

					{	/* SawJvm/jld.scm 368 */
						obj_t BgL_res2288z00_3300;

						{	/* SawJvm/jld.scm 368 */
							obj_t BgL_tmpz00_4077;

							BgL_tmpz00_4077 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2288z00_3300 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4077);
						}
						BgL_arg1915z00_3299 = BgL_res2288z00_3300;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1915z00_3299);
				}
				{	/* SawJvm/jld.scm 369 */
					obj_t BgL_port1318z00_3301;

					{	/* SawJvm/jld.scm 369 */
						obj_t BgL_res2289z00_3302;

						{	/* SawJvm/jld.scm 369 */
							obj_t BgL_tmpz00_4081;

							BgL_tmpz00_4081 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2289z00_3302 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4081);
						}
						BgL_port1318z00_3301 = BgL_res2289z00_3302;
					}
					bgl_display_string(BGl_string2393z00zzsaw_jvm_ldz00,
						BgL_port1318z00_3301);
					bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
						BgL_port1318z00_3301);
					bgl_display_char(((unsigned char) 10), BgL_port1318z00_3301);
				}
				{	/* SawJvm/jld.scm 370 */
					obj_t BgL_arg1916z00_3303;

					{	/* SawJvm/jld.scm 370 */
						obj_t BgL_res2290z00_3304;

						{	/* SawJvm/jld.scm 370 */
							obj_t BgL_tmpz00_4087;

							BgL_tmpz00_4087 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2290z00_3304 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4087);
						}
						BgL_arg1916z00_3303 = BgL_res2290z00_3304;
					}
					return bgl_display_char(((unsigned char) 10), BgL_arg1916z00_3303);
		}}}

	}



/* generate-msdos-jvm-manifest */
	obj_t BGl_generatezd2msdoszd2jvmzd2manifestzd2zzsaw_jvm_ldz00(obj_t
		BgL_fnamez00_23, obj_t BgL_mainz00_24, obj_t BgL_jarnamez00_25)
	{
		{	/* SawJvm/jld.scm 375 */
			{	/* SawJvm/jld.scm 378 */
				obj_t BgL_zc3z04anonymousza31918ze3z87_3231;

				BgL_zc3z04anonymousza31918ze3z87_3231 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31918ze3ze5zzsaw_jvm_ldz00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31918ze3z87_3231,
					(int) (((long) 0)), BgL_mainz00_24);
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_fnamez00_23, BgL_zc3z04anonymousza31918ze3z87_3231);
			}
		}

	}



/* &<@anonymous:1918> */
	obj_t BGl_z62zc3z04anonymousza31918ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3232)
	{
		{	/* SawJvm/jld.scm 377 */
			{	/* SawJvm/jld.scm 378 */
				obj_t BgL_mainz00_3233;

				BgL_mainz00_3233 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 0)));
				{	/* SawJvm/jld.scm 378 */
					obj_t BgL_port1319z00_3305;

					{	/* SawJvm/jld.scm 378 */
						obj_t BgL_res2291z00_3306;

						{	/* SawJvm/jld.scm 378 */
							obj_t BgL_tmpz00_4099;

							BgL_tmpz00_4099 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2291z00_3306 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4099);
						}
						BgL_port1319z00_3305 = BgL_res2291z00_3306;
					}
					bgl_display_string(BGl_string2387z00zzsaw_jvm_ldz00,
						BgL_port1319z00_3305);
					bgl_display_char(((unsigned char) 10), BgL_port1319z00_3305);
				}
				{	/* SawJvm/jld.scm 379 */
					obj_t BgL_port1320z00_3307;

					{	/* SawJvm/jld.scm 379 */
						obj_t BgL_res2292z00_3308;

						{	/* SawJvm/jld.scm 379 */
							obj_t BgL_tmpz00_4104;

							BgL_tmpz00_4104 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2292z00_3308 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4104);
						}
						BgL_port1320z00_3307 = BgL_res2292z00_3308;
					}
					bgl_display_string(BGl_string2388z00zzsaw_jvm_ldz00,
						BgL_port1320z00_3307);
					bgl_display_obj(BgL_mainz00_3233, BgL_port1320z00_3307);
					bgl_display_char(((unsigned char) 10), BgL_port1320z00_3307);
				}
				{	/* SawJvm/jld.scm 380 */
					obj_t BgL_port1321z00_3309;

					{	/* SawJvm/jld.scm 380 */
						obj_t BgL_res2293z00_3310;

						{	/* SawJvm/jld.scm 380 */
							obj_t BgL_tmpz00_4110;

							BgL_tmpz00_4110 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2293z00_3310 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4110);
						}
						BgL_port1321z00_3309 = BgL_res2293z00_3310;
					}
					bgl_display_string(BGl_string2393z00zzsaw_jvm_ldz00,
						BgL_port1321z00_3309);
					bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
						BgL_port1321z00_3309);
					bgl_display_char(((unsigned char) 10), BgL_port1321z00_3309);
				}
				{	/* SawJvm/jld.scm 381 */
					obj_t BgL_arg1919z00_3311;

					{	/* SawJvm/jld.scm 381 */
						obj_t BgL_res2294z00_3312;

						{	/* SawJvm/jld.scm 381 */
							obj_t BgL_tmpz00_4116;

							BgL_tmpz00_4116 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2294z00_3312 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4116);
						}
						BgL_arg1919z00_3311 = BgL_res2294z00_3312;
					}
					return bgl_display_char(((unsigned char) 10), BgL_arg1919z00_3311);
		}}}

	}



/* generate-jvm-sh-script */
	bool_t BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00(obj_t
		BgL_targetz00_26, obj_t BgL_mainzd2classzd2_27, obj_t BgL_za7ipsza7_28)
	{
		{	/* SawJvm/jld.scm 386 */
			{

				if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
					{	/* SawJvm/jld.scm 451 */
						{	/* SawJvm/jld.scm 400 */
							obj_t BgL_zc3z04anonymousza31936ze3z87_3236;

							BgL_zc3z04anonymousza31936ze3z87_3236 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31936ze3ze5zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31936ze3z87_3236,
								(int) (((long) 0)), BgL_targetz00_26);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_26, BgL_zc3z04anonymousza31936ze3z87_3236);
						}
						{	/* SawJvm/jld.scm 421 */
							obj_t BgL_list1954z00_2199;

							{	/* SawJvm/jld.scm 421 */
								obj_t BgL_arg1955z00_2200;

								{	/* SawJvm/jld.scm 421 */
									obj_t BgL_arg1956z00_2201;

									BgL_arg1956z00_2201 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BNIL);
									BgL_arg1955z00_2200 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
										BgL_arg1956z00_2201);
								}
								BgL_list1954z00_2199 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg1955z00_2200);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_26, BgL_list1954z00_2199);
						}
					}
				else
					{	/* SawJvm/jld.scm 451 */
						{	/* SawJvm/jld.scm 425 */
							obj_t BgL_zc3z04anonymousza31959ze3z87_3235;

							BgL_zc3z04anonymousza31959ze3z87_3235 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31959ze3ze5zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31959ze3z87_3235,
								(int) (((long) 0)), BgL_za7ipsza7_28);
							PROCEDURE_SET(BgL_zc3z04anonymousza31959ze3z87_3235,
								(int) (((long) 1)), BgL_mainzd2classzd2_27);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_26, BgL_zc3z04anonymousza31959ze3z87_3235);
						}
						{	/* SawJvm/jld.scm 450 */
							obj_t BgL_list1986z00_2243;

							{	/* SawJvm/jld.scm 450 */
								obj_t BgL_arg1987z00_2244;

								{	/* SawJvm/jld.scm 450 */
									obj_t BgL_arg1988z00_2245;

									BgL_arg1988z00_2245 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BNIL);
									BgL_arg1987z00_2244 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
										BgL_arg1988z00_2245);
								}
								BgL_list1986z00_2243 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg1987z00_2244);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_26, BgL_list1986z00_2243);
						}
					}
			}
		}

	}



/* &generate-jvm-env */
	obj_t BGl_z62generatezd2jvmzd2envz62zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 396 */
			{
				obj_t BgL_envz00_2160;
				obj_t BgL_resz00_2161;

				BgL_envz00_2160 = BGl_za2jvmzd2envza2zd2zzengine_paramz00;
				BgL_resz00_2161 = BGl_string2370z00zzsaw_jvm_ldz00;
			BgL_zc3z04anonymousza31922ze3z87_2162:
				if (NULLP(BgL_envz00_2160))
					{	/* SawJvm/jld.scm 392 */
						return BgL_resz00_2161;
					}
				else
					{	/* SawJvm/jld.scm 394 */
						obj_t BgL_arg1924z00_2164;
						obj_t BgL_arg1925z00_2165;

						BgL_arg1924z00_2164 = CDR(((obj_t) BgL_envz00_2160));
						{	/* SawJvm/jld.scm 395 */
							obj_t BgL_arg1926z00_2166;
							obj_t BgL_arg1927z00_2167;

							BgL_arg1926z00_2166 = CAR(((obj_t) BgL_envz00_2160));
							BgL_arg1927z00_2167 = CAR(((obj_t) BgL_envz00_2160));
							{	/* SawJvm/jld.scm 395 */
								obj_t BgL_list1928z00_2168;

								{	/* SawJvm/jld.scm 395 */
									obj_t BgL_arg1929z00_2169;

									{	/* SawJvm/jld.scm 395 */
										obj_t BgL_arg1930z00_2170;

										{	/* SawJvm/jld.scm 395 */
											obj_t BgL_arg1931z00_2171;

											{	/* SawJvm/jld.scm 395 */
												obj_t BgL_arg1932z00_2172;

												{	/* SawJvm/jld.scm 395 */
													obj_t BgL_arg1933z00_2173;

													BgL_arg1933z00_2173 =
														MAKE_YOUNG_PAIR(BgL_resz00_2161, BNIL);
													BgL_arg1932z00_2172 =
														MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
														BgL_arg1933z00_2173);
												}
												BgL_arg1931z00_2171 =
													MAKE_YOUNG_PAIR(BgL_arg1927z00_2167,
													BgL_arg1932z00_2172);
											}
											BgL_arg1930z00_2170 =
												MAKE_YOUNG_PAIR(BGl_string2394z00zzsaw_jvm_ldz00,
												BgL_arg1931z00_2171);
										}
										BgL_arg1929z00_2169 =
											MAKE_YOUNG_PAIR(BgL_arg1926z00_2166, BgL_arg1930z00_2170);
									}
									BgL_list1928z00_2168 =
										MAKE_YOUNG_PAIR(BGl_string2395z00zzsaw_jvm_ldz00,
										BgL_arg1929z00_2169);
								}
								BgL_arg1925z00_2165 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1928z00_2168);
							}
						}
						{
							obj_t BgL_resz00_4166;
							obj_t BgL_envz00_4165;

							BgL_envz00_4165 = BgL_arg1924z00_2164;
							BgL_resz00_4166 = BgL_arg1925z00_2165;
							BgL_resz00_2161 = BgL_resz00_4166;
							BgL_envz00_2160 = BgL_envz00_4165;
							goto BgL_zc3z04anonymousza31922ze3z87_2162;
						}
					}
			}
		}

	}



/* &<@anonymous:1959> */
	obj_t BGl_z62zc3z04anonymousza31959ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3237)
	{
		{	/* SawJvm/jld.scm 424 */
			{	/* SawJvm/jld.scm 425 */
				obj_t BgL_za7ipsza7_3238;
				obj_t BgL_mainzd2classzd2_3239;

				BgL_za7ipsza7_3238 = PROCEDURE_REF(BgL_envz00_3237, (int) (((long) 0)));
				BgL_mainzd2classzd2_3239 =
					PROCEDURE_REF(BgL_envz00_3237, (int) (((long) 1)));
				{	/* SawJvm/jld.scm 425 */
					obj_t BgL_port1326z00_3313;

					{	/* SawJvm/jld.scm 425 */
						obj_t BgL_res2307z00_3314;

						{	/* SawJvm/jld.scm 425 */
							obj_t BgL_tmpz00_4171;

							BgL_tmpz00_4171 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2307z00_3314 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4171);
						}
						BgL_port1326z00_3313 = BgL_res2307z00_3314;
					}
					bgl_display_string(BGl_string2396z00zzsaw_jvm_ldz00,
						BgL_port1326z00_3313);
					bgl_display_char(((unsigned char) 10), BgL_port1326z00_3313);
				}
				{	/* SawJvm/jld.scm 426 */
					obj_t BgL_arg1960z00_3315;

					{	/* SawJvm/jld.scm 426 */
						obj_t BgL_res2308z00_3316;

						{	/* SawJvm/jld.scm 426 */
							obj_t BgL_tmpz00_4176;

							BgL_tmpz00_4176 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2308z00_3316 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4176);
						}
						BgL_arg1960z00_3315 = BgL_res2308z00_3316;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1960z00_3315);
				}
				{	/* SawJvm/jld.scm 427 */
					obj_t BgL_port1332z00_3317;

					{	/* SawJvm/jld.scm 427 */
						obj_t BgL_res2309z00_3318;

						{	/* SawJvm/jld.scm 427 */
							obj_t BgL_tmpz00_4180;

							BgL_tmpz00_4180 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2309z00_3318 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4180);
						}
						BgL_port1332z00_3317 = BgL_res2309z00_3318;
					}
					bgl_display_string(BGl_string2397z00zzsaw_jvm_ldz00,
						BgL_port1332z00_3317);
					{	/* SawJvm/jld.scm 433 */
						obj_t BgL_arg1961z00_3319;

						{	/* SawJvm/jld.scm 433 */
							obj_t BgL_arg1962z00_3320;

							{	/* SawJvm/jld.scm 433 */
								obj_t BgL_arg1963z00_3321;

								{	/* SawJvm/jld.scm 433 */
									obj_t BgL_arg1964z00_3322;

									{	/* SawJvm/jld.scm 433 */
										obj_t BgL_arg1965z00_3323;

										{	/* SawJvm/jld.scm 433 */
											obj_t BgL_arg1966z00_3324;
											obj_t BgL_arg1967z00_3325;

											{	/* SawJvm/jld.scm 433 */
												obj_t BgL_arg1968z00_3326;

												{	/* SawJvm/jld.scm 433 */
													obj_t BgL_arg1969z00_3327;
													obj_t BgL_arg1970z00_3328;

													BgL_arg1969z00_3327 =
														BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00();
													{	/* SawJvm/jld.scm 434 */
														bool_t BgL_test2599z00_4185;

														if (CBOOL
															(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
															{	/* SawJvm/jld.scm 434 */
																if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
																	{	/* SawJvm/jld.scm 435 */
																		BgL_test2599z00_4185 = ((bool_t) 0);
																	}
																else
																	{	/* SawJvm/jld.scm 435 */
																		BgL_test2599z00_4185 = ((bool_t) 1);
																	}
															}
														else
															{	/* SawJvm/jld.scm 434 */
																BgL_test2599z00_4185 = ((bool_t) 0);
															}
														if (BgL_test2599z00_4185)
															{	/* SawJvm/jld.scm 434 */
																BgL_arg1970z00_3328 =
																	BGl_string2391z00zzsaw_jvm_ldz00;
															}
														else
															{	/* SawJvm/jld.scm 434 */
																BgL_arg1970z00_3328 =
																	BGl_string2392z00zzsaw_jvm_ldz00;
															}
													}
													BgL_arg1968z00_3326 =
														BGl_makezd2filezd2namez00zz__osz00
														(BgL_arg1969z00_3327, BgL_arg1970z00_3328);
												}
												BgL_arg1966z00_3324 =
													string_append_3(BGl_string2398z00zzsaw_jvm_ldz00,
													BgL_arg1968z00_3326,
													BGl_string2398z00zzsaw_jvm_ldz00);
											}
											{	/* SawJvm/jld.scm 438 */
												obj_t BgL_arg1972z00_3329;

												if (NULLP(BgL_za7ipsza7_3238))
													{	/* SawJvm/jld.scm 438 */
														BgL_arg1972z00_3329 = BNIL;
													}
												else
													{	/* SawJvm/jld.scm 438 */
														obj_t BgL_head1329z00_3330;

														{	/* SawJvm/jld.scm 438 */
															obj_t BgL_res2311z00_3331;

															BgL_res2311z00_3331 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1329z00_3330 = BgL_res2311z00_3331;
														}
														{
															obj_t BgL_l1327z00_3333;
															obj_t BgL_tail1330z00_3334;

															BgL_l1327z00_3333 = BgL_za7ipsza7_3238;
															BgL_tail1330z00_3334 = BgL_head1329z00_3330;
														BgL_zc3z04anonymousza31974ze3z87_3332:
															if (NULLP(BgL_l1327z00_3333))
																{	/* SawJvm/jld.scm 438 */
																	BgL_arg1972z00_3329 =
																		CDR(BgL_head1329z00_3330);
																}
															else
																{	/* SawJvm/jld.scm 438 */
																	obj_t BgL_newtail1331z00_3335;

																	{	/* SawJvm/jld.scm 438 */
																		obj_t BgL_arg1977z00_3336;

																		{	/* SawJvm/jld.scm 438 */
																			obj_t BgL_fz00_3337;

																			BgL_fz00_3337 =
																				CAR(((obj_t) BgL_l1327z00_3333));
																			BgL_arg1977z00_3336 =
																				string_append_3
																				(BGl_string2398z00zzsaw_jvm_ldz00,
																				BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																				(BgL_fz00_3337),
																				BGl_string2398z00zzsaw_jvm_ldz00);
																		}
																		{	/* SawJvm/jld.scm 438 */
																			obj_t BgL_res2313z00_3338;

																			BgL_res2313z00_3338 =
																				MAKE_YOUNG_PAIR(BgL_arg1977z00_3336,
																				BNIL);
																			BgL_newtail1331z00_3335 =
																				BgL_res2313z00_3338;
																		}
																	}
																	SET_CDR(BgL_tail1330z00_3334,
																		BgL_newtail1331z00_3335);
																	{	/* SawJvm/jld.scm 438 */
																		obj_t BgL_arg1976z00_3339;

																		BgL_arg1976z00_3339 =
																			CDR(((obj_t) BgL_l1327z00_3333));
																		{
																			obj_t BgL_tail1330z00_4207;
																			obj_t BgL_l1327z00_4206;

																			BgL_l1327z00_4206 = BgL_arg1976z00_3339;
																			BgL_tail1330z00_4207 =
																				BgL_newtail1331z00_3335;
																			BgL_tail1330z00_3334 =
																				BgL_tail1330z00_4207;
																			BgL_l1327z00_3333 = BgL_l1327z00_4206;
																			goto
																				BgL_zc3z04anonymousza31974ze3z87_3332;
																		}
																	}
																}
														}
													}
												BgL_arg1967z00_3325 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1972z00_3329, BNIL);
											}
											BgL_arg1965z00_3323 =
												MAKE_YOUNG_PAIR(BgL_arg1966z00_3324,
												BgL_arg1967z00_3325);
										}
										BgL_arg1964z00_3322 =
											MAKE_YOUNG_PAIR(BGl_string2399z00zzsaw_jvm_ldz00,
											BgL_arg1965z00_3323);
									}
									BgL_arg1963z00_3321 =
										MAKE_YOUNG_PAIR(BGl_string2400z00zzsaw_jvm_ldz00,
										BgL_arg1964z00_3322);
								}
								BgL_arg1962z00_3320 =
									MAKE_YOUNG_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
									BgL_arg1963z00_3321);
							}
							BgL_arg1961z00_3319 =
								BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00
								(BgL_arg1962z00_3320);
						}
						bgl_display_obj(BgL_arg1961z00_3319, BgL_port1332z00_3317);
					}
					bgl_display_char(((unsigned char) 10), BgL_port1332z00_3317);
				}
				{	/* SawJvm/jld.scm 439 */
					obj_t BgL_port1333z00_3340;

					{	/* SawJvm/jld.scm 439 */
						obj_t BgL_res2314z00_3341;

						{	/* SawJvm/jld.scm 439 */
							obj_t BgL_tmpz00_4216;

							BgL_tmpz00_4216 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2314z00_3341 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4216);
						}
						BgL_port1333z00_3340 = BgL_res2314z00_3341;
					}
					bgl_display_string(BGl_string2401z00zzsaw_jvm_ldz00,
						BgL_port1333z00_3340);
					bgl_display_char(((unsigned char) 10), BgL_port1333z00_3340);
				}
				{	/* SawJvm/jld.scm 440 */
					obj_t BgL_arg1980z00_3342;

					{	/* SawJvm/jld.scm 440 */
						obj_t BgL_res2315z00_3343;

						{	/* SawJvm/jld.scm 440 */
							obj_t BgL_tmpz00_4221;

							BgL_tmpz00_4221 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2315z00_3343 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4221);
						}
						BgL_arg1980z00_3342 = BgL_res2315z00_3343;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1980z00_3342);
				}
				{	/* SawJvm/jld.scm 441 */
					obj_t BgL_port1334z00_3344;

					{	/* SawJvm/jld.scm 441 */
						obj_t BgL_res2316z00_3345;

						{	/* SawJvm/jld.scm 441 */
							obj_t BgL_tmpz00_4225;

							BgL_tmpz00_4225 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2316z00_3345 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4225);
						}
						BgL_port1334z00_3344 = BgL_res2316z00_3345;
					}
					bgl_display_string(BGl_string2402z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
						BgL_port1334z00_3344);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					{	/* SawJvm/jld.scm 442 */
						obj_t BgL_arg1981z00_3346;

						if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
							{	/* SawJvm/jld.scm 442 */
								BgL_arg1981z00_3346 = BGl_string2370z00zzsaw_jvm_ldz00;
							}
						else
							{	/* SawJvm/jld.scm 442 */
								BgL_arg1981z00_3346 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											13)));
							}
						bgl_display_obj(BgL_arg1981z00_3346, BgL_port1334z00_3344);
					}
					bgl_display_string(BGl_string2403z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
								((long) 14))), BgL_port1334z00_3344);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
						BgL_port1334z00_3344);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					bgl_display_obj(BGl_z62generatezd2jvmzd2envz62zzsaw_jvm_ldz00(),
						BgL_port1334z00_3344);
					bgl_display_obj(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
						(BgL_mainzd2classzd2_3239, FILE_SEPARATOR,
							(char) (((unsigned char) '.'))), BgL_port1334z00_3344);
					bgl_display_string(BGl_string2404z00zzsaw_jvm_ldz00,
						BgL_port1334z00_3344);
					return bgl_display_char(((unsigned char) 10), BgL_port1334z00_3344);
		}}}

	}



/* &<@anonymous:1936> */
	obj_t BGl_z62zc3z04anonymousza31936ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3240)
	{
		{	/* SawJvm/jld.scm 399 */
			{	/* SawJvm/jld.scm 400 */
				obj_t BgL_targetz00_3241;

				BgL_targetz00_3241 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3240, (int) (((long) 0))));
				{	/* SawJvm/jld.scm 400 */
					obj_t BgL_port1322z00_3347;

					{	/* SawJvm/jld.scm 400 */
						obj_t BgL_res2296z00_3348;

						{	/* SawJvm/jld.scm 400 */
							obj_t BgL_tmpz00_4253;

							BgL_tmpz00_4253 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2296z00_3348 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4253);
						}
						BgL_port1322z00_3347 = BgL_res2296z00_3348;
					}
					bgl_display_string(BGl_string2396z00zzsaw_jvm_ldz00,
						BgL_port1322z00_3347);
					bgl_display_char(((unsigned char) 10), BgL_port1322z00_3347);
				}
				{	/* SawJvm/jld.scm 401 */
					obj_t BgL_arg1937z00_3349;

					{	/* SawJvm/jld.scm 401 */
						obj_t BgL_res2297z00_3350;

						{	/* SawJvm/jld.scm 401 */
							obj_t BgL_tmpz00_4258;

							BgL_tmpz00_4258 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2297z00_3350 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4258);
						}
						BgL_arg1937z00_3349 = BgL_res2297z00_3350;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1937z00_3349);
				}
				{	/* SawJvm/jld.scm 402 */
					obj_t BgL_port1323z00_3351;

					{	/* SawJvm/jld.scm 402 */
						obj_t BgL_res2298z00_3352;

						{	/* SawJvm/jld.scm 402 */
							obj_t BgL_tmpz00_4262;

							BgL_tmpz00_4262 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2298z00_3352 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4262);
						}
						BgL_port1323z00_3351 = BgL_res2298z00_3352;
					}
					bgl_display_string(BGl_string2405z00zzsaw_jvm_ldz00,
						BgL_port1323z00_3351);
					{	/* SawJvm/jld.scm 404 */
						obj_t BgL_arg1938z00_3353;

						{	/* SawJvm/jld.scm 404 */
							obj_t BgL_arg1939z00_3354;

							{	/* SawJvm/jld.scm 404 */
								obj_t BgL_arg1940z00_3355;

								BgL_arg1940z00_3355 =
									MAKE_YOUNG_PAIR(BGl_string2399z00zzsaw_jvm_ldz00, BNIL);
								BgL_arg1939z00_3354 =
									MAKE_YOUNG_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
									BgL_arg1940z00_3355);
							}
							BgL_arg1938z00_3353 =
								BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00
								(BgL_arg1939z00_3354);
						}
						bgl_display_obj(BgL_arg1938z00_3353, BgL_port1323z00_3351);
					}
					bgl_display_string(BGl_string2406z00zzsaw_jvm_ldz00,
						BgL_port1323z00_3351);
					bgl_display_char(((unsigned char) 10), BgL_port1323z00_3351);
				}
				{	/* SawJvm/jld.scm 406 */
					obj_t BgL_port1324z00_3356;

					{	/* SawJvm/jld.scm 406 */
						obj_t BgL_res2299z00_3357;

						{	/* SawJvm/jld.scm 406 */
							obj_t BgL_tmpz00_4272;

							BgL_tmpz00_4272 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2299z00_3357 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4272);
						}
						BgL_port1324z00_3356 = BgL_res2299z00_3357;
					}
					bgl_display_string(BGl_string2401z00zzsaw_jvm_ldz00,
						BgL_port1324z00_3356);
					bgl_display_char(((unsigned char) 10), BgL_port1324z00_3356);
				}
				{	/* SawJvm/jld.scm 407 */
					obj_t BgL_arg1941z00_3358;

					{	/* SawJvm/jld.scm 407 */
						obj_t BgL_res2300z00_3359;

						{	/* SawJvm/jld.scm 407 */
							obj_t BgL_tmpz00_4277;

							BgL_tmpz00_4277 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2300z00_3359 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4277);
						}
						BgL_arg1941z00_3358 = BgL_res2300z00_3359;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1941z00_3358);
				}
				{	/* SawJvm/jld.scm 408 */
					obj_t BgL_port1325z00_3360;

					{	/* SawJvm/jld.scm 408 */
						obj_t BgL_res2301z00_3361;

						{	/* SawJvm/jld.scm 408 */
							obj_t BgL_tmpz00_4281;

							BgL_tmpz00_4281 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2301z00_3361 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4281);
						}
						BgL_port1325z00_3360 = BgL_res2301z00_3361;
					}
					bgl_display_string(BGl_string2402z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
						BgL_port1325z00_3360);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					{	/* SawJvm/jld.scm 409 */
						obj_t BgL_arg1942z00_3362;

						if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
							{	/* SawJvm/jld.scm 409 */
								BgL_arg1942z00_3362 = BGl_string2370z00zzsaw_jvm_ldz00;
							}
						else
							{	/* SawJvm/jld.scm 409 */
								BgL_arg1942z00_3362 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											13)));
							}
						bgl_display_obj(BgL_arg1942z00_3362, BgL_port1325z00_3360);
					}
					bgl_display_string(BGl_string2403z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
								((long) 14))), BgL_port1325z00_3360);
					bgl_display_string(BGl_string2407z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
						BgL_port1325z00_3360);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					bgl_display_obj(BGl_z62generatezd2jvmzd2envz62zzsaw_jvm_ldz00(),
						BgL_port1325z00_3360);
					{	/* SawJvm/jld.scm 414 */
						obj_t BgL_arg1945z00_3363;

						{	/* SawJvm/jld.scm 414 */
							bool_t BgL_test2606z00_4301;

							{	/* SawJvm/jld.scm 414 */
								obj_t BgL_arg1953z00_3364;

								BgL_arg1953z00_3364 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											15)));
								{	/* SawJvm/jld.scm 414 */
									bool_t BgL_res2306z00_3365;

									{	/* SawJvm/jld.scm 414 */
										long BgL_l1z00_3366;

										BgL_l1z00_3366 =
											STRING_LENGTH(((obj_t) BgL_arg1953z00_3364));
										if ((BgL_l1z00_3366 == ((long) 0)))
											{	/* SawJvm/jld.scm 414 */
												int BgL_arg1267z00_3367;

												{	/* SawJvm/jld.scm 414 */
													char *BgL_auxz00_4311;
													char *BgL_tmpz00_4308;

													BgL_auxz00_4311 =
														BSTRING_TO_STRING(BGl_string2370z00zzsaw_jvm_ldz00);
													BgL_tmpz00_4308 =
														BSTRING_TO_STRING(((obj_t) BgL_arg1953z00_3364));
													BgL_arg1267z00_3367 =
														memcmp(BgL_tmpz00_4308, BgL_auxz00_4311,
														BgL_l1z00_3366);
												}
												BgL_res2306z00_3365 =
													((long) (BgL_arg1267z00_3367) == ((long) 0));
											}
										else
											{	/* SawJvm/jld.scm 414 */
												BgL_res2306z00_3365 = ((bool_t) 0);
											}
									}
									BgL_test2606z00_4301 = BgL_res2306z00_3365;
								}
							}
							if (BgL_test2606z00_4301)
								{	/* SawJvm/jld.scm 414 */
									BgL_arg1945z00_3363 =
										BGl_prefixz00zz__osz00(BgL_targetz00_3241);
								}
							else
								{	/* SawJvm/jld.scm 414 */
									BgL_arg1945z00_3363 =
										BGl_makezd2filezd2namez00zz__osz00(string_append_3
										(BGl_string2408z00zzsaw_jvm_ldz00,
											BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 15))), BGl_string2409z00zzsaw_jvm_ldz00),
										BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00
											(BgL_targetz00_3241)));
						}}
						bgl_display_obj(BgL_arg1945z00_3363, BgL_port1325z00_3360);
					}
					bgl_display_string(BGl_string2410z00zzsaw_jvm_ldz00,
						BgL_port1325z00_3360);
					return bgl_display_char(((unsigned char) 10), BgL_port1325z00_3360);
		}}}

	}



/* generate-jvm-msdos-script */
	bool_t BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00(obj_t
		BgL_targetz00_29, obj_t BgL_mainzd2classzd2_30, obj_t BgL_jarnamez00_31,
		obj_t BgL_za7ipsza7_32)
	{
		{	/* SawJvm/jld.scm 458 */
			{

				if (CBOOL(BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00))
					{	/* SawJvm/jld.scm 523 */
						{	/* SawJvm/jld.scm 470 */
							obj_t BgL_zc3z04anonymousza32005ze3z87_3244;

							BgL_zc3z04anonymousza32005ze3z87_3244 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza32005ze3ze5zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3z04anonymousza32005ze3z87_3244,
								(int) (((long) 0)), BgL_jarnamez00_31);
							PROCEDURE_SET(BgL_zc3z04anonymousza32005ze3z87_3244,
								(int) (((long) 1)), BgL_za7ipsza7_32);
							PROCEDURE_SET(BgL_zc3z04anonymousza32005ze3z87_3244,
								(int) (((long) 2)), BgL_mainzd2classzd2_30);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_29, BgL_zc3z04anonymousza32005ze3z87_3244);
						}
						{	/* SawJvm/jld.scm 495 */
							obj_t BgL_list2039z00_2309;

							{	/* SawJvm/jld.scm 495 */
								obj_t BgL_arg2040z00_2310;

								{	/* SawJvm/jld.scm 495 */
									obj_t BgL_arg2041z00_2311;

									BgL_arg2041z00_2311 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BNIL);
									BgL_arg2040z00_2310 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
										BgL_arg2041z00_2311);
								}
								BgL_list2039z00_2309 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg2040z00_2310);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_29, BgL_list2039z00_2309);
						}
					}
				else
					{	/* SawJvm/jld.scm 523 */
						{	/* SawJvm/jld.scm 499 */
							obj_t BgL_zc3z04anonymousza32044ze3z87_3243;

							BgL_zc3z04anonymousza32044ze3z87_3243 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza32044ze3ze5zzsaw_jvm_ldz00,
								(int) (((long) 0)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza32044ze3z87_3243,
								(int) (((long) 0)), BgL_za7ipsza7_32);
							PROCEDURE_SET(BgL_zc3z04anonymousza32044ze3z87_3243,
								(int) (((long) 1)), BgL_mainzd2classzd2_30);
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
								(BgL_targetz00_29, BgL_zc3z04anonymousza32044ze3z87_3243);
						}
						{	/* SawJvm/jld.scm 522 */
							obj_t BgL_list2071z00_2346;

							{	/* SawJvm/jld.scm 522 */
								obj_t BgL_arg2072z00_2347;

								{	/* SawJvm/jld.scm 522 */
									obj_t BgL_arg2075z00_2348;

									BgL_arg2075z00_2348 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BNIL);
									BgL_arg2072z00_2347 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
										BgL_arg2075z00_2348);
								}
								BgL_list2071z00_2346 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg2072z00_2347);
							}
							return
								BGl_chmodz00zz__osz00(BgL_targetz00_29, BgL_list2071z00_2346);
						}
					}
			}
		}

	}



/* &generate-jvm-env2347 */
	obj_t BGl_z62generatezd2jvmzd2env2347z62zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 466 */
			{
				obj_t BgL_envz00_2255;
				obj_t BgL_resz00_2256;

				BgL_envz00_2255 = BGl_za2jvmzd2envza2zd2zzengine_paramz00;
				BgL_resz00_2256 = BGl_string2370z00zzsaw_jvm_ldz00;
			BgL_zc3z04anonymousza31990ze3z87_2257:
				if (NULLP(BgL_envz00_2255))
					{	/* SawJvm/jld.scm 462 */
						return BgL_resz00_2256;
					}
				else
					{	/* SawJvm/jld.scm 464 */
						obj_t BgL_arg1992z00_2259;
						obj_t BgL_arg1993z00_2260;

						BgL_arg1992z00_2259 = CDR(((obj_t) BgL_envz00_2255));
						{	/* SawJvm/jld.scm 465 */
							obj_t BgL_arg1995z00_2261;
							obj_t BgL_arg1996z00_2262;

							BgL_arg1995z00_2261 = CAR(((obj_t) BgL_envz00_2255));
							BgL_arg1996z00_2262 = CAR(((obj_t) BgL_envz00_2255));
							{	/* SawJvm/jld.scm 465 */
								obj_t BgL_list1997z00_2263;

								{	/* SawJvm/jld.scm 465 */
									obj_t BgL_arg1998z00_2264;

									{	/* SawJvm/jld.scm 465 */
										obj_t BgL_arg1999z00_2265;

										{	/* SawJvm/jld.scm 465 */
											obj_t BgL_arg2000z00_2266;

											{	/* SawJvm/jld.scm 465 */
												obj_t BgL_arg2001z00_2267;

												{	/* SawJvm/jld.scm 465 */
													obj_t BgL_arg2002z00_2268;

													BgL_arg2002z00_2268 =
														MAKE_YOUNG_PAIR(BgL_resz00_2256, BNIL);
													BgL_arg2001z00_2267 =
														MAKE_YOUNG_PAIR(BGl_string2372z00zzsaw_jvm_ldz00,
														BgL_arg2002z00_2268);
												}
												BgL_arg2000z00_2266 =
													MAKE_YOUNG_PAIR(BgL_arg1996z00_2262,
													BgL_arg2001z00_2267);
											}
											BgL_arg1999z00_2265 =
												MAKE_YOUNG_PAIR(BGl_string2394z00zzsaw_jvm_ldz00,
												BgL_arg2000z00_2266);
										}
										BgL_arg1998z00_2264 =
											MAKE_YOUNG_PAIR(BgL_arg1995z00_2261, BgL_arg1999z00_2265);
									}
									BgL_list1997z00_2263 =
										MAKE_YOUNG_PAIR(BGl_string2395z00zzsaw_jvm_ldz00,
										BgL_arg1998z00_2264);
								}
								BgL_arg1993z00_2260 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1997z00_2263);
							}
						}
						{
							obj_t BgL_resz00_4376;
							obj_t BgL_envz00_4375;

							BgL_envz00_4375 = BgL_arg1992z00_2259;
							BgL_resz00_4376 = BgL_arg1993z00_2260;
							BgL_resz00_2256 = BgL_resz00_4376;
							BgL_envz00_2255 = BgL_envz00_4375;
							goto BgL_zc3z04anonymousza31990ze3z87_2257;
						}
					}
			}
		}

	}



/* &<@anonymous:2044> */
	obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3245)
	{
		{	/* SawJvm/jld.scm 498 */
			{	/* SawJvm/jld.scm 499 */
				obj_t BgL_za7ipsza7_3246;
				obj_t BgL_mainzd2classzd2_3247;

				BgL_za7ipsza7_3246 = PROCEDURE_REF(BgL_envz00_3245, (int) (((long) 0)));
				BgL_mainzd2classzd2_3247 =
					PROCEDURE_REF(BgL_envz00_3245, (int) (((long) 1)));
				{	/* SawJvm/jld.scm 499 */
					obj_t BgL_port1346z00_3368;

					{	/* SawJvm/jld.scm 499 */
						obj_t BgL_res2324z00_3369;

						{	/* SawJvm/jld.scm 499 */
							obj_t BgL_tmpz00_4381;

							BgL_tmpz00_4381 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2324z00_3369 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4381);
						}
						BgL_port1346z00_3368 = BgL_res2324z00_3369;
					}
					bgl_display_string(BGl_string2411z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
						BgL_port1346z00_3368);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
								((long) 14))), BgL_port1346z00_3368);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					{	/* SawJvm/jld.scm 501 */
						obj_t BgL_arg2046z00_3370;

						if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
							{	/* SawJvm/jld.scm 501 */
								BgL_arg2046z00_3370 = BGl_string2370z00zzsaw_jvm_ldz00;
							}
						else
							{	/* SawJvm/jld.scm 501 */
								BgL_arg2046z00_3370 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											13)));
							}
						bgl_display_obj(BgL_arg2046z00_3370, BgL_port1346z00_3368);
					}
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
						BgL_port1346z00_3368);
					bgl_display_string(BGl_string2412z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					{	/* SawJvm/jld.scm 509 */
						obj_t BgL_arg2047z00_3371;

						{	/* SawJvm/jld.scm 509 */
							obj_t BgL_arg2048z00_3372;

							{	/* SawJvm/jld.scm 509 */
								obj_t BgL_arg2049z00_3373;

								{	/* SawJvm/jld.scm 509 */
									obj_t BgL_arg2050z00_3374;

									{	/* SawJvm/jld.scm 509 */
										obj_t BgL_arg2051z00_3375;
										obj_t BgL_arg2053z00_3376;

										{	/* SawJvm/jld.scm 509 */
											obj_t BgL_arg2055z00_3377;
											obj_t BgL_arg2056z00_3378;

											BgL_arg2055z00_3377 =
												BGl_stringzd2replacezd2zz__r4_strings_6_7z00
												(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
												(char) (((unsigned char) '/')),
												(char) (((unsigned char) '\\')));
											if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
												{	/* SawJvm/jld.scm 511 */
													BgL_arg2056z00_3378 =
														BGl_string2413z00zzsaw_jvm_ldz00;
												}
											else
												{	/* SawJvm/jld.scm 511 */
													BgL_arg2056z00_3378 =
														BGl_string2414z00zzsaw_jvm_ldz00;
												}
											BgL_arg2051z00_3375 =
												string_append(BgL_arg2055z00_3377, BgL_arg2056z00_3378);
										}
										{	/* SawJvm/jld.scm 514 */
											obj_t BgL_arg2059z00_3379;

											if (NULLP(BgL_za7ipsza7_3246))
												{	/* SawJvm/jld.scm 514 */
													BgL_arg2059z00_3379 = BNIL;
												}
											else
												{	/* SawJvm/jld.scm 514 */
													obj_t BgL_head1343z00_3380;

													{	/* SawJvm/jld.scm 514 */
														obj_t BgL_res2326z00_3381;

														BgL_res2326z00_3381 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1343z00_3380 = BgL_res2326z00_3381;
													}
													{
														obj_t BgL_l1341z00_3383;
														obj_t BgL_tail1344z00_3384;

														BgL_l1341z00_3383 = BgL_za7ipsza7_3246;
														BgL_tail1344z00_3384 = BgL_head1343z00_3380;
													BgL_zc3z04anonymousza32061ze3z87_3382:
														if (NULLP(BgL_l1341z00_3383))
															{	/* SawJvm/jld.scm 514 */
																BgL_arg2059z00_3379 = CDR(BgL_head1343z00_3380);
															}
														else
															{	/* SawJvm/jld.scm 514 */
																obj_t BgL_newtail1345z00_3385;

																{	/* SawJvm/jld.scm 514 */
																	obj_t BgL_arg2065z00_3386;

																	{	/* SawJvm/jld.scm 514 */
																		obj_t BgL_xz00_3387;

																		BgL_xz00_3387 =
																			CAR(((obj_t) BgL_l1341z00_3383));
																		BgL_arg2065z00_3386 =
																			BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																			(BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																			(BgL_xz00_3387),
																			(char) (((unsigned char) '/')),
																			(char) (((unsigned char) '\\')));
																	}
																	{	/* SawJvm/jld.scm 514 */
																		obj_t BgL_res2328z00_3388;

																		BgL_res2328z00_3388 =
																			MAKE_YOUNG_PAIR(BgL_arg2065z00_3386,
																			BNIL);
																		BgL_newtail1345z00_3385 =
																			BgL_res2328z00_3388;
																}}
																SET_CDR(BgL_tail1344z00_3384,
																	BgL_newtail1345z00_3385);
																{	/* SawJvm/jld.scm 514 */
																	obj_t BgL_arg2063z00_3389;

																	BgL_arg2063z00_3389 =
																		CDR(((obj_t) BgL_l1341z00_3383));
																	{
																		obj_t BgL_tail1344z00_4423;
																		obj_t BgL_l1341z00_4422;

																		BgL_l1341z00_4422 = BgL_arg2063z00_3389;
																		BgL_tail1344z00_4423 =
																			BgL_newtail1345z00_3385;
																		BgL_tail1344z00_3384 = BgL_tail1344z00_4423;
																		BgL_l1341z00_3383 = BgL_l1341z00_4422;
																		goto BgL_zc3z04anonymousza32061ze3z87_3382;
																	}
																}
															}
													}
												}
											BgL_arg2053z00_3376 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2059z00_3379, BNIL);
										}
										BgL_arg2050z00_3374 =
											MAKE_YOUNG_PAIR(BgL_arg2051z00_3375, BgL_arg2053z00_3376);
									}
									BgL_arg2049z00_3373 =
										MAKE_YOUNG_PAIR(BGl_string2415z00zzsaw_jvm_ldz00,
										BgL_arg2050z00_3374);
								}
								BgL_arg2048z00_3372 =
									MAKE_YOUNG_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
									BgL_arg2049z00_3373);
							}
							BgL_arg2047z00_3371 =
								BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00
								(BgL_arg2048z00_3372);
						}
						bgl_display_obj(BgL_arg2047z00_3371, BgL_port1346z00_3368);
					}
					bgl_display_string(BGl_string2416z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					bgl_display_obj(BGl_z62generatezd2jvmzd2env2347z62zzsaw_jvm_ldz00(),
						BgL_port1346z00_3368);
					bgl_display_string(BGl_string2417z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					bgl_display_obj(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
						(BgL_mainzd2classzd2_3247, FILE_SEPARATOR,
							(char) (((unsigned char) '.'))), BgL_port1346z00_3368);
					bgl_display_string(BGl_string2418z00zzsaw_jvm_ldz00,
						BgL_port1346z00_3368);
					return bgl_display_char(((unsigned char) 10), BgL_port1346z00_3368);
		}}}

	}



/* &<@anonymous:2005> */
	obj_t BGl_z62zc3z04anonymousza32005ze3ze5zzsaw_jvm_ldz00(obj_t
		BgL_envz00_3248)
	{
		{	/* SawJvm/jld.scm 469 */
			{	/* SawJvm/jld.scm 470 */
				obj_t BgL_jarnamez00_3249;
				obj_t BgL_za7ipsza7_3250;
				obj_t BgL_mainzd2classzd2_3251;

				BgL_jarnamez00_3249 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3248, (int) (((long) 0))));
				BgL_za7ipsza7_3250 = PROCEDURE_REF(BgL_envz00_3248, (int) (((long) 1)));
				BgL_mainzd2classzd2_3251 =
					PROCEDURE_REF(BgL_envz00_3248, (int) (((long) 2)));
				{	/* SawJvm/jld.scm 470 */
					obj_t BgL_port1340z00_3390;

					{	/* SawJvm/jld.scm 470 */
						obj_t BgL_res2318z00_3391;

						{	/* SawJvm/jld.scm 470 */
							obj_t BgL_tmpz00_4446;

							BgL_tmpz00_4446 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2318z00_3391 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4446);
						}
						BgL_port1340z00_3390 = BgL_res2318z00_3391;
					}
					bgl_display_string(BGl_string2411z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					bgl_display_obj(BGl_za2jvmzd2javaza2zd2zzengine_paramz00,
						BgL_port1340z00_3390);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					bgl_display_obj(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
								((long) 14))), BgL_port1340z00_3390);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					{	/* SawJvm/jld.scm 472 */
						obj_t BgL_arg2008z00_3392;

						if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
							{	/* SawJvm/jld.scm 472 */
								BgL_arg2008z00_3392 = BGl_string2370z00zzsaw_jvm_ldz00;
							}
						else
							{	/* SawJvm/jld.scm 472 */
								BgL_arg2008z00_3392 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											13)));
							}
						bgl_display_obj(BgL_arg2008z00_3392, BgL_port1340z00_3390);
					}
					bgl_display_string(BGl_string2412z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					{	/* SawJvm/jld.scm 477 */
						obj_t BgL_arg2010z00_3393;

						{	/* SawJvm/jld.scm 477 */
							obj_t BgL_arg2011z00_3394;

							{	/* SawJvm/jld.scm 477 */
								obj_t BgL_arg2012z00_3395;

								{	/* SawJvm/jld.scm 477 */
									obj_t BgL_arg2013z00_3396;

									{	/* SawJvm/jld.scm 477 */
										obj_t BgL_arg2014z00_3397;
										obj_t BgL_arg2016z00_3398;

										{	/* SawJvm/jld.scm 477 */
											obj_t BgL_arg2017z00_3399;
											obj_t BgL_arg2018z00_3400;

											{	/* SawJvm/jld.scm 477 */
												obj_t BgL_arg2020z00_3401;

												BgL_arg2020z00_3401 =
													BGl_dirnamez00zz__osz00(BgL_jarnamez00_3249);
												if (STRINGP
													(BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00))
													{	/* SawJvm/jld.scm 297 */
														BgL_arg2017z00_3399 =
															BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00;
													}
												else
													{	/* SawJvm/jld.scm 297 */
														BgL_arg2017z00_3399 = BgL_arg2020z00_3401;
													}
											}
											BgL_arg2018z00_3400 =
												BGl_basenamez00zz__osz00(BgL_jarnamez00_3249);
											BgL_arg2014z00_3397 =
												string_append_3(BgL_arg2017z00_3399,
												BGl_string2419z00zzsaw_jvm_ldz00, BgL_arg2018z00_3400);
										}
										{	/* SawJvm/jld.scm 481 */
											obj_t BgL_arg2021z00_3402;
											obj_t BgL_arg2022z00_3403;

											{	/* SawJvm/jld.scm 481 */
												obj_t BgL_arg2023z00_3404;
												obj_t BgL_arg2026z00_3405;

												BgL_arg2023z00_3404 =
													BGl_stringzd2replacezd2zz__r4_strings_6_7z00
													(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
													(char) (((unsigned char) '/')),
													(char) (((unsigned char) '\\')));
												if (CBOOL
													(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
													{	/* SawJvm/jld.scm 483 */
														BgL_arg2026z00_3405 =
															BGl_string2413z00zzsaw_jvm_ldz00;
													}
												else
													{	/* SawJvm/jld.scm 483 */
														BgL_arg2026z00_3405 =
															BGl_string2414z00zzsaw_jvm_ldz00;
													}
												BgL_arg2021z00_3402 =
													string_append(BgL_arg2023z00_3404,
													BgL_arg2026z00_3405);
											}
											{	/* SawJvm/jld.scm 486 */
												obj_t BgL_arg2029z00_3406;

												if (NULLP(BgL_za7ipsza7_3250))
													{	/* SawJvm/jld.scm 486 */
														BgL_arg2029z00_3406 = BNIL;
													}
												else
													{	/* SawJvm/jld.scm 486 */
														obj_t BgL_head1337z00_3407;

														{	/* SawJvm/jld.scm 486 */
															obj_t BgL_res2321z00_3408;

															BgL_res2321z00_3408 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1337z00_3407 = BgL_res2321z00_3408;
														}
														{
															obj_t BgL_l1335z00_3410;
															obj_t BgL_tail1338z00_3411;

															BgL_l1335z00_3410 = BgL_za7ipsza7_3250;
															BgL_tail1338z00_3411 = BgL_head1337z00_3407;
														BgL_zc3z04anonymousza32031ze3z87_3409:
															if (NULLP(BgL_l1335z00_3410))
																{	/* SawJvm/jld.scm 486 */
																	BgL_arg2029z00_3406 =
																		CDR(BgL_head1337z00_3407);
																}
															else
																{	/* SawJvm/jld.scm 486 */
																	obj_t BgL_newtail1339z00_3412;

																	{	/* SawJvm/jld.scm 486 */
																		obj_t BgL_arg2034z00_3413;

																		{	/* SawJvm/jld.scm 486 */
																			obj_t BgL_xz00_3414;

																			BgL_xz00_3414 =
																				CAR(((obj_t) BgL_l1335z00_3410));
																			BgL_arg2034z00_3413 =
																				BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
																				(BGl_userzd2libraryzd2zzsaw_jvm_ldz00
																				(BgL_xz00_3414),
																				(char) (((unsigned char) '/')),
																				(char) (((unsigned char) '\\')));
																		}
																		{	/* SawJvm/jld.scm 486 */
																			obj_t BgL_res2323z00_3415;

																			BgL_res2323z00_3415 =
																				MAKE_YOUNG_PAIR(BgL_arg2034z00_3413,
																				BNIL);
																			BgL_newtail1339z00_3412 =
																				BgL_res2323z00_3415;
																	}}
																	SET_CDR(BgL_tail1338z00_3411,
																		BgL_newtail1339z00_3412);
																	{	/* SawJvm/jld.scm 486 */
																		obj_t BgL_arg2033z00_3416;

																		BgL_arg2033z00_3416 =
																			CDR(((obj_t) BgL_l1335z00_3410));
																		{
																			obj_t BgL_tail1338z00_4491;
																			obj_t BgL_l1335z00_4490;

																			BgL_l1335z00_4490 = BgL_arg2033z00_3416;
																			BgL_tail1338z00_4491 =
																				BgL_newtail1339z00_3412;
																			BgL_tail1338z00_3411 =
																				BgL_tail1338z00_4491;
																			BgL_l1335z00_3410 = BgL_l1335z00_4490;
																			goto
																				BgL_zc3z04anonymousza32031ze3z87_3409;
																		}
																	}
																}
														}
													}
												BgL_arg2022z00_3403 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2029z00_3406, BNIL);
											}
											BgL_arg2016z00_3398 =
												MAKE_YOUNG_PAIR(BgL_arg2021z00_3402,
												BgL_arg2022z00_3403);
										}
										BgL_arg2013z00_3396 =
											MAKE_YOUNG_PAIR(BgL_arg2014z00_3397, BgL_arg2016z00_3398);
									}
									BgL_arg2012z00_3395 =
										MAKE_YOUNG_PAIR(BGl_string2415z00zzsaw_jvm_ldz00,
										BgL_arg2013z00_3396);
								}
								BgL_arg2011z00_3394 =
									MAKE_YOUNG_PAIR(BGl_za2jvmzd2classpathza2zd2zzengine_paramz00,
									BgL_arg2012z00_3395);
							}
							BgL_arg2010z00_3393 =
								BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00
								(BgL_arg2011z00_3394);
						}
						bgl_display_obj(BgL_arg2010z00_3393, BgL_port1340z00_3390);
					}
					bgl_display_string(BGl_string2416z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					bgl_display_obj(BGl_za2jvmzd2optionsza2zd2zzengine_paramz00,
						BgL_port1340z00_3390);
					bgl_display_string(BGl_string2372z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					bgl_display_obj(BGl_z62generatezd2jvmzd2env2347z62zzsaw_jvm_ldz00(),
						BgL_port1340z00_3390);
					bgl_display_string(BGl_string2417z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					bgl_display_obj(BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00
						(BgL_mainzd2classzd2_3251, FILE_SEPARATOR,
							(char) (((unsigned char) '.'))), BgL_port1340z00_3390);
					bgl_display_string(BGl_string2418z00zzsaw_jvm_ldz00,
						BgL_port1340z00_3390);
					return bgl_display_char(((unsigned char) 10), BgL_port1340z00_3390);
		}}}

	}



/* generate-jvm-script */
	bool_t BGl_generatezd2jvmzd2scriptz00zzsaw_jvm_ldz00(obj_t BgL_targetz00_33,
		obj_t BgL_mainzd2classzd2_34, obj_t BgL_jarnamez00_35,
		obj_t BgL_za7ipsza7_36)
	{
		{	/* SawJvm/jld.scm 530 */
			{	/* SawJvm/jld.scm 531 */
				obj_t BgL_list2076z00_2352;

				{	/* SawJvm/jld.scm 531 */
					obj_t BgL_arg2077z00_2353;

					BgL_arg2077z00_2353 =
						MAKE_YOUNG_PAIR(BGl_za2jvmzd2shellza2zd2zzengine_paramz00, BNIL);
					BgL_list2076z00_2352 =
						MAKE_YOUNG_PAIR(BGl_string2420z00zzsaw_jvm_ldz00,
						BgL_arg2077z00_2353);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2076z00_2352);
			}
			{	/* SawJvm/jld.scm 532 */
				obj_t BgL_list2078z00_2354;

				{	/* SawJvm/jld.scm 532 */
					obj_t BgL_arg2079z00_2355;

					{	/* SawJvm/jld.scm 532 */
						obj_t BgL_arg2080z00_2356;

						BgL_arg2080z00_2356 =
							MAKE_YOUNG_PAIR(BGl_string2350z00zzsaw_jvm_ldz00, BNIL);
						BgL_arg2079z00_2355 =
							MAKE_YOUNG_PAIR(BgL_targetz00_33, BgL_arg2080z00_2356);
					}
					BgL_list2078z00_2354 =
						MAKE_YOUNG_PAIR(BGl_string2351z00zzsaw_jvm_ldz00,
						BgL_arg2079z00_2355);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list2078z00_2354);
			}
			{	/* SawJvm/jld.scm 533 */
				obj_t BgL_list2081z00_2357;

				BgL_list2081z00_2357 =
					MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2081z00_2357);
			}
			{	/* SawJvm/jld.scm 535 */
				bool_t BgL_test2619z00_4523;

				{	/* SawJvm/jld.scm 535 */
					bool_t BgL_res2333z00_3172;

					{	/* SawJvm/jld.scm 535 */
						obj_t BgL_string1z00_3157;

						BgL_string1z00_3157 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
						{	/* SawJvm/jld.scm 535 */
							long BgL_l1z00_3159;

							BgL_l1z00_3159 = STRING_LENGTH(BgL_string1z00_3157);
							if ((BgL_l1z00_3159 == ((long) 2)))
								{	/* SawJvm/jld.scm 535 */
									int BgL_arg1267z00_3162;

									{	/* SawJvm/jld.scm 535 */
										char *BgL_auxz00_4529;
										char *BgL_tmpz00_4527;

										BgL_auxz00_4529 =
											BSTRING_TO_STRING(BGl_string2379z00zzsaw_jvm_ldz00);
										BgL_tmpz00_4527 = BSTRING_TO_STRING(BgL_string1z00_3157);
										BgL_arg1267z00_3162 =
											memcmp(BgL_tmpz00_4527, BgL_auxz00_4529, BgL_l1z00_3159);
									}
									BgL_res2333z00_3172 =
										((long) (BgL_arg1267z00_3162) == ((long) 0));
								}
							else
								{	/* SawJvm/jld.scm 535 */
									BgL_res2333z00_3172 = ((bool_t) 0);
								}
						}
					}
					BgL_test2619z00_4523 = BgL_res2333z00_3172;
				}
				if (BgL_test2619z00_4523)
					{	/* SawJvm/jld.scm 535 */
						return
							BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00
							(BgL_targetz00_33, BgL_mainzd2classzd2_34, BgL_za7ipsza7_36);
					}
				else
					{	/* SawJvm/jld.scm 537 */
						bool_t BgL_test2621z00_4535;

						{	/* SawJvm/jld.scm 537 */
							bool_t BgL_res2338z00_3188;

							{	/* SawJvm/jld.scm 537 */
								obj_t BgL_string1z00_3173;

								BgL_string1z00_3173 = BGl_za2jvmzd2shellza2zd2zzengine_paramz00;
								{	/* SawJvm/jld.scm 537 */
									long BgL_l1z00_3175;

									BgL_l1z00_3175 = STRING_LENGTH(BgL_string1z00_3173);
									if ((BgL_l1z00_3175 == ((long) 5)))
										{	/* SawJvm/jld.scm 537 */
											int BgL_arg1267z00_3178;

											{	/* SawJvm/jld.scm 537 */
												char *BgL_auxz00_4541;
												char *BgL_tmpz00_4539;

												BgL_auxz00_4541 =
													BSTRING_TO_STRING(BGl_string2356z00zzsaw_jvm_ldz00);
												BgL_tmpz00_4539 =
													BSTRING_TO_STRING(BgL_string1z00_3173);
												BgL_arg1267z00_3178 =
													memcmp(BgL_tmpz00_4539, BgL_auxz00_4541,
													BgL_l1z00_3175);
											}
											BgL_res2338z00_3188 =
												((long) (BgL_arg1267z00_3178) == ((long) 0));
										}
									else
										{	/* SawJvm/jld.scm 537 */
											BgL_res2338z00_3188 = ((bool_t) 0);
										}
								}
							}
							BgL_test2621z00_4535 = BgL_res2338z00_3188;
						}
						if (BgL_test2621z00_4535)
							{	/* SawJvm/jld.scm 537 */
								return
									BGl_generatezd2jvmzd2msdoszd2scriptzd2zzsaw_jvm_ldz00
									(BgL_targetz00_33, BgL_mainzd2classzd2_34, BgL_jarnamez00_35,
									BgL_za7ipsza7_36);
							}
						else
							{	/* SawJvm/jld.scm 537 */
								{	/* SawJvm/jld.scm 540 */
									obj_t BgL_list2084z00_2360;

									{	/* SawJvm/jld.scm 540 */
										obj_t BgL_arg2085z00_2361;

										{	/* SawJvm/jld.scm 540 */
											obj_t BgL_arg2086z00_2362;

											{	/* SawJvm/jld.scm 540 */
												obj_t BgL_arg2087z00_2363;

												BgL_arg2087z00_2363 =
													MAKE_YOUNG_PAIR(BGl_string2380z00zzsaw_jvm_ldz00,
													BNIL);
												BgL_arg2086z00_2362 =
													MAKE_YOUNG_PAIR
													(BGl_za2jvmzd2shellza2zd2zzengine_paramz00,
													BgL_arg2087z00_2363);
											}
											BgL_arg2085z00_2361 =
												MAKE_YOUNG_PAIR(BGl_string2381z00zzsaw_jvm_ldz00,
												BgL_arg2086z00_2362);
										}
										BgL_list2084z00_2360 =
											MAKE_YOUNG_PAIR(BGl_string2421z00zzsaw_jvm_ldz00,
											BgL_arg2085z00_2361);
									}
									BGl_warningz00zz__errorz00(BgL_list2084z00_2360);
								}
								return
									BGl_generatezd2jvmzd2shzd2scriptzd2zzsaw_jvm_ldz00
									(BgL_targetz00_33, BgL_mainzd2classzd2_34, BgL_za7ipsza7_36);
							}
					}
			}
		}

	}



/* user-library */
	obj_t BGl_userzd2libraryzd2zzsaw_jvm_ldz00(obj_t BgL_libz00_37)
	{
		{	/* SawJvm/jld.scm 547 */
			{
				obj_t BgL_libz00_2367;

				{	/* SawJvm/jld.scm 558 */
					bool_t BgL_test2623z00_4553;

					BgL_libz00_2367 = BgL_libz00_37;
					{	/* SawJvm/jld.scm 549 */
						long BgL_lenz00_2369;

						BgL_lenz00_2369 = STRING_LENGTH(BgL_libz00_2367);
						{
							long BgL_iz00_2371;

							BgL_iz00_2371 = ((long) 0);
						BgL_zc3z04anonymousza32091ze3z87_2372:
							if ((BgL_iz00_2371 == BgL_lenz00_2369))
								{	/* SawJvm/jld.scm 552 */
									BgL_test2623z00_4553 = ((bool_t) 0);
								}
							else
								{	/* SawJvm/jld.scm 552 */
									if (
										(STRING_REF(BgL_libz00_2367, BgL_iz00_2371) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* SawJvm/jld.scm 554 */
											BgL_test2623z00_4553 = ((bool_t) 1);
										}
									else
										{
											long BgL_iz00_4561;

											BgL_iz00_4561 = (BgL_iz00_2371 + ((long) 1));
											BgL_iz00_2371 = BgL_iz00_4561;
											goto BgL_zc3z04anonymousza32091ze3z87_2372;
										}
								}
						}
					}
					if (BgL_test2623z00_4553)
						{	/* SawJvm/jld.scm 558 */
							return BgL_libz00_37;
						}
					else
						{	/* SawJvm/jld.scm 558 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_jvmzd2bigloozd2classpathz00zzsaw_jvm_ldz00(),
								BgL_libz00_37);
						}
				}
			}
		}

	}



/* list->path-string */
	obj_t BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(obj_t BgL_pathz00_38,
		obj_t BgL_separatorz00_39)
	{
		{	/* SawJvm/jld.scm 565 */
			{	/* SawJvm/jld.scm 566 */
				obj_t BgL_rpathz00_2382;

				BgL_rpathz00_2382 = bgl_reverse(BgL_pathz00_38);
				{	/* SawJvm/jld.scm 567 */
					obj_t BgL_g1120z00_2383;
					obj_t BgL_g1121z00_2384;

					BgL_g1120z00_2383 = CDR(((obj_t) BgL_rpathz00_2382));
					BgL_g1121z00_2384 = CAR(((obj_t) BgL_rpathz00_2382));
					{
						obj_t BgL_pathz00_2386;
						obj_t BgL_resz00_2387;

						BgL_pathz00_2386 = BgL_g1120z00_2383;
						BgL_resz00_2387 = BgL_g1121z00_2384;
					BgL_zc3z04anonymousza32099ze3z87_2388:
						if (NULLP(BgL_pathz00_2386))
							{	/* SawJvm/jld.scm 569 */
								return BgL_resz00_2387;
							}
						else
							{	/* SawJvm/jld.scm 571 */
								obj_t BgL_arg2101z00_2390;
								obj_t BgL_arg2102z00_2391;

								BgL_arg2101z00_2390 = CDR(((obj_t) BgL_pathz00_2386));
								{	/* SawJvm/jld.scm 571 */
									obj_t BgL_arg2103z00_2392;

									BgL_arg2103z00_2392 = CAR(((obj_t) BgL_pathz00_2386));
									BgL_arg2102z00_2391 =
										string_append_3(BgL_arg2103z00_2392, BgL_separatorz00_39,
										BgL_resz00_2387);
								}
								{
									obj_t BgL_resz00_4578;
									obj_t BgL_pathz00_4577;

									BgL_pathz00_4577 = BgL_arg2101z00_2390;
									BgL_resz00_4578 = BgL_arg2102z00_2391;
									BgL_resz00_2387 = BgL_resz00_4578;
									BgL_pathz00_2386 = BgL_pathz00_4577;
									goto BgL_zc3z04anonymousza32099ze3z87_2388;
								}
							}
					}
				}
			}
		}

	}



/* list->sh-path-string */
	obj_t BGl_listzd2ze3shzd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t BgL_pathz00_40)
	{
		{	/* SawJvm/jld.scm 576 */
			{	/* SawJvm/jld.scm 578 */
				obj_t BgL_arg2104z00_2394;

				if (STRINGP(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 578 */
						BgL_arg2104z00_2394 =
							BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 578 */
						BgL_arg2104z00_2394 = BGl_string2422z00zzsaw_jvm_ldz00;
					}
				return
					BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(BgL_pathz00_40,
					BgL_arg2104z00_2394);
			}
		}

	}



/* list->msdos-path-string */
	obj_t BGl_listzd2ze3msdoszd2pathzd2stringz31zzsaw_jvm_ldz00(obj_t
		BgL_pathz00_41)
	{
		{	/* SawJvm/jld.scm 585 */
			{	/* SawJvm/jld.scm 587 */
				obj_t BgL_arg2106z00_2396;

				if (STRINGP(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00))
					{	/* SawJvm/jld.scm 587 */
						BgL_arg2106z00_2396 =
							BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00;
					}
				else
					{	/* SawJvm/jld.scm 587 */
						BgL_arg2106z00_2396 = BGl_string2423z00zzsaw_jvm_ldz00;
					}
				return
					BGl_listzd2ze3pathzd2stringze3zzsaw_jvm_ldz00(BgL_pathz00_41,
					BgL_arg2106z00_2396);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_ldz00()
	{
		{	/* SawJvm/jld.scm 16 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 117219677),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2424z00zzsaw_jvm_ldz00));
		}

	}

#ifdef __cplusplus
}
#endif
