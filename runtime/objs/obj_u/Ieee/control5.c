/*===========================================================================*/
/*   (Ieee/control5.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/control5.scm -indent -o objs/obj_u/Ieee/control5.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int);
	static obj_t BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t, obj_t);
	static obj_t
		BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t
		BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();
	static obj_t
		BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62valuesz62zz__r5_control_features_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int, obj_t);
	BGL_EXPORTED_DECL int
		BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00();
	static obj_t
		BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int);
	BGL_EXPORTED_DECL obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52setzd2mvalueszd2numberz12zd2envz92zz__r5_control_features_6_4z00,
		BgL_bgl_za762za752setza7d2mval1609za7,
		BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1601z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1601za700za7za7_1610za7,
		"/tmp/4.4a/runtime/Ieee/control5.scm", 35);
	      DEFINE_STRING(BGl_string1602z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1602za700za7za7_1611za7, "&%set-mvalues-number!", 21);
	      DEFINE_STRING(BGl_string1603z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1603za700za7za7_1612za7, "bint", 4);
	      DEFINE_STRING(BGl_string1604z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1604za700za7za7_1613za7, "&%get-mvalues-val", 17);
	      DEFINE_STRING(BGl_string1605z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1605za700za7za7_1614za7, "&%set-mvalues-val!", 18);
	      DEFINE_STRING(BGl_string1606z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1606za700za7za7_1615za7, "&call-with-values", 17);
	      DEFINE_STRING(BGl_string1607z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1607za700za7za7_1616za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1608z00zz__r5_control_features_6_4z00,
		BgL_bgl_string1608za700za7za7_1617za7, "__r5_control_features_6_4", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52setzd2mvalueszd2valz12zd2envz92zz__r5_control_features_6_4z00,
		BgL_bgl_za762za752setza7d2mval1618za7,
		BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2valueszd2envzd2zz__r5_control_features_6_4z00,
		BgL_bgl_za762callza7d2withza7d1619za7,
		BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52getzd2mvalueszd2valzd2envz80zz__r5_control_features_6_4z00,
		BgL_bgl_za762za752getza7d2mval1620za7,
		BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52getzd2mvalueszd2numberzd2envz80zz__r5_control_features_6_4z00,
		BgL_bgl_za762za752getza7d2mval1621za7,
		BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valueszd2envzd2zz__r5_control_features_6_4z00,
		BgL_bgl_za762valuesza762za7za7__1622z00, va_generic_entry,
		BGl_z62valuesz62zz__r5_control_features_6_4z00, BUNSPEC, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long
		BgL_checksumz00_1212, char *BgL_fromz00_1213)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00))
				{
					BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00();
					return
						BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00()
	{
		{	/* Ieee/control5.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* %get-mvalues-number */
	BGL_EXPORTED_DEF int
		BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00()
	{
		{	/* Ieee/control5.scm 66 */
			return BGL_MVALUES_NUMBER();
		}

	}



/* &%get-mvalues-number */
	obj_t BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_1189)
	{
		{	/* Ieee/control5.scm 66 */
			return
				BINT(BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00());
		}

	}



/* %set-mvalues-number! */
	BGL_EXPORTED_DEF int
		BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int
		BgL_nz00_3)
	{
		{	/* Ieee/control5.scm 72 */
			return BGL_MVALUES_NUMBER_SET(BgL_nz00_3);
		}

	}



/* &%set-mvalues-number! */
	obj_t
		BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_1190, obj_t BgL_nz00_1191)
	{
		{	/* Ieee/control5.scm 72 */
			{	/* Ieee/control5.scm 73 */
				int BgL_tmpz00_1224;

				{	/* Ieee/control5.scm 73 */
					int BgL_auxz00_1225;

					{	/* Ieee/control5.scm 73 */
						obj_t BgL_tmpz00_1226;

						if (INTEGERP(BgL_nz00_1191))
							{	/* Ieee/control5.scm 73 */
								BgL_tmpz00_1226 = BgL_nz00_1191;
							}
						else
							{
								obj_t BgL_auxz00_1229;

								BgL_auxz00_1229 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1601z00zz__r5_control_features_6_4z00,
									BINT(((long) 2768)),
									BGl_string1602z00zz__r5_control_features_6_4z00,
									BGl_string1603z00zz__r5_control_features_6_4z00,
									BgL_nz00_1191);
								FAILURE(BgL_auxz00_1229, BFALSE, BFALSE);
							}
						BgL_auxz00_1225 = CINT(BgL_tmpz00_1226);
					}
					BgL_tmpz00_1224 =
						BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00
						(BgL_auxz00_1225);
				}
				return BINT(BgL_tmpz00_1224);
			}
		}

	}



/* %get-mvalues-val */
	BGL_EXPORTED_DEF obj_t
		BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int BgL_nz00_4)
	{
		{	/* Ieee/control5.scm 78 */
			return BGL_MVALUES_VAL(BgL_nz00_4);
		}

	}



/* &%get-mvalues-val */
	obj_t BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_1192, obj_t BgL_nz00_1193)
	{
		{	/* Ieee/control5.scm 78 */
			{	/* Ieee/control5.scm 79 */
				int BgL_auxz00_1237;

				{	/* Ieee/control5.scm 79 */
					obj_t BgL_tmpz00_1238;

					if (INTEGERP(BgL_nz00_1193))
						{	/* Ieee/control5.scm 79 */
							BgL_tmpz00_1238 = BgL_nz00_1193;
						}
					else
						{
							obj_t BgL_auxz00_1241;

							BgL_auxz00_1241 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1601z00zz__r5_control_features_6_4z00,
								BINT(((long) 3056)),
								BGl_string1604z00zz__r5_control_features_6_4z00,
								BGl_string1603z00zz__r5_control_features_6_4z00, BgL_nz00_1193);
							FAILURE(BgL_auxz00_1241, BFALSE, BFALSE);
						}
					BgL_auxz00_1237 = CINT(BgL_tmpz00_1238);
				}
				return
					BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00
					(BgL_auxz00_1237);
			}
		}

	}



/* %set-mvalues-val! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int
		BgL_nz00_5, obj_t BgL_oz00_6)
	{
		{	/* Ieee/control5.scm 84 */
			return BGL_MVALUES_VAL_SET(BgL_nz00_5, BgL_oz00_6);
		}

	}



/* &%set-mvalues-val! */
	obj_t BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_1194, obj_t BgL_nz00_1195, obj_t BgL_oz00_1196)
	{
		{	/* Ieee/control5.scm 84 */
			{	/* Ieee/control5.scm 85 */
				int BgL_auxz00_1248;

				{	/* Ieee/control5.scm 85 */
					obj_t BgL_tmpz00_1249;

					if (INTEGERP(BgL_nz00_1195))
						{	/* Ieee/control5.scm 85 */
							BgL_tmpz00_1249 = BgL_nz00_1195;
						}
					else
						{
							obj_t BgL_auxz00_1252;

							BgL_auxz00_1252 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1601z00zz__r5_control_features_6_4z00,
								BINT(((long) 3343)),
								BGl_string1605z00zz__r5_control_features_6_4z00,
								BGl_string1603z00zz__r5_control_features_6_4z00, BgL_nz00_1195);
							FAILURE(BgL_auxz00_1252, BFALSE, BFALSE);
						}
					BgL_auxz00_1248 = CINT(BgL_tmpz00_1249);
				}
				return
					BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00
					(BgL_auxz00_1248, BgL_oz00_1196);
			}
		}

	}



/* values */
	BGL_EXPORTED_DEF obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t
		BgL_argsz00_7)
	{
		{	/* Ieee/control5.scm 92 */
			if (NULLP(BgL_argsz00_7))
				{	/* Ieee/control5.scm 94 */
					int BgL_res1565z00_1077;

					{	/* Ieee/control5.scm 73 */
						int BgL_tmpz00_1260;

						BgL_tmpz00_1260 = (int) (((long) 0));
						BgL_res1565z00_1077 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1260);
					}
					return BINT(BgL_res1565z00_1077);
				}
			else
				{	/* Ieee/control5.scm 93 */
					if (NULLP(CDR(((obj_t) BgL_argsz00_7))))
						{	/* Ieee/control5.scm 95 */
							{	/* Ieee/control5.scm 97 */
								int BgL_res1567z00_1080;

								{	/* Ieee/control5.scm 73 */
									int BgL_tmpz00_1268;

									BgL_tmpz00_1268 = (int) (((long) 1));
									BgL_res1567z00_1080 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1268);
								} BgL_res1567z00_1080;
							}
							return CAR(((obj_t) BgL_argsz00_7));
						}
					else
						{	/* Ieee/control5.scm 99 */
							obj_t BgL_res0z00_694;

							BgL_res0z00_694 = CAR(((obj_t) BgL_argsz00_7));
							{	/* Ieee/control5.scm 101 */
								obj_t BgL_g1012z00_696;

								BgL_g1012z00_696 = CDR(((obj_t) BgL_argsz00_7));
								{
									long BgL_iz00_1096;
									obj_t BgL_argsz00_1097;

									BgL_iz00_1096 = ((long) 1);
									BgL_argsz00_1097 = BgL_g1012z00_696;
								BgL_loopz00_1095:
									if (NULLP(BgL_argsz00_1097))
										{	/* Ieee/control5.scm 104 */
											{	/* Ieee/control5.scm 105 */
												int BgL_res1569z00_1100;

												{	/* Ieee/control5.scm 73 */
													int BgL_tmpz00_1279;

													BgL_tmpz00_1279 = (int) (BgL_iz00_1096);
													BgL_res1569z00_1100 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1279);
												} BgL_res1569z00_1100;
											}
											return BgL_res0z00_694;
										}
									else
										{	/* Ieee/control5.scm 104 */
											if ((BgL_iz00_1096 == ((long) 16)))
												{	/* Ieee/control5.scm 107 */
													{	/* Ieee/control5.scm 108 */
														int BgL_res1571z00_1105;

														{	/* Ieee/control5.scm 73 */
															int BgL_tmpz00_1284;

															BgL_tmpz00_1284 = (int) (((long) -1));
															BgL_res1571z00_1105 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1284);
														} BgL_res1571z00_1105;
													}
													return BgL_argsz00_7;
												}
											else
												{	/* Ieee/control5.scm 107 */
													{	/* Ieee/control5.scm 111 */
														obj_t BgL_arg1063z00_1106;

														BgL_arg1063z00_1106 =
															CAR(((obj_t) BgL_argsz00_1097));
														{	/* Ieee/control5.scm 85 */
															int BgL_tmpz00_1289;

															BgL_tmpz00_1289 = (int) (BgL_iz00_1096);
															BGL_MVALUES_VAL_SET(BgL_tmpz00_1289,
																BgL_arg1063z00_1106);
													}}
													{	/* Ieee/control5.scm 112 */
														long BgL_arg1064z00_1109;
														obj_t BgL_arg1065z00_1110;

														BgL_arg1064z00_1109 = (BgL_iz00_1096 + ((long) 1));
														BgL_arg1065z00_1110 =
															CDR(((obj_t) BgL_argsz00_1097));
														{
															obj_t BgL_argsz00_1296;
															long BgL_iz00_1295;

															BgL_iz00_1295 = BgL_arg1064z00_1109;
															BgL_argsz00_1296 = BgL_arg1065z00_1110;
															BgL_argsz00_1097 = BgL_argsz00_1296;
															BgL_iz00_1096 = BgL_iz00_1295;
															goto BgL_loopz00_1095;
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



/* &values */
	obj_t BGl_z62valuesz62zz__r5_control_features_6_4z00(obj_t BgL_envz00_1197,
		obj_t BgL_argsz00_1198)
	{
		{	/* Ieee/control5.scm 92 */
			return BGl_valuesz00zz__r5_control_features_6_4z00(BgL_argsz00_1198);
		}

	}



/* call-with-values */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t
		BgL_producerz00_8, obj_t BgL_consumerz00_9)
	{
		{	/* Ieee/control5.scm 117 */
			{	/* Ieee/control5.scm 118 */
				int BgL_res1573z00_1114;

				{	/* Ieee/control5.scm 73 */
					int BgL_tmpz00_1298;

					BgL_tmpz00_1298 = (int) (((long) 1));
					BgL_res1573z00_1114 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1298);
				} BgL_res1573z00_1114;
			}
			{	/* Ieee/control5.scm 119 */
				obj_t BgL_res0z00_708;

				BgL_res0z00_708 =
					PROCEDURE_ENTRY(BgL_producerz00_8) (BgL_producerz00_8, BEOA);
				{	/* Ieee/control5.scm 120 */
					int BgL_aux1014z00_710;

					{	/* Ieee/control5.scm 120 */
						int BgL_res1574z00_1115;

						BgL_res1574z00_1115 = BGL_MVALUES_NUMBER();
						BgL_aux1014z00_710 = BgL_res1574z00_1115;
					}
					switch ((long) (BgL_aux1014z00_710))
						{
						case ((long) -1):

							return apply(BgL_consumerz00_9, BgL_res0z00_708);
							break;
						case ((long) 0):

							return
								PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9, BEOA);
							break;
						case ((long) 1):

							return
								PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
								BgL_res0z00_708, BEOA);
							break;
						case ((long) 2):

							{	/* Ieee/control5.scm 129 */
								obj_t BgL_arg1078z00_712;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1314;

									BgL_tmpz00_1314 = (int) (((long) 1));
									BgL_arg1078z00_712 = BGL_MVALUES_VAL(BgL_tmpz00_1314);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1078z00_712, BEOA);
							}
							break;
						case ((long) 3):

							{	/* Ieee/control5.scm 132 */
								obj_t BgL_arg1095z00_713;
								obj_t BgL_arg1099z00_714;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1322;

									BgL_tmpz00_1322 = (int) (((long) 1));
									BgL_arg1095z00_713 = BGL_MVALUES_VAL(BgL_tmpz00_1322);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1325;

									BgL_tmpz00_1325 = (int) (((long) 2));
									BgL_arg1099z00_714 = BGL_MVALUES_VAL(BgL_tmpz00_1325);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1095z00_713, BgL_arg1099z00_714,
									BEOA);
							}
							break;
						case ((long) 4):

							{	/* Ieee/control5.scm 136 */
								obj_t BgL_arg1100z00_715;
								obj_t BgL_arg1101z00_716;
								obj_t BgL_arg1103z00_717;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1334;

									BgL_tmpz00_1334 = (int) (((long) 1));
									BgL_arg1100z00_715 = BGL_MVALUES_VAL(BgL_tmpz00_1334);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1337;

									BgL_tmpz00_1337 = (int) (((long) 2));
									BgL_arg1101z00_716 = BGL_MVALUES_VAL(BgL_tmpz00_1337);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1340;

									BgL_tmpz00_1340 = (int) (((long) 3));
									BgL_arg1103z00_717 = BGL_MVALUES_VAL(BgL_tmpz00_1340);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1100z00_715, BgL_arg1101z00_716,
									BgL_arg1103z00_717, BEOA);
							}
							break;
						case ((long) 5):

							{	/* Ieee/control5.scm 141 */
								obj_t BgL_arg1109z00_718;
								obj_t BgL_arg1110z00_719;
								obj_t BgL_arg1113z00_720;
								obj_t BgL_arg1114z00_721;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1350;

									BgL_tmpz00_1350 = (int) (((long) 1));
									BgL_arg1109z00_718 = BGL_MVALUES_VAL(BgL_tmpz00_1350);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1353;

									BgL_tmpz00_1353 = (int) (((long) 2));
									BgL_arg1110z00_719 = BGL_MVALUES_VAL(BgL_tmpz00_1353);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1356;

									BgL_tmpz00_1356 = (int) (((long) 3));
									BgL_arg1113z00_720 = BGL_MVALUES_VAL(BgL_tmpz00_1356);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1359;

									BgL_tmpz00_1359 = (int) (((long) 4));
									BgL_arg1114z00_721 = BGL_MVALUES_VAL(BgL_tmpz00_1359);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1109z00_718, BgL_arg1110z00_719,
									BgL_arg1113z00_720, BgL_arg1114z00_721, BEOA);
							}
							break;
						case ((long) 6):

							{	/* Ieee/control5.scm 147 */
								obj_t BgL_arg1115z00_722;
								obj_t BgL_arg1116z00_723;
								obj_t BgL_arg1117z00_724;
								obj_t BgL_arg1118z00_725;
								obj_t BgL_arg1121z00_726;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1370;

									BgL_tmpz00_1370 = (int) (((long) 1));
									BgL_arg1115z00_722 = BGL_MVALUES_VAL(BgL_tmpz00_1370);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1373;

									BgL_tmpz00_1373 = (int) (((long) 2));
									BgL_arg1116z00_723 = BGL_MVALUES_VAL(BgL_tmpz00_1373);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1376;

									BgL_tmpz00_1376 = (int) (((long) 3));
									BgL_arg1117z00_724 = BGL_MVALUES_VAL(BgL_tmpz00_1376);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1379;

									BgL_tmpz00_1379 = (int) (((long) 4));
									BgL_arg1118z00_725 = BGL_MVALUES_VAL(BgL_tmpz00_1379);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1382;

									BgL_tmpz00_1382 = (int) (((long) 5));
									BgL_arg1121z00_726 = BGL_MVALUES_VAL(BgL_tmpz00_1382);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1115z00_722, BgL_arg1116z00_723,
									BgL_arg1117z00_724, BgL_arg1118z00_725, BgL_arg1121z00_726,
									BEOA);
							}
							break;
						case ((long) 7):

							{	/* Ieee/control5.scm 154 */
								obj_t BgL_arg1122z00_727;
								obj_t BgL_arg1123z00_728;
								obj_t BgL_arg1124z00_729;
								obj_t BgL_arg1125z00_730;
								obj_t BgL_arg1126z00_731;
								obj_t BgL_arg1127z00_732;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1394;

									BgL_tmpz00_1394 = (int) (((long) 1));
									BgL_arg1122z00_727 = BGL_MVALUES_VAL(BgL_tmpz00_1394);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1397;

									BgL_tmpz00_1397 = (int) (((long) 2));
									BgL_arg1123z00_728 = BGL_MVALUES_VAL(BgL_tmpz00_1397);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1400;

									BgL_tmpz00_1400 = (int) (((long) 3));
									BgL_arg1124z00_729 = BGL_MVALUES_VAL(BgL_tmpz00_1400);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1403;

									BgL_tmpz00_1403 = (int) (((long) 4));
									BgL_arg1125z00_730 = BGL_MVALUES_VAL(BgL_tmpz00_1403);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1406;

									BgL_tmpz00_1406 = (int) (((long) 5));
									BgL_arg1126z00_731 = BGL_MVALUES_VAL(BgL_tmpz00_1406);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1409;

									BgL_tmpz00_1409 = (int) (((long) 6));
									BgL_arg1127z00_732 = BGL_MVALUES_VAL(BgL_tmpz00_1409);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1122z00_727, BgL_arg1123z00_728,
									BgL_arg1124z00_729, BgL_arg1125z00_730, BgL_arg1126z00_731,
									BgL_arg1127z00_732, BEOA);
							}
							break;
						case ((long) 8):

							{	/* Ieee/control5.scm 162 */
								obj_t BgL_arg1128z00_733;
								obj_t BgL_arg1129z00_734;
								obj_t BgL_arg1133z00_735;
								obj_t BgL_arg1134z00_736;
								obj_t BgL_arg1140z00_737;
								obj_t BgL_arg1145z00_738;
								obj_t BgL_arg1146z00_739;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1422;

									BgL_tmpz00_1422 = (int) (((long) 1));
									BgL_arg1128z00_733 = BGL_MVALUES_VAL(BgL_tmpz00_1422);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1425;

									BgL_tmpz00_1425 = (int) (((long) 2));
									BgL_arg1129z00_734 = BGL_MVALUES_VAL(BgL_tmpz00_1425);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1428;

									BgL_tmpz00_1428 = (int) (((long) 3));
									BgL_arg1133z00_735 = BGL_MVALUES_VAL(BgL_tmpz00_1428);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1431;

									BgL_tmpz00_1431 = (int) (((long) 4));
									BgL_arg1134z00_736 = BGL_MVALUES_VAL(BgL_tmpz00_1431);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1434;

									BgL_tmpz00_1434 = (int) (((long) 5));
									BgL_arg1140z00_737 = BGL_MVALUES_VAL(BgL_tmpz00_1434);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1437;

									BgL_tmpz00_1437 = (int) (((long) 6));
									BgL_arg1145z00_738 = BGL_MVALUES_VAL(BgL_tmpz00_1437);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1440;

									BgL_tmpz00_1440 = (int) (((long) 7));
									BgL_arg1146z00_739 = BGL_MVALUES_VAL(BgL_tmpz00_1440);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1128z00_733, BgL_arg1129z00_734,
									BgL_arg1133z00_735, BgL_arg1134z00_736, BgL_arg1140z00_737,
									BgL_arg1145z00_738, BgL_arg1146z00_739, BEOA);
							}
							break;
						case ((long) 9):

							{	/* Ieee/control5.scm 171 */
								obj_t BgL_arg1155z00_740;
								obj_t BgL_arg1156z00_741;
								obj_t BgL_arg1165z00_742;
								obj_t BgL_arg1166z00_743;
								obj_t BgL_arg1167z00_744;
								obj_t BgL_arg1169z00_745;
								obj_t BgL_arg1170z00_746;
								obj_t BgL_arg1172z00_747;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1454;

									BgL_tmpz00_1454 = (int) (((long) 1));
									BgL_arg1155z00_740 = BGL_MVALUES_VAL(BgL_tmpz00_1454);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1457;

									BgL_tmpz00_1457 = (int) (((long) 2));
									BgL_arg1156z00_741 = BGL_MVALUES_VAL(BgL_tmpz00_1457);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1460;

									BgL_tmpz00_1460 = (int) (((long) 3));
									BgL_arg1165z00_742 = BGL_MVALUES_VAL(BgL_tmpz00_1460);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1463;

									BgL_tmpz00_1463 = (int) (((long) 4));
									BgL_arg1166z00_743 = BGL_MVALUES_VAL(BgL_tmpz00_1463);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1466;

									BgL_tmpz00_1466 = (int) (((long) 5));
									BgL_arg1167z00_744 = BGL_MVALUES_VAL(BgL_tmpz00_1466);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1469;

									BgL_tmpz00_1469 = (int) (((long) 6));
									BgL_arg1169z00_745 = BGL_MVALUES_VAL(BgL_tmpz00_1469);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1472;

									BgL_tmpz00_1472 = (int) (((long) 7));
									BgL_arg1170z00_746 = BGL_MVALUES_VAL(BgL_tmpz00_1472);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1475;

									BgL_tmpz00_1475 = (int) (((long) 8));
									BgL_arg1172z00_747 = BGL_MVALUES_VAL(BgL_tmpz00_1475);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1155z00_740, BgL_arg1156z00_741,
									BgL_arg1165z00_742, BgL_arg1166z00_743, BgL_arg1167z00_744,
									BgL_arg1169z00_745, BgL_arg1170z00_746, BgL_arg1172z00_747,
									BEOA);
							}
							break;
						case ((long) 10):

							{	/* Ieee/control5.scm 181 */
								obj_t BgL_arg1174z00_748;
								obj_t BgL_arg1175z00_749;
								obj_t BgL_arg1176z00_750;
								obj_t BgL_arg1177z00_751;
								obj_t BgL_arg1178z00_752;
								obj_t BgL_arg1179z00_753;
								obj_t BgL_arg1186z00_754;
								obj_t BgL_arg1190z00_755;
								obj_t BgL_arg1194z00_756;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1490;

									BgL_tmpz00_1490 = (int) (((long) 1));
									BgL_arg1174z00_748 = BGL_MVALUES_VAL(BgL_tmpz00_1490);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1493;

									BgL_tmpz00_1493 = (int) (((long) 2));
									BgL_arg1175z00_749 = BGL_MVALUES_VAL(BgL_tmpz00_1493);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1496;

									BgL_tmpz00_1496 = (int) (((long) 3));
									BgL_arg1176z00_750 = BGL_MVALUES_VAL(BgL_tmpz00_1496);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1499;

									BgL_tmpz00_1499 = (int) (((long) 4));
									BgL_arg1177z00_751 = BGL_MVALUES_VAL(BgL_tmpz00_1499);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1502;

									BgL_tmpz00_1502 = (int) (((long) 5));
									BgL_arg1178z00_752 = BGL_MVALUES_VAL(BgL_tmpz00_1502);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1505;

									BgL_tmpz00_1505 = (int) (((long) 6));
									BgL_arg1179z00_753 = BGL_MVALUES_VAL(BgL_tmpz00_1505);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1508;

									BgL_tmpz00_1508 = (int) (((long) 7));
									BgL_arg1186z00_754 = BGL_MVALUES_VAL(BgL_tmpz00_1508);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1511;

									BgL_tmpz00_1511 = (int) (((long) 8));
									BgL_arg1190z00_755 = BGL_MVALUES_VAL(BgL_tmpz00_1511);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1514;

									BgL_tmpz00_1514 = (int) (((long) 9));
									BgL_arg1194z00_756 = BGL_MVALUES_VAL(BgL_tmpz00_1514);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1174z00_748, BgL_arg1175z00_749,
									BgL_arg1176z00_750, BgL_arg1177z00_751, BgL_arg1178z00_752,
									BgL_arg1179z00_753, BgL_arg1186z00_754, BgL_arg1190z00_755,
									BgL_arg1194z00_756, BEOA);
							}
							break;
						case ((long) 11):

							{	/* Ieee/control5.scm 192 */
								obj_t BgL_arg1197z00_757;
								obj_t BgL_arg1201z00_758;
								obj_t BgL_arg1208z00_759;
								obj_t BgL_arg1211z00_760;
								obj_t BgL_arg1216z00_761;
								obj_t BgL_arg1221z00_762;
								obj_t BgL_arg1223z00_763;
								obj_t BgL_arg1225z00_764;
								obj_t BgL_arg1227z00_765;
								obj_t BgL_arg1229z00_766;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1530;

									BgL_tmpz00_1530 = (int) (((long) 1));
									BgL_arg1197z00_757 = BGL_MVALUES_VAL(BgL_tmpz00_1530);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1533;

									BgL_tmpz00_1533 = (int) (((long) 2));
									BgL_arg1201z00_758 = BGL_MVALUES_VAL(BgL_tmpz00_1533);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1536;

									BgL_tmpz00_1536 = (int) (((long) 3));
									BgL_arg1208z00_759 = BGL_MVALUES_VAL(BgL_tmpz00_1536);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1539;

									BgL_tmpz00_1539 = (int) (((long) 4));
									BgL_arg1211z00_760 = BGL_MVALUES_VAL(BgL_tmpz00_1539);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1542;

									BgL_tmpz00_1542 = (int) (((long) 5));
									BgL_arg1216z00_761 = BGL_MVALUES_VAL(BgL_tmpz00_1542);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1545;

									BgL_tmpz00_1545 = (int) (((long) 6));
									BgL_arg1221z00_762 = BGL_MVALUES_VAL(BgL_tmpz00_1545);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1548;

									BgL_tmpz00_1548 = (int) (((long) 7));
									BgL_arg1223z00_763 = BGL_MVALUES_VAL(BgL_tmpz00_1548);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1551;

									BgL_tmpz00_1551 = (int) (((long) 8));
									BgL_arg1225z00_764 = BGL_MVALUES_VAL(BgL_tmpz00_1551);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1554;

									BgL_tmpz00_1554 = (int) (((long) 9));
									BgL_arg1227z00_765 = BGL_MVALUES_VAL(BgL_tmpz00_1554);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1557;

									BgL_tmpz00_1557 = (int) (((long) 10));
									BgL_arg1229z00_766 = BGL_MVALUES_VAL(BgL_tmpz00_1557);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1197z00_757, BgL_arg1201z00_758,
									BgL_arg1208z00_759, BgL_arg1211z00_760, BgL_arg1216z00_761,
									BgL_arg1221z00_762, BgL_arg1223z00_763, BgL_arg1225z00_764,
									BgL_arg1227z00_765, BgL_arg1229z00_766, BEOA);
							}
							break;
						case ((long) 12):

							{	/* Ieee/control5.scm 204 */
								obj_t BgL_arg1232z00_767;
								obj_t BgL_arg1239z00_768;
								obj_t BgL_arg1242z00_769;
								obj_t BgL_arg1243z00_770;
								obj_t BgL_arg1245z00_771;
								obj_t BgL_arg1246z00_772;
								obj_t BgL_arg1247z00_773;
								obj_t BgL_arg1250z00_774;
								obj_t BgL_arg1252z00_775;
								obj_t BgL_arg1253z00_776;
								obj_t BgL_arg1254z00_777;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1574;

									BgL_tmpz00_1574 = (int) (((long) 1));
									BgL_arg1232z00_767 = BGL_MVALUES_VAL(BgL_tmpz00_1574);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1577;

									BgL_tmpz00_1577 = (int) (((long) 2));
									BgL_arg1239z00_768 = BGL_MVALUES_VAL(BgL_tmpz00_1577);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1580;

									BgL_tmpz00_1580 = (int) (((long) 3));
									BgL_arg1242z00_769 = BGL_MVALUES_VAL(BgL_tmpz00_1580);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1583;

									BgL_tmpz00_1583 = (int) (((long) 4));
									BgL_arg1243z00_770 = BGL_MVALUES_VAL(BgL_tmpz00_1583);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1586;

									BgL_tmpz00_1586 = (int) (((long) 5));
									BgL_arg1245z00_771 = BGL_MVALUES_VAL(BgL_tmpz00_1586);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1589;

									BgL_tmpz00_1589 = (int) (((long) 6));
									BgL_arg1246z00_772 = BGL_MVALUES_VAL(BgL_tmpz00_1589);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1592;

									BgL_tmpz00_1592 = (int) (((long) 7));
									BgL_arg1247z00_773 = BGL_MVALUES_VAL(BgL_tmpz00_1592);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1595;

									BgL_tmpz00_1595 = (int) (((long) 8));
									BgL_arg1250z00_774 = BGL_MVALUES_VAL(BgL_tmpz00_1595);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1598;

									BgL_tmpz00_1598 = (int) (((long) 9));
									BgL_arg1252z00_775 = BGL_MVALUES_VAL(BgL_tmpz00_1598);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1601;

									BgL_tmpz00_1601 = (int) (((long) 10));
									BgL_arg1253z00_776 = BGL_MVALUES_VAL(BgL_tmpz00_1601);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1604;

									BgL_tmpz00_1604 = (int) (((long) 11));
									BgL_arg1254z00_777 = BGL_MVALUES_VAL(BgL_tmpz00_1604);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1232z00_767, BgL_arg1239z00_768,
									BgL_arg1242z00_769, BgL_arg1243z00_770, BgL_arg1245z00_771,
									BgL_arg1246z00_772, BgL_arg1247z00_773, BgL_arg1250z00_774,
									BgL_arg1252z00_775, BgL_arg1253z00_776, BgL_arg1254z00_777,
									BEOA);
							}
							break;
						case ((long) 13):

							{	/* Ieee/control5.scm 217 */
								obj_t BgL_arg1256z00_778;
								obj_t BgL_arg1258z00_779;
								obj_t BgL_arg1263z00_780;
								obj_t BgL_arg1268z00_781;
								obj_t BgL_arg1270z00_782;
								obj_t BgL_arg1271z00_783;
								obj_t BgL_arg1273z00_784;
								obj_t BgL_arg1274z00_785;
								obj_t BgL_arg1275z00_786;
								obj_t BgL_arg1276z00_787;
								obj_t BgL_arg1277z00_788;
								obj_t BgL_arg1280z00_789;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1622;

									BgL_tmpz00_1622 = (int) (((long) 1));
									BgL_arg1256z00_778 = BGL_MVALUES_VAL(BgL_tmpz00_1622);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1625;

									BgL_tmpz00_1625 = (int) (((long) 2));
									BgL_arg1258z00_779 = BGL_MVALUES_VAL(BgL_tmpz00_1625);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1628;

									BgL_tmpz00_1628 = (int) (((long) 3));
									BgL_arg1263z00_780 = BGL_MVALUES_VAL(BgL_tmpz00_1628);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1631;

									BgL_tmpz00_1631 = (int) (((long) 4));
									BgL_arg1268z00_781 = BGL_MVALUES_VAL(BgL_tmpz00_1631);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1634;

									BgL_tmpz00_1634 = (int) (((long) 5));
									BgL_arg1270z00_782 = BGL_MVALUES_VAL(BgL_tmpz00_1634);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1637;

									BgL_tmpz00_1637 = (int) (((long) 6));
									BgL_arg1271z00_783 = BGL_MVALUES_VAL(BgL_tmpz00_1637);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1640;

									BgL_tmpz00_1640 = (int) (((long) 7));
									BgL_arg1273z00_784 = BGL_MVALUES_VAL(BgL_tmpz00_1640);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1643;

									BgL_tmpz00_1643 = (int) (((long) 8));
									BgL_arg1274z00_785 = BGL_MVALUES_VAL(BgL_tmpz00_1643);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1646;

									BgL_tmpz00_1646 = (int) (((long) 9));
									BgL_arg1275z00_786 = BGL_MVALUES_VAL(BgL_tmpz00_1646);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1649;

									BgL_tmpz00_1649 = (int) (((long) 10));
									BgL_arg1276z00_787 = BGL_MVALUES_VAL(BgL_tmpz00_1649);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1652;

									BgL_tmpz00_1652 = (int) (((long) 11));
									BgL_arg1277z00_788 = BGL_MVALUES_VAL(BgL_tmpz00_1652);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1655;

									BgL_tmpz00_1655 = (int) (((long) 12));
									BgL_arg1280z00_789 = BGL_MVALUES_VAL(BgL_tmpz00_1655);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1256z00_778, BgL_arg1258z00_779,
									BgL_arg1263z00_780, BgL_arg1268z00_781, BgL_arg1270z00_782,
									BgL_arg1271z00_783, BgL_arg1273z00_784, BgL_arg1274z00_785,
									BgL_arg1275z00_786, BgL_arg1276z00_787, BgL_arg1277z00_788,
									BgL_arg1280z00_789, BEOA);
							}
							break;
						case ((long) 14):

							{	/* Ieee/control5.scm 231 */
								obj_t BgL_arg1281z00_790;
								obj_t BgL_arg1282z00_791;
								obj_t BgL_arg1284z00_792;
								obj_t BgL_arg1285z00_793;
								obj_t BgL_arg1286z00_794;
								obj_t BgL_arg1287z00_795;
								obj_t BgL_arg1288z00_796;
								obj_t BgL_arg1289z00_797;
								obj_t BgL_arg1290z00_798;
								obj_t BgL_arg1291z00_799;
								obj_t BgL_arg1292z00_800;
								obj_t BgL_arg1295z00_801;
								obj_t BgL_arg1296z00_802;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1674;

									BgL_tmpz00_1674 = (int) (((long) 1));
									BgL_arg1281z00_790 = BGL_MVALUES_VAL(BgL_tmpz00_1674);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1677;

									BgL_tmpz00_1677 = (int) (((long) 2));
									BgL_arg1282z00_791 = BGL_MVALUES_VAL(BgL_tmpz00_1677);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1680;

									BgL_tmpz00_1680 = (int) (((long) 3));
									BgL_arg1284z00_792 = BGL_MVALUES_VAL(BgL_tmpz00_1680);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1683;

									BgL_tmpz00_1683 = (int) (((long) 4));
									BgL_arg1285z00_793 = BGL_MVALUES_VAL(BgL_tmpz00_1683);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1686;

									BgL_tmpz00_1686 = (int) (((long) 5));
									BgL_arg1286z00_794 = BGL_MVALUES_VAL(BgL_tmpz00_1686);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1689;

									BgL_tmpz00_1689 = (int) (((long) 6));
									BgL_arg1287z00_795 = BGL_MVALUES_VAL(BgL_tmpz00_1689);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1692;

									BgL_tmpz00_1692 = (int) (((long) 7));
									BgL_arg1288z00_796 = BGL_MVALUES_VAL(BgL_tmpz00_1692);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1695;

									BgL_tmpz00_1695 = (int) (((long) 8));
									BgL_arg1289z00_797 = BGL_MVALUES_VAL(BgL_tmpz00_1695);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1698;

									BgL_tmpz00_1698 = (int) (((long) 9));
									BgL_arg1290z00_798 = BGL_MVALUES_VAL(BgL_tmpz00_1698);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1701;

									BgL_tmpz00_1701 = (int) (((long) 10));
									BgL_arg1291z00_799 = BGL_MVALUES_VAL(BgL_tmpz00_1701);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1704;

									BgL_tmpz00_1704 = (int) (((long) 11));
									BgL_arg1292z00_800 = BGL_MVALUES_VAL(BgL_tmpz00_1704);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1707;

									BgL_tmpz00_1707 = (int) (((long) 12));
									BgL_arg1295z00_801 = BGL_MVALUES_VAL(BgL_tmpz00_1707);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1710;

									BgL_tmpz00_1710 = (int) (((long) 13));
									BgL_arg1296z00_802 = BGL_MVALUES_VAL(BgL_tmpz00_1710);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1281z00_790, BgL_arg1282z00_791,
									BgL_arg1284z00_792, BgL_arg1285z00_793, BgL_arg1286z00_794,
									BgL_arg1287z00_795, BgL_arg1288z00_796, BgL_arg1289z00_797,
									BgL_arg1290z00_798, BgL_arg1291z00_799, BgL_arg1292z00_800,
									BgL_arg1295z00_801, BgL_arg1296z00_802, BEOA);
							}
							break;
						case ((long) 15):

							{	/* Ieee/control5.scm 246 */
								obj_t BgL_arg1297z00_803;
								obj_t BgL_arg1298z00_804;
								obj_t BgL_arg1299z00_805;
								obj_t BgL_arg1300z00_806;
								obj_t BgL_arg1301z00_807;
								obj_t BgL_arg1302z00_808;
								obj_t BgL_arg1303z00_809;
								obj_t BgL_arg1304z00_810;
								obj_t BgL_arg1306z00_811;
								obj_t BgL_arg1307z00_812;
								obj_t BgL_arg1308z00_813;
								obj_t BgL_arg1309z00_814;
								obj_t BgL_arg1310z00_815;
								obj_t BgL_arg1311z00_816;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1730;

									BgL_tmpz00_1730 = (int) (((long) 1));
									BgL_arg1297z00_803 = BGL_MVALUES_VAL(BgL_tmpz00_1730);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1733;

									BgL_tmpz00_1733 = (int) (((long) 2));
									BgL_arg1298z00_804 = BGL_MVALUES_VAL(BgL_tmpz00_1733);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1736;

									BgL_tmpz00_1736 = (int) (((long) 3));
									BgL_arg1299z00_805 = BGL_MVALUES_VAL(BgL_tmpz00_1736);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1739;

									BgL_tmpz00_1739 = (int) (((long) 4));
									BgL_arg1300z00_806 = BGL_MVALUES_VAL(BgL_tmpz00_1739);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1742;

									BgL_tmpz00_1742 = (int) (((long) 5));
									BgL_arg1301z00_807 = BGL_MVALUES_VAL(BgL_tmpz00_1742);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1745;

									BgL_tmpz00_1745 = (int) (((long) 6));
									BgL_arg1302z00_808 = BGL_MVALUES_VAL(BgL_tmpz00_1745);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1748;

									BgL_tmpz00_1748 = (int) (((long) 7));
									BgL_arg1303z00_809 = BGL_MVALUES_VAL(BgL_tmpz00_1748);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1751;

									BgL_tmpz00_1751 = (int) (((long) 8));
									BgL_arg1304z00_810 = BGL_MVALUES_VAL(BgL_tmpz00_1751);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1754;

									BgL_tmpz00_1754 = (int) (((long) 9));
									BgL_arg1306z00_811 = BGL_MVALUES_VAL(BgL_tmpz00_1754);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1757;

									BgL_tmpz00_1757 = (int) (((long) 10));
									BgL_arg1307z00_812 = BGL_MVALUES_VAL(BgL_tmpz00_1757);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1760;

									BgL_tmpz00_1760 = (int) (((long) 11));
									BgL_arg1308z00_813 = BGL_MVALUES_VAL(BgL_tmpz00_1760);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1763;

									BgL_tmpz00_1763 = (int) (((long) 12));
									BgL_arg1309z00_814 = BGL_MVALUES_VAL(BgL_tmpz00_1763);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1766;

									BgL_tmpz00_1766 = (int) (((long) 13));
									BgL_arg1310z00_815 = BGL_MVALUES_VAL(BgL_tmpz00_1766);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1769;

									BgL_tmpz00_1769 = (int) (((long) 14));
									BgL_arg1311z00_816 = BGL_MVALUES_VAL(BgL_tmpz00_1769);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1297z00_803, BgL_arg1298z00_804,
									BgL_arg1299z00_805, BgL_arg1300z00_806, BgL_arg1301z00_807,
									BgL_arg1302z00_808, BgL_arg1303z00_809, BgL_arg1304z00_810,
									BgL_arg1306z00_811, BgL_arg1307z00_812, BgL_arg1308z00_813,
									BgL_arg1309z00_814, BgL_arg1310z00_815, BgL_arg1311z00_816,
									BEOA);
							}
							break;
						case ((long) 16):

							{	/* Ieee/control5.scm 262 */
								obj_t BgL_arg1312z00_817;
								obj_t BgL_arg1313z00_818;
								obj_t BgL_arg1314z00_819;
								obj_t BgL_arg1315z00_820;
								obj_t BgL_arg1316z00_821;
								obj_t BgL_arg1317z00_822;
								obj_t BgL_arg1318z00_823;
								obj_t BgL_arg1319z00_824;
								obj_t BgL_arg1322z00_825;
								obj_t BgL_arg1324z00_826;
								obj_t BgL_arg1325z00_827;
								obj_t BgL_arg1326z00_828;
								obj_t BgL_arg1327z00_829;
								obj_t BgL_arg1328z00_830;
								obj_t BgL_arg1329z00_831;

								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1790;

									BgL_tmpz00_1790 = (int) (((long) 1));
									BgL_arg1312z00_817 = BGL_MVALUES_VAL(BgL_tmpz00_1790);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1793;

									BgL_tmpz00_1793 = (int) (((long) 2));
									BgL_arg1313z00_818 = BGL_MVALUES_VAL(BgL_tmpz00_1793);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1796;

									BgL_tmpz00_1796 = (int) (((long) 3));
									BgL_arg1314z00_819 = BGL_MVALUES_VAL(BgL_tmpz00_1796);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1799;

									BgL_tmpz00_1799 = (int) (((long) 4));
									BgL_arg1315z00_820 = BGL_MVALUES_VAL(BgL_tmpz00_1799);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1802;

									BgL_tmpz00_1802 = (int) (((long) 5));
									BgL_arg1316z00_821 = BGL_MVALUES_VAL(BgL_tmpz00_1802);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1805;

									BgL_tmpz00_1805 = (int) (((long) 6));
									BgL_arg1317z00_822 = BGL_MVALUES_VAL(BgL_tmpz00_1805);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1808;

									BgL_tmpz00_1808 = (int) (((long) 7));
									BgL_arg1318z00_823 = BGL_MVALUES_VAL(BgL_tmpz00_1808);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1811;

									BgL_tmpz00_1811 = (int) (((long) 8));
									BgL_arg1319z00_824 = BGL_MVALUES_VAL(BgL_tmpz00_1811);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1814;

									BgL_tmpz00_1814 = (int) (((long) 9));
									BgL_arg1322z00_825 = BGL_MVALUES_VAL(BgL_tmpz00_1814);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1817;

									BgL_tmpz00_1817 = (int) (((long) 10));
									BgL_arg1324z00_826 = BGL_MVALUES_VAL(BgL_tmpz00_1817);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1820;

									BgL_tmpz00_1820 = (int) (((long) 11));
									BgL_arg1325z00_827 = BGL_MVALUES_VAL(BgL_tmpz00_1820);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1823;

									BgL_tmpz00_1823 = (int) (((long) 12));
									BgL_arg1326z00_828 = BGL_MVALUES_VAL(BgL_tmpz00_1823);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1826;

									BgL_tmpz00_1826 = (int) (((long) 13));
									BgL_arg1327z00_829 = BGL_MVALUES_VAL(BgL_tmpz00_1826);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1829;

									BgL_tmpz00_1829 = (int) (((long) 14));
									BgL_arg1328z00_830 = BGL_MVALUES_VAL(BgL_tmpz00_1829);
								}
								{	/* Ieee/control5.scm 79 */
									int BgL_tmpz00_1832;

									BgL_tmpz00_1832 = (int) (((long) 15));
									BgL_arg1329z00_831 = BGL_MVALUES_VAL(BgL_tmpz00_1832);
								}
								return
									PROCEDURE_ENTRY(BgL_consumerz00_9) (BgL_consumerz00_9,
									BgL_res0z00_708, BgL_arg1312z00_817, BgL_arg1313z00_818,
									BgL_arg1314z00_819, BgL_arg1315z00_820, BgL_arg1316z00_821,
									BgL_arg1317z00_822, BgL_arg1318z00_823, BgL_arg1319z00_824,
									BgL_arg1322z00_825, BgL_arg1324z00_826, BgL_arg1325z00_827,
									BgL_arg1326z00_828, BgL_arg1327z00_829, BgL_arg1328z00_830,
									BgL_arg1329z00_831, BEOA);
							}
							break;
						default:
							return apply(BgL_consumerz00_9, BgL_res0z00_708);
						}
				}
			}
		}

	}



/* &call-with-values */
	obj_t BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00(obj_t
		BgL_envz00_1199, obj_t BgL_producerz00_1200, obj_t BgL_consumerz00_1201)
	{
		{	/* Ieee/control5.scm 117 */
			{	/* Ieee/control5.scm 118 */
				obj_t BgL_auxz00_1865;
				obj_t BgL_auxz00_1858;

				if (PROCEDUREP(BgL_consumerz00_1201))
					{	/* Ieee/control5.scm 118 */
						BgL_auxz00_1865 = BgL_consumerz00_1201;
					}
				else
					{
						obj_t BgL_auxz00_1868;

						BgL_auxz00_1868 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1601z00zz__r5_control_features_6_4z00,
							BINT(((long) 4539)),
							BGl_string1606z00zz__r5_control_features_6_4z00,
							BGl_string1607z00zz__r5_control_features_6_4z00,
							BgL_consumerz00_1201);
						FAILURE(BgL_auxz00_1868, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_producerz00_1200))
					{	/* Ieee/control5.scm 118 */
						BgL_auxz00_1858 = BgL_producerz00_1200;
					}
				else
					{
						obj_t BgL_auxz00_1861;

						BgL_auxz00_1861 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1601z00zz__r5_control_features_6_4z00,
							BINT(((long) 4539)),
							BGl_string1606z00zz__r5_control_features_6_4z00,
							BGl_string1607z00zz__r5_control_features_6_4z00,
							BgL_producerz00_1200);
						FAILURE(BgL_auxz00_1861, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00
					(BgL_auxz00_1858, BgL_auxz00_1865);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00()
	{
		{	/* Ieee/control5.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1608z00zz__r5_control_features_6_4z00));
		}

	}

#ifdef __cplusplus
}
#endif
