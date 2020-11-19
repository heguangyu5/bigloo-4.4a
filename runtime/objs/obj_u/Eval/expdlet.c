/*===========================================================================*/
/*   (Eval/expdlet.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdlet.scm -indent -o objs/obj_u/Eval/expdlet.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2labelsz00zz__expander_letz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_letz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2evalzd2letz00zz__expander_letz00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2evalzd2letz62zz__expander_letz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_letz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__expander_letz00();
	extern obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31307ze3ze5zz__expander_letz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_letz00();
	static obj_t BGl_z62expandzd2evalzd2letrecz62zz__expander_letz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letza2za2zz__expander_letz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2evalzd2labelsz62zz__expander_letz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_symbol2114z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2116z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2118z00zz__expander_letz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol2123z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2127z00zz__expander_letz00 = BUNSPEC;
	extern obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_letz00();
	static obj_t BGl_z62expandzd2evalzd2letza2zc0zz__expander_letz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_letz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_letz00();
	static obj_t BGl_z62expandzd2evalzd2letrecza2zc0zz__expander_letz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letrecz00zz__expander_letz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopze70ze7zz__expander_letz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zz__expander_letz00,
		BgL_bgl_za762za7c3za704anonymo2131za7,
		BGl_z62zc3z04anonymousza31307ze3ze5zz__expander_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2120z00zz__expander_letz00,
		BgL_bgl_string2120za700za7za7_2132za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2121z00zz__expander_letz00,
		BgL_bgl_string2121za700za7za7_2133za7, "Illegal binding form", 20);
	      DEFINE_STRING(BGl_string2122z00zz__expander_letz00,
		BgL_bgl_string2122za700za7za7_2134za7, "Illegal `let' form", 18);
	      DEFINE_STRING(BGl_string2124z00zz__expander_letz00,
		BgL_bgl_string2124za700za7za7_2135za7, "let*", 4);
	      DEFINE_STRING(BGl_string2125z00zz__expander_letz00,
		BgL_bgl_string2125za700za7za7_2136za7, "Illegal bindings form", 21);
	      DEFINE_STRING(BGl_string2126z00zz__expander_letz00,
		BgL_bgl_string2126za700za7za7_2137za7, "letrec*", 7);
	      DEFINE_STRING(BGl_string2128z00zz__expander_letz00,
		BgL_bgl_string2128za700za7za7_2138za7, "set!", 4);
	      DEFINE_STRING(BGl_string2129z00zz__expander_letz00,
		BgL_bgl_string2129za700za7za7_2139za7, "expand-labels", 13);
	      DEFINE_STRING(BGl_string2130z00zz__expander_letz00,
		BgL_bgl_string2130za700za7za7_2140za7, "__expander_let", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00,
		BgL_bgl_za762expandza7d2eval2141z00,
		BGl_z62expandzd2evalzd2letrecza2zc0zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00,
		BgL_bgl_za762expandza7d2eval2142z00,
		BGl_z62expandzd2evalzd2letza2zc0zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00,
		BgL_bgl_za762expandza7d2eval2143z00,
		BGl_z62expandzd2evalzd2labelsz62zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00,
		BgL_bgl_za762expandza7d2eval2144z00,
		BGl_z62expandzd2evalzd2letrecz62zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00,
		BgL_bgl_za762expandza7d2eval2145z00,
		BGl_z62expandzd2evalzd2letz62zz__expander_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2115z00zz__expander_letz00,
		BgL_bgl_string2115za700za7za7_2146za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2117z00zz__expander_letz00,
		BgL_bgl_string2117za700za7za7_2147za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2119z00zz__expander_letz00,
		BgL_bgl_string2119za700za7za7_2148za7, "let", 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_letz00));
		     ADD_ROOT((void *) (&BGl_symbol2114z00zz__expander_letz00));
		     ADD_ROOT((void *) (&BGl_symbol2116z00zz__expander_letz00));
		     ADD_ROOT((void *) (&BGl_symbol2118z00zz__expander_letz00));
		     ADD_ROOT((void *) (&BGl_symbol2123z00zz__expander_letz00));
		     ADD_ROOT((void *) (&BGl_symbol2127z00zz__expander_letz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_letz00(long
		BgL_checksumz00_2814, char *BgL_fromz00_2815)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_letz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_letz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_letz00();
					BGl_cnstzd2initzd2zz__expander_letz00();
					BGl_importedzd2moduleszd2initz00zz__expander_letz00();
					return BGl_methodzd2initzd2zz__expander_letz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			BGl_symbol2114z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2115z00zz__expander_letz00);
			BGl_symbol2116z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2117z00zz__expander_letz00);
			BGl_symbol2118z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2119z00zz__expander_letz00);
			BGl_symbol2123z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2124z00zz__expander_letz00);
			return (BGl_symbol2127z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2128z00zz__expander_letz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-eval-let */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letz00zz__expander_letz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdlet.scm 63 */
			{
				obj_t BgL_bindingsz00_1267;
				obj_t BgL_bodyz00_1268;
				obj_t BgL_xz00_1269;
				obj_t BgL_ez00_1270;
				obj_t BgL_loopz00_1129;
				obj_t BgL_bindingsz00_1130;
				obj_t BgL_bodyz00_1131;
				obj_t BgL_xz00_1132;
				obj_t BgL_ez00_1133;

				{	/* Eval/expdlet.scm 109 */
					obj_t BgL_ez00_1073;

					BgL_ez00_1073 =
						BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_4);
					{	/* Eval/expdlet.scm 109 */
						obj_t BgL_resz00_1074;

						if (PAIRP(BgL_xz00_3))
							{	/* Eval/expdlet.scm 110 */
								obj_t BgL_cdrzd2140zd2_1087;

								BgL_cdrzd2140zd2_1087 = CDR(BgL_xz00_3);
								if (PAIRP(BgL_cdrzd2140zd2_1087))
									{	/* Eval/expdlet.scm 110 */
										obj_t BgL_cdrzd2143zd2_1089;

										BgL_cdrzd2143zd2_1089 = CDR(BgL_cdrzd2140zd2_1087);
										if (NULLP(CAR(BgL_cdrzd2140zd2_1087)))
											{	/* Eval/expdlet.scm 110 */
												if (NULLP(BgL_cdrzd2143zd2_1089))
													{	/* Eval/expdlet.scm 110 */
														obj_t BgL_carzd2157zd2_1094;
														obj_t BgL_cdrzd2158zd2_1095;

														BgL_carzd2157zd2_1094 =
															CAR(((obj_t) BgL_cdrzd2140zd2_1087));
														BgL_cdrzd2158zd2_1095 =
															CDR(((obj_t) BgL_cdrzd2140zd2_1087));
														if (SYMBOLP(BgL_carzd2157zd2_1094))
															{	/* Eval/expdlet.scm 110 */
																if (PAIRP(BgL_cdrzd2158zd2_1095))
																	{	/* Eval/expdlet.scm 110 */
																		obj_t BgL_cdrzd2165zd2_1098;

																		BgL_cdrzd2165zd2_1098 =
																			CDR(BgL_cdrzd2158zd2_1095);
																		if (NULLP(BgL_cdrzd2165zd2_1098))
																			{	/* Eval/expdlet.scm 110 */
																				obj_t BgL_carzd2177zd2_1101;

																				BgL_carzd2177zd2_1101 =
																					CAR(((obj_t) BgL_cdrzd2140zd2_1087));
																				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2177zd2_1101))
																					{	/* Eval/expdlet.scm 110 */
																						obj_t BgL_arg1223z00_1103;

																						BgL_arg1223z00_1103 =
																							CDR(
																							((obj_t) BgL_cdrzd2140zd2_1087));
																						BgL_bindingsz00_1267 =
																							BgL_carzd2177zd2_1101;
																						BgL_bodyz00_1268 =
																							BgL_arg1223z00_1103;
																						BgL_xz00_1269 = BgL_xz00_3;
																						BgL_ez00_1270 = BgL_ez00_1073;
																					BgL_zc3z04anonymousza31336ze3z87_1271:
																						{
																							obj_t BgL_bindingsz00_1275;
																							obj_t BgL_nbindingsz00_1276;
																							obj_t BgL_ebdgsz00_1277;

																							BgL_bindingsz00_1275 =
																								BgL_bindingsz00_1267;
																							BgL_nbindingsz00_1276 = BNIL;
																							BgL_ebdgsz00_1277 = BNIL;
																						BgL_zc3z04anonymousza31337ze3z87_1278:
																							if (NULLP
																								(BgL_bindingsz00_1275))
																								{	/* Eval/expdlet.scm 95 */
																									obj_t BgL_arg1339z00_1280;

																									{	/* Eval/expdlet.scm 95 */
																										obj_t BgL_arg1340z00_1281;
																										obj_t BgL_arg1341z00_1282;

																										BgL_arg1340z00_1281 =
																											bgl_reverse_bang
																											(BgL_nbindingsz00_1276);
																										BgL_arg1341z00_1282 =
																											MAKE_YOUNG_PAIR
																											(BGl_z52withzd2lexicalz80zz__expandz00
																											(BgL_ebdgsz00_1277,
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_bodyz00_1268),
																												BgL_ez00_1270, BFALSE),
																											BNIL);
																										BgL_arg1339z00_1280 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1340z00_1281,
																											BgL_arg1341z00_1282);
																									}
																									BgL_resz00_1074 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2118z00zz__expander_letz00,
																										BgL_arg1339z00_1280);
																								}
																							else
																								{
																									obj_t BgL_varz00_1285;

																									{	/* Eval/expdlet.scm 97 */
																										obj_t BgL_ezd2111zd2_1291;

																										BgL_ezd2111zd2_1291 =
																											CAR(
																											((obj_t)
																												BgL_bindingsz00_1275));
																										if (SYMBOLP
																											(BgL_ezd2111zd2_1291))
																											{	/* Eval/expdlet.scm 97 */
																												BgL_varz00_1285 =
																													BgL_ezd2111zd2_1291;
																												{	/* Eval/expdlet.scm 99 */
																													obj_t
																														BgL_arg1352z00_1302;
																													obj_t
																														BgL_arg1353z00_1303;
																													obj_t
																														BgL_arg1354z00_1304;
																													BgL_arg1352z00_1302 =
																														CDR(((obj_t)
																															BgL_bindingsz00_1275));
																													{	/* Eval/expdlet.scm 100 */
																														obj_t
																															BgL_arg1355z00_1305;
																														{	/* Eval/expdlet.scm 88 */
																															obj_t
																																BgL_arg1333z00_2204;
																															{	/* Eval/expdlet.scm 88 */
																																obj_t
																																	BgL_list1334z00_2205;
																																{	/* Eval/expdlet.scm 88 */
																																	obj_t
																																		BgL_arg1335z00_2206;
																																	BgL_arg1335z00_2206
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BUNSPEC,
																																		BNIL);
																																	BgL_list1334z00_2205
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_varz00_1285,
																																		BgL_arg1335z00_2206);
																																}
																																BgL_arg1333z00_2204
																																	=
																																	BgL_list1334z00_2205;
																															}
																															BgL_arg1355z00_1305
																																=
																																BGl_evepairifyz00zz__prognz00
																																(BgL_arg1333z00_2204,
																																BgL_bindingsz00_1275);
																														}
																														BgL_arg1353z00_1303
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1355z00_1305,
																															BgL_nbindingsz00_1276);
																													}
																													BgL_arg1354z00_1304 =
																														MAKE_YOUNG_PAIR
																														(BgL_varz00_1285,
																														BgL_ebdgsz00_1277);
																													{
																														obj_t
																															BgL_ebdgsz00_2879;
																														obj_t
																															BgL_nbindingsz00_2878;
																														obj_t
																															BgL_bindingsz00_2877;
																														BgL_bindingsz00_2877
																															=
																															BgL_arg1352z00_1302;
																														BgL_nbindingsz00_2878
																															=
																															BgL_arg1353z00_1303;
																														BgL_ebdgsz00_2879 =
																															BgL_arg1354z00_1304;
																														BgL_ebdgsz00_1277 =
																															BgL_ebdgsz00_2879;
																														BgL_nbindingsz00_1276
																															=
																															BgL_nbindingsz00_2878;
																														BgL_bindingsz00_1275
																															=
																															BgL_bindingsz00_2877;
																														goto
																															BgL_zc3z04anonymousza31337ze3z87_1278;
																													}
																												}
																											}
																										else
																											{	/* Eval/expdlet.scm 97 */
																												if (PAIRP
																													(BgL_ezd2111zd2_1291))
																													{	/* Eval/expdlet.scm 97 */
																														obj_t
																															BgL_carzd2121zd2_1294;
																														obj_t
																															BgL_cdrzd2122zd2_1295;
																														BgL_carzd2121zd2_1294
																															=
																															CAR
																															(BgL_ezd2111zd2_1291);
																														BgL_cdrzd2122zd2_1295
																															=
																															CDR
																															(BgL_ezd2111zd2_1291);
																														if (SYMBOLP
																															(BgL_carzd2121zd2_1294))
																															{	/* Eval/expdlet.scm 97 */
																																if (PAIRP
																																	(BgL_cdrzd2122zd2_1295))
																																	{	/* Eval/expdlet.scm 97 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd2122zd2_1295)))
																																			{	/* Eval/expdlet.scm 97 */
																																				obj_t
																																					BgL_arg1350z00_1300;
																																				BgL_arg1350z00_1300
																																					=
																																					CAR
																																					(BgL_cdrzd2122zd2_1295);
																																				{	/* Eval/expdlet.scm 103 */
																																					obj_t
																																						BgL_arg1356z00_2230;
																																					obj_t
																																						BgL_arg1357z00_2231;
																																					obj_t
																																						BgL_arg1359z00_2232;
																																					BgL_arg1356z00_2230
																																						=
																																						CDR(
																																						((obj_t) BgL_bindingsz00_1275));
																																					{	/* Eval/expdlet.scm 104 */
																																						obj_t
																																							BgL_arg1360z00_2233;
																																						{	/* Eval/expdlet.scm 104 */
																																							obj_t
																																								BgL_arg1361z00_2234;
																																							BgL_arg1361z00_2234
																																								=
																																								PROCEDURE_ENTRY
																																								(BgL_ez00_1270)
																																								(BgL_ez00_1270,
																																								BgL_arg1350z00_1300,
																																								BgL_ez00_1270,
																																								BEOA);
																																							{	/* Eval/expdlet.scm 88 */
																																								obj_t
																																									BgL_arg1333z00_2238;
																																								{	/* Eval/expdlet.scm 88 */
																																									obj_t
																																										BgL_list1334z00_2239;
																																									{	/* Eval/expdlet.scm 88 */
																																										obj_t
																																											BgL_arg1335z00_2240;
																																										BgL_arg1335z00_2240
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1361z00_2234,
																																											BNIL);
																																										BgL_list1334z00_2239
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_carzd2121zd2_1294,
																																											BgL_arg1335z00_2240);
																																									}
																																									BgL_arg1333z00_2238
																																										=
																																										BgL_list1334z00_2239;
																																								}
																																								BgL_arg1360z00_2233
																																									=
																																									BGl_evepairifyz00zz__prognz00
																																									(BgL_arg1333z00_2238,
																																									BgL_ezd2111zd2_1291);
																																							}
																																						}
																																						BgL_arg1357z00_2231
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1360z00_2233,
																																							BgL_nbindingsz00_1276);
																																					}
																																					BgL_arg1359z00_2232
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_carzd2121zd2_1294,
																																						BgL_ebdgsz00_1277);
																																					{
																																						obj_t
																																							BgL_ebdgsz00_2906;
																																						obj_t
																																							BgL_nbindingsz00_2905;
																																						obj_t
																																							BgL_bindingsz00_2904;
																																						BgL_bindingsz00_2904
																																							=
																																							BgL_arg1356z00_2230;
																																						BgL_nbindingsz00_2905
																																							=
																																							BgL_arg1357z00_2231;
																																						BgL_ebdgsz00_2906
																																							=
																																							BgL_arg1359z00_2232;
																																						BgL_ebdgsz00_1277
																																							=
																																							BgL_ebdgsz00_2906;
																																						BgL_nbindingsz00_1276
																																							=
																																							BgL_nbindingsz00_2905;
																																						BgL_bindingsz00_1275
																																							=
																																							BgL_bindingsz00_2904;
																																						goto
																																							BgL_zc3z04anonymousza31337ze3z87_1278;
																																					}
																																				}
																																			}
																																		else
																																			{	/* Eval/expdlet.scm 97 */
																																				BgL_resz00_1074
																																					=
																																					BGl_expandzd2errorzd2zz__expandz00
																																					(BGl_string2119z00zz__expander_letz00,
																																					BGl_string2121z00zz__expander_letz00,
																																					BgL_xz00_1269);
																																			}
																																	}
																																else
																																	{	/* Eval/expdlet.scm 97 */
																																		BgL_resz00_1074
																																			=
																																			BGl_expandzd2errorzd2zz__expandz00
																																			(BGl_string2119z00zz__expander_letz00,
																																			BGl_string2121z00zz__expander_letz00,
																																			BgL_xz00_1269);
																																	}
																															}
																														else
																															{	/* Eval/expdlet.scm 97 */
																																BgL_resz00_1074
																																	=
																																	BGl_expandzd2errorzd2zz__expandz00
																																	(BGl_string2119z00zz__expander_letz00,
																																	BGl_string2121z00zz__expander_letz00,
																																	BgL_xz00_1269);
																															}
																													}
																												else
																													{	/* Eval/expdlet.scm 97 */
																														BgL_resz00_1074 =
																															BGl_expandzd2errorzd2zz__expandz00
																															(BGl_string2119z00zz__expander_letz00,
																															BGl_string2121z00zz__expander_letz00,
																															BgL_xz00_1269);
																													}
																											}
																									}
																								}
																						}
																					}
																				else
																					{	/* Eval/expdlet.scm 110 */
																						BgL_resz00_1074 =
																							BGl_expandzd2errorzd2zz__expandz00
																							(BGl_string2119z00zz__expander_letz00,
																							BGl_string2122z00zz__expander_letz00,
																							BgL_xz00_3);
																					}
																			}
																		else
																			{	/* Eval/expdlet.scm 110 */
																				BgL_loopz00_1129 =
																					BgL_carzd2157zd2_1094;
																				BgL_bindingsz00_1130 =
																					CAR(BgL_cdrzd2158zd2_1095);
																				BgL_bodyz00_1131 =
																					BgL_cdrzd2165zd2_1098;
																				BgL_xz00_1132 = BgL_xz00_3;
																				BgL_ez00_1133 = BgL_ez00_1073;
																			BgL_zc3z04anonymousza31247ze3z87_1134:
																				{	/* Eval/expdlet.scm 66 */
																					bool_t BgL_test2164z00_2912;

																					{
																						obj_t BgL_l1085z00_1244;

																						BgL_l1085z00_1244 =
																							BgL_bindingsz00_1130;
																					BgL_zc3z04anonymousza31328ze3z87_1245:
																						if (NULLP
																							(BgL_l1085z00_1244))
																							{	/* Eval/expdlet.scm 66 */
																								BgL_test2164z00_2912 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Eval/expdlet.scm 66 */
																								bool_t BgL_test2166z00_2915;

																								{	/* Eval/expdlet.scm 67 */
																									obj_t BgL_ezd2103zd2_1253;

																									BgL_ezd2103zd2_1253 =
																										CAR(
																										((obj_t)
																											BgL_l1085z00_1244));
																									if (PAIRP
																										(BgL_ezd2103zd2_1253))
																										{	/* Eval/expdlet.scm 67 */
																											obj_t
																												BgL_cdrzd2105zd2_1255;
																											BgL_cdrzd2105zd2_1255 =
																												CDR
																												(BgL_ezd2103zd2_1253);
																											if (PAIRP
																												(BgL_cdrzd2105zd2_1255))
																												{	/* Eval/expdlet.scm 67 */
																													BgL_test2166z00_2915 =
																														NULLP(CDR
																														(BgL_cdrzd2105zd2_1255));
																												}
																											else
																												{	/* Eval/expdlet.scm 67 */
																													BgL_test2166z00_2915 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Eval/expdlet.scm 67 */
																											BgL_test2166z00_2915 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_test2166z00_2915)
																									{
																										obj_t BgL_l1085z00_2925;

																										BgL_l1085z00_2925 =
																											CDR(
																											((obj_t)
																												BgL_l1085z00_1244));
																										BgL_l1085z00_1244 =
																											BgL_l1085z00_2925;
																										goto
																											BgL_zc3z04anonymousza31328ze3z87_1245;
																									}
																								else
																									{	/* Eval/expdlet.scm 66 */
																										BgL_test2164z00_2912 =
																											((bool_t) 0);
																									}
																							}
																					}
																					if (BgL_test2164z00_2912)
																						{	/* Eval/expdlet.scm 72 */
																							obj_t BgL_varsz00_1154;

																							if (NULLP(BgL_bindingsz00_1130))
																								{	/* Eval/expdlet.scm 72 */
																									BgL_varsz00_1154 = BNIL;
																								}
																							else
																								{	/* Eval/expdlet.scm 72 */
																									obj_t BgL_head1090z00_1218;

																									{	/* Eval/expdlet.scm 72 */
																										obj_t BgL_res1941z00_2078;

																										BgL_res1941z00_2078 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1090z00_1218 =
																											BgL_res1941z00_2078;
																									}
																									{
																										obj_t BgL_l1088z00_1220;
																										obj_t BgL_tail1091z00_1221;

																										BgL_l1088z00_1220 =
																											BgL_bindingsz00_1130;
																										BgL_tail1091z00_1221 =
																											BgL_head1090z00_1218;
																									BgL_zc3z04anonymousza31311ze3z87_1222:
																										if (NULLP
																											(BgL_l1088z00_1220))
																											{	/* Eval/expdlet.scm 72 */
																												BgL_varsz00_1154 =
																													CDR
																													(BgL_head1090z00_1218);
																											}
																										else
																											{	/* Eval/expdlet.scm 72 */
																												obj_t
																													BgL_newtail1092z00_1224;
																												{	/* Eval/expdlet.scm 72 */
																													obj_t
																														BgL_arg1314z00_1226;
																													{	/* Eval/expdlet.scm 72 */
																														obj_t BgL_xz00_1227;

																														BgL_xz00_1227 =
																															CAR(
																															((obj_t)
																																BgL_l1088z00_1220));
																														{	/* Eval/expdlet.scm 73 */
																															bool_t
																																BgL_test2171z00_2936;
																															{	/* Eval/expdlet.scm 73 */
																																bool_t
																																	BgL_test2172z00_2937;
																																{	/* Eval/expdlet.scm 73 */
																																	obj_t
																																		BgL_tmpz00_2938;
																																	{	/* Eval/expdlet.scm 73 */
																																		obj_t
																																			BgL_pairz00_2085;
																																		BgL_pairz00_2085
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_xz00_1227));
																																		BgL_tmpz00_2938
																																			=
																																			CDR
																																			(BgL_pairz00_2085);
																																	}
																																	BgL_test2172z00_2937
																																		=
																																		NULLP
																																		(BgL_tmpz00_2938);
																																}
																																if (BgL_test2172z00_2937)
																																	{	/* Eval/expdlet.scm 74 */
																																		bool_t
																																			BgL_test2173z00_2943;
																																		{	/* Eval/expdlet.scm 74 */
																																			obj_t
																																				BgL_tmpz00_2944;
																																			{	/* Eval/expdlet.scm 74 */
																																				obj_t
																																					BgL_pairz00_2090;
																																				BgL_pairz00_2090
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_xz00_1227));
																																				BgL_tmpz00_2944
																																					=
																																					CAR
																																					(BgL_pairz00_2090);
																																			}
																																			BgL_test2173z00_2943
																																				=
																																				PAIRP
																																				(BgL_tmpz00_2944);
																																		}
																																		if (BgL_test2173z00_2943)
																																			{	/* Eval/expdlet.scm 74 */
																																				BgL_test2171z00_2936
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		else
																																			{	/* Eval/expdlet.scm 74 */
																																				BgL_test2171z00_2936
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																	}
																																else
																																	{	/* Eval/expdlet.scm 73 */
																																		BgL_test2171z00_2936
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															if (BgL_test2171z00_2936)
																																{	/* Eval/expdlet.scm 75 */
																																	obj_t
																																		BgL_arg1324z00_1235;
																																	{	/* Eval/expdlet.scm 75 */
																																		obj_t
																																			BgL_pairz00_2095;
																																		BgL_pairz00_2095
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_xz00_1227));
																																		BgL_arg1324z00_1235
																																			=
																																			CAR
																																			(BgL_pairz00_2095);
																																	}
																																	BgL_arg1314z00_1226
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BFALSE,
																																		BgL_arg1324z00_1235);
																																}
																															else
																																{	/* Eval/expdlet.scm 76 */
																																	obj_t
																																		BgL_arg1325z00_1236;
																																	{	/* Eval/expdlet.scm 76 */

																																		{	/* Eval/expdlet.scm 76 */

																																			BgL_arg1325z00_1236
																																				=
																																				BGl_gensymz00zz__r4_symbols_6_4z00
																																				(BFALSE);
																																		}
																																	}
																																	BgL_arg1314z00_1226
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BTRUE,
																																		BgL_arg1325z00_1236);
																																}
																														}
																													}
																													{	/* Eval/expdlet.scm 72 */
																														obj_t
																															BgL_res1945z00_2096;
																														BgL_res1945z00_2096
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1314z00_1226,
																															BNIL);
																														BgL_newtail1092z00_1224
																															=
																															BgL_res1945z00_2096;
																													}
																												}
																												SET_CDR
																													(BgL_tail1091z00_1221,
																													BgL_newtail1092z00_1224);
																												{	/* Eval/expdlet.scm 72 */
																													obj_t
																														BgL_arg1313z00_1225;
																													BgL_arg1313z00_1225 =
																														CDR(((obj_t)
																															BgL_l1088z00_1220));
																													{
																														obj_t
																															BgL_tail1091z00_2960;
																														obj_t
																															BgL_l1088z00_2959;
																														BgL_l1088z00_2959 =
																															BgL_arg1313z00_1225;
																														BgL_tail1091z00_2960
																															=
																															BgL_newtail1092z00_1224;
																														BgL_tail1091z00_1221
																															=
																															BgL_tail1091z00_2960;
																														BgL_l1088z00_1220 =
																															BgL_l1088z00_2959;
																														goto
																															BgL_zc3z04anonymousza31311ze3z87_1222;
																													}
																												}
																											}
																									}
																								}
																							{	/* Eval/expdlet.scm 72 */
																								obj_t BgL_auxz00_1155;

																								{	/* Eval/expdlet.scm 78 */
																									obj_t BgL_list1305z00_1207;

																									{	/* Eval/expdlet.scm 78 */
																										obj_t BgL_arg1306z00_1208;

																										BgL_arg1306z00_1208 =
																											MAKE_YOUNG_PAIR
																											(BgL_bindingsz00_1130,
																											BNIL);
																										BgL_list1305z00_1207 =
																											MAKE_YOUNG_PAIR
																											(BgL_varsz00_1154,
																											BgL_arg1306z00_1208);
																									}
																									BgL_auxz00_1155 =
																										BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																										(BGl_proc2113z00zz__expander_letz00,
																										BgL_list1305z00_1207);
																								}
																								{	/* Eval/expdlet.scm 78 */
																									obj_t BgL_recz00_1156;

																									{	/* Eval/expdlet.scm 81 */
																										obj_t BgL_arg1270z00_1161;

																										{	/* Eval/expdlet.scm 81 */
																											obj_t BgL_arg1271z00_1162;
																											obj_t BgL_arg1273z00_1163;

																											{	/* Eval/expdlet.scm 81 */
																												obj_t
																													BgL_arg1274z00_1164;
																												{	/* Eval/expdlet.scm 81 */
																													obj_t
																														BgL_arg1275z00_1165;
																													{	/* Eval/expdlet.scm 81 */
																														obj_t
																															BgL_arg1276z00_1166;
																														{	/* Eval/expdlet.scm 81 */
																															obj_t
																																BgL_arg1277z00_1167;
																															{	/* Eval/expdlet.scm 81 */
																																obj_t
																																	BgL_arg1280z00_1168;
																																obj_t
																																	BgL_arg1281z00_1169;
																																if (NULLP
																																	(BgL_bindingsz00_1130))
																																	{	/* Eval/expdlet.scm 81 */
																																		BgL_arg1280z00_1168
																																			= BNIL;
																																	}
																																else
																																	{	/* Eval/expdlet.scm 81 */
																																		obj_t
																																			BgL_head1095z00_1172;
																																		{	/* Eval/expdlet.scm 81 */
																																			obj_t
																																				BgL_arg1288z00_1184;
																																			{	/* Eval/expdlet.scm 81 */
																																				obj_t
																																					BgL_pairz00_2107;
																																				BgL_pairz00_2107
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_bindingsz00_1130));
																																				BgL_arg1288z00_1184
																																					=
																																					CAR
																																					(BgL_pairz00_2107);
																																			}
																																			{	/* Eval/expdlet.scm 81 */
																																				obj_t
																																					BgL_res1947z00_2108;
																																				BgL_res1947z00_2108
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1288z00_1184,
																																					BNIL);
																																				BgL_head1095z00_1172
																																					=
																																					BgL_res1947z00_2108;
																																			}
																																		}
																																		{	/* Eval/expdlet.scm 81 */
																																			obj_t
																																				BgL_g1098z00_1173;
																																			BgL_g1098z00_1173
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_bindingsz00_1130));
																																			{
																																				obj_t
																																					BgL_l1093z00_2133;
																																				obj_t
																																					BgL_tail1096z00_2134;
																																				BgL_l1093z00_2133
																																					=
																																					BgL_g1098z00_1173;
																																				BgL_tail1096z00_2134
																																					=
																																					BgL_head1095z00_1172;
																																			BgL_zc3z04anonymousza31283ze3z87_2132:
																																				if (NULLP(BgL_l1093z00_2133))
																																					{	/* Eval/expdlet.scm 81 */
																																						BgL_arg1280z00_1168
																																							=
																																							BgL_head1095z00_1172;
																																					}
																																				else
																																					{	/* Eval/expdlet.scm 81 */
																																						obj_t
																																							BgL_newtail1097z00_2141;
																																						{	/* Eval/expdlet.scm 81 */
																																							obj_t
																																								BgL_arg1286z00_2142;
																																							{	/* Eval/expdlet.scm 81 */
																																								obj_t
																																									BgL_pairz00_2147;
																																								BgL_pairz00_2147
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1093z00_2133));
																																								BgL_arg1286z00_2142
																																									=
																																									CAR
																																									(BgL_pairz00_2147);
																																							}
																																							{	/* Eval/expdlet.scm 81 */
																																								obj_t
																																									BgL_res1955z00_2148;
																																								BgL_res1955z00_2148
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1286z00_2142,
																																									BNIL);
																																								BgL_newtail1097z00_2141
																																									=
																																									BgL_res1955z00_2148;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1096z00_2134,
																																							BgL_newtail1097z00_2141);
																																						{	/* Eval/expdlet.scm 81 */
																																							obj_t
																																								BgL_arg1285z00_2144;
																																							BgL_arg1285z00_2144
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1093z00_2133));
																																							{
																																								obj_t
																																									BgL_tail1096z00_2982;
																																								obj_t
																																									BgL_l1093z00_2981;
																																								BgL_l1093z00_2981
																																									=
																																									BgL_arg1285z00_2144;
																																								BgL_tail1096z00_2982
																																									=
																																									BgL_newtail1097z00_2141;
																																								BgL_tail1096z00_2134
																																									=
																																									BgL_tail1096z00_2982;
																																								BgL_l1093z00_2133
																																									=
																																									BgL_l1093z00_2981;
																																								goto
																																									BgL_zc3z04anonymousza31283ze3z87_2132;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	}
																																BgL_arg1281z00_1169
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_expandzd2prognzd2zz__prognz00
																																	(BgL_bodyz00_1131),
																																	BNIL);
																																BgL_arg1277z00_1167
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1280z00_1168,
																																	BgL_arg1281z00_1169);
																															}
																															BgL_arg1276z00_1166
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2114z00zz__expander_letz00,
																																BgL_arg1277z00_1167);
																														}
																														BgL_arg1275z00_1165
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1276z00_1166,
																															BNIL);
																													}
																													BgL_arg1274z00_1164 =
																														MAKE_YOUNG_PAIR
																														(BgL_loopz00_1129,
																														BgL_arg1275z00_1165);
																												}
																												BgL_arg1271z00_1162 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1274z00_1164,
																													BNIL);
																											}
																											{	/* Eval/expdlet.scm 83 */
																												obj_t
																													BgL_arg1291z00_1187;
																												{	/* Eval/expdlet.scm 83 */
																													obj_t
																														BgL_arg1292z00_1188;
																													{	/* Eval/expdlet.scm 83 */
																														obj_t
																															BgL_arg1295z00_1189;
																														if (NULLP
																															(BgL_varsz00_1154))
																															{	/* Eval/expdlet.scm 83 */
																																BgL_arg1295z00_1189
																																	= BNIL;
																															}
																														else
																															{	/* Eval/expdlet.scm 83 */
																																obj_t
																																	BgL_head1101z00_1192;
																																{	/* Eval/expdlet.scm 83 */
																																	obj_t
																																		BgL_arg1302z00_1204;
																																	{	/* Eval/expdlet.scm 83 */
																																		obj_t
																																			BgL_pairz00_2153;
																																		BgL_pairz00_2153
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_varsz00_1154));
																																		BgL_arg1302z00_1204
																																			=
																																			CDR
																																			(BgL_pairz00_2153);
																																	}
																																	{	/* Eval/expdlet.scm 83 */
																																		obj_t
																																			BgL_res1957z00_2154;
																																		BgL_res1957z00_2154
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1302z00_1204,
																																			BNIL);
																																		BgL_head1101z00_1192
																																			=
																																			BgL_res1957z00_2154;
																																	}
																																}
																																{	/* Eval/expdlet.scm 83 */
																																	obj_t
																																		BgL_g1104z00_1193;
																																	BgL_g1104z00_1193
																																		=
																																		CDR(((obj_t)
																																			BgL_varsz00_1154));
																																	{
																																		obj_t
																																			BgL_l1099z00_2179;
																																		obj_t
																																			BgL_tail1102z00_2180;
																																		BgL_l1099z00_2179
																																			=
																																			BgL_g1104z00_1193;
																																		BgL_tail1102z00_2180
																																			=
																																			BgL_head1101z00_1192;
																																	BgL_zc3z04anonymousza31297ze3z87_2178:
																																		if (NULLP
																																			(BgL_l1099z00_2179))
																																			{	/* Eval/expdlet.scm 83 */
																																				BgL_arg1295z00_1189
																																					=
																																					BgL_head1101z00_1192;
																																			}
																																		else
																																			{	/* Eval/expdlet.scm 83 */
																																				obj_t
																																					BgL_newtail1103z00_2187;
																																				{	/* Eval/expdlet.scm 83 */
																																					obj_t
																																						BgL_arg1300z00_2188;
																																					{	/* Eval/expdlet.scm 83 */
																																						obj_t
																																							BgL_pairz00_2193;
																																						BgL_pairz00_2193
																																							=
																																							CAR
																																							(((obj_t) BgL_l1099z00_2179));
																																						BgL_arg1300z00_2188
																																							=
																																							CDR
																																							(BgL_pairz00_2193);
																																					}
																																					{	/* Eval/expdlet.scm 83 */
																																						obj_t
																																							BgL_res1963z00_2194;
																																						BgL_res1963z00_2194
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1300z00_2188,
																																							BNIL);
																																						BgL_newtail1103z00_2187
																																							=
																																							BgL_res1963z00_2194;
																																					}
																																				}
																																				SET_CDR
																																					(BgL_tail1102z00_2180,
																																					BgL_newtail1103z00_2187);
																																				{	/* Eval/expdlet.scm 83 */
																																					obj_t
																																						BgL_arg1299z00_2190;
																																					BgL_arg1299z00_2190
																																						=
																																						CDR(
																																						((obj_t) BgL_l1099z00_2179));
																																					{
																																						obj_t
																																							BgL_tail1102z00_3008;
																																						obj_t
																																							BgL_l1099z00_3007;
																																						BgL_l1099z00_3007
																																							=
																																							BgL_arg1299z00_2190;
																																						BgL_tail1102z00_3008
																																							=
																																							BgL_newtail1103z00_2187;
																																						BgL_tail1102z00_2180
																																							=
																																							BgL_tail1102z00_3008;
																																						BgL_l1099z00_2179
																																							=
																																							BgL_l1099z00_3007;
																																						goto
																																							BgL_zc3z04anonymousza31297ze3z87_2178;
																																					}
																																				}
																																			}
																																	}
																																}
																															}
																														BgL_arg1292z00_1188
																															=
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg1295z00_1189,
																															BNIL);
																													}
																													BgL_arg1291z00_1187 =
																														MAKE_YOUNG_PAIR
																														(BgL_loopz00_1129,
																														BgL_arg1292z00_1188);
																												}
																												BgL_arg1273z00_1163 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1291z00_1187,
																													BNIL);
																											}
																											BgL_arg1270z00_1161 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1271z00_1162,
																												BgL_arg1273z00_1163);
																										}
																										BgL_recz00_1156 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2116z00zz__expander_letz00,
																											BgL_arg1270z00_1161);
																									}
																									{	/* Eval/expdlet.scm 81 */
																										obj_t BgL_expz00_1157;

																										if (NULLP(BgL_auxz00_1155))
																											{	/* Eval/expdlet.scm 84 */
																												BgL_expz00_1157 =
																													BgL_recz00_1156;
																											}
																										else
																											{	/* Eval/expdlet.scm 84 */
																												obj_t
																													BgL_arg1263z00_1159;
																												{	/* Eval/expdlet.scm 84 */
																													obj_t
																														BgL_arg1268z00_1160;
																													BgL_arg1268z00_1160 =
																														MAKE_YOUNG_PAIR
																														(BgL_recz00_1156,
																														BNIL);
																													BgL_arg1263z00_1159 =
																														MAKE_YOUNG_PAIR
																														(BgL_auxz00_1155,
																														BgL_arg1268z00_1160);
																												}
																												BgL_expz00_1157 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2118z00zz__expander_letz00,
																													BgL_arg1263z00_1159);
																											}
																										{	/* Eval/expdlet.scm 84 */

																											BgL_resz00_1074 =
																												PROCEDURE_ENTRY
																												(BgL_ez00_1133)
																												(BgL_ez00_1133,
																												BgL_expz00_1157,
																												BgL_ez00_1133, BEOA);
																										}
																									}
																								}
																							}
																						}
																					else
																						{	/* Eval/expdlet.scm 66 */
																							BgL_resz00_1074 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2119z00zz__expander_letz00,
																								BGl_string2120z00zz__expander_letz00,
																								BgL_xz00_1132);
																						}
																				}
																			}
																	}
																else
																	{	/* Eval/expdlet.scm 110 */
																		BgL_resz00_1074 =
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string2119z00zz__expander_letz00,
																			BGl_string2122z00zz__expander_letz00,
																			BgL_xz00_3);
																	}
															}
														else
															{	/* Eval/expdlet.scm 110 */
																BgL_resz00_1074 =
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2119z00zz__expander_letz00,
																	BGl_string2122z00zz__expander_letz00,
																	BgL_xz00_3);
															}
													}
												else
													{	/* Eval/expdlet.scm 112 */
														obj_t BgL_arg1246z00_2261;

														BgL_arg1246z00_2261 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd2143zd2_1089);
														BgL_resz00_1074 =
															PROCEDURE_ENTRY(BgL_ez00_1073) (BgL_ez00_1073,
															BgL_arg1246z00_2261, BgL_ez00_1073, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 110 */
												obj_t BgL_carzd2203zd2_1106;
												obj_t BgL_cdrzd2204zd2_1107;

												BgL_carzd2203zd2_1106 =
													CAR(((obj_t) BgL_cdrzd2140zd2_1087));
												BgL_cdrzd2204zd2_1107 =
													CDR(((obj_t) BgL_cdrzd2140zd2_1087));
												if (SYMBOLP(BgL_carzd2203zd2_1106))
													{	/* Eval/expdlet.scm 110 */
														if (PAIRP(BgL_cdrzd2204zd2_1107))
															{	/* Eval/expdlet.scm 110 */
																obj_t BgL_cdrzd2211zd2_1110;

																BgL_cdrzd2211zd2_1110 =
																	CDR(BgL_cdrzd2204zd2_1107);
																if (NULLP(BgL_cdrzd2211zd2_1110))
																	{	/* Eval/expdlet.scm 110 */
																		obj_t BgL_carzd2225zd2_1113;

																		BgL_carzd2225zd2_1113 =
																			CAR(((obj_t) BgL_cdrzd2140zd2_1087));
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2225zd2_1113))
																			{	/* Eval/expdlet.scm 110 */
																				obj_t BgL_arg1232z00_1115;

																				BgL_arg1232z00_1115 =
																					CDR(((obj_t) BgL_cdrzd2140zd2_1087));
																				{
																					obj_t BgL_ez00_3054;
																					obj_t BgL_xz00_3053;
																					obj_t BgL_bodyz00_3052;
																					obj_t BgL_bindingsz00_3051;

																					BgL_bindingsz00_3051 =
																						BgL_carzd2225zd2_1113;
																					BgL_bodyz00_3052 =
																						BgL_arg1232z00_1115;
																					BgL_xz00_3053 = BgL_xz00_3;
																					BgL_ez00_3054 = BgL_ez00_1073;
																					BgL_ez00_1270 = BgL_ez00_3054;
																					BgL_xz00_1269 = BgL_xz00_3053;
																					BgL_bodyz00_1268 = BgL_bodyz00_3052;
																					BgL_bindingsz00_1267 =
																						BgL_bindingsz00_3051;
																					goto
																						BgL_zc3z04anonymousza31336ze3z87_1271;
																				}
																			}
																		else
																			{	/* Eval/expdlet.scm 110 */
																				BgL_resz00_1074 =
																					BGl_expandzd2errorzd2zz__expandz00
																					(BGl_string2119z00zz__expander_letz00,
																					BGl_string2122z00zz__expander_letz00,
																					BgL_xz00_3);
																			}
																	}
																else
																	{
																		obj_t BgL_ez00_3061;
																		obj_t BgL_xz00_3060;
																		obj_t BgL_bodyz00_3059;
																		obj_t BgL_bindingsz00_3057;
																		obj_t BgL_loopz00_3056;

																		BgL_loopz00_3056 = BgL_carzd2203zd2_1106;
																		BgL_bindingsz00_3057 =
																			CAR(BgL_cdrzd2204zd2_1107);
																		BgL_bodyz00_3059 = BgL_cdrzd2211zd2_1110;
																		BgL_xz00_3060 = BgL_xz00_3;
																		BgL_ez00_3061 = BgL_ez00_1073;
																		BgL_ez00_1133 = BgL_ez00_3061;
																		BgL_xz00_1132 = BgL_xz00_3060;
																		BgL_bodyz00_1131 = BgL_bodyz00_3059;
																		BgL_bindingsz00_1130 = BgL_bindingsz00_3057;
																		BgL_loopz00_1129 = BgL_loopz00_3056;
																		goto BgL_zc3z04anonymousza31247ze3z87_1134;
																	}
															}
														else
															{	/* Eval/expdlet.scm 110 */
																obj_t BgL_carzd2244zd2_1118;
																obj_t BgL_cdrzd2245zd2_1119;

																BgL_carzd2244zd2_1118 =
																	CAR(((obj_t) BgL_cdrzd2140zd2_1087));
																BgL_cdrzd2245zd2_1119 =
																	CDR(((obj_t) BgL_cdrzd2140zd2_1087));
																if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																	(BgL_carzd2244zd2_1118))
																	{	/* Eval/expdlet.scm 110 */
																		if (NULLP(BgL_cdrzd2245zd2_1119))
																			{	/* Eval/expdlet.scm 110 */
																				BgL_resz00_1074 =
																					BGl_expandzd2errorzd2zz__expandz00
																					(BGl_string2119z00zz__expander_letz00,
																					BGl_string2122z00zz__expander_letz00,
																					BgL_xz00_3);
																			}
																		else
																			{
																				obj_t BgL_ez00_3074;
																				obj_t BgL_xz00_3073;
																				obj_t BgL_bodyz00_3072;
																				obj_t BgL_bindingsz00_3071;

																				BgL_bindingsz00_3071 =
																					BgL_carzd2244zd2_1118;
																				BgL_bodyz00_3072 =
																					BgL_cdrzd2245zd2_1119;
																				BgL_xz00_3073 = BgL_xz00_3;
																				BgL_ez00_3074 = BgL_ez00_1073;
																				BgL_ez00_1270 = BgL_ez00_3074;
																				BgL_xz00_1269 = BgL_xz00_3073;
																				BgL_bodyz00_1268 = BgL_bodyz00_3072;
																				BgL_bindingsz00_1267 =
																					BgL_bindingsz00_3071;
																				goto
																					BgL_zc3z04anonymousza31336ze3z87_1271;
																			}
																	}
																else
																	{	/* Eval/expdlet.scm 110 */
																		BgL_resz00_1074 =
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string2119z00zz__expander_letz00,
																			BGl_string2122z00zz__expander_letz00,
																			BgL_xz00_3);
																	}
															}
													}
												else
													{	/* Eval/expdlet.scm 110 */
														obj_t BgL_carzd2261zd2_1123;
														obj_t BgL_cdrzd2262zd2_1124;

														BgL_carzd2261zd2_1123 =
															CAR(((obj_t) BgL_cdrzd2140zd2_1087));
														BgL_cdrzd2262zd2_1124 =
															CDR(((obj_t) BgL_cdrzd2140zd2_1087));
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd2261zd2_1123))
															{	/* Eval/expdlet.scm 110 */
																if (NULLP(BgL_cdrzd2262zd2_1124))
																	{	/* Eval/expdlet.scm 110 */
																		BgL_resz00_1074 =
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string2119z00zz__expander_letz00,
																			BGl_string2122z00zz__expander_letz00,
																			BgL_xz00_3);
																	}
																else
																	{
																		obj_t BgL_ez00_3088;
																		obj_t BgL_xz00_3087;
																		obj_t BgL_bodyz00_3086;
																		obj_t BgL_bindingsz00_3085;

																		BgL_bindingsz00_3085 =
																			BgL_carzd2261zd2_1123;
																		BgL_bodyz00_3086 = BgL_cdrzd2262zd2_1124;
																		BgL_xz00_3087 = BgL_xz00_3;
																		BgL_ez00_3088 = BgL_ez00_1073;
																		BgL_ez00_1270 = BgL_ez00_3088;
																		BgL_xz00_1269 = BgL_xz00_3087;
																		BgL_bodyz00_1268 = BgL_bodyz00_3086;
																		BgL_bindingsz00_1267 = BgL_bindingsz00_3085;
																		goto BgL_zc3z04anonymousza31336ze3z87_1271;
																	}
															}
														else
															{	/* Eval/expdlet.scm 110 */
																BgL_resz00_1074 =
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2119z00zz__expander_letz00,
																	BGl_string2122z00zz__expander_letz00,
																	BgL_xz00_3);
															}
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 110 */
										BgL_resz00_1074 =
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2119z00zz__expander_letz00,
											BGl_string2122z00zz__expander_letz00, BgL_xz00_3);
									}
							}
						else
							{	/* Eval/expdlet.scm 110 */
								BgL_resz00_1074 =
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2119z00zz__expander_letz00,
									BGl_string2122z00zz__expander_letz00, BgL_xz00_3);
							}
						{	/* Eval/expdlet.scm 110 */

							return BGl_evepairifyz00zz__prognz00(BgL_resz00_1074, BgL_xz00_3);
						}
					}
				}
			}
		}

	}



/* &expand-eval-let */
	obj_t BGl_z62expandzd2evalzd2letz62zz__expander_letz00(obj_t BgL_envz00_2792,
		obj_t BgL_xz00_2793, obj_t BgL_ez00_2794)
	{
		{	/* Eval/expdlet.scm 63 */
			return
				BGl_expandzd2evalzd2letz00zz__expander_letz00(BgL_xz00_2793,
				BgL_ez00_2794);
		}

	}



/* &<@anonymous:1307> */
	obj_t BGl_z62zc3z04anonymousza31307ze3ze5zz__expander_letz00(obj_t
		BgL_envz00_2795, obj_t BgL_xz00_2796, obj_t BgL_yz00_2797)
	{
		{	/* Eval/expdlet.scm 78 */
			{	/* Eval/expdlet.scm 79 */
				obj_t BgL__andtest_1039z00_2811;

				BgL__andtest_1039z00_2811 = CAR(((obj_t) BgL_xz00_2796));
				if (CBOOL(BgL__andtest_1039z00_2811))
					{	/* Eval/expdlet.scm 79 */
						obj_t BgL_arg1308z00_2812;
						obj_t BgL_arg1309z00_2813;

						BgL_arg1308z00_2812 = CDR(((obj_t) BgL_xz00_2796));
						BgL_arg1309z00_2813 = CDR(((obj_t) BgL_yz00_2797));
						return MAKE_YOUNG_PAIR(BgL_arg1308z00_2812, BgL_arg1309z00_2813);
					}
				else
					{	/* Eval/expdlet.scm 79 */
						return BFALSE;
					}
			}
		}

	}



/* expand-eval-let* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letza2za2zz__expander_letz00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		{	/* Eval/expdlet.scm 124 */
			{	/* Eval/expdlet.scm 129 */
				obj_t BgL_ez00_1317;

				BgL_ez00_1317 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_6);
				{	/* Eval/expdlet.scm 129 */
					obj_t BgL_resz00_1318;

					{
						obj_t BgL_bindingsz00_1321;
						obj_t BgL_bodyz00_1322;

						if (PAIRP(BgL_xz00_5))
							{	/* Eval/expdlet.scm 130 */
								obj_t BgL_cdrzd2296zd2_1327;

								BgL_cdrzd2296zd2_1327 = CDR(BgL_xz00_5);
								if (PAIRP(BgL_cdrzd2296zd2_1327))
									{	/* Eval/expdlet.scm 130 */
										obj_t BgL_cdrzd2299zd2_1329;

										BgL_cdrzd2299zd2_1329 = CDR(BgL_cdrzd2296zd2_1327);
										if (NULLP(CAR(BgL_cdrzd2296zd2_1327)))
											{	/* Eval/expdlet.scm 130 */
												if (NULLP(BgL_cdrzd2299zd2_1329))
													{	/* Eval/expdlet.scm 130 */
														BgL_resz00_1318 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2124z00zz__expander_letz00,
															BGl_string2120z00zz__expander_letz00, BgL_xz00_5);
													}
												else
													{	/* Eval/expdlet.scm 132 */
														obj_t BgL_arg1371z00_2333;

														BgL_arg1371z00_2333 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd2299zd2_1329);
														BgL_resz00_1318 =
															PROCEDURE_ENTRY(BgL_ez00_1317) (BgL_ez00_1317,
															BgL_arg1371z00_2333, BgL_ez00_1317, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 130 */
												obj_t BgL_carzd2314zd2_1334;
												obj_t BgL_cdrzd2315zd2_1335;

												BgL_carzd2314zd2_1334 =
													CAR(((obj_t) BgL_cdrzd2296zd2_1327));
												BgL_cdrzd2315zd2_1335 =
													CDR(((obj_t) BgL_cdrzd2296zd2_1327));
												if (PAIRP(BgL_carzd2314zd2_1334))
													{	/* Eval/expdlet.scm 130 */
														if (NULLP(BgL_cdrzd2315zd2_1335))
															{	/* Eval/expdlet.scm 130 */
																BgL_resz00_1318 =
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2124z00zz__expander_letz00,
																	BGl_string2120z00zz__expander_letz00,
																	BgL_xz00_5);
															}
														else
															{	/* Eval/expdlet.scm 130 */
																BgL_bindingsz00_1321 = BgL_carzd2314zd2_1334;
																BgL_bodyz00_1322 = BgL_cdrzd2315zd2_1335;
																{
																	obj_t BgL_bindingsz00_1343;
																	obj_t BgL_nbindingsz00_1344;
																	obj_t BgL_ebdgsz00_1345;

																	BgL_bindingsz00_1343 = BgL_bindingsz00_1321;
																	BgL_nbindingsz00_1344 = BNIL;
																	BgL_ebdgsz00_1345 = BNIL;
																BgL_zc3z04anonymousza31372ze3z87_1346:
																	if (NULLP(BgL_bindingsz00_1343))
																		{	/* Eval/expdlet.scm 139 */
																			obj_t BgL_arg1374z00_1348;

																			{	/* Eval/expdlet.scm 139 */
																				obj_t BgL_arg1375z00_1349;
																				obj_t BgL_arg1376z00_1350;

																				BgL_arg1375z00_1349 =
																					bgl_reverse_bang
																					(BgL_nbindingsz00_1344);
																				BgL_arg1376z00_1350 =
																					MAKE_YOUNG_PAIR
																					(BGl_z52withzd2lexicalz80zz__expandz00
																					(BgL_ebdgsz00_1345,
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_1322), BgL_ez00_1317,
																						BFALSE), BNIL);
																				BgL_arg1374z00_1348 =
																					MAKE_YOUNG_PAIR(BgL_arg1375z00_1349,
																					BgL_arg1376z00_1350);
																			}
																			BgL_resz00_1318 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2123z00zz__expander_letz00,
																				BgL_arg1374z00_1348);
																		}
																	else
																		{	/* Eval/expdlet.scm 142 */
																			bool_t BgL_test2195z00_3139;

																			{	/* Eval/expdlet.scm 142 */
																				obj_t BgL_tmpz00_3140;

																				BgL_tmpz00_3140 =
																					CAR(((obj_t) BgL_bindingsz00_1343));
																				BgL_test2195z00_3139 =
																					PAIRP(BgL_tmpz00_3140);
																			}
																			if (BgL_test2195z00_3139)
																				{	/* Eval/expdlet.scm 148 */
																					bool_t BgL_test2196z00_3144;

																					{	/* Eval/expdlet.scm 148 */
																						bool_t BgL_test2197z00_3145;

																						{	/* Eval/expdlet.scm 148 */
																							obj_t BgL_tmpz00_3146;

																							{	/* Eval/expdlet.scm 148 */
																								obj_t BgL_pairz00_2292;

																								BgL_pairz00_2292 =
																									CAR(
																									((obj_t)
																										BgL_bindingsz00_1343));
																								BgL_tmpz00_3146 =
																									CDR(BgL_pairz00_2292);
																							}
																							BgL_test2197z00_3145 =
																								PAIRP(BgL_tmpz00_3146);
																						}
																						if (BgL_test2197z00_3145)
																							{	/* Eval/expdlet.scm 149 */
																								bool_t BgL_test2198z00_3151;

																								{	/* Eval/expdlet.scm 149 */
																									obj_t BgL_tmpz00_3152;

																									{	/* Eval/expdlet.scm 149 */
																										obj_t BgL_pairz00_2299;

																										{	/* Eval/expdlet.scm 149 */
																											obj_t BgL_pairz00_2298;

																											BgL_pairz00_2298 =
																												CAR(
																												((obj_t)
																													BgL_bindingsz00_1343));
																											BgL_pairz00_2299 =
																												CDR(BgL_pairz00_2298);
																										}
																										BgL_tmpz00_3152 =
																											CDR(BgL_pairz00_2299);
																									}
																									BgL_test2198z00_3151 =
																										NULLP(BgL_tmpz00_3152);
																								}
																								if (BgL_test2198z00_3151)
																									{	/* Eval/expdlet.scm 149 */
																										BgL_test2196z00_3144 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/expdlet.scm 149 */
																										BgL_test2196z00_3144 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Eval/expdlet.scm 148 */
																								BgL_test2196z00_3144 =
																									((bool_t) 1);
																							}
																					}
																					if (BgL_test2196z00_3144)
																						{	/* Eval/expdlet.scm 148 */
																							BgL_resz00_1318 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2124z00zz__expander_letz00,
																								BGl_string2125z00zz__expander_letz00,
																								BgL_xz00_5);
																						}
																					else
																						{	/* Eval/expdlet.scm 152 */
																							obj_t BgL_arg1388z00_1362;
																							obj_t BgL_arg1389z00_1363;
																							obj_t BgL_arg1390z00_1364;

																							BgL_arg1388z00_1362 =
																								CDR(
																								((obj_t) BgL_bindingsz00_1343));
																							{	/* Eval/expdlet.scm 153 */
																								obj_t BgL_arg1391z00_1365;

																								{	/* Eval/expdlet.scm 153 */
																									obj_t BgL_arg1392z00_1366;
																									obj_t BgL_arg1393z00_1367;
																									obj_t BgL_arg1394z00_1368;

																									{	/* Eval/expdlet.scm 153 */
																										obj_t BgL_pairz00_2305;

																										BgL_pairz00_2305 =
																											CAR(
																											((obj_t)
																												BgL_bindingsz00_1343));
																										BgL_arg1392z00_1366 =
																											CAR(BgL_pairz00_2305);
																									}
																									{	/* Eval/expdlet.scm 156 */
																										obj_t BgL_arg1395z00_1369;

																										{	/* Eval/expdlet.scm 156 */
																											obj_t BgL_arg1396z00_1370;

																											{	/* Eval/expdlet.scm 156 */
																												obj_t BgL_pairz00_2309;

																												BgL_pairz00_2309 =
																													CAR(
																													((obj_t)
																														BgL_bindingsz00_1343));
																												BgL_arg1396z00_1370 =
																													CDR(BgL_pairz00_2309);
																											}
																											BgL_arg1395z00_1369 =
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_arg1396z00_1370);
																										}
																										BgL_arg1393z00_1367 =
																											BGl_z52withzd2lexicalz80zz__expandz00
																											(BgL_ebdgsz00_1345,
																											BgL_arg1395z00_1369,
																											BgL_ez00_1317, BFALSE);
																									}
																									BgL_arg1394z00_1368 =
																										CAR(
																										((obj_t)
																											BgL_bindingsz00_1343));
																									{	/* Eval/expdlet.scm 127 */
																										obj_t BgL_arg1409z00_2311;

																										{	/* Eval/expdlet.scm 127 */
																											obj_t
																												BgL_list1410z00_2312;
																											{	/* Eval/expdlet.scm 127 */
																												obj_t
																													BgL_arg1411z00_2313;
																												BgL_arg1411z00_2313 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1393z00_1367,
																													BNIL);
																												BgL_list1410z00_2312 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1392z00_1366,
																													BgL_arg1411z00_2313);
																											}
																											BgL_arg1409z00_2311 =
																												BgL_list1410z00_2312;
																										}
																										BgL_arg1391z00_1365 =
																											BGl_evepairifyz00zz__prognz00
																											(BgL_arg1409z00_2311,
																											BgL_arg1394z00_1368);
																									}
																								}
																								BgL_arg1389z00_1363 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1391z00_1365,
																									BgL_nbindingsz00_1344);
																							}
																							{	/* Eval/expdlet.scm 161 */
																								obj_t BgL_arg1397z00_1371;

																								{	/* Eval/expdlet.scm 161 */
																									obj_t BgL_pairz00_2318;

																									BgL_pairz00_2318 =
																										CAR(
																										((obj_t)
																											BgL_bindingsz00_1343));
																									BgL_arg1397z00_1371 =
																										CAR(BgL_pairz00_2318);
																								}
																								BgL_arg1390z00_1364 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1397z00_1371,
																									BgL_ebdgsz00_1345);
																							}
																							{
																								obj_t BgL_ebdgsz00_3181;
																								obj_t BgL_nbindingsz00_3180;
																								obj_t BgL_bindingsz00_3179;

																								BgL_bindingsz00_3179 =
																									BgL_arg1388z00_1362;
																								BgL_nbindingsz00_3180 =
																									BgL_arg1389z00_1363;
																								BgL_ebdgsz00_3181 =
																									BgL_arg1390z00_1364;
																								BgL_ebdgsz00_1345 =
																									BgL_ebdgsz00_3181;
																								BgL_nbindingsz00_1344 =
																									BgL_nbindingsz00_3180;
																								BgL_bindingsz00_1343 =
																									BgL_bindingsz00_3179;
																								goto
																									BgL_zc3z04anonymousza31372ze3z87_1346;
																							}
																						}
																				}
																			else
																				{	/* Eval/expdlet.scm 143 */
																					obj_t BgL_arg1400z00_1376;
																					obj_t BgL_arg1401z00_1377;
																					obj_t BgL_arg1402z00_1378;

																					BgL_arg1400z00_1376 =
																						CDR(((obj_t) BgL_bindingsz00_1343));
																					{	/* Eval/expdlet.scm 144 */
																						obj_t BgL_arg1404z00_1379;

																						{	/* Eval/expdlet.scm 144 */
																							obj_t BgL_arg1405z00_1380;

																							BgL_arg1405z00_1380 =
																								CAR(
																								((obj_t) BgL_bindingsz00_1343));
																							{	/* Eval/expdlet.scm 127 */
																								obj_t BgL_arg1409z00_2321;

																								{	/* Eval/expdlet.scm 127 */
																									obj_t BgL_list1410z00_2322;

																									{	/* Eval/expdlet.scm 127 */
																										obj_t BgL_arg1411z00_2323;

																										BgL_arg1411z00_2323 =
																											MAKE_YOUNG_PAIR(BUNSPEC,
																											BNIL);
																										BgL_list1410z00_2322 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1405z00_1380,
																											BgL_arg1411z00_2323);
																									}
																									BgL_arg1409z00_2321 =
																										BgL_list1410z00_2322;
																								}
																								BgL_arg1404z00_1379 =
																									BGl_evepairifyz00zz__prognz00
																									(BgL_arg1409z00_2321,
																									BgL_bindingsz00_1343);
																							}
																						}
																						BgL_arg1401z00_1377 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1404z00_1379,
																							BgL_nbindingsz00_1344);
																					}
																					{	/* Eval/expdlet.scm 147 */
																						obj_t BgL_arg1406z00_1381;

																						BgL_arg1406z00_1381 =
																							CAR(
																							((obj_t) BgL_bindingsz00_1343));
																						BgL_arg1402z00_1378 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1406z00_1381,
																							BgL_ebdgsz00_1345);
																					}
																					{
																						obj_t BgL_ebdgsz00_3195;
																						obj_t BgL_nbindingsz00_3194;
																						obj_t BgL_bindingsz00_3193;

																						BgL_bindingsz00_3193 =
																							BgL_arg1400z00_1376;
																						BgL_nbindingsz00_3194 =
																							BgL_arg1401z00_1377;
																						BgL_ebdgsz00_3195 =
																							BgL_arg1402z00_1378;
																						BgL_ebdgsz00_1345 =
																							BgL_ebdgsz00_3195;
																						BgL_nbindingsz00_1344 =
																							BgL_nbindingsz00_3194;
																						BgL_bindingsz00_1343 =
																							BgL_bindingsz00_3193;
																						goto
																							BgL_zc3z04anonymousza31372ze3z87_1346;
																					}
																				}
																		}
																}
															}
													}
												else
													{	/* Eval/expdlet.scm 130 */
														BgL_resz00_1318 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2124z00zz__expander_letz00,
															BGl_string2120z00zz__expander_letz00, BgL_xz00_5);
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 130 */
										BgL_resz00_1318 =
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2124z00zz__expander_letz00,
											BGl_string2120z00zz__expander_letz00, BgL_xz00_5);
									}
							}
						else
							{	/* Eval/expdlet.scm 130 */
								BgL_resz00_1318 =
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2124z00zz__expander_letz00,
									BGl_string2120z00zz__expander_letz00, BgL_xz00_5);
							}
					}
					{	/* Eval/expdlet.scm 130 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_1318, BgL_xz00_5);
					}
				}
			}
		}

	}



/* &expand-eval-let* */
	obj_t BGl_z62expandzd2evalzd2letza2zc0zz__expander_letz00(obj_t
		BgL_envz00_2798, obj_t BgL_xz00_2799, obj_t BgL_ez00_2800)
	{
		{	/* Eval/expdlet.scm 124 */
			return
				BGl_expandzd2evalzd2letza2za2zz__expander_letz00(BgL_xz00_2799,
				BgL_ez00_2800);
		}

	}



/* expand-eval-letrec */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letrecz00zz__expander_letz00(obj_t
		BgL_xz00_7, obj_t BgL_ez00_8)
	{
		{	/* Eval/expdlet.scm 169 */
			{	/* Eval/expdlet.scm 170 */
				obj_t BgL_ez00_1392;

				BgL_ez00_1392 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_8);
				{	/* Eval/expdlet.scm 170 */
					obj_t BgL_resz00_1393;

					{
						obj_t BgL_bindingsz00_1396;
						obj_t BgL_bodyz00_1397;

						if (PAIRP(BgL_xz00_7))
							{	/* Eval/expdlet.scm 171 */
								obj_t BgL_cdrzd2337zd2_1402;

								BgL_cdrzd2337zd2_1402 = CDR(BgL_xz00_7);
								if (PAIRP(BgL_cdrzd2337zd2_1402))
									{	/* Eval/expdlet.scm 171 */
										obj_t BgL_cdrzd2340zd2_1404;

										BgL_cdrzd2340zd2_1404 = CDR(BgL_cdrzd2337zd2_1402);
										if (NULLP(CAR(BgL_cdrzd2337zd2_1402)))
											{	/* Eval/expdlet.scm 171 */
												if (NULLP(BgL_cdrzd2340zd2_1404))
													{	/* Eval/expdlet.scm 171 */
														BgL_resz00_1393 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2117z00zz__expander_letz00,
															BGl_string2120z00zz__expander_letz00, BgL_xz00_7);
													}
												else
													{	/* Eval/expdlet.scm 173 */
														obj_t BgL_arg1420z00_2375;

														BgL_arg1420z00_2375 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd2340zd2_1404);
														BgL_resz00_1393 =
															PROCEDURE_ENTRY(BgL_ez00_1392) (BgL_ez00_1392,
															BgL_arg1420z00_2375, BgL_ez00_1392, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 171 */
												obj_t BgL_carzd2355zd2_1409;
												obj_t BgL_cdrzd2356zd2_1410;

												BgL_carzd2355zd2_1409 =
													CAR(((obj_t) BgL_cdrzd2337zd2_1402));
												BgL_cdrzd2356zd2_1410 =
													CDR(((obj_t) BgL_cdrzd2337zd2_1402));
												if (PAIRP(BgL_carzd2355zd2_1409))
													{	/* Eval/expdlet.scm 171 */
														if (NULLP(BgL_cdrzd2356zd2_1410))
															{	/* Eval/expdlet.scm 171 */
																BgL_resz00_1393 =
																	BGl_expandzd2errorzd2zz__expandz00
																	(BGl_string2117z00zz__expander_letz00,
																	BGl_string2120z00zz__expander_letz00,
																	BgL_xz00_7);
															}
														else
															{	/* Eval/expdlet.scm 171 */
																BgL_bindingsz00_1396 = BgL_carzd2355zd2_1409;
																BgL_bodyz00_1397 = BgL_cdrzd2356zd2_1410;
																{
																	obj_t BgL_bindingsz00_1417;
																	obj_t BgL_nbindingsz00_1418;

																	BgL_bindingsz00_1417 = BgL_bindingsz00_1396;
																	BgL_nbindingsz00_1418 = BNIL;
																BgL_zc3z04anonymousza31421ze3z87_1419:
																	if (NULLP(BgL_bindingsz00_1417))
																		{	/* Eval/expdlet.scm 179 */
																			obj_t BgL_nbindingsz00_1421;

																			BgL_nbindingsz00_1421 =
																				bgl_reverse_bang(BgL_nbindingsz00_1418);
																			{	/* Eval/expdlet.scm 179 */
																				obj_t BgL_ebodyz00_1422;

																				BgL_ebodyz00_1422 =
																					BGl_z52withzd2lexicalz80zz__expandz00
																					(BGl_bindingszd2ze3listz31zz__evutilsz00
																					(BgL_bindingsz00_1417),
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1397), BgL_ez00_1392,
																					BFALSE);
																				{	/* Eval/expdlet.scm 180 */

																					{	/* Eval/expdlet.scm 183 */
																						obj_t BgL_arg1424z00_1423;

																						{	/* Eval/expdlet.scm 183 */
																							obj_t BgL_arg1425z00_1424;

																							BgL_arg1425z00_1424 =
																								MAKE_YOUNG_PAIR
																								(BgL_ebodyz00_1422, BNIL);
																							BgL_arg1424z00_1423 =
																								MAKE_YOUNG_PAIR
																								(BgL_nbindingsz00_1421,
																								BgL_arg1425z00_1424);
																						}
																						BgL_resz00_1393 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2116z00zz__expander_letz00,
																							BgL_arg1424z00_1423);
																					}
																				}
																			}
																		}
																	else
																		{	/* Eval/expdlet.scm 184 */
																			bool_t BgL_test2206z00_3238;

																			{	/* Eval/expdlet.scm 184 */
																				obj_t BgL_tmpz00_3239;

																				BgL_tmpz00_3239 =
																					CAR(((obj_t) BgL_bindingsz00_1417));
																				BgL_test2206z00_3238 =
																					PAIRP(BgL_tmpz00_3239);
																			}
																			if (BgL_test2206z00_3238)
																				{	/* Eval/expdlet.scm 188 */
																					bool_t BgL_test2207z00_3243;

																					{	/* Eval/expdlet.scm 188 */
																						bool_t BgL_test2208z00_3244;

																						{	/* Eval/expdlet.scm 188 */
																							obj_t BgL_tmpz00_3245;

																							{	/* Eval/expdlet.scm 188 */
																								obj_t BgL_pairz00_2346;

																								BgL_pairz00_2346 =
																									CAR(
																									((obj_t)
																										BgL_bindingsz00_1417));
																								BgL_tmpz00_3245 =
																									CDR(BgL_pairz00_2346);
																							}
																							BgL_test2208z00_3244 =
																								PAIRP(BgL_tmpz00_3245);
																						}
																						if (BgL_test2208z00_3244)
																							{	/* Eval/expdlet.scm 189 */
																								bool_t BgL_test2209z00_3250;

																								{	/* Eval/expdlet.scm 189 */
																									obj_t BgL_tmpz00_3251;

																									{	/* Eval/expdlet.scm 189 */
																										obj_t BgL_pairz00_2353;

																										{	/* Eval/expdlet.scm 189 */
																											obj_t BgL_pairz00_2352;

																											BgL_pairz00_2352 =
																												CAR(
																												((obj_t)
																													BgL_bindingsz00_1417));
																											BgL_pairz00_2353 =
																												CDR(BgL_pairz00_2352);
																										}
																										BgL_tmpz00_3251 =
																											CDR(BgL_pairz00_2353);
																									}
																									BgL_test2209z00_3250 =
																										NULLP(BgL_tmpz00_3251);
																								}
																								if (BgL_test2209z00_3250)
																									{	/* Eval/expdlet.scm 189 */
																										BgL_test2207z00_3243 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/expdlet.scm 189 */
																										BgL_test2207z00_3243 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Eval/expdlet.scm 188 */
																								BgL_test2207z00_3243 =
																									((bool_t) 1);
																							}
																					}
																					if (BgL_test2207z00_3243)
																						{	/* Eval/expdlet.scm 188 */
																							BgL_resz00_1393 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string2117z00zz__expander_letz00,
																								BGl_string2121z00zz__expander_letz00,
																								BgL_xz00_7);
																						}
																					else
																						{	/* Eval/expdlet.scm 192 */
																							obj_t BgL_arg1437z00_1436;
																							obj_t BgL_arg1438z00_1437;

																							BgL_arg1437z00_1436 =
																								CDR(
																								((obj_t) BgL_bindingsz00_1417));
																							{	/* Eval/expdlet.scm 193 */
																								obj_t BgL_arg1439z00_1438;

																								{	/* Eval/expdlet.scm 193 */
																									obj_t BgL_arg1440z00_1439;
																									obj_t BgL_arg1441z00_1440;

																									{	/* Eval/expdlet.scm 193 */
																										obj_t BgL_pairz00_2359;

																										BgL_pairz00_2359 =
																											CAR(
																											((obj_t)
																												BgL_bindingsz00_1417));
																										BgL_arg1440z00_1439 =
																											CAR(BgL_pairz00_2359);
																									}
																									{	/* Eval/expdlet.scm 194 */
																										obj_t BgL_arg1444z00_1443;

																										{	/* Eval/expdlet.scm 194 */
																											obj_t BgL_arg1445z00_1444;

																											{	/* Eval/expdlet.scm 194 */
																												obj_t BgL_pairz00_2363;

																												BgL_pairz00_2363 =
																													CAR(
																													((obj_t)
																														BgL_bindingsz00_1417));
																												BgL_arg1445z00_1444 =
																													CDR(BgL_pairz00_2363);
																											}
																											BgL_arg1444z00_1443 =
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_arg1445z00_1444);
																										}
																										BgL_arg1441z00_1440 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_1392)
																											(BgL_ez00_1392,
																											BgL_arg1444z00_1443,
																											BgL_ez00_1392, BEOA);
																									}
																									{	/* Eval/expdlet.scm 193 */
																										obj_t BgL_list1442z00_1441;

																										{	/* Eval/expdlet.scm 193 */
																											obj_t BgL_arg1443z00_1442;

																											BgL_arg1443z00_1442 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1441z00_1440,
																												BNIL);
																											BgL_list1442z00_1441 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1440z00_1439,
																												BgL_arg1443z00_1442);
																										}
																										BgL_arg1439z00_1438 =
																											BgL_list1442z00_1441;
																									}
																								}
																								BgL_arg1438z00_1437 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1439z00_1438,
																									BgL_nbindingsz00_1418);
																							}
																							{
																								obj_t BgL_nbindingsz00_3276;
																								obj_t BgL_bindingsz00_3275;

																								BgL_bindingsz00_3275 =
																									BgL_arg1437z00_1436;
																								BgL_nbindingsz00_3276 =
																									BgL_arg1438z00_1437;
																								BgL_nbindingsz00_1418 =
																									BgL_nbindingsz00_3276;
																								BgL_bindingsz00_1417 =
																									BgL_bindingsz00_3275;
																								goto
																									BgL_zc3z04anonymousza31421ze3z87_1419;
																							}
																						}
																				}
																			else
																				{	/* Eval/expdlet.scm 185 */
																					obj_t BgL_arg1449z00_1449;
																					obj_t BgL_arg1451z00_1450;

																					BgL_arg1449z00_1449 =
																						CDR(((obj_t) BgL_bindingsz00_1417));
																					{	/* Eval/expdlet.scm 186 */
																						obj_t BgL_arg1452z00_1451;

																						{	/* Eval/expdlet.scm 186 */
																							obj_t BgL_arg1453z00_1452;

																							BgL_arg1453z00_1452 =
																								CAR(
																								((obj_t) BgL_bindingsz00_1417));
																							{	/* Eval/expdlet.scm 186 */
																								obj_t BgL_list1454z00_1453;

																								{	/* Eval/expdlet.scm 186 */
																									obj_t BgL_arg1455z00_1454;

																									BgL_arg1455z00_1454 =
																										MAKE_YOUNG_PAIR(BUNSPEC,
																										BNIL);
																									BgL_list1454z00_1453 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1453z00_1452,
																										BgL_arg1455z00_1454);
																								}
																								BgL_arg1452z00_1451 =
																									BgL_list1454z00_1453;
																							}
																						}
																						BgL_arg1451z00_1450 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1452z00_1451,
																							BgL_nbindingsz00_1418);
																					}
																					{
																						obj_t BgL_nbindingsz00_3285;
																						obj_t BgL_bindingsz00_3284;

																						BgL_bindingsz00_3284 =
																							BgL_arg1449z00_1449;
																						BgL_nbindingsz00_3285 =
																							BgL_arg1451z00_1450;
																						BgL_nbindingsz00_1418 =
																							BgL_nbindingsz00_3285;
																						BgL_bindingsz00_1417 =
																							BgL_bindingsz00_3284;
																						goto
																							BgL_zc3z04anonymousza31421ze3z87_1419;
																					}
																				}
																		}
																}
															}
													}
												else
													{	/* Eval/expdlet.scm 171 */
														BgL_resz00_1393 =
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string2117z00zz__expander_letz00,
															BGl_string2120z00zz__expander_letz00, BgL_xz00_7);
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 171 */
										BgL_resz00_1393 =
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string2117z00zz__expander_letz00,
											BGl_string2120z00zz__expander_letz00, BgL_xz00_7);
									}
							}
						else
							{	/* Eval/expdlet.scm 171 */
								BgL_resz00_1393 =
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string2117z00zz__expander_letz00,
									BGl_string2120z00zz__expander_letz00, BgL_xz00_7);
							}
					}
					{	/* Eval/expdlet.scm 171 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_1393, BgL_xz00_7);
					}
				}
			}
		}

	}



/* &expand-eval-letrec */
	obj_t BGl_z62expandzd2evalzd2letrecz62zz__expander_letz00(obj_t
		BgL_envz00_2801, obj_t BgL_xz00_2802, obj_t BgL_ez00_2803)
	{
		{	/* Eval/expdlet.scm 169 */
			return
				BGl_expandzd2evalzd2letrecz00zz__expander_letz00(BgL_xz00_2802,
				BgL_ez00_2803);
		}

	}



/* expand-eval-letrec* */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t BgL_xz00_9,
		obj_t BgL_ez00_10)
	{
		{	/* Eval/expdlet.scm 203 */
			{
				obj_t BgL_idz00_1591;

				{	/* Eval/expdlet.scm 222 */
					obj_t BgL_ez00_1459;

					BgL_ez00_1459 =
						BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_10);
					{	/* Eval/expdlet.scm 222 */
						obj_t BgL_resz00_1460;

						{
							obj_t BgL_bindingsz00_1463;
							obj_t BgL_bodyz00_1464;

							if (PAIRP(BgL_xz00_9))
								{	/* Eval/expdlet.scm 223 */
									obj_t BgL_cdrzd2378zd2_1469;

									BgL_cdrzd2378zd2_1469 = CDR(BgL_xz00_9);
									if (PAIRP(BgL_cdrzd2378zd2_1469))
										{	/* Eval/expdlet.scm 223 */
											obj_t BgL_cdrzd2381zd2_1471;

											BgL_cdrzd2381zd2_1471 = CDR(BgL_cdrzd2378zd2_1469);
											if (NULLP(CAR(BgL_cdrzd2378zd2_1469)))
												{	/* Eval/expdlet.scm 223 */
													if (NULLP(BgL_cdrzd2381zd2_1471))
														{	/* Eval/expdlet.scm 223 */
															BgL_resz00_1460 =
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string2126z00zz__expander_letz00,
																BGl_string2120z00zz__expander_letz00,
																BgL_xz00_9);
														}
													else
														{	/* Eval/expdlet.scm 225 */
															obj_t BgL_arg1465z00_2493;

															BgL_arg1465z00_2493 =
																BGl_expandzd2prognzd2zz__prognz00
																(BgL_cdrzd2381zd2_1471);
															BgL_resz00_1460 =
																PROCEDURE_ENTRY(BgL_ez00_1459) (BgL_ez00_1459,
																BgL_arg1465z00_2493, BgL_ez00_1459, BEOA);
														}
												}
											else
												{	/* Eval/expdlet.scm 223 */
													obj_t BgL_carzd2396zd2_1476;
													obj_t BgL_cdrzd2397zd2_1477;

													BgL_carzd2396zd2_1476 =
														CAR(((obj_t) BgL_cdrzd2378zd2_1469));
													BgL_cdrzd2397zd2_1477 =
														CDR(((obj_t) BgL_cdrzd2378zd2_1469));
													if (PAIRP(BgL_carzd2396zd2_1476))
														{	/* Eval/expdlet.scm 223 */
															if (NULLP(BgL_cdrzd2397zd2_1477))
																{	/* Eval/expdlet.scm 223 */
																	BgL_resz00_1460 =
																		BGl_expandzd2errorzd2zz__expandz00
																		(BGl_string2126z00zz__expander_letz00,
																		BGl_string2120z00zz__expander_letz00,
																		BgL_xz00_9);
																}
															else
																{	/* Eval/expdlet.scm 223 */
																	BgL_bindingsz00_1463 = BgL_carzd2396zd2_1476;
																	BgL_bodyz00_1464 = BgL_cdrzd2397zd2_1477;
																	{
																		obj_t BgL_l1105z00_1483;

																		BgL_l1105z00_1483 = BgL_bindingsz00_1463;
																	BgL_zc3z04anonymousza31466ze3z87_1484:
																		if (PAIRP(BgL_l1105z00_1483))
																			{	/* Eval/expdlet.scm 228 */
																				{	/* Eval/expdlet.scm 229 */
																					obj_t BgL_bz00_1486;

																					BgL_bz00_1486 =
																						CAR(BgL_l1105z00_1483);
																					{	/* Eval/expdlet.scm 229 */
																						bool_t BgL_test2217z00_3322;

																						if (PAIRP(BgL_bz00_1486))
																							{	/* Eval/expdlet.scm 230 */
																								bool_t BgL_test2219z00_3325;

																								{	/* Eval/expdlet.scm 230 */
																									obj_t BgL_tmpz00_3326;

																									BgL_tmpz00_3326 =
																										CAR(BgL_bz00_1486);
																									BgL_test2219z00_3325 =
																										SYMBOLP(BgL_tmpz00_3326);
																								}
																								if (BgL_test2219z00_3325)
																									{	/* Eval/expdlet.scm 231 */
																										obj_t BgL_tmpz00_3329;

																										BgL_tmpz00_3329 =
																											CDR(BgL_bz00_1486);
																										BgL_test2217z00_3322 =
																											PAIRP(BgL_tmpz00_3329);
																									}
																								else
																									{	/* Eval/expdlet.scm 230 */
																										BgL_test2217z00_3322 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Eval/expdlet.scm 229 */
																								BgL_test2217z00_3322 =
																									((bool_t) 0);
																							}
																						if (BgL_test2217z00_3322)
																							{	/* Eval/expdlet.scm 229 */
																								BFALSE;
																							}
																						else
																							{	/* Eval/expdlet.scm 229 */
																								BGl_expandzd2errorzd2zz__expandz00
																									(BGl_string2126z00zz__expander_letz00,
																									BGl_string2120z00zz__expander_letz00,
																									BgL_xz00_9);
																							}
																					}
																				}
																				{
																					obj_t BgL_l1105z00_3333;

																					BgL_l1105z00_3333 =
																						CDR(BgL_l1105z00_1483);
																					BgL_l1105z00_1483 = BgL_l1105z00_3333;
																					goto
																						BgL_zc3z04anonymousza31466ze3z87_1484;
																				}
																			}
																		else
																			{	/* Eval/expdlet.scm 228 */
																				((bool_t) 1);
																			}
																	}
																	{	/* Eval/expdlet.scm 234 */
																		bool_t BgL_test2220z00_3335;

																		{
																			obj_t BgL_l1107z00_1577;

																			BgL_l1107z00_1577 = BgL_bindingsz00_1463;
																		BgL_zc3z04anonymousza31534ze3z87_1578:
																			if (NULLP(BgL_l1107z00_1577))
																				{	/* Eval/expdlet.scm 234 */
																					BgL_test2220z00_3335 = ((bool_t) 1);
																				}
																			else
																				{	/* Eval/expdlet.scm 234 */
																					bool_t BgL_test2222z00_3338;

																					{	/* Eval/expdlet.scm 234 */
																						obj_t BgL_arg1536z00_1583;

																						BgL_arg1536z00_1583 =
																							CAR(((obj_t) BgL_l1107z00_1577));
																						{	/* Eval/expdlet.scm 206 */
																							bool_t BgL_test2223z00_3341;

																							{	/* Eval/expdlet.scm 206 */
																								obj_t BgL_tmpz00_3342;

																								{	/* Eval/expdlet.scm 206 */
																									obj_t BgL_pairz00_2447;

																									BgL_pairz00_2447 =
																										CDR(
																										((obj_t)
																											BgL_arg1536z00_1583));
																									BgL_tmpz00_3342 =
																										CAR(BgL_pairz00_2447);
																								}
																								BgL_test2223z00_3341 =
																									PAIRP(BgL_tmpz00_3342);
																							}
																							if (BgL_test2223z00_3341)
																								{	/* Eval/expdlet.scm 206 */
																									obj_t BgL_tmpz00_3347;

																									{	/* Eval/expdlet.scm 206 */
																										obj_t BgL_pairz00_2453;

																										{	/* Eval/expdlet.scm 206 */
																											obj_t BgL_pairz00_2452;

																											BgL_pairz00_2452 =
																												CDR(
																												((obj_t)
																													BgL_arg1536z00_1583));
																											BgL_pairz00_2453 =
																												CAR(BgL_pairz00_2452);
																										}
																										BgL_tmpz00_3347 =
																											CAR(BgL_pairz00_2453);
																									}
																									BgL_test2222z00_3338 =
																										(BgL_tmpz00_3347 ==
																										BGl_symbol2114z00zz__expander_letz00);
																								}
																							else
																								{	/* Eval/expdlet.scm 206 */
																									BgL_test2222z00_3338 =
																										((bool_t) 0);
																								}
																						}
																					}
																					if (BgL_test2222z00_3338)
																						{	/* Eval/expdlet.scm 234 */
																							obj_t BgL_arg1535z00_1582;

																							BgL_arg1535z00_1582 =
																								CDR(
																								((obj_t) BgL_l1107z00_1577));
																							{
																								obj_t BgL_l1107z00_3355;

																								BgL_l1107z00_3355 =
																									BgL_arg1535z00_1582;
																								BgL_l1107z00_1577 =
																									BgL_l1107z00_3355;
																								goto
																									BgL_zc3z04anonymousza31534ze3z87_1578;
																							}
																						}
																					else
																						{	/* Eval/expdlet.scm 234 */
																							BgL_test2220z00_3335 =
																								((bool_t) 0);
																						}
																				}
																		}
																		if (BgL_test2220z00_3335)
																			{	/* Eval/expdlet.scm 238 */
																				obj_t BgL_arg1483z00_1509;

																				{	/* Eval/expdlet.scm 238 */
																					obj_t BgL_arg1484z00_1510;

																					{	/* Eval/expdlet.scm 238 */
																						obj_t BgL_arg1485z00_1511;

																						{	/* Eval/expdlet.scm 238 */
																							obj_t BgL_arg1486z00_1512;
																							obj_t BgL_arg1487z00_1513;

																							{	/* Eval/expdlet.scm 238 */
																								obj_t BgL_head1112z00_1516;

																								{	/* Eval/expdlet.scm 238 */
																									obj_t BgL_res2035z00_2456;

																									BgL_res2035z00_2456 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1112z00_1516 =
																										BgL_res2035z00_2456;
																								}
																								{
																									obj_t BgL_l1110z00_1518;
																									obj_t BgL_tail1113z00_1519;

																									BgL_l1110z00_1518 =
																										BgL_bindingsz00_1463;
																									BgL_tail1113z00_1519 =
																										BgL_head1112z00_1516;
																								BgL_zc3z04anonymousza31489ze3z87_1520:
																									if (NULLP
																										(BgL_l1110z00_1518))
																										{	/* Eval/expdlet.scm 238 */
																											BgL_arg1486z00_1512 =
																												CDR
																												(BgL_head1112z00_1516);
																										}
																									else
																										{	/* Eval/expdlet.scm 238 */
																											obj_t
																												BgL_newtail1114z00_1522;
																											{	/* Eval/expdlet.scm 238 */
																												obj_t
																													BgL_arg1492z00_1524;
																												{	/* Eval/expdlet.scm 238 */
																													obj_t BgL_bz00_1525;

																													BgL_bz00_1525 =
																														CAR(
																														((obj_t)
																															BgL_l1110z00_1518));
																													{	/* Eval/expdlet.scm 239 */
																														obj_t
																															BgL_arg1493z00_1526;
																														obj_t
																															BgL_arg1494z00_1527;
																														BgL_arg1493z00_1526
																															=
																															CAR(((obj_t)
																																BgL_bz00_1525));
																														{	/* Eval/expdlet.scm 240 */
																															obj_t
																																BgL_arg1497z00_1530;
																															{	/* Eval/expdlet.scm 240 */
																																obj_t
																																	BgL_arg1498z00_1531;
																																BgL_arg1498z00_1531
																																	=
																																	CDR(((obj_t)
																																		BgL_bz00_1525));
																																BgL_arg1497z00_1530
																																	=
																																	BGl_expandzd2prognzd2zz__prognz00
																																	(BgL_arg1498z00_1531);
																															}
																															BgL_arg1494z00_1527
																																=
																																PROCEDURE_ENTRY
																																(BgL_ez00_1459)
																																(BgL_ez00_1459,
																																BgL_arg1497z00_1530,
																																BgL_ez00_1459,
																																BEOA);
																														}
																														{	/* Eval/expdlet.scm 239 */
																															obj_t
																																BgL_list1495z00_1528;
																															{	/* Eval/expdlet.scm 239 */
																																obj_t
																																	BgL_arg1496z00_1529;
																																BgL_arg1496z00_1529
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1494z00_1527,
																																	BNIL);
																																BgL_list1495z00_1528
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1493z00_1526,
																																	BgL_arg1496z00_1529);
																															}
																															BgL_arg1492z00_1524
																																=
																																BgL_list1495z00_1528;
																														}
																													}
																												}
																												{	/* Eval/expdlet.scm 238 */
																													obj_t
																														BgL_res2038z00_2463;
																													BgL_res2038z00_2463 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1492z00_1524,
																														BNIL);
																													BgL_newtail1114z00_1522
																														=
																														BgL_res2038z00_2463;
																												}
																											}
																											SET_CDR
																												(BgL_tail1113z00_1519,
																												BgL_newtail1114z00_1522);
																											{	/* Eval/expdlet.scm 238 */
																												obj_t
																													BgL_arg1491z00_1523;
																												BgL_arg1491z00_1523 =
																													CDR(((obj_t)
																														BgL_l1110z00_1518));
																												{
																													obj_t
																														BgL_tail1113z00_3379;
																													obj_t
																														BgL_l1110z00_3378;
																													BgL_l1110z00_3378 =
																														BgL_arg1491z00_1523;
																													BgL_tail1113z00_3379 =
																														BgL_newtail1114z00_1522;
																													BgL_tail1113z00_1519 =
																														BgL_tail1113z00_3379;
																													BgL_l1110z00_1518 =
																														BgL_l1110z00_3378;
																													goto
																														BgL_zc3z04anonymousza31489ze3z87_1520;
																												}
																											}
																										}
																								}
																							}
																							BgL_arg1487z00_1513 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_bodyz00_1464, BNIL);
																							BgL_arg1485z00_1511 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1486z00_1512,
																								BgL_arg1487z00_1513);
																						}
																						BgL_arg1484z00_1510 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2116z00zz__expander_letz00,
																							BgL_arg1485z00_1511);
																					}
																					BgL_arg1483z00_1509 =
																						BGl_evepairifyz00zz__prognz00
																						(BgL_arg1484z00_1510, BgL_xz00_9);
																				}
																				BgL_resz00_1460 =
																					PROCEDURE_ENTRY(BgL_ez00_1459)
																					(BgL_ez00_1459, BgL_arg1483z00_1509,
																					BgL_ez00_1459, BEOA);
																			}
																		else
																			{	/* Eval/expdlet.scm 246 */
																				obj_t BgL_arg1500z00_1533;

																				{	/* Eval/expdlet.scm 246 */
																					obj_t BgL_arg1502z00_1534;

																					{	/* Eval/expdlet.scm 246 */
																						obj_t BgL_arg1505z00_1535;

																						{	/* Eval/expdlet.scm 246 */
																							obj_t BgL_arg1506z00_1536;
																							obj_t BgL_arg1507z00_1537;

																							{	/* Eval/expdlet.scm 246 */
																								obj_t BgL_head1117z00_1540;

																								{	/* Eval/expdlet.scm 246 */
																									obj_t BgL_res2040z00_2467;

																									BgL_res2040z00_2467 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1117z00_1540 =
																										BgL_res2040z00_2467;
																								}
																								{
																									obj_t BgL_l1115z00_1542;
																									obj_t BgL_tail1118z00_1543;

																									BgL_l1115z00_1542 =
																										BgL_bindingsz00_1463;
																									BgL_tail1118z00_1543 =
																										BgL_head1117z00_1540;
																								BgL_zc3z04anonymousza31509ze3z87_1544:
																									if (NULLP
																										(BgL_l1115z00_1542))
																										{	/* Eval/expdlet.scm 246 */
																											BgL_arg1506z00_1536 =
																												CDR
																												(BgL_head1117z00_1540);
																										}
																									else
																										{	/* Eval/expdlet.scm 246 */
																											obj_t
																												BgL_newtail1119z00_1546;
																											{	/* Eval/expdlet.scm 246 */
																												obj_t
																													BgL_arg1512z00_1548;
																												{	/* Eval/expdlet.scm 246 */
																													obj_t BgL_bz00_1549;

																													BgL_bz00_1549 =
																														CAR(
																														((obj_t)
																															BgL_l1115z00_1542));
																													{	/* Eval/expdlet.scm 247 */
																														obj_t
																															BgL_arg1513z00_1550;
																														BgL_arg1513z00_1550
																															=
																															CAR(((obj_t)
																																BgL_bz00_1549));
																														{	/* Eval/expdlet.scm 247 */
																															obj_t
																																BgL_list1514z00_1551;
																															{	/* Eval/expdlet.scm 247 */
																																obj_t
																																	BgL_arg1515z00_1552;
																																BgL_arg1515z00_1552
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BUNSPEC,
																																	BNIL);
																																BgL_list1514z00_1551
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1513z00_1550,
																																	BgL_arg1515z00_1552);
																															}
																															BgL_arg1512z00_1548
																																=
																																BgL_list1514z00_1551;
																														}
																													}
																												}
																												{	/* Eval/expdlet.scm 246 */
																													obj_t
																														BgL_res2043z00_2473;
																													BgL_res2043z00_2473 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1512z00_1548,
																														BNIL);
																													BgL_newtail1119z00_1546
																														=
																														BgL_res2043z00_2473;
																												}
																											}
																											SET_CDR
																												(BgL_tail1118z00_1543,
																												BgL_newtail1119z00_1546);
																											{	/* Eval/expdlet.scm 246 */
																												obj_t
																													BgL_arg1511z00_1547;
																												BgL_arg1511z00_1547 =
																													CDR(((obj_t)
																														BgL_l1115z00_1542));
																												{
																													obj_t
																														BgL_tail1118z00_3404;
																													obj_t
																														BgL_l1115z00_3403;
																													BgL_l1115z00_3403 =
																														BgL_arg1511z00_1547;
																													BgL_tail1118z00_3404 =
																														BgL_newtail1119z00_1546;
																													BgL_tail1118z00_1543 =
																														BgL_tail1118z00_3404;
																													BgL_l1115z00_1542 =
																														BgL_l1115z00_3403;
																													goto
																														BgL_zc3z04anonymousza31509ze3z87_1544;
																												}
																											}
																										}
																								}
																							}
																							{	/* Eval/expdlet.scm 249 */
																								obj_t BgL_arg1516z00_1554;
																								obj_t BgL_arg1518z00_1555;

																								{	/* Eval/expdlet.scm 249 */
																									obj_t BgL_head1122z00_1558;

																									{	/* Eval/expdlet.scm 249 */
																										obj_t BgL_res2045z00_2477;

																										BgL_res2045z00_2477 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1122z00_1558 =
																											BgL_res2045z00_2477;
																									}
																									{
																										obj_t BgL_l1120z00_1560;
																										obj_t BgL_tail1123z00_1561;

																										BgL_l1120z00_1560 =
																											BgL_bindingsz00_1463;
																										BgL_tail1123z00_1561 =
																											BgL_head1122z00_1558;
																									BgL_zc3z04anonymousza31520ze3z87_1562:
																										if (NULLP
																											(BgL_l1120z00_1560))
																											{	/* Eval/expdlet.scm 249 */
																												BgL_arg1516z00_1554 =
																													CDR
																													(BgL_head1122z00_1558);
																											}
																										else
																											{	/* Eval/expdlet.scm 249 */
																												obj_t
																													BgL_newtail1124z00_1564;
																												{	/* Eval/expdlet.scm 249 */
																													obj_t
																														BgL_arg1524z00_1566;
																													{	/* Eval/expdlet.scm 249 */
																														obj_t BgL_bz00_1567;

																														BgL_bz00_1567 =
																															CAR(
																															((obj_t)
																																BgL_l1120z00_1560));
																														{	/* Eval/expdlet.scm 250 */
																															obj_t
																																BgL_arg1525z00_1568;
																															{	/* Eval/expdlet.scm 250 */
																																obj_t
																																	BgL_arg1526z00_1569;
																																obj_t
																																	BgL_arg1528z00_1570;
																																{	/* Eval/expdlet.scm 250 */
																																	obj_t
																																		BgL_arg1530z00_1571;
																																	BgL_arg1530z00_1571
																																		=
																																		CAR(((obj_t)
																																			BgL_bz00_1567));
																																	BgL_idz00_1591
																																		=
																																		BgL_arg1530z00_1571;
																																	{	/* Eval/expdlet.scm 209 */
																																		obj_t
																																			BgL_stringz00_1593;
																																		{	/* Eval/expdlet.scm 209 */
																																			obj_t
																																				BgL_res2015z00_2397;
																																			{	/* Eval/expdlet.scm 209 */
																																				obj_t
																																					BgL_arg1766z00_2396;
																																				BgL_arg1766z00_2396
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_idz00_1591);
																																				BgL_res2015z00_2397
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1766z00_2396);
																																			}
																																			BgL_stringz00_1593
																																				=
																																				BgL_res2015z00_2397;
																																		}
																																		{	/* Eval/expdlet.scm 209 */
																																			long
																																				BgL_lenz00_1594;
																																			BgL_lenz00_1594
																																				=
																																				STRING_LENGTH
																																				(BgL_stringz00_1593);
																																			{	/* Eval/expdlet.scm 210 */

																																				{
																																					long
																																						BgL_walkerz00_1596;
																																					BgL_walkerz00_1596
																																						=
																																						(
																																						(long)
																																						0);
																																				BgL_zc3z04anonymousza31544ze3z87_1597:
																																					if (
																																						(BgL_walkerz00_1596
																																							==
																																							BgL_lenz00_1594))
																																						{	/* Eval/expdlet.scm 213 */
																																							BgL_arg1526z00_1569
																																								=
																																								BgL_idz00_1591;
																																						}
																																					else
																																						{	/* Eval/expdlet.scm 215 */
																																							bool_t
																																								BgL_test2228z00_3418;
																																							if ((STRING_REF(BgL_stringz00_1593, BgL_walkerz00_1596) == ((unsigned char) ':')))
																																								{	/* Eval/expdlet.scm 215 */
																																									if ((BgL_walkerz00_1596 < (BgL_lenz00_1594 - ((long) 1))))
																																										{	/* Eval/expdlet.scm 216 */
																																											BgL_test2228z00_3418
																																												=
																																												(STRING_REF
																																												(BgL_stringz00_1593,
																																													(BgL_walkerz00_1596
																																														+
																																														((long) 1))) == ((unsigned char) ':'));
																																										}
																																									else
																																										{	/* Eval/expdlet.scm 216 */
																																											BgL_test2228z00_3418
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Eval/expdlet.scm 215 */
																																									BgL_test2228z00_3418
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							if (BgL_test2228z00_3418)
																																								{	/* Eval/expdlet.scm 215 */
																																									BgL_arg1526z00_1569
																																										=
																																										bstring_to_symbol
																																										(c_substring
																																										(BgL_stringz00_1593,
																																											((long) 0), BgL_walkerz00_1596));
																																								}
																																							else
																																								{
																																									long
																																										BgL_walkerz00_3430;
																																									BgL_walkerz00_3430
																																										=
																																										(BgL_walkerz00_1596
																																										+
																																										((long) 1));
																																									BgL_walkerz00_1596
																																										=
																																										BgL_walkerz00_3430;
																																									goto
																																										BgL_zc3z04anonymousza31544ze3z87_1597;
																																								}
																																						}
																																				}
																																			}
																																		}
																																	}
																																}
																																{	/* Eval/expdlet.scm 251 */
																																	obj_t
																																		BgL_arg1531z00_1572;
																																	{	/* Eval/expdlet.scm 251 */
																																		obj_t
																																			BgL_arg1532z00_1573;
																																		{	/* Eval/expdlet.scm 251 */
																																			obj_t
																																				BgL_arg1533z00_1574;
																																			BgL_arg1533z00_1574
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_bz00_1567));
																																			BgL_arg1532z00_1573
																																				=
																																				BGl_expandzd2prognzd2zz__prognz00
																																				(BgL_arg1533z00_1574);
																																		}
																																		BgL_arg1531z00_1572
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_ez00_1459)
																																			(BgL_ez00_1459,
																																			BgL_arg1532z00_1573,
																																			BgL_ez00_1459,
																																			BEOA);
																																	}
																																	BgL_arg1528z00_1570
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1531z00_1572,
																																		BNIL);
																																}
																																BgL_arg1525z00_1568
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1526z00_1569,
																																	BgL_arg1528z00_1570);
																															}
																															BgL_arg1524z00_1566
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2127z00zz__expander_letz00,
																																BgL_arg1525z00_1568);
																														}
																													}
																													{	/* Eval/expdlet.scm 249 */
																														obj_t
																															BgL_res2047z00_2483;
																														BgL_res2047z00_2483
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1524z00_1566,
																															BNIL);
																														BgL_newtail1124z00_1564
																															=
																															BgL_res2047z00_2483;
																													}
																												}
																												SET_CDR
																													(BgL_tail1123z00_1561,
																													BgL_newtail1124z00_1564);
																												{	/* Eval/expdlet.scm 249 */
																													obj_t
																														BgL_arg1523z00_1565;
																													BgL_arg1523z00_1565 =
																														CDR(((obj_t)
																															BgL_l1120z00_1560));
																													{
																														obj_t
																															BgL_tail1123z00_3448;
																														obj_t
																															BgL_l1120z00_3447;
																														BgL_l1120z00_3447 =
																															BgL_arg1523z00_1565;
																														BgL_tail1123z00_3448
																															=
																															BgL_newtail1124z00_1564;
																														BgL_tail1123z00_1561
																															=
																															BgL_tail1123z00_3448;
																														BgL_l1120z00_1560 =
																															BgL_l1120z00_3447;
																														goto
																															BgL_zc3z04anonymousza31520ze3z87_1562;
																													}
																												}
																											}
																									}
																								}
																								BgL_arg1518z00_1555 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_bodyz00_1464, BNIL);
																								BgL_arg1507z00_1537 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1516z00_1554,
																									BgL_arg1518z00_1555);
																							}
																							BgL_arg1505z00_1535 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1506z00_1536,
																								BgL_arg1507z00_1537);
																						}
																						BgL_arg1502z00_1534 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2118z00zz__expander_letz00,
																							BgL_arg1505z00_1535);
																					}
																					BgL_arg1500z00_1533 =
																						BGl_evepairifyz00zz__prognz00
																						(BgL_arg1502z00_1534, BgL_xz00_9);
																				}
																				BgL_resz00_1460 =
																					PROCEDURE_ENTRY(BgL_ez00_1459)
																					(BgL_ez00_1459, BgL_arg1500z00_1533,
																					BgL_ez00_1459, BEOA);
																			}
																	}
																}
														}
													else
														{	/* Eval/expdlet.scm 223 */
															BgL_resz00_1460 =
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string2126z00zz__expander_letz00,
																BGl_string2120z00zz__expander_letz00,
																BgL_xz00_9);
														}
												}
										}
									else
										{	/* Eval/expdlet.scm 223 */
											BgL_resz00_1460 =
												BGl_expandzd2errorzd2zz__expandz00
												(BGl_string2126z00zz__expander_letz00,
												BGl_string2120z00zz__expander_letz00, BgL_xz00_9);
										}
								}
							else
								{	/* Eval/expdlet.scm 223 */
									BgL_resz00_1460 =
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2126z00zz__expander_letz00,
										BGl_string2120z00zz__expander_letz00, BgL_xz00_9);
								}
						}
						{	/* Eval/expdlet.scm 223 */

							return BGl_evepairifyz00zz__prognz00(BgL_resz00_1460, BgL_xz00_9);
						}
					}
				}
			}
		}

	}



/* &expand-eval-letrec* */
	obj_t BGl_z62expandzd2evalzd2letrecza2zc0zz__expander_letz00(obj_t
		BgL_envz00_2804, obj_t BgL_xz00_2805, obj_t BgL_ez00_2806)
	{
		{	/* Eval/expdlet.scm 203 */
			return
				BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(BgL_xz00_2805,
				BgL_ez00_2806);
		}

	}



/* expand-eval-labels */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2labelsz00zz__expander_letz00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		{	/* Eval/expdlet.scm 263 */
			{	/* Eval/expdlet.scm 264 */
				obj_t BgL_resz00_1619;

				{
					obj_t BgL_bodyz00_1620;
					obj_t BgL_bindingsz00_1622;
					obj_t BgL_bodyz00_1623;

					if (PAIRP(BgL_xz00_11))
						{	/* Eval/expdlet.scm 264 */
							obj_t BgL_cdrzd2419zd2_1628;

							BgL_cdrzd2419zd2_1628 = CDR(BgL_xz00_11);
							if (PAIRP(BgL_cdrzd2419zd2_1628))
								{	/* Eval/expdlet.scm 264 */
									obj_t BgL_cdrzd2422zd2_1630;

									BgL_cdrzd2422zd2_1630 = CDR(BgL_cdrzd2419zd2_1628);
									if (NULLP(CAR(BgL_cdrzd2419zd2_1628)))
										{	/* Eval/expdlet.scm 264 */
											if (NULLP(BgL_cdrzd2422zd2_1630))
												{	/* Eval/expdlet.scm 264 */
													BgL_resz00_1619 =
														BGl_expandzd2errorzd2zz__expandz00
														(BGl_string2129z00zz__expander_letz00,
														BGl_string2120z00zz__expander_letz00, BgL_xz00_11);
												}
											else
												{	/* Eval/expdlet.scm 264 */
													BgL_bodyz00_1620 = BgL_cdrzd2422zd2_1630;
													{	/* Eval/expdlet.scm 266 */
														obj_t BgL_arg1575z00_1639;

														{	/* Eval/expdlet.scm 266 */
															obj_t BgL_arg1577z00_1640;

															{	/* Eval/expdlet.scm 266 */
																obj_t BgL_arg1578z00_1641;

																{	/* Eval/expdlet.scm 266 */
																	obj_t BgL_arg1579z00_1642;

																	BgL_arg1579z00_1642 =
																		MAKE_YOUNG_PAIR
																		(BGl_expandzd2prognzd2zz__prognz00
																		(BgL_bodyz00_1620), BNIL);
																	BgL_arg1578z00_1641 =
																		MAKE_YOUNG_PAIR(BNIL, BgL_arg1579z00_1642);
																}
																BgL_arg1577z00_1640 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2114z00zz__expander_letz00,
																	BgL_arg1578z00_1641);
															}
															BgL_arg1575z00_1639 =
																MAKE_YOUNG_PAIR(BgL_arg1577z00_1640, BNIL);
														}
														BgL_resz00_1619 =
															PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
															BgL_arg1575z00_1639, BgL_ez00_12, BEOA);
													}
												}
										}
									else
										{	/* Eval/expdlet.scm 264 */
											obj_t BgL_cdrzd2438zd2_1635;

											BgL_cdrzd2438zd2_1635 =
												CDR(((obj_t) BgL_cdrzd2419zd2_1628));
											if (NULLP(BgL_cdrzd2438zd2_1635))
												{	/* Eval/expdlet.scm 264 */
													BgL_resz00_1619 =
														BGl_expandzd2errorzd2zz__expandz00
														(BGl_string2129z00zz__expander_letz00,
														BGl_string2120z00zz__expander_letz00, BgL_xz00_11);
												}
											else
												{	/* Eval/expdlet.scm 264 */
													obj_t BgL_arg1573z00_1637;

													BgL_arg1573z00_1637 =
														CAR(((obj_t) BgL_cdrzd2419zd2_1628));
													BgL_bindingsz00_1622 = BgL_arg1573z00_1637;
													BgL_bodyz00_1623 = BgL_cdrzd2438zd2_1635;
													{	/* Eval/expdlet.scm 268 */
														obj_t BgL_newz00_1644;

														BgL_newz00_1644 =
															BGl_loopze70ze7zz__expander_letz00(BgL_xz00_11,
															BgL_bindingsz00_1622);
														{	/* Eval/expdlet.scm 283 */
															obj_t BgL_arg1582z00_1645;

															{	/* Eval/expdlet.scm 283 */
																obj_t BgL_arg1583z00_1646;

																BgL_arg1583z00_1646 =
																	MAKE_YOUNG_PAIR(BgL_newz00_1644,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_bodyz00_1623, BNIL));
																BgL_arg1582z00_1645 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2116z00zz__expander_letz00,
																	BgL_arg1583z00_1646);
															}
															BgL_resz00_1619 =
																PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
																BgL_arg1582z00_1645, BgL_ez00_12, BEOA);
														}
													}
												}
										}
								}
							else
								{	/* Eval/expdlet.scm 264 */
									BgL_resz00_1619 =
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2129z00zz__expander_letz00,
										BGl_string2120z00zz__expander_letz00, BgL_xz00_11);
								}
						}
					else
						{	/* Eval/expdlet.scm 264 */
							BgL_resz00_1619 =
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string2129z00zz__expander_letz00,
								BGl_string2120z00zz__expander_letz00, BgL_xz00_11);
						}
				}
				return BGl_evepairifyz00zz__prognz00(BgL_resz00_1619, BgL_xz00_11);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expander_letz00(obj_t BgL_xz00_2810,
		obj_t BgL_bindingsz00_1649)
	{
		{	/* Eval/expdlet.scm 268 */
			if (NULLP(BgL_bindingsz00_1649))
				{	/* Eval/expdlet.scm 270 */
					return BNIL;
				}
			else
				{	/* Eval/expdlet.scm 270 */
					if (PAIRP(BgL_bindingsz00_1649))
						{	/* Eval/expdlet.scm 275 */
							obj_t BgL_ezd2452zd2_1658;

							BgL_ezd2452zd2_1658 = CAR(BgL_bindingsz00_1649);
							if (PAIRP(BgL_ezd2452zd2_1658))
								{	/* Eval/expdlet.scm 275 */
									obj_t BgL_cdrzd2460zd2_1660;

									BgL_cdrzd2460zd2_1660 = CDR(BgL_ezd2452zd2_1658);
									if (PAIRP(BgL_cdrzd2460zd2_1660))
										{	/* Eval/expdlet.scm 275 */
											obj_t BgL_arg1592z00_1662;
											obj_t BgL_arg1593z00_1663;
											obj_t BgL_arg1596z00_1664;

											BgL_arg1592z00_1662 = CAR(BgL_ezd2452zd2_1658);
											BgL_arg1593z00_1663 = CAR(BgL_cdrzd2460zd2_1660);
											BgL_arg1596z00_1664 = CDR(BgL_cdrzd2460zd2_1660);
											{	/* Eval/expdlet.scm 277 */
												obj_t BgL_arg1597z00_2516;
												obj_t BgL_arg1598z00_2517;

												{	/* Eval/expdlet.scm 277 */
													obj_t BgL_arg1599z00_2518;

													{	/* Eval/expdlet.scm 277 */
														obj_t BgL_arg1602z00_2519;

														{	/* Eval/expdlet.scm 277 */
															obj_t BgL_arg1603z00_2520;

															BgL_arg1603z00_2520 =
																MAKE_YOUNG_PAIR(BgL_arg1593z00_1663,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1596z00_1664, BNIL));
															BgL_arg1602z00_2519 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2114z00zz__expander_letz00,
																BgL_arg1603z00_2520);
														}
														BgL_arg1599z00_2518 =
															MAKE_YOUNG_PAIR(BgL_arg1602z00_2519, BNIL);
													}
													BgL_arg1597z00_2516 =
														MAKE_YOUNG_PAIR(BgL_arg1592z00_1662,
														BgL_arg1599z00_2518);
												}
												BgL_arg1598z00_2517 =
													BGl_loopze70ze7zz__expander_letz00(BgL_xz00_2810,
													CDR(BgL_bindingsz00_1649));
												return
													MAKE_YOUNG_PAIR(BgL_arg1597z00_2516,
													BgL_arg1598z00_2517);
											}
										}
									else
										{	/* Eval/expdlet.scm 275 */
											return
												BGl_expandzd2errorzd2zz__expandz00
												(BGl_string2129z00zz__expander_letz00,
												BGl_string2120z00zz__expander_letz00, BgL_xz00_2810);
										}
								}
							else
								{	/* Eval/expdlet.scm 275 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string2129z00zz__expander_letz00,
										BGl_string2120z00zz__expander_letz00, BgL_xz00_2810);
								}
						}
					else
						{	/* Eval/expdlet.scm 272 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string2129z00zz__expander_letz00,
								BGl_string2120z00zz__expander_letz00, BgL_xz00_2810);
						}
				}
		}

	}



/* &expand-eval-labels */
	obj_t BGl_z62expandzd2evalzd2labelsz62zz__expander_letz00(obj_t
		BgL_envz00_2807, obj_t BgL_xz00_2808, obj_t BgL_ez00_2809)
	{
		{	/* Eval/expdlet.scm 263 */
			return
				BGl_expandzd2evalzd2labelsz00zz__expander_letz00(BgL_xz00_2808,
				BgL_ez00_2809);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_letz00()
	{
		{	/* Eval/expdlet.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__expander_definez00(((long) 380411332),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
			return BGl_modulezd2initializa7ationz75zz__evutilsz00(((long) 470356200),
				BSTRING_TO_STRING(BGl_string2130z00zz__expander_letz00));
		}

	}

#ifdef __cplusplus
}
#endif
