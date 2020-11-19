/*===========================================================================*/
/*   (Pp/circle.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Pp/circle.scm -indent -o objs/obj_u/Pp/circle.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62outputzd2componentzb0zz__pp_circlez00(obj_t, bool_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2debuggingzd2printz62zz__pp_circlez00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_write_ucs2(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__pp_circlez00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_char(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__pp_circlez00();
	static obj_t BGl_objectzd2initzd2zz__pp_circlez00();
	extern obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL char *BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t,
		int);
	extern bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31330ze3ze5zz__pp_circlez00(obj_t);
	extern obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__pp_circlez00();
	static obj_t BGl_registerze70ze7zz__pp_circlez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31332ze3ze5zz__pp_circlez00(obj_t);
	BGL_EXPORTED_DECL obj_t dprint(obj_t);
	static obj_t BGl_loopzd2matchedze70z35zz__pp_circlez00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	static obj_t BGl__displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31274ze3ze5zz__pp_circlez00(obj_t, obj_t,
		obj_t);
	extern obj_t string_for_read(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t bgl_display_ucs2(obj_t, obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__pp_circlez00();
	static obj_t BGl_gczd2rootszd2initz00zz__pp_circlez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__pp_circlez00();
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_display_fixnum(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_z62czd2debuggingzd2printz62zz__pp_circlez00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_circlezd2writezf2displayz20zz__pp_circlez00(obj_t, obj_t,
		bool_t);
	static obj_t BGl_symbol1908z00zz__pp_circlez00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_czd2debuggingzd2printzd2envzd2zz__pp_circlez00,
		BgL_bgl_za762cza7d2debugging1920z00,
		BGl_z62czd2debuggingzd2printz62zz__pp_circlez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2debuggingzd2printzd2envzd2zz__pp_circlez00,
		BgL_bgl_za762jvmza7d2debuggi1921z00,
		BGl_z62jvmzd2debuggingzd2printz62zz__pp_circlez00, 0L, BUNSPEC, 2);
	      DEFINE_REAL(BGl_real1910z00zz__pp_circlez00,
		BgL_bgl_real1910za700za7za7__p1922za7, 2.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd2circlezd2envz00zz__pp_circlez00,
		BgL_bgl__displayza7d2circl1923za7, opt_generic_entry,
		BGl__displayzd2circlezd2zz__pp_circlez00, BFALSE, -1);
	      DEFINE_STRING(BGl_string1903z00zz__pp_circlez00,
		BgL_bgl_string1903za700za7za7_1924za7, "/tmp/4.4a/runtime/Pp/circle.scm",
		31);
	      DEFINE_STRING(BGl_string1904z00zz__pp_circlez00,
		BgL_bgl_string1904za700za7za7_1925za7, "_display-circle", 15);
	      DEFINE_STRING(BGl_string1905z00zz__pp_circlez00,
		BgL_bgl_string1905za700za7za7_1926za7, "vector", 6);
	      DEFINE_STRING(BGl_string1906z00zz__pp_circlez00,
		BgL_bgl_string1906za700za7za7_1927za7, "output-port", 11);
	      DEFINE_STRING(BGl_string1907z00zz__pp_circlez00,
		BgL_bgl_string1907za700za7za7_1928za7, "_write-circle", 13);
	      DEFINE_STRING(BGl_string1909z00zz__pp_circlez00,
		BgL_bgl_string1909za700za7za7_1929za7, "none", 4);
	      DEFINE_STRING(BGl_string1911z00zz__pp_circlez00,
		BgL_bgl_string1911za700za7za7_1930za7, " . ", 3);
	      DEFINE_STRING(BGl_string1912z00zz__pp_circlez00,
		BgL_bgl_string1912za700za7za7_1931za7, "#{", 2);
	      DEFINE_STRING(BGl_string1913z00zz__pp_circlez00,
		BgL_bgl_string1913za700za7za7_1932za7, "#<cell:", 7);
	      DEFINE_STRING(BGl_string1914z00zz__pp_circlez00,
		BgL_bgl_string1914za700za7za7_1933za7, ">", 1);
	      DEFINE_STRING(BGl_string1915z00zz__pp_circlez00,
		BgL_bgl_string1915za700za7za7_1934za7, "#<mutex:", 8);
	      DEFINE_STRING(BGl_string1916z00zz__pp_circlez00,
		BgL_bgl_string1916za700za7za7_1935za7, "#<condition-variable:", 21);
	      DEFINE_STRING(BGl_string1917z00zz__pp_circlez00,
		BgL_bgl_string1917za700za7za7_1936za7, "&jvm-debugging-print", 20);
	      DEFINE_STRING(BGl_string1918z00zz__pp_circlez00,
		BgL_bgl_string1918za700za7za7_1937za7, "bint", 4);
	      DEFINE_STRING(BGl_string1919z00zz__pp_circlez00,
		BgL_bgl_string1919za700za7za7_1938za7, "__pp_circle", 11);
	extern obj_t BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00;
	extern obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
	extern obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2circlezd2envz00zz__pp_circlez00,
		BgL_bgl__writeza7d2circleza71939z00, opt_generic_entry,
		BGl__writezd2circlezd2zz__pp_circlez00, BFALSE, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__pp_circlez00));
		     ADD_ROOT((void *) (&BGl_symbol1908z00zz__pp_circlez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long
		BgL_checksumz00_2551, char *BgL_fromz00_2552)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__pp_circlez00))
				{
					BGl_requirezd2initializa7ationz75zz__pp_circlez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__pp_circlez00();
					BGl_cnstzd2initzd2zz__pp_circlez00();
					BGl_importedzd2moduleszd2initz00zz__pp_circlez00();
					return BGl_methodzd2initzd2zz__pp_circlez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			return (BGl_symbol1908z00zz__pp_circlez00 =
				bstring_to_symbol(BGl_string1909z00zz__pp_circlez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			return bgl_gc_roots_register();
		}

	}



/* _display-circle */
	obj_t BGl__displayzd2circlezd2zz__pp_circlez00(obj_t BgL_env1124z00_6,
		obj_t BgL_opt1123z00_5)
	{
		{	/* Pp/circle.scm 82 */
			{	/* Pp/circle.scm 82 */
				obj_t BgL_g1125z00_1260;

				{
					obj_t BgL_auxz00_2562;

					if (VECTORP(BgL_opt1123z00_5))
						{	/* Pp/circle.scm 82 */
							BgL_auxz00_2562 = BgL_opt1123z00_5;
						}
					else
						{
							obj_t BgL_auxz00_2565;

							BgL_auxz00_2565 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3230)),
								BGl_string1904z00zz__pp_circlez00,
								BGl_string1905z00zz__pp_circlez00, BgL_opt1123z00_5);
							FAILURE(BgL_auxz00_2565, BFALSE, BFALSE);
						}
					BgL_g1125z00_1260 = VECTOR_REF(BgL_auxz00_2562, ((long) 0));
				}
				{	/* Pp/circle.scm 82 */
					long BgL_aux1127z00_1262;

					{
						obj_t BgL_auxz00_2570;

						if (VECTORP(BgL_opt1123z00_5))
							{	/* Pp/circle.scm 82 */
								BgL_auxz00_2570 = BgL_opt1123z00_5;
							}
						else
							{
								obj_t BgL_auxz00_2573;

								BgL_auxz00_2573 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3230)),
									BGl_string1904z00zz__pp_circlez00,
									BGl_string1905z00zz__pp_circlez00, BgL_opt1123z00_5);
								FAILURE(BgL_auxz00_2573, BFALSE, BFALSE);
							}
						BgL_aux1127z00_1262 = VECTOR_LENGTH(BgL_auxz00_2570);
					}
					switch (BgL_aux1127z00_1262)
						{
						case ((long) 1):

							{	/* Pp/circle.scm 82 */
								obj_t BgL_portz00_1264;

								{	/* Pp/circle.scm 82 */
									obj_t BgL_res1753z00_1956;

									{	/* Pp/circle.scm 82 */
										obj_t BgL_tmpz00_2578;

										BgL_tmpz00_2578 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1753z00_1956 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2578);
									}
									BgL_portz00_1264 = BgL_res1753z00_1956;
								}
								{	/* Pp/circle.scm 82 */

									return
										BGl_circlezd2writezf2displayz20zz__pp_circlez00
										(BgL_g1125z00_1260, BgL_portz00_1264, ((bool_t) 1));
								}
							}
							break;
						case ((long) 2):

							{	/* Pp/circle.scm 82 */
								obj_t BgL_portz00_1265;

								{
									obj_t BgL_auxz00_2582;

									if (VECTORP(BgL_opt1123z00_5))
										{	/* Pp/circle.scm 82 */
											BgL_auxz00_2582 = BgL_opt1123z00_5;
										}
									else
										{
											obj_t BgL_auxz00_2585;

											BgL_auxz00_2585 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3230)),
												BGl_string1904z00zz__pp_circlez00,
												BGl_string1905z00zz__pp_circlez00, BgL_opt1123z00_5);
											FAILURE(BgL_auxz00_2585, BFALSE, BFALSE);
										}
									BgL_portz00_1265 = VECTOR_REF(BgL_auxz00_2582, ((long) 1));
								}
								{	/* Pp/circle.scm 82 */

									{	/* Pp/circle.scm 82 */
										obj_t BgL_portz00_1958;

										if (OUTPUT_PORTP(BgL_portz00_1265))
											{	/* Pp/circle.scm 82 */
												BgL_portz00_1958 = BgL_portz00_1265;
											}
										else
											{
												obj_t BgL_auxz00_2592;

												BgL_auxz00_2592 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1903z00zz__pp_circlez00,
													BINT(((long) 3230)),
													BGl_string1904z00zz__pp_circlez00,
													BGl_string1906z00zz__pp_circlez00, BgL_portz00_1265);
												FAILURE(BgL_auxz00_2592, BFALSE, BFALSE);
											}
										return
											BGl_circlezd2writezf2displayz20zz__pp_circlez00
											(BgL_g1125z00_1260, BgL_portz00_1958, ((bool_t) 1));
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

	}



/* display-circle */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t
		BgL_oz00_3, obj_t BgL_portz00_4)
	{
		{	/* Pp/circle.scm 82 */
			return
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_oz00_3,
				BgL_portz00_4, ((bool_t) 1));
		}

	}



/* _write-circle */
	obj_t BGl__writezd2circlezd2zz__pp_circlez00(obj_t BgL_env1129z00_10,
		obj_t BgL_opt1128z00_9)
	{
		{	/* Pp/circle.scm 88 */
			{	/* Pp/circle.scm 88 */
				obj_t BgL_g1130z00_1266;

				{
					obj_t BgL_auxz00_2599;

					if (VECTORP(BgL_opt1128z00_9))
						{	/* Pp/circle.scm 88 */
							BgL_auxz00_2599 = BgL_opt1128z00_9;
						}
					else
						{
							obj_t BgL_auxz00_2602;

							BgL_auxz00_2602 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3570)),
								BGl_string1907z00zz__pp_circlez00,
								BGl_string1905z00zz__pp_circlez00, BgL_opt1128z00_9);
							FAILURE(BgL_auxz00_2602, BFALSE, BFALSE);
						}
					BgL_g1130z00_1266 = VECTOR_REF(BgL_auxz00_2599, ((long) 0));
				}
				{	/* Pp/circle.scm 88 */
					long BgL_aux1132z00_1268;

					{
						obj_t BgL_auxz00_2607;

						if (VECTORP(BgL_opt1128z00_9))
							{	/* Pp/circle.scm 88 */
								BgL_auxz00_2607 = BgL_opt1128z00_9;
							}
						else
							{
								obj_t BgL_auxz00_2610;

								BgL_auxz00_2610 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3570)),
									BGl_string1907z00zz__pp_circlez00,
									BGl_string1905z00zz__pp_circlez00, BgL_opt1128z00_9);
								FAILURE(BgL_auxz00_2610, BFALSE, BFALSE);
							}
						BgL_aux1132z00_1268 = VECTOR_LENGTH(BgL_auxz00_2607);
					}
					switch (BgL_aux1132z00_1268)
						{
						case ((long) 1):

							{	/* Pp/circle.scm 88 */
								obj_t BgL_portz00_1270;

								{	/* Pp/circle.scm 88 */
									obj_t BgL_res1754z00_1960;

									{	/* Pp/circle.scm 88 */
										obj_t BgL_tmpz00_2615;

										BgL_tmpz00_2615 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1754z00_1960 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2615);
									}
									BgL_portz00_1270 = BgL_res1754z00_1960;
								}
								{	/* Pp/circle.scm 88 */

									return
										BGl_circlezd2writezf2displayz20zz__pp_circlez00
										(BgL_g1130z00_1266, BgL_portz00_1270, ((bool_t) 0));
								}
							}
							break;
						case ((long) 2):

							{	/* Pp/circle.scm 88 */
								obj_t BgL_portz00_1271;

								{
									obj_t BgL_auxz00_2619;

									if (VECTORP(BgL_opt1128z00_9))
										{	/* Pp/circle.scm 88 */
											BgL_auxz00_2619 = BgL_opt1128z00_9;
										}
									else
										{
											obj_t BgL_auxz00_2622;

											BgL_auxz00_2622 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1903z00zz__pp_circlez00, BINT(((long) 3570)),
												BGl_string1907z00zz__pp_circlez00,
												BGl_string1905z00zz__pp_circlez00, BgL_opt1128z00_9);
											FAILURE(BgL_auxz00_2622, BFALSE, BFALSE);
										}
									BgL_portz00_1271 = VECTOR_REF(BgL_auxz00_2619, ((long) 1));
								}
								{	/* Pp/circle.scm 88 */

									{	/* Pp/circle.scm 88 */
										obj_t BgL_portz00_1962;

										if (OUTPUT_PORTP(BgL_portz00_1271))
											{	/* Pp/circle.scm 88 */
												BgL_portz00_1962 = BgL_portz00_1271;
											}
										else
											{
												obj_t BgL_auxz00_2629;

												BgL_auxz00_2629 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1903z00zz__pp_circlez00,
													BINT(((long) 3570)),
													BGl_string1907z00zz__pp_circlez00,
													BGl_string1906z00zz__pp_circlez00, BgL_portz00_1271);
												FAILURE(BgL_auxz00_2629, BFALSE, BFALSE);
											}
										return
											BGl_circlezd2writezf2displayz20zz__pp_circlez00
											(BgL_g1130z00_1266, BgL_portz00_1962, ((bool_t) 0));
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

	}



/* write-circle */
	BGL_EXPORTED_DEF obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t BgL_oz00_7,
		obj_t BgL_portz00_8)
	{
		{	/* Pp/circle.scm 88 */
			return
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_oz00_7,
				BgL_portz00_8, ((bool_t) 0));
		}

	}



/* circle-write/display */
	obj_t BGl_circlezd2writezf2displayz20zz__pp_circlez00(obj_t BgL_objz00_11,
		obj_t BgL_portz00_12, bool_t BgL_flagz00_13)
	{
		{	/* Pp/circle.scm 113 */
			{	/* Pp/circle.scm 114 */
				obj_t BgL_cachez00_2494;

				BgL_cachez00_2494 = MAKE_CELL(BNIL);
				{	/* Pp/circle.scm 114 */
					struct bgl_cell BgL_box1949_2526z00;
					obj_t BgL_cachezd2countzd2_2526;

					BgL_cachezd2countzd2_2526 =
						MAKE_CELL_STACK(BINT(((long) 0)), BgL_box1949_2526z00);
					{	/* Pp/circle.scm 115 */
						obj_t BgL_nextzd2cardinalzd2_1274;

						{	/* Pp/circle.scm 116 */
							obj_t BgL_serialz00_2495;

							BgL_serialz00_2495 = MAKE_CELL(BINT(((long) -1)));
							{	/* Pp/circle.scm 117 */
								obj_t BgL_zc3z04anonymousza31330ze3z87_2479;

								{
									int BgL_tmpz00_2638;

									BgL_tmpz00_2638 = (int) (((long) 1));
									BgL_zc3z04anonymousza31330ze3z87_2479 =
										MAKE_EL_PROCEDURE(BgL_tmpz00_2638);
								}
								PROCEDURE_EL_SET(BgL_zc3z04anonymousza31330ze3z87_2479,
									(int) (((long) 0)), ((obj_t) BgL_serialz00_2495));
								BgL_nextzd2cardinalzd2_1274 =
									BgL_zc3z04anonymousza31330ze3z87_2479;
						}}
						{	/* Pp/circle.scm 116 */

							BGl_registerze70ze7zz__pp_circlez00(BgL_cachezd2countzd2_2526,
								BgL_cachez00_2494, BgL_objz00_11);
							BGl_z62outputzd2componentzb0zz__pp_circlez00
								(BgL_nextzd2cardinalzd2_1274, BgL_flagz00_13, BgL_portz00_12,
								BgL_cachez00_2494, BgL_objz00_11);
			}}}}
			return BUNSPEC;
		}

	}



/* register~0 */
	obj_t BGl_registerze70ze7zz__pp_circlez00(obj_t BgL_cachezd2countzd2_2523,
		obj_t BgL_cachez00_2522, obj_t BgL_objz00_1363)
	{
		{	/* Pp/circle.scm 176 */
		BGl_registerze70ze7zz__pp_circlez00:
			{	/* Pp/circle.scm 131 */
				bool_t BgL_test1950z00_2646;

				if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_1363))
					{	/* Pp/circle.scm 131 */
						BgL_test1950z00_2646 = ((bool_t) 1);
					}
				else
					{	/* Pp/circle.scm 131 */
						if (SYMBOLP(BgL_objz00_1363))
							{	/* Pp/circle.scm 132 */
								BgL_test1950z00_2646 = ((bool_t) 1);
							}
						else
							{	/* Pp/circle.scm 132 */
								if (STRINGP(BgL_objz00_1363))
									{	/* Pp/circle.scm 133 */
										BgL_test1950z00_2646 = ((bool_t) 1);
									}
								else
									{	/* Pp/circle.scm 133 */
										if (UCS2_STRINGP(BgL_objz00_1363))
											{	/* Pp/circle.scm 134 */
												BgL_test1950z00_2646 = ((bool_t) 1);
											}
										else
											{	/* Pp/circle.scm 134 */
												if (BGL_DATEP(BgL_objz00_1363))
													{	/* Pp/circle.scm 135 */
														BgL_test1950z00_2646 = ((bool_t) 1);
													}
												else
													{	/* Pp/circle.scm 135 */
														if (CNSTP(BgL_objz00_1363))
															{	/* Pp/circle.scm 136 */
																BgL_test1950z00_2646 = ((bool_t) 1);
															}
														else
															{	/* Pp/circle.scm 136 */
																if (NULLP(BgL_objz00_1363))
																	{	/* Pp/circle.scm 137 */
																		BgL_test1950z00_2646 = ((bool_t) 1);
																	}
																else
																	{	/* Pp/circle.scm 137 */
																		BgL_test1950z00_2646 =
																			BGl_classzf3zf3zz__objectz00
																			(BgL_objz00_1363);
																	}
															}
													}
											}
									}
							}
					}
				if (BgL_test1950z00_2646)
					{	/* Pp/circle.scm 131 */
						return BFALSE;
					}
				else
					{	/* Pp/circle.scm 139 */
						obj_t BgL_matchz00_1373;

						if (BGl_hashtablezf3zf3zz__hashz00(CELL_REF(BgL_cachez00_2522)))
							{	/* Pp/circle.scm 123 */
								BgL_matchz00_1373 =
									BGl_hashtablezd2getzd2zz__hashz00(CELL_REF(BgL_cachez00_2522),
									BgL_objz00_1363);
							}
						else
							{	/* Pp/circle.scm 123 */
								BgL_matchz00_1373 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1363,
									CELL_REF(BgL_cachez00_2522));
							}
						if (CBOOL(BgL_matchz00_1373))
							{	/* Pp/circle.scm 141 */
								obj_t BgL_tmpz00_2668;

								BgL_tmpz00_2668 = ((obj_t) BgL_matchz00_1373);
								return SET_CDR(BgL_tmpz00_2668, BTRUE);
							}
						else
							{	/* Pp/circle.scm 142 */
								obj_t BgL_entryz00_1374;

								BgL_entryz00_1374 = MAKE_YOUNG_PAIR(BgL_objz00_1363, BFALSE);
								if (BGl_hashtablezf3zf3zz__hashz00(CELL_REF(BgL_cachez00_2522)))
									{	/* Pp/circle.scm 143 */
										BGl_hashtablezd2putz12zc0zz__hashz00(CELL_REF
											(BgL_cachez00_2522), BgL_objz00_1363, BgL_entryz00_1374);
									}
								else
									{	/* Pp/circle.scm 145 */
										bool_t BgL_test1961z00_2675;

										{	/* Pp/circle.scm 145 */
											long BgL_n1z00_1974;

											BgL_n1z00_1974 =
												(long) CINT(CELL_REF(BgL_cachezd2countzd2_2523));
											BgL_test1961z00_2675 = (BgL_n1z00_1974 > ((long) 64));
										}
										if (BgL_test1961z00_2675)
											{	/* Pp/circle.scm 146 */
												obj_t BgL_hz00_1377;

												BgL_hz00_1377 =
													BGl_createzd2hashtablezd2zz__hashz00(BGL_REAL_CNST
													(BGl_real1910z00zz__pp_circlez00),
													BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BFALSE,
													BINT(((long) 10)), BINT(((long) 16384)),
													BINT(((long) 128)),
													BGl_symbol1908z00zz__pp_circlez00);
												{
													obj_t BgL_l1104z00_1379;

													BgL_l1104z00_1379 = CELL_REF(BgL_cachez00_2522);
												BgL_zc3z04anonymousza31299ze3z87_1380:
													if (PAIRP(BgL_l1104z00_1379))
														{	/* Pp/circle.scm 149 */
															{	/* Pp/circle.scm 150 */
																obj_t BgL_cellz00_1382;

																BgL_cellz00_1382 = CAR(BgL_l1104z00_1379);
																{	/* Pp/circle.scm 150 */
																	obj_t BgL_arg1301z00_1383;

																	BgL_arg1301z00_1383 =
																		CAR(((obj_t) BgL_cellz00_1382));
																	BGl_hashtablezd2putz12zc0zz__hashz00
																		(BgL_hz00_1377, BgL_arg1301z00_1383,
																		BgL_cellz00_1382);
																}
															}
															{
																obj_t BgL_l1104z00_2688;

																BgL_l1104z00_2688 = CDR(BgL_l1104z00_1379);
																BgL_l1104z00_1379 = BgL_l1104z00_2688;
																goto BgL_zc3z04anonymousza31299ze3z87_1380;
															}
														}
													else
														{	/* Pp/circle.scm 149 */
															((bool_t) 1);
														}
												}
												CELL_SET(BgL_cachez00_2522, BgL_hz00_1377);
												{	/* Pp/circle.scm 153 */
													obj_t BgL_auxz00_2524;

													BgL_auxz00_2524 = BINT(((long) -1));
													CELL_SET(BgL_cachezd2countzd2_2523, BgL_auxz00_2524);
												}
												BGl_hashtablezd2putz12zc0zz__hashz00(CELL_REF
													(BgL_cachez00_2522), BgL_objz00_1363,
													BgL_entryz00_1374);
											}
										else
											{	/* Pp/circle.scm 145 */
												{	/* Pp/circle.scm 156 */
													obj_t BgL_auxz00_2501;

													BgL_auxz00_2501 =
														MAKE_YOUNG_PAIR(BgL_entryz00_1374,
														CELL_REF(BgL_cachez00_2522));
													CELL_SET(BgL_cachez00_2522, BgL_auxz00_2501);
												}
												{	/* Pp/circle.scm 157 */
													obj_t BgL_auxz00_2525;

													BgL_auxz00_2525 =
														ADDFX(CELL_REF(BgL_cachezd2countzd2_2523),
														BINT(((long) 1)));
													CELL_SET(BgL_cachezd2countzd2_2523, BgL_auxz00_2525);
									}}}
								if (PAIRP(BgL_objz00_1363))
									{	/* Pp/circle.scm 159 */
										{	/* Pp/circle.scm 160 */
											obj_t BgL_arg1304z00_1394;

											BgL_arg1304z00_1394 = CAR(BgL_objz00_1363);
											BGl_registerze70ze7zz__pp_circlez00
												(BgL_cachezd2countzd2_2523, BgL_cachez00_2522,
												BgL_arg1304z00_1394);
										}
										{	/* Pp/circle.scm 161 */
											obj_t BgL_arg1306z00_1395;

											BgL_arg1306z00_1395 = CDR(BgL_objz00_1363);
											{
												obj_t BgL_objz00_2700;

												BgL_objz00_2700 = BgL_arg1306z00_1395;
												BgL_objz00_1363 = BgL_objz00_2700;
												goto BGl_registerze70ze7zz__pp_circlez00;
											}
										}
									}
								else
									{	/* Pp/circle.scm 159 */
										if (VECTORP(BgL_objz00_1363))
											{
												long BgL_iz00_1995;

												{	/* Pp/circle.scm 163 */
													bool_t BgL_tmpz00_2703;

													BgL_iz00_1995 = ((long) 0);
												BgL_for1043z00_1994:
													if ((BgL_iz00_1995 < VECTOR_LENGTH(BgL_objz00_1363)))
														{	/* Pp/circle.scm 163 */
															{	/* Pp/circle.scm 164 */
																obj_t BgL_arg1310z00_2000;

																BgL_arg1310z00_2000 =
																	VECTOR_REF(
																	((obj_t) BgL_objz00_1363), BgL_iz00_1995);
																BGl_registerze70ze7zz__pp_circlez00
																	(BgL_cachezd2countzd2_2523, BgL_cachez00_2522,
																	BgL_arg1310z00_2000);
															}
															{
																long BgL_iz00_2710;

																BgL_iz00_2710 = (BgL_iz00_1995 + ((long) 1));
																BgL_iz00_1995 = BgL_iz00_2710;
																goto BgL_for1043z00_1994;
															}
														}
													else
														{	/* Pp/circle.scm 163 */
															BgL_tmpz00_2703 = ((bool_t) 0);
														}
													return BBOOL(BgL_tmpz00_2703);
												}
											}
										else
											{	/* Pp/circle.scm 162 */
												if (STRUCTP(BgL_objz00_1363))
													{	/* Pp/circle.scm 166 */
														int BgL_stop1046z00_1406;

														BgL_stop1046z00_1406 =
															STRUCT_LENGTH(BgL_objz00_1363);
														{
															long BgL_iz00_2017;

															{	/* Pp/circle.scm 166 */
																bool_t BgL_tmpz00_2716;

																BgL_iz00_2017 = ((long) 0);
															BgL_for1045z00_2016:
																if (
																	(BgL_iz00_2017 <
																		(long) (BgL_stop1046z00_1406)))
																	{	/* Pp/circle.scm 166 */
																		{	/* Pp/circle.scm 167 */
																			obj_t BgL_arg1315z00_2022;

																			BgL_arg1315z00_2022 =
																				STRUCT_REF(
																				((obj_t) BgL_objz00_1363),
																				(int) (BgL_iz00_2017));
																			BGl_registerze70ze7zz__pp_circlez00
																				(BgL_cachezd2countzd2_2523,
																				BgL_cachez00_2522, BgL_arg1315z00_2022);
																		}
																		{
																			long BgL_iz00_2724;

																			BgL_iz00_2724 =
																				(BgL_iz00_2017 + ((long) 1));
																			BgL_iz00_2017 = BgL_iz00_2724;
																			goto BgL_for1045z00_2016;
																		}
																	}
																else
																	{	/* Pp/circle.scm 166 */
																		BgL_tmpz00_2716 = ((bool_t) 0);
																	}
																return BBOOL(BgL_tmpz00_2716);
															}
														}
													}
												else
													{	/* Pp/circle.scm 165 */
														if (BGL_OBJECTP(BgL_objz00_1363))
															{	/* Pp/circle.scm 169 */
																obj_t BgL_klassz00_1415;

																{	/* Pp/circle.scm 169 */
																	long BgL_arg1736z00_2030;

																	{	/* Pp/circle.scm 169 */
																		long BgL_arg1737z00_2031;

																		{	/* Pp/circle.scm 169 */
																			long BgL_res1774z00_2033;

																			BgL_res1774z00_2033 =
																				BGL_OBJECT_CLASS_NUM(
																				((BgL_objectz00_bglt) BgL_objz00_1363));
																			BgL_arg1737z00_2031 = BgL_res1774z00_2033;
																		}
																		BgL_arg1736z00_2030 =
																			(BgL_arg1737z00_2031 - OBJECT_TYPE);
																	}
																	BgL_klassz00_1415 =
																		VECTOR_REF
																		(BGl_za2classesza2z00zz__objectz00,
																		BgL_arg1736z00_2030);
																}
																{	/* Pp/circle.scm 169 */
																	obj_t BgL_fieldsz00_1416;

																	{	/* Pp/circle.scm 170 */
																		obj_t BgL_res1776z00_2040;

																		{	/* Pp/circle.scm 170 */
																			obj_t BgL_tmpz00_2733;

																			BgL_tmpz00_2733 =
																				((obj_t) BgL_klassz00_1415);
																			BgL_res1776z00_2040 =
																				BGL_CLASS_ALL_FIELDS(BgL_tmpz00_2733);
																		}
																		BgL_fieldsz00_1416 = BgL_res1776z00_2040;
																	}
																	{	/* Pp/circle.scm 170 */

																		{
																			long BgL_iz00_2050;

																			{	/* Pp/circle.scm 171 */
																				bool_t BgL_tmpz00_2736;

																				BgL_iz00_2050 = ((long) 0);
																			BgL_for1047z00_2049:
																				if (
																					(BgL_iz00_2050 <
																						VECTOR_LENGTH(BgL_fieldsz00_1416)))
																					{	/* Pp/circle.scm 171 */
																						{	/* Pp/circle.scm 172 */
																							obj_t BgL_fz00_2055;

																							BgL_fz00_2055 =
																								VECTOR_REF(BgL_fieldsz00_1416,
																								BgL_iz00_2050);
																							{	/* Pp/circle.scm 172 */
																								obj_t BgL_gvz00_2058;

																								BgL_gvz00_2058 =
																									BGl_classzd2fieldzd2accessorz00zz__objectz00
																									(BgL_fz00_2055);
																								{	/* Pp/circle.scm 173 */

																									{	/* Pp/circle.scm 174 */
																										obj_t BgL_arg1322z00_2059;

																										BgL_arg1322z00_2059 =
																											PROCEDURE_ENTRY
																											(BgL_gvz00_2058)
																											(BgL_gvz00_2058,
																											BgL_objz00_1363, BEOA);
																										BGl_registerze70ze7zz__pp_circlez00
																											(BgL_cachezd2countzd2_2523,
																											BgL_cachez00_2522,
																											BgL_arg1322z00_2059);
																									}
																								}
																							}
																						}
																						{
																							long BgL_iz00_2747;

																							BgL_iz00_2747 =
																								(BgL_iz00_2050 + ((long) 1));
																							BgL_iz00_2050 = BgL_iz00_2747;
																							goto BgL_for1047z00_2049;
																						}
																					}
																				else
																					{	/* Pp/circle.scm 171 */
																						BgL_tmpz00_2736 = ((bool_t) 0);
																					}
																				return BBOOL(BgL_tmpz00_2736);
																			}
																		}
																	}
																}
															}
														else
															{	/* Pp/circle.scm 168 */
																if (CELLP(BgL_objz00_1363))
																	{	/* Pp/circle.scm 176 */
																		obj_t BgL_arg1326z00_1428;

																		BgL_arg1326z00_1428 =
																			CELL_REF(BgL_objz00_1363);
																		{
																			obj_t BgL_objz00_2753;

																			BgL_objz00_2753 = BgL_arg1326z00_1428;
																			BgL_objz00_1363 = BgL_objz00_2753;
																			goto BGl_registerze70ze7zz__pp_circlez00;
																		}
																	}
																else
																	{	/* Pp/circle.scm 175 */
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

	}



/* &output-component */
	obj_t BGl_z62outputzd2componentzb0zz__pp_circlez00(obj_t
		BgL_nextzd2cardinalzd2_2483, bool_t BgL_flagz00_2482,
		obj_t BgL_portz00_2481, obj_t BgL_cachez00_2480, obj_t BgL_objz00_1281)
	{
		{	/* Pp/circle.scm 190 */
			{	/* Pp/circle.scm 191 */
				obj_t BgL_g1049z00_1283;

				if (BGl_hashtablezf3zf3zz__hashz00(CELL_REF(BgL_cachez00_2480)))
					{	/* Pp/circle.scm 123 */
						BgL_g1049z00_1283 =
							BGl_hashtablezd2getzd2zz__hashz00(CELL_REF(BgL_cachez00_2480),
							BgL_objz00_1281);
					}
				else
					{	/* Pp/circle.scm 123 */
						BgL_g1049z00_1283 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1281,
							CELL_REF(BgL_cachez00_2480));
					}
				return
					BGl_loopzd2matchedze70z35zz__pp_circlez00(BgL_nextzd2cardinalzd2_2483,
					BgL_cachez00_2480, BgL_flagz00_2482, BgL_portz00_2481,
					BgL_objz00_1281, BgL_g1049z00_1283);
			}
		}

	}



/* loop-matched~0 */
	obj_t BGl_loopzd2matchedze70z35zz__pp_circlez00(obj_t
		BgL_nextzd2cardinalzd2_2521, obj_t BgL_cachez00_2520,
		bool_t BgL_flagz00_2519, obj_t BgL_portz00_2518, obj_t BgL_objz00_1285,
		obj_t BgL_matchz00_1286)
	{
		{	/* Pp/circle.scm 191 */
		BGl_loopzd2matchedze70z35zz__pp_circlez00:
			if (CBOOL(BgL_matchz00_1286))
				{	/* Pp/circle.scm 194 */
					obj_t BgL_valuez00_1288;

					BgL_valuez00_1288 = CDR(((obj_t) BgL_matchz00_1286));
					if (INTEGERP(BgL_valuez00_1288))
						{	/* Pp/circle.scm 196 */
							bgl_display_char(((unsigned char) '#'), BgL_portz00_2518);
							BGl_z62outputzd2componentzb0zz__pp_circlez00
								(BgL_nextzd2cardinalzd2_2521, BgL_flagz00_2519,
								BgL_portz00_2518, BgL_cachez00_2520, BgL_valuez00_1288);
							return bgl_display_char(((unsigned char) '#'), BgL_portz00_2518);
						}
					else
						{	/* Pp/circle.scm 196 */
							if (CBOOL(BgL_valuez00_1288))
								{	/* Pp/circle.scm 203 */
									obj_t BgL_serialz00_1290;

									BgL_serialz00_1290 =
										BGl_z62zc3z04anonymousza31330ze3ze5zz__pp_circlez00
										(BgL_nextzd2cardinalzd2_2521);
									{	/* Pp/circle.scm 204 */
										obj_t BgL_tmpz00_2773;

										BgL_tmpz00_2773 = ((obj_t) BgL_matchz00_1286);
										SET_CDR(BgL_tmpz00_2773, BgL_serialz00_1290);
									}
									bgl_display_char(((unsigned char) '#'), BgL_portz00_2518);
									BGl_z62outputzd2componentzb0zz__pp_circlez00
										(BgL_nextzd2cardinalzd2_2521, BgL_flagz00_2519,
										BgL_portz00_2518, BgL_cachez00_2520, BgL_serialz00_1290);
									bgl_display_char(((unsigned char) '='), BgL_portz00_2518);
									{
										obj_t BgL_matchz00_2779;

										BgL_matchz00_2779 = BFALSE;
										BgL_matchz00_1286 = BgL_matchz00_2779;
										goto BGl_loopzd2matchedze70z35zz__pp_circlez00;
									}
								}
							else
								{
									obj_t BgL_matchz00_2780;

									BgL_matchz00_2780 = BFALSE;
									BgL_matchz00_1286 = BgL_matchz00_2780;
									goto BGl_loopzd2matchedze70z35zz__pp_circlez00;
								}
						}
				}
			else
				{	/* Pp/circle.scm 193 */
					if (INTEGERP(BgL_objz00_1285))
						{	/* Pp/circle.scm 215 */
							return bgl_display_fixnum(BgL_objz00_1285, BgL_portz00_2518);
						}
					else
						{	/* Pp/circle.scm 215 */
							if (CHARP(BgL_objz00_1285))
								{	/* Pp/circle.scm 218 */
									if (BgL_flagz00_2519)
										{	/* Pp/circle.scm 220 */
											unsigned char BgL_tmpz00_2787;

											BgL_tmpz00_2787 = CCHAR(BgL_objz00_1285);
											return
												bgl_display_char(BgL_tmpz00_2787, BgL_portz00_2518);
										}
									else
										{	/* Pp/circle.scm 219 */
											return bgl_write_char(BgL_objz00_1285, BgL_portz00_2518);
										}
								}
							else
								{	/* Pp/circle.scm 218 */
									if (SYMBOLP(BgL_objz00_1285))
										{	/* Pp/circle.scm 223 */
											if (BgL_flagz00_2519)
												{	/* Pp/circle.scm 224 */
													return
														BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00
														(BgL_objz00_1285, BgL_portz00_2518);
												}
											else
												{	/* Pp/circle.scm 224 */
													return
														BGl_writezd2symbolzd2zz__r4_output_6_10_3z00
														(BgL_objz00_1285, BgL_portz00_2518);
												}
										}
									else
										{	/* Pp/circle.scm 223 */
											if (STRINGP(BgL_objz00_1285))
												{	/* Pp/circle.scm 228 */
													if (BgL_flagz00_2519)
														{	/* Pp/circle.scm 229 */
															return
																bgl_display_string(BgL_objz00_1285,
																BgL_portz00_2518);
														}
													else
														{	/* Pp/circle.scm 229 */
															return
																BGl_writezd2stringzd2zz__r4_output_6_10_3z00
																(string_for_read(BgL_objz00_1285),
																BgL_portz00_2518);
														}
												}
											else
												{	/* Pp/circle.scm 228 */
													if (PAIRP(BgL_objz00_1285))
														{	/* Pp/circle.scm 233 */
															bgl_display_char(((unsigned char) '('),
																BgL_portz00_2518);
															{
																obj_t BgL_lz00_1298;

																BgL_lz00_1298 = BgL_objz00_1285;
															BgL_zc3z04anonymousza31241ze3z87_1299:
																{	/* Pp/circle.scm 236 */
																	obj_t BgL_arg1242z00_1300;

																	BgL_arg1242z00_1300 =
																		CAR(((obj_t) BgL_lz00_1298));
																	BGl_z62outputzd2componentzb0zz__pp_circlez00
																		(BgL_nextzd2cardinalzd2_2521,
																		BgL_flagz00_2519, BgL_portz00_2518,
																		BgL_cachez00_2520, BgL_arg1242z00_1300);
																}
																{	/* Pp/circle.scm 237 */
																	obj_t BgL_restz00_1301;

																	BgL_restz00_1301 =
																		CDR(((obj_t) BgL_lz00_1298));
																	if (NULLP(BgL_restz00_1301))
																		{	/* Pp/circle.scm 238 */
																			return
																				bgl_display_char(((unsigned char) ')'),
																				BgL_portz00_2518);
																		}
																	else
																		{	/* Pp/circle.scm 240 */
																			obj_t BgL_matchz00_1303;

																			if (BGl_hashtablezf3zf3zz__hashz00
																				(CELL_REF(BgL_cachez00_2520)))
																				{	/* Pp/circle.scm 123 */
																					BgL_matchz00_1303 =
																						BGl_hashtablezd2getzd2zz__hashz00
																						(CELL_REF(BgL_cachez00_2520),
																						BgL_restz00_1301);
																				}
																			else
																				{	/* Pp/circle.scm 123 */
																					BgL_matchz00_1303 =
																						BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_restz00_1301,
																						CELL_REF(BgL_cachez00_2520));
																				}
																			{	/* Pp/circle.scm 241 */
																				bool_t BgL_test1985z00_2817;

																				if (PAIRP(BgL_restz00_1301))
																					{	/* Pp/circle.scm 241 */
																						if (CBOOL(BgL_matchz00_1303))
																							{	/* Pp/circle.scm 242 */
																								BgL_test1985z00_2817 =
																									CBOOL(CDR(
																										((obj_t)
																											BgL_matchz00_1303)));
																							}
																						else
																							{	/* Pp/circle.scm 242 */
																								BgL_test1985z00_2817 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Pp/circle.scm 241 */
																						BgL_test1985z00_2817 = ((bool_t) 1);
																					}
																				if (BgL_test1985z00_2817)
																					{	/* Pp/circle.scm 241 */
																						bgl_display_string
																							(BGl_string1911z00zz__pp_circlez00,
																							BgL_portz00_2518);
																						BGl_loopzd2matchedze70z35zz__pp_circlez00
																							(BgL_nextzd2cardinalzd2_2521,
																							BgL_cachez00_2520,
																							BgL_flagz00_2519,
																							BgL_portz00_2518,
																							BgL_restz00_1301,
																							BgL_matchz00_1303);
																						return bgl_display_char(((unsigned
																									char) ')'), BgL_portz00_2518);
																					}
																				else
																					{	/* Pp/circle.scm 241 */
																						bgl_display_char(((unsigned char)
																								' '), BgL_portz00_2518);
																						{
																							obj_t BgL_lz00_2829;

																							BgL_lz00_2829 = BgL_restz00_1301;
																							BgL_lz00_1298 = BgL_lz00_2829;
																							goto
																								BgL_zc3z04anonymousza31241ze3z87_1299;
																						}
																					}
																			}
																		}
																}
															}
														}
													else
														{	/* Pp/circle.scm 233 */
															if (BGl_classzf3zf3zz__objectz00(BgL_objz00_1285))
																{	/* Pp/circle.scm 251 */
																	return
																		bgl_display_obj(BgL_objz00_1285,
																		BgL_portz00_2518);
																}
															else
																{	/* Pp/circle.scm 251 */
																	if (VECTORP(BgL_objz00_1285))
																		{	/* Pp/circle.scm 254 */
																			bgl_display_char(((unsigned char) '#'),
																				BgL_portz00_2518);
																			{	/* Pp/circle.scm 256 */
																				int BgL_tagz00_1312;

																				{	/* Pp/circle.scm 256 */
																					int BgL_res1789z00_2087;

																					BgL_res1789z00_2087 =
																						VECTOR_TAG(BgL_objz00_1285);
																					BgL_tagz00_1312 = BgL_res1789z00_2087;
																				}
																				if (
																					((long) (BgL_tagz00_1312) >
																						((long) 0)))
																					{	/* Pp/circle.scm 257 */
																						if (
																							((long) (BgL_tagz00_1312) <
																								((long) 100)))
																							{	/* Pp/circle.scm 258 */
																								if (
																									((long) (BgL_tagz00_1312) >
																										((long) 10)))
																									{	/* Pp/circle.scm 260 */
																										bgl_display_char(((unsigned
																													char) '0'),
																											BgL_portz00_2518);
																									}
																								else
																									{	/* Pp/circle.scm 260 */
																										BFALSE;
																									}
																								bgl_display_char(((unsigned
																											char) '0'),
																									BgL_portz00_2518);
																							}
																						else
																							{	/* Pp/circle.scm 262 */
																								obj_t BgL_list1251z00_1316;

																								BgL_list1251z00_1316 =
																									MAKE_YOUNG_PAIR
																									(BgL_portz00_2518, BNIL);
																								BGl_writez00zz__r4_output_6_10_3z00
																									(BINT(BgL_tagz00_1312),
																									BgL_list1251z00_1316);
																							}
																					}
																				else
																					{	/* Pp/circle.scm 257 */
																						BFALSE;
																					}
																			}
																			bgl_display_char(((unsigned char) '('),
																				BgL_portz00_2518);
																			{
																				long BgL_iz00_1319;

																				BgL_iz00_1319 = ((long) 0);
																			BgL_zc3z04anonymousza31252ze3z87_1320:
																				if (
																					(BgL_iz00_1319 ==
																						VECTOR_LENGTH(BgL_objz00_1285)))
																					{	/* Pp/circle.scm 266 */
																						((bool_t) 0);
																					}
																				else
																					{	/* Pp/circle.scm 266 */
																						{	/* Pp/circle.scm 268 */
																							obj_t BgL_arg1254z00_1322;

																							BgL_arg1254z00_1322 =
																								VECTOR_REF(
																								((obj_t) BgL_objz00_1285),
																								BgL_iz00_1319);
																							BGl_z62outputzd2componentzb0zz__pp_circlez00
																								(BgL_nextzd2cardinalzd2_2521,
																								BgL_flagz00_2519,
																								BgL_portz00_2518,
																								BgL_cachez00_2520,
																								BgL_arg1254z00_1322);
																						}
																						{	/* Pp/circle.scm 269 */
																							long BgL_nextz00_1323;

																							BgL_nextz00_1323 =
																								(((long) 1) + BgL_iz00_1319);
																							if (
																								(BgL_nextz00_1323 ==
																									VECTOR_LENGTH
																									(BgL_objz00_1285)))
																								{	/* Pp/circle.scm 270 */
																									BFALSE;
																								}
																							else
																								{	/* Pp/circle.scm 270 */
																									bgl_display_char(((unsigned
																												char) ' '),
																										BgL_portz00_2518);
																								}
																							{
																								long BgL_iz00_2863;

																								BgL_iz00_2863 =
																									(((long) 1) + BgL_iz00_1319);
																								BgL_iz00_1319 = BgL_iz00_2863;
																								goto
																									BgL_zc3z04anonymousza31252ze3z87_1320;
																							}
																						}
																					}
																			}
																			return
																				bgl_display_char(((unsigned char) ')'),
																				BgL_portz00_2518);
																		}
																	else
																		{	/* Pp/circle.scm 254 */
																			if (STRUCTP(BgL_objz00_1285))
																				{	/* Pp/circle.scm 275 */
																					bgl_display_string
																						(BGl_string1912z00zz__pp_circlez00,
																						BgL_portz00_2518);
																					{	/* Pp/circle.scm 277 */
																						obj_t BgL_arg1258z00_1328;

																						BgL_arg1258z00_1328 =
																							STRUCT_KEY(BgL_objz00_1285);
																						{	/* Pp/circle.scm 277 */
																							obj_t BgL_list1259z00_1329;

																							BgL_list1259z00_1329 =
																								MAKE_YOUNG_PAIR
																								(BgL_portz00_2518, BNIL);
																							BGl_writez00zz__r4_output_6_10_3z00
																								(BgL_arg1258z00_1328,
																								BgL_list1259z00_1329);
																						}
																					}
																					bgl_display_char(((unsigned char)
																							' '), BgL_portz00_2518);
																					{	/* Pp/circle.scm 279 */
																						int BgL_lenz00_1330;

																						BgL_lenz00_1330 =
																							STRUCT_LENGTH(BgL_objz00_1285);
																						{
																							long BgL_iz00_1332;

																							BgL_iz00_1332 = ((long) 0);
																						BgL_zc3z04anonymousza31260ze3z87_1333:
																							if (
																								(BgL_iz00_1332 ==
																									(long) (BgL_lenz00_1330)))
																								{	/* Pp/circle.scm 281 */
																									((bool_t) 0);
																								}
																							else
																								{	/* Pp/circle.scm 281 */
																									{	/* Pp/circle.scm 283 */
																										obj_t BgL_arg1263z00_1335;

																										BgL_arg1263z00_1335 =
																											STRUCT_REF(
																											((obj_t) BgL_objz00_1285),
																											(int) (BgL_iz00_1332));
																										BGl_z62outputzd2componentzb0zz__pp_circlez00
																											(BgL_nextzd2cardinalzd2_2521,
																											BgL_flagz00_2519,
																											BgL_portz00_2518,
																											BgL_cachez00_2520,
																											BgL_arg1263z00_1335);
																									}
																									{	/* Pp/circle.scm 284 */
																										long BgL_nextz00_1336;

																										BgL_nextz00_1336 =
																											(((long) 1) +
																											BgL_iz00_1332);
																										if ((BgL_nextz00_1336 ==
																												(long)
																												(BgL_lenz00_1330)))
																											{	/* Pp/circle.scm 285 */
																												BFALSE;
																											}
																										else
																											{	/* Pp/circle.scm 285 */
																												bgl_display_char((
																														(unsigned char)
																														' '),
																													BgL_portz00_2518);
																											}
																										{
																											long BgL_iz00_2886;

																											BgL_iz00_2886 =
																												(((long) 1) +
																												BgL_iz00_1332);
																											BgL_iz00_1332 =
																												BgL_iz00_2886;
																											goto
																												BgL_zc3z04anonymousza31260ze3z87_1333;
																										}
																									}
																								}
																						}
																					}
																					return
																						bgl_display_char(((unsigned char)
																							'}'), BgL_portz00_2518);
																				}
																			else
																				{	/* Pp/circle.scm 275 */
																					if (CELLP(BgL_objz00_1285))
																						{	/* Pp/circle.scm 290 */
																							bgl_display_string
																								(BGl_string1913z00zz__pp_circlez00,
																								BgL_portz00_2518);
																							{	/* Pp/circle.scm 292 */
																								obj_t BgL_arg1270z00_1341;

																								BgL_arg1270z00_1341 =
																									CELL_REF(BgL_objz00_1285);
																								BGl_z62outputzd2componentzb0zz__pp_circlez00
																									(BgL_nextzd2cardinalzd2_2521,
																									BgL_flagz00_2519,
																									BgL_portz00_2518,
																									BgL_cachez00_2520,
																									BgL_arg1270z00_1341);
																							}
																							return
																								bgl_display_string
																								(BGl_string1914z00zz__pp_circlez00,
																								BgL_portz00_2518);
																						}
																					else
																						{	/* Pp/circle.scm 290 */
																							if (BGL_OBJECTP(BgL_objz00_1285))
																								{	/* Pp/circle.scm 297 */
																									obj_t
																										BgL_zc3z04anonymousza31274ze3z87_2477;
																									BgL_zc3z04anonymousza31274ze3z87_2477
																										=
																										MAKE_VA_PROCEDURE
																										(BGl_z62zc3z04anonymousza31274ze3ze5zz__pp_circlez00,
																										(int) (((long) -2)),
																										(int) (((long) 4)));
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31274ze3z87_2477,
																										(int) (((long) 0)),
																										((obj_t)
																											BgL_cachez00_2520));
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31274ze3z87_2477,
																										(int) (((long) 1)),
																										BgL_portz00_2518);
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31274ze3z87_2477,
																										(int) (((long) 2)),
																										BBOOL(BgL_flagz00_2519));
																									PROCEDURE_SET
																										(BgL_zc3z04anonymousza31274ze3z87_2477,
																										(int) (((long) 3)),
																										BgL_nextzd2cardinalzd2_2521);
																									return
																										BGl_objectzd2printzd2zz__objectz00
																										(((BgL_objectz00_bglt)
																											BgL_objz00_1285),
																										BgL_portz00_2518,
																										BgL_zc3z04anonymousza31274ze3z87_2477);
																								}
																							else
																								{	/* Pp/circle.scm 295 */
																									if (UCS2_STRINGP
																										(BgL_objz00_1285))
																										{	/* Pp/circle.scm 299 */
																											if (BgL_flagz00_2519)
																												{	/* Pp/circle.scm 300 */
																													return
																														BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00
																														(BgL_objz00_1285,
																														BgL_portz00_2518);
																												}
																											else
																												{	/* Pp/circle.scm 300 */
																													return
																														BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00
																														(BgL_objz00_1285,
																														BgL_portz00_2518);
																												}
																										}
																									else
																										{	/* Pp/circle.scm 299 */
																											if (UCS2P
																												(BgL_objz00_1285))
																												{	/* Pp/circle.scm 304 */
																													if (BgL_flagz00_2519)
																														{	/* Pp/circle.scm 305 */
																															return
																																bgl_display_ucs2
																																(BgL_objz00_1285,
																																BgL_portz00_2518);
																														}
																													else
																														{	/* Pp/circle.scm 305 */
																															return
																																bgl_write_ucs2
																																(BgL_objz00_1285,
																																BgL_portz00_2518);
																														}
																												}
																											else
																												{	/* Pp/circle.scm 304 */
																													if (REALP
																														(BgL_objz00_1285))
																														{	/* Pp/circle.scm 309 */
																															return
																																BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00
																																(BgL_objz00_1285,
																																BgL_portz00_2518);
																														}
																													else
																														{	/* Pp/circle.scm 309 */
																															if (BGL_DATEP
																																(BgL_objz00_1285))
																																{	/* Pp/circle.scm 312 */
																																	if (BgL_flagz00_2519)
																																		{	/* Pp/circle.scm 313 */
																																			return
																																				bgl_display_obj
																																				(BgL_objz00_1285,
																																				BgL_portz00_2518);
																																		}
																																	else
																																		{	/* Pp/circle.scm 315 */
																																			obj_t
																																				BgL_list1279z00_1352;
																																			BgL_list1279z00_1352
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_portz00_2518,
																																				BNIL);
																																			return
																																				BGl_writez00zz__r4_output_6_10_3z00
																																				(BgL_objz00_1285,
																																				BgL_list1279z00_1352);
																																		}
																																}
																															else
																																{	/* Pp/circle.scm 317 */
																																	bool_t
																																		BgL_test2007z00_2931;
																																	{	/* Pp/circle.scm 317 */
																																		bool_t
																																			BgL_res1809z00_2136;
																																		BgL_res1809z00_2136
																																			=
																																			BGL_MUTEXP
																																			(BgL_objz00_1285);
																																		BgL_test2007z00_2931
																																			=
																																			BgL_res1809z00_2136;
																																	}
																																	if (BgL_test2007z00_2931)
																																		{	/* Pp/circle.scm 317 */
																																			bgl_display_string
																																				(BGl_string1915z00zz__pp_circlez00,
																																				BgL_portz00_2518);
																																			{	/* Pp/circle.scm 319 */
																																				obj_t
																																					BgL_arg1281z00_1354;
																																				{	/* Pp/circle.scm 319 */
																																					obj_t
																																						BgL_tmpz00_2934;
																																					BgL_tmpz00_2934
																																						=
																																						(
																																						(obj_t)
																																						BgL_objz00_1285);
																																					BgL_arg1281z00_1354
																																						=
																																						BGL_MUTEX_NAME
																																						(BgL_tmpz00_2934);
																																				}
																																				bgl_display_obj
																																					(BgL_arg1281z00_1354,
																																					BgL_portz00_2518);
																																			}
																																			return
																																				bgl_display_string
																																				(BGl_string1914z00zz__pp_circlez00,
																																				BgL_portz00_2518);
																																		}
																																	else
																																		{	/* Pp/circle.scm 322 */
																																			bool_t
																																				BgL_test2008z00_2939;
																																			{	/* Pp/circle.scm 322 */
																																				bool_t
																																					BgL_res1810z00_2142;
																																				BgL_res1810z00_2142
																																					=
																																					BGL_CONDVARP
																																					(BgL_objz00_1285);
																																				BgL_test2008z00_2939
																																					=
																																					BgL_res1810z00_2142;
																																			}
																																			if (BgL_test2008z00_2939)
																																				{	/* Pp/circle.scm 322 */
																																					bgl_display_string
																																						(BGl_string1916z00zz__pp_circlez00,
																																						BgL_portz00_2518);
																																					{	/* Pp/circle.scm 324 */
																																						obj_t
																																							BgL_arg1284z00_1356;
																																						{	/* Pp/circle.scm 324 */
																																							obj_t
																																								BgL_tmpz00_2942;
																																							BgL_tmpz00_2942
																																								=
																																								(
																																								(obj_t)
																																								BgL_objz00_1285);
																																							BgL_arg1284z00_1356
																																								=
																																								BGL_CONDVAR_NAME
																																								(BgL_tmpz00_2942);
																																						}
																																						bgl_display_obj
																																							(BgL_arg1284z00_1356,
																																							BgL_portz00_2518);
																																					}
																																					return
																																						bgl_display_string
																																						(BGl_string1914z00zz__pp_circlez00,
																																						BgL_portz00_2518);
																																				}
																																			else
																																				{	/* Pp/circle.scm 328 */
																																					obj_t
																																						BgL_list1285z00_1357;
																																					BgL_list1285z00_1357
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_portz00_2518,
																																						BNIL);
																																					return
																																						BGl_writez00zz__r4_output_6_10_3z00
																																						(BgL_objz00_1285,
																																						BgL_list1285z00_1357);
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



/* &<@anonymous:1274> */
	obj_t BGl_z62zc3z04anonymousza31274ze3ze5zz__pp_circlez00(obj_t
		BgL_envz00_2484, obj_t BgL_xz00_2489, obj_t BgL_pz00_2490)
	{
		{	/* Pp/circle.scm 296 */
			{	/* Pp/circle.scm 297 */
				obj_t BgL_cachez00_2485;
				obj_t BgL_portz00_2486;
				bool_t BgL_flagz00_2487;
				obj_t BgL_nextzd2cardinalzd2_2488;

				BgL_cachez00_2485 = PROCEDURE_REF(BgL_envz00_2484, (int) (((long) 0)));
				BgL_portz00_2486 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2484, (int) (((long) 1))));
				BgL_flagz00_2487 =
					CBOOL(PROCEDURE_REF(BgL_envz00_2484, (int) (((long) 2))));
				BgL_nextzd2cardinalzd2_2488 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2484, (int) (((long) 3))));
				return
					BGl_z62outputzd2componentzb0zz__pp_circlez00
					(BgL_nextzd2cardinalzd2_2488, BgL_flagz00_2487, BgL_portz00_2486,
					BgL_cachez00_2485, BgL_xz00_2489);
			}
		}

	}



/* &<@anonymous:1330> */
	obj_t BGl_z62zc3z04anonymousza31330ze3ze5zz__pp_circlez00(obj_t
		BgL_envz00_2491)
	{
		{	/* Pp/circle.scm 117 */
			{	/* Pp/circle.scm 118 */
				obj_t BgL_serialz00_2492;

				BgL_serialz00_2492 =
					PROCEDURE_EL_REF(BgL_envz00_2491, (int) (((long) 0)));
				{	/* Pp/circle.scm 118 */
					obj_t BgL_auxz00_2546;

					BgL_auxz00_2546 =
						ADDFX(BINT(((long) 1)), CELL_REF(BgL_serialz00_2492));
					CELL_SET(BgL_serialz00_2492, BgL_auxz00_2546);
				}
				return CELL_REF(BgL_serialz00_2492);
			}
		}

	}



/* c-debugging-print */
	BGL_EXPORTED_DEF obj_t dprint(obj_t BgL_objz00_14)
	{
		{	/* Pp/circle.scm 334 */
			{	/* Pp/circle.scm 335 */
				obj_t BgL_portz00_2148;

				{	/* Pp/circle.scm 335 */
					obj_t BgL_res1811z00_2150;

					{	/* Pp/circle.scm 335 */
						obj_t BgL_tmpz00_2965;

						BgL_tmpz00_2965 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1811z00_2150 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2965);
					}
					BgL_portz00_2148 = BgL_res1811z00_2150;
				}
				BGl_circlezd2writezf2displayz20zz__pp_circlez00(BgL_objz00_14,
					BgL_portz00_2148, ((bool_t) 0));
				bgl_display_char(((unsigned char) 10), BgL_portz00_2148);
				return BgL_objz00_14;
			}
		}

	}



/* &c-debugging-print */
	obj_t BGl_z62czd2debuggingzd2printz62zz__pp_circlez00(obj_t BgL_envz00_2503,
		obj_t BgL_objz00_2504)
	{
		{	/* Pp/circle.scm 334 */
			return dprint(BgL_objz00_2504);
		}

	}



/* jvm-debugging-print */
	BGL_EXPORTED_DEF char *BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(obj_t
		BgL_objz00_15, int BgL_printerzd2numzd2_16)
	{
		{	/* Pp/circle.scm 343 */
			{	/* Pp/circle.scm 345 */
				obj_t BgL_zc3z04anonymousza31332ze3z87_2505;

				BgL_zc3z04anonymousza31332ze3z87_2505 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31332ze3ze5zz__pp_circlez00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31332ze3z87_2505,
					(int) (((long) 0)), BINT(BgL_printerzd2numzd2_16));
				PROCEDURE_SET(BgL_zc3z04anonymousza31332ze3z87_2505,
					(int) (((long) 1)), BgL_objz00_15);
				return
					BSTRING_TO_STRING
					(BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3z04anonymousza31332ze3z87_2505));
			}
		}

	}



/* &jvm-debugging-print */
	obj_t BGl_z62jvmzd2debuggingzd2printz62zz__pp_circlez00(obj_t BgL_envz00_2512,
		obj_t BgL_objz00_2513, obj_t BgL_printerzd2numzd2_2514)
	{
		{	/* Pp/circle.scm 343 */
			{	/* Pp/circle.scm 345 */
				char *BgL_tmpz00_2981;

				{	/* Pp/circle.scm 345 */
					int BgL_auxz00_2982;

					{	/* Pp/circle.scm 345 */
						obj_t BgL_tmpz00_2983;

						if (INTEGERP(BgL_printerzd2numzd2_2514))
							{	/* Pp/circle.scm 345 */
								BgL_tmpz00_2983 = BgL_printerzd2numzd2_2514;
							}
						else
							{
								obj_t BgL_auxz00_2986;

								BgL_auxz00_2986 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1903z00zz__pp_circlez00, BINT(((long) 11496)),
									BGl_string1917z00zz__pp_circlez00,
									BGl_string1918z00zz__pp_circlez00, BgL_printerzd2numzd2_2514);
								FAILURE(BgL_auxz00_2986, BFALSE, BFALSE);
							}
						BgL_auxz00_2982 = CINT(BgL_tmpz00_2983);
					}
					BgL_tmpz00_2981 =
						BGl_jvmzd2debuggingzd2printz00zz__pp_circlez00(BgL_objz00_2513,
						BgL_auxz00_2982);
				}
				return string_to_bstring(BgL_tmpz00_2981);
			}
		}

	}



/* &<@anonymous:1332> */
	obj_t BGl_z62zc3z04anonymousza31332ze3ze5zz__pp_circlez00(obj_t
		BgL_envz00_2515)
	{
		{	/* Pp/circle.scm 345 */
			{	/* Pp/circle.scm 345 */
				int BgL_printerzd2numzd2_2516;
				obj_t BgL_objz00_2517;

				BgL_printerzd2numzd2_2516 =
					CINT(PROCEDURE_REF(BgL_envz00_2515, (int) (((long) 0))));
				BgL_objz00_2517 = PROCEDURE_REF(BgL_envz00_2515, (int) (((long) 1)));
				{	/* Pp/circle.scm 345 */
					obj_t BgL_aux1052z00_2547;

					BgL_aux1052z00_2547 = BINT(BgL_printerzd2numzd2_2516);
					{	/* Pp/circle.scm 345 */
						obj_t BgL_fun1336z00_2548;

						switch ((long) CINT(BgL_aux1052z00_2547))
							{
							case ((long) 1):

								BgL_fun1336z00_2548 = BGl_writezd2envzd2zz__r4_output_6_10_3z00;
								break;
							case ((long) 2):

								BgL_fun1336z00_2548 =
									BGl_writezd2circlezd2envz00zz__pp_circlez00;
								break;
							case ((long) 3):

								BgL_fun1336z00_2548 =
									BGl_displayzd2circlezd2envz00zz__pp_circlez00;
								break;
							default:
								BgL_fun1336z00_2548 =
									BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
							}
						{	/* Pp/circle.scm 351 */
							obj_t BgL_arg1334z00_2549;

							{	/* Pp/circle.scm 351 */
								obj_t BgL_res1812z00_2550;

								{	/* Pp/circle.scm 351 */
									obj_t BgL_tmpz00_3001;

									BgL_tmpz00_3001 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1812z00_2550 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3001);
								}
								BgL_arg1334z00_2549 = BgL_res1812z00_2550;
							}
							return
								PROCEDURE_ENTRY(BgL_fun1336z00_2548) (BgL_fun1336z00_2548,
								BgL_objz00_2517, BgL_arg1334z00_2549, BEOA);
						}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__pp_circlez00()
	{
		{	/* Pp/circle.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1919z00zz__pp_circlez00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string1919z00zz__pp_circlez00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string1919z00zz__pp_circlez00));
		}

	}

#ifdef __cplusplus
}
#endif
