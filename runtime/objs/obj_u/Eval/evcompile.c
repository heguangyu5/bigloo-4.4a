/*===========================================================================*/
/*   (Eval/evcompile.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evcompile.scm -indent -o objs/obj_u/Eval/evcompile.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol4341z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4343z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4345z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4347z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4349z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_evcompilezd2orzd2zz__evcompilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol4351z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4352z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4354z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4356z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4358z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4362z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_z04variablez04zz__evcompilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol4364z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4366z00zz__evcompilez00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol4373z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4375z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4378z00zz__evcompilez00 = BUNSPEC;
	extern obj_t BGl_schemezd2reportzd2environmentz00zz__evalz00(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32683ze3ze5zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2includedzd2filesza2zd2zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_evcompilezd2letza2z70zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t, bool_t);
	static obj_t BGl_toplevelzd2initzd2zz__evcompilez00();
	static obj_t BGl_evcompilezd2lambdazd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32685ze3ze5zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evcompilez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_classzd2existszd2zz__objectz00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__evcompilez00();
	static obj_t BGl_za2importedzd2filesza2zd2zz__evcompilez00 = BUNSPEC;
	extern bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	static obj_t BGl_evcompilezd2letzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t, bool_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl_evcompilezd2fieldzd2refz00zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t, bool_t, bool_t);
	static obj_t BGl_evcompilezd2applicationzd2zz__evcompilez00(obj_t, obj_t,
		obj_t, bool_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_evcompilezd2beginzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, bool_t, bool_t);
	static obj_t BGl_methodzd2initzd2zz__evcompilez00();
	static obj_t BGl_evcompilezd2letreczd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t, bool_t);
	static obj_t BGl_evcompilezd2fieldzd2setz00zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, bool_t, bool_t);
	extern obj_t BGl_nullzd2environmentzd2zz__evalz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62evcompilez62zz__evcompilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_evcompilezd2letreczd2lambdaz00zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, obj_t, bool_t);
	extern obj_t BGl_evmodulez00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_untypezd2identzd2zz__evcompilez00(obj_t);
	extern obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
	extern obj_t bgl_list_ref(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_evcompilezd2loczd2filenamez00zz__evcompilez00(obj_t);
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_evcompilezd2refzd2zz__evcompilez00(long, obj_t, obj_t, obj_t,
		bool_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_za2afilezd2listza2zd2zz__evcompilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_evcompilez00zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, bool_t, bool_t);
	extern int bgl_debug();
	extern obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evcompilez00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_evcompilezd2setzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_evcompilezd2inline1zd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_evcompilezd2inline2zd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evcompilez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evcompilez00();
	extern obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_evcompilezd2andzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t);
	extern obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t,
		obj_t, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_variablez00zz__evcompilez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62evcompilezd2errorzb0zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze70ze7zz__evcompilez00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__evcompilez00(bool_t, bool_t, bool_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_evcompilezd2cnstzd2zz__evcompilez00(obj_t, obj_t);
	static obj_t BGl_z62evcompilezd2loczd2filenamez62zz__evcompilez00(obj_t,
		obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol4319z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_keyword4360z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4324z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4326z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4328z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_evcompilezd2letreczd2genericz00zz__evcompilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, obj_t, bool_t);
	static obj_t BGl_evcompilezd2compiledzd2applicationz00zz__evcompilez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_tracedzf3ze70z14zz__evcompilez00(obj_t);
	static obj_t BGl_symbol4331z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4335z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4337z00zz__evcompilez00 = BUNSPEC;
	static obj_t BGl_symbol4339z00zz__evcompilez00 = BUNSPEC;
	static obj_t *__cnst;


	extern obj_t BGl_zd2zd2envz00zz__r4_numbers_6_5z00;
	extern obj_t BGl_zd3zd2envz01zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evcompilezd2envzd2zz__evcompilez00,
		BgL_bgl_za762evcompileza762za74384za7, BGl_z62evcompilez62zz__evcompilez00,
		0L, BUNSPEC, 8);
	extern obj_t BGl_ze3zd3fxzd2envze2zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_zc3fxzd2envz11zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evcompilezd2loczd2filenamezd2envzd2zz__evcompilez00,
		BgL_bgl_za762evcompileza7d2l4385z00,
		BGl_z62evcompilezd2loczd2filenamez62zz__evcompilez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_ze3zd2envz31zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evcompilezd2errorzd2envz00zz__evcompilez00,
		BgL_bgl_za762evcompileza7d2e4386z00,
		BGl_z62evcompilezd2errorzb0zz__evcompilez00, 0L, BUNSPEC, 4);
	extern obj_t BGl_zf2zd2envz20zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_STRING(BGl_string4315z00zz__evcompilez00,
		BgL_bgl_string4315za700za7za7_4387za7, "eval", 4);
	      DEFINE_STRING(BGl_string4316z00zz__evcompilez00,
		BgL_bgl_string4316za700za7za7_4388za7,
		"Illegal non toplevel module declaration", 39);
	      DEFINE_STRING(BGl_string4317z00zz__evcompilez00,
		BgL_bgl_string4317za700za7za7_4389za7,
		"Illegal procedure in unlinked byte code", 39);
	      DEFINE_STRING(BGl_string4318z00zz__evcompilez00,
		BgL_bgl_string4318za700za7za7_4390za7, "Illegal form", 12);
	extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	extern obj_t BGl_zd2fxzd2envz00zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_STRING(BGl_string4320z00zz__evcompilez00,
		BgL_bgl_string4320za700za7za7_4391za7, "_", 1);
	      DEFINE_STRING(BGl_string4321z00zz__evcompilez00,
		BgL_bgl_string4321za700za7za7_4392za7,
		"Illegal define form (sealed environment)", 40);
	      DEFINE_STRING(BGl_string4322z00zz__evcompilez00,
		BgL_bgl_string4322za700za7za7_4393za7, "Illegal non toplevel define", 27);
	      DEFINE_STRING(BGl_string4323z00zz__evcompilez00,
		BgL_bgl_string4323za700za7za7_4394za7, "set!", 4);
	      DEFINE_STRING(BGl_string4325z00zz__evcompilez00,
		BgL_bgl_string4325za700za7za7_4395za7, "@", 1);
	      DEFINE_STRING(BGl_string4327z00zz__evcompilez00,
		BgL_bgl_string4327za700za7za7_4396za7, "->", 2);
	      DEFINE_STRING(BGl_string4329z00zz__evcompilez00,
		BgL_bgl_string4329za700za7za7_4397za7, "lambda", 6);
	extern obj_t BGl_zd3fxzd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_STRING(BGl_string4330z00zz__evcompilez00,
		BgL_bgl_string4330za700za7za7_4398za7, "Not a procedure", 15);
	      DEFINE_STRING(BGl_string4332z00zz__evcompilez00,
		BgL_bgl_string4332za700za7za7_4399za7, "dynamic", 7);
	      DEFINE_STRING(BGl_string4333z00zz__evcompilez00,
		BgL_bgl_string4333za700za7za7_4400za7, "variable unbound", 16);
	      DEFINE_STRING(BGl_string4334z00zz__evcompilez00,
		BgL_bgl_string4334za700za7za7_4401za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string4336z00zz__evcompilez00,
		BgL_bgl_string4336za700za7za7_4402za7, "module", 6);
	      DEFINE_STRING(BGl_string4338z00zz__evcompilez00,
		BgL_bgl_string4338za700za7za7_4403za7, "assert", 6);
	      DEFINE_STRING(BGl_string4340z00zz__evcompilez00,
		BgL_bgl_string4340za700za7za7_4404za7, "quote", 5);
	      DEFINE_STRING(BGl_string4342z00zz__evcompilez00,
		BgL_bgl_string4342za700za7za7_4405za7, "if", 2);
	      DEFINE_STRING(BGl_string4344z00zz__evcompilez00,
		BgL_bgl_string4344za700za7za7_4406za7, "or", 2);
	      DEFINE_STRING(BGl_string4346z00zz__evcompilez00,
		BgL_bgl_string4346za700za7za7_4407za7, "and", 3);
	      DEFINE_STRING(BGl_string4348z00zz__evcompilez00,
		BgL_bgl_string4348za700za7za7_4408za7, "begin", 5);
	      DEFINE_STRING(BGl_string4350z00zz__evcompilez00,
		BgL_bgl_string4350za700za7za7_4409za7, "define", 6);
	      DEFINE_STRING(BGl_string4353z00zz__evcompilez00,
		BgL_bgl_string4353za700za7za7_4410za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string4355z00zz__evcompilez00,
		BgL_bgl_string4355za700za7za7_4411za7, "unwind-protect", 14);
	extern obj_t BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_STRING(BGl_string4357z00zz__evcompilez00,
		BgL_bgl_string4357za700za7za7_4412za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string4359z00zz__evcompilez00,
		BgL_bgl_string4359za700za7za7_4413za7, "synchronize", 11);
	extern obj_t BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STRING(BGl_string4361z00zz__evcompilez00,
		BgL_bgl_string4361za700za7za7_4414za7, "prelock", 7);
	      DEFINE_STRING(BGl_string4363z00zz__evcompilez00,
		BgL_bgl_string4363za700za7za7_4415za7, "let", 3);
	      DEFINE_STRING(BGl_string4365z00zz__evcompilez00,
		BgL_bgl_string4365za700za7za7_4416za7, "let*", 4);
	      DEFINE_STRING(BGl_string4367z00zz__evcompilez00,
		BgL_bgl_string4367za700za7za7_4417za7, "letrec", 6);
	      DEFINE_STRING(BGl_string4368z00zz__evcompilez00,
		BgL_bgl_string4368za700za7za7_4418za7,
		"/tmp/4.4a/runtime/Eval/evcompile.scm", 36);
	      DEFINE_STRING(BGl_string4369z00zz__evcompilez00,
		BgL_bgl_string4369za700za7za7_4419za7, "&evcompile", 10);
	      DEFINE_STRING(BGl_string4370z00zz__evcompilez00,
		BgL_bgl_string4370za700za7za7_4420za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string4371z00zz__evcompilez00,
		BgL_bgl_string4371za700za7za7_4421za7, "symbol", 6);
	      DEFINE_STRING(BGl_string4372z00zz__evcompilez00,
		BgL_bgl_string4372za700za7za7_4422za7, "Read-only variable", 18);
	      DEFINE_STRING(BGl_string4374z00zz__evcompilez00,
		BgL_bgl_string4374za700za7za7_4423za7, "(+)", 3);
	      DEFINE_STRING(BGl_string4376z00zz__evcompilez00,
		BgL_bgl_string4376za700za7za7_4424za7, "non-user", 8);
	      DEFINE_STRING(BGl_string4377z00zz__evcompilez00,
		BgL_bgl_string4377za700za7za7_4425za7, "Illegal `set!' expression", 25);
	      DEFINE_STRING(BGl_string4379z00zz__evcompilez00,
		BgL_bgl_string4379za700za7za7_4426za7, "at", 2);
	      DEFINE_STRING(BGl_string4380z00zz__evcompilez00,
		BgL_bgl_string4380za700za7za7_4427za7, "Class \"~a\" has not field \"~a\"",
		29);
	      DEFINE_STRING(BGl_string4381z00zz__evcompilez00,
		BgL_bgl_string4381za700za7za7_4428za7, "Static type not a class", 23);
	      DEFINE_STRING(BGl_string4382z00zz__evcompilez00,
		BgL_bgl_string4382za700za7za7_4429za7, "Field read-only", 15);
	      DEFINE_STRING(BGl_string4383z00zz__evcompilez00,
		BgL_bgl_string4383za700za7za7_4430za7, "__evcompile", 11);
	extern obj_t BGl_ze3fxzd2envz31zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00;
	extern obj_t BGl_za2zd2envz70zz__r4_numbers_6_5z00;
	extern obj_t BGl_zc3zd3fxzd2envzc2zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_zf2fxzd2envz20zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_za2fxzd2envz70zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_zb2zd2envz60zz__r4_numbers_6_5z00;
	extern obj_t BGl_zc3zd2envz11zz__r4_numbers_6_5z00;
	extern obj_t BGl_zb2fxzd2envz60zz__r4_numbers_6_5_fixnumz00;
	extern obj_t BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	extern obj_t BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00;
	extern obj_t BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol4341z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4343z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4345z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4347z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4349z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4351z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4352z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4354z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4356z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4358z00zz__evcompilez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4362z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4364z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4366z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4373z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4375z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4378z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_za2includedzd2filesza2zd2zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_za2importedzd2filesza2zd2zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_za2afilezd2listza2zd2zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4319z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_keyword4360z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4324z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4326z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4328z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4331z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4335z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4337z00zz__evcompilez00));
		     ADD_ROOT((void *) (&BGl_symbol4339z00zz__evcompilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long
		BgL_checksumz00_7285, char *BgL_fromz00_7286)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evcompilez00))
				{
					BGl_requirezd2initializa7ationz75zz__evcompilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evcompilez00();
					BGl_cnstzd2initzd2zz__evcompilez00();
					BGl_importedzd2moduleszd2initz00zz__evcompilez00();
					return BGl_toplevelzd2initzd2zz__evcompilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			BGl_symbol4319z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4320z00zz__evcompilez00);
			BGl_symbol4324z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4325z00zz__evcompilez00);
			BGl_symbol4326z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4327z00zz__evcompilez00);
			BGl_symbol4328z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4329z00zz__evcompilez00);
			BGl_symbol4331z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4332z00zz__evcompilez00);
			BGl_symbol4335z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4336z00zz__evcompilez00);
			BGl_symbol4337z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4338z00zz__evcompilez00);
			BGl_symbol4339z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4340z00zz__evcompilez00);
			BGl_symbol4341z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4342z00zz__evcompilez00);
			BGl_symbol4343z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4344z00zz__evcompilez00);
			BGl_symbol4345z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4346z00zz__evcompilez00);
			BGl_symbol4347z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4348z00zz__evcompilez00);
			BGl_symbol4349z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4350z00zz__evcompilez00);
			BGl_symbol4351z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4323z00zz__evcompilez00);
			BGl_symbol4352z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4353z00zz__evcompilez00);
			BGl_symbol4354z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4355z00zz__evcompilez00);
			BGl_symbol4356z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4357z00zz__evcompilez00);
			BGl_symbol4358z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4359z00zz__evcompilez00);
			BGl_keyword4360z00zz__evcompilez00 =
				bstring_to_keyword(BGl_string4361z00zz__evcompilez00);
			BGl_symbol4362z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4363z00zz__evcompilez00);
			BGl_symbol4364z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4365z00zz__evcompilez00);
			BGl_symbol4366z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4367z00zz__evcompilez00);
			BGl_symbol4373z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4374z00zz__evcompilez00);
			BGl_symbol4375z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4376z00zz__evcompilez00);
			return (BGl_symbol4378z00zz__evcompilez00 =
				bstring_to_symbol(BGl_string4379z00zz__evcompilez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			BGl_za2includedzd2filesza2zd2zz__evcompilez00 = BNIL;
			BGl_za2importedzd2filesza2zd2zz__evcompilez00 = BNIL;
			return (BGl_za2afilezd2listza2zd2zz__evcompilez00 = BNIL, BUNSPEC);
		}

	}



/* evcompile */
	BGL_EXPORTED_DEF obj_t BGl_evcompilez00zz__evcompilez00(obj_t BgL_expz00_5,
		obj_t BgL_envz00_6, obj_t BgL_genvz00_7, obj_t BgL_wherez00_8,
		bool_t BgL_tailz00_9, obj_t BgL_locz00_10, bool_t BgL_lkpz00_11,
		bool_t BgL_toplevelpz00_12)
	{
		{	/* Eval/evcompile.scm 79 */
		BGl_evcompilez00zz__evcompilez00:
			{
				obj_t BgL_funz00_1309;
				obj_t BgL_argsz00_1310;
				obj_t BgL_funz00_1305;
				obj_t BgL_modz00_1306;
				obj_t BgL_argsz00_1307;
				obj_t BgL_funz00_1302;
				obj_t BgL_argsz00_1303;
				obj_t BgL_formalsz00_1290;
				obj_t BgL_bodyz00_1291;
				obj_t BgL_mutexz00_1287;
				obj_t BgL_bodyz00_1288;
				obj_t BgL_mutexz00_1283;
				obj_t BgL_prelockz00_1284;
				obj_t BgL_bodyz00_1285;
				obj_t BgL_handlerz00_1280;
				obj_t BgL_bodyz00_1281;
				obj_t BgL_bodyz00_1277;
				obj_t BgL_protectz00_1278;
				obj_t BgL_escapez00_1274;
				obj_t BgL_bodyz00_1275;
				obj_t BgL_varz00_1270;
				obj_t BgL_valz00_1271;
				obj_t BgL_siz00_1261;
				obj_t BgL_alorsz00_1262;
				obj_t BgL_siz00_1257;
				obj_t BgL_alorsz00_1258;
				obj_t BgL_sinonz00_1259;
				obj_t BgL_lz00_1253;
				obj_t BgL_atomz00_1248;

				if (NULLP(BgL_expz00_5))
					{	/* Eval/evcompile.scm 83 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_10,
							BGl_string4315z00zz__evcompilez00,
							BGl_string4334z00zz__evcompilez00, BNIL);
					}
				else
					{	/* Eval/evcompile.scm 83 */
						if (PAIRP(BgL_expz00_5))
							{	/* Eval/evcompile.scm 83 */
								if ((CAR(BgL_expz00_5) == BGl_symbol4335z00zz__evcompilez00))
									{	/* Eval/evcompile.scm 83 */
										if (BgL_toplevelpz00_12)
											{	/* Eval/evcompile.scm 88 */
												obj_t BgL_formsz00_2519;

												{	/* Eval/evcompile.scm 88 */
													obj_t BgL_arg2484z00_2522;

													{	/* Eval/evcompile.scm 65 */
														obj_t BgL__ortest_1065z00_4145;

														BgL__ortest_1065z00_4145 =
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_expz00_5);
														if (CBOOL(BgL__ortest_1065z00_4145))
															{	/* Eval/evcompile.scm 65 */
																BgL_arg2484z00_2522 = BgL__ortest_1065z00_4145;
															}
														else
															{	/* Eval/evcompile.scm 65 */
																BgL_arg2484z00_2522 = BgL_locz00_10;
															}
													}
													BgL_formsz00_2519 =
														BGl_evmodulez00zz__evmodulez00(BgL_expz00_5,
														BgL_arg2484z00_2522);
												}
												{	/* Eval/evcompile.scm 89 */
													obj_t BgL_arg2482z00_2520;
													obj_t BgL_arg2483z00_2521;

													BgL_arg2482z00_2520 =
														BGl_expandz00zz__expandz00(BgL_formsz00_2519);
													BgL_arg2483z00_2521 = BGL_MODULE();
													{
														bool_t BgL_toplevelpz00_7338;
														bool_t BgL_tailz00_7337;
														obj_t BgL_genvz00_7336;
														obj_t BgL_expz00_7335;

														BgL_expz00_7335 = BgL_arg2482z00_2520;
														BgL_genvz00_7336 = BgL_arg2483z00_2521;
														BgL_tailz00_7337 = ((bool_t) 0);
														BgL_toplevelpz00_7338 = ((bool_t) 1);
														BgL_toplevelpz00_12 = BgL_toplevelpz00_7338;
														BgL_tailz00_9 = BgL_tailz00_7337;
														BgL_genvz00_7 = BgL_genvz00_7336;
														BgL_expz00_5 = BgL_expz00_7335;
														goto BGl_evcompilez00zz__evcompilez00;
													}
												}
											}
										else
											{	/* Eval/evcompile.scm 87 */
												return
													BGl_evcompilezd2errorzd2zz__evcompilez00
													(BgL_locz00_10, BGl_string4315z00zz__evcompilez00,
													BGl_string4316z00zz__evcompilez00, BgL_expz00_5);
											}
									}
								else
									{	/* Eval/evcompile.scm 83 */
										if (
											(CAR(BgL_expz00_5) == BGl_symbol4337z00zz__evcompilez00))
											{	/* Eval/evcompile.scm 83 */
												return BUNSPEC;
											}
										else
											{	/* Eval/evcompile.scm 83 */
												obj_t BgL_cdrzd2397zd2_1320;

												BgL_cdrzd2397zd2_1320 = CDR(BgL_expz00_5);
												if (
													(CAR(BgL_expz00_5) ==
														BGl_symbol4324z00zz__evcompilez00))
													{	/* Eval/evcompile.scm 83 */
														if (PAIRP(BgL_cdrzd2397zd2_1320))
															{	/* Eval/evcompile.scm 83 */
																obj_t BgL_carzd2400zd2_1324;
																obj_t BgL_cdrzd2401zd2_1325;

																BgL_carzd2400zd2_1324 =
																	CAR(BgL_cdrzd2397zd2_1320);
																BgL_cdrzd2401zd2_1325 =
																	CDR(BgL_cdrzd2397zd2_1320);
																if (SYMBOLP(BgL_carzd2400zd2_1324))
																	{	/* Eval/evcompile.scm 83 */
																		if (PAIRP(BgL_cdrzd2401zd2_1325))
																			{	/* Eval/evcompile.scm 83 */
																				obj_t BgL_carzd2405zd2_1328;

																				BgL_carzd2405zd2_1328 =
																					CAR(BgL_cdrzd2401zd2_1325);
																				if (SYMBOLP(BgL_carzd2405zd2_1328))
																					{	/* Eval/evcompile.scm 83 */
																						if (NULLP(CDR
																								(BgL_cdrzd2401zd2_1325)))
																							{	/* Eval/evcompile.scm 83 */
																								return
																									BGl_evcompilezd2refzd2zz__evcompilez00
																									(((long) 2),
																									BGl_z04variablez04zz__evcompilez00
																									(BgL_locz00_10,
																										BgL_carzd2400zd2_1324,
																										BgL_envz00_6, BgL_genvz00_7,
																										BgL_carzd2405zd2_1328),
																									BgL_genvz00_7, BgL_locz00_10,
																									BgL_lkpz00_11);
																							}
																						else
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_carzd2647zd2_1332;

																								BgL_carzd2647zd2_1332 =
																									CAR(BgL_expz00_5);
																								if (PAIRP
																									(BgL_carzd2647zd2_1332))
																									{	/* Eval/evcompile.scm 83 */
																										obj_t BgL_cdrzd2664zd2_1335;

																										BgL_cdrzd2664zd2_1335 =
																											CDR(
																											((obj_t)
																												BgL_carzd2647zd2_1332));
																										if ((CAR(((obj_t)
																														BgL_carzd2647zd2_1332))
																												==
																												BGl_symbol4324z00zz__evcompilez00))
																											{	/* Eval/evcompile.scm 83 */
																												if (PAIRP
																													(BgL_cdrzd2664zd2_1335))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_carzd2667zd2_1339;
																														obj_t
																															BgL_cdrzd2668zd2_1340;
																														BgL_carzd2667zd2_1339
																															=
																															CAR
																															(BgL_cdrzd2664zd2_1335);
																														BgL_cdrzd2668zd2_1340
																															=
																															CDR
																															(BgL_cdrzd2664zd2_1335);
																														if (SYMBOLP
																															(BgL_carzd2667zd2_1339))
																															{	/* Eval/evcompile.scm 83 */
																																if (PAIRP
																																	(BgL_cdrzd2668zd2_1340))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd2673zd2_1343;
																																		BgL_carzd2673zd2_1343
																																			=
																																			CAR
																																			(BgL_cdrzd2668zd2_1340);
																																		if (SYMBOLP
																																			(BgL_carzd2673zd2_1343))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (NULLP(CDR(BgL_cdrzd2668zd2_1340)))
																																					{	/* Eval/evcompile.scm 83 */
																																						BgL_funz00_1305
																																							=
																																							BgL_carzd2667zd2_1339;
																																						BgL_modz00_1306
																																							=
																																							BgL_carzd2673zd2_1343;
																																						BgL_argsz00_1307
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																					BgL_tagzd2278zd2_1308:
																																						{	/* Eval/evcompile.scm 320 */
																																							obj_t
																																								BgL_locz00_2809;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4472;
																																								BgL__ortest_1065z00_4472
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_expz00_5);
																																								if (CBOOL(BgL__ortest_1065z00_4472))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2809
																																											=
																																											BgL__ortest_1065z00_4472;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2809
																																											=
																																											BgL_locz00_10;
																																									}
																																							}
																																							{	/* Eval/evcompile.scm 320 */
																																								obj_t
																																									BgL_actualsz00_2810;
																																								if (NULLP(BgL_argsz00_1307))
																																									{	/* Eval/evcompile.scm 321 */
																																										BgL_actualsz00_2810
																																											=
																																											BNIL;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 321 */
																																										obj_t
																																											BgL_head1147z00_2815;
																																										{	/* Eval/evcompile.scm 321 */
																																											obj_t
																																												BgL_res3812z00_4474;
																																											BgL_res3812z00_4474
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_head1147z00_2815
																																												=
																																												BgL_res3812z00_4474;
																																										}
																																										{
																																											obj_t
																																												BgL_l1145z00_2817;
																																											obj_t
																																												BgL_tail1148z00_2818;
																																											BgL_l1145z00_2817
																																												=
																																												BgL_argsz00_1307;
																																											BgL_tail1148z00_2818
																																												=
																																												BgL_head1147z00_2815;
																																										BgL_zc3z04anonymousza32702ze3z87_2819:
																																											if (NULLP(BgL_l1145z00_2817))
																																												{	/* Eval/evcompile.scm 321 */
																																													BgL_actualsz00_2810
																																														=
																																														CDR
																																														(BgL_head1147z00_2815);
																																												}
																																											else
																																												{	/* Eval/evcompile.scm 321 */
																																													obj_t
																																														BgL_newtail1149z00_2821;
																																													{	/* Eval/evcompile.scm 321 */
																																														obj_t
																																															BgL_arg2705z00_2823;
																																														{	/* Eval/evcompile.scm 321 */
																																															obj_t
																																																BgL_az00_2824;
																																															BgL_az00_2824
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_l1145z00_2817));
																																															BgL_arg2705z00_2823
																																																=
																																																BGl_evcompilez00zz__evcompilez00
																																																(BgL_az00_2824,
																																																BgL_envz00_6,
																																																BgL_genvz00_7,
																																																BgL_wherez00_8,
																																																((bool_t) 0), BgL_locz00_2809, BgL_lkpz00_11, ((bool_t) 0));
																																														}
																																														{	/* Eval/evcompile.scm 321 */
																																															obj_t
																																																BgL_res3814z00_4478;
																																															BgL_res3814z00_4478
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg2705z00_2823,
																																																BNIL);
																																															BgL_newtail1149z00_2821
																																																=
																																																BgL_res3814z00_4478;
																																														}
																																													}
																																													SET_CDR
																																														(BgL_tail1148z00_2818,
																																														BgL_newtail1149z00_2821);
																																													{	/* Eval/evcompile.scm 321 */
																																														obj_t
																																															BgL_arg2704z00_2822;
																																														BgL_arg2704z00_2822
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_l1145z00_2817));
																																														{
																																															obj_t
																																																BgL_tail1148z00_7403;
																																															obj_t
																																																BgL_l1145z00_7402;
																																															BgL_l1145z00_7402
																																																=
																																																BgL_arg2704z00_2822;
																																															BgL_tail1148z00_7403
																																																=
																																																BgL_newtail1149z00_2821;
																																															BgL_tail1148z00_2818
																																																=
																																																BgL_tail1148z00_7403;
																																															BgL_l1145z00_2817
																																																=
																																																BgL_l1145z00_7402;
																																															goto
																																																BgL_zc3z04anonymousza32702ze3z87_2819;
																																														}
																																													}
																																												}
																																										}
																																									}
																																								{	/* Eval/evcompile.scm 321 */
																																									obj_t
																																										BgL_z04procz04_2811;
																																									{	/* Eval/evcompile.scm 794 */
																																										obj_t
																																											BgL_modz00_4481;
																																										BgL_modz00_4481
																																											=
																																											BGl_evalzd2findzd2modulez00zz__evmodulez00
																																											(BgL_modz00_1306);
																																										{	/* Eval/evcompile.scm 794 */
																																											obj_t
																																												BgL_globalz00_4482;
																																											BgL_globalz00_4482
																																												=
																																												BGl_evmodulezd2findzd2globalz00zz__evmodulez00
																																												(BgL_modz00_4481,
																																												BgL_funz00_1305);
																																											{	/* Eval/evcompile.scm 795 */

																																												if (CBOOL(BgL_globalz00_4482))
																																													{	/* Eval/evcompile.scm 796 */
																																														BgL_z04procz04_2811
																																															=
																																															BgL_globalz00_4482;
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 796 */
																																														if ((BgL_genvz00_7 == BgL_modz00_4481))
																																															{	/* Eval/evcompile.scm 797 */
																																																BgL_z04procz04_2811
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BGl_symbol4331z00zz__evcompilez00,
																																																	BgL_funz00_1305);
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 800 */
																																																obj_t
																																																	BgL_arg3196z00_4484;
																																																{	/* Eval/evcompile.scm 800 */
																																																	obj_t
																																																		BgL_arg3197z00_4485;
																																																	{	/* Eval/evcompile.scm 800 */
																																																		obj_t
																																																			BgL_arg3201z00_4486;
																																																		BgL_arg3201z00_4486
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_modz00_1306,
																																																			BNIL);
																																																		BgL_arg3197z00_4485
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_funz00_1305,
																																																			BgL_arg3201z00_4486);
																																																	}
																																																	BgL_arg3196z00_4484
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_symbol4324z00zz__evcompilez00,
																																																		BgL_arg3197z00_4485);
																																																}
																																																BgL_z04procz04_2811
																																																	=
																																																	BGl_evcompilezd2errorzd2zz__evcompilez00
																																																	(BgL_locz00_2809,
																																																	BGl_string4315z00zz__evcompilez00,
																																																	BGl_string4333z00zz__evcompilez00,
																																																	BgL_arg3196z00_4484);
																																															}
																																													}
																																											}
																																										}
																																									}
																																									{	/* Eval/evcompile.scm 324 */

																																										return
																																											BGl_evcompilezd2applicationzd2zz__evcompilez00
																																											(BgL_funz00_1305,
																																											BGl_evcompilezd2refzd2zz__evcompilez00
																																											(((long) 4), BgL_z04procz04_2811, BgL_genvz00_7, BgL_locz00_2809, BgL_lkpz00_11), BgL_actualsz00_2810, BgL_tailz00_9, BgL_locz00_2809);
																																					}}}}}
																																				else
																																					{	/* Eval/evcompile.scm 83 */
																																						BgL_funz00_1309
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																					BgL_tagzd2279zd2_1311:
																																						{	/* Eval/evcompile.scm 331 */
																																							obj_t
																																								BgL_locz00_2826;
																																							obj_t
																																								BgL_actualsz00_2827;
																																							obj_t
																																								BgL_procz00_2828;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4487;
																																								BgL__ortest_1065z00_4487
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_expz00_5);
																																								if (CBOOL(BgL__ortest_1065z00_4487))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2826
																																											=
																																											BgL__ortest_1065z00_4487;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2826
																																											=
																																											BgL_locz00_10;
																																									}
																																							}
																																							if (NULLP(BgL_argsz00_1310))
																																								{	/* Eval/evcompile.scm 332 */
																																									BgL_actualsz00_2827
																																										=
																																										BNIL;
																																								}
																																							else
																																								{	/* Eval/evcompile.scm 332 */
																																									obj_t
																																										BgL_head1152z00_2831;
																																									{	/* Eval/evcompile.scm 332 */
																																										obj_t
																																											BgL_res3816z00_4489;
																																										BgL_res3816z00_4489
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_head1152z00_2831
																																											=
																																											BgL_res3816z00_4489;
																																									}
																																									{
																																										obj_t
																																											BgL_l1150z00_2833;
																																										obj_t
																																											BgL_tail1153z00_2834;
																																										BgL_l1150z00_2833
																																											=
																																											BgL_argsz00_1310;
																																										BgL_tail1153z00_2834
																																											=
																																											BgL_head1152z00_2831;
																																									BgL_zc3z04anonymousza32707ze3z87_2835:
																																										if (NULLP(BgL_l1150z00_2833))
																																											{	/* Eval/evcompile.scm 332 */
																																												BgL_actualsz00_2827
																																													=
																																													CDR
																																													(BgL_head1152z00_2831);
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 332 */
																																												obj_t
																																													BgL_newtail1154z00_2837;
																																												{	/* Eval/evcompile.scm 332 */
																																													obj_t
																																														BgL_arg2710z00_2839;
																																													{	/* Eval/evcompile.scm 332 */
																																														obj_t
																																															BgL_az00_2840;
																																														BgL_az00_2840
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_l1150z00_2833));
																																														BgL_arg2710z00_2839
																																															=
																																															BGl_evcompilez00zz__evcompilez00
																																															(BgL_az00_2840,
																																															BgL_envz00_6,
																																															BgL_genvz00_7,
																																															BgL_wherez00_8,
																																															((bool_t) 0), BgL_locz00_10, BgL_lkpz00_11, ((bool_t) 0));
																																													}
																																													{	/* Eval/evcompile.scm 332 */
																																														obj_t
																																															BgL_res3818z00_4493;
																																														BgL_res3818z00_4493
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg2710z00_2839,
																																															BNIL);
																																														BgL_newtail1154z00_2837
																																															=
																																															BgL_res3818z00_4493;
																																													}
																																												}
																																												SET_CDR
																																													(BgL_tail1153z00_2834,
																																													BgL_newtail1154z00_2837);
																																												{	/* Eval/evcompile.scm 332 */
																																													obj_t
																																														BgL_arg2709z00_2838;
																																													BgL_arg2709z00_2838
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_l1150z00_2833));
																																													{
																																														obj_t
																																															BgL_tail1153z00_7435;
																																														obj_t
																																															BgL_l1150z00_7434;
																																														BgL_l1150z00_7434
																																															=
																																															BgL_arg2709z00_2838;
																																														BgL_tail1153z00_7435
																																															=
																																															BgL_newtail1154z00_2837;
																																														BgL_tail1153z00_2834
																																															=
																																															BgL_tail1153z00_7435;
																																														BgL_l1150z00_2833
																																															=
																																															BgL_l1150z00_7434;
																																														goto
																																															BgL_zc3z04anonymousza32707ze3z87_2835;
																																													}
																																												}
																																											}
																																									}
																																								}
																																							BgL_procz00_2828
																																								=
																																								BGl_evcompilez00zz__evcompilez00
																																								(BgL_funz00_1309,
																																								BgL_envz00_6,
																																								BgL_genvz00_7,
																																								BgL_wherez00_8,
																																								((bool_t) 0), BgL_locz00_10, BgL_lkpz00_11, ((bool_t) 0));
																																							return
																																								BGl_evcompilezd2applicationzd2zz__evcompilez00
																																								(BgL_funz00_1309,
																																								BgL_procz00_2828,
																																								BgL_actualsz00_2827,
																																								BgL_tailz00_9,
																																								BgL_locz00_2826);
																																						}
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_7442;
																																				obj_t
																																					BgL_funz00_7440;
																																				BgL_funz00_7440
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_7442
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_7442;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_7440;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7446;
																																		obj_t
																																			BgL_funz00_7444;
																																		BgL_funz00_7444
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7446
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7446;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7444;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7450;
																																obj_t
																																	BgL_funz00_7448;
																																BgL_funz00_7448
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7450
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7450;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7448;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7454;
																														obj_t
																															BgL_funz00_7452;
																														BgL_funz00_7452 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7454 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7454;
																														BgL_funz00_1309 =
																															BgL_funz00_7452;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7458;
																												obj_t BgL_funz00_7456;

																												BgL_funz00_7456 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7458 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7458;
																												BgL_funz00_1309 =
																													BgL_funz00_7456;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{	/* Eval/evcompile.scm 83 */
																										BgL_funz00_1302 =
																											BgL_carzd2647zd2_1332;
																										BgL_argsz00_1303 =
																											BgL_cdrzd2397zd2_1320;
																									BgL_tagzd2277zd2_1304:
																										{	/* Eval/evcompile.scm 300 */
																											obj_t BgL_locz00_2785;

																											{	/* Eval/evcompile.scm 65 */
																												obj_t
																													BgL__ortest_1065z00_4457;
																												BgL__ortest_1065z00_4457
																													=
																													BGl_getzd2sourcezd2locationz00zz__readerz00
																													(BgL_expz00_5);
																												if (CBOOL
																													(BgL__ortest_1065z00_4457))
																													{	/* Eval/evcompile.scm 65 */
																														BgL_locz00_2785 =
																															BgL__ortest_1065z00_4457;
																													}
																												else
																													{	/* Eval/evcompile.scm 65 */
																														BgL_locz00_2785 =
																															BgL_locz00_10;
																													}
																											}
																											{	/* Eval/evcompile.scm 300 */
																												obj_t
																													BgL_actualsz00_2786;
																												if (NULLP
																													(BgL_argsz00_1303))
																													{	/* Eval/evcompile.scm 301 */
																														BgL_actualsz00_2786
																															= BNIL;
																													}
																												else
																													{	/* Eval/evcompile.scm 301 */
																														obj_t
																															BgL_head1141z00_2798;
																														{	/* Eval/evcompile.scm 301 */
																															obj_t
																																BgL_res3805z00_4459;
																															BgL_res3805z00_4459
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															BgL_head1141z00_2798
																																=
																																BgL_res3805z00_4459;
																														}
																														{
																															obj_t
																																BgL_l1139z00_2800;
																															obj_t
																																BgL_tail1142z00_2801;
																															BgL_l1139z00_2800
																																=
																																BgL_argsz00_1303;
																															BgL_tail1142z00_2801
																																=
																																BgL_head1141z00_2798;
																														BgL_zc3z04anonymousza32696ze3z87_2802:
																															if (NULLP
																																(BgL_l1139z00_2800))
																																{	/* Eval/evcompile.scm 301 */
																																	BgL_actualsz00_2786
																																		=
																																		CDR
																																		(BgL_head1141z00_2798);
																																}
																															else
																																{	/* Eval/evcompile.scm 301 */
																																	obj_t
																																		BgL_newtail1143z00_2804;
																																	{	/* Eval/evcompile.scm 301 */
																																		obj_t
																																			BgL_arg2699z00_2806;
																																		{	/* Eval/evcompile.scm 301 */
																																			obj_t
																																				BgL_az00_2807;
																																			BgL_az00_2807
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_l1139z00_2800));
																																			BgL_arg2699z00_2806
																																				=
																																				BGl_evcompilez00zz__evcompilez00
																																				(BgL_az00_2807,
																																				BgL_envz00_6,
																																				BgL_genvz00_7,
																																				BgL_wherez00_8,
																																				((bool_t) 0), BgL_locz00_2785, BgL_lkpz00_11, ((bool_t) 0));
																																		}
																																		{	/* Eval/evcompile.scm 301 */
																																			obj_t
																																				BgL_res3807z00_4463;
																																			BgL_res3807z00_4463
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg2699z00_2806,
																																				BNIL);
																																			BgL_newtail1143z00_2804
																																				=
																																				BgL_res3807z00_4463;
																																		}
																																	}
																																	SET_CDR
																																		(BgL_tail1142z00_2801,
																																		BgL_newtail1143z00_2804);
																																	{	/* Eval/evcompile.scm 301 */
																																		obj_t
																																			BgL_arg2698z00_2805;
																																		BgL_arg2698z00_2805
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_l1139z00_2800));
																																		{
																																			obj_t
																																				BgL_tail1142z00_7477;
																																			obj_t
																																				BgL_l1139z00_7476;
																																			BgL_l1139z00_7476
																																				=
																																				BgL_arg2698z00_2805;
																																			BgL_tail1142z00_7477
																																				=
																																				BgL_newtail1143z00_2804;
																																			BgL_tail1142z00_2801
																																				=
																																				BgL_tail1142z00_7477;
																																			BgL_l1139z00_2800
																																				=
																																				BgL_l1139z00_7476;
																																			goto
																																				BgL_zc3z04anonymousza32696ze3z87_2802;
																																		}
																																	}
																																}
																														}
																													}
																												{	/* Eval/evcompile.scm 301 */

																													if (SYMBOLP
																														(BgL_funz00_1302))
																														{	/* Eval/evcompile.scm 306 */
																															obj_t
																																BgL_procz00_2788;
																															BgL_procz00_2788 =
																																BGl_variablez00zz__evcompilez00
																																(BgL_locz00_2785,
																																BgL_funz00_1302,
																																BgL_envz00_6,
																																BgL_genvz00_7);
																															{	/* Eval/evcompile.scm 306 */
																																obj_t
																																	BgL_refz00_2789;
																																BgL_refz00_2789
																																	=
																																	BGl_evcompilezd2refzd2zz__evcompilez00
																																	(((long) 3),
																																	BgL_procz00_2788,
																																	BgL_genvz00_7,
																																	BgL_locz00_2785,
																																	BgL_lkpz00_11);
																																{	/* Eval/evcompile.scm 307 */

																																	return
																																		BGl_evcompilezd2applicationzd2zz__evcompilez00
																																		(BgL_funz00_1302,
																																		BgL_refz00_2789,
																																		BgL_actualsz00_2786,
																																		BgL_tailz00_9,
																																		BgL_locz00_2785);
																																}
																															}
																														}
																													else
																														{	/* Eval/evcompile.scm 305 */
																															if (PROCEDUREP
																																(BgL_funz00_1302))
																																{	/* Eval/evcompile.scm 309 */
																																	if (BgL_lkpz00_11)
																																		{	/* Eval/evcompile.scm 310 */
																																			return
																																				BGl_evcompilezd2compiledzd2applicationz00zz__evcompilez00
																																				(BgL_funz00_1302,
																																				BgL_actualsz00_2786,
																																				BgL_locz00_2785);
																																		}
																																	else
																																		{	/* Eval/evcompile.scm 310 */
																																			return
																																				BGl_evcompilezd2errorzd2zz__evcompilez00
																																				(BgL_locz00_2785,
																																				BGl_string4315z00zz__evcompilez00,
																																				BGl_string4317z00zz__evcompilez00,
																																				BgL_funz00_1302);
																																		}
																																}
																															else
																																{	/* Eval/evcompile.scm 309 */
																																	BGl_evcompilezd2errorzd2zz__evcompilez00
																																		(BgL_locz00_2785,
																																		BGl_string4315z00zz__evcompilez00,
																																		BGl_string4330z00zz__evcompilez00,
																																		BgL_funz00_1302);
																																	{	/* Eval/evcompile.scm 318 */
																																		obj_t
																																			BgL_v1144z00_2791;
																																		BgL_v1144z00_2791
																																			=
																																			create_vector
																																			(((long)
																																				3));
																																		VECTOR_SET
																																			(BgL_v1144z00_2791,
																																			((long)
																																				0),
																																			BINT((
																																					(long)
																																					-2)));
																																		VECTOR_SET
																																			(BgL_v1144z00_2791,
																																			((long)
																																				1),
																																			BgL_locz00_2785);
																																		{	/* Eval/evcompile.scm 318 */
																																			obj_t
																																				BgL_arg2691z00_2792;
																																			{	/* Eval/evcompile.scm 318 */
																																				obj_t
																																					BgL_list2692z00_2793;
																																				{	/* Eval/evcompile.scm 318 */
																																					obj_t
																																						BgL_arg2693z00_2794;
																																					{	/* Eval/evcompile.scm 318 */
																																						obj_t
																																							BgL_arg2694z00_2795;
																																						BgL_arg2694z00_2795
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_funz00_1302,
																																							BNIL);
																																						BgL_arg2693z00_2794
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string4330z00zz__evcompilez00,
																																							BgL_arg2694z00_2795);
																																					}
																																					BgL_list2692z00_2793
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string4315z00zz__evcompilez00,
																																						BgL_arg2693z00_2794);
																																				}
																																				BgL_arg2691z00_2792
																																					=
																																					BgL_list2692z00_2793;
																																			}
																																			VECTOR_SET
																																				(BgL_v1144z00_2791,
																																				((long)
																																					2),
																																				BgL_arg2691z00_2792);
																																		}
																																		return
																																			BgL_v1144z00_2791;
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
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_carzd2967zd2_1364;

																						BgL_carzd2967zd2_1364 =
																							CAR(BgL_expz00_5);
																						if (PAIRP(BgL_carzd2967zd2_1364))
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_cdrzd2984zd2_1367;

																								BgL_cdrzd2984zd2_1367 =
																									CDR(
																									((obj_t)
																										BgL_carzd2967zd2_1364));
																								if ((CAR(((obj_t)
																												BgL_carzd2967zd2_1364))
																										==
																										BGl_symbol4324z00zz__evcompilez00))
																									{	/* Eval/evcompile.scm 83 */
																										if (PAIRP
																											(BgL_cdrzd2984zd2_1367))
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd2987zd2_1371;
																												obj_t
																													BgL_cdrzd2988zd2_1372;
																												BgL_carzd2987zd2_1371 =
																													CAR
																													(BgL_cdrzd2984zd2_1367);
																												BgL_cdrzd2988zd2_1372 =
																													CDR
																													(BgL_cdrzd2984zd2_1367);
																												if (SYMBOLP
																													(BgL_carzd2987zd2_1371))
																													{	/* Eval/evcompile.scm 83 */
																														if (PAIRP
																															(BgL_cdrzd2988zd2_1372))
																															{	/* Eval/evcompile.scm 83 */
																																obj_t
																																	BgL_carzd2993zd2_1375;
																																BgL_carzd2993zd2_1375
																																	=
																																	CAR
																																	(BgL_cdrzd2988zd2_1372);
																																if (SYMBOLP
																																	(BgL_carzd2993zd2_1375))
																																	{	/* Eval/evcompile.scm 83 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd2988zd2_1372)))
																																			{
																																				obj_t
																																					BgL_argsz00_7522;
																																				obj_t
																																					BgL_modz00_7521;
																																				obj_t
																																					BgL_funz00_7520;
																																				BgL_funz00_7520
																																					=
																																					BgL_carzd2987zd2_1371;
																																				BgL_modz00_7521
																																					=
																																					BgL_carzd2993zd2_1375;
																																				BgL_argsz00_7522
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1307
																																					=
																																					BgL_argsz00_7522;
																																				BgL_modz00_1306
																																					=
																																					BgL_modz00_7521;
																																				BgL_funz00_1305
																																					=
																																					BgL_funz00_7520;
																																				goto
																																					BgL_tagzd2278zd2_1308;
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_7526;
																																				obj_t
																																					BgL_funz00_7524;
																																				BgL_funz00_7524
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_7526
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_7526;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_7524;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7530;
																																		obj_t
																																			BgL_funz00_7528;
																																		BgL_funz00_7528
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7530
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7530;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7528;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7534;
																																obj_t
																																	BgL_funz00_7532;
																																BgL_funz00_7532
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7534
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7534;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7532;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7538;
																														obj_t
																															BgL_funz00_7536;
																														BgL_funz00_7536 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7538 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7538;
																														BgL_funz00_1309 =
																															BgL_funz00_7536;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7542;
																												obj_t BgL_funz00_7540;

																												BgL_funz00_7540 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7542 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7542;
																												BgL_funz00_1309 =
																													BgL_funz00_7540;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7546;
																										obj_t BgL_funz00_7544;

																										BgL_funz00_7544 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7546 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7546;
																										BgL_funz00_1309 =
																											BgL_funz00_7544;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7549;
																								obj_t BgL_funz00_7548;

																								BgL_funz00_7548 =
																									BgL_carzd2967zd2_1364;
																								BgL_argsz00_7549 =
																									BgL_cdrzd2397zd2_1320;
																								BgL_argsz00_1303 =
																									BgL_argsz00_7549;
																								BgL_funz00_1302 =
																									BgL_funz00_7548;
																								goto BgL_tagzd2277zd2_1304;
																							}
																					}
																			}
																		else
																			{	/* Eval/evcompile.scm 83 */
																				obj_t BgL_carzd21287zd2_1395;

																				BgL_carzd21287zd2_1395 =
																					CAR(BgL_expz00_5);
																				if (PAIRP(BgL_carzd21287zd2_1395))
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_cdrzd21304zd2_1398;

																						BgL_cdrzd21304zd2_1398 =
																							CDR(
																							((obj_t) BgL_carzd21287zd2_1395));
																						if (
																							(CAR(
																									((obj_t)
																										BgL_carzd21287zd2_1395)) ==
																								BGl_symbol4324z00zz__evcompilez00))
																							{	/* Eval/evcompile.scm 83 */
																								if (PAIRP
																									(BgL_cdrzd21304zd2_1398))
																									{	/* Eval/evcompile.scm 83 */
																										obj_t
																											BgL_carzd21307zd2_1402;
																										obj_t
																											BgL_cdrzd21308zd2_1403;
																										BgL_carzd21307zd2_1402 =
																											CAR
																											(BgL_cdrzd21304zd2_1398);
																										BgL_cdrzd21308zd2_1403 =
																											CDR
																											(BgL_cdrzd21304zd2_1398);
																										if (SYMBOLP
																											(BgL_carzd21307zd2_1402))
																											{	/* Eval/evcompile.scm 83 */
																												if (PAIRP
																													(BgL_cdrzd21308zd2_1403))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_carzd21313zd2_1406;
																														BgL_carzd21313zd2_1406
																															=
																															CAR
																															(BgL_cdrzd21308zd2_1403);
																														if (SYMBOLP
																															(BgL_carzd21313zd2_1406))
																															{	/* Eval/evcompile.scm 83 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21308zd2_1403)))
																																	{
																																		obj_t
																																			BgL_argsz00_7575;
																																		obj_t
																																			BgL_modz00_7574;
																																		obj_t
																																			BgL_funz00_7573;
																																		BgL_funz00_7573
																																			=
																																			BgL_carzd21307zd2_1402;
																																		BgL_modz00_7574
																																			=
																																			BgL_carzd21313zd2_1406;
																																		BgL_argsz00_7575
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1307
																																			=
																																			BgL_argsz00_7575;
																																		BgL_modz00_1306
																																			=
																																			BgL_modz00_7574;
																																		BgL_funz00_1305
																																			=
																																			BgL_funz00_7573;
																																		goto
																																			BgL_tagzd2278zd2_1308;
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7579;
																																		obj_t
																																			BgL_funz00_7577;
																																		BgL_funz00_7577
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7579
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7579;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7577;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7583;
																																obj_t
																																	BgL_funz00_7581;
																																BgL_funz00_7581
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7583
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7583;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7581;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7587;
																														obj_t
																															BgL_funz00_7585;
																														BgL_funz00_7585 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7587 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7587;
																														BgL_funz00_1309 =
																															BgL_funz00_7585;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7591;
																												obj_t BgL_funz00_7589;

																												BgL_funz00_7589 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7591 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7591;
																												BgL_funz00_1309 =
																													BgL_funz00_7589;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7595;
																										obj_t BgL_funz00_7593;

																										BgL_funz00_7593 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7595 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7595;
																										BgL_funz00_1309 =
																											BgL_funz00_7593;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7599;
																								obj_t BgL_funz00_7597;

																								BgL_funz00_7597 =
																									CAR(BgL_expz00_5);
																								BgL_argsz00_7599 =
																									CDR(BgL_expz00_5);
																								BgL_argsz00_1310 =
																									BgL_argsz00_7599;
																								BgL_funz00_1309 =
																									BgL_funz00_7597;
																								goto BgL_tagzd2279zd2_1311;
																							}
																					}
																				else
																					{
																						obj_t BgL_argsz00_7602;
																						obj_t BgL_funz00_7601;

																						BgL_funz00_7601 =
																							BgL_carzd21287zd2_1395;
																						BgL_argsz00_7602 =
																							BgL_cdrzd2397zd2_1320;
																						BgL_argsz00_1303 = BgL_argsz00_7602;
																						BgL_funz00_1302 = BgL_funz00_7601;
																						goto BgL_tagzd2277zd2_1304;
																					}
																			}
																	}
																else
																	{	/* Eval/evcompile.scm 83 */
																		obj_t BgL_carzd21607zd2_1426;

																		BgL_carzd21607zd2_1426 = CAR(BgL_expz00_5);
																		if (PAIRP(BgL_carzd21607zd2_1426))
																			{	/* Eval/evcompile.scm 83 */
																				obj_t BgL_cdrzd21624zd2_1429;

																				BgL_cdrzd21624zd2_1429 =
																					CDR(((obj_t) BgL_carzd21607zd2_1426));
																				if (
																					(CAR(
																							((obj_t) BgL_carzd21607zd2_1426))
																						==
																						BGl_symbol4324z00zz__evcompilez00))
																					{	/* Eval/evcompile.scm 83 */
																						if (PAIRP(BgL_cdrzd21624zd2_1429))
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_carzd21627zd2_1433;
																								obj_t BgL_cdrzd21628zd2_1434;

																								BgL_carzd21627zd2_1433 =
																									CAR(BgL_cdrzd21624zd2_1429);
																								BgL_cdrzd21628zd2_1434 =
																									CDR(BgL_cdrzd21624zd2_1429);
																								if (SYMBOLP
																									(BgL_carzd21627zd2_1433))
																									{	/* Eval/evcompile.scm 83 */
																										if (PAIRP
																											(BgL_cdrzd21628zd2_1434))
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd21633zd2_1437;
																												BgL_carzd21633zd2_1437 =
																													CAR
																													(BgL_cdrzd21628zd2_1434);
																												if (SYMBOLP
																													(BgL_carzd21633zd2_1437))
																													{	/* Eval/evcompile.scm 83 */
																														if (NULLP(CDR
																																(BgL_cdrzd21628zd2_1434)))
																															{
																																obj_t
																																	BgL_argsz00_7628;
																																obj_t
																																	BgL_modz00_7627;
																																obj_t
																																	BgL_funz00_7626;
																																BgL_funz00_7626
																																	=
																																	BgL_carzd21627zd2_1433;
																																BgL_modz00_7627
																																	=
																																	BgL_carzd21633zd2_1437;
																																BgL_argsz00_7628
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1307
																																	=
																																	BgL_argsz00_7628;
																																BgL_modz00_1306
																																	=
																																	BgL_modz00_7627;
																																BgL_funz00_1305
																																	=
																																	BgL_funz00_7626;
																																goto
																																	BgL_tagzd2278zd2_1308;
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7632;
																																obj_t
																																	BgL_funz00_7630;
																																BgL_funz00_7630
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7632
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7632;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7630;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7636;
																														obj_t
																															BgL_funz00_7634;
																														BgL_funz00_7634 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7636 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7636;
																														BgL_funz00_1309 =
																															BgL_funz00_7634;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7640;
																												obj_t BgL_funz00_7638;

																												BgL_funz00_7638 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7640 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7640;
																												BgL_funz00_1309 =
																													BgL_funz00_7638;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7644;
																										obj_t BgL_funz00_7642;

																										BgL_funz00_7642 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7644 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7644;
																										BgL_funz00_1309 =
																											BgL_funz00_7642;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7648;
																								obj_t BgL_funz00_7646;

																								BgL_funz00_7646 =
																									CAR(BgL_expz00_5);
																								BgL_argsz00_7648 =
																									CDR(BgL_expz00_5);
																								BgL_argsz00_1310 =
																									BgL_argsz00_7648;
																								BgL_funz00_1309 =
																									BgL_funz00_7646;
																								goto BgL_tagzd2279zd2_1311;
																							}
																					}
																				else
																					{
																						obj_t BgL_argsz00_7652;
																						obj_t BgL_funz00_7650;

																						BgL_funz00_7650 = CAR(BgL_expz00_5);
																						BgL_argsz00_7652 =
																							CDR(BgL_expz00_5);
																						BgL_argsz00_1310 = BgL_argsz00_7652;
																						BgL_funz00_1309 = BgL_funz00_7650;
																						goto BgL_tagzd2279zd2_1311;
																					}
																			}
																		else
																			{
																				obj_t BgL_argsz00_7655;
																				obj_t BgL_funz00_7654;

																				BgL_funz00_7654 =
																					BgL_carzd21607zd2_1426;
																				BgL_argsz00_7655 =
																					BgL_cdrzd2397zd2_1320;
																				BgL_argsz00_1303 = BgL_argsz00_7655;
																				BgL_funz00_1302 = BgL_funz00_7654;
																				goto BgL_tagzd2277zd2_1304;
																			}
																	}
															}
														else
															{	/* Eval/evcompile.scm 83 */
																obj_t BgL_carzd21927zd2_1457;

																BgL_carzd21927zd2_1457 = CAR(BgL_expz00_5);
																if (PAIRP(BgL_carzd21927zd2_1457))
																	{	/* Eval/evcompile.scm 83 */
																		obj_t BgL_cdrzd21944zd2_1460;

																		BgL_cdrzd21944zd2_1460 =
																			CDR(((obj_t) BgL_carzd21927zd2_1457));
																		if (
																			(CAR(
																					((obj_t) BgL_carzd21927zd2_1457)) ==
																				BGl_symbol4324z00zz__evcompilez00))
																			{	/* Eval/evcompile.scm 83 */
																				if (PAIRP(BgL_cdrzd21944zd2_1460))
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_carzd21947zd2_1464;
																						obj_t BgL_cdrzd21948zd2_1465;

																						BgL_carzd21947zd2_1464 =
																							CAR(BgL_cdrzd21944zd2_1460);
																						BgL_cdrzd21948zd2_1465 =
																							CDR(BgL_cdrzd21944zd2_1460);
																						if (SYMBOLP(BgL_carzd21947zd2_1464))
																							{	/* Eval/evcompile.scm 83 */
																								if (PAIRP
																									(BgL_cdrzd21948zd2_1465))
																									{	/* Eval/evcompile.scm 83 */
																										obj_t
																											BgL_carzd21953zd2_1468;
																										BgL_carzd21953zd2_1468 =
																											CAR
																											(BgL_cdrzd21948zd2_1465);
																										if (SYMBOLP
																											(BgL_carzd21953zd2_1468))
																											{	/* Eval/evcompile.scm 83 */
																												if (NULLP(CDR
																														(BgL_cdrzd21948zd2_1465)))
																													{
																														obj_t
																															BgL_argsz00_7681;
																														obj_t
																															BgL_modz00_7680;
																														obj_t
																															BgL_funz00_7679;
																														BgL_funz00_7679 =
																															BgL_carzd21947zd2_1464;
																														BgL_modz00_7680 =
																															BgL_carzd21953zd2_1468;
																														BgL_argsz00_7681 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1307 =
																															BgL_argsz00_7681;
																														BgL_modz00_1306 =
																															BgL_modz00_7680;
																														BgL_funz00_1305 =
																															BgL_funz00_7679;
																														goto
																															BgL_tagzd2278zd2_1308;
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7685;
																														obj_t
																															BgL_funz00_7683;
																														BgL_funz00_7683 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7685 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7685;
																														BgL_funz00_1309 =
																															BgL_funz00_7683;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7689;
																												obj_t BgL_funz00_7687;

																												BgL_funz00_7687 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7689 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7689;
																												BgL_funz00_1309 =
																													BgL_funz00_7687;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7693;
																										obj_t BgL_funz00_7691;

																										BgL_funz00_7691 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7693 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7693;
																										BgL_funz00_1309 =
																											BgL_funz00_7691;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7697;
																								obj_t BgL_funz00_7695;

																								BgL_funz00_7695 =
																									CAR(BgL_expz00_5);
																								BgL_argsz00_7697 =
																									CDR(BgL_expz00_5);
																								BgL_argsz00_1310 =
																									BgL_argsz00_7697;
																								BgL_funz00_1309 =
																									BgL_funz00_7695;
																								goto BgL_tagzd2279zd2_1311;
																							}
																					}
																				else
																					{
																						obj_t BgL_argsz00_7701;
																						obj_t BgL_funz00_7699;

																						BgL_funz00_7699 = CAR(BgL_expz00_5);
																						BgL_argsz00_7701 =
																							CDR(BgL_expz00_5);
																						BgL_argsz00_1310 = BgL_argsz00_7701;
																						BgL_funz00_1309 = BgL_funz00_7699;
																						goto BgL_tagzd2279zd2_1311;
																					}
																			}
																		else
																			{
																				obj_t BgL_argsz00_7705;
																				obj_t BgL_funz00_7703;

																				BgL_funz00_7703 = CAR(BgL_expz00_5);
																				BgL_argsz00_7705 = CDR(BgL_expz00_5);
																				BgL_argsz00_1310 = BgL_argsz00_7705;
																				BgL_funz00_1309 = BgL_funz00_7703;
																				goto BgL_tagzd2279zd2_1311;
																			}
																	}
																else
																	{
																		obj_t BgL_argsz00_7708;
																		obj_t BgL_funz00_7707;

																		BgL_funz00_7707 = BgL_carzd21927zd2_1457;
																		BgL_argsz00_7708 = BgL_cdrzd2397zd2_1320;
																		BgL_argsz00_1303 = BgL_argsz00_7708;
																		BgL_funz00_1302 = BgL_funz00_7707;
																		goto BgL_tagzd2277zd2_1304;
																	}
															}
													}
												else
													{	/* Eval/evcompile.scm 83 */
														if (
															(CAR(BgL_expz00_5) ==
																BGl_symbol4326z00zz__evcompilez00))
															{	/* Eval/evcompile.scm 83 */
																BgL_lz00_1253 = BgL_cdrzd2397zd2_1320;
																{	/* Eval/evcompile.scm 110 */
																	bool_t BgL_test4494z00_7712;

																	if (PAIRP(BgL_lz00_1253))
																		{	/* Eval/evcompile.scm 110 */
																			bool_t BgL_test4496z00_7715;

																			{	/* Eval/evcompile.scm 110 */
																				obj_t BgL_tmpz00_7716;

																				BgL_tmpz00_7716 = CDR(BgL_lz00_1253);
																				BgL_test4496z00_7715 =
																					PAIRP(BgL_tmpz00_7716);
																			}
																			if (BgL_test4496z00_7715)
																				{
																					obj_t BgL_l1133z00_2546;

																					BgL_l1133z00_2546 = BgL_lz00_1253;
																				BgL_zc3z04anonymousza32501ze3z87_2547:
																					if (NULLP(BgL_l1133z00_2546))
																						{	/* Eval/evcompile.scm 110 */
																							BgL_test4494z00_7712 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Eval/evcompile.scm 110 */
																							bool_t BgL_test4498z00_7721;

																							{	/* Eval/evcompile.scm 110 */
																								obj_t BgL_tmpz00_7722;

																								BgL_tmpz00_7722 =
																									CAR(
																									((obj_t) BgL_l1133z00_2546));
																								BgL_test4498z00_7721 =
																									SYMBOLP(BgL_tmpz00_7722);
																							}
																							if (BgL_test4498z00_7721)
																								{
																									obj_t BgL_l1133z00_7726;

																									BgL_l1133z00_7726 =
																										CDR(
																										((obj_t)
																											BgL_l1133z00_2546));
																									BgL_l1133z00_2546 =
																										BgL_l1133z00_7726;
																									goto
																										BgL_zc3z04anonymousza32501ze3z87_2547;
																								}
																							else
																								{	/* Eval/evcompile.scm 110 */
																									BgL_test4494z00_7712 =
																										((bool_t) 0);
																								}
																						}
																				}
																			else
																				{	/* Eval/evcompile.scm 110 */
																					BgL_test4494z00_7712 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Eval/evcompile.scm 110 */
																			BgL_test4494z00_7712 = ((bool_t) 0);
																		}
																	if (BgL_test4494z00_7712)
																		{	/* Eval/evcompile.scm 110 */
																			return
																				BGl_evcompilezd2fieldzd2refz00zz__evcompilez00
																				(BgL_expz00_5, BgL_envz00_6,
																				BgL_genvz00_7, BgL_wherez00_8,
																				BgL_tailz00_9, BgL_locz00_10,
																				BgL_lkpz00_11, BgL_toplevelpz00_12);
																		}
																	else
																		{	/* Eval/evcompile.scm 110 */
																			return
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																				(BgL_locz00_10,
																				BGl_string4315z00zz__evcompilez00,
																				BGl_string4318z00zz__evcompilez00,
																				BgL_expz00_5);
																		}
																}
															}
														else
															{	/* Eval/evcompile.scm 83 */
																if (
																	(CAR(BgL_expz00_5) ==
																		BGl_symbol4339z00zz__evcompilez00))
																	{	/* Eval/evcompile.scm 83 */
																		if (PAIRP(BgL_cdrzd2397zd2_1320))
																			{	/* Eval/evcompile.scm 83 */
																				if (NULLP(CDR(BgL_cdrzd2397zd2_1320)))
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_arg1558z00_1497;

																						BgL_arg1558z00_1497 =
																							CAR(BgL_cdrzd2397zd2_1320);
																						{	/* Eval/evcompile.scm 114 */
																							obj_t BgL_arg2506z00_4661;

																							{	/* Eval/evcompile.scm 65 */
																								obj_t BgL__ortest_1065z00_4662;

																								BgL__ortest_1065z00_4662 =
																									BGl_getzd2sourcezd2locationz00zz__readerz00
																									(BgL_expz00_5);
																								if (CBOOL
																									(BgL__ortest_1065z00_4662))
																									{	/* Eval/evcompile.scm 65 */
																										BgL_arg2506z00_4661 =
																											BgL__ortest_1065z00_4662;
																									}
																								else
																									{	/* Eval/evcompile.scm 65 */
																										BgL_arg2506z00_4661 =
																											BgL_locz00_10;
																									}
																							}
																							return
																								BGl_evcompilezd2cnstzd2zz__evcompilez00
																								(BgL_arg1558z00_1497,
																								BgL_arg2506z00_4661);
																						}
																					}
																				else
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_carzd22256zd2_1498;

																						BgL_carzd22256zd2_1498 =
																							CAR(BgL_expz00_5);
																						if (PAIRP(BgL_carzd22256zd2_1498))
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_cdrzd22273zd2_1501;

																								BgL_cdrzd22273zd2_1501 =
																									CDR(
																									((obj_t)
																										BgL_carzd22256zd2_1498));
																								if ((CAR(((obj_t)
																												BgL_carzd22256zd2_1498))
																										==
																										BGl_symbol4324z00zz__evcompilez00))
																									{	/* Eval/evcompile.scm 83 */
																										if (PAIRP
																											(BgL_cdrzd22273zd2_1501))
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd22276zd2_1505;
																												obj_t
																													BgL_cdrzd22277zd2_1506;
																												BgL_carzd22276zd2_1505 =
																													CAR
																													(BgL_cdrzd22273zd2_1501);
																												BgL_cdrzd22277zd2_1506 =
																													CDR
																													(BgL_cdrzd22273zd2_1501);
																												if (SYMBOLP
																													(BgL_carzd22276zd2_1505))
																													{	/* Eval/evcompile.scm 83 */
																														if (PAIRP
																															(BgL_cdrzd22277zd2_1506))
																															{	/* Eval/evcompile.scm 83 */
																																obj_t
																																	BgL_carzd22282zd2_1509;
																																BgL_carzd22282zd2_1509
																																	=
																																	CAR
																																	(BgL_cdrzd22277zd2_1506);
																																if (SYMBOLP
																																	(BgL_carzd22282zd2_1509))
																																	{	/* Eval/evcompile.scm 83 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22277zd2_1506)))
																																			{
																																				obj_t
																																					BgL_argsz00_7769;
																																				obj_t
																																					BgL_modz00_7768;
																																				obj_t
																																					BgL_funz00_7767;
																																				BgL_funz00_7767
																																					=
																																					BgL_carzd22276zd2_1505;
																																				BgL_modz00_7768
																																					=
																																					BgL_carzd22282zd2_1509;
																																				BgL_argsz00_7769
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1307
																																					=
																																					BgL_argsz00_7769;
																																				BgL_modz00_1306
																																					=
																																					BgL_modz00_7768;
																																				BgL_funz00_1305
																																					=
																																					BgL_funz00_7767;
																																				goto
																																					BgL_tagzd2278zd2_1308;
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_7773;
																																				obj_t
																																					BgL_funz00_7771;
																																				BgL_funz00_7771
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_7773
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_7773;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_7771;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7777;
																																		obj_t
																																			BgL_funz00_7775;
																																		BgL_funz00_7775
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7777
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7777;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7775;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7781;
																																obj_t
																																	BgL_funz00_7779;
																																BgL_funz00_7779
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7781
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7781;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7779;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7785;
																														obj_t
																															BgL_funz00_7783;
																														BgL_funz00_7783 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7785 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7785;
																														BgL_funz00_1309 =
																															BgL_funz00_7783;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7789;
																												obj_t BgL_funz00_7787;

																												BgL_funz00_7787 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7789 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7789;
																												BgL_funz00_1309 =
																													BgL_funz00_7787;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7793;
																										obj_t BgL_funz00_7791;

																										BgL_funz00_7791 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7793 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7793;
																										BgL_funz00_1309 =
																											BgL_funz00_7791;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7796;
																								obj_t BgL_funz00_7795;

																								BgL_funz00_7795 =
																									BgL_carzd22256zd2_1498;
																								BgL_argsz00_7796 =
																									CDR(BgL_expz00_5);
																								BgL_argsz00_1303 =
																									BgL_argsz00_7796;
																								BgL_funz00_1302 =
																									BgL_funz00_7795;
																								goto BgL_tagzd2277zd2_1304;
																							}
																					}
																			}
																		else
																			{	/* Eval/evcompile.scm 83 */
																				obj_t BgL_carzd22537zd2_1530;

																				BgL_carzd22537zd2_1530 =
																					CAR(BgL_expz00_5);
																				if (PAIRP(BgL_carzd22537zd2_1530))
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_cdrzd22554zd2_1533;

																						BgL_cdrzd22554zd2_1533 =
																							CDR(
																							((obj_t) BgL_carzd22537zd2_1530));
																						if (
																							(CAR(
																									((obj_t)
																										BgL_carzd22537zd2_1530)) ==
																								BGl_symbol4324z00zz__evcompilez00))
																							{	/* Eval/evcompile.scm 83 */
																								if (PAIRP
																									(BgL_cdrzd22554zd2_1533))
																									{	/* Eval/evcompile.scm 83 */
																										obj_t
																											BgL_carzd22557zd2_1537;
																										obj_t
																											BgL_cdrzd22558zd2_1538;
																										BgL_carzd22557zd2_1537 =
																											CAR
																											(BgL_cdrzd22554zd2_1533);
																										BgL_cdrzd22558zd2_1538 =
																											CDR
																											(BgL_cdrzd22554zd2_1533);
																										if (SYMBOLP
																											(BgL_carzd22557zd2_1537))
																											{	/* Eval/evcompile.scm 83 */
																												if (PAIRP
																													(BgL_cdrzd22558zd2_1538))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_carzd22563zd2_1541;
																														BgL_carzd22563zd2_1541
																															=
																															CAR
																															(BgL_cdrzd22558zd2_1538);
																														if (SYMBOLP
																															(BgL_carzd22563zd2_1541))
																															{	/* Eval/evcompile.scm 83 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22558zd2_1538)))
																																	{
																																		obj_t
																																			BgL_argsz00_7823;
																																		obj_t
																																			BgL_modz00_7822;
																																		obj_t
																																			BgL_funz00_7821;
																																		BgL_funz00_7821
																																			=
																																			BgL_carzd22557zd2_1537;
																																		BgL_modz00_7822
																																			=
																																			BgL_carzd22563zd2_1541;
																																		BgL_argsz00_7823
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1307
																																			=
																																			BgL_argsz00_7823;
																																		BgL_modz00_1306
																																			=
																																			BgL_modz00_7822;
																																		BgL_funz00_1305
																																			=
																																			BgL_funz00_7821;
																																		goto
																																			BgL_tagzd2278zd2_1308;
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7827;
																																		obj_t
																																			BgL_funz00_7825;
																																		BgL_funz00_7825
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7827
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7827;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7825;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7831;
																																obj_t
																																	BgL_funz00_7829;
																																BgL_funz00_7829
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7831
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7831;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7829;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7835;
																														obj_t
																															BgL_funz00_7833;
																														BgL_funz00_7833 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_7835 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_7835;
																														BgL_funz00_1309 =
																															BgL_funz00_7833;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_7839;
																												obj_t BgL_funz00_7837;

																												BgL_funz00_7837 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_7839 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_7839;
																												BgL_funz00_1309 =
																													BgL_funz00_7837;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_7843;
																										obj_t BgL_funz00_7841;

																										BgL_funz00_7841 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_7843 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_7843;
																										BgL_funz00_1309 =
																											BgL_funz00_7841;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_7847;
																								obj_t BgL_funz00_7845;

																								BgL_funz00_7845 =
																									CAR(BgL_expz00_5);
																								BgL_argsz00_7847 =
																									CDR(BgL_expz00_5);
																								BgL_argsz00_1310 =
																									BgL_argsz00_7847;
																								BgL_funz00_1309 =
																									BgL_funz00_7845;
																								goto BgL_tagzd2279zd2_1311;
																							}
																					}
																				else
																					{
																						obj_t BgL_argsz00_7850;
																						obj_t BgL_funz00_7849;

																						BgL_funz00_7849 =
																							BgL_carzd22537zd2_1530;
																						BgL_argsz00_7850 =
																							CDR(BgL_expz00_5);
																						BgL_argsz00_1303 = BgL_argsz00_7850;
																						BgL_funz00_1302 = BgL_funz00_7849;
																						goto BgL_tagzd2277zd2_1304;
																					}
																			}
																	}
																else
																	{	/* Eval/evcompile.scm 83 */
																		obj_t BgL_cdrzd22640zd2_1561;

																		BgL_cdrzd22640zd2_1561 = CDR(BgL_expz00_5);
																		if (
																			(CAR(BgL_expz00_5) ==
																				BGl_symbol4341z00zz__evcompilez00))
																			{	/* Eval/evcompile.scm 83 */
																				if (PAIRP(BgL_cdrzd22640zd2_1561))
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_cdrzd22645zd2_1565;

																						BgL_cdrzd22645zd2_1565 =
																							CDR(BgL_cdrzd22640zd2_1561);
																						if (PAIRP(BgL_cdrzd22645zd2_1565))
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_cdrzd22650zd2_1567;

																								BgL_cdrzd22650zd2_1567 =
																									CDR(BgL_cdrzd22645zd2_1565);
																								if (PAIRP
																									(BgL_cdrzd22650zd2_1567))
																									{	/* Eval/evcompile.scm 83 */
																										if (NULLP(CDR
																												(BgL_cdrzd22650zd2_1567)))
																											{	/* Eval/evcompile.scm 83 */
																												BgL_siz00_1257 =
																													CAR
																													(BgL_cdrzd22640zd2_1561);
																												BgL_alorsz00_1258 =
																													CAR
																													(BgL_cdrzd22645zd2_1565);
																												BgL_sinonz00_1259 =
																													CAR
																													(BgL_cdrzd22650zd2_1567);
																												{	/* Eval/evcompile.scm 116 */
																													obj_t BgL_locz00_2556;

																													{	/* Eval/evcompile.scm 65 */
																														obj_t
																															BgL__ortest_1065z00_4177;
																														BgL__ortest_1065z00_4177
																															=
																															BGl_getzd2sourcezd2locationz00zz__readerz00
																															(BgL_expz00_5);
																														if (CBOOL
																															(BgL__ortest_1065z00_4177))
																															{	/* Eval/evcompile.scm 65 */
																																BgL_locz00_2556
																																	=
																																	BgL__ortest_1065z00_4177;
																															}
																														else
																															{	/* Eval/evcompile.scm 65 */
																																BgL_locz00_2556
																																	=
																																	BgL_locz00_10;
																															}
																													}
																													{	/* Eval/evcompile.scm 119 */
																														obj_t
																															BgL_arg2508z00_2557;
																														obj_t
																															BgL_arg2512z00_2558;
																														obj_t
																															BgL_arg2515z00_2559;
																														{	/* Eval/evcompile.scm 119 */
																															obj_t
																																BgL_arg2518z00_2560;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4178;
																																BgL__ortest_1065z00_4178
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_siz00_1257);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4178))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2518z00_2560
																																			=
																																			BgL__ortest_1065z00_4178;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2518z00_2560
																																			=
																																			BgL_locz00_2556;
																																	}
																															}
																															BgL_arg2508z00_2557
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BgL_siz00_1257,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																((bool_t) 0),
																																BgL_arg2518z00_2560,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 123 */
																															obj_t
																																BgL_arg2519z00_2561;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4179;
																																BgL__ortest_1065z00_4179
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_alorsz00_1258);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4179))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2519z00_2561
																																			=
																																			BgL__ortest_1065z00_4179;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2519z00_2561
																																			=
																																			BgL_locz00_2556;
																																	}
																															}
																															BgL_arg2512z00_2558
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BgL_alorsz00_1258,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																BgL_tailz00_9,
																																BgL_arg2519z00_2561,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 127 */
																															obj_t
																																BgL_arg2520z00_2562;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4180;
																																BgL__ortest_1065z00_4180
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_sinonz00_1259);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4180))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2520z00_2562
																																			=
																																			BgL__ortest_1065z00_4180;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2520z00_2562
																																			=
																																			BgL_locz00_2556;
																																	}
																															}
																															BgL_arg2515z00_2559
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BgL_sinonz00_1259,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																BgL_tailz00_9,
																																BgL_arg2520z00_2562,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 414 */
																															obj_t
																																BgL_v1165z00_4181;
																															BgL_v1165z00_4181
																																=
																																create_vector((
																																	(long) 5));
																															VECTOR_SET
																																(BgL_v1165z00_4181,
																																((long) 0),
																																BINT(((long)
																																		15)));
																															VECTOR_SET
																																(BgL_v1165z00_4181,
																																((long) 1),
																																BgL_locz00_2556);
																															VECTOR_SET
																																(BgL_v1165z00_4181,
																																((long) 2),
																																BgL_arg2508z00_2557);
																															VECTOR_SET
																																(BgL_v1165z00_4181,
																																((long) 3),
																																BgL_arg2512z00_2558);
																															VECTOR_SET
																																(BgL_v1165z00_4181,
																																((long) 4),
																																BgL_arg2515z00_2559);
																															return
																																BgL_v1165z00_4181;
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd22837zd2_1574;
																												BgL_carzd22837zd2_1574 =
																													CAR(BgL_expz00_5);
																												if (PAIRP
																													(BgL_carzd22837zd2_1574))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_cdrzd22854zd2_1577;
																														BgL_cdrzd22854zd2_1577
																															=
																															CDR(((obj_t)
																																BgL_carzd22837zd2_1574));
																														if ((CAR(((obj_t)
																																		BgL_carzd22837zd2_1574))
																																==
																																BGl_symbol4324z00zz__evcompilez00))
																															{	/* Eval/evcompile.scm 83 */
																																if (PAIRP
																																	(BgL_cdrzd22854zd2_1577))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd22857zd2_1581;
																																		obj_t
																																			BgL_cdrzd22858zd2_1582;
																																		BgL_carzd22857zd2_1581
																																			=
																																			CAR
																																			(BgL_cdrzd22854zd2_1577);
																																		BgL_cdrzd22858zd2_1582
																																			=
																																			CDR
																																			(BgL_cdrzd22854zd2_1577);
																																		if (SYMBOLP
																																			(BgL_carzd22857zd2_1581))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (PAIRP(BgL_cdrzd22858zd2_1582))
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_carzd22863zd2_1585;
																																						BgL_carzd22863zd2_1585
																																							=
																																							CAR
																																							(BgL_cdrzd22858zd2_1582);
																																						if (SYMBOLP(BgL_carzd22863zd2_1585))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (NULLP(CDR(BgL_cdrzd22858zd2_1582)))
																																									{
																																										obj_t
																																											BgL_argsz00_7917;
																																										obj_t
																																											BgL_modz00_7916;
																																										obj_t
																																											BgL_funz00_7915;
																																										BgL_funz00_7915
																																											=
																																											BgL_carzd22857zd2_1581;
																																										BgL_modz00_7916
																																											=
																																											BgL_carzd22863zd2_1585;
																																										BgL_argsz00_7917
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1307
																																											=
																																											BgL_argsz00_7917;
																																										BgL_modz00_1306
																																											=
																																											BgL_modz00_7916;
																																										BgL_funz00_1305
																																											=
																																											BgL_funz00_7915;
																																										goto
																																											BgL_tagzd2278zd2_1308;
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_7921;
																																										obj_t
																																											BgL_funz00_7919;
																																										BgL_funz00_7919
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_7921
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_7921;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_7919;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_7925;
																																								obj_t
																																									BgL_funz00_7923;
																																								BgL_funz00_7923
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_7925
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_7925;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_7923;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_7929;
																																						obj_t
																																							BgL_funz00_7927;
																																						BgL_funz00_7927
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_7929
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_7929;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_7927;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_7933;
																																				obj_t
																																					BgL_funz00_7931;
																																				BgL_funz00_7931
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_7933
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_7933;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_7931;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_7937;
																																		obj_t
																																			BgL_funz00_7935;
																																		BgL_funz00_7935
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_7937
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_7937;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_7935;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_7941;
																																obj_t
																																	BgL_funz00_7939;
																																BgL_funz00_7939
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_7941
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_7941;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_7939;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_7944;
																														obj_t
																															BgL_funz00_7943;
																														BgL_funz00_7943 =
																															BgL_carzd22837zd2_1574;
																														BgL_argsz00_7944 =
																															BgL_cdrzd22640zd2_1561;
																														BgL_argsz00_1303 =
																															BgL_argsz00_7944;
																														BgL_funz00_1302 =
																															BgL_funz00_7943;
																														goto
																															BgL_tagzd2277zd2_1304;
																													}
																											}
																									}
																								else
																									{	/* Eval/evcompile.scm 83 */
																										obj_t
																											BgL_cdrzd22946zd2_1607;
																										BgL_cdrzd22946zd2_1607 =
																											CDR(((obj_t)
																												BgL_cdrzd22640zd2_1561));
																										if (NULLP(CDR(((obj_t)
																														BgL_cdrzd22946zd2_1607))))
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_arg1665z00_1610;
																												obj_t
																													BgL_arg1667z00_1611;
																												BgL_arg1665z00_1610 =
																													CAR(((obj_t)
																														BgL_cdrzd22640zd2_1561));
																												BgL_arg1667z00_1611 =
																													CAR(((obj_t)
																														BgL_cdrzd22946zd2_1607));
																												BgL_siz00_1261 =
																													BgL_arg1665z00_1610;
																												BgL_alorsz00_1262 =
																													BgL_arg1667z00_1611;
																												{	/* Eval/evcompile.scm 131 */
																													obj_t BgL_locz00_2563;

																													{	/* Eval/evcompile.scm 65 */
																														obj_t
																															BgL__ortest_1065z00_4187;
																														BgL__ortest_1065z00_4187
																															=
																															BGl_getzd2sourcezd2locationz00zz__readerz00
																															(BgL_expz00_5);
																														if (CBOOL
																															(BgL__ortest_1065z00_4187))
																															{	/* Eval/evcompile.scm 65 */
																																BgL_locz00_2563
																																	=
																																	BgL__ortest_1065z00_4187;
																															}
																														else
																															{	/* Eval/evcompile.scm 65 */
																																BgL_locz00_2563
																																	=
																																	BgL_locz00_10;
																															}
																													}
																													{	/* Eval/evcompile.scm 134 */
																														obj_t
																															BgL_arg2521z00_2564;
																														obj_t
																															BgL_arg2522z00_2565;
																														obj_t
																															BgL_arg2523z00_2566;
																														{	/* Eval/evcompile.scm 134 */
																															obj_t
																																BgL_arg2525z00_2567;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4188;
																																BgL__ortest_1065z00_4188
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_siz00_1261);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4188))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2525z00_2567
																																			=
																																			BgL__ortest_1065z00_4188;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2525z00_2567
																																			=
																																			BgL_locz00_2563;
																																	}
																															}
																															BgL_arg2521z00_2564
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BgL_siz00_1261,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																((bool_t) 0),
																																BgL_arg2525z00_2567,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 138 */
																															obj_t
																																BgL_arg2526z00_2568;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4189;
																																BgL__ortest_1065z00_4189
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_alorsz00_1262);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4189))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2526z00_2568
																																			=
																																			BgL__ortest_1065z00_4189;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2526z00_2568
																																			=
																																			BgL_locz00_2563;
																																	}
																															}
																															BgL_arg2522z00_2565
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BgL_alorsz00_1262,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																BgL_tailz00_9,
																																BgL_arg2526z00_2568,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 142 */
																															obj_t
																																BgL_arg2527z00_2569;
																															{	/* Eval/evcompile.scm 65 */
																																obj_t
																																	BgL__ortest_1065z00_4190;
																																BgL__ortest_1065z00_4190
																																	=
																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																	(BgL_expz00_5);
																																if (CBOOL
																																	(BgL__ortest_1065z00_4190))
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2527z00_2569
																																			=
																																			BgL__ortest_1065z00_4190;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 65 */
																																		BgL_arg2527z00_2569
																																			=
																																			BgL_locz00_2563;
																																	}
																															}
																															BgL_arg2523z00_2566
																																=
																																BGl_evcompilez00zz__evcompilez00
																																(BFALSE,
																																BgL_envz00_6,
																																BgL_genvz00_7,
																																BgL_wherez00_8,
																																BgL_tailz00_9,
																																BgL_arg2527z00_2569,
																																BgL_lkpz00_11,
																																((bool_t) 0));
																														}
																														{	/* Eval/evcompile.scm 414 */
																															obj_t
																																BgL_v1165z00_4191;
																															BgL_v1165z00_4191
																																=
																																create_vector((
																																	(long) 5));
																															VECTOR_SET
																																(BgL_v1165z00_4191,
																																((long) 0),
																																BINT(((long)
																																		15)));
																															VECTOR_SET
																																(BgL_v1165z00_4191,
																																((long) 1),
																																BgL_locz00_2563);
																															VECTOR_SET
																																(BgL_v1165z00_4191,
																																((long) 2),
																																BgL_arg2521z00_2564);
																															VECTOR_SET
																																(BgL_v1165z00_4191,
																																((long) 3),
																																BgL_arg2522z00_2565);
																															VECTOR_SET
																																(BgL_v1165z00_4191,
																																((long) 4),
																																BgL_arg2523z00_2566);
																															return
																																BgL_v1165z00_4191;
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd23116zd2_1612;
																												BgL_carzd23116zd2_1612 =
																													CAR(BgL_expz00_5);
																												if (PAIRP
																													(BgL_carzd23116zd2_1612))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_cdrzd23133zd2_1615;
																														BgL_cdrzd23133zd2_1615
																															=
																															CDR(((obj_t)
																																BgL_carzd23116zd2_1612));
																														if ((CAR(((obj_t)
																																		BgL_carzd23116zd2_1612))
																																==
																																BGl_symbol4324z00zz__evcompilez00))
																															{	/* Eval/evcompile.scm 83 */
																																if (PAIRP
																																	(BgL_cdrzd23133zd2_1615))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd23136zd2_1619;
																																		obj_t
																																			BgL_cdrzd23137zd2_1620;
																																		BgL_carzd23136zd2_1619
																																			=
																																			CAR
																																			(BgL_cdrzd23133zd2_1615);
																																		BgL_cdrzd23137zd2_1620
																																			=
																																			CDR
																																			(BgL_cdrzd23133zd2_1615);
																																		if (SYMBOLP
																																			(BgL_carzd23136zd2_1619))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (PAIRP(BgL_cdrzd23137zd2_1620))
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_carzd23142zd2_1623;
																																						BgL_carzd23142zd2_1623
																																							=
																																							CAR
																																							(BgL_cdrzd23137zd2_1620);
																																						if (SYMBOLP(BgL_carzd23142zd2_1623))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (NULLP(CDR(BgL_cdrzd23137zd2_1620)))
																																									{
																																										obj_t
																																											BgL_argsz00_8002;
																																										obj_t
																																											BgL_modz00_8001;
																																										obj_t
																																											BgL_funz00_8000;
																																										BgL_funz00_8000
																																											=
																																											BgL_carzd23136zd2_1619;
																																										BgL_modz00_8001
																																											=
																																											BgL_carzd23142zd2_1623;
																																										BgL_argsz00_8002
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1307
																																											=
																																											BgL_argsz00_8002;
																																										BgL_modz00_1306
																																											=
																																											BgL_modz00_8001;
																																										BgL_funz00_1305
																																											=
																																											BgL_funz00_8000;
																																										goto
																																											BgL_tagzd2278zd2_1308;
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8006;
																																										obj_t
																																											BgL_funz00_8004;
																																										BgL_funz00_8004
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8006
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8006;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8004;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8010;
																																								obj_t
																																									BgL_funz00_8008;
																																								BgL_funz00_8008
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8010
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8010;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8008;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8014;
																																						obj_t
																																							BgL_funz00_8012;
																																						BgL_funz00_8012
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8014
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8014;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8012;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8018;
																																				obj_t
																																					BgL_funz00_8016;
																																				BgL_funz00_8016
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_8018
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_8018;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_8016;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_8022;
																																		obj_t
																																			BgL_funz00_8020;
																																		BgL_funz00_8020
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_8022
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_8022;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_8020;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_8026;
																																obj_t
																																	BgL_funz00_8024;
																																BgL_funz00_8024
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_8026
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_8026;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_8024;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_8029;
																														obj_t
																															BgL_funz00_8028;
																														BgL_funz00_8028 =
																															BgL_carzd23116zd2_1612;
																														BgL_argsz00_8029 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1303 =
																															BgL_argsz00_8029;
																														BgL_funz00_1302 =
																															BgL_funz00_8028;
																														goto
																															BgL_tagzd2277zd2_1304;
																													}
																											}
																									}
																							}
																						else
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_carzd23378zd2_1644;

																								BgL_carzd23378zd2_1644 =
																									CAR(BgL_expz00_5);
																								if (PAIRP
																									(BgL_carzd23378zd2_1644))
																									{	/* Eval/evcompile.scm 83 */
																										obj_t
																											BgL_cdrzd23395zd2_1647;
																										BgL_cdrzd23395zd2_1647 =
																											CDR(((obj_t)
																												BgL_carzd23378zd2_1644));
																										if ((CAR(((obj_t)
																														BgL_carzd23378zd2_1644))
																												==
																												BGl_symbol4324z00zz__evcompilez00))
																											{	/* Eval/evcompile.scm 83 */
																												if (PAIRP
																													(BgL_cdrzd23395zd2_1647))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_carzd23398zd2_1651;
																														obj_t
																															BgL_cdrzd23399zd2_1652;
																														BgL_carzd23398zd2_1651
																															=
																															CAR
																															(BgL_cdrzd23395zd2_1647);
																														BgL_cdrzd23399zd2_1652
																															=
																															CDR
																															(BgL_cdrzd23395zd2_1647);
																														if (SYMBOLP
																															(BgL_carzd23398zd2_1651))
																															{	/* Eval/evcompile.scm 83 */
																																if (PAIRP
																																	(BgL_cdrzd23399zd2_1652))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd23404zd2_1655;
																																		BgL_carzd23404zd2_1655
																																			=
																																			CAR
																																			(BgL_cdrzd23399zd2_1652);
																																		if (SYMBOLP
																																			(BgL_carzd23404zd2_1655))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (NULLP(CDR(BgL_cdrzd23399zd2_1652)))
																																					{
																																						obj_t
																																							BgL_argsz00_8056;
																																						obj_t
																																							BgL_modz00_8055;
																																						obj_t
																																							BgL_funz00_8054;
																																						BgL_funz00_8054
																																							=
																																							BgL_carzd23398zd2_1651;
																																						BgL_modz00_8055
																																							=
																																							BgL_carzd23404zd2_1655;
																																						BgL_argsz00_8056
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1307
																																							=
																																							BgL_argsz00_8056;
																																						BgL_modz00_1306
																																							=
																																							BgL_modz00_8055;
																																						BgL_funz00_1305
																																							=
																																							BgL_funz00_8054;
																																						goto
																																							BgL_tagzd2278zd2_1308;
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8060;
																																						obj_t
																																							BgL_funz00_8058;
																																						BgL_funz00_8058
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8060
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8060;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8058;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8064;
																																				obj_t
																																					BgL_funz00_8062;
																																				BgL_funz00_8062
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_8064
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_8064;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_8062;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_8068;
																																		obj_t
																																			BgL_funz00_8066;
																																		BgL_funz00_8066
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_8068
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_8068;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_8066;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_8072;
																																obj_t
																																	BgL_funz00_8070;
																																BgL_funz00_8070
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_8072
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_8072;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_8070;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_8076;
																														obj_t
																															BgL_funz00_8074;
																														BgL_funz00_8074 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_8076 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_8076;
																														BgL_funz00_1309 =
																															BgL_funz00_8074;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_8080;
																												obj_t BgL_funz00_8078;

																												BgL_funz00_8078 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_8080 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_8080;
																												BgL_funz00_1309 =
																													BgL_funz00_8078;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_8083;
																										obj_t BgL_funz00_8082;

																										BgL_funz00_8082 =
																											BgL_carzd23378zd2_1644;
																										BgL_argsz00_8083 =
																											BgL_cdrzd22640zd2_1561;
																										BgL_argsz00_1303 =
																											BgL_argsz00_8083;
																										BgL_funz00_1302 =
																											BgL_funz00_8082;
																										goto BgL_tagzd2277zd2_1304;
																									}
																							}
																					}
																				else
																					{	/* Eval/evcompile.scm 83 */
																						obj_t BgL_carzd23639zd2_1675;

																						BgL_carzd23639zd2_1675 =
																							CAR(BgL_expz00_5);
																						if (PAIRP(BgL_carzd23639zd2_1675))
																							{	/* Eval/evcompile.scm 83 */
																								obj_t BgL_cdrzd23656zd2_1678;

																								BgL_cdrzd23656zd2_1678 =
																									CDR(
																									((obj_t)
																										BgL_carzd23639zd2_1675));
																								if ((CAR(((obj_t)
																												BgL_carzd23639zd2_1675))
																										==
																										BGl_symbol4324z00zz__evcompilez00))
																									{	/* Eval/evcompile.scm 83 */
																										if (PAIRP
																											(BgL_cdrzd23656zd2_1678))
																											{	/* Eval/evcompile.scm 83 */
																												obj_t
																													BgL_carzd23659zd2_1682;
																												obj_t
																													BgL_cdrzd23660zd2_1683;
																												BgL_carzd23659zd2_1682 =
																													CAR
																													(BgL_cdrzd23656zd2_1678);
																												BgL_cdrzd23660zd2_1683 =
																													CDR
																													(BgL_cdrzd23656zd2_1678);
																												if (SYMBOLP
																													(BgL_carzd23659zd2_1682))
																													{	/* Eval/evcompile.scm 83 */
																														if (PAIRP
																															(BgL_cdrzd23660zd2_1683))
																															{	/* Eval/evcompile.scm 83 */
																																obj_t
																																	BgL_carzd23665zd2_1686;
																																BgL_carzd23665zd2_1686
																																	=
																																	CAR
																																	(BgL_cdrzd23660zd2_1683);
																																if (SYMBOLP
																																	(BgL_carzd23665zd2_1686))
																																	{	/* Eval/evcompile.scm 83 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd23660zd2_1683)))
																																			{
																																				obj_t
																																					BgL_argsz00_8109;
																																				obj_t
																																					BgL_modz00_8108;
																																				obj_t
																																					BgL_funz00_8107;
																																				BgL_funz00_8107
																																					=
																																					BgL_carzd23659zd2_1682;
																																				BgL_modz00_8108
																																					=
																																					BgL_carzd23665zd2_1686;
																																				BgL_argsz00_8109
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1307
																																					=
																																					BgL_argsz00_8109;
																																				BgL_modz00_1306
																																					=
																																					BgL_modz00_8108;
																																				BgL_funz00_1305
																																					=
																																					BgL_funz00_8107;
																																				goto
																																					BgL_tagzd2278zd2_1308;
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8113;
																																				obj_t
																																					BgL_funz00_8111;
																																				BgL_funz00_8111
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_8113
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_8113;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_8111;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_8117;
																																		obj_t
																																			BgL_funz00_8115;
																																		BgL_funz00_8115
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_8117
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_8117;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_8115;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_8121;
																																obj_t
																																	BgL_funz00_8119;
																																BgL_funz00_8119
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																BgL_argsz00_8121
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1310
																																	=
																																	BgL_argsz00_8121;
																																BgL_funz00_1309
																																	=
																																	BgL_funz00_8119;
																																goto
																																	BgL_tagzd2279zd2_1311;
																															}
																													}
																												else
																													{
																														obj_t
																															BgL_argsz00_8125;
																														obj_t
																															BgL_funz00_8123;
																														BgL_funz00_8123 =
																															CAR(BgL_expz00_5);
																														BgL_argsz00_8125 =
																															CDR(BgL_expz00_5);
																														BgL_argsz00_1310 =
																															BgL_argsz00_8125;
																														BgL_funz00_1309 =
																															BgL_funz00_8123;
																														goto
																															BgL_tagzd2279zd2_1311;
																													}
																											}
																										else
																											{
																												obj_t BgL_argsz00_8129;
																												obj_t BgL_funz00_8127;

																												BgL_funz00_8127 =
																													CAR(BgL_expz00_5);
																												BgL_argsz00_8129 =
																													CDR(BgL_expz00_5);
																												BgL_argsz00_1310 =
																													BgL_argsz00_8129;
																												BgL_funz00_1309 =
																													BgL_funz00_8127;
																												goto
																													BgL_tagzd2279zd2_1311;
																											}
																									}
																								else
																									{
																										obj_t BgL_argsz00_8133;
																										obj_t BgL_funz00_8131;

																										BgL_funz00_8131 =
																											CAR(BgL_expz00_5);
																										BgL_argsz00_8133 =
																											CDR(BgL_expz00_5);
																										BgL_argsz00_1310 =
																											BgL_argsz00_8133;
																										BgL_funz00_1309 =
																											BgL_funz00_8131;
																										goto BgL_tagzd2279zd2_1311;
																									}
																							}
																						else
																							{
																								obj_t BgL_argsz00_8136;
																								obj_t BgL_funz00_8135;

																								BgL_funz00_8135 =
																									BgL_carzd23639zd2_1675;
																								BgL_argsz00_8136 =
																									BgL_cdrzd22640zd2_1561;
																								BgL_argsz00_1303 =
																									BgL_argsz00_8136;
																								BgL_funz00_1302 =
																									BgL_funz00_8135;
																								goto BgL_tagzd2277zd2_1304;
																							}
																					}
																			}
																		else
																			{	/* Eval/evcompile.scm 83 */
																				if (
																					(CAR(BgL_expz00_5) ==
																						BGl_symbol4343z00zz__evcompilez00))
																					{	/* Eval/evcompile.scm 146 */
																						obj_t BgL_arg2529z00_4851;

																						{	/* Eval/evcompile.scm 65 */
																							obj_t BgL__ortest_1065z00_4852;

																							BgL__ortest_1065z00_4852 =
																								BGl_getzd2sourcezd2locationz00zz__readerz00
																								(BgL_expz00_5);
																							if (CBOOL
																								(BgL__ortest_1065z00_4852))
																								{	/* Eval/evcompile.scm 65 */
																									BgL_arg2529z00_4851 =
																										BgL__ortest_1065z00_4852;
																								}
																							else
																								{	/* Eval/evcompile.scm 65 */
																									BgL_arg2529z00_4851 =
																										BgL_locz00_10;
																								}
																						}
																						return
																							BGl_evcompilezd2orzd2zz__evcompilez00
																							(BgL_cdrzd22640zd2_1561,
																							BgL_envz00_6, BgL_genvz00_7,
																							BgL_wherez00_8,
																							BgL_arg2529z00_4851,
																							BgL_lkpz00_11);
																					}
																				else
																					{	/* Eval/evcompile.scm 83 */
																						if (
																							(CAR(BgL_expz00_5) ==
																								BGl_symbol4345z00zz__evcompilez00))
																							{	/* Eval/evcompile.scm 148 */
																								obj_t BgL_arg2530z00_4855;

																								{	/* Eval/evcompile.scm 65 */
																									obj_t
																										BgL__ortest_1065z00_4856;
																									BgL__ortest_1065z00_4856 =
																										BGl_getzd2sourcezd2locationz00zz__readerz00
																										(BgL_expz00_5);
																									if (CBOOL
																										(BgL__ortest_1065z00_4856))
																										{	/* Eval/evcompile.scm 65 */
																											BgL_arg2530z00_4855 =
																												BgL__ortest_1065z00_4856;
																										}
																									else
																										{	/* Eval/evcompile.scm 65 */
																											BgL_arg2530z00_4855 =
																												BgL_locz00_10;
																										}
																								}
																								return
																									BGl_evcompilezd2andzd2zz__evcompilez00
																									(BgL_cdrzd22640zd2_1561,
																									BgL_envz00_6, BgL_genvz00_7,
																									BgL_wherez00_8,
																									BgL_arg2530z00_4855,
																									BgL_lkpz00_11);
																							}
																						else
																							{	/* Eval/evcompile.scm 83 */
																								if (
																									(CAR(BgL_expz00_5) ==
																										BGl_symbol4347z00zz__evcompilez00))
																									{	/* Eval/evcompile.scm 151 */
																										obj_t BgL_arg2532z00_4859;

																										{	/* Eval/evcompile.scm 65 */
																											obj_t
																												BgL__ortest_1065z00_4860;
																											BgL__ortest_1065z00_4860 =
																												BGl_getzd2sourcezd2locationz00zz__readerz00
																												(BgL_expz00_5);
																											if (CBOOL
																												(BgL__ortest_1065z00_4860))
																												{	/* Eval/evcompile.scm 65 */
																													BgL_arg2532z00_4859 =
																														BgL__ortest_1065z00_4860;
																												}
																											else
																												{	/* Eval/evcompile.scm 65 */
																													BgL_arg2532z00_4859 =
																														BgL_locz00_10;
																												}
																										}
																										return
																											BGl_evcompilezd2beginzd2zz__evcompilez00
																											(BgL_cdrzd22640zd2_1561,
																											BgL_envz00_6,
																											BgL_genvz00_7,
																											BgL_wherez00_8,
																											BgL_tailz00_9,
																											BgL_arg2532z00_4859,
																											BgL_lkpz00_11,
																											BgL_toplevelpz00_12);
																									}
																								else
																									{	/* Eval/evcompile.scm 83 */
																										if (
																											(CAR(BgL_expz00_5) ==
																												BGl_symbol4349z00zz__evcompilez00))
																											{	/* Eval/evcompile.scm 83 */
																												if (PAIRP
																													(BgL_cdrzd22640zd2_1561))
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_cdrzd23813zd2_1719;
																														BgL_cdrzd23813zd2_1719
																															=
																															CDR
																															(BgL_cdrzd22640zd2_1561);
																														if (PAIRP
																															(BgL_cdrzd23813zd2_1719))
																															{	/* Eval/evcompile.scm 83 */
																																if (NULLP(CDR
																																		(BgL_cdrzd23813zd2_1719)))
																																	{	/* Eval/evcompile.scm 83 */
																																		BgL_varz00_1270
																																			=
																																			CAR
																																			(BgL_cdrzd22640zd2_1561);
																																		BgL_valz00_1271
																																			=
																																			CAR
																																			(BgL_cdrzd23813zd2_1719);
																																		{	/* Eval/evcompile.scm 154 */
																																			bool_t
																																				BgL_test4571z00_8169;
																																			if (
																																				(BgL_wherez00_8
																																					==
																																					BGl_symbol4319z00zz__evcompilez00))
																																				{	/* Eval/evcompile.scm 155 */
																																					bool_t
																																						BgL__ortest_1066z00_2584;
																																					BgL__ortest_1066z00_2584
																																						=
																																						(BgL_genvz00_7
																																						==
																																						BGl_schemezd2reportzd2environmentz00zz__evalz00
																																						(BINT
																																							(((long) 5))));
																																					if (BgL__ortest_1066z00_2584)
																																						{	/* Eval/evcompile.scm 155 */
																																							BgL_test4571z00_8169
																																								=
																																								BgL__ortest_1066z00_2584;
																																						}
																																					else
																																						{	/* Eval/evcompile.scm 155 */
																																							BgL_test4571z00_8169
																																								=
																																								(BgL_genvz00_7
																																								==
																																								BGl_nullzd2environmentzd2zz__evalz00
																																								(BINT
																																									(((long) 5))));
																																				}}
																																			else
																																				{	/* Eval/evcompile.scm 154 */
																																					BgL_test4571z00_8169
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_test4571z00_8169)
																																				{	/* Eval/evcompile.scm 154 */
																																					return
																																						BGl_evcompilezd2errorzd2zz__evcompilez00
																																						(BgL_locz00_10,
																																						BGl_string4315z00zz__evcompilez00,
																																						BGl_string4321z00zz__evcompilez00,
																																						BgL_expz00_5);
																																				}
																																			else
																																				{	/* Eval/evcompile.scm 154 */
																																					if (BgL_toplevelpz00_12)
																																						{	/* Eval/evcompile.scm 167 */
																																							obj_t
																																								BgL_locz00_2578;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4251;
																																								BgL__ortest_1065z00_4251
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_expz00_5);
																																								if (CBOOL(BgL__ortest_1065z00_4251))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2578
																																											=
																																											BgL__ortest_1065z00_4251;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2578
																																											=
																																											BgL_locz00_10;
																																									}
																																							}
																																							{	/* Eval/evcompile.scm 170 */
																																								obj_t
																																									BgL_arg2538z00_2579;
																																								{	/* Eval/evcompile.scm 170 */
																																									bool_t
																																										BgL_arg2541z00_2581;
																																									obj_t
																																										BgL_arg2542z00_2582;
																																									{	/* Eval/evcompile.scm 71 */
																																										int
																																											BgL_arg1390z00_4252;
																																										BgL_arg1390z00_4252
																																											=
																																											bgl_debug
																																											();
																																										BgL_arg2541z00_2581
																																											=
																																											(
																																											(long)
																																											(BgL_arg1390z00_4252)
																																											<
																																											((long) 3));
																																									}
																																									{	/* Eval/evcompile.scm 65 */
																																										obj_t
																																											BgL__ortest_1065z00_4255;
																																										BgL__ortest_1065z00_4255
																																											=
																																											BGl_getzd2sourcezd2locationz00zz__readerz00
																																											(BgL_valz00_1271);
																																										if (CBOOL(BgL__ortest_1065z00_4255))
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2542z00_2582
																																													=
																																													BgL__ortest_1065z00_4255;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2542z00_2582
																																													=
																																													BgL_locz00_2578;
																																											}
																																									}
																																									{	/* Eval/evcompile.scm 169 */
																																										obj_t
																																											BgL_auxz00_8190;
																																										if (BgL_toplevelpz00_12)
																																											{	/* Eval/evcompile.scm 170 */
																																												BgL_auxz00_8190
																																													=
																																													BgL_varz00_1270;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 170 */
																																												BgL_auxz00_8190
																																													=
																																													BgL_wherez00_8;
																																											}
																																										BgL_arg2538z00_2579
																																											=
																																											BGl_evcompilez00zz__evcompilez00
																																											(BgL_valz00_1271,
																																											BNIL,
																																											BgL_genvz00_7,
																																											BgL_auxz00_8190,
																																											BgL_arg2541z00_2581,
																																											BgL_arg2542z00_2582,
																																											BgL_lkpz00_11,
																																											((bool_t) 0));
																																									}
																																								}
																																								{	/* Eval/evcompile.scm 468 */
																																									obj_t
																																										BgL_v1176z00_4256;
																																									BgL_v1176z00_4256
																																										=
																																										create_vector
																																										(
																																										((long) 5));
																																									VECTOR_SET
																																										(BgL_v1176z00_4256,
																																										((long) 0), BINT(((long) 17)));
																																									VECTOR_SET
																																										(BgL_v1176z00_4256,
																																										((long) 1), BgL_locz00_2578);
																																									VECTOR_SET
																																										(BgL_v1176z00_4256,
																																										((long) 2), BGl_untypezd2identzd2zz__evcompilez00(BgL_varz00_1270));
																																									VECTOR_SET
																																										(BgL_v1176z00_4256,
																																										((long) 3), BgL_arg2538z00_2579);
																																									{	/* Eval/evcompile.scm 468 */
																																										obj_t
																																											BgL_arg2810z00_4258;
																																										BgL_arg2810z00_4258
																																											=
																																											BGL_MODULE
																																											();
																																										VECTOR_SET
																																											(BgL_v1176z00_4256,
																																											((long) 4), BgL_arg2810z00_4258);
																																									}
																																									return
																																										BgL_v1176z00_4256;
																																								}
																																							}
																																						}
																																					else
																																						{	/* Eval/evcompile.scm 161 */
																																							return
																																								BGl_evcompilezd2errorzd2zz__evcompilez00
																																								(BgL_locz00_10,
																																								BGl_string4315z00zz__evcompilez00,
																																								BGl_string4322z00zz__evcompilez00,
																																								BgL_expz00_5);
																																						}
																																				}
																																		}
																																	}
																																else
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd23920zd2_1725;
																																		BgL_carzd23920zd2_1725
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		if (PAIRP
																																			(BgL_carzd23920zd2_1725))
																																			{	/* Eval/evcompile.scm 83 */
																																				obj_t
																																					BgL_cdrzd23937zd2_1728;
																																				BgL_cdrzd23937zd2_1728
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_carzd23920zd2_1725));
																																				if ((CAR
																																						(((obj_t) BgL_carzd23920zd2_1725)) == BGl_symbol4324z00zz__evcompilez00))
																																					{	/* Eval/evcompile.scm 83 */
																																						if (PAIRP(BgL_cdrzd23937zd2_1728))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_carzd23940zd2_1732;
																																								obj_t
																																									BgL_cdrzd23941zd2_1733;
																																								BgL_carzd23940zd2_1732
																																									=
																																									CAR
																																									(BgL_cdrzd23937zd2_1728);
																																								BgL_cdrzd23941zd2_1733
																																									=
																																									CDR
																																									(BgL_cdrzd23937zd2_1728);
																																								if (SYMBOLP(BgL_carzd23940zd2_1732))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (PAIRP(BgL_cdrzd23941zd2_1733))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd23946zd2_1736;
																																												BgL_carzd23946zd2_1736
																																													=
																																													CAR
																																													(BgL_cdrzd23941zd2_1733);
																																												if (SYMBOLP(BgL_carzd23946zd2_1736))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (NULLP(CDR(BgL_cdrzd23941zd2_1733)))
																																															{
																																																obj_t
																																																	BgL_argsz00_8230;
																																																obj_t
																																																	BgL_modz00_8229;
																																																obj_t
																																																	BgL_funz00_8228;
																																																BgL_funz00_8228
																																																	=
																																																	BgL_carzd23940zd2_1732;
																																																BgL_modz00_8229
																																																	=
																																																	BgL_carzd23946zd2_1736;
																																																BgL_argsz00_8230
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1307
																																																	=
																																																	BgL_argsz00_8230;
																																																BgL_modz00_1306
																																																	=
																																																	BgL_modz00_8229;
																																																BgL_funz00_1305
																																																	=
																																																	BgL_funz00_8228;
																																																goto
																																																	BgL_tagzd2278zd2_1308;
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8234;
																																																obj_t
																																																	BgL_funz00_8232;
																																																BgL_funz00_8232
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8234
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8234;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8232;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8238;
																																														obj_t
																																															BgL_funz00_8236;
																																														BgL_funz00_8236
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8238
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8238;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8236;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8242;
																																												obj_t
																																													BgL_funz00_8240;
																																												BgL_funz00_8240
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8242
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8242;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8240;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8246;
																																										obj_t
																																											BgL_funz00_8244;
																																										BgL_funz00_8244
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8246
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8246;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8244;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8250;
																																								obj_t
																																									BgL_funz00_8248;
																																								BgL_funz00_8248
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8250
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8250;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8248;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8254;
																																						obj_t
																																							BgL_funz00_8252;
																																						BgL_funz00_8252
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8254
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8254;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8252;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8257;
																																				obj_t
																																					BgL_funz00_8256;
																																				BgL_funz00_8256
																																					=
																																					BgL_carzd23920zd2_1725;
																																				BgL_argsz00_8257
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1303
																																					=
																																					BgL_argsz00_8257;
																																				BgL_funz00_1302
																																					=
																																					BgL_funz00_8256;
																																				goto
																																					BgL_tagzd2277zd2_1304;
																																			}
																																	}
																															}
																														else
																															{	/* Eval/evcompile.scm 83 */
																																obj_t
																																	BgL_carzd24103zd2_1757;
																																BgL_carzd24103zd2_1757
																																	=
																																	CAR
																																	(BgL_expz00_5);
																																if (PAIRP
																																	(BgL_carzd24103zd2_1757))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_cdrzd24120zd2_1760;
																																		BgL_cdrzd24120zd2_1760
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_carzd24103zd2_1757));
																																		if ((CAR((
																																						(obj_t)
																																						BgL_carzd24103zd2_1757))
																																				==
																																				BGl_symbol4324z00zz__evcompilez00))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (PAIRP(BgL_cdrzd24120zd2_1760))
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_carzd24123zd2_1764;
																																						obj_t
																																							BgL_cdrzd24124zd2_1765;
																																						BgL_carzd24123zd2_1764
																																							=
																																							CAR
																																							(BgL_cdrzd24120zd2_1760);
																																						BgL_cdrzd24124zd2_1765
																																							=
																																							CDR
																																							(BgL_cdrzd24120zd2_1760);
																																						if (SYMBOLP(BgL_carzd24123zd2_1764))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (PAIRP(BgL_cdrzd24124zd2_1765))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_carzd24129zd2_1768;
																																										BgL_carzd24129zd2_1768
																																											=
																																											CAR
																																											(BgL_cdrzd24124zd2_1765);
																																										if (SYMBOLP(BgL_carzd24129zd2_1768))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (NULLP(CDR(BgL_cdrzd24124zd2_1765)))
																																													{
																																														obj_t
																																															BgL_argsz00_8284;
																																														obj_t
																																															BgL_modz00_8283;
																																														obj_t
																																															BgL_funz00_8282;
																																														BgL_funz00_8282
																																															=
																																															BgL_carzd24123zd2_1764;
																																														BgL_modz00_8283
																																															=
																																															BgL_carzd24129zd2_1768;
																																														BgL_argsz00_8284
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1307
																																															=
																																															BgL_argsz00_8284;
																																														BgL_modz00_1306
																																															=
																																															BgL_modz00_8283;
																																														BgL_funz00_1305
																																															=
																																															BgL_funz00_8282;
																																														goto
																																															BgL_tagzd2278zd2_1308;
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8288;
																																														obj_t
																																															BgL_funz00_8286;
																																														BgL_funz00_8286
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8288
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8288;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8286;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8292;
																																												obj_t
																																													BgL_funz00_8290;
																																												BgL_funz00_8290
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8292
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8292;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8290;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8296;
																																										obj_t
																																											BgL_funz00_8294;
																																										BgL_funz00_8294
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8296
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8296;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8294;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8300;
																																								obj_t
																																									BgL_funz00_8298;
																																								BgL_funz00_8298
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8300
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8300;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8298;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8304;
																																						obj_t
																																							BgL_funz00_8302;
																																						BgL_funz00_8302
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8304
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8304;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8302;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8308;
																																				obj_t
																																					BgL_funz00_8306;
																																				BgL_funz00_8306
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_8308
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_8308;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_8306;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_8311;
																																		obj_t
																																			BgL_funz00_8310;
																																		BgL_funz00_8310
																																			=
																																			BgL_carzd24103zd2_1757;
																																		BgL_argsz00_8311
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1303
																																			=
																																			BgL_argsz00_8311;
																																		BgL_funz00_1302
																																			=
																																			BgL_funz00_8310;
																																		goto
																																			BgL_tagzd2277zd2_1304;
																																	}
																															}
																													}
																												else
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_carzd24286zd2_1788;
																														BgL_carzd24286zd2_1788
																															=
																															CAR(BgL_expz00_5);
																														if (PAIRP
																															(BgL_carzd24286zd2_1788))
																															{	/* Eval/evcompile.scm 83 */
																																obj_t
																																	BgL_cdrzd24303zd2_1791;
																																BgL_cdrzd24303zd2_1791
																																	=
																																	CDR(((obj_t)
																																		BgL_carzd24286zd2_1788));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd24286zd2_1788))
																																		==
																																		BGl_symbol4324z00zz__evcompilez00))
																																	{	/* Eval/evcompile.scm 83 */
																																		if (PAIRP
																																			(BgL_cdrzd24303zd2_1791))
																																			{	/* Eval/evcompile.scm 83 */
																																				obj_t
																																					BgL_carzd24306zd2_1795;
																																				obj_t
																																					BgL_cdrzd24307zd2_1796;
																																				BgL_carzd24306zd2_1795
																																					=
																																					CAR
																																					(BgL_cdrzd24303zd2_1791);
																																				BgL_cdrzd24307zd2_1796
																																					=
																																					CDR
																																					(BgL_cdrzd24303zd2_1791);
																																				if (SYMBOLP(BgL_carzd24306zd2_1795))
																																					{	/* Eval/evcompile.scm 83 */
																																						if (PAIRP(BgL_cdrzd24307zd2_1796))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_carzd24312zd2_1799;
																																								BgL_carzd24312zd2_1799
																																									=
																																									CAR
																																									(BgL_cdrzd24307zd2_1796);
																																								if (SYMBOLP(BgL_carzd24312zd2_1799))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (NULLP(CDR(BgL_cdrzd24307zd2_1796)))
																																											{
																																												obj_t
																																													BgL_argsz00_8338;
																																												obj_t
																																													BgL_modz00_8337;
																																												obj_t
																																													BgL_funz00_8336;
																																												BgL_funz00_8336
																																													=
																																													BgL_carzd24306zd2_1795;
																																												BgL_modz00_8337
																																													=
																																													BgL_carzd24312zd2_1799;
																																												BgL_argsz00_8338
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1307
																																													=
																																													BgL_argsz00_8338;
																																												BgL_modz00_1306
																																													=
																																													BgL_modz00_8337;
																																												BgL_funz00_1305
																																													=
																																													BgL_funz00_8336;
																																												goto
																																													BgL_tagzd2278zd2_1308;
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8342;
																																												obj_t
																																													BgL_funz00_8340;
																																												BgL_funz00_8340
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8342
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8342;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8340;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8346;
																																										obj_t
																																											BgL_funz00_8344;
																																										BgL_funz00_8344
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8346
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8346;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8344;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8350;
																																								obj_t
																																									BgL_funz00_8348;
																																								BgL_funz00_8348
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8350
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8350;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8348;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8354;
																																						obj_t
																																							BgL_funz00_8352;
																																						BgL_funz00_8352
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8354
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8354;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8352;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8358;
																																				obj_t
																																					BgL_funz00_8356;
																																				BgL_funz00_8356
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				BgL_argsz00_8358
																																					=
																																					CDR
																																					(BgL_expz00_5);
																																				BgL_argsz00_1310
																																					=
																																					BgL_argsz00_8358;
																																				BgL_funz00_1309
																																					=
																																					BgL_funz00_8356;
																																				goto
																																					BgL_tagzd2279zd2_1311;
																																			}
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_argsz00_8362;
																																		obj_t
																																			BgL_funz00_8360;
																																		BgL_funz00_8360
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		BgL_argsz00_8362
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		BgL_argsz00_1310
																																			=
																																			BgL_argsz00_8362;
																																		BgL_funz00_1309
																																			=
																																			BgL_funz00_8360;
																																		goto
																																			BgL_tagzd2279zd2_1311;
																																	}
																															}
																														else
																															{
																																obj_t
																																	BgL_argsz00_8365;
																																obj_t
																																	BgL_funz00_8364;
																																BgL_funz00_8364
																																	=
																																	BgL_carzd24286zd2_1788;
																																BgL_argsz00_8365
																																	=
																																	CDR
																																	(BgL_expz00_5);
																																BgL_argsz00_1303
																																	=
																																	BgL_argsz00_8365;
																																BgL_funz00_1302
																																	=
																																	BgL_funz00_8364;
																																goto
																																	BgL_tagzd2277zd2_1304;
																															}
																													}
																											}
																										else
																											{	/* Eval/evcompile.scm 83 */
																												if (
																													(CAR(BgL_expz00_5) ==
																														BGl_symbol4351z00zz__evcompilez00))
																													{	/* Eval/evcompile.scm 83 */
																														{
																															obj_t
																																BgL_varz00_2594;
																															obj_t
																																BgL_valz00_2595;
																															obj_t
																																BgL_lz00_2591;
																															obj_t
																																BgL_valz00_2592;
																															if (PAIRP
																																(BgL_expz00_5))
																																{	/* Eval/evcompile.scm 83 */
																																	obj_t
																																		BgL_cdrzd26816zd2_2600;
																																	BgL_cdrzd26816zd2_2600
																																		=
																																		CDR
																																		(BgL_expz00_5);
																																	if (PAIRP
																																		(BgL_cdrzd26816zd2_2600))
																																		{	/* Eval/evcompile.scm 83 */
																																			obj_t
																																				BgL_carzd26820zd2_2602;
																																			obj_t
																																				BgL_cdrzd26821zd2_2603;
																																			BgL_carzd26820zd2_2602
																																				=
																																				CAR
																																				(BgL_cdrzd26816zd2_2600);
																																			BgL_cdrzd26821zd2_2603
																																				=
																																				CDR
																																				(BgL_cdrzd26816zd2_2600);
																																			if (PAIRP
																																				(BgL_carzd26820zd2_2602))
																																				{	/* Eval/evcompile.scm 83 */
																																					obj_t
																																						BgL_cdrzd26825zd2_2605;
																																					BgL_cdrzd26825zd2_2605
																																						=
																																						CDR
																																						(BgL_carzd26820zd2_2602);
																																					if (
																																						(CAR
																																							(BgL_carzd26820zd2_2602)
																																							==
																																							BGl_symbol4324z00zz__evcompilez00))
																																						{	/* Eval/evcompile.scm 83 */
																																							if (PAIRP(BgL_cdrzd26825zd2_2605))
																																								{	/* Eval/evcompile.scm 83 */
																																									obj_t
																																										BgL_carzd26828zd2_2609;
																																									obj_t
																																										BgL_cdrzd26829zd2_2610;
																																									BgL_carzd26828zd2_2609
																																										=
																																										CAR
																																										(BgL_cdrzd26825zd2_2605);
																																									BgL_cdrzd26829zd2_2610
																																										=
																																										CDR
																																										(BgL_cdrzd26825zd2_2605);
																																									if (SYMBOLP(BgL_carzd26828zd2_2609))
																																										{	/* Eval/evcompile.scm 83 */
																																											if (PAIRP(BgL_cdrzd26829zd2_2610))
																																												{	/* Eval/evcompile.scm 83 */
																																													obj_t
																																														BgL_carzd26833zd2_2613;
																																													BgL_carzd26833zd2_2613
																																														=
																																														CAR
																																														(BgL_cdrzd26829zd2_2610);
																																													if (SYMBOLP(BgL_carzd26833zd2_2613))
																																														{	/* Eval/evcompile.scm 83 */
																																															if (NULLP(CDR(BgL_cdrzd26829zd2_2610)))
																																																{	/* Eval/evcompile.scm 83 */
																																																	if (PAIRP(BgL_cdrzd26821zd2_2603))
																																																		{	/* Eval/evcompile.scm 83 */
																																																			if (NULLP(CDR(BgL_cdrzd26821zd2_2603)))
																																																				{	/* Eval/evcompile.scm 83 */
																																																					obj_t
																																																						BgL_arg2564z00_2620;
																																																					BgL_arg2564z00_2620
																																																						=
																																																						CAR
																																																						(BgL_cdrzd26821zd2_2603);
																																																					{	/* Eval/evcompile.scm 178 */
																																																						obj_t
																																																							BgL_locz00_4307;
																																																						{	/* Eval/evcompile.scm 65 */
																																																							obj_t
																																																								BgL__ortest_1065z00_4311;
																																																							BgL__ortest_1065z00_4311
																																																								=
																																																								BGl_getzd2sourcezd2locationz00zz__readerz00
																																																								(BgL_expz00_5);
																																																							if (CBOOL(BgL__ortest_1065z00_4311))
																																																								{	/* Eval/evcompile.scm 65 */
																																																									BgL_locz00_4307
																																																										=
																																																										BgL__ortest_1065z00_4311;
																																																								}
																																																							else
																																																								{	/* Eval/evcompile.scm 65 */
																																																									BgL_locz00_4307
																																																										=
																																																										BgL_locz00_10;
																																																								}
																																																						}
																																																						{	/* Eval/evcompile.scm 179 */
																																																							obj_t
																																																								BgL_arg2622z00_4308;
																																																							obj_t
																																																								BgL_arg2623z00_4309;
																																																							BgL_arg2622z00_4308
																																																								=
																																																								BGl_z04variablez04zz__evcompilez00
																																																								(BgL_locz00_4307,
																																																								BgL_carzd26828zd2_2609,
																																																								BgL_envz00_6,
																																																								BgL_genvz00_7,
																																																								BgL_carzd26833zd2_2613);
																																																							{	/* Eval/evcompile.scm 182 */
																																																								obj_t
																																																									BgL_arg2624z00_4310;
																																																								{	/* Eval/evcompile.scm 65 */
																																																									obj_t
																																																										BgL__ortest_1065z00_4312;
																																																									BgL__ortest_1065z00_4312
																																																										=
																																																										BGl_getzd2sourcezd2locationz00zz__readerz00
																																																										(BgL_arg2564z00_2620);
																																																									if (CBOOL(BgL__ortest_1065z00_4312))
																																																										{	/* Eval/evcompile.scm 65 */
																																																											BgL_arg2624z00_4310
																																																												=
																																																												BgL__ortest_1065z00_4312;
																																																										}
																																																									else
																																																										{	/* Eval/evcompile.scm 65 */
																																																											BgL_arg2624z00_4310
																																																												=
																																																												BgL_locz00_4307;
																																																										}
																																																								}
																																																								BgL_arg2623z00_4309
																																																									=
																																																									BGl_evcompilez00zz__evcompilez00
																																																									(BgL_arg2564z00_2620,
																																																									BgL_envz00_6,
																																																									BgL_genvz00_7,
																																																									BgL_carzd26828zd2_2609,
																																																									((bool_t) 0), BgL_arg2624z00_4310, BgL_lkpz00_11, ((bool_t) 0));
																																																							}
																																																							return
																																																								BGl_evcompilezd2setzd2zz__evcompilez00
																																																								(BgL_arg2622z00_4308,
																																																								BgL_arg2623z00_4309,
																																																								BgL_genvz00_7,
																																																								BgL_locz00_4307);
																																																						}
																																																					}
																																																				}
																																																			else
																																																				{	/* Eval/evcompile.scm 83 */
																																																				BgL_tagzd26805zd2_2597:
																																																					{	/* Eval/evcompile.scm 200 */
																																																						obj_t
																																																							BgL_arg2646z00_2733;
																																																						{	/* Eval/evcompile.scm 65 */
																																																							obj_t
																																																								BgL__ortest_1065z00_4285;
																																																							BgL__ortest_1065z00_4285
																																																								=
																																																								BGl_getzd2sourcezd2locationz00zz__readerz00
																																																								(BgL_expz00_5);
																																																							if (CBOOL(BgL__ortest_1065z00_4285))
																																																								{	/* Eval/evcompile.scm 65 */
																																																									BgL_arg2646z00_2733
																																																										=
																																																										BgL__ortest_1065z00_4285;
																																																								}
																																																							else
																																																								{	/* Eval/evcompile.scm 65 */
																																																									BgL_arg2646z00_2733
																																																										=
																																																										BgL_locz00_10;
																																																								}
																																																						}
																																																						return
																																																							BGl_evcompilezd2errorzd2zz__evcompilez00
																																																							(BgL_arg2646z00_2733,
																																																							BGl_string4323z00zz__evcompilez00,
																																																							BGl_string4318z00zz__evcompilez00,
																																																							BgL_expz00_5);
																																																					}
																																																				}
																																																		}
																																																	else
																																																		{	/* Eval/evcompile.scm 83 */
																																																			goto
																																																				BgL_tagzd26805zd2_2597;
																																																		}
																																																}
																																															else
																																																{	/* Eval/evcompile.scm 83 */
																																																	obj_t
																																																		BgL_carzd26873zd2_2623;
																																																	obj_t
																																																		BgL_cdrzd26874zd2_2624;
																																																	BgL_carzd26873zd2_2623
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd26816zd2_2600));
																																																	BgL_cdrzd26874zd2_2624
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd26816zd2_2600));
																																																	if (SYMBOLP(BgL_carzd26873zd2_2623))
																																																		{	/* Eval/evcompile.scm 83 */
																																																			if (PAIRP(BgL_cdrzd26874zd2_2624))
																																																				{	/* Eval/evcompile.scm 83 */
																																																					if (NULLP(CDR(BgL_cdrzd26874zd2_2624)))
																																																						{	/* Eval/evcompile.scm 83 */
																																																							BgL_varz00_2594
																																																								=
																																																								BgL_carzd26873zd2_2623;
																																																							BgL_valz00_2595
																																																								=
																																																								CAR
																																																								(BgL_cdrzd26874zd2_2624);
																																																						BgL_tagzd26804zd2_2596:
																																																							{	/* Eval/evcompile.scm 191 */
																																																								obj_t
																																																									BgL_locz00_2729;
																																																								{	/* Eval/evcompile.scm 65 */
																																																									obj_t
																																																										BgL__ortest_1065z00_4283;
																																																									BgL__ortest_1065z00_4283
																																																										=
																																																										BGl_getzd2sourcezd2locationz00zz__readerz00
																																																										(BgL_expz00_5);
																																																									if (CBOOL(BgL__ortest_1065z00_4283))
																																																										{	/* Eval/evcompile.scm 65 */
																																																											BgL_locz00_2729
																																																												=
																																																												BgL__ortest_1065z00_4283;
																																																										}
																																																									else
																																																										{	/* Eval/evcompile.scm 65 */
																																																											BgL_locz00_2729
																																																												=
																																																												BgL_locz00_10;
																																																										}
																																																								}
																																																								{	/* Eval/evcompile.scm 192 */
																																																									obj_t
																																																										BgL_arg2643z00_2730;
																																																									obj_t
																																																										BgL_arg2644z00_2731;
																																																									BgL_arg2643z00_2730
																																																										=
																																																										BGl_variablez00zz__evcompilez00
																																																										(BgL_locz00_2729,
																																																										BgL_varz00_2594,
																																																										BgL_envz00_6,
																																																										BgL_genvz00_7);
																																																									{	/* Eval/evcompile.scm 195 */
																																																										obj_t
																																																											BgL_arg2645z00_2732;
																																																										{	/* Eval/evcompile.scm 65 */
																																																											obj_t
																																																												BgL__ortest_1065z00_4284;
																																																											BgL__ortest_1065z00_4284
																																																												=
																																																												BGl_getzd2sourcezd2locationz00zz__readerz00
																																																												(BgL_valz00_2595);
																																																											if (CBOOL(BgL__ortest_1065z00_4284))
																																																												{	/* Eval/evcompile.scm 65 */
																																																													BgL_arg2645z00_2732
																																																														=
																																																														BgL__ortest_1065z00_4284;
																																																												}
																																																											else
																																																												{	/* Eval/evcompile.scm 65 */
																																																													BgL_arg2645z00_2732
																																																														=
																																																														BgL_locz00_2729;
																																																												}
																																																										}
																																																										BgL_arg2644z00_2731
																																																											=
																																																											BGl_evcompilez00zz__evcompilez00
																																																											(BgL_valz00_2595,
																																																											BgL_envz00_6,
																																																											BgL_genvz00_7,
																																																											BgL_varz00_2594,
																																																											((bool_t) 0), BgL_arg2645z00_2732, BgL_lkpz00_11, ((bool_t) 0));
																																																									}
																																																									return
																																																										BGl_evcompilezd2setzd2zz__evcompilez00
																																																										(BgL_arg2643z00_2730,
																																																										BgL_arg2644z00_2731,
																																																										BgL_genvz00_7,
																																																										BgL_locz00_2729);
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Eval/evcompile.scm 83 */
																																																							goto
																																																								BgL_tagzd26805zd2_2597;
																																																						}
																																																				}
																																																			else
																																																				{	/* Eval/evcompile.scm 83 */
																																																					goto
																																																						BgL_tagzd26805zd2_2597;
																																																				}
																																																		}
																																																	else
																																																		{	/* Eval/evcompile.scm 83 */
																																																			goto
																																																				BgL_tagzd26805zd2_2597;
																																																		}
																																																}
																																														}
																																													else
																																														{	/* Eval/evcompile.scm 83 */
																																															obj_t
																																																BgL_carzd26895zd2_2633;
																																															obj_t
																																																BgL_cdrzd26896zd2_2634;
																																															BgL_carzd26895zd2_2633
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd26816zd2_2600));
																																															BgL_cdrzd26896zd2_2634
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd26816zd2_2600));
																																															if (SYMBOLP(BgL_carzd26895zd2_2633))
																																																{	/* Eval/evcompile.scm 83 */
																																																	if (PAIRP(BgL_cdrzd26896zd2_2634))
																																																		{	/* Eval/evcompile.scm 83 */
																																																			if (NULLP(CDR(BgL_cdrzd26896zd2_2634)))
																																																				{
																																																					obj_t
																																																						BgL_valz00_8449;
																																																					obj_t
																																																						BgL_varz00_8448;
																																																					BgL_varz00_8448
																																																						=
																																																						BgL_carzd26895zd2_2633;
																																																					BgL_valz00_8449
																																																						=
																																																						CAR
																																																						(BgL_cdrzd26896zd2_2634);
																																																					BgL_valz00_2595
																																																						=
																																																						BgL_valz00_8449;
																																																					BgL_varz00_2594
																																																						=
																																																						BgL_varz00_8448;
																																																					goto
																																																						BgL_tagzd26804zd2_2596;
																																																				}
																																																			else
																																																				{	/* Eval/evcompile.scm 83 */
																																																					goto
																																																						BgL_tagzd26805zd2_2597;
																																																				}
																																																		}
																																																	else
																																																		{	/* Eval/evcompile.scm 83 */
																																																			goto
																																																				BgL_tagzd26805zd2_2597;
																																																		}
																																																}
																																															else
																																																{	/* Eval/evcompile.scm 83 */
																																																	goto
																																																		BgL_tagzd26805zd2_2597;
																																																}
																																														}
																																												}
																																											else
																																												{	/* Eval/evcompile.scm 83 */
																																													obj_t
																																														BgL_carzd26917zd2_2642;
																																													obj_t
																																														BgL_cdrzd26918zd2_2643;
																																													BgL_carzd26917zd2_2642
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd26816zd2_2600));
																																													BgL_cdrzd26918zd2_2643
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd26816zd2_2600));
																																													if (SYMBOLP(BgL_carzd26917zd2_2642))
																																														{	/* Eval/evcompile.scm 83 */
																																															if (PAIRP(BgL_cdrzd26918zd2_2643))
																																																{	/* Eval/evcompile.scm 83 */
																																																	if (NULLP(CDR(BgL_cdrzd26918zd2_2643)))
																																																		{
																																																			obj_t
																																																				BgL_valz00_8463;
																																																			obj_t
																																																				BgL_varz00_8462;
																																																			BgL_varz00_8462
																																																				=
																																																				BgL_carzd26917zd2_2642;
																																																			BgL_valz00_8463
																																																				=
																																																				CAR
																																																				(BgL_cdrzd26918zd2_2643);
																																																			BgL_valz00_2595
																																																				=
																																																				BgL_valz00_8463;
																																																			BgL_varz00_2594
																																																				=
																																																				BgL_varz00_8462;
																																																			goto
																																																				BgL_tagzd26804zd2_2596;
																																																		}
																																																	else
																																																		{	/* Eval/evcompile.scm 83 */
																																																			goto
																																																				BgL_tagzd26805zd2_2597;
																																																		}
																																																}
																																															else
																																																{	/* Eval/evcompile.scm 83 */
																																																	goto
																																																		BgL_tagzd26805zd2_2597;
																																																}
																																														}
																																													else
																																														{	/* Eval/evcompile.scm 83 */
																																															goto
																																																BgL_tagzd26805zd2_2597;
																																														}
																																												}
																																										}
																																									else
																																										{	/* Eval/evcompile.scm 83 */
																																											obj_t
																																												BgL_carzd26939zd2_2651;
																																											obj_t
																																												BgL_cdrzd26940zd2_2652;
																																											BgL_carzd26939zd2_2651
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd26816zd2_2600));
																																											BgL_cdrzd26940zd2_2652
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd26816zd2_2600));
																																											if (SYMBOLP(BgL_carzd26939zd2_2651))
																																												{	/* Eval/evcompile.scm 83 */
																																													if (PAIRP(BgL_cdrzd26940zd2_2652))
																																														{	/* Eval/evcompile.scm 83 */
																																															if (NULLP(CDR(BgL_cdrzd26940zd2_2652)))
																																																{
																																																	obj_t
																																																		BgL_valz00_8477;
																																																	obj_t
																																																		BgL_varz00_8476;
																																																	BgL_varz00_8476
																																																		=
																																																		BgL_carzd26939zd2_2651;
																																																	BgL_valz00_8477
																																																		=
																																																		CAR
																																																		(BgL_cdrzd26940zd2_2652);
																																																	BgL_valz00_2595
																																																		=
																																																		BgL_valz00_8477;
																																																	BgL_varz00_2594
																																																		=
																																																		BgL_varz00_8476;
																																																	goto
																																																		BgL_tagzd26804zd2_2596;
																																																}
																																															else
																																																{	/* Eval/evcompile.scm 83 */
																																																	goto
																																																		BgL_tagzd26805zd2_2597;
																																																}
																																														}
																																													else
																																														{	/* Eval/evcompile.scm 83 */
																																															goto
																																																BgL_tagzd26805zd2_2597;
																																														}
																																												}
																																											else
																																												{	/* Eval/evcompile.scm 83 */
																																													goto
																																														BgL_tagzd26805zd2_2597;
																																												}
																																										}
																																								}
																																							else
																																								{	/* Eval/evcompile.scm 83 */
																																									obj_t
																																										BgL_carzd26961zd2_2660;
																																									obj_t
																																										BgL_cdrzd26962zd2_2661;
																																									BgL_carzd26961zd2_2660
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd26816zd2_2600));
																																									BgL_cdrzd26962zd2_2661
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd26816zd2_2600));
																																									if (SYMBOLP(BgL_carzd26961zd2_2660))
																																										{	/* Eval/evcompile.scm 83 */
																																											if (PAIRP(BgL_cdrzd26962zd2_2661))
																																												{	/* Eval/evcompile.scm 83 */
																																													if (NULLP(CDR(BgL_cdrzd26962zd2_2661)))
																																														{
																																															obj_t
																																																BgL_valz00_8491;
																																															obj_t
																																																BgL_varz00_8490;
																																															BgL_varz00_8490
																																																=
																																																BgL_carzd26961zd2_2660;
																																															BgL_valz00_8491
																																																=
																																																CAR
																																																(BgL_cdrzd26962zd2_2661);
																																															BgL_valz00_2595
																																																=
																																																BgL_valz00_8491;
																																															BgL_varz00_2594
																																																=
																																																BgL_varz00_8490;
																																															goto
																																																BgL_tagzd26804zd2_2596;
																																														}
																																													else
																																														{	/* Eval/evcompile.scm 83 */
																																															goto
																																																BgL_tagzd26805zd2_2597;
																																														}
																																												}
																																											else
																																												{	/* Eval/evcompile.scm 83 */
																																													goto
																																														BgL_tagzd26805zd2_2597;
																																												}
																																										}
																																									else
																																										{	/* Eval/evcompile.scm 83 */
																																											goto
																																												BgL_tagzd26805zd2_2597;
																																										}
																																								}
																																						}
																																					else
																																						{	/* Eval/evcompile.scm 83 */
																																							obj_t
																																								BgL_carzd26979zd2_2669;
																																							obj_t
																																								BgL_cdrzd26980zd2_2670;
																																							BgL_carzd26979zd2_2669
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd26816zd2_2600));
																																							BgL_cdrzd26980zd2_2670
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd26816zd2_2600));
																																							if ((CAR(((obj_t) BgL_carzd26979zd2_2669)) == BGl_symbol4326z00zz__evcompilez00))
																																								{	/* Eval/evcompile.scm 83 */
																																									if (PAIRP(BgL_cdrzd26980zd2_2670))
																																										{	/* Eval/evcompile.scm 83 */
																																											if (NULLP(CDR(BgL_cdrzd26980zd2_2670)))
																																												{	/* Eval/evcompile.scm 83 */
																																													obj_t
																																														BgL_arg2604z00_2676;
																																													obj_t
																																														BgL_arg2605z00_2677;
																																													BgL_arg2604z00_2676
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_carzd26979zd2_2669));
																																													BgL_arg2605z00_2677
																																														=
																																														CAR
																																														(BgL_cdrzd26980zd2_2670);
																																													BgL_lz00_2591
																																														=
																																														BgL_arg2604z00_2676;
																																													BgL_valz00_2592
																																														=
																																														BgL_arg2605z00_2677;
																																													{	/* Eval/evcompile.scm 187 */
																																														bool_t
																																															BgL_test4634z00_8509;
																																														if (PAIRP(BgL_lz00_2591))
																																															{	/* Eval/evcompile.scm 187 */
																																																bool_t
																																																	BgL_test4636z00_8512;
																																																{	/* Eval/evcompile.scm 187 */
																																																	obj_t
																																																		BgL_tmpz00_8513;
																																																	BgL_tmpz00_8513
																																																		=
																																																		CDR
																																																		(BgL_lz00_2591);
																																																	BgL_test4636z00_8512
																																																		=
																																																		PAIRP
																																																		(BgL_tmpz00_8513);
																																																}
																																																if (BgL_test4636z00_8512)
																																																	{
																																																		obj_t
																																																			BgL_l1136z00_2720;
																																																		BgL_l1136z00_2720
																																																			=
																																																			BgL_lz00_2591;
																																																	BgL_zc3z04anonymousza32637ze3z87_2721:
																																																		if (NULLP(BgL_l1136z00_2720))
																																																			{	/* Eval/evcompile.scm 187 */
																																																				BgL_test4634z00_8509
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 187 */
																																																				bool_t
																																																					BgL_test4638z00_8518;
																																																				{	/* Eval/evcompile.scm 187 */
																																																					obj_t
																																																						BgL_tmpz00_8519;
																																																					BgL_tmpz00_8519
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_l1136z00_2720));
																																																					BgL_test4638z00_8518
																																																						=
																																																						SYMBOLP
																																																						(BgL_tmpz00_8519);
																																																				}
																																																				if (BgL_test4638z00_8518)
																																																					{
																																																						obj_t
																																																							BgL_l1136z00_8523;
																																																						BgL_l1136z00_8523
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_l1136z00_2720));
																																																						BgL_l1136z00_2720
																																																							=
																																																							BgL_l1136z00_8523;
																																																						goto
																																																							BgL_zc3z04anonymousza32637ze3z87_2721;
																																																					}
																																																				else
																																																					{	/* Eval/evcompile.scm 187 */
																																																						BgL_test4634z00_8509
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evcompile.scm 187 */
																																																		BgL_test4634z00_8509
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 187 */
																																																BgL_test4634z00_8509
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														if (BgL_test4634z00_8509)
																																															{	/* Eval/evcompile.scm 187 */
																																																return
																																																	BGl_evcompilezd2fieldzd2setz00zz__evcompilez00
																																																	(BgL_lz00_2591,
																																																	BgL_valz00_2592,
																																																	BgL_expz00_5,
																																																	BgL_envz00_6,
																																																	BgL_genvz00_7,
																																																	BgL_wherez00_8,
																																																	BgL_tailz00_9,
																																																	BgL_locz00_10,
																																																	BgL_lkpz00_11,
																																																	BgL_toplevelpz00_12);
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 187 */
																																																return
																																																	BGl_evcompilezd2errorzd2zz__evcompilez00
																																																	(BgL_locz00_10,
																																																	BGl_string4315z00zz__evcompilez00,
																																																	BGl_string4318z00zz__evcompilez00,
																																																	BgL_expz00_5);
																																															}
																																													}
																																												}
																																											else
																																												{	/* Eval/evcompile.scm 83 */
																																													goto
																																														BgL_tagzd26805zd2_2597;
																																												}
																																										}
																																									else
																																										{	/* Eval/evcompile.scm 83 */
																																											goto
																																												BgL_tagzd26805zd2_2597;
																																										}
																																								}
																																							else
																																								{	/* Eval/evcompile.scm 83 */
																																									obj_t
																																										BgL_cdrzd27003zd2_2679;
																																									BgL_cdrzd27003zd2_2679
																																										=
																																										CDR
																																										(BgL_expz00_5);
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_carzd27006zd2_2680;
																																										obj_t
																																											BgL_cdrzd27007zd2_2681;
																																										BgL_carzd27006zd2_2680
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd27003zd2_2679));
																																										BgL_cdrzd27007zd2_2681
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd27003zd2_2679));
																																										if (SYMBOLP(BgL_carzd27006zd2_2680))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd27007zd2_2681))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (NULLP(CDR(BgL_cdrzd27007zd2_2681)))
																																															{
																																																obj_t
																																																	BgL_valz00_8541;
																																																obj_t
																																																	BgL_varz00_8540;
																																																BgL_varz00_8540
																																																	=
																																																	BgL_carzd27006zd2_2680;
																																																BgL_valz00_8541
																																																	=
																																																	CAR
																																																	(BgL_cdrzd27007zd2_2681);
																																																BgL_valz00_2595
																																																	=
																																																	BgL_valz00_8541;
																																																BgL_varz00_2594
																																																	=
																																																	BgL_varz00_8540;
																																																goto
																																																	BgL_tagzd26804zd2_2596;
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 83 */
																																																goto
																																																	BgL_tagzd26805zd2_2597;
																																															}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														goto
																																															BgL_tagzd26805zd2_2597;
																																													}
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 83 */
																																												goto
																																													BgL_tagzd26805zd2_2597;
																																											}
																																									}
																																								}
																																						}
																																				}
																																			else
																																				{	/* Eval/evcompile.scm 83 */
																																					obj_t
																																						BgL_carzd27028zd2_2691;
																																					obj_t
																																						BgL_cdrzd27029zd2_2692;
																																					BgL_carzd27028zd2_2691
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd26816zd2_2600));
																																					BgL_cdrzd27029zd2_2692
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd26816zd2_2600));
																																					if (SYMBOLP(BgL_carzd27028zd2_2691))
																																						{	/* Eval/evcompile.scm 83 */
																																							if (PAIRP(BgL_cdrzd27029zd2_2692))
																																								{	/* Eval/evcompile.scm 83 */
																																									if (NULLP(CDR(BgL_cdrzd27029zd2_2692)))
																																										{
																																											obj_t
																																												BgL_valz00_8555;
																																											obj_t
																																												BgL_varz00_8554;
																																											BgL_varz00_8554
																																												=
																																												BgL_carzd27028zd2_2691;
																																											BgL_valz00_8555
																																												=
																																												CAR
																																												(BgL_cdrzd27029zd2_2692);
																																											BgL_valz00_2595
																																												=
																																												BgL_valz00_8555;
																																											BgL_varz00_2594
																																												=
																																												BgL_varz00_8554;
																																											goto
																																												BgL_tagzd26804zd2_2596;
																																										}
																																									else
																																										{	/* Eval/evcompile.scm 83 */
																																											goto
																																												BgL_tagzd26805zd2_2597;
																																										}
																																								}
																																							else
																																								{	/* Eval/evcompile.scm 83 */
																																									goto
																																										BgL_tagzd26805zd2_2597;
																																								}
																																						}
																																					else
																																						{	/* Eval/evcompile.scm 83 */
																																							goto
																																								BgL_tagzd26805zd2_2597;
																																						}
																																				}
																																		}
																																	else
																																		{	/* Eval/evcompile.scm 83 */
																																			goto
																																				BgL_tagzd26805zd2_2597;
																																		}
																																}
																															else
																																{	/* Eval/evcompile.scm 83 */
																																	goto
																																		BgL_tagzd26805zd2_2597;
																																}
																														}
																													}
																												else
																													{	/* Eval/evcompile.scm 83 */
																														obj_t
																															BgL_cdrzd24395zd2_1821;
																														BgL_cdrzd24395zd2_1821
																															=
																															CDR(BgL_expz00_5);
																														if ((CAR
																																(BgL_expz00_5)
																																==
																																BGl_symbol4352z00zz__evcompilez00))
																															{	/* Eval/evcompile.scm 83 */
																																if (PAIRP
																																	(BgL_cdrzd24395zd2_1821))
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_cdrzd24399zd2_1825;
																																		BgL_cdrzd24399zd2_1825
																																			=
																																			CDR
																																			(BgL_cdrzd24395zd2_1821);
																																		if (PAIRP
																																			(BgL_cdrzd24399zd2_1825))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (NULLP(CDR(BgL_cdrzd24399zd2_1825)))
																																					{	/* Eval/evcompile.scm 83 */
																																						BgL_escapez00_1274
																																							=
																																							CAR
																																							(BgL_cdrzd24395zd2_1821);
																																						BgL_bodyz00_1275
																																							=
																																							CAR
																																							(BgL_cdrzd24399zd2_1825);
																																						{	/* Eval/evcompile.scm 202 */
																																							obj_t
																																								BgL_locz00_2734;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4378;
																																								BgL__ortest_1065z00_4378
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_expz00_5);
																																								if (CBOOL(BgL__ortest_1065z00_4378))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2734
																																											=
																																											BgL__ortest_1065z00_4378;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2734
																																											=
																																											BgL_locz00_10;
																																									}
																																							}
																																							{	/* Eval/evcompile.scm 204 */
																																								obj_t
																																									BgL_arg2648z00_2735;
																																								{	/* Eval/evcompile.scm 204 */
																																									obj_t
																																										BgL_arg2649z00_2736;
																																									obj_t
																																										BgL_arg2650z00_2737;
																																									obj_t
																																										BgL_arg2651z00_2738;
																																									{	/* Eval/evcompile.scm 204 */
																																										obj_t
																																											BgL_arg2653z00_2739;
																																										{	/* Eval/evcompile.scm 204 */
																																											obj_t
																																												BgL_arg2654z00_2740;
																																											BgL_arg2654z00_2740
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_bodyz00_1275,
																																												BNIL);
																																											BgL_arg2653z00_2739
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_escapez00_1274,
																																												BgL_arg2654z00_2740);
																																										}
																																										BgL_arg2649z00_2736
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_symbol4328z00zz__evcompilez00,
																																											BgL_arg2653z00_2739);
																																									}
																																									BgL_arg2650z00_2737
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_escapez00_1274));
																																									{	/* Eval/evcompile.scm 65 */
																																										obj_t
																																											BgL__ortest_1065z00_4380;
																																										BgL__ortest_1065z00_4380
																																											=
																																											BGl_getzd2sourcezd2locationz00zz__readerz00
																																											(BgL_bodyz00_1275);
																																										if (CBOOL(BgL__ortest_1065z00_4380))
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2651z00_2738
																																													=
																																													BgL__ortest_1065z00_4380;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2651z00_2738
																																													=
																																													BgL_locz00_2734;
																																											}
																																									}
																																									BgL_arg2648z00_2735
																																										=
																																										BGl_evcompilez00zz__evcompilez00
																																										(BgL_arg2649z00_2736,
																																										BgL_envz00_6,
																																										BgL_genvz00_7,
																																										BgL_arg2650z00_2737,
																																										((bool_t) 0), BgL_arg2651z00_2738, BgL_lkpz00_11, ((bool_t) 0));
																																								}
																																								{	/* Eval/evcompile.scm 474 */
																																									obj_t
																																										BgL_v1177z00_4381;
																																									BgL_v1177z00_4381
																																										=
																																										create_vector
																																										(
																																										((long) 3));
																																									VECTOR_SET
																																										(BgL_v1177z00_4381,
																																										((long) 0), BINT(((long) 18)));
																																									VECTOR_SET
																																										(BgL_v1177z00_4381,
																																										((long) 1), BgL_locz00_2734);
																																									VECTOR_SET
																																										(BgL_v1177z00_4381,
																																										((long) 2), BgL_arg2648z00_2735);
																																									return
																																										BgL_v1177z00_4381;
																																								}
																																							}
																																						}
																																					}
																																				else
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_carzd24482zd2_1831;
																																						BgL_carzd24482zd2_1831
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						if (PAIRP(BgL_carzd24482zd2_1831))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_cdrzd24499zd2_1834;
																																								BgL_cdrzd24499zd2_1834
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_carzd24482zd2_1831));
																																								if ((CAR(((obj_t) BgL_carzd24482zd2_1831)) == BGl_symbol4324z00zz__evcompilez00))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (PAIRP(BgL_cdrzd24499zd2_1834))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd24502zd2_1838;
																																												obj_t
																																													BgL_cdrzd24503zd2_1839;
																																												BgL_carzd24502zd2_1838
																																													=
																																													CAR
																																													(BgL_cdrzd24499zd2_1834);
																																												BgL_cdrzd24503zd2_1839
																																													=
																																													CDR
																																													(BgL_cdrzd24499zd2_1834);
																																												if (SYMBOLP(BgL_carzd24502zd2_1838))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (PAIRP(BgL_cdrzd24503zd2_1839))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd24508zd2_1842;
																																																BgL_carzd24508zd2_1842
																																																	=
																																																	CAR
																																																	(BgL_cdrzd24503zd2_1839);
																																																if (SYMBOLP(BgL_carzd24508zd2_1842))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (NULLP(CDR(BgL_cdrzd24503zd2_1839)))
																																																			{
																																																				obj_t
																																																					BgL_argsz00_8613;
																																																				obj_t
																																																					BgL_modz00_8612;
																																																				obj_t
																																																					BgL_funz00_8611;
																																																				BgL_funz00_8611
																																																					=
																																																					BgL_carzd24502zd2_1838;
																																																				BgL_modz00_8612
																																																					=
																																																					BgL_carzd24508zd2_1842;
																																																				BgL_argsz00_8613
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1307
																																																					=
																																																					BgL_argsz00_8613;
																																																				BgL_modz00_1306
																																																					=
																																																					BgL_modz00_8612;
																																																				BgL_funz00_1305
																																																					=
																																																					BgL_funz00_8611;
																																																				goto
																																																					BgL_tagzd2278zd2_1308;
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_8617;
																																																				obj_t
																																																					BgL_funz00_8615;
																																																				BgL_funz00_8615
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_8617
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_8617;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_8615;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8621;
																																																		obj_t
																																																			BgL_funz00_8619;
																																																		BgL_funz00_8619
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_8621
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_8621;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_8619;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8625;
																																																obj_t
																																																	BgL_funz00_8623;
																																																BgL_funz00_8623
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8625
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8625;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8623;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8629;
																																														obj_t
																																															BgL_funz00_8627;
																																														BgL_funz00_8627
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8629
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8629;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8627;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8633;
																																												obj_t
																																													BgL_funz00_8631;
																																												BgL_funz00_8631
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8633
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8633;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8631;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8637;
																																										obj_t
																																											BgL_funz00_8635;
																																										BgL_funz00_8635
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8637
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8637;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8635;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8640;
																																								obj_t
																																									BgL_funz00_8639;
																																								BgL_funz00_8639
																																									=
																																									BgL_carzd24482zd2_1831;
																																								BgL_argsz00_8640
																																									=
																																									BgL_cdrzd24395zd2_1821;
																																								BgL_argsz00_1303
																																									=
																																									BgL_argsz00_8640;
																																								BgL_funz00_1302
																																									=
																																									BgL_funz00_8639;
																																								goto
																																									BgL_tagzd2277zd2_1304;
																																							}
																																					}
																																			}
																																		else
																																			{	/* Eval/evcompile.scm 83 */
																																				obj_t
																																					BgL_carzd24641zd2_1863;
																																				BgL_carzd24641zd2_1863
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				if (PAIRP(BgL_carzd24641zd2_1863))
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_cdrzd24658zd2_1866;
																																						BgL_cdrzd24658zd2_1866
																																							=
																																							CDR
																																							(((obj_t) BgL_carzd24641zd2_1863));
																																						if (
																																							(CAR
																																								(((obj_t) BgL_carzd24641zd2_1863)) == BGl_symbol4324z00zz__evcompilez00))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (PAIRP(BgL_cdrzd24658zd2_1866))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_carzd24661zd2_1870;
																																										obj_t
																																											BgL_cdrzd24662zd2_1871;
																																										BgL_carzd24661zd2_1870
																																											=
																																											CAR
																																											(BgL_cdrzd24658zd2_1866);
																																										BgL_cdrzd24662zd2_1871
																																											=
																																											CDR
																																											(BgL_cdrzd24658zd2_1866);
																																										if (SYMBOLP(BgL_carzd24661zd2_1870))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd24662zd2_1871))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd24667zd2_1874;
																																														BgL_carzd24667zd2_1874
																																															=
																																															CAR
																																															(BgL_cdrzd24662zd2_1871);
																																														if (SYMBOLP(BgL_carzd24667zd2_1874))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (NULLP(CDR(BgL_cdrzd24662zd2_1871)))
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8666;
																																																		obj_t
																																																			BgL_modz00_8665;
																																																		obj_t
																																																			BgL_funz00_8664;
																																																		BgL_funz00_8664
																																																			=
																																																			BgL_carzd24661zd2_1870;
																																																		BgL_modz00_8665
																																																			=
																																																			BgL_carzd24667zd2_1874;
																																																		BgL_argsz00_8666
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1307
																																																			=
																																																			BgL_argsz00_8666;
																																																		BgL_modz00_1306
																																																			=
																																																			BgL_modz00_8665;
																																																		BgL_funz00_1305
																																																			=
																																																			BgL_funz00_8664;
																																																		goto
																																																			BgL_tagzd2278zd2_1308;
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8670;
																																																		obj_t
																																																			BgL_funz00_8668;
																																																		BgL_funz00_8668
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_8670
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_8670;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_8668;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8674;
																																																obj_t
																																																	BgL_funz00_8672;
																																																BgL_funz00_8672
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8674
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8674;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8672;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8678;
																																														obj_t
																																															BgL_funz00_8676;
																																														BgL_funz00_8676
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8678
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8678;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8676;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8682;
																																												obj_t
																																													BgL_funz00_8680;
																																												BgL_funz00_8680
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8682
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8682;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8680;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8686;
																																										obj_t
																																											BgL_funz00_8684;
																																										BgL_funz00_8684
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8686
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8686;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8684;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8690;
																																								obj_t
																																									BgL_funz00_8688;
																																								BgL_funz00_8688
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8690
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8690;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8688;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8693;
																																						obj_t
																																							BgL_funz00_8692;
																																						BgL_funz00_8692
																																							=
																																							BgL_carzd24641zd2_1863;
																																						BgL_argsz00_8693
																																							=
																																							BgL_cdrzd24395zd2_1821;
																																						BgL_argsz00_1303
																																							=
																																							BgL_argsz00_8693;
																																						BgL_funz00_1302
																																							=
																																							BgL_funz00_8692;
																																						goto
																																							BgL_tagzd2277zd2_1304;
																																					}
																																			}
																																	}
																																else
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_carzd24800zd2_1894;
																																		BgL_carzd24800zd2_1894
																																			=
																																			CAR
																																			(BgL_expz00_5);
																																		if (PAIRP
																																			(BgL_carzd24800zd2_1894))
																																			{	/* Eval/evcompile.scm 83 */
																																				obj_t
																																					BgL_cdrzd24817zd2_1897;
																																				BgL_cdrzd24817zd2_1897
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_carzd24800zd2_1894));
																																				if ((CAR
																																						(((obj_t) BgL_carzd24800zd2_1894)) == BGl_symbol4324z00zz__evcompilez00))
																																					{	/* Eval/evcompile.scm 83 */
																																						if (PAIRP(BgL_cdrzd24817zd2_1897))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_carzd24820zd2_1901;
																																								obj_t
																																									BgL_cdrzd24821zd2_1902;
																																								BgL_carzd24820zd2_1901
																																									=
																																									CAR
																																									(BgL_cdrzd24817zd2_1897);
																																								BgL_cdrzd24821zd2_1902
																																									=
																																									CDR
																																									(BgL_cdrzd24817zd2_1897);
																																								if (SYMBOLP(BgL_carzd24820zd2_1901))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (PAIRP(BgL_cdrzd24821zd2_1902))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd24826zd2_1905;
																																												BgL_carzd24826zd2_1905
																																													=
																																													CAR
																																													(BgL_cdrzd24821zd2_1902);
																																												if (SYMBOLP(BgL_carzd24826zd2_1905))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (NULLP(CDR(BgL_cdrzd24821zd2_1902)))
																																															{
																																																obj_t
																																																	BgL_argsz00_8719;
																																																obj_t
																																																	BgL_modz00_8718;
																																																obj_t
																																																	BgL_funz00_8717;
																																																BgL_funz00_8717
																																																	=
																																																	BgL_carzd24820zd2_1901;
																																																BgL_modz00_8718
																																																	=
																																																	BgL_carzd24826zd2_1905;
																																																BgL_argsz00_8719
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1307
																																																	=
																																																	BgL_argsz00_8719;
																																																BgL_modz00_1306
																																																	=
																																																	BgL_modz00_8718;
																																																BgL_funz00_1305
																																																	=
																																																	BgL_funz00_8717;
																																																goto
																																																	BgL_tagzd2278zd2_1308;
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8723;
																																																obj_t
																																																	BgL_funz00_8721;
																																																BgL_funz00_8721
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8723
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8723;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8721;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8727;
																																														obj_t
																																															BgL_funz00_8725;
																																														BgL_funz00_8725
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8727
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8727;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8725;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8731;
																																												obj_t
																																													BgL_funz00_8729;
																																												BgL_funz00_8729
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8731
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8731;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8729;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8735;
																																										obj_t
																																											BgL_funz00_8733;
																																										BgL_funz00_8733
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8735
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8735;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8733;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8739;
																																								obj_t
																																									BgL_funz00_8737;
																																								BgL_funz00_8737
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8739
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8739;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8737;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8743;
																																						obj_t
																																							BgL_funz00_8741;
																																						BgL_funz00_8741
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						BgL_argsz00_8743
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1310
																																							=
																																							BgL_argsz00_8743;
																																						BgL_funz00_1309
																																							=
																																							BgL_funz00_8741;
																																						goto
																																							BgL_tagzd2279zd2_1311;
																																					}
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_argsz00_8746;
																																				obj_t
																																					BgL_funz00_8745;
																																				BgL_funz00_8745
																																					=
																																					BgL_carzd24800zd2_1894;
																																				BgL_argsz00_8746
																																					=
																																					BgL_cdrzd24395zd2_1821;
																																				BgL_argsz00_1303
																																					=
																																					BgL_argsz00_8746;
																																				BgL_funz00_1302
																																					=
																																					BgL_funz00_8745;
																																				goto
																																					BgL_tagzd2277zd2_1304;
																																			}
																																	}
																															}
																														else
																															{	/* Eval/evcompile.scm 83 */
																																if (
																																	(CAR
																																		(BgL_expz00_5)
																																		==
																																		BGl_symbol4354z00zz__evcompilez00))
																																	{	/* Eval/evcompile.scm 83 */
																																		if (PAIRP
																																			(BgL_cdrzd24395zd2_1821))
																																			{	/* Eval/evcompile.scm 83 */
																																				BgL_bodyz00_1277
																																					=
																																					CAR
																																					(BgL_cdrzd24395zd2_1821);
																																				BgL_protectz00_1278
																																					=
																																					CDR
																																					(BgL_cdrzd24395zd2_1821);
																																				{	/* Eval/evcompile.scm 211 */
																																					obj_t
																																						BgL_locz00_2741;
																																					{	/* Eval/evcompile.scm 65 */
																																						obj_t
																																							BgL__ortest_1065z00_4385;
																																						BgL__ortest_1065z00_4385
																																							=
																																							BGl_getzd2sourcezd2locationz00zz__readerz00
																																							(BgL_expz00_5);
																																						if (CBOOL(BgL__ortest_1065z00_4385))
																																							{	/* Eval/evcompile.scm 65 */
																																								BgL_locz00_2741
																																									=
																																									BgL__ortest_1065z00_4385;
																																							}
																																						else
																																							{	/* Eval/evcompile.scm 65 */
																																								BgL_locz00_2741
																																									=
																																									BgL_locz00_10;
																																							}
																																					}
																																					{	/* Eval/evcompile.scm 215 */
																																						obj_t
																																							BgL_arg2655z00_2742;
																																						obj_t
																																							BgL_arg2656z00_2743;
																																						{	/* Eval/evcompile.scm 215 */
																																							obj_t
																																								BgL_arg2657z00_2744;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4386;
																																								BgL__ortest_1065z00_4386
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_bodyz00_1277);
																																								if (CBOOL(BgL__ortest_1065z00_4386))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_arg2657z00_2744
																																											=
																																											BgL__ortest_1065z00_4386;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_arg2657z00_2744
																																											=
																																											BgL_locz00_2741;
																																									}
																																							}
																																							BgL_arg2655z00_2742
																																								=
																																								BGl_evcompilez00zz__evcompilez00
																																								(BgL_bodyz00_1277,
																																								BgL_envz00_6,
																																								BgL_genvz00_7,
																																								BgL_wherez00_8,
																																								((bool_t) 0), BgL_arg2657z00_2744, BgL_lkpz00_11, ((bool_t) 0));
																																						}
																																						{	/* Eval/evcompile.scm 219 */
																																							obj_t
																																								BgL_arg2658z00_2745;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4387;
																																								BgL__ortest_1065z00_4387
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_protectz00_1278);
																																								if (CBOOL(BgL__ortest_1065z00_4387))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_arg2658z00_2745
																																											=
																																											BgL__ortest_1065z00_4387;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_arg2658z00_2745
																																											=
																																											BgL_locz00_2741;
																																									}
																																							}
																																							BgL_arg2656z00_2743
																																								=
																																								BGl_evcompilezd2beginzd2zz__evcompilez00
																																								(BgL_protectz00_1278,
																																								BgL_envz00_6,
																																								BgL_genvz00_7,
																																								BgL_wherez00_8,
																																								((bool_t) 0), BgL_arg2658z00_2745, BgL_lkpz00_11, ((bool_t) 0));
																																						}
																																						{	/* Eval/evcompile.scm 480 */
																																							obj_t
																																								BgL_v1178z00_4388;
																																							BgL_v1178z00_4388
																																								=
																																								create_vector
																																								(
																																								((long) 4));
																																							VECTOR_SET
																																								(BgL_v1178z00_4388,
																																								((long) 0), BINT(((long) 64)));
																																							VECTOR_SET
																																								(BgL_v1178z00_4388,
																																								((long) 1), BgL_locz00_2741);
																																							VECTOR_SET
																																								(BgL_v1178z00_4388,
																																								((long) 2), BgL_arg2655z00_2742);
																																							VECTOR_SET
																																								(BgL_v1178z00_4388,
																																								((long) 3), BgL_arg2656z00_2743);
																																							return
																																								BgL_v1178z00_4388;
																																						}
																																					}
																																				}
																																			}
																																		else
																																			{	/* Eval/evcompile.scm 83 */
																																				obj_t
																																					BgL_carzd24967zd2_1931;
																																				BgL_carzd24967zd2_1931
																																					=
																																					CAR
																																					(BgL_expz00_5);
																																				if (PAIRP(BgL_carzd24967zd2_1931))
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_cdrzd24984zd2_1934;
																																						BgL_cdrzd24984zd2_1934
																																							=
																																							CDR
																																							(((obj_t) BgL_carzd24967zd2_1931));
																																						if (
																																							(CAR
																																								(((obj_t) BgL_carzd24967zd2_1931)) == BGl_symbol4324z00zz__evcompilez00))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (PAIRP(BgL_cdrzd24984zd2_1934))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_carzd24987zd2_1938;
																																										obj_t
																																											BgL_cdrzd24988zd2_1939;
																																										BgL_carzd24987zd2_1938
																																											=
																																											CAR
																																											(BgL_cdrzd24984zd2_1934);
																																										BgL_cdrzd24988zd2_1939
																																											=
																																											CDR
																																											(BgL_cdrzd24984zd2_1934);
																																										if (SYMBOLP(BgL_carzd24987zd2_1938))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd24988zd2_1939))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd24993zd2_1942;
																																														BgL_carzd24993zd2_1942
																																															=
																																															CAR
																																															(BgL_cdrzd24988zd2_1939);
																																														if (SYMBOLP(BgL_carzd24993zd2_1942))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (NULLP(CDR(BgL_cdrzd24988zd2_1939)))
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8796;
																																																		obj_t
																																																			BgL_modz00_8795;
																																																		obj_t
																																																			BgL_funz00_8794;
																																																		BgL_funz00_8794
																																																			=
																																																			BgL_carzd24987zd2_1938;
																																																		BgL_modz00_8795
																																																			=
																																																			BgL_carzd24993zd2_1942;
																																																		BgL_argsz00_8796
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1307
																																																			=
																																																			BgL_argsz00_8796;
																																																		BgL_modz00_1306
																																																			=
																																																			BgL_modz00_8795;
																																																		BgL_funz00_1305
																																																			=
																																																			BgL_funz00_8794;
																																																		goto
																																																			BgL_tagzd2278zd2_1308;
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8800;
																																																		obj_t
																																																			BgL_funz00_8798;
																																																		BgL_funz00_8798
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_8800
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_8800;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_8798;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8804;
																																																obj_t
																																																	BgL_funz00_8802;
																																																BgL_funz00_8802
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8804
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8804;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8802;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8808;
																																														obj_t
																																															BgL_funz00_8806;
																																														BgL_funz00_8806
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8808
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8808;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8806;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8812;
																																												obj_t
																																													BgL_funz00_8810;
																																												BgL_funz00_8810
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8812
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8812;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8810;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8816;
																																										obj_t
																																											BgL_funz00_8814;
																																										BgL_funz00_8814
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8816
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8816;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8814;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8820;
																																								obj_t
																																									BgL_funz00_8818;
																																								BgL_funz00_8818
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								BgL_argsz00_8820
																																									=
																																									CDR
																																									(BgL_expz00_5);
																																								BgL_argsz00_1310
																																									=
																																									BgL_argsz00_8820;
																																								BgL_funz00_1309
																																									=
																																									BgL_funz00_8818;
																																								goto
																																									BgL_tagzd2279zd2_1311;
																																							}
																																					}
																																				else
																																					{
																																						obj_t
																																							BgL_argsz00_8823;
																																						obj_t
																																							BgL_funz00_8822;
																																						BgL_funz00_8822
																																							=
																																							BgL_carzd24967zd2_1931;
																																						BgL_argsz00_8823
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						BgL_argsz00_1303
																																							=
																																							BgL_argsz00_8823;
																																						BgL_funz00_1302
																																							=
																																							BgL_funz00_8822;
																																						goto
																																							BgL_tagzd2277zd2_1304;
																																					}
																																			}
																																	}
																																else
																																	{	/* Eval/evcompile.scm 83 */
																																		obj_t
																																			BgL_cdrzd25061zd2_1962;
																																		BgL_cdrzd25061zd2_1962
																																			=
																																			CDR
																																			(BgL_expz00_5);
																																		if ((CAR
																																				(BgL_expz00_5)
																																				==
																																				BGl_symbol4356z00zz__evcompilez00))
																																			{	/* Eval/evcompile.scm 83 */
																																				if (PAIRP(BgL_cdrzd25061zd2_1962))
																																					{	/* Eval/evcompile.scm 83 */
																																						BgL_handlerz00_1280
																																							=
																																							CAR
																																							(BgL_cdrzd25061zd2_1962);
																																						BgL_bodyz00_1281
																																							=
																																							CDR
																																							(BgL_cdrzd25061zd2_1962);
																																						{	/* Eval/evcompile.scm 223 */
																																							obj_t
																																								BgL_locz00_2746;
																																							{	/* Eval/evcompile.scm 65 */
																																								obj_t
																																									BgL__ortest_1065z00_4393;
																																								BgL__ortest_1065z00_4393
																																									=
																																									BGl_getzd2sourcezd2locationz00zz__readerz00
																																									(BgL_expz00_5);
																																								if (CBOOL(BgL__ortest_1065z00_4393))
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2746
																																											=
																																											BgL__ortest_1065z00_4393;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 65 */
																																										BgL_locz00_2746
																																											=
																																											BgL_locz00_10;
																																									}
																																							}
																																							{	/* Eval/evcompile.scm 227 */
																																								obj_t
																																									BgL_arg2659z00_2747;
																																								obj_t
																																									BgL_arg2661z00_2748;
																																								{	/* Eval/evcompile.scm 227 */
																																									obj_t
																																										BgL_arg2662z00_2749;
																																									{	/* Eval/evcompile.scm 65 */
																																										obj_t
																																											BgL__ortest_1065z00_4394;
																																										BgL__ortest_1065z00_4394
																																											=
																																											BGl_getzd2sourcezd2locationz00zz__readerz00
																																											(BgL_handlerz00_1280);
																																										if (CBOOL(BgL__ortest_1065z00_4394))
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2662z00_2749
																																													=
																																													BgL__ortest_1065z00_4394;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2662z00_2749
																																													=
																																													BgL_locz00_2746;
																																											}
																																									}
																																									BgL_arg2659z00_2747
																																										=
																																										BGl_evcompilez00zz__evcompilez00
																																										(BgL_handlerz00_1280,
																																										BgL_envz00_6,
																																										BgL_genvz00_7,
																																										BgL_wherez00_8,
																																										((bool_t) 0), BgL_arg2662z00_2749, BgL_lkpz00_11, ((bool_t) 0));
																																								}
																																								{	/* Eval/evcompile.scm 231 */
																																									obj_t
																																										BgL_arg2663z00_2750;
																																									{	/* Eval/evcompile.scm 65 */
																																										obj_t
																																											BgL__ortest_1065z00_4395;
																																										BgL__ortest_1065z00_4395
																																											=
																																											BGl_getzd2sourcezd2locationz00zz__readerz00
																																											(BgL_bodyz00_1281);
																																										if (CBOOL(BgL__ortest_1065z00_4395))
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2663z00_2750
																																													=
																																													BgL__ortest_1065z00_4395;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 65 */
																																												BgL_arg2663z00_2750
																																													=
																																													BgL_locz00_2746;
																																											}
																																									}
																																									BgL_arg2661z00_2748
																																										=
																																										BGl_evcompilezd2beginzd2zz__evcompilez00
																																										(BgL_bodyz00_1281,
																																										BgL_envz00_6,
																																										BgL_genvz00_7,
																																										BgL_wherez00_8,
																																										((bool_t) 0), BgL_arg2663z00_2750, BgL_lkpz00_11, ((bool_t) 0));
																																								}
																																								{	/* Eval/evcompile.scm 486 */
																																									obj_t
																																										BgL_v1179z00_4396;
																																									BgL_v1179z00_4396
																																										=
																																										create_vector
																																										(
																																										((long) 4));
																																									VECTOR_SET
																																										(BgL_v1179z00_4396,
																																										((long) 0), BINT(((long) 71)));
																																									VECTOR_SET
																																										(BgL_v1179z00_4396,
																																										((long) 1), BgL_locz00_2746);
																																									VECTOR_SET
																																										(BgL_v1179z00_4396,
																																										((long) 2), BgL_arg2659z00_2747);
																																									VECTOR_SET
																																										(BgL_v1179z00_4396,
																																										((long) 3), BgL_arg2661z00_2748);
																																									return
																																										BgL_v1179z00_4396;
																																								}
																																							}
																																						}
																																					}
																																				else
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_carzd25122zd2_1968;
																																						BgL_carzd25122zd2_1968
																																							=
																																							CAR
																																							(BgL_expz00_5);
																																						if (PAIRP(BgL_carzd25122zd2_1968))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_cdrzd25139zd2_1971;
																																								BgL_cdrzd25139zd2_1971
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_carzd25122zd2_1968));
																																								if ((CAR(((obj_t) BgL_carzd25122zd2_1968)) == BGl_symbol4324z00zz__evcompilez00))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (PAIRP(BgL_cdrzd25139zd2_1971))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd25142zd2_1975;
																																												obj_t
																																													BgL_cdrzd25143zd2_1976;
																																												BgL_carzd25142zd2_1975
																																													=
																																													CAR
																																													(BgL_cdrzd25139zd2_1971);
																																												BgL_cdrzd25143zd2_1976
																																													=
																																													CDR
																																													(BgL_cdrzd25139zd2_1971);
																																												if (SYMBOLP(BgL_carzd25142zd2_1975))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (PAIRP(BgL_cdrzd25143zd2_1976))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd25148zd2_1979;
																																																BgL_carzd25148zd2_1979
																																																	=
																																																	CAR
																																																	(BgL_cdrzd25143zd2_1976);
																																																if (SYMBOLP(BgL_carzd25148zd2_1979))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (NULLP(CDR(BgL_cdrzd25143zd2_1976)))
																																																			{
																																																				obj_t
																																																					BgL_argsz00_8875;
																																																				obj_t
																																																					BgL_modz00_8874;
																																																				obj_t
																																																					BgL_funz00_8873;
																																																				BgL_funz00_8873
																																																					=
																																																					BgL_carzd25142zd2_1975;
																																																				BgL_modz00_8874
																																																					=
																																																					BgL_carzd25148zd2_1979;
																																																				BgL_argsz00_8875
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1307
																																																					=
																																																					BgL_argsz00_8875;
																																																				BgL_modz00_1306
																																																					=
																																																					BgL_modz00_8874;
																																																				BgL_funz00_1305
																																																					=
																																																					BgL_funz00_8873;
																																																				goto
																																																					BgL_tagzd2278zd2_1308;
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_8879;
																																																				obj_t
																																																					BgL_funz00_8877;
																																																				BgL_funz00_8877
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_8879
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_8879;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_8877;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_8883;
																																																		obj_t
																																																			BgL_funz00_8881;
																																																		BgL_funz00_8881
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_8883
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_8883;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_8881;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_8887;
																																																obj_t
																																																	BgL_funz00_8885;
																																																BgL_funz00_8885
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_8887
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_8887;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_8885;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_8891;
																																														obj_t
																																															BgL_funz00_8889;
																																														BgL_funz00_8889
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_8891
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_8891;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_8889;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_8895;
																																												obj_t
																																													BgL_funz00_8893;
																																												BgL_funz00_8893
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_8895
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_8895;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_8893;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_8899;
																																										obj_t
																																											BgL_funz00_8897;
																																										BgL_funz00_8897
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										BgL_argsz00_8899
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1310
																																											=
																																											BgL_argsz00_8899;
																																										BgL_funz00_1309
																																											=
																																											BgL_funz00_8897;
																																										goto
																																											BgL_tagzd2279zd2_1311;
																																									}
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_argsz00_8902;
																																								obj_t
																																									BgL_funz00_8901;
																																								BgL_funz00_8901
																																									=
																																									BgL_carzd25122zd2_1968;
																																								BgL_argsz00_8902
																																									=
																																									BgL_cdrzd25061zd2_1962;
																																								BgL_argsz00_1303
																																									=
																																									BgL_argsz00_8902;
																																								BgL_funz00_1302
																																									=
																																									BgL_funz00_8901;
																																								goto
																																									BgL_tagzd2277zd2_1304;
																																							}
																																					}
																																			}
																																		else
																																			{	/* Eval/evcompile.scm 83 */
																																				if (
																																					(CAR
																																						(BgL_expz00_5)
																																						==
																																						BGl_symbol4358z00zz__evcompilez00))
																																					{	/* Eval/evcompile.scm 83 */
																																						if (PAIRP(BgL_cdrzd25061zd2_1962))
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_cdrzd25221zd2_2003;
																																								BgL_cdrzd25221zd2_2003
																																									=
																																									CDR
																																									(BgL_cdrzd25061zd2_1962);
																																								if (PAIRP(BgL_cdrzd25221zd2_2003))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_cdrzd25226zd2_2005;
																																										BgL_cdrzd25226zd2_2005
																																											=
																																											CDR
																																											(BgL_cdrzd25221zd2_2003);
																																										if ((CAR(BgL_cdrzd25221zd2_2003) == BGl_keyword4360z00zz__evcompilez00))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd25226zd2_2005))
																																													{	/* Eval/evcompile.scm 83 */
																																														BgL_mutexz00_1283
																																															=
																																															CAR
																																															(BgL_cdrzd25061zd2_1962);
																																														BgL_prelockz00_1284
																																															=
																																															CAR
																																															(BgL_cdrzd25226zd2_2005);
																																														BgL_bodyz00_1285
																																															=
																																															CDR
																																															(BgL_cdrzd25226zd2_2005);
																																														{	/* Eval/evcompile.scm 235 */
																																															obj_t
																																																BgL_locz00_2751;
																																															{	/* Eval/evcompile.scm 65 */
																																																obj_t
																																																	BgL__ortest_1065z00_4401;
																																																BgL__ortest_1065z00_4401
																																																	=
																																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																																	(BgL_expz00_5);
																																																if (CBOOL(BgL__ortest_1065z00_4401))
																																																	{	/* Eval/evcompile.scm 65 */
																																																		BgL_locz00_2751
																																																			=
																																																			BgL__ortest_1065z00_4401;
																																																	}
																																																else
																																																	{	/* Eval/evcompile.scm 65 */
																																																		BgL_locz00_2751
																																																			=
																																																			BgL_locz00_10;
																																																	}
																																															}
																																															{	/* Eval/evcompile.scm 239 */
																																																obj_t
																																																	BgL_arg2664z00_2752;
																																																obj_t
																																																	BgL_arg2665z00_2753;
																																																obj_t
																																																	BgL_arg2666z00_2754;
																																																{	/* Eval/evcompile.scm 239 */
																																																	obj_t
																																																		BgL_arg2667z00_2755;
																																																	{	/* Eval/evcompile.scm 65 */
																																																		obj_t
																																																			BgL__ortest_1065z00_4402;
																																																		BgL__ortest_1065z00_4402
																																																			=
																																																			BGl_getzd2sourcezd2locationz00zz__readerz00
																																																			(BgL_mutexz00_1283);
																																																		if (CBOOL(BgL__ortest_1065z00_4402))
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2667z00_2755
																																																					=
																																																					BgL__ortest_1065z00_4402;
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2667z00_2755
																																																					=
																																																					BgL_locz00_2751;
																																																			}
																																																	}
																																																	BgL_arg2664z00_2752
																																																		=
																																																		BGl_evcompilez00zz__evcompilez00
																																																		(BgL_mutexz00_1283,
																																																		BgL_envz00_6,
																																																		BgL_genvz00_7,
																																																		BgL_wherez00_8,
																																																		((bool_t) 0), BgL_arg2667z00_2755, BgL_lkpz00_11, ((bool_t) 0));
																																																}
																																																{	/* Eval/evcompile.scm 243 */
																																																	obj_t
																																																		BgL_arg2669z00_2756;
																																																	{	/* Eval/evcompile.scm 65 */
																																																		obj_t
																																																			BgL__ortest_1065z00_4403;
																																																		BgL__ortest_1065z00_4403
																																																			=
																																																			BGl_getzd2sourcezd2locationz00zz__readerz00
																																																			(BgL_mutexz00_1283);
																																																		if (CBOOL(BgL__ortest_1065z00_4403))
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2669z00_2756
																																																					=
																																																					BgL__ortest_1065z00_4403;
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2669z00_2756
																																																					=
																																																					BgL_locz00_2751;
																																																			}
																																																	}
																																																	BgL_arg2665z00_2753
																																																		=
																																																		BGl_evcompilez00zz__evcompilez00
																																																		(BgL_prelockz00_1284,
																																																		BgL_envz00_6,
																																																		BgL_genvz00_7,
																																																		BgL_wherez00_8,
																																																		((bool_t) 0), BgL_arg2669z00_2756, BgL_lkpz00_11, ((bool_t) 0));
																																																}
																																																{	/* Eval/evcompile.scm 247 */
																																																	obj_t
																																																		BgL_arg2670z00_2757;
																																																	{	/* Eval/evcompile.scm 65 */
																																																		obj_t
																																																			BgL__ortest_1065z00_4404;
																																																		BgL__ortest_1065z00_4404
																																																			=
																																																			BGl_getzd2sourcezd2locationz00zz__readerz00
																																																			(BgL_bodyz00_1285);
																																																		if (CBOOL(BgL__ortest_1065z00_4404))
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2670z00_2757
																																																					=
																																																					BgL__ortest_1065z00_4404;
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2670z00_2757
																																																					=
																																																					BgL_locz00_2751;
																																																			}
																																																	}
																																																	BgL_arg2666z00_2754
																																																		=
																																																		BGl_evcompilezd2beginzd2zz__evcompilez00
																																																		(BgL_bodyz00_1285,
																																																		BgL_envz00_6,
																																																		BgL_genvz00_7,
																																																		BgL_wherez00_8,
																																																		((bool_t) 0), BgL_arg2670z00_2757, BgL_lkpz00_11, ((bool_t) 0));
																																																}
																																																{	/* Eval/evcompile.scm 498 */
																																																	obj_t
																																																		BgL_v1181z00_4405;
																																																	BgL_v1181z00_4405
																																																		=
																																																		create_vector
																																																		(
																																																		((long) 5));
																																																	VECTOR_SET
																																																		(BgL_v1181z00_4405,
																																																		((long) 0), BINT(((long) 176)));
																																																	VECTOR_SET
																																																		(BgL_v1181z00_4405,
																																																		((long) 1), BgL_locz00_2751);
																																																	VECTOR_SET
																																																		(BgL_v1181z00_4405,
																																																		((long) 2), BgL_arg2664z00_2752);
																																																	VECTOR_SET
																																																		(BgL_v1181z00_4405,
																																																		((long) 3), BgL_arg2665z00_2753);
																																																	VECTOR_SET
																																																		(BgL_v1181z00_4405,
																																																		((long) 4), BgL_arg2666z00_2754);
																																																	return
																																																		BgL_v1181z00_4405;
																																																}
																																															}
																																														}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_cdrzd25244zd2_2012;
																																														BgL_cdrzd25244zd2_2012
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														{	/* Eval/evcompile.scm 83 */
																																															obj_t
																																																BgL_arg2031z00_2013;
																																															obj_t
																																																BgL_arg2033z00_2014;
																																															BgL_arg2031z00_2013
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd25244zd2_2012));
																																															BgL_arg2033z00_2014
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd25244zd2_2012));
																																															BgL_mutexz00_1287
																																																=
																																																BgL_arg2031z00_2013;
																																															BgL_bodyz00_1288
																																																=
																																																BgL_arg2033z00_2014;
																																														BgL_tagzd2272zd2_1289:
																																															{	/* Eval/evcompile.scm 251 */
																																																obj_t
																																																	BgL_locz00_2758;
																																																{	/* Eval/evcompile.scm 65 */
																																																	obj_t
																																																		BgL__ortest_1065z00_4411;
																																																	BgL__ortest_1065z00_4411
																																																		=
																																																		BGl_getzd2sourcezd2locationz00zz__readerz00
																																																		(BgL_expz00_5);
																																																	if (CBOOL(BgL__ortest_1065z00_4411))
																																																		{	/* Eval/evcompile.scm 65 */
																																																			BgL_locz00_2758
																																																				=
																																																				BgL__ortest_1065z00_4411;
																																																		}
																																																	else
																																																		{	/* Eval/evcompile.scm 65 */
																																																			BgL_locz00_2758
																																																				=
																																																				BgL_locz00_10;
																																																		}
																																																}
																																																{	/* Eval/evcompile.scm 255 */
																																																	obj_t
																																																		BgL_arg2671z00_2759;
																																																	obj_t
																																																		BgL_arg2673z00_2760;
																																																	{	/* Eval/evcompile.scm 255 */
																																																		obj_t
																																																			BgL_arg2675z00_2761;
																																																		{	/* Eval/evcompile.scm 65 */
																																																			obj_t
																																																				BgL__ortest_1065z00_4412;
																																																			BgL__ortest_1065z00_4412
																																																				=
																																																				BGl_getzd2sourcezd2locationz00zz__readerz00
																																																				(BgL_mutexz00_1287);
																																																			if (CBOOL(BgL__ortest_1065z00_4412))
																																																				{	/* Eval/evcompile.scm 65 */
																																																					BgL_arg2675z00_2761
																																																						=
																																																						BgL__ortest_1065z00_4412;
																																																				}
																																																			else
																																																				{	/* Eval/evcompile.scm 65 */
																																																					BgL_arg2675z00_2761
																																																						=
																																																						BgL_locz00_2758;
																																																				}
																																																		}
																																																		BgL_arg2671z00_2759
																																																			=
																																																			BGl_evcompilez00zz__evcompilez00
																																																			(BgL_mutexz00_1287,
																																																			BgL_envz00_6,
																																																			BgL_genvz00_7,
																																																			BgL_wherez00_8,
																																																			((bool_t) 0), BgL_arg2675z00_2761, BgL_lkpz00_11, ((bool_t) 0));
																																																	}
																																																	{	/* Eval/evcompile.scm 259 */
																																																		obj_t
																																																			BgL_arg2676z00_2762;
																																																		{	/* Eval/evcompile.scm 65 */
																																																			obj_t
																																																				BgL__ortest_1065z00_4413;
																																																			BgL__ortest_1065z00_4413
																																																				=
																																																				BGl_getzd2sourcezd2locationz00zz__readerz00
																																																				(BgL_bodyz00_1288);
																																																			if (CBOOL(BgL__ortest_1065z00_4413))
																																																				{	/* Eval/evcompile.scm 65 */
																																																					BgL_arg2676z00_2762
																																																						=
																																																						BgL__ortest_1065z00_4413;
																																																				}
																																																			else
																																																				{	/* Eval/evcompile.scm 65 */
																																																					BgL_arg2676z00_2762
																																																						=
																																																						BgL_locz00_2758;
																																																				}
																																																		}
																																																		BgL_arg2673z00_2760
																																																			=
																																																			BGl_evcompilezd2beginzd2zz__evcompilez00
																																																			(BgL_bodyz00_1288,
																																																			BgL_envz00_6,
																																																			BgL_genvz00_7,
																																																			BgL_wherez00_8,
																																																			((bool_t) 0), BgL_arg2676z00_2762, BgL_lkpz00_11, ((bool_t) 0));
																																																	}
																																																	{	/* Eval/evcompile.scm 492 */
																																																		obj_t
																																																			BgL_v1180z00_4414;
																																																		BgL_v1180z00_4414
																																																			=
																																																			create_vector
																																																			(
																																																			((long) 4));
																																																		VECTOR_SET
																																																			(BgL_v1180z00_4414,
																																																			((long) 0), BINT(((long) 175)));
																																																		VECTOR_SET
																																																			(BgL_v1180z00_4414,
																																																			((long) 1), BgL_locz00_2758);
																																																		VECTOR_SET
																																																			(BgL_v1180z00_4414,
																																																			((long) 2), BgL_arg2671z00_2759);
																																																		VECTOR_SET
																																																			(BgL_v1180z00_4414,
																																																			((long) 3), BgL_arg2673z00_2760);
																																																		return
																																																			BgL_v1180z00_4414;
																																																	}
																																																}
																																															}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_cdrzd25264zd2_2015;
																																												BgL_cdrzd25264zd2_2015
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												{	/* Eval/evcompile.scm 83 */
																																													obj_t
																																														BgL_arg2034z00_2016;
																																													obj_t
																																														BgL_arg2035z00_2017;
																																													BgL_arg2034z00_2016
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd25264zd2_2015));
																																													BgL_arg2035z00_2017
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd25264zd2_2015));
																																													{
																																														obj_t
																																															BgL_bodyz00_8970;
																																														obj_t
																																															BgL_mutexz00_8969;
																																														BgL_mutexz00_8969
																																															=
																																															BgL_arg2034z00_2016;
																																														BgL_bodyz00_8970
																																															=
																																															BgL_arg2035z00_2017;
																																														BgL_bodyz00_1288
																																															=
																																															BgL_bodyz00_8970;
																																														BgL_mutexz00_1287
																																															=
																																															BgL_mutexz00_8969;
																																														goto
																																															BgL_tagzd2272zd2_1289;
																																													}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_cdrzd25284zd2_2019;
																																										BgL_cdrzd25284zd2_2019
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										{	/* Eval/evcompile.scm 83 */
																																											obj_t
																																												BgL_arg2037z00_2020;
																																											obj_t
																																												BgL_arg2038z00_2021;
																																											BgL_arg2037z00_2020
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd25284zd2_2019));
																																											BgL_arg2038z00_2021
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd25284zd2_2019));
																																											{
																																												obj_t
																																													BgL_bodyz00_8977;
																																												obj_t
																																													BgL_mutexz00_8976;
																																												BgL_mutexz00_8976
																																													=
																																													BgL_arg2037z00_2020;
																																												BgL_bodyz00_8977
																																													=
																																													BgL_arg2038z00_2021;
																																												BgL_bodyz00_1288
																																													=
																																													BgL_bodyz00_8977;
																																												BgL_mutexz00_1287
																																													=
																																													BgL_mutexz00_8976;
																																												goto
																																													BgL_tagzd2272zd2_1289;
																																											}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Eval/evcompile.scm 83 */
																																								obj_t
																																									BgL_carzd25336zd2_2022;
																																								BgL_carzd25336zd2_2022
																																									=
																																									CAR
																																									(BgL_expz00_5);
																																								if (PAIRP(BgL_carzd25336zd2_2022))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_cdrzd25353zd2_2025;
																																										BgL_cdrzd25353zd2_2025
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_carzd25336zd2_2022));
																																										if ((CAR(((obj_t) BgL_carzd25336zd2_2022)) == BGl_symbol4324z00zz__evcompilez00))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd25353zd2_2025))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd25356zd2_2029;
																																														obj_t
																																															BgL_cdrzd25357zd2_2030;
																																														BgL_carzd25356zd2_2029
																																															=
																																															CAR
																																															(BgL_cdrzd25353zd2_2025);
																																														BgL_cdrzd25357zd2_2030
																																															=
																																															CDR
																																															(BgL_cdrzd25353zd2_2025);
																																														if (SYMBOLP(BgL_carzd25356zd2_2029))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (PAIRP(BgL_cdrzd25357zd2_2030))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_carzd25362zd2_2033;
																																																		BgL_carzd25362zd2_2033
																																																			=
																																																			CAR
																																																			(BgL_cdrzd25357zd2_2030);
																																																		if (SYMBOLP(BgL_carzd25362zd2_2033))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (NULLP(CDR(BgL_cdrzd25357zd2_2030)))
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9003;
																																																						obj_t
																																																							BgL_modz00_9002;
																																																						obj_t
																																																							BgL_funz00_9001;
																																																						BgL_funz00_9001
																																																							=
																																																							BgL_carzd25356zd2_2029;
																																																						BgL_modz00_9002
																																																							=
																																																							BgL_carzd25362zd2_2033;
																																																						BgL_argsz00_9003
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1307
																																																							=
																																																							BgL_argsz00_9003;
																																																						BgL_modz00_1306
																																																							=
																																																							BgL_modz00_9002;
																																																						BgL_funz00_1305
																																																							=
																																																							BgL_funz00_9001;
																																																						goto
																																																							BgL_tagzd2278zd2_1308;
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9007;
																																																						obj_t
																																																							BgL_funz00_9005;
																																																						BgL_funz00_9005
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9007
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9007;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9005;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9011;
																																																				obj_t
																																																					BgL_funz00_9009;
																																																				BgL_funz00_9009
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9011
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9011;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9009;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9015;
																																																		obj_t
																																																			BgL_funz00_9013;
																																																		BgL_funz00_9013
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9015
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9015;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9013;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9019;
																																																obj_t
																																																	BgL_funz00_9017;
																																																BgL_funz00_9017
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_9019
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_9019;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_9017;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_9023;
																																														obj_t
																																															BgL_funz00_9021;
																																														BgL_funz00_9021
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_9023
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_9023;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_9021;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_9027;
																																												obj_t
																																													BgL_funz00_9025;
																																												BgL_funz00_9025
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												BgL_argsz00_9027
																																													=
																																													CDR
																																													(BgL_expz00_5);
																																												BgL_argsz00_1310
																																													=
																																													BgL_argsz00_9027;
																																												BgL_funz00_1309
																																													=
																																													BgL_funz00_9025;
																																												goto
																																													BgL_tagzd2279zd2_1311;
																																											}
																																									}
																																								else
																																									{
																																										obj_t
																																											BgL_argsz00_9030;
																																										obj_t
																																											BgL_funz00_9029;
																																										BgL_funz00_9029
																																											=
																																											BgL_carzd25336zd2_2022;
																																										BgL_argsz00_9030
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										BgL_argsz00_1303
																																											=
																																											BgL_argsz00_9030;
																																										BgL_funz00_1302
																																											=
																																											BgL_funz00_9029;
																																										goto
																																											BgL_tagzd2277zd2_1304;
																																									}
																																							}
																																					}
																																				else
																																					{	/* Eval/evcompile.scm 83 */
																																						obj_t
																																							BgL_cdrzd25436zd2_2053;
																																						BgL_cdrzd25436zd2_2053
																																							=
																																							CDR
																																							(BgL_expz00_5);
																																						if (
																																							(CAR
																																								(BgL_expz00_5)
																																								==
																																								BGl_symbol4328z00zz__evcompilez00))
																																							{	/* Eval/evcompile.scm 83 */
																																								if (PAIRP(BgL_cdrzd25436zd2_2053))
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_cdrzd25440zd2_2057;
																																										BgL_cdrzd25440zd2_2057
																																											=
																																											CDR
																																											(BgL_cdrzd25436zd2_2053);
																																										if (PAIRP(BgL_cdrzd25440zd2_2057))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (NULLP(CDR(BgL_cdrzd25440zd2_2057)))
																																													{	/* Eval/evcompile.scm 83 */
																																														BgL_formalsz00_1290
																																															=
																																															CAR
																																															(BgL_cdrzd25436zd2_2053);
																																														BgL_bodyz00_1291
																																															=
																																															CAR
																																															(BgL_cdrzd25440zd2_2057);
																																														{	/* Eval/evcompile.scm 263 */
																																															obj_t
																																																BgL_locz00_2763;
																																															{	/* Eval/evcompile.scm 65 */
																																																obj_t
																																																	BgL__ortest_1065z00_4419;
																																																BgL__ortest_1065z00_4419
																																																	=
																																																	BGl_getzd2sourcezd2locationz00zz__readerz00
																																																	(BgL_expz00_5);
																																																if (CBOOL(BgL__ortest_1065z00_4419))
																																																	{	/* Eval/evcompile.scm 65 */
																																																		BgL_locz00_2763
																																																			=
																																																			BgL__ortest_1065z00_4419;
																																																	}
																																																else
																																																	{	/* Eval/evcompile.scm 65 */
																																																		BgL_locz00_2763
																																																			=
																																																			BgL_locz00_10;
																																																	}
																																															}
																																															{	/* Eval/evcompile.scm 263 */
																																																obj_t
																																																	BgL_scmzd2formalszd2_2764;
																																																{	/* Eval/evcompile.scm 267 */
																																																	obj_t
																																																		BgL_zc3z04anonymousza32685ze3z87_7170;
																																																	BgL_zc3z04anonymousza32685ze3z87_7170
																																																		=
																																																		MAKE_FX_PROCEDURE
																																																		(BGl_z62zc3z04anonymousza32685ze3ze5zz__evcompilez00,
																																																		(int)
																																																		(((long) 3)), (int) (((long) 1)));
																																																	PROCEDURE_SET
																																																		(BgL_zc3z04anonymousza32685ze3z87_7170,
																																																		(int)
																																																		(((long) 0)), BgL_locz00_2763);
																																																	BgL_scmzd2formalszd2_2764
																																																		=
																																																		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																																																		(BgL_formalsz00_1290,
																																																		BgL_zc3z04anonymousza32685ze3z87_7170,
																																																		((bool_t) 1));
																																																}
																																																{	/* Eval/evcompile.scm 264 */

																																																	{	/* Eval/evcompile.scm 275 */
																																																		obj_t
																																																			BgL_arg2677z00_2765;
																																																		{	/* Eval/evcompile.scm 275 */
																																																			obj_t
																																																				BgL_arg2678z00_2766;
																																																			obj_t
																																																				BgL_arg2679z00_2767;
																																																			bool_t
																																																				BgL_arg2680z00_2768;
																																																			obj_t
																																																				BgL_arg2681z00_2769;
																																																			{	/* Eval/evcompile.scm 275 */
																																																				obj_t
																																																					BgL_zc3z04anonymousza32683ze3z87_7169;
																																																				BgL_zc3z04anonymousza32683ze3z87_7169
																																																					=
																																																					MAKE_FX_PROCEDURE
																																																					(BGl_z62zc3z04anonymousza32683ze3ze5zz__evcompilez00,
																																																					(int)
																																																					(((long) 3)), (int) (((long) 1)));
																																																				PROCEDURE_SET
																																																					(BgL_zc3z04anonymousza32683ze3z87_7169,
																																																					(int)
																																																					(((long) 0)), BgL_locz00_2763);
																																																				BgL_arg2678z00_2766
																																																					=
																																																					BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
																																																					(BgL_expz00_5,
																																																					BgL_formalsz00_1290,
																																																					BgL_bodyz00_1291,
																																																					BgL_zc3z04anonymousza32683ze3z87_7169);
																																																			}
																																																			BgL_arg2679z00_2767
																																																				=
																																																				BGl_loopze70ze7zz__evcompilez00
																																																				(BgL_envz00_6,
																																																				BgL_scmzd2formalszd2_2764);
																																																			{	/* Eval/evcompile.scm 71 */
																																																				int
																																																					BgL_arg1390z00_4420;
																																																				BgL_arg1390z00_4420
																																																					=
																																																					bgl_debug
																																																					();
																																																				BgL_arg2680z00_2768
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_arg1390z00_4420)
																																																					<
																																																					((long) 3));
																																																			}
																																																			{	/* Eval/evcompile.scm 65 */
																																																				obj_t
																																																					BgL__ortest_1065z00_4423;
																																																				BgL__ortest_1065z00_4423
																																																					=
																																																					BGl_getzd2sourcezd2locationz00zz__readerz00
																																																					(BgL_bodyz00_1291);
																																																				if (CBOOL(BgL__ortest_1065z00_4423))
																																																					{	/* Eval/evcompile.scm 65 */
																																																						BgL_arg2681z00_2769
																																																							=
																																																							BgL__ortest_1065z00_4423;
																																																					}
																																																				else
																																																					{	/* Eval/evcompile.scm 65 */
																																																						BgL_arg2681z00_2769
																																																							=
																																																							BgL_locz00_2763;
																																																					}
																																																			}
																																																			BgL_arg2677z00_2765
																																																				=
																																																				BGl_evcompilez00zz__evcompilez00
																																																				(BgL_arg2678z00_2766,
																																																				BgL_arg2679z00_2767,
																																																				BgL_genvz00_7,
																																																				BgL_wherez00_8,
																																																				BgL_arg2680z00_2768,
																																																				BgL_arg2681z00_2769,
																																																				BgL_lkpz00_11,
																																																				((bool_t) 0));
																																																		}
																																																		return
																																																			BGl_evcompilezd2lambdazd2zz__evcompilez00
																																																			(BgL_scmzd2formalszd2_2764,
																																																			BgL_arg2677z00_2765,
																																																			BgL_wherez00_8,
																																																			BgL_locz00_2763);
																																																	}
																																																}
																																															}
																																														}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd25472zd2_2063;
																																														BgL_carzd25472zd2_2063
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														if (PAIRP(BgL_carzd25472zd2_2063))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_cdrzd25489zd2_2066;
																																																BgL_cdrzd25489zd2_2066
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_carzd25472zd2_2063));
																																																if ((CAR(((obj_t) BgL_carzd25472zd2_2063)) == BGl_symbol4324z00zz__evcompilez00))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (PAIRP(BgL_cdrzd25489zd2_2066))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd25492zd2_2070;
																																																				obj_t
																																																					BgL_cdrzd25493zd2_2071;
																																																				BgL_carzd25492zd2_2070
																																																					=
																																																					CAR
																																																					(BgL_cdrzd25489zd2_2066);
																																																				BgL_cdrzd25493zd2_2071
																																																					=
																																																					CDR
																																																					(BgL_cdrzd25489zd2_2066);
																																																				if (SYMBOLP(BgL_carzd25492zd2_2070))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd25493zd2_2071))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd25498zd2_2074;
																																																								BgL_carzd25498zd2_2074
																																																									=
																																																									CAR
																																																									(BgL_cdrzd25493zd2_2071);
																																																								if (SYMBOLP(BgL_carzd25498zd2_2074))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (NULLP(CDR(BgL_cdrzd25493zd2_2071)))
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9095;
																																																												obj_t
																																																													BgL_modz00_9094;
																																																												obj_t
																																																													BgL_funz00_9093;
																																																												BgL_funz00_9093
																																																													=
																																																													BgL_carzd25492zd2_2070;
																																																												BgL_modz00_9094
																																																													=
																																																													BgL_carzd25498zd2_2074;
																																																												BgL_argsz00_9095
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1307
																																																													=
																																																													BgL_argsz00_9095;
																																																												BgL_modz00_1306
																																																													=
																																																													BgL_modz00_9094;
																																																												BgL_funz00_1305
																																																													=
																																																													BgL_funz00_9093;
																																																												goto
																																																													BgL_tagzd2278zd2_1308;
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9099;
																																																												obj_t
																																																													BgL_funz00_9097;
																																																												BgL_funz00_9097
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9099
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9099;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9097;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9103;
																																																										obj_t
																																																											BgL_funz00_9101;
																																																										BgL_funz00_9101
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9103
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9103;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9101;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9107;
																																																								obj_t
																																																									BgL_funz00_9105;
																																																								BgL_funz00_9105
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9107
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9107;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9105;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9111;
																																																						obj_t
																																																							BgL_funz00_9109;
																																																						BgL_funz00_9109
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9111
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9111;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9109;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9115;
																																																				obj_t
																																																					BgL_funz00_9113;
																																																				BgL_funz00_9113
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9115
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9115;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9113;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9119;
																																																		obj_t
																																																			BgL_funz00_9117;
																																																		BgL_funz00_9117
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9119
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9119;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9117;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9122;
																																																obj_t
																																																	BgL_funz00_9121;
																																																BgL_funz00_9121
																																																	=
																																																	BgL_carzd25472zd2_2063;
																																																BgL_argsz00_9122
																																																	=
																																																	BgL_cdrzd25436zd2_2053;
																																																BgL_argsz00_1303
																																																	=
																																																	BgL_argsz00_9122;
																																																BgL_funz00_1302
																																																	=
																																																	BgL_funz00_9121;
																																																goto
																																																	BgL_tagzd2277zd2_1304;
																																															}
																																													}
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd25580zd2_2095;
																																												BgL_carzd25580zd2_2095
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												if (PAIRP(BgL_carzd25580zd2_2095))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_cdrzd25597zd2_2098;
																																														BgL_cdrzd25597zd2_2098
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_carzd25580zd2_2095));
																																														if ((CAR(((obj_t) BgL_carzd25580zd2_2095)) == BGl_symbol4324z00zz__evcompilez00))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (PAIRP(BgL_cdrzd25597zd2_2098))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_carzd25600zd2_2102;
																																																		obj_t
																																																			BgL_cdrzd25601zd2_2103;
																																																		BgL_carzd25600zd2_2102
																																																			=
																																																			CAR
																																																			(BgL_cdrzd25597zd2_2098);
																																																		BgL_cdrzd25601zd2_2103
																																																			=
																																																			CDR
																																																			(BgL_cdrzd25597zd2_2098);
																																																		if (SYMBOLP(BgL_carzd25600zd2_2102))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (PAIRP(BgL_cdrzd25601zd2_2103))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_carzd25606zd2_2106;
																																																						BgL_carzd25606zd2_2106
																																																							=
																																																							CAR
																																																							(BgL_cdrzd25601zd2_2103);
																																																						if (SYMBOLP(BgL_carzd25606zd2_2106))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (NULLP(CDR(BgL_cdrzd25601zd2_2103)))
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9148;
																																																										obj_t
																																																											BgL_modz00_9147;
																																																										obj_t
																																																											BgL_funz00_9146;
																																																										BgL_funz00_9146
																																																											=
																																																											BgL_carzd25600zd2_2102;
																																																										BgL_modz00_9147
																																																											=
																																																											BgL_carzd25606zd2_2106;
																																																										BgL_argsz00_9148
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1307
																																																											=
																																																											BgL_argsz00_9148;
																																																										BgL_modz00_1306
																																																											=
																																																											BgL_modz00_9147;
																																																										BgL_funz00_1305
																																																											=
																																																											BgL_funz00_9146;
																																																										goto
																																																											BgL_tagzd2278zd2_1308;
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9152;
																																																										obj_t
																																																											BgL_funz00_9150;
																																																										BgL_funz00_9150
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9152
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9152;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9150;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9156;
																																																								obj_t
																																																									BgL_funz00_9154;
																																																								BgL_funz00_9154
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9156
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9156;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9154;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9160;
																																																						obj_t
																																																							BgL_funz00_9158;
																																																						BgL_funz00_9158
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9160
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9160;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9158;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9164;
																																																				obj_t
																																																					BgL_funz00_9162;
																																																				BgL_funz00_9162
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9164
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9164;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9162;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9168;
																																																		obj_t
																																																			BgL_funz00_9166;
																																																		BgL_funz00_9166
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9168
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9168;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9166;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9172;
																																																obj_t
																																																	BgL_funz00_9170;
																																																BgL_funz00_9170
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_9172
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_9172;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_9170;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_9175;
																																														obj_t
																																															BgL_funz00_9174;
																																														BgL_funz00_9174
																																															=
																																															BgL_carzd25580zd2_2095;
																																														BgL_argsz00_9175
																																															=
																																															BgL_cdrzd25436zd2_2053;
																																														BgL_argsz00_1303
																																															=
																																															BgL_argsz00_9175;
																																														BgL_funz00_1302
																																															=
																																															BgL_funz00_9174;
																																														goto
																																															BgL_tagzd2277zd2_1304;
																																													}
																																											}
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_carzd25688zd2_2126;
																																										BgL_carzd25688zd2_2126
																																											=
																																											CAR
																																											(BgL_expz00_5);
																																										if (PAIRP(BgL_carzd25688zd2_2126))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_cdrzd25705zd2_2129;
																																												BgL_cdrzd25705zd2_2129
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_carzd25688zd2_2126));
																																												if ((CAR(((obj_t) BgL_carzd25688zd2_2126)) == BGl_symbol4324z00zz__evcompilez00))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (PAIRP(BgL_cdrzd25705zd2_2129))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd25708zd2_2133;
																																																obj_t
																																																	BgL_cdrzd25709zd2_2134;
																																																BgL_carzd25708zd2_2133
																																																	=
																																																	CAR
																																																	(BgL_cdrzd25705zd2_2129);
																																																BgL_cdrzd25709zd2_2134
																																																	=
																																																	CDR
																																																	(BgL_cdrzd25705zd2_2129);
																																																if (SYMBOLP(BgL_carzd25708zd2_2133))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (PAIRP(BgL_cdrzd25709zd2_2134))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd25714zd2_2137;
																																																				BgL_carzd25714zd2_2137
																																																					=
																																																					CAR
																																																					(BgL_cdrzd25709zd2_2134);
																																																				if (SYMBOLP(BgL_carzd25714zd2_2137))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (NULLP(CDR(BgL_cdrzd25709zd2_2134)))
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9201;
																																																								obj_t
																																																									BgL_modz00_9200;
																																																								obj_t
																																																									BgL_funz00_9199;
																																																								BgL_funz00_9199
																																																									=
																																																									BgL_carzd25708zd2_2133;
																																																								BgL_modz00_9200
																																																									=
																																																									BgL_carzd25714zd2_2137;
																																																								BgL_argsz00_9201
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1307
																																																									=
																																																									BgL_argsz00_9201;
																																																								BgL_modz00_1306
																																																									=
																																																									BgL_modz00_9200;
																																																								BgL_funz00_1305
																																																									=
																																																									BgL_funz00_9199;
																																																								goto
																																																									BgL_tagzd2278zd2_1308;
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9205;
																																																								obj_t
																																																									BgL_funz00_9203;
																																																								BgL_funz00_9203
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9205
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9205;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9203;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9209;
																																																						obj_t
																																																							BgL_funz00_9207;
																																																						BgL_funz00_9207
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9209
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9209;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9207;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9213;
																																																				obj_t
																																																					BgL_funz00_9211;
																																																				BgL_funz00_9211
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9213
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9213;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9211;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9217;
																																																		obj_t
																																																			BgL_funz00_9215;
																																																		BgL_funz00_9215
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9217
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9217;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9215;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9221;
																																																obj_t
																																																	BgL_funz00_9219;
																																																BgL_funz00_9219
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_9221
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_9221;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_9219;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_9225;
																																														obj_t
																																															BgL_funz00_9223;
																																														BgL_funz00_9223
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														BgL_argsz00_9225
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1310
																																															=
																																															BgL_argsz00_9225;
																																														BgL_funz00_1309
																																															=
																																															BgL_funz00_9223;
																																														goto
																																															BgL_tagzd2279zd2_1311;
																																													}
																																											}
																																										else
																																											{
																																												obj_t
																																													BgL_argsz00_9228;
																																												obj_t
																																													BgL_funz00_9227;
																																												BgL_funz00_9227
																																													=
																																													BgL_carzd25688zd2_2126;
																																												BgL_argsz00_9228
																																													=
																																													BgL_cdrzd25436zd2_2053;
																																												BgL_argsz00_1303
																																													=
																																													BgL_argsz00_9228;
																																												BgL_funz00_1302
																																													=
																																													BgL_funz00_9227;
																																												goto
																																													BgL_tagzd2277zd2_1304;
																																											}
																																									}
																																							}
																																						else
																																							{	/* Eval/evcompile.scm 83 */
																																								if ((CAR(BgL_expz00_5) == BGl_symbol4362z00zz__evcompilez00))
																																									{	/* Eval/evcompile.scm 83 */
																																										if (PAIRP(BgL_cdrzd25436zd2_2053))
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_cdrzd25782zd2_2161;
																																												BgL_cdrzd25782zd2_2161
																																													=
																																													CDR
																																													(BgL_cdrzd25436zd2_2053);
																																												if (PAIRP(BgL_cdrzd25782zd2_2161))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (NULLP(CDR(BgL_cdrzd25782zd2_2161)))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_arg2165z00_2165;
																																																obj_t
																																																	BgL_arg2166z00_2166;
																																																BgL_arg2165z00_2165
																																																	=
																																																	CAR
																																																	(BgL_cdrzd25436zd2_2053);
																																																BgL_arg2166z00_2166
																																																	=
																																																	CAR
																																																	(BgL_cdrzd25782zd2_2161);
																																																{	/* Eval/evcompile.scm 287 */
																																																	obj_t
																																																		BgL_arg2686z00_5264;
																																																	{	/* Eval/evcompile.scm 65 */
																																																		obj_t
																																																			BgL__ortest_1065z00_5265;
																																																		BgL__ortest_1065z00_5265
																																																			=
																																																			BGl_getzd2sourcezd2locationz00zz__readerz00
																																																			(BgL_expz00_5);
																																																		if (CBOOL(BgL__ortest_1065z00_5265))
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2686z00_5264
																																																					=
																																																					BgL__ortest_1065z00_5265;
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 65 */
																																																				BgL_arg2686z00_5264
																																																					=
																																																					BgL_locz00_10;
																																																			}
																																																	}
																																																	return
																																																		BGl_evcompilezd2letzd2zz__evcompilez00
																																																		(BgL_arg2165z00_2165,
																																																		BgL_arg2166z00_2166,
																																																		BgL_envz00_6,
																																																		BgL_genvz00_7,
																																																		BgL_wherez00_8,
																																																		BgL_tailz00_9,
																																																		BgL_arg2686z00_5264,
																																																		BgL_lkpz00_11);
																																																}
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd25807zd2_2167;
																																																BgL_carzd25807zd2_2167
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																if (PAIRP(BgL_carzd25807zd2_2167))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_cdrzd25824zd2_2170;
																																																		BgL_cdrzd25824zd2_2170
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_carzd25807zd2_2167));
																																																		if ((CAR(((obj_t) BgL_carzd25807zd2_2167)) == BGl_symbol4324z00zz__evcompilez00))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (PAIRP(BgL_cdrzd25824zd2_2170))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_carzd25827zd2_2174;
																																																						obj_t
																																																							BgL_cdrzd25828zd2_2175;
																																																						BgL_carzd25827zd2_2174
																																																							=
																																																							CAR
																																																							(BgL_cdrzd25824zd2_2170);
																																																						BgL_cdrzd25828zd2_2175
																																																							=
																																																							CDR
																																																							(BgL_cdrzd25824zd2_2170);
																																																						if (SYMBOLP(BgL_carzd25827zd2_2174))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (PAIRP(BgL_cdrzd25828zd2_2175))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										obj_t
																																																											BgL_carzd25833zd2_2178;
																																																										BgL_carzd25833zd2_2178
																																																											=
																																																											CAR
																																																											(BgL_cdrzd25828zd2_2175);
																																																										if (SYMBOLP(BgL_carzd25833zd2_2178))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												if (NULLP(CDR(BgL_cdrzd25828zd2_2175)))
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9271;
																																																														obj_t
																																																															BgL_modz00_9270;
																																																														obj_t
																																																															BgL_funz00_9269;
																																																														BgL_funz00_9269
																																																															=
																																																															BgL_carzd25827zd2_2174;
																																																														BgL_modz00_9270
																																																															=
																																																															BgL_carzd25833zd2_2178;
																																																														BgL_argsz00_9271
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1307
																																																															=
																																																															BgL_argsz00_9271;
																																																														BgL_modz00_1306
																																																															=
																																																															BgL_modz00_9270;
																																																														BgL_funz00_1305
																																																															=
																																																															BgL_funz00_9269;
																																																														goto
																																																															BgL_tagzd2278zd2_1308;
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9275;
																																																														obj_t
																																																															BgL_funz00_9273;
																																																														BgL_funz00_9273
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9275
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9275;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9273;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9279;
																																																												obj_t
																																																													BgL_funz00_9277;
																																																												BgL_funz00_9277
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9279
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9279;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9277;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9283;
																																																										obj_t
																																																											BgL_funz00_9281;
																																																										BgL_funz00_9281
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9283
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9283;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9281;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9287;
																																																								obj_t
																																																									BgL_funz00_9285;
																																																								BgL_funz00_9285
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9287
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9287;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9285;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9291;
																																																						obj_t
																																																							BgL_funz00_9289;
																																																						BgL_funz00_9289
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9291
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9291;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9289;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9295;
																																																				obj_t
																																																					BgL_funz00_9293;
																																																				BgL_funz00_9293
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9295
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9295;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9293;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9298;
																																																		obj_t
																																																			BgL_funz00_9297;
																																																		BgL_funz00_9297
																																																			=
																																																			BgL_carzd25807zd2_2167;
																																																		BgL_argsz00_9298
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1303
																																																			=
																																																			BgL_argsz00_9298;
																																																		BgL_funz00_1302
																																																			=
																																																			BgL_funz00_9297;
																																																		goto
																																																			BgL_tagzd2277zd2_1304;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd25908zd2_2199;
																																														BgL_carzd25908zd2_2199
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														if (PAIRP(BgL_carzd25908zd2_2199))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_cdrzd25925zd2_2202;
																																																BgL_cdrzd25925zd2_2202
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_carzd25908zd2_2199));
																																																if ((CAR(((obj_t) BgL_carzd25908zd2_2199)) == BGl_symbol4324z00zz__evcompilez00))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (PAIRP(BgL_cdrzd25925zd2_2202))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd25928zd2_2206;
																																																				obj_t
																																																					BgL_cdrzd25929zd2_2207;
																																																				BgL_carzd25928zd2_2206
																																																					=
																																																					CAR
																																																					(BgL_cdrzd25925zd2_2202);
																																																				BgL_cdrzd25929zd2_2207
																																																					=
																																																					CDR
																																																					(BgL_cdrzd25925zd2_2202);
																																																				if (SYMBOLP(BgL_carzd25928zd2_2206))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd25929zd2_2207))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd25934zd2_2210;
																																																								BgL_carzd25934zd2_2210
																																																									=
																																																									CAR
																																																									(BgL_cdrzd25929zd2_2207);
																																																								if (SYMBOLP(BgL_carzd25934zd2_2210))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (NULLP(CDR(BgL_cdrzd25929zd2_2207)))
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9325;
																																																												obj_t
																																																													BgL_modz00_9324;
																																																												obj_t
																																																													BgL_funz00_9323;
																																																												BgL_funz00_9323
																																																													=
																																																													BgL_carzd25928zd2_2206;
																																																												BgL_modz00_9324
																																																													=
																																																													BgL_carzd25934zd2_2210;
																																																												BgL_argsz00_9325
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1307
																																																													=
																																																													BgL_argsz00_9325;
																																																												BgL_modz00_1306
																																																													=
																																																													BgL_modz00_9324;
																																																												BgL_funz00_1305
																																																													=
																																																													BgL_funz00_9323;
																																																												goto
																																																													BgL_tagzd2278zd2_1308;
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9329;
																																																												obj_t
																																																													BgL_funz00_9327;
																																																												BgL_funz00_9327
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9329
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9329;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9327;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9333;
																																																										obj_t
																																																											BgL_funz00_9331;
																																																										BgL_funz00_9331
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9333
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9333;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9331;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9337;
																																																								obj_t
																																																									BgL_funz00_9335;
																																																								BgL_funz00_9335
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9337
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9337;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9335;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9341;
																																																						obj_t
																																																							BgL_funz00_9339;
																																																						BgL_funz00_9339
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9341
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9341;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9339;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9345;
																																																				obj_t
																																																					BgL_funz00_9343;
																																																				BgL_funz00_9343
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9345
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9345;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9343;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9349;
																																																		obj_t
																																																			BgL_funz00_9347;
																																																		BgL_funz00_9347
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9349
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9349;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9347;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9352;
																																																obj_t
																																																	BgL_funz00_9351;
																																																BgL_funz00_9351
																																																	=
																																																	BgL_carzd25908zd2_2199;
																																																BgL_argsz00_9352
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1303
																																																	=
																																																	BgL_argsz00_9352;
																																																BgL_funz00_1302
																																																	=
																																																	BgL_funz00_9351;
																																																goto
																																																	BgL_tagzd2277zd2_1304;
																																															}
																																													}
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 83 */
																																												obj_t
																																													BgL_carzd26009zd2_2230;
																																												BgL_carzd26009zd2_2230
																																													=
																																													CAR
																																													(BgL_expz00_5);
																																												if (PAIRP(BgL_carzd26009zd2_2230))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_cdrzd26026zd2_2233;
																																														BgL_cdrzd26026zd2_2233
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_carzd26009zd2_2230));
																																														if ((CAR(((obj_t) BgL_carzd26009zd2_2230)) == BGl_symbol4324z00zz__evcompilez00))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (PAIRP(BgL_cdrzd26026zd2_2233))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_carzd26029zd2_2237;
																																																		obj_t
																																																			BgL_cdrzd26030zd2_2238;
																																																		BgL_carzd26029zd2_2237
																																																			=
																																																			CAR
																																																			(BgL_cdrzd26026zd2_2233);
																																																		BgL_cdrzd26030zd2_2238
																																																			=
																																																			CDR
																																																			(BgL_cdrzd26026zd2_2233);
																																																		if (SYMBOLP(BgL_carzd26029zd2_2237))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (PAIRP(BgL_cdrzd26030zd2_2238))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_carzd26035zd2_2241;
																																																						BgL_carzd26035zd2_2241
																																																							=
																																																							CAR
																																																							(BgL_cdrzd26030zd2_2238);
																																																						if (SYMBOLP(BgL_carzd26035zd2_2241))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (NULLP(CDR(BgL_cdrzd26030zd2_2238)))
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9379;
																																																										obj_t
																																																											BgL_modz00_9378;
																																																										obj_t
																																																											BgL_funz00_9377;
																																																										BgL_funz00_9377
																																																											=
																																																											BgL_carzd26029zd2_2237;
																																																										BgL_modz00_9378
																																																											=
																																																											BgL_carzd26035zd2_2241;
																																																										BgL_argsz00_9379
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1307
																																																											=
																																																											BgL_argsz00_9379;
																																																										BgL_modz00_1306
																																																											=
																																																											BgL_modz00_9378;
																																																										BgL_funz00_1305
																																																											=
																																																											BgL_funz00_9377;
																																																										goto
																																																											BgL_tagzd2278zd2_1308;
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9383;
																																																										obj_t
																																																											BgL_funz00_9381;
																																																										BgL_funz00_9381
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9383
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9383;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9381;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9387;
																																																								obj_t
																																																									BgL_funz00_9385;
																																																								BgL_funz00_9385
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9387
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9387;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9385;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9391;
																																																						obj_t
																																																							BgL_funz00_9389;
																																																						BgL_funz00_9389
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9391
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9391;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9389;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9395;
																																																				obj_t
																																																					BgL_funz00_9393;
																																																				BgL_funz00_9393
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9395
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9395;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9393;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9399;
																																																		obj_t
																																																			BgL_funz00_9397;
																																																		BgL_funz00_9397
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9399
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9399;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9397;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9403;
																																																obj_t
																																																	BgL_funz00_9401;
																																																BgL_funz00_9401
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_9403
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1310
																																																	=
																																																	BgL_argsz00_9403;
																																																BgL_funz00_1309
																																																	=
																																																	BgL_funz00_9401;
																																																goto
																																																	BgL_tagzd2279zd2_1311;
																																															}
																																													}
																																												else
																																													{
																																														obj_t
																																															BgL_argsz00_9406;
																																														obj_t
																																															BgL_funz00_9405;
																																														BgL_funz00_9405
																																															=
																																															BgL_carzd26009zd2_2230;
																																														BgL_argsz00_9406
																																															=
																																															CDR
																																															(BgL_expz00_5);
																																														BgL_argsz00_1303
																																															=
																																															BgL_argsz00_9406;
																																														BgL_funz00_1302
																																															=
																																															BgL_funz00_9405;
																																														goto
																																															BgL_tagzd2277zd2_1304;
																																													}
																																											}
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 83 */
																																										obj_t
																																											BgL_cdrzd26099zd2_2261;
																																										BgL_cdrzd26099zd2_2261
																																											=
																																											CDR
																																											(BgL_expz00_5);
																																										if ((CAR(BgL_expz00_5) == BGl_symbol4364z00zz__evcompilez00))
																																											{	/* Eval/evcompile.scm 83 */
																																												if (PAIRP(BgL_cdrzd26099zd2_2261))
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_cdrzd26103zd2_2265;
																																														BgL_cdrzd26103zd2_2265
																																															=
																																															CDR
																																															(BgL_cdrzd26099zd2_2261);
																																														if (PAIRP(BgL_cdrzd26103zd2_2265))
																																															{	/* Eval/evcompile.scm 83 */
																																																if (NULLP(CDR(BgL_cdrzd26103zd2_2265)))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_arg2249z00_2269;
																																																		obj_t
																																																			BgL_arg2250z00_2270;
																																																		BgL_arg2249z00_2269
																																																			=
																																																			CAR
																																																			(BgL_cdrzd26099zd2_2261);
																																																		BgL_arg2250z00_2270
																																																			=
																																																			CAR
																																																			(BgL_cdrzd26103zd2_2265);
																																																		{	/* Eval/evcompile.scm 292 */
																																																			obj_t
																																																				BgL_arg2687z00_5359;
																																																			{	/* Eval/evcompile.scm 65 */
																																																				obj_t
																																																					BgL__ortest_1065z00_5360;
																																																				BgL__ortest_1065z00_5360
																																																					=
																																																					BGl_getzd2sourcezd2locationz00zz__readerz00
																																																					(BgL_expz00_5);
																																																				if (CBOOL(BgL__ortest_1065z00_5360))
																																																					{	/* Eval/evcompile.scm 65 */
																																																						BgL_arg2687z00_5359
																																																							=
																																																							BgL__ortest_1065z00_5360;
																																																					}
																																																				else
																																																					{	/* Eval/evcompile.scm 65 */
																																																						BgL_arg2687z00_5359
																																																							=
																																																							BgL_locz00_10;
																																																					}
																																																			}
																																																			return
																																																				BGl_evcompilezd2letza2z70zz__evcompilez00
																																																				(BgL_arg2249z00_2269,
																																																				BgL_arg2250z00_2270,
																																																				BgL_envz00_6,
																																																				BgL_genvz00_7,
																																																				BgL_wherez00_8,
																																																				BgL_tailz00_9,
																																																				BgL_arg2687z00_5359,
																																																				BgL_lkpz00_11);
																																																		}
																																																	}
																																																else
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_carzd26121zd2_2271;
																																																		BgL_carzd26121zd2_2271
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		if (PAIRP(BgL_carzd26121zd2_2271))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_cdrzd26138zd2_2274;
																																																				BgL_cdrzd26138zd2_2274
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_carzd26121zd2_2271));
																																																				if ((CAR(((obj_t) BgL_carzd26121zd2_2271)) == BGl_symbol4324z00zz__evcompilez00))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd26138zd2_2274))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd26141zd2_2278;
																																																								obj_t
																																																									BgL_cdrzd26142zd2_2279;
																																																								BgL_carzd26141zd2_2278
																																																									=
																																																									CAR
																																																									(BgL_cdrzd26138zd2_2274);
																																																								BgL_cdrzd26142zd2_2279
																																																									=
																																																									CDR
																																																									(BgL_cdrzd26138zd2_2274);
																																																								if (SYMBOLP(BgL_carzd26141zd2_2278))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (PAIRP(BgL_cdrzd26142zd2_2279))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												obj_t
																																																													BgL_carzd26147zd2_2282;
																																																												BgL_carzd26147zd2_2282
																																																													=
																																																													CAR
																																																													(BgL_cdrzd26142zd2_2279);
																																																												if (SYMBOLP(BgL_carzd26147zd2_2282))
																																																													{	/* Eval/evcompile.scm 83 */
																																																														if (NULLP(CDR(BgL_cdrzd26142zd2_2279)))
																																																															{
																																																																obj_t
																																																																	BgL_argsz00_9451;
																																																																obj_t
																																																																	BgL_modz00_9450;
																																																																obj_t
																																																																	BgL_funz00_9449;
																																																																BgL_funz00_9449
																																																																	=
																																																																	BgL_carzd26141zd2_2278;
																																																																BgL_modz00_9450
																																																																	=
																																																																	BgL_carzd26147zd2_2282;
																																																																BgL_argsz00_9451
																																																																	=
																																																																	CDR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_1307
																																																																	=
																																																																	BgL_argsz00_9451;
																																																																BgL_modz00_1306
																																																																	=
																																																																	BgL_modz00_9450;
																																																																BgL_funz00_1305
																																																																	=
																																																																	BgL_funz00_9449;
																																																																goto
																																																																	BgL_tagzd2278zd2_1308;
																																																															}
																																																														else
																																																															{
																																																																obj_t
																																																																	BgL_argsz00_9455;
																																																																obj_t
																																																																	BgL_funz00_9453;
																																																																BgL_funz00_9453
																																																																	=
																																																																	CAR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_9455
																																																																	=
																																																																	CDR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_1310
																																																																	=
																																																																	BgL_argsz00_9455;
																																																																BgL_funz00_1309
																																																																	=
																																																																	BgL_funz00_9453;
																																																																goto
																																																																	BgL_tagzd2279zd2_1311;
																																																															}
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9459;
																																																														obj_t
																																																															BgL_funz00_9457;
																																																														BgL_funz00_9457
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9459
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9459;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9457;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9463;
																																																												obj_t
																																																													BgL_funz00_9461;
																																																												BgL_funz00_9461
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9463
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9463;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9461;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9467;
																																																										obj_t
																																																											BgL_funz00_9465;
																																																										BgL_funz00_9465
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9467
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9467;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9465;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9471;
																																																								obj_t
																																																									BgL_funz00_9469;
																																																								BgL_funz00_9469
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9471
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9471;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9469;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9475;
																																																						obj_t
																																																							BgL_funz00_9473;
																																																						BgL_funz00_9473
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9475
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9475;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9473;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9478;
																																																				obj_t
																																																					BgL_funz00_9477;
																																																				BgL_funz00_9477
																																																					=
																																																					BgL_carzd26121zd2_2271;
																																																				BgL_argsz00_9478
																																																					=
																																																					BgL_cdrzd26099zd2_2261;
																																																				BgL_argsz00_1303
																																																					=
																																																					BgL_argsz00_9478;
																																																				BgL_funz00_1302
																																																					=
																																																					BgL_funz00_9477;
																																																				goto
																																																					BgL_tagzd2277zd2_1304;
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd26215zd2_2303;
																																																BgL_carzd26215zd2_2303
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																if (PAIRP(BgL_carzd26215zd2_2303))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_cdrzd26232zd2_2306;
																																																		BgL_cdrzd26232zd2_2306
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_carzd26215zd2_2303));
																																																		if ((CAR(((obj_t) BgL_carzd26215zd2_2303)) == BGl_symbol4324z00zz__evcompilez00))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (PAIRP(BgL_cdrzd26232zd2_2306))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_carzd26235zd2_2310;
																																																						obj_t
																																																							BgL_cdrzd26236zd2_2311;
																																																						BgL_carzd26235zd2_2310
																																																							=
																																																							CAR
																																																							(BgL_cdrzd26232zd2_2306);
																																																						BgL_cdrzd26236zd2_2311
																																																							=
																																																							CDR
																																																							(BgL_cdrzd26232zd2_2306);
																																																						if (SYMBOLP(BgL_carzd26235zd2_2310))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (PAIRP(BgL_cdrzd26236zd2_2311))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										obj_t
																																																											BgL_carzd26241zd2_2314;
																																																										BgL_carzd26241zd2_2314
																																																											=
																																																											CAR
																																																											(BgL_cdrzd26236zd2_2311);
																																																										if (SYMBOLP(BgL_carzd26241zd2_2314))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												if (NULLP(CDR(BgL_cdrzd26236zd2_2311)))
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9504;
																																																														obj_t
																																																															BgL_modz00_9503;
																																																														obj_t
																																																															BgL_funz00_9502;
																																																														BgL_funz00_9502
																																																															=
																																																															BgL_carzd26235zd2_2310;
																																																														BgL_modz00_9503
																																																															=
																																																															BgL_carzd26241zd2_2314;
																																																														BgL_argsz00_9504
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1307
																																																															=
																																																															BgL_argsz00_9504;
																																																														BgL_modz00_1306
																																																															=
																																																															BgL_modz00_9503;
																																																														BgL_funz00_1305
																																																															=
																																																															BgL_funz00_9502;
																																																														goto
																																																															BgL_tagzd2278zd2_1308;
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9508;
																																																														obj_t
																																																															BgL_funz00_9506;
																																																														BgL_funz00_9506
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9508
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9508;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9506;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9512;
																																																												obj_t
																																																													BgL_funz00_9510;
																																																												BgL_funz00_9510
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9512
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9512;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9510;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9516;
																																																										obj_t
																																																											BgL_funz00_9514;
																																																										BgL_funz00_9514
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9516
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9516;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9514;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9520;
																																																								obj_t
																																																									BgL_funz00_9518;
																																																								BgL_funz00_9518
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9520
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9520;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9518;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9524;
																																																						obj_t
																																																							BgL_funz00_9522;
																																																						BgL_funz00_9522
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9524
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9524;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9522;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9528;
																																																				obj_t
																																																					BgL_funz00_9526;
																																																				BgL_funz00_9526
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9528
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9528;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9526;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9531;
																																																		obj_t
																																																			BgL_funz00_9530;
																																																		BgL_funz00_9530
																																																			=
																																																			BgL_carzd26215zd2_2303;
																																																		BgL_argsz00_9531
																																																			=
																																																			BgL_cdrzd26099zd2_2261;
																																																		BgL_argsz00_1303
																																																			=
																																																			BgL_argsz00_9531;
																																																		BgL_funz00_1302
																																																			=
																																																			BgL_funz00_9530;
																																																		goto
																																																			BgL_tagzd2277zd2_1304;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd26309zd2_2334;
																																														BgL_carzd26309zd2_2334
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														if (PAIRP(BgL_carzd26309zd2_2334))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_cdrzd26326zd2_2337;
																																																BgL_cdrzd26326zd2_2337
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_carzd26309zd2_2334));
																																																if ((CAR(((obj_t) BgL_carzd26309zd2_2334)) == BGl_symbol4324z00zz__evcompilez00))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (PAIRP(BgL_cdrzd26326zd2_2337))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd26329zd2_2341;
																																																				obj_t
																																																					BgL_cdrzd26330zd2_2342;
																																																				BgL_carzd26329zd2_2341
																																																					=
																																																					CAR
																																																					(BgL_cdrzd26326zd2_2337);
																																																				BgL_cdrzd26330zd2_2342
																																																					=
																																																					CDR
																																																					(BgL_cdrzd26326zd2_2337);
																																																				if (SYMBOLP(BgL_carzd26329zd2_2341))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd26330zd2_2342))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd26335zd2_2345;
																																																								BgL_carzd26335zd2_2345
																																																									=
																																																									CAR
																																																									(BgL_cdrzd26330zd2_2342);
																																																								if (SYMBOLP(BgL_carzd26335zd2_2345))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (NULLP(CDR(BgL_cdrzd26330zd2_2342)))
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9557;
																																																												obj_t
																																																													BgL_modz00_9556;
																																																												obj_t
																																																													BgL_funz00_9555;
																																																												BgL_funz00_9555
																																																													=
																																																													BgL_carzd26329zd2_2341;
																																																												BgL_modz00_9556
																																																													=
																																																													BgL_carzd26335zd2_2345;
																																																												BgL_argsz00_9557
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1307
																																																													=
																																																													BgL_argsz00_9557;
																																																												BgL_modz00_1306
																																																													=
																																																													BgL_modz00_9556;
																																																												BgL_funz00_1305
																																																													=
																																																													BgL_funz00_9555;
																																																												goto
																																																													BgL_tagzd2278zd2_1308;
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9561;
																																																												obj_t
																																																													BgL_funz00_9559;
																																																												BgL_funz00_9559
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9561
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9561;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9559;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9565;
																																																										obj_t
																																																											BgL_funz00_9563;
																																																										BgL_funz00_9563
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9565
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9565;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9563;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9569;
																																																								obj_t
																																																									BgL_funz00_9567;
																																																								BgL_funz00_9567
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9569
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9569;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9567;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9573;
																																																						obj_t
																																																							BgL_funz00_9571;
																																																						BgL_funz00_9571
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9573
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9573;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9571;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9577;
																																																				obj_t
																																																					BgL_funz00_9575;
																																																				BgL_funz00_9575
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9577
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9577;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9575;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9581;
																																																		obj_t
																																																			BgL_funz00_9579;
																																																		BgL_funz00_9579
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9581
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9581;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9579;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9584;
																																																obj_t
																																																	BgL_funz00_9583;
																																																BgL_funz00_9583
																																																	=
																																																	BgL_carzd26309zd2_2334;
																																																BgL_argsz00_9584
																																																	=
																																																	BgL_cdrzd26099zd2_2261;
																																																BgL_argsz00_1303
																																																	=
																																																	BgL_argsz00_9584;
																																																BgL_funz00_1302
																																																	=
																																																	BgL_funz00_9583;
																																																goto
																																																	BgL_tagzd2277zd2_1304;
																																															}
																																													}
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 83 */
																																												if ((CAR(BgL_expz00_5) == BGl_symbol4366z00zz__evcompilez00))
																																													{	/* Eval/evcompile.scm 83 */
																																														if (PAIRP(BgL_cdrzd26099zd2_2261))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_cdrzd26403zd2_2369;
																																																BgL_cdrzd26403zd2_2369
																																																	=
																																																	CDR
																																																	(BgL_cdrzd26099zd2_2261);
																																																if (PAIRP(BgL_cdrzd26403zd2_2369))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (NULLP(CDR(BgL_cdrzd26403zd2_2369)))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_arg2342z00_2373;
																																																				obj_t
																																																					BgL_arg2343z00_2374;
																																																				BgL_arg2342z00_2373
																																																					=
																																																					CAR
																																																					(BgL_cdrzd26099zd2_2261);
																																																				BgL_arg2343z00_2374
																																																					=
																																																					CAR
																																																					(BgL_cdrzd26403zd2_2369);
																																																				{	/* Eval/evcompile.scm 297 */
																																																					obj_t
																																																						BgL_arg2688z00_5454;
																																																					{	/* Eval/evcompile.scm 65 */
																																																						obj_t
																																																							BgL__ortest_1065z00_5455;
																																																						BgL__ortest_1065z00_5455
																																																							=
																																																							BGl_getzd2sourcezd2locationz00zz__readerz00
																																																							(BgL_expz00_5);
																																																						if (CBOOL(BgL__ortest_1065z00_5455))
																																																							{	/* Eval/evcompile.scm 65 */
																																																								BgL_arg2688z00_5454
																																																									=
																																																									BgL__ortest_1065z00_5455;
																																																							}
																																																						else
																																																							{	/* Eval/evcompile.scm 65 */
																																																								BgL_arg2688z00_5454
																																																									=
																																																									BgL_locz00_10;
																																																							}
																																																					}
																																																					return
																																																						BGl_evcompilezd2letreczd2zz__evcompilez00
																																																						(BgL_arg2342z00_2373,
																																																						BgL_arg2343z00_2374,
																																																						BgL_envz00_6,
																																																						BgL_genvz00_7,
																																																						BgL_wherez00_8,
																																																						BgL_tailz00_9,
																																																						BgL_arg2688z00_5454,
																																																						BgL_lkpz00_11);
																																																				}
																																																			}
																																																		else
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd26414zd2_2375;
																																																				BgL_carzd26414zd2_2375
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				if (PAIRP(BgL_carzd26414zd2_2375))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_cdrzd26431zd2_2378;
																																																						BgL_cdrzd26431zd2_2378
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_carzd26414zd2_2375));
																																																						if ((CAR(((obj_t) BgL_carzd26414zd2_2375)) == BGl_symbol4324z00zz__evcompilez00))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (PAIRP(BgL_cdrzd26431zd2_2378))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										obj_t
																																																											BgL_carzd26434zd2_2382;
																																																										obj_t
																																																											BgL_cdrzd26435zd2_2383;
																																																										BgL_carzd26434zd2_2382
																																																											=
																																																											CAR
																																																											(BgL_cdrzd26431zd2_2378);
																																																										BgL_cdrzd26435zd2_2383
																																																											=
																																																											CDR
																																																											(BgL_cdrzd26431zd2_2378);
																																																										if (SYMBOLP(BgL_carzd26434zd2_2382))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												if (PAIRP(BgL_cdrzd26435zd2_2383))
																																																													{	/* Eval/evcompile.scm 83 */
																																																														obj_t
																																																															BgL_carzd26440zd2_2386;
																																																														BgL_carzd26440zd2_2386
																																																															=
																																																															CAR
																																																															(BgL_cdrzd26435zd2_2383);
																																																														if (SYMBOLP(BgL_carzd26440zd2_2386))
																																																															{	/* Eval/evcompile.scm 83 */
																																																																if (NULLP(CDR(BgL_cdrzd26435zd2_2383)))
																																																																	{
																																																																		obj_t
																																																																			BgL_argsz00_9627;
																																																																		obj_t
																																																																			BgL_modz00_9626;
																																																																		obj_t
																																																																			BgL_funz00_9625;
																																																																		BgL_funz00_9625
																																																																			=
																																																																			BgL_carzd26434zd2_2382;
																																																																		BgL_modz00_9626
																																																																			=
																																																																			BgL_carzd26440zd2_2386;
																																																																		BgL_argsz00_9627
																																																																			=
																																																																			CDR
																																																																			(BgL_expz00_5);
																																																																		BgL_argsz00_1307
																																																																			=
																																																																			BgL_argsz00_9627;
																																																																		BgL_modz00_1306
																																																																			=
																																																																			BgL_modz00_9626;
																																																																		BgL_funz00_1305
																																																																			=
																																																																			BgL_funz00_9625;
																																																																		goto
																																																																			BgL_tagzd2278zd2_1308;
																																																																	}
																																																																else
																																																																	{
																																																																		obj_t
																																																																			BgL_argsz00_9631;
																																																																		obj_t
																																																																			BgL_funz00_9629;
																																																																		BgL_funz00_9629
																																																																			=
																																																																			CAR
																																																																			(BgL_expz00_5);
																																																																		BgL_argsz00_9631
																																																																			=
																																																																			CDR
																																																																			(BgL_expz00_5);
																																																																		BgL_argsz00_1310
																																																																			=
																																																																			BgL_argsz00_9631;
																																																																		BgL_funz00_1309
																																																																			=
																																																																			BgL_funz00_9629;
																																																																		goto
																																																																			BgL_tagzd2279zd2_1311;
																																																																	}
																																																															}
																																																														else
																																																															{
																																																																obj_t
																																																																	BgL_argsz00_9635;
																																																																obj_t
																																																																	BgL_funz00_9633;
																																																																BgL_funz00_9633
																																																																	=
																																																																	CAR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_9635
																																																																	=
																																																																	CDR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_1310
																																																																	=
																																																																	BgL_argsz00_9635;
																																																																BgL_funz00_1309
																																																																	=
																																																																	BgL_funz00_9633;
																																																																goto
																																																																	BgL_tagzd2279zd2_1311;
																																																															}
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9639;
																																																														obj_t
																																																															BgL_funz00_9637;
																																																														BgL_funz00_9637
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9639
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9639;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9637;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9643;
																																																												obj_t
																																																													BgL_funz00_9641;
																																																												BgL_funz00_9641
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9643
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9643;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9641;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9647;
																																																										obj_t
																																																											BgL_funz00_9645;
																																																										BgL_funz00_9645
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9647
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9647;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9645;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9651;
																																																								obj_t
																																																									BgL_funz00_9649;
																																																								BgL_funz00_9649
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9651
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9651;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9649;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9654;
																																																						obj_t
																																																							BgL_funz00_9653;
																																																						BgL_funz00_9653
																																																							=
																																																							BgL_carzd26414zd2_2375;
																																																						BgL_argsz00_9654
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1303
																																																							=
																																																							BgL_argsz00_9654;
																																																						BgL_funz00_1302
																																																							=
																																																							BgL_funz00_9653;
																																																						goto
																																																							BgL_tagzd2277zd2_1304;
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_carzd26501zd2_2407;
																																																		BgL_carzd26501zd2_2407
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		if (PAIRP(BgL_carzd26501zd2_2407))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_cdrzd26518zd2_2410;
																																																				BgL_cdrzd26518zd2_2410
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_carzd26501zd2_2407));
																																																				if ((CAR(((obj_t) BgL_carzd26501zd2_2407)) == BGl_symbol4324z00zz__evcompilez00))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd26518zd2_2410))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd26521zd2_2414;
																																																								obj_t
																																																									BgL_cdrzd26522zd2_2415;
																																																								BgL_carzd26521zd2_2414
																																																									=
																																																									CAR
																																																									(BgL_cdrzd26518zd2_2410);
																																																								BgL_cdrzd26522zd2_2415
																																																									=
																																																									CDR
																																																									(BgL_cdrzd26518zd2_2410);
																																																								if (SYMBOLP(BgL_carzd26521zd2_2414))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (PAIRP(BgL_cdrzd26522zd2_2415))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												obj_t
																																																													BgL_carzd26527zd2_2418;
																																																												BgL_carzd26527zd2_2418
																																																													=
																																																													CAR
																																																													(BgL_cdrzd26522zd2_2415);
																																																												if (SYMBOLP(BgL_carzd26527zd2_2418))
																																																													{	/* Eval/evcompile.scm 83 */
																																																														if (NULLP(CDR(BgL_cdrzd26522zd2_2415)))
																																																															{
																																																																obj_t
																																																																	BgL_argsz00_9681;
																																																																obj_t
																																																																	BgL_modz00_9680;
																																																																obj_t
																																																																	BgL_funz00_9679;
																																																																BgL_funz00_9679
																																																																	=
																																																																	BgL_carzd26521zd2_2414;
																																																																BgL_modz00_9680
																																																																	=
																																																																	BgL_carzd26527zd2_2418;
																																																																BgL_argsz00_9681
																																																																	=
																																																																	CDR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_1307
																																																																	=
																																																																	BgL_argsz00_9681;
																																																																BgL_modz00_1306
																																																																	=
																																																																	BgL_modz00_9680;
																																																																BgL_funz00_1305
																																																																	=
																																																																	BgL_funz00_9679;
																																																																goto
																																																																	BgL_tagzd2278zd2_1308;
																																																															}
																																																														else
																																																															{
																																																																obj_t
																																																																	BgL_argsz00_9685;
																																																																obj_t
																																																																	BgL_funz00_9683;
																																																																BgL_funz00_9683
																																																																	=
																																																																	CAR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_9685
																																																																	=
																																																																	CDR
																																																																	(BgL_expz00_5);
																																																																BgL_argsz00_1310
																																																																	=
																																																																	BgL_argsz00_9685;
																																																																BgL_funz00_1309
																																																																	=
																																																																	BgL_funz00_9683;
																																																																goto
																																																																	BgL_tagzd2279zd2_1311;
																																																															}
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9689;
																																																														obj_t
																																																															BgL_funz00_9687;
																																																														BgL_funz00_9687
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9689
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9689;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9687;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9693;
																																																												obj_t
																																																													BgL_funz00_9691;
																																																												BgL_funz00_9691
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9693
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9693;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9691;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9697;
																																																										obj_t
																																																											BgL_funz00_9695;
																																																										BgL_funz00_9695
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9697
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9697;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9695;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9701;
																																																								obj_t
																																																									BgL_funz00_9699;
																																																								BgL_funz00_9699
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9701
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9701;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9699;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9705;
																																																						obj_t
																																																							BgL_funz00_9703;
																																																						BgL_funz00_9703
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9705
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9705;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9703;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9708;
																																																				obj_t
																																																					BgL_funz00_9707;
																																																				BgL_funz00_9707
																																																					=
																																																					BgL_carzd26501zd2_2407;
																																																				BgL_argsz00_9708
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1303
																																																					=
																																																					BgL_argsz00_9708;
																																																				BgL_funz00_1302
																																																					=
																																																					BgL_funz00_9707;
																																																				goto
																																																					BgL_tagzd2277zd2_1304;
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_carzd26588zd2_2438;
																																																BgL_carzd26588zd2_2438
																																																	=
																																																	CAR
																																																	(BgL_expz00_5);
																																																if (PAIRP(BgL_carzd26588zd2_2438))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		obj_t
																																																			BgL_cdrzd26605zd2_2441;
																																																		BgL_cdrzd26605zd2_2441
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_carzd26588zd2_2438));
																																																		if ((CAR(((obj_t) BgL_carzd26588zd2_2438)) == BGl_symbol4324z00zz__evcompilez00))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				if (PAIRP(BgL_cdrzd26605zd2_2441))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						obj_t
																																																							BgL_carzd26608zd2_2445;
																																																						obj_t
																																																							BgL_cdrzd26609zd2_2446;
																																																						BgL_carzd26608zd2_2445
																																																							=
																																																							CAR
																																																							(BgL_cdrzd26605zd2_2441);
																																																						BgL_cdrzd26609zd2_2446
																																																							=
																																																							CDR
																																																							(BgL_cdrzd26605zd2_2441);
																																																						if (SYMBOLP(BgL_carzd26608zd2_2445))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								if (PAIRP(BgL_cdrzd26609zd2_2446))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										obj_t
																																																											BgL_carzd26614zd2_2449;
																																																										BgL_carzd26614zd2_2449
																																																											=
																																																											CAR
																																																											(BgL_cdrzd26609zd2_2446);
																																																										if (SYMBOLP(BgL_carzd26614zd2_2449))
																																																											{	/* Eval/evcompile.scm 83 */
																																																												if (NULLP(CDR(BgL_cdrzd26609zd2_2446)))
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9735;
																																																														obj_t
																																																															BgL_modz00_9734;
																																																														obj_t
																																																															BgL_funz00_9733;
																																																														BgL_funz00_9733
																																																															=
																																																															BgL_carzd26608zd2_2445;
																																																														BgL_modz00_9734
																																																															=
																																																															BgL_carzd26614zd2_2449;
																																																														BgL_argsz00_9735
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1307
																																																															=
																																																															BgL_argsz00_9735;
																																																														BgL_modz00_1306
																																																															=
																																																															BgL_modz00_9734;
																																																														BgL_funz00_1305
																																																															=
																																																															BgL_funz00_9733;
																																																														goto
																																																															BgL_tagzd2278zd2_1308;
																																																													}
																																																												else
																																																													{
																																																														obj_t
																																																															BgL_argsz00_9739;
																																																														obj_t
																																																															BgL_funz00_9737;
																																																														BgL_funz00_9737
																																																															=
																																																															CAR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_9739
																																																															=
																																																															CDR
																																																															(BgL_expz00_5);
																																																														BgL_argsz00_1310
																																																															=
																																																															BgL_argsz00_9739;
																																																														BgL_funz00_1309
																																																															=
																																																															BgL_funz00_9737;
																																																														goto
																																																															BgL_tagzd2279zd2_1311;
																																																													}
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9743;
																																																												obj_t
																																																													BgL_funz00_9741;
																																																												BgL_funz00_9741
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9743
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9743;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9741;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9747;
																																																										obj_t
																																																											BgL_funz00_9745;
																																																										BgL_funz00_9745
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9747
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9747;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9745;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9751;
																																																								obj_t
																																																									BgL_funz00_9749;
																																																								BgL_funz00_9749
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9751
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9751;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9749;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9755;
																																																						obj_t
																																																							BgL_funz00_9753;
																																																						BgL_funz00_9753
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9755
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9755;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9753;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9759;
																																																				obj_t
																																																					BgL_funz00_9757;
																																																				BgL_funz00_9757
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9759
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9759;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9757;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9762;
																																																		obj_t
																																																			BgL_funz00_9761;
																																																		BgL_funz00_9761
																																																			=
																																																			BgL_carzd26588zd2_2438;
																																																		BgL_argsz00_9762
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1303
																																																			=
																																																			BgL_argsz00_9762;
																																																		BgL_funz00_1302
																																																			=
																																																			BgL_funz00_9761;
																																																		goto
																																																			BgL_tagzd2277zd2_1304;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Eval/evcompile.scm 83 */
																																														obj_t
																																															BgL_carzd26675zd2_2469;
																																														BgL_carzd26675zd2_2469
																																															=
																																															CAR
																																															(BgL_expz00_5);
																																														if (PAIRP(BgL_carzd26675zd2_2469))
																																															{	/* Eval/evcompile.scm 83 */
																																																obj_t
																																																	BgL_cdrzd26692zd2_2472;
																																																BgL_cdrzd26692zd2_2472
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_carzd26675zd2_2469));
																																																if ((CAR(((obj_t) BgL_carzd26675zd2_2469)) == BGl_symbol4324z00zz__evcompilez00))
																																																	{	/* Eval/evcompile.scm 83 */
																																																		if (PAIRP(BgL_cdrzd26692zd2_2472))
																																																			{	/* Eval/evcompile.scm 83 */
																																																				obj_t
																																																					BgL_carzd26695zd2_2476;
																																																				obj_t
																																																					BgL_cdrzd26696zd2_2477;
																																																				BgL_carzd26695zd2_2476
																																																					=
																																																					CAR
																																																					(BgL_cdrzd26692zd2_2472);
																																																				BgL_cdrzd26696zd2_2477
																																																					=
																																																					CDR
																																																					(BgL_cdrzd26692zd2_2472);
																																																				if (SYMBOLP(BgL_carzd26695zd2_2476))
																																																					{	/* Eval/evcompile.scm 83 */
																																																						if (PAIRP(BgL_cdrzd26696zd2_2477))
																																																							{	/* Eval/evcompile.scm 83 */
																																																								obj_t
																																																									BgL_carzd26701zd2_2480;
																																																								BgL_carzd26701zd2_2480
																																																									=
																																																									CAR
																																																									(BgL_cdrzd26696zd2_2477);
																																																								if (SYMBOLP(BgL_carzd26701zd2_2480))
																																																									{	/* Eval/evcompile.scm 83 */
																																																										if (NULLP(CDR(BgL_cdrzd26696zd2_2477)))
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9789;
																																																												obj_t
																																																													BgL_modz00_9788;
																																																												obj_t
																																																													BgL_funz00_9787;
																																																												BgL_funz00_9787
																																																													=
																																																													BgL_carzd26695zd2_2476;
																																																												BgL_modz00_9788
																																																													=
																																																													BgL_carzd26701zd2_2480;
																																																												BgL_argsz00_9789
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1307
																																																													=
																																																													BgL_argsz00_9789;
																																																												BgL_modz00_1306
																																																													=
																																																													BgL_modz00_9788;
																																																												BgL_funz00_1305
																																																													=
																																																													BgL_funz00_9787;
																																																												goto
																																																													BgL_tagzd2278zd2_1308;
																																																											}
																																																										else
																																																											{
																																																												obj_t
																																																													BgL_argsz00_9793;
																																																												obj_t
																																																													BgL_funz00_9791;
																																																												BgL_funz00_9791
																																																													=
																																																													CAR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_9793
																																																													=
																																																													CDR
																																																													(BgL_expz00_5);
																																																												BgL_argsz00_1310
																																																													=
																																																													BgL_argsz00_9793;
																																																												BgL_funz00_1309
																																																													=
																																																													BgL_funz00_9791;
																																																												goto
																																																													BgL_tagzd2279zd2_1311;
																																																											}
																																																									}
																																																								else
																																																									{
																																																										obj_t
																																																											BgL_argsz00_9797;
																																																										obj_t
																																																											BgL_funz00_9795;
																																																										BgL_funz00_9795
																																																											=
																																																											CAR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_9797
																																																											=
																																																											CDR
																																																											(BgL_expz00_5);
																																																										BgL_argsz00_1310
																																																											=
																																																											BgL_argsz00_9797;
																																																										BgL_funz00_1309
																																																											=
																																																											BgL_funz00_9795;
																																																										goto
																																																											BgL_tagzd2279zd2_1311;
																																																									}
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_argsz00_9801;
																																																								obj_t
																																																									BgL_funz00_9799;
																																																								BgL_funz00_9799
																																																									=
																																																									CAR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_9801
																																																									=
																																																									CDR
																																																									(BgL_expz00_5);
																																																								BgL_argsz00_1310
																																																									=
																																																									BgL_argsz00_9801;
																																																								BgL_funz00_1309
																																																									=
																																																									BgL_funz00_9799;
																																																								goto
																																																									BgL_tagzd2279zd2_1311;
																																																							}
																																																					}
																																																				else
																																																					{
																																																						obj_t
																																																							BgL_argsz00_9805;
																																																						obj_t
																																																							BgL_funz00_9803;
																																																						BgL_funz00_9803
																																																							=
																																																							CAR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_9805
																																																							=
																																																							CDR
																																																							(BgL_expz00_5);
																																																						BgL_argsz00_1310
																																																							=
																																																							BgL_argsz00_9805;
																																																						BgL_funz00_1309
																																																							=
																																																							BgL_funz00_9803;
																																																						goto
																																																							BgL_tagzd2279zd2_1311;
																																																					}
																																																			}
																																																		else
																																																			{
																																																				obj_t
																																																					BgL_argsz00_9809;
																																																				obj_t
																																																					BgL_funz00_9807;
																																																				BgL_funz00_9807
																																																					=
																																																					CAR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_9809
																																																					=
																																																					CDR
																																																					(BgL_expz00_5);
																																																				BgL_argsz00_1310
																																																					=
																																																					BgL_argsz00_9809;
																																																				BgL_funz00_1309
																																																					=
																																																					BgL_funz00_9807;
																																																				goto
																																																					BgL_tagzd2279zd2_1311;
																																																			}
																																																	}
																																																else
																																																	{
																																																		obj_t
																																																			BgL_argsz00_9813;
																																																		obj_t
																																																			BgL_funz00_9811;
																																																		BgL_funz00_9811
																																																			=
																																																			CAR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_9813
																																																			=
																																																			CDR
																																																			(BgL_expz00_5);
																																																		BgL_argsz00_1310
																																																			=
																																																			BgL_argsz00_9813;
																																																		BgL_funz00_1309
																																																			=
																																																			BgL_funz00_9811;
																																																		goto
																																																			BgL_tagzd2279zd2_1311;
																																																	}
																																															}
																																														else
																																															{
																																																obj_t
																																																	BgL_argsz00_9816;
																																																obj_t
																																																	BgL_funz00_9815;
																																																BgL_funz00_9815
																																																	=
																																																	BgL_carzd26675zd2_2469;
																																																BgL_argsz00_9816
																																																	=
																																																	CDR
																																																	(BgL_expz00_5);
																																																BgL_argsz00_1303
																																																	=
																																																	BgL_argsz00_9816;
																																																BgL_funz00_1302
																																																	=
																																																	BgL_funz00_9815;
																																																goto
																																																	BgL_tagzd2277zd2_1304;
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
													}
											}
									}
							}
						else
							{	/* Eval/evcompile.scm 83 */
								BgL_atomz00_1248 = BgL_expz00_5;
								if (SYMBOLP(BgL_atomz00_1248))
									{	/* Eval/evcompile.scm 97 */
										return
											BGl_evcompilezd2refzd2zz__evcompilez00(((long) 1),
											BGl_variablez00zz__evcompilez00(BgL_locz00_10,
												BgL_atomz00_1248, BgL_envz00_6, BgL_genvz00_7),
											BgL_genvz00_7, BgL_locz00_10, BgL_lkpz00_11);
									}
								else
									{	/* Eval/evcompile.scm 99 */
										bool_t BgL_test4828z00_9822;

										if (PROCEDUREP(BgL_atomz00_1248))
											{	/* Eval/evcompile.scm 99 */
												if (BgL_lkpz00_11)
													{	/* Eval/evcompile.scm 99 */
														BgL_test4828z00_9822 = ((bool_t) 0);
													}
												else
													{	/* Eval/evcompile.scm 99 */
														BgL_test4828z00_9822 = ((bool_t) 1);
													}
											}
										else
											{	/* Eval/evcompile.scm 99 */
												BgL_test4828z00_9822 = ((bool_t) 0);
											}
										if (BgL_test4828z00_9822)
											{	/* Eval/evcompile.scm 99 */
												return
													BGl_evcompilezd2errorzd2zz__evcompilez00
													(BgL_locz00_10, BGl_string4315z00zz__evcompilez00,
													BGl_string4317z00zz__evcompilez00, BgL_atomz00_1248);
											}
										else
											{	/* Eval/evcompile.scm 99 */
												if (VECTORP(BgL_atomz00_1248))
													{	/* Eval/evcompile.scm 346 */
														obj_t BgL_v1155z00_4150;

														BgL_v1155z00_4150 = create_vector(((long) 3));
														VECTOR_SET(BgL_v1155z00_4150, ((long) 0),
															BINT(((long) -1)));
														VECTOR_SET(BgL_v1155z00_4150, ((long) 1),
															BgL_locz00_10);
														VECTOR_SET(BgL_v1155z00_4150, ((long) 2),
															BgL_atomz00_1248);
														return BgL_v1155z00_4150;
													}
												else
													{	/* Eval/evcompile.scm 345 */
														return BgL_atomz00_1248;
													}
											}
									}
							}
					}
			}
		}

	}



/* &evcompile */
	obj_t BGl_z62evcompilez62zz__evcompilez00(obj_t BgL_envz00_7171,
		obj_t BgL_expz00_7172, obj_t BgL_envz00_7173, obj_t BgL_genvz00_7174,
		obj_t BgL_wherez00_7175, obj_t BgL_tailz00_7176, obj_t BgL_locz00_7177,
		obj_t BgL_lkpz00_7178, obj_t BgL_toplevelpz00_7179)
	{
		{	/* Eval/evcompile.scm 79 */
			{	/* Eval/evcompile.scm 83 */
				obj_t BgL_auxz00_9841;
				obj_t BgL_auxz00_9834;

				if (SYMBOLP(BgL_wherez00_7175))
					{	/* Eval/evcompile.scm 83 */
						BgL_auxz00_9841 = BgL_wherez00_7175;
					}
				else
					{
						obj_t BgL_auxz00_9844;

						BgL_auxz00_9844 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4368z00zz__evcompilez00,
							BINT(((long) 3006)), BGl_string4369z00zz__evcompilez00,
							BGl_string4371z00zz__evcompilez00, BgL_wherez00_7175);
						FAILURE(BgL_auxz00_9844, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_envz00_7173))
					{	/* Eval/evcompile.scm 83 */
						BgL_auxz00_9834 = BgL_envz00_7173;
					}
				else
					{
						obj_t BgL_auxz00_9837;

						BgL_auxz00_9837 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4368z00zz__evcompilez00,
							BINT(((long) 3006)), BGl_string4369z00zz__evcompilez00,
							BGl_string4370z00zz__evcompilez00, BgL_envz00_7173);
						FAILURE(BgL_auxz00_9837, BFALSE, BFALSE);
					}
				return
					BGl_evcompilez00zz__evcompilez00(BgL_expz00_7172, BgL_auxz00_9834,
					BgL_genvz00_7174, BgL_auxz00_9841, CBOOL(BgL_tailz00_7176),
					BgL_locz00_7177, CBOOL(BgL_lkpz00_7178),
					CBOOL(BgL_toplevelpz00_7179));
			}
		}

	}



/* &<@anonymous:2683> */
	obj_t BGl_z62zc3z04anonymousza32683ze3ze5zz__evcompilez00(obj_t
		BgL_envz00_7180, obj_t BgL_procz00_7182, obj_t BgL_msgz00_7183,
		obj_t BgL_objz00_7184)
	{
		{	/* Eval/evcompile.scm 274 */
			return
				BGl_evcompilezd2errorzd2zz__evcompilez00(PROCEDURE_REF(BgL_envz00_7180,
					(int) (((long) 0))), BgL_procz00_7182, BgL_msgz00_7183,
				BgL_objz00_7184);
		}

	}



/* &<@anonymous:2685> */
	obj_t BGl_z62zc3z04anonymousza32685ze3ze5zz__evcompilez00(obj_t
		BgL_envz00_7185, obj_t BgL_procz00_7187, obj_t BgL_msgz00_7188,
		obj_t BgL_objz00_7189)
	{
		{	/* Eval/evcompile.scm 266 */
			return
				BGl_evcompilezd2errorzd2zz__evcompilez00(PROCEDURE_REF(BgL_envz00_7185,
					(int) (((long) 0))), BgL_procz00_7187, BgL_msgz00_7188,
				BgL_objz00_7189);
		}

	}



/* evcompile-cnst */
	obj_t BGl_evcompilezd2cnstzd2zz__evcompilez00(obj_t BgL_cnstz00_13,
		obj_t BgL_locz00_14)
	{
		{	/* Eval/evcompile.scm 343 */
			if (VECTORP(BgL_cnstz00_13))
				{	/* Eval/evcompile.scm 346 */
					obj_t BgL_v1155z00_5569;

					BgL_v1155z00_5569 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1155z00_5569, ((long) 0), BINT(((long) -1)));
					VECTOR_SET(BgL_v1155z00_5569, ((long) 1), BgL_locz00_14);
					VECTOR_SET(BgL_v1155z00_5569, ((long) 2), BgL_cnstz00_13);
					return BgL_v1155z00_5569;
				}
			else
				{	/* Eval/evcompile.scm 345 */
					return BgL_cnstz00_13;
				}
		}

	}



/* evcompile-ref */
	obj_t BGl_evcompilezd2refzd2zz__evcompilez00(long BgL_wherez00_16,
		obj_t BgL_variablez00_17, obj_t BgL_modz00_18, obj_t BgL_locz00_19,
		bool_t BgL_lkpz00_20)
	{
		{	/* Eval/evcompile.scm 359 */
			{	/* Eval/evcompile.scm 361 */
				bool_t BgL_test4835z00_9865;

				if (VECTORP(BgL_variablez00_17))
					{	/* Eval/evcompile.scm 361 */
						BgL_test4835z00_9865 =
							(VECTOR_LENGTH(BgL_variablez00_17) == ((long) 5));
					}
				else
					{	/* Eval/evcompile.scm 361 */
						BgL_test4835z00_9865 = ((bool_t) 0);
					}
				if (BgL_test4835z00_9865)
					{	/* Eval/evcompile.scm 361 */
						if (BgL_lkpz00_20)
							{	/* Eval/evcompile.scm 363 */
								obj_t BgL_v1156z00_2847;

								BgL_v1156z00_2847 = create_vector(((long) 3));
								{	/* Eval/evcompile.scm 363 */
									long BgL_arg2714z00_2848;

									{	/* Eval/evcompile.scm 363 */
										bool_t BgL_test4838z00_9872;

										{	/* Eval/evcompile.scm 363 */
											int BgL_arg2717z00_2851;

											BgL_arg2717z00_2851 =
												CINT(VECTOR_REF(BgL_variablez00_17, ((long) 0)));
											BgL_test4838z00_9872 =
												(BINT(BgL_arg2717z00_2851) == BINT(((long) 1)));
										}
										if (BgL_test4838z00_9872)
											{	/* Eval/evcompile.scm 363 */
												BgL_arg2714z00_2848 = ((long) 5);
											}
										else
											{	/* Eval/evcompile.scm 363 */
												BgL_arg2714z00_2848 = ((long) 6);
									}}
									VECTOR_SET(BgL_v1156z00_2847, ((long) 0),
										BINT(BgL_arg2714z00_2848));
								}
								VECTOR_SET(BgL_v1156z00_2847, ((long) 1), BgL_locz00_19);
								VECTOR_SET(BgL_v1156z00_2847, ((long) 2), BgL_variablez00_17);
								return BgL_v1156z00_2847;
							}
						else
							{	/* Eval/evcompile.scm 366 */
								obj_t BgL_v1157z00_2852;

								BgL_v1157z00_2852 = create_vector(((long) 4));
								{	/* Eval/evcompile.scm 366 */
									long BgL_arg2718z00_2853;

									{	/* Eval/evcompile.scm 366 */
										bool_t BgL_test4839z00_9883;

										{	/* Eval/evcompile.scm 366 */
											int BgL_arg2722z00_2856;

											BgL_arg2722z00_2856 =
												CINT(VECTOR_REF(BgL_variablez00_17, ((long) 0)));
											BgL_test4839z00_9883 =
												(BINT(BgL_arg2722z00_2856) == BINT(((long) 1)));
										}
										if (BgL_test4839z00_9883)
											{	/* Eval/evcompile.scm 366 */
												BgL_arg2718z00_2853 = ((long) 145);
											}
										else
											{	/* Eval/evcompile.scm 366 */
												BgL_arg2718z00_2853 = ((long) 146);
									}}
									VECTOR_SET(BgL_v1157z00_2852, ((long) 0),
										BINT(BgL_arg2718z00_2853));
								}
								VECTOR_SET(BgL_v1157z00_2852, ((long) 1), BgL_locz00_19);
								VECTOR_SET(BgL_v1157z00_2852, ((long) 2),
									VECTOR_REF(BgL_variablez00_17, ((long) 1)));
								{	/* Eval/evcompile.scm 369 */
									obj_t BgL_arg2724z00_2858;

									BgL_arg2724z00_2858 = BGL_MODULE();
									VECTOR_SET(BgL_v1157z00_2852, ((long) 3),
										BgL_arg2724z00_2858);
								}
								return BgL_v1157z00_2852;
							}
					}
				else
					{	/* Eval/evcompile.scm 370 */
						bool_t BgL_test4840z00_9896;

						if (PAIRP(BgL_variablez00_17))
							{	/* Eval/evcompile.scm 807 */
								BgL_test4840z00_9896 =
									(CAR(BgL_variablez00_17) ==
									BGl_symbol4331z00zz__evcompilez00);
							}
						else
							{	/* Eval/evcompile.scm 807 */
								BgL_test4840z00_9896 = ((bool_t) 0);
							}
						if (BgL_test4840z00_9896)
							{	/* Eval/evcompile.scm 371 */
								obj_t BgL_namez00_2860;

								BgL_namez00_2860 = CDR(BgL_variablez00_17);
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_18))
									{	/* Eval/evcompile.scm 373 */
										obj_t BgL_gz00_2862;

										{	/* Eval/evcompile.scm 373 */
											obj_t BgL_v1308z00_5607;

											BgL_v1308z00_5607 = create_vector(((long) 5));
											VECTOR_SET(BgL_v1308z00_5607, ((long) 0),
												BINT(((long) 2)));
											VECTOR_SET(BgL_v1308z00_5607, ((long) 1),
												((obj_t) BgL_namez00_2860));
											VECTOR_SET(BgL_v1308z00_5607, ((long) 2), BUNSPEC);
											VECTOR_SET(BgL_v1308z00_5607, ((long) 3), BgL_modz00_18);
											VECTOR_SET(BgL_v1308z00_5607, ((long) 4), BgL_locz00_19);
											BgL_gz00_2862 = BgL_v1308z00_5607;
										}
										VECTOR_SET(BgL_gz00_2862, ((long) 0), BINT(((long) 3)));
										BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
											(BgL_modz00_18, BgL_namez00_2860, BgL_gz00_2862,
											BgL_locz00_19);
									}
								else
									{	/* Eval/evcompile.scm 372 */
										BFALSE;
									}
								{	/* Eval/evcompile.scm 376 */
									obj_t BgL_v1158z00_2863;

									BgL_v1158z00_2863 = create_vector(((long) 4));
									VECTOR_SET(BgL_v1158z00_2863, ((long) 0), BINT(((long) 7)));
									VECTOR_SET(BgL_v1158z00_2863, ((long) 1), BgL_locz00_19);
									VECTOR_SET(BgL_v1158z00_2863, ((long) 2), BgL_namez00_2860);
									{	/* Eval/evcompile.scm 376 */
										obj_t BgL_arg2727z00_2864;

										BgL_arg2727z00_2864 = BGL_MODULE();
										VECTOR_SET(BgL_v1158z00_2863, ((long) 3),
											BgL_arg2727z00_2864);
									}
									return BgL_v1158z00_2863;
								}
							}
						else
							{

								if (INTEGERP(BgL_variablez00_17))
									{	/* Eval/evcompile.scm 378 */
										switch ((long) CINT(BgL_variablez00_17))
											{
											case ((long) 0):
											case ((long) 1):
											case ((long) 2):
											case ((long) 3):

												{	/* Eval/evcompile.scm 380 */
													obj_t BgL_v1160z00_2868;

													BgL_v1160z00_2868 = create_vector(((long) 2));
													VECTOR_SET(BgL_v1160z00_2868, ((long) 0),
														BgL_variablez00_17);
													VECTOR_SET(BgL_v1160z00_2868, ((long) 1),
														BgL_locz00_19);
													return BgL_v1160z00_2868;
												}
												break;
											default:
											BgL_case_else1068z00_2865:
												{	/* Eval/evcompile.scm 382 */
													obj_t BgL_v1159z00_2869;

													BgL_v1159z00_2869 = create_vector(((long) 3));
													VECTOR_SET(BgL_v1159z00_2869, ((long) 0),
														BINT(((long) 4)));
													VECTOR_SET(BgL_v1159z00_2869, ((long) 1),
														BgL_locz00_19);
													VECTOR_SET(BgL_v1159z00_2869, ((long) 2),
														BgL_variablez00_17);
													return BgL_v1159z00_2869;
												}
											}
									}
								else
									{	/* Eval/evcompile.scm 378 */
										goto BgL_case_else1068z00_2865;
									}
							}
					}
			}
		}

	}



/* evcompile-set */
	obj_t BGl_evcompilezd2setzd2zz__evcompilez00(obj_t BgL_varz00_21,
		obj_t BgL_valuez00_22, obj_t BgL_modz00_23, obj_t BgL_locz00_24)
	{
		{	/* Eval/evcompile.scm 387 */
			{	/* Eval/evcompile.scm 389 */
				bool_t BgL_test4844z00_9934;

				if (VECTORP(BgL_varz00_21))
					{	/* Eval/evcompile.scm 389 */
						BgL_test4844z00_9934 = (VECTOR_LENGTH(BgL_varz00_21) == ((long) 5));
					}
				else
					{	/* Eval/evcompile.scm 389 */
						BgL_test4844z00_9934 = ((bool_t) 0);
					}
				if (BgL_test4844z00_9934)
					{	/* Eval/evcompile.scm 390 */
						bool_t BgL_test4846z00_9939;

						{	/* Eval/evcompile.scm 390 */
							bool_t BgL_test4847z00_9940;

							{	/* Eval/evcompile.scm 390 */
								int BgL_arg2746z00_2885;

								BgL_arg2746z00_2885 =
									CINT(VECTOR_REF(BgL_varz00_21, ((long) 0)));
								BgL_test4847z00_9940 =
									(BINT(BgL_arg2746z00_2885) == BINT(((long) 0)));
							}
							if (BgL_test4847z00_9940)
								{	/* Eval/evcompile.scm 390 */
									BgL_test4846z00_9939 = ((bool_t) 1);
								}
							else
								{	/* Eval/evcompile.scm 391 */
									bool_t BgL_test4848z00_9946;

									{	/* Eval/evcompile.scm 391 */
										int BgL_arg2745z00_2884;

										BgL_arg2745z00_2884 =
											CINT(VECTOR_REF(BgL_varz00_21, ((long) 0)));
										BgL_test4848z00_9946 =
											(BINT(BgL_arg2745z00_2884) == BINT(((long) 4)));
									}
									if (BgL_test4848z00_9946)
										{	/* Eval/evcompile.scm 391 */
											BgL_test4846z00_9939 = ((bool_t) 1);
										}
									else
										{	/* Eval/evcompile.scm 392 */
											int BgL_arg2743z00_2883;

											BgL_arg2743z00_2883 =
												CINT(VECTOR_REF(BgL_varz00_21, ((long) 0)));
											BgL_test4846z00_9939 =
												(BINT(BgL_arg2743z00_2883) == BINT(((long) 5)));
						}}}
						if (BgL_test4846z00_9939)
							{	/* Eval/evcompile.scm 390 */
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_24,
									BGl_string4315z00zz__evcompilez00,
									BGl_string4372z00zz__evcompilez00, VECTOR_REF(BgL_varz00_21,
										((long) 1)));
							}
						else
							{	/* Eval/evcompile.scm 395 */
								obj_t BgL_v1161z00_2880;

								BgL_v1161z00_2880 = create_vector(((long) 4));
								VECTOR_SET(BgL_v1161z00_2880, ((long) 0), BINT(((long) 8)));
								VECTOR_SET(BgL_v1161z00_2880, ((long) 1), BgL_locz00_24);
								VECTOR_SET(BgL_v1161z00_2880, ((long) 2), BgL_varz00_21);
								VECTOR_SET(BgL_v1161z00_2880, ((long) 3), BgL_valuez00_22);
								return BgL_v1161z00_2880;
							}
					}
				else
					{	/* Eval/evcompile.scm 396 */
						bool_t BgL_test4849z00_9965;

						if (PAIRP(BgL_varz00_21))
							{	/* Eval/evcompile.scm 807 */
								BgL_test4849z00_9965 =
									(CAR(BgL_varz00_21) == BGl_symbol4331z00zz__evcompilez00);
							}
						else
							{	/* Eval/evcompile.scm 807 */
								BgL_test4849z00_9965 = ((bool_t) 0);
							}
						if (BgL_test4849z00_9965)
							{	/* Eval/evcompile.scm 397 */
								obj_t BgL_namez00_2887;

								BgL_namez00_2887 = CDR(BgL_varz00_21);
								if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_23))
									{	/* Eval/evcompile.scm 399 */
										obj_t BgL_gz00_2889;

										{	/* Eval/evcompile.scm 399 */
											obj_t BgL_v1308z00_5651;

											BgL_v1308z00_5651 = create_vector(((long) 5));
											VECTOR_SET(BgL_v1308z00_5651, ((long) 0),
												BINT(((long) 2)));
											VECTOR_SET(BgL_v1308z00_5651, ((long) 1),
												((obj_t) BgL_namez00_2887));
											VECTOR_SET(BgL_v1308z00_5651, ((long) 2), BUNSPEC);
											VECTOR_SET(BgL_v1308z00_5651, ((long) 3), BgL_modz00_23);
											VECTOR_SET(BgL_v1308z00_5651, ((long) 4), BgL_locz00_24);
											BgL_gz00_2889 = BgL_v1308z00_5651;
										}
										VECTOR_SET(BgL_gz00_2889, ((long) 0), BINT(((long) 3)));
										BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
											(BgL_modz00_23, BgL_namez00_2887, BgL_gz00_2889,
											BgL_locz00_24);
									}
								else
									{	/* Eval/evcompile.scm 398 */
										BFALSE;
									}
								{	/* Eval/evcompile.scm 402 */
									obj_t BgL_v1162z00_2890;

									BgL_v1162z00_2890 = create_vector(((long) 5));
									VECTOR_SET(BgL_v1162z00_2890, ((long) 0), BINT(((long) 9)));
									VECTOR_SET(BgL_v1162z00_2890, ((long) 1), BgL_locz00_24);
									VECTOR_SET(BgL_v1162z00_2890, ((long) 2), BgL_namez00_2887);
									VECTOR_SET(BgL_v1162z00_2890, ((long) 3), BgL_valuez00_22);
									{	/* Eval/evcompile.scm 402 */
										obj_t BgL_arg2750z00_2891;

										BgL_arg2750z00_2891 = BGL_MODULE();
										VECTOR_SET(BgL_v1162z00_2890, ((long) 4),
											BgL_arg2750z00_2891);
									}
									return BgL_v1162z00_2890;
								}
							}
						else
							{

								if (INTEGERP(BgL_varz00_21))
									{	/* Eval/evcompile.scm 404 */
										switch ((long) CINT(BgL_varz00_21))
											{
											case ((long) 0):
											case ((long) 1):
											case ((long) 2):
											case ((long) 3):

												{	/* Eval/evcompile.scm 406 */
													obj_t BgL_v1164z00_2895;

													BgL_v1164z00_2895 = create_vector(((long) 3));
													{	/* Eval/evcompile.scm 406 */
														long BgL_arg2752z00_2896;

														BgL_arg2752z00_2896 =
															(((long) 10) + (long) CINT(BgL_varz00_21));
														VECTOR_SET(BgL_v1164z00_2895, ((long) 0),
															BINT(BgL_arg2752z00_2896));
													}
													VECTOR_SET(BgL_v1164z00_2895, ((long) 1),
														BgL_locz00_24);
													VECTOR_SET(BgL_v1164z00_2895, ((long) 2),
														BgL_valuez00_22);
													return BgL_v1164z00_2895;
												}
												break;
											default:
											BgL_case_else1070z00_2892:
												{	/* Eval/evcompile.scm 408 */
													obj_t BgL_v1163z00_2897;

													BgL_v1163z00_2897 = create_vector(((long) 4));
													VECTOR_SET(BgL_v1163z00_2897, ((long) 0),
														BINT(((long) 14)));
													VECTOR_SET(BgL_v1163z00_2897, ((long) 1),
														BgL_locz00_24);
													VECTOR_SET(BgL_v1163z00_2897, ((long) 2),
														BgL_varz00_21);
													VECTOR_SET(BgL_v1163z00_2897, ((long) 3),
														BgL_valuez00_22);
													return BgL_v1163z00_2897;
												}
											}
									}
								else
									{	/* Eval/evcompile.scm 404 */
										goto BgL_case_else1070z00_2892;
									}
							}
					}
			}
		}

	}



/* evcompile-or */
	obj_t BGl_evcompilezd2orzd2zz__evcompilez00(obj_t BgL_bodyz00_29,
		obj_t BgL_envz00_30, obj_t BgL_genvz00_31, obj_t BgL_wherez00_32,
		obj_t BgL_locz00_33, bool_t BgL_lkpz00_34)
	{
		{	/* Eval/evcompile.scm 419 */
			{	/* Eval/evcompile.scm 420 */
				obj_t BgL_asz00_5679;

				if (NULLP(BgL_bodyz00_29))
					{	/* Eval/evcompile.scm 420 */
						BgL_asz00_5679 = BNIL;
					}
				else
					{	/* Eval/evcompile.scm 420 */
						obj_t BgL_head1168z00_5682;

						{	/* Eval/evcompile.scm 420 */
							obj_t BgL_res4071z00_5695;

							BgL_res4071z00_5695 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1168z00_5682 = BgL_res4071z00_5695;
						}
						{
							obj_t BgL_l1166z00_5684;
							obj_t BgL_tail1169z00_5685;

							BgL_l1166z00_5684 = BgL_bodyz00_29;
							BgL_tail1169z00_5685 = BgL_head1168z00_5682;
						BgL_zc3z04anonymousza32759ze3z87_5683:
							if (NULLP(BgL_l1166z00_5684))
								{	/* Eval/evcompile.scm 420 */
									BgL_asz00_5679 = CDR(BgL_head1168z00_5682);
								}
							else
								{	/* Eval/evcompile.scm 420 */
									obj_t BgL_newtail1170z00_5687;

									{	/* Eval/evcompile.scm 420 */
										obj_t BgL_arg2763z00_5688;

										{	/* Eval/evcompile.scm 420 */
											obj_t BgL_xz00_5689;

											BgL_xz00_5689 = CAR(((obj_t) BgL_l1166z00_5684));
											BgL_arg2763z00_5688 =
												BGl_evcompilez00zz__evcompilez00(BgL_xz00_5689,
												BgL_envz00_30, BgL_genvz00_31, BgL_wherez00_32,
												((bool_t) 0), BgL_locz00_33, BgL_lkpz00_34,
												((bool_t) 0));
										}
										{	/* Eval/evcompile.scm 420 */
											obj_t BgL_res4073z00_5699;

											BgL_res4073z00_5699 =
												MAKE_YOUNG_PAIR(BgL_arg2763z00_5688, BNIL);
											BgL_newtail1170z00_5687 = BgL_res4073z00_5699;
										}
									}
									SET_CDR(BgL_tail1169z00_5685, BgL_newtail1170z00_5687);
									{	/* Eval/evcompile.scm 420 */
										obj_t BgL_arg2762z00_5690;

										BgL_arg2762z00_5690 = CDR(((obj_t) BgL_l1166z00_5684));
										{
											obj_t BgL_tail1169z00_10023;
											obj_t BgL_l1166z00_10022;

											BgL_l1166z00_10022 = BgL_arg2762z00_5690;
											BgL_tail1169z00_10023 = BgL_newtail1170z00_5687;
											BgL_tail1169z00_5685 = BgL_tail1169z00_10023;
											BgL_l1166z00_5684 = BgL_l1166z00_10022;
											goto BgL_zc3z04anonymousza32759ze3z87_5683;
										}
									}
								}
						}
					}
				{	/* Eval/evcompile.scm 423 */
					obj_t BgL_runner2757z00_5691;

					{	/* Eval/evcompile.scm 423 */
						obj_t BgL_list2753z00_5692;

						{	/* Eval/evcompile.scm 423 */
							obj_t BgL_arg2756z00_5693;

							BgL_arg2756z00_5693 = MAKE_YOUNG_PAIR(BgL_asz00_5679, BNIL);
							BgL_list2753z00_5692 =
								MAKE_YOUNG_PAIR(BgL_locz00_33, BgL_arg2756z00_5693);
						}
						BgL_runner2757z00_5691 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 67)),
							BgL_list2753z00_5692);
					}
					return
						BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
						(BgL_runner2757z00_5691);
				}
			}
		}

	}



/* evcompile-and */
	obj_t BGl_evcompilezd2andzd2zz__evcompilez00(obj_t BgL_bodyz00_35,
		obj_t BgL_envz00_36, obj_t BgL_genvz00_37, obj_t BgL_wherez00_38,
		obj_t BgL_locz00_39, bool_t BgL_lkpz00_40)
	{
		{	/* Eval/evcompile.scm 428 */
			{	/* Eval/evcompile.scm 429 */
				obj_t BgL_asz00_5703;

				if (NULLP(BgL_bodyz00_35))
					{	/* Eval/evcompile.scm 429 */
						BgL_asz00_5703 = BNIL;
					}
				else
					{	/* Eval/evcompile.scm 429 */
						obj_t BgL_head1173z00_5706;

						{	/* Eval/evcompile.scm 429 */
							obj_t BgL_res4076z00_5719;

							BgL_res4076z00_5719 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1173z00_5706 = BgL_res4076z00_5719;
						}
						{
							obj_t BgL_l1171z00_5708;
							obj_t BgL_tail1174z00_5709;

							BgL_l1171z00_5708 = BgL_bodyz00_35;
							BgL_tail1174z00_5709 = BgL_head1173z00_5706;
						BgL_zc3z04anonymousza32768ze3z87_5707:
							if (NULLP(BgL_l1171z00_5708))
								{	/* Eval/evcompile.scm 429 */
									BgL_asz00_5703 = CDR(BgL_head1173z00_5706);
								}
							else
								{	/* Eval/evcompile.scm 429 */
									obj_t BgL_newtail1175z00_5711;

									{	/* Eval/evcompile.scm 429 */
										obj_t BgL_arg2771z00_5712;

										{	/* Eval/evcompile.scm 429 */
											obj_t BgL_xz00_5713;

											BgL_xz00_5713 = CAR(((obj_t) BgL_l1171z00_5708));
											BgL_arg2771z00_5712 =
												BGl_evcompilez00zz__evcompilez00(BgL_xz00_5713,
												BgL_envz00_36, BgL_genvz00_37, BgL_wherez00_38,
												((bool_t) 0), BgL_locz00_39, BgL_lkpz00_40,
												((bool_t) 0));
										}
										{	/* Eval/evcompile.scm 429 */
											obj_t BgL_res4078z00_5723;

											BgL_res4078z00_5723 =
												MAKE_YOUNG_PAIR(BgL_arg2771z00_5712, BNIL);
											BgL_newtail1175z00_5711 = BgL_res4078z00_5723;
										}
									}
									SET_CDR(BgL_tail1174z00_5709, BgL_newtail1175z00_5711);
									{	/* Eval/evcompile.scm 429 */
										obj_t BgL_arg2770z00_5714;

										BgL_arg2770z00_5714 = CDR(((obj_t) BgL_l1171z00_5708));
										{
											obj_t BgL_tail1174z00_10043;
											obj_t BgL_l1171z00_10042;

											BgL_l1171z00_10042 = BgL_arg2770z00_5714;
											BgL_tail1174z00_10043 = BgL_newtail1175z00_5711;
											BgL_tail1174z00_5709 = BgL_tail1174z00_10043;
											BgL_l1171z00_5708 = BgL_l1171z00_10042;
											goto BgL_zc3z04anonymousza32768ze3z87_5707;
										}
									}
								}
						}
					}
				{	/* Eval/evcompile.scm 432 */
					obj_t BgL_runner2766z00_5715;

					{	/* Eval/evcompile.scm 432 */
						obj_t BgL_list2764z00_5716;

						{	/* Eval/evcompile.scm 432 */
							obj_t BgL_arg2765z00_5717;

							BgL_arg2765z00_5717 = MAKE_YOUNG_PAIR(BgL_asz00_5703, BNIL);
							BgL_list2764z00_5716 =
								MAKE_YOUNG_PAIR(BgL_locz00_39, BgL_arg2765z00_5717);
						}
						BgL_runner2766z00_5715 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 68)),
							BgL_list2764z00_5716);
					}
					return
						BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
						(BgL_runner2766z00_5715);
				}
			}
		}

	}



/* evcompile-begin */
	obj_t BGl_evcompilezd2beginzd2zz__evcompilez00(obj_t BgL_bodyz00_41,
		obj_t BgL_envz00_42, obj_t BgL_genvz00_43, obj_t BgL_wherez00_44,
		bool_t BgL_tailz00_45, obj_t BgL_locz00_46, bool_t BgL_lkpz00_47,
		bool_t BgL_tlpz00_48)
	{
		{	/* Eval/evcompile.scm 437 */
			if (NULLP(BgL_bodyz00_41))
				{	/* Eval/evcompile.scm 439 */
					return
						BGl_evcompilez00zz__evcompilez00(BUNSPEC, BgL_envz00_42,
						BgL_genvz00_43, BgL_wherez00_44, BgL_tailz00_45, BgL_locz00_46,
						BgL_lkpz00_47, BgL_tlpz00_48);
				}
			else
				{	/* Eval/evcompile.scm 439 */
					if (NULLP(CDR(((obj_t) BgL_bodyz00_41))))
						{	/* Eval/evcompile.scm 442 */
							obj_t BgL_arg2778z00_2936;
							obj_t BgL_arg2779z00_2937;

							BgL_arg2778z00_2936 = CAR(((obj_t) BgL_bodyz00_41));
							{	/* Eval/evcompile.scm 444 */
								obj_t BgL_arg2782z00_2938;

								BgL_arg2782z00_2938 = CAR(((obj_t) BgL_bodyz00_41));
								{	/* Eval/evcompile.scm 65 */
									obj_t BgL__ortest_1065z00_5732;

									BgL__ortest_1065z00_5732 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_arg2782z00_2938);
									if (CBOOL(BgL__ortest_1065z00_5732))
										{	/* Eval/evcompile.scm 65 */
											BgL_arg2779z00_2937 = BgL__ortest_1065z00_5732;
										}
									else
										{	/* Eval/evcompile.scm 65 */
											BgL_arg2779z00_2937 = BgL_locz00_46;
										}
								}
							}
							return
								BGl_evcompilez00zz__evcompilez00(BgL_arg2778z00_2936,
								BgL_envz00_42, BgL_genvz00_43, BgL_wherez00_44, BgL_tailz00_45,
								BgL_arg2779z00_2937, BgL_lkpz00_47, BgL_tlpz00_48);
						}
					else
						{	/* Eval/evcompile.scm 447 */
							obj_t BgL_cbodyz00_2939;

							BgL_cbodyz00_2939 =
								BGl_loopze71ze7zz__evcompilez00(BgL_tailz00_45, BgL_tlpz00_48,
								BgL_lkpz00_47, BgL_wherez00_44, BgL_genvz00_43, BgL_envz00_42,
								BgL_locz00_46, BgL_bodyz00_41);
							{	/* Eval/evcompile.scm 462 */
								obj_t BgL_runner2785z00_2942;

								{	/* Eval/evcompile.scm 462 */
									obj_t BgL_list2783z00_2940;

									{	/* Eval/evcompile.scm 462 */
										obj_t BgL_arg2784z00_2941;

										BgL_arg2784z00_2941 =
											MAKE_YOUNG_PAIR(BgL_cbodyz00_2939, BNIL);
										BgL_list2783z00_2940 =
											MAKE_YOUNG_PAIR(BgL_locz00_46, BgL_arg2784z00_2941);
									}
									BgL_runner2785z00_2942 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long)
												16)), BgL_list2783z00_2940);
								}
								return
									BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
									(BgL_runner2785z00_2942);
							}
						}
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__evcompilez00(bool_t BgL_tailz00_7274,
		bool_t BgL_tlpz00_7273, bool_t BgL_lkpz00_7272, obj_t BgL_wherez00_7271,
		obj_t BgL_genvz00_7270, obj_t BgL_envz00_7269, obj_t BgL_locz00_7268,
		obj_t BgL_restz00_2944)
	{
		{	/* Eval/evcompile.scm 447 */
			if (NULLP(BgL_restz00_2944))
				{	/* Eval/evcompile.scm 449 */
					return BNIL;
				}
			else
				{	/* Eval/evcompile.scm 449 */
					if (NULLP(CDR(((obj_t) BgL_restz00_2944))))
						{	/* Eval/evcompile.scm 452 */
							obj_t BgL_arg2790z00_2949;

							{	/* Eval/evcompile.scm 452 */
								obj_t BgL_arg2791z00_2950;
								obj_t BgL_arg2792z00_2951;

								BgL_arg2791z00_2950 = CAR(((obj_t) BgL_restz00_2944));
								{	/* Eval/evcompile.scm 454 */
									obj_t BgL_arg2795z00_2952;

									BgL_arg2795z00_2952 = CAR(((obj_t) BgL_restz00_2944));
									{	/* Eval/evcompile.scm 65 */
										obj_t BgL__ortest_1065z00_5738;

										BgL__ortest_1065z00_5738 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_arg2795z00_2952);
										if (CBOOL(BgL__ortest_1065z00_5738))
											{	/* Eval/evcompile.scm 65 */
												BgL_arg2792z00_2951 = BgL__ortest_1065z00_5738;
											}
										else
											{	/* Eval/evcompile.scm 65 */
												BgL_arg2792z00_2951 = BgL_locz00_7268;
											}
									}
								}
								BgL_arg2790z00_2949 =
									BGl_evcompilez00zz__evcompilez00(BgL_arg2791z00_2950,
									BgL_envz00_7269, BgL_genvz00_7270, BgL_wherez00_7271,
									BgL_tailz00_7274, BgL_arg2792z00_2951, BgL_lkpz00_7272,
									BgL_tlpz00_7273);
							}
							return MAKE_YOUNG_PAIR(BgL_arg2790z00_2949, BNIL);
						}
					else
						{	/* Eval/evcompile.scm 458 */
							obj_t BgL_arg2799z00_2953;
							obj_t BgL_arg2800z00_2954;

							{	/* Eval/evcompile.scm 458 */
								obj_t BgL_arg2801z00_2955;
								obj_t BgL_arg2802z00_2956;

								BgL_arg2801z00_2955 = CAR(((obj_t) BgL_restz00_2944));
								{	/* Eval/evcompile.scm 459 */
									obj_t BgL_arg2805z00_2957;

									BgL_arg2805z00_2957 = CAR(((obj_t) BgL_restz00_2944));
									{	/* Eval/evcompile.scm 65 */
										obj_t BgL__ortest_1065z00_5741;

										BgL__ortest_1065z00_5741 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_arg2805z00_2957);
										if (CBOOL(BgL__ortest_1065z00_5741))
											{	/* Eval/evcompile.scm 65 */
												BgL_arg2802z00_2956 = BgL__ortest_1065z00_5741;
											}
										else
											{	/* Eval/evcompile.scm 65 */
												BgL_arg2802z00_2956 = BgL_locz00_7268;
											}
									}
								}
								BgL_arg2799z00_2953 =
									BGl_evcompilez00zz__evcompilez00(BgL_arg2801z00_2955,
									BgL_envz00_7269, BgL_genvz00_7270, BgL_wherez00_7271,
									((bool_t) 0), BgL_arg2802z00_2956, BgL_lkpz00_7272,
									BgL_tlpz00_7273);
							}
							{	/* Eval/evcompile.scm 461 */
								obj_t BgL_arg2806z00_2958;

								BgL_arg2806z00_2958 = CDR(((obj_t) BgL_restz00_2944));
								BgL_arg2800z00_2954 =
									BGl_loopze71ze7zz__evcompilez00(BgL_tailz00_7274,
									BgL_tlpz00_7273, BgL_lkpz00_7272, BgL_wherez00_7271,
									BgL_genvz00_7270, BgL_envz00_7269, BgL_locz00_7268,
									BgL_arg2806z00_2958);
							}
							return MAKE_YOUNG_PAIR(BgL_arg2799z00_2953, BgL_arg2800z00_2954);
						}
				}
		}

	}



/* evcompile-compiled-application */
	obj_t BGl_evcompilezd2compiledzd2applicationz00zz__evcompilez00(obj_t
		BgL_procz00_67, obj_t BgL_argsz00_68, obj_t BgL_locz00_69)
	{
		{	/* Eval/evcompile.scm 503 */
			{

				{	/* Eval/evcompile.scm 504 */
					long BgL_aux1073z00_2971;

					BgL_aux1073z00_2971 = bgl_list_length(BgL_argsz00_68);
					switch (BgL_aux1073z00_2971)
						{
						case ((long) 0):

							{	/* Eval/evcompile.scm 506 */
								obj_t BgL_v1183z00_2973;

								BgL_v1183z00_2973 = create_vector(((long) 3));
								VECTOR_SET(BgL_v1183z00_2973, ((long) 0), BINT(((long) 25)));
								VECTOR_SET(BgL_v1183z00_2973, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1183z00_2973, ((long) 2), BgL_procz00_67);
								return BgL_v1183z00_2973;
							}
							break;
						case ((long) 1):

							{	/* Eval/evcompile.scm 508 */
								obj_t BgL_v1184z00_2974;

								BgL_v1184z00_2974 = create_vector(((long) 4));
								VECTOR_SET(BgL_v1184z00_2974, ((long) 0), BINT(((long) 26)));
								VECTOR_SET(BgL_v1184z00_2974, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1184z00_2974, ((long) 2), BgL_procz00_67);
								{	/* Eval/evcompile.scm 508 */
									obj_t BgL_arg2812z00_2975;

									BgL_arg2812z00_2975 = CAR(((obj_t) BgL_argsz00_68));
									VECTOR_SET(BgL_v1184z00_2974, ((long) 3),
										BgL_arg2812z00_2975);
								}
								return BgL_v1184z00_2974;
							}
							break;
						case ((long) 2):

							{	/* Eval/evcompile.scm 510 */
								obj_t BgL_v1185z00_2976;

								BgL_v1185z00_2976 = create_vector(((long) 5));
								VECTOR_SET(BgL_v1185z00_2976, ((long) 0), BINT(((long) 27)));
								VECTOR_SET(BgL_v1185z00_2976, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1185z00_2976, ((long) 2), BgL_procz00_67);
								{	/* Eval/evcompile.scm 510 */
									obj_t BgL_arg2813z00_2977;

									BgL_arg2813z00_2977 = CAR(((obj_t) BgL_argsz00_68));
									VECTOR_SET(BgL_v1185z00_2976, ((long) 3),
										BgL_arg2813z00_2977);
								}
								{	/* Eval/evcompile.scm 510 */
									obj_t BgL_arg2814z00_2978;

									{	/* Eval/evcompile.scm 510 */
										obj_t BgL_pairz00_5797;

										BgL_pairz00_5797 = CDR(((obj_t) BgL_argsz00_68));
										BgL_arg2814z00_2978 = CAR(BgL_pairz00_5797);
									}
									VECTOR_SET(BgL_v1185z00_2976, ((long) 4),
										BgL_arg2814z00_2978);
								}
								return BgL_v1185z00_2976;
							}
							break;
						case ((long) 3):

							{	/* Eval/evcompile.scm 512 */
								obj_t BgL_v1186z00_2979;

								BgL_v1186z00_2979 = create_vector(((long) 6));
								VECTOR_SET(BgL_v1186z00_2979, ((long) 0), BINT(((long) 28)));
								VECTOR_SET(BgL_v1186z00_2979, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1186z00_2979, ((long) 2), BgL_procz00_67);
								{	/* Eval/evcompile.scm 512 */
									obj_t BgL_arg2815z00_2980;

									BgL_arg2815z00_2980 = CAR(((obj_t) BgL_argsz00_68));
									VECTOR_SET(BgL_v1186z00_2979, ((long) 3),
										BgL_arg2815z00_2980);
								}
								{	/* Eval/evcompile.scm 512 */
									obj_t BgL_arg2816z00_2981;

									{	/* Eval/evcompile.scm 512 */
										obj_t BgL_pairz00_5807;

										BgL_pairz00_5807 = CDR(((obj_t) BgL_argsz00_68));
										BgL_arg2816z00_2981 = CAR(BgL_pairz00_5807);
									}
									VECTOR_SET(BgL_v1186z00_2979, ((long) 4),
										BgL_arg2816z00_2981);
								}
								{	/* Eval/evcompile.scm 512 */
									obj_t BgL_arg2817z00_2982;

									{	/* Eval/evcompile.scm 512 */
										obj_t BgL_pairz00_5814;

										{	/* Eval/evcompile.scm 512 */
											obj_t BgL_pairz00_5813;

											BgL_pairz00_5813 = CDR(((obj_t) BgL_argsz00_68));
											BgL_pairz00_5814 = CDR(BgL_pairz00_5813);
										}
										BgL_arg2817z00_2982 = CAR(BgL_pairz00_5814);
									}
									VECTOR_SET(BgL_v1186z00_2979, ((long) 5),
										BgL_arg2817z00_2982);
								}
								return BgL_v1186z00_2979;
							}
							break;
						case ((long) 4):

							{	/* Eval/evcompile.scm 514 */
								obj_t BgL_v1187z00_2983;

								BgL_v1187z00_2983 = create_vector(((long) 7));
								VECTOR_SET(BgL_v1187z00_2983, ((long) 0), BINT(((long) 29)));
								VECTOR_SET(BgL_v1187z00_2983, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1187z00_2983, ((long) 2), BgL_procz00_67);
								{	/* Eval/evcompile.scm 514 */
									obj_t BgL_arg2819z00_2984;

									BgL_arg2819z00_2984 = CAR(((obj_t) BgL_argsz00_68));
									VECTOR_SET(BgL_v1187z00_2983, ((long) 3),
										BgL_arg2819z00_2984);
								}
								{	/* Eval/evcompile.scm 514 */
									obj_t BgL_arg2820z00_2985;

									{	/* Eval/evcompile.scm 514 */
										obj_t BgL_pairz00_5824;

										BgL_pairz00_5824 = CDR(((obj_t) BgL_argsz00_68));
										BgL_arg2820z00_2985 = CAR(BgL_pairz00_5824);
									}
									VECTOR_SET(BgL_v1187z00_2983, ((long) 4),
										BgL_arg2820z00_2985);
								}
								{	/* Eval/evcompile.scm 514 */
									obj_t BgL_arg2821z00_2986;

									{	/* Eval/evcompile.scm 514 */
										obj_t BgL_pairz00_5831;

										{	/* Eval/evcompile.scm 514 */
											obj_t BgL_pairz00_5830;

											BgL_pairz00_5830 = CDR(((obj_t) BgL_argsz00_68));
											BgL_pairz00_5831 = CDR(BgL_pairz00_5830);
										}
										BgL_arg2821z00_2986 = CAR(BgL_pairz00_5831);
									}
									VECTOR_SET(BgL_v1187z00_2983, ((long) 5),
										BgL_arg2821z00_2986);
								}
								{	/* Eval/evcompile.scm 514 */
									obj_t BgL_arg2824z00_2987;

									{	/* Eval/evcompile.scm 514 */
										obj_t BgL_pairz00_5840;

										{	/* Eval/evcompile.scm 514 */
											obj_t BgL_pairz00_5839;

											{	/* Eval/evcompile.scm 514 */
												obj_t BgL_pairz00_5838;

												BgL_pairz00_5838 = CDR(((obj_t) BgL_argsz00_68));
												BgL_pairz00_5839 = CDR(BgL_pairz00_5838);
											}
											BgL_pairz00_5840 = CDR(BgL_pairz00_5839);
										}
										BgL_arg2824z00_2987 = CAR(BgL_pairz00_5840);
									}
									VECTOR_SET(BgL_v1187z00_2983, ((long) 6),
										BgL_arg2824z00_2987);
								}
								return BgL_v1187z00_2983;
							}
							break;
						default:
							{	/* Eval/evcompile.scm 516 */
								obj_t BgL_v1182z00_2988;

								BgL_v1182z00_2988 = create_vector(((long) 4));
								VECTOR_SET(BgL_v1182z00_2988, ((long) 0), BINT(((long) 30)));
								VECTOR_SET(BgL_v1182z00_2988, ((long) 1), BgL_locz00_69);
								VECTOR_SET(BgL_v1182z00_2988, ((long) 2), BgL_procz00_67);
								VECTOR_SET(BgL_v1182z00_2988, ((long) 3), BgL_argsz00_68);
								return BgL_v1182z00_2988;
							}
						}
				}
			}
		}

	}



/* evcompile-application */
	obj_t BGl_evcompilezd2applicationzd2zz__evcompilez00(obj_t BgL_namez00_70,
		obj_t BgL_procz00_71, obj_t BgL_argsz00_72, bool_t BgL_tailz00_73,
		obj_t BgL_locz00_74)
	{
		{	/* Eval/evcompile.scm 521 */
			if (BgL_tailz00_73)
				{	/* Eval/evcompile.scm 523 */
					obj_t BgL_namez00_2989;

					if (SYMBOLP(BgL_namez00_70))
						{	/* Eval/evcompile.scm 523 */
							obj_t BgL_arg2857z00_3029;

							{	/* Eval/evcompile.scm 523 */
								obj_t BgL_arg2858z00_3030;
								obj_t BgL_arg2859z00_3031;

								{	/* Eval/evcompile.scm 523 */
									obj_t BgL_res4086z00_5845;

									{	/* Eval/evcompile.scm 523 */
										obj_t BgL_arg3558z00_5844;

										BgL_arg3558z00_5844 = SYMBOL_TO_STRING(BgL_namez00_70);
										BgL_res4086z00_5845 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg3558z00_5844);
									}
									BgL_arg2858z00_3030 = BgL_res4086z00_5845;
								}
								{	/* Eval/evcompile.scm 523 */
									obj_t BgL_res4087z00_5848;

									{	/* Eval/evcompile.scm 523 */
										obj_t BgL_symbolz00_5846;

										BgL_symbolz00_5846 = BGl_symbol4373z00zz__evcompilez00;
										{	/* Eval/evcompile.scm 523 */
											obj_t BgL_arg3558z00_5847;

											BgL_arg3558z00_5847 =
												SYMBOL_TO_STRING(BgL_symbolz00_5846);
											BgL_res4087z00_5848 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg3558z00_5847);
										}
									}
									BgL_arg2859z00_3031 = BgL_res4087z00_5848;
								}
								BgL_arg2857z00_3029 =
									string_append(BgL_arg2858z00_3030, BgL_arg2859z00_3031);
							}
							BgL_namez00_2989 = bstring_to_symbol(BgL_arg2857z00_3029);
						}
					else
						{	/* Eval/evcompile.scm 523 */
							BgL_namez00_2989 = BgL_namez00_70;
						}
					{

						{	/* Eval/evcompile.scm 524 */
							long BgL_aux1075z00_2991;

							BgL_aux1075z00_2991 = bgl_list_length(BgL_argsz00_72);
							switch (BgL_aux1075z00_2991)
								{
								case ((long) 0):

									{	/* Eval/evcompile.scm 526 */
										obj_t BgL_v1189z00_2993;

										BgL_v1189z00_2993 = create_vector(((long) 5));
										VECTOR_SET(BgL_v1189z00_2993, ((long) 0),
											BINT(((long) 131)));
										VECTOR_SET(BgL_v1189z00_2993, ((long) 1), BgL_locz00_74);
										VECTOR_SET(BgL_v1189z00_2993, ((long) 2), BgL_namez00_2989);
										VECTOR_SET(BgL_v1189z00_2993, ((long) 3), BgL_procz00_71);
										VECTOR_SET(BgL_v1189z00_2993, ((long) 4),
											BBOOL(BgL_tailz00_73));
										return BgL_v1189z00_2993;
									}
									break;
								case ((long) 1):

									{	/* Eval/evcompile.scm 529 */
										bool_t BgL_test4866z00_10188;

										if (VECTORP(BgL_procz00_71))
											{	/* Eval/evcompile.scm 354 */
												obj_t BgL_arg2712z00_5863;

												BgL_arg2712z00_5863 =
													VECTOR_REF(BgL_procz00_71, ((long) 0));
												BgL_test4866z00_10188 =
													((long) CINT(BgL_arg2712z00_5863) == ((long) 6));
											}
										else
											{	/* Eval/evcompile.scm 354 */
												BgL_test4866z00_10188 = ((bool_t) 0);
											}
										if (BgL_test4866z00_10188)
											{	/* Eval/evcompile.scm 530 */
												obj_t BgL_funz00_2996;
												obj_t BgL_a0z00_2997;

												BgL_funz00_2996 =
													VECTOR_REF(BgL_procz00_71, ((long) 2));
												BgL_a0z00_2997 = CAR(((obj_t) BgL_argsz00_72));
												{	/* Eval/evcompile.scm 532 */
													bool_t BgL_test4868z00_10197;

													if (VECTORP(BgL_funz00_2996))
														{	/* Eval/evcompile.scm 532 */
															BgL_test4868z00_10197 =
																(VECTOR_LENGTH(BgL_funz00_2996) == ((long) 5));
														}
													else
														{	/* Eval/evcompile.scm 532 */
															BgL_test4868z00_10197 = ((bool_t) 0);
														}
													if (BgL_test4868z00_10197)
														{	/* Eval/evcompile.scm 534 */
															obj_t BgL__ortest_1076z00_2999;

															BgL__ortest_1076z00_2999 =
																BGl_evcompilezd2inline1zd2zz__evcompilez00
																(BgL_locz00_74, BgL_namez00_2989,
																BgL_funz00_2996, BgL_a0z00_2997);
															if (CBOOL(BgL__ortest_1076z00_2999))
																{	/* Eval/evcompile.scm 534 */
																	return BgL__ortest_1076z00_2999;
																}
															else
																{	/* Eval/evcompile.scm 535 */
																	obj_t BgL_v1191z00_3000;

																	BgL_v1191z00_3000 = create_vector(((long) 6));
																	VECTOR_SET(BgL_v1191z00_3000, ((long) 0),
																		BINT(((long) 132)));
																	VECTOR_SET(BgL_v1191z00_3000, ((long) 1),
																		BgL_locz00_74);
																	VECTOR_SET(BgL_v1191z00_3000, ((long) 2),
																		BgL_namez00_2989);
																	VECTOR_SET(BgL_v1191z00_3000, ((long) 3),
																		BgL_procz00_71);
																	{	/* Eval/evcompile.scm 535 */
																		obj_t BgL_arg2831z00_3001;

																		BgL_arg2831z00_3001 =
																			CAR(((obj_t) BgL_argsz00_72));
																		VECTOR_SET(BgL_v1191z00_3000, ((long) 4),
																			BgL_arg2831z00_3001);
																	}
																	VECTOR_SET(BgL_v1191z00_3000, ((long) 5),
																		BBOOL(BgL_tailz00_73));
																	return BgL_v1191z00_3000;
																}
														}
													else
														{	/* Eval/evcompile.scm 533 */
															obj_t BgL_v1190z00_3002;

															BgL_v1190z00_3002 = create_vector(((long) 6));
															VECTOR_SET(BgL_v1190z00_3002, ((long) 0),
																BINT(((long) 132)));
															VECTOR_SET(BgL_v1190z00_3002, ((long) 1),
																BgL_locz00_74);
															VECTOR_SET(BgL_v1190z00_3002, ((long) 2),
																BgL_namez00_2989);
															VECTOR_SET(BgL_v1190z00_3002, ((long) 3),
																BgL_procz00_71);
															VECTOR_SET(BgL_v1190z00_3002, ((long) 4),
																BgL_a0z00_2997);
															VECTOR_SET(BgL_v1190z00_3002, ((long) 5),
																BBOOL(BgL_tailz00_73));
															return BgL_v1190z00_3002;
														}
												}
											}
										else
											{	/* Eval/evcompile.scm 536 */
												obj_t BgL_v1192z00_3004;

												BgL_v1192z00_3004 = create_vector(((long) 6));
												VECTOR_SET(BgL_v1192z00_3004, ((long) 0),
													BINT(((long) 132)));
												VECTOR_SET(BgL_v1192z00_3004, ((long) 1),
													BgL_locz00_74);
												VECTOR_SET(BgL_v1192z00_3004, ((long) 2),
													BgL_namez00_2989);
												VECTOR_SET(BgL_v1192z00_3004, ((long) 3),
													BgL_procz00_71);
												{	/* Eval/evcompile.scm 536 */
													obj_t BgL_arg2839z00_3005;

													BgL_arg2839z00_3005 = CAR(((obj_t) BgL_argsz00_72));
													VECTOR_SET(BgL_v1192z00_3004, ((long) 4),
														BgL_arg2839z00_3005);
												}
												VECTOR_SET(BgL_v1192z00_3004, ((long) 5),
													BBOOL(BgL_tailz00_73));
												return BgL_v1192z00_3004;
											}
									}
									break;
								case ((long) 2):

									{	/* Eval/evcompile.scm 539 */
										bool_t BgL_test4871z00_10236;

										if (VECTORP(BgL_procz00_71))
											{	/* Eval/evcompile.scm 354 */
												obj_t BgL_arg2712z00_5898;

												BgL_arg2712z00_5898 =
													VECTOR_REF(BgL_procz00_71, ((long) 0));
												BgL_test4871z00_10236 =
													((long) CINT(BgL_arg2712z00_5898) == ((long) 6));
											}
										else
											{	/* Eval/evcompile.scm 354 */
												BgL_test4871z00_10236 = ((bool_t) 0);
											}
										if (BgL_test4871z00_10236)
											{	/* Eval/evcompile.scm 540 */
												obj_t BgL_funz00_3008;
												obj_t BgL_a0z00_3009;
												obj_t BgL_a1z00_3010;

												BgL_funz00_3008 =
													VECTOR_REF(BgL_procz00_71, ((long) 2));
												BgL_a0z00_3009 = CAR(((obj_t) BgL_argsz00_72));
												{	/* Eval/evcompile.scm 542 */
													obj_t BgL_pairz00_5908;

													BgL_pairz00_5908 = CDR(((obj_t) BgL_argsz00_72));
													BgL_a1z00_3010 = CAR(BgL_pairz00_5908);
												}
												{	/* Eval/evcompile.scm 543 */
													bool_t BgL_test4873z00_10248;

													if (VECTORP(BgL_funz00_3008))
														{	/* Eval/evcompile.scm 543 */
															BgL_test4873z00_10248 =
																(VECTOR_LENGTH(BgL_funz00_3008) == ((long) 5));
														}
													else
														{	/* Eval/evcompile.scm 543 */
															BgL_test4873z00_10248 = ((bool_t) 0);
														}
													if (BgL_test4873z00_10248)
														{	/* Eval/evcompile.scm 545 */
															obj_t BgL__ortest_1077z00_3012;

															BgL__ortest_1077z00_3012 =
																BGl_evcompilezd2inline2zd2zz__evcompilez00
																(BgL_locz00_74, BgL_namez00_2989,
																BgL_funz00_3008, BgL_a0z00_3009,
																BgL_a1z00_3010);
															if (CBOOL(BgL__ortest_1077z00_3012))
																{	/* Eval/evcompile.scm 545 */
																	return BgL__ortest_1077z00_3012;
																}
															else
																{	/* Eval/evcompile.scm 546 */
																	obj_t BgL_v1194z00_3013;

																	BgL_v1194z00_3013 = create_vector(((long) 7));
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 0),
																		BINT(((long) 133)));
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 1),
																		BgL_locz00_74);
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 2),
																		BgL_namez00_2989);
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 3),
																		BgL_procz00_71);
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 4),
																		BgL_a0z00_3009);
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 5),
																		BgL_a1z00_3010);
																	VECTOR_SET(BgL_v1194z00_3013, ((long) 6),
																		BBOOL(BgL_tailz00_73));
																	return BgL_v1194z00_3013;
																}
														}
													else
														{	/* Eval/evcompile.scm 544 */
															obj_t BgL_v1193z00_3014;

															BgL_v1193z00_3014 = create_vector(((long) 7));
															VECTOR_SET(BgL_v1193z00_3014, ((long) 0),
																BINT(((long) 133)));
															VECTOR_SET(BgL_v1193z00_3014, ((long) 1),
																BgL_locz00_74);
															VECTOR_SET(BgL_v1193z00_3014, ((long) 2),
																BgL_namez00_2989);
															VECTOR_SET(BgL_v1193z00_3014, ((long) 3),
																BgL_procz00_71);
															VECTOR_SET(BgL_v1193z00_3014, ((long) 4),
																BgL_a0z00_3009);
															VECTOR_SET(BgL_v1193z00_3014, ((long) 5),
																BgL_a1z00_3010);
															VECTOR_SET(BgL_v1193z00_3014, ((long) 6),
																BBOOL(BgL_tailz00_73));
															return BgL_v1193z00_3014;
														}
												}
											}
										else
											{	/* Eval/evcompile.scm 547 */
												obj_t BgL_v1195z00_3015;

												BgL_v1195z00_3015 = create_vector(((long) 7));
												VECTOR_SET(BgL_v1195z00_3015, ((long) 0),
													BINT(((long) 133)));
												VECTOR_SET(BgL_v1195z00_3015, ((long) 1),
													BgL_locz00_74);
												VECTOR_SET(BgL_v1195z00_3015, ((long) 2),
													BgL_namez00_2989);
												VECTOR_SET(BgL_v1195z00_3015, ((long) 3),
													BgL_procz00_71);
												{	/* Eval/evcompile.scm 547 */
													obj_t BgL_arg2845z00_3016;

													BgL_arg2845z00_3016 = CAR(((obj_t) BgL_argsz00_72));
													VECTOR_SET(BgL_v1195z00_3015, ((long) 4),
														BgL_arg2845z00_3016);
												}
												{	/* Eval/evcompile.scm 547 */
													obj_t BgL_arg2846z00_3017;

													{	/* Eval/evcompile.scm 547 */
														obj_t BgL_pairz00_5938;

														BgL_pairz00_5938 = CDR(((obj_t) BgL_argsz00_72));
														BgL_arg2846z00_3017 = CAR(BgL_pairz00_5938);
													}
													VECTOR_SET(BgL_v1195z00_3015, ((long) 5),
														BgL_arg2846z00_3017);
												}
												VECTOR_SET(BgL_v1195z00_3015, ((long) 6),
													BBOOL(BgL_tailz00_73));
												return BgL_v1195z00_3015;
											}
									}
									break;
								case ((long) 3):

									{	/* Eval/evcompile.scm 549 */
										obj_t BgL_v1196z00_3018;

										BgL_v1196z00_3018 = create_vector(((long) 8));
										VECTOR_SET(BgL_v1196z00_3018, ((long) 0),
											BINT(((long) 134)));
										VECTOR_SET(BgL_v1196z00_3018, ((long) 1), BgL_locz00_74);
										VECTOR_SET(BgL_v1196z00_3018, ((long) 2), BgL_namez00_2989);
										VECTOR_SET(BgL_v1196z00_3018, ((long) 3), BgL_procz00_71);
										{	/* Eval/evcompile.scm 550 */
											obj_t BgL_arg2847z00_3019;

											BgL_arg2847z00_3019 = CAR(((obj_t) BgL_argsz00_72));
											VECTOR_SET(BgL_v1196z00_3018, ((long) 4),
												BgL_arg2847z00_3019);
										}
										{	/* Eval/evcompile.scm 550 */
											obj_t BgL_arg2848z00_3020;

											{	/* Eval/evcompile.scm 550 */
												obj_t BgL_pairz00_5950;

												BgL_pairz00_5950 = CDR(((obj_t) BgL_argsz00_72));
												BgL_arg2848z00_3020 = CAR(BgL_pairz00_5950);
											}
											VECTOR_SET(BgL_v1196z00_3018, ((long) 5),
												BgL_arg2848z00_3020);
										}
										{	/* Eval/evcompile.scm 550 */
											obj_t BgL_arg2849z00_3021;

											{	/* Eval/evcompile.scm 550 */
												obj_t BgL_pairz00_5957;

												{	/* Eval/evcompile.scm 550 */
													obj_t BgL_pairz00_5956;

													BgL_pairz00_5956 = CDR(((obj_t) BgL_argsz00_72));
													BgL_pairz00_5957 = CDR(BgL_pairz00_5956);
												}
												BgL_arg2849z00_3021 = CAR(BgL_pairz00_5957);
											}
											VECTOR_SET(BgL_v1196z00_3018, ((long) 6),
												BgL_arg2849z00_3021);
										}
										VECTOR_SET(BgL_v1196z00_3018, ((long) 7),
											BBOOL(BgL_tailz00_73));
										return BgL_v1196z00_3018;
									}
									break;
								case ((long) 4):

									{	/* Eval/evcompile.scm 552 */
										obj_t BgL_v1197z00_3022;

										BgL_v1197z00_3022 = create_vector(((long) 9));
										VECTOR_SET(BgL_v1197z00_3022, ((long) 0),
											BINT(((long) 135)));
										VECTOR_SET(BgL_v1197z00_3022, ((long) 1), BgL_locz00_74);
										VECTOR_SET(BgL_v1197z00_3022, ((long) 2), BgL_namez00_2989);
										VECTOR_SET(BgL_v1197z00_3022, ((long) 3), BgL_procz00_71);
										{	/* Eval/evcompile.scm 553 */
											obj_t BgL_arg2850z00_3023;

											BgL_arg2850z00_3023 = CAR(((obj_t) BgL_argsz00_72));
											VECTOR_SET(BgL_v1197z00_3022, ((long) 4),
												BgL_arg2850z00_3023);
										}
										{	/* Eval/evcompile.scm 553 */
											obj_t BgL_arg2851z00_3024;

											{	/* Eval/evcompile.scm 553 */
												obj_t BgL_pairz00_5969;

												BgL_pairz00_5969 = CDR(((obj_t) BgL_argsz00_72));
												BgL_arg2851z00_3024 = CAR(BgL_pairz00_5969);
											}
											VECTOR_SET(BgL_v1197z00_3022, ((long) 5),
												BgL_arg2851z00_3024);
										}
										{	/* Eval/evcompile.scm 553 */
											obj_t BgL_arg2852z00_3025;

											{	/* Eval/evcompile.scm 553 */
												obj_t BgL_pairz00_5976;

												{	/* Eval/evcompile.scm 553 */
													obj_t BgL_pairz00_5975;

													BgL_pairz00_5975 = CDR(((obj_t) BgL_argsz00_72));
													BgL_pairz00_5976 = CDR(BgL_pairz00_5975);
												}
												BgL_arg2852z00_3025 = CAR(BgL_pairz00_5976);
											}
											VECTOR_SET(BgL_v1197z00_3022, ((long) 6),
												BgL_arg2852z00_3025);
										}
										{	/* Eval/evcompile.scm 554 */
											obj_t BgL_arg2853z00_3026;

											{	/* Eval/evcompile.scm 554 */
												obj_t BgL_pairz00_5985;

												{	/* Eval/evcompile.scm 554 */
													obj_t BgL_pairz00_5984;

													{	/* Eval/evcompile.scm 554 */
														obj_t BgL_pairz00_5983;

														BgL_pairz00_5983 = CDR(((obj_t) BgL_argsz00_72));
														BgL_pairz00_5984 = CDR(BgL_pairz00_5983);
													}
													BgL_pairz00_5985 = CDR(BgL_pairz00_5984);
												}
												BgL_arg2853z00_3026 = CAR(BgL_pairz00_5985);
											}
											VECTOR_SET(BgL_v1197z00_3022, ((long) 7),
												BgL_arg2853z00_3026);
										}
										VECTOR_SET(BgL_v1197z00_3022, ((long) 8),
											BBOOL(BgL_tailz00_73));
										return BgL_v1197z00_3022;
									}
									break;
								default:
									{	/* Eval/evcompile.scm 556 */
										obj_t BgL_v1188z00_3027;

										BgL_v1188z00_3027 = create_vector(((long) 6));
										VECTOR_SET(BgL_v1188z00_3027, ((long) 0),
											BINT(((long) 136)));
										VECTOR_SET(BgL_v1188z00_3027, ((long) 1), BgL_locz00_74);
										VECTOR_SET(BgL_v1188z00_3027, ((long) 2), BgL_namez00_2989);
										VECTOR_SET(BgL_v1188z00_3027, ((long) 3), BgL_procz00_71);
										VECTOR_SET(BgL_v1188z00_3027, ((long) 4), BgL_argsz00_72);
										VECTOR_SET(BgL_v1188z00_3027, ((long) 5),
											BBOOL(BgL_tailz00_73));
										return BgL_v1188z00_3027;
									}
								}
						}
					}
				}
			else
				{

					{	/* Eval/evcompile.scm 557 */
						long BgL_aux1079z00_3033;

						BgL_aux1079z00_3033 = bgl_list_length(BgL_argsz00_72);
						switch (BgL_aux1079z00_3033)
							{
							case ((long) 0):

								{	/* Eval/evcompile.scm 559 */
									obj_t BgL_v1199z00_3035;

									BgL_v1199z00_3035 = create_vector(((long) 4));
									VECTOR_SET(BgL_v1199z00_3035, ((long) 0), BINT(((long) 31)));
									VECTOR_SET(BgL_v1199z00_3035, ((long) 1), BgL_locz00_74);
									VECTOR_SET(BgL_v1199z00_3035, ((long) 2), BgL_namez00_70);
									VECTOR_SET(BgL_v1199z00_3035, ((long) 3), BgL_procz00_71);
									return BgL_v1199z00_3035;
								}
								break;
							case ((long) 1):

								{	/* Eval/evcompile.scm 561 */
									bool_t BgL_test4876z00_10354;

									if (VECTORP(BgL_procz00_71))
										{	/* Eval/evcompile.scm 354 */
											obj_t BgL_arg2712z00_5998;

											BgL_arg2712z00_5998 =
												VECTOR_REF(BgL_procz00_71, ((long) 0));
											BgL_test4876z00_10354 =
												((long) CINT(BgL_arg2712z00_5998) == ((long) 6));
										}
									else
										{	/* Eval/evcompile.scm 354 */
											BgL_test4876z00_10354 = ((bool_t) 0);
										}
									if (BgL_test4876z00_10354)
										{	/* Eval/evcompile.scm 562 */
											obj_t BgL_funz00_3037;
											obj_t BgL_a0z00_3038;

											BgL_funz00_3037 = VECTOR_REF(BgL_procz00_71, ((long) 2));
											BgL_a0z00_3038 = CAR(((obj_t) BgL_argsz00_72));
											{	/* Eval/evcompile.scm 564 */
												bool_t BgL_test4878z00_10363;

												if (VECTORP(BgL_funz00_3037))
													{	/* Eval/evcompile.scm 564 */
														BgL_test4878z00_10363 =
															(VECTOR_LENGTH(BgL_funz00_3037) == ((long) 5));
													}
												else
													{	/* Eval/evcompile.scm 564 */
														BgL_test4878z00_10363 = ((bool_t) 0);
													}
												if (BgL_test4878z00_10363)
													{	/* Eval/evcompile.scm 566 */
														obj_t BgL__ortest_1080z00_3040;

														BgL__ortest_1080z00_3040 =
															BGl_evcompilezd2inline1zd2zz__evcompilez00
															(BgL_locz00_74, BgL_namez00_70, BgL_funz00_3037,
															BgL_a0z00_3038);
														if (CBOOL(BgL__ortest_1080z00_3040))
															{	/* Eval/evcompile.scm 566 */
																return BgL__ortest_1080z00_3040;
															}
														else
															{	/* Eval/evcompile.scm 567 */
																obj_t BgL_v1201z00_3041;

																BgL_v1201z00_3041 = create_vector(((long) 5));
																VECTOR_SET(BgL_v1201z00_3041, ((long) 0),
																	BINT(((long) 32)));
																VECTOR_SET(BgL_v1201z00_3041, ((long) 1),
																	BgL_locz00_74);
																VECTOR_SET(BgL_v1201z00_3041, ((long) 2),
																	BgL_namez00_70);
																VECTOR_SET(BgL_v1201z00_3041, ((long) 3),
																	BgL_procz00_71);
																{	/* Eval/evcompile.scm 567 */
																	obj_t BgL_arg2863z00_3042;

																	BgL_arg2863z00_3042 =
																		CAR(((obj_t) BgL_argsz00_72));
																	VECTOR_SET(BgL_v1201z00_3041, ((long) 4),
																		BgL_arg2863z00_3042);
																}
																return BgL_v1201z00_3041;
															}
													}
												else
													{	/* Eval/evcompile.scm 565 */
														obj_t BgL_v1200z00_3043;

														BgL_v1200z00_3043 = create_vector(((long) 5));
														VECTOR_SET(BgL_v1200z00_3043, ((long) 0),
															BINT(((long) 32)));
														VECTOR_SET(BgL_v1200z00_3043, ((long) 1),
															BgL_locz00_74);
														VECTOR_SET(BgL_v1200z00_3043, ((long) 2),
															BgL_namez00_70);
														VECTOR_SET(BgL_v1200z00_3043, ((long) 3),
															BgL_procz00_71);
														VECTOR_SET(BgL_v1200z00_3043, ((long) 4),
															BgL_a0z00_3038);
														return BgL_v1200z00_3043;
													}
											}
										}
									else
										{	/* Eval/evcompile.scm 568 */
											obj_t BgL_v1202z00_3045;

											BgL_v1202z00_3045 = create_vector(((long) 5));
											VECTOR_SET(BgL_v1202z00_3045, ((long) 0),
												BINT(((long) 32)));
											VECTOR_SET(BgL_v1202z00_3045, ((long) 1), BgL_locz00_74);
											VECTOR_SET(BgL_v1202z00_3045, ((long) 2), BgL_namez00_70);
											VECTOR_SET(BgL_v1202z00_3045, ((long) 3), BgL_procz00_71);
											{	/* Eval/evcompile.scm 568 */
												obj_t BgL_arg2865z00_3046;

												BgL_arg2865z00_3046 = CAR(((obj_t) BgL_argsz00_72));
												VECTOR_SET(BgL_v1202z00_3045, ((long) 4),
													BgL_arg2865z00_3046);
											}
											return BgL_v1202z00_3045;
										}
								}
								break;
							case ((long) 2):

								{	/* Eval/evcompile.scm 570 */
									bool_t BgL_test4881z00_10396;

									if (VECTORP(BgL_procz00_71))
										{	/* Eval/evcompile.scm 354 */
											obj_t BgL_arg2712z00_6030;

											BgL_arg2712z00_6030 =
												VECTOR_REF(BgL_procz00_71, ((long) 0));
											BgL_test4881z00_10396 =
												((long) CINT(BgL_arg2712z00_6030) == ((long) 6));
										}
									else
										{	/* Eval/evcompile.scm 354 */
											BgL_test4881z00_10396 = ((bool_t) 0);
										}
									if (BgL_test4881z00_10396)
										{	/* Eval/evcompile.scm 571 */
											obj_t BgL_funz00_3048;
											obj_t BgL_a0z00_3049;
											obj_t BgL_a1z00_3050;

											BgL_funz00_3048 = VECTOR_REF(BgL_procz00_71, ((long) 2));
											BgL_a0z00_3049 = CAR(((obj_t) BgL_argsz00_72));
											{	/* Eval/evcompile.scm 573 */
												obj_t BgL_pairz00_6040;

												BgL_pairz00_6040 = CDR(((obj_t) BgL_argsz00_72));
												BgL_a1z00_3050 = CAR(BgL_pairz00_6040);
											}
											{	/* Eval/evcompile.scm 574 */
												bool_t BgL_test4883z00_10408;

												if (VECTORP(BgL_funz00_3048))
													{	/* Eval/evcompile.scm 574 */
														BgL_test4883z00_10408 =
															(VECTOR_LENGTH(BgL_funz00_3048) == ((long) 5));
													}
												else
													{	/* Eval/evcompile.scm 574 */
														BgL_test4883z00_10408 = ((bool_t) 0);
													}
												if (BgL_test4883z00_10408)
													{	/* Eval/evcompile.scm 576 */
														obj_t BgL__ortest_1081z00_3052;

														BgL__ortest_1081z00_3052 =
															BGl_evcompilezd2inline2zd2zz__evcompilez00
															(BgL_locz00_74, BgL_namez00_70, BgL_funz00_3048,
															BgL_a0z00_3049, BgL_a1z00_3050);
														if (CBOOL(BgL__ortest_1081z00_3052))
															{	/* Eval/evcompile.scm 576 */
																return BgL__ortest_1081z00_3052;
															}
														else
															{	/* Eval/evcompile.scm 577 */
																obj_t BgL_v1204z00_3053;

																BgL_v1204z00_3053 = create_vector(((long) 6));
																VECTOR_SET(BgL_v1204z00_3053, ((long) 0),
																	BINT(((long) 33)));
																VECTOR_SET(BgL_v1204z00_3053, ((long) 1),
																	BgL_locz00_74);
																VECTOR_SET(BgL_v1204z00_3053, ((long) 2),
																	BgL_namez00_70);
																VECTOR_SET(BgL_v1204z00_3053, ((long) 3),
																	BgL_procz00_71);
																{	/* Eval/evcompile.scm 577 */
																	obj_t BgL_arg2869z00_3054;

																	BgL_arg2869z00_3054 =
																		CAR(((obj_t) BgL_argsz00_72));
																	VECTOR_SET(BgL_v1204z00_3053, ((long) 4),
																		BgL_arg2869z00_3054);
																}
																{	/* Eval/evcompile.scm 577 */
																	obj_t BgL_arg2870z00_3055;

																	{	/* Eval/evcompile.scm 577 */
																		obj_t BgL_pairz00_6056;

																		BgL_pairz00_6056 =
																			CDR(((obj_t) BgL_argsz00_72));
																		BgL_arg2870z00_3055 = CAR(BgL_pairz00_6056);
																	}
																	VECTOR_SET(BgL_v1204z00_3053, ((long) 5),
																		BgL_arg2870z00_3055);
																}
																return BgL_v1204z00_3053;
															}
													}
												else
													{	/* Eval/evcompile.scm 575 */
														obj_t BgL_v1203z00_3056;

														BgL_v1203z00_3056 = create_vector(((long) 6));
														VECTOR_SET(BgL_v1203z00_3056, ((long) 0),
															BINT(((long) 33)));
														VECTOR_SET(BgL_v1203z00_3056, ((long) 1),
															BgL_locz00_74);
														VECTOR_SET(BgL_v1203z00_3056, ((long) 2),
															BgL_namez00_70);
														VECTOR_SET(BgL_v1203z00_3056, ((long) 3),
															BgL_procz00_71);
														VECTOR_SET(BgL_v1203z00_3056, ((long) 4),
															BgL_a0z00_3049);
														{	/* Eval/evcompile.scm 575 */
															obj_t BgL_arg2872z00_3058;

															{	/* Eval/evcompile.scm 575 */
																obj_t BgL_pairz00_6067;

																BgL_pairz00_6067 =
																	CDR(((obj_t) BgL_argsz00_72));
																BgL_arg2872z00_3058 = CAR(BgL_pairz00_6067);
															}
															VECTOR_SET(BgL_v1203z00_3056, ((long) 5),
																BgL_arg2872z00_3058);
														}
														return BgL_v1203z00_3056;
													}
											}
										}
									else
										{	/* Eval/evcompile.scm 578 */
											obj_t BgL_v1205z00_3059;

											BgL_v1205z00_3059 = create_vector(((long) 6));
											VECTOR_SET(BgL_v1205z00_3059, ((long) 0),
												BINT(((long) 33)));
											VECTOR_SET(BgL_v1205z00_3059, ((long) 1), BgL_locz00_74);
											VECTOR_SET(BgL_v1205z00_3059, ((long) 2), BgL_namez00_70);
											VECTOR_SET(BgL_v1205z00_3059, ((long) 3), BgL_procz00_71);
											{	/* Eval/evcompile.scm 578 */
												obj_t BgL_arg2873z00_3060;

												BgL_arg2873z00_3060 = CAR(((obj_t) BgL_argsz00_72));
												VECTOR_SET(BgL_v1205z00_3059, ((long) 4),
													BgL_arg2873z00_3060);
											}
											{	/* Eval/evcompile.scm 578 */
												obj_t BgL_arg2874z00_3061;

												{	/* Eval/evcompile.scm 578 */
													obj_t BgL_pairz00_6078;

													BgL_pairz00_6078 = CDR(((obj_t) BgL_argsz00_72));
													BgL_arg2874z00_3061 = CAR(BgL_pairz00_6078);
												}
												VECTOR_SET(BgL_v1205z00_3059, ((long) 5),
													BgL_arg2874z00_3061);
											}
											return BgL_v1205z00_3059;
										}
								}
								break;
							case ((long) 3):

								{	/* Eval/evcompile.scm 580 */
									obj_t BgL_v1206z00_3062;

									BgL_v1206z00_3062 = create_vector(((long) 7));
									VECTOR_SET(BgL_v1206z00_3062, ((long) 0), BINT(((long) 34)));
									VECTOR_SET(BgL_v1206z00_3062, ((long) 1), BgL_locz00_74);
									VECTOR_SET(BgL_v1206z00_3062, ((long) 2), BgL_namez00_70);
									VECTOR_SET(BgL_v1206z00_3062, ((long) 3), BgL_procz00_71);
									{	/* Eval/evcompile.scm 580 */
										obj_t BgL_arg2876z00_3063;

										BgL_arg2876z00_3063 = CAR(((obj_t) BgL_argsz00_72));
										VECTOR_SET(BgL_v1206z00_3062, ((long) 4),
											BgL_arg2876z00_3063);
									}
									{	/* Eval/evcompile.scm 580 */
										obj_t BgL_arg2877z00_3064;

										{	/* Eval/evcompile.scm 580 */
											obj_t BgL_pairz00_6089;

											BgL_pairz00_6089 = CDR(((obj_t) BgL_argsz00_72));
											BgL_arg2877z00_3064 = CAR(BgL_pairz00_6089);
										}
										VECTOR_SET(BgL_v1206z00_3062, ((long) 5),
											BgL_arg2877z00_3064);
									}
									{	/* Eval/evcompile.scm 580 */
										obj_t BgL_arg2880z00_3065;

										{	/* Eval/evcompile.scm 580 */
											obj_t BgL_pairz00_6096;

											{	/* Eval/evcompile.scm 580 */
												obj_t BgL_pairz00_6095;

												BgL_pairz00_6095 = CDR(((obj_t) BgL_argsz00_72));
												BgL_pairz00_6096 = CDR(BgL_pairz00_6095);
											}
											BgL_arg2880z00_3065 = CAR(BgL_pairz00_6096);
										}
										VECTOR_SET(BgL_v1206z00_3062, ((long) 6),
											BgL_arg2880z00_3065);
									}
									return BgL_v1206z00_3062;
								}
								break;
							case ((long) 4):

								{	/* Eval/evcompile.scm 582 */
									obj_t BgL_v1207z00_3066;

									BgL_v1207z00_3066 = create_vector(((long) 8));
									VECTOR_SET(BgL_v1207z00_3066, ((long) 0), BINT(((long) 35)));
									VECTOR_SET(BgL_v1207z00_3066, ((long) 1), BgL_locz00_74);
									VECTOR_SET(BgL_v1207z00_3066, ((long) 2), BgL_namez00_70);
									VECTOR_SET(BgL_v1207z00_3066, ((long) 3), BgL_procz00_71);
									{	/* Eval/evcompile.scm 582 */
										obj_t BgL_arg2881z00_3067;

										BgL_arg2881z00_3067 = CAR(((obj_t) BgL_argsz00_72));
										VECTOR_SET(BgL_v1207z00_3066, ((long) 4),
											BgL_arg2881z00_3067);
									}
									{	/* Eval/evcompile.scm 582 */
										obj_t BgL_arg2882z00_3068;

										{	/* Eval/evcompile.scm 582 */
											obj_t BgL_pairz00_6107;

											BgL_pairz00_6107 = CDR(((obj_t) BgL_argsz00_72));
											BgL_arg2882z00_3068 = CAR(BgL_pairz00_6107);
										}
										VECTOR_SET(BgL_v1207z00_3066, ((long) 5),
											BgL_arg2882z00_3068);
									}
									{	/* Eval/evcompile.scm 582 */
										obj_t BgL_arg2883z00_3069;

										{	/* Eval/evcompile.scm 582 */
											obj_t BgL_pairz00_6114;

											{	/* Eval/evcompile.scm 582 */
												obj_t BgL_pairz00_6113;

												BgL_pairz00_6113 = CDR(((obj_t) BgL_argsz00_72));
												BgL_pairz00_6114 = CDR(BgL_pairz00_6113);
											}
											BgL_arg2883z00_3069 = CAR(BgL_pairz00_6114);
										}
										VECTOR_SET(BgL_v1207z00_3066, ((long) 6),
											BgL_arg2883z00_3069);
									}
									{	/* Eval/evcompile.scm 582 */
										obj_t BgL_arg2884z00_3070;

										{	/* Eval/evcompile.scm 582 */
											obj_t BgL_pairz00_6123;

											{	/* Eval/evcompile.scm 582 */
												obj_t BgL_pairz00_6122;

												{	/* Eval/evcompile.scm 582 */
													obj_t BgL_pairz00_6121;

													BgL_pairz00_6121 = CDR(((obj_t) BgL_argsz00_72));
													BgL_pairz00_6122 = CDR(BgL_pairz00_6121);
												}
												BgL_pairz00_6123 = CDR(BgL_pairz00_6122);
											}
											BgL_arg2884z00_3070 = CAR(BgL_pairz00_6123);
										}
										VECTOR_SET(BgL_v1207z00_3066, ((long) 7),
											BgL_arg2884z00_3070);
									}
									return BgL_v1207z00_3066;
								}
								break;
							default:
								{	/* Eval/evcompile.scm 584 */
									obj_t BgL_v1198z00_3071;

									BgL_v1198z00_3071 = create_vector(((long) 5));
									VECTOR_SET(BgL_v1198z00_3071, ((long) 0), BINT(((long) 36)));
									VECTOR_SET(BgL_v1198z00_3071, ((long) 1), BgL_locz00_74);
									VECTOR_SET(BgL_v1198z00_3071, ((long) 2), BgL_namez00_70);
									VECTOR_SET(BgL_v1198z00_3071, ((long) 3), BgL_procz00_71);
									VECTOR_SET(BgL_v1198z00_3071, ((long) 4), BgL_argsz00_72);
									return BgL_v1198z00_3071;
								}
							}
					}
				}
		}

	}



/* evcompile-inline1 */
	obj_t BGl_evcompilezd2inline1zd2zz__evcompilez00(obj_t BgL_locz00_75,
		obj_t BgL_namez00_76, obj_t BgL_funz00_77, obj_t BgL_a0z00_78)
	{
		{	/* Eval/evcompile.scm 589 */
			{	/* Eval/evcompile.scm 590 */
				obj_t BgL_fz00_3072;

				BgL_fz00_3072 = VECTOR_REF(((obj_t) BgL_funz00_77), ((long) 2));
				if ((BgL_fz00_3072 == BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00))
					{	/* Eval/evcompile.scm 593 */
						obj_t BgL_v1208z00_3074;

						BgL_v1208z00_3074 = create_vector(((long) 5));
						VECTOR_SET(BgL_v1208z00_3074, ((long) 0), BINT(((long) 158)));
						VECTOR_SET(BgL_v1208z00_3074, ((long) 1), BgL_locz00_75);
						VECTOR_SET(BgL_v1208z00_3074, ((long) 2), BgL_namez00_76);
						VECTOR_SET(BgL_v1208z00_3074, ((long) 3), BgL_funz00_77);
						VECTOR_SET(BgL_v1208z00_3074, ((long) 4), BgL_a0z00_78);
						return BgL_v1208z00_3074;
					}
				else
					{	/* Eval/evcompile.scm 592 */
						if (
							(BgL_fz00_3072 == BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00))
							{	/* Eval/evcompile.scm 595 */
								obj_t BgL_v1209z00_3076;

								BgL_v1209z00_3076 = create_vector(((long) 5));
								VECTOR_SET(BgL_v1209z00_3076, ((long) 0), BINT(((long) 159)));
								VECTOR_SET(BgL_v1209z00_3076, ((long) 1), BgL_locz00_75);
								VECTOR_SET(BgL_v1209z00_3076, ((long) 2), BgL_namez00_76);
								VECTOR_SET(BgL_v1209z00_3076, ((long) 3), BgL_funz00_77);
								VECTOR_SET(BgL_v1209z00_3076, ((long) 4), BgL_a0z00_78);
								return BgL_v1209z00_3076;
							}
						else
							{	/* Eval/evcompile.scm 594 */
								if (
									(BgL_fz00_3072 ==
										BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00))
									{	/* Eval/evcompile.scm 597 */
										obj_t BgL_v1210z00_3078;

										BgL_v1210z00_3078 = create_vector(((long) 5));
										VECTOR_SET(BgL_v1210z00_3078, ((long) 0),
											BINT(((long) 160)));
										VECTOR_SET(BgL_v1210z00_3078, ((long) 1), BgL_locz00_75);
										VECTOR_SET(BgL_v1210z00_3078, ((long) 2), BgL_namez00_76);
										VECTOR_SET(BgL_v1210z00_3078, ((long) 3), BgL_funz00_77);
										VECTOR_SET(BgL_v1210z00_3078, ((long) 4), BgL_a0z00_78);
										return BgL_v1210z00_3078;
									}
								else
									{	/* Eval/evcompile.scm 596 */
										return BFALSE;
									}
							}
					}
			}
		}

	}



/* evcompile-inline2 */
	obj_t BGl_evcompilezd2inline2zd2zz__evcompilez00(obj_t BgL_locz00_79,
		obj_t BgL_namez00_80, obj_t BgL_funz00_81, obj_t BgL_a0z00_82,
		obj_t BgL_a1z00_83)
	{
		{	/* Eval/evcompile.scm 604 */
			{	/* Eval/evcompile.scm 605 */
				obj_t BgL_fz00_3079;

				BgL_fz00_3079 = VECTOR_REF(((obj_t) BgL_funz00_81), ((long) 2));
				if ((BgL_fz00_3079 == BGl_zb2zd2envz60zz__r4_numbers_6_5z00))
					{	/* Eval/evcompile.scm 608 */
						obj_t BgL_v1211z00_3081;

						BgL_v1211z00_3081 = create_vector(((long) 6));
						VECTOR_SET(BgL_v1211z00_3081, ((long) 0), BINT(((long) 147)));
						VECTOR_SET(BgL_v1211z00_3081, ((long) 1), BgL_locz00_79);
						VECTOR_SET(BgL_v1211z00_3081, ((long) 2), BgL_namez00_80);
						VECTOR_SET(BgL_v1211z00_3081, ((long) 3), BgL_funz00_81);
						VECTOR_SET(BgL_v1211z00_3081, ((long) 4), BgL_a0z00_82);
						VECTOR_SET(BgL_v1211z00_3081, ((long) 5), BgL_a1z00_83);
						return BgL_v1211z00_3081;
					}
				else
					{	/* Eval/evcompile.scm 607 */
						if ((BgL_fz00_3079 == BGl_zd2zd2envz00zz__r4_numbers_6_5z00))
							{	/* Eval/evcompile.scm 610 */
								obj_t BgL_v1212z00_3083;

								BgL_v1212z00_3083 = create_vector(((long) 6));
								VECTOR_SET(BgL_v1212z00_3083, ((long) 0), BINT(((long) 148)));
								VECTOR_SET(BgL_v1212z00_3083, ((long) 1), BgL_locz00_79);
								VECTOR_SET(BgL_v1212z00_3083, ((long) 2), BgL_namez00_80);
								VECTOR_SET(BgL_v1212z00_3083, ((long) 3), BgL_funz00_81);
								VECTOR_SET(BgL_v1212z00_3083, ((long) 4), BgL_a0z00_82);
								VECTOR_SET(BgL_v1212z00_3083, ((long) 5), BgL_a1z00_83);
								return BgL_v1212z00_3083;
							}
						else
							{	/* Eval/evcompile.scm 609 */
								if ((BgL_fz00_3079 == BGl_za2zd2envz70zz__r4_numbers_6_5z00))
									{	/* Eval/evcompile.scm 612 */
										obj_t BgL_v1213z00_3085;

										BgL_v1213z00_3085 = create_vector(((long) 6));
										VECTOR_SET(BgL_v1213z00_3085, ((long) 0),
											BINT(((long) 149)));
										VECTOR_SET(BgL_v1213z00_3085, ((long) 1), BgL_locz00_79);
										VECTOR_SET(BgL_v1213z00_3085, ((long) 2), BgL_namez00_80);
										VECTOR_SET(BgL_v1213z00_3085, ((long) 3), BgL_funz00_81);
										VECTOR_SET(BgL_v1213z00_3085, ((long) 4), BgL_a0z00_82);
										VECTOR_SET(BgL_v1213z00_3085, ((long) 5), BgL_a1z00_83);
										return BgL_v1213z00_3085;
									}
								else
									{	/* Eval/evcompile.scm 611 */
										if (
											(BgL_fz00_3079 == BGl_zf2zd2envz20zz__r4_numbers_6_5z00))
											{	/* Eval/evcompile.scm 614 */
												obj_t BgL_v1214z00_3087;

												BgL_v1214z00_3087 = create_vector(((long) 6));
												VECTOR_SET(BgL_v1214z00_3087, ((long) 0),
													BINT(((long) 150)));
												VECTOR_SET(BgL_v1214z00_3087, ((long) 1),
													BgL_locz00_79);
												VECTOR_SET(BgL_v1214z00_3087, ((long) 2),
													BgL_namez00_80);
												VECTOR_SET(BgL_v1214z00_3087, ((long) 3),
													BgL_funz00_81);
												VECTOR_SET(BgL_v1214z00_3087, ((long) 4), BgL_a0z00_82);
												VECTOR_SET(BgL_v1214z00_3087, ((long) 5), BgL_a1z00_83);
												return BgL_v1214z00_3087;
											}
										else
											{	/* Eval/evcompile.scm 613 */
												if (
													(BgL_fz00_3079 ==
														BGl_zc3zd2envz11zz__r4_numbers_6_5z00))
													{	/* Eval/evcompile.scm 616 */
														obj_t BgL_v1215z00_3089;

														BgL_v1215z00_3089 = create_vector(((long) 6));
														VECTOR_SET(BgL_v1215z00_3089, ((long) 0),
															BINT(((long) 151)));
														VECTOR_SET(BgL_v1215z00_3089, ((long) 1),
															BgL_locz00_79);
														VECTOR_SET(BgL_v1215z00_3089, ((long) 2),
															BgL_namez00_80);
														VECTOR_SET(BgL_v1215z00_3089, ((long) 3),
															BgL_funz00_81);
														VECTOR_SET(BgL_v1215z00_3089, ((long) 4),
															BgL_a0z00_82);
														VECTOR_SET(BgL_v1215z00_3089, ((long) 5),
															BgL_a1z00_83);
														return BgL_v1215z00_3089;
													}
												else
													{	/* Eval/evcompile.scm 615 */
														if (
															(BgL_fz00_3079 ==
																BGl_ze3zd2envz31zz__r4_numbers_6_5z00))
															{	/* Eval/evcompile.scm 618 */
																obj_t BgL_v1216z00_3091;

																BgL_v1216z00_3091 = create_vector(((long) 6));
																VECTOR_SET(BgL_v1216z00_3091, ((long) 0),
																	BINT(((long) 152)));
																VECTOR_SET(BgL_v1216z00_3091, ((long) 1),
																	BgL_locz00_79);
																VECTOR_SET(BgL_v1216z00_3091, ((long) 2),
																	BgL_namez00_80);
																VECTOR_SET(BgL_v1216z00_3091, ((long) 3),
																	BgL_funz00_81);
																VECTOR_SET(BgL_v1216z00_3091, ((long) 4),
																	BgL_a0z00_82);
																VECTOR_SET(BgL_v1216z00_3091, ((long) 5),
																	BgL_a1z00_83);
																return BgL_v1216z00_3091;
															}
														else
															{	/* Eval/evcompile.scm 617 */
																if (
																	(BgL_fz00_3079 ==
																		BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00))
																	{	/* Eval/evcompile.scm 620 */
																		obj_t BgL_v1217z00_3093;

																		BgL_v1217z00_3093 =
																			create_vector(((long) 6));
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 0),
																			BINT(((long) 153)));
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 1),
																			BgL_locz00_79);
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 2),
																			BgL_namez00_80);
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 3),
																			BgL_funz00_81);
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 4),
																			BgL_a0z00_82);
																		VECTOR_SET(BgL_v1217z00_3093, ((long) 5),
																			BgL_a1z00_83);
																		return BgL_v1217z00_3093;
																	}
																else
																	{	/* Eval/evcompile.scm 619 */
																		if (
																			(BgL_fz00_3079 ==
																				BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00))
																			{	/* Eval/evcompile.scm 622 */
																				obj_t BgL_v1218z00_3095;

																				BgL_v1218z00_3095 =
																					create_vector(((long) 6));
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 0), BINT(((long) 154)));
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 1), BgL_locz00_79);
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 2), BgL_namez00_80);
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 3), BgL_funz00_81);
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 4), BgL_a0z00_82);
																				VECTOR_SET(BgL_v1218z00_3095,
																					((long) 5), BgL_a1z00_83);
																				return BgL_v1218z00_3095;
																			}
																		else
																			{	/* Eval/evcompile.scm 621 */
																				if (
																					(BgL_fz00_3079 ==
																						BGl_zd3zd2envz01zz__r4_numbers_6_5z00))
																					{	/* Eval/evcompile.scm 624 */
																						obj_t BgL_v1219z00_3097;

																						BgL_v1219z00_3097 =
																							create_vector(((long) 6));
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 0), BINT(((long) 155)));
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 1), BgL_locz00_79);
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 2), BgL_namez00_80);
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 3), BgL_funz00_81);
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 4), BgL_a0z00_82);
																						VECTOR_SET(BgL_v1219z00_3097,
																							((long) 5), BgL_a1z00_83);
																						return BgL_v1219z00_3097;
																					}
																				else
																					{	/* Eval/evcompile.scm 623 */
																						if (
																							(BgL_fz00_3079 ==
																								BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00))
																							{	/* Eval/evcompile.scm 626 */
																								obj_t BgL_v1220z00_3099;

																								BgL_v1220z00_3099 =
																									create_vector(((long) 6));
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 0),
																									BINT(((long) 156)));
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 1), BgL_locz00_79);
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 2), BgL_namez00_80);
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 3), BgL_funz00_81);
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 4), BgL_a0z00_82);
																								VECTOR_SET(BgL_v1220z00_3099,
																									((long) 5), BgL_a1z00_83);
																								return BgL_v1220z00_3099;
																							}
																						else
																							{	/* Eval/evcompile.scm 625 */
																								if (
																									(BgL_fz00_3079 ==
																										BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00))
																									{	/* Eval/evcompile.scm 628 */
																										obj_t BgL_v1221z00_3101;

																										BgL_v1221z00_3101 =
																											create_vector(((long) 6));
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 0),
																											BINT(((long) 157)));
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 1),
																											BgL_locz00_79);
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 2),
																											BgL_namez00_80);
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 3),
																											BgL_funz00_81);
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 4), BgL_a0z00_82);
																										VECTOR_SET
																											(BgL_v1221z00_3101,
																											((long) 5), BgL_a1z00_83);
																										return BgL_v1221z00_3101;
																									}
																								else
																									{	/* Eval/evcompile.scm 627 */
																										if (
																											(BgL_fz00_3079 ==
																												BGl_zb2fxzd2envz60zz__r4_numbers_6_5_fixnumz00))
																											{	/* Eval/evcompile.scm 630 */
																												obj_t BgL_v1222z00_3103;

																												BgL_v1222z00_3103 =
																													create_vector(((long)
																														6));
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 0),
																													BINT(((long) 166)));
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 1),
																													BgL_locz00_79);
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 2),
																													BgL_namez00_80);
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 3),
																													BgL_funz00_81);
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 4),
																													BgL_a0z00_82);
																												VECTOR_SET
																													(BgL_v1222z00_3103,
																													((long) 5),
																													BgL_a1z00_83);
																												return
																													BgL_v1222z00_3103;
																											}
																										else
																											{	/* Eval/evcompile.scm 629 */
																												if (
																													(BgL_fz00_3079 ==
																														BGl_zd2fxzd2envz00zz__r4_numbers_6_5_fixnumz00))
																													{	/* Eval/evcompile.scm 632 */
																														obj_t
																															BgL_v1223z00_3105;
																														BgL_v1223z00_3105 =
																															create_vector((
																																(long) 6));
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 0),
																															BINT(((long)
																																	167)));
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 1),
																															BgL_locz00_79);
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 2),
																															BgL_namez00_80);
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 3),
																															BgL_funz00_81);
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 4),
																															BgL_a0z00_82);
																														VECTOR_SET
																															(BgL_v1223z00_3105,
																															((long) 5),
																															BgL_a1z00_83);
																														return
																															BgL_v1223z00_3105;
																													}
																												else
																													{	/* Eval/evcompile.scm 631 */
																														if (
																															(BgL_fz00_3079 ==
																																BGl_za2fxzd2envz70zz__r4_numbers_6_5_fixnumz00))
																															{	/* Eval/evcompile.scm 634 */
																																obj_t
																																	BgL_v1224z00_3107;
																																BgL_v1224z00_3107
																																	=
																																	create_vector(
																																	((long) 6));
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 0),
																																	BINT(((long)
																																			168)));
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 1),
																																	BgL_locz00_79);
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 2),
																																	BgL_namez00_80);
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 3),
																																	BgL_funz00_81);
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 4),
																																	BgL_a0z00_82);
																																VECTOR_SET
																																	(BgL_v1224z00_3107,
																																	((long) 5),
																																	BgL_a1z00_83);
																																return
																																	BgL_v1224z00_3107;
																															}
																														else
																															{	/* Eval/evcompile.scm 633 */
																																if (
																																	(BgL_fz00_3079
																																		==
																																		BGl_zf2fxzd2envz20zz__r4_numbers_6_5_fixnumz00))
																																	{	/* Eval/evcompile.scm 636 */
																																		obj_t
																																			BgL_v1225z00_3109;
																																		BgL_v1225z00_3109
																																			=
																																			create_vector
																																			(((long)
																																				6));
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				0),
																																			BINT((
																																					(long)
																																					169)));
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				1),
																																			BgL_locz00_79);
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				2),
																																			BgL_namez00_80);
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				3),
																																			BgL_funz00_81);
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				4),
																																			BgL_a0z00_82);
																																		VECTOR_SET
																																			(BgL_v1225z00_3109,
																																			((long)
																																				5),
																																			BgL_a1z00_83);
																																		return
																																			BgL_v1225z00_3109;
																																	}
																																else
																																	{	/* Eval/evcompile.scm 635 */
																																		if (
																																			(BgL_fz00_3079
																																				==
																																				BGl_zc3fxzd2envz11zz__r4_numbers_6_5_fixnumz00))
																																			{	/* Eval/evcompile.scm 638 */
																																				obj_t
																																					BgL_v1226z00_3111;
																																				BgL_v1226z00_3111
																																					=
																																					create_vector
																																					(((long) 6));
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 0), BINT(((long) 170)));
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 1), BgL_locz00_79);
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 2), BgL_namez00_80);
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 3), BgL_funz00_81);
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 4), BgL_a0z00_82);
																																				VECTOR_SET
																																					(BgL_v1226z00_3111,
																																					((long) 5), BgL_a1z00_83);
																																				return
																																					BgL_v1226z00_3111;
																																			}
																																		else
																																			{	/* Eval/evcompile.scm 637 */
																																				if (
																																					(BgL_fz00_3079
																																						==
																																						BGl_ze3fxzd2envz31zz__r4_numbers_6_5_fixnumz00))
																																					{	/* Eval/evcompile.scm 640 */
																																						obj_t
																																							BgL_v1227z00_3113;
																																						BgL_v1227z00_3113
																																							=
																																							create_vector
																																							(((long) 6));
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 0), BINT(((long) 171)));
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 1), BgL_locz00_79);
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 2), BgL_namez00_80);
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 3), BgL_funz00_81);
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 4), BgL_a0z00_82);
																																						VECTOR_SET
																																							(BgL_v1227z00_3113,
																																							((long) 5), BgL_a1z00_83);
																																						return
																																							BgL_v1227z00_3113;
																																					}
																																				else
																																					{	/* Eval/evcompile.scm 639 */
																																						if (
																																							(BgL_fz00_3079
																																								==
																																								BGl_zc3zd3fxzd2envzc2zz__r4_numbers_6_5_fixnumz00))
																																							{	/* Eval/evcompile.scm 642 */
																																								obj_t
																																									BgL_v1228z00_3115;
																																								BgL_v1228z00_3115
																																									=
																																									create_vector
																																									(
																																									((long) 6));
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 0), BINT(((long) 172)));
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 1), BgL_locz00_79);
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 2), BgL_namez00_80);
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 3), BgL_funz00_81);
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 4), BgL_a0z00_82);
																																								VECTOR_SET
																																									(BgL_v1228z00_3115,
																																									((long) 5), BgL_a1z00_83);
																																								return
																																									BgL_v1228z00_3115;
																																							}
																																						else
																																							{	/* Eval/evcompile.scm 641 */
																																								if ((BgL_fz00_3079 == BGl_ze3zd3fxzd2envze2zz__r4_numbers_6_5_fixnumz00))
																																									{	/* Eval/evcompile.scm 644 */
																																										obj_t
																																											BgL_v1229z00_3117;
																																										BgL_v1229z00_3117
																																											=
																																											create_vector
																																											(
																																											((long) 6));
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 0), BINT(((long) 173)));
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 1), BgL_locz00_79);
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 2), BgL_namez00_80);
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 3), BgL_funz00_81);
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 4), BgL_a0z00_82);
																																										VECTOR_SET
																																											(BgL_v1229z00_3117,
																																											((long) 5), BgL_a1z00_83);
																																										return
																																											BgL_v1229z00_3117;
																																									}
																																								else
																																									{	/* Eval/evcompile.scm 643 */
																																										if ((BgL_fz00_3079 == BGl_zd3fxzd2envz01zz__r4_numbers_6_5_fixnumz00))
																																											{	/* Eval/evcompile.scm 646 */
																																												obj_t
																																													BgL_v1230z00_3119;
																																												BgL_v1230z00_3119
																																													=
																																													create_vector
																																													(
																																													((long) 6));
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 0), BINT(((long) 174)));
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 1), BgL_locz00_79);
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 2), BgL_namez00_80);
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 3), BgL_funz00_81);
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 4), BgL_a0z00_82);
																																												VECTOR_SET
																																													(BgL_v1230z00_3119,
																																													((long) 5), BgL_a1z00_83);
																																												return
																																													BgL_v1230z00_3119;
																																											}
																																										else
																																											{	/* Eval/evcompile.scm 645 */
																																												return
																																													BFALSE;
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
									}
							}
					}
			}
		}

	}



/* evcompile-lambda */
	obj_t BGl_evcompilezd2lambdazd2zz__evcompilez00(obj_t BgL_formalsz00_84,
		obj_t BgL_bodyz00_85, obj_t BgL_wherez00_86, obj_t BgL_locz00_87)
	{
		{	/* Eval/evcompile.scm 653 */
			{

				if (NULLP(BgL_formalsz00_84))
					{	/* Eval/evcompile.scm 658 */
					BgL_tagzd27055zd2_3121:
						if (BGl_tracedzf3ze70z14zz__evcompilez00(BgL_wherez00_86))
							{	/* Eval/evcompile.scm 661 */
								obj_t BgL_v1231z00_3193;

								BgL_v1231z00_3193 = create_vector(((long) 4));
								{	/* Eval/evcompile.scm 661 */
									long BgL_arg3003z00_3194;

									BgL_arg3003z00_3194 =
										(bgl_list_length(BgL_formalsz00_84) + ((long) 37));
									VECTOR_SET(BgL_v1231z00_3193, ((long) 0),
										BINT(BgL_arg3003z00_3194));
								}
								VECTOR_SET(BgL_v1231z00_3193, ((long) 1), BgL_locz00_87);
								VECTOR_SET(BgL_v1231z00_3193, ((long) 2), BgL_bodyz00_85);
								VECTOR_SET(BgL_v1231z00_3193, ((long) 3), BgL_wherez00_86);
								return BgL_v1231z00_3193;
							}
						else
							{	/* Eval/evcompile.scm 662 */
								obj_t BgL_v1232z00_3196;

								BgL_v1232z00_3196 = create_vector(((long) 3));
								{	/* Eval/evcompile.scm 662 */
									long BgL_arg3005z00_3197;

									BgL_arg3005z00_3197 =
										(bgl_list_length(BgL_formalsz00_84) + ((long) 42));
									VECTOR_SET(BgL_v1232z00_3196, ((long) 0),
										BINT(BgL_arg3005z00_3197));
								}
								VECTOR_SET(BgL_v1232z00_3196, ((long) 1), BgL_locz00_87);
								VECTOR_SET(BgL_v1232z00_3196, ((long) 2), BgL_bodyz00_85);
								return BgL_v1232z00_3196;
							}
					}
				else
					{	/* Eval/evcompile.scm 658 */
						if (PAIRP(BgL_formalsz00_84))
							{	/* Eval/evcompile.scm 658 */
								if (NULLP(CDR(BgL_formalsz00_84)))
									{	/* Eval/evcompile.scm 658 */
										goto BgL_tagzd27055zd2_3121;
									}
								else
									{	/* Eval/evcompile.scm 658 */
										obj_t BgL_cdrzd27068zd2_3132;

										BgL_cdrzd27068zd2_3132 = CDR(BgL_formalsz00_84);
										if (PAIRP(BgL_cdrzd27068zd2_3132))
											{	/* Eval/evcompile.scm 658 */
												if (NULLP(CDR(BgL_cdrzd27068zd2_3132)))
													{	/* Eval/evcompile.scm 658 */
														goto BgL_tagzd27055zd2_3121;
													}
												else
													{	/* Eval/evcompile.scm 658 */
														obj_t BgL_cdrzd27075zd2_3136;

														BgL_cdrzd27075zd2_3136 =
															CDR(((obj_t) BgL_cdrzd27068zd2_3132));
														if (PAIRP(BgL_cdrzd27075zd2_3136))
															{	/* Eval/evcompile.scm 658 */
																if (NULLP(CDR(BgL_cdrzd27075zd2_3136)))
																	{	/* Eval/evcompile.scm 658 */
																		goto BgL_tagzd27055zd2_3121;
																	}
																else
																	{	/* Eval/evcompile.scm 658 */
																		obj_t BgL_cdrzd27083zd2_3140;

																		BgL_cdrzd27083zd2_3140 =
																			CDR(CDR(BgL_cdrzd27068zd2_3132));
																		if (PAIRP(BgL_cdrzd27083zd2_3140))
																			{	/* Eval/evcompile.scm 658 */
																				if (NULLP(CDR(BgL_cdrzd27083zd2_3140)))
																					{	/* Eval/evcompile.scm 658 */
																						goto BgL_tagzd27055zd2_3121;
																					}
																				else
																					{	/* Eval/evcompile.scm 658 */
																						bool_t BgL_test4919z00_10778;

																						{	/* Eval/evcompile.scm 658 */
																							obj_t BgL_tmpz00_10779;

																							BgL_tmpz00_10779 =
																								CAR(BgL_formalsz00_84);
																							BgL_test4919z00_10778 =
																								PAIRP(BgL_tmpz00_10779);
																						}
																						if (BgL_test4919z00_10778)
																							{	/* Eval/evcompile.scm 658 */
																							BgL_tagzd27060zd2_3126:
																								if (BGl_tracedzf3ze70z14zz__evcompilez00(BgL_wherez00_86))
																									{	/* Eval/evcompile.scm 681 */
																										obj_t BgL_v1241z00_3212;

																										BgL_v1241z00_3212 =
																											create_vector(((long) 5));
																										VECTOR_SET
																											(BgL_v1241z00_3212,
																											((long) 0),
																											BINT(((long) 55)));
																										VECTOR_SET
																											(BgL_v1241z00_3212,
																											((long) 1),
																											BgL_locz00_87);
																										VECTOR_SET
																											(BgL_v1241z00_3212,
																											((long) 2),
																											BgL_bodyz00_85);
																										VECTOR_SET
																											(BgL_v1241z00_3212,
																											((long) 3),
																											BgL_wherez00_86);
																										VECTOR_SET
																											(BgL_v1241z00_3212,
																											((long) 4),
																											BgL_formalsz00_84);
																										return BgL_v1241z00_3212;
																									}
																								else
																									{	/* Eval/evcompile.scm 682 */
																										obj_t BgL_v1242z00_3213;

																										BgL_v1242z00_3213 =
																											create_vector(((long) 4));
																										VECTOR_SET
																											(BgL_v1242z00_3213,
																											((long) 0),
																											BINT(((long) 56)));
																										VECTOR_SET
																											(BgL_v1242z00_3213,
																											((long) 1),
																											BgL_locz00_87);
																										VECTOR_SET
																											(BgL_v1242z00_3213,
																											((long) 2),
																											BgL_bodyz00_85);
																										VECTOR_SET
																											(BgL_v1242z00_3213,
																											((long) 3),
																											BgL_formalsz00_84);
																										return BgL_v1242z00_3213;
																									}
																							}
																						else
																							{	/* Eval/evcompile.scm 658 */
																								bool_t BgL_test4921z00_10797;

																								{	/* Eval/evcompile.scm 658 */
																									obj_t BgL_tmpz00_10798;

																									BgL_tmpz00_10798 =
																										CAR(CDR(BgL_formalsz00_84));
																									BgL_test4921z00_10797 =
																										PAIRP(BgL_tmpz00_10798);
																								}
																								if (BgL_test4921z00_10797)
																									{	/* Eval/evcompile.scm 658 */
																										goto BgL_tagzd27060zd2_3126;
																									}
																								else
																									{	/* Eval/evcompile.scm 658 */
																										bool_t
																											BgL_test4922z00_10802;
																										{	/* Eval/evcompile.scm 658 */
																											obj_t BgL_tmpz00_10803;

																											BgL_tmpz00_10803 =
																												CAR(CDR(CDR
																													(BgL_formalsz00_84)));
																											BgL_test4922z00_10802 =
																												PAIRP(BgL_tmpz00_10803);
																										}
																										if (BgL_test4922z00_10802)
																											{	/* Eval/evcompile.scm 658 */
																												goto
																													BgL_tagzd27060zd2_3126;
																											}
																										else
																											{	/* Eval/evcompile.scm 658 */
																												goto
																													BgL_tagzd27060zd2_3126;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Eval/evcompile.scm 658 */
																				bool_t BgL_test4923z00_10808;

																				{	/* Eval/evcompile.scm 658 */
																					obj_t BgL_tmpz00_10809;

																					BgL_tmpz00_10809 =
																						CAR(BgL_formalsz00_84);
																					BgL_test4923z00_10808 =
																						PAIRP(BgL_tmpz00_10809);
																				}
																				if (BgL_test4923z00_10808)
																					{	/* Eval/evcompile.scm 658 */
																						goto BgL_tagzd27060zd2_3126;
																					}
																				else
																					{	/* Eval/evcompile.scm 658 */
																						bool_t BgL_test4924z00_10812;

																						{	/* Eval/evcompile.scm 658 */
																							obj_t BgL_tmpz00_10813;

																							BgL_tmpz00_10813 =
																								CAR(CDR(BgL_formalsz00_84));
																							BgL_test4924z00_10812 =
																								PAIRP(BgL_tmpz00_10813);
																						}
																						if (BgL_test4924z00_10812)
																							{	/* Eval/evcompile.scm 658 */
																								goto BgL_tagzd27060zd2_3126;
																							}
																						else
																							{	/* Eval/evcompile.scm 658 */
																								bool_t BgL_test4925z00_10817;

																								{	/* Eval/evcompile.scm 658 */
																									obj_t BgL_tmpz00_10818;

																									BgL_tmpz00_10818 =
																										CAR(CDR(CDR
																											(BgL_formalsz00_84)));
																									BgL_test4925z00_10817 =
																										PAIRP(BgL_tmpz00_10818);
																								}
																								if (BgL_test4925z00_10817)
																									{	/* Eval/evcompile.scm 658 */
																										goto BgL_tagzd27060zd2_3126;
																									}
																								else
																									{	/* Eval/evcompile.scm 658 */
																										if (BGl_tracedzf3ze70z14zz__evcompilez00(BgL_wherez00_86))
																											{	/* Eval/evcompile.scm 677 */
																												obj_t BgL_v1239z00_3209;

																												BgL_v1239z00_3209 =
																													create_vector(((long)
																														4));
																												VECTOR_SET
																													(BgL_v1239z00_3209,
																													((long) 0),
																													BINT(((long) 50)));
																												VECTOR_SET
																													(BgL_v1239z00_3209,
																													((long) 1),
																													BgL_locz00_87);
																												VECTOR_SET
																													(BgL_v1239z00_3209,
																													((long) 2),
																													BgL_bodyz00_85);
																												VECTOR_SET
																													(BgL_v1239z00_3209,
																													((long) 3),
																													BgL_wherez00_86);
																												return
																													BgL_v1239z00_3209;
																											}
																										else
																											{	/* Eval/evcompile.scm 678 */
																												obj_t BgL_v1240z00_3210;

																												BgL_v1240z00_3210 =
																													create_vector(((long)
																														3));
																												VECTOR_SET
																													(BgL_v1240z00_3210,
																													((long) 0),
																													BINT(((long) 54)));
																												VECTOR_SET
																													(BgL_v1240z00_3210,
																													((long) 1),
																													BgL_locz00_87);
																												VECTOR_SET
																													(BgL_v1240z00_3210,
																													((long) 2),
																													BgL_bodyz00_85);
																												return
																													BgL_v1240z00_3210;
																											}
																									}
																							}
																					}
																			}
																	}
															}
														else
															{	/* Eval/evcompile.scm 658 */
																bool_t BgL_test4927z00_10836;

																{	/* Eval/evcompile.scm 658 */
																	obj_t BgL_tmpz00_10837;

																	BgL_tmpz00_10837 = CAR(BgL_formalsz00_84);
																	BgL_test4927z00_10836 =
																		PAIRP(BgL_tmpz00_10837);
																}
																if (BgL_test4927z00_10836)
																	{	/* Eval/evcompile.scm 658 */
																		goto BgL_tagzd27060zd2_3126;
																	}
																else
																	{	/* Eval/evcompile.scm 658 */
																		bool_t BgL_test4928z00_10840;

																		{	/* Eval/evcompile.scm 658 */
																			obj_t BgL_tmpz00_10841;

																			BgL_tmpz00_10841 =
																				CAR(BgL_cdrzd27068zd2_3132);
																			BgL_test4928z00_10840 =
																				PAIRP(BgL_tmpz00_10841);
																		}
																		if (BgL_test4928z00_10840)
																			{	/* Eval/evcompile.scm 658 */
																				goto BgL_tagzd27060zd2_3126;
																			}
																		else
																			{	/* Eval/evcompile.scm 658 */
																				if (BGl_tracedzf3ze70z14zz__evcompilez00
																					(BgL_wherez00_86))
																					{	/* Eval/evcompile.scm 673 */
																						obj_t BgL_v1237z00_3206;

																						BgL_v1237z00_3206 =
																							create_vector(((long) 4));
																						VECTOR_SET(BgL_v1237z00_3206,
																							((long) 0), BINT(((long) 49)));
																						VECTOR_SET(BgL_v1237z00_3206,
																							((long) 1), BgL_locz00_87);
																						VECTOR_SET(BgL_v1237z00_3206,
																							((long) 2), BgL_bodyz00_85);
																						VECTOR_SET(BgL_v1237z00_3206,
																							((long) 3), BgL_wherez00_86);
																						return BgL_v1237z00_3206;
																					}
																				else
																					{	/* Eval/evcompile.scm 674 */
																						obj_t BgL_v1238z00_3207;

																						BgL_v1238z00_3207 =
																							create_vector(((long) 3));
																						VECTOR_SET(BgL_v1238z00_3207,
																							((long) 0), BINT(((long) 53)));
																						VECTOR_SET(BgL_v1238z00_3207,
																							((long) 1), BgL_locz00_87);
																						VECTOR_SET(BgL_v1238z00_3207,
																							((long) 2), BgL_bodyz00_85);
																						return BgL_v1238z00_3207;
																					}
																			}
																	}
															}
													}
											}
										else
											{	/* Eval/evcompile.scm 658 */
												bool_t BgL_test4930z00_10857;

												{	/* Eval/evcompile.scm 658 */
													obj_t BgL_tmpz00_10858;

													BgL_tmpz00_10858 = CAR(BgL_formalsz00_84);
													BgL_test4930z00_10857 = PAIRP(BgL_tmpz00_10858);
												}
												if (BgL_test4930z00_10857)
													{	/* Eval/evcompile.scm 658 */
														goto BgL_tagzd27060zd2_3126;
													}
												else
													{	/* Eval/evcompile.scm 658 */
														if (BGl_tracedzf3ze70z14zz__evcompilez00
															(BgL_wherez00_86))
															{	/* Eval/evcompile.scm 669 */
																obj_t BgL_v1235z00_3203;

																BgL_v1235z00_3203 = create_vector(((long) 4));
																VECTOR_SET(BgL_v1235z00_3203, ((long) 0),
																	BINT(((long) 48)));
																VECTOR_SET(BgL_v1235z00_3203, ((long) 1),
																	BgL_locz00_87);
																VECTOR_SET(BgL_v1235z00_3203, ((long) 2),
																	BgL_bodyz00_85);
																VECTOR_SET(BgL_v1235z00_3203, ((long) 3),
																	BgL_wherez00_86);
																return BgL_v1235z00_3203;
															}
														else
															{	/* Eval/evcompile.scm 670 */
																obj_t BgL_v1236z00_3204;

																BgL_v1236z00_3204 = create_vector(((long) 3));
																VECTOR_SET(BgL_v1236z00_3204, ((long) 0),
																	BINT(((long) 52)));
																VECTOR_SET(BgL_v1236z00_3204, ((long) 1),
																	BgL_locz00_87);
																VECTOR_SET(BgL_v1236z00_3204, ((long) 2),
																	BgL_bodyz00_85);
																return BgL_v1236z00_3204;
															}
													}
											}
									}
							}
						else
							{	/* Eval/evcompile.scm 658 */
								if (BGl_tracedzf3ze70z14zz__evcompilez00(BgL_wherez00_86))
									{	/* Eval/evcompile.scm 665 */
										obj_t BgL_v1233z00_3200;

										BgL_v1233z00_3200 = create_vector(((long) 4));
										VECTOR_SET(BgL_v1233z00_3200, ((long) 0),
											BINT(((long) 47)));
										VECTOR_SET(BgL_v1233z00_3200, ((long) 1), BgL_locz00_87);
										VECTOR_SET(BgL_v1233z00_3200, ((long) 2), BgL_bodyz00_85);
										VECTOR_SET(BgL_v1233z00_3200, ((long) 3), BgL_wherez00_86);
										return BgL_v1233z00_3200;
									}
								else
									{	/* Eval/evcompile.scm 666 */
										obj_t BgL_v1234z00_3201;

										BgL_v1234z00_3201 = create_vector(((long) 3));
										VECTOR_SET(BgL_v1234z00_3201, ((long) 0),
											BINT(((long) 51)));
										VECTOR_SET(BgL_v1234z00_3201, ((long) 1), BgL_locz00_87);
										VECTOR_SET(BgL_v1234z00_3201, ((long) 2), BgL_bodyz00_85);
										return BgL_v1234z00_3201;
									}
							}
					}
			}
		}

	}



/* traced?~0 */
	bool_t BGl_tracedzf3ze70z14zz__evcompilez00(obj_t BgL_wherez00_7267)
	{
		{	/* Eval/evcompile.scm 656 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_wherez00_7267,
						BGl_symbol4375z00zz__evcompilez00)))
				{	/* Eval/evcompile.scm 656 */
					return ((bool_t) 0);
				}
			else
				{	/* Eval/evcompile.scm 656 */
					return ((bool_t) 1);
				}
		}

	}



/* evcompile-let */
	obj_t BGl_evcompilezd2letzd2zz__evcompilez00(obj_t BgL_bindingsz00_88,
		obj_t BgL_bodyz00_89, obj_t BgL_envz00_90, obj_t BgL_genvz00_91,
		obj_t BgL_wherez00_92, bool_t BgL_tailz00_93, obj_t BgL_locz00_94,
		bool_t BgL_lkpz00_95)
	{
		{	/* Eval/evcompile.scm 687 */
			{	/* Eval/evcompile.scm 688 */
				obj_t BgL_env2z00_3218;

				{	/* Eval/evcompile.scm 688 */
					obj_t BgL_arg3033z00_3244;

					if (NULLP(BgL_bindingsz00_88))
						{	/* Eval/evcompile.scm 688 */
							BgL_arg3033z00_3244 = BNIL;
						}
					else
						{	/* Eval/evcompile.scm 688 */
							obj_t BgL_head1245z00_3247;

							{	/* Eval/evcompile.scm 688 */
								obj_t BgL_arg3043z00_3259;

								{	/* Eval/evcompile.scm 688 */
									obj_t BgL_pairz00_6359;

									BgL_pairz00_6359 = CAR(((obj_t) BgL_bindingsz00_88));
									BgL_arg3043z00_3259 = CAR(BgL_pairz00_6359);
								}
								{	/* Eval/evcompile.scm 688 */
									obj_t BgL_res4127z00_6360;

									BgL_res4127z00_6360 =
										MAKE_YOUNG_PAIR(BgL_arg3043z00_3259, BNIL);
									BgL_head1245z00_3247 = BgL_res4127z00_6360;
								}
							}
							{	/* Eval/evcompile.scm 688 */
								obj_t BgL_g1248z00_3248;

								BgL_g1248z00_3248 = CDR(((obj_t) BgL_bindingsz00_88));
								{
									obj_t BgL_l1243z00_6385;
									obj_t BgL_tail1246z00_6386;

									BgL_l1243z00_6385 = BgL_g1248z00_3248;
									BgL_tail1246z00_6386 = BgL_head1245z00_3247;
								BgL_zc3z04anonymousza33035ze3z87_6384:
									if (NULLP(BgL_l1243z00_6385))
										{	/* Eval/evcompile.scm 688 */
											BgL_arg3033z00_3244 = BgL_head1245z00_3247;
										}
									else
										{	/* Eval/evcompile.scm 688 */
											obj_t BgL_newtail1247z00_6393;

											{	/* Eval/evcompile.scm 688 */
												obj_t BgL_arg3039z00_6394;

												{	/* Eval/evcompile.scm 688 */
													obj_t BgL_pairz00_6399;

													BgL_pairz00_6399 = CAR(((obj_t) BgL_l1243z00_6385));
													BgL_arg3039z00_6394 = CAR(BgL_pairz00_6399);
												}
												{	/* Eval/evcompile.scm 688 */
													obj_t BgL_res4133z00_6400;

													BgL_res4133z00_6400 =
														MAKE_YOUNG_PAIR(BgL_arg3039z00_6394, BNIL);
													BgL_newtail1247z00_6393 = BgL_res4133z00_6400;
												}
											}
											SET_CDR(BgL_tail1246z00_6386, BgL_newtail1247z00_6393);
											{	/* Eval/evcompile.scm 688 */
												obj_t BgL_arg3038z00_6396;

												BgL_arg3038z00_6396 = CDR(((obj_t) BgL_l1243z00_6385));
												{
													obj_t BgL_tail1246z00_10908;
													obj_t BgL_l1243z00_10907;

													BgL_l1243z00_10907 = BgL_arg3038z00_6396;
													BgL_tail1246z00_10908 = BgL_newtail1247z00_6393;
													BgL_tail1246z00_6386 = BgL_tail1246z00_10908;
													BgL_l1243z00_6385 = BgL_l1243z00_10907;
													goto BgL_zc3z04anonymousza33035ze3z87_6384;
												}
											}
										}
								}
							}
						}
					BgL_env2z00_3218 =
						BGl_loopze70ze7zz__evcompilez00(BgL_envz00_90, BgL_arg3033z00_3244);
				}
				{	/* Eval/evcompile.scm 688 */
					obj_t BgL_bz00_3219;

					BgL_bz00_3219 =
						BGl_evcompilez00zz__evcompilez00(BgL_bodyz00_89, BgL_env2z00_3218,
						BgL_genvz00_91, BgL_wherez00_92, BgL_tailz00_93, BgL_locz00_94,
						BgL_lkpz00_95, ((bool_t) 0));
					{	/* Eval/evcompile.scm 689 */
						obj_t BgL_asz00_3220;

						if (NULLP(BgL_bindingsz00_88))
							{	/* Eval/evcompile.scm 690 */
								BgL_asz00_3220 = BNIL;
							}
						else
							{	/* Eval/evcompile.scm 690 */
								obj_t BgL_head1251z00_3225;

								{	/* Eval/evcompile.scm 690 */
									obj_t BgL_res4135z00_6404;

									BgL_res4135z00_6404 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1251z00_3225 = BgL_res4135z00_6404;
								}
								{
									obj_t BgL_l1249z00_3227;
									obj_t BgL_tail1252z00_3228;

									BgL_l1249z00_3227 = BgL_bindingsz00_88;
									BgL_tail1252z00_3228 = BgL_head1251z00_3225;
								BgL_zc3z04anonymousza33016ze3z87_3229:
									if (NULLP(BgL_l1249z00_3227))
										{	/* Eval/evcompile.scm 690 */
											BgL_asz00_3220 = CDR(BgL_head1251z00_3225);
										}
									else
										{	/* Eval/evcompile.scm 690 */
											obj_t BgL_newtail1253z00_3231;

											{	/* Eval/evcompile.scm 690 */
												obj_t BgL_arg3025z00_3233;

												{	/* Eval/evcompile.scm 690 */
													obj_t BgL_az00_3234;

													BgL_az00_3234 = CAR(((obj_t) BgL_l1249z00_3227));
													{	/* Eval/evcompile.scm 691 */
														obj_t BgL_locz00_3235;
														obj_t BgL_nz00_3236;

														{	/* Eval/evcompile.scm 65 */
															obj_t BgL__ortest_1065z00_6408;

															BgL__ortest_1065z00_6408 =
																BGl_getzd2sourcezd2locationz00zz__readerz00
																(BgL_az00_3234);
															if (CBOOL(BgL__ortest_1065z00_6408))
																{	/* Eval/evcompile.scm 65 */
																	BgL_locz00_3235 = BgL__ortest_1065z00_6408;
																}
															else
																{	/* Eval/evcompile.scm 65 */
																	BgL_locz00_3235 = BgL_locz00_94;
																}
														}
														if (
															(BgL_wherez00_92 ==
																BGl_symbol4319z00zz__evcompilez00))
															{	/* Eval/evcompile.scm 692 */
																BgL_nz00_3236 = CAR(((obj_t) BgL_az00_3234));
															}
														else
															{	/* Eval/evcompile.scm 694 */
																obj_t BgL_arg3028z00_3239;

																BgL_arg3028z00_3239 =
																	CAR(((obj_t) BgL_az00_3234));
																{	/* Eval/evcompile.scm 694 */
																	obj_t BgL_list3029z00_3240;

																	{	/* Eval/evcompile.scm 694 */
																		obj_t BgL_arg3030z00_3241;

																		{	/* Eval/evcompile.scm 694 */
																			obj_t BgL_arg3032z00_3242;

																			BgL_arg3032z00_3242 =
																				MAKE_YOUNG_PAIR(BgL_wherez00_92, BNIL);
																			BgL_arg3030z00_3241 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol4324z00zz__evcompilez00,
																				BgL_arg3032z00_3242);
																		}
																		BgL_list3029z00_3240 =
																			MAKE_YOUNG_PAIR(BgL_arg3028z00_3239,
																			BgL_arg3030z00_3241);
																	}
																	BgL_nz00_3236 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list3029z00_3240);
																}
															}
														{	/* Eval/evcompile.scm 695 */
															obj_t BgL_arg3026z00_3237;

															{	/* Eval/evcompile.scm 695 */
																obj_t BgL_pairz00_6414;

																BgL_pairz00_6414 = CDR(((obj_t) BgL_az00_3234));
																BgL_arg3026z00_3237 = CAR(BgL_pairz00_6414);
															}
															BgL_arg3025z00_3233 =
																BGl_evcompilez00zz__evcompilez00
																(BgL_arg3026z00_3237, BgL_envz00_90,
																BgL_genvz00_91, BgL_nz00_3236, ((bool_t) 0),
																BgL_locz00_3235, BgL_lkpz00_95, ((bool_t) 0));
														}
													}
												}
												{	/* Eval/evcompile.scm 690 */
													obj_t BgL_res4137z00_6415;

													BgL_res4137z00_6415 =
														MAKE_YOUNG_PAIR(BgL_arg3025z00_3233, BNIL);
													BgL_newtail1253z00_3231 = BgL_res4137z00_6415;
												}
											}
											SET_CDR(BgL_tail1252z00_3228, BgL_newtail1253z00_3231);
											{	/* Eval/evcompile.scm 690 */
												obj_t BgL_arg3021z00_3232;

												BgL_arg3021z00_3232 = CDR(((obj_t) BgL_l1249z00_3227));
												{
													obj_t BgL_tail1252z00_10941;
													obj_t BgL_l1249z00_10940;

													BgL_l1249z00_10940 = BgL_arg3021z00_3232;
													BgL_tail1252z00_10941 = BgL_newtail1253z00_3231;
													BgL_tail1252z00_3228 = BgL_tail1252z00_10941;
													BgL_l1249z00_3227 = BgL_l1249z00_10940;
													goto BgL_zc3z04anonymousza33016ze3z87_3229;
												}
											}
										}
								}
							}
						{	/* Eval/evcompile.scm 690 */

							{	/* Eval/evcompile.scm 697 */
								obj_t BgL_v1254z00_3221;

								BgL_v1254z00_3221 = create_vector(((long) 4));
								VECTOR_SET(BgL_v1254z00_3221, ((long) 0), BINT(((long) 65)));
								VECTOR_SET(BgL_v1254z00_3221, ((long) 1), BgL_locz00_94);
								VECTOR_SET(BgL_v1254z00_3221, ((long) 2), BgL_bz00_3219);
								VECTOR_SET(BgL_v1254z00_3221, ((long) 3),
									bgl_reverse_bang(BgL_asz00_3220));
								return BgL_v1254z00_3221;
							}
						}
					}
				}
			}
		}

	}



/* evcompile-let* */
	obj_t BGl_evcompilezd2letza2z70zz__evcompilez00(obj_t BgL_bindingsz00_96,
		obj_t BgL_bodyz00_97, obj_t BgL_envz00_98, obj_t BgL_genvz00_99,
		obj_t BgL_wherez00_100, bool_t BgL_tailz00_101, obj_t BgL_locz00_102,
		bool_t BgL_lkpz00_103)
	{
		{	/* Eval/evcompile.scm 702 */
			{
				obj_t BgL_bdgsz00_3263;
				obj_t BgL_asz00_3264;
				obj_t BgL_env3z00_3265;

				BgL_bdgsz00_3263 = BgL_bindingsz00_96;
				BgL_asz00_3264 = BNIL;
				BgL_env3z00_3265 = BgL_envz00_98;
			BgL_zc3z04anonymousza33046ze3z87_3266:
				if (NULLP(BgL_bdgsz00_3263))
					{	/* Eval/evcompile.scm 707 */
						obj_t BgL_env2z00_3268;

						{	/* Eval/evcompile.scm 707 */
							obj_t BgL_arg3050z00_3272;

							{	/* Eval/evcompile.scm 707 */
								obj_t BgL_arg3052z00_3273;

								if (NULLP(BgL_bindingsz00_96))
									{	/* Eval/evcompile.scm 707 */
										BgL_arg3052z00_3273 = BNIL;
									}
								else
									{	/* Eval/evcompile.scm 707 */
										obj_t BgL_head1257z00_3276;

										{	/* Eval/evcompile.scm 707 */
											obj_t BgL_arg3065z00_3288;

											{	/* Eval/evcompile.scm 707 */
												obj_t BgL_pairz00_6425;

												BgL_pairz00_6425 = CAR(((obj_t) BgL_bindingsz00_96));
												BgL_arg3065z00_3288 = CAR(BgL_pairz00_6425);
											}
											{	/* Eval/evcompile.scm 707 */
												obj_t BgL_res4140z00_6426;

												BgL_res4140z00_6426 =
													MAKE_YOUNG_PAIR(BgL_arg3065z00_3288, BNIL);
												BgL_head1257z00_3276 = BgL_res4140z00_6426;
											}
										}
										{	/* Eval/evcompile.scm 707 */
											obj_t BgL_g1260z00_3277;

											BgL_g1260z00_3277 = CDR(((obj_t) BgL_bindingsz00_96));
											{
												obj_t BgL_l1255z00_6451;
												obj_t BgL_tail1258z00_6452;

												BgL_l1255z00_6451 = BgL_g1260z00_3277;
												BgL_tail1258z00_6452 = BgL_head1257z00_3276;
											BgL_zc3z04anonymousza33054ze3z87_6450:
												if (NULLP(BgL_l1255z00_6451))
													{	/* Eval/evcompile.scm 707 */
														BgL_arg3052z00_3273 = BgL_head1257z00_3276;
													}
												else
													{	/* Eval/evcompile.scm 707 */
														obj_t BgL_newtail1259z00_6459;

														{	/* Eval/evcompile.scm 707 */
															obj_t BgL_arg3061z00_6460;

															{	/* Eval/evcompile.scm 707 */
																obj_t BgL_pairz00_6465;

																BgL_pairz00_6465 =
																	CAR(((obj_t) BgL_l1255z00_6451));
																BgL_arg3061z00_6460 = CAR(BgL_pairz00_6465);
															}
															{	/* Eval/evcompile.scm 707 */
																obj_t BgL_res4146z00_6466;

																BgL_res4146z00_6466 =
																	MAKE_YOUNG_PAIR(BgL_arg3061z00_6460, BNIL);
																BgL_newtail1259z00_6459 = BgL_res4146z00_6466;
															}
														}
														SET_CDR(BgL_tail1258z00_6452,
															BgL_newtail1259z00_6459);
														{	/* Eval/evcompile.scm 707 */
															obj_t BgL_arg3058z00_6462;

															BgL_arg3058z00_6462 =
																CDR(((obj_t) BgL_l1255z00_6451));
															{
																obj_t BgL_tail1258z00_10969;
																obj_t BgL_l1255z00_10968;

																BgL_l1255z00_10968 = BgL_arg3058z00_6462;
																BgL_tail1258z00_10969 = BgL_newtail1259z00_6459;
																BgL_tail1258z00_6452 = BgL_tail1258z00_10969;
																BgL_l1255z00_6451 = BgL_l1255z00_10968;
																goto BgL_zc3z04anonymousza33054ze3z87_6450;
															}
														}
													}
											}
										}
									}
								BgL_arg3050z00_3272 = bgl_reverse_bang(BgL_arg3052z00_3273);
							}
							BgL_env2z00_3268 =
								BGl_loopze70ze7zz__evcompilez00(BgL_envz00_98,
								BgL_arg3050z00_3272);
						}
						{	/* Eval/evcompile.scm 707 */
							obj_t BgL_bdz00_3269;

							BgL_bdz00_3269 =
								BGl_evcompilez00zz__evcompilez00(BgL_bodyz00_97,
								BgL_env2z00_3268, BgL_genvz00_99, BgL_wherez00_100,
								BgL_tailz00_101, BgL_locz00_102, BgL_lkpz00_103, ((bool_t) 0));
							{	/* Eval/evcompile.scm 708 */

								{	/* Eval/evcompile.scm 709 */
									obj_t BgL_v1261z00_3270;

									BgL_v1261z00_3270 = create_vector(((long) 4));
									VECTOR_SET(BgL_v1261z00_3270, ((long) 0), BINT(((long) 66)));
									VECTOR_SET(BgL_v1261z00_3270, ((long) 1), BgL_locz00_102);
									VECTOR_SET(BgL_v1261z00_3270, ((long) 2), BgL_bdz00_3269);
									VECTOR_SET(BgL_v1261z00_3270, ((long) 3),
										bgl_reverse_bang(BgL_asz00_3264));
									return BgL_v1261z00_3270;
								}
							}
						}
					}
				else
					{	/* Eval/evcompile.scm 710 */
						obj_t BgL_bz00_3290;

						BgL_bz00_3290 = CAR(((obj_t) BgL_bdgsz00_3263));
						{	/* Eval/evcompile.scm 710 */
							obj_t BgL_locz00_3291;

							{	/* Eval/evcompile.scm 65 */
								obj_t BgL__ortest_1065z00_6474;

								BgL__ortest_1065z00_6474 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_bz00_3290);
								if (CBOOL(BgL__ortest_1065z00_6474))
									{	/* Eval/evcompile.scm 65 */
										BgL_locz00_3291 = BgL__ortest_1065z00_6474;
									}
								else
									{	/* Eval/evcompile.scm 65 */
										BgL_locz00_3291 = BgL_locz00_102;
									}
							}
							{	/* Eval/evcompile.scm 711 */
								obj_t BgL_nz00_3292;

								if ((BgL_wherez00_100 == BGl_symbol4319z00zz__evcompilez00))
									{	/* Eval/evcompile.scm 712 */
										BgL_nz00_3292 = CAR(((obj_t) BgL_bz00_3290));
									}
								else
									{	/* Eval/evcompile.scm 714 */
										obj_t BgL_arg3078z00_3302;

										BgL_arg3078z00_3302 = CAR(((obj_t) BgL_bz00_3290));
										{	/* Eval/evcompile.scm 714 */
											obj_t BgL_list3079z00_3303;

											{	/* Eval/evcompile.scm 714 */
												obj_t BgL_arg3081z00_3304;

												{	/* Eval/evcompile.scm 714 */
													obj_t BgL_arg3082z00_3305;

													BgL_arg3082z00_3305 =
														MAKE_YOUNG_PAIR(BgL_wherez00_100, BNIL);
													BgL_arg3081z00_3304 =
														MAKE_YOUNG_PAIR(BGl_symbol4324z00zz__evcompilez00,
														BgL_arg3082z00_3305);
												}
												BgL_list3079z00_3303 =
													MAKE_YOUNG_PAIR(BgL_arg3078z00_3302,
													BgL_arg3081z00_3304);
											}
											BgL_nz00_3292 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list3079z00_3303);
										}
									}
								{	/* Eval/evcompile.scm 712 */
									obj_t BgL_az00_3293;

									{	/* Eval/evcompile.scm 715 */
										obj_t BgL_arg3076z00_3300;

										{	/* Eval/evcompile.scm 715 */
											obj_t BgL_pairz00_6480;

											BgL_pairz00_6480 = CDR(((obj_t) BgL_bz00_3290));
											BgL_arg3076z00_3300 = CAR(BgL_pairz00_6480);
										}
										BgL_az00_3293 =
											BGl_evcompilez00zz__evcompilez00(BgL_arg3076z00_3300,
											BgL_env3z00_3265, BgL_genvz00_99, BgL_nz00_3292,
											((bool_t) 0), BgL_locz00_3291, BgL_lkpz00_103,
											((bool_t) 0));
									}
									{	/* Eval/evcompile.scm 715 */

										{	/* Eval/evcompile.scm 716 */
											obj_t BgL_arg3067z00_3294;
											obj_t BgL_arg3070z00_3295;
											obj_t BgL_arg3071z00_3296;

											BgL_arg3067z00_3294 = CDR(((obj_t) BgL_bdgsz00_3263));
											BgL_arg3070z00_3295 =
												MAKE_YOUNG_PAIR(BgL_az00_3293, BgL_asz00_3264);
											{	/* Eval/evcompile.scm 718 */
												obj_t BgL_arg3072z00_3297;

												{	/* Eval/evcompile.scm 718 */
													obj_t BgL_arg3073z00_3298;

													BgL_arg3073z00_3298 = CAR(((obj_t) BgL_bz00_3290));
													{	/* Eval/evcompile.scm 718 */
														obj_t BgL_list3074z00_3299;

														BgL_list3074z00_3299 =
															MAKE_YOUNG_PAIR(BgL_arg3073z00_3298, BNIL);
														BgL_arg3072z00_3297 = BgL_list3074z00_3299;
													}
												}
												BgL_arg3071z00_3296 =
													BGl_loopze70ze7zz__evcompilez00(BgL_env3z00_3265,
													BgL_arg3072z00_3297);
											}
											{
												obj_t BgL_env3z00_11008;
												obj_t BgL_asz00_11007;
												obj_t BgL_bdgsz00_11006;

												BgL_bdgsz00_11006 = BgL_arg3067z00_3294;
												BgL_asz00_11007 = BgL_arg3070z00_3295;
												BgL_env3z00_11008 = BgL_arg3071z00_3296;
												BgL_env3z00_3265 = BgL_env3z00_11008;
												BgL_asz00_3264 = BgL_asz00_11007;
												BgL_bdgsz00_3263 = BgL_bdgsz00_11006;
												goto BgL_zc3z04anonymousza33046ze3z87_3266;
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



/* evcompile-letrec */
	obj_t BGl_evcompilezd2letreczd2zz__evcompilez00(obj_t BgL_bindingsz00_104,
		obj_t BgL_bodyz00_105, obj_t BgL_envz00_106, obj_t BgL_genvz00_107,
		obj_t BgL_wherez00_108, bool_t BgL_tailz00_109, obj_t BgL_locz00_110,
		bool_t BgL_lkpz00_111)
	{
		{	/* Eval/evcompile.scm 723 */
			{	/* Eval/evcompile.scm 724 */
				bool_t BgL_test4945z00_11009;

				{
					obj_t BgL_l1262z00_6486;

					BgL_l1262z00_6486 = BgL_bindingsz00_104;
				BgL_zc3z04anonymousza33092ze3z87_6485:
					if (NULLP(BgL_l1262z00_6486))
						{	/* Eval/evcompile.scm 724 */
							BgL_test4945z00_11009 = ((bool_t) 1);
						}
					else
						{	/* Eval/evcompile.scm 724 */
							bool_t BgL_test4947z00_11012;

							{	/* Eval/evcompile.scm 725 */
								obj_t BgL_xz00_6489;

								BgL_xz00_6489 = CAR(((obj_t) BgL_l1262z00_6486));
								if (PAIRP(BgL_xz00_6489))
									{	/* Eval/evcompile.scm 726 */
										bool_t BgL_test4949z00_11017;

										{	/* Eval/evcompile.scm 726 */
											obj_t BgL_tmpz00_11018;

											BgL_tmpz00_11018 = CAR(CDR(BgL_xz00_6489));
											BgL_test4949z00_11017 = PAIRP(BgL_tmpz00_11018);
										}
										if (BgL_test4949z00_11017)
											{	/* Eval/evcompile.scm 726 */
												BgL_test4947z00_11012 =
													(CAR(CAR(CDR(BgL_xz00_6489))) ==
													BGl_symbol4328z00zz__evcompilez00);
											}
										else
											{	/* Eval/evcompile.scm 726 */
												BgL_test4947z00_11012 = ((bool_t) 0);
											}
									}
								else
									{	/* Eval/evcompile.scm 725 */
										BgL_test4947z00_11012 = ((bool_t) 0);
									}
							}
							if (BgL_test4947z00_11012)
								{	/* Eval/evcompile.scm 724 */
									obj_t BgL_arg3093z00_6496;

									BgL_arg3093z00_6496 = CDR(((obj_t) BgL_l1262z00_6486));
									{
										obj_t BgL_l1262z00_11028;

										BgL_l1262z00_11028 = BgL_arg3093z00_6496;
										BgL_l1262z00_6486 = BgL_l1262z00_11028;
										goto BgL_zc3z04anonymousza33092ze3z87_6485;
									}
								}
							else
								{	/* Eval/evcompile.scm 724 */
									BgL_test4945z00_11009 = ((bool_t) 0);
								}
						}
				}
				if (BgL_test4945z00_11009)
					{	/* Eval/evcompile.scm 724 */
						return
							BGl_evcompilezd2letreczd2lambdaz00zz__evcompilez00
							(BgL_bindingsz00_104, BgL_bodyz00_105, BgL_envz00_106,
							BgL_genvz00_107, BgL_wherez00_108, BgL_tailz00_109,
							BgL_locz00_110, BgL_lkpz00_111);
					}
				else
					{	/* Eval/evcompile.scm 724 */
						return
							BGl_evcompilezd2letreczd2genericz00zz__evcompilez00
							(BgL_bindingsz00_104, BgL_bodyz00_105, BgL_envz00_106,
							BgL_genvz00_107, BgL_wherez00_108, BgL_tailz00_109,
							BgL_locz00_110, BgL_lkpz00_111);
					}
			}
		}

	}



/* evcompile-letrec-lambda */
	obj_t BGl_evcompilezd2letreczd2lambdaz00zz__evcompilez00(obj_t
		BgL_bindingsz00_112, obj_t BgL_bodyz00_113, obj_t BgL_envz00_114,
		obj_t BgL_genvz00_115, obj_t BgL_wherez00_116, bool_t BgL_tailz00_117,
		obj_t BgL_locz00_118, bool_t BgL_lkpz00_119)
	{
		{	/* Eval/evcompile.scm 737 */
			{	/* Eval/evcompile.scm 738 */
				obj_t BgL_env2z00_3336;

				{	/* Eval/evcompile.scm 738 */
					obj_t BgL_arg3120z00_3361;

					if (NULLP(BgL_bindingsz00_112))
						{	/* Eval/evcompile.scm 738 */
							BgL_arg3120z00_3361 = BNIL;
						}
					else
						{	/* Eval/evcompile.scm 738 */
							obj_t BgL_head1267z00_3364;

							{	/* Eval/evcompile.scm 738 */
								obj_t BgL_arg3132z00_3376;

								{	/* Eval/evcompile.scm 738 */
									obj_t BgL_pairz00_6513;

									BgL_pairz00_6513 = CAR(((obj_t) BgL_bindingsz00_112));
									BgL_arg3132z00_3376 = CAR(BgL_pairz00_6513);
								}
								{	/* Eval/evcompile.scm 738 */
									obj_t BgL_res4152z00_6514;

									BgL_res4152z00_6514 =
										MAKE_YOUNG_PAIR(BgL_arg3132z00_3376, BNIL);
									BgL_head1267z00_3364 = BgL_res4152z00_6514;
								}
							}
							{	/* Eval/evcompile.scm 738 */
								obj_t BgL_g1270z00_3365;

								BgL_g1270z00_3365 = CDR(((obj_t) BgL_bindingsz00_112));
								{
									obj_t BgL_l1265z00_6539;
									obj_t BgL_tail1268z00_6540;

									BgL_l1265z00_6539 = BgL_g1270z00_3365;
									BgL_tail1268z00_6540 = BgL_head1267z00_3364;
								BgL_zc3z04anonymousza33122ze3z87_6538:
									if (NULLP(BgL_l1265z00_6539))
										{	/* Eval/evcompile.scm 738 */
											BgL_arg3120z00_3361 = BgL_head1267z00_3364;
										}
									else
										{	/* Eval/evcompile.scm 738 */
											obj_t BgL_newtail1269z00_6547;

											{	/* Eval/evcompile.scm 738 */
												obj_t BgL_arg3129z00_6548;

												{	/* Eval/evcompile.scm 738 */
													obj_t BgL_pairz00_6553;

													BgL_pairz00_6553 = CAR(((obj_t) BgL_l1265z00_6539));
													BgL_arg3129z00_6548 = CAR(BgL_pairz00_6553);
												}
												{	/* Eval/evcompile.scm 738 */
													obj_t BgL_res4158z00_6554;

													BgL_res4158z00_6554 =
														MAKE_YOUNG_PAIR(BgL_arg3129z00_6548, BNIL);
													BgL_newtail1269z00_6547 = BgL_res4158z00_6554;
												}
											}
											SET_CDR(BgL_tail1268z00_6540, BgL_newtail1269z00_6547);
											{	/* Eval/evcompile.scm 738 */
												obj_t BgL_arg3128z00_6550;

												BgL_arg3128z00_6550 = CDR(((obj_t) BgL_l1265z00_6539));
												{
													obj_t BgL_tail1268z00_11049;
													obj_t BgL_l1265z00_11048;

													BgL_l1265z00_11048 = BgL_arg3128z00_6550;
													BgL_tail1268z00_11049 = BgL_newtail1269z00_6547;
													BgL_tail1268z00_6540 = BgL_tail1268z00_11049;
													BgL_l1265z00_6539 = BgL_l1265z00_11048;
													goto BgL_zc3z04anonymousza33122ze3z87_6538;
												}
											}
										}
								}
							}
						}
					BgL_env2z00_3336 =
						BGl_loopze70ze7zz__evcompilez00(BgL_envz00_114,
						BgL_arg3120z00_3361);
				}
				{	/* Eval/evcompile.scm 738 */
					obj_t BgL_bz00_3337;

					BgL_bz00_3337 =
						BGl_evcompilez00zz__evcompilez00(BgL_bodyz00_113, BgL_env2z00_3336,
						BgL_genvz00_115, BgL_wherez00_116, BgL_tailz00_117, BgL_locz00_118,
						BgL_lkpz00_119, ((bool_t) 0));
					{	/* Eval/evcompile.scm 739 */
						obj_t BgL_asz00_3338;

						if (NULLP(BgL_bindingsz00_112))
							{	/* Eval/evcompile.scm 740 */
								BgL_asz00_3338 = BNIL;
							}
						else
							{	/* Eval/evcompile.scm 740 */
								obj_t BgL_head1273z00_3342;

								{	/* Eval/evcompile.scm 740 */
									obj_t BgL_res4160z00_6558;

									BgL_res4160z00_6558 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1273z00_3342 = BgL_res4160z00_6558;
								}
								{
									obj_t BgL_l1271z00_3344;
									obj_t BgL_tail1274z00_3345;

									BgL_l1271z00_3344 = BgL_bindingsz00_112;
									BgL_tail1274z00_3345 = BgL_head1273z00_3342;
								BgL_zc3z04anonymousza33100ze3z87_3346:
									if (NULLP(BgL_l1271z00_3344))
										{	/* Eval/evcompile.scm 740 */
											BgL_asz00_3338 = CDR(BgL_head1273z00_3342);
										}
									else
										{	/* Eval/evcompile.scm 740 */
											obj_t BgL_newtail1275z00_3348;

											{	/* Eval/evcompile.scm 740 */
												obj_t BgL_arg3107z00_3350;

												{	/* Eval/evcompile.scm 740 */
													obj_t BgL_az00_3351;

													BgL_az00_3351 = CAR(((obj_t) BgL_l1271z00_3344));
													{	/* Eval/evcompile.scm 741 */
														obj_t BgL_locz00_3352;
														obj_t BgL_nz00_3353;

														{	/* Eval/evcompile.scm 65 */
															obj_t BgL__ortest_1065z00_6562;

															BgL__ortest_1065z00_6562 =
																BGl_getzd2sourcezd2locationz00zz__readerz00
																(BgL_az00_3351);
															if (CBOOL(BgL__ortest_1065z00_6562))
																{	/* Eval/evcompile.scm 65 */
																	BgL_locz00_3352 = BgL__ortest_1065z00_6562;
																}
															else
																{	/* Eval/evcompile.scm 65 */
																	BgL_locz00_3352 = BgL_locz00_118;
																}
														}
														if (
															(BgL_wherez00_116 ==
																BGl_symbol4319z00zz__evcompilez00))
															{	/* Eval/evcompile.scm 742 */
																BgL_nz00_3353 = CAR(((obj_t) BgL_az00_3351));
															}
														else
															{	/* Eval/evcompile.scm 744 */
																obj_t BgL_arg3114z00_3356;

																BgL_arg3114z00_3356 =
																	CAR(((obj_t) BgL_az00_3351));
																{	/* Eval/evcompile.scm 744 */
																	obj_t BgL_list3115z00_3357;

																	{	/* Eval/evcompile.scm 744 */
																		obj_t BgL_arg3117z00_3358;

																		{	/* Eval/evcompile.scm 744 */
																			obj_t BgL_arg3118z00_3359;

																			BgL_arg3118z00_3359 =
																				MAKE_YOUNG_PAIR(BgL_wherez00_116, BNIL);
																			BgL_arg3117z00_3358 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol4324z00zz__evcompilez00,
																				BgL_arg3118z00_3359);
																		}
																		BgL_list3115z00_3357 =
																			MAKE_YOUNG_PAIR(BgL_arg3114z00_3356,
																			BgL_arg3117z00_3358);
																	}
																	BgL_nz00_3353 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list3115z00_3357);
																}
															}
														{	/* Eval/evcompile.scm 745 */
															obj_t BgL_arg3111z00_3354;

															{	/* Eval/evcompile.scm 745 */
																obj_t BgL_pairz00_6568;

																BgL_pairz00_6568 = CDR(((obj_t) BgL_az00_3351));
																BgL_arg3111z00_3354 = CAR(BgL_pairz00_6568);
															}
															BgL_arg3107z00_3350 =
																BGl_evcompilez00zz__evcompilez00
																(BgL_arg3111z00_3354, BgL_env2z00_3336,
																BgL_genvz00_115, BgL_nz00_3353, ((bool_t) 0),
																BgL_locz00_3352, BgL_lkpz00_119, ((bool_t) 0));
														}
													}
												}
												{	/* Eval/evcompile.scm 740 */
													obj_t BgL_res4162z00_6569;

													BgL_res4162z00_6569 =
														MAKE_YOUNG_PAIR(BgL_arg3107z00_3350, BNIL);
													BgL_newtail1275z00_3348 = BgL_res4162z00_6569;
												}
											}
											SET_CDR(BgL_tail1274z00_3345, BgL_newtail1275z00_3348);
											{	/* Eval/evcompile.scm 740 */
												obj_t BgL_arg3102z00_3349;

												BgL_arg3102z00_3349 = CDR(((obj_t) BgL_l1271z00_3344));
												{
													obj_t BgL_tail1274z00_11082;
													obj_t BgL_l1271z00_11081;

													BgL_l1271z00_11081 = BgL_arg3102z00_3349;
													BgL_tail1274z00_11082 = BgL_newtail1275z00_3348;
													BgL_tail1274z00_3345 = BgL_tail1274z00_11082;
													BgL_l1271z00_3344 = BgL_l1271z00_11081;
													goto BgL_zc3z04anonymousza33100ze3z87_3346;
												}
											}
										}
								}
							}
						{	/* Eval/evcompile.scm 740 */

							{	/* Eval/evcompile.scm 747 */
								obj_t BgL_v1276z00_3339;

								BgL_v1276z00_3339 = create_vector(((long) 4));
								VECTOR_SET(BgL_v1276z00_3339, ((long) 0), BINT(((long) 70)));
								VECTOR_SET(BgL_v1276z00_3339, ((long) 1), BgL_locz00_118);
								VECTOR_SET(BgL_v1276z00_3339, ((long) 2), BgL_bz00_3337);
								VECTOR_SET(BgL_v1276z00_3339, ((long) 3), BgL_asz00_3338);
								return BgL_v1276z00_3339;
							}
						}
					}
				}
			}
		}

	}



/* evcompile-letrec-generic */
	obj_t BGl_evcompilezd2letreczd2genericz00zz__evcompilez00(obj_t
		BgL_bindingsz00_120, obj_t BgL_bodyz00_121, obj_t BgL_envz00_122,
		obj_t BgL_genvz00_123, obj_t BgL_wherez00_124, bool_t BgL_tailz00_125,
		obj_t BgL_locz00_126, bool_t BgL_lkpz00_127)
	{
		{	/* Eval/evcompile.scm 752 */
			{	/* Eval/evcompile.scm 753 */
				obj_t BgL_auxz00_3378;

				if (NULLP(BgL_bindingsz00_120))
					{	/* Eval/evcompile.scm 753 */
						BgL_auxz00_3378 = BNIL;
					}
				else
					{	/* Eval/evcompile.scm 753 */
						obj_t BgL_head1279z00_3447;

						{	/* Eval/evcompile.scm 753 */
							obj_t BgL_res4164z00_6577;

							BgL_res4164z00_6577 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1279z00_3447 = BgL_res4164z00_6577;
						}
						{
							obj_t BgL_l1277z00_6603;
							obj_t BgL_tail1280z00_6604;

							BgL_l1277z00_6603 = BgL_bindingsz00_120;
							BgL_tail1280z00_6604 = BgL_head1279z00_3447;
						BgL_zc3z04anonymousza33181ze3z87_6602:
							if (NULLP(BgL_l1277z00_6603))
								{	/* Eval/evcompile.scm 753 */
									BgL_auxz00_3378 = CDR(BgL_head1279z00_3447);
								}
							else
								{	/* Eval/evcompile.scm 753 */
									obj_t BgL_newtail1281z00_6612;

									{	/* Eval/evcompile.scm 753 */
										obj_t BgL_arg3185z00_6613;

										{	/* Eval/evcompile.scm 753 */

											{	/* Eval/evcompile.scm 753 */

												BgL_arg3185z00_6613 =
													BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}
										}
										{	/* Eval/evcompile.scm 753 */
											obj_t BgL_res4170z00_6620;

											BgL_res4170z00_6620 =
												MAKE_YOUNG_PAIR(BgL_arg3185z00_6613, BNIL);
											BgL_newtail1281z00_6612 = BgL_res4170z00_6620;
										}
									}
									SET_CDR(BgL_tail1280z00_6604, BgL_newtail1281z00_6612);
									{	/* Eval/evcompile.scm 753 */
										obj_t BgL_arg3184z00_6616;

										BgL_arg3184z00_6616 = CDR(((obj_t) BgL_l1277z00_6603));
										{
											obj_t BgL_tail1280z00_11101;
											obj_t BgL_l1277z00_11100;

											BgL_l1277z00_11100 = BgL_arg3184z00_6616;
											BgL_tail1280z00_11101 = BgL_newtail1281z00_6612;
											BgL_tail1280z00_6604 = BgL_tail1280z00_11101;
											BgL_l1277z00_6603 = BgL_l1277z00_11100;
											goto BgL_zc3z04anonymousza33181ze3z87_6602;
										}
									}
								}
						}
					}
				{	/* Eval/evcompile.scm 753 */
					obj_t BgL_expz00_3379;

					{	/* Eval/evcompile.scm 754 */
						obj_t BgL_arg3135z00_3380;

						{	/* Eval/evcompile.scm 754 */
							obj_t BgL_arg3136z00_3381;
							obj_t BgL_arg3137z00_3382;

							if (NULLP(BgL_bindingsz00_120))
								{	/* Eval/evcompile.scm 754 */
									BgL_arg3136z00_3381 = BNIL;
								}
							else
								{	/* Eval/evcompile.scm 754 */
									obj_t BgL_head1284z00_3385;

									{	/* Eval/evcompile.scm 754 */
										obj_t BgL_res4172z00_6624;

										BgL_res4172z00_6624 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1284z00_3385 = BgL_res4172z00_6624;
									}
									{
										obj_t BgL_l1282z00_3387;
										obj_t BgL_tail1285z00_3388;

										BgL_l1282z00_3387 = BgL_bindingsz00_120;
										BgL_tail1285z00_3388 = BgL_head1284z00_3385;
									BgL_zc3z04anonymousza33139ze3z87_3389:
										if (NULLP(BgL_l1282z00_3387))
											{	/* Eval/evcompile.scm 754 */
												BgL_arg3136z00_3381 = CDR(BgL_head1284z00_3385);
											}
										else
											{	/* Eval/evcompile.scm 754 */
												obj_t BgL_newtail1286z00_3391;

												{	/* Eval/evcompile.scm 754 */
													obj_t BgL_arg3142z00_3393;

													{	/* Eval/evcompile.scm 754 */
														obj_t BgL_bz00_3394;

														BgL_bz00_3394 = CAR(((obj_t) BgL_l1282z00_3387));
														{	/* Eval/evcompile.scm 755 */
															obj_t BgL_arg3143z00_3395;

															BgL_arg3143z00_3395 =
																CAR(((obj_t) BgL_bz00_3394));
															{	/* Eval/evcompile.scm 755 */
																obj_t BgL_list3144z00_3396;

																{	/* Eval/evcompile.scm 755 */
																	obj_t BgL_arg3145z00_3397;

																	BgL_arg3145z00_3397 =
																		MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																	BgL_list3144z00_3396 =
																		MAKE_YOUNG_PAIR(BgL_arg3143z00_3395,
																		BgL_arg3145z00_3397);
																}
																BgL_arg3142z00_3393 = BgL_list3144z00_3396;
															}
														}
													}
													{	/* Eval/evcompile.scm 754 */
														obj_t BgL_res4175z00_6630;

														BgL_res4175z00_6630 =
															MAKE_YOUNG_PAIR(BgL_arg3142z00_3393, BNIL);
														BgL_newtail1286z00_3391 = BgL_res4175z00_6630;
													}
												}
												SET_CDR(BgL_tail1285z00_3388, BgL_newtail1286z00_3391);
												{	/* Eval/evcompile.scm 754 */
													obj_t BgL_arg3141z00_3392;

													BgL_arg3141z00_3392 =
														CDR(((obj_t) BgL_l1282z00_3387));
													{
														obj_t BgL_tail1285z00_11119;
														obj_t BgL_l1282z00_11118;

														BgL_l1282z00_11118 = BgL_arg3141z00_3392;
														BgL_tail1285z00_11119 = BgL_newtail1286z00_3391;
														BgL_tail1285z00_3388 = BgL_tail1285z00_11119;
														BgL_l1282z00_3387 = BgL_l1282z00_11118;
														goto BgL_zc3z04anonymousza33139ze3z87_3389;
													}
												}
											}
									}
								}
							{	/* Eval/evcompile.scm 757 */
								obj_t BgL_arg3146z00_3399;

								{	/* Eval/evcompile.scm 757 */
									obj_t BgL_arg3147z00_3400;

									{	/* Eval/evcompile.scm 757 */
										obj_t BgL_arg3149z00_3401;
										obj_t BgL_arg3150z00_3402;

										if (NULLP(BgL_auxz00_3378))
											{	/* Eval/evcompile.scm 757 */
												BgL_arg3149z00_3401 = BNIL;
											}
										else
											{	/* Eval/evcompile.scm 757 */
												obj_t BgL_head1289z00_3406;

												{	/* Eval/evcompile.scm 757 */
													obj_t BgL_res4177z00_6634;

													BgL_res4177z00_6634 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1289z00_3406 = BgL_res4177z00_6634;
												}
												{
													obj_t BgL_ll1287z00_6670;
													obj_t BgL_ll1288z00_6671;
													obj_t BgL_tail1290z00_6672;

													BgL_ll1287z00_6670 = BgL_auxz00_3378;
													BgL_ll1288z00_6671 = BgL_bindingsz00_120;
													BgL_tail1290z00_6672 = BgL_head1289z00_3406;
												BgL_zc3z04anonymousza33152ze3z87_6669:
													if (NULLP(BgL_ll1287z00_6670))
														{	/* Eval/evcompile.scm 757 */
															BgL_arg3149z00_3401 = CDR(BgL_head1289z00_3406);
														}
													else
														{	/* Eval/evcompile.scm 757 */
															obj_t BgL_newtail1291z00_6682;

															{	/* Eval/evcompile.scm 757 */
																obj_t BgL_arg3161z00_6683;

																{	/* Eval/evcompile.scm 757 */
																	obj_t BgL_nz00_6684;
																	obj_t BgL_bz00_6685;

																	BgL_nz00_6684 =
																		CAR(((obj_t) BgL_ll1287z00_6670));
																	BgL_bz00_6685 =
																		CAR(((obj_t) BgL_ll1288z00_6671));
																	{	/* Eval/evcompile.scm 758 */
																		obj_t BgL_arg3162z00_6686;

																		BgL_arg3162z00_6686 =
																			CDR(((obj_t) BgL_bz00_6685));
																		BgL_arg3161z00_6683 =
																			MAKE_YOUNG_PAIR(BgL_nz00_6684,
																			BgL_arg3162z00_6686);
																	}
																}
																{	/* Eval/evcompile.scm 757 */
																	obj_t BgL_res4183z00_6694;

																	BgL_res4183z00_6694 =
																		MAKE_YOUNG_PAIR(BgL_arg3161z00_6683, BNIL);
																	BgL_newtail1291z00_6682 = BgL_res4183z00_6694;
																}
															}
															SET_CDR(BgL_tail1290z00_6672,
																BgL_newtail1291z00_6682);
															{	/* Eval/evcompile.scm 757 */
																obj_t BgL_arg3158z00_6687;
																obj_t BgL_arg3160z00_6688;

																BgL_arg3158z00_6687 =
																	CDR(((obj_t) BgL_ll1287z00_6670));
																BgL_arg3160z00_6688 =
																	CDR(((obj_t) BgL_ll1288z00_6671));
																{
																	obj_t BgL_tail1290z00_11141;
																	obj_t BgL_ll1288z00_11140;
																	obj_t BgL_ll1287z00_11139;

																	BgL_ll1287z00_11139 = BgL_arg3158z00_6687;
																	BgL_ll1288z00_11140 = BgL_arg3160z00_6688;
																	BgL_tail1290z00_11141 =
																		BgL_newtail1291z00_6682;
																	BgL_tail1290z00_6672 = BgL_tail1290z00_11141;
																	BgL_ll1288z00_6671 = BgL_ll1288z00_11140;
																	BgL_ll1287z00_6670 = BgL_ll1287z00_11139;
																	goto BgL_zc3z04anonymousza33152ze3z87_6669;
																}
															}
														}
												}
											}
										{	/* Eval/evcompile.scm 761 */
											obj_t BgL_arg3163z00_3421;

											{	/* Eval/evcompile.scm 761 */
												obj_t BgL_arg3164z00_3422;

												{	/* Eval/evcompile.scm 761 */
													obj_t BgL_arg3166z00_3423;
													obj_t BgL_arg3167z00_3424;

													if (NULLP(BgL_auxz00_3378))
														{	/* Eval/evcompile.scm 761 */
															BgL_arg3166z00_3423 = BNIL;
														}
													else
														{	/* Eval/evcompile.scm 761 */
															obj_t BgL_head1295z00_3428;

															{	/* Eval/evcompile.scm 761 */
																obj_t BgL_res4185z00_6699;

																BgL_res4185z00_6699 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1295z00_3428 = BgL_res4185z00_6699;
															}
															{
																obj_t BgL_ll1293z00_3430;
																obj_t BgL_ll1294z00_3431;
																obj_t BgL_tail1296z00_3432;

																BgL_ll1293z00_3430 = BgL_auxz00_3378;
																BgL_ll1294z00_3431 = BgL_bindingsz00_120;
																BgL_tail1296z00_3432 = BgL_head1295z00_3428;
															BgL_zc3z04anonymousza33169ze3z87_3433:
																if (NULLP(BgL_ll1293z00_3430))
																	{	/* Eval/evcompile.scm 761 */
																		BgL_arg3166z00_3423 =
																			CDR(BgL_head1295z00_3428);
																	}
																else
																	{	/* Eval/evcompile.scm 761 */
																		obj_t BgL_newtail1297z00_3435;

																		{	/* Eval/evcompile.scm 761 */
																			obj_t BgL_arg3175z00_3438;

																			{	/* Eval/evcompile.scm 761 */
																				obj_t BgL_nz00_3439;
																				obj_t BgL_bz00_3440;

																				BgL_nz00_3439 =
																					CAR(((obj_t) BgL_ll1293z00_3430));
																				BgL_bz00_3440 =
																					CAR(((obj_t) BgL_ll1294z00_3431));
																				{	/* Eval/evcompile.scm 762 */
																					obj_t BgL_arg3177z00_3441;

																					{	/* Eval/evcompile.scm 762 */
																						obj_t BgL_arg3178z00_3442;
																						obj_t BgL_arg3179z00_3443;

																						BgL_arg3178z00_3442 =
																							CAR(((obj_t) BgL_bz00_3440));
																						BgL_arg3179z00_3443 =
																							MAKE_YOUNG_PAIR(BgL_nz00_3439,
																							BNIL);
																						BgL_arg3177z00_3441 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg3178z00_3442,
																							BgL_arg3179z00_3443);
																					}
																					BgL_arg3175z00_3438 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol4351z00zz__evcompilez00,
																						BgL_arg3177z00_3441);
																				}
																			}
																			{	/* Eval/evcompile.scm 761 */
																				obj_t BgL_res4187z00_6705;

																				BgL_res4187z00_6705 =
																					MAKE_YOUNG_PAIR(BgL_arg3175z00_3438,
																					BNIL);
																				BgL_newtail1297z00_3435 =
																					BgL_res4187z00_6705;
																			}
																		}
																		SET_CDR(BgL_tail1296z00_3432,
																			BgL_newtail1297z00_3435);
																		{	/* Eval/evcompile.scm 761 */
																			obj_t BgL_arg3172z00_3436;
																			obj_t BgL_arg3174z00_3437;

																			BgL_arg3172z00_3436 =
																				CDR(((obj_t) BgL_ll1293z00_3430));
																			BgL_arg3174z00_3437 =
																				CDR(((obj_t) BgL_ll1294z00_3431));
																			{
																				obj_t BgL_tail1296z00_11165;
																				obj_t BgL_ll1294z00_11164;
																				obj_t BgL_ll1293z00_11163;

																				BgL_ll1293z00_11163 =
																					BgL_arg3172z00_3436;
																				BgL_ll1294z00_11164 =
																					BgL_arg3174z00_3437;
																				BgL_tail1296z00_11165 =
																					BgL_newtail1297z00_3435;
																				BgL_tail1296z00_3432 =
																					BgL_tail1296z00_11165;
																				BgL_ll1294z00_3431 =
																					BgL_ll1294z00_11164;
																				BgL_ll1293z00_3430 =
																					BgL_ll1293z00_11163;
																				goto
																					BgL_zc3z04anonymousza33169ze3z87_3433;
																			}
																		}
																	}
															}
														}
													BgL_arg3167z00_3424 =
														MAKE_YOUNG_PAIR(BgL_bodyz00_121, BNIL);
													BgL_arg3164z00_3422 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3166z00_3423, BgL_arg3167z00_3424);
												}
												BgL_arg3163z00_3421 =
													MAKE_YOUNG_PAIR(BGl_symbol4347z00zz__evcompilez00,
													BgL_arg3164z00_3422);
											}
											BgL_arg3150z00_3402 =
												MAKE_YOUNG_PAIR(BgL_arg3163z00_3421, BNIL);
										}
										BgL_arg3147z00_3400 =
											MAKE_YOUNG_PAIR(BgL_arg3149z00_3401, BgL_arg3150z00_3402);
									}
									BgL_arg3146z00_3399 =
										MAKE_YOUNG_PAIR(BGl_symbol4362z00zz__evcompilez00,
										BgL_arg3147z00_3400);
								}
								BgL_arg3137z00_3382 =
									MAKE_YOUNG_PAIR(BgL_arg3146z00_3399, BNIL);
							}
							BgL_arg3135z00_3380 =
								MAKE_YOUNG_PAIR(BgL_arg3136z00_3381, BgL_arg3137z00_3382);
						}
						BgL_expz00_3379 =
							MAKE_YOUNG_PAIR(BGl_symbol4362z00zz__evcompilez00,
							BgL_arg3135z00_3380);
					}
					{	/* Eval/evcompile.scm 754 */

						return
							BGl_evcompilez00zz__evcompilez00(BgL_expz00_3379, BgL_envz00_122,
							BgL_genvz00_123, BgL_wherez00_124, BgL_tailz00_125,
							BgL_locz00_126, BgL_lkpz00_127, ((bool_t) 0));
					}
				}
			}
		}

	}



/* variable */
	obj_t BGl_variablez00zz__evcompilez00(obj_t BgL_locz00_128,
		obj_t BgL_symbolz00_129, obj_t BgL_envz00_130, obj_t BgL_genvz00_131)
	{
		{	/* Eval/evcompile.scm 770 */
			if (SYMBOLP(BgL_symbolz00_129))
				{	/* Eval/evcompile.scm 773 */
					obj_t BgL_offsetz00_3460;

					{
						obj_t BgL_envz00_6737;
						long BgL_countz00_6738;

						BgL_envz00_6737 = BgL_envz00_130;
						BgL_countz00_6738 = ((long) 0);
					BgL_loopz00_6736:
						if (NULLP(BgL_envz00_6737))
							{	/* Eval/evcompile.scm 776 */
								BgL_offsetz00_3460 = BFALSE;
							}
						else
							{	/* Eval/evcompile.scm 778 */
								bool_t BgL_test4966z00_11180;

								{	/* Eval/evcompile.scm 778 */
									obj_t BgL_tmpz00_11181;

									{	/* Eval/evcompile.scm 778 */
										obj_t BgL_pairz00_6753;

										BgL_pairz00_6753 = CAR(((obj_t) BgL_envz00_6737));
										BgL_tmpz00_11181 = CAR(BgL_pairz00_6753);
									}
									BgL_test4966z00_11180 =
										(BgL_tmpz00_11181 == BgL_symbolz00_129);
								}
								if (BgL_test4966z00_11180)
									{	/* Eval/evcompile.scm 778 */
										BgL_offsetz00_3460 = BINT(BgL_countz00_6738);
									}
								else
									{	/* Eval/evcompile.scm 781 */
										obj_t BgL_arg3192z00_6747;
										long BgL_arg3193z00_6748;

										BgL_arg3192z00_6747 = CDR(((obj_t) BgL_envz00_6737));
										BgL_arg3193z00_6748 = (BgL_countz00_6738 + ((long) 1));
										{
											long BgL_countz00_11191;
											obj_t BgL_envz00_11190;

											BgL_envz00_11190 = BgL_arg3192z00_6747;
											BgL_countz00_11191 = BgL_arg3193z00_6748;
											BgL_countz00_6738 = BgL_countz00_11191;
											BgL_envz00_6737 = BgL_envz00_11190;
											goto BgL_loopz00_6736;
										}
									}
							}
					}
					if (CBOOL(BgL_offsetz00_3460))
						{	/* Eval/evcompile.scm 782 */
							return BgL_offsetz00_3460;
						}
					else
						{	/* Eval/evcompile.scm 784 */
							obj_t BgL_modz00_3461;

							if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_genvz00_131))
								{	/* Eval/evcompile.scm 784 */
									BgL_modz00_3461 = BgL_genvz00_131;
								}
							else
								{	/* Eval/evcompile.scm 784 */
									BgL_modz00_3461 = BGL_MODULE();
								}
							{	/* Eval/evcompile.scm 784 */
								obj_t BgL_globalz00_3462;

								BgL_globalz00_3462 =
									BGl_evmodulezd2findzd2globalz00zz__evmodulez00
									(BgL_modz00_3461, BgL_symbolz00_129);
								{	/* Eval/evcompile.scm 785 */

									if (CBOOL(BgL_globalz00_3462))
										{	/* Eval/evcompile.scm 786 */
											return BgL_globalz00_3462;
										}
									else
										{	/* Eval/evcompile.scm 786 */
											return
												MAKE_YOUNG_PAIR(BGl_symbol4331z00zz__evcompilez00,
												BgL_symbolz00_129);
										}
								}
							}
						}
				}
			else
				{	/* Eval/evcompile.scm 771 */
					return
						BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_128,
						BGl_string4315z00zz__evcompilez00,
						BGl_string4377z00zz__evcompilez00, BgL_symbolz00_129);
				}
		}

	}



/* @variable */
	obj_t BGl_z04variablez04zz__evcompilez00(obj_t BgL_locz00_132,
		obj_t BgL_symbolz00_133, obj_t BgL_envz00_134, obj_t BgL_genvz00_135,
		obj_t BgL_modnamez00_136)
	{
		{	/* Eval/evcompile.scm 793 */
			{	/* Eval/evcompile.scm 794 */
				obj_t BgL_modz00_6757;

				BgL_modz00_6757 =
					BGl_evalzd2findzd2modulez00zz__evmodulez00(BgL_modnamez00_136);
				{	/* Eval/evcompile.scm 794 */
					obj_t BgL_globalz00_6758;

					BgL_globalz00_6758 =
						BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_6757,
						BgL_symbolz00_133);
					{	/* Eval/evcompile.scm 795 */

						if (CBOOL(BgL_globalz00_6758))
							{	/* Eval/evcompile.scm 796 */
								return BgL_globalz00_6758;
							}
						else
							{	/* Eval/evcompile.scm 796 */
								if ((BgL_genvz00_135 == BgL_modz00_6757))
									{	/* Eval/evcompile.scm 797 */
										return
											MAKE_YOUNG_PAIR(BGl_symbol4331z00zz__evcompilez00,
											BgL_symbolz00_133);
									}
								else
									{	/* Eval/evcompile.scm 800 */
										obj_t BgL_arg3196z00_6760;

										{	/* Eval/evcompile.scm 800 */
											obj_t BgL_arg3197z00_6761;

											{	/* Eval/evcompile.scm 800 */
												obj_t BgL_arg3201z00_6762;

												BgL_arg3201z00_6762 =
													MAKE_YOUNG_PAIR(BgL_modnamez00_136, BNIL);
												BgL_arg3197z00_6761 =
													MAKE_YOUNG_PAIR(BgL_symbolz00_133,
													BgL_arg3201z00_6762);
											}
											BgL_arg3196z00_6760 =
												MAKE_YOUNG_PAIR(BGl_symbol4324z00zz__evcompilez00,
												BgL_arg3197z00_6761);
										}
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_132,
											BGl_string4315z00zz__evcompilez00,
											BGl_string4333z00zz__evcompilez00, BgL_arg3196z00_6760);
									}
							}
					}
				}
			}
		}

	}



/* untype-ident */
	obj_t BGl_untypezd2identzd2zz__evcompilez00(obj_t BgL_idz00_139)
	{
		{	/* Eval/evcompile.scm 819 */
			if (SYMBOLP(BgL_idz00_139))
				{	/* Eval/evcompile.scm 822 */
					obj_t BgL_stringz00_3484;

					{	/* Eval/evcompile.scm 822 */
						obj_t BgL_res4197z00_6771;

						{	/* Eval/evcompile.scm 822 */
							obj_t BgL_arg3558z00_6770;

							BgL_arg3558z00_6770 = SYMBOL_TO_STRING(BgL_idz00_139);
							BgL_res4197z00_6771 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg3558z00_6770);
						}
						BgL_stringz00_3484 = BgL_res4197z00_6771;
					}
					{	/* Eval/evcompile.scm 822 */
						long BgL_lenz00_3485;

						BgL_lenz00_3485 = STRING_LENGTH(BgL_stringz00_3484);
						{	/* Eval/evcompile.scm 823 */

							{
								long BgL_walkerz00_3487;

								BgL_walkerz00_3487 = ((long) 0);
							BgL_zc3z04anonymousza33206ze3z87_3488:
								if ((BgL_walkerz00_3487 == BgL_lenz00_3485))
									{	/* Eval/evcompile.scm 826 */
										return BgL_idz00_139;
									}
								else
									{	/* Eval/evcompile.scm 828 */
										bool_t BgL_test4974z00_11220;

										if (
											(STRING_REF(BgL_stringz00_3484,
													BgL_walkerz00_3487) == ((unsigned char) ':')))
											{	/* Eval/evcompile.scm 828 */
												if (
													(BgL_walkerz00_3487 < (BgL_lenz00_3485 - ((long) 1))))
													{	/* Eval/evcompile.scm 829 */
														BgL_test4974z00_11220 =
															(STRING_REF(BgL_stringz00_3484,
																(BgL_walkerz00_3487 + ((long) 1))) ==
															((unsigned char) ':'));
													}
												else
													{	/* Eval/evcompile.scm 829 */
														BgL_test4974z00_11220 = ((bool_t) 0);
													}
											}
										else
											{	/* Eval/evcompile.scm 828 */
												BgL_test4974z00_11220 = ((bool_t) 0);
											}
										if (BgL_test4974z00_11220)
											{	/* Eval/evcompile.scm 828 */
												return
													bstring_to_symbol(c_substring(BgL_stringz00_3484,
														((long) 0), BgL_walkerz00_3487));
											}
										else
											{
												long BgL_walkerz00_11232;

												BgL_walkerz00_11232 = (BgL_walkerz00_3487 + ((long) 1));
												BgL_walkerz00_3487 = BgL_walkerz00_11232;
												goto BgL_zc3z04anonymousza33206ze3z87_3488;
											}
									}
							}
						}
					}
				}
			else
				{	/* Eval/evcompile.scm 820 */
					return BgL_idz00_139;
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__evcompilez00(obj_t BgL_envz00_7266,
		obj_t BgL_framesz00_3510)
	{
		{	/* Eval/evcompile.scm 856 */
			{
				obj_t BgL_varz00_3518;
				obj_t BgL_envz00_3519;

				if (NULLP(BgL_framesz00_3510))
					{	/* Eval/evcompile.scm 858 */
						return BgL_envz00_7266;
					}
				else
					{	/* Eval/evcompile.scm 858 */
						if (PAIRP(BgL_framesz00_3510))
							{	/* Eval/evcompile.scm 860 */
								BgL_varz00_3518 = CAR(BgL_framesz00_3510);
								BgL_envz00_3519 =
									BGl_loopze70ze7zz__evcompilez00(BgL_envz00_7266,
									CDR(BgL_framesz00_3510));
							BgL_zc3z04anonymousza33240ze3z87_3520:
								{	/* Eval/evcompile.scm 841 */
									obj_t BgL_stringz00_3521;

									{	/* Eval/evcompile.scm 841 */
										obj_t BgL_res4210z00_6804;

										BgL_res4210z00_6804 =
											SYMBOL_TO_STRING(((obj_t) BgL_varz00_3518));
										BgL_stringz00_3521 = BgL_res4210z00_6804;
									}
									{	/* Eval/evcompile.scm 841 */
										long BgL_lenz00_3522;

										BgL_lenz00_3522 = STRING_LENGTH(BgL_stringz00_3521);
										{	/* Eval/evcompile.scm 842 */

											{
												long BgL_walkerz00_3524;

												BgL_walkerz00_3524 = ((long) 0);
											BgL_zc3z04anonymousza33241ze3z87_3525:
												if ((BgL_walkerz00_3524 == BgL_lenz00_3522))
													{	/* Eval/evcompile.scm 846 */
														obj_t BgL_arg3243z00_3527;

														BgL_arg3243z00_3527 =
															MAKE_YOUNG_PAIR(BgL_varz00_3518, BFALSE);
														return
															MAKE_YOUNG_PAIR(BgL_arg3243z00_3527,
															BgL_envz00_3519);
													}
												else
													{	/* Eval/evcompile.scm 847 */
														bool_t BgL_test4980z00_11245;

														if (
															(STRING_REF(BgL_stringz00_3521,
																	BgL_walkerz00_3524) == ((unsigned char) ':')))
															{	/* Eval/evcompile.scm 847 */
																if (
																	(BgL_walkerz00_3524 <
																		(BgL_lenz00_3522 - ((long) 1))))
																	{	/* Eval/evcompile.scm 848 */
																		BgL_test4980z00_11245 =
																			(STRING_REF(BgL_stringz00_3521,
																				(BgL_walkerz00_3524 + ((long) 1))) ==
																			((unsigned char) ':'));
																	}
																else
																	{	/* Eval/evcompile.scm 848 */
																		BgL_test4980z00_11245 = ((bool_t) 0);
																	}
															}
														else
															{	/* Eval/evcompile.scm 847 */
																BgL_test4980z00_11245 = ((bool_t) 0);
															}
														if (BgL_test4980z00_11245)
															{	/* Eval/evcompile.scm 850 */
																obj_t BgL_idz00_3537;
																obj_t BgL_typez00_3538;

																BgL_idz00_3537 =
																	bstring_to_symbol(c_substring
																	(BgL_stringz00_3521, ((long) 0),
																		BgL_walkerz00_3524));
																{	/* Eval/evcompile.scm 851 */
																	obj_t BgL_arg3260z00_3543;

																	{	/* Eval/evcompile.scm 851 */
																		long BgL_arg3261z00_3544;

																		BgL_arg3261z00_3544 =
																			(BgL_walkerz00_3524 + ((long) 2));
																		{	/* Ieee/string.scm 190 */
																			long BgL_endz00_3547;

																			BgL_endz00_3547 =
																				STRING_LENGTH(BgL_stringz00_3521);
																			{	/* Ieee/string.scm 190 */

																				BgL_arg3260z00_3543 =
																					BGl_substringz00zz__r4_strings_6_7z00
																					(BgL_stringz00_3521,
																					BgL_arg3261z00_3544, BgL_endz00_3547);
																	}}}
																	BgL_typez00_3538 =
																		bstring_to_symbol(BgL_arg3260z00_3543);
																}
																{	/* Eval/evcompile.scm 852 */
																	obj_t BgL_arg3257z00_3539;

																	{	/* Eval/evcompile.scm 852 */
																		obj_t BgL_arg3258z00_3540;

																		{	/* Eval/evcompile.scm 852 */
																			obj_t BgL__ortest_1087z00_3541;

																			BgL__ortest_1087z00_3541 =
																				BGl_classzd2existszd2zz__objectz00
																				(BgL_typez00_3538);
																			if (CBOOL(BgL__ortest_1087z00_3541))
																				{	/* Eval/evcompile.scm 852 */
																					BgL_arg3258z00_3540 =
																						BgL__ortest_1087z00_3541;
																				}
																			else
																				{	/* Eval/evcompile.scm 852 */
																					BgL_arg3258z00_3540 =
																						BgL_typez00_3538;
																				}
																		}
																		BgL_arg3257z00_3539 =
																			MAKE_YOUNG_PAIR(BgL_idz00_3537,
																			BgL_arg3258z00_3540);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_arg3257z00_3539,
																		BgL_envz00_3519);
																}
															}
														else
															{
																long BgL_walkerz00_11266;

																BgL_walkerz00_11266 =
																	(BgL_walkerz00_3524 + ((long) 1));
																BgL_walkerz00_3524 = BgL_walkerz00_11266;
																goto BgL_zc3z04anonymousza33241ze3z87_3525;
															}
													}
											}
										}
									}
								}
							}
						else
							{
								obj_t BgL_envz00_11272;
								obj_t BgL_varz00_11271;

								BgL_varz00_11271 = BgL_framesz00_3510;
								BgL_envz00_11272 = BgL_envz00_7266;
								BgL_envz00_3519 = BgL_envz00_11272;
								BgL_varz00_3518 = BgL_varz00_11271;
								goto BgL_zc3z04anonymousza33240ze3z87_3520;
							}
					}
			}
		}

	}



/* evcompile-loc-filename */
	BGL_EXPORTED_DEF obj_t BGl_evcompilezd2loczd2filenamez00zz__evcompilez00(obj_t
		BgL_locz00_142)
	{
		{	/* Eval/evcompile.scm 868 */
			if (PAIRP(BgL_locz00_142))
				{	/* Eval/evcompile.scm 869 */
					obj_t BgL_cdrzd27199zd2_3563;

					BgL_cdrzd27199zd2_3563 = CDR(BgL_locz00_142);
					if ((CAR(BgL_locz00_142) == BGl_symbol4378z00zz__evcompilez00))
						{	/* Eval/evcompile.scm 869 */
							if (PAIRP(BgL_cdrzd27199zd2_3563))
								{	/* Eval/evcompile.scm 869 */
									obj_t BgL_cdrzd27203zd2_3567;

									BgL_cdrzd27203zd2_3567 = CDR(BgL_cdrzd27199zd2_3563);
									if (PAIRP(BgL_cdrzd27203zd2_3567))
										{	/* Eval/evcompile.scm 869 */
											if (NULLP(CDR(BgL_cdrzd27203zd2_3567)))
												{	/* Eval/evcompile.scm 869 */
													return CAR(BgL_cdrzd27199zd2_3563);
												}
											else
												{	/* Eval/evcompile.scm 869 */
													return BFALSE;
												}
										}
									else
										{	/* Eval/evcompile.scm 869 */
											return BFALSE;
										}
								}
							else
								{	/* Eval/evcompile.scm 869 */
									return BFALSE;
								}
						}
					else
						{	/* Eval/evcompile.scm 869 */
							return BFALSE;
						}
				}
			else
				{	/* Eval/evcompile.scm 869 */
					return BFALSE;
				}
		}

	}



/* &evcompile-loc-filename */
	obj_t BGl_z62evcompilezd2loczd2filenamez62zz__evcompilez00(obj_t
		BgL_envz00_7259, obj_t BgL_locz00_7260)
	{
		{	/* Eval/evcompile.scm 868 */
			return BGl_evcompilezd2loczd2filenamez00zz__evcompilez00(BgL_locz00_7260);
		}

	}



/* evcompile-error */
	BGL_EXPORTED_DEF obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t
		BgL_locz00_143, obj_t BgL_procz00_144, obj_t BgL_mesz00_145,
		obj_t BgL_objz00_146)
	{
		{	/* Eval/evcompile.scm 876 */
			if (PAIRP(BgL_locz00_143))
				{	/* Eval/evcompile.scm 877 */
					obj_t BgL_cdrzd27217zd2_3581;

					BgL_cdrzd27217zd2_3581 = CDR(BgL_locz00_143);
					if ((CAR(BgL_locz00_143) == BGl_symbol4378z00zz__evcompilez00))
						{	/* Eval/evcompile.scm 877 */
							if (PAIRP(BgL_cdrzd27217zd2_3581))
								{	/* Eval/evcompile.scm 877 */
									obj_t BgL_cdrzd27221zd2_3585;

									BgL_cdrzd27221zd2_3585 = CDR(BgL_cdrzd27217zd2_3581);
									if (PAIRP(BgL_cdrzd27221zd2_3585))
										{	/* Eval/evcompile.scm 877 */
											if (NULLP(CDR(BgL_cdrzd27221zd2_3585)))
												{	/* Eval/evcompile.scm 877 */
													return
														BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_144,
														BgL_mesz00_145, BgL_objz00_146,
														CAR(BgL_cdrzd27217zd2_3581),
														CAR(BgL_cdrzd27221zd2_3585));
												}
											else
												{	/* Eval/evcompile.scm 877 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_144,
														BgL_mesz00_145, BgL_objz00_146);
												}
										}
									else
										{	/* Eval/evcompile.scm 877 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_144,
												BgL_mesz00_145, BgL_objz00_146);
										}
								}
							else
								{	/* Eval/evcompile.scm 877 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_144, BgL_mesz00_145,
										BgL_objz00_146);
								}
						}
					else
						{	/* Eval/evcompile.scm 877 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_144, BgL_mesz00_145,
								BgL_objz00_146);
						}
				}
			else
				{	/* Eval/evcompile.scm 877 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_144, BgL_mesz00_145,
						BgL_objz00_146);
				}
		}

	}



/* &evcompile-error */
	obj_t BGl_z62evcompilezd2errorzb0zz__evcompilez00(obj_t BgL_envz00_7261,
		obj_t BgL_locz00_7262, obj_t BgL_procz00_7263, obj_t BgL_mesz00_7264,
		obj_t BgL_objz00_7265)
	{
		{	/* Eval/evcompile.scm 876 */
			return
				BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_7262,
				BgL_procz00_7263, BgL_mesz00_7264, BgL_objz00_7265);
		}

	}



/* evcompile-field-ref */
	obj_t BGl_evcompilezd2fieldzd2refz00zz__evcompilez00(obj_t BgL_expz00_149,
		obj_t BgL_envz00_150, obj_t BgL_genvz00_151, obj_t BgL_wherez00_152,
		bool_t BgL_tailz00_153, obj_t BgL_locz00_154, bool_t BgL_lkpz00_155,
		bool_t BgL_toplevelpz00_156)
	{
		{	/* Eval/evcompile.scm 935 */
			{	/* Eval/evcompile.scm 936 */
				obj_t BgL_lz00_3658;

				BgL_lz00_3658 = CDR(((obj_t) BgL_expz00_149));
				{	/* Eval/evcompile.scm 936 */
					obj_t BgL_vz00_3659;

					{	/* Eval/evcompile.scm 937 */
						obj_t BgL_arg3364z00_3683;

						BgL_arg3364z00_3683 = CAR(((obj_t) BgL_lz00_3658));
						BgL_vz00_3659 =
							BGl_variablez00zz__evcompilez00(BgL_locz00_154,
							BgL_arg3364z00_3683, BgL_envz00_150, BgL_genvz00_151);
					}
					{	/* Eval/evcompile.scm 937 */

						if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_vz00_3659))
							{	/* Eval/evcompile.scm 940 */
								obj_t BgL_g1088z00_3661;
								obj_t BgL_g1089z00_3662;
								obj_t BgL_g1090z00_3663;

								BgL_g1088z00_3661 = CAR(((obj_t) BgL_lz00_3658));
								BgL_g1089z00_3662 =
									CDR(bgl_list_ref(BgL_envz00_150, (long) CINT(BgL_vz00_3659)));
								BgL_g1090z00_3663 = CDR(((obj_t) BgL_lz00_3658));
								{
									obj_t BgL_nodez00_3665;
									obj_t BgL_klassz00_3666;
									obj_t BgL_fieldsz00_3667;

									BgL_nodez00_3665 = BgL_g1088z00_3661;
									BgL_klassz00_3666 = BgL_g1089z00_3662;
									BgL_fieldsz00_3667 = BgL_g1090z00_3663;
								BgL_zc3z04anonymousza33349ze3z87_3668:
									if (NULLP(BgL_fieldsz00_3667))
										{	/* Eval/evcompile.scm 944 */
											return
												BGl_evcompilez00zz__evcompilez00(BgL_nodez00_3665,
												BgL_envz00_150, BgL_genvz00_151, BgL_wherez00_152,
												BgL_tailz00_153, BgL_locz00_154, BgL_lkpz00_155,
												BgL_toplevelpz00_156);
										}
									else
										{	/* Eval/evcompile.scm 944 */
											if (BGl_classzf3zf3zz__objectz00(BgL_klassz00_3666))
												{	/* Eval/evcompile.scm 949 */
													obj_t BgL_fieldz00_3671;

													{	/* Eval/evcompile.scm 949 */
														obj_t BgL_arg3362z00_3680;

														BgL_arg3362z00_3680 =
															CAR(((obj_t) BgL_fieldsz00_3667));
														BgL_fieldz00_3671 =
															BGl_findzd2classzd2fieldz00zz__objectz00
															(BgL_klassz00_3666, BgL_arg3362z00_3680);
													}
													if (CBOOL(BgL_fieldz00_3671))
														{	/* Eval/evcompile.scm 955 */
															obj_t BgL_nodez00_3672;

															{	/* Eval/evcompile.scm 994 */
																obj_t BgL_arg3396z00_6873;
																obj_t BgL_arg3398z00_6874;

																BgL_arg3396z00_6873 =
																	BGl_classzd2fieldzd2accessorz00zz__objectz00
																	(BgL_fieldz00_3671);
																BgL_arg3398z00_6874 =
																	MAKE_YOUNG_PAIR(BgL_nodez00_3665, BNIL);
																BgL_nodez00_3672 =
																	MAKE_YOUNG_PAIR(BgL_arg3396z00_6873,
																	BgL_arg3398z00_6874);
															}
															{	/* Eval/evcompile.scm 957 */
																obj_t BgL_arg3353z00_3673;
																obj_t BgL_arg3354z00_3674;

																BgL_arg3353z00_3673 =
																	BGl_classzd2fieldzd2typez00zz__objectz00
																	(BgL_fieldz00_3671);
																BgL_arg3354z00_3674 =
																	CDR(((obj_t) BgL_fieldsz00_3667));
																{
																	obj_t BgL_fieldsz00_11344;
																	obj_t BgL_klassz00_11343;
																	obj_t BgL_nodez00_11342;

																	BgL_nodez00_11342 = BgL_nodez00_3672;
																	BgL_klassz00_11343 = BgL_arg3353z00_3673;
																	BgL_fieldsz00_11344 = BgL_arg3354z00_3674;
																	BgL_fieldsz00_3667 = BgL_fieldsz00_11344;
																	BgL_klassz00_3666 = BgL_klassz00_11343;
																	BgL_nodez00_3665 = BgL_nodez00_11342;
																	goto BgL_zc3z04anonymousza33349ze3z87_3668;
																}
															}
														}
													else
														{	/* Eval/evcompile.scm 953 */
															obj_t BgL_arg3356z00_3675;

															{	/* Eval/evcompile.scm 953 */
																obj_t BgL_arg3357z00_3676;
																obj_t BgL_arg3358z00_3677;

																BgL_arg3357z00_3676 =
																	BGl_classzd2namezd2zz__objectz00
																	(BgL_klassz00_3666);
																BgL_arg3358z00_3677 =
																	CAR(((obj_t) BgL_fieldsz00_3667));
																{	/* Eval/evcompile.scm 952 */
																	obj_t BgL_list3359z00_3678;

																	{	/* Eval/evcompile.scm 952 */
																		obj_t BgL_arg3361z00_3679;

																		BgL_arg3361z00_3679 =
																			MAKE_YOUNG_PAIR(BgL_arg3358z00_3677,
																			BNIL);
																		BgL_list3359z00_3678 =
																			MAKE_YOUNG_PAIR(BgL_arg3357z00_3676,
																			BgL_arg3361z00_3679);
																	}
																	BgL_arg3356z00_3675 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string4380z00zz__evcompilez00,
																		BgL_list3359z00_3678);
																}
															}
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_154,
																BGl_string4315z00zz__evcompilez00,
																BgL_arg3356z00_3675, BgL_expz00_149);
														}
												}
											else
												{	/* Eval/evcompile.scm 946 */
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_154, BGl_string4315z00zz__evcompilez00,
														BGl_string4381z00zz__evcompilez00, BgL_expz00_149);
												}
										}
								}
							}
						else
							{	/* Eval/evcompile.scm 938 */
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_154,
									BGl_string4315z00zz__evcompilez00,
									BGl_string4381z00zz__evcompilez00, BgL_expz00_149);
							}
					}
				}
			}
		}

	}



/* evcompile-field-set */
	obj_t BGl_evcompilezd2fieldzd2setz00zz__evcompilez00(obj_t BgL_lz00_157,
		obj_t BgL_valz00_158, obj_t BgL_expz00_159, obj_t BgL_envz00_160,
		obj_t BgL_genvz00_161, obj_t BgL_wherez00_162, bool_t BgL_tailz00_163,
		obj_t BgL_locz00_164, bool_t BgL_lkpz00_165, bool_t BgL_toplevelpz00_166)
	{
		{	/* Eval/evcompile.scm 963 */
			{	/* Eval/evcompile.scm 964 */
				obj_t BgL_vz00_3684;

				BgL_vz00_3684 =
					BGl_variablez00zz__evcompilez00(BgL_locz00_164,
					CAR(BgL_lz00_157), BgL_envz00_160, BgL_genvz00_161);
				if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_vz00_3684))
					{	/* Eval/evcompile.scm 967 */
						obj_t BgL_g1091z00_3686;
						obj_t BgL_g1092z00_3687;
						obj_t BgL_g1093z00_3688;

						BgL_g1091z00_3686 = CAR(BgL_lz00_157);
						BgL_g1092z00_3687 =
							CDR(bgl_list_ref(BgL_envz00_160, (long) CINT(BgL_vz00_3684)));
						BgL_g1093z00_3688 = CDR(BgL_lz00_157);
						{
							obj_t BgL_nodez00_3690;
							obj_t BgL_klassz00_3691;
							obj_t BgL_fieldsz00_3692;

							BgL_nodez00_3690 = BgL_g1091z00_3686;
							BgL_klassz00_3691 = BgL_g1092z00_3687;
							BgL_fieldsz00_3692 = BgL_g1093z00_3688;
						BgL_zc3z04anonymousza33366ze3z87_3693:
							if (BGl_classzf3zf3zz__objectz00(BgL_klassz00_3691))
								{	/* Eval/evcompile.scm 972 */
									obj_t BgL_fieldz00_3695;

									{	/* Eval/evcompile.scm 972 */
										obj_t BgL_arg3390z00_3709;

										BgL_arg3390z00_3709 = CAR(((obj_t) BgL_fieldsz00_3692));
										BgL_fieldz00_3695 =
											BGl_findzd2classzd2fieldz00zz__objectz00
											(BgL_klassz00_3691, BgL_arg3390z00_3709);
									}
									if (CBOOL(BgL_fieldz00_3695))
										{	/* Eval/evcompile.scm 974 */
											if (NULLP(CDR(((obj_t) BgL_fieldsz00_3692))))
												{	/* Eval/evcompile.scm 979 */
													if (BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00
														(BgL_fieldz00_3695))
														{	/* Eval/evcompile.scm 981 */
															obj_t BgL_arg3378z00_3699;

															{	/* Eval/evcompile.scm 1000 */
																obj_t BgL_arg3399z00_6884;
																obj_t BgL_arg3400z00_6885;

																BgL_arg3399z00_6884 =
																	BGl_classzd2fieldzd2mutatorz00zz__objectz00
																	(BgL_fieldz00_3695);
																{	/* Eval/evcompile.scm 1000 */
																	obj_t BgL_arg3402z00_6886;

																	BgL_arg3402z00_6886 =
																		MAKE_YOUNG_PAIR(BgL_valz00_158, BNIL);
																	BgL_arg3400z00_6885 =
																		MAKE_YOUNG_PAIR(BgL_nodez00_3690,
																		BgL_arg3402z00_6886);
																}
																BgL_arg3378z00_3699 =
																	MAKE_YOUNG_PAIR(BgL_arg3399z00_6884,
																	BgL_arg3400z00_6885);
															}
															return
																BGl_evcompilez00zz__evcompilez00
																(BgL_arg3378z00_3699, BgL_envz00_160,
																BgL_genvz00_161, BgL_wherez00_162,
																BgL_tailz00_163, BgL_locz00_164, BgL_lkpz00_165,
																BgL_toplevelpz00_166);
														}
													else
														{	/* Eval/evcompile.scm 980 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_164,
																BGl_string4315z00zz__evcompilez00,
																BGl_string4382z00zz__evcompilez00,
																BgL_expz00_159);
														}
												}
											else
												{	/* Eval/evcompile.scm 985 */
													obj_t BgL_nodez00_3700;

													{	/* Eval/evcompile.scm 994 */
														obj_t BgL_arg3396z00_6887;
														obj_t BgL_arg3398z00_6888;

														BgL_arg3396z00_6887 =
															BGl_classzd2fieldzd2accessorz00zz__objectz00
															(BgL_fieldz00_3695);
														BgL_arg3398z00_6888 =
															MAKE_YOUNG_PAIR(BgL_nodez00_3690, BNIL);
														BgL_nodez00_3700 =
															MAKE_YOUNG_PAIR(BgL_arg3396z00_6887,
															BgL_arg3398z00_6888);
													}
													{	/* Eval/evcompile.scm 987 */
														obj_t BgL_arg3379z00_3701;
														obj_t BgL_arg3381z00_3702;

														BgL_arg3379z00_3701 =
															BGl_classzd2fieldzd2typez00zz__objectz00
															(BgL_fieldz00_3695);
														BgL_arg3381z00_3702 =
															CDR(((obj_t) BgL_fieldsz00_3692));
														{
															obj_t BgL_fieldsz00_11390;
															obj_t BgL_klassz00_11389;
															obj_t BgL_nodez00_11388;

															BgL_nodez00_11388 = BgL_nodez00_3700;
															BgL_klassz00_11389 = BgL_arg3379z00_3701;
															BgL_fieldsz00_11390 = BgL_arg3381z00_3702;
															BgL_fieldsz00_3692 = BgL_fieldsz00_11390;
															BgL_klassz00_3691 = BgL_klassz00_11389;
															BgL_nodez00_3690 = BgL_nodez00_11388;
															goto BgL_zc3z04anonymousza33366ze3z87_3693;
														}
													}
												}
										}
									else
										{	/* Eval/evcompile.scm 977 */
											obj_t BgL_arg3384z00_3704;

											{	/* Eval/evcompile.scm 977 */
												obj_t BgL_arg3385z00_3705;
												obj_t BgL_arg3387z00_3706;

												BgL_arg3385z00_3705 =
													BGl_classzd2namezd2zz__objectz00(BgL_klassz00_3691);
												BgL_arg3387z00_3706 = CAR(((obj_t) BgL_fieldsz00_3692));
												{	/* Eval/evcompile.scm 976 */
													obj_t BgL_list3388z00_3707;

													{	/* Eval/evcompile.scm 976 */
														obj_t BgL_arg3389z00_3708;

														BgL_arg3389z00_3708 =
															MAKE_YOUNG_PAIR(BgL_arg3387z00_3706, BNIL);
														BgL_list3388z00_3707 =
															MAKE_YOUNG_PAIR(BgL_arg3385z00_3705,
															BgL_arg3389z00_3708);
													}
													BgL_arg3384z00_3704 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string4380z00zz__evcompilez00,
														BgL_list3388z00_3707);
												}
											}
											return
												BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_164,
												BGl_string4323z00zz__evcompilez00, BgL_arg3384z00_3704,
												BgL_expz00_159);
										}
								}
							else
								{	/* Eval/evcompile.scm 970 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_164,
										BGl_string4323z00zz__evcompilez00,
										BGl_string4381z00zz__evcompilez00, BgL_expz00_159);
								}
						}
					}
				else
					{	/* Eval/evcompile.scm 965 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_164,
							BGl_string4323z00zz__evcompilez00,
							BGl_string4381z00zz__evcompilez00, BgL_expz00_159);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evcompilez00()
	{
		{	/* Eval/evcompile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 500027153),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__evobjectz00(((long) 481718239),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
			return BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string4383z00zz__evcompilez00));
		}

	}

#ifdef __cplusplus
}
#endif
