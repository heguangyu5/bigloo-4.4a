/*===========================================================================*/
/*   (Jas/opcode.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/opcode.scm) */
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


	extern BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_vzd2indexzd2zzjas_opcodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2typezd2numz00zzjas_opcodez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_opcodez00();
	static obj_t BGl_resolvezd2opcodeze70z35zzjas_opcodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzjas_opcodez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_opcodez00();
	static bool_t BGl_slotzf3zf3zzjas_opcodez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_opcodez00();
	static obj_t BGl_za2copzd2listza2zd2zzjas_opcodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_resolvezd2opcodeszd2zzjas_opcodez00 = BUNSPEC;
	extern BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_initzd2copzd2valuez00zzjas_opcodez00();
	static obj_t BGl_requirezd2initializa7ationz75zzjas_opcodez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzjas_opcodez00();
	static obj_t BGl_genericzd2initzd2zzjas_opcodez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	extern BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_list_ref(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzjas_opcodez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_opcodez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_opcodez00();
	extern BgL_jastypez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_resolvezd2argszd2zzjas_opcodez00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04resolvezd2opcodesza31209ze3z37zzjas_opcodez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2057z00zzjas_opcodez00,
		BgL_bgl_za762za7c3za704resolve2068za7,
		BGl_z62zc3z04resolvezd2opcodesza31209ze3z37zzjas_opcodez00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2058z00zzjas_opcodez00,
		BgL_bgl_string2058za700za7za7j2069za7, "Bad mnemonic", 12);
	      DEFINE_STRING(BGl_string2059z00zzjas_opcodez00,
		BgL_bgl_string2059za700za7za7j2070za7, "unknown code operation", 22);
	      DEFINE_STRING(BGl_string2060z00zzjas_opcodez00,
		BgL_bgl_string2060za700za7za7j2071za7, "Syntax error", 12);
	      DEFINE_STRING(BGl_string2061z00zzjas_opcodez00,
		BgL_bgl_string2061za700za7za7j2072za7, "Bad wide mnemonic", 17);
	      DEFINE_STRING(BGl_string2062z00zzjas_opcodez00,
		BgL_bgl_string2062za700za7za7j2073za7, "unknown variable", 16);
	      DEFINE_STRING(BGl_string2063z00zzjas_opcodez00,
		BgL_bgl_string2063za700za7za7j2074za7, "jas_opcode", 10);
	      DEFINE_STRING(BGl_string2064z00zzjas_opcodez00,
		BgL_bgl_string2064za700za7za7j2075za7,
		"((boolean . 4) (char . 5) (float . 6) (double . 7) (byte . 8) (short . 9) (int . 10) (long . 11)) as-cop-value (nop aconst_null iconst_m1 iconst_0 iconst_1 iconst_2 iconst_3 iconst_4 iconst_5 lconst_0 lconst_1 fconst_0 fconst_1 fconst_2 dconst_0 dconst_1 bipush sipush ldc ldc_w ldc2_w iload lload fload dload aload iload_0 iload_1 iload_2 iload_3 lload_0 lload_1 lload_2 lload_3 fload_0 fload_1 fload_2 fload_3 dload_0 dload_1 dload_2 dload_3 aload_0 aload_1 aload_2 aload_3 iaload laload faload daload aaload baload caload saload istore lstore fstore dstore astore istore_0 istore_1 istore_2 istore_3 lstore_0 lstore_1 lstore_2 lstore_3 fstore_0 fstore_1 fstore_2 fstore_3 dstore_0 dstore_1 dstore_2 dstore_3 astore_0 astore_1 astore_2 astore_3 iastore lastore fastore dastore aastore bastore castore sastore pop pop2 dup dup_x1 dup_x2 dup2 dup2_x1 dup2_x2 swap iadd ladd fadd dadd isub lsub fsub dsub imul lmul fmul dmul idiv ldiv fdiv ddiv irem lrem frem drem ineg lneg fneg dneg ishl lshl ishr lshr iushr lushr iand lan"
		"d ior lor ixor lxor iinc i2l i2f i2d l2i l2f l2d f2i f2l f2d d2i d2l d2f i2b i2c i2s lcmp fcmpl fcmpg dcmpl dcmpg ifeq ifne iflt ifge ifgt ifle if_icmpeq if_icmpne if_icmplt if_icmpge if_icmpgt if_icmple if_acmpeq if_acmpne goto jsr ret tableswitch lookupswitch ireturn lreturn freturn dreturn areturn return getstatic putstatic getfield putfield invokevirtual invokespecial invokestatic invokeinterface xxxunusedxxx new newarray anewarray arraylength athrow checkcast instanceof monitorenter monitorexit wide multianewarray ifnull ifnonnull goto_w jsr_w handler line comment localvar) ",
		1610);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2copzd2listza2zd2zzjas_opcodez00));
		     ADD_ROOT((void *) (&BGl_resolvezd2opcodeszd2zzjas_opcodez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_opcodez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_opcodez00(long
		BgL_checksumz00_1358, char *BgL_fromz00_1359)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_opcodez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_opcodez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_opcodez00();
					BGl_libraryzd2moduleszd2initz00zzjas_opcodez00();
					BGl_cnstzd2initzd2zzjas_opcodez00();
					BGl_importedzd2moduleszd2initz00zzjas_opcodez00();
					return BGl_toplevelzd2initzd2zzjas_opcodez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"jas_opcode");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_opcode");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			{	/* Jas/opcode.scm 1 */
				obj_t BgL_cportz00_1331;

				{	/* Jas/opcode.scm 1 */
					obj_t BgL_stringz00_1339;

					BgL_stringz00_1339 = BGl_string2064z00zzjas_opcodez00;
					{	/* Jas/opcode.scm 1 */
						obj_t BgL_startz00_1340;

						BgL_startz00_1340 = BINT(((long) 0));
						{	/* Jas/opcode.scm 1 */
							obj_t BgL_endz00_1341;

							BgL_endz00_1341 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1339)));
							{	/* Jas/opcode.scm 1 */

								BgL_cportz00_1331 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1339, BgL_startz00_1340, BgL_endz00_1341);
				}}}}
				{
					long BgL_iz00_1332;

					BgL_iz00_1332 = ((long) 2);
				BgL_loopz00_1333:
					if ((BgL_iz00_1332 == ((long) -1)))
						{	/* Jas/opcode.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/opcode.scm 1 */
							{	/* Jas/opcode.scm 1 */
								obj_t BgL_arg2066z00_1335;

								{	/* Jas/opcode.scm 1 */

									{	/* Jas/opcode.scm 1 */
										obj_t BgL_locationz00_1337;

										BgL_locationz00_1337 = BBOOL(((bool_t) 0));
										{	/* Jas/opcode.scm 1 */

											BgL_arg2066z00_1335 =
												BGl_readz00zz__readerz00(BgL_cportz00_1331,
												BgL_locationz00_1337);
										}
									}
								}
								{	/* Jas/opcode.scm 1 */
									int BgL_tmpz00_1384;

									BgL_tmpz00_1384 = (int) (BgL_iz00_1332);
									CNST_TABLE_SET(BgL_tmpz00_1384, BgL_arg2066z00_1335);
							}}
							{	/* Jas/opcode.scm 1 */
								int BgL_auxz00_1338;

								BgL_auxz00_1338 = (int) ((BgL_iz00_1332 - ((long) 1)));
								{
									long BgL_iz00_1389;

									BgL_iz00_1389 = (long) (BgL_auxz00_1338);
									BgL_iz00_1332 = BgL_iz00_1389;
									goto BgL_loopz00_1333;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			BGl_za2copzd2listza2zd2zzjas_opcodez00 = CNST_TABLE_REF(((long) 0));
			BGl_initzd2copzd2valuez00zzjas_opcodez00();
			return (BGl_resolvezd2opcodeszd2zzjas_opcodez00 =
				BGl_proc2057z00zzjas_opcodez00, BUNSPEC);
		}

	}



/* &<@resolve-opcodes:1209> */
	obj_t BGl_z62zc3z04resolvezd2opcodesza31209ze3z37zzjas_opcodez00(obj_t
		BgL_envz00_1324, obj_t BgL_classfilez00_1325, obj_t BgL_paramz00_1326,
		obj_t BgL_localsz00_1327, obj_t BgL_codez00_1328)
	{
		{	/* Jas/opcode.scm 76 */
			{	/* Jas/opcode.scm 77 */
				obj_t BgL_varsz00_1344;

				BgL_varsz00_1344 =
					BGl_appendzd221011zd2zzjas_opcodez00(BgL_paramz00_1326,
					BgL_localsz00_1327);
				if (NULLP(BgL_codez00_1328))
					{	/* Jas/opcode.scm 85 */
						return BNIL;
					}
				else
					{	/* Jas/opcode.scm 85 */
						obj_t BgL_head1205z00_1345;

						{	/* Jas/opcode.scm 85 */
							obj_t BgL_arg1225z00_1346;

							{	/* Jas/opcode.scm 85 */
								obj_t BgL_arg1227z00_1347;

								BgL_arg1227z00_1347 = CAR(((obj_t) BgL_codez00_1328));
								BgL_arg1225z00_1346 =
									BGl_resolvezd2opcodeze70z35zzjas_opcodez00(BgL_varsz00_1344,
									BgL_classfilez00_1325, BgL_arg1227z00_1347);
							}
							{	/* Jas/opcode.scm 85 */
								obj_t BgL_res1885z00_1348;

								BgL_res1885z00_1348 =
									MAKE_YOUNG_PAIR(BgL_arg1225z00_1346, BNIL);
								BgL_head1205z00_1345 = BgL_res1885z00_1348;
							}
						}
						{	/* Jas/opcode.scm 85 */
							obj_t BgL_g1208z00_1349;

							BgL_g1208z00_1349 = CDR(((obj_t) BgL_codez00_1328));
							{
								obj_t BgL_l1203z00_1351;
								obj_t BgL_tail1206z00_1352;

								BgL_l1203z00_1351 = BgL_g1208z00_1349;
								BgL_tail1206z00_1352 = BgL_head1205z00_1345;
							BgL_zc3z04anonymousza31211ze3z87_1350:
								if (NULLP(BgL_l1203z00_1351))
									{	/* Jas/opcode.scm 85 */
										return BgL_head1205z00_1345;
									}
								else
									{	/* Jas/opcode.scm 85 */
										obj_t BgL_newtail1207z00_1353;

										{	/* Jas/opcode.scm 85 */
											obj_t BgL_arg1221z00_1354;

											{	/* Jas/opcode.scm 85 */
												obj_t BgL_arg1223z00_1355;

												BgL_arg1223z00_1355 = CAR(((obj_t) BgL_l1203z00_1351));
												BgL_arg1221z00_1354 =
													BGl_resolvezd2opcodeze70z35zzjas_opcodez00
													(BgL_varsz00_1344, BgL_classfilez00_1325,
													BgL_arg1223z00_1355);
											}
											{	/* Jas/opcode.scm 85 */
												obj_t BgL_res1887z00_1356;

												BgL_res1887z00_1356 =
													MAKE_YOUNG_PAIR(BgL_arg1221z00_1354, BNIL);
												BgL_newtail1207z00_1353 = BgL_res1887z00_1356;
											}
										}
										SET_CDR(BgL_tail1206z00_1352, BgL_newtail1207z00_1353);
										{	/* Jas/opcode.scm 85 */
											obj_t BgL_arg1216z00_1357;

											BgL_arg1216z00_1357 = CDR(((obj_t) BgL_l1203z00_1351));
											{
												obj_t BgL_tail1206z00_1413;
												obj_t BgL_l1203z00_1412;

												BgL_l1203z00_1412 = BgL_arg1216z00_1357;
												BgL_tail1206z00_1413 = BgL_newtail1207z00_1353;
												BgL_tail1206z00_1352 = BgL_tail1206z00_1413;
												BgL_l1203z00_1351 = BgL_l1203z00_1412;
												goto BgL_zc3z04anonymousza31211ze3z87_1350;
											}
										}
									}
							}
						}
					}
			}
		}

	}



/* resolve-opcode~0 */
	obj_t BGl_resolvezd2opcodeze70z35zzjas_opcodez00(obj_t BgL_varsz00_1330,
		obj_t BgL_classfilez00_1329, obj_t BgL_insz00_288)
	{
		{	/* Jas/opcode.scm 84 */
			if (PAIRP(BgL_insz00_288))
				{	/* Jas/opcode.scm 81 */
					obj_t BgL_copz00_291;

					{	/* Jas/opcode.scm 81 */
						obj_t BgL_arg1242z00_294;

						BgL_arg1242z00_294 = CAR(BgL_insz00_288);
						if (SYMBOLP(BgL_arg1242z00_294))
							{	/* Jas/opcode.scm 68 */
								BgL_copz00_291 =
									BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg1242z00_294,
									CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Jas/opcode.scm 68 */
								BgL_copz00_291 =
									BGl_jaszd2errorzd2zzjas_classfilez00(
									((BgL_classfilez00_bglt) BgL_classfilez00_1329),
									BGl_string2058z00zzjas_opcodez00, BgL_arg1242z00_294);
							}
					}
					if (CBOOL(BgL_copz00_291))
						{	/* Jas/opcode.scm 82 */
							return
								BGl_resolvezd2argszd2zzjas_opcodez00(BgL_classfilez00_1329,
								BgL_varsz00_1330, BgL_copz00_291, CDR(BgL_insz00_288));
						}
					else
						{	/* Jas/opcode.scm 84 */
							obj_t BgL_arg1239z00_293;

							BgL_arg1239z00_293 = CAR(BgL_insz00_288);
							return
								BGl_jaszd2errorzd2zzjas_classfilez00(
								((BgL_classfilez00_bglt) BgL_classfilez00_1329),
								BGl_string2058z00zzjas_opcodez00, BgL_arg1239z00_293);
						}
				}
			else
				{	/* Jas/opcode.scm 79 */
					return BgL_insz00_288;
				}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_opcodez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_296;

				BgL_headz00_296 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_297;
					obj_t BgL_tailz00_298;

					BgL_prevz00_297 = BgL_headz00_296;
					BgL_tailz00_298 = BgL_l1z00_1;
				BgL_loopz00_299:
					if (PAIRP(BgL_tailz00_298))
						{
							obj_t BgL_newzd2prevzd2_301;

							BgL_newzd2prevzd2_301 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_298), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_297, BgL_newzd2prevzd2_301);
							{
								obj_t BgL_tailz00_1437;
								obj_t BgL_prevz00_1436;

								BgL_prevz00_1436 = BgL_newzd2prevzd2_301;
								BgL_tailz00_1437 = CDR(BgL_tailz00_298);
								BgL_tailz00_298 = BgL_tailz00_1437;
								BgL_prevz00_297 = BgL_prevz00_1436;
								goto BgL_loopz00_299;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_296);
				}
			}
		}

	}



/* init-cop-value */
	obj_t BGl_initzd2copzd2valuez00zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 55 */
			{
				obj_t BgL_lz00_956;
				long BgL_nz00_957;

				BgL_lz00_956 = CNST_TABLE_REF(((long) 0));
				BgL_nz00_957 = ((long) 0);
			BgL_walkz00_955:
				if (NULLP(BgL_lz00_956))
					{	/* Jas/opcode.scm 57 */
						return BgL_lz00_956;
					}
				else
					{	/* Jas/opcode.scm 57 */
						{	/* Jas/opcode.scm 58 */
							obj_t BgL_arg1250z00_960;

							BgL_arg1250z00_960 = CAR(((obj_t) BgL_lz00_956));
							BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg1250z00_960,
								CNST_TABLE_REF(((long) 1)), BINT(BgL_nz00_957));
						}
						{	/* Jas/opcode.scm 59 */
							obj_t BgL_arg1252z00_962;
							long BgL_arg1253z00_963;

							BgL_arg1252z00_962 = CDR(((obj_t) BgL_lz00_956));
							BgL_arg1253z00_963 = (BgL_nz00_957 + ((long) 1));
							{
								long BgL_nz00_1451;
								obj_t BgL_lz00_1450;

								BgL_lz00_1450 = BgL_arg1252z00_962;
								BgL_nz00_1451 = BgL_arg1253z00_963;
								BgL_nz00_957 = BgL_nz00_1451;
								BgL_lz00_956 = BgL_lz00_1450;
								goto BgL_walkz00_955;
							}
						}
					}
			}
		}

	}



/* resolve-args */
	obj_t BGl_resolvezd2argszd2zzjas_opcodez00(obj_t BgL_classfilez00_6,
		obj_t BgL_localsz00_7, obj_t BgL_copz00_8, obj_t BgL_argsz00_9)
	{
		{	/* Jas/opcode.scm 87 */
		BGl_resolvezd2argszd2zzjas_opcodez00:
			{

				if (INTEGERP(BgL_copz00_8))
					{	/* Jas/opcode.scm 88 */
						switch ((long) CINT(BgL_copz00_8))
							{
							case ((long) 0):
							case ((long) 1):
							case ((long) 2):
							case ((long) 3):
							case ((long) 4):
							case ((long) 5):
							case ((long) 6):
							case ((long) 7):
							case ((long) 8):
							case ((long) 9):
							case ((long) 10):
							case ((long) 11):
							case ((long) 12):
							case ((long) 13):
							case ((long) 14):
							case ((long) 15):
							case ((long) 46):
							case ((long) 47):
							case ((long) 48):
							case ((long) 49):
							case ((long) 50):
							case ((long) 51):
							case ((long) 52):
							case ((long) 53):
							case ((long) 79):
							case ((long) 80):
							case ((long) 81):
							case ((long) 82):
							case ((long) 83):
							case ((long) 84):
							case ((long) 85):
							case ((long) 86):
							case ((long) 87):
							case ((long) 88):
							case ((long) 89):
							case ((long) 90):
							case ((long) 91):
							case ((long) 92):
							case ((long) 93):
							case ((long) 94):
							case ((long) 95):
							case ((long) 96):
							case ((long) 97):
							case ((long) 98):
							case ((long) 99):
							case ((long) 100):
							case ((long) 101):
							case ((long) 102):
							case ((long) 103):
							case ((long) 104):
							case ((long) 105):
							case ((long) 106):
							case ((long) 107):
							case ((long) 108):
							case ((long) 109):
							case ((long) 110):
							case ((long) 111):
							case ((long) 112):
							case ((long) 113):
							case ((long) 114):
							case ((long) 115):
							case ((long) 116):
							case ((long) 117):
							case ((long) 118):
							case ((long) 119):
							case ((long) 120):
							case ((long) 121):
							case ((long) 122):
							case ((long) 123):
							case ((long) 124):
							case ((long) 125):
							case ((long) 126):
							case ((long) 127):
							case ((long) 128):
							case ((long) 129):
							case ((long) 130):
							case ((long) 131):
							case ((long) 133):
							case ((long) 134):
							case ((long) 135):
							case ((long) 136):
							case ((long) 137):
							case ((long) 138):
							case ((long) 139):
							case ((long) 140):
							case ((long) 141):
							case ((long) 142):
							case ((long) 143):
							case ((long) 144):
							case ((long) 145):
							case ((long) 146):
							case ((long) 147):
							case ((long) 148):
							case ((long) 149):
							case ((long) 150):
							case ((long) 151):
							case ((long) 152):
							case ((long) 172):
							case ((long) 173):
							case ((long) 174):
							case ((long) 175):
							case ((long) 176):
							case ((long) 177):
							case ((long) 190):
							case ((long) 191):
							case ((long) 194):
							case ((long) 195):

								{

									if (NULLP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 89 */
											return MAKE_YOUNG_PAIR(BgL_copz00_8, BNIL);
										}
									else
										{	/* Jas/opcode.scm 89 */
											{	/* Jas/opcode.scm 218 */
												obj_t BgL_arg1853z00_969;

												BgL_arg1853z00_969 =
													MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(((long)
																0)), (long) CINT(BgL_copz00_8)), BgL_argsz00_9);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00((
														(BgL_classfilez00_bglt) BgL_classfilez00_6),
													BGl_string2060z00zzjas_opcodez00, BgL_arg1853z00_969);
											}
										}
								}
								break;
							case ((long) 16):
							case ((long) 17):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 102 */
											if (INTEGERP(CAR(BgL_argsz00_9)))
												{	/* Jas/opcode.scm 102 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 102 */
															return
																MAKE_YOUNG_PAIR(BgL_copz00_8, BgL_argsz00_9);
														}
													else
														{	/* Jas/opcode.scm 102 */
														BgL_tagzd2112zd2_336:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1015;

																BgL_arg1853z00_1015 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1015);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 102 */
													bool_t BgL_test2090z00_1479;

													{	/* Jas/opcode.scm 102 */
														obj_t BgL_tmpz00_1480;

														BgL_tmpz00_1480 = CAR(BgL_argsz00_9);
														BgL_test2090z00_1479 = ELONGP(BgL_tmpz00_1480);
													}
													if (BgL_test2090z00_1479)
														{	/* Jas/opcode.scm 102 */
															if (NULLP(CDR(BgL_argsz00_9)))
																{	/* Jas/opcode.scm 102 */
																	{	/* Jas/opcode.scm 105 */
																		long BgL_arg1325z00_387;

																		{	/* Jas/opcode.scm 105 */
																			obj_t BgL_arg1328z00_390;

																			BgL_arg1328z00_390 =
																				CAR(((obj_t) BgL_argsz00_9));
																			{	/* Jas/opcode.scm 105 */
																				long BgL_res1893z00_974;

																				{	/* Jas/opcode.scm 105 */
																					long BgL_xz00_973;

																					BgL_xz00_973 =
																						BELONG_TO_LONG(BgL_arg1328z00_390);
																					BgL_res1893z00_974 =
																						(long) (BgL_xz00_973);
																				}
																				BgL_arg1325z00_387 = BgL_res1893z00_974;
																		}}
																		{	/* Jas/opcode.scm 105 */
																			obj_t BgL_list1326z00_388;

																			{	/* Jas/opcode.scm 105 */
																				obj_t BgL_arg1327z00_389;

																				BgL_arg1327z00_389 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1325z00_387), BNIL);
																				BgL_list1326z00_388 =
																					MAKE_YOUNG_PAIR(BgL_copz00_8,
																					BgL_arg1327z00_389);
																			}
																			return BgL_list1326z00_388;
																		}
																	}
																}
															else
																{	/* Jas/opcode.scm 102 */
																	goto BgL_tagzd2112zd2_336;
																}
														}
													else
														{	/* Jas/opcode.scm 102 */
															bool_t BgL_test2092z00_1493;

															{	/* Jas/opcode.scm 102 */
																obj_t BgL_tmpz00_1494;

																BgL_tmpz00_1494 = CAR(BgL_argsz00_9);
																BgL_test2092z00_1493 =
																	BGL_UINT32P(BgL_tmpz00_1494);
															}
															if (BgL_test2092z00_1493)
																{	/* Jas/opcode.scm 102 */
																	if (NULLP(CDR(BgL_argsz00_9)))
																		{	/* Jas/opcode.scm 102 */
																			{	/* Jas/opcode.scm 106 */
																				long BgL_arg1329z00_391;

																				{	/* Jas/opcode.scm 106 */
																					obj_t BgL_arg1334z00_394;

																					BgL_arg1334z00_394 =
																						CAR(((obj_t) BgL_argsz00_9));
																					{	/* Jas/opcode.scm 106 */
																						long BgL_res1895z00_978;

																						{	/* Jas/opcode.scm 106 */
																							uint32_t BgL_xz00_977;

																							BgL_xz00_977 =
																								BGL_BUINT32_TO_UINT32
																								(BgL_arg1334z00_394);
																							BgL_res1895z00_978 =
																								(long) (BgL_xz00_977);
																						}
																						BgL_arg1329z00_391 =
																							BgL_res1895z00_978;
																				}}
																				{	/* Jas/opcode.scm 106 */
																					obj_t BgL_list1330z00_392;

																					{	/* Jas/opcode.scm 106 */
																						obj_t BgL_arg1331z00_393;

																						BgL_arg1331z00_393 =
																							MAKE_YOUNG_PAIR(BINT
																							(BgL_arg1329z00_391), BNIL);
																						BgL_list1330z00_392 =
																							MAKE_YOUNG_PAIR(BgL_copz00_8,
																							BgL_arg1331z00_393);
																					}
																					return BgL_list1330z00_392;
																				}
																			}
																		}
																	else
																		{	/* Jas/opcode.scm 102 */
																			goto BgL_tagzd2112zd2_336;
																		}
																}
															else
																{	/* Jas/opcode.scm 102 */
																	bool_t BgL_test2094z00_1507;

																	{	/* Jas/opcode.scm 102 */
																		obj_t BgL_tmpz00_1508;

																		BgL_tmpz00_1508 = CAR(BgL_argsz00_9);
																		BgL_test2094z00_1507 =
																			BGL_INT32P(BgL_tmpz00_1508);
																	}
																	if (BgL_test2094z00_1507)
																		{	/* Jas/opcode.scm 102 */
																			if (NULLP(CDR(BgL_argsz00_9)))
																				{	/* Jas/opcode.scm 102 */
																					{	/* Jas/opcode.scm 107 */
																						long BgL_arg1335z00_395;

																						{	/* Jas/opcode.scm 107 */
																							obj_t BgL_arg1338z00_398;

																							BgL_arg1338z00_398 =
																								CAR(((obj_t) BgL_argsz00_9));
																							{	/* Jas/opcode.scm 107 */
																								long BgL_res1898z00_985;

																								{	/* Jas/opcode.scm 107 */
																									int32_t BgL_xz00_981;

																									BgL_xz00_981 =
																										BGL_BINT32_TO_INT32
																										(BgL_arg1338z00_398);
																									{	/* Jas/opcode.scm 107 */
																										long BgL_arg1456z00_982;

																										BgL_arg1456z00_982 =
																											(long) (BgL_xz00_981);
																										{	/* Jas/opcode.scm 107 */
																											long BgL_res1897z00_984;

																											BgL_res1897z00_984 =
																												(long)
																												(BgL_arg1456z00_982);
																											BgL_res1898z00_985 =
																												BgL_res1897z00_984;
																								}}}
																								BgL_arg1335z00_395 =
																									BgL_res1898z00_985;
																						}}
																						{	/* Jas/opcode.scm 107 */
																							obj_t BgL_list1336z00_396;

																							{	/* Jas/opcode.scm 107 */
																								obj_t BgL_arg1337z00_397;

																								BgL_arg1337z00_397 =
																									MAKE_YOUNG_PAIR(BINT
																									(BgL_arg1335z00_395), BNIL);
																								BgL_list1336z00_396 =
																									MAKE_YOUNG_PAIR(BgL_copz00_8,
																									BgL_arg1337z00_397);
																							}
																							return BgL_list1336z00_396;
																						}
																					}
																				}
																			else
																				{	/* Jas/opcode.scm 102 */
																					goto BgL_tagzd2112zd2_336;
																				}
																		}
																	else
																		{	/* Jas/opcode.scm 102 */
																			bool_t BgL_test2096z00_1522;

																			{	/* Jas/opcode.scm 102 */
																				obj_t BgL_tmpz00_1523;

																				BgL_tmpz00_1523 = CAR(BgL_argsz00_9);
																				BgL_test2096z00_1522 =
																					BGL_INT16P(BgL_tmpz00_1523);
																			}
																			if (BgL_test2096z00_1522)
																				{	/* Jas/opcode.scm 102 */
																					if (NULLP(CDR(BgL_argsz00_9)))
																						{	/* Jas/opcode.scm 102 */
																							{	/* Jas/opcode.scm 108 */
																								long BgL_arg1339z00_399;

																								{	/* Jas/opcode.scm 108 */
																									obj_t BgL_arg1345z00_402;

																									BgL_arg1345z00_402 =
																										CAR(
																										((obj_t) BgL_argsz00_9));
																									{	/* Jas/opcode.scm 108 */
																										long BgL_res1901z00_992;

																										{	/* Jas/opcode.scm 108 */
																											int16_t BgL_xz00_988;

																											BgL_xz00_988 =
																												BGL_BINT16_TO_INT16
																												(BgL_arg1345z00_402);
																											{	/* Jas/opcode.scm 108 */
																												long BgL_arg1458z00_989;

																												BgL_arg1458z00_989 =
																													(long) (BgL_xz00_988);
																												{	/* Jas/opcode.scm 108 */
																													long
																														BgL_res1900z00_991;
																													BgL_res1900z00_991 =
																														(long)
																														(BgL_arg1458z00_989);
																													BgL_res1901z00_992 =
																														BgL_res1900z00_991;
																										}}}
																										BgL_arg1339z00_399 =
																											BgL_res1901z00_992;
																								}}
																								{	/* Jas/opcode.scm 108 */
																									obj_t BgL_list1340z00_400;

																									{	/* Jas/opcode.scm 108 */
																										obj_t BgL_arg1344z00_401;

																										BgL_arg1344z00_401 =
																											MAKE_YOUNG_PAIR(BINT
																											(BgL_arg1339z00_399),
																											BNIL);
																										BgL_list1340z00_400 =
																											MAKE_YOUNG_PAIR
																											(BgL_copz00_8,
																											BgL_arg1344z00_401);
																									}
																									return BgL_list1340z00_400;
																								}
																							}
																						}
																					else
																						{	/* Jas/opcode.scm 102 */
																							goto BgL_tagzd2112zd2_336;
																						}
																				}
																			else
																				{	/* Jas/opcode.scm 102 */
																					bool_t BgL_test2098z00_1537;

																					{	/* Jas/opcode.scm 102 */
																						obj_t BgL_tmpz00_1538;

																						BgL_tmpz00_1538 =
																							CAR(BgL_argsz00_9);
																						BgL_test2098z00_1537 =
																							BGL_UINT16P(BgL_tmpz00_1538);
																					}
																					if (BgL_test2098z00_1537)
																						{	/* Jas/opcode.scm 102 */
																							if (NULLP(CDR(BgL_argsz00_9)))
																								{	/* Jas/opcode.scm 102 */
																									{	/* Jas/opcode.scm 109 */
																										long BgL_arg1346z00_403;

																										{	/* Jas/opcode.scm 109 */
																											obj_t BgL_arg1351z00_406;

																											BgL_arg1351z00_406 =
																												CAR(
																												((obj_t)
																													BgL_argsz00_9));
																											{	/* Jas/opcode.scm 109 */
																												long BgL_res1904z00_999;

																												{	/* Jas/opcode.scm 109 */
																													uint16_t BgL_xz00_995;

																													BgL_xz00_995 =
																														BGL_BUINT16_TO_UINT16
																														(BgL_arg1351z00_406);
																													{	/* Jas/opcode.scm 109 */
																														long
																															BgL_arg1457z00_996;
																														BgL_arg1457z00_996 =
																															(long)
																															(BgL_xz00_995);
																														{	/* Jas/opcode.scm 109 */
																															long
																																BgL_res1903z00_998;
																															BgL_res1903z00_998
																																=
																																(long)
																																(BgL_arg1457z00_996);
																															BgL_res1904z00_999
																																=
																																BgL_res1903z00_998;
																												}}}
																												BgL_arg1346z00_403 =
																													BgL_res1904z00_999;
																										}}
																										{	/* Jas/opcode.scm 109 */
																											obj_t BgL_list1347z00_404;

																											{	/* Jas/opcode.scm 109 */
																												obj_t
																													BgL_arg1348z00_405;
																												BgL_arg1348z00_405 =
																													MAKE_YOUNG_PAIR(BINT
																													(BgL_arg1346z00_403),
																													BNIL);
																												BgL_list1347z00_404 =
																													MAKE_YOUNG_PAIR
																													(BgL_copz00_8,
																													BgL_arg1348z00_405);
																											}
																											return
																												BgL_list1347z00_404;
																										}
																									}
																								}
																							else
																								{	/* Jas/opcode.scm 102 */
																									goto BgL_tagzd2112zd2_336;
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 102 */
																							bool_t BgL_test2100z00_1552;

																							{	/* Jas/opcode.scm 102 */
																								obj_t BgL_tmpz00_1553;

																								BgL_tmpz00_1553 =
																									CAR(BgL_argsz00_9);
																								BgL_test2100z00_1552 =
																									BGL_INT8P(BgL_tmpz00_1553);
																							}
																							if (BgL_test2100z00_1552)
																								{	/* Jas/opcode.scm 102 */
																									if (NULLP(CDR(BgL_argsz00_9)))
																										{	/* Jas/opcode.scm 102 */
																											{	/* Jas/opcode.scm 110 */
																												long BgL_arg1352z00_407;

																												{	/* Jas/opcode.scm 110 */
																													obj_t
																														BgL_arg1360z00_410;
																													BgL_arg1360z00_410 =
																														CAR(((obj_t)
																															BgL_argsz00_9));
																													{	/* Jas/opcode.scm 110 */
																														long
																															BgL_res1907z00_1006;
																														{	/* Jas/opcode.scm 110 */
																															int8_t
																																BgL_xz00_1002;
																															BgL_xz00_1002 =
																																BGL_BINT8_TO_INT8
																																(BgL_arg1360z00_410);
																															{	/* Jas/opcode.scm 110 */
																																long
																																	BgL_arg1460z00_1003;
																																BgL_arg1460z00_1003
																																	=
																																	(long)
																																	(BgL_xz00_1002);
																																{	/* Jas/opcode.scm 110 */
																																	long
																																		BgL_res1906z00_1005;
																																	BgL_res1906z00_1005
																																		=
																																		(long)
																																		(BgL_arg1460z00_1003);
																																	BgL_res1907z00_1006
																																		=
																																		BgL_res1906z00_1005;
																														}}}
																														BgL_arg1352z00_407 =
																															BgL_res1907z00_1006;
																												}}
																												{	/* Jas/opcode.scm 110 */
																													obj_t
																														BgL_list1353z00_408;
																													{	/* Jas/opcode.scm 110 */
																														obj_t
																															BgL_arg1357z00_409;
																														BgL_arg1357z00_409 =
																															MAKE_YOUNG_PAIR
																															(BINT
																															(BgL_arg1352z00_407),
																															BNIL);
																														BgL_list1353z00_408
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_copz00_8,
																															BgL_arg1357z00_409);
																													}
																													return
																														BgL_list1353z00_408;
																												}
																											}
																										}
																									else
																										{	/* Jas/opcode.scm 102 */
																											goto BgL_tagzd2112zd2_336;
																										}
																								}
																							else
																								{	/* Jas/opcode.scm 102 */
																									bool_t BgL_test2102z00_1567;

																									{	/* Jas/opcode.scm 102 */
																										obj_t BgL_tmpz00_1568;

																										BgL_tmpz00_1568 =
																											CAR(BgL_argsz00_9);
																										BgL_test2102z00_1567 =
																											BGL_UINT8P
																											(BgL_tmpz00_1568);
																									}
																									if (BgL_test2102z00_1567)
																										{	/* Jas/opcode.scm 102 */
																											if (NULLP(CDR
																													(BgL_argsz00_9)))
																												{	/* Jas/opcode.scm 102 */
																													{	/* Jas/opcode.scm 111 */
																														long
																															BgL_arg1361z00_411;
																														{	/* Jas/opcode.scm 111 */
																															obj_t
																																BgL_arg1364z00_414;
																															BgL_arg1364z00_414
																																=
																																CAR(((obj_t)
																																	BgL_argsz00_9));
																															{	/* Jas/opcode.scm 111 */
																																long
																																	BgL_res1910z00_1013;
																																{	/* Jas/opcode.scm 111 */
																																	uint8_t
																																		BgL_xz00_1009;
																																	BgL_xz00_1009
																																		=
																																		BGL_BUINT8_TO_UINT8
																																		(BgL_arg1364z00_414);
																																	{	/* Jas/opcode.scm 111 */
																																		long
																																			BgL_arg1459z00_1010;
																																		BgL_arg1459z00_1010
																																			=
																																			(long)
																																			(BgL_xz00_1009);
																																		{	/* Jas/opcode.scm 111 */
																																			long
																																				BgL_res1909z00_1012;
																																			BgL_res1909z00_1012
																																				=
																																				(long)
																																				(BgL_arg1459z00_1010);
																																			BgL_res1910z00_1013
																																				=
																																				BgL_res1909z00_1012;
																																}}}
																																BgL_arg1361z00_411
																																	=
																																	BgL_res1910z00_1013;
																														}}
																														{	/* Jas/opcode.scm 111 */
																															obj_t
																																BgL_list1362z00_412;
																															{	/* Jas/opcode.scm 111 */
																																obj_t
																																	BgL_arg1363z00_413;
																																BgL_arg1363z00_413
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BINT
																																	(BgL_arg1361z00_411),
																																	BNIL);
																																BgL_list1362z00_412
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_copz00_8,
																																	BgL_arg1363z00_413);
																															}
																															return
																																BgL_list1362z00_412;
																														}
																													}
																												}
																											else
																												{	/* Jas/opcode.scm 102 */
																													goto
																														BgL_tagzd2112zd2_336;
																												}
																										}
																									else
																										{	/* Jas/opcode.scm 102 */
																											goto BgL_tagzd2112zd2_336;
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
										{	/* Jas/opcode.scm 102 */
											goto BgL_tagzd2112zd2_336;
										}
								}
								break;
							case ((long) 18):
							case ((long) 19):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 113 */
											obj_t BgL_carzd2134zd2_420;

											BgL_carzd2134zd2_420 = CAR(BgL_argsz00_9);
											{

												if (INTEGERP(BgL_carzd2134zd2_420))
													{	/* Jas/opcode.scm 113 */
													BgL_kapzd2136zd2_421:
														if (NULLP(CDR(((obj_t) BgL_argsz00_9))))
															{	/* Jas/opcode.scm 113 */
																return
																	MAKE_YOUNG_PAIR(BINT(((long) 18)),
																	BgL_argsz00_9);
															}
														else
															{	/* Jas/opcode.scm 113 */
															BgL_tagzd2132zd2_417:
																{	/* Jas/opcode.scm 218 */
																	obj_t BgL_arg1853z00_1050;

																	BgL_arg1853z00_1050 =
																		MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(
																				((long) 0)), (long) CINT(BgL_copz00_8)),
																		BgL_argsz00_9);
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00((
																			(BgL_classfilez00_bglt)
																			BgL_classfilez00_6),
																		BGl_string2060z00zzjas_opcodez00,
																		BgL_arg1853z00_1050);
																}
															}
													}
												else
													{	/* Jas/opcode.scm 113 */
														if (REALP(BgL_carzd2134zd2_420))
															{	/* Jas/opcode.scm 113 */
																goto BgL_kapzd2136zd2_421;
															}
														else
															{	/* Jas/opcode.scm 113 */
																if (STRINGP(BgL_carzd2134zd2_420))
																	{	/* Jas/opcode.scm 113 */
																		goto BgL_kapzd2136zd2_421;
																	}
																else
																	{

																		if (BGL_INT32P(BgL_carzd2134zd2_420))
																			{	/* Jas/opcode.scm 113 */
																			BgL_kapzd2140zd2_426:
																				if (NULLP(CDR(((obj_t) BgL_argsz00_9))))
																					{	/* Jas/opcode.scm 113 */
																						return
																							MAKE_YOUNG_PAIR(BINT(((long) 18)),
																							BgL_argsz00_9);
																					}
																				else
																					{	/* Jas/opcode.scm 113 */
																						goto BgL_tagzd2132zd2_417;
																					}
																			}
																		else
																			{	/* Jas/opcode.scm 113 */
																				if (BGL_UINT32P(BgL_carzd2134zd2_420))
																					{	/* Jas/opcode.scm 113 */
																						goto BgL_kapzd2140zd2_426;
																					}
																				else
																					{	/* Jas/opcode.scm 113 */
																						goto BgL_tagzd2132zd2_417;
																					}
																			}
																	}
															}
													}
											}
										}
									else
										{	/* Jas/opcode.scm 113 */
											goto BgL_tagzd2132zd2_417;
										}
								}
								break;
							case ((long) 20):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 118 */
											obj_t BgL_carzd2145zd2_440;

											BgL_carzd2145zd2_440 = CAR(BgL_argsz00_9);
											{

												if (INTEGERP(BgL_carzd2145zd2_440))
													{	/* Jas/opcode.scm 118 */
													BgL_kapzd2147zd2_441:
														if (NULLP(CDR(((obj_t) BgL_argsz00_9))))
															{	/* Jas/opcode.scm 118 */
																return
																	MAKE_YOUNG_PAIR(BINT(((long) 20)),
																	BgL_argsz00_9);
															}
														else
															{	/* Jas/opcode.scm 118 */
															BgL_tagzd2143zd2_437:
																{	/* Jas/opcode.scm 218 */
																	obj_t BgL_arg1853z00_1064;

																	BgL_arg1853z00_1064 =
																		MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(
																				((long) 0)), (long) CINT(BgL_copz00_8)),
																		BgL_argsz00_9);
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00((
																			(BgL_classfilez00_bglt)
																			BgL_classfilez00_6),
																		BGl_string2060z00zzjas_opcodez00,
																		BgL_arg1853z00_1064);
																}
															}
													}
												else
													{	/* Jas/opcode.scm 118 */
														if (REALP(BgL_carzd2145zd2_440))
															{	/* Jas/opcode.scm 118 */
																goto BgL_kapzd2147zd2_441;
															}
														else
															{	/* Jas/opcode.scm 118 */
																if (ELONGP(BgL_carzd2145zd2_440))
																	{	/* Jas/opcode.scm 118 */
																		goto BgL_kapzd2147zd2_441;
																	}
																else
																	{	/* Jas/opcode.scm 118 */
																		if (LLONGP(BgL_carzd2145zd2_440))
																			{	/* Jas/opcode.scm 118 */
																				goto BgL_kapzd2147zd2_441;
																			}
																		else
																			{

																				if (BGL_UINT64P(BgL_carzd2145zd2_440))
																					{	/* Jas/opcode.scm 118 */
																					BgL_kapzd2152zd2_447:
																						if (NULLP(CDR(
																									((obj_t) BgL_argsz00_9))))
																							{	/* Jas/opcode.scm 118 */
																								return
																									MAKE_YOUNG_PAIR(BINT(((long)
																											20)), BgL_argsz00_9);
																							}
																						else
																							{	/* Jas/opcode.scm 118 */
																								goto BgL_tagzd2143zd2_437;
																							}
																					}
																				else
																					{	/* Jas/opcode.scm 118 */
																						if (BGL_INT64P
																							(BgL_carzd2145zd2_440))
																							{	/* Jas/opcode.scm 118 */
																								goto BgL_kapzd2152zd2_447;
																							}
																						else
																							{	/* Jas/opcode.scm 118 */
																								goto BgL_tagzd2143zd2_437;
																							}
																					}
																			}
																	}
															}
													}
											}
										}
									else
										{	/* Jas/opcode.scm 118 */
											goto BgL_tagzd2143zd2_437;
										}
								}
								break;
							case ((long) 21):
							case ((long) 22):
							case ((long) 23):
							case ((long) 24):
							case ((long) 25):
							case ((long) 54):
							case ((long) 55):
							case ((long) 56):
							case ((long) 57):
							case ((long) 58):
							case ((long) 169):

								{
									obj_t BgL_varz00_456;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 125 */
											obj_t BgL_carzd2158zd2_461;

											BgL_carzd2158zd2_461 = CAR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2158zd2_461))
												{	/* Jas/opcode.scm 125 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 125 */
															BgL_varz00_456 = BgL_carzd2158zd2_461;
															{	/* Jas/opcode.scm 127 */
																obj_t BgL_arg1476z00_466;

																BgL_arg1476z00_466 =
																	BGl_vzd2indexzd2zzjas_opcodez00
																	(BgL_classfilez00_6, BgL_varz00_456,
																	BgL_localsz00_7);
																{	/* Jas/opcode.scm 127 */
																	obj_t BgL_list1477z00_467;

																	{	/* Jas/opcode.scm 127 */
																		obj_t BgL_arg1489z00_468;

																		BgL_arg1489z00_468 =
																			MAKE_YOUNG_PAIR(BgL_arg1476z00_466, BNIL);
																		BgL_list1477z00_467 =
																			MAKE_YOUNG_PAIR(BgL_copz00_8,
																			BgL_arg1489z00_468);
																	}
																	return BgL_list1477z00_467;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 125 */
														BgL_tagzd2154zd2_458:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1080;

																BgL_arg1853z00_1080 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1080);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 125 */
													goto BgL_tagzd2154zd2_458;
												}
										}
									else
										{	/* Jas/opcode.scm 125 */
											goto BgL_tagzd2154zd2_458;
										}
								}
								break;
							case ((long) 26):
							case ((long) 27):
							case ((long) 28):
							case ((long) 29):
							case ((long) 30):
							case ((long) 31):
							case ((long) 32):
							case ((long) 33):
							case ((long) 34):
							case ((long) 35):
							case ((long) 36):
							case ((long) 37):
							case ((long) 38):
							case ((long) 39):
							case ((long) 40):
							case ((long) 41):
							case ((long) 42):
							case ((long) 43):
							case ((long) 44):
							case ((long) 45):

								{

									if (NULLP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 129 */
											{	/* Jas/opcode.scm 131 */
												long BgL_dz00_473;

												BgL_dz00_473 =
													((long) CINT(BgL_copz00_8) - ((long) 26));
												{	/* Jas/opcode.scm 132 */
													long BgL_arg1493z00_474;
													long BgL_arg1495z00_475;

													BgL_arg1493z00_474 =
														(((long) 21) + (BgL_dz00_473 / ((long) 4)));
													{	/* Jas/opcode.scm 132 */
														long BgL_res1960z00_1111;

														{	/* Jas/opcode.scm 132 */
															long BgL_n1z00_1093;
															long BgL_n2z00_1094;

															BgL_n1z00_1093 = BgL_dz00_473;
															BgL_n2z00_1094 = ((long) 4);
															{	/* Jas/opcode.scm 132 */
																bool_t BgL_test2125z00_1669;

																{	/* Jas/opcode.scm 132 */
																	long BgL_arg1356z00_1096;

																	BgL_arg1356z00_1096 =
																		(((BgL_n1z00_1093) | (BgL_n2z00_1094)) &
																		-2147483648);
																	BgL_test2125z00_1669 =
																		(BgL_arg1356z00_1096 == ((long) 0));
																}
																if (BgL_test2125z00_1669)
																	{	/* Jas/opcode.scm 132 */
																		int32_t BgL_arg1353z00_1097;

																		{	/* Jas/opcode.scm 132 */
																			int32_t BgL_arg1354z00_1098;
																			int32_t BgL_arg1355z00_1099;

																			{	/* Jas/opcode.scm 132 */
																				int32_t BgL_res1956z00_1103;

																				BgL_res1956z00_1103 =
																					(int32_t) (BgL_n1z00_1093);
																				BgL_arg1354z00_1098 =
																					BgL_res1956z00_1103;
																			}
																			{	/* Jas/opcode.scm 132 */
																				int32_t BgL_res1957z00_1105;

																				BgL_res1957z00_1105 =
																					(int32_t) (BgL_n2z00_1094);
																				BgL_arg1355z00_1099 =
																					BgL_res1957z00_1105;
																			}
																			BgL_arg1353z00_1097 =
																				(BgL_arg1354z00_1098 %
																				BgL_arg1355z00_1099);
																		}
																		{	/* Jas/opcode.scm 132 */
																			long BgL_res1959z00_1110;

																			{	/* Jas/opcode.scm 132 */
																				long BgL_arg1456z00_1107;

																				BgL_arg1456z00_1107 =
																					(long) (BgL_arg1353z00_1097);
																				{	/* Jas/opcode.scm 132 */
																					long BgL_res1958z00_1109;

																					BgL_res1958z00_1109 =
																						(long) (BgL_arg1456z00_1107);
																					BgL_res1959z00_1110 =
																						BgL_res1958z00_1109;
																			}}
																			BgL_res1960z00_1111 = BgL_res1959z00_1110;
																	}}
																else
																	{	/* Jas/opcode.scm 132 */
																		BgL_res1960z00_1111 =
																			(BgL_n1z00_1093 % BgL_n2z00_1094);
																	}
															}
														}
														BgL_arg1495z00_475 = BgL_res1960z00_1111;
													}
													{	/* Jas/opcode.scm 132 */
														obj_t BgL_list1496z00_476;

														{	/* Jas/opcode.scm 132 */
															obj_t BgL_arg1497z00_477;

															BgL_arg1497z00_477 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1495z00_475), BNIL);
															BgL_list1496z00_476 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1493z00_474),
																BgL_arg1497z00_477);
														}
														return BgL_list1496z00_476;
													}
												}
											}
										}
									else
										{	/* Jas/opcode.scm 129 */
											{	/* Jas/opcode.scm 218 */
												obj_t BgL_arg1853z00_1113;

												BgL_arg1853z00_1113 =
													MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(((long)
																0)), (long) CINT(BgL_copz00_8)), BgL_argsz00_9);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00((
														(BgL_classfilez00_bglt) BgL_classfilez00_6),
													BGl_string2060z00zzjas_opcodez00,
													BgL_arg1853z00_1113);
											}
										}
								}
								break;
							case ((long) 59):
							case ((long) 60):
							case ((long) 61):
							case ((long) 62):
							case ((long) 63):
							case ((long) 64):
							case ((long) 65):
							case ((long) 66):
							case ((long) 67):
							case ((long) 68):
							case ((long) 69):
							case ((long) 70):
							case ((long) 71):
							case ((long) 72):
							case ((long) 73):
							case ((long) 74):
							case ((long) 75):
							case ((long) 76):
							case ((long) 77):
							case ((long) 78):

								{

									if (NULLP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 134 */
											{	/* Jas/opcode.scm 136 */
												long BgL_dz00_483;

												BgL_dz00_483 =
													((long) CINT(BgL_copz00_8) - ((long) 59));
												{	/* Jas/opcode.scm 137 */
													long BgL_arg1521z00_484;
													long BgL_arg1528z00_485;

													BgL_arg1521z00_484 =
														(((long) 54) + (BgL_dz00_483 / ((long) 4)));
													{	/* Jas/opcode.scm 137 */
														long BgL_res1973z00_1140;

														{	/* Jas/opcode.scm 137 */
															long BgL_n1z00_1122;
															long BgL_n2z00_1123;

															BgL_n1z00_1122 = BgL_dz00_483;
															BgL_n2z00_1123 = ((long) 4);
															{	/* Jas/opcode.scm 137 */
																bool_t BgL_test2127z00_1694;

																{	/* Jas/opcode.scm 137 */
																	long BgL_arg1356z00_1125;

																	BgL_arg1356z00_1125 =
																		(((BgL_n1z00_1122) | (BgL_n2z00_1123)) &
																		-2147483648);
																	BgL_test2127z00_1694 =
																		(BgL_arg1356z00_1125 == ((long) 0));
																}
																if (BgL_test2127z00_1694)
																	{	/* Jas/opcode.scm 137 */
																		int32_t BgL_arg1353z00_1126;

																		{	/* Jas/opcode.scm 137 */
																			int32_t BgL_arg1354z00_1127;
																			int32_t BgL_arg1355z00_1128;

																			{	/* Jas/opcode.scm 137 */
																				int32_t BgL_res1969z00_1132;

																				BgL_res1969z00_1132 =
																					(int32_t) (BgL_n1z00_1122);
																				BgL_arg1354z00_1127 =
																					BgL_res1969z00_1132;
																			}
																			{	/* Jas/opcode.scm 137 */
																				int32_t BgL_res1970z00_1134;

																				BgL_res1970z00_1134 =
																					(int32_t) (BgL_n2z00_1123);
																				BgL_arg1355z00_1128 =
																					BgL_res1970z00_1134;
																			}
																			BgL_arg1353z00_1126 =
																				(BgL_arg1354z00_1127 %
																				BgL_arg1355z00_1128);
																		}
																		{	/* Jas/opcode.scm 137 */
																			long BgL_res1972z00_1139;

																			{	/* Jas/opcode.scm 137 */
																				long BgL_arg1456z00_1136;

																				BgL_arg1456z00_1136 =
																					(long) (BgL_arg1353z00_1126);
																				{	/* Jas/opcode.scm 137 */
																					long BgL_res1971z00_1138;

																					BgL_res1971z00_1138 =
																						(long) (BgL_arg1456z00_1136);
																					BgL_res1972z00_1139 =
																						BgL_res1971z00_1138;
																			}}
																			BgL_res1973z00_1140 = BgL_res1972z00_1139;
																	}}
																else
																	{	/* Jas/opcode.scm 137 */
																		BgL_res1973z00_1140 =
																			(BgL_n1z00_1122 % BgL_n2z00_1123);
																	}
															}
														}
														BgL_arg1528z00_485 = BgL_res1973z00_1140;
													}
													{	/* Jas/opcode.scm 137 */
														obj_t BgL_list1529z00_486;

														{	/* Jas/opcode.scm 137 */
															obj_t BgL_arg1536z00_487;

															BgL_arg1536z00_487 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1528z00_485), BNIL);
															BgL_list1529z00_486 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg1521z00_484),
																BgL_arg1536z00_487);
														}
														return BgL_list1529z00_486;
													}
												}
											}
										}
									else
										{	/* Jas/opcode.scm 134 */
											{	/* Jas/opcode.scm 218 */
												obj_t BgL_arg1853z00_1142;

												BgL_arg1853z00_1142 =
													MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(((long)
																0)), (long) CINT(BgL_copz00_8)), BgL_argsz00_9);
												return
													BGl_jaszd2errorzd2zzjas_classfilez00((
														(BgL_classfilez00_bglt) BgL_classfilez00_6),
													BGl_string2060z00zzjas_opcodez00,
													BgL_arg1853z00_1142);
											}
										}
								}
								break;
							case ((long) 132):

								{
									obj_t BgL_varz00_489;
									obj_t BgL_nz00_490;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 139 */
											obj_t BgL_carzd2175zd2_495;
											obj_t BgL_cdrzd2176zd2_496;

											BgL_carzd2175zd2_495 = CAR(BgL_argsz00_9);
											BgL_cdrzd2176zd2_496 = CDR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2175zd2_495))
												{	/* Jas/opcode.scm 139 */
													if (PAIRP(BgL_cdrzd2176zd2_496))
														{	/* Jas/opcode.scm 139 */
															obj_t BgL_carzd2180zd2_499;

															BgL_carzd2180zd2_499 = CAR(BgL_cdrzd2176zd2_496);
															if (INTEGERP(BgL_carzd2180zd2_499))
																{	/* Jas/opcode.scm 139 */
																	if (NULLP(CDR(BgL_cdrzd2176zd2_496)))
																		{	/* Jas/opcode.scm 139 */
																			BgL_varz00_489 = BgL_carzd2175zd2_495;
																			BgL_nz00_490 = BgL_carzd2180zd2_499;
																			{	/* Jas/opcode.scm 142 */
																				obj_t BgL_arg1561z00_504;

																				BgL_arg1561z00_504 =
																					BGl_vzd2indexzd2zzjas_opcodez00
																					(BgL_classfilez00_6, BgL_varz00_489,
																					BgL_localsz00_7);
																				{	/* Jas/opcode.scm 142 */
																					obj_t BgL_list1562z00_505;

																					{	/* Jas/opcode.scm 142 */
																						obj_t BgL_arg1564z00_506;

																						{	/* Jas/opcode.scm 142 */
																							obj_t BgL_arg1565z00_507;

																							BgL_arg1565z00_507 =
																								MAKE_YOUNG_PAIR(BgL_nz00_490,
																								BNIL);
																							BgL_arg1564z00_506 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1561z00_504,
																								BgL_arg1565z00_507);
																						}
																						BgL_list1562z00_505 =
																							MAKE_YOUNG_PAIR(BgL_copz00_8,
																							BgL_arg1564z00_506);
																					}
																					return BgL_list1562z00_505;
																				}
																			}
																		}
																	else
																		{	/* Jas/opcode.scm 139 */
																		BgL_tagzd2169zd2_492:
																			{	/* Jas/opcode.scm 218 */
																				obj_t BgL_arg1853z00_1146;

																				BgL_arg1853z00_1146 =
																					MAKE_YOUNG_PAIR(bgl_list_ref
																					(CNST_TABLE_REF(((long) 0)),
																						(long) CINT(BgL_copz00_8)),
																					BgL_argsz00_9);
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00((
																						(BgL_classfilez00_bglt)
																						BgL_classfilez00_6),
																					BGl_string2060z00zzjas_opcodez00,
																					BgL_arg1853z00_1146);
																			}
																		}
																}
															else
																{	/* Jas/opcode.scm 139 */
																	goto BgL_tagzd2169zd2_492;
																}
														}
													else
														{	/* Jas/opcode.scm 139 */
															goto BgL_tagzd2169zd2_492;
														}
												}
											else
												{	/* Jas/opcode.scm 139 */
													goto BgL_tagzd2169zd2_492;
												}
										}
									else
										{	/* Jas/opcode.scm 139 */
											goto BgL_tagzd2169zd2_492;
										}
								}
								break;
							case ((long) 153):
							case ((long) 154):
							case ((long) 155):
							case ((long) 156):
							case ((long) 157):
							case ((long) 158):
							case ((long) 159):
							case ((long) 160):
							case ((long) 161):
							case ((long) 162):
							case ((long) 163):
							case ((long) 164):
							case ((long) 165):
							case ((long) 166):
							case ((long) 167):
							case ((long) 168):
							case ((long) 198):
							case ((long) 199):
							case ((long) 200):
							case ((long) 201):

								{
									obj_t BgL_labz00_508;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 144 */
											obj_t BgL_carzd2189zd2_513;

											BgL_carzd2189zd2_513 = CAR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2189zd2_513))
												{	/* Jas/opcode.scm 144 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 144 */
															BgL_labz00_508 = BgL_carzd2189zd2_513;
															{	/* Jas/opcode.scm 147 */
																obj_t BgL_list1576z00_518;

																{	/* Jas/opcode.scm 147 */
																	obj_t BgL_arg1578z00_519;

																	BgL_arg1578z00_519 =
																		MAKE_YOUNG_PAIR(BgL_labz00_508, BNIL);
																	BgL_list1576z00_518 =
																		MAKE_YOUNG_PAIR(BgL_copz00_8,
																		BgL_arg1578z00_519);
																}
																return BgL_list1576z00_518;
															}
														}
													else
														{	/* Jas/opcode.scm 144 */
														BgL_tagzd2185zd2_510:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1158;

																BgL_arg1853z00_1158 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1158);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 144 */
													goto BgL_tagzd2185zd2_510;
												}
										}
									else
										{	/* Jas/opcode.scm 144 */
											goto BgL_tagzd2185zd2_510;
										}
								}
								break;
							case ((long) 170):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 149 */
											obj_t BgL_carzd2204zd2_527;
											obj_t BgL_cdrzd2205zd2_528;

											BgL_carzd2204zd2_527 = CAR(BgL_argsz00_9);
											BgL_cdrzd2205zd2_528 = CDR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2204zd2_527))
												{	/* Jas/opcode.scm 149 */
													if (PAIRP(BgL_cdrzd2205zd2_528))
														{	/* Jas/opcode.scm 149 */
															obj_t BgL_carzd2210zd2_532;
															obj_t BgL_cdrzd2211zd2_533;

															BgL_carzd2210zd2_532 = CAR(BgL_cdrzd2205zd2_528);
															BgL_cdrzd2211zd2_533 = CDR(BgL_cdrzd2205zd2_528);
															if (INTEGERP(BgL_carzd2210zd2_532))
																{
																	obj_t BgL_gzd2220zd2_547;
																	obj_t BgL_gzd2216zd2_539;

																	BgL_gzd2216zd2_539 = BgL_cdrzd2211zd2_533;
																	if (NULLP(BgL_gzd2216zd2_539))
																		{	/* Jas/opcode.scm 149 */
																			return
																				MAKE_YOUNG_PAIR(BgL_copz00_8,
																				BgL_argsz00_9);
																		}
																	else
																		{	/* Jas/opcode.scm 149 */
																			if (PAIRP(BgL_gzd2216zd2_539))
																				{	/* Jas/opcode.scm 149 */
																					bool_t BgL_test2142z00_1770;

																					{	/* Jas/opcode.scm 149 */
																						obj_t BgL_tmpz00_1771;

																						BgL_tmpz00_1771 =
																							CAR(BgL_gzd2216zd2_539);
																						BgL_test2142z00_1770 =
																							SYMBOLP(BgL_tmpz00_1771);
																					}
																					if (BgL_test2142z00_1770)
																						{	/* Jas/opcode.scm 149 */
																							BgL_gzd2220zd2_547 =
																								CDR(BgL_gzd2216zd2_539);
																						BgL_zc3z04anonymousza31594ze3z87_548:
																							if (NULLP
																								(BgL_gzd2220zd2_547))
																								{	/* Jas/opcode.scm 149 */
																									return
																										MAKE_YOUNG_PAIR
																										(BgL_copz00_8,
																										BgL_argsz00_9);
																								}
																							else
																								{	/* Jas/opcode.scm 149 */
																									if (PAIRP(BgL_gzd2220zd2_547))
																										{	/* Jas/opcode.scm 149 */
																											bool_t
																												BgL_test2145z00_1779;
																											{	/* Jas/opcode.scm 149 */
																												obj_t BgL_tmpz00_1780;

																												BgL_tmpz00_1780 =
																													CAR
																													(BgL_gzd2220zd2_547);
																												BgL_test2145z00_1779 =
																													SYMBOLP
																													(BgL_tmpz00_1780);
																											}
																											if (BgL_test2145z00_1779)
																												{
																													obj_t
																														BgL_gzd2220zd2_1783;
																													BgL_gzd2220zd2_1783 =
																														CDR
																														(BgL_gzd2220zd2_547);
																													BgL_gzd2220zd2_547 =
																														BgL_gzd2220zd2_1783;
																													goto
																														BgL_zc3z04anonymousza31594ze3z87_548;
																												}
																											else
																												{	/* Jas/opcode.scm 149 */
																												BgL_tagzd2194zd2_524:
																													{	/* Jas/opcode.scm 218 */
																														obj_t
																															BgL_arg1853z00_1165;
																														BgL_arg1853z00_1165
																															=
																															MAKE_YOUNG_PAIR
																															(bgl_list_ref
																															(CNST_TABLE_REF((
																																		(long) 0)),
																																(long)
																																CINT
																																(BgL_copz00_8)),
																															BgL_argsz00_9);
																														return
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(((BgL_classfilez00_bglt) BgL_classfilez00_6), BGl_string2060z00zzjas_opcodez00, BgL_arg1853z00_1165);
																													}
																												}
																										}
																									else
																										{	/* Jas/opcode.scm 149 */
																											goto BgL_tagzd2194zd2_524;
																										}
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 149 */
																							goto BgL_tagzd2194zd2_524;
																						}
																				}
																			else
																				{	/* Jas/opcode.scm 149 */
																					goto BgL_tagzd2194zd2_524;
																				}
																		}
																}
															else
																{	/* Jas/opcode.scm 149 */
																	goto BgL_tagzd2194zd2_524;
																}
														}
													else
														{	/* Jas/opcode.scm 149 */
															goto BgL_tagzd2194zd2_524;
														}
												}
											else
												{	/* Jas/opcode.scm 149 */
													goto BgL_tagzd2194zd2_524;
												}
										}
									else
										{	/* Jas/opcode.scm 149 */
											goto BgL_tagzd2194zd2_524;
										}
								}
								break;
							case ((long) 171):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 155 */
											obj_t BgL_carzd2233zd2_563;
											obj_t BgL_cdrzd2234zd2_564;

											BgL_carzd2233zd2_563 = CAR(BgL_argsz00_9);
											BgL_cdrzd2234zd2_564 = CDR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2233zd2_563))
												{
													obj_t BgL_gzd2243zd2_578;
													obj_t BgL_gzd2239zd2_570;

													BgL_gzd2239zd2_570 = BgL_cdrzd2234zd2_564;
													if (NULLP(BgL_gzd2239zd2_570))
														{	/* Jas/opcode.scm 155 */
															return
																MAKE_YOUNG_PAIR(BgL_copz00_8, BgL_argsz00_9);
														}
													else
														{	/* Jas/opcode.scm 155 */
															if (PAIRP(BgL_gzd2239zd2_570))
																{	/* Jas/opcode.scm 155 */
																	if (BGl_slotzf3zf3zzjas_opcodez00(CAR
																			(BgL_gzd2239zd2_570)))
																		{	/* Jas/opcode.scm 155 */
																			BgL_gzd2243zd2_578 =
																				CDR(BgL_gzd2239zd2_570);
																		BgL_zc3z04anonymousza31625ze3z87_579:
																			if (NULLP(BgL_gzd2243zd2_578))
																				{	/* Jas/opcode.scm 155 */
																					return
																						MAKE_YOUNG_PAIR(BgL_copz00_8,
																						BgL_argsz00_9);
																				}
																			else
																				{	/* Jas/opcode.scm 155 */
																					if (PAIRP(BgL_gzd2243zd2_578))
																						{	/* Jas/opcode.scm 155 */
																							if (BGl_slotzf3zf3zzjas_opcodez00
																								(CAR(BgL_gzd2243zd2_578)))
																								{
																									obj_t BgL_gzd2243zd2_1814;

																									BgL_gzd2243zd2_1814 =
																										CDR(BgL_gzd2243zd2_578);
																									BgL_gzd2243zd2_578 =
																										BgL_gzd2243zd2_1814;
																									goto
																										BgL_zc3z04anonymousza31625ze3z87_579;
																								}
																							else
																								{	/* Jas/opcode.scm 155 */
																								BgL_tagzd2225zd2_560:
																									{	/* Jas/opcode.scm 218 */
																										obj_t BgL_arg1853z00_1185;

																										BgL_arg1853z00_1185 =
																											MAKE_YOUNG_PAIR
																											(bgl_list_ref
																											(CNST_TABLE_REF(((long)
																														0)),
																												(long)
																												CINT(BgL_copz00_8)),
																											BgL_argsz00_9);
																										return
																											BGl_jaszd2errorzd2zzjas_classfilez00
																											(((BgL_classfilez00_bglt)
																												BgL_classfilez00_6),
																											BGl_string2060z00zzjas_opcodez00,
																											BgL_arg1853z00_1185);
																									}
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 155 */
																							goto BgL_tagzd2225zd2_560;
																						}
																				}
																		}
																	else
																		{	/* Jas/opcode.scm 155 */
																			goto BgL_tagzd2225zd2_560;
																		}
																}
															else
																{	/* Jas/opcode.scm 155 */
																	goto BgL_tagzd2225zd2_560;
																}
														}
												}
											else
												{	/* Jas/opcode.scm 155 */
													goto BgL_tagzd2225zd2_560;
												}
										}
									else
										{	/* Jas/opcode.scm 155 */
											goto BgL_tagzd2225zd2_560;
										}
								}
								break;
							case ((long) 178):
							case ((long) 179):
							case ((long) 180):
							case ((long) 181):

								{
									obj_t BgL_varz00_588;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 160 */
											obj_t BgL_carzd2252zd2_593;

											BgL_carzd2252zd2_593 = CAR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2252zd2_593))
												{	/* Jas/opcode.scm 160 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 160 */
															BgL_varz00_588 = BgL_carzd2252zd2_593;
															{	/* Jas/opcode.scm 162 */
																BgL_fieldz00_bglt BgL_arg1662z00_598;

																BgL_arg1662z00_598 =
																	BGl_declaredzd2fieldzd2zzjas_classfilez00(
																	((BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BgL_varz00_588);
																{	/* Jas/opcode.scm 162 */
																	obj_t BgL_list1663z00_599;

																	{	/* Jas/opcode.scm 162 */
																		obj_t BgL_arg1664z00_600;

																		BgL_arg1664z00_600 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg1662z00_598), BNIL);
																		BgL_list1663z00_599 =
																			MAKE_YOUNG_PAIR(BgL_copz00_8,
																			BgL_arg1664z00_600);
																	}
																	return BgL_list1663z00_599;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 160 */
														BgL_tagzd2248zd2_590:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1200;

																BgL_arg1853z00_1200 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1200);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 160 */
													goto BgL_tagzd2248zd2_590;
												}
										}
									else
										{	/* Jas/opcode.scm 160 */
											goto BgL_tagzd2248zd2_590;
										}
								}
								break;
							case ((long) 182):
							case ((long) 183):
							case ((long) 184):
							case ((long) 185):

								{
									obj_t BgL_varz00_601;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 164 */
											obj_t BgL_carzd2261zd2_606;

											BgL_carzd2261zd2_606 = CAR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2261zd2_606))
												{	/* Jas/opcode.scm 164 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 164 */
															BgL_varz00_601 = BgL_carzd2261zd2_606;
															{	/* Jas/opcode.scm 166 */
																BgL_methodz00_bglt BgL_arg1672z00_611;

																BgL_arg1672z00_611 =
																	BGl_declaredzd2methodzd2zzjas_classfilez00(
																	((BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BgL_varz00_601);
																{	/* Jas/opcode.scm 166 */
																	obj_t BgL_list1673z00_612;

																	{	/* Jas/opcode.scm 166 */
																		obj_t BgL_arg1684z00_613;

																		BgL_arg1684z00_613 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg1672z00_611), BNIL);
																		BgL_list1673z00_612 =
																			MAKE_YOUNG_PAIR(BgL_copz00_8,
																			BgL_arg1684z00_613);
																	}
																	return BgL_list1673z00_612;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 164 */
														BgL_tagzd2257zd2_603:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1208;

																BgL_arg1853z00_1208 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1208);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 164 */
													goto BgL_tagzd2257zd2_603;
												}
										}
									else
										{	/* Jas/opcode.scm 164 */
											goto BgL_tagzd2257zd2_603;
										}
								}
								break;
							case ((long) 187):

								{
									obj_t BgL_varz00_614;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 168 */
											obj_t BgL_carzd2270zd2_619;

											BgL_carzd2270zd2_619 = CAR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2270zd2_619))
												{	/* Jas/opcode.scm 168 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 168 */
															BgL_varz00_614 = BgL_carzd2270zd2_619;
															{	/* Jas/opcode.scm 170 */
																BgL_classez00_bglt BgL_arg1695z00_624;

																BgL_arg1695z00_624 =
																	BGl_declaredzd2classzd2zzjas_classfilez00(
																	((BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BgL_varz00_614);
																{	/* Jas/opcode.scm 170 */
																	obj_t BgL_list1696z00_625;

																	{	/* Jas/opcode.scm 170 */
																		obj_t BgL_arg1697z00_626;

																		BgL_arg1697z00_626 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg1695z00_624), BNIL);
																		BgL_list1696z00_625 =
																			MAKE_YOUNG_PAIR(BgL_copz00_8,
																			BgL_arg1697z00_626);
																	}
																	return BgL_list1696z00_625;
																}
															}
														}
													else
														{	/* Jas/opcode.scm 168 */
														BgL_tagzd2266zd2_616:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1216;

																BgL_arg1853z00_1216 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1216);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 168 */
													goto BgL_tagzd2266zd2_616;
												}
										}
									else
										{	/* Jas/opcode.scm 168 */
											goto BgL_tagzd2266zd2_616;
										}
								}
								break;
							case ((long) 188):

								{
									obj_t BgL_typez00_627;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 172 */
											if (NULLP(CDR(BgL_argsz00_9)))
												{	/* Jas/opcode.scm 172 */
													BgL_typez00_627 = CAR(BgL_argsz00_9);
													{	/* Jas/opcode.scm 174 */
														obj_t BgL_arg1711z00_636;

														BgL_arg1711z00_636 =
															BGl_getzd2typezd2numz00zzjas_opcodez00
															(BgL_classfilez00_6, BgL_typez00_627);
														{	/* Jas/opcode.scm 174 */
															obj_t BgL_list1712z00_637;

															{	/* Jas/opcode.scm 174 */
																obj_t BgL_arg1719z00_638;

																BgL_arg1719z00_638 =
																	MAKE_YOUNG_PAIR(BgL_arg1711z00_636, BNIL);
																BgL_list1712z00_637 =
																	MAKE_YOUNG_PAIR(BgL_copz00_8,
																	BgL_arg1719z00_638);
															}
															return BgL_list1712z00_637;
														}
													}
												}
											else
												{	/* Jas/opcode.scm 172 */
												BgL_tagzd2275zd2_629:
													{	/* Jas/opcode.scm 218 */
														obj_t BgL_arg1853z00_1224;

														BgL_arg1853z00_1224 =
															MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																		(long) 0)), (long) CINT(BgL_copz00_8)),
															BgL_argsz00_9);
														return
															BGl_jaszd2errorzd2zzjas_classfilez00((
																(BgL_classfilez00_bglt) BgL_classfilez00_6),
															BGl_string2060z00zzjas_opcodez00,
															BgL_arg1853z00_1224);
													}
												}
										}
									else
										{	/* Jas/opcode.scm 172 */
											goto BgL_tagzd2275zd2_629;
										}
								}
								break;
							case ((long) 189):
							case ((long) 192):
							case ((long) 193):

								{
									obj_t BgL_typez00_639;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 176 */
											if (NULLP(CDR(BgL_argsz00_9)))
												{	/* Jas/opcode.scm 176 */
													BgL_typez00_639 = CAR(BgL_argsz00_9);
													{	/* Jas/opcode.scm 178 */
														BgL_jastypez00_bglt BgL_arg1729z00_648;

														BgL_arg1729z00_648 =
															BGl_aszd2typezd2zzjas_classfilez00(
															((BgL_classfilez00_bglt) BgL_classfilez00_6),
															BgL_typez00_639);
														{	/* Jas/opcode.scm 178 */
															obj_t BgL_list1730z00_649;

															{	/* Jas/opcode.scm 178 */
																obj_t BgL_arg1731z00_650;

																BgL_arg1731z00_650 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1729z00_648), BNIL);
																BgL_list1730z00_649 =
																	MAKE_YOUNG_PAIR(BgL_copz00_8,
																	BgL_arg1731z00_650);
															}
															return BgL_list1730z00_649;
														}
													}
												}
											else
												{	/* Jas/opcode.scm 176 */
												BgL_tagzd2283zd2_641:
													{	/* Jas/opcode.scm 218 */
														obj_t BgL_arg1853z00_1231;

														BgL_arg1853z00_1231 =
															MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																		(long) 0)), (long) CINT(BgL_copz00_8)),
															BgL_argsz00_9);
														return
															BGl_jaszd2errorzd2zzjas_classfilez00((
																(BgL_classfilez00_bglt) BgL_classfilez00_6),
															BGl_string2060z00zzjas_opcodez00,
															BgL_arg1853z00_1231);
													}
												}
										}
									else
										{	/* Jas/opcode.scm 176 */
											goto BgL_tagzd2283zd2_641;
										}
								}
								break;
							case ((long) 196):

								{
									obj_t BgL_wcopz00_651;
									obj_t BgL_wargsz00_652;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 180 */
											obj_t BgL_carzd2297zd2_657;

											BgL_carzd2297zd2_657 = CAR(BgL_argsz00_9);
											if (PAIRP(BgL_carzd2297zd2_657))
												{	/* Jas/opcode.scm 180 */
													if (NULLP(CDR(BgL_argsz00_9)))
														{	/* Jas/opcode.scm 180 */
															BgL_wcopz00_651 = CAR(BgL_carzd2297zd2_657);
															BgL_wargsz00_652 = CDR(BgL_carzd2297zd2_657);
															{	/* Jas/opcode.scm 183 */
																obj_t BgL_ncopz00_664;

																if (SYMBOLP(BgL_wcopz00_651))
																	{	/* Jas/opcode.scm 68 */
																		BgL_ncopz00_664 =
																			BGl_getpropz00zz__r4_symbols_6_4z00
																			(BgL_wcopz00_651,
																			CNST_TABLE_REF(((long) 1)));
																	}
																else
																	{	/* Jas/opcode.scm 68 */
																		BgL_ncopz00_664 =
																			BGl_jaszd2errorzd2zzjas_classfilez00(
																			((BgL_classfilez00_bglt)
																				BgL_classfilez00_6),
																			BGl_string2058z00zzjas_opcodez00,
																			BgL_wcopz00_651);
																	}
																if (CBOOL(BgL_ncopz00_664))
																	{
																		obj_t BgL_argsz00_1929;
																		obj_t BgL_copz00_1928;

																		BgL_copz00_1928 = BgL_ncopz00_664;
																		BgL_argsz00_1929 = BgL_wargsz00_652;
																		BgL_argsz00_9 = BgL_argsz00_1929;
																		BgL_copz00_8 = BgL_copz00_1928;
																		goto BGl_resolvezd2argszd2zzjas_opcodez00;
																	}
																else
																	{	/* Jas/opcode.scm 184 */
																		return
																			BGl_jaszd2errorzd2zzjas_classfilez00(
																			((BgL_classfilez00_bglt)
																				BgL_classfilez00_6),
																			BGl_string2061z00zzjas_opcodez00,
																			BgL_wcopz00_651);
																	}
															}
														}
													else
														{	/* Jas/opcode.scm 180 */
														BgL_tagzd2291zd2_654:
															{	/* Jas/opcode.scm 218 */
																obj_t BgL_arg1853z00_1239;

																BgL_arg1853z00_1239 =
																	MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF((
																				(long) 0)), (long) CINT(BgL_copz00_8)),
																	BgL_argsz00_9);
																return
																	BGl_jaszd2errorzd2zzjas_classfilez00((
																		(BgL_classfilez00_bglt) BgL_classfilez00_6),
																	BGl_string2060z00zzjas_opcodez00,
																	BgL_arg1853z00_1239);
															}
														}
												}
											else
												{	/* Jas/opcode.scm 180 */
													goto BgL_tagzd2291zd2_654;
												}
										}
									else
										{	/* Jas/opcode.scm 180 */
											goto BgL_tagzd2291zd2_654;
										}
								}
								break;
							case ((long) 197):

								{
									obj_t BgL_typez00_665;
									obj_t BgL_nz00_666;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 188 */
											obj_t BgL_cdrzd2313zd2_671;

											BgL_cdrzd2313zd2_671 = CDR(BgL_argsz00_9);
											if (PAIRP(BgL_cdrzd2313zd2_671))
												{	/* Jas/opcode.scm 188 */
													obj_t BgL_carzd2316zd2_673;

													BgL_carzd2316zd2_673 = CAR(BgL_cdrzd2313zd2_671);
													if (INTEGERP(BgL_carzd2316zd2_673))
														{	/* Jas/opcode.scm 188 */
															if (NULLP(CDR(BgL_cdrzd2313zd2_671)))
																{	/* Jas/opcode.scm 188 */
																	BgL_typez00_665 = CAR(BgL_argsz00_9);
																	BgL_nz00_666 = BgL_carzd2316zd2_673;
																	{	/* Jas/opcode.scm 190 */
																		BgL_jastypez00_bglt BgL_arg1756z00_679;

																		BgL_arg1756z00_679 =
																			BGl_aszd2typezd2zzjas_classfilez00(
																			((BgL_classfilez00_bglt)
																				BgL_classfilez00_6), BgL_typez00_665);
																		{	/* Jas/opcode.scm 190 */
																			obj_t BgL_list1757z00_680;

																			{	/* Jas/opcode.scm 190 */
																				obj_t BgL_arg1759z00_681;

																				{	/* Jas/opcode.scm 190 */
																					obj_t BgL_arg1760z00_682;

																					BgL_arg1760z00_682 =
																						MAKE_YOUNG_PAIR(BgL_nz00_666, BNIL);
																					BgL_arg1759z00_681 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg1756z00_679),
																						BgL_arg1760z00_682);
																				}
																				BgL_list1757z00_680 =
																					MAKE_YOUNG_PAIR(BgL_copz00_8,
																					BgL_arg1759z00_681);
																			}
																			return BgL_list1757z00_680;
																		}
																	}
																}
															else
																{	/* Jas/opcode.scm 188 */
																BgL_tagzd2306zd2_668:
																	{	/* Jas/opcode.scm 218 */
																		obj_t BgL_arg1853z00_1249;

																		BgL_arg1853z00_1249 =
																			MAKE_YOUNG_PAIR(bgl_list_ref
																			(CNST_TABLE_REF(((long) 0)),
																				(long) CINT(BgL_copz00_8)),
																			BgL_argsz00_9);
																		return
																			BGl_jaszd2errorzd2zzjas_classfilez00((
																				(BgL_classfilez00_bglt)
																				BgL_classfilez00_6),
																			BGl_string2060z00zzjas_opcodez00,
																			BgL_arg1853z00_1249);
																	}
																}
														}
													else
														{	/* Jas/opcode.scm 188 */
															goto BgL_tagzd2306zd2_668;
														}
												}
											else
												{	/* Jas/opcode.scm 188 */
													goto BgL_tagzd2306zd2_668;
												}
										}
									else
										{	/* Jas/opcode.scm 188 */
											goto BgL_tagzd2306zd2_668;
										}
								}
								break;
							case ((long) 202):

								{
									obj_t BgL_begz00_683;
									obj_t BgL_endz00_684;
									obj_t BgL_labz00_685;
									obj_t BgL_typez00_686;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 192 */
											obj_t BgL_cdrzd2331zd2_690;

											BgL_cdrzd2331zd2_690 = CDR(BgL_argsz00_9);
											if (PAIRP(BgL_cdrzd2331zd2_690))
												{	/* Jas/opcode.scm 192 */
													obj_t BgL_cdrzd2337zd2_692;

													BgL_cdrzd2337zd2_692 = CDR(BgL_cdrzd2331zd2_690);
													if (PAIRP(BgL_cdrzd2337zd2_692))
														{	/* Jas/opcode.scm 192 */
															obj_t BgL_cdrzd2342zd2_694;

															BgL_cdrzd2342zd2_694 = CDR(BgL_cdrzd2337zd2_692);
															if (PAIRP(BgL_cdrzd2342zd2_694))
																{	/* Jas/opcode.scm 192 */
																	if (NULLP(CDR(BgL_cdrzd2342zd2_694)))
																		{	/* Jas/opcode.scm 192 */
																			BgL_begz00_683 = CAR(BgL_argsz00_9);
																			BgL_endz00_684 =
																				CAR(BgL_cdrzd2331zd2_690);
																			BgL_labz00_685 =
																				CAR(BgL_cdrzd2337zd2_692);
																			BgL_typez00_686 =
																				CAR(BgL_cdrzd2342zd2_694);
																			{	/* Jas/opcode.scm 196 */
																				long BgL_arg1784z00_703;

																				if (
																					(BgL_typez00_686 == BINT(((long) 0))))
																					{	/* Jas/opcode.scm 196 */
																						BgL_arg1784z00_703 = ((long) 0);
																					}
																				else
																					{	/* Jas/opcode.scm 196 */
																						BgL_arg1784z00_703 =
																							(long)
																							(BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00
																							(((BgL_classfilez00_bglt)
																									BgL_classfilez00_6),
																								BgL_typez00_686));
																					}
																				{	/* Jas/opcode.scm 195 */
																					obj_t BgL_list1785z00_704;

																					{	/* Jas/opcode.scm 195 */
																						obj_t BgL_arg1790z00_705;

																						{	/* Jas/opcode.scm 195 */
																							obj_t BgL_arg1796z00_706;

																							{	/* Jas/opcode.scm 195 */
																								obj_t BgL_arg1798z00_707;

																								{	/* Jas/opcode.scm 195 */
																									obj_t BgL_arg1801z00_708;

																									BgL_arg1801z00_708 =
																										MAKE_YOUNG_PAIR(BINT
																										(BgL_arg1784z00_703), BNIL);
																									BgL_arg1798z00_707 =
																										MAKE_YOUNG_PAIR
																										(BgL_labz00_685,
																										BgL_arg1801z00_708);
																								}
																								BgL_arg1796z00_706 =
																									MAKE_YOUNG_PAIR
																									(BgL_endz00_684,
																									BgL_arg1798z00_707);
																							}
																							BgL_arg1790z00_705 =
																								MAKE_YOUNG_PAIR(BgL_begz00_683,
																								BgL_arg1796z00_706);
																						}
																						BgL_list1785z00_704 =
																							MAKE_YOUNG_PAIR(BgL_copz00_8,
																							BgL_arg1790z00_705);
																					}
																					return BgL_list1785z00_704;
																				}
																			}
																		}
																	else
																		{	/* Jas/opcode.scm 192 */
																			return BFALSE;
																		}
																}
															else
																{	/* Jas/opcode.scm 192 */
																	return BFALSE;
																}
														}
													else
														{	/* Jas/opcode.scm 192 */
															return BFALSE;
														}
												}
											else
												{	/* Jas/opcode.scm 192 */
													return BFALSE;
												}
										}
									else
										{	/* Jas/opcode.scm 192 */
											return BFALSE;
										}
								}
								break;
							case ((long) 203):

								{

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 197 */
											obj_t BgL_cdrzd2352zd2_714;

											BgL_cdrzd2352zd2_714 = CDR(BgL_argsz00_9);
											if (INTEGERP(CAR(BgL_argsz00_9)))
												{	/* Jas/opcode.scm 197 */
													if (PAIRP(BgL_cdrzd2352zd2_714))
														{	/* Jas/opcode.scm 197 */
															if (INTEGERP(CAR(BgL_cdrzd2352zd2_714)))
																{	/* Jas/opcode.scm 197 */
																	if (NULLP(CDR(BgL_cdrzd2352zd2_714)))
																		{	/* Jas/opcode.scm 197 */
																			return
																				MAKE_YOUNG_PAIR(BgL_copz00_8,
																				BgL_argsz00_9);
																		}
																	else
																		{	/* Jas/opcode.scm 197 */
																		BgL_tagzd2349zd2_711:
																			{	/* Jas/opcode.scm 218 */
																				obj_t BgL_arg1853z00_1273;

																				BgL_arg1853z00_1273 =
																					MAKE_YOUNG_PAIR(bgl_list_ref
																					(CNST_TABLE_REF(((long) 0)),
																						(long) CINT(BgL_copz00_8)),
																					BgL_argsz00_9);
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00((
																						(BgL_classfilez00_bglt)
																						BgL_classfilez00_6),
																					BGl_string2060z00zzjas_opcodez00,
																					BgL_arg1853z00_1273);
																			}
																		}
																}
															else
																{	/* Jas/opcode.scm 197 */
																	goto BgL_tagzd2349zd2_711;
																}
														}
													else
														{	/* Jas/opcode.scm 197 */
															goto BgL_tagzd2349zd2_711;
														}
												}
											else
												{	/* Jas/opcode.scm 197 */
													goto BgL_tagzd2349zd2_711;
												}
										}
									else
										{	/* Jas/opcode.scm 197 */
											goto BgL_tagzd2349zd2_711;
										}
								}
								break;
							case ((long) 204):

								return MAKE_YOUNG_PAIR(BgL_copz00_8, BgL_argsz00_9);
								break;
							case ((long) 205):

								{
									obj_t BgL_begz00_725;
									obj_t BgL_endz00_726;
									obj_t BgL_namez00_727;
									obj_t BgL_typez00_728;
									obj_t BgL_varz00_729;

									if (PAIRP(BgL_argsz00_9))
										{	/* Jas/opcode.scm 203 */
											obj_t BgL_carzd2368zd2_734;
											obj_t BgL_cdrzd2369zd2_735;

											BgL_carzd2368zd2_734 = CAR(BgL_argsz00_9);
											BgL_cdrzd2369zd2_735 = CDR(BgL_argsz00_9);
											if (SYMBOLP(BgL_carzd2368zd2_734))
												{	/* Jas/opcode.scm 203 */
													if (PAIRP(BgL_cdrzd2369zd2_735))
														{	/* Jas/opcode.scm 203 */
															obj_t BgL_carzd2376zd2_738;
															obj_t BgL_cdrzd2377zd2_739;

															BgL_carzd2376zd2_738 = CAR(BgL_cdrzd2369zd2_735);
															BgL_cdrzd2377zd2_739 = CDR(BgL_cdrzd2369zd2_735);
															if (SYMBOLP(BgL_carzd2376zd2_738))
																{	/* Jas/opcode.scm 203 */
																	if (PAIRP(BgL_cdrzd2377zd2_739))
																		{	/* Jas/opcode.scm 203 */
																			obj_t BgL_carzd2383zd2_742;
																			obj_t BgL_cdrzd2384zd2_743;

																			BgL_carzd2383zd2_742 =
																				CAR(BgL_cdrzd2377zd2_739);
																			BgL_cdrzd2384zd2_743 =
																				CDR(BgL_cdrzd2377zd2_739);
																			if (STRINGP(BgL_carzd2383zd2_742))
																				{	/* Jas/opcode.scm 203 */
																					if (PAIRP(BgL_cdrzd2384zd2_743))
																						{	/* Jas/opcode.scm 203 */
																							obj_t BgL_cdrzd2390zd2_746;

																							BgL_cdrzd2390zd2_746 =
																								CDR(BgL_cdrzd2384zd2_743);
																							if (PAIRP(BgL_cdrzd2390zd2_746))
																								{	/* Jas/opcode.scm 203 */
																									obj_t BgL_carzd2393zd2_748;

																									BgL_carzd2393zd2_748 =
																										CAR(BgL_cdrzd2390zd2_746);
																									if (SYMBOLP
																										(BgL_carzd2393zd2_748))
																										{	/* Jas/opcode.scm 203 */
																											if (NULLP(CDR
																													(BgL_cdrzd2390zd2_746)))
																												{	/* Jas/opcode.scm 203 */
																													BgL_begz00_725 =
																														BgL_carzd2368zd2_734;
																													BgL_endz00_726 =
																														BgL_carzd2376zd2_738;
																													BgL_namez00_727 =
																														BgL_carzd2383zd2_742;
																													BgL_typez00_728 =
																														CAR
																														(BgL_cdrzd2384zd2_743);
																													BgL_varz00_729 =
																														BgL_carzd2393zd2_748;
																													{	/* Jas/opcode.scm 211 */
																														BgL_jastypez00_bglt
																															BgL_arg1842z00_754;
																														obj_t
																															BgL_arg1845z00_755;
																														BgL_arg1842z00_754 =
																															BGl_aszd2typezd2zzjas_classfilez00
																															(((BgL_classfilez00_bglt) BgL_classfilez00_6), BgL_typez00_728);
																														BgL_arg1845z00_755 =
																															BGl_vzd2indexzd2zzjas_opcodez00
																															(BgL_classfilez00_6,
																															BgL_varz00_729,
																															BgL_localsz00_7);
																														{	/* Jas/opcode.scm 210 */
																															obj_t
																																BgL_list1846z00_756;
																															{	/* Jas/opcode.scm 210 */
																																obj_t
																																	BgL_arg1847z00_757;
																																{	/* Jas/opcode.scm 210 */
																																	obj_t
																																		BgL_arg1848z00_758;
																																	{	/* Jas/opcode.scm 210 */
																																		obj_t
																																			BgL_arg1850z00_759;
																																		{	/* Jas/opcode.scm 210 */
																																			obj_t
																																				BgL_arg1851z00_760;
																																			{	/* Jas/opcode.scm 210 */
																																				obj_t
																																					BgL_arg1852z00_761;
																																				BgL_arg1852z00_761
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1845z00_755,
																																					BNIL);
																																				BgL_arg1851z00_760
																																					=
																																					MAKE_YOUNG_PAIR
																																					(((obj_t) BgL_arg1842z00_754), BgL_arg1852z00_761);
																																			}
																																			BgL_arg1850z00_759
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_namez00_727,
																																				BgL_arg1851z00_760);
																																		}
																																		BgL_arg1848z00_758
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_endz00_726,
																																			BgL_arg1850z00_759);
																																	}
																																	BgL_arg1847z00_757
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_begz00_725,
																																		BgL_arg1848z00_758);
																																}
																																BgL_list1846z00_756
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_copz00_8,
																																	BgL_arg1847z00_757);
																															}
																															return
																																BgL_list1846z00_756;
																														}
																													}
																												}
																											else
																												{	/* Jas/opcode.scm 203 */
																												BgL_tagzd2356zd2_731:
																													{	/* Jas/opcode.scm 218 */
																														obj_t
																															BgL_arg1853z00_1285;
																														BgL_arg1853z00_1285
																															=
																															MAKE_YOUNG_PAIR
																															(bgl_list_ref
																															(CNST_TABLE_REF((
																																		(long) 0)),
																																(long)
																																CINT
																																(BgL_copz00_8)),
																															BgL_argsz00_9);
																														return
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(((BgL_classfilez00_bglt) BgL_classfilez00_6), BGl_string2060z00zzjas_opcodez00, BgL_arg1853z00_1285);
																													}
																												}
																										}
																									else
																										{	/* Jas/opcode.scm 203 */
																											goto BgL_tagzd2356zd2_731;
																										}
																								}
																							else
																								{	/* Jas/opcode.scm 203 */
																									goto BgL_tagzd2356zd2_731;
																								}
																						}
																					else
																						{	/* Jas/opcode.scm 203 */
																							goto BgL_tagzd2356zd2_731;
																						}
																				}
																			else
																				{	/* Jas/opcode.scm 203 */
																					goto BgL_tagzd2356zd2_731;
																				}
																		}
																	else
																		{	/* Jas/opcode.scm 203 */
																			goto BgL_tagzd2356zd2_731;
																		}
																}
															else
																{	/* Jas/opcode.scm 203 */
																	goto BgL_tagzd2356zd2_731;
																}
														}
													else
														{	/* Jas/opcode.scm 203 */
															goto BgL_tagzd2356zd2_731;
														}
												}
											else
												{	/* Jas/opcode.scm 203 */
													goto BgL_tagzd2356zd2_731;
												}
										}
									else
										{	/* Jas/opcode.scm 203 */
											goto BgL_tagzd2356zd2_731;
										}
								}
								break;
							default:
							BgL_case_else1056z00_321:
								return
									BGl_jaszd2errorzd2zzjas_classfilez00(
									((BgL_classfilez00_bglt) BgL_classfilez00_6),
									BGl_string2059z00zzjas_opcodez00, BgL_copz00_8);
							}
					}
				else
					{	/* Jas/opcode.scm 88 */
						goto BgL_case_else1056z00_321;
					}
			}
		}

	}



/* slot? */
	bool_t BGl_slotzf3zf3zzjas_opcodez00(obj_t BgL_slotz00_13)
	{
		{	/* Jas/opcode.scm 221 */
			if (PAIRP(BgL_slotz00_13))
				{	/* Jas/opcode.scm 222 */
					if (INTEGERP(CAR(BgL_slotz00_13)))
						{	/* Jas/opcode.scm 222 */
							obj_t BgL_tmpz00_2071;

							BgL_tmpz00_2071 = CDR(BgL_slotz00_13);
							return SYMBOLP(BgL_tmpz00_2071);
						}
					else
						{	/* Jas/opcode.scm 222 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Jas/opcode.scm 222 */
					return ((bool_t) 0);
				}
		}

	}



/* get-type-num */
	obj_t BGl_getzd2typezd2numz00zzjas_opcodez00(obj_t BgL_classfilez00_14,
		obj_t BgL_typez00_15)
	{
		{	/* Jas/opcode.scm 225 */
			{	/* Jas/opcode.scm 226 */
				obj_t BgL_slotz00_768;

				BgL_slotz00_768 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_15,
					CNST_TABLE_REF(((long) 2)));
				if (CBOOL(BgL_slotz00_768))
					{	/* Jas/opcode.scm 229 */
						return CDR(((obj_t) BgL_slotz00_768));
					}
				else
					{	/* Jas/opcode.scm 231 */
						obj_t BgL_arg1858z00_769;

						{	/* Jas/opcode.scm 231 */
							obj_t BgL_list1859z00_770;

							BgL_list1859z00_770 = MAKE_YOUNG_PAIR(BgL_typez00_15, BNIL);
							BgL_arg1858z00_769 = BgL_list1859z00_770;
						}
						{	/* Jas/opcode.scm 218 */
							obj_t BgL_arg1853z00_1316;

							BgL_arg1853z00_1316 =
								MAKE_YOUNG_PAIR(bgl_list_ref(CNST_TABLE_REF(((long) 0)),
									((long) 188)), BgL_arg1858z00_769);
							return
								BGl_jaszd2errorzd2zzjas_classfilez00(((BgL_classfilez00_bglt)
									BgL_classfilez00_14), BGl_string2060z00zzjas_opcodez00,
								BgL_arg1853z00_1316);
						}
					}
			}
		}

	}



/* v-index */
	obj_t BGl_vzd2indexzd2zzjas_opcodez00(obj_t BgL_classfilez00_16,
		obj_t BgL_varz00_17, obj_t BgL_localsz00_18)
	{
		{	/* Jas/opcode.scm 234 */
			{
				obj_t BgL_lz00_772;
				long BgL_nz00_773;

				BgL_lz00_772 = BgL_localsz00_18;
				BgL_nz00_773 = ((long) 0);
			BgL_zc3z04anonymousza31860ze3z87_774:
				if (NULLP(BgL_lz00_772))
					{	/* Jas/opcode.scm 237 */
						return
							BGl_jaszd2errorzd2zzjas_classfilez00(
							((BgL_classfilez00_bglt) BgL_classfilez00_16),
							BGl_string2062z00zzjas_opcodez00, BgL_varz00_17);
					}
				else
					{	/* Jas/opcode.scm 237 */
						if ((CAR(((obj_t) BgL_lz00_772)) == BgL_varz00_17))
							{	/* Jas/opcode.scm 238 */
								return BINT(BgL_nz00_773);
							}
						else
							{	/* Jas/opcode.scm 239 */
								obj_t BgL_arg1865z00_778;
								long BgL_arg1866z00_779;

								BgL_arg1865z00_778 = CDR(((obj_t) BgL_lz00_772));
								BgL_arg1866z00_779 = (BgL_nz00_773 + ((long) 1));
								{
									long BgL_nz00_2099;
									obj_t BgL_lz00_2098;

									BgL_lz00_2098 = BgL_arg1865z00_778;
									BgL_nz00_2099 = BgL_arg1866z00_779;
									BgL_nz00_773 = BgL_nz00_2099;
									BgL_lz00_772 = BgL_lz00_2098;
									goto BgL_zc3z04anonymousza31860ze3z87_774;
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_opcodez00()
	{
		{	/* Jas/opcode.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string2063z00zzjas_opcodez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string2063z00zzjas_opcodez00));
		}

	}

#ifdef __cplusplus
}
#endif
