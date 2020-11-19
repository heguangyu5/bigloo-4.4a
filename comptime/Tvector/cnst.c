/*===========================================================================*/
/*   (Tvector/cnst.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tvector/cnst.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztvector_cnstz00();
	static obj_t BGl_z62tvectorzd2ze3czd2vectorz81zztvector_cnstz00(obj_t, obj_t);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	static obj_t BGl_methodzd2initzd2zztvector_cnstz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62tvectorzd2Czd2staticzf3z91zztvector_cnstz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31099ze3ze5zztvector_cnstz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztvector_cnstz00();
	BGL_EXPORTED_DECL obj_t
		BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zztvector_cnstz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zztvector_cnstz00();
	static obj_t BGl_genericzd2initzd2zztvector_cnstz00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_tvectorzd2czd2printerz00zztvector_cnstz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zztvector_cnstz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztvector_cnstz00();
	static obj_t BGl_z62zc3z04anonymousza31102ze3ze5zztvector_cnstz00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2ze3czd2vectorzd2envz31zztvector_cnstz00,
		BgL_bgl_za762tvectorza7d2za7e31140za7,
		BGl_z62tvectorzd2ze3czd2vectorz81zztvector_cnstz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1133z00zztvector_cnstz00,
		BgL_bgl_string1133za700za7za7t1141za7, "tvector-c-printer", 17);
	      DEFINE_STRING(BGl_string1134z00zztvector_cnstz00,
		BgL_bgl_string1134za700za7za7t1142za7,
		"This tvector can't not be compiled as a static C vector", 55);
	      DEFINE_STRING(BGl_string1135z00zztvector_cnstz00,
		BgL_bgl_string1135za700za7za7t1143za7, "(unsigned char)", 15);
	      DEFINE_STRING(BGl_string1136z00zztvector_cnstz00,
		BgL_bgl_string1136za700za7za7t1144za7, "1", 1);
	      DEFINE_STRING(BGl_string1137z00zztvector_cnstz00,
		BgL_bgl_string1137za700za7za7t1145za7, "0", 1);
	      DEFINE_STRING(BGl_string1138z00zztvector_cnstz00,
		BgL_bgl_string1138za700za7za7t1146za7, ", ", 2);
	      DEFINE_STRING(BGl_string1139z00zztvector_cnstz00,
		BgL_bgl_string1139za700za7za7t1147za7, "tvector_cnst", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2Czd2staticzf3zd2envz21zztvector_cnstz00,
		BgL_bgl_za762tvectorza7d2cza7d1148za7,
		BGl_z62tvectorzd2Czd2staticzf3z91zztvector_cnstz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
	BGL_IMPORT obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1131z00zztvector_cnstz00,
		BgL_bgl_za762za7c3za704anonymo1149za7,
		BGl_z62zc3z04anonymousza31099ze3ze5zztvector_cnstz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1132z00zztvector_cnstz00,
		BgL_bgl_za762za7c3za704anonymo1150za7,
		BGl_z62zc3z04anonymousza31102ze3ze5zztvector_cnstz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztvector_cnstz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long
		BgL_checksumz00_260, char *BgL_fromz00_261)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztvector_cnstz00))
				{
					BGl_requirezd2initializa7ationz75zztvector_cnstz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztvector_cnstz00();
					BGl_libraryzd2moduleszd2initz00zztvector_cnstz00();
					BGl_importedzd2moduleszd2initz00zztvector_cnstz00();
					return BGl_toplevelzd2initzd2zztvector_cnstz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "tvector_cnst");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tvector_cnst");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}

	}



/* tvector-C-static? */
	BGL_EXPORTED_DEF bool_t BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t
		BgL_tvectz00_13)
	{
		{	/* Tvector/cnst.scm 30 */
			{	/* Tvector/cnst.scm 31 */
				BgL_typez00_bglt BgL_itypez00_155;

				{	/* Tvector/cnst.scm 31 */
					BgL_typez00_bglt BgL_oz00_205;

					BgL_oz00_205 =
						((BgL_typez00_bglt)
						STRUCT_REF(((obj_t) BgL_tvectz00_13), (int) (((long) 0))));
					{
						BgL_tvecz00_bglt BgL_auxz00_284;

						{
							obj_t BgL_auxz00_285;

							{	/* Tvector/cnst.scm 31 */
								BgL_objectz00_bglt BgL_tmpz00_286;

								BgL_tmpz00_286 = ((BgL_objectz00_bglt) BgL_oz00_205);
								BgL_auxz00_285 = BGL_OBJECT_WIDENING(BgL_tmpz00_286);
							}
							BgL_auxz00_284 = ((BgL_tvecz00_bglt) BgL_auxz00_285);
						}
						BgL_itypez00_155 =
							(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_284))->
							BgL_itemzd2typezd2);
				}}
				if ((((obj_t) BgL_itypez00_155) == BGl_za2longza2z00zztype_cachez00))
					{	/* Tvector/cnst.scm 33 */
						return ((bool_t) 1);
					}
				else
					{	/* Tvector/cnst.scm 33 */
						if ((((obj_t) BgL_itypez00_155) == BGl_za2intza2z00zztype_cachez00))
							{	/* Tvector/cnst.scm 34 */
								return ((bool_t) 1);
							}
						else
							{	/* Tvector/cnst.scm 34 */
								if (
									(((obj_t) BgL_itypez00_155) ==
										BGl_za2charza2z00zztype_cachez00))
									{	/* Tvector/cnst.scm 35 */
										return ((bool_t) 1);
									}
								else
									{	/* Tvector/cnst.scm 35 */
										if (
											(((obj_t) BgL_itypez00_155) ==
												BGl_za2boolza2z00zztype_cachez00))
											{	/* Tvector/cnst.scm 36 */
												return ((bool_t) 1);
											}
										else
											{	/* Tvector/cnst.scm 36 */
												if (
													(((obj_t) BgL_itypez00_155) ==
														BGl_za2stringza2z00zztype_cachez00))
													{	/* Tvector/cnst.scm 37 */
														return ((bool_t) 1);
													}
												else
													{	/* Tvector/cnst.scm 37 */
														return
															(
															((obj_t) BgL_itypez00_155) ==
															BGl_za2realza2z00zztype_cachez00);
													}
											}
									}
							}
					}
			}
		}

	}



/* &tvector-C-static? */
	obj_t BGl_z62tvectorzd2Czd2staticzf3z91zztvector_cnstz00(obj_t BgL_envz00_240,
		obj_t BgL_tvectz00_241)
	{
		{	/* Tvector/cnst.scm 30 */
			return
				BBOOL(BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00
				(BgL_tvectz00_241));
		}

	}



/* tvector-c-printer */
	obj_t BGl_tvectorzd2czd2printerz00zztvector_cnstz00(obj_t BgL_tvectz00_14)
	{
		{	/* Tvector/cnst.scm 44 */
			{	/* Tvector/cnst.scm 45 */
				BgL_typez00_bglt BgL_itypez00_163;

				{	/* Tvector/cnst.scm 45 */
					BgL_typez00_bglt BgL_oz00_208;

					BgL_oz00_208 =
						((BgL_typez00_bglt)
						STRUCT_REF(((obj_t) BgL_tvectz00_14), (int) (((long) 0))));
					{
						BgL_tvecz00_bglt BgL_auxz00_314;

						{
							obj_t BgL_auxz00_315;

							{	/* Tvector/cnst.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_316;

								BgL_tmpz00_316 = ((BgL_objectz00_bglt) BgL_oz00_208);
								BgL_auxz00_315 = BGL_OBJECT_WIDENING(BgL_tmpz00_316);
							}
							BgL_auxz00_314 = ((BgL_tvecz00_bglt) BgL_auxz00_315);
						}
						BgL_itypez00_163 =
							(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_314))->
							BgL_itemzd2typezd2);
				}}
				if ((((obj_t) BgL_itypez00_163) == BGl_za2longza2z00zztype_cachez00))
					{	/* Tvector/cnst.scm 47 */
						return BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
					}
				else
					{	/* Tvector/cnst.scm 47 */
						if ((((obj_t) BgL_itypez00_163) == BGl_za2intza2z00zztype_cachez00))
							{	/* Tvector/cnst.scm 48 */
								return BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
							}
						else
							{	/* Tvector/cnst.scm 48 */
								if (
									(((obj_t) BgL_itypez00_163) ==
										BGl_za2charza2z00zztype_cachez00))
									{	/* Tvector/cnst.scm 49 */
										return BGl_proc1131z00zztvector_cnstz00;
									}
								else
									{	/* Tvector/cnst.scm 49 */
										if (
											(((obj_t) BgL_itypez00_163) ==
												BGl_za2boolza2z00zztype_cachez00))
											{	/* Tvector/cnst.scm 52 */
												return BGl_proc1132z00zztvector_cnstz00;
											}
										else
											{	/* Tvector/cnst.scm 52 */
												if (
													(((obj_t) BgL_itypez00_163) ==
														BGl_za2stringza2z00zztype_cachez00))
													{	/* Tvector/cnst.scm 56 */
														return BGl_writezd2envzd2zz__r4_output_6_10_3z00;
													}
												else
													{	/* Tvector/cnst.scm 56 */
														if (
															(((obj_t) BgL_itypez00_163) ==
																BGl_za2realza2z00zztype_cachez00))
															{	/* Tvector/cnst.scm 57 */
																return
																	BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
															}
														else
															{	/* Tvector/cnst.scm 57 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string1133z00zztvector_cnstz00,
																	BGl_string1134z00zztvector_cnstz00,
																	BgL_tvectz00_14);
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* &<@anonymous:1099> */
	obj_t BGl_z62zc3z04anonymousza31099ze3ze5zztvector_cnstz00(obj_t
		BgL_envz00_244, obj_t BgL_xz00_245, obj_t BgL_portz00_246)
	{
		{	/* Tvector/cnst.scm 49 */
			{	/* Tvector/cnst.scm 50 */
				obj_t BgL_tmpz00_340;

				BgL_tmpz00_340 = ((obj_t) BgL_portz00_246);
				bgl_display_string(BGl_string1135z00zztvector_cnstz00, BgL_tmpz00_340);
			}
			{	/* Tvector/cnst.scm 51 */
				long BgL_arg1100z00_259;

				BgL_arg1100z00_259 = (CCHAR(BgL_xz00_245));
				return bgl_display_obj(BINT(BgL_arg1100z00_259), BgL_portz00_246);
			}
		}

	}



/* &<@anonymous:1102> */
	obj_t BGl_z62zc3z04anonymousza31102ze3ze5zztvector_cnstz00(obj_t
		BgL_envz00_247, obj_t BgL_xz00_248, obj_t BgL_portz00_249)
	{
		{	/* Tvector/cnst.scm 52 */
			if (CBOOL(BgL_xz00_248))
				{	/* Tvector/cnst.scm 54 */
					obj_t BgL_tmpz00_349;

					BgL_tmpz00_349 = ((obj_t) BgL_portz00_249);
					return
						bgl_display_string(BGl_string1136z00zztvector_cnstz00,
						BgL_tmpz00_349);
				}
			else
				{	/* Tvector/cnst.scm 55 */
					obj_t BgL_tmpz00_352;

					BgL_tmpz00_352 = ((obj_t) BgL_portz00_249);
					return
						bgl_display_string(BGl_string1137z00zztvector_cnstz00,
						BgL_tmpz00_352);
				}
		}

	}



/* tvector->c-vector */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t
		BgL_tvectorz00_15)
	{
		{	/* Tvector/cnst.scm 65 */
			{	/* Tvector/cnst.scm 66 */
				obj_t BgL_vectz00_178;

				BgL_vectz00_178 =
					STRUCT_REF(((obj_t) BgL_tvectorz00_15), (int) (((long) 1)));
				{	/* Tvector/cnst.scm 66 */
					obj_t BgL_czd2printerzd2_179;

					BgL_czd2printerzd2_179 =
						BGl_tvectorzd2czd2printerz00zztvector_cnstz00(BgL_tvectorz00_15);
					{	/* Tvector/cnst.scm 67 */
						long BgL_lenzd21zd2_180;

						BgL_lenzd21zd2_180 =
							(VECTOR_LENGTH(((obj_t) BgL_vectz00_178)) - ((long) 1));
						{	/* Tvector/cnst.scm 68 */
							obj_t BgL_portz00_181;

							{	/* Tvector/cnst.scm 69 */

								{	/* Tvector/cnst.scm 69 */

									BgL_portz00_181 =
										BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
							}}
							{	/* Tvector/cnst.scm 69 */

								bgl_display_char(((unsigned char) '{'), BgL_portz00_181);
								{
									long BgL_iz00_183;

									BgL_iz00_183 = ((long) 0);
								BgL_zc3z04anonymousza31110ze3z87_184:
									if ((BgL_iz00_183 == BgL_lenzd21zd2_180))
										{	/* Tvector/cnst.scm 72 */
											{	/* Tvector/cnst.scm 74 */
												obj_t BgL_arg1113z00_186;

												BgL_arg1113z00_186 =
													VECTOR_REF(((obj_t) BgL_vectz00_178), BgL_iz00_183);
												PROCEDURE_ENTRY(BgL_czd2printerzd2_179)
													(BgL_czd2printerzd2_179, BgL_arg1113z00_186,
													BgL_portz00_181, BEOA);
											}
											bgl_display_char(((unsigned char) '}'), BgL_portz00_181);
											return bgl_close_output_port(BgL_portz00_181);
										}
									else
										{	/* Tvector/cnst.scm 72 */
											{	/* Tvector/cnst.scm 78 */
												obj_t BgL_arg1114z00_187;

												BgL_arg1114z00_187 =
													VECTOR_REF(((obj_t) BgL_vectz00_178), BgL_iz00_183);
												PROCEDURE_ENTRY(BgL_czd2printerzd2_179)
													(BgL_czd2printerzd2_179, BgL_arg1114z00_187,
													BgL_portz00_181, BEOA);
											}
											bgl_display_string(BGl_string1138z00zztvector_cnstz00,
												BgL_portz00_181);
											{
												long BgL_iz00_383;

												BgL_iz00_383 = (BgL_iz00_183 + ((long) 1));
												BgL_iz00_183 = BgL_iz00_383;
												goto BgL_zc3z04anonymousza31110ze3z87_184;
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



/* &tvector->c-vector */
	obj_t BGl_z62tvectorzd2ze3czd2vectorz81zztvector_cnstz00(obj_t BgL_envz00_256,
		obj_t BgL_tvectorz00_257)
	{
		{	/* Tvector/cnst.scm 65 */
			return
				BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(BgL_tvectorz00_257);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztvector_cnstz00()
	{
		{	/* Tvector/cnst.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1139z00zztvector_cnstz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1139z00zztvector_cnstz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1139z00zztvector_cnstz00));
			return
				BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string1139z00zztvector_cnstz00));
		}

	}

#ifdef __cplusplus
}
#endif
