/*===========================================================================*/
/*   (Jas/produce.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/produce.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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


	static bool_t BGl_producezd2fieldszd2zzjas_producez00(obj_t, obj_t);
	static bool_t BGl_producezd2poolzd2zzjas_producez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_producez00();
	static obj_t BGl_methodzd2initzd2zzjas_producez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_producez00();
	static bool_t BGl_producezd2fieldzd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_producezd2attributezd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_producezd2stringzd2zzjas_producez00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	static bool_t BGl_producezd2interfaceszd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_z62producez62zzjas_producez00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_producez00 = BUNSPEC;
	static obj_t BGl_producezd2cpinfozd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_producez00();
	static bool_t BGl_producezd2methodzd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_outshortz00zzjas_producez00(obj_t, obj_t);
	static bool_t BGl_producezd2methodszd2zzjas_producez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_producez00zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_producezd2codezd2zzjas_producez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzjas_producez00();
	static obj_t BGl_outintz00zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_producez00();
	static bool_t BGl_producezd2attributeszd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_producez00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string1492z00zzjas_producez00,
		BgL_bgl_string1492za700za7za7j1520za7, "as", 2);
	      DEFINE_STRING(BGl_string1493z00zzjas_producez00,
		BgL_bgl_string1493za700za7za7j1521za7, "bad cpinfo tag", 14);
	      DEFINE_STRING(BGl_string1494z00zzjas_producez00,
		BgL_bgl_string1494za700za7za7j1522za7, "constant string too long", 24);
	      DEFINE_STRING(BGl_string1495z00zzjas_producez00,
		BgL_bgl_string1495za700za7za7j1523za7, "produce-attribute", 17);
	      DEFINE_STRING(BGl_string1496z00zzjas_producez00,
		BgL_bgl_string1496za700za7za7j1524za7, "bad attribute type", 18);
	      DEFINE_STRING(BGl_string1497z00zzjas_producez00,
		BgL_bgl_string1497za700za7za7j1525za7, "produce-code", 12);
	      DEFINE_STRING(BGl_string1498z00zzjas_producez00,
		BgL_bgl_string1498za700za7za7j1526za7, "bad handler", 11);
	      DEFINE_STRING(BGl_string1499z00zzjas_producez00,
		BgL_bgl_string1499za700za7za7j1527za7, "bad code attribute", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_producezd2envzd2zzjas_producez00,
		BgL_bgl_za762produceza762za7za7j1528z00, BGl_z62producez62zzjas_producez00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1500z00zzjas_producez00,
		BgL_bgl_string1500za700za7za7j1529za7, "jas_produce", 11);
	      DEFINE_STRING(BGl_string1501z00zzjas_producez00,
		BgL_bgl_string1501za700za7za7j1530za7,
		"localvariable linenumber srcfile code bytevector ok ", 52);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_producez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long
		BgL_checksumz00_890, char *BgL_fromz00_891)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_producez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_producez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_producez00();
					BGl_libraryzd2moduleszd2initz00zzjas_producez00();
					BGl_cnstzd2initzd2zzjas_producez00();
					BGl_importedzd2moduleszd2initz00zzjas_producez00();
					return BGl_methodzd2initzd2zzjas_producez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"jas_produce");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "jas_produce");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "jas_produce");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			{	/* Jas/produce.scm 1 */
				obj_t BgL_cportz00_877;

				{	/* Jas/produce.scm 1 */
					obj_t BgL_stringz00_885;

					BgL_stringz00_885 = BGl_string1501z00zzjas_producez00;
					{	/* Jas/produce.scm 1 */
						obj_t BgL_startz00_886;

						BgL_startz00_886 = BINT(((long) 0));
						{	/* Jas/produce.scm 1 */
							obj_t BgL_endz00_887;

							BgL_endz00_887 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_885)));
							{	/* Jas/produce.scm 1 */

								BgL_cportz00_877 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_885, BgL_startz00_886, BgL_endz00_887);
				}}}}
				{
					long BgL_iz00_878;

					BgL_iz00_878 = ((long) 5);
				BgL_loopz00_879:
					if ((BgL_iz00_878 == ((long) -1)))
						{	/* Jas/produce.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/produce.scm 1 */
							{	/* Jas/produce.scm 1 */
								obj_t BgL_arg1518z00_881;

								{	/* Jas/produce.scm 1 */

									{	/* Jas/produce.scm 1 */
										obj_t BgL_locationz00_883;

										BgL_locationz00_883 = BBOOL(((bool_t) 0));
										{	/* Jas/produce.scm 1 */

											BgL_arg1518z00_881 =
												BGl_readz00zz__readerz00(BgL_cportz00_877,
												BgL_locationz00_883);
										}
									}
								}
								{	/* Jas/produce.scm 1 */
									int BgL_tmpz00_919;

									BgL_tmpz00_919 = (int) (BgL_iz00_878);
									CNST_TABLE_SET(BgL_tmpz00_919, BgL_arg1518z00_881);
							}}
							{	/* Jas/produce.scm 1 */
								int BgL_auxz00_884;

								BgL_auxz00_884 = (int) ((BgL_iz00_878 - ((long) 1)));
								{
									long BgL_iz00_924;

									BgL_iz00_924 = (long) (BgL_auxz00_884);
									BgL_iz00_878 = BgL_iz00_924;
									goto BgL_loopz00_879;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* outshort */
	obj_t BGl_outshortz00zzjas_producez00(obj_t BgL_outchanz00_7,
		obj_t BgL_nz00_8)
	{
		{	/* Jas/produce.scm 14 */
			{	/* Jas/produce.scm 15 */
				long BgL_arg1239z00_292;

				BgL_arg1239z00_292 = ((long) CINT(BgL_nz00_8) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_636;

					BgL_arg1229z00_636 = ((BgL_arg1239z00_292 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_7, (char) (BgL_arg1229z00_636));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1242z00_293;

				BgL_arg1242z00_293 = ((long) CINT(BgL_nz00_8) & ((long) 255));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_646;

					BgL_arg1229z00_646 = ((BgL_arg1242z00_293 & ((long) 255)));
					return BGL_OUTPUT_CHAR(BgL_outchanz00_7, (char) (BgL_arg1229z00_646));
		}}}

	}



/* outint */
	obj_t BGl_outintz00zzjas_producez00(obj_t BgL_outchanz00_9, obj_t BgL_nz00_10)
	{
		{	/* Jas/produce.scm 18 */
			{	/* Jas/produce.scm 19 */
				long BgL_arg1243z00_294;

				BgL_arg1243z00_294 = ((long) CINT(BgL_nz00_10) >> (int) (((long) 16)));
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_9,
					BINT(BgL_arg1243z00_294));
			}
			{	/* Jas/produce.scm 20 */
				long BgL_arg1245z00_295;

				BgL_arg1245z00_295 = ((long) CINT(BgL_nz00_10) & ((long) 65535));
				return
					BGl_outshortz00zzjas_producez00(BgL_outchanz00_9,
					BINT(BgL_arg1245z00_295));
			}
		}

	}



/* produce */
	BGL_EXPORTED_DEF obj_t BGl_producez00zzjas_producez00(obj_t BgL_outchanz00_11,
		obj_t BgL_classfilez00_12)
	{
		{	/* Jas/produce.scm 22 */
			{	/* Jas/produce.scm 15 */
				long BgL_arg1239z00_658;

				BgL_arg1239z00_658 = (((long) 51966) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_661;

					BgL_arg1229z00_661 = ((BgL_arg1239z00_658 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_661));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1242z00_669;

				BgL_arg1242z00_669 = (((long) 51966) & ((long) 255));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_672;

					BgL_arg1229z00_672 = ((BgL_arg1242z00_669 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_672));
			}}
			{	/* Jas/produce.scm 15 */
				long BgL_arg1239z00_680;

				BgL_arg1239z00_680 = (((long) 47806) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_683;

					BgL_arg1229z00_683 = ((BgL_arg1239z00_680 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_683));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1242z00_691;

				BgL_arg1242z00_691 = (((long) 47806) & ((long) 255));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_694;

					BgL_arg1229z00_694 = ((BgL_arg1242z00_691 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_694));
			}}
			{	/* Jas/produce.scm 15 */
				long BgL_arg1239z00_702;

				BgL_arg1239z00_702 = (((long) 3) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_705;

					BgL_arg1229z00_705 = ((BgL_arg1239z00_702 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_705));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1242z00_713;

				BgL_arg1242z00_713 = (((long) 3) & ((long) 255));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_716;

					BgL_arg1229z00_716 = ((BgL_arg1242z00_713 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_716));
			}}
			{	/* Jas/produce.scm 15 */
				long BgL_arg1239z00_724;

				BgL_arg1239z00_724 = (((long) 45) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_727;

					BgL_arg1229z00_727 = ((BgL_arg1239z00_724 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_727));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1242z00_735;

				BgL_arg1242z00_735 = (((long) 45) & ((long) 255));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_738;

					BgL_arg1229z00_738 = ((BgL_arg1242z00_735 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_11, (char) (BgL_arg1229z00_738));
			}}
			{	/* Jas/produce.scm 29 */
				obj_t BgL_arg1246z00_297;
				obj_t BgL_arg1247z00_298;

				BgL_arg1246z00_297 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->
					BgL_poolzd2siza7ez75);
				BgL_arg1247z00_298 =
					bgl_reverse((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_classfilez00_12)))->BgL_poolz00));
				BGl_producezd2poolzd2zzjas_producez00(BgL_outchanz00_11,
					BgL_arg1246z00_297, BgL_arg1247z00_298);
			}
			{	/* Jas/produce.scm 30 */
				obj_t BgL_arg1252z00_300;

				BgL_arg1252z00_300 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->BgL_flagsz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_11, BgL_arg1252z00_300);
			}
			{	/* Jas/produce.scm 31 */
				obj_t BgL_arg1253z00_301;

				BgL_arg1253z00_301 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->BgL_mez00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_11, BgL_arg1253z00_301);
			}
			{	/* Jas/produce.scm 32 */
				obj_t BgL_arg1254z00_302;

				BgL_arg1254z00_302 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->BgL_superz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_11, BgL_arg1254z00_302);
			}
			{	/* Jas/produce.scm 33 */
				obj_t BgL_arg1256z00_303;

				BgL_arg1256z00_303 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->
					BgL_interfacesz00);
				BGl_producezd2interfaceszd2zzjas_producez00(BgL_outchanz00_11,
					BgL_arg1256z00_303);
			}
			{	/* Jas/produce.scm 34 */
				obj_t BgL_arg1258z00_304;

				BgL_arg1258z00_304 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->BgL_fieldsz00);
				BGl_producezd2fieldszd2zzjas_producez00(BgL_outchanz00_11,
					BgL_arg1258z00_304);
			}
			{	/* Jas/produce.scm 35 */
				obj_t BgL_arg1263z00_305;

				BgL_arg1263z00_305 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->BgL_methodsz00);
				BGl_producezd2methodszd2zzjas_producez00(BgL_outchanz00_11,
					BgL_arg1263z00_305);
			}
			{	/* Jas/produce.scm 36 */
				obj_t BgL_arg1268z00_306;

				BgL_arg1268z00_306 =
					(((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_classfilez00_12)))->
					BgL_attributesz00);
				return
					BBOOL(BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_11,
						BgL_arg1268z00_306));
			}
		}

	}



/* &produce */
	obj_t BGl_z62producez62zzjas_producez00(obj_t BgL_envz00_874,
		obj_t BgL_outchanz00_875, obj_t BgL_classfilez00_876)
	{
		{	/* Jas/produce.scm 22 */
			return
				BGl_producez00zzjas_producez00(BgL_outchanz00_875,
				BgL_classfilez00_876);
		}

	}



/* produce-pool */
	bool_t BGl_producezd2poolzd2zzjas_producez00(obj_t BgL_outchanz00_13,
		obj_t BgL_siza7eza7_14, obj_t BgL_poolz00_15)
	{
		{	/* Jas/produce.scm 38 */
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_13, BgL_siza7eza7_14);
			{
				obj_t BgL_l1201z00_308;

				BgL_l1201z00_308 = BgL_poolz00_15;
			BgL_zc3z04anonymousza31269ze3z87_309:
				if (PAIRP(BgL_l1201z00_308))
					{	/* Jas/produce.scm 40 */
						BGl_producezd2cpinfozd2zzjas_producez00(BgL_outchanz00_13,
							CAR(BgL_l1201z00_308));
						{
							obj_t BgL_l1201z00_1027;

							BgL_l1201z00_1027 = CDR(BgL_l1201z00_308);
							BgL_l1201z00_308 = BgL_l1201z00_1027;
							goto BgL_zc3z04anonymousza31269ze3z87_309;
						}
					}
				else
					{	/* Jas/produce.scm 40 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* produce-cpinfo */
	obj_t BGl_producezd2cpinfozd2zzjas_producez00(obj_t BgL_outchanz00_16,
		obj_t BgL_cpinfoz00_17)
	{
		{	/* Jas/produce.scm 42 */
			{	/* Jas/produce.scm 43 */
				obj_t BgL_arg1273z00_314;

				BgL_arg1273z00_314 = CAR(((obj_t) BgL_cpinfoz00_17));
				{	/* Jas/produce.scm 12 */
					unsigned char BgL_arg1229z00_750;

					BgL_arg1229z00_750 =
						(((long) CINT(BgL_arg1273z00_314) & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_16, (char) (BgL_arg1229z00_750));
			}}
			{

				{	/* Jas/produce.scm 44 */
					obj_t BgL_aux1058z00_316;

					BgL_aux1058z00_316 = CAR(((obj_t) BgL_cpinfoz00_17));
					if (INTEGERP(BgL_aux1058z00_316))
						{	/* Jas/produce.scm 44 */
							switch ((long) CINT(BgL_aux1058z00_316))
								{
								case ((long) 1):

									{	/* Jas/produce.scm 46 */
										obj_t BgL_strz00_318;

										{	/* Jas/produce.scm 46 */
											obj_t BgL_arg1277z00_323;

											BgL_arg1277z00_323 = CDR(((obj_t) BgL_cpinfoz00_17));
											BgL_strz00_318 =
												BGl_stringzd2ze3utf8z31zzjas_libz00(BgL_arg1277z00_323);
										}
										{	/* Jas/produce.scm 47 */
											long BgL_nz00_319;

											BgL_nz00_319 = STRING_LENGTH(((obj_t) BgL_strz00_318));
											if ((BgL_nz00_319 > ((long) 65535)))
												{	/* Jas/produce.scm 48 */
													BGl_errorz00zz__errorz00
														(BGl_string1492z00zzjas_producez00,
														BGl_string1494z00zzjas_producez00,
														BINT(BgL_nz00_319));
												}
											else
												{	/* Jas/produce.scm 48 */
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_16,
														BINT(BgL_nz00_319));
												}
										}
										return
											BGl_producezd2stringzd2zzjas_producez00(BgL_outchanz00_16,
											BgL_strz00_318);
									}
									break;
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

									{	/* Jas/produce.scm 53 */
										obj_t BgL_g1205z00_324;

										BgL_g1205z00_324 = CDR(((obj_t) BgL_cpinfoz00_17));
										{
											obj_t BgL_l1203z00_326;

											{	/* Jas/produce.scm 53 */
												bool_t BgL_tmpz00_1054;

												BgL_l1203z00_326 = BgL_g1205z00_324;
											BgL_zc3z04anonymousza31278ze3z87_327:
												if (PAIRP(BgL_l1203z00_326))
													{	/* Jas/produce.scm 53 */
														BGl_outshortz00zzjas_producez00(BgL_outchanz00_16,
															CAR(BgL_l1203z00_326));
														{
															obj_t BgL_l1203z00_1059;

															BgL_l1203z00_1059 = CDR(BgL_l1203z00_326);
															BgL_l1203z00_326 = BgL_l1203z00_1059;
															goto BgL_zc3z04anonymousza31278ze3z87_327;
														}
													}
												else
													{	/* Jas/produce.scm 53 */
														BgL_tmpz00_1054 = ((bool_t) 1);
													}
												return BBOOL(BgL_tmpz00_1054);
											}
										}
									}
									break;
								default:
								BgL_case_else1057z00_315:
									{	/* Jas/produce.scm 54 */
										obj_t BgL_arg1281z00_332;

										BgL_arg1281z00_332 = CAR(((obj_t) BgL_cpinfoz00_17));
										return
											BGl_errorz00zz__errorz00
											(BGl_string1492z00zzjas_producez00,
											BGl_string1493z00zzjas_producez00, BgL_arg1281z00_332);
									}
								}
						}
					else
						{	/* Jas/produce.scm 44 */
							goto BgL_case_else1057z00_315;
						}
				}
			}
		}

	}



/* produce-string */
	obj_t BGl_producezd2stringzd2zzjas_producez00(obj_t BgL_outchanz00_18,
		obj_t BgL_sz00_19)
	{
		{	/* Jas/produce.scm 56 */
			{	/* Jas/produce.scm 57 */
				long BgL_nz00_333;

				BgL_nz00_333 = STRING_LENGTH(((obj_t) BgL_sz00_19));
				{
					long BgL_iz00_335;

					BgL_iz00_335 = ((long) 0);
				BgL_zc3z04anonymousza31282ze3z87_336:
					if ((BgL_iz00_335 == BgL_nz00_333))
						{	/* Jas/produce.scm 59 */
							return CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Jas/produce.scm 59 */
							{	/* Jas/produce.scm 61 */
								long BgL_arg1284z00_338;

								BgL_arg1284z00_338 =
									(STRING_REF(((obj_t) BgL_sz00_19), BgL_iz00_335));
								{	/* Jas/produce.scm 12 */
									unsigned char BgL_arg1229z00_780;

									BgL_arg1229z00_780 = ((BgL_arg1284z00_338 & ((long) 255)));
									BGL_OUTPUT_CHAR(BgL_outchanz00_18,
										(char) (BgL_arg1229z00_780));
							}}
							{
								long BgL_iz00_1079;

								BgL_iz00_1079 = (BgL_iz00_335 + ((long) 1));
								BgL_iz00_335 = BgL_iz00_1079;
								goto BgL_zc3z04anonymousza31282ze3z87_336;
							}
						}
				}
			}
		}

	}



/* produce-interfaces */
	bool_t BGl_producezd2interfaceszd2zzjas_producez00(obj_t BgL_outchanz00_20,
		obj_t BgL_interfacesz00_21)
	{
		{	/* Jas/produce.scm 65 */
			{	/* Jas/produce.scm 66 */
				long BgL_arg1287z00_342;

				BgL_arg1287z00_342 = bgl_list_length(BgL_interfacesz00_21);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_20,
					BINT(BgL_arg1287z00_342));
			}
			{
				obj_t BgL_l1206z00_344;

				BgL_l1206z00_344 = BgL_interfacesz00_21;
			BgL_zc3z04anonymousza31288ze3z87_345:
				if (PAIRP(BgL_l1206z00_344))
					{	/* Jas/produce.scm 67 */
						BGl_outshortz00zzjas_producez00(BgL_outchanz00_20,
							CAR(BgL_l1206z00_344));
						{
							obj_t BgL_l1206z00_1088;

							BgL_l1206z00_1088 = CDR(BgL_l1206z00_344);
							BgL_l1206z00_344 = BgL_l1206z00_1088;
							goto BgL_zc3z04anonymousza31288ze3z87_345;
						}
					}
				else
					{	/* Jas/produce.scm 67 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* produce-fields */
	bool_t BGl_producezd2fieldszd2zzjas_producez00(obj_t BgL_outchanz00_22,
		obj_t BgL_fieldsz00_23)
	{
		{	/* Jas/produce.scm 69 */
			{	/* Jas/produce.scm 70 */
				long BgL_arg1291z00_350;

				BgL_arg1291z00_350 = bgl_list_length(BgL_fieldsz00_23);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_22,
					BINT(BgL_arg1291z00_350));
			}
			{
				obj_t BgL_l1208z00_352;

				BgL_l1208z00_352 = BgL_fieldsz00_23;
			BgL_zc3z04anonymousza31292ze3z87_353:
				if (PAIRP(BgL_l1208z00_352))
					{	/* Jas/produce.scm 71 */
						BGl_producezd2fieldzd2zzjas_producez00(BgL_outchanz00_22,
							CAR(BgL_l1208z00_352));
						{
							obj_t BgL_l1208z00_1097;

							BgL_l1208z00_1097 = CDR(BgL_l1208z00_352);
							BgL_l1208z00_352 = BgL_l1208z00_1097;
							goto BgL_zc3z04anonymousza31292ze3z87_353;
						}
					}
				else
					{	/* Jas/produce.scm 71 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* produce-field */
	bool_t BGl_producezd2fieldzd2zzjas_producez00(obj_t BgL_outchanz00_24,
		obj_t BgL_fieldz00_25)
	{
		{	/* Jas/produce.scm 73 */
			{	/* Jas/produce.scm 75 */
				obj_t BgL_arg1296z00_359;

				BgL_arg1296z00_359 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_fieldz00_bglt) BgL_fieldz00_25))))->BgL_flagsz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_24, BgL_arg1296z00_359);
			}
			{	/* Jas/produce.scm 76 */
				obj_t BgL_arg1297z00_360;

				BgL_arg1297z00_360 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_fieldz00_bglt) BgL_fieldz00_25))))->BgL_pnamez00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_24, BgL_arg1297z00_360);
			}
			{	/* Jas/produce.scm 77 */
				obj_t BgL_arg1298z00_361;

				BgL_arg1298z00_361 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_fieldz00_bglt) BgL_fieldz00_25))))->BgL_descriptorz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_24, BgL_arg1298z00_361);
			}
			{	/* Jas/produce.scm 78 */
				obj_t BgL_arg1299z00_362;

				BgL_arg1299z00_362 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_fieldz00_bglt) BgL_fieldz00_25))))->BgL_attributesz00);
				return
					BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_24,
					BgL_arg1299z00_362);
			}
		}

	}



/* produce-methods */
	bool_t BGl_producezd2methodszd2zzjas_producez00(obj_t BgL_outchanz00_26,
		obj_t BgL_methodsz00_27)
	{
		{	/* Jas/produce.scm 80 */
			{	/* Jas/produce.scm 81 */
				long BgL_arg1300z00_363;

				BgL_arg1300z00_363 = bgl_list_length(BgL_methodsz00_27);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_26,
					BINT(BgL_arg1300z00_363));
			}
			{
				obj_t BgL_l1210z00_365;

				BgL_l1210z00_365 = BgL_methodsz00_27;
			BgL_zc3z04anonymousza31301ze3z87_366:
				if (PAIRP(BgL_l1210z00_365))
					{	/* Jas/produce.scm 82 */
						BGl_producezd2methodzd2zzjas_producez00(BgL_outchanz00_26,
							CAR(BgL_l1210z00_365));
						{
							obj_t BgL_l1210z00_1122;

							BgL_l1210z00_1122 = CDR(BgL_l1210z00_365);
							BgL_l1210z00_365 = BgL_l1210z00_1122;
							goto BgL_zc3z04anonymousza31301ze3z87_366;
						}
					}
				else
					{	/* Jas/produce.scm 82 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* produce-method */
	bool_t BGl_producezd2methodzd2zzjas_producez00(obj_t BgL_outchanz00_28,
		obj_t BgL_methodz00_29)
	{
		{	/* Jas/produce.scm 84 */
			{	/* Jas/produce.scm 86 */
				obj_t BgL_arg1304z00_372;

				BgL_arg1304z00_372 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_methodz00_bglt) BgL_methodz00_29))))->BgL_flagsz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_28, BgL_arg1304z00_372);
			}
			{	/* Jas/produce.scm 87 */
				obj_t BgL_arg1306z00_373;

				BgL_arg1306z00_373 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_methodz00_bglt) BgL_methodz00_29))))->BgL_pnamez00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_28, BgL_arg1306z00_373);
			}
			{	/* Jas/produce.scm 88 */
				obj_t BgL_arg1307z00_374;

				BgL_arg1307z00_374 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_methodz00_bglt) BgL_methodz00_29))))->BgL_descriptorz00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_28, BgL_arg1307z00_374);
			}
			{	/* Jas/produce.scm 89 */
				obj_t BgL_arg1308z00_375;

				BgL_arg1308z00_375 =
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt)
								((BgL_methodz00_bglt) BgL_methodz00_29))))->BgL_attributesz00);
				return
					BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_28,
					BgL_arg1308z00_375);
			}
		}

	}



/* produce-attributes */
	bool_t BGl_producezd2attributeszd2zzjas_producez00(obj_t BgL_outchanz00_30,
		obj_t BgL_attributesz00_31)
	{
		{	/* Jas/produce.scm 91 */
			{	/* Jas/produce.scm 92 */
				long BgL_arg1309z00_376;

				BgL_arg1309z00_376 = bgl_list_length(BgL_attributesz00_31);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_30,
					BINT(BgL_arg1309z00_376));
			}
			{
				obj_t BgL_l1212z00_378;

				BgL_l1212z00_378 = BgL_attributesz00_31;
			BgL_zc3z04anonymousza31310ze3z87_379:
				if (PAIRP(BgL_l1212z00_378))
					{	/* Jas/produce.scm 93 */
						BGl_producezd2attributezd2zzjas_producez00(BgL_outchanz00_30,
							CAR(BgL_l1212z00_378));
						{
							obj_t BgL_l1212z00_1147;

							BgL_l1212z00_1147 = CDR(BgL_l1212z00_378);
							BgL_l1212z00_378 = BgL_l1212z00_1147;
							goto BgL_zc3z04anonymousza31310ze3z87_379;
						}
					}
				else
					{	/* Jas/produce.scm 93 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* produce-attribute */
	obj_t BGl_producezd2attributezd2zzjas_producez00(obj_t BgL_outchanz00_32,
		obj_t BgL_attributez00_33)
	{
		{	/* Jas/produce.scm 96 */
			{	/* Jas/produce.scm 97 */
				obj_t BgL_arg1314z00_384;

				BgL_arg1314z00_384 =
					(((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_attributez00_33)))->BgL_namez00);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_32, BgL_arg1314z00_384);
			}
			{	/* Jas/produce.scm 98 */
				obj_t BgL_arg1315z00_385;

				BgL_arg1315z00_385 =
					(((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_attributez00_33)))->BgL_siza7eza7);
				BGl_outintz00zzjas_producez00(BgL_outchanz00_32, BgL_arg1315z00_385);
			}
			{	/* Jas/produce.scm 99 */
				obj_t BgL_infoz00_386;
				obj_t BgL_typez00_387;

				BgL_infoz00_386 =
					(((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_attributez00_33)))->BgL_infoz00);
				BgL_typez00_387 =
					(((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_attributez00_33)))->BgL_typez00);
				if ((BgL_typez00_387 == CNST_TABLE_REF(((long) 1))))
					{	/* Jas/produce.scm 100 */
						return
							BGl_producezd2stringzd2zzjas_producez00(BgL_outchanz00_32,
							BgL_infoz00_386);
					}
				else
					{	/* Jas/produce.scm 100 */
						if ((BgL_typez00_387 == CNST_TABLE_REF(((long) 2))))
							{	/* Jas/produce.scm 100 */
								return
									BGl_producezd2codezd2zzjas_producez00(BgL_outchanz00_32,
									BgL_infoz00_386);
							}
						else
							{	/* Jas/produce.scm 100 */
								if ((BgL_typez00_387 == CNST_TABLE_REF(((long) 3))))
									{	/* Jas/produce.scm 100 */
										return
											BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
											BgL_infoz00_386);
									}
								else
									{	/* Jas/produce.scm 100 */
										if ((BgL_typez00_387 == CNST_TABLE_REF(((long) 4))))
											{	/* Jas/produce.scm 100 */
												{	/* Jas/produce.scm 108 */
													long BgL_arg1322z00_393;

													BgL_arg1322z00_393 = bgl_list_length(BgL_infoz00_386);
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
														BINT(BgL_arg1322z00_393));
												}
												{
													obj_t BgL_l1214z00_395;

													{	/* Jas/produce.scm 109 */
														bool_t BgL_tmpz00_1177;

														BgL_l1214z00_395 = BgL_infoz00_386;
													BgL_zc3z04anonymousza31323ze3z87_396:
														if (PAIRP(BgL_l1214z00_395))
															{	/* Jas/produce.scm 109 */
																{	/* Jas/produce.scm 109 */
																	obj_t BgL_slotz00_398;

																	BgL_slotz00_398 = CAR(BgL_l1214z00_395);
																	{	/* Jas/produce.scm 109 */
																		obj_t BgL_arg1325z00_399;

																		BgL_arg1325z00_399 =
																			CAR(((obj_t) BgL_slotz00_398));
																		BGl_outshortz00zzjas_producez00
																			(BgL_outchanz00_32, BgL_arg1325z00_399);
																	}
																	{	/* Jas/produce.scm 110 */
																		obj_t BgL_arg1326z00_400;

																		BgL_arg1326z00_400 =
																			CDR(((obj_t) BgL_slotz00_398));
																		BGl_outshortz00zzjas_producez00
																			(BgL_outchanz00_32, BgL_arg1326z00_400);
																	}
																}
																{
																	obj_t BgL_l1214z00_1187;

																	BgL_l1214z00_1187 = CDR(BgL_l1214z00_395);
																	BgL_l1214z00_395 = BgL_l1214z00_1187;
																	goto BgL_zc3z04anonymousza31323ze3z87_396;
																}
															}
														else
															{	/* Jas/produce.scm 109 */
																BgL_tmpz00_1177 = ((bool_t) 1);
															}
														return BBOOL(BgL_tmpz00_1177);
													}
												}
											}
										else
											{	/* Jas/produce.scm 100 */
												if ((BgL_typez00_387 == CNST_TABLE_REF(((long) 5))))
													{	/* Jas/produce.scm 100 */
														{	/* Jas/produce.scm 113 */
															long BgL_arg1329z00_404;

															BgL_arg1329z00_404 =
																bgl_list_length(BgL_infoz00_386);
															BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
																BINT(BgL_arg1329z00_404));
														}
														{
															obj_t BgL_l1218z00_406;

															{	/* Jas/produce.scm 114 */
																bool_t BgL_tmpz00_1196;

																BgL_l1218z00_406 = BgL_infoz00_386;
															BgL_zc3z04anonymousza31330ze3z87_407:
																if (PAIRP(BgL_l1218z00_406))
																	{	/* Jas/produce.scm 114 */
																		{	/* Jas/produce.scm 114 */
																			obj_t BgL_slotz00_409;

																			BgL_slotz00_409 = CAR(BgL_l1218z00_406);
																			{
																				obj_t BgL_l1216z00_411;

																				BgL_l1216z00_411 = BgL_slotz00_409;
																			BgL_zc3z04anonymousza31332ze3z87_412:
																				if (PAIRP(BgL_l1216z00_411))
																					{	/* Jas/produce.scm 114 */
																						BGl_outshortz00zzjas_producez00
																							(BgL_outchanz00_32,
																							CAR(BgL_l1216z00_411));
																						{
																							obj_t BgL_l1216z00_1204;

																							BgL_l1216z00_1204 =
																								CDR(BgL_l1216z00_411);
																							BgL_l1216z00_411 =
																								BgL_l1216z00_1204;
																							goto
																								BgL_zc3z04anonymousza31332ze3z87_412;
																						}
																					}
																				else
																					{	/* Jas/produce.scm 114 */
																						((bool_t) 1);
																					}
																			}
																		}
																		{
																			obj_t BgL_l1218z00_1206;

																			BgL_l1218z00_1206 = CDR(BgL_l1218z00_406);
																			BgL_l1218z00_406 = BgL_l1218z00_1206;
																			goto BgL_zc3z04anonymousza31330ze3z87_407;
																		}
																	}
																else
																	{	/* Jas/produce.scm 114 */
																		BgL_tmpz00_1196 = ((bool_t) 1);
																	}
																return BBOOL(BgL_tmpz00_1196);
															}
														}
													}
												else
													{	/* Jas/produce.scm 100 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string1495z00zzjas_producez00,
															BGl_string1496z00zzjas_producez00,
															BgL_typez00_387);
													}
											}
									}
							}
					}
			}
		}

	}



/* produce-code */
	obj_t BGl_producezd2codezd2zzjas_producez00(obj_t BgL_outchanz00_34,
		obj_t BgL_codez00_35)
	{
		{	/* Jas/produce.scm 119 */
			{
				obj_t BgL_maxstkz00_419;
				obj_t BgL_maxlocalz00_420;
				obj_t BgL_bytecodez00_421;
				obj_t BgL_handlersz00_422;
				obj_t BgL_attributesz00_423;

				if (PAIRP(BgL_codez00_35))
					{	/* Jas/produce.scm 120 */
						obj_t BgL_cdrzd2115zd2_428;

						BgL_cdrzd2115zd2_428 = CDR(BgL_codez00_35);
						if (PAIRP(BgL_cdrzd2115zd2_428))
							{	/* Jas/produce.scm 120 */
								obj_t BgL_cdrzd2122zd2_430;

								BgL_cdrzd2122zd2_430 = CDR(BgL_cdrzd2115zd2_428);
								if (PAIRP(BgL_cdrzd2122zd2_430))
									{	/* Jas/produce.scm 120 */
										obj_t BgL_cdrzd2128zd2_432;

										BgL_cdrzd2128zd2_432 = CDR(BgL_cdrzd2122zd2_430);
										if (PAIRP(BgL_cdrzd2128zd2_432))
											{	/* Jas/produce.scm 120 */
												obj_t BgL_arg1344z00_434;
												obj_t BgL_arg1345z00_435;
												obj_t BgL_arg1346z00_436;
												obj_t BgL_arg1347z00_437;
												obj_t BgL_arg1348z00_438;

												BgL_arg1344z00_434 = CAR(BgL_codez00_35);
												BgL_arg1345z00_435 = CAR(BgL_cdrzd2115zd2_428);
												BgL_arg1346z00_436 = CAR(BgL_cdrzd2122zd2_430);
												BgL_arg1347z00_437 = CAR(BgL_cdrzd2128zd2_432);
												BgL_arg1348z00_438 = CDR(BgL_cdrzd2128zd2_432);
												{	/* Jas/produce.scm 120 */
													bool_t BgL_tmpz00_1226;

													BgL_maxstkz00_419 = BgL_arg1344z00_434;
													BgL_maxlocalz00_420 = BgL_arg1345z00_435;
													BgL_bytecodez00_421 = BgL_arg1346z00_436;
													BgL_handlersz00_422 = BgL_arg1347z00_437;
													BgL_attributesz00_423 = BgL_arg1348z00_438;
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_34,
														BgL_maxstkz00_419);
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_34,
														BgL_maxlocalz00_420);
													{	/* Jas/produce.scm 124 */
														long BgL_arg1351z00_439;

														BgL_arg1351z00_439 =
															bgl_list_length(BgL_bytecodez00_421);
														BGl_outintz00zzjas_producez00(BgL_outchanz00_34,
															BINT(BgL_arg1351z00_439));
													}
													{
														obj_t BgL_l1220z00_441;

														BgL_l1220z00_441 = BgL_bytecodez00_421;
													BgL_zc3z04anonymousza31352ze3z87_442:
														if (PAIRP(BgL_l1220z00_441))
															{	/* Jas/produce.scm 125 */
																{	/* Jas/produce.scm 125 */
																	obj_t BgL_bz00_444;

																	BgL_bz00_444 = CAR(BgL_l1220z00_441);
																	{	/* Jas/produce.scm 12 */
																		unsigned char BgL_arg1229z00_833;

																		BgL_arg1229z00_833 =
																			(
																			((long) CINT(BgL_bz00_444) & ((long)
																					255)));
																		BGL_OUTPUT_CHAR(BgL_outchanz00_34,
																			(char) (BgL_arg1229z00_833));
																}}
																{
																	obj_t BgL_l1220z00_1240;

																	BgL_l1220z00_1240 = CDR(BgL_l1220z00_441);
																	BgL_l1220z00_441 = BgL_l1220z00_1240;
																	goto BgL_zc3z04anonymousza31352ze3z87_442;
																}
															}
														else
															{	/* Jas/produce.scm 125 */
																((bool_t) 1);
															}
													}
													{	/* Jas/produce.scm 126 */
														long BgL_arg1360z00_447;

														BgL_arg1360z00_447 =
															bgl_list_length(BgL_handlersz00_422);
														BGl_outshortz00zzjas_producez00(BgL_outchanz00_34,
															BINT(BgL_arg1360z00_447));
													}
													{
														obj_t BgL_l1222z00_449;

														BgL_l1222z00_449 = BgL_handlersz00_422;
													BgL_zc3z04anonymousza31361ze3z87_450:
														if (PAIRP(BgL_l1222z00_449))
															{	/* Jas/produce.scm 127 */
																{	/* Jas/produce.scm 128 */
																	obj_t BgL_hz00_452;

																	BgL_hz00_452 = CAR(BgL_l1222z00_449);
																	{

																		if (PAIRP(BgL_hz00_452))
																			{	/* Jas/produce.scm 128 */
																				obj_t BgL_cdrzd2148zd2_461;

																				BgL_cdrzd2148zd2_461 =
																					CDR(BgL_hz00_452);
																				if (PAIRP(BgL_cdrzd2148zd2_461))
																					{	/* Jas/produce.scm 128 */
																						obj_t BgL_cdrzd2154zd2_463;

																						BgL_cdrzd2154zd2_463 =
																							CDR(BgL_cdrzd2148zd2_461);
																						if (PAIRP(BgL_cdrzd2154zd2_463))
																							{	/* Jas/produce.scm 128 */
																								obj_t BgL_cdrzd2159zd2_465;

																								BgL_cdrzd2159zd2_465 =
																									CDR(BgL_cdrzd2154zd2_463);
																								if (PAIRP(BgL_cdrzd2159zd2_465))
																									{	/* Jas/produce.scm 128 */
																										if (NULLP(CDR
																												(BgL_cdrzd2159zd2_465)))
																											{	/* Jas/produce.scm 128 */
																												obj_t
																													BgL_arg1381z00_469;
																												obj_t
																													BgL_arg1382z00_470;
																												obj_t
																													BgL_arg1383z00_471;
																												obj_t
																													BgL_arg1384z00_472;
																												BgL_arg1381z00_469 =
																													CAR(BgL_hz00_452);
																												BgL_arg1382z00_470 =
																													CAR
																													(BgL_cdrzd2148zd2_461);
																												BgL_arg1383z00_471 =
																													CAR
																													(BgL_cdrzd2154zd2_463);
																												BgL_arg1384z00_472 =
																													CAR
																													(BgL_cdrzd2159zd2_465);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_34,
																													BgL_arg1381z00_469);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_34,
																													BgL_arg1382z00_470);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_34,
																													BgL_arg1383z00_471);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_34,
																													BgL_arg1384z00_472);
																											}
																										else
																											{	/* Jas/produce.scm 128 */
																											BgL_tagzd2137zd2_458:
																												BGl_errorz00zz__errorz00
																													(BGl_string1497z00zzjas_producez00,
																													BGl_string1498z00zzjas_producez00,
																													BgL_hz00_452);
																											}
																									}
																								else
																									{	/* Jas/produce.scm 128 */
																										goto BgL_tagzd2137zd2_458;
																									}
																							}
																						else
																							{	/* Jas/produce.scm 128 */
																								goto BgL_tagzd2137zd2_458;
																							}
																					}
																				else
																					{	/* Jas/produce.scm 128 */
																						goto BgL_tagzd2137zd2_458;
																					}
																			}
																		else
																			{	/* Jas/produce.scm 128 */
																				goto BgL_tagzd2137zd2_458;
																			}
																	}
																}
																{
																	obj_t BgL_l1222z00_1271;

																	BgL_l1222z00_1271 = CDR(BgL_l1222z00_449);
																	BgL_l1222z00_449 = BgL_l1222z00_1271;
																	goto BgL_zc3z04anonymousza31361ze3z87_450;
																}
															}
														else
															{	/* Jas/produce.scm 127 */
																((bool_t) 1);
															}
													}
													BgL_tmpz00_1226 =
														BGl_producezd2attributeszd2zzjas_producez00
														(BgL_outchanz00_34, BgL_attributesz00_423);
													return BBOOL(BgL_tmpz00_1226);
												}
											}
										else
											{	/* Jas/produce.scm 120 */
											BgL_tagzd2102zd2_425:
												return
													BGl_errorz00zz__errorz00
													(BGl_string1497z00zzjas_producez00,
													BGl_string1499z00zzjas_producez00, BgL_codez00_35);
											}
									}
								else
									{	/* Jas/produce.scm 120 */
										goto BgL_tagzd2102zd2_425;
									}
							}
						else
							{	/* Jas/produce.scm 120 */
								goto BgL_tagzd2102zd2_425;
							}
					}
				else
					{	/* Jas/produce.scm 120 */
						goto BgL_tagzd2102zd2_425;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_producez00()
	{
		{	/* Jas/produce.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string1500z00zzjas_producez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string1500z00zzjas_producez00));
		}

	}

#ifdef __cplusplus
}
#endif
