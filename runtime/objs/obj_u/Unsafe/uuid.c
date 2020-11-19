/*===========================================================================*/
/*   (Unsafe/uuid.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/uuid.scm -indent -o objs/obj_u/Unsafe/uuid.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62genuuidz62zz__uuidz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__uuidz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__uuidz00();
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__uuidz00();
	static obj_t BGl_methodzd2initzd2zz__uuidz00();
	extern long bgl_current_seconds();
	BGL_EXPORTED_DECL obj_t BGl_genuuidz00zz__uuidz00();
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__uuidz00(long,
		char *);
	static obj_t BGl_cnstzd2initzd2zz__uuidz00();
	static obj_t BGl_gczd2rootszd2initz00zz__uuidz00();
	static obj_t BGl_list1870z00zz__uuidz00 = BUNSPEC;
	static obj_t BGl_vector1869z00zz__uuidz00 = BUNSPEC;
	extern obj_t make_string_sans_fill(long);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_genuuidzd2envzd2zz__uuidz00,
		BgL_bgl_za762genuuidza762za7za7_1871z00, BGl_z62genuuidz62zz__uuidz00, 0L,
		BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__uuidz00));
		     ADD_ROOT((void *) (&BGl_list1870z00zz__uuidz00));
		     ADD_ROOT((void *) (&BGl_vector1869z00zz__uuidz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__uuidz00(long
		BgL_checksumz00_2472, char *BgL_fromz00_2473)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__uuidz00))
				{
					BGl_requirezd2initializa7ationz75zz__uuidz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__uuidz00();
					BGl_cnstzd2initzd2zz__uuidz00();
					return BGl_methodzd2initzd2zz__uuidz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 15 */
			BGl_list1870z00zz__uuidz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '0')),
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '1')),
					MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '2')),
						MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '3')),
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '4')),
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '5')),
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '6')),
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '7')),
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '8')),
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '9')),
													MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'a')),
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'b')),
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'c')),
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'd')),
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'e')),
																		MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																					'f')), BNIL))))))))))))))));
			return (BGl_vector1869z00zz__uuidz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list1870z00zz__uuidz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* genuuid */
	BGL_EXPORTED_DEF obj_t BGl_genuuidz00zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 83 */
			{	/* Unsafe/uuid.scm 86 */
				obj_t BgL_hexz00_1179;

				BgL_hexz00_1179 = BGl_vector1869z00zz__uuidz00;
				{	/* Unsafe/uuid.scm 91 */
					long BgL_n1z00_1181;
					long BgL_n2z00_1182;
					long BgL_n3z00_1183;
					long BgL_n4z00_1184;
					long BgL_n5z00_1185;
					long BgL_n6z00_1186;
					long BgL_n7z00_1187;
					long BgL_n8z00_1188;

					{	/* Unsafe/uuid.scm 91 */
						long BgL_arg1316z00_1254;
						long BgL_arg1317z00_1255;

						{	/* Unsafe/uuid.scm 91 */
							long BgL_arg1318z00_1256;

							BgL_arg1318z00_1256 = bgl_current_seconds();
							{	/* Unsafe/uuid.scm 91 */
								long BgL_res1697z00_1726;

								BgL_res1697z00_1726 = (long) (BgL_arg1318z00_1256);
								BgL_arg1316z00_1254 = BgL_res1697z00_1726;
						}}
						{	/* Unsafe/uuid.scm 91 */
							long BgL_res1699z00_1730;

							{	/* Unsafe/uuid.scm 91 */
								int BgL_arg1523z00_1728;

								BgL_arg1523z00_1728 = rand();
								BgL_res1699z00_1730 =
									BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
									(long) (BgL_arg1523z00_1728), ((long) 65536));
							}
							BgL_arg1317z00_1255 = BgL_res1699z00_1730;
						}
						BgL_n1z00_1181 = (BgL_arg1316z00_1254 ^ BgL_arg1317z00_1255);
					}
					{	/* Unsafe/uuid.scm 92 */
						long BgL_res1702z00_1737;

						{	/* Unsafe/uuid.scm 92 */
							int BgL_arg1523z00_1735;

							BgL_arg1523z00_1735 = rand();
							BgL_res1702z00_1737 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1735), ((long) 65536));
						}
						BgL_n2z00_1182 = BgL_res1702z00_1737;
					}
					{	/* Unsafe/uuid.scm 93 */
						long BgL_res1704z00_1741;

						{	/* Unsafe/uuid.scm 93 */
							int BgL_arg1523z00_1739;

							BgL_arg1523z00_1739 = rand();
							BgL_res1704z00_1741 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1739), ((long) 65536));
						}
						BgL_n3z00_1183 = BgL_res1704z00_1741;
					}
					{	/* Unsafe/uuid.scm 94 */
						long BgL_res1706z00_1745;

						{	/* Unsafe/uuid.scm 94 */
							int BgL_arg1523z00_1743;

							BgL_arg1523z00_1743 = rand();
							BgL_res1706z00_1745 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1743), ((long) 65536));
						}
						BgL_n4z00_1184 = BgL_res1706z00_1745;
					}
					{	/* Unsafe/uuid.scm 95 */
						long BgL_res1708z00_1749;

						{	/* Unsafe/uuid.scm 95 */
							int BgL_arg1523z00_1747;

							BgL_arg1523z00_1747 = rand();
							BgL_res1708z00_1749 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1747), ((long) 65536));
						}
						BgL_n5z00_1185 = BgL_res1708z00_1749;
					}
					{	/* Unsafe/uuid.scm 96 */
						long BgL_res1710z00_1753;

						{	/* Unsafe/uuid.scm 96 */
							int BgL_arg1523z00_1751;

							BgL_arg1523z00_1751 = rand();
							BgL_res1710z00_1753 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1751), ((long) 65536));
						}
						BgL_n6z00_1186 = BgL_res1710z00_1753;
					}
					{	/* Unsafe/uuid.scm 97 */
						long BgL_res1712z00_1757;

						{	/* Unsafe/uuid.scm 97 */
							int BgL_arg1523z00_1755;

							BgL_arg1523z00_1755 = rand();
							BgL_res1712z00_1757 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1755), ((long) 65536));
						}
						BgL_n7z00_1187 = BgL_res1712z00_1757;
					}
					{	/* Unsafe/uuid.scm 98 */
						long BgL_res1714z00_1761;

						{	/* Unsafe/uuid.scm 98 */
							int BgL_arg1523z00_1759;

							BgL_arg1523z00_1759 = rand();
							BgL_res1714z00_1761 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1523z00_1759), ((long) 65536));
						}
						BgL_n8z00_1188 = BgL_res1714z00_1761;
					}
					{	/* Unsafe/uuid.scm 99 */
						obj_t BgL_g1041z00_1189;

						BgL_g1041z00_1189 = make_string_sans_fill(((long) 36));
						{	/* Unsafe/uuid.scm 101 */
							unsigned char BgL_arg1197z00_1190;

							{	/* Unsafe/uuid.scm 101 */
								long BgL_arg1201z00_1191;

								BgL_arg1201z00_1191 =
									(
									(BgL_n1z00_1181 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1197z00_1190 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1201z00_1191));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 0), BgL_arg1197z00_1190);
						}
						{	/* Unsafe/uuid.scm 102 */
							unsigned char BgL_arg1208z00_1192;

							{	/* Unsafe/uuid.scm 102 */
								long BgL_arg1211z00_1193;

								BgL_arg1211z00_1193 =
									(
									(BgL_n1z00_1181 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1208z00_1192 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1211z00_1193));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 1), BgL_arg1208z00_1192);
						}
						{	/* Unsafe/uuid.scm 103 */
							unsigned char BgL_arg1216z00_1194;

							{	/* Unsafe/uuid.scm 103 */
								long BgL_arg1221z00_1195;

								BgL_arg1221z00_1195 =
									(
									(BgL_n1z00_1181 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1216z00_1194 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1221z00_1195));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 2), BgL_arg1216z00_1194);
						}
						{	/* Unsafe/uuid.scm 104 */
							unsigned char BgL_arg1223z00_1196;

							{	/* Unsafe/uuid.scm 104 */
								long BgL_arg1225z00_1197;

								BgL_arg1225z00_1197 =
									(
									(BgL_n1z00_1181 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1223z00_1196 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1225z00_1197));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 3), BgL_arg1223z00_1196);
						}
						{	/* Unsafe/uuid.scm 105 */
							unsigned char BgL_arg1227z00_1198;

							{	/* Unsafe/uuid.scm 105 */
								long BgL_arg1229z00_1199;

								BgL_arg1229z00_1199 =
									(
									(BgL_n2z00_1182 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1227z00_1198 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1229z00_1199));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 4), BgL_arg1227z00_1198);
						}
						{	/* Unsafe/uuid.scm 106 */
							unsigned char BgL_arg1232z00_1200;

							{	/* Unsafe/uuid.scm 106 */
								long BgL_arg1239z00_1201;

								BgL_arg1239z00_1201 =
									(
									(BgL_n2z00_1182 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1232z00_1200 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1239z00_1201));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 5), BgL_arg1232z00_1200);
						}
						{	/* Unsafe/uuid.scm 107 */
							unsigned char BgL_arg1242z00_1202;

							{	/* Unsafe/uuid.scm 107 */
								long BgL_arg1243z00_1203;

								BgL_arg1243z00_1203 =
									(
									(BgL_n2z00_1182 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1242z00_1202 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1243z00_1203));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 6), BgL_arg1242z00_1202);
						}
						{	/* Unsafe/uuid.scm 108 */
							unsigned char BgL_arg1245z00_1204;

							{	/* Unsafe/uuid.scm 108 */
								long BgL_arg1246z00_1205;

								BgL_arg1246z00_1205 =
									(
									(BgL_n2z00_1182 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1245z00_1204 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1246z00_1205));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 7), BgL_arg1245z00_1204);
						}
						STRING_SET(BgL_g1041z00_1189, ((long) 8), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 111 */
							unsigned char BgL_arg1247z00_1206;

							{	/* Unsafe/uuid.scm 111 */
								long BgL_arg1250z00_1207;

								BgL_arg1250z00_1207 =
									(
									(BgL_n3z00_1183 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1247z00_1206 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1250z00_1207));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 9), BgL_arg1247z00_1206);
						}
						{	/* Unsafe/uuid.scm 112 */
							unsigned char BgL_arg1252z00_1208;

							{	/* Unsafe/uuid.scm 112 */
								long BgL_arg1253z00_1209;

								BgL_arg1253z00_1209 =
									(
									(BgL_n3z00_1183 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1252z00_1208 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1253z00_1209));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 10), BgL_arg1252z00_1208);
						}
						{	/* Unsafe/uuid.scm 113 */
							unsigned char BgL_arg1254z00_1210;

							{	/* Unsafe/uuid.scm 113 */
								long BgL_arg1256z00_1211;

								BgL_arg1256z00_1211 =
									(
									(BgL_n3z00_1183 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1254z00_1210 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1256z00_1211));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 11), BgL_arg1254z00_1210);
						}
						{	/* Unsafe/uuid.scm 114 */
							unsigned char BgL_arg1258z00_1212;

							{	/* Unsafe/uuid.scm 114 */
								long BgL_arg1263z00_1213;

								BgL_arg1263z00_1213 =
									(
									(BgL_n3z00_1183 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1258z00_1212 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1263z00_1213));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 12), BgL_arg1258z00_1212);
						}
						STRING_SET(BgL_g1041z00_1189, ((long) 13), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 99 */
							unsigned char BgL_tmpz00_2688;

							BgL_tmpz00_2688 = CCHAR(VECTOR_REF(BgL_hexz00_1179, ((long) 4)));
							STRING_SET(BgL_g1041z00_1189, ((long) 14), BgL_tmpz00_2688);
						}
						{	/* Unsafe/uuid.scm 118 */
							unsigned char BgL_arg1270z00_1215;

							{	/* Unsafe/uuid.scm 118 */
								long BgL_arg1271z00_1216;

								BgL_arg1271z00_1216 =
									(
									(BgL_n4z00_1184 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1270z00_1215 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1271z00_1216));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 15), BgL_arg1270z00_1215);
						}
						{	/* Unsafe/uuid.scm 119 */
							unsigned char BgL_arg1273z00_1217;

							{	/* Unsafe/uuid.scm 119 */
								long BgL_arg1274z00_1218;

								BgL_arg1274z00_1218 =
									(
									(BgL_n4z00_1184 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1273z00_1217 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1274z00_1218));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 16), BgL_arg1273z00_1217);
						}
						{	/* Unsafe/uuid.scm 120 */
							unsigned char BgL_arg1275z00_1219;

							{	/* Unsafe/uuid.scm 120 */
								long BgL_arg1276z00_1220;

								BgL_arg1276z00_1220 =
									(
									(BgL_n4z00_1184 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1275z00_1219 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1276z00_1220));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 17), BgL_arg1275z00_1219);
						}
						STRING_SET(BgL_g1041z00_1189, ((long) 18), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 123 */
							unsigned char BgL_arg1277z00_1221;

							{	/* Unsafe/uuid.scm 123 */
								long BgL_arg1280z00_1222;

								BgL_arg1280z00_1222 =
									(
									((BgL_n5z00_1185 >>
											(int) (((long) 12))) &
										(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
													(((long) 1) <<
														(int) (((long) 2)))),
												BINT(((long) 1))))) | ((long) 8));
								BgL_arg1277z00_1221 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1280z00_1222));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 19), BgL_arg1277z00_1221);
						}
						{	/* Unsafe/uuid.scm 124 */
							unsigned char BgL_arg1282z00_1224;

							{	/* Unsafe/uuid.scm 124 */
								long BgL_arg1284z00_1225;

								BgL_arg1284z00_1225 =
									(
									(BgL_n5z00_1185 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1282z00_1224 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1284z00_1225));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 20), BgL_arg1282z00_1224);
						}
						{	/* Unsafe/uuid.scm 126 */
							unsigned char BgL_arg1285z00_1226;

							{	/* Unsafe/uuid.scm 126 */
								long BgL_arg1286z00_1227;

								BgL_arg1286z00_1227 =
									(
									(BgL_n5z00_1185 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1285z00_1226 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1286z00_1227));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 21), BgL_arg1285z00_1226);
						}
						{	/* Unsafe/uuid.scm 127 */
							unsigned char BgL_arg1287z00_1228;

							{	/* Unsafe/uuid.scm 127 */
								long BgL_arg1288z00_1229;

								BgL_arg1288z00_1229 =
									(
									(BgL_n5z00_1185 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1287z00_1228 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1288z00_1229));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 22), BgL_arg1287z00_1228);
						}
						STRING_SET(BgL_g1041z00_1189, ((long) 23), ((unsigned char) '-'));
						{	/* Unsafe/uuid.scm 130 */
							unsigned char BgL_arg1289z00_1230;

							{	/* Unsafe/uuid.scm 130 */
								long BgL_arg1290z00_1231;

								BgL_arg1290z00_1231 =
									(
									(BgL_n6z00_1186 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1289z00_1230 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1290z00_1231));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 24), BgL_arg1289z00_1230);
						}
						{	/* Unsafe/uuid.scm 131 */
							unsigned char BgL_arg1291z00_1232;

							{	/* Unsafe/uuid.scm 131 */
								long BgL_arg1292z00_1233;

								BgL_arg1292z00_1233 =
									(
									(BgL_n6z00_1186 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1291z00_1232 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1292z00_1233));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 25), BgL_arg1291z00_1232);
						}
						{	/* Unsafe/uuid.scm 132 */
							unsigned char BgL_arg1295z00_1234;

							{	/* Unsafe/uuid.scm 132 */
								long BgL_arg1296z00_1235;

								BgL_arg1296z00_1235 =
									(
									(BgL_n6z00_1186 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1295z00_1234 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1296z00_1235));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 26), BgL_arg1295z00_1234);
						}
						{	/* Unsafe/uuid.scm 133 */
							unsigned char BgL_arg1297z00_1236;

							{	/* Unsafe/uuid.scm 133 */
								long BgL_arg1298z00_1237;

								BgL_arg1298z00_1237 =
									(
									(BgL_n6z00_1186 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1297z00_1236 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1298z00_1237));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 27), BgL_arg1297z00_1236);
						}
						{	/* Unsafe/uuid.scm 134 */
							unsigned char BgL_arg1299z00_1238;

							{	/* Unsafe/uuid.scm 134 */
								long BgL_arg1300z00_1239;

								BgL_arg1300z00_1239 =
									(
									(BgL_n7z00_1187 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1299z00_1238 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1300z00_1239));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 28), BgL_arg1299z00_1238);
						}
						{	/* Unsafe/uuid.scm 135 */
							unsigned char BgL_arg1301z00_1240;

							{	/* Unsafe/uuid.scm 135 */
								long BgL_arg1302z00_1241;

								BgL_arg1302z00_1241 =
									(
									(BgL_n7z00_1187 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1301z00_1240 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1302z00_1241));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 29), BgL_arg1301z00_1240);
						}
						{	/* Unsafe/uuid.scm 136 */
							unsigned char BgL_arg1303z00_1242;

							{	/* Unsafe/uuid.scm 136 */
								long BgL_arg1304z00_1243;

								BgL_arg1304z00_1243 =
									(
									(BgL_n7z00_1187 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1303z00_1242 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1304z00_1243));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 30), BgL_arg1303z00_1242);
						}
						{	/* Unsafe/uuid.scm 137 */
							unsigned char BgL_arg1306z00_1244;

							{	/* Unsafe/uuid.scm 137 */
								long BgL_arg1307z00_1245;

								BgL_arg1307z00_1245 =
									(
									(BgL_n7z00_1187 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1306z00_1244 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1307z00_1245));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 31), BgL_arg1306z00_1244);
						}
						{	/* Unsafe/uuid.scm 138 */
							unsigned char BgL_arg1308z00_1246;

							{	/* Unsafe/uuid.scm 138 */
								long BgL_arg1309z00_1247;

								BgL_arg1309z00_1247 =
									(
									(BgL_n8z00_1188 >>
										(int) (((long) 12))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1308z00_1246 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1309z00_1247));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 32), BgL_arg1308z00_1246);
						}
						{	/* Unsafe/uuid.scm 139 */
							unsigned char BgL_arg1310z00_1248;

							{	/* Unsafe/uuid.scm 139 */
								long BgL_arg1311z00_1249;

								BgL_arg1311z00_1249 =
									(
									(BgL_n8z00_1188 >>
										(int) (((long) 8))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1310z00_1248 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1311z00_1249));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 33), BgL_arg1310z00_1248);
						}
						{	/* Unsafe/uuid.scm 140 */
							unsigned char BgL_arg1312z00_1250;

							{	/* Unsafe/uuid.scm 140 */
								long BgL_arg1313z00_1251;

								BgL_arg1313z00_1251 =
									(
									(BgL_n8z00_1188 >>
										(int) (((long) 4))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1312z00_1250 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1313z00_1251));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 34), BgL_arg1312z00_1250);
						}
						{	/* Unsafe/uuid.scm 141 */
							unsigned char BgL_arg1314z00_1252;

							{	/* Unsafe/uuid.scm 141 */
								long BgL_arg1315z00_1253;

								BgL_arg1315z00_1253 =
									(
									(BgL_n8z00_1188 >>
										(int) (((long) 0))) &
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(
												(((long) 1) <<
													(int) (((long) 4)))), BINT(((long) 1)))));
								BgL_arg1314z00_1252 =
									CCHAR(VECTOR_REF(BgL_hexz00_1179, BgL_arg1315z00_1253));
							}
							STRING_SET(BgL_g1041z00_1189, ((long) 35), BgL_arg1314z00_1252);
						}
						return BgL_g1041z00_1189;
					}
				}
			}
		}

	}



/* &genuuid */
	obj_t BGl_z62genuuidz62zz__uuidz00(obj_t BgL_envz00_2470)
	{
		{	/* Unsafe/uuid.scm 83 */
			return BGl_genuuidz00zz__uuidz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__uuidz00()
	{
		{	/* Unsafe/uuid.scm 15 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
