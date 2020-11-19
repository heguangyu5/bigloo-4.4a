/*===========================================================================*/
/*   (Unsafe/pregexp.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/pregexp.scm -indent -o objs/obj_u/Unsafe/pregexp.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_keyword2921z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2927z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2929z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2931z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2936z00zz__regexpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_regexpzd2patternzd2zz__regexpz00(obj_t);
	static obj_t BGl_keyword2939z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_pregexpzd2readzd2branchz00zz__regexpz00(obj_t, obj_t, long);
	static obj_t BGl_z62regexpzf3z91zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_keyword2942z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2945z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2948z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31863ze3ze5zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31839ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2subpatternz00zz__regexpz00(obj_t, long,
		long);
	static obj_t BGl_symbol2906z00zz__regexpz00 = BUNSPEC;
	static obj_t
		BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__regexpz00(unsigned
		char, obj_t);
	static obj_t BGl_symbol2908z00zz__regexpz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_keyword2958z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31792ze3ze5zz__regexpz00(obj_t, obj_t);
	static bool_t BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00;
	static obj_t BGl_z62zc3z04anonymousza31784ze3ze5zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_symbol2924z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__regexpz00();
	static obj_t BGl_keyword2970z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2890z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2972z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2892z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2974z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2894z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2976z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2896z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2978z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62pregexpzd2quotezb0zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31785ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_keyword2898z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31777ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__regexpz00(obj_t, long,
		long);
	static obj_t BGl_symbol2933z00zz__regexpz00 = BUNSPEC;
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_keyword2980z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2982z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2984z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2986z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31883ze3ze5zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__regexpz00();
	static obj_t BGl_keyword2988z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_list3006z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00(obj_t,
		obj_t, long);
	static obj_t BGl__pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__regexpz00();
	static obj_t BGl_keyword2990z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2992z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2994z00zz__regexpz00 = BUNSPEC;
	extern obj_t string_to_keyword(char *);
	static obj_t BGl_z62loupzd2pzb0zz__regexpz00(obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long,
		obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62loupzd2qzb0zz__regexpz00(obj_t, bool_t, bool_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long, obj_t);
	static obj_t BGl_symbol2950z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2952z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2954z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2956z00zz__regexpz00 = BUNSPEC;
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpz00zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31877ze3ze5zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31869ze3ze5zz__regexpz00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_list3028z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2960z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2963z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2965z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol2968z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62loupzd2seqzb0zz__regexpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replacezd2zz__regexpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_pregexpzd2reversez12zc0zz__regexpz00(obj_t);
	static obj_t BGl_z62pregexpzd2replacezb0zz__regexpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__regexpz00(obj_t, long,
		long);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_appendzd221011zd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__regexpz00(obj_t, obj_t,
		long);
	static obj_t BGl_methodzd2initzd2zz__regexpz00();
	static obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__regexpz00(obj_t,
		long, long);
	static obj_t BGl_z62identityz62zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_symbol2996z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62regexpzd2capturezd2countz62zz__regexpz00(obj_t, obj_t);
	extern obj_t bgl_make_regexp(obj_t);
	static obj_t BGl_z62pregexpzd2splitzb0zz__regexpz00(obj_t, obj_t, obj_t);
	static unsigned char BGl_za2pregexpzd2commentzd2charza2z00zz__regexpz00;
	BGL_EXPORTED_DECL long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62g1104z62zz__regexpz00(obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62fkz62zz__regexpz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t);
	static obj_t BGl_z52pregexpz52zz__regexpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t);
	static obj_t BGl_z62loupzd2orzb0zz__regexpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00(obj_t,
		obj_t, long);
	static obj_t BGl_symbol3000z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol3002z00zz__regexpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_pregexpzd2listzd2refz00zz__regexpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31801ze3ze5zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_symbol3010z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol3017z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_symbol3019z00zz__regexpz00 = BUNSPEC;
	static unsigned char BGl_za2pregexpzd2tabzd2charza2z00zz__regexpz00;
	static obj_t BGl_z62subz62zz__regexpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00(obj_t, obj_t, obj_t,
		long, long);
	static obj_t BGl_pregexpzd2readzd2patternz00zz__regexpz00(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__regexpz00();
	static long BGl_za2pregexpzd2versionza2zd2zz__regexpz00;
	static obj_t BGl_list2917z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__regexpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__regexpz00();
	static obj_t BGl_z62zc3z04anonymousza31804ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_list2920z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl_list2923z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_list2926z00zz__regexpz00 = BUNSPEC;
	static unsigned char BGl_za2pregexpzd2returnzd2charza2z00zz__regexpz00;
	static obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62pregexpz62zz__regexpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list2935z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_list2938z00zz__regexpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_list2941z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_list2944z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_list2947z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62zc3z04anonymousza31824ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__regexpz00(obj_t,
		obj_t, long, obj_t, obj_t, obj_t);
	static long BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__regexpz00;
	static obj_t BGl_z62loupzd2onezd2ofzd2charszb0zz__regexpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2piecez00zz__regexpz00(obj_t, obj_t, long);
	static obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__regexpz00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2numsz00zz__regexpz00(obj_t, long, long);
	static obj_t BGl_z62zc3z04anonymousza31818ze3ze5zz__regexpz00(obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_keyword2900z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2902z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_subze70ze7zz__regexpz00(obj_t);
	static obj_t BGl_keyword2904z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zz__regexpz00(obj_t);
	static obj_t BGl_keyword2911z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2913z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2915z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_keyword2918z00zz__regexpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__regexpz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3004z00zz__regexpz00,
		BgL_bgl_za762za7c3za704anonymo3031za7,
		BGl_z62zc3z04anonymousza31824ze3ze5zz__regexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3005z00zz__regexpz00,
		BgL_bgl_za762za7c3za704anonymo3032za7,
		BGl_z62zc3z04anonymousza31828ze3ze5zz__regexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3011z00zz__regexpz00,
		BgL_bgl_string3011za700za7za7_3033za7,
		"greedy-quantifier-operand-could-be-empty", 40);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3007z00zz__regexpz00,
		BgL_bgl_za762za7c3za704anonymo3034za7,
		BGl_z62zc3z04anonymousza31839ze3ze5zz__regexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3012z00zz__regexpz00,
		BgL_bgl_string3012za700za7za7_3035za7, "", 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3008z00zz__regexpz00,
		BgL_bgl_za762za7c3za704anonymo3036za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zz__regexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3013z00zz__regexpz00,
		BgL_bgl_string3013za700za7za7_3037za7, "&pregexp", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3009z00zz__regexpz00,
		BgL_bgl_za762za7c3za704anonymo3038za7,
		BGl_z62zc3z04anonymousza31856ze3ze5zz__regexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3014z00zz__regexpz00,
		BgL_bgl_string3014za700za7za7_3039za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3015z00zz__regexpz00,
		BgL_bgl_string3015za700za7za7_3040za7, "(*UTF8)", 7);
	      DEFINE_STRING(BGl_string3016z00zz__regexpz00,
		BgL_bgl_string3016za700za7za7_3041za7, "_pregexp-match-positions", 24);
	      DEFINE_STRING(BGl_string3018z00zz__regexpz00,
		BgL_bgl_string3018za700za7za7_3042za7,
		"pattern-must-be-compiled-or-string-regexp", 41);
	      DEFINE_STRING(BGl_string3020z00zz__regexpz00,
		BgL_bgl_string3020za700za7za7_3043za7, "pregexp-match-positions", 23);
	      DEFINE_STRING(BGl_string3021z00zz__regexpz00,
		BgL_bgl_string3021za700za7za7_3044za7, "&pregexp-match-n-positions!", 27);
	      DEFINE_STRING(BGl_string3022z00zz__regexpz00,
		BgL_bgl_string3022za700za7za7_3045za7, "vector", 6);
	      DEFINE_STRING(BGl_string3023z00zz__regexpz00,
		BgL_bgl_string3023za700za7za7_3046za7, "bint", 4);
	      DEFINE_STRING(BGl_string3024z00zz__regexpz00,
		BgL_bgl_string3024za700za7za7_3047za7, "_pregexp-match", 14);
	      DEFINE_STRING(BGl_string3025z00zz__regexpz00,
		BgL_bgl_string3025za700za7za7_3048za7, "&pregexp-split", 14);
	      DEFINE_STRING(BGl_string3026z00zz__regexpz00,
		BgL_bgl_string3026za700za7za7_3049za7, "&pregexp-replace", 16);
	      DEFINE_STRING(BGl_string3027z00zz__regexpz00,
		BgL_bgl_string3027za700za7za7_3050za7, "&pregexp-replace*", 17);
	      DEFINE_STRING(BGl_string3029z00zz__regexpz00,
		BgL_bgl_string3029za700za7za7_3051za7, "&pregexp-quote", 14);
	      DEFINE_STRING(BGl_string3030z00zz__regexpz00,
		BgL_bgl_string3030za700za7za7_3052za7, "__regexp", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2splitzd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2spl3053z00, BGl_z62pregexpzd2splitzb0zz__regexpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2quotezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2quo3054z00, BGl_z62pregexpzd2quotezb0zz__regexpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replaceza2zd2envza2zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep3055z00,
		BGl_z62pregexpzd2replaceza2z12zz__regexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2nzd2positionsz12zd2envz12zz__regexpz00,
		BgL_bgl_za762pregexpza7d2mat3056z00,
		BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2901z00zz__regexpz00,
		BgL_bgl_string2901za700za7za7_3057za7, "any", 3);
	      DEFINE_STRING(BGl_string2903z00zz__regexpz00,
		BgL_bgl_string2903za700za7za7_3058za7, "neg-char", 8);
	      DEFINE_STRING(BGl_string2905z00zz__regexpz00,
		BgL_bgl_string2905za700za7za7_3059za7, "backref", 7);
	      DEFINE_STRING(BGl_string2907z00zz__regexpz00,
		BgL_bgl_string2907za700za7za7_3060za7, "backslash", 9);
	      DEFINE_STRING(BGl_string2909z00zz__regexpz00,
		BgL_bgl_string2909za700za7za7_3061za7, "pregexp-read-piece", 18);
	      DEFINE_STRING(BGl_string2910z00zz__regexpz00,
		BgL_bgl_string2910za700za7za7_3062za7, "pregexp", 7);
	      DEFINE_STRING(BGl_string2912z00zz__regexpz00,
		BgL_bgl_string2912za700za7za7_3063za7, "wbdry", 5);
	      DEFINE_STRING(BGl_string2914z00zz__regexpz00,
		BgL_bgl_string2914za700za7za7_3064za7, "not-wbdry", 9);
	      DEFINE_STRING(BGl_string2916z00zz__regexpz00,
		BgL_bgl_string2916za700za7za7_3065za7, "digit", 5);
	      DEFINE_STRING(BGl_string2919z00zz__regexpz00,
		BgL_bgl_string2919za700za7za7_3066za7, "space", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2matchzd2envz00zz__regexpz00,
		BgL_bgl__pregexpza7d2match3067za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2zz__regexpz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2922z00zz__regexpz00,
		BgL_bgl_string2922za700za7za7_3068za7, "word", 4);
	      DEFINE_STRING(BGl_string2925z00zz__regexpz00,
		BgL_bgl_string2925za700za7za7_3069za7, "pregexp-read-posix-char-class", 29);
	      DEFINE_STRING(BGl_string2928z00zz__regexpz00,
		BgL_bgl_string2928za700za7za7_3070za7, "sub", 3);
	      DEFINE_STRING(BGl_string2930z00zz__regexpz00,
		BgL_bgl_string2930za700za7za7_3071za7, "case-sensitive", 14);
	      DEFINE_STRING(BGl_string2932z00zz__regexpz00,
		BgL_bgl_string2932za700za7za7_3072za7, "case-insensitive", 16);
	      DEFINE_STRING(BGl_string2934z00zz__regexpz00,
		BgL_bgl_string2934za700za7za7_3073za7, "pregexp-read-cluster-type", 25);
	      DEFINE_STRING(BGl_string2937z00zz__regexpz00,
		BgL_bgl_string2937za700za7za7_3074za7, "lookahead", 9);
	      DEFINE_STRING(BGl_string2940z00zz__regexpz00,
		BgL_bgl_string2940za700za7za7_3075za7, "neg-lookahead", 13);
	      DEFINE_STRING(BGl_string2943z00zz__regexpz00,
		BgL_bgl_string2943za700za7za7_3076za7, "no-backtrack", 12);
	      DEFINE_STRING(BGl_string2946z00zz__regexpz00,
		BgL_bgl_string2946za700za7za7_3077za7, "lookbehind", 10);
	      DEFINE_STRING(BGl_string2949z00zz__regexpz00,
		BgL_bgl_string2949za700za7za7_3078za7, "neg-lookbehind", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2envzd2zz__regexpz00,
		BgL_bgl_za762pregexpza762za7za7_3079z00, va_generic_entry,
		BGl_z62pregexpz62zz__regexpz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2951z00zz__regexpz00,
		BgL_bgl_string2951za700za7za7_3080za7, "pregexp-read-subpattern", 23);
	      DEFINE_STRING(BGl_string2953z00zz__regexpz00,
		BgL_bgl_string2953za700za7za7_3081za7, "at-most", 7);
	      DEFINE_STRING(BGl_string2955z00zz__regexpz00,
		BgL_bgl_string2955za700za7za7_3082za7, "at-least", 8);
	      DEFINE_STRING(BGl_string2957z00zz__regexpz00,
		BgL_bgl_string2957za700za7za7_3083za7, "minimal?", 8);
	      DEFINE_STRING(BGl_string2959z00zz__regexpz00,
		BgL_bgl_string2959za700za7za7_3084za7, "between", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regexpzd2capturezd2countzd2envzd2zz__regexpz00,
		BgL_bgl_za762regexpza7d2capt3085z00,
		BGl_z62regexpzd2capturezd2countz62zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2961z00zz__regexpz00,
		BgL_bgl_string2961za700za7za7_3086za7, "next-i", 6);
	      DEFINE_STRING(BGl_string2962z00zz__regexpz00,
		BgL_bgl_string2962za700za7za7_3087za7,
		"left bracket must be followed by number", 39);
	      DEFINE_STRING(BGl_string2964z00zz__regexpz00,
		BgL_bgl_string2964za700za7za7_3088za7, "pregexp-wrap-quantifier-if-any",
		30);
	      DEFINE_STRING(BGl_string2966z00zz__regexpz00,
		BgL_bgl_string2966za700za7za7_3089za7, "pregexp-read-nums", 17);
	      DEFINE_STRING(BGl_string2967z00zz__regexpz00,
		BgL_bgl_string2967za700za7za7_3090za7, "character class ended too soon",
		30);
	      DEFINE_STRING(BGl_string2886z00zz__regexpz00,
		BgL_bgl_string2886za700za7za7_3091za7,
		"/tmp/4.4a/runtime/Unsafe/pregexp.scm", 36);
	      DEFINE_STRING(BGl_string2887z00zz__regexpz00,
		BgL_bgl_string2887za700za7za7_3092za7, "&regexp-pattern", 15);
	      DEFINE_STRING(BGl_string2969z00zz__regexpz00,
		BgL_bgl_string2969za700za7za7_3093za7, "pregexp-read-char-list", 22);
	      DEFINE_STRING(BGl_string2888z00zz__regexpz00,
		BgL_bgl_string2888za700za7za7_3094za7, "regexp", 6);
	      DEFINE_STRING(BGl_string2889z00zz__regexpz00,
		BgL_bgl_string2889za700za7za7_3095za7, "&regexp-capture-count", 21);
	      DEFINE_STRING(BGl_string2971z00zz__regexpz00,
		BgL_bgl_string2971za700za7za7_3096za7, "one-of-chars", 12);
	      DEFINE_STRING(BGl_string2891z00zz__regexpz00,
		BgL_bgl_string2891za700za7za7_3097za7, "seq", 3);
	      DEFINE_STRING(BGl_string2973z00zz__regexpz00,
		BgL_bgl_string2973za700za7za7_3098za7, "char-range", 10);
	      DEFINE_STRING(BGl_string2893z00zz__regexpz00,
		BgL_bgl_string2893za700za7za7_3099za7, "or", 2);
	      DEFINE_STRING(BGl_string2975z00zz__regexpz00,
		BgL_bgl_string2975za700za7za7_3100za7, "alnum", 5);
	      DEFINE_STRING(BGl_string2895z00zz__regexpz00,
		BgL_bgl_string2895za700za7za7_3101za7, "empty", 5);
	      DEFINE_STRING(BGl_string2977z00zz__regexpz00,
		BgL_bgl_string2977za700za7za7_3102za7, "alpha", 5);
	      DEFINE_STRING(BGl_string2897z00zz__regexpz00,
		BgL_bgl_string2897za700za7za7_3103za7, "bos", 3);
	      DEFINE_STRING(BGl_string2979z00zz__regexpz00,
		BgL_bgl_string2979za700za7za7_3104za7, "ascii", 5);
	      DEFINE_STRING(BGl_string2899z00zz__regexpz00,
		BgL_bgl_string2899za700za7za7_3105za7, "eos", 3);
	      DEFINE_STRING(BGl_string2981z00zz__regexpz00,
		BgL_bgl_string2981za700za7za7_3106za7, "blank", 5);
	      DEFINE_STRING(BGl_string2983z00zz__regexpz00,
		BgL_bgl_string2983za700za7za7_3107za7, "cntrl", 5);
	      DEFINE_STRING(BGl_string2985z00zz__regexpz00,
		BgL_bgl_string2985za700za7za7_3108za7, "graph", 5);
	      DEFINE_STRING(BGl_string2987z00zz__regexpz00,
		BgL_bgl_string2987za700za7za7_3109za7, "lower", 5);
	      DEFINE_STRING(BGl_string2989z00zz__regexpz00,
		BgL_bgl_string2989za700za7za7_3110za7, "print", 5);
	      DEFINE_STRING(BGl_string2991z00zz__regexpz00,
		BgL_bgl_string2991za700za7za7_3111za7, "punct", 5);
	      DEFINE_STRING(BGl_string2993z00zz__regexpz00,
		BgL_bgl_string2993za700za7za7_3112za7, "upper", 5);
	      DEFINE_STRING(BGl_string2995z00zz__regexpz00,
		BgL_bgl_string2995za700za7za7_3113za7, "xdigit", 6);
	      DEFINE_STRING(BGl_string2997z00zz__regexpz00,
		BgL_bgl_string2997za700za7za7_3114za7, "pregexp-check-if-in-char-class?",
		31);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzd2patternzd2envz00zz__regexpz00,
		BgL_bgl_za762regexpza7d2patt3115z00,
		BGl_z62regexpzd2patternzb0zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzf3zd2envz21zz__regexpz00,
		BgL_bgl_za762regexpza7f3za791za73116z00, BGl_z62regexpzf3z91zz__regexpz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replacezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep3117z00,
		BGl_z62pregexpzd2replacezb0zz__regexpz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2998z00zz__regexpz00,
		BgL_bgl_za762identityza762za7za73118z00, BGl_z62identityz62zz__regexpz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2999z00zz__regexpz00,
		BgL_bgl_za762g1104za762za7za7__r3119z00, BGl_z62g1104z62zz__regexpz00, 0L,
		BUNSPEC, 0);
	extern obj_t BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2positionszd2envzd2zz__regexpz00,
		BgL_bgl__pregexpza7d2match3120za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2positionsz00zz__regexpz00, BFALSE, -1);
	extern obj_t BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00;
	   
		 
		DEFINE_STRING(BGl_string3001z00zz__regexpz00,
		BgL_bgl_string3001za700za7za7_3121za7, "pregexp-match-positions-aux", 27);
	      DEFINE_STRING(BGl_string3003z00zz__regexpz00,
		BgL_bgl_string3003za700za7za7_3122za7, "non-existent-backref", 20);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_keyword2921z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2927z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2929z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2931z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2936z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2939z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2942z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2945z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2948z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2906z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2908z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2958z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2924z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2970z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2890z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2972z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2892z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2974z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2894z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2976z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2896z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2978z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2898z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2933z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2980z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2982z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2984z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2986z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2988z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list3006z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2990z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2992z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2994z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2950z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2952z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2954z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2956z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list3028z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2960z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2963z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2965z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2968z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol2996z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol3000z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol3002z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol3010z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol3017z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_symbol3019z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2917z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2920z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2923z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2926z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2935z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2938z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2941z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2944z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2947z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2900z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2902z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2904z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2911z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2913z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2915z00zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_keyword2918z00zz__regexpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long
		BgL_checksumz00_4799, char *BgL_fromz00_4800)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__regexpz00))
				{
					BGl_requirezd2initializa7ationz75zz__regexpz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__regexpz00();
					BGl_cnstzd2initzd2zz__regexpz00();
					BGl_importedzd2moduleszd2initz00zz__regexpz00();
					return BGl_toplevelzd2initzd2zz__regexpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			BGl_keyword2890z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2891z00zz__regexpz00);
			BGl_keyword2892z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2893z00zz__regexpz00);
			BGl_keyword2894z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2895z00zz__regexpz00);
			BGl_keyword2896z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2897z00zz__regexpz00);
			BGl_keyword2898z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2899z00zz__regexpz00);
			BGl_keyword2900z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2901z00zz__regexpz00);
			BGl_keyword2902z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2903z00zz__regexpz00);
			BGl_keyword2904z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2905z00zz__regexpz00);
			BGl_symbol2906z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2907z00zz__regexpz00);
			BGl_symbol2908z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2909z00zz__regexpz00);
			BGl_keyword2911z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2912z00zz__regexpz00);
			BGl_keyword2913z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2914z00zz__regexpz00);
			BGl_keyword2915z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2916z00zz__regexpz00);
			BGl_list2917z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2902z00zz__regexpz00,
				MAKE_YOUNG_PAIR(BGl_keyword2915z00zz__regexpz00, BNIL));
			BGl_keyword2918z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2919z00zz__regexpz00);
			BGl_list2920z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2902z00zz__regexpz00,
				MAKE_YOUNG_PAIR(BGl_keyword2918z00zz__regexpz00, BNIL));
			BGl_keyword2921z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2922z00zz__regexpz00);
			BGl_list2923z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2902z00zz__regexpz00,
				MAKE_YOUNG_PAIR(BGl_keyword2921z00zz__regexpz00, BNIL));
			BGl_symbol2924z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2925z00zz__regexpz00);
			BGl_keyword2927z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2928z00zz__regexpz00);
			BGl_list2926z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2927z00zz__regexpz00, BNIL);
			BGl_keyword2929z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2930z00zz__regexpz00);
			BGl_keyword2931z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2932z00zz__regexpz00);
			BGl_symbol2933z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2934z00zz__regexpz00);
			BGl_keyword2936z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2937z00zz__regexpz00);
			BGl_list2935z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2936z00zz__regexpz00, BNIL);
			BGl_keyword2939z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2940z00zz__regexpz00);
			BGl_list2938z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2939z00zz__regexpz00, BNIL);
			BGl_keyword2942z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2943z00zz__regexpz00);
			BGl_list2941z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2942z00zz__regexpz00, BNIL);
			BGl_keyword2945z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2946z00zz__regexpz00);
			BGl_list2944z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2945z00zz__regexpz00, BNIL);
			BGl_keyword2948z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2949z00zz__regexpz00);
			BGl_list2947z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2948z00zz__regexpz00, BNIL);
			BGl_symbol2950z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2951z00zz__regexpz00);
			BGl_symbol2952z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2953z00zz__regexpz00);
			BGl_symbol2954z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2955z00zz__regexpz00);
			BGl_symbol2956z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2957z00zz__regexpz00);
			BGl_keyword2958z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2959z00zz__regexpz00);
			BGl_symbol2960z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2961z00zz__regexpz00);
			BGl_symbol2963z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2964z00zz__regexpz00);
			BGl_symbol2965z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2966z00zz__regexpz00);
			BGl_symbol2968z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2969z00zz__regexpz00);
			BGl_keyword2970z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2971z00zz__regexpz00);
			BGl_keyword2972z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2973z00zz__regexpz00);
			BGl_keyword2974z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2975z00zz__regexpz00);
			BGl_keyword2976z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2977z00zz__regexpz00);
			BGl_keyword2978z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2979z00zz__regexpz00);
			BGl_keyword2980z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2981z00zz__regexpz00);
			BGl_keyword2982z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2983z00zz__regexpz00);
			BGl_keyword2984z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2985z00zz__regexpz00);
			BGl_keyword2986z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2987z00zz__regexpz00);
			BGl_keyword2988z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2989z00zz__regexpz00);
			BGl_keyword2990z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2991z00zz__regexpz00);
			BGl_keyword2992z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2993z00zz__regexpz00);
			BGl_keyword2994z00zz__regexpz00 =
				bstring_to_keyword(BGl_string2995z00zz__regexpz00);
			BGl_symbol2996z00zz__regexpz00 =
				bstring_to_symbol(BGl_string2997z00zz__regexpz00);
			BGl_symbol3000z00zz__regexpz00 =
				bstring_to_symbol(BGl_string3001z00zz__regexpz00);
			BGl_symbol3002z00zz__regexpz00 =
				bstring_to_symbol(BGl_string3003z00zz__regexpz00);
			BGl_list3006z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2958z00zz__regexpz00,
				MAKE_YOUNG_PAIR(BBOOL(((bool_t) 0)),
					MAKE_YOUNG_PAIR(BINT(((long) 0)),
						MAKE_YOUNG_PAIR(BBOOL(((bool_t) 0)),
							MAKE_YOUNG_PAIR(BGl_keyword2900z00zz__regexpz00, BNIL)))));
			BGl_symbol3010z00zz__regexpz00 =
				bstring_to_symbol(BGl_string3011z00zz__regexpz00);
			BGl_symbol3017z00zz__regexpz00 =
				bstring_to_symbol(BGl_string3018z00zz__regexpz00);
			BGl_symbol3019z00zz__regexpz00 =
				bstring_to_symbol(BGl_string3020z00zz__regexpz00);
			return (BGl_list3028z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')),
					MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '.')),
						MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '?')),
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '*')),
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '+')),
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '|')),
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '^')),
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '$')),
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '[')),
													MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '{')),
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '}')),
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '(')),
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
																		BNIL)))))))))))))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			BGl_za2pregexpzd2versionza2zd2zz__regexpz00 = ((long) 20050502);
			BGl_za2pregexpzd2commentzd2charza2z00zz__regexpz00 =
				((unsigned char) '#');
			BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__regexpz00 = ((long) 0);
			BGl_za2pregexpzd2returnzd2charza2z00zz__regexpz00 =
				((((long) 13) + ((long) 0)));
			BGl_za2pregexpzd2tabzd2charza2z00zz__regexpz00 =
				((((long) 9) + ((long) 0)));
			return (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00 =
				((bool_t) 1), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__regexpz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1165;

				BgL_headz00_1165 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2666;
					obj_t BgL_tailz00_2667;

					BgL_prevz00_2666 = BgL_headz00_1165;
					BgL_tailz00_2667 = BgL_l1z00_1;
				BgL_loopz00_2665:
					if (PAIRP(BgL_tailz00_2667))
						{
							obj_t BgL_newzd2prevzd2_2673;

							BgL_newzd2prevzd2_2673 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2667), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2666, BgL_newzd2prevzd2_2673);
							{
								obj_t BgL_tailz00_4921;
								obj_t BgL_prevz00_4920;

								BgL_prevz00_4920 = BgL_newzd2prevzd2_2673;
								BgL_tailz00_4921 = CDR(BgL_tailz00_2667);
								BgL_tailz00_2667 = BgL_tailz00_4921;
								BgL_prevz00_2666 = BgL_prevz00_4920;
								goto BgL_loopz00_2665;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1165);
			}
		}

	}



/* regexp? */
	BGL_EXPORTED_DEF bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t BgL_objz00_3)
	{
		{	/* Unsafe/pregexp.scm 92 */
			return BGL_REGEXPP(BgL_objz00_3);
		}

	}



/* &regexp? */
	obj_t BGl_z62regexpzf3z91zz__regexpz00(obj_t BgL_envz00_4471,
		obj_t BgL_objz00_4472)
	{
		{	/* Unsafe/pregexp.scm 92 */
			return BBOOL(BGl_regexpzf3zf3zz__regexpz00(BgL_objz00_4472));
		}

	}



/* regexp-pattern */
	BGL_EXPORTED_DEF obj_t BGl_regexpzd2patternzd2zz__regexpz00(obj_t BgL_rez00_4)
	{
		{	/* Unsafe/pregexp.scm 98 */
			return BGL_REGEXP_PAT(BgL_rez00_4);
		}

	}



/* &regexp-pattern */
	obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t BgL_envz00_4473,
		obj_t BgL_rez00_4474)
	{
		{	/* Unsafe/pregexp.scm 98 */
			{	/* Unsafe/pregexp.scm 99 */
				obj_t BgL_auxz00_4928;

				if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_4474))
					{	/* Unsafe/pregexp.scm 99 */
						BgL_auxz00_4928 = BgL_rez00_4474;
					}
				else
					{
						obj_t BgL_auxz00_4931;

						BgL_auxz00_4931 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 3928)), BGl_string2887z00zz__regexpz00,
							BGl_string2888z00zz__regexpz00, BgL_rez00_4474);
						FAILURE(BgL_auxz00_4931, BFALSE, BFALSE);
					}
				return BGl_regexpzd2patternzd2zz__regexpz00(BgL_auxz00_4928);
			}
		}

	}



/* regexp-capture-count */
	BGL_EXPORTED_DEF long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t
		BgL_rez00_5)
	{
		{	/* Unsafe/pregexp.scm 104 */
			return BGL_REGEXP_CAPTURE_COUNT(BgL_rez00_5);
		}

	}



/* &regexp-capture-count */
	obj_t BGl_z62regexpzd2capturezd2countz62zz__regexpz00(obj_t BgL_envz00_4475,
		obj_t BgL_rez00_4476)
	{
		{	/* Unsafe/pregexp.scm 104 */
			{	/* Unsafe/pregexp.scm 105 */
				long BgL_tmpz00_4937;

				{	/* Unsafe/pregexp.scm 105 */
					obj_t BgL_auxz00_4938;

					if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_4476))
						{	/* Unsafe/pregexp.scm 105 */
							BgL_auxz00_4938 = BgL_rez00_4476;
						}
					else
						{
							obj_t BgL_auxz00_4941;

							BgL_auxz00_4941 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
								BINT(((long) 4217)), BGl_string2889z00zz__regexpz00,
								BGl_string2888z00zz__regexpz00, BgL_rez00_4476);
							FAILURE(BgL_auxz00_4941, BFALSE, BFALSE);
						}
					BgL_tmpz00_4937 =
						BGl_regexpzd2capturezd2countz00zz__regexpz00(BgL_auxz00_4938);
				}
				return BINT(BgL_tmpz00_4937);
			}
		}

	}



/* pregexp-reverse! */
	obj_t BGl_pregexpzd2reversez12zc0zz__regexpz00(obj_t BgL_sz00_8)
	{
		{	/* Unsafe/pregexp.scm 137 */
			{
				obj_t BgL_sz00_2696;
				obj_t BgL_rz00_2697;

				BgL_sz00_2696 = BgL_sz00_8;
				BgL_rz00_2697 = BNIL;
			BgL_loopz00_2695:
				if (NULLP(BgL_sz00_2696))
					{	/* Unsafe/pregexp.scm 141 */
						return BgL_rz00_2697;
					}
				else
					{	/* Unsafe/pregexp.scm 142 */
						obj_t BgL_dz00_2701;

						BgL_dz00_2701 = CDR(((obj_t) BgL_sz00_2696));
						{	/* Unsafe/pregexp.scm 143 */
							obj_t BgL_tmpz00_4951;

							BgL_tmpz00_4951 = ((obj_t) BgL_sz00_2696);
							SET_CDR(BgL_tmpz00_4951, BgL_rz00_2697);
						}
						{
							obj_t BgL_rz00_4955;
							obj_t BgL_sz00_4954;

							BgL_sz00_4954 = BgL_dz00_2701;
							BgL_rz00_4955 = BgL_sz00_2696;
							BgL_rz00_2697 = BgL_rz00_4955;
							BgL_sz00_2696 = BgL_sz00_4954;
							goto BgL_loopz00_2695;
						}
					}
			}
		}

	}



/* pregexp-read-pattern */
	obj_t BGl_pregexpzd2readzd2patternz00zz__regexpz00(obj_t BgL_sz00_9,
		obj_t BgL_iz00_10, long BgL_nz00_11)
	{
		{	/* Unsafe/pregexp.scm 150 */
			if (((long) CINT(BgL_iz00_10) >= BgL_nz00_11))
				{	/* Unsafe/pregexp.scm 154 */
					obj_t BgL_arg1280z00_1184;

					{	/* Unsafe/pregexp.scm 154 */
						obj_t BgL_arg1284z00_1187;

						{	/* Unsafe/pregexp.scm 154 */
							obj_t BgL_list1287z00_1190;

							BgL_list1287z00_1190 =
								MAKE_YOUNG_PAIR(BGl_keyword2890z00zz__regexpz00, BNIL);
							BgL_arg1284z00_1187 = BgL_list1287z00_1190;
						}
						{	/* Unsafe/pregexp.scm 154 */
							obj_t BgL_list1285z00_1188;

							{	/* Unsafe/pregexp.scm 154 */
								obj_t BgL_arg1286z00_1189;

								BgL_arg1286z00_1189 =
									MAKE_YOUNG_PAIR(BgL_arg1284z00_1187, BNIL);
								BgL_list1285z00_1188 =
									MAKE_YOUNG_PAIR(BGl_keyword2892z00zz__regexpz00,
									BgL_arg1286z00_1189);
							}
							BgL_arg1280z00_1184 = BgL_list1285z00_1188;
					}}
					{	/* Unsafe/pregexp.scm 153 */
						obj_t BgL_list1281z00_1185;

						{	/* Unsafe/pregexp.scm 153 */
							obj_t BgL_arg1282z00_1186;

							BgL_arg1282z00_1186 = MAKE_YOUNG_PAIR(BgL_iz00_10, BNIL);
							BgL_list1281z00_1185 =
								MAKE_YOUNG_PAIR(BgL_arg1280z00_1184, BgL_arg1282z00_1186);
						}
						return BgL_list1281z00_1185;
					}
				}
			else
				{
					obj_t BgL_branchesz00_1193;
					obj_t BgL_iz00_1194;

					BgL_branchesz00_1193 = BNIL;
					BgL_iz00_1194 = BgL_iz00_10;
				BgL_zc3z04anonymousza31288ze3z87_1195:
					{	/* Unsafe/pregexp.scm 156 */
						bool_t BgL_test3129z00_4964;

						if (((long) CINT(BgL_iz00_1194) >= BgL_nz00_11))
							{	/* Unsafe/pregexp.scm 156 */
								BgL_test3129z00_4964 = ((bool_t) 1);
							}
						else
							{	/* Unsafe/pregexp.scm 156 */
								BgL_test3129z00_4964 =
									(STRING_REF(BgL_sz00_9,
										(long) CINT(BgL_iz00_1194)) == ((unsigned char) ')'));
							}
						if (BgL_test3129z00_4964)
							{	/* Unsafe/pregexp.scm 158 */
								obj_t BgL_arg1292z00_1199;

								{	/* Unsafe/pregexp.scm 158 */
									obj_t BgL_arg1296z00_1202;

									BgL_arg1296z00_1202 =
										BGl_pregexpzd2reversez12zc0zz__regexpz00
										(BgL_branchesz00_1193);
									BgL_arg1292z00_1199 =
										MAKE_YOUNG_PAIR(BGl_keyword2892z00zz__regexpz00,
										BgL_arg1296z00_1202);
								}
								{	/* Unsafe/pregexp.scm 158 */
									obj_t BgL_list1293z00_1200;

									{	/* Unsafe/pregexp.scm 158 */
										obj_t BgL_arg1295z00_1201;

										BgL_arg1295z00_1201 = MAKE_YOUNG_PAIR(BgL_iz00_1194, BNIL);
										BgL_list1293z00_1200 =
											MAKE_YOUNG_PAIR(BgL_arg1292z00_1199, BgL_arg1295z00_1201);
									}
									return BgL_list1293z00_1200;
								}
							}
						else
							{	/* Unsafe/pregexp.scm 159 */
								obj_t BgL_vvz00_1203;

								{	/* Unsafe/pregexp.scm 161 */
									obj_t BgL_arg1300z00_1207;

									if (
										(STRING_REF(BgL_sz00_9,
												(long) CINT(BgL_iz00_1194)) == ((unsigned char) '|')))
										{	/* Unsafe/pregexp.scm 161 */
											BgL_arg1300z00_1207 =
												ADDFX(BgL_iz00_1194, BINT(((long) 1)));
										}
									else
										{	/* Unsafe/pregexp.scm 161 */
											BgL_arg1300z00_1207 = BgL_iz00_1194;
										}
									BgL_vvz00_1203 =
										BGl_pregexpzd2readzd2branchz00zz__regexpz00(BgL_sz00_9,
										BgL_arg1300z00_1207, BgL_nz00_11);
								}
								{	/* Unsafe/pregexp.scm 162 */
									obj_t BgL_arg1297z00_1204;
									obj_t BgL_arg1298z00_1205;

									{	/* Unsafe/pregexp.scm 162 */
										obj_t BgL_arg1299z00_1206;

										BgL_arg1299z00_1206 = CAR(((obj_t) BgL_vvz00_1203));
										BgL_arg1297z00_1204 =
											MAKE_YOUNG_PAIR(BgL_arg1299z00_1206,
											BgL_branchesz00_1193);
									}
									{	/* Unsafe/pregexp.scm 162 */
										obj_t BgL_pairz00_2733;

										BgL_pairz00_2733 = CDR(((obj_t) BgL_vvz00_1203));
										BgL_arg1298z00_1205 = CAR(BgL_pairz00_2733);
									}
									{
										obj_t BgL_iz00_4989;
										obj_t BgL_branchesz00_4988;

										BgL_branchesz00_4988 = BgL_arg1297z00_1204;
										BgL_iz00_4989 = BgL_arg1298z00_1205;
										BgL_iz00_1194 = BgL_iz00_4989;
										BgL_branchesz00_1193 = BgL_branchesz00_4988;
										goto BgL_zc3z04anonymousza31288ze3z87_1195;
									}
								}
							}
					}
				}
		}

	}



/* pregexp-read-branch */
	obj_t BGl_pregexpzd2readzd2branchz00zz__regexpz00(obj_t BgL_sz00_12,
		obj_t BgL_iz00_13, long BgL_nz00_14)
	{
		{	/* Unsafe/pregexp.scm 164 */
			{
				obj_t BgL_piecesz00_1216;
				obj_t BgL_iz00_1217;

				BgL_piecesz00_1216 = BNIL;
				BgL_iz00_1217 = BgL_iz00_13;
			BgL_zc3z04anonymousza31305ze3z87_1218:
				if (((long) CINT(BgL_iz00_1217) >= BgL_nz00_14))
					{	/* Unsafe/pregexp.scm 168 */
						obj_t BgL_arg1307z00_1220;

						{	/* Unsafe/pregexp.scm 168 */
							obj_t BgL_arg1310z00_1223;

							BgL_arg1310z00_1223 =
								BGl_pregexpzd2reversez12zc0zz__regexpz00(BgL_piecesz00_1216);
							BgL_arg1307z00_1220 =
								MAKE_YOUNG_PAIR(BGl_keyword2890z00zz__regexpz00,
								BgL_arg1310z00_1223);
						}
						{	/* Unsafe/pregexp.scm 168 */
							obj_t BgL_list1308z00_1221;

							{	/* Unsafe/pregexp.scm 168 */
								obj_t BgL_arg1309z00_1222;

								BgL_arg1309z00_1222 = MAKE_YOUNG_PAIR(BgL_iz00_1217, BNIL);
								BgL_list1308z00_1221 =
									MAKE_YOUNG_PAIR(BgL_arg1307z00_1220, BgL_arg1309z00_1222);
							}
							return BgL_list1308z00_1221;
						}
					}
				else
					{	/* Unsafe/pregexp.scm 169 */
						bool_t BgL_test3133z00_4997;

						{	/* Unsafe/pregexp.scm 169 */
							unsigned char BgL_cz00_1235;

							BgL_cz00_1235 =
								STRING_REF(BgL_sz00_12, (long) CINT(BgL_iz00_1217));
							{	/* Unsafe/pregexp.scm 170 */
								bool_t BgL__ortest_1042z00_1236;

								BgL__ortest_1042z00_1236 =
									(BgL_cz00_1235 == ((unsigned char) '|'));
								if (BgL__ortest_1042z00_1236)
									{	/* Unsafe/pregexp.scm 170 */
										BgL_test3133z00_4997 = BgL__ortest_1042z00_1236;
									}
								else
									{	/* Unsafe/pregexp.scm 170 */
										BgL_test3133z00_4997 =
											(BgL_cz00_1235 == ((unsigned char) ')'));
						}}}
						if (BgL_test3133z00_4997)
							{	/* Unsafe/pregexp.scm 172 */
								obj_t BgL_arg1312z00_1227;

								{	/* Unsafe/pregexp.scm 172 */
									obj_t BgL_arg1315z00_1230;

									BgL_arg1315z00_1230 =
										BGl_pregexpzd2reversez12zc0zz__regexpz00
										(BgL_piecesz00_1216);
									BgL_arg1312z00_1227 =
										MAKE_YOUNG_PAIR(BGl_keyword2890z00zz__regexpz00,
										BgL_arg1315z00_1230);
								}
								{	/* Unsafe/pregexp.scm 172 */
									obj_t BgL_list1313z00_1228;

									{	/* Unsafe/pregexp.scm 172 */
										obj_t BgL_arg1314z00_1229;

										BgL_arg1314z00_1229 = MAKE_YOUNG_PAIR(BgL_iz00_1217, BNIL);
										BgL_list1313z00_1228 =
											MAKE_YOUNG_PAIR(BgL_arg1312z00_1227, BgL_arg1314z00_1229);
									}
									return BgL_list1313z00_1228;
								}
							}
						else
							{	/* Unsafe/pregexp.scm 173 */
								obj_t BgL_vvz00_1231;

								BgL_vvz00_1231 =
									BGl_pregexpzd2readzd2piecez00zz__regexpz00(BgL_sz00_12,
									BgL_iz00_1217, BgL_nz00_14);
								{	/* Unsafe/pregexp.scm 174 */
									obj_t BgL_arg1316z00_1232;
									obj_t BgL_arg1317z00_1233;

									{	/* Unsafe/pregexp.scm 174 */
										obj_t BgL_arg1318z00_1234;

										BgL_arg1318z00_1234 = CAR(((obj_t) BgL_vvz00_1231));
										BgL_arg1316z00_1232 =
											MAKE_YOUNG_PAIR(BgL_arg1318z00_1234, BgL_piecesz00_1216);
									}
									{	/* Unsafe/pregexp.scm 174 */
										obj_t BgL_pairz00_2752;

										BgL_pairz00_2752 = CDR(((obj_t) BgL_vvz00_1231));
										BgL_arg1317z00_1233 = CAR(BgL_pairz00_2752);
									}
									{
										obj_t BgL_iz00_5015;
										obj_t BgL_piecesz00_5014;

										BgL_piecesz00_5014 = BgL_arg1316z00_1232;
										BgL_iz00_5015 = BgL_arg1317z00_1233;
										BgL_iz00_1217 = BgL_iz00_5015;
										BgL_piecesz00_1216 = BgL_piecesz00_5014;
										goto BgL_zc3z04anonymousza31305ze3z87_1218;
									}
								}
							}
					}
			}
		}

	}



/* pregexp-read-piece */
	obj_t BGl_pregexpzd2readzd2piecez00zz__regexpz00(obj_t BgL_sz00_15,
		obj_t BgL_iz00_16, long BgL_nz00_17)
	{
		{	/* Unsafe/pregexp.scm 176 */
			{	/* Unsafe/pregexp.scm 178 */
				unsigned char BgL_cz00_1238;

				BgL_cz00_1238 = STRING_REF(BgL_sz00_15, (long) CINT(BgL_iz00_16));
				{

					switch (BgL_cz00_1238)
						{
						case ((unsigned char) '^'):

							{	/* Unsafe/pregexp.scm 180 */
								long BgL_arg1322z00_1242;

								BgL_arg1322z00_1242 = ((long) CINT(BgL_iz00_16) + ((long) 1));
								{	/* Unsafe/pregexp.scm 180 */
									obj_t BgL_list1323z00_1243;

									{	/* Unsafe/pregexp.scm 180 */
										obj_t BgL_arg1324z00_1244;

										BgL_arg1324z00_1244 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1322z00_1242), BNIL);
										BgL_list1323z00_1243 =
											MAKE_YOUNG_PAIR(BGl_keyword2896z00zz__regexpz00,
											BgL_arg1324z00_1244);
									}
									return BgL_list1323z00_1243;
								}
							}
							break;
						case ((unsigned char) '$'):

							{	/* Unsafe/pregexp.scm 181 */
								long BgL_arg1325z00_1245;

								BgL_arg1325z00_1245 = ((long) CINT(BgL_iz00_16) + ((long) 1));
								{	/* Unsafe/pregexp.scm 181 */
									obj_t BgL_list1326z00_1246;

									{	/* Unsafe/pregexp.scm 181 */
										obj_t BgL_arg1327z00_1247;

										BgL_arg1327z00_1247 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1325z00_1245), BNIL);
										BgL_list1326z00_1246 =
											MAKE_YOUNG_PAIR(BGl_keyword2898z00zz__regexpz00,
											BgL_arg1327z00_1247);
									}
									return BgL_list1326z00_1246;
								}
							}
							break;
						case ((unsigned char) '.'):

							{	/* Unsafe/pregexp.scm 183 */
								obj_t BgL_arg1328z00_1248;

								{	/* Unsafe/pregexp.scm 183 */
									long BgL_arg1329z00_1249;

									BgL_arg1329z00_1249 = ((long) CINT(BgL_iz00_16) + ((long) 1));
									{	/* Unsafe/pregexp.scm 183 */
										obj_t BgL_list1330z00_1250;

										{	/* Unsafe/pregexp.scm 183 */
											obj_t BgL_arg1331z00_1251;

											BgL_arg1331z00_1251 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1329z00_1249), BNIL);
											BgL_list1330z00_1250 =
												MAKE_YOUNG_PAIR(BGl_keyword2900z00zz__regexpz00,
												BgL_arg1331z00_1251);
										}
										BgL_arg1328z00_1248 = BgL_list1330z00_1250;
								}}
								return
									BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00
									(BgL_arg1328z00_1248, BgL_sz00_15, BgL_nz00_17);
							}
							break;
						case ((unsigned char) '['):

							{	/* Unsafe/pregexp.scm 184 */
								long BgL_izb21zb2_1252;

								BgL_izb21zb2_1252 = ((long) CINT(BgL_iz00_16) + ((long) 1));
								{	/* Unsafe/pregexp.scm 186 */
									obj_t BgL_arg1333z00_1253;

									{	/* Unsafe/pregexp.scm 186 */
										obj_t BgL_aux1047z00_1255;

										if ((BgL_izb21zb2_1252 < BgL_nz00_17))
											{	/* Unsafe/pregexp.scm 186 */
												BgL_aux1047z00_1255 =
													BCHAR(STRING_REF(BgL_sz00_15, BgL_izb21zb2_1252));
											}
										else
											{	/* Unsafe/pregexp.scm 186 */
												BgL_aux1047z00_1255 = BFALSE;
											}
										if (CHARP(BgL_aux1047z00_1255))
											{	/* Unsafe/pregexp.scm 186 */
												switch (CCHAR(BgL_aux1047z00_1255))
													{
													case ((unsigned char) '^'):

														{	/* Unsafe/pregexp.scm 188 */
															obj_t BgL_vvz00_1257;

															BgL_vvz00_1257 =
																BGl_pregexpzd2readzd2charzd2listzd2zz__regexpz00
																(BgL_sz00_15,
																((long) CINT(BgL_iz00_16) + ((long) 2)),
																BgL_nz00_17);
															{	/* Unsafe/pregexp.scm 189 */
																obj_t BgL_arg1335z00_1258;
																obj_t BgL_arg1337z00_1259;

																{	/* Unsafe/pregexp.scm 189 */
																	obj_t BgL_arg1340z00_1262;

																	BgL_arg1340z00_1262 =
																		CAR(((obj_t) BgL_vvz00_1257));
																	{	/* Unsafe/pregexp.scm 189 */
																		obj_t BgL_list1341z00_1263;

																		{	/* Unsafe/pregexp.scm 189 */
																			obj_t BgL_arg1342z00_1264;

																			BgL_arg1342z00_1264 =
																				MAKE_YOUNG_PAIR(BgL_arg1340z00_1262,
																				BNIL);
																			BgL_list1341z00_1263 =
																				MAKE_YOUNG_PAIR
																				(BGl_keyword2902z00zz__regexpz00,
																				BgL_arg1342z00_1264);
																		}
																		BgL_arg1335z00_1258 = BgL_list1341z00_1263;
																}}
																{	/* Unsafe/pregexp.scm 189 */
																	obj_t BgL_pairz00_2810;

																	BgL_pairz00_2810 =
																		CDR(((obj_t) BgL_vvz00_1257));
																	BgL_arg1337z00_1259 = CAR(BgL_pairz00_2810);
																}
																{	/* Unsafe/pregexp.scm 189 */
																	obj_t BgL_list1338z00_1260;

																	{	/* Unsafe/pregexp.scm 189 */
																		obj_t BgL_arg1339z00_1261;

																		BgL_arg1339z00_1261 =
																			MAKE_YOUNG_PAIR(BgL_arg1337z00_1259,
																			BNIL);
																		BgL_list1338z00_1260 =
																			MAKE_YOUNG_PAIR(BgL_arg1335z00_1258,
																			BgL_arg1339z00_1261);
																	}
																	BgL_arg1333z00_1253 = BgL_list1338z00_1260;
														}}} break;
													default:
														BgL_arg1333z00_1253 =
															BGl_pregexpzd2readzd2charzd2listzd2zz__regexpz00
															(BgL_sz00_15, BgL_izb21zb2_1252, BgL_nz00_17);
													}
											}
										else
											{	/* Unsafe/pregexp.scm 186 */
												BgL_arg1333z00_1253 =
													BGl_pregexpzd2readzd2charzd2listzd2zz__regexpz00
													(BgL_sz00_15, BgL_izb21zb2_1252, BgL_nz00_17);
											}
									}
									return
										BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00
										(BgL_arg1333z00_1253, BgL_sz00_15, BgL_nz00_17);
								}
							}
							break;
						case ((unsigned char) '('):

							return
								BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00
								(BGl_pregexpzd2readzd2subpatternz00zz__regexpz00(BgL_sz00_15,
									((long) CINT(BgL_iz00_16) + ((long) 1)), BgL_nz00_17),
								BgL_sz00_15, BgL_nz00_17);
							break;
						case ((unsigned char) '\\'):

							{	/* Unsafe/pregexp.scm 197 */
								obj_t BgL_arg1346z00_1269;

								{	/* Unsafe/pregexp.scm 197 */
									obj_t BgL_g1049z00_1270;

									BgL_g1049z00_1270 =
										BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00
										(BgL_sz00_15, BgL_iz00_16, BgL_nz00_17);
									if (CBOOL(BgL_g1049z00_1270))
										{	/* Unsafe/pregexp.scm 199 */
											obj_t BgL_arg1347z00_1273;
											obj_t BgL_arg1348z00_1274;

											{	/* Unsafe/pregexp.scm 199 */
												obj_t BgL_arg1351z00_1277;

												BgL_arg1351z00_1277 = CAR(((obj_t) BgL_g1049z00_1270));
												{	/* Unsafe/pregexp.scm 199 */
													obj_t BgL_list1352z00_1278;

													{	/* Unsafe/pregexp.scm 199 */
														obj_t BgL_arg1353z00_1279;

														BgL_arg1353z00_1279 =
															MAKE_YOUNG_PAIR(BgL_arg1351z00_1277, BNIL);
														BgL_list1352z00_1278 =
															MAKE_YOUNG_PAIR(BGl_keyword2904z00zz__regexpz00,
															BgL_arg1353z00_1279);
													}
													BgL_arg1347z00_1273 = BgL_list1352z00_1278;
												}
											}
											{	/* Unsafe/pregexp.scm 199 */
												obj_t BgL_pairz00_2819;

												BgL_pairz00_2819 = CDR(((obj_t) BgL_g1049z00_1270));
												BgL_arg1348z00_1274 = CAR(BgL_pairz00_2819);
											}
											{	/* Unsafe/pregexp.scm 199 */
												obj_t BgL_list1349z00_1275;

												{	/* Unsafe/pregexp.scm 199 */
													obj_t BgL_arg1350z00_1276;

													BgL_arg1350z00_1276 =
														MAKE_YOUNG_PAIR(BgL_arg1348z00_1274, BNIL);
													BgL_list1349z00_1275 =
														MAKE_YOUNG_PAIR(BgL_arg1347z00_1273,
														BgL_arg1350z00_1276);
												}
												BgL_arg1346z00_1269 = BgL_list1349z00_1275;
											}
										}
									else
										{	/* Unsafe/pregexp.scm 200 */
											obj_t BgL_g1051z00_1280;

											BgL_g1051z00_1280 =
												BGl_pregexpzd2readzd2escapedzd2charzd2zz__regexpz00
												(BgL_sz00_15, BgL_iz00_16, BgL_nz00_17);
											if (CBOOL(BgL_g1051z00_1280))
												{	/* Unsafe/pregexp.scm 202 */
													obj_t BgL_arg1354z00_1283;
													obj_t BgL_arg1355z00_1284;

													BgL_arg1354z00_1283 =
														CAR(((obj_t) BgL_g1051z00_1280));
													{	/* Unsafe/pregexp.scm 202 */
														obj_t BgL_pairz00_2825;

														BgL_pairz00_2825 = CDR(((obj_t) BgL_g1051z00_1280));
														BgL_arg1355z00_1284 = CAR(BgL_pairz00_2825);
													}
													{	/* Unsafe/pregexp.scm 202 */
														obj_t BgL_list1356z00_1285;

														{	/* Unsafe/pregexp.scm 202 */
															obj_t BgL_arg1357z00_1286;

															BgL_arg1357z00_1286 =
																MAKE_YOUNG_PAIR(BgL_arg1355z00_1284, BNIL);
															BgL_list1356z00_1285 =
																MAKE_YOUNG_PAIR(BgL_arg1354z00_1283,
																BgL_arg1357z00_1286);
														}
														BgL_arg1346z00_1269 = BgL_list1356z00_1285;
													}
												}
											else
												{	/* Unsafe/pregexp.scm 203 */
													obj_t BgL_list1358z00_1287;

													BgL_list1358z00_1287 =
														MAKE_YOUNG_PAIR(BGl_symbol2906z00zz__regexpz00,
														BNIL);
													BgL_arg1346z00_1269 =
														BGl_errorz00zz__errorz00
														(BGl_string2910z00zz__regexpz00,
														BGl_symbol2908z00zz__regexpz00,
														CAR(BgL_list1358z00_1287));
												}
										}
								}
								return
									BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00
									(BgL_arg1346z00_1269, BgL_sz00_15, BgL_nz00_17);
							}
							break;
						default:
							{	/* Unsafe/pregexp.scm 206 */
								bool_t BgL_test3139z00_5089;

								if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00)
									{	/* Unsafe/pregexp.scm 206 */
										BgL_test3139z00_5089 = ((bool_t) 1);
									}
								else
									{	/* Unsafe/pregexp.scm 207 */
										bool_t BgL_test3141z00_5091;

										{	/* Unsafe/pregexp.scm 207 */
											bool_t BgL_res2348z00_2757;

											BgL_res2348z00_2757 = isspace(BgL_cz00_1238);
											BgL_test3141z00_5091 = BgL_res2348z00_2757;
										}
										if (BgL_test3141z00_5091)
											{	/* Unsafe/pregexp.scm 207 */
												BgL_test3139z00_5089 = ((bool_t) 0);
											}
										else
											{	/* Unsafe/pregexp.scm 207 */
												if ((BgL_cz00_1238 == ((unsigned char) '#')))
													{	/* Unsafe/pregexp.scm 208 */
														BgL_test3139z00_5089 = ((bool_t) 0);
													}
												else
													{	/* Unsafe/pregexp.scm 208 */
														BgL_test3139z00_5089 = ((bool_t) 1);
													}
											}
									}
								if (BgL_test3139z00_5089)
									{	/* Unsafe/pregexp.scm 210 */
										obj_t BgL_arg1361z00_1291;

										{	/* Unsafe/pregexp.scm 210 */
											long BgL_arg1362z00_1292;

											BgL_arg1362z00_1292 =
												((long) CINT(BgL_iz00_16) + ((long) 1));
											{	/* Unsafe/pregexp.scm 210 */
												obj_t BgL_list1363z00_1293;

												{	/* Unsafe/pregexp.scm 210 */
													obj_t BgL_arg1364z00_1294;

													BgL_arg1364z00_1294 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg1362z00_1292), BNIL);
													BgL_list1363z00_1293 =
														MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1238),
														BgL_arg1364z00_1294);
												}
												BgL_arg1361z00_1291 = BgL_list1363z00_1293;
										}}
										return
											BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00
											(BgL_arg1361z00_1291, BgL_sz00_15, BgL_nz00_17);
									}
								else
									{
										obj_t BgL_iz00_1296;
										bool_t BgL_inzd2commentzf3z21_1297;

										BgL_iz00_1296 = BgL_iz00_16;
										BgL_inzd2commentzf3z21_1297 = ((bool_t) 0);
									BgL_zc3z04anonymousza31365ze3z87_1298:
										if (((long) CINT(BgL_iz00_1296) >= BgL_nz00_17))
											{	/* Unsafe/pregexp.scm 212 */
												obj_t BgL_list1367z00_1300;

												{	/* Unsafe/pregexp.scm 212 */
													obj_t BgL_arg1368z00_1301;

													BgL_arg1368z00_1301 =
														MAKE_YOUNG_PAIR(BgL_iz00_1296, BNIL);
													BgL_list1367z00_1300 =
														MAKE_YOUNG_PAIR(BGl_keyword2894z00zz__regexpz00,
														BgL_arg1368z00_1301);
												}
												return BgL_list1367z00_1300;
											}
										else
											{	/* Unsafe/pregexp.scm 213 */
												unsigned char BgL_cz00_1302;

												BgL_cz00_1302 =
													STRING_REF(BgL_sz00_15, (long) CINT(BgL_iz00_1296));
												if (BgL_inzd2commentzf3z21_1297)
													{	/* Unsafe/pregexp.scm 215 */
														long BgL_arg1370z00_1303;
														bool_t BgL_arg1371z00_1304;

														BgL_arg1370z00_1303 =
															((long) CINT(BgL_iz00_1296) + ((long) 1));
														if ((BgL_cz00_1302 == ((unsigned char) 10)))
															{	/* Unsafe/pregexp.scm 216 */
																BgL_arg1371z00_1304 = ((bool_t) 0);
															}
														else
															{	/* Unsafe/pregexp.scm 216 */
																BgL_arg1371z00_1304 = ((bool_t) 1);
															}
														{
															bool_t BgL_inzd2commentzf3z21_5116;
															obj_t BgL_iz00_5114;

															BgL_iz00_5114 = BINT(BgL_arg1370z00_1303);
															BgL_inzd2commentzf3z21_5116 = BgL_arg1371z00_1304;
															BgL_inzd2commentzf3z21_1297 =
																BgL_inzd2commentzf3z21_5116;
															BgL_iz00_1296 = BgL_iz00_5114;
															goto BgL_zc3z04anonymousza31365ze3z87_1298;
														}
													}
												else
													{	/* Unsafe/pregexp.scm 217 */
														bool_t BgL_test3146z00_5117;

														{	/* Unsafe/pregexp.scm 217 */
															bool_t BgL_res2357z00_2777;

															BgL_res2357z00_2777 = isspace(BgL_cz00_1302);
															BgL_test3146z00_5117 = BgL_res2357z00_2777;
														}
														if (BgL_test3146z00_5117)
															{	/* Unsafe/pregexp.scm 218 */
																long BgL_arg1374z00_1307;

																BgL_arg1374z00_1307 =
																	((long) CINT(BgL_iz00_1296) + ((long) 1));
																{
																	bool_t BgL_inzd2commentzf3z21_5123;
																	obj_t BgL_iz00_5121;

																	BgL_iz00_5121 = BINT(BgL_arg1374z00_1307);
																	BgL_inzd2commentzf3z21_5123 = ((bool_t) 0);
																	BgL_inzd2commentzf3z21_1297 =
																		BgL_inzd2commentzf3z21_5123;
																	BgL_iz00_1296 = BgL_iz00_5121;
																	goto BgL_zc3z04anonymousza31365ze3z87_1298;
																}
															}
														else
															{	/* Unsafe/pregexp.scm 217 */
																if ((BgL_cz00_1302 == ((unsigned char) '#')))
																	{	/* Unsafe/pregexp.scm 220 */
																		long BgL_arg1376z00_1309;

																		BgL_arg1376z00_1309 =
																			((long) CINT(BgL_iz00_1296) + ((long) 1));
																		{
																			bool_t BgL_inzd2commentzf3z21_5130;
																			obj_t BgL_iz00_5128;

																			BgL_iz00_5128 = BINT(BgL_arg1376z00_1309);
																			BgL_inzd2commentzf3z21_5130 =
																				((bool_t) 1);
																			BgL_inzd2commentzf3z21_1297 =
																				BgL_inzd2commentzf3z21_5130;
																			BgL_iz00_1296 = BgL_iz00_5128;
																			goto
																				BgL_zc3z04anonymousza31365ze3z87_1298;
																		}
																	}
																else
																	{	/* Unsafe/pregexp.scm 221 */
																		obj_t BgL_list1377z00_1310;

																		{	/* Unsafe/pregexp.scm 221 */
																			obj_t BgL_arg1378z00_1311;

																			BgL_arg1378z00_1311 =
																				MAKE_YOUNG_PAIR(BgL_iz00_1296, BNIL);
																			BgL_list1377z00_1310 =
																				MAKE_YOUNG_PAIR
																				(BGl_keyword2894z00zz__regexpz00,
																				BgL_arg1378z00_1311);
																		}
																		return BgL_list1377z00_1310;
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



/* pregexp-read-escaped-number */
	obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00(obj_t BgL_sz00_18,
		obj_t BgL_iz00_19, long BgL_nz00_20)
	{
		{	/* Unsafe/pregexp.scm 223 */
			if ((((long) CINT(BgL_iz00_19) + ((long) 1)) < BgL_nz00_20))
				{	/* Unsafe/pregexp.scm 227 */
					unsigned char BgL_cz00_1316;

					BgL_cz00_1316 =
						STRING_REF(BgL_sz00_18, ((long) CINT(BgL_iz00_19) + ((long) 1)));
					{	/* Unsafe/pregexp.scm 228 */
						bool_t BgL_test3149z00_5141;

						{	/* Unsafe/pregexp.scm 228 */
							bool_t BgL_res2383z00_2843;

							BgL_res2383z00_2843 = isdigit(BgL_cz00_1316);
							BgL_test3149z00_5141 = BgL_res2383z00_2843;
						}
						if (BgL_test3149z00_5141)
							{	/* Unsafe/pregexp.scm 229 */
								long BgL_g1055z00_1318;
								obj_t BgL_g1056z00_1319;

								BgL_g1055z00_1318 = ((long) CINT(BgL_iz00_19) + ((long) 2));
								{	/* Unsafe/pregexp.scm 229 */
									obj_t BgL_list1395z00_1344;

									BgL_list1395z00_1344 =
										MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1316), BNIL);
									BgL_g1056z00_1319 = BgL_list1395z00_1344;
								}
								{
									long BgL_iz00_1321;
									obj_t BgL_rz00_1322;

									BgL_iz00_1321 = BgL_g1055z00_1318;
									BgL_rz00_1322 = BgL_g1056z00_1319;
								BgL_zc3z04anonymousza31379ze3z87_1323:
									if ((BgL_iz00_1321 >= BgL_nz00_20))
										{	/* Unsafe/pregexp.scm 232 */
											obj_t BgL_arg1381z00_1325;

											{	/* Unsafe/pregexp.scm 232 */
												obj_t BgL_arg1384z00_1328;

												BgL_arg1384z00_1328 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(BGl_pregexpzd2reversez12zc0zz__regexpz00
													(BgL_rz00_1322));
												{	/* Ieee/number.scm 165 */

													BgL_arg1381z00_1325 =
														BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
														(BgL_arg1384z00_1328, BINT(((long) 10)));
											}}
											{	/* Unsafe/pregexp.scm 231 */
												obj_t BgL_list1382z00_1326;

												{	/* Unsafe/pregexp.scm 231 */
													obj_t BgL_arg1383z00_1327;

													BgL_arg1383z00_1327 =
														MAKE_YOUNG_PAIR(BINT(BgL_iz00_1321), BNIL);
													BgL_list1382z00_1326 =
														MAKE_YOUNG_PAIR(BgL_arg1381z00_1325,
														BgL_arg1383z00_1327);
												}
												return BgL_list1382z00_1326;
											}
										}
									else
										{	/* Unsafe/pregexp.scm 233 */
											unsigned char BgL_cz00_1332;

											BgL_cz00_1332 = STRING_REF(BgL_sz00_18, BgL_iz00_1321);
											{	/* Unsafe/pregexp.scm 234 */
												bool_t BgL_test3151z00_5157;

												{	/* Unsafe/pregexp.scm 234 */
													bool_t BgL_res2389z00_2855;

													BgL_res2389z00_2855 = isdigit(BgL_cz00_1332);
													BgL_test3151z00_5157 = BgL_res2389z00_2855;
												}
												if (BgL_test3151z00_5157)
													{	/* Unsafe/pregexp.scm 235 */
														long BgL_arg1388z00_1334;
														obj_t BgL_arg1389z00_1335;

														BgL_arg1388z00_1334 = (BgL_iz00_1321 + ((long) 1));
														BgL_arg1389z00_1335 =
															MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1332),
															BgL_rz00_1322);
														{
															obj_t BgL_rz00_5163;
															long BgL_iz00_5162;

															BgL_iz00_5162 = BgL_arg1388z00_1334;
															BgL_rz00_5163 = BgL_arg1389z00_1335;
															BgL_rz00_1322 = BgL_rz00_5163;
															BgL_iz00_1321 = BgL_iz00_5162;
															goto BgL_zc3z04anonymousza31379ze3z87_1323;
														}
													}
												else
													{	/* Unsafe/pregexp.scm 237 */
														obj_t BgL_arg1390z00_1336;

														{	/* Unsafe/pregexp.scm 237 */
															obj_t BgL_arg1393z00_1339;

															BgL_arg1393z00_1339 =
																BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																(BGl_pregexpzd2reversez12zc0zz__regexpz00
																(BgL_rz00_1322));
															{	/* Ieee/number.scm 165 */

																BgL_arg1390z00_1336 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_arg1393z00_1339, BINT(((long) 10)));
														}}
														{	/* Unsafe/pregexp.scm 236 */
															obj_t BgL_list1391z00_1337;

															{	/* Unsafe/pregexp.scm 236 */
																obj_t BgL_arg1392z00_1338;

																BgL_arg1392z00_1338 =
																	MAKE_YOUNG_PAIR(BINT(BgL_iz00_1321), BNIL);
																BgL_list1391z00_1337 =
																	MAKE_YOUNG_PAIR(BgL_arg1390z00_1336,
																	BgL_arg1392z00_1338);
															}
															return BgL_list1391z00_1337;
														}
													}
											}
										}
								}
							}
						else
							{	/* Unsafe/pregexp.scm 228 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Unsafe/pregexp.scm 226 */
					return BFALSE;
				}
		}

	}



/* pregexp-read-escaped-char */
	obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__regexpz00(obj_t BgL_sz00_21,
		obj_t BgL_iz00_22, long BgL_nz00_23)
	{
		{	/* Unsafe/pregexp.scm 240 */
			if ((((long) CINT(BgL_iz00_22) + ((long) 1)) < BgL_nz00_23))
				{	/* Unsafe/pregexp.scm 244 */
					unsigned char BgL_cz00_1348;

					BgL_cz00_1348 =
						STRING_REF(BgL_sz00_21, ((long) CINT(BgL_iz00_22) + ((long) 1)));
					{

						switch (BgL_cz00_1348)
							{
							case ((unsigned char) 'b'):

								{	/* Unsafe/pregexp.scm 246 */
									long BgL_arg1399z00_1352;

									BgL_arg1399z00_1352 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 246 */
										obj_t BgL_list1400z00_1353;

										{	/* Unsafe/pregexp.scm 246 */
											obj_t BgL_arg1401z00_1354;

											BgL_arg1401z00_1354 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1399z00_1352), BNIL);
											BgL_list1400z00_1353 =
												MAKE_YOUNG_PAIR(BGl_keyword2911z00zz__regexpz00,
												BgL_arg1401z00_1354);
										}
										return BgL_list1400z00_1353;
									}
								}
								break;
							case ((unsigned char) 'B'):

								{	/* Unsafe/pregexp.scm 247 */
									long BgL_arg1402z00_1355;

									BgL_arg1402z00_1355 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 247 */
										obj_t BgL_list1403z00_1356;

										{	/* Unsafe/pregexp.scm 247 */
											obj_t BgL_arg1404z00_1357;

											BgL_arg1404z00_1357 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1402z00_1355), BNIL);
											BgL_list1403z00_1356 =
												MAKE_YOUNG_PAIR(BGl_keyword2913z00zz__regexpz00,
												BgL_arg1404z00_1357);
										}
										return BgL_list1403z00_1356;
									}
								}
								break;
							case ((unsigned char) 'd'):

								{	/* Unsafe/pregexp.scm 248 */
									long BgL_arg1405z00_1358;

									BgL_arg1405z00_1358 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 248 */
										obj_t BgL_list1406z00_1359;

										{	/* Unsafe/pregexp.scm 248 */
											obj_t BgL_arg1407z00_1360;

											BgL_arg1407z00_1360 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1405z00_1358), BNIL);
											BgL_list1406z00_1359 =
												MAKE_YOUNG_PAIR(BGl_keyword2915z00zz__regexpz00,
												BgL_arg1407z00_1360);
										}
										return BgL_list1406z00_1359;
									}
								}
								break;
							case ((unsigned char) 'D'):

								{	/* Unsafe/pregexp.scm 249 */
									long BgL_arg1409z00_1361;

									BgL_arg1409z00_1361 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 249 */
										obj_t BgL_list1410z00_1362;

										{	/* Unsafe/pregexp.scm 249 */
											obj_t BgL_arg1411z00_1363;

											BgL_arg1411z00_1363 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1409z00_1361), BNIL);
											BgL_list1410z00_1362 =
												MAKE_YOUNG_PAIR(BGl_list2917z00zz__regexpz00,
												BgL_arg1411z00_1363);
										}
										return BgL_list1410z00_1362;
									}
								}
								break;
							case ((unsigned char) 'n'):

								{	/* Unsafe/pregexp.scm 250 */
									long BgL_arg1412z00_1364;

									BgL_arg1412z00_1364 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 250 */
										obj_t BgL_list1413z00_1365;

										{	/* Unsafe/pregexp.scm 250 */
											obj_t BgL_arg1414z00_1366;

											BgL_arg1414z00_1366 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1412z00_1364), BNIL);
											BgL_list1413z00_1365 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
												BgL_arg1414z00_1366);
										}
										return BgL_list1413z00_1365;
									}
								}
								break;
							case ((unsigned char) 'r'):

								{	/* Unsafe/pregexp.scm 251 */
									long BgL_arg1415z00_1367;

									BgL_arg1415z00_1367 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 251 */
										obj_t BgL_list1416z00_1368;

										{	/* Unsafe/pregexp.scm 251 */
											obj_t BgL_arg1417z00_1369;

											BgL_arg1417z00_1369 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1415z00_1367), BNIL);
											BgL_list1416z00_1368 =
												MAKE_YOUNG_PAIR(BCHAR
												(BGl_za2pregexpzd2returnzd2charza2z00zz__regexpz00),
												BgL_arg1417z00_1369);
										}
										return BgL_list1416z00_1368;
									}
								}
								break;
							case ((unsigned char) 's'):

								{	/* Unsafe/pregexp.scm 252 */
									long BgL_arg1418z00_1370;

									BgL_arg1418z00_1370 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 252 */
										obj_t BgL_list1419z00_1371;

										{	/* Unsafe/pregexp.scm 252 */
											obj_t BgL_arg1420z00_1372;

											BgL_arg1420z00_1372 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1418z00_1370), BNIL);
											BgL_list1419z00_1371 =
												MAKE_YOUNG_PAIR(BGl_keyword2918z00zz__regexpz00,
												BgL_arg1420z00_1372);
										}
										return BgL_list1419z00_1371;
									}
								}
								break;
							case ((unsigned char) 'S'):

								{	/* Unsafe/pregexp.scm 253 */
									long BgL_arg1421z00_1373;

									BgL_arg1421z00_1373 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 253 */
										obj_t BgL_list1422z00_1374;

										{	/* Unsafe/pregexp.scm 253 */
											obj_t BgL_arg1424z00_1375;

											BgL_arg1424z00_1375 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1421z00_1373), BNIL);
											BgL_list1422z00_1374 =
												MAKE_YOUNG_PAIR(BGl_list2920z00zz__regexpz00,
												BgL_arg1424z00_1375);
										}
										return BgL_list1422z00_1374;
									}
								}
								break;
							case ((unsigned char) 't'):

								{	/* Unsafe/pregexp.scm 254 */
									long BgL_arg1425z00_1376;

									BgL_arg1425z00_1376 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 254 */
										obj_t BgL_list1426z00_1377;

										{	/* Unsafe/pregexp.scm 254 */
											obj_t BgL_arg1427z00_1378;

											BgL_arg1427z00_1378 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1425z00_1376), BNIL);
											BgL_list1426z00_1377 =
												MAKE_YOUNG_PAIR(BCHAR
												(BGl_za2pregexpzd2tabzd2charza2z00zz__regexpz00),
												BgL_arg1427z00_1378);
										}
										return BgL_list1426z00_1377;
									}
								}
								break;
							case ((unsigned char) 'w'):

								{	/* Unsafe/pregexp.scm 255 */
									long BgL_arg1428z00_1379;

									BgL_arg1428z00_1379 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 255 */
										obj_t BgL_list1429z00_1380;

										{	/* Unsafe/pregexp.scm 255 */
											obj_t BgL_arg1430z00_1381;

											BgL_arg1430z00_1381 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1428z00_1379), BNIL);
											BgL_list1429z00_1380 =
												MAKE_YOUNG_PAIR(BGl_keyword2921z00zz__regexpz00,
												BgL_arg1430z00_1381);
										}
										return BgL_list1429z00_1380;
									}
								}
								break;
							case ((unsigned char) 'W'):

								{	/* Unsafe/pregexp.scm 256 */
									long BgL_arg1431z00_1382;

									BgL_arg1431z00_1382 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 256 */
										obj_t BgL_list1432z00_1383;

										{	/* Unsafe/pregexp.scm 256 */
											obj_t BgL_arg1433z00_1384;

											BgL_arg1433z00_1384 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1431z00_1382), BNIL);
											BgL_list1432z00_1383 =
												MAKE_YOUNG_PAIR(BGl_list2923z00zz__regexpz00,
												BgL_arg1433z00_1384);
										}
										return BgL_list1432z00_1383;
									}
								}
								break;
							default:
								{	/* Unsafe/pregexp.scm 257 */
									long BgL_arg1434z00_1385;

									BgL_arg1434z00_1385 = ((long) CINT(BgL_iz00_22) + ((long) 2));
									{	/* Unsafe/pregexp.scm 257 */
										obj_t BgL_list1435z00_1386;

										{	/* Unsafe/pregexp.scm 257 */
											obj_t BgL_arg1436z00_1387;

											BgL_arg1436z00_1387 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1434z00_1385), BNIL);
											BgL_list1435z00_1386 =
												MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1348),
												BgL_arg1436z00_1387);
										}
										return BgL_list1435z00_1386;
									}
								}
							}
					}
				}
			else
				{	/* Unsafe/pregexp.scm 243 */
					return BFALSE;
				}
		}

	}



/* pregexp-read-posix-char-class */
	obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__regexpz00(obj_t
		BgL_sz00_24, long BgL_iz00_25, long BgL_nz00_26)
	{
		{	/* Unsafe/pregexp.scm 259 */
			{	/* Unsafe/pregexp.scm 262 */
				bool_t BgL_negzf3zf3_1390;

				BgL_negzf3zf3_1390 = ((bool_t) 0);
				{
					long BgL_iz00_1393;
					obj_t BgL_rz00_1394;

					BgL_iz00_1393 = BgL_iz00_25;
					BgL_rz00_1394 = BNIL;
				BgL_zc3z04anonymousza31439ze3z87_1395:
					if ((BgL_iz00_1393 >= BgL_nz00_26))
						{	/* Unsafe/pregexp.scm 267 */
							return
								BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
								BGl_symbol2924z00zz__regexpz00, BUNSPEC);
						}
					else
						{	/* Unsafe/pregexp.scm 269 */
							unsigned char BgL_cz00_1398;

							BgL_cz00_1398 = STRING_REF(BgL_sz00_24, BgL_iz00_1393);
							if ((BgL_cz00_1398 == ((unsigned char) '^')))
								{	/* Unsafe/pregexp.scm 270 */
									BgL_negzf3zf3_1390 = ((bool_t) 1);
									{
										long BgL_iz00_5249;

										BgL_iz00_5249 = (BgL_iz00_1393 + ((long) 1));
										BgL_iz00_1393 = BgL_iz00_5249;
										goto BgL_zc3z04anonymousza31439ze3z87_1395;
									}
								}
							else
								{	/* Unsafe/pregexp.scm 273 */
									bool_t BgL_test3155z00_5251;

									{	/* Unsafe/pregexp.scm 273 */
										bool_t BgL_res2425z00_2922;

										BgL_res2425z00_2922 = isalpha(BgL_cz00_1398);
										BgL_test3155z00_5251 = BgL_res2425z00_2922;
									}
									if (BgL_test3155z00_5251)
										{	/* Unsafe/pregexp.scm 274 */
											long BgL_arg1445z00_1402;
											obj_t BgL_arg1446z00_1403;

											BgL_arg1445z00_1402 = (BgL_iz00_1393 + ((long) 1));
											BgL_arg1446z00_1403 =
												MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1398), BgL_rz00_1394);
											{
												obj_t BgL_rz00_5257;
												long BgL_iz00_5256;

												BgL_iz00_5256 = BgL_arg1445z00_1402;
												BgL_rz00_5257 = BgL_arg1446z00_1403;
												BgL_rz00_1394 = BgL_rz00_5257;
												BgL_iz00_1393 = BgL_iz00_5256;
												goto BgL_zc3z04anonymousza31439ze3z87_1395;
											}
										}
									else
										{	/* Unsafe/pregexp.scm 273 */
											if ((BgL_cz00_1398 == ((unsigned char) ':')))
												{	/* Unsafe/pregexp.scm 276 */
													bool_t BgL_test3157z00_5260;

													if (((BgL_iz00_1393 + ((long) 1)) >= BgL_nz00_26))
														{	/* Unsafe/pregexp.scm 276 */
															BgL_test3157z00_5260 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/pregexp.scm 276 */
															if (
																(STRING_REF(BgL_sz00_24,
																		(BgL_iz00_1393 + ((long) 1))) ==
																	((unsigned char) ']')))
																{	/* Unsafe/pregexp.scm 277 */
																	BgL_test3157z00_5260 = ((bool_t) 0);
																}
															else
																{	/* Unsafe/pregexp.scm 277 */
																	BgL_test3157z00_5260 = ((bool_t) 1);
																}
														}
													if (BgL_test3157z00_5260)
														{	/* Unsafe/pregexp.scm 278 */
															obj_t BgL_list1458z00_1414;

															BgL_list1458z00_1414 =
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ':')),
																BNIL);
															return
																BGl_errorz00zz__errorz00
																(BGl_string2910z00zz__regexpz00,
																BGl_symbol2924z00zz__regexpz00,
																CAR(BgL_list1458z00_1414));
														}
													else
														{	/* Unsafe/pregexp.scm 279 */
															obj_t BgL_posixzd2classzd2_1415;

															{	/* Unsafe/pregexp.scm 281 */
																obj_t BgL_arg1465z00_1422;

																BgL_arg1465z00_1422 =
																	BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																	(BGl_pregexpzd2reversez12zc0zz__regexpz00
																	(BgL_rz00_1394));
																BgL_posixzd2classzd2_1415 =
																	string_to_keyword(BSTRING_TO_STRING
																	(BgL_arg1465z00_1422));
															}
															{	/* Unsafe/pregexp.scm 282 */
																obj_t BgL_arg1459z00_1416;
																long BgL_arg1460z00_1417;

																if (BgL_negzf3zf3_1390)
																	{	/* Unsafe/pregexp.scm 282 */
																		obj_t BgL_list1463z00_1420;

																		{	/* Unsafe/pregexp.scm 282 */
																			obj_t BgL_arg1464z00_1421;

																			BgL_arg1464z00_1421 =
																				MAKE_YOUNG_PAIR
																				(BgL_posixzd2classzd2_1415, BNIL);
																			BgL_list1463z00_1420 =
																				MAKE_YOUNG_PAIR
																				(BGl_keyword2902z00zz__regexpz00,
																				BgL_arg1464z00_1421);
																		}
																		BgL_arg1459z00_1416 = BgL_list1463z00_1420;
																	}
																else
																	{	/* Unsafe/pregexp.scm 282 */
																		BgL_arg1459z00_1416 =
																			BgL_posixzd2classzd2_1415;
																	}
																BgL_arg1460z00_1417 =
																	(BgL_iz00_1393 + ((long) 2));
																{	/* Unsafe/pregexp.scm 282 */
																	obj_t BgL_list1461z00_1418;

																	{	/* Unsafe/pregexp.scm 282 */
																		obj_t BgL_arg1462z00_1419;

																		BgL_arg1462z00_1419 =
																			MAKE_YOUNG_PAIR(BINT(BgL_arg1460z00_1417),
																			BNIL);
																		BgL_list1461z00_1418 =
																			MAKE_YOUNG_PAIR(BgL_arg1459z00_1416,
																			BgL_arg1462z00_1419);
																	}
																	return BgL_list1461z00_1418;
																}
															}
														}
												}
											else
												{	/* Unsafe/pregexp.scm 275 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2910z00zz__regexpz00,
														BGl_symbol2924z00zz__regexpz00, BUNSPEC);
												}
										}
								}
						}
				}
			}
		}

	}



/* pregexp-read-cluster-type */
	obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__regexpz00(obj_t BgL_sz00_27,
		long BgL_iz00_28, long BgL_nz00_29)
	{
		{	/* Unsafe/pregexp.scm 288 */
			{	/* Unsafe/pregexp.scm 291 */
				unsigned char BgL_cz00_1431;

				BgL_cz00_1431 = STRING_REF(BgL_sz00_27, BgL_iz00_28);
				{

					switch (BgL_cz00_1431)
						{
						case ((unsigned char) '?'):

							{	/* Unsafe/pregexp.scm 294 */
								long BgL_iz00_1435;

								BgL_iz00_1435 = (BgL_iz00_28 + ((long) 1));
								{

									{	/* Unsafe/pregexp.scm 295 */
										unsigned char BgL_aux1067z00_1437;

										BgL_aux1067z00_1437 =
											STRING_REF(BgL_sz00_27, BgL_iz00_1435);
										switch (BgL_aux1067z00_1437)
											{
											case ((unsigned char) ':'):

												{	/* Unsafe/pregexp.scm 296 */
													long BgL_arg1473z00_1439;

													BgL_arg1473z00_1439 = (BgL_iz00_1435 + ((long) 1));
													{	/* Unsafe/pregexp.scm 296 */
														obj_t BgL_list1474z00_1440;

														{	/* Unsafe/pregexp.scm 296 */
															obj_t BgL_arg1475z00_1441;

															BgL_arg1475z00_1441 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1473z00_1439),
																BNIL);
															BgL_list1474z00_1440 =
																MAKE_YOUNG_PAIR(BNIL, BgL_arg1475z00_1441);
														}
														return BgL_list1474z00_1440;
													}
												}
												break;
											case ((unsigned char) '='):

												{	/* Unsafe/pregexp.scm 297 */
													long BgL_arg1476z00_1442;

													BgL_arg1476z00_1442 = (BgL_iz00_1435 + ((long) 1));
													{	/* Unsafe/pregexp.scm 297 */
														obj_t BgL_list1477z00_1443;

														{	/* Unsafe/pregexp.scm 297 */
															obj_t BgL_arg1478z00_1444;

															BgL_arg1478z00_1444 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1476z00_1442),
																BNIL);
															BgL_list1477z00_1443 =
																MAKE_YOUNG_PAIR(BGl_list2935z00zz__regexpz00,
																BgL_arg1478z00_1444);
														}
														return BgL_list1477z00_1443;
													}
												}
												break;
											case ((unsigned char) '!'):

												{	/* Unsafe/pregexp.scm 298 */
													long BgL_arg1479z00_1445;

													BgL_arg1479z00_1445 = (BgL_iz00_1435 + ((long) 1));
													{	/* Unsafe/pregexp.scm 298 */
														obj_t BgL_list1480z00_1446;

														{	/* Unsafe/pregexp.scm 298 */
															obj_t BgL_arg1483z00_1447;

															BgL_arg1483z00_1447 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1479z00_1445),
																BNIL);
															BgL_list1480z00_1446 =
																MAKE_YOUNG_PAIR(BGl_list2938z00zz__regexpz00,
																BgL_arg1483z00_1447);
														}
														return BgL_list1480z00_1446;
													}
												}
												break;
											case ((unsigned char) '>'):

												{	/* Unsafe/pregexp.scm 299 */
													long BgL_arg1484z00_1448;

													BgL_arg1484z00_1448 = (BgL_iz00_1435 + ((long) 1));
													{	/* Unsafe/pregexp.scm 299 */
														obj_t BgL_list1485z00_1449;

														{	/* Unsafe/pregexp.scm 299 */
															obj_t BgL_arg1486z00_1450;

															BgL_arg1486z00_1450 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1484z00_1448),
																BNIL);
															BgL_list1485z00_1449 =
																MAKE_YOUNG_PAIR(BGl_list2941z00zz__regexpz00,
																BgL_arg1486z00_1450);
														}
														return BgL_list1485z00_1449;
													}
												}
												break;
											case ((unsigned char) '<'):

												{	/* Unsafe/pregexp.scm 301 */
													obj_t BgL_arg1487z00_1451;
													long BgL_arg1489z00_1452;

													{	/* Unsafe/pregexp.scm 301 */
														unsigned char BgL_aux1069z00_1456;

														BgL_aux1069z00_1456 =
															STRING_REF(BgL_sz00_27,
															(BgL_iz00_1435 + ((long) 1)));
														switch (BgL_aux1069z00_1456)
															{
															case ((unsigned char) '='):

																BgL_arg1487z00_1451 =
																	BGl_list2944z00zz__regexpz00;
																break;
															case ((unsigned char) '!'):

																BgL_arg1487z00_1451 =
																	BGl_list2947z00zz__regexpz00;
																break;
															default:
																{	/* Unsafe/pregexp.scm 304 */
																	obj_t BgL_list1494z00_3019;

																	BgL_list1494z00_3019 =
																		MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																				'<')), BNIL);
																	BgL_arg1487z00_1451 =
																		BGl_errorz00zz__errorz00
																		(BGl_string2910z00zz__regexpz00,
																		BGl_symbol2933z00zz__regexpz00,
																		CAR(BgL_list1494z00_3019));
													}}}
													BgL_arg1489z00_1452 = (BgL_iz00_1435 + ((long) 2));
													{	/* Unsafe/pregexp.scm 301 */
														obj_t BgL_list1490z00_1453;

														{	/* Unsafe/pregexp.scm 301 */
															obj_t BgL_arg1491z00_1454;

															BgL_arg1491z00_1454 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1489z00_1452),
																BNIL);
															BgL_list1490z00_1453 =
																MAKE_YOUNG_PAIR(BgL_arg1487z00_1451,
																BgL_arg1491z00_1454);
														}
														return BgL_list1490z00_1453;
													}
												}
												break;
											default:
												{
													long BgL_iz00_1462;
													obj_t BgL_rz00_1463;
													bool_t BgL_invzf3zf3_1464;

													BgL_iz00_1462 = BgL_iz00_1435;
													BgL_rz00_1463 = BNIL;
													BgL_invzf3zf3_1464 = ((bool_t) 0);
												BgL_zc3z04anonymousza31495ze3z87_1465:
													{	/* Unsafe/pregexp.scm 307 */
														unsigned char BgL_cz00_1466;

														BgL_cz00_1466 =
															STRING_REF(BgL_sz00_27, BgL_iz00_1462);
														switch (BgL_cz00_1466)
															{
															case ((unsigned char) '-'):

																{
																	bool_t BgL_invzf3zf3_5317;
																	long BgL_iz00_5315;

																	BgL_iz00_5315 = (BgL_iz00_1462 + ((long) 1));
																	BgL_invzf3zf3_5317 = ((bool_t) 1);
																	BgL_invzf3zf3_1464 = BgL_invzf3zf3_5317;
																	BgL_iz00_1462 = BgL_iz00_5315;
																	goto BgL_zc3z04anonymousza31495ze3z87_1465;
																}
																break;
															case ((unsigned char) 'i'):

																{	/* Unsafe/pregexp.scm 310 */
																	long BgL_arg1498z00_1471;
																	obj_t BgL_arg1500z00_1472;

																	BgL_arg1498z00_1471 =
																		(BgL_iz00_1462 + ((long) 1));
																	{	/* Unsafe/pregexp.scm 311 */
																		obj_t BgL_arg1502z00_1473;

																		if (BgL_invzf3zf3_1464)
																			{	/* Unsafe/pregexp.scm 311 */
																				BgL_arg1502z00_1473 =
																					BGl_keyword2929z00zz__regexpz00;
																			}
																		else
																			{	/* Unsafe/pregexp.scm 311 */
																				BgL_arg1502z00_1473 =
																					BGl_keyword2931z00zz__regexpz00;
																			}
																		BgL_arg1500z00_1472 =
																			MAKE_YOUNG_PAIR(BgL_arg1502z00_1473,
																			BgL_rz00_1463);
																	}
																	{
																		bool_t BgL_invzf3zf3_5323;
																		obj_t BgL_rz00_5322;
																		long BgL_iz00_5321;

																		BgL_iz00_5321 = BgL_arg1498z00_1471;
																		BgL_rz00_5322 = BgL_arg1500z00_1472;
																		BgL_invzf3zf3_5323 = ((bool_t) 0);
																		BgL_invzf3zf3_1464 = BgL_invzf3zf3_5323;
																		BgL_rz00_1463 = BgL_rz00_5322;
																		BgL_iz00_1462 = BgL_iz00_5321;
																		goto BgL_zc3z04anonymousza31495ze3z87_1465;
																	}
																}
																break;
															case ((unsigned char) 'x'):

																BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00 = BgL_invzf3zf3_1464;
																{
																	bool_t BgL_invzf3zf3_5326;
																	long BgL_iz00_5324;

																	BgL_iz00_5324 = (BgL_iz00_1462 + ((long) 1));
																	BgL_invzf3zf3_5326 = ((bool_t) 0);
																	BgL_invzf3zf3_1464 = BgL_invzf3zf3_5326;
																	BgL_iz00_1462 = BgL_iz00_5324;
																	goto BgL_zc3z04anonymousza31495ze3z87_1465;
																}
																break;
															case ((unsigned char) ':'):

																{	/* Unsafe/pregexp.scm 316 */
																	long BgL_arg1506z00_1475;

																	BgL_arg1506z00_1475 =
																		(BgL_iz00_1462 + ((long) 1));
																	{	/* Unsafe/pregexp.scm 316 */
																		obj_t BgL_list1507z00_1476;

																		{	/* Unsafe/pregexp.scm 316 */
																			obj_t BgL_arg1508z00_1477;

																			BgL_arg1508z00_1477 =
																				MAKE_YOUNG_PAIR(BINT
																				(BgL_arg1506z00_1475), BNIL);
																			BgL_list1507z00_1476 =
																				MAKE_YOUNG_PAIR(BgL_rz00_1463,
																				BgL_arg1508z00_1477);
																		}
																		return BgL_list1507z00_1476;
																	}
																}
																break;
															default:
																{	/* Unsafe/pregexp.scm 317 */
																	obj_t BgL_list1509z00_2981;

																	BgL_list1509z00_2981 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1466), BNIL);
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2910z00zz__regexpz00,
																		BGl_symbol2933z00zz__regexpz00,
																		CAR(BgL_list1509z00_2981));
																}
															}
													}
												}
											}
									}
								}
							}
							break;
						default:
							{	/* Unsafe/pregexp.scm 318 */
								obj_t BgL_list1510z00_1480;

								{	/* Unsafe/pregexp.scm 318 */
									obj_t BgL_arg1511z00_1481;

									BgL_arg1511z00_1481 =
										MAKE_YOUNG_PAIR(BINT(BgL_iz00_28), BNIL);
									BgL_list1510z00_1480 =
										MAKE_YOUNG_PAIR(BGl_list2926z00zz__regexpz00,
										BgL_arg1511z00_1481);
								}
								return BgL_list1510z00_1480;
							}
						}
				}
			}
		}

	}



/* pregexp-read-subpattern */
	obj_t BGl_pregexpzd2readzd2subpatternz00zz__regexpz00(obj_t BgL_sz00_30,
		long BgL_iz00_31, long BgL_nz00_32)
	{
		{	/* Unsafe/pregexp.scm 320 */
			{	/* Unsafe/pregexp.scm 322 */
				bool_t BgL_rememberzd2spacezd2sensitivezf3zf3_1482;

				BgL_rememberzd2spacezd2sensitivezf3zf3_1482 =
					BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00;
				{	/* Unsafe/pregexp.scm 322 */
					obj_t BgL_ctypzd2izd2_1483;

					BgL_ctypzd2izd2_1483 =
						BGl_pregexpzd2readzd2clusterzd2typezd2zz__regexpz00(BgL_sz00_30,
						BgL_iz00_31, BgL_nz00_32);
					{	/* Unsafe/pregexp.scm 323 */
						obj_t BgL_ctypz00_1484;

						BgL_ctypz00_1484 = CAR(((obj_t) BgL_ctypzd2izd2_1483));
						{	/* Unsafe/pregexp.scm 324 */
							obj_t BgL_iz00_1485;

							{	/* Unsafe/pregexp.scm 325 */
								obj_t BgL_pairz00_3038;

								BgL_pairz00_3038 = CDR(((obj_t) BgL_ctypzd2izd2_1483));
								BgL_iz00_1485 = CAR(BgL_pairz00_3038);
							}
							{	/* Unsafe/pregexp.scm 325 */
								obj_t BgL_vvz00_1486;

								BgL_vvz00_1486 =
									BGl_pregexpzd2readzd2patternz00zz__regexpz00(BgL_sz00_30,
									BgL_iz00_1485, BgL_nz00_32);
								{	/* Unsafe/pregexp.scm 326 */

									BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00 =
										BgL_rememberzd2spacezd2sensitivezf3zf3_1482;
									{	/* Unsafe/pregexp.scm 328 */
										obj_t BgL_vvzd2rezd2_1487;
										obj_t BgL_vvzd2izd2_1488;

										BgL_vvzd2rezd2_1487 = CAR(((obj_t) BgL_vvz00_1486));
										{	/* Unsafe/pregexp.scm 329 */
											obj_t BgL_pairz00_3043;

											BgL_pairz00_3043 = CDR(((obj_t) BgL_vvz00_1486));
											BgL_vvzd2izd2_1488 = CAR(BgL_pairz00_3043);
										}
										{	/* Unsafe/pregexp.scm 330 */
											bool_t BgL_test3162z00_5353;

											if (((long) CINT(BgL_vvzd2izd2_1488) < BgL_nz00_32))
												{	/* Unsafe/pregexp.scm 330 */
													BgL_test3162z00_5353 =
														(STRING_REF(BgL_sz00_30,
															(long) CINT(BgL_vvzd2izd2_1488)) ==
														((unsigned char) ')'));
												}
											else
												{	/* Unsafe/pregexp.scm 330 */
													BgL_test3162z00_5353 = ((bool_t) 0);
												}
											if (BgL_test3162z00_5353)
												{	/* Unsafe/pregexp.scm 335 */
													obj_t BgL_arg1515z00_1492;
													long BgL_arg1516z00_1493;

													{
														obj_t BgL_ctypz00_3074;
														obj_t BgL_rez00_3075;

														BgL_ctypz00_3074 = BgL_ctypz00_1484;
														BgL_rez00_3075 = BgL_vvzd2rezd2_1487;
													BgL_loopz00_3073:
														if (NULLP(BgL_ctypz00_3074))
															{	/* Unsafe/pregexp.scm 335 */
																BgL_arg1515z00_1492 = BgL_rez00_3075;
															}
														else
															{	/* Unsafe/pregexp.scm 336 */
																obj_t BgL_arg1521z00_3083;
																obj_t BgL_arg1523z00_3084;

																BgL_arg1521z00_3083 =
																	CDR(((obj_t) BgL_ctypz00_3074));
																{	/* Unsafe/pregexp.scm 337 */
																	obj_t BgL_arg1524z00_3085;

																	BgL_arg1524z00_3085 =
																		CAR(((obj_t) BgL_ctypz00_3074));
																	{	/* Unsafe/pregexp.scm 337 */
																		obj_t BgL_list1525z00_3086;

																		{	/* Unsafe/pregexp.scm 337 */
																			obj_t BgL_arg1526z00_3087;

																			BgL_arg1526z00_3087 =
																				MAKE_YOUNG_PAIR(BgL_rez00_3075, BNIL);
																			BgL_list1525z00_3086 =
																				MAKE_YOUNG_PAIR(BgL_arg1524z00_3085,
																				BgL_arg1526z00_3087);
																		}
																		BgL_arg1523z00_3084 = BgL_list1525z00_3086;
																	}
																}
																{
																	obj_t BgL_rez00_5369;
																	obj_t BgL_ctypz00_5368;

																	BgL_ctypz00_5368 = BgL_arg1521z00_3083;
																	BgL_rez00_5369 = BgL_arg1523z00_3084;
																	BgL_rez00_3075 = BgL_rez00_5369;
																	BgL_ctypz00_3074 = BgL_ctypz00_5368;
																	goto BgL_loopz00_3073;
																}
															}
													}
													BgL_arg1516z00_1493 =
														((long) CINT(BgL_vvzd2izd2_1488) + ((long) 1));
													{	/* Unsafe/pregexp.scm 333 */
														obj_t BgL_list1517z00_1494;

														{	/* Unsafe/pregexp.scm 333 */
															obj_t BgL_arg1518z00_1495;

															BgL_arg1518z00_1495 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1516z00_1493),
																BNIL);
															BgL_list1517z00_1494 =
																MAKE_YOUNG_PAIR(BgL_arg1515z00_1492,
																BgL_arg1518z00_1495);
														}
														return BgL_list1517z00_1494;
													}
												}
											else
												{	/* Unsafe/pregexp.scm 330 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2910z00zz__regexpz00,
														BGl_symbol2950z00zz__regexpz00, BUNSPEC);
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



/* pregexp-wrap-quantifier-if-any */
	obj_t BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__regexpz00(obj_t
		BgL_vvz00_33, obj_t BgL_sz00_34, long BgL_nz00_35)
	{
		{	/* Unsafe/pregexp.scm 341 */
			{	/* Unsafe/pregexp.scm 343 */
				obj_t BgL_rez00_1510;

				BgL_rez00_1510 = CAR(((obj_t) BgL_vvz00_33));
				{	/* Unsafe/pregexp.scm 344 */
					obj_t BgL_g1070z00_1511;

					{	/* Unsafe/pregexp.scm 344 */
						obj_t BgL_pairz00_3104;

						BgL_pairz00_3104 = CDR(((obj_t) BgL_vvz00_33));
						BgL_g1070z00_1511 = CAR(BgL_pairz00_3104);
					}
					{
						obj_t BgL_iz00_1513;

						BgL_iz00_1513 = BgL_g1070z00_1511;
					BgL_zc3z04anonymousza31529ze3z87_1514:
						if (((long) CINT(BgL_iz00_1513) >= BgL_nz00_35))
							{	/* Unsafe/pregexp.scm 345 */
								return BgL_vvz00_33;
							}
						else
							{	/* Unsafe/pregexp.scm 346 */
								unsigned char BgL_cz00_1516;

								BgL_cz00_1516 =
									STRING_REF(BgL_sz00_34, (long) CINT(BgL_iz00_1513));
								{	/* Unsafe/pregexp.scm 347 */
									bool_t BgL_test3166z00_5386;

									{	/* Unsafe/pregexp.scm 347 */
										bool_t BgL_test3167z00_5387;

										{	/* Unsafe/pregexp.scm 347 */
											bool_t BgL_res2481z00_3112;

											BgL_res2481z00_3112 = isspace(BgL_cz00_1516);
											BgL_test3167z00_5387 = BgL_res2481z00_3112;
										}
										if (BgL_test3167z00_5387)
											{	/* Unsafe/pregexp.scm 347 */
												if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00)
													{	/* Unsafe/pregexp.scm 347 */
														BgL_test3166z00_5386 = ((bool_t) 0);
													}
												else
													{	/* Unsafe/pregexp.scm 347 */
														BgL_test3166z00_5386 = ((bool_t) 1);
													}
											}
										else
											{	/* Unsafe/pregexp.scm 347 */
												BgL_test3166z00_5386 = ((bool_t) 0);
											}
									}
									if (BgL_test3166z00_5386)
										{	/* Unsafe/pregexp.scm 348 */
											long BgL_arg1533z00_1519;

											BgL_arg1533z00_1519 =
												((long) CINT(BgL_iz00_1513) + ((long) 1));
											{
												obj_t BgL_iz00_5392;

												BgL_iz00_5392 = BINT(BgL_arg1533z00_1519);
												BgL_iz00_1513 = BgL_iz00_5392;
												goto BgL_zc3z04anonymousza31529ze3z87_1514;
											}
										}
									else
										{	/* Unsafe/pregexp.scm 347 */
											switch (BgL_cz00_1516)
												{
												case ((unsigned char) '*'):
												case ((unsigned char) '+'):
												case ((unsigned char) '?'):
												case ((unsigned char) '{'):

													{	/* Unsafe/pregexp.scm 351 */
														obj_t BgL_newzd2rezd2_1523;

														{	/* Unsafe/pregexp.scm 351 */
															obj_t BgL_list1569z00_1562;

															{	/* Unsafe/pregexp.scm 351 */
																obj_t BgL_arg1570z00_1563;

																{	/* Unsafe/pregexp.scm 351 */
																	obj_t BgL_arg1573z00_1564;

																	{	/* Unsafe/pregexp.scm 351 */
																		obj_t BgL_arg1574z00_1565;

																		{	/* Unsafe/pregexp.scm 351 */
																			obj_t BgL_arg1575z00_1566;

																			BgL_arg1575z00_1566 =
																				MAKE_YOUNG_PAIR(BgL_rez00_1510, BNIL);
																			BgL_arg1574z00_1565 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2952z00zz__regexpz00,
																				BgL_arg1575z00_1566);
																		}
																		BgL_arg1573z00_1564 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2954z00zz__regexpz00,
																			BgL_arg1574z00_1565);
																	}
																	BgL_arg1570z00_1563 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2956z00zz__regexpz00,
																		BgL_arg1573z00_1564);
																}
																BgL_list1569z00_1562 =
																	MAKE_YOUNG_PAIR
																	(BGl_keyword2958z00zz__regexpz00,
																	BgL_arg1570z00_1563);
															}
															BgL_newzd2rezd2_1523 = BgL_list1569z00_1562;
														}
														{	/* Unsafe/pregexp.scm 351 */
															obj_t BgL_newzd2vvzd2_1524;

															{	/* Unsafe/pregexp.scm 353 */
																obj_t BgL_list1567z00_1560;

																{	/* Unsafe/pregexp.scm 353 */
																	obj_t BgL_arg1568z00_1561;

																	BgL_arg1568z00_1561 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol2960z00zz__regexpz00, BNIL);
																	BgL_list1567z00_1560 =
																		MAKE_YOUNG_PAIR(BgL_newzd2rezd2_1523,
																		BgL_arg1568z00_1561);
																}
																BgL_newzd2vvzd2_1524 = BgL_list1567z00_1560;
															}
															{	/* Unsafe/pregexp.scm 353 */

																switch (BgL_cz00_1516)
																	{
																	case ((unsigned char) '*'):

																		{	/* Unsafe/pregexp.scm 355 */
																			obj_t BgL_arg1536z00_1528;

																			{	/* Unsafe/pregexp.scm 355 */
																				obj_t BgL_pairz00_3120;

																				BgL_pairz00_3120 =
																					CDR(((obj_t) BgL_newzd2rezd2_1523));
																				BgL_arg1536z00_1528 =
																					CDR(BgL_pairz00_3120);
																			}
																			{	/* Unsafe/pregexp.scm 355 */
																				obj_t BgL_auxz00_5406;
																				obj_t BgL_tmpz00_5404;

																				BgL_auxz00_5406 = BINT(((long) 0));
																				BgL_tmpz00_5404 =
																					((obj_t) BgL_arg1536z00_1528);
																				SET_CAR(BgL_tmpz00_5404,
																					BgL_auxz00_5406);
																		}}
																		{	/* Unsafe/pregexp.scm 356 */
																			obj_t BgL_arg1537z00_1529;

																			{	/* Unsafe/pregexp.scm 356 */
																				obj_t BgL_pairz00_3127;

																				{	/* Unsafe/pregexp.scm 356 */
																					obj_t BgL_pairz00_3126;

																					BgL_pairz00_3126 =
																						CDR(((obj_t) BgL_newzd2rezd2_1523));
																					BgL_pairz00_3127 =
																						CDR(BgL_pairz00_3126);
																				}
																				BgL_arg1537z00_1529 =
																					CDR(BgL_pairz00_3127);
																			}
																			{	/* Unsafe/pregexp.scm 356 */
																				obj_t BgL_tmpz00_5413;

																				BgL_tmpz00_5413 =
																					((obj_t) BgL_arg1537z00_1529);
																				SET_CAR(BgL_tmpz00_5413, BFALSE);
																		}} break;
																	case ((unsigned char) '+'):

																		{	/* Unsafe/pregexp.scm 357 */
																			obj_t BgL_arg1540z00_1530;

																			{	/* Unsafe/pregexp.scm 357 */
																				obj_t BgL_pairz00_3132;

																				BgL_pairz00_3132 =
																					CDR(((obj_t) BgL_newzd2rezd2_1523));
																				BgL_arg1540z00_1530 =
																					CDR(BgL_pairz00_3132);
																			}
																			{	/* Unsafe/pregexp.scm 357 */
																				obj_t BgL_auxz00_5421;
																				obj_t BgL_tmpz00_5419;

																				BgL_auxz00_5421 = BINT(((long) 1));
																				BgL_tmpz00_5419 =
																					((obj_t) BgL_arg1540z00_1530);
																				SET_CAR(BgL_tmpz00_5419,
																					BgL_auxz00_5421);
																		}}
																		{	/* Unsafe/pregexp.scm 358 */
																			obj_t BgL_arg1541z00_1531;

																			{	/* Unsafe/pregexp.scm 358 */
																				obj_t BgL_pairz00_3139;

																				{	/* Unsafe/pregexp.scm 358 */
																					obj_t BgL_pairz00_3138;

																					BgL_pairz00_3138 =
																						CDR(((obj_t) BgL_newzd2rezd2_1523));
																					BgL_pairz00_3139 =
																						CDR(BgL_pairz00_3138);
																				}
																				BgL_arg1541z00_1531 =
																					CDR(BgL_pairz00_3139);
																			}
																			{	/* Unsafe/pregexp.scm 358 */
																				obj_t BgL_tmpz00_5428;

																				BgL_tmpz00_5428 =
																					((obj_t) BgL_arg1541z00_1531);
																				SET_CAR(BgL_tmpz00_5428, BFALSE);
																		}} break;
																	case ((unsigned char) '?'):

																		{	/* Unsafe/pregexp.scm 359 */
																			obj_t BgL_arg1542z00_1532;

																			{	/* Unsafe/pregexp.scm 359 */
																				obj_t BgL_pairz00_3144;

																				BgL_pairz00_3144 =
																					CDR(((obj_t) BgL_newzd2rezd2_1523));
																				BgL_arg1542z00_1532 =
																					CDR(BgL_pairz00_3144);
																			}
																			{	/* Unsafe/pregexp.scm 359 */
																				obj_t BgL_auxz00_5436;
																				obj_t BgL_tmpz00_5434;

																				BgL_auxz00_5436 = BINT(((long) 0));
																				BgL_tmpz00_5434 =
																					((obj_t) BgL_arg1542z00_1532);
																				SET_CAR(BgL_tmpz00_5434,
																					BgL_auxz00_5436);
																		}}
																		{	/* Unsafe/pregexp.scm 360 */
																			obj_t BgL_arg1544z00_1533;

																			{	/* Unsafe/pregexp.scm 360 */
																				obj_t BgL_pairz00_3151;

																				{	/* Unsafe/pregexp.scm 360 */
																					obj_t BgL_pairz00_3150;

																					BgL_pairz00_3150 =
																						CDR(((obj_t) BgL_newzd2rezd2_1523));
																					BgL_pairz00_3151 =
																						CDR(BgL_pairz00_3150);
																				}
																				BgL_arg1544z00_1533 =
																					CDR(BgL_pairz00_3151);
																			}
																			{	/* Unsafe/pregexp.scm 360 */
																				obj_t BgL_auxz00_5445;
																				obj_t BgL_tmpz00_5443;

																				BgL_auxz00_5445 = BINT(((long) 1));
																				BgL_tmpz00_5443 =
																					((obj_t) BgL_arg1544z00_1533);
																				SET_CAR(BgL_tmpz00_5443,
																					BgL_auxz00_5445);
																		}} break;
																	case ((unsigned char) '{'):

																		{	/* Unsafe/pregexp.scm 361 */
																			obj_t BgL_pqz00_1534;

																			BgL_pqz00_1534 =
																				BGl_pregexpzd2readzd2numsz00zz__regexpz00
																				(BgL_sz00_34,
																				((long) CINT(BgL_iz00_1513) +
																					((long) 1)), BgL_nz00_35);
																			if (CBOOL(BgL_pqz00_1534))
																				{	/* Unsafe/pregexp.scm 362 */
																					BFALSE;
																				}
																			else
																				{	/* Unsafe/pregexp.scm 363 */
																					obj_t BgL_list1545z00_1535;

																					BgL_list1545z00_1535 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2962z00zz__regexpz00,
																						BNIL);
																					BGl_errorz00zz__errorz00
																						(BGl_string2910z00zz__regexpz00,
																						BGl_symbol2963z00zz__regexpz00,
																						CAR(BgL_list1545z00_1535));
																				}
																			{	/* Unsafe/pregexp.scm 366 */
																				obj_t BgL_arg1546z00_1536;
																				obj_t BgL_arg1547z00_1537;

																				{	/* Unsafe/pregexp.scm 366 */
																					obj_t BgL_pairz00_3163;

																					BgL_pairz00_3163 =
																						CDR(((obj_t) BgL_newzd2rezd2_1523));
																					BgL_arg1546z00_1536 =
																						CDR(BgL_pairz00_3163);
																				}
																				BgL_arg1547z00_1537 =
																					CAR(((obj_t) BgL_pqz00_1534));
																				{	/* Unsafe/pregexp.scm 366 */
																					obj_t BgL_tmpz00_5461;

																					BgL_tmpz00_5461 =
																						((obj_t) BgL_arg1546z00_1536);
																					SET_CAR(BgL_tmpz00_5461,
																						BgL_arg1547z00_1537);
																				}
																			}
																			{	/* Unsafe/pregexp.scm 367 */
																				obj_t BgL_arg1551z00_1538;
																				obj_t BgL_arg1552z00_1539;

																				{	/* Unsafe/pregexp.scm 367 */
																					obj_t BgL_pairz00_3171;

																					{	/* Unsafe/pregexp.scm 367 */
																						obj_t BgL_pairz00_3170;

																						BgL_pairz00_3170 =
																							CDR(
																							((obj_t) BgL_newzd2rezd2_1523));
																						BgL_pairz00_3171 =
																							CDR(BgL_pairz00_3170);
																					}
																					BgL_arg1551z00_1538 =
																						CDR(BgL_pairz00_3171);
																				}
																				{	/* Unsafe/pregexp.scm 367 */
																					obj_t BgL_pairz00_3175;

																					BgL_pairz00_3175 =
																						CDR(((obj_t) BgL_pqz00_1534));
																					BgL_arg1552z00_1539 =
																						CAR(BgL_pairz00_3175);
																				}
																				{	/* Unsafe/pregexp.scm 367 */
																					obj_t BgL_tmpz00_5471;

																					BgL_tmpz00_5471 =
																						((obj_t) BgL_arg1551z00_1538);
																					SET_CAR(BgL_tmpz00_5471,
																						BgL_arg1552z00_1539);
																				}
																			}
																			{	/* Unsafe/pregexp.scm 368 */
																				obj_t BgL_pairz00_3182;

																				{	/* Unsafe/pregexp.scm 368 */
																					obj_t BgL_pairz00_3181;

																					BgL_pairz00_3181 =
																						CDR(((obj_t) BgL_pqz00_1534));
																					BgL_pairz00_3182 =
																						CDR(BgL_pairz00_3181);
																				}
																				BgL_iz00_1513 = CAR(BgL_pairz00_3182);
																			}
																		}
																		break;
																	default:
																		BUNSPEC;
																	}
																{	/* Unsafe/pregexp.scm 369 */
																	long BgL_g1076z00_1541;

																	BgL_g1076z00_1541 =
																		((long) CINT(BgL_iz00_1513) + ((long) 1));
																	{
																		long BgL_iz00_1543;

																		BgL_iz00_1543 = BgL_g1076z00_1541;
																	BgL_zc3z04anonymousza31554ze3z87_1544:
																		if ((BgL_iz00_1543 >= BgL_nz00_35))
																			{	/* Unsafe/pregexp.scm 370 */
																				{	/* Unsafe/pregexp.scm 371 */
																					obj_t BgL_arg1556z00_1546;

																					BgL_arg1556z00_1546 =
																						CDR(((obj_t) BgL_newzd2rezd2_1523));
																					{	/* Unsafe/pregexp.scm 371 */
																						obj_t BgL_tmpz00_5485;

																						BgL_tmpz00_5485 =
																							((obj_t) BgL_arg1556z00_1546);
																						SET_CAR(BgL_tmpz00_5485, BFALSE);
																					}
																				}
																				{	/* Unsafe/pregexp.scm 372 */
																					obj_t BgL_arg1557z00_1547;

																					BgL_arg1557z00_1547 =
																						CDR(((obj_t) BgL_newzd2vvzd2_1524));
																					{	/* Unsafe/pregexp.scm 372 */
																						obj_t BgL_auxz00_5492;
																						obj_t BgL_tmpz00_5490;

																						BgL_auxz00_5492 =
																							BINT(BgL_iz00_1543);
																						BgL_tmpz00_5490 =
																							((obj_t) BgL_arg1557z00_1547);
																						SET_CAR(BgL_tmpz00_5490,
																							BgL_auxz00_5492);
																					}
																				}
																			}
																		else
																			{	/* Unsafe/pregexp.scm 373 */
																				unsigned char BgL_cz00_1548;

																				BgL_cz00_1548 =
																					STRING_REF(BgL_sz00_34,
																					BgL_iz00_1543);
																				{	/* Unsafe/pregexp.scm 374 */
																					bool_t BgL_test3171z00_5496;

																					{	/* Unsafe/pregexp.scm 374 */
																						bool_t BgL_test3172z00_5497;

																						{	/* Unsafe/pregexp.scm 374 */
																							bool_t BgL_res2490z00_3196;

																							BgL_res2490z00_3196 =
																								isspace(BgL_cz00_1548);
																							BgL_test3172z00_5497 =
																								BgL_res2490z00_3196;
																						}
																						if (BgL_test3172z00_5497)
																							{	/* Unsafe/pregexp.scm 374 */
																								if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00)
																									{	/* Unsafe/pregexp.scm 375 */
																										BgL_test3171z00_5496 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Unsafe/pregexp.scm 375 */
																										BgL_test3171z00_5496 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Unsafe/pregexp.scm 374 */
																								BgL_test3171z00_5496 =
																									((bool_t) 0);
																							}
																					}
																					if (BgL_test3171z00_5496)
																						{
																							long BgL_iz00_5500;

																							BgL_iz00_5500 =
																								(BgL_iz00_1543 + ((long) 1));
																							BgL_iz00_1543 = BgL_iz00_5500;
																							goto
																								BgL_zc3z04anonymousza31554ze3z87_1544;
																						}
																					else
																						{	/* Unsafe/pregexp.scm 374 */
																							if (
																								(BgL_cz00_1548 ==
																									((unsigned char) '?')))
																								{	/* Unsafe/pregexp.scm 377 */
																									{	/* Unsafe/pregexp.scm 378 */
																										obj_t BgL_arg1562z00_1553;

																										BgL_arg1562z00_1553 =
																											CDR(
																											((obj_t)
																												BgL_newzd2rezd2_1523));
																										{	/* Unsafe/pregexp.scm 378 */
																											obj_t BgL_tmpz00_5506;

																											BgL_tmpz00_5506 =
																												((obj_t)
																												BgL_arg1562z00_1553);
																											SET_CAR(BgL_tmpz00_5506,
																												BTRUE);
																									}}
																									{	/* Unsafe/pregexp.scm 379 */
																										obj_t BgL_arg1563z00_1554;
																										long BgL_arg1564z00_1555;

																										BgL_arg1563z00_1554 =
																											CDR(
																											((obj_t)
																												BgL_newzd2vvzd2_1524));
																										BgL_arg1564z00_1555 =
																											(BgL_iz00_1543 +
																											((long) 1));
																										{	/* Unsafe/pregexp.scm 379 */
																											obj_t BgL_auxz00_5514;
																											obj_t BgL_tmpz00_5512;

																											BgL_auxz00_5514 =
																												BINT
																												(BgL_arg1564z00_1555);
																											BgL_tmpz00_5512 =
																												((obj_t)
																												BgL_arg1563z00_1554);
																											SET_CAR(BgL_tmpz00_5512,
																												BgL_auxz00_5514);
																								}}}
																							else
																								{	/* Unsafe/pregexp.scm 377 */
																									{	/* Unsafe/pregexp.scm 380 */
																										obj_t BgL_arg1565z00_1556;

																										BgL_arg1565z00_1556 =
																											CDR(
																											((obj_t)
																												BgL_newzd2rezd2_1523));
																										{	/* Unsafe/pregexp.scm 380 */
																											obj_t BgL_tmpz00_5519;

																											BgL_tmpz00_5519 =
																												((obj_t)
																												BgL_arg1565z00_1556);
																											SET_CAR(BgL_tmpz00_5519,
																												BFALSE);
																										}
																									}
																									{	/* Unsafe/pregexp.scm 381 */
																										obj_t BgL_arg1566z00_1557;

																										BgL_arg1566z00_1557 =
																											CDR(
																											((obj_t)
																												BgL_newzd2vvzd2_1524));
																										{	/* Unsafe/pregexp.scm 381 */
																											obj_t BgL_auxz00_5526;
																											obj_t BgL_tmpz00_5524;

																											BgL_auxz00_5526 =
																												BINT(BgL_iz00_1543);
																											BgL_tmpz00_5524 =
																												((obj_t)
																												BgL_arg1566z00_1557);
																											SET_CAR(BgL_tmpz00_5524,
																												BgL_auxz00_5526);
																										}
																									}
																								}
																						}
																				}
																			}
																	}
																}
																return BgL_newzd2vvzd2_1524;
															}
														}
													}
													break;
												default:
													return BgL_vvz00_33;
												}
										}
								}
							}
					}
				}
			}
		}

	}



/* pregexp-read-nums */
	obj_t BGl_pregexpzd2readzd2numsz00zz__regexpz00(obj_t BgL_sz00_36,
		long BgL_iz00_37, long BgL_nz00_38)
	{
		{	/* Unsafe/pregexp.scm 387 */
			{
				obj_t BgL_pz00_1572;
				obj_t BgL_qz00_1573;
				long BgL_kz00_1574;
				long BgL_readingz00_1575;

				BgL_pz00_1572 = BNIL;
				BgL_qz00_1573 = BNIL;
				BgL_kz00_1574 = BgL_iz00_37;
				BgL_readingz00_1575 = ((long) 1);
			BgL_zc3z04anonymousza31576ze3z87_1576:
				if ((BgL_kz00_1574 >= BgL_nz00_38))
					{	/* Unsafe/pregexp.scm 392 */
						BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
							BGl_symbol2965z00zz__regexpz00, BUNSPEC);
					}
				else
					{	/* Unsafe/pregexp.scm 392 */
						BFALSE;
					}
				{	/* Unsafe/pregexp.scm 393 */
					unsigned char BgL_cz00_1579;

					BgL_cz00_1579 = STRING_REF(BgL_sz00_36, BgL_kz00_1574);
					{	/* Unsafe/pregexp.scm 394 */
						bool_t BgL_test3176z00_5534;

						{	/* Unsafe/pregexp.scm 394 */
							bool_t BgL_res2497z00_3224;

							BgL_res2497z00_3224 = isdigit(BgL_cz00_1579);
							BgL_test3176z00_5534 = BgL_res2497z00_3224;
						}
						if (BgL_test3176z00_5534)
							{	/* Unsafe/pregexp.scm 394 */
								if ((BgL_readingz00_1575 == ((long) 1)))
									{	/* Unsafe/pregexp.scm 396 */
										obj_t BgL_arg1582z00_1582;
										long BgL_arg1583z00_1583;

										BgL_arg1582z00_1582 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1579), BgL_pz00_1572);
										BgL_arg1583z00_1583 = (BgL_kz00_1574 + ((long) 1));
										{
											long BgL_readingz00_5543;
											long BgL_kz00_5542;
											obj_t BgL_pz00_5541;

											BgL_pz00_5541 = BgL_arg1582z00_1582;
											BgL_kz00_5542 = BgL_arg1583z00_1583;
											BgL_readingz00_5543 = ((long) 1);
											BgL_readingz00_1575 = BgL_readingz00_5543;
											BgL_kz00_1574 = BgL_kz00_5542;
											BgL_pz00_1572 = BgL_pz00_5541;
											goto BgL_zc3z04anonymousza31576ze3z87_1576;
										}
									}
								else
									{	/* Unsafe/pregexp.scm 397 */
										obj_t BgL_arg1584z00_1584;
										long BgL_arg1587z00_1585;

										BgL_arg1584z00_1584 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1579), BgL_qz00_1573);
										BgL_arg1587z00_1585 = (BgL_kz00_1574 + ((long) 1));
										{
											long BgL_readingz00_5549;
											long BgL_kz00_5548;
											obj_t BgL_qz00_5547;

											BgL_qz00_5547 = BgL_arg1584z00_1584;
											BgL_kz00_5548 = BgL_arg1587z00_1585;
											BgL_readingz00_5549 = ((long) 2);
											BgL_readingz00_1575 = BgL_readingz00_5549;
											BgL_kz00_1574 = BgL_kz00_5548;
											BgL_qz00_1573 = BgL_qz00_5547;
											goto BgL_zc3z04anonymousza31576ze3z87_1576;
										}
									}
							}
						else
							{	/* Unsafe/pregexp.scm 398 */
								bool_t BgL_test3178z00_5550;

								{	/* Unsafe/pregexp.scm 398 */
									bool_t BgL_test3179z00_5551;

									{	/* Unsafe/pregexp.scm 398 */
										bool_t BgL_res2501z00_3232;

										BgL_res2501z00_3232 = isspace(BgL_cz00_1579);
										BgL_test3179z00_5551 = BgL_res2501z00_3232;
									}
									if (BgL_test3179z00_5551)
										{	/* Unsafe/pregexp.scm 398 */
											if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00)
												{	/* Unsafe/pregexp.scm 398 */
													BgL_test3178z00_5550 = ((bool_t) 0);
												}
											else
												{	/* Unsafe/pregexp.scm 398 */
													BgL_test3178z00_5550 = ((bool_t) 1);
												}
										}
									else
										{	/* Unsafe/pregexp.scm 398 */
											BgL_test3178z00_5550 = ((bool_t) 0);
										}
								}
								if (BgL_test3178z00_5550)
									{
										long BgL_kz00_5554;

										BgL_kz00_5554 = (BgL_kz00_1574 + ((long) 1));
										BgL_kz00_1574 = BgL_kz00_5554;
										goto BgL_zc3z04anonymousza31576ze3z87_1576;
									}
								else
									{	/* Unsafe/pregexp.scm 400 */
										bool_t BgL_test3181z00_5556;

										if ((BgL_cz00_1579 == ((unsigned char) ',')))
											{	/* Unsafe/pregexp.scm 400 */
												BgL_test3181z00_5556 =
													(BgL_readingz00_1575 == ((long) 1));
											}
										else
											{	/* Unsafe/pregexp.scm 400 */
												BgL_test3181z00_5556 = ((bool_t) 0);
											}
										if (BgL_test3181z00_5556)
											{
												long BgL_readingz00_5562;
												long BgL_kz00_5560;

												BgL_kz00_5560 = (BgL_kz00_1574 + ((long) 1));
												BgL_readingz00_5562 = ((long) 2);
												BgL_readingz00_1575 = BgL_readingz00_5562;
												BgL_kz00_1574 = BgL_kz00_5560;
												goto BgL_zc3z04anonymousza31576ze3z87_1576;
											}
										else
											{	/* Unsafe/pregexp.scm 400 */
												if ((BgL_cz00_1579 == ((unsigned char) '}')))
													{	/* Unsafe/pregexp.scm 403 */
														obj_t BgL_pz00_1593;
														obj_t BgL_qz00_1594;

														{	/* Unsafe/pregexp.scm 403 */
															obj_t BgL_arg1613z00_1606;

															BgL_arg1613z00_1606 =
																BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																(BGl_pregexpzd2reversez12zc0zz__regexpz00
																(BgL_pz00_1572));
															{	/* Ieee/number.scm 165 */

																BgL_pz00_1593 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_arg1613z00_1606, BINT(((long) 10)));
														}}
														{	/* Unsafe/pregexp.scm 404 */
															obj_t BgL_arg1615z00_1610;

															BgL_arg1615z00_1610 =
																BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																(BGl_pregexpzd2reversez12zc0zz__regexpz00
																(BgL_qz00_1573));
															{	/* Ieee/number.scm 165 */

																BgL_qz00_1594 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_arg1615z00_1610, BINT(((long) 10)));
														}}
														{	/* Unsafe/pregexp.scm 405 */
															bool_t BgL_test3184z00_5573;

															if (CBOOL(BgL_pz00_1593))
																{	/* Unsafe/pregexp.scm 405 */
																	BgL_test3184z00_5573 = ((bool_t) 0);
																}
															else
																{	/* Unsafe/pregexp.scm 405 */
																	BgL_test3184z00_5573 =
																		(BgL_readingz00_1575 == ((long) 1));
																}
															if (BgL_test3184z00_5573)
																{	/* Unsafe/pregexp.scm 405 */
																	obj_t BgL_list1599z00_1596;

																	{	/* Unsafe/pregexp.scm 405 */
																		obj_t BgL_arg1602z00_1597;

																		{	/* Unsafe/pregexp.scm 405 */
																			obj_t BgL_arg1603z00_1598;

																			BgL_arg1603z00_1598 =
																				MAKE_YOUNG_PAIR(BINT(BgL_kz00_1574),
																				BNIL);
																			BgL_arg1602z00_1597 =
																				MAKE_YOUNG_PAIR(BFALSE,
																				BgL_arg1603z00_1598);
																		}
																		BgL_list1599z00_1596 =
																			MAKE_YOUNG_PAIR(BINT(((long) 0)),
																			BgL_arg1602z00_1597);
																	}
																	return BgL_list1599z00_1596;
																}
															else
																{	/* Unsafe/pregexp.scm 405 */
																	if ((BgL_readingz00_1575 == ((long) 1)))
																		{	/* Unsafe/pregexp.scm 406 */
																			obj_t BgL_list1605z00_1600;

																			{	/* Unsafe/pregexp.scm 406 */
																				obj_t BgL_arg1606z00_1601;

																				{	/* Unsafe/pregexp.scm 406 */
																					obj_t BgL_arg1607z00_1602;

																					BgL_arg1607z00_1602 =
																						MAKE_YOUNG_PAIR(BINT(BgL_kz00_1574),
																						BNIL);
																					BgL_arg1606z00_1601 =
																						MAKE_YOUNG_PAIR(BgL_pz00_1593,
																						BgL_arg1607z00_1602);
																				}
																				BgL_list1605z00_1600 =
																					MAKE_YOUNG_PAIR(BgL_pz00_1593,
																					BgL_arg1606z00_1601);
																			}
																			return BgL_list1605z00_1600;
																		}
																	else
																		{	/* Unsafe/pregexp.scm 407 */
																			obj_t BgL_list1608z00_1603;

																			{	/* Unsafe/pregexp.scm 407 */
																				obj_t BgL_arg1611z00_1604;

																				{	/* Unsafe/pregexp.scm 407 */
																					obj_t BgL_arg1612z00_1605;

																					BgL_arg1612z00_1605 =
																						MAKE_YOUNG_PAIR(BINT(BgL_kz00_1574),
																						BNIL);
																					BgL_arg1611z00_1604 =
																						MAKE_YOUNG_PAIR(BgL_qz00_1594,
																						BgL_arg1612z00_1605);
																				}
																				BgL_list1608z00_1603 =
																					MAKE_YOUNG_PAIR(BgL_pz00_1593,
																					BgL_arg1611z00_1604);
																			}
																			return BgL_list1608z00_1603;
																		}
																}
														}
													}
												else
													{	/* Unsafe/pregexp.scm 402 */
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



/* pregexp-read-char-list */
	obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__regexpz00(obj_t BgL_sz00_40,
		long BgL_iz00_41, long BgL_nz00_42)
	{
		{	/* Unsafe/pregexp.scm 417 */
			{
				obj_t BgL_rz00_1620;
				obj_t BgL_iz00_1621;

				BgL_rz00_1620 = BNIL;
				BgL_iz00_1621 = BINT(BgL_iz00_41);
			BgL_zc3z04anonymousza31618ze3z87_1622:
				if (((long) CINT(BgL_iz00_1621) >= BgL_nz00_42))
					{	/* Unsafe/pregexp.scm 421 */
						obj_t BgL_list1620z00_1624;

						BgL_list1620z00_1624 =
							MAKE_YOUNG_PAIR(BGl_string2967z00zz__regexpz00, BNIL);
						return
							BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
							BGl_symbol2968z00zz__regexpz00, CAR(BgL_list1620z00_1624));
					}
				else
					{	/* Unsafe/pregexp.scm 423 */
						unsigned char BgL_cz00_1625;

						BgL_cz00_1625 = STRING_REF(BgL_sz00_40, (long) CINT(BgL_iz00_1621));
						{

							switch (BgL_cz00_1625)
								{
								case ((unsigned char) ']'):

									if (NULLP(BgL_rz00_1620))
										{	/* Unsafe/pregexp.scm 426 */
											obj_t BgL_arg1623z00_1630;
											long BgL_arg1624z00_1631;

											BgL_arg1623z00_1630 =
												MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1625), BgL_rz00_1620);
											BgL_arg1624z00_1631 =
												((long) CINT(BgL_iz00_1621) + ((long) 1));
											{
												obj_t BgL_iz00_5607;
												obj_t BgL_rz00_5606;

												BgL_rz00_5606 = BgL_arg1623z00_1630;
												BgL_iz00_5607 = BINT(BgL_arg1624z00_1631);
												BgL_iz00_1621 = BgL_iz00_5607;
												BgL_rz00_1620 = BgL_rz00_5606;
												goto BgL_zc3z04anonymousza31618ze3z87_1622;
											}
										}
									else
										{	/* Unsafe/pregexp.scm 427 */
											obj_t BgL_arg1626z00_1632;
											long BgL_arg1627z00_1633;

											{	/* Unsafe/pregexp.scm 427 */
												obj_t BgL_arg1630z00_1636;

												BgL_arg1630z00_1636 =
													BGl_pregexpzd2reversez12zc0zz__regexpz00
													(BgL_rz00_1620);
												BgL_arg1626z00_1632 =
													MAKE_YOUNG_PAIR(BGl_keyword2970z00zz__regexpz00,
													BgL_arg1630z00_1636);
											}
											BgL_arg1627z00_1633 =
												((long) CINT(BgL_iz00_1621) + ((long) 1));
											{	/* Unsafe/pregexp.scm 427 */
												obj_t BgL_list1628z00_1634;

												{	/* Unsafe/pregexp.scm 427 */
													obj_t BgL_arg1629z00_1635;

													BgL_arg1629z00_1635 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg1627z00_1633), BNIL);
													BgL_list1628z00_1634 =
														MAKE_YOUNG_PAIR(BgL_arg1626z00_1632,
														BgL_arg1629z00_1635);
												}
												return BgL_list1628z00_1634;
											}
										}
									break;
								case ((unsigned char) '\\'):

									{	/* Unsafe/pregexp.scm 430 */
										obj_t BgL_charzd2izd2_1637;

										BgL_charzd2izd2_1637 =
											BGl_pregexpzd2readzd2escapedzd2charzd2zz__regexpz00
											(BgL_sz00_40, BgL_iz00_1621, BgL_nz00_42);
										if (CBOOL(BgL_charzd2izd2_1637))
											{	/* Unsafe/pregexp.scm 431 */
												obj_t BgL_arg1631z00_1638;
												obj_t BgL_arg1632z00_1639;

												{	/* Unsafe/pregexp.scm 431 */
													obj_t BgL_arg1633z00_1640;

													BgL_arg1633z00_1640 =
														CAR(((obj_t) BgL_charzd2izd2_1637));
													BgL_arg1631z00_1638 =
														MAKE_YOUNG_PAIR(BgL_arg1633z00_1640, BgL_rz00_1620);
												}
												{	/* Unsafe/pregexp.scm 431 */
													obj_t BgL_pairz00_3275;

													BgL_pairz00_3275 =
														CDR(((obj_t) BgL_charzd2izd2_1637));
													BgL_arg1632z00_1639 = CAR(BgL_pairz00_3275);
												}
												{
													obj_t BgL_iz00_5626;
													obj_t BgL_rz00_5625;

													BgL_rz00_5625 = BgL_arg1631z00_1638;
													BgL_iz00_5626 = BgL_arg1632z00_1639;
													BgL_iz00_1621 = BgL_iz00_5626;
													BgL_rz00_1620 = BgL_rz00_5625;
													goto BgL_zc3z04anonymousza31618ze3z87_1622;
												}
											}
										else
											{	/* Unsafe/pregexp.scm 432 */
												obj_t BgL_list1634z00_1641;

												BgL_list1634z00_1641 =
													MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')), BNIL);
												return
													BGl_errorz00zz__errorz00
													(BGl_string2910z00zz__regexpz00,
													BGl_symbol2968z00zz__regexpz00,
													CAR(BgL_list1634z00_1641));
											}
									}
									break;
								case ((unsigned char) '-'):

									{	/* Unsafe/pregexp.scm 433 */
										bool_t BgL_test3190z00_5631;

										if (NULLP(BgL_rz00_1620))
											{	/* Unsafe/pregexp.scm 433 */
												BgL_test3190z00_5631 = ((bool_t) 1);
											}
										else
											{	/* Unsafe/pregexp.scm 434 */
												long BgL_izb21zb2_1663;

												BgL_izb21zb2_1663 =
													((long) CINT(BgL_iz00_1621) + ((long) 1));
												if ((BgL_izb21zb2_1663 < BgL_nz00_42))
													{	/* Unsafe/pregexp.scm 435 */
														BgL_test3190z00_5631 =
															(STRING_REF(BgL_sz00_40,
																BgL_izb21zb2_1663) == ((unsigned char) ']'));
													}
												else
													{	/* Unsafe/pregexp.scm 435 */
														BgL_test3190z00_5631 = ((bool_t) 0);
													}
											}
										if (BgL_test3190z00_5631)
											{	/* Unsafe/pregexp.scm 437 */
												obj_t BgL_arg1639z00_1647;
												long BgL_arg1640z00_1648;

												BgL_arg1639z00_1647 =
													MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1625), BgL_rz00_1620);
												BgL_arg1640z00_1648 =
													((long) CINT(BgL_iz00_1621) + ((long) 1));
												{
													obj_t BgL_iz00_5645;
													obj_t BgL_rz00_5644;

													BgL_rz00_5644 = BgL_arg1639z00_1647;
													BgL_iz00_5645 = BINT(BgL_arg1640z00_1648);
													BgL_iz00_1621 = BgL_iz00_5645;
													BgL_rz00_1620 = BgL_rz00_5644;
													goto BgL_zc3z04anonymousza31618ze3z87_1622;
												}
											}
										else
											{	/* Unsafe/pregexp.scm 438 */
												obj_t BgL_czd2prevzd2_1649;

												BgL_czd2prevzd2_1649 = CAR(((obj_t) BgL_rz00_1620));
												if (CHARP(BgL_czd2prevzd2_1649))
													{	/* Unsafe/pregexp.scm 441 */
														obj_t BgL_arg1642z00_1651;
														long BgL_arg1643z00_1652;

														{	/* Unsafe/pregexp.scm 441 */
															obj_t BgL_arg1644z00_1653;
															obj_t BgL_arg1645z00_1654;

															{	/* Unsafe/pregexp.scm 441 */
																unsigned char BgL_arg1648z00_1655;

																BgL_arg1648z00_1655 =
																	STRING_REF(BgL_sz00_40,
																	((long) CINT(BgL_iz00_1621) + ((long) 1)));
																{	/* Unsafe/pregexp.scm 440 */
																	obj_t BgL_list1649z00_1656;

																	{	/* Unsafe/pregexp.scm 440 */
																		obj_t BgL_arg1650z00_1657;

																		{	/* Unsafe/pregexp.scm 440 */
																			obj_t BgL_arg1651z00_1658;

																			BgL_arg1651z00_1658 =
																				MAKE_YOUNG_PAIR(BCHAR
																				(BgL_arg1648z00_1655), BNIL);
																			BgL_arg1650z00_1657 =
																				MAKE_YOUNG_PAIR(BgL_czd2prevzd2_1649,
																				BgL_arg1651z00_1658);
																		}
																		BgL_list1649z00_1656 =
																			MAKE_YOUNG_PAIR
																			(BGl_keyword2972z00zz__regexpz00,
																			BgL_arg1650z00_1657);
																	}
																	BgL_arg1644z00_1653 = BgL_list1649z00_1656;
															}}
															BgL_arg1645z00_1654 =
																CDR(((obj_t) BgL_rz00_1620));
															BgL_arg1642z00_1651 =
																MAKE_YOUNG_PAIR(BgL_arg1644z00_1653,
																BgL_arg1645z00_1654);
														}
														BgL_arg1643z00_1652 =
															((long) CINT(BgL_iz00_1621) + ((long) 2));
														{
															obj_t BgL_iz00_5664;
															obj_t BgL_rz00_5663;

															BgL_rz00_5663 = BgL_arg1642z00_1651;
															BgL_iz00_5664 = BINT(BgL_arg1643z00_1652);
															BgL_iz00_1621 = BgL_iz00_5664;
															BgL_rz00_1620 = BgL_rz00_5663;
															goto BgL_zc3z04anonymousza31618ze3z87_1622;
														}
													}
												else
													{	/* Unsafe/pregexp.scm 443 */
														obj_t BgL_arg1654z00_1660;
														long BgL_arg1656z00_1661;

														BgL_arg1654z00_1660 =
															MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1625),
															BgL_rz00_1620);
														BgL_arg1656z00_1661 =
															((long) CINT(BgL_iz00_1621) + ((long) 1));
														{
															obj_t BgL_iz00_5671;
															obj_t BgL_rz00_5670;

															BgL_rz00_5670 = BgL_arg1654z00_1660;
															BgL_iz00_5671 = BINT(BgL_arg1656z00_1661);
															BgL_iz00_1621 = BgL_iz00_5671;
															BgL_rz00_1620 = BgL_rz00_5670;
															goto BgL_zc3z04anonymousza31618ze3z87_1622;
														}
													}
											}
									}
									break;
								case ((unsigned char) '['):

									if (
										(STRING_REF(BgL_sz00_40,
												((long) CINT(BgL_iz00_1621) + ((long) 1))) ==
											((unsigned char) ':')))
										{	/* Unsafe/pregexp.scm 445 */
											obj_t BgL_posixzd2charzd2classzd2izd2_1669;

											BgL_posixzd2charzd2classzd2izd2_1669 =
												BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__regexpz00
												(BgL_sz00_40, ((long) CINT(BgL_iz00_1621) + ((long) 2)),
												BgL_nz00_42);
											{	/* Unsafe/pregexp.scm 447 */
												obj_t BgL_arg1661z00_1670;
												obj_t BgL_arg1662z00_1671;

												{	/* Unsafe/pregexp.scm 447 */
													obj_t BgL_arg1663z00_1672;

													BgL_arg1663z00_1672 =
														CAR(((obj_t) BgL_posixzd2charzd2classzd2izd2_1669));
													BgL_arg1661z00_1670 =
														MAKE_YOUNG_PAIR(BgL_arg1663z00_1672, BgL_rz00_1620);
												}
												{	/* Unsafe/pregexp.scm 448 */
													obj_t BgL_pairz00_3322;

													BgL_pairz00_3322 =
														CDR(((obj_t) BgL_posixzd2charzd2classzd2izd2_1669));
													BgL_arg1662z00_1671 = CAR(BgL_pairz00_3322);
												}
												{
													obj_t BgL_iz00_5688;
													obj_t BgL_rz00_5687;

													BgL_rz00_5687 = BgL_arg1661z00_1670;
													BgL_iz00_5688 = BgL_arg1662z00_1671;
													BgL_iz00_1621 = BgL_iz00_5688;
													BgL_rz00_1620 = BgL_rz00_5687;
													goto BgL_zc3z04anonymousza31618ze3z87_1622;
												}
											}
										}
									else
										{	/* Unsafe/pregexp.scm 449 */
											obj_t BgL_arg1665z00_1674;
											long BgL_arg1667z00_1675;

											BgL_arg1665z00_1674 =
												MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1625), BgL_rz00_1620);
											BgL_arg1667z00_1675 =
												((long) CINT(BgL_iz00_1621) + ((long) 1));
											{
												obj_t BgL_iz00_5694;
												obj_t BgL_rz00_5693;

												BgL_rz00_5693 = BgL_arg1665z00_1674;
												BgL_iz00_5694 = BINT(BgL_arg1667z00_1675);
												BgL_iz00_1621 = BgL_iz00_5694;
												BgL_rz00_1620 = BgL_rz00_5693;
												goto BgL_zc3z04anonymousza31618ze3z87_1622;
											}
										}
									break;
								default:
									{	/* Unsafe/pregexp.scm 450 */
										obj_t BgL_arg1672z00_1678;
										long BgL_arg1675z00_1679;

										BgL_arg1672z00_1678 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1625), BgL_rz00_1620);
										BgL_arg1675z00_1679 =
											((long) CINT(BgL_iz00_1621) + ((long) 1));
										{
											obj_t BgL_iz00_5701;
											obj_t BgL_rz00_5700;

											BgL_rz00_5700 = BgL_arg1672z00_1678;
											BgL_iz00_5701 = BINT(BgL_arg1675z00_1679);
											BgL_iz00_1621 = BgL_iz00_5701;
											BgL_rz00_1620 = BgL_rz00_5700;
											goto BgL_zc3z04anonymousza31618ze3z87_1622;
										}
									}
								}
						}
					}
			}
		}

	}



/* pregexp-at-word-boundary? */
	obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__regexpz00(obj_t BgL_sz00_50,
		obj_t BgL_iz00_51, obj_t BgL_nz00_52)
	{
		{	/* Unsafe/pregexp.scm 473 */
			{	/* Unsafe/pregexp.scm 475 */
				bool_t BgL__ortest_1085z00_1699;

				BgL__ortest_1085z00_1699 = ((long) CINT(BgL_iz00_51) == ((long) 0));
				if (BgL__ortest_1085z00_1699)
					{	/* Unsafe/pregexp.scm 475 */
						return BBOOL(BgL__ortest_1085z00_1699);
					}
				else
					{	/* Unsafe/pregexp.scm 475 */
						bool_t BgL__ortest_1086z00_1700;

						BgL__ortest_1086z00_1700 =
							((long) CINT(BgL_iz00_51) >= (long) CINT(BgL_nz00_52));
						if (BgL__ortest_1086z00_1700)
							{	/* Unsafe/pregexp.scm 475 */
								return BBOOL(BgL__ortest_1086z00_1700);
							}
						else
							{	/* Unsafe/pregexp.scm 476 */
								unsigned char BgL_czf2izf2_1701;
								unsigned char BgL_czf2izd21z20_1702;

								BgL_czf2izf2_1701 =
									STRING_REF(((obj_t) BgL_sz00_50), (long) CINT(BgL_iz00_51));
								BgL_czf2izd21z20_1702 =
									STRING_REF(
									((obj_t) BgL_sz00_50),
									((long) CINT(BgL_iz00_51) - ((long) 1)));
								{	/* Unsafe/pregexp.scm 478 */
									obj_t BgL_czf2izf2wzf3zf3_1703;
									obj_t BgL_czf2izd21zf2wzf3z21_1704;

									BgL_czf2izf2wzf3zf3_1703 =
										BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__regexpz00
										(BgL_czf2izf2_1701, BGl_keyword2921z00zz__regexpz00);
									BgL_czf2izd21zf2wzf3z21_1704 =
										BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__regexpz00
										(BgL_czf2izd21z20_1702, BGl_keyword2921z00zz__regexpz00);
									{	/* Unsafe/pregexp.scm 482 */
										bool_t BgL__ortest_1087z00_1705;

										if (CBOOL(BgL_czf2izf2wzf3zf3_1703))
											{	/* Unsafe/pregexp.scm 482 */
												if (CBOOL(BgL_czf2izd21zf2wzf3z21_1704))
													{	/* Unsafe/pregexp.scm 482 */
														BgL__ortest_1087z00_1705 = ((bool_t) 0);
													}
												else
													{	/* Unsafe/pregexp.scm 482 */
														BgL__ortest_1087z00_1705 = ((bool_t) 1);
													}
											}
										else
											{	/* Unsafe/pregexp.scm 482 */
												BgL__ortest_1087z00_1705 = ((bool_t) 0);
											}
										if (BgL__ortest_1087z00_1705)
											{	/* Unsafe/pregexp.scm 482 */
												return BBOOL(BgL__ortest_1087z00_1705);
											}
										else
											{	/* Unsafe/pregexp.scm 482 */
												if (CBOOL(BgL_czf2izf2wzf3zf3_1703))
													{	/* Unsafe/pregexp.scm 483 */
														return BFALSE;
													}
												else
													{	/* Unsafe/pregexp.scm 483 */
														return BgL_czf2izd21zf2wzf3z21_1704;
													}
											}
									}
								}
							}
					}
			}
		}

	}



/* pregexp-check-if-in-char-class? */
	obj_t BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__regexpz00(unsigned
		char BgL_cz00_53, obj_t BgL_charzd2classzd2_54)
	{
		{	/* Unsafe/pregexp.scm 485 */
			if ((BgL_charzd2classzd2_54 == BGl_keyword2900z00zz__regexpz00))
				{	/* Unsafe/pregexp.scm 487 */
					if ((BgL_cz00_53 == ((unsigned char) 10)))
						{	/* Unsafe/pregexp.scm 488 */
							return BFALSE;
						}
					else
						{	/* Unsafe/pregexp.scm 488 */
							return BTRUE;
						}
				}
			else
				{	/* Unsafe/pregexp.scm 487 */
					if ((BgL_charzd2classzd2_54 == BGl_keyword2974z00zz__regexpz00))
						{	/* Unsafe/pregexp.scm 490 */
							bool_t BgL__ortest_1090z00_1713;

							{	/* Unsafe/pregexp.scm 490 */
								bool_t BgL_res2555z00_3382;

								BgL_res2555z00_3382 = isalpha(BgL_cz00_53);
								BgL__ortest_1090z00_1713 = BgL_res2555z00_3382;
							}
							if (BgL__ortest_1090z00_1713)
								{	/* Unsafe/pregexp.scm 490 */
									return BBOOL(BgL__ortest_1090z00_1713);
								}
							else
								{	/* Unsafe/pregexp.scm 490 */
									bool_t BgL_res2556z00_3384;

									BgL_res2556z00_3384 = isdigit(BgL_cz00_53);
									return BBOOL(BgL_res2556z00_3384);
								}
						}
					else
						{	/* Unsafe/pregexp.scm 487 */
							if ((BgL_charzd2classzd2_54 == BGl_keyword2976z00zz__regexpz00))
								{	/* Unsafe/pregexp.scm 491 */
									bool_t BgL_res2558z00_3388;

									BgL_res2558z00_3388 = isalpha(BgL_cz00_53);
									return BBOOL(BgL_res2558z00_3388);
								}
							else
								{	/* Unsafe/pregexp.scm 487 */
									if (
										(BgL_charzd2classzd2_54 == BGl_keyword2978z00zz__regexpz00))
										{	/* Unsafe/pregexp.scm 487 */
											return BBOOL(((BgL_cz00_53) < ((long) 128)));
										}
									else
										{	/* Unsafe/pregexp.scm 487 */
											if (
												(BgL_charzd2classzd2_54 ==
													BGl_keyword2980z00zz__regexpz00))
												{	/* Unsafe/pregexp.scm 493 */
													bool_t BgL__ortest_1091z00_1718;

													BgL__ortest_1091z00_1718 =
														(BgL_cz00_53 == ((unsigned char) ' '));
													if (BgL__ortest_1091z00_1718)
														{	/* Unsafe/pregexp.scm 493 */
															return BBOOL(BgL__ortest_1091z00_1718);
														}
													else
														{	/* Unsafe/pregexp.scm 493 */
															unsigned char BgL_char2z00_3401;

															BgL_char2z00_3401 =
																BGl_za2pregexpzd2tabzd2charza2z00zz__regexpz00;
															return BBOOL((BgL_cz00_53 == BgL_char2z00_3401));
														}
												}
											else
												{	/* Unsafe/pregexp.scm 487 */
													if (
														(BgL_charzd2classzd2_54 ==
															BGl_keyword2982z00zz__regexpz00))
														{	/* Unsafe/pregexp.scm 487 */
															return BBOOL(((BgL_cz00_53) < ((long) 32)));
														}
													else
														{	/* Unsafe/pregexp.scm 487 */
															if (
																(BgL_charzd2classzd2_54 ==
																	BGl_keyword2915z00zz__regexpz00))
																{	/* Unsafe/pregexp.scm 495 */
																	bool_t BgL_res2569z00_3412;

																	BgL_res2569z00_3412 = isdigit(BgL_cz00_53);
																	return BBOOL(BgL_res2569z00_3412);
																}
															else
																{	/* Unsafe/pregexp.scm 487 */
																	if (
																		(BgL_charzd2classzd2_54 ==
																			BGl_keyword2984z00zz__regexpz00))
																		{	/* Unsafe/pregexp.scm 487 */
																			if (((BgL_cz00_53) >= ((long) 32)))
																				{	/* Unsafe/pregexp.scm 497 */
																					bool_t BgL_test3213z00_5772;

																					{	/* Unsafe/pregexp.scm 497 */
																						bool_t BgL_res2573z00_3420;

																						BgL_res2573z00_3420 =
																							isspace(BgL_cz00_53);
																						BgL_test3213z00_5772 =
																							BgL_res2573z00_3420;
																					}
																					if (BgL_test3213z00_5772)
																						{	/* Unsafe/pregexp.scm 497 */
																							return BFALSE;
																						}
																					else
																						{	/* Unsafe/pregexp.scm 497 */
																							return BTRUE;
																						}
																				}
																			else
																				{	/* Unsafe/pregexp.scm 496 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Unsafe/pregexp.scm 487 */
																			if (
																				(BgL_charzd2classzd2_54 ==
																					BGl_keyword2986z00zz__regexpz00))
																				{	/* Unsafe/pregexp.scm 498 */
																					bool_t BgL_res2575z00_3424;

																					BgL_res2575z00_3424 =
																						islower(BgL_cz00_53);
																					return BBOOL(BgL_res2575z00_3424);
																				}
																			else
																				{	/* Unsafe/pregexp.scm 487 */
																					if (
																						(BgL_charzd2classzd2_54 ==
																							BGl_keyword2988z00zz__regexpz00))
																						{	/* Unsafe/pregexp.scm 487 */
																							return
																								BBOOL(
																								((BgL_cz00_53) >= ((long) 32)));
																						}
																					else
																						{	/* Unsafe/pregexp.scm 487 */
																							if (
																								(BgL_charzd2classzd2_54 ==
																									BGl_keyword2990z00zz__regexpz00))
																								{	/* Unsafe/pregexp.scm 487 */
																									if (
																										((BgL_cz00_53) >=
																											((long) 32)))
																										{	/* Unsafe/pregexp.scm 501 */
																											bool_t
																												BgL_test3218z00_5788;
																											{	/* Unsafe/pregexp.scm 501 */
																												bool_t
																													BgL_res2582z00_3438;
																												BgL_res2582z00_3438 =
																													isspace(BgL_cz00_53);
																												BgL_test3218z00_5788 =
																													BgL_res2582z00_3438;
																											}
																											if (BgL_test3218z00_5788)
																												{	/* Unsafe/pregexp.scm 501 */
																													return BFALSE;
																												}
																											else
																												{	/* Unsafe/pregexp.scm 502 */
																													bool_t
																														BgL_test3219z00_5790;
																													{	/* Unsafe/pregexp.scm 502 */
																														bool_t
																															BgL_res2583z00_3440;
																														BgL_res2583z00_3440
																															=
																															isalpha
																															(BgL_cz00_53);
																														BgL_test3219z00_5790
																															=
																															BgL_res2583z00_3440;
																													}
																													if (BgL_test3219z00_5790)
																														{	/* Unsafe/pregexp.scm 502 */
																															return BFALSE;
																														}
																													else
																														{	/* Unsafe/pregexp.scm 503 */
																															bool_t
																																BgL_test3220z00_5792;
																															{	/* Unsafe/pregexp.scm 503 */
																																bool_t
																																	BgL_res2584z00_3442;
																																BgL_res2584z00_3442
																																	=
																																	isdigit
																																	(BgL_cz00_53);
																																BgL_test3220z00_5792
																																	=
																																	BgL_res2584z00_3442;
																															}
																															if (BgL_test3220z00_5792)
																																{	/* Unsafe/pregexp.scm 503 */
																																	return BFALSE;
																																}
																															else
																																{	/* Unsafe/pregexp.scm 503 */
																																	return BTRUE;
																																}
																														}
																												}
																										}
																									else
																										{	/* Unsafe/pregexp.scm 500 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Unsafe/pregexp.scm 487 */
																									if (
																										(BgL_charzd2classzd2_54 ==
																											BGl_keyword2918z00zz__regexpz00))
																										{	/* Unsafe/pregexp.scm 504 */
																											bool_t
																												BgL_res2586z00_3446;
																											BgL_res2586z00_3446 =
																												isspace(BgL_cz00_53);
																											return
																												BBOOL
																												(BgL_res2586z00_3446);
																										}
																									else
																										{	/* Unsafe/pregexp.scm 487 */
																											if (
																												(BgL_charzd2classzd2_54
																													==
																													BGl_keyword2992z00zz__regexpz00))
																												{	/* Unsafe/pregexp.scm 505 */
																													bool_t
																														BgL_res2588z00_3450;
																													BgL_res2588z00_3450 =
																														isupper
																														(BgL_cz00_53);
																													return
																														BBOOL
																														(BgL_res2588z00_3450);
																												}
																											else
																												{	/* Unsafe/pregexp.scm 487 */
																													if (
																														(BgL_charzd2classzd2_54
																															==
																															BGl_keyword2921z00zz__regexpz00))
																														{	/* Unsafe/pregexp.scm 506 */
																															bool_t
																																BgL__ortest_1096z00_1738;
																															{	/* Unsafe/pregexp.scm 506 */
																																bool_t
																																	BgL_res2590z00_3454;
																																BgL_res2590z00_3454
																																	=
																																	isalpha
																																	(BgL_cz00_53);
																																BgL__ortest_1096z00_1738
																																	=
																																	BgL_res2590z00_3454;
																															}
																															if (BgL__ortest_1096z00_1738)
																																{	/* Unsafe/pregexp.scm 506 */
																																	return
																																		BBOOL
																																		(BgL__ortest_1096z00_1738);
																																}
																															else
																																{	/* Unsafe/pregexp.scm 507 */
																																	bool_t
																																		BgL__ortest_1097z00_1739;
																																	{	/* Unsafe/pregexp.scm 507 */
																																		bool_t
																																			BgL_res2591z00_3456;
																																		BgL_res2591z00_3456
																																			=
																																			isdigit
																																			(BgL_cz00_53);
																																		BgL__ortest_1097z00_1739
																																			=
																																			BgL_res2591z00_3456;
																																	}
																																	if (BgL__ortest_1097z00_1739)
																																		{	/* Unsafe/pregexp.scm 507 */
																																			return
																																				BBOOL
																																				(BgL__ortest_1097z00_1739);
																																		}
																																	else
																																		{	/* Unsafe/pregexp.scm 507 */
																																			return
																																				BBOOL(
																																				(BgL_cz00_53
																																					==
																																					((unsigned char) '_')));
																														}}}
																													else
																														{	/* Unsafe/pregexp.scm 487 */
																															if (
																																(BgL_charzd2classzd2_54
																																	==
																																	BGl_keyword2994z00zz__regexpz00))
																																{	/* Unsafe/pregexp.scm 509 */
																																	bool_t
																																		BgL__ortest_1098z00_1741;
																																	{	/* Unsafe/pregexp.scm 509 */
																																		bool_t
																																			BgL_res2594z00_3463;
																																		BgL_res2594z00_3463
																																			=
																																			isdigit
																																			(BgL_cz00_53);
																																		BgL__ortest_1098z00_1741
																																			=
																																			BgL_res2594z00_3463;
																																	}
																																	if (BgL__ortest_1098z00_1741)
																																		{	/* Unsafe/pregexp.scm 509 */
																																			return
																																				BBOOL
																																				(BgL__ortest_1098z00_1741);
																																		}
																																	else
																																		{	/* Unsafe/pregexp.scm 510 */
																																			bool_t
																																				BgL__ortest_1099z00_1742;
																																			BgL__ortest_1099z00_1742
																																				=
																																				(toupper
																																				(BgL_cz00_53)
																																				==
																																				toupper(
																																					((unsigned char) 'a')));
																																			if (BgL__ortest_1099z00_1742)
																																				{	/* Unsafe/pregexp.scm 510 */
																																					return
																																						BBOOL
																																						(BgL__ortest_1099z00_1742);
																																				}
																																			else
																																				{	/* Unsafe/pregexp.scm 510 */
																																					bool_t
																																						BgL__ortest_1100z00_1743;
																																					BgL__ortest_1100z00_1743
																																						=
																																						(toupper
																																						(BgL_cz00_53)
																																						==
																																						toupper
																																						(((unsigned char) 'b')));
																																					if (BgL__ortest_1100z00_1743)
																																						{	/* Unsafe/pregexp.scm 510 */
																																							return
																																								BBOOL
																																								(BgL__ortest_1100z00_1743);
																																						}
																																					else
																																						{	/* Unsafe/pregexp.scm 511 */
																																							bool_t
																																								BgL__ortest_1101z00_1744;
																																							BgL__ortest_1101z00_1744
																																								=
																																								(toupper
																																								(BgL_cz00_53)
																																								==
																																								toupper
																																								(((unsigned char) 'c')));
																																							if (BgL__ortest_1101z00_1744)
																																								{	/* Unsafe/pregexp.scm 511 */
																																									return
																																										BBOOL
																																										(BgL__ortest_1101z00_1744);
																																								}
																																							else
																																								{	/* Unsafe/pregexp.scm 511 */
																																									bool_t
																																										BgL__ortest_1102z00_1745;
																																									BgL__ortest_1102z00_1745
																																										=
																																										(toupper
																																										(BgL_cz00_53)
																																										==
																																										toupper
																																										(((unsigned char) 'd')));
																																									if (BgL__ortest_1102z00_1745)
																																										{	/* Unsafe/pregexp.scm 511 */
																																											return
																																												BBOOL
																																												(BgL__ortest_1102z00_1745);
																																										}
																																									else
																																										{	/* Unsafe/pregexp.scm 512 */
																																											bool_t
																																												BgL__ortest_1103z00_1746;
																																											BgL__ortest_1103z00_1746
																																												=
																																												(toupper
																																												(BgL_cz00_53)
																																												==
																																												toupper
																																												(((unsigned char) 'e')));
																																											if (BgL__ortest_1103z00_1746)
																																												{	/* Unsafe/pregexp.scm 512 */
																																													return
																																														BBOOL
																																														(BgL__ortest_1103z00_1746);
																																												}
																																											else
																																												{	/* Unsafe/pregexp.scm 512 */
																																													return
																																														BBOOL
																																														(
																																														(toupper
																																															(BgL_cz00_53)
																																															==
																																															toupper
																																															(((unsigned char) 'f'))));
																																}}}}}}}
																															else
																																{	/* Unsafe/pregexp.scm 513 */
																																	obj_t
																																		BgL_list1719z00_1747;
																																	BgL_list1719z00_1747
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_charzd2classzd2_54,
																																		BNIL);
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BGl_string2910z00zz__regexpz00,
																																		BGl_symbol2996z00zz__regexpz00,
																																		CAR
																																		(BgL_list1719z00_1747));
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
				}
		}

	}



/* pregexp-list-ref */
	obj_t BGl_pregexpzd2listzd2refz00zz__regexpz00(obj_t BgL_sz00_55,
		obj_t BgL_iz00_56)
	{
		{	/* Unsafe/pregexp.scm 515 */
			{
				obj_t BgL_sz00_3566;
				long BgL_kz00_3567;

				BgL_sz00_3566 = BgL_sz00_55;
				BgL_kz00_3567 = ((long) 0);
			BgL_loopz00_3565:
				if (NULLP(BgL_sz00_3566))
					{	/* Unsafe/pregexp.scm 520 */
						return BFALSE;
					}
				else
					{	/* Unsafe/pregexp.scm 520 */
						if ((BgL_kz00_3567 == (long) CINT(BgL_iz00_56)))
							{	/* Unsafe/pregexp.scm 521 */
								return CAR(((obj_t) BgL_sz00_3566));
							}
						else
							{
								long BgL_kz00_5859;
								obj_t BgL_sz00_5856;

								BgL_sz00_5856 = CDR(((obj_t) BgL_sz00_3566));
								BgL_kz00_5859 = (BgL_kz00_3567 + ((long) 1));
								BgL_kz00_3567 = BgL_kz00_5859;
								BgL_sz00_3566 = BgL_sz00_5856;
								goto BgL_loopz00_3565;
							}
					}
			}
		}

	}



/* sub~0 */
	obj_t BGl_subze70ze7zz__regexpz00(obj_t BgL_rez00_1758)
	{
		{	/* Unsafe/pregexp.scm 536 */
			if (PAIRP(BgL_rez00_1758))
				{	/* Unsafe/pregexp.scm 538 */
					obj_t BgL_carzd2rezd2_1761;
					obj_t BgL_subzd2cdrzd2rez00_1762;

					BgL_carzd2rezd2_1761 = CAR(BgL_rez00_1758);
					BgL_subzd2cdrzd2rez00_1762 =
						BGl_subze70ze7zz__regexpz00(CDR(BgL_rez00_1758));
					if ((BgL_carzd2rezd2_1761 == BGl_keyword2927z00zz__regexpz00))
						{	/* Unsafe/pregexp.scm 541 */
							obj_t BgL_arg1729z00_1764;

							BgL_arg1729z00_1764 = MAKE_YOUNG_PAIR(BgL_rez00_1758, BFALSE);
							return
								MAKE_YOUNG_PAIR(BgL_arg1729z00_1764,
								BgL_subzd2cdrzd2rez00_1762);
						}
					else
						{	/* Unsafe/pregexp.scm 540 */
							return
								BGl_appendzd221011zd2zz__regexpz00(BGl_subze70ze7zz__regexpz00
								(BgL_carzd2rezd2_1761), BgL_subzd2cdrzd2rez00_1762);
						}
				}
			else
				{	/* Unsafe/pregexp.scm 537 */
					return BNIL;
				}
		}

	}



/* pregexp-match-positions-aux */
	obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__regexpz00(obj_t
		BgL_rez00_58, obj_t BgL_sz00_59, long BgL_snz00_60, obj_t BgL_startz00_61,
		obj_t BgL_nz00_62, obj_t BgL_iz00_63)
	{
		{	/* Unsafe/pregexp.scm 545 */
			{	/* Unsafe/pregexp.scm 547 */
				obj_t BgL_nz00_4713;
				obj_t BgL_snz00_4712;

				BgL_nz00_4713 = MAKE_CELL(BgL_nz00_62);
				BgL_snz00_4712 = MAKE_CELL(BINT(BgL_snz00_60));
				{	/* Unsafe/pregexp.scm 547 */
					obj_t BgL_backrefsz00_1769;
					obj_t BgL_casezd2sensitivezf3z21_4714;

					BgL_backrefsz00_1769 = BGl_subze70ze7zz__regexpz00(BgL_rez00_58);
					BgL_casezd2sensitivezf3z21_4714 = MAKE_CELL(BTRUE);
					BGl_z62subz62zz__regexpz00(BgL_startz00_61, BgL_sz00_59,
						BgL_backrefsz00_1769, BgL_snz00_4712, BGl_proc2998z00zz__regexpz00,
						BgL_casezd2sensitivezf3z21_4714, BgL_nz00_4713, BgL_rez00_58,
						BgL_iz00_63, BGl_proc2998z00zz__regexpz00,
						BGl_proc2999z00zz__regexpz00);
					{	/* Unsafe/pregexp.scm 722 */
						obj_t BgL_backrefsz00_2016;

						if (NULLP(BgL_backrefsz00_1769))
							{	/* Unsafe/pregexp.scm 722 */
								BgL_backrefsz00_2016 = BNIL;
							}
						else
							{	/* Unsafe/pregexp.scm 722 */
								obj_t BgL_head1170z00_2020;

								{	/* Unsafe/pregexp.scm 722 */
									obj_t BgL_arg1901z00_2032;

									{	/* Unsafe/pregexp.scm 722 */
										obj_t BgL_pairz00_3921;

										BgL_pairz00_3921 = CAR(((obj_t) BgL_backrefsz00_1769));
										BgL_arg1901z00_2032 = CDR(BgL_pairz00_3921);
									}
									{	/* Unsafe/pregexp.scm 722 */
										obj_t BgL_res2708z00_3922;

										BgL_res2708z00_3922 =
											MAKE_YOUNG_PAIR(BgL_arg1901z00_2032, BNIL);
										BgL_head1170z00_2020 = BgL_res2708z00_3922;
									}
								}
								{	/* Unsafe/pregexp.scm 722 */
									obj_t BgL_g1173z00_2021;

									BgL_g1173z00_2021 = CDR(((obj_t) BgL_backrefsz00_1769));
									{
										obj_t BgL_l1168z00_3947;
										obj_t BgL_tail1171z00_3948;

										BgL_l1168z00_3947 = BgL_g1173z00_2021;
										BgL_tail1171z00_3948 = BgL_head1170z00_2020;
									BgL_zc3z04anonymousza31894ze3z87_3946:
										if (NULLP(BgL_l1168z00_3947))
											{	/* Unsafe/pregexp.scm 722 */
												BgL_backrefsz00_2016 = BgL_head1170z00_2020;
											}
										else
											{	/* Unsafe/pregexp.scm 722 */
												obj_t BgL_newtail1172z00_3955;

												{	/* Unsafe/pregexp.scm 722 */
													obj_t BgL_arg1897z00_3956;

													{	/* Unsafe/pregexp.scm 722 */
														obj_t BgL_pairz00_3961;

														BgL_pairz00_3961 = CAR(((obj_t) BgL_l1168z00_3947));
														BgL_arg1897z00_3956 = CDR(BgL_pairz00_3961);
													}
													{	/* Unsafe/pregexp.scm 722 */
														obj_t BgL_res2714z00_3962;

														BgL_res2714z00_3962 =
															MAKE_YOUNG_PAIR(BgL_arg1897z00_3956, BNIL);
														BgL_newtail1172z00_3955 = BgL_res2714z00_3962;
													}
												}
												SET_CDR(BgL_tail1171z00_3948, BgL_newtail1172z00_3955);
												{	/* Unsafe/pregexp.scm 722 */
													obj_t BgL_arg1896z00_3958;

													BgL_arg1896z00_3958 =
														CDR(((obj_t) BgL_l1168z00_3947));
													{
														obj_t BgL_tail1171z00_5893;
														obj_t BgL_l1168z00_5892;

														BgL_l1168z00_5892 = BgL_arg1896z00_3958;
														BgL_tail1171z00_5893 = BgL_newtail1172z00_3955;
														BgL_tail1171z00_3948 = BgL_tail1171z00_5893;
														BgL_l1168z00_3947 = BgL_l1168z00_5892;
														goto BgL_zc3z04anonymousza31894ze3z87_3946;
													}
												}
											}
									}
								}
							}
						if (CBOOL(CAR(((obj_t) BgL_backrefsz00_2016))))
							{	/* Unsafe/pregexp.scm 723 */
								return BgL_backrefsz00_2016;
							}
						else
							{	/* Unsafe/pregexp.scm 723 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* &loup-one-of-chars */
	obj_t BGl_z62loupzd2onezd2ofzd2charszb0zz__regexpz00(obj_t BgL_fkz00_4518,
		obj_t BgL_skz00_4517, obj_t BgL_iz00_4516, obj_t BgL_startz00_4515,
		obj_t BgL_sz00_4514, obj_t BgL_backrefsz00_4513, obj_t BgL_snz00_4512,
		obj_t BgL_identityz00_4511, obj_t BgL_casezd2sensitivezf3z21_4510,
		obj_t BgL_nz00_4509, obj_t BgL_charsz00_1826)
	{
		{	/* Unsafe/pregexp.scm 592 */
			if (NULLP(BgL_charsz00_1826))
				{	/* Unsafe/pregexp.scm 593 */
					return PROCEDURE_ENTRY(BgL_fkz00_4518) (BgL_fkz00_4518, BEOA);
				}
			else
				{	/* Unsafe/pregexp.scm 594 */
					obj_t BgL_arg1775z00_1829;

					BgL_arg1775z00_1829 = CAR(((obj_t) BgL_charsz00_1826));
					{	/* Unsafe/pregexp.scm 596 */
						obj_t BgL_zc3z04anonymousza31777ze3z87_4506;

						BgL_zc3z04anonymousza31777ze3z87_4506 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31777ze3ze5zz__regexpz00,
							(int) (((long) 0)), (int) (((long) 11)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 0)), ((obj_t) BgL_nz00_4509));
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4510));
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 2)), BgL_identityz00_4511);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 3)), ((obj_t) BgL_snz00_4512));
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 4)), BgL_backrefsz00_4513);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 5)), BgL_sz00_4514);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 6)), BgL_startz00_4515);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 7)), BgL_iz00_4516);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 8)), BgL_skz00_4517);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 9)), BgL_fkz00_4518);
						PROCEDURE_SET(BgL_zc3z04anonymousza31777ze3z87_4506,
							(int) (((long) 10)), BgL_charsz00_1826);
						return BGl_z62subz62zz__regexpz00(BgL_startz00_4515, BgL_sz00_4514,
							BgL_backrefsz00_4513, BgL_snz00_4512, BgL_identityz00_4511,
							BgL_casezd2sensitivezf3z21_4510, BgL_nz00_4509,
							BgL_arg1775z00_1829, BgL_iz00_4516, BgL_skz00_4517,
							BgL_zc3z04anonymousza31777ze3z87_4506);
					}
				}
		}

	}



/* &sub */
	obj_t BGl_z62subz62zz__regexpz00(obj_t BgL_startz00_4525, obj_t BgL_sz00_4524,
		obj_t BgL_backrefsz00_4523, obj_t BgL_snz00_4522,
		obj_t BgL_identityz00_4521, obj_t BgL_casezd2sensitivezf3z21_4520,
		obj_t BgL_nz00_4519, obj_t BgL_rez00_1773, obj_t BgL_iz00_1774,
		obj_t BgL_skz00_1775, obj_t BgL_fkz00_1776)
	{
		{	/* Unsafe/pregexp.scm 550 */
		BGl_z62subz62zz__regexpz00:
			if ((BgL_rez00_1773 == BGl_keyword2896z00zz__regexpz00))
				{	/* Unsafe/pregexp.scm 552 */
					if (((long) CINT(BgL_iz00_1774) == (long) CINT(BgL_startz00_4525)))
						{	/* Unsafe/pregexp.scm 554 */
							return
								PROCEDURE_ENTRY(BgL_skz00_1775) (BgL_skz00_1775, BgL_iz00_1774,
								BEOA);
						}
					else
						{	/* Unsafe/pregexp.scm 554 */
							return PROCEDURE_ENTRY(BgL_fkz00_1776) (BgL_fkz00_1776, BEOA);
						}
				}
			else
				{	/* Unsafe/pregexp.scm 552 */
					if ((BgL_rez00_1773 == BGl_keyword2898z00zz__regexpz00))
						{	/* Unsafe/pregexp.scm 558 */
							bool_t BgL_test3244z00_5949;

							{	/* Unsafe/pregexp.scm 558 */
								long BgL_n1z00_3596;
								long BgL_n2z00_3597;

								BgL_n1z00_3596 = (long) CINT(BgL_iz00_1774);
								BgL_n2z00_3597 = (long) CINT(CELL_REF(BgL_nz00_4519));
								BgL_test3244z00_5949 = (BgL_n1z00_3596 >= BgL_n2z00_3597);
							}
							if (BgL_test3244z00_5949)
								{	/* Unsafe/pregexp.scm 558 */
									return
										PROCEDURE_ENTRY(BgL_skz00_1775) (BgL_skz00_1775,
										BgL_iz00_1774, BEOA);
								}
							else
								{	/* Unsafe/pregexp.scm 558 */
									return PROCEDURE_ENTRY(BgL_fkz00_1776) (BgL_fkz00_1776, BEOA);
								}
						}
					else
						{	/* Unsafe/pregexp.scm 556 */
							if ((BgL_rez00_1773 == BGl_keyword2894z00zz__regexpz00))
								{	/* Unsafe/pregexp.scm 560 */
									return
										PROCEDURE_ENTRY(BgL_skz00_1775) (BgL_skz00_1775,
										BgL_iz00_1774, BEOA);
								}
							else
								{	/* Unsafe/pregexp.scm 560 */
									if ((BgL_rez00_1773 == BGl_keyword2911z00zz__regexpz00))
										{	/* Unsafe/pregexp.scm 562 */
											if (CBOOL
												(BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__regexpz00
													(BgL_sz00_4524, BgL_iz00_1774,
														CELL_REF(BgL_nz00_4519))))
												{	/* Unsafe/pregexp.scm 563 */
													return
														PROCEDURE_ENTRY(BgL_skz00_1775) (BgL_skz00_1775,
														BgL_iz00_1774, BEOA);
												}
											else
												{	/* Unsafe/pregexp.scm 563 */
													return
														PROCEDURE_ENTRY(BgL_fkz00_1776) (BgL_fkz00_1776,
														BEOA);
												}
										}
									else
										{	/* Unsafe/pregexp.scm 562 */
											if ((BgL_rez00_1773 == BGl_keyword2913z00zz__regexpz00))
												{	/* Unsafe/pregexp.scm 566 */
													if (CBOOL
														(BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__regexpz00
															(BgL_sz00_4524, BgL_iz00_1774,
																CELL_REF(BgL_nz00_4519))))
														{	/* Unsafe/pregexp.scm 567 */
															return
																PROCEDURE_ENTRY(BgL_fkz00_1776) (BgL_fkz00_1776,
																BEOA);
														}
													else
														{	/* Unsafe/pregexp.scm 567 */
															return
																PROCEDURE_ENTRY(BgL_skz00_1775) (BgL_skz00_1775,
																BgL_iz00_1774, BEOA);
														}
												}
											else
												{	/* Unsafe/pregexp.scm 570 */
													bool_t BgL_test3250z00_5990;

													if (CHARP(BgL_rez00_1773))
														{	/* Unsafe/pregexp.scm 570 */
															long BgL_n1z00_3606;
															long BgL_n2z00_3607;

															BgL_n1z00_3606 = (long) CINT(BgL_iz00_1774);
															BgL_n2z00_3607 =
																(long) CINT(CELL_REF(BgL_nz00_4519));
															BgL_test3250z00_5990 =
																(BgL_n1z00_3606 < BgL_n2z00_3607);
														}
													else
														{	/* Unsafe/pregexp.scm 570 */
															BgL_test3250z00_5990 = ((bool_t) 0);
														}
													if (BgL_test3250z00_5990)
														{	/* Unsafe/pregexp.scm 572 */
															bool_t BgL_test3252z00_5996;

															{	/* Unsafe/pregexp.scm 573 */
																unsigned char BgL_g1748z00_1793;

																BgL_g1748z00_1793 =
																	STRING_REF(BgL_sz00_4524,
																	(long) CINT(BgL_iz00_1774));
																if (CBOOL(CELL_REF
																		(BgL_casezd2sensitivezf3z21_4520)))
																	{	/* Unsafe/pregexp.scm 572 */
																		BgL_test3252z00_5996 =
																			(BgL_g1748z00_1793 ==
																			CCHAR(BgL_rez00_1773));
																	}
																else
																	{	/* Unsafe/pregexp.scm 572 */
																		BgL_test3252z00_5996 =
																			(toupper(BgL_g1748z00_1793) ==
																			toupper(CCHAR(BgL_rez00_1773)));
																	}
															}
															if (BgL_test3252z00_5996)
																{	/* Unsafe/pregexp.scm 574 */
																	long BgL_arg1747z00_1792;

																	BgL_arg1747z00_1792 =
																		((long) CINT(BgL_iz00_1774) + ((long) 1));
																	return
																		PROCEDURE_ENTRY(BgL_skz00_1775)
																		(BgL_skz00_1775, BINT(BgL_arg1747z00_1792),
																		BEOA);
																}
															else
																{	/* Unsafe/pregexp.scm 572 */
																	return
																		PROCEDURE_ENTRY(BgL_fkz00_1776)
																		(BgL_fkz00_1776, BEOA);
																}
														}
													else
														{	/* Unsafe/pregexp.scm 575 */
															bool_t BgL_test3254z00_6017;

															if (PAIRP(BgL_rez00_1773))
																{	/* Unsafe/pregexp.scm 575 */
																	BgL_test3254z00_6017 = ((bool_t) 0);
																}
															else
																{	/* Unsafe/pregexp.scm 575 */
																	long BgL_n1z00_3630;
																	long BgL_n2z00_3631;

																	BgL_n1z00_3630 = (long) CINT(BgL_iz00_1774);
																	BgL_n2z00_3631 =
																		(long) CINT(CELL_REF(BgL_nz00_4519));
																	BgL_test3254z00_6017 =
																		(BgL_n1z00_3630 < BgL_n2z00_3631);
																}
															if (BgL_test3254z00_6017)
																{	/* Unsafe/pregexp.scm 576 */
																	bool_t BgL_test3256z00_6023;

																	{	/* Unsafe/pregexp.scm 577 */
																		unsigned char BgL_arg1755z00_1800;

																		BgL_arg1755z00_1800 =
																			STRING_REF(BgL_sz00_4524,
																			(long) CINT(BgL_iz00_1774));
																		BgL_test3256z00_6023 =
																			CBOOL
																			(BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__regexpz00
																			(BgL_arg1755z00_1800, BgL_rez00_1773));
																	}
																	if (BgL_test3256z00_6023)
																		{	/* Unsafe/pregexp.scm 578 */
																			long BgL_arg1754z00_1799;

																			BgL_arg1754z00_1799 =
																				(
																				(long) CINT(BgL_iz00_1774) +
																				((long) 1));
																			return
																				PROCEDURE_ENTRY(BgL_skz00_1775)
																				(BgL_skz00_1775,
																				BINT(BgL_arg1754z00_1799), BEOA);
																		}
																	else
																		{	/* Unsafe/pregexp.scm 576 */
																			return
																				PROCEDURE_ENTRY(BgL_fkz00_1776)
																				(BgL_fkz00_1776, BEOA);
																		}
																}
															else
																{	/* Unsafe/pregexp.scm 579 */
																	bool_t BgL_test3257z00_6038;

																	if (PAIRP(BgL_rez00_1773))
																		{	/* Unsafe/pregexp.scm 579 */
																			if (
																				(CAR(BgL_rez00_1773) ==
																					BGl_keyword2972z00zz__regexpz00))
																				{	/* Unsafe/pregexp.scm 579 */
																					long BgL_n1z00_3642;
																					long BgL_n2z00_3643;

																					BgL_n1z00_3642 =
																						(long) CINT(BgL_iz00_1774);
																					BgL_n2z00_3643 =
																						(long)
																						CINT(CELL_REF(BgL_nz00_4519));
																					BgL_test3257z00_6038 =
																						(BgL_n1z00_3642 < BgL_n2z00_3643);
																				}
																			else
																				{	/* Unsafe/pregexp.scm 579 */
																					BgL_test3257z00_6038 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Unsafe/pregexp.scm 579 */
																			BgL_test3257z00_6038 = ((bool_t) 0);
																		}
																	if (BgL_test3257z00_6038)
																		{	/* Unsafe/pregexp.scm 580 */
																			unsigned char BgL_cz00_1806;

																			BgL_cz00_1806 =
																				STRING_REF(BgL_sz00_4524,
																				(long) CINT(BgL_iz00_1774));
																			{	/* Unsafe/pregexp.scm 581 */
																				bool_t BgL_test3260z00_6049;

																				{	/* Unsafe/pregexp.scm 581 */
																					obj_t BgL_czc3zc3_1813;

																					if (CBOOL(CELL_REF
																							(BgL_casezd2sensitivezf3z21_4520)))
																						{	/* Unsafe/pregexp.scm 581 */
																							BgL_czc3zc3_1813 =
																								BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00;
																						}
																					else
																						{	/* Unsafe/pregexp.scm 581 */
																							BgL_czc3zc3_1813 =
																								BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00;
																						}
																					{	/* Unsafe/pregexp.scm 582 */
																						obj_t BgL__andtest_1105z00_1814;

																						{	/* Unsafe/pregexp.scm 582 */
																							obj_t BgL_arg1766z00_1816;

																							BgL_arg1766z00_1816 =
																								CAR(CDR(BgL_rez00_1773));
																							BgL__andtest_1105z00_1814 =
																								PROCEDURE_ENTRY
																								(BgL_czc3zc3_1813)
																								(BgL_czc3zc3_1813,
																								BgL_arg1766z00_1816,
																								BCHAR(BgL_cz00_1806), BEOA);
																						}
																						if (CBOOL
																							(BgL__andtest_1105z00_1814))
																							{	/* Unsafe/pregexp.scm 583 */
																								obj_t BgL_arg1765z00_1815;

																								BgL_arg1765z00_1815 =
																									CAR(CDR(CDR(BgL_rez00_1773)));
																								BgL_test3260z00_6049 =
																									CBOOL(PROCEDURE_ENTRY
																									(BgL_czc3zc3_1813)
																									(BgL_czc3zc3_1813,
																										BCHAR(BgL_cz00_1806),
																										BgL_arg1765z00_1815, BEOA));
																							}
																						else
																							{	/* Unsafe/pregexp.scm 582 */
																								BgL_test3260z00_6049 =
																									((bool_t) 0);
																							}
																					}
																				}
																				if (BgL_test3260z00_6049)
																					{	/* Unsafe/pregexp.scm 584 */
																						long BgL_arg1764z00_1812;

																						BgL_arg1764z00_1812 =
																							(
																							(long) CINT(BgL_iz00_1774) +
																							((long) 1));
																						return
																							PROCEDURE_ENTRY(BgL_skz00_1775)
																							(BgL_skz00_1775,
																							BINT(BgL_arg1764z00_1812), BEOA);
																					}
																				else
																					{	/* Unsafe/pregexp.scm 581 */
																						return
																							PROCEDURE_ENTRY(BgL_fkz00_1776)
																							(BgL_fkz00_1776, BEOA);
																					}
																			}
																		}
																	else
																		{	/* Unsafe/pregexp.scm 579 */
																			if (PAIRP(BgL_rez00_1773))
																				{	/* Unsafe/pregexp.scm 586 */
																					obj_t BgL_casezd2valuezd2_1818;

																					BgL_casezd2valuezd2_1818 =
																						CAR(BgL_rez00_1773);
																					if (
																						(BgL_casezd2valuezd2_1818 ==
																							BGl_keyword2972z00zz__regexpz00))
																						{	/* Unsafe/pregexp.scm 588 */
																							bool_t BgL_test3265z00_6087;

																							{	/* Unsafe/pregexp.scm 588 */
																								long BgL_n1z00_3664;
																								long BgL_n2z00_3665;

																								BgL_n1z00_3664 =
																									(long) CINT(BgL_iz00_1774);
																								BgL_n2z00_3665 =
																									(long)
																									CINT(CELL_REF(BgL_nz00_4519));
																								BgL_test3265z00_6087 =
																									(BgL_n1z00_3664 >=
																									BgL_n2z00_3665);
																							}
																							if (BgL_test3265z00_6087)
																								{	/* Unsafe/pregexp.scm 588 */
																									return
																										PROCEDURE_ENTRY
																										(BgL_fkz00_1776)
																										(BgL_fkz00_1776, BEOA);
																								}
																							else
																								{	/* Unsafe/pregexp.scm 588 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string2910z00zz__regexpz00,
																										BGl_symbol3000z00zz__regexpz00,
																										BUNSPEC);
																								}
																						}
																					else
																						{	/* Unsafe/pregexp.scm 586 */
																							if (
																								(BgL_casezd2valuezd2_1818 ==
																									BGl_keyword2970z00zz__regexpz00))
																								{	/* Unsafe/pregexp.scm 591 */
																									bool_t BgL_test3267z00_6097;

																									{	/* Unsafe/pregexp.scm 591 */
																										long BgL_n1z00_3674;
																										long BgL_n2z00_3675;

																										BgL_n1z00_3674 =
																											(long)
																											CINT(BgL_iz00_1774);
																										BgL_n2z00_3675 =
																											(long)
																											CINT(CELL_REF
																											(BgL_nz00_4519));
																										BgL_test3267z00_6097 =
																											(BgL_n1z00_3674 >=
																											BgL_n2z00_3675);
																									}
																									if (BgL_test3267z00_6097)
																										{	/* Unsafe/pregexp.scm 591 */
																											return
																												PROCEDURE_ENTRY
																												(BgL_fkz00_1776)
																												(BgL_fkz00_1776, BEOA);
																										}
																									else
																										{	/* Unsafe/pregexp.scm 592 */
																											obj_t BgL_g1106z00_1824;

																											BgL_g1106z00_1824 =
																												CDR(BgL_rez00_1773);
																											return
																												BGl_z62loupzd2onezd2ofzd2charszb0zz__regexpz00
																												(BgL_fkz00_1776,
																												BgL_skz00_1775,
																												BgL_iz00_1774,
																												BgL_startz00_4525,
																												BgL_sz00_4524,
																												BgL_backrefsz00_4523,
																												BgL_snz00_4522,
																												BgL_identityz00_4521,
																												BgL_casezd2sensitivezf3z21_4520,
																												BgL_nz00_4519,
																												BgL_g1106z00_1824);
																										}
																								}
																							else
																								{	/* Unsafe/pregexp.scm 586 */
																									if (
																										(BgL_casezd2valuezd2_1818 ==
																											BGl_keyword2902z00zz__regexpz00))
																										{	/* Unsafe/pregexp.scm 598 */
																											bool_t
																												BgL_test3269z00_6108;
																											{	/* Unsafe/pregexp.scm 598 */
																												long BgL_n1z00_3684;
																												long BgL_n2z00_3685;

																												BgL_n1z00_3684 =
																													(long)
																													CINT(BgL_iz00_1774);
																												BgL_n2z00_3685 =
																													(long)
																													CINT(CELL_REF
																													(BgL_nz00_4519));
																												BgL_test3269z00_6108 =
																													(BgL_n1z00_3684 >=
																													BgL_n2z00_3685);
																											}
																											if (BgL_test3269z00_6108)
																												{	/* Unsafe/pregexp.scm 598 */
																													return
																														PROCEDURE_ENTRY
																														(BgL_fkz00_1776)
																														(BgL_fkz00_1776,
																														BEOA);
																												}
																											else
																												{	/* Unsafe/pregexp.scm 599 */
																													obj_t
																														BgL_arg1781z00_1837;
																													BgL_arg1781z00_1837 =
																														CAR(CDR
																														(BgL_rez00_1773));
																													{	/* Unsafe/pregexp.scm 600 */
																														obj_t
																															BgL_zc3z04anonymousza31784ze3z87_4486;
																														obj_t
																															BgL_zc3z04anonymousza31785ze3z87_4487;
																														BgL_zc3z04anonymousza31784ze3z87_4486
																															=
																															MAKE_FX_PROCEDURE
																															(BGl_z62zc3z04anonymousza31784ze3ze5zz__regexpz00,
																															(int) (((long)
																																	1)),
																															(int) (((long)
																																	1)));
																														BgL_zc3z04anonymousza31785ze3z87_4487
																															=
																															MAKE_FX_PROCEDURE
																															(BGl_z62zc3z04anonymousza31785ze3ze5zz__regexpz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	2)));
																														PROCEDURE_SET
																															(BgL_zc3z04anonymousza31784ze3z87_4486,
																															(int) (((long)
																																	0)),
																															BgL_fkz00_1776);
																														PROCEDURE_SET
																															(BgL_zc3z04anonymousza31785ze3z87_4487,
																															(int) (((long)
																																	0)),
																															BgL_iz00_1774);
																														PROCEDURE_SET
																															(BgL_zc3z04anonymousza31785ze3z87_4487,
																															(int) (((long)
																																	1)),
																															BgL_skz00_1775);
																														{
																															obj_t
																																BgL_fkz00_6131;
																															obj_t
																																BgL_skz00_6130;
																															obj_t
																																BgL_rez00_6129;
																															BgL_rez00_6129 =
																																BgL_arg1781z00_1837;
																															BgL_skz00_6130 =
																																BgL_zc3z04anonymousza31784ze3z87_4486;
																															BgL_fkz00_6131 =
																																BgL_zc3z04anonymousza31785ze3z87_4487;
																															BgL_fkz00_1776 =
																																BgL_fkz00_6131;
																															BgL_skz00_1775 =
																																BgL_skz00_6130;
																															BgL_rez00_1773 =
																																BgL_rez00_6129;
																															goto
																																BGl_z62subz62zz__regexpz00;
																														}
																													}
																												}
																										}
																									else
																										{	/* Unsafe/pregexp.scm 586 */
																											if (
																												(BgL_casezd2valuezd2_1818
																													==
																													BGl_keyword2890z00zz__regexpz00))
																												{	/* Unsafe/pregexp.scm 603 */
																													obj_t
																														BgL_g1107z00_1847;
																													BgL_g1107z00_1847 =
																														CDR(BgL_rez00_1773);
																													return
																														BGl_z62loupzd2seqzb0zz__regexpz00
																														(BgL_skz00_1775,
																														BgL_fkz00_1776,
																														BgL_startz00_4525,
																														BgL_sz00_4524,
																														BgL_backrefsz00_4523,
																														BgL_snz00_4522,
																														BgL_identityz00_4521,
																														BgL_casezd2sensitivezf3z21_4520,
																														BgL_nz00_4519,
																														BgL_g1107z00_1847,
																														BgL_iz00_1774);
																												}
																											else
																												{	/* Unsafe/pregexp.scm 586 */
																													if (
																														(BgL_casezd2valuezd2_1818
																															==
																															BGl_keyword2892z00zz__regexpz00))
																														{	/* Unsafe/pregexp.scm 610 */
																															obj_t
																																BgL_g1108z00_1861;
																															BgL_g1108z00_1861
																																=
																																CDR
																																(BgL_rez00_1773);
																															return
																																BGl_z62loupzd2orzb0zz__regexpz00
																																(BgL_fkz00_1776,
																																BgL_iz00_1774,
																																BgL_skz00_1775,
																																BgL_startz00_4525,
																																BgL_sz00_4524,
																																BgL_backrefsz00_4523,
																																BgL_snz00_4522,
																																BgL_identityz00_4521,
																																BgL_casezd2sensitivezf3z21_4520,
																																BgL_nz00_4519,
																																BgL_g1108z00_1861);
																														}
																													else
																														{	/* Unsafe/pregexp.scm 586 */
																															if (
																																(BgL_casezd2valuezd2_1818
																																	==
																																	BGl_keyword2904z00zz__regexpz00))
																																{	/* Unsafe/pregexp.scm 618 */
																																	obj_t
																																		BgL_cz00_1879;
																																	BgL_cz00_1879
																																		=
																																		BGl_pregexpzd2listzd2refz00zz__regexpz00
																																		(BgL_backrefsz00_4523,
																																		CAR(CDR
																																			(BgL_rez00_1773)));
																																	{	/* Unsafe/pregexp.scm 618 */
																																		obj_t
																																			BgL_backrefz00_1880;
																																		if (CBOOL
																																			(BgL_cz00_1879))
																																			{	/* Unsafe/pregexp.scm 621 */
																																				BgL_backrefz00_1880
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cz00_1879));
																																			}
																																		else
																																			{	/* Unsafe/pregexp.scm 621 */
																																				{	/* Unsafe/pregexp.scm 622 */
																																					obj_t
																																						BgL_list1812z00_1890;
																																					{	/* Unsafe/pregexp.scm 622 */
																																						obj_t
																																							BgL_arg1813z00_1891;
																																						BgL_arg1813z00_1891
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_rez00_1773,
																																							BNIL);
																																						BgL_list1812z00_1890
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol3002z00zz__regexpz00,
																																							BgL_arg1813z00_1891);
																																					}
																																					BGl_errorz00zz__errorz00
																																						(BGl_string2910z00zz__regexpz00,
																																						BGl_symbol3000z00zz__regexpz00,
																																						CAR
																																						(BgL_list1812z00_1890));
																																				}
																																				BgL_backrefz00_1880
																																					=
																																					BFALSE;
																																			}
																																		{	/* Unsafe/pregexp.scm 619 */

																																			if (CBOOL
																																				(BgL_backrefz00_1880))
																																				{	/* Unsafe/pregexp.scm 627 */
																																					obj_t
																																						BgL_arg1807z00_1881;
																																					{	/* Unsafe/pregexp.scm 627 */
																																						obj_t
																																							BgL_arg1809z00_1883;
																																						obj_t
																																							BgL_arg1810z00_1884;
																																						BgL_arg1809z00_1883
																																							=
																																							CAR
																																							(((obj_t) BgL_backrefz00_1880));
																																						BgL_arg1810z00_1884
																																							=
																																							CDR
																																							(((obj_t) BgL_backrefz00_1880));
																																						BgL_arg1807z00_1881
																																							=
																																							c_substring
																																							(BgL_sz00_4524,
																																							(long)
																																							CINT
																																							(BgL_arg1809z00_1883),
																																							(long)
																																							CINT
																																							(BgL_arg1810z00_1884));
																																					}
																																					{	/* Unsafe/pregexp.scm 626 */
																																						obj_t
																																							BgL_nz00_3760;
																																						BgL_nz00_3760
																																							=
																																							CELL_REF
																																							(BgL_nz00_4519);
																																						{	/* Unsafe/pregexp.scm 456 */
																																							long
																																								BgL_n1z00_3761;
																																							BgL_n1z00_3761
																																								=
																																								STRING_LENGTH
																																								(BgL_arg1807z00_1881);
																																							if ((BgL_n1z00_3761 > (long) CINT(BgL_nz00_3760)))
																																								{	/* Unsafe/pregexp.scm 457 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_fkz00_1776)
																																										(BgL_fkz00_1776,
																																										BEOA);
																																								}
																																							else
																																								{
																																									long
																																										BgL_jz00_3764;
																																									obj_t
																																										BgL_kz00_3765;
																																									BgL_jz00_3764
																																										=
																																										(
																																										(long)
																																										0);
																																									BgL_kz00_3765
																																										=
																																										BgL_iz00_1774;
																																								BgL_loopz00_3763:
																																									if ((BgL_jz00_3764 >= BgL_n1z00_3761))
																																										{	/* Unsafe/pregexp.scm 459 */
																																											return
																																												PROCEDURE_ENTRY
																																												(BgL_skz00_1775)
																																												(BgL_skz00_1775,
																																												BgL_kz00_3765,
																																												BEOA);
																																										}
																																									else
																																										{	/* Unsafe/pregexp.scm 459 */
																																											if (((long) CINT(BgL_kz00_3765) >= (long) CINT(BgL_nz00_3760)))
																																												{	/* Unsafe/pregexp.scm 460 */
																																													return
																																														PROCEDURE_ENTRY
																																														(BgL_fkz00_1776)
																																														(BgL_fkz00_1776,
																																														BEOA);
																																												}
																																											else
																																												{	/* Unsafe/pregexp.scm 460 */
																																													if ((STRING_REF(BgL_arg1807z00_1881, BgL_jz00_3764) == STRING_REF(BgL_sz00_4524, (long) CINT(BgL_kz00_3765))))
																																														{	/* Unsafe/pregexp.scm 462 */
																																															long
																																																BgL_arg1686z00_3771;
																																															long
																																																BgL_arg1687z00_3772;
																																															BgL_arg1686z00_3771
																																																=
																																																(BgL_jz00_3764
																																																+
																																																((long) 1));
																																															BgL_arg1687z00_3772
																																																=
																																																(
																																																(long)
																																																CINT
																																																(BgL_kz00_3765)
																																																+
																																																((long) 1));
																																															{
																																																obj_t
																																																	BgL_kz00_6191;
																																																long
																																																	BgL_jz00_6190;
																																																BgL_jz00_6190
																																																	=
																																																	BgL_arg1686z00_3771;
																																																BgL_kz00_6191
																																																	=
																																																	BINT
																																																	(BgL_arg1687z00_3772);
																																																BgL_kz00_3765
																																																	=
																																																	BgL_kz00_6191;
																																																BgL_jz00_3764
																																																	=
																																																	BgL_jz00_6190;
																																																goto
																																																	BgL_loopz00_3763;
																																															}
																																														}
																																													else
																																														{	/* Unsafe/pregexp.scm 461 */
																																															return
																																																PROCEDURE_ENTRY
																																																(BgL_fkz00_1776)
																																																(BgL_fkz00_1776,
																																																BEOA);
																																														}
																																												}
																																										}
																																								}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/pregexp.scm 625 */
																																					return
																																						PROCEDURE_ENTRY
																																						(BgL_skz00_1775)
																																						(BgL_skz00_1775,
																																						BgL_iz00_1774,
																																						BEOA);
																																				}
																																		}
																																	}
																																}
																															else
																																{	/* Unsafe/pregexp.scm 586 */
																																	if (
																																		(BgL_casezd2valuezd2_1818
																																			==
																																			BGl_keyword2927z00zz__regexpz00))
																																		{	/* Unsafe/pregexp.scm 631 */
																																			obj_t
																																				BgL_arg1816z00_1894;
																																			BgL_arg1816z00_1894
																																				=
																																				CAR(CDR
																																				(BgL_rez00_1773));
																																			{	/* Unsafe/pregexp.scm 633 */
																																				obj_t
																																					BgL_zc3z04anonymousza31818ze3z87_4485;
																																				BgL_zc3z04anonymousza31818ze3z87_4485
																																					=
																																					MAKE_FX_PROCEDURE
																																					(BGl_z62zc3z04anonymousza31818ze3ze5zz__regexpz00,
																																					(int)
																																					(((long) 1)), (int) (((long) 4)));
																																				PROCEDURE_SET
																																					(BgL_zc3z04anonymousza31818ze3z87_4485,
																																					(int)
																																					(((long) 0)), BgL_rez00_1773);
																																				PROCEDURE_SET
																																					(BgL_zc3z04anonymousza31818ze3z87_4485,
																																					(int)
																																					(((long) 1)), BgL_backrefsz00_4523);
																																				PROCEDURE_SET
																																					(BgL_zc3z04anonymousza31818ze3z87_4485,
																																					(int)
																																					(((long) 2)), BgL_iz00_1774);
																																				PROCEDURE_SET
																																					(BgL_zc3z04anonymousza31818ze3z87_4485,
																																					(int)
																																					(((long) 3)), BgL_skz00_1775);
																																				{
																																					obj_t
																																						BgL_skz00_6216;
																																					obj_t
																																						BgL_rez00_6215;
																																					BgL_rez00_6215
																																						=
																																						BgL_arg1816z00_1894;
																																					BgL_skz00_6216
																																						=
																																						BgL_zc3z04anonymousza31818ze3z87_4485;
																																					BgL_skz00_1775
																																						=
																																						BgL_skz00_6216;
																																					BgL_rez00_1773
																																						=
																																						BgL_rez00_6215;
																																					goto
																																						BGl_z62subz62zz__regexpz00;
																																				}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/pregexp.scm 586 */
																																			if (
																																				(BgL_casezd2valuezd2_1818
																																					==
																																					BGl_keyword2936z00zz__regexpz00))
																																				{	/* Unsafe/pregexp.scm 636 */
																																					obj_t
																																						BgL_foundzd2itzf3z21_1902;
																																					{	/* Unsafe/pregexp.scm 637 */
																																						obj_t
																																							BgL_arg1822z00_1903;
																																						BgL_arg1822z00_1903
																																							=
																																							CAR
																																							(CDR
																																							(BgL_rez00_1773));
																																						BgL_foundzd2itzf3z21_1902
																																							=
																																							BGl_z62subz62zz__regexpz00
																																							(BgL_startz00_4525,
																																							BgL_sz00_4524,
																																							BgL_backrefsz00_4523,
																																							BgL_snz00_4522,
																																							BgL_identityz00_4521,
																																							BgL_casezd2sensitivezf3z21_4520,
																																							BgL_nz00_4519,
																																							BgL_arg1822z00_1903,
																																							BgL_iz00_1774,
																																							BgL_identityz00_4521,
																																							BGl_proc3004z00zz__regexpz00);
																																					}
																																					if (CBOOL(BgL_foundzd2itzf3z21_1902))
																																						{	/* Unsafe/pregexp.scm 639 */
																																							return
																																								PROCEDURE_ENTRY
																																								(BgL_skz00_1775)
																																								(BgL_skz00_1775,
																																								BgL_iz00_1774,
																																								BEOA);
																																						}
																																					else
																																						{	/* Unsafe/pregexp.scm 639 */
																																							return
																																								PROCEDURE_ENTRY
																																								(BgL_fkz00_1776)
																																								(BgL_fkz00_1776,
																																								BEOA);
																																						}
																																				}
																																			else
																																				{	/* Unsafe/pregexp.scm 586 */
																																					if (
																																						(BgL_casezd2valuezd2_1818
																																							==
																																							BGl_keyword2939z00zz__regexpz00))
																																						{	/* Unsafe/pregexp.scm 641 */
																																							obj_t
																																								BgL_foundzd2itzf3z21_1908;
																																							{	/* Unsafe/pregexp.scm 642 */
																																								obj_t
																																									BgL_arg1826z00_1909;
																																								BgL_arg1826z00_1909
																																									=
																																									CAR
																																									(CDR
																																									(BgL_rez00_1773));
																																								BgL_foundzd2itzf3z21_1908
																																									=
																																									BGl_z62subz62zz__regexpz00
																																									(BgL_startz00_4525,
																																									BgL_sz00_4524,
																																									BgL_backrefsz00_4523,
																																									BgL_snz00_4522,
																																									BgL_identityz00_4521,
																																									BgL_casezd2sensitivezf3z21_4520,
																																									BgL_nz00_4519,
																																									BgL_arg1826z00_1909,
																																									BgL_iz00_1774,
																																									BgL_identityz00_4521,
																																									BGl_proc3005z00zz__regexpz00);
																																							}
																																							if (CBOOL(BgL_foundzd2itzf3z21_1908))
																																								{	/* Unsafe/pregexp.scm 644 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_fkz00_1776)
																																										(BgL_fkz00_1776,
																																										BEOA);
																																								}
																																							else
																																								{	/* Unsafe/pregexp.scm 644 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_skz00_1775)
																																										(BgL_skz00_1775,
																																										BgL_iz00_1774,
																																										BEOA);
																																								}
																																						}
																																					else
																																						{	/* Unsafe/pregexp.scm 586 */
																																							if ((BgL_casezd2valuezd2_1818 == BGl_keyword2945z00zz__regexpz00))
																																								{	/* Unsafe/pregexp.scm 646 */
																																									obj_t
																																										BgL_nzd2actualzd2_1914;
																																									obj_t
																																										BgL_snzd2actualzd2_1915;
																																									BgL_nzd2actualzd2_1914
																																										=
																																										CELL_REF
																																										(BgL_nz00_4519);
																																									BgL_snzd2actualzd2_1915
																																										=
																																										CELL_REF
																																										(BgL_snz00_4522);
																																									CELL_SET
																																										(BgL_nz00_4519,
																																										BgL_iz00_1774);
																																									CELL_SET
																																										(BgL_snz00_4522,
																																										BgL_iz00_1774);
																																									{	/* Unsafe/pregexp.scm 648 */
																																										obj_t
																																											BgL_foundzd2itzf3z21_1916;
																																										{	/* Unsafe/pregexp.scm 650 */
																																											obj_t
																																												BgL_arg1830z00_1917;
																																											{	/* Unsafe/pregexp.scm 650 */
																																												obj_t
																																													BgL_arg1832z00_1919;
																																												BgL_arg1832z00_1919
																																													=
																																													CAR
																																													(CDR
																																													(BgL_rez00_1773));
																																												{	/* Unsafe/pregexp.scm 649 */
																																													obj_t
																																														BgL_list1833z00_1920;
																																													{	/* Unsafe/pregexp.scm 649 */
																																														obj_t
																																															BgL_arg1835z00_1921;
																																														{	/* Unsafe/pregexp.scm 649 */
																																															obj_t
																																																BgL_arg1836z00_1922;
																																															{	/* Unsafe/pregexp.scm 649 */
																																																obj_t
																																																	BgL_arg1838z00_1923;
																																																BgL_arg1838z00_1923
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_keyword2898z00zz__regexpz00,
																																																	BNIL);
																																																BgL_arg1836z00_1922
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1832z00_1919,
																																																	BgL_arg1838z00_1923);
																																															}
																																															BgL_arg1835z00_1921
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_list3006z00zz__regexpz00,
																																																BgL_arg1836z00_1922);
																																														}
																																														BgL_list1833z00_1920
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_keyword2890z00zz__regexpz00,
																																															BgL_arg1835z00_1921);
																																													}
																																													BgL_arg1830z00_1917
																																														=
																																														BgL_list1833z00_1920;
																																												}
																																											}
																																											BgL_foundzd2itzf3z21_1916
																																												=
																																												BGl_z62subz62zz__regexpz00
																																												(BgL_startz00_4525,
																																												BgL_sz00_4524,
																																												BgL_backrefsz00_4523,
																																												BgL_snz00_4522,
																																												BgL_identityz00_4521,
																																												BgL_casezd2sensitivezf3z21_4520,
																																												BgL_nz00_4519,
																																												BgL_arg1830z00_1917,
																																												BINT
																																												(((long) 0)), BgL_identityz00_4521, BGl_proc3007z00zz__regexpz00);
																																										}
																																										CELL_SET
																																											(BgL_nz00_4519,
																																											BgL_nzd2actualzd2_1914);
																																										CELL_SET
																																											(BgL_snz00_4522,
																																											BgL_snzd2actualzd2_1915);
																																										if (CBOOL(BgL_foundzd2itzf3z21_1916))
																																											{	/* Unsafe/pregexp.scm 653 */
																																												return
																																													PROCEDURE_ENTRY
																																													(BgL_skz00_1775)
																																													(BgL_skz00_1775,
																																													BgL_iz00_1774,
																																													BEOA);
																																											}
																																										else
																																											{	/* Unsafe/pregexp.scm 653 */
																																												return
																																													PROCEDURE_ENTRY
																																													(BgL_fkz00_1776)
																																													(BgL_fkz00_1776,
																																													BEOA);
																																											}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/pregexp.scm 586 */
																																									if ((BgL_casezd2valuezd2_1818 == BGl_keyword2948z00zz__regexpz00))
																																										{	/* Unsafe/pregexp.scm 655 */
																																											obj_t
																																												BgL_nzd2actualzd2_1927;
																																											obj_t
																																												BgL_snzd2actualzd2_1928;
																																											BgL_nzd2actualzd2_1927
																																												=
																																												CELL_REF
																																												(BgL_nz00_4519);
																																											BgL_snzd2actualzd2_1928
																																												=
																																												CELL_REF
																																												(BgL_snz00_4522);
																																											CELL_SET
																																												(BgL_nz00_4519,
																																												BgL_iz00_1774);
																																											CELL_SET
																																												(BgL_snz00_4522,
																																												BgL_iz00_1774);
																																											{	/* Unsafe/pregexp.scm 657 */
																																												obj_t
																																													BgL_foundzd2itzf3z21_1929;
																																												{	/* Unsafe/pregexp.scm 659 */
																																													obj_t
																																														BgL_arg1841z00_1930;
																																													{	/* Unsafe/pregexp.scm 659 */
																																														obj_t
																																															BgL_arg1845z00_1932;
																																														BgL_arg1845z00_1932
																																															=
																																															CAR
																																															(CDR
																																															(BgL_rez00_1773));
																																														{	/* Unsafe/pregexp.scm 658 */
																																															obj_t
																																																BgL_list1846z00_1933;
																																															{	/* Unsafe/pregexp.scm 658 */
																																																obj_t
																																																	BgL_arg1847z00_1934;
																																																{	/* Unsafe/pregexp.scm 658 */
																																																	obj_t
																																																		BgL_arg1848z00_1935;
																																																	{	/* Unsafe/pregexp.scm 658 */
																																																		obj_t
																																																			BgL_arg1850z00_1936;
																																																		BgL_arg1850z00_1936
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BGl_keyword2898z00zz__regexpz00,
																																																			BNIL);
																																																		BgL_arg1848z00_1935
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_arg1845z00_1932,
																																																			BgL_arg1850z00_1936);
																																																	}
																																																	BgL_arg1847z00_1934
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_list3006z00zz__regexpz00,
																																																		BgL_arg1848z00_1935);
																																																}
																																																BgL_list1846z00_1933
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_keyword2890z00zz__regexpz00,
																																																	BgL_arg1847z00_1934);
																																															}
																																															BgL_arg1841z00_1930
																																																=
																																																BgL_list1846z00_1933;
																																														}
																																													}
																																													BgL_foundzd2itzf3z21_1929
																																														=
																																														BGl_z62subz62zz__regexpz00
																																														(BgL_startz00_4525,
																																														BgL_sz00_4524,
																																														BgL_backrefsz00_4523,
																																														BgL_snz00_4522,
																																														BgL_identityz00_4521,
																																														BgL_casezd2sensitivezf3z21_4520,
																																														BgL_nz00_4519,
																																														BgL_arg1841z00_1930,
																																														BINT
																																														(((long) 0)), BgL_identityz00_4521, BGl_proc3008z00zz__regexpz00);
																																												}
																																												CELL_SET
																																													(BgL_nz00_4519,
																																													BgL_nzd2actualzd2_1927);
																																												CELL_SET
																																													(BgL_snz00_4522,
																																													BgL_snzd2actualzd2_1928);
																																												if (CBOOL(BgL_foundzd2itzf3z21_1929))
																																													{	/* Unsafe/pregexp.scm 662 */
																																														return
																																															PROCEDURE_ENTRY
																																															(BgL_fkz00_1776)
																																															(BgL_fkz00_1776,
																																															BEOA);
																																													}
																																												else
																																													{	/* Unsafe/pregexp.scm 662 */
																																														return
																																															PROCEDURE_ENTRY
																																															(BgL_skz00_1775)
																																															(BgL_skz00_1775,
																																															BgL_iz00_1774,
																																															BEOA);
																																													}
																																											}
																																										}
																																									else
																																										{	/* Unsafe/pregexp.scm 586 */
																																											if ((BgL_casezd2valuezd2_1818 == BGl_keyword2942z00zz__regexpz00))
																																												{	/* Unsafe/pregexp.scm 664 */
																																													obj_t
																																														BgL_foundzd2itzf3z21_1940;
																																													{	/* Unsafe/pregexp.scm 664 */
																																														obj_t
																																															BgL_arg1853z00_1941;
																																														BgL_arg1853z00_1941
																																															=
																																															CAR
																																															(CDR
																																															(BgL_rez00_1773));
																																														BgL_foundzd2itzf3z21_1940
																																															=
																																															BGl_z62subz62zz__regexpz00
																																															(BgL_startz00_4525,
																																															BgL_sz00_4524,
																																															BgL_backrefsz00_4523,
																																															BgL_snz00_4522,
																																															BgL_identityz00_4521,
																																															BgL_casezd2sensitivezf3z21_4520,
																																															BgL_nz00_4519,
																																															BgL_arg1853z00_1941,
																																															BgL_iz00_1774,
																																															BgL_identityz00_4521,
																																															BGl_proc3009z00zz__regexpz00);
																																													}
																																													if (CBOOL(BgL_foundzd2itzf3z21_1940))
																																														{	/* Unsafe/pregexp.scm 666 */
																																															return
																																																PROCEDURE_ENTRY
																																																(BgL_skz00_1775)
																																																(BgL_skz00_1775,
																																																BgL_foundzd2itzf3z21_1940,
																																																BEOA);
																																														}
																																													else
																																														{	/* Unsafe/pregexp.scm 666 */
																																															return
																																																PROCEDURE_ENTRY
																																																(BgL_fkz00_1776)
																																																(BgL_fkz00_1776,
																																																BEOA);
																																														}
																																												}
																																											else
																																												{	/* Unsafe/pregexp.scm 586 */
																																													bool_t
																																														BgL_test3290z00_6297;
																																													{	/* Unsafe/pregexp.scm 586 */
																																														bool_t
																																															BgL__ortest_1112z00_2005;
																																														BgL__ortest_1112z00_2005
																																															=
																																															(BgL_casezd2valuezd2_1818
																																															==
																																															BGl_keyword2929z00zz__regexpz00);
																																														if (BgL__ortest_1112z00_2005)
																																															{	/* Unsafe/pregexp.scm 586 */
																																																BgL_test3290z00_6297
																																																	=
																																																	BgL__ortest_1112z00_2005;
																																															}
																																														else
																																															{	/* Unsafe/pregexp.scm 586 */
																																																BgL_test3290z00_6297
																																																	=
																																																	(BgL_casezd2valuezd2_1818
																																																	==
																																																	BGl_keyword2931z00zz__regexpz00);
																																															}
																																													}
																																													if (BgL_test3290z00_6297)
																																														{	/* Unsafe/pregexp.scm 670 */
																																															obj_t
																																																BgL_oldz00_1947;
																																															BgL_oldz00_1947
																																																=
																																																CELL_REF
																																																(BgL_casezd2sensitivezf3z21_4520);
																																															{	/* Unsafe/pregexp.scm 671 */
																																																obj_t
																																																	BgL_auxz00_4534;
																																																BgL_auxz00_4534
																																																	=
																																																	BBOOL
																																																	(
																																																	(BgL_casezd2valuezd2_1818
																																																		==
																																																		BGl_keyword2929z00zz__regexpz00));
																																																CELL_SET
																																																	(BgL_casezd2sensitivezf3z21_4520,
																																																	BgL_auxz00_4534);
																																															}
																																															{	/* Unsafe/pregexp.scm 673 */
																																																obj_t
																																																	BgL_arg1859z00_1949;
																																																BgL_arg1859z00_1949
																																																	=
																																																	CAR
																																																	(CDR
																																																	(BgL_rez00_1773));
																																																{	/* Unsafe/pregexp.scm 675 */
																																																	obj_t
																																																		BgL_zc3z04anonymousza31863ze3z87_4477;
																																																	obj_t
																																																		BgL_zc3z04anonymousza31864ze3z87_4478;
																																																	BgL_zc3z04anonymousza31863ze3z87_4477
																																																		=
																																																		MAKE_FX_PROCEDURE
																																																		(BGl_z62zc3z04anonymousza31863ze3ze5zz__regexpz00,
																																																		(int)
																																																		(((long) 1)), (int) (((long) 3)));
																																																	BgL_zc3z04anonymousza31864ze3z87_4478
																																																		=
																																																		MAKE_FX_PROCEDURE
																																																		(BGl_z62zc3z04anonymousza31864ze3ze5zz__regexpz00,
																																																		(int)
																																																		(((long) 0)), (int) (((long) 3)));
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31863ze3z87_4477,
																																																		(int)
																																																		(((long) 0)), BgL_oldz00_1947);
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31863ze3z87_4477,
																																																		(int)
																																																		(((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4520));
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31863ze3z87_4477,
																																																		(int)
																																																		(((long) 2)), BgL_skz00_1775);
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31864ze3z87_4478,
																																																		(int)
																																																		(((long) 0)), BgL_oldz00_1947);
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31864ze3z87_4478,
																																																		(int)
																																																		(((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4520));
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza31864ze3z87_4478,
																																																		(int)
																																																		(((long) 2)), BgL_fkz00_1776);
																																																	{
																																																		obj_t
																																																			BgL_fkz00_6327;
																																																		obj_t
																																																			BgL_skz00_6326;
																																																		obj_t
																																																			BgL_rez00_6325;
																																																		BgL_rez00_6325
																																																			=
																																																			BgL_arg1859z00_1949;
																																																		BgL_skz00_6326
																																																			=
																																																			BgL_zc3z04anonymousza31863ze3z87_4477;
																																																		BgL_fkz00_6327
																																																			=
																																																			BgL_zc3z04anonymousza31864ze3z87_4478;
																																																		BgL_fkz00_1776
																																																			=
																																																			BgL_fkz00_6327;
																																																		BgL_skz00_1775
																																																			=
																																																			BgL_skz00_6326;
																																																		BgL_rez00_1773
																																																			=
																																																			BgL_rez00_6325;
																																																		goto
																																																			BGl_z62subz62zz__regexpz00;
																																																	}
																																																}
																																															}
																																														}
																																													else
																																														{	/* Unsafe/pregexp.scm 586 */
																																															if ((BgL_casezd2valuezd2_1818 == BGl_keyword2958z00zz__regexpz00))
																																																{	/* Unsafe/pregexp.scm 681 */
																																																	bool_t
																																																		BgL_maximalzf3zf3_1958;
																																																	{	/* Unsafe/pregexp.scm 681 */
																																																		bool_t
																																																			BgL_test3293z00_6330;
																																																		{	/* Unsafe/pregexp.scm 681 */
																																																			obj_t
																																																				BgL_pairz00_3850;
																																																			BgL_pairz00_3850
																																																				=
																																																				CDR
																																																				(BgL_rez00_1773);
																																																			BgL_test3293z00_6330
																																																				=
																																																				CBOOL
																																																				(CAR
																																																				(BgL_pairz00_3850));
																																																		}
																																																		if (BgL_test3293z00_6330)
																																																			{	/* Unsafe/pregexp.scm 681 */
																																																				BgL_maximalzf3zf3_1958
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		else
																																																			{	/* Unsafe/pregexp.scm 681 */
																																																				BgL_maximalzf3zf3_1958
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																	}
																																																	{	/* Unsafe/pregexp.scm 681 */
																																																		obj_t
																																																			BgL_pz00_1959;
																																																		BgL_pz00_1959
																																																			=
																																																			CAR
																																																			(CDR
																																																			(CDR
																																																				(BgL_rez00_1773)));
																																																		{	/* Unsafe/pregexp.scm 682 */
																																																			obj_t
																																																				BgL_qz00_1960;
																																																			BgL_qz00_1960
																																																				=
																																																				CAR
																																																				(CDR
																																																				(CDR
																																																					(CDR
																																																						(BgL_rez00_1773))));
																																																			{	/* Unsafe/pregexp.scm 683 */
																																																				bool_t
																																																					BgL_couldzd2loopzd2infinitelyzf3zf3_1961;
																																																				if (BgL_maximalzf3zf3_1958)
																																																					{	/* Unsafe/pregexp.scm 684 */
																																																						if (CBOOL(BgL_qz00_1960))
																																																							{	/* Unsafe/pregexp.scm 684 */
																																																								BgL_couldzd2loopzd2infinitelyzf3zf3_1961
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																						else
																																																							{	/* Unsafe/pregexp.scm 684 */
																																																								BgL_couldzd2loopzd2infinitelyzf3zf3_1961
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																					}
																																																				else
																																																					{	/* Unsafe/pregexp.scm 684 */
																																																						BgL_couldzd2loopzd2infinitelyzf3zf3_1961
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				{	/* Unsafe/pregexp.scm 684 */
																																																					obj_t
																																																						BgL_rez00_1962;
																																																					BgL_rez00_1962
																																																						=
																																																						CAR
																																																						(CDR
																																																						(CDR
																																																							(CDR
																																																								(CDR
																																																									(BgL_rez00_1773)))));
																																																					{	/* Unsafe/pregexp.scm 685 */

																																																						return
																																																							BGl_z62loupzd2pzb0zz__regexpz00
																																																							(BgL_fkz00_1776,
																																																							BgL_rez00_1962,
																																																							BgL_couldzd2loopzd2infinitelyzf3zf3_1961,
																																																							BgL_pz00_1959,
																																																							BgL_qz00_1960,
																																																							BgL_maximalzf3zf3_1958,
																																																							BgL_skz00_1775,
																																																							BgL_startz00_4525,
																																																							BgL_sz00_4524,
																																																							BgL_backrefsz00_4523,
																																																							BgL_snz00_4522,
																																																							BgL_identityz00_4521,
																																																							BgL_casezd2sensitivezf3z21_4520,
																																																							BgL_nz00_4519,
																																																							((long) 0), BgL_iz00_1774);
																																																}}}}}}
																																															else
																																																{	/* Unsafe/pregexp.scm 586 */
																																																	return
																																																		BGl_errorz00zz__errorz00
																																																		(BGl_string2910z00zz__regexpz00,
																																																		BGl_symbol3000z00zz__regexpz00,
																																																		BUNSPEC);
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
																				}
																			else
																				{	/* Unsafe/pregexp.scm 719 */
																					bool_t BgL_test3296z00_6351;

																					{	/* Unsafe/pregexp.scm 719 */
																						long BgL_n1z00_3911;
																						long BgL_n2z00_3912;

																						BgL_n1z00_3911 =
																							(long) CINT(BgL_iz00_1774);
																						BgL_n2z00_3912 =
																							(long)
																							CINT(CELL_REF(BgL_nz00_4519));
																						BgL_test3296z00_6351 =
																							(BgL_n1z00_3911 >=
																							BgL_n2z00_3912);
																					}
																					if (BgL_test3296z00_6351)
																						{	/* Unsafe/pregexp.scm 719 */
																							return
																								PROCEDURE_ENTRY(BgL_fkz00_1776)
																								(BgL_fkz00_1776, BEOA);
																						}
																					else
																						{	/* Unsafe/pregexp.scm 719 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string2910z00zz__regexpz00,
																								BGl_symbol3000z00zz__regexpz00,
																								BUNSPEC);
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



/* &loup-seq */
	obj_t BGl_z62loupzd2seqzb0zz__regexpz00(obj_t BgL_skz00_4543,
		obj_t BgL_fkz00_4542, obj_t BgL_startz00_4541, obj_t BgL_sz00_4540,
		obj_t BgL_backrefsz00_4539, obj_t BgL_snz00_4538,
		obj_t BgL_identityz00_4537, obj_t BgL_casezd2sensitivezf3z21_4536,
		obj_t BgL_nz00_4535, obj_t BgL_resz00_3716, obj_t BgL_iz00_3717)
	{
		{	/* Unsafe/pregexp.scm 603 */
			if (NULLP(BgL_resz00_3716))
				{	/* Unsafe/pregexp.scm 604 */
					return
						PROCEDURE_ENTRY(BgL_skz00_4543) (BgL_skz00_4543, BgL_iz00_3717,
						BEOA);
				}
			else
				{	/* Unsafe/pregexp.scm 605 */
					obj_t BgL_arg1790z00_3724;

					BgL_arg1790z00_3724 = CAR(((obj_t) BgL_resz00_3716));
					{	/* Unsafe/pregexp.scm 607 */
						obj_t BgL_zc3z04anonymousza31792ze3z87_4497;

						BgL_zc3z04anonymousza31792ze3z87_4497 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31792ze3ze5zz__regexpz00,
							(int) (((long) 1)), (int) (((long) 10)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 0)), ((obj_t) BgL_nz00_4535));
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4536));
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 2)), BgL_identityz00_4537);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 3)), ((obj_t) BgL_snz00_4538));
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 4)), BgL_backrefsz00_4539);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 5)), BgL_sz00_4540);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 6)), BgL_startz00_4541);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 7)), BgL_fkz00_4542);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 8)), BgL_skz00_4543);
						PROCEDURE_SET(BgL_zc3z04anonymousza31792ze3z87_4497,
							(int) (((long) 9)), BgL_resz00_3716);
						return BGl_z62subz62zz__regexpz00(BgL_startz00_4541, BgL_sz00_4540,
							BgL_backrefsz00_4539, BgL_snz00_4538, BgL_identityz00_4537,
							BgL_casezd2sensitivezf3z21_4536, BgL_nz00_4535,
							BgL_arg1790z00_3724, BgL_iz00_3717,
							BgL_zc3z04anonymousza31792ze3z87_4497, BgL_fkz00_4542);
					}
				}
		}

	}



/* &loup-or */
	obj_t BGl_z62loupzd2orzb0zz__regexpz00(obj_t BgL_fkz00_4553,
		obj_t BgL_iz00_4552, obj_t BgL_skz00_4551, obj_t BgL_startz00_4550,
		obj_t BgL_sz00_4549, obj_t BgL_backrefsz00_4548, obj_t BgL_snz00_4547,
		obj_t BgL_identityz00_4546, obj_t BgL_casezd2sensitivezf3z21_4545,
		obj_t BgL_nz00_4544, obj_t BgL_resz00_1863)
	{
		{	/* Unsafe/pregexp.scm 610 */
			if (NULLP(BgL_resz00_1863))
				{	/* Unsafe/pregexp.scm 611 */
					return PROCEDURE_ENTRY(BgL_fkz00_4553) (BgL_fkz00_4553, BEOA);
				}
			else
				{	/* Unsafe/pregexp.scm 612 */
					obj_t BgL_arg1798z00_1866;

					BgL_arg1798z00_1866 = CAR(((obj_t) BgL_resz00_1863));
					{	/* Unsafe/pregexp.scm 614 */
						obj_t BgL_zc3z04anonymousza31801ze3z87_4495;
						obj_t BgL_zc3z04anonymousza31804ze3z87_4494;

						BgL_zc3z04anonymousza31801ze3z87_4495 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31801ze3ze5zz__regexpz00,
							(int) (((long) 1)), (int) (((long) 11)));
						BgL_zc3z04anonymousza31804ze3z87_4494 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31804ze3ze5zz__regexpz00,
							(int) (((long) 0)), (int) (((long) 11)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 0)), ((obj_t) BgL_nz00_4544));
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4545));
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 2)), BgL_identityz00_4546);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 3)), ((obj_t) BgL_snz00_4547));
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 4)), BgL_backrefsz00_4548);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 5)), BgL_sz00_4549);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 6)), BgL_startz00_4550);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 7)), BgL_iz00_4552);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 8)), BgL_fkz00_4553);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 9)), BgL_skz00_4551);
						PROCEDURE_SET(BgL_zc3z04anonymousza31801ze3z87_4495,
							(int) (((long) 10)), BgL_resz00_1863);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 0)), ((obj_t) BgL_nz00_4544));
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4545));
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 2)), BgL_identityz00_4546);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 3)), ((obj_t) BgL_snz00_4547));
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 4)), BgL_backrefsz00_4548);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 5)), BgL_sz00_4549);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 6)), BgL_startz00_4550);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 7)), BgL_skz00_4551);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 8)), BgL_iz00_4552);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 9)), BgL_fkz00_4553);
						PROCEDURE_SET(BgL_zc3z04anonymousza31804ze3z87_4494,
							(int) (((long) 10)), BgL_resz00_1863);
						return BGl_z62subz62zz__regexpz00(BgL_startz00_4550, BgL_sz00_4549,
							BgL_backrefsz00_4548, BgL_snz00_4547, BgL_identityz00_4546,
							BgL_casezd2sensitivezf3z21_4545, BgL_nz00_4544,
							BgL_arg1798z00_1866, BgL_iz00_4552,
							BgL_zc3z04anonymousza31801ze3z87_4495,
							BgL_zc3z04anonymousza31804ze3z87_4494);
					}
				}
		}

	}



/* &loup-p */
	obj_t BGl_z62loupzd2pzb0zz__regexpz00(obj_t BgL_fkz00_4567,
		obj_t BgL_rez00_4566, bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_4565,
		obj_t BgL_pz00_4564, obj_t BgL_qz00_4563, bool_t BgL_maximalzf3zf3_4562,
		obj_t BgL_skz00_4561, obj_t BgL_startz00_4560, obj_t BgL_sz00_4559,
		obj_t BgL_backrefsz00_4558, obj_t BgL_snz00_4557,
		obj_t BgL_identityz00_4556, obj_t BgL_casezd2sensitivezf3z21_4555,
		obj_t BgL_nz00_4554, long BgL_kz00_1964, obj_t BgL_iz00_1965)
	{
		{	/* Unsafe/pregexp.scm 686 */
			if ((BgL_kz00_1964 < (long) CINT(BgL_pz00_4564)))
				{	/* Unsafe/pregexp.scm 690 */
					obj_t BgL_zc3z04anonymousza31869ze3z87_4492;

					BgL_zc3z04anonymousza31869ze3z87_4492 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31869ze3ze5zz__regexpz00,
						(int) (((long) 1)), (int) (((long) 16)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 0)), ((obj_t) BgL_nz00_4554));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 1)), ((obj_t) BgL_casezd2sensitivezf3z21_4555));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 2)), BgL_identityz00_4556);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 3)), ((obj_t) BgL_snz00_4557));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 4)), BgL_backrefsz00_4558);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 5)), BgL_sz00_4559);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 6)), BgL_startz00_4560);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 7)), BgL_skz00_4561);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 8)), BBOOL(BgL_maximalzf3zf3_4562));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 9)), BgL_qz00_4563);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 10)), BgL_pz00_4564);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 11)), BgL_rez00_4566);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 12)), BgL_fkz00_4567);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 13)), BgL_iz00_1965);
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 14)),
						BBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_4565));
					PROCEDURE_SET(BgL_zc3z04anonymousza31869ze3z87_4492,
						(int) (((long) 15)), BINT(BgL_kz00_1964));
					return
						BGl_z62subz62zz__regexpz00(BgL_startz00_4560, BgL_sz00_4559,
						BgL_backrefsz00_4558, BgL_snz00_4557, BgL_identityz00_4556,
						BgL_casezd2sensitivezf3z21_4555, BgL_nz00_4554, BgL_rez00_4566,
						BgL_iz00_1965, BgL_zc3z04anonymousza31869ze3z87_4492,
						BgL_fkz00_4567);
				}
			else
				{	/* Unsafe/pregexp.scm 697 */
					obj_t BgL_qz00_1975;

					if (CBOOL(BgL_qz00_4563))
						{	/* Unsafe/pregexp.scm 697 */
							BgL_qz00_1975 = SUBFX(BgL_qz00_4563, BgL_pz00_4564);
						}
					else
						{	/* Unsafe/pregexp.scm 697 */
							BgL_qz00_1975 = BFALSE;
						}
					return
						BGl_z62loupzd2qzb0zz__regexpz00(BgL_qz00_1975,
						BgL_maximalzf3zf3_4562, BgL_couldzd2loopzd2infinitelyzf3zf3_4565,
						BgL_rez00_4566, BgL_skz00_4561, BgL_startz00_4560, BgL_sz00_4559,
						BgL_backrefsz00_4558, BgL_snz00_4557, BgL_identityz00_4556,
						BgL_casezd2sensitivezf3z21_4555, BgL_nz00_4554, ((long) 0),
						BgL_iz00_1965);
		}}

	}



/* &loup-q */
	obj_t BGl_z62loupzd2qzb0zz__regexpz00(obj_t BgL_qz00_4579,
		bool_t BgL_maximalzf3zf3_4578,
		bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_4577, obj_t BgL_rez00_4576,
		obj_t BgL_skz00_4575, obj_t BgL_startz00_4574, obj_t BgL_sz00_4573,
		obj_t BgL_backrefsz00_4572, obj_t BgL_snz00_4571,
		obj_t BgL_identityz00_4570, obj_t BgL_casezd2sensitivezf3z21_4569,
		obj_t BgL_nz00_4568, long BgL_kz00_1977, obj_t BgL_iz00_1978)
	{
		{	/* Unsafe/pregexp.scm 698 */
			{	/* Unsafe/pregexp.scm 700 */
				obj_t BgL_fkz00_4489;

				BgL_fkz00_4489 =
					MAKE_FX_PROCEDURE(BGl_z62fkz62zz__regexpz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_fkz00_4489, (int) (((long) 0)), BgL_skz00_4575);
				PROCEDURE_SET(BgL_fkz00_4489, (int) (((long) 1)), BgL_iz00_1978);
				{	/* Unsafe/pregexp.scm 701 */
					bool_t BgL_test3301z00_6514;

					if (CBOOL(BgL_qz00_4579))
						{	/* Unsafe/pregexp.scm 701 */
							BgL_test3301z00_6514 =
								(BgL_kz00_1977 >= (long) CINT(BgL_qz00_4579));
						}
					else
						{	/* Unsafe/pregexp.scm 701 */
							BgL_test3301z00_6514 = ((bool_t) 0);
						}
					if (BgL_test3301z00_6514)
						{	/* Unsafe/pregexp.scm 701 */
							return
								PROCEDURE_ENTRY(BgL_skz00_4575) (BgL_skz00_4575, BgL_iz00_1978,
								BEOA);
						}
					else
						{	/* Unsafe/pregexp.scm 701 */
							if (BgL_maximalzf3zf3_4578)
								{	/* Unsafe/pregexp.scm 705 */
									obj_t BgL_zc3z04anonymousza31877ze3z87_4488;

									BgL_zc3z04anonymousza31877ze3z87_4488 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31877ze3ze5zz__regexpz00,
										(int) (((long) 1)), (int) (((long) 14)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 0)), ((obj_t) BgL_nz00_4568));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 1)),
										((obj_t) BgL_casezd2sensitivezf3z21_4569));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 2)), BgL_identityz00_4570);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 3)), ((obj_t) BgL_snz00_4571));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 4)), BgL_backrefsz00_4572);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 5)), BgL_sz00_4573);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 6)), BgL_startz00_4574);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 7)), BgL_rez00_4576);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 8)), BBOOL(BgL_maximalzf3zf3_4578));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 9)), BgL_qz00_4579);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 10)), BgL_iz00_1978);
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 11)),
										BBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_4577));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 12)), BINT(BgL_kz00_1977));
									PROCEDURE_SET(BgL_zc3z04anonymousza31877ze3z87_4488,
										(int) (((long) 13)), BgL_skz00_4575);
									return BGl_z62subz62zz__regexpz00(BgL_startz00_4574,
										BgL_sz00_4573, BgL_backrefsz00_4572, BgL_snz00_4571,
										BgL_identityz00_4570, BgL_casezd2sensitivezf3z21_4569,
										BgL_nz00_4568, BgL_rez00_4576, BgL_iz00_1978,
										BgL_zc3z04anonymousza31877ze3z87_4488, BgL_fkz00_4489);
								}
							else
								{	/* Unsafe/pregexp.scm 713 */
									obj_t BgL__ortest_1116z00_1990;

									BgL__ortest_1116z00_1990 =
										PROCEDURE_ENTRY(BgL_skz00_4575) (BgL_skz00_4575,
										BgL_iz00_1978, BEOA);
									if (CBOOL(BgL__ortest_1116z00_1990))
										{	/* Unsafe/pregexp.scm 713 */
											return BgL__ortest_1116z00_1990;
										}
									else
										{	/* Unsafe/pregexp.scm 716 */
											obj_t BgL_zc3z04anonymousza31883ze3z87_4490;

											BgL_zc3z04anonymousza31883ze3z87_4490 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31883ze3ze5zz__regexpz00,
												(int) (((long) 1)), (int) (((long) 13)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 0)), ((obj_t) BgL_nz00_4568));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 1)),
												((obj_t) BgL_casezd2sensitivezf3z21_4569));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 2)), BgL_identityz00_4570);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 3)), ((obj_t) BgL_snz00_4571));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 4)), BgL_backrefsz00_4572);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 5)), BgL_sz00_4573);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 6)), BgL_startz00_4574);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 7)), BgL_skz00_4575);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 8)), BgL_rez00_4576);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 9)),
												BBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_4577));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 10)), BBOOL(BgL_maximalzf3zf3_4578));
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 11)), BgL_qz00_4579);
											PROCEDURE_SET(BgL_zc3z04anonymousza31883ze3z87_4490,
												(int) (((long) 12)), BINT(BgL_kz00_1977));
											return BGl_z62subz62zz__regexpz00(BgL_startz00_4574,
												BgL_sz00_4573, BgL_backrefsz00_4572, BgL_snz00_4571,
												BgL_identityz00_4570, BgL_casezd2sensitivezf3z21_4569,
												BgL_nz00_4568, BgL_rez00_4576, BgL_iz00_1978,
												BgL_zc3z04anonymousza31883ze3z87_4490, BgL_fkz00_4489);
										}
								}
						}
				}
			}
		}

	}



/* &g1104 */
	obj_t BGl_z62g1104z62zz__regexpz00(obj_t BgL_envz00_4580)
	{
		{	/* Unsafe/pregexp.scm 550 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1777> */
	obj_t BGl_z62zc3z04anonymousza31777ze3ze5zz__regexpz00(obj_t BgL_envz00_4581)
	{
		{	/* Unsafe/pregexp.scm 595 */
			{	/* Unsafe/pregexp.scm 596 */
				obj_t BgL_nz00_4582;
				obj_t BgL_casezd2sensitivezf3z21_4583;
				obj_t BgL_identityz00_4584;
				obj_t BgL_snz00_4585;
				obj_t BgL_backrefsz00_4586;
				obj_t BgL_sz00_4587;
				obj_t BgL_startz00_4588;
				obj_t BgL_iz00_4589;
				obj_t BgL_skz00_4590;
				obj_t BgL_fkz00_4591;
				obj_t BgL_charsz00_4592;

				BgL_nz00_4582 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4583 =
					PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 1)));
				BgL_identityz00_4584 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 2))));
				BgL_snz00_4585 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 3)));
				BgL_backrefsz00_4586 =
					PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 4)));
				BgL_sz00_4587 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 5))));
				BgL_startz00_4588 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 6)));
				BgL_iz00_4589 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 7)));
				BgL_skz00_4590 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 8)));
				BgL_fkz00_4591 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 9)));
				BgL_charsz00_4592 = PROCEDURE_REF(BgL_envz00_4581, (int) (((long) 10)));
				{	/* Unsafe/pregexp.scm 596 */
					obj_t BgL_arg1778z00_4786;

					BgL_arg1778z00_4786 = CDR(((obj_t) BgL_charsz00_4592));
					return
						BGl_z62loupzd2onezd2ofzd2charszb0zz__regexpz00(BgL_fkz00_4591,
						BgL_skz00_4590, BgL_iz00_4589, BgL_startz00_4588, BgL_sz00_4587,
						BgL_backrefsz00_4586, BgL_snz00_4585, BgL_identityz00_4584,
						BgL_casezd2sensitivezf3z21_4583, BgL_nz00_4582,
						BgL_arg1778z00_4786);
				}
			}
		}

	}



/* &<@anonymous:1785> */
	obj_t BGl_z62zc3z04anonymousza31785ze3ze5zz__regexpz00(obj_t BgL_envz00_4593)
	{
		{	/* Unsafe/pregexp.scm 601 */
			{	/* Unsafe/pregexp.scm 601 */
				obj_t BgL_iz00_4594;
				obj_t BgL_skz00_4595;

				BgL_iz00_4594 = PROCEDURE_REF(BgL_envz00_4593, (int) (((long) 0)));
				BgL_skz00_4595 = PROCEDURE_REF(BgL_envz00_4593, (int) (((long) 1)));
				{	/* Unsafe/pregexp.scm 601 */
					long BgL_arg1786z00_4787;

					BgL_arg1786z00_4787 = ((long) CINT(BgL_iz00_4594) + ((long) 1));
					return
						PROCEDURE_ENTRY(BgL_skz00_4595) (BgL_skz00_4595,
						BINT(BgL_arg1786z00_4787), BEOA);
				}
			}
		}

	}



/* &<@anonymous:1784> */
	obj_t BGl_z62zc3z04anonymousza31784ze3ze5zz__regexpz00(obj_t BgL_envz00_4596,
		obj_t BgL_i1z00_4598)
	{
		{	/* Unsafe/pregexp.scm 600 */
			{	/* Unsafe/pregexp.scm 600 */
				obj_t BgL_fkz00_4597;

				BgL_fkz00_4597 = PROCEDURE_REF(BgL_envz00_4596, (int) (((long) 0)));
				return PROCEDURE_ENTRY(BgL_fkz00_4597) (BgL_fkz00_4597, BEOA);
			}
		}

	}



/* &<@anonymous:1792> */
	obj_t BGl_z62zc3z04anonymousza31792ze3ze5zz__regexpz00(obj_t BgL_envz00_4599,
		obj_t BgL_i1z00_4610)
	{
		{	/* Unsafe/pregexp.scm 606 */
			{	/* Unsafe/pregexp.scm 607 */
				obj_t BgL_nz00_4600;
				obj_t BgL_casezd2sensitivezf3z21_4601;
				obj_t BgL_identityz00_4602;
				obj_t BgL_snz00_4603;
				obj_t BgL_backrefsz00_4604;
				obj_t BgL_sz00_4605;
				obj_t BgL_startz00_4606;
				obj_t BgL_fkz00_4607;
				obj_t BgL_skz00_4608;
				obj_t BgL_resz00_4609;

				BgL_nz00_4600 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4601 =
					PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 1)));
				BgL_identityz00_4602 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 2))));
				BgL_snz00_4603 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 3)));
				BgL_backrefsz00_4604 =
					PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 4)));
				BgL_sz00_4605 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 5))));
				BgL_startz00_4606 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 6)));
				BgL_fkz00_4607 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 7)));
				BgL_skz00_4608 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 8)));
				BgL_resz00_4609 = PROCEDURE_REF(BgL_envz00_4599, (int) (((long) 9)));
				{	/* Unsafe/pregexp.scm 607 */
					obj_t BgL_arg1794z00_4788;

					BgL_arg1794z00_4788 = CDR(((obj_t) BgL_resz00_4609));
					return
						BGl_z62loupzd2seqzb0zz__regexpz00(BgL_skz00_4608, BgL_fkz00_4607,
						BgL_startz00_4606, BgL_sz00_4605, BgL_backrefsz00_4604,
						BgL_snz00_4603, BgL_identityz00_4602,
						BgL_casezd2sensitivezf3z21_4601, BgL_nz00_4600, BgL_arg1794z00_4788,
						BgL_i1z00_4610);
				}
			}
		}

	}



/* &<@anonymous:1804> */
	obj_t BGl_z62zc3z04anonymousza31804ze3ze5zz__regexpz00(obj_t BgL_envz00_4611)
	{
		{	/* Unsafe/pregexp.scm 616 */
			{	/* Unsafe/pregexp.scm 616 */
				obj_t BgL_nz00_4612;
				obj_t BgL_casezd2sensitivezf3z21_4613;
				obj_t BgL_identityz00_4614;
				obj_t BgL_snz00_4615;
				obj_t BgL_backrefsz00_4616;
				obj_t BgL_sz00_4617;
				obj_t BgL_startz00_4618;
				obj_t BgL_skz00_4619;
				obj_t BgL_iz00_4620;
				obj_t BgL_fkz00_4621;
				obj_t BgL_resz00_4622;

				BgL_nz00_4612 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4613 =
					PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 1)));
				BgL_identityz00_4614 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 2))));
				BgL_snz00_4615 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 3)));
				BgL_backrefsz00_4616 =
					PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 4)));
				BgL_sz00_4617 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 5))));
				BgL_startz00_4618 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 6)));
				BgL_skz00_4619 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 7)));
				BgL_iz00_4620 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 8)));
				BgL_fkz00_4621 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 9)));
				BgL_resz00_4622 = PROCEDURE_REF(BgL_envz00_4611, (int) (((long) 10)));
				{	/* Unsafe/pregexp.scm 616 */
					obj_t BgL_arg1805z00_4789;

					BgL_arg1805z00_4789 = CDR(((obj_t) BgL_resz00_4622));
					return
						BGl_z62loupzd2orzb0zz__regexpz00(BgL_fkz00_4621, BgL_iz00_4620,
						BgL_skz00_4619, BgL_startz00_4618, BgL_sz00_4617,
						BgL_backrefsz00_4616, BgL_snz00_4615, BgL_identityz00_4614,
						BgL_casezd2sensitivezf3z21_4613, BgL_nz00_4612,
						BgL_arg1805z00_4789);
				}
			}
		}

	}



/* &<@anonymous:1801> */
	obj_t BGl_z62zc3z04anonymousza31801ze3ze5zz__regexpz00(obj_t BgL_envz00_4623,
		obj_t BgL_i1z00_4635)
	{
		{	/* Unsafe/pregexp.scm 613 */
			{	/* Unsafe/pregexp.scm 614 */
				obj_t BgL_nz00_4624;
				obj_t BgL_casezd2sensitivezf3z21_4625;
				obj_t BgL_identityz00_4626;
				obj_t BgL_snz00_4627;
				obj_t BgL_backrefsz00_4628;
				obj_t BgL_sz00_4629;
				obj_t BgL_startz00_4630;
				obj_t BgL_iz00_4631;
				obj_t BgL_fkz00_4632;
				obj_t BgL_skz00_4633;
				obj_t BgL_resz00_4634;

				BgL_nz00_4624 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4625 =
					PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 1)));
				BgL_identityz00_4626 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 2))));
				BgL_snz00_4627 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 3)));
				BgL_backrefsz00_4628 =
					PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 4)));
				BgL_sz00_4629 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 5))));
				BgL_startz00_4630 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 6)));
				BgL_iz00_4631 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 7)));
				BgL_fkz00_4632 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 8)));
				BgL_skz00_4633 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 9)));
				BgL_resz00_4634 = PROCEDURE_REF(BgL_envz00_4623, (int) (((long) 10)));
				{	/* Unsafe/pregexp.scm 614 */
					obj_t BgL__ortest_1109z00_4790;

					BgL__ortest_1109z00_4790 =
						PROCEDURE_ENTRY(BgL_skz00_4633) (BgL_skz00_4633, BgL_i1z00_4635,
						BEOA);
					if (CBOOL(BgL__ortest_1109z00_4790))
						{	/* Unsafe/pregexp.scm 614 */
							return BgL__ortest_1109z00_4790;
						}
					else
						{	/* Unsafe/pregexp.scm 615 */
							obj_t BgL_arg1803z00_4791;

							BgL_arg1803z00_4791 = CDR(((obj_t) BgL_resz00_4634));
							return
								BGl_z62loupzd2orzb0zz__regexpz00(BgL_fkz00_4632, BgL_iz00_4631,
								BgL_skz00_4633, BgL_startz00_4630, BgL_sz00_4629,
								BgL_backrefsz00_4628, BgL_snz00_4627, BgL_identityz00_4626,
								BgL_casezd2sensitivezf3z21_4625, BgL_nz00_4624,
								BgL_arg1803z00_4791);
						}
				}
			}
		}

	}



/* &<@anonymous:1818> */
	obj_t BGl_z62zc3z04anonymousza31818ze3ze5zz__regexpz00(obj_t BgL_envz00_4636,
		obj_t BgL_i1z00_4641)
	{
		{	/* Unsafe/pregexp.scm 632 */
			{	/* Unsafe/pregexp.scm 633 */
				obj_t BgL_rez00_4637;
				obj_t BgL_backrefsz00_4638;
				obj_t BgL_iz00_4639;
				obj_t BgL_skz00_4640;

				BgL_rez00_4637 = PROCEDURE_REF(BgL_envz00_4636, (int) (((long) 0)));
				BgL_backrefsz00_4638 =
					PROCEDURE_REF(BgL_envz00_4636, (int) (((long) 1)));
				BgL_iz00_4639 = PROCEDURE_REF(BgL_envz00_4636, (int) (((long) 2)));
				BgL_skz00_4640 = PROCEDURE_REF(BgL_envz00_4636, (int) (((long) 3)));
				{	/* Unsafe/pregexp.scm 633 */
					obj_t BgL_arg1819z00_4792;
					obj_t BgL_arg1820z00_4793;

					BgL_arg1819z00_4792 =
						BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_rez00_4637,
						BgL_backrefsz00_4638);
					BgL_arg1820z00_4793 = MAKE_YOUNG_PAIR(BgL_iz00_4639, BgL_i1z00_4641);
					{	/* Unsafe/pregexp.scm 633 */
						obj_t BgL_tmpz00_6743;

						BgL_tmpz00_6743 = ((obj_t) BgL_arg1819z00_4792);
						SET_CDR(BgL_tmpz00_6743, BgL_arg1820z00_4793);
				}}
				return
					PROCEDURE_ENTRY(BgL_skz00_4640) (BgL_skz00_4640, BgL_i1z00_4641,
					BEOA);
			}
		}

	}



/* &<@anonymous:1824> */
	obj_t BGl_z62zc3z04anonymousza31824ze3ze5zz__regexpz00(obj_t BgL_envz00_4642)
	{
		{	/* Unsafe/pregexp.scm 638 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1828> */
	obj_t BGl_z62zc3z04anonymousza31828ze3ze5zz__regexpz00(obj_t BgL_envz00_4643)
	{
		{	/* Unsafe/pregexp.scm 643 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1839> */
	obj_t BGl_z62zc3z04anonymousza31839ze3ze5zz__regexpz00(obj_t BgL_envz00_4644)
	{
		{	/* Unsafe/pregexp.scm 651 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zz__regexpz00(obj_t BgL_envz00_4645)
	{
		{	/* Unsafe/pregexp.scm 660 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1856> */
	obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__regexpz00(obj_t BgL_envz00_4646)
	{
		{	/* Unsafe/pregexp.scm 665 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &identity */
	obj_t BGl_z62identityz62zz__regexpz00(obj_t BgL_envz00_4647,
		obj_t BgL_xz00_4648)
	{
		{	/* Unsafe/pregexp.scm 547 */
			return BgL_xz00_4648;
		}

	}



/* &<@anonymous:1864> */
	obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__regexpz00(obj_t BgL_envz00_4649)
	{
		{	/* Unsafe/pregexp.scm 677 */
			{	/* Unsafe/pregexp.scm 678 */
				obj_t BgL_oldz00_4650;
				obj_t BgL_casezd2sensitivezf3z21_4651;
				obj_t BgL_fkz00_4652;

				BgL_oldz00_4650 = PROCEDURE_REF(BgL_envz00_4649, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4651 =
					PROCEDURE_REF(BgL_envz00_4649, (int) (((long) 1)));
				BgL_fkz00_4652 = PROCEDURE_REF(BgL_envz00_4649, (int) (((long) 2)));
				CELL_SET(BgL_casezd2sensitivezf3z21_4651, BgL_oldz00_4650);
				return PROCEDURE_ENTRY(BgL_fkz00_4652) (BgL_fkz00_4652, BEOA);
			}
		}

	}



/* &<@anonymous:1863> */
	obj_t BGl_z62zc3z04anonymousza31863ze3ze5zz__regexpz00(obj_t BgL_envz00_4654,
		obj_t BgL_i1z00_4658)
	{
		{	/* Unsafe/pregexp.scm 674 */
			{	/* Unsafe/pregexp.scm 675 */
				obj_t BgL_oldz00_4655;
				obj_t BgL_casezd2sensitivezf3z21_4656;
				obj_t BgL_skz00_4657;

				BgL_oldz00_4655 = PROCEDURE_REF(BgL_envz00_4654, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4656 =
					PROCEDURE_REF(BgL_envz00_4654, (int) (((long) 1)));
				BgL_skz00_4657 = PROCEDURE_REF(BgL_envz00_4654, (int) (((long) 2)));
				CELL_SET(BgL_casezd2sensitivezf3z21_4656, BgL_oldz00_4655);
				return
					PROCEDURE_ENTRY(BgL_skz00_4657) (BgL_skz00_4657, BgL_i1z00_4658,
					BEOA);
			}
		}

	}



/* &<@anonymous:1869> */
	obj_t BGl_z62zc3z04anonymousza31869ze3ze5zz__regexpz00(obj_t BgL_envz00_4660,
		obj_t BgL_i1z00_4677)
	{
		{	/* Unsafe/pregexp.scm 689 */
			{	/* Unsafe/pregexp.scm 690 */
				obj_t BgL_nz00_4661;
				obj_t BgL_casezd2sensitivezf3z21_4662;
				obj_t BgL_identityz00_4663;
				obj_t BgL_snz00_4664;
				obj_t BgL_backrefsz00_4665;
				obj_t BgL_sz00_4666;
				obj_t BgL_startz00_4667;
				obj_t BgL_skz00_4668;
				bool_t BgL_maximalzf3zf3_4669;
				obj_t BgL_qz00_4670;
				obj_t BgL_pz00_4671;
				obj_t BgL_rez00_4672;
				obj_t BgL_fkz00_4673;
				obj_t BgL_iz00_4674;
				bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_4675;
				long BgL_kz00_4676;

				BgL_nz00_4661 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4662 =
					PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 1)));
				BgL_identityz00_4663 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 2))));
				BgL_snz00_4664 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 3)));
				BgL_backrefsz00_4665 =
					PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 4)));
				BgL_sz00_4666 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 5))));
				BgL_startz00_4667 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 6)));
				BgL_skz00_4668 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 7)));
				BgL_maximalzf3zf3_4669 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 8))));
				BgL_qz00_4670 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 9)));
				BgL_pz00_4671 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 10)));
				BgL_rez00_4672 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 11)));
				BgL_fkz00_4673 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 12)));
				BgL_iz00_4674 = PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 13)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_4675 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 14))));
				BgL_kz00_4676 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4660, (int) (((long) 15))));
				{	/* Unsafe/pregexp.scm 690 */
					bool_t BgL_test3306z00_6811;

					if (BgL_couldzd2loopzd2infinitelyzf3zf3_4675)
						{	/* Unsafe/pregexp.scm 690 */
							BgL_test3306z00_6811 =
								((long) CINT(BgL_i1z00_4677) == (long) CINT(BgL_iz00_4674));
						}
					else
						{	/* Unsafe/pregexp.scm 690 */
							BgL_test3306z00_6811 = ((bool_t) 0);
						}
					if (BgL_test3306z00_6811)
						{	/* Unsafe/pregexp.scm 692 */
							obj_t BgL_list1871z00_4794;

							BgL_list1871z00_4794 =
								MAKE_YOUNG_PAIR(BGl_symbol3010z00zz__regexpz00, BNIL);
							BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
								BGl_symbol3000z00zz__regexpz00, CAR(BgL_list1871z00_4794));
						}
					else
						{	/* Unsafe/pregexp.scm 690 */
							BFALSE;
						}
				}
				return
					BGl_z62loupzd2pzb0zz__regexpz00(BgL_fkz00_4673, BgL_rez00_4672,
					BgL_couldzd2loopzd2infinitelyzf3zf3_4675, BgL_pz00_4671,
					BgL_qz00_4670, BgL_maximalzf3zf3_4669, BgL_skz00_4668,
					BgL_startz00_4667, BgL_sz00_4666, BgL_backrefsz00_4665,
					BgL_snz00_4664, BgL_identityz00_4663, BgL_casezd2sensitivezf3z21_4662,
					BgL_nz00_4661, (BgL_kz00_4676 + ((long) 1)), BgL_i1z00_4677);
		}}

	}



/* &<@anonymous:1877> */
	obj_t BGl_z62zc3z04anonymousza31877ze3ze5zz__regexpz00(obj_t BgL_envz00_4678,
		obj_t BgL_i1z00_4693)
	{
		{	/* Unsafe/pregexp.scm 704 */
			{	/* Unsafe/pregexp.scm 705 */
				obj_t BgL_nz00_4679;
				obj_t BgL_casezd2sensitivezf3z21_4680;
				obj_t BgL_identityz00_4681;
				obj_t BgL_snz00_4682;
				obj_t BgL_backrefsz00_4683;
				obj_t BgL_sz00_4684;
				obj_t BgL_startz00_4685;
				obj_t BgL_rez00_4686;
				bool_t BgL_maximalzf3zf3_4687;
				obj_t BgL_qz00_4688;
				obj_t BgL_iz00_4689;
				bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_4690;
				long BgL_kz00_4691;
				obj_t BgL_skz00_4692;

				BgL_nz00_4679 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4680 =
					PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 1)));
				BgL_identityz00_4681 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 2))));
				BgL_snz00_4682 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 3)));
				BgL_backrefsz00_4683 =
					PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 4)));
				BgL_sz00_4684 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 5))));
				BgL_startz00_4685 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 6)));
				BgL_rez00_4686 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 7)));
				BgL_maximalzf3zf3_4687 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 8))));
				BgL_qz00_4688 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 9)));
				BgL_iz00_4689 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 10)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_4690 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 11))));
				BgL_kz00_4691 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 12))));
				BgL_skz00_4692 = PROCEDURE_REF(BgL_envz00_4678, (int) (((long) 13)));
				{	/* Unsafe/pregexp.scm 705 */
					bool_t BgL_test3308z00_6854;

					if (BgL_couldzd2loopzd2infinitelyzf3zf3_4690)
						{	/* Unsafe/pregexp.scm 705 */
							BgL_test3308z00_6854 =
								((long) CINT(BgL_i1z00_4693) == (long) CINT(BgL_iz00_4689));
						}
					else
						{	/* Unsafe/pregexp.scm 705 */
							BgL_test3308z00_6854 = ((bool_t) 0);
						}
					if (BgL_test3308z00_6854)
						{	/* Unsafe/pregexp.scm 707 */
							obj_t BgL_list1879z00_4796;

							BgL_list1879z00_4796 =
								MAKE_YOUNG_PAIR(BGl_symbol3010z00zz__regexpz00, BNIL);
							BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
								BGl_symbol3000z00zz__regexpz00, CAR(BgL_list1879z00_4796));
						}
					else
						{	/* Unsafe/pregexp.scm 705 */
							BFALSE;
						}
				}
				{	/* Unsafe/pregexp.scm 710 */
					obj_t BgL__ortest_1115z00_4798;

					BgL__ortest_1115z00_4798 =
						BGl_z62loupzd2qzb0zz__regexpz00(BgL_qz00_4688,
						BgL_maximalzf3zf3_4687, BgL_couldzd2loopzd2infinitelyzf3zf3_4690,
						BgL_rez00_4686, BgL_skz00_4692, BgL_startz00_4685, BgL_sz00_4684,
						BgL_backrefsz00_4683, BgL_snz00_4682, BgL_identityz00_4681,
						BgL_casezd2sensitivezf3z21_4680, BgL_nz00_4679,
						(BgL_kz00_4691 + ((long) 1)), BgL_i1z00_4693);
					if (CBOOL(BgL__ortest_1115z00_4798))
						{	/* Unsafe/pregexp.scm 710 */
							return BgL__ortest_1115z00_4798;
						}
					else
						{	/* Unsafe/pregexp.scm 710 */
							return
								PROCEDURE_ENTRY(BgL_skz00_4692) (BgL_skz00_4692, BgL_iz00_4689,
								BEOA);
						}
				}
			}
		}

	}



/* &fk */
	obj_t BGl_z62fkz62zz__regexpz00(obj_t BgL_envz00_4694)
	{
		{	/* Unsafe/pregexp.scm 699 */
			{	/* Unsafe/pregexp.scm 700 */
				obj_t BgL_skz00_4695;
				obj_t BgL_iz00_4696;

				BgL_skz00_4695 = PROCEDURE_REF(BgL_envz00_4694, (int) (((long) 0)));
				BgL_iz00_4696 = PROCEDURE_REF(BgL_envz00_4694, (int) (((long) 1)));
				return
					PROCEDURE_ENTRY(BgL_skz00_4695) (BgL_skz00_4695, BgL_iz00_4696, BEOA);
			}
		}

	}



/* &<@anonymous:1883> */
	obj_t BGl_z62zc3z04anonymousza31883ze3ze5zz__regexpz00(obj_t BgL_envz00_4697,
		obj_t BgL_i1z00_4711)
	{
		{	/* Unsafe/pregexp.scm 715 */
			{	/* Unsafe/pregexp.scm 716 */
				obj_t BgL_nz00_4698;
				obj_t BgL_casezd2sensitivezf3z21_4699;
				obj_t BgL_identityz00_4700;
				obj_t BgL_snz00_4701;
				obj_t BgL_backrefsz00_4702;
				obj_t BgL_sz00_4703;
				obj_t BgL_startz00_4704;
				obj_t BgL_skz00_4705;
				obj_t BgL_rez00_4706;
				bool_t BgL_couldzd2loopzd2infinitelyzf3zf3_4707;
				bool_t BgL_maximalzf3zf3_4708;
				obj_t BgL_qz00_4709;
				long BgL_kz00_4710;

				BgL_nz00_4698 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_4699 =
					PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 1)));
				BgL_identityz00_4700 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 2))));
				BgL_snz00_4701 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 3)));
				BgL_backrefsz00_4702 =
					PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 4)));
				BgL_sz00_4703 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 5))));
				BgL_startz00_4704 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 6)));
				BgL_skz00_4705 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 7)));
				BgL_rez00_4706 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 8)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_4707 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 9))));
				BgL_maximalzf3zf3_4708 =
					CBOOL(PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 10))));
				BgL_qz00_4709 = PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 11)));
				BgL_kz00_4710 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4697, (int) (((long) 12))));
				return
					BGl_z62loupzd2qzb0zz__regexpz00(BgL_qz00_4709, BgL_maximalzf3zf3_4708,
					BgL_couldzd2loopzd2infinitelyzf3zf3_4707, BgL_rez00_4706,
					BgL_skz00_4705, BgL_startz00_4704, BgL_sz00_4703,
					BgL_backrefsz00_4702, BgL_snz00_4701, BgL_identityz00_4700,
					BgL_casezd2sensitivezf3z21_4699, BgL_nz00_4698,
					(BgL_kz00_4710 + ((long) 1)), BgL_i1z00_4711);
		}}

	}



/* pregexp-replace-aux */
	obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t BgL_strz00_64,
		obj_t BgL_insz00_65, long BgL_nz00_66, obj_t BgL_backrefsz00_67)
	{
		{	/* Unsafe/pregexp.scm 725 */
			{
				obj_t BgL_iz00_2038;
				obj_t BgL_rz00_2039;

				BgL_iz00_2038 = BINT(((long) 0));
				BgL_rz00_2039 = BGl_string3012z00zz__regexpz00;
			BgL_zc3z04anonymousza31904ze3z87_2040:
				if (((long) CINT(BgL_iz00_2038) >= BgL_nz00_66))
					{	/* Unsafe/pregexp.scm 728 */
						return BgL_rz00_2039;
					}
				else
					{	/* Unsafe/pregexp.scm 729 */
						unsigned char BgL_cz00_2042;

						BgL_cz00_2042 =
							STRING_REF(BgL_insz00_65, (long) CINT(BgL_iz00_2038));
						if ((BgL_cz00_2042 == ((unsigned char) '\\')))
							{	/* Unsafe/pregexp.scm 731 */
								obj_t BgL_brzd2izd2_2044;

								BgL_brzd2izd2_2044 =
									BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00
									(BgL_insz00_65, BgL_iz00_2038, BgL_nz00_66);
								{	/* Unsafe/pregexp.scm 731 */
									obj_t BgL_brz00_2045;

									if (CBOOL(BgL_brzd2izd2_2044))
										{	/* Unsafe/pregexp.scm 732 */
											BgL_brz00_2045 = CAR(((obj_t) BgL_brzd2izd2_2044));
										}
									else
										{	/* Unsafe/pregexp.scm 732 */
											if (
												(STRING_REF(BgL_insz00_65,
														((long) CINT(BgL_iz00_2038) + ((long) 1))) ==
													((unsigned char) '&')))
												{	/* Unsafe/pregexp.scm 733 */
													BgL_brz00_2045 = BINT(((long) 0));
												}
											else
												{	/* Unsafe/pregexp.scm 733 */
													BgL_brz00_2045 = BFALSE;
												}
										}
									{	/* Unsafe/pregexp.scm 732 */
										obj_t BgL_iz00_2046;

										if (CBOOL(BgL_brzd2izd2_2044))
											{	/* Unsafe/pregexp.scm 735 */
												obj_t BgL_pairz00_3987;

												BgL_pairz00_3987 = CDR(((obj_t) BgL_brzd2izd2_2044));
												BgL_iz00_2046 = CAR(BgL_pairz00_3987);
											}
										else
											{	/* Unsafe/pregexp.scm 735 */
												if (CBOOL(BgL_brz00_2045))
													{	/* Unsafe/pregexp.scm 736 */
														BgL_iz00_2046 =
															ADDFX(BgL_iz00_2038, BINT(((long) 2)));
													}
												else
													{	/* Unsafe/pregexp.scm 736 */
														BgL_iz00_2046 =
															ADDFX(BgL_iz00_2038, BINT(((long) 1)));
											}}
										{	/* Unsafe/pregexp.scm 735 */

											if (CBOOL(BgL_brz00_2045))
												{	/* Unsafe/pregexp.scm 744 */
													obj_t BgL_arg1907z00_2047;

													{	/* Unsafe/pregexp.scm 744 */
														obj_t BgL_backrefz00_2048;

														BgL_backrefz00_2048 =
															BGl_pregexpzd2listzd2refz00zz__regexpz00
															(BgL_backrefsz00_67, BgL_brz00_2045);
														if (CBOOL(BgL_backrefz00_2048))
															{	/* Unsafe/pregexp.scm 747 */
																obj_t BgL_arg1908z00_2049;

																{	/* Unsafe/pregexp.scm 747 */
																	obj_t BgL_arg1909z00_2050;
																	obj_t BgL_arg1910z00_2051;

																	BgL_arg1909z00_2050 =
																		CAR(((obj_t) BgL_backrefz00_2048));
																	BgL_arg1910z00_2051 =
																		CDR(((obj_t) BgL_backrefz00_2048));
																	BgL_arg1908z00_2049 =
																		c_substring(BgL_strz00_64,
																		(long) CINT(BgL_arg1909z00_2050),
																		(long) CINT(BgL_arg1910z00_2051));
																}
																BgL_arg1907z00_2047 =
																	string_append(BgL_rz00_2039,
																	BgL_arg1908z00_2049);
															}
														else
															{	/* Unsafe/pregexp.scm 745 */
																BgL_arg1907z00_2047 = BgL_rz00_2039;
															}
													}
													{
														obj_t BgL_rz00_6954;
														obj_t BgL_iz00_6953;

														BgL_iz00_6953 = BgL_iz00_2046;
														BgL_rz00_6954 = BgL_arg1907z00_2047;
														BgL_rz00_2039 = BgL_rz00_6954;
														BgL_iz00_2038 = BgL_iz00_6953;
														goto BgL_zc3z04anonymousza31904ze3z87_2040;
													}
												}
											else
												{	/* Unsafe/pregexp.scm 739 */
													unsigned char BgL_c2z00_2052;

													BgL_c2z00_2052 =
														STRING_REF(BgL_insz00_65,
														(long) CINT(BgL_iz00_2046));
													{	/* Unsafe/pregexp.scm 740 */
														long BgL_arg1911z00_2053;
														obj_t BgL_arg1912z00_2054;

														BgL_arg1911z00_2053 =
															((long) CINT(BgL_iz00_2046) + ((long) 1));
														if ((BgL_c2z00_2052 == ((unsigned char) '$')))
															{	/* Unsafe/pregexp.scm 741 */
																BgL_arg1912z00_2054 = BgL_rz00_2039;
															}
														else
															{	/* Unsafe/pregexp.scm 742 */
																obj_t BgL_arg1914z00_2056;

																{	/* Unsafe/pregexp.scm 742 */
																	obj_t BgL_list1915z00_2057;

																	BgL_list1915z00_2057 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_c2z00_2052),
																		BNIL);
																	BgL_arg1914z00_2056 =
																		BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																		(BgL_list1915z00_2057);
																}
																BgL_arg1912z00_2054 =
																	string_append(BgL_rz00_2039,
																	BgL_arg1914z00_2056);
															}
														{
															obj_t BgL_rz00_6967;
															obj_t BgL_iz00_6965;

															BgL_iz00_6965 = BINT(BgL_arg1911z00_2053);
															BgL_rz00_6967 = BgL_arg1912z00_2054;
															BgL_rz00_2039 = BgL_rz00_6967;
															BgL_iz00_2038 = BgL_iz00_6965;
															goto BgL_zc3z04anonymousza31904ze3z87_2040;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Unsafe/pregexp.scm 749 */
								long BgL_arg1921z00_2063;
								obj_t BgL_arg1923z00_2064;

								BgL_arg1921z00_2063 = ((long) CINT(BgL_iz00_2038) + ((long) 1));
								{	/* Unsafe/pregexp.scm 749 */
									obj_t BgL_arg1924z00_2065;

									{	/* Unsafe/pregexp.scm 749 */
										obj_t BgL_list1925z00_2066;

										BgL_list1925z00_2066 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_2042), BNIL);
										BgL_arg1924z00_2065 =
											BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
											(BgL_list1925z00_2066);
									}
									BgL_arg1923z00_2064 =
										string_append(BgL_rz00_2039, BgL_arg1924z00_2065);
								}
								{
									obj_t BgL_rz00_6976;
									obj_t BgL_iz00_6974;

									BgL_iz00_6974 = BINT(BgL_arg1921z00_2063);
									BgL_rz00_6976 = BgL_arg1923z00_2064;
									BgL_rz00_2039 = BgL_rz00_6976;
									BgL_iz00_2038 = BgL_iz00_6974;
									goto BgL_zc3z04anonymousza31904ze3z87_2040;
								}
							}
					}
			}
		}

	}



/* pregexp */
	BGL_EXPORTED_DEF obj_t BGl_pregexpz00zz__regexpz00(obj_t BgL_sz00_68,
		obj_t BgL_optzd2argszd2_69)
	{
		{	/* Unsafe/pregexp.scm 751 */
			{	/* Unsafe/pregexp.scm 753 */
				obj_t BgL_rez00_4010;

				BgL_rez00_4010 = bgl_make_regexp(BgL_sz00_68);
				{	/* Unsafe/pregexp.scm 754 */
					obj_t BgL_tmpz00_6979;

					BgL_tmpz00_6979 =
						BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00
						(BGl_z52pregexpz52zz__regexpz00(BgL_sz00_68));
					BGL_REGEXP_PREG_SET(BgL_rez00_4010, BgL_tmpz00_6979);
				}
				return BgL_rez00_4010;
			}
		}

	}



/* &pregexp */
	obj_t BGl_z62pregexpz62zz__regexpz00(obj_t BgL_envz00_4716,
		obj_t BgL_sz00_4717, obj_t BgL_optzd2argszd2_4718)
	{
		{	/* Unsafe/pregexp.scm 751 */
			{	/* Unsafe/pregexp.scm 753 */
				obj_t BgL_auxz00_6983;

				if (STRINGP(BgL_sz00_4717))
					{	/* Unsafe/pregexp.scm 753 */
						BgL_auxz00_6983 = BgL_sz00_4717;
					}
				else
					{
						obj_t BgL_auxz00_6986;

						BgL_auxz00_6986 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 31114)), BGl_string3013z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_sz00_4717);
						FAILURE(BgL_auxz00_6986, BFALSE, BFALSE);
					}
				return
					BGl_pregexpz00zz__regexpz00(BgL_auxz00_6983, BgL_optzd2argszd2_4718);
			}
		}

	}



/* %pregexp */
	obj_t BGl_z52pregexpz52zz__regexpz00(obj_t BgL_sz00_70)
	{
		{	/* Unsafe/pregexp.scm 757 */
			{	/* Unsafe/pregexp.scm 759 */
				bool_t BgL_test3321z00_6991;

				{	/* Unsafe/pregexp.scm 759 */
					obj_t BgL_s2z00_2082;

					BgL_s2z00_2082 = BgL_sz00_70;
					{	/* Unsafe/pregexp.scm 759 */

						BgL_test3321z00_6991 =
							BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
							(BGl_string3015z00zz__regexpz00, BgL_s2z00_2082, BFALSE, BFALSE,
							BFALSE, BFALSE);
					}
				}
				if (BgL_test3321z00_6991)
					{	/* Unsafe/pregexp.scm 759 */
						obj_t BgL_stringz00_2078;

						BgL_stringz00_2078 = BgL_sz00_70;
						{	/* Ieee/string.scm 190 */
							long BgL_endz00_2080;

							BgL_endz00_2080 = STRING_LENGTH(BgL_stringz00_2078);
							{	/* Ieee/string.scm 190 */

								BgL_sz00_70 =
									BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_2078,
									((long) 7), BgL_endz00_2080);
					}}}
				else
					{	/* Unsafe/pregexp.scm 759 */
						BFALSE;
					}
			}
			BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__regexpz00 = ((bool_t) 1);
			{	/* Unsafe/pregexp.scm 761 */
				obj_t BgL_arg1930z00_2087;

				{	/* Unsafe/pregexp.scm 761 */
					obj_t BgL_arg1933z00_2090;

					{	/* Unsafe/pregexp.scm 761 */
						long BgL_arg1934z00_2091;

						BgL_arg1934z00_2091 = STRING_LENGTH(BgL_sz00_70);
						BgL_arg1933z00_2090 =
							BGl_pregexpzd2readzd2patternz00zz__regexpz00(BgL_sz00_70,
							BINT(((long) 0)), BgL_arg1934z00_2091);
					}
					BgL_arg1930z00_2087 = CAR(((obj_t) BgL_arg1933z00_2090));
				}
				{	/* Unsafe/pregexp.scm 761 */
					obj_t BgL_list1931z00_2088;

					{	/* Unsafe/pregexp.scm 761 */
						obj_t BgL_arg1932z00_2089;

						BgL_arg1932z00_2089 = MAKE_YOUNG_PAIR(BgL_arg1930z00_2087, BNIL);
						BgL_list1931z00_2088 =
							MAKE_YOUNG_PAIR(BGl_keyword2927z00zz__regexpz00,
							BgL_arg1932z00_2089);
					}
					return BgL_list1931z00_2088;
				}
			}
		}

	}



/* _pregexp-match-positions */
	obj_t BGl__pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t
		BgL_env1195z00_76, obj_t BgL_opt1194z00_75)
	{
		{	/* Unsafe/pregexp.scm 763 */
			{	/* Unsafe/pregexp.scm 763 */
				obj_t BgL_patz00_2092;
				obj_t BgL_strz00_2093;

				BgL_patz00_2092 = VECTOR_REF(BgL_opt1194z00_75, ((long) 0));
				BgL_strz00_2093 = VECTOR_REF(BgL_opt1194z00_75, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1194z00_75))
					{
					case ((long) 2):

						{	/* Unsafe/pregexp.scm 765 */
							long BgL_endz00_2098;

							{	/* Unsafe/pregexp.scm 765 */
								obj_t BgL_stringz00_4019;

								if (STRINGP(BgL_strz00_2093))
									{	/* Unsafe/pregexp.scm 765 */
										BgL_stringz00_4019 = BgL_strz00_2093;
									}
								else
									{
										obj_t BgL_auxz00_7006;

										BgL_auxz00_7006 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2886z00zz__regexpz00, BINT(((long) 31542)),
											BGl_string3016z00zz__regexpz00,
											BGl_string3014z00zz__regexpz00, BgL_strz00_2093);
										FAILURE(BgL_auxz00_7006, BFALSE, BFALSE);
									}
								BgL_endz00_2098 = STRING_LENGTH(BgL_stringz00_4019);
							}
							{	/* Unsafe/pregexp.scm 763 */

								{	/* Unsafe/pregexp.scm 763 */
									obj_t BgL_auxz00_7011;

									if (STRINGP(BgL_strz00_2093))
										{	/* Unsafe/pregexp.scm 763 */
											BgL_auxz00_7011 = BgL_strz00_2093;
										}
									else
										{
											obj_t BgL_auxz00_7014;

											BgL_auxz00_7014 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2886z00zz__regexpz00, BINT(((long) 31437)),
												BGl_string3016z00zz__regexpz00,
												BGl_string3014z00zz__regexpz00, BgL_strz00_2093);
											FAILURE(BgL_auxz00_7014, BFALSE, BFALSE);
										}
									return
										BGl_pregexpzd2matchzd2positionsz00zz__regexpz00
										(BgL_patz00_2092, BgL_auxz00_7011, BINT(((long) 0)),
										BINT(BgL_endz00_2098));
						}}} break;
					case ((long) 3):

						{	/* Unsafe/pregexp.scm 763 */
							obj_t BgL_begz00_2099;

							BgL_begz00_2099 = VECTOR_REF(BgL_opt1194z00_75, ((long) 2));
							{	/* Unsafe/pregexp.scm 765 */
								long BgL_endz00_2100;

								{	/* Unsafe/pregexp.scm 765 */
									obj_t BgL_stringz00_4021;

									if (STRINGP(BgL_strz00_2093))
										{	/* Unsafe/pregexp.scm 765 */
											BgL_stringz00_4021 = BgL_strz00_2093;
										}
									else
										{
											obj_t BgL_auxz00_7024;

											BgL_auxz00_7024 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2886z00zz__regexpz00, BINT(((long) 31542)),
												BGl_string3016z00zz__regexpz00,
												BGl_string3014z00zz__regexpz00, BgL_strz00_2093);
											FAILURE(BgL_auxz00_7024, BFALSE, BFALSE);
										}
									BgL_endz00_2100 = STRING_LENGTH(BgL_stringz00_4021);
								}
								{	/* Unsafe/pregexp.scm 763 */

									{	/* Unsafe/pregexp.scm 763 */
										obj_t BgL_auxz00_7029;

										if (STRINGP(BgL_strz00_2093))
											{	/* Unsafe/pregexp.scm 763 */
												BgL_auxz00_7029 = BgL_strz00_2093;
											}
										else
											{
												obj_t BgL_auxz00_7032;

												BgL_auxz00_7032 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2886z00zz__regexpz00, BINT(((long) 31437)),
													BGl_string3016z00zz__regexpz00,
													BGl_string3014z00zz__regexpz00, BgL_strz00_2093);
												FAILURE(BgL_auxz00_7032, BFALSE, BFALSE);
											}
										return
											BGl_pregexpzd2matchzd2positionsz00zz__regexpz00
											(BgL_patz00_2092, BgL_auxz00_7029, BgL_begz00_2099,
											BINT(BgL_endz00_2100));
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Unsafe/pregexp.scm 763 */
							obj_t BgL_begz00_2101;

							BgL_begz00_2101 = VECTOR_REF(BgL_opt1194z00_75, ((long) 2));
							{	/* Unsafe/pregexp.scm 763 */
								obj_t BgL_endz00_2102;

								BgL_endz00_2102 = VECTOR_REF(BgL_opt1194z00_75, ((long) 3));
								{	/* Unsafe/pregexp.scm 763 */

									{	/* Unsafe/pregexp.scm 763 */
										obj_t BgL_auxz00_7040;

										if (STRINGP(BgL_strz00_2093))
											{	/* Unsafe/pregexp.scm 763 */
												BgL_auxz00_7040 = BgL_strz00_2093;
											}
										else
											{
												obj_t BgL_auxz00_7043;

												BgL_auxz00_7043 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2886z00zz__regexpz00, BINT(((long) 31437)),
													BGl_string3016z00zz__regexpz00,
													BGl_string3014z00zz__regexpz00, BgL_strz00_2093);
												FAILURE(BgL_auxz00_7043, BFALSE, BFALSE);
											}
										return
											BGl_pregexpzd2matchzd2positionsz00zz__regexpz00
											(BgL_patz00_2092, BgL_auxz00_7040, BgL_begz00_2101,
											BgL_endz00_2102);
									}
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



/* pregexp-match-positions */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t
		BgL_patz00_71, obj_t BgL_strz00_72, obj_t BgL_begz00_73,
		obj_t BgL_endz00_74)
	{
		{	/* Unsafe/pregexp.scm 763 */
			if (STRINGP(BgL_patz00_71))
				{	/* Unsafe/pregexp.scm 766 */
					BgL_patz00_71 = BGl_z52pregexpz52zz__regexpz00(BgL_patz00_71);
				}
			else
				{	/* Unsafe/pregexp.scm 767 */
					bool_t BgL_test3328z00_7053;

					{	/* Unsafe/pregexp.scm 767 */
						bool_t BgL_res2736z00_4026;

						BgL_res2736z00_4026 = BGL_REGEXPP(BgL_patz00_71);
						BgL_test3328z00_7053 = BgL_res2736z00_4026;
					}
					if (BgL_test3328z00_7053)
						{	/* Unsafe/pregexp.scm 767 */
							BgL_patz00_71 = BGL_REGEXP_PREG(BgL_patz00_71);
						}
					else
						{	/* Unsafe/pregexp.scm 767 */
							if (PAIRP(BgL_patz00_71))
								{	/* Unsafe/pregexp.scm 768 */
									BTRUE;
								}
							else
								{	/* Unsafe/pregexp.scm 769 */
									obj_t BgL_list1939z00_2106;

									{	/* Unsafe/pregexp.scm 769 */
										obj_t BgL_arg1940z00_2107;

										BgL_arg1940z00_2107 = MAKE_YOUNG_PAIR(BgL_patz00_71, BNIL);
										BgL_list1939z00_2106 =
											MAKE_YOUNG_PAIR(BGl_symbol3017z00zz__regexpz00,
											BgL_arg1940z00_2107);
									}
									BGl_errorz00zz__errorz00(BGl_string2910z00zz__regexpz00,
										BGl_symbol3019z00zz__regexpz00, CAR(BgL_list1939z00_2106));
								}
						}
				}
			{	/* Unsafe/pregexp.scm 772 */
				long BgL_strzd2lenzd2_2108;

				BgL_strzd2lenzd2_2108 = STRING_LENGTH(BgL_strz00_72);
				{	/* Unsafe/pregexp.scm 773 */

					{
						obj_t BgL_iz00_2111;

						BgL_iz00_2111 = BgL_begz00_73;
					BgL_zc3z04anonymousza31941ze3z87_2112:
						if (((long) CINT(BgL_iz00_2111) <= (long) CINT(BgL_endz00_74)))
							{	/* Unsafe/pregexp.scm 782 */
								obj_t BgL__ortest_1120z00_2114;

								BgL__ortest_1120z00_2114 =
									BGl_pregexpzd2matchzd2positionszd2auxzd2zz__regexpz00
									(BgL_patz00_71, BgL_strz00_72, BgL_strzd2lenzd2_2108,
									BgL_begz00_73, BgL_endz00_74, BgL_iz00_2111);
								if (CBOOL(BgL__ortest_1120z00_2114))
									{	/* Unsafe/pregexp.scm 782 */
										return BgL__ortest_1120z00_2114;
									}
								else
									{	/* Unsafe/pregexp.scm 784 */
										long BgL_arg1942z00_2115;

										BgL_arg1942z00_2115 =
											((long) CINT(BgL_iz00_2111) + ((long) 1));
										{
											obj_t BgL_iz00_7072;

											BgL_iz00_7072 = BINT(BgL_arg1942z00_2115);
											BgL_iz00_2111 = BgL_iz00_7072;
											goto BgL_zc3z04anonymousza31941ze3z87_2112;
										}
									}
							}
						else
							{	/* Unsafe/pregexp.scm 781 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* pregexp-match-n-positions! */
	BGL_EXPORTED_DEF long
		BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00(obj_t BgL_patz00_77,
		obj_t BgL_strz00_78, obj_t BgL_resz00_79, long BgL_begz00_80,
		long BgL_endz00_81)
	{
		{	/* Unsafe/pregexp.scm 786 */
			{	/* Unsafe/pregexp.scm 789 */
				obj_t BgL_posz00_2117;
				long BgL_lenz00_2118;

				BgL_posz00_2117 =
					BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(BgL_patz00_77,
					BgL_strz00_78, BINT(BgL_begz00_80), BINT(BgL_endz00_81));
				BgL_lenz00_2118 = (VECTOR_LENGTH(BgL_resz00_79) & ~(((long) 1)));
				if (CBOOL(BgL_posz00_2117))
					{
						long BgL_iz00_2120;
						obj_t BgL_posz00_2121;

						BgL_iz00_2120 = ((long) 0);
						BgL_posz00_2121 = BgL_posz00_2117;
					BgL_zc3z04anonymousza31943ze3z87_2122:
						{	/* Unsafe/pregexp.scm 796 */
							bool_t BgL_test3333z00_7082;

							if ((BgL_iz00_2120 == BgL_lenz00_2118))
								{	/* Unsafe/pregexp.scm 796 */
									BgL_test3333z00_7082 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/pregexp.scm 796 */
									BgL_test3333z00_7082 = NULLP(BgL_posz00_2121);
								}
							if (BgL_test3333z00_7082)
								{	/* Unsafe/pregexp.scm 796 */
									return BgL_iz00_2120;
								}
							else
								{	/* Unsafe/pregexp.scm 798 */
									bool_t BgL_test3335z00_7086;

									{	/* Unsafe/pregexp.scm 798 */
										obj_t BgL_tmpz00_7087;

										BgL_tmpz00_7087 = CAR(((obj_t) BgL_posz00_2121));
										BgL_test3335z00_7086 = PAIRP(BgL_tmpz00_7087);
									}
									if (BgL_test3335z00_7086)
										{	/* Unsafe/pregexp.scm 798 */
											{	/* Unsafe/pregexp.scm 799 */
												obj_t BgL_arg1948z00_2127;

												{	/* Unsafe/pregexp.scm 799 */
													obj_t BgL_pairz00_4055;

													BgL_pairz00_4055 = CAR(((obj_t) BgL_posz00_2121));
													BgL_arg1948z00_2127 = CAR(BgL_pairz00_4055);
												}
												VECTOR_SET(BgL_resz00_79, BgL_iz00_2120,
													BgL_arg1948z00_2127);
											}
											{	/* Unsafe/pregexp.scm 800 */
												long BgL_arg1949z00_2128;
												obj_t BgL_arg1951z00_2129;

												BgL_arg1949z00_2128 = (BgL_iz00_2120 + ((long) 1));
												{	/* Unsafe/pregexp.scm 800 */
													obj_t BgL_pairz00_4063;

													BgL_pairz00_4063 = CAR(((obj_t) BgL_posz00_2121));
													BgL_arg1951z00_2129 = CDR(BgL_pairz00_4063);
												}
												VECTOR_SET(BgL_resz00_79, BgL_arg1949z00_2128,
													BgL_arg1951z00_2129);
											}
											{	/* Unsafe/pregexp.scm 801 */
												long BgL_arg1952z00_2130;
												obj_t BgL_arg1953z00_2131;

												BgL_arg1952z00_2130 = (BgL_iz00_2120 + ((long) 2));
												BgL_arg1953z00_2131 = CDR(((obj_t) BgL_posz00_2121));
												{
													obj_t BgL_posz00_7104;
													long BgL_iz00_7103;

													BgL_iz00_7103 = BgL_arg1952z00_2130;
													BgL_posz00_7104 = BgL_arg1953z00_2131;
													BgL_posz00_2121 = BgL_posz00_7104;
													BgL_iz00_2120 = BgL_iz00_7103;
													goto BgL_zc3z04anonymousza31943ze3z87_2122;
												}
											}
										}
									else
										{	/* Unsafe/pregexp.scm 798 */
											VECTOR_SET(BgL_resz00_79, BgL_iz00_2120,
												BINT(((long) -1)));
											VECTOR_SET(BgL_resz00_79,
												(BgL_iz00_2120 + ((long) 1)), BINT(((long) -1)));
											{	/* Unsafe/pregexp.scm 805 */
												long BgL_arg1955z00_2133;
												obj_t BgL_arg1956z00_2134;

												BgL_arg1955z00_2133 = (BgL_iz00_2120 + ((long) 2));
												BgL_arg1956z00_2134 = CDR(((obj_t) BgL_posz00_2121));
												{
													obj_t BgL_posz00_7114;
													long BgL_iz00_7113;

													BgL_iz00_7113 = BgL_arg1955z00_2133;
													BgL_posz00_7114 = BgL_arg1956z00_2134;
													BgL_posz00_2121 = BgL_posz00_7114;
													BgL_iz00_2120 = BgL_iz00_7113;
													goto BgL_zc3z04anonymousza31943ze3z87_2122;
												}
											}
										}
								}
						}
					}
				else
					{	/* Unsafe/pregexp.scm 791 */
						return ((long) -1);
		}}}

	}



/* &pregexp-match-n-positions! */
	obj_t BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00(obj_t
		BgL_envz00_4719, obj_t BgL_patz00_4720, obj_t BgL_strz00_4721,
		obj_t BgL_resz00_4722, obj_t BgL_begz00_4723, obj_t BgL_endz00_4724)
	{
		{	/* Unsafe/pregexp.scm 786 */
			{	/* Unsafe/pregexp.scm 789 */
				long BgL_tmpz00_7115;

				{	/* Unsafe/pregexp.scm 789 */
					long BgL_auxz00_7146;
					long BgL_auxz00_7137;
					obj_t BgL_auxz00_7130;
					obj_t BgL_auxz00_7123;
					obj_t BgL_auxz00_7116;

					{	/* Unsafe/pregexp.scm 789 */
						obj_t BgL_tmpz00_7147;

						if (INTEGERP(BgL_endz00_4724))
							{	/* Unsafe/pregexp.scm 789 */
								BgL_tmpz00_7147 = BgL_endz00_4724;
							}
						else
							{
								obj_t BgL_auxz00_7150;

								BgL_auxz00_7150 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2886z00zz__regexpz00, BINT(((long) 32645)),
									BGl_string3021z00zz__regexpz00,
									BGl_string3023z00zz__regexpz00, BgL_endz00_4724);
								FAILURE(BgL_auxz00_7150, BFALSE, BFALSE);
							}
						BgL_auxz00_7146 = (long) CINT(BgL_tmpz00_7147);
					}
					{	/* Unsafe/pregexp.scm 789 */
						obj_t BgL_tmpz00_7138;

						if (INTEGERP(BgL_begz00_4723))
							{	/* Unsafe/pregexp.scm 789 */
								BgL_tmpz00_7138 = BgL_begz00_4723;
							}
						else
							{
								obj_t BgL_auxz00_7141;

								BgL_auxz00_7141 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2886z00zz__regexpz00, BINT(((long) 32645)),
									BGl_string3021z00zz__regexpz00,
									BGl_string3023z00zz__regexpz00, BgL_begz00_4723);
								FAILURE(BgL_auxz00_7141, BFALSE, BFALSE);
							}
						BgL_auxz00_7137 = (long) CINT(BgL_tmpz00_7138);
					}
					if (VECTORP(BgL_resz00_4722))
						{	/* Unsafe/pregexp.scm 789 */
							BgL_auxz00_7130 = BgL_resz00_4722;
						}
					else
						{
							obj_t BgL_auxz00_7133;

							BgL_auxz00_7133 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
								BINT(((long) 32645)), BGl_string3021z00zz__regexpz00,
								BGl_string3022z00zz__regexpz00, BgL_resz00_4722);
							FAILURE(BgL_auxz00_7133, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_strz00_4721))
						{	/* Unsafe/pregexp.scm 789 */
							BgL_auxz00_7123 = BgL_strz00_4721;
						}
					else
						{
							obj_t BgL_auxz00_7126;

							BgL_auxz00_7126 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
								BINT(((long) 32645)), BGl_string3021z00zz__regexpz00,
								BGl_string3014z00zz__regexpz00, BgL_strz00_4721);
							FAILURE(BgL_auxz00_7126, BFALSE, BFALSE);
						}
					if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_4720))
						{	/* Unsafe/pregexp.scm 789 */
							BgL_auxz00_7116 = BgL_patz00_4720;
						}
					else
						{
							obj_t BgL_auxz00_7119;

							BgL_auxz00_7119 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
								BINT(((long) 32645)), BGl_string3021z00zz__regexpz00,
								BGl_string2888z00zz__regexpz00, BgL_patz00_4720);
							FAILURE(BgL_auxz00_7119, BFALSE, BFALSE);
						}
					BgL_tmpz00_7115 =
						BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00
						(BgL_auxz00_7116, BgL_auxz00_7123, BgL_auxz00_7130, BgL_auxz00_7137,
						BgL_auxz00_7146);
				}
				return BINT(BgL_tmpz00_7115);
			}
		}

	}



/* _pregexp-match */
	obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t BgL_env1199z00_87,
		obj_t BgL_opt1198z00_86)
	{
		{	/* Unsafe/pregexp.scm 807 */
			{	/* Unsafe/pregexp.scm 807 */
				obj_t BgL_patz00_2140;
				obj_t BgL_strz00_2141;

				BgL_patz00_2140 = VECTOR_REF(BgL_opt1198z00_86, ((long) 0));
				BgL_strz00_2141 = VECTOR_REF(BgL_opt1198z00_86, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1198z00_86))
					{
					case ((long) 2):

						{	/* Unsafe/pregexp.scm 808 */
							long BgL_endz00_2146;

							{	/* Unsafe/pregexp.scm 808 */
								obj_t BgL_stringz00_4078;

								if (STRINGP(BgL_strz00_2141))
									{	/* Unsafe/pregexp.scm 808 */
										BgL_stringz00_4078 = BgL_strz00_2141;
									}
								else
									{
										obj_t BgL_auxz00_7161;

										BgL_auxz00_7161 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2886z00zz__regexpz00, BINT(((long) 33192)),
											BGl_string3024z00zz__regexpz00,
											BGl_string3014z00zz__regexpz00, BgL_strz00_2141);
										FAILURE(BgL_auxz00_7161, BFALSE, BFALSE);
									}
								BgL_endz00_2146 = STRING_LENGTH(BgL_stringz00_4078);
							}
							{	/* Unsafe/pregexp.scm 807 */

								{	/* Unsafe/pregexp.scm 807 */
									obj_t BgL_auxz00_7166;

									if (STRINGP(BgL_strz00_2141))
										{	/* Unsafe/pregexp.scm 807 */
											BgL_auxz00_7166 = BgL_strz00_2141;
										}
									else
										{
											obj_t BgL_auxz00_7169;

											BgL_auxz00_7169 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2886z00zz__regexpz00, BINT(((long) 33127)),
												BGl_string3024z00zz__regexpz00,
												BGl_string3014z00zz__regexpz00, BgL_strz00_2141);
											FAILURE(BgL_auxz00_7169, BFALSE, BFALSE);
										}
									return
										BGl_pregexpzd2matchzd2zz__regexpz00(BgL_patz00_2140,
										BgL_auxz00_7166, BINT(((long) 0)), BINT(BgL_endz00_2146));
						}}} break;
					case ((long) 3):

						{	/* Unsafe/pregexp.scm 807 */
							obj_t BgL_begz00_2147;

							BgL_begz00_2147 = VECTOR_REF(BgL_opt1198z00_86, ((long) 2));
							{	/* Unsafe/pregexp.scm 808 */
								long BgL_endz00_2148;

								{	/* Unsafe/pregexp.scm 808 */
									obj_t BgL_stringz00_4080;

									if (STRINGP(BgL_strz00_2141))
										{	/* Unsafe/pregexp.scm 808 */
											BgL_stringz00_4080 = BgL_strz00_2141;
										}
									else
										{
											obj_t BgL_auxz00_7179;

											BgL_auxz00_7179 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2886z00zz__regexpz00, BINT(((long) 33192)),
												BGl_string3024z00zz__regexpz00,
												BGl_string3014z00zz__regexpz00, BgL_strz00_2141);
											FAILURE(BgL_auxz00_7179, BFALSE, BFALSE);
										}
									BgL_endz00_2148 = STRING_LENGTH(BgL_stringz00_4080);
								}
								{	/* Unsafe/pregexp.scm 807 */

									{	/* Unsafe/pregexp.scm 807 */
										obj_t BgL_auxz00_7184;

										if (STRINGP(BgL_strz00_2141))
											{	/* Unsafe/pregexp.scm 807 */
												BgL_auxz00_7184 = BgL_strz00_2141;
											}
										else
											{
												obj_t BgL_auxz00_7187;

												BgL_auxz00_7187 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2886z00zz__regexpz00, BINT(((long) 33127)),
													BGl_string3024z00zz__regexpz00,
													BGl_string3014z00zz__regexpz00, BgL_strz00_2141);
												FAILURE(BgL_auxz00_7187, BFALSE, BFALSE);
											}
										return
											BGl_pregexpzd2matchzd2zz__regexpz00(BgL_patz00_2140,
											BgL_auxz00_7184, BgL_begz00_2147, BINT(BgL_endz00_2148));
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Unsafe/pregexp.scm 807 */
							obj_t BgL_begz00_2149;

							BgL_begz00_2149 = VECTOR_REF(BgL_opt1198z00_86, ((long) 2));
							{	/* Unsafe/pregexp.scm 807 */
								obj_t BgL_endz00_2150;

								BgL_endz00_2150 = VECTOR_REF(BgL_opt1198z00_86, ((long) 3));
								{	/* Unsafe/pregexp.scm 807 */

									{	/* Unsafe/pregexp.scm 807 */
										obj_t BgL_auxz00_7195;

										if (STRINGP(BgL_strz00_2141))
											{	/* Unsafe/pregexp.scm 807 */
												BgL_auxz00_7195 = BgL_strz00_2141;
											}
										else
											{
												obj_t BgL_auxz00_7198;

												BgL_auxz00_7198 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2886z00zz__regexpz00, BINT(((long) 33127)),
													BGl_string3024z00zz__regexpz00,
													BGl_string3014z00zz__regexpz00, BgL_strz00_2141);
												FAILURE(BgL_auxz00_7198, BFALSE, BFALSE);
											}
										return
											BGl_pregexpzd2matchzd2zz__regexpz00(BgL_patz00_2140,
											BgL_auxz00_7195, BgL_begz00_2149, BgL_endz00_2150);
									}
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



/* pregexp-match */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2zz__regexpz00(obj_t
		BgL_patz00_82, obj_t BgL_strz00_83, obj_t BgL_begz00_84,
		obj_t BgL_endz00_85)
	{
		{	/* Unsafe/pregexp.scm 807 */
			{	/* Unsafe/pregexp.scm 809 */
				obj_t BgL_ixzd2prszd2_2151;

				BgL_ixzd2prszd2_2151 =
					BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(BgL_patz00_82,
					BgL_strz00_83, BgL_begz00_84, BgL_endz00_85);
				if (CBOOL(BgL_ixzd2prszd2_2151))
					{	/* Unsafe/pregexp.scm 810 */
						if (NULLP(BgL_ixzd2prszd2_2151))
							{	/* Unsafe/pregexp.scm 811 */
								return BNIL;
							}
						else
							{	/* Unsafe/pregexp.scm 811 */
								obj_t BgL_head1178z00_2155;

								{	/* Unsafe/pregexp.scm 811 */
									obj_t BgL_res2754z00_4083;

									BgL_res2754z00_4083 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1178z00_2155 = BgL_res2754z00_4083;
								}
								{
									obj_t BgL_l1176z00_2157;
									obj_t BgL_tail1179z00_2158;

									BgL_l1176z00_2157 = BgL_ixzd2prszd2_2151;
									BgL_tail1179z00_2158 = BgL_head1178z00_2155;
								BgL_zc3z04anonymousza31962ze3z87_2159:
									if (NULLP(BgL_l1176z00_2157))
										{	/* Unsafe/pregexp.scm 811 */
											return CDR(BgL_head1178z00_2155);
										}
									else
										{	/* Unsafe/pregexp.scm 811 */
											obj_t BgL_newtail1180z00_2161;

											{	/* Unsafe/pregexp.scm 811 */
												obj_t BgL_arg1965z00_2163;

												{	/* Unsafe/pregexp.scm 811 */
													obj_t BgL_ixzd2przd2_2164;

													BgL_ixzd2przd2_2164 =
														CAR(((obj_t) BgL_l1176z00_2157));
													if (CBOOL(BgL_ixzd2przd2_2164))
														{	/* Unsafe/pregexp.scm 814 */
															obj_t BgL_arg1966z00_2166;
															obj_t BgL_arg1967z00_2167;

															BgL_arg1966z00_2166 =
																CAR(((obj_t) BgL_ixzd2przd2_2164));
															BgL_arg1967z00_2167 =
																CDR(((obj_t) BgL_ixzd2przd2_2164));
															BgL_arg1965z00_2163 =
																c_substring(BgL_strz00_83,
																(long) CINT(BgL_arg1966z00_2166),
																(long) CINT(BgL_arg1967z00_2167));
														}
													else
														{	/* Unsafe/pregexp.scm 813 */
															BgL_arg1965z00_2163 = BFALSE;
														}
												}
												{	/* Unsafe/pregexp.scm 811 */
													obj_t BgL_res2757z00_4093;

													BgL_res2757z00_4093 =
														MAKE_YOUNG_PAIR(BgL_arg1965z00_2163, BNIL);
													BgL_newtail1180z00_2161 = BgL_res2757z00_4093;
												}
											}
											SET_CDR(BgL_tail1179z00_2158, BgL_newtail1180z00_2161);
											{	/* Unsafe/pregexp.scm 811 */
												obj_t BgL_arg1964z00_2162;

												BgL_arg1964z00_2162 = CDR(((obj_t) BgL_l1176z00_2157));
												{
													obj_t BgL_tail1179z00_7230;
													obj_t BgL_l1176z00_7229;

													BgL_l1176z00_7229 = BgL_arg1964z00_2162;
													BgL_tail1179z00_7230 = BgL_newtail1180z00_2161;
													BgL_tail1179z00_2158 = BgL_tail1179z00_7230;
													BgL_l1176z00_2157 = BgL_l1176z00_7229;
													goto BgL_zc3z04anonymousza31962ze3z87_2159;
												}
											}
										}
								}
							}
					}
				else
					{	/* Unsafe/pregexp.scm 810 */
						return BFALSE;
					}
			}
		}

	}



/* pregexp-split */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t
		BgL_patz00_88, obj_t BgL_strz00_89)
	{
		{	/* Unsafe/pregexp.scm 817 */
			{	/* Unsafe/pregexp.scm 820 */
				long BgL_nz00_2169;

				BgL_nz00_2169 = STRING_LENGTH(BgL_strz00_89);
				{
					obj_t BgL_iz00_2172;
					obj_t BgL_rz00_2173;
					bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174;

					BgL_iz00_2172 = BINT(((long) 0));
					BgL_rz00_2173 = BNIL;
					BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174 = ((bool_t) 0);
				BgL_zc3z04anonymousza31968ze3z87_2175:
					if (((long) CINT(BgL_iz00_2172) >= BgL_nz00_2169))
						{	/* Unsafe/pregexp.scm 822 */
							return BGl_pregexpzd2reversez12zc0zz__regexpz00(BgL_rz00_2173);
						}
					else
						{	/* Unsafe/pregexp.scm 823 */
							obj_t BgL_g1125z00_2177;

							BgL_g1125z00_2177 =
								BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(BgL_patz00_88,
								BgL_strz00_89, BgL_iz00_2172, BINT(BgL_nz00_2169));
							if (CBOOL(BgL_g1125z00_2177))
								{	/* Unsafe/pregexp.scm 826 */
									obj_t BgL_jkz00_2180;

									BgL_jkz00_2180 = CAR(((obj_t) BgL_g1125z00_2177));
									{	/* Unsafe/pregexp.scm 827 */
										obj_t BgL_jz00_2181;
										obj_t BgL_kz00_2182;

										BgL_jz00_2181 = CAR(((obj_t) BgL_jkz00_2180));
										BgL_kz00_2182 = CDR(((obj_t) BgL_jkz00_2180));
										if (
											((long) CINT(BgL_jz00_2181) ==
												(long) CINT(BgL_kz00_2182)))
											{	/* Unsafe/pregexp.scm 831 */
												long BgL_arg1971z00_2184;
												obj_t BgL_arg1972z00_2185;

												BgL_arg1971z00_2184 =
													((long) CINT(BgL_kz00_2182) + ((long) 1));
												BgL_arg1972z00_2185 =
													MAKE_YOUNG_PAIR(c_substring(BgL_strz00_89,
														(long) CINT(BgL_iz00_2172),
														((long) CINT(BgL_jz00_2181) + ((long) 1))),
													BgL_rz00_2173);
												{
													bool_t
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7260;
													obj_t BgL_rz00_7259;
													obj_t BgL_iz00_7257;

													BgL_iz00_7257 = BINT(BgL_arg1971z00_2184);
													BgL_rz00_7259 = BgL_arg1972z00_2185;
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7260
														= ((bool_t) 1);
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174
														=
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7260;
													BgL_rz00_2173 = BgL_rz00_7259;
													BgL_iz00_2172 = BgL_iz00_7257;
													goto BgL_zc3z04anonymousza31968ze3z87_2175;
												}
											}
										else
											{	/* Unsafe/pregexp.scm 833 */
												bool_t BgL_test3353z00_7261;

												if (
													((long) CINT(BgL_jz00_2181) ==
														(long) CINT(BgL_iz00_2172)))
													{	/* Unsafe/pregexp.scm 833 */
														BgL_test3353z00_7261 =
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174;
													}
												else
													{	/* Unsafe/pregexp.scm 833 */
														BgL_test3353z00_7261 = ((bool_t) 0);
													}
												if (BgL_test3353z00_7261)
													{
														bool_t
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7267;
														obj_t BgL_iz00_7266;

														BgL_iz00_7266 = BgL_kz00_2182;
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7267
															= ((bool_t) 0);
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174
															=
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7267;
														BgL_iz00_2172 = BgL_iz00_7266;
														goto BgL_zc3z04anonymousza31968ze3z87_2175;
													}
												else
													{	/* Unsafe/pregexp.scm 837 */
														obj_t BgL_arg1977z00_2190;

														BgL_arg1977z00_2190 =
															MAKE_YOUNG_PAIR(c_substring(BgL_strz00_89,
																(long) CINT(BgL_iz00_2172),
																(long) CINT(BgL_jz00_2181)), BgL_rz00_2173);
														{
															bool_t
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7274;
															obj_t BgL_rz00_7273;
															obj_t BgL_iz00_7272;

															BgL_iz00_7272 = BgL_kz00_2182;
															BgL_rz00_7273 = BgL_arg1977z00_2190;
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7274
																= ((bool_t) 0);
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174
																=
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7274;
															BgL_rz00_2173 = BgL_rz00_7273;
															BgL_iz00_2172 = BgL_iz00_7272;
															goto BgL_zc3z04anonymousza31968ze3z87_2175;
														}
													}
											}
									}
								}
							else
								{	/* Unsafe/pregexp.scm 838 */
									obj_t BgL_arg1980z00_2193;

									BgL_arg1980z00_2193 =
										MAKE_YOUNG_PAIR(c_substring(BgL_strz00_89,
											(long) CINT(BgL_iz00_2172), BgL_nz00_2169),
										BgL_rz00_2173);
									{
										bool_t
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7281;
										obj_t BgL_rz00_7280;
										obj_t BgL_iz00_7278;

										BgL_iz00_7278 = BINT(BgL_nz00_2169);
										BgL_rz00_7280 = BgL_arg1980z00_2193;
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7281 =
											((bool_t) 0);
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_2174 =
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_7281;
										BgL_rz00_2173 = BgL_rz00_7280;
										BgL_iz00_2172 = BgL_iz00_7278;
										goto BgL_zc3z04anonymousza31968ze3z87_2175;
									}
								}
						}
				}
			}
		}

	}



/* &pregexp-split */
	obj_t BGl_z62pregexpzd2splitzb0zz__regexpz00(obj_t BgL_envz00_4725,
		obj_t BgL_patz00_4726, obj_t BgL_strz00_4727)
	{
		{	/* Unsafe/pregexp.scm 817 */
			{	/* Unsafe/pregexp.scm 820 */
				obj_t BgL_auxz00_7283;

				if (STRINGP(BgL_strz00_4727))
					{	/* Unsafe/pregexp.scm 820 */
						BgL_auxz00_7283 = BgL_strz00_4727;
					}
				else
					{
						obj_t BgL_auxz00_7286;

						BgL_auxz00_7286 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 33554)), BGl_string3025z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_strz00_4727);
						FAILURE(BgL_auxz00_7286, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2splitzd2zz__regexpz00(BgL_patz00_4726, BgL_auxz00_7283);
			}
		}

	}



/* pregexp-replace */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replacezd2zz__regexpz00(obj_t
		BgL_patz00_90, obj_t BgL_strz00_91, obj_t BgL_insz00_92)
	{
		{	/* Unsafe/pregexp.scm 840 */
			{	/* Unsafe/pregexp.scm 842 */
				long BgL_nz00_2196;

				BgL_nz00_2196 = STRING_LENGTH(BgL_strz00_91);
				{	/* Unsafe/pregexp.scm 842 */
					obj_t BgL_ppz00_2197;

					BgL_ppz00_2197 =
						BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(BgL_patz00_90,
						BgL_strz00_91, BINT(((long) 0)), BINT(BgL_nz00_2196));
					{	/* Unsafe/pregexp.scm 843 */

						if (CBOOL(BgL_ppz00_2197))
							{	/* Unsafe/pregexp.scm 845 */
								long BgL_inszd2lenzd2_2198;
								obj_t BgL_mzd2izd2_2199;
								obj_t BgL_mzd2nzd2_2200;

								BgL_inszd2lenzd2_2198 = STRING_LENGTH(BgL_insz00_92);
								{	/* Unsafe/pregexp.scm 846 */
									obj_t BgL_pairz00_4133;

									BgL_pairz00_4133 = CAR(((obj_t) BgL_ppz00_2197));
									BgL_mzd2izd2_2199 = CAR(BgL_pairz00_4133);
								}
								{	/* Unsafe/pregexp.scm 847 */
									obj_t BgL_pairz00_4137;

									BgL_pairz00_4137 = CAR(((obj_t) BgL_ppz00_2197));
									BgL_mzd2nzd2_2200 = CDR(BgL_pairz00_4137);
								}
								return
									string_append_3(c_substring(BgL_strz00_91, ((long) 0),
										(long) CINT(BgL_mzd2izd2_2199)),
									BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_91,
										BgL_insz00_92, BgL_inszd2lenzd2_2198, BgL_ppz00_2197),
									c_substring(BgL_strz00_91, (long) CINT(BgL_mzd2nzd2_2200),
										BgL_nz00_2196));
							}
						else
							{	/* Unsafe/pregexp.scm 844 */
								return BgL_strz00_91;
							}
					}
				}
			}
		}

	}



/* &pregexp-replace */
	obj_t BGl_z62pregexpzd2replacezb0zz__regexpz00(obj_t BgL_envz00_4728,
		obj_t BgL_patz00_4729, obj_t BgL_strz00_4730, obj_t BgL_insz00_4731)
	{
		{	/* Unsafe/pregexp.scm 840 */
			{	/* Unsafe/pregexp.scm 842 */
				obj_t BgL_auxz00_7317;
				obj_t BgL_auxz00_7310;

				if (STRINGP(BgL_insz00_4731))
					{	/* Unsafe/pregexp.scm 842 */
						BgL_auxz00_7317 = BgL_insz00_4731;
					}
				else
					{
						obj_t BgL_auxz00_7320;

						BgL_auxz00_7320 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 34607)), BGl_string3026z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_insz00_4731);
						FAILURE(BgL_auxz00_7320, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_4730))
					{	/* Unsafe/pregexp.scm 842 */
						BgL_auxz00_7310 = BgL_strz00_4730;
					}
				else
					{
						obj_t BgL_auxz00_7313;

						BgL_auxz00_7313 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 34607)), BGl_string3026z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_strz00_4730);
						FAILURE(BgL_auxz00_7313, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replacezd2zz__regexpz00(BgL_patz00_4729,
					BgL_auxz00_7310, BgL_auxz00_7317);
			}
		}

	}



/* pregexp-replace* */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t
		BgL_patz00_93, obj_t BgL_strz00_94, obj_t BgL_insz00_95)
	{
		{	/* Unsafe/pregexp.scm 853 */
			{	/* Unsafe/pregexp.scm 857 */
				obj_t BgL_patz00_2204;
				long BgL_nz00_2205;
				long BgL_inszd2lenzd2_2206;

				if (STRINGP(BgL_patz00_93))
					{	/* Unsafe/pregexp.scm 857 */
						BgL_patz00_2204 = BGl_z52pregexpz52zz__regexpz00(BgL_patz00_93);
					}
				else
					{	/* Unsafe/pregexp.scm 857 */
						BgL_patz00_2204 = BgL_patz00_93;
					}
				BgL_nz00_2205 = STRING_LENGTH(BgL_strz00_94);
				BgL_inszd2lenzd2_2206 = STRING_LENGTH(BgL_insz00_95);
				{
					obj_t BgL_iz00_2208;
					obj_t BgL_rz00_2209;

					BgL_iz00_2208 = BINT(((long) 0));
					BgL_rz00_2209 = BGl_string3012z00zz__regexpz00;
				BgL_zc3z04anonymousza31985ze3z87_2210:
					if (((long) CINT(BgL_iz00_2208) >= BgL_nz00_2205))
						{	/* Unsafe/pregexp.scm 863 */
							return BgL_rz00_2209;
						}
					else
						{	/* Unsafe/pregexp.scm 864 */
							obj_t BgL_ppz00_2212;

							BgL_ppz00_2212 =
								BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(BgL_patz00_2204,
								BgL_strz00_94, BgL_iz00_2208, BINT(BgL_nz00_2205));
							if (CBOOL(BgL_ppz00_2212))
								{	/* Unsafe/pregexp.scm 875 */
									obj_t BgL_arg1987z00_2213;
									obj_t BgL_arg1988z00_2214;

									{	/* Unsafe/pregexp.scm 875 */
										obj_t BgL_pairz00_4156;

										BgL_pairz00_4156 = CAR(((obj_t) BgL_ppz00_2212));
										BgL_arg1987z00_2213 = CDR(BgL_pairz00_4156);
									}
									{	/* Unsafe/pregexp.scm 878 */
										obj_t BgL_arg1989z00_2215;
										obj_t BgL_arg1990z00_2216;

										{	/* Unsafe/pregexp.scm 878 */
											obj_t BgL_arg1991z00_2217;

											{	/* Unsafe/pregexp.scm 878 */
												obj_t BgL_pairz00_4160;

												BgL_pairz00_4160 = CAR(((obj_t) BgL_ppz00_2212));
												BgL_arg1991z00_2217 = CAR(BgL_pairz00_4160);
											}
											BgL_arg1989z00_2215 =
												c_substring(BgL_strz00_94,
												(long) CINT(BgL_iz00_2208),
												(long) CINT(BgL_arg1991z00_2217));
										}
										BgL_arg1990z00_2216 =
											BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_94,
											BgL_insz00_95, BgL_inszd2lenzd2_2206, BgL_ppz00_2212);
										BgL_arg1988z00_2214 =
											string_append_3(BgL_rz00_2209, BgL_arg1989z00_2215,
											BgL_arg1990z00_2216);
									}
									{
										obj_t BgL_rz00_7349;
										obj_t BgL_iz00_7348;

										BgL_iz00_7348 = BgL_arg1987z00_2213;
										BgL_rz00_7349 = BgL_arg1988z00_2214;
										BgL_rz00_2209 = BgL_rz00_7349;
										BgL_iz00_2208 = BgL_iz00_7348;
										goto BgL_zc3z04anonymousza31985ze3z87_2210;
									}
								}
							else
								{	/* Unsafe/pregexp.scm 865 */
									if (((long) CINT(BgL_iz00_2208) == ((long) 0)))
										{	/* Unsafe/pregexp.scm 866 */
											return BgL_strz00_94;
										}
									else
										{	/* Unsafe/pregexp.scm 866 */
											return
												string_append(BgL_rz00_2209,
												c_substring(BgL_strz00_94,
													(long) CINT(BgL_iz00_2208), BgL_nz00_2205));
		}}}}}}

	}



/* &pregexp-replace* */
	obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t BgL_envz00_4732,
		obj_t BgL_patz00_4733, obj_t BgL_strz00_4734, obj_t BgL_insz00_4735)
	{
		{	/* Unsafe/pregexp.scm 853 */
			{	/* Unsafe/pregexp.scm 857 */
				obj_t BgL_auxz00_7364;
				obj_t BgL_auxz00_7357;

				if (STRINGP(BgL_insz00_4735))
					{	/* Unsafe/pregexp.scm 857 */
						BgL_auxz00_7364 = BgL_insz00_4735;
					}
				else
					{
						obj_t BgL_auxz00_7367;

						BgL_auxz00_7367 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 35108)), BGl_string3027z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_insz00_4735);
						FAILURE(BgL_auxz00_7367, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_4734))
					{	/* Unsafe/pregexp.scm 857 */
						BgL_auxz00_7357 = BgL_strz00_4734;
					}
				else
					{
						obj_t BgL_auxz00_7360;

						BgL_auxz00_7360 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 35108)), BGl_string3027z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_strz00_4734);
						FAILURE(BgL_auxz00_7360, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replaceza2z70zz__regexpz00(BgL_patz00_4733,
					BgL_auxz00_7357, BgL_auxz00_7364);
			}
		}

	}



/* pregexp-quote */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t BgL_sz00_96)
	{
		{	/* Unsafe/pregexp.scm 881 */
			{	/* Unsafe/pregexp.scm 883 */
				long BgL_g1127z00_2222;

				BgL_g1127z00_2222 = (STRING_LENGTH(BgL_sz00_96) - ((long) 1));
				{
					long BgL_iz00_2225;
					obj_t BgL_rz00_2226;

					BgL_iz00_2225 = BgL_g1127z00_2222;
					BgL_rz00_2226 = BNIL;
				BgL_zc3z04anonymousza31995ze3z87_2227:
					if ((BgL_iz00_2225 < ((long) 0)))
						{	/* Unsafe/pregexp.scm 884 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_rz00_2226);
						}
					else
						{	/* Unsafe/pregexp.scm 885 */
							long BgL_arg1997z00_2229;
							obj_t BgL_arg1998z00_2230;

							BgL_arg1997z00_2229 = (BgL_iz00_2225 - ((long) 1));
							{	/* Unsafe/pregexp.scm 886 */
								unsigned char BgL_cz00_2231;

								BgL_cz00_2231 = STRING_REF(BgL_sz00_96, BgL_iz00_2225);
								if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
											(BgL_cz00_2231), BGl_list3028z00zz__regexpz00)))
									{	/* Unsafe/pregexp.scm 889 */
										obj_t BgL_arg2000z00_2233;

										BgL_arg2000z00_2233 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_2231), BgL_rz00_2226);
										BgL_arg1998z00_2230 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')),
											BgL_arg2000z00_2233);
									}
								else
									{	/* Unsafe/pregexp.scm 887 */
										BgL_arg1998z00_2230 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_2231), BgL_rz00_2226);
									}
							}
							{
								obj_t BgL_rz00_7390;
								long BgL_iz00_7389;

								BgL_iz00_7389 = BgL_arg1997z00_2229;
								BgL_rz00_7390 = BgL_arg1998z00_2230;
								BgL_rz00_2226 = BgL_rz00_7390;
								BgL_iz00_2225 = BgL_iz00_7389;
								goto BgL_zc3z04anonymousza31995ze3z87_2227;
							}
						}
				}
			}
		}

	}



/* &pregexp-quote */
	obj_t BGl_z62pregexpzd2quotezb0zz__regexpz00(obj_t BgL_envz00_4736,
		obj_t BgL_sz00_4737)
	{
		{	/* Unsafe/pregexp.scm 881 */
			{	/* Unsafe/pregexp.scm 883 */
				obj_t BgL_auxz00_7391;

				if (STRINGP(BgL_sz00_4737))
					{	/* Unsafe/pregexp.scm 883 */
						BgL_auxz00_7391 = BgL_sz00_4737;
					}
				else
					{
						obj_t BgL_auxz00_7394;

						BgL_auxz00_7394 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2886z00zz__regexpz00,
							BINT(((long) 36161)), BGl_string3029z00zz__regexpz00,
							BGl_string3014z00zz__regexpz00, BgL_sz00_4737);
						FAILURE(BgL_auxz00_7394, BFALSE, BFALSE);
					}
				return BGl_pregexpzd2quotezd2zz__regexpz00(BgL_auxz00_7391);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__regexpz00()
	{
		{	/* Unsafe/pregexp.scm 18 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3030z00zz__regexpz00));
		}

	}

#ifdef __cplusplus
}
#endif
