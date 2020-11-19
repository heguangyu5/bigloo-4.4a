/*===========================================================================*/
/*   (Type/cache.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/cache.scm) */
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


	BGL_EXPORTED_DEF obj_t BGl_za2symbolza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2uint32za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2uint16za2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_za2objectza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bignumza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bboolza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2structza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t BGl_objectzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2foreignza2z00zztype_cachez00 = BUNSPEC;
	static BgL_typez00_bglt
		BGl_z62getzd2defaultzd2czd2typezb0zztype_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2magicza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2brealza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2buint64za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stringza2z00zztype_cachez00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62getzd2defaultzd2typez62zztype_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2hvectorsza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2listza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2_za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int32za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int16za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2uint8za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2scharza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2elongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2classzd2typez00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bllongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int8za2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_za2classza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bint64za2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zztype_cachez00();
	static obj_t BGl_z62setzd2defaultzd2typez12z70zztype_cachez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2epairza2z00zztype_cachez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_za2charza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_za2buint32za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2intza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2buint16za2z00zztype_cachez00 = BUNSPEC;
	extern bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2vectorza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2voidza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zztype_cachez00();
	static obj_t BGl_genericzd2initzd2zztype_cachez00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2defaultzd2typez00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2cellza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2boolza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_z62getzd2objectzd2typez62zztype_cachez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DEF obj_t BGl_za2longza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2uint64za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bstringza2z00zztype_cachez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2exitza2z00zztype_cachez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62getzd2bigloozd2typez62zztype_cachez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2realza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	static obj_t BGl_z62getzd2classzd2typez62zztype_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2mutexza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bint32za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bint16za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2buint8za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cobjza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2pairza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2procedureza2z00zztype_cachez00 = BUNSPEC;
	static BgL_typez00_bglt
		BGl_z62getzd2bigloozd2definedzd2typezb0zztype_cachez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bint8za2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2belongza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DEF obj_t BGl_za2ucs2stringza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zztype_cachez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2llongza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zztype_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bnilza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int64za2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_z62installzd2typezd2cachez12z70zztype_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2keywordza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unspecza2z00zztype_cachez00 = BUNSPEC;
	static obj_t BGl_za2defaultzd2typeza2zd2zztype_cachez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bintza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bcharza2z00zztype_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00 = BUNSPEC;
	static obj_t __cnst[68];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2defaultzd2typez12zd2envzc0zztype_cachez00,
		BgL_bgl_za762setza7d2default1135z00,
		BGl_z62setzd2defaultzd2typez12z70zztype_cachez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2defaultzd2typezd2envzd2zztype_cachez00,
		BgL_bgl_za762getza7d2default1136z00,
		BGl_z62getzd2defaultzd2typez62zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2bigloozd2typezd2envzd2zztype_cachez00,
		BgL_bgl_za762getza7d2biglooza71137za7,
		BGl_z62getzd2bigloozd2typez62zztype_cachez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2bigloozd2definedzd2typezd2envz00zztype_cachez00,
		BgL_bgl_za762getza7d2biglooza71138za7,
		BGl_z62getzd2bigloozd2definedzd2typezb0zztype_cachez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1127z00zztype_cachez00,
		BgL_bgl_string1127za700za7za7t1139za7, "type_cache", 10);
	      DEFINE_STRING(BGl_string1128z00zztype_cachez00,
		BgL_bgl_string1128za700za7za7t1140za7,
		"_ mutex foreign class object exit unspecified procedure-el procedure struct f64vector f32vector u64vector s64vector u32vector s32vector u16vector s16vector u8vector s8vector vector keyword symbol ucs2string bstring string nil list pair-nil epair pair bchar char uchar bignum real double bbool bool buint64 uint64 bint64 int64 buint32 uint32 bint32 int32 buint16 uint16 bint16 int16 buint8 uint8 bint8 int8 bllong llong belong elong long int bint void magic cell cobj obj no-type-yet ",
		483);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2objectzd2typezd2envzd2zztype_cachez00,
		BgL_bgl_za762getza7d2objectza71141za7,
		BGl_z62getzd2objectzd2typez62zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2defaultzd2czd2typezd2envz00zztype_cachez00,
		BgL_bgl_za762getza7d2default1142z00,
		BGl_z62getzd2defaultzd2czd2typezb0zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2classzd2typezd2envzd2zztype_cachez00,
		BgL_bgl_za762getza7d2classza7d1143za7,
		BGl_z62getzd2classzd2typez62zztype_cachez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2typezd2cachez12zd2envzc0zztype_cachez00,
		BgL_bgl_za762installza7d2typ1144z00,
		BGl_z62installzd2typezd2cachez12z70zztype_cachez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2symbolza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint32za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint16za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2objectza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2pairzd2nilza2zd2zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bignumza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bboolza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2structza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2foreignza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2magicza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2brealza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2buint64za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2stringza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2hvectorsza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2listza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2_za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int32za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int16za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint8za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2objza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2scharza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2elongza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bllongza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int8za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2classza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bint64za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2epairza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2charza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2buint32za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2intza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2buint16za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2vectorza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2voidza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2cellza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2boolza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2longza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint64za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bstringza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2exitza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2realza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2mutexza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bint32za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bint16za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2buint8za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2cobjza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2pairza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2procedureza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bint8za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2belongza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2ucs2stringza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2llongza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bnilza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int64za2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2keywordza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2unspecza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2defaultzd2typeza2zd2zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bintza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bcharza2z00zztype_cachez00));
		     ADD_ROOT((void *) (&BGl_za2procedurezd2elza2zd2zztype_cachez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long
		BgL_checksumz00_148, char *BgL_fromz00_149)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_cachez00))
				{
					BGl_requirezd2initializa7ationz75zztype_cachez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_cachez00();
					BGl_libraryzd2moduleszd2initz00zztype_cachez00();
					BGl_cnstzd2initzd2zztype_cachez00();
					BGl_importedzd2moduleszd2initz00zztype_cachez00();
					return BGl_toplevelzd2initzd2zztype_cachez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_cache");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_cache");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_cache");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_cache");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_cache");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			{	/* Type/cache.scm 15 */
				obj_t BgL_cportz00_135;

				{	/* Type/cache.scm 15 */
					obj_t BgL_stringz00_143;

					BgL_stringz00_143 = BGl_string1128z00zztype_cachez00;
					{	/* Type/cache.scm 15 */
						obj_t BgL_startz00_144;

						BgL_startz00_144 = BINT(((long) 0));
						{	/* Type/cache.scm 15 */
							obj_t BgL_endz00_145;

							BgL_endz00_145 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_143)));
							{	/* Type/cache.scm 15 */

								BgL_cportz00_135 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_143, BgL_startz00_144, BgL_endz00_145);
				}}}}
				{
					long BgL_iz00_136;

					BgL_iz00_136 = ((long) 67);
				BgL_loopz00_137:
					if ((BgL_iz00_136 == ((long) -1)))
						{	/* Type/cache.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/cache.scm 15 */
							{	/* Type/cache.scm 15 */
								obj_t BgL_arg1133z00_139;

								{	/* Type/cache.scm 15 */

									{	/* Type/cache.scm 15 */
										obj_t BgL_locationz00_141;

										BgL_locationz00_141 = BBOOL(((bool_t) 0));
										{	/* Type/cache.scm 15 */

											BgL_arg1133z00_139 =
												BGl_readz00zz__readerz00(BgL_cportz00_135,
												BgL_locationz00_141);
										}
									}
								}
								{	/* Type/cache.scm 15 */
									int BgL_tmpz00_172;

									BgL_tmpz00_172 = (int) (BgL_iz00_136);
									CNST_TABLE_SET(BgL_tmpz00_172, BgL_arg1133z00_139);
							}}
							{	/* Type/cache.scm 15 */
								int BgL_auxz00_142;

								BgL_auxz00_142 = (int) ((BgL_iz00_136 - ((long) 1)));
								{
									long BgL_iz00_177;

									BgL_iz00_177 = (long) (BgL_auxz00_142);
									BgL_iz00_136 = BgL_iz00_177;
									goto BgL_loopz00_137;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			BGl_za2objza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2cobjza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2cellza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2magicza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2voidza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bintza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2intza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2longza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2llongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bllongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2int8za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bint8za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2uint8za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2buint8za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2int16za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bint16za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2uint16za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2buint16za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2int32za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bint32za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2uint32za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2buint32za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2int64za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bint64za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2uint64za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2buint64za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2elongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2belongza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2boolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bboolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2realza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2brealza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bignumza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2charza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2scharza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bcharza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2stringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bstringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2ucs2stringza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2symbolza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2keywordza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2pairza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2epairza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2pairzd2nilza2zd2zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2listza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2bnilza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2vectorza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2hvectorsza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2structza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2procedureza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2procedurezd2elza2zd2zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2unspecza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2exitza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2objectza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2classza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2foreignza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2mutexza2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2_za2z00zztype_cachez00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* install-type-cache! */
	BGL_EXPORTED_DEF obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00()
	{
		{	/* Type/cache.scm 86 */
			BGl_za2objza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 1)), BFALSE));
			BGl_za2cobjza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 2)), BFALSE));
			BGl_za2cellza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 3)), BFALSE));
			BGl_za2magicza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 4)), BFALSE));
			BGl_za2voidza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 5)), BFALSE));
			BGl_za2bintza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 6)), BFALSE));
			BGl_za2intza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 7)), BFALSE));
			BGl_za2longza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 8)), BFALSE));
			BGl_za2elongza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 9)), BFALSE));
			BGl_za2belongza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 10)), BFALSE));
			BGl_za2llongza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 11)), BFALSE));
			BGl_za2bllongza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 12)), BFALSE));
			BGl_za2int8za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 13)), BFALSE));
			BGl_za2bint8za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 14)), BFALSE));
			BGl_za2uint8za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 15)), BFALSE));
			BGl_za2buint8za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 16)), BFALSE));
			BGl_za2int16za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 17)), BFALSE));
			BGl_za2bint16za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 18)), BFALSE));
			BGl_za2uint16za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 19)), BFALSE));
			BGl_za2buint16za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 20)), BFALSE));
			BGl_za2int32za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 21)), BFALSE));
			BGl_za2bint32za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 22)), BFALSE));
			BGl_za2uint32za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 23)), BFALSE));
			BGl_za2buint32za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 24)), BFALSE));
			BGl_za2int64za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 25)), BFALSE));
			BGl_za2bint64za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 26)), BFALSE));
			BGl_za2uint64za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 27)), BFALSE));
			BGl_za2buint64za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 28)), BFALSE));
			BGl_za2boolza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 29)), BFALSE));
			BGl_za2bboolza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 30)), BFALSE));
			BGl_za2realza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 31)), BFALSE));
			BGl_za2brealza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 32)), BFALSE));
			BGl_za2bignumza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 33)), BFALSE));
			BGl_za2charza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 34)), BFALSE));
			BGl_za2scharza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 35)), BFALSE));
			BGl_za2bcharza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 36)), BFALSE));
			BGl_za2pairza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 37)), BFALSE));
			BGl_za2epairza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 38)), BFALSE));
			BGl_za2pairzd2nilza2zd2zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 39)), BFALSE));
			BGl_za2listza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 40)), BFALSE));
			BGl_za2bnilza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 41)), BFALSE));
			BGl_za2stringza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 42)), BFALSE));
			BGl_za2bstringza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 43)), BFALSE));
			BGl_za2ucs2stringza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 44)), BFALSE));
			BGl_za2symbolza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 45)), BFALSE));
			BGl_za2keywordza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 46)), BFALSE));
			BGl_za2vectorza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 47)), BFALSE));
			{	/* Type/cache.scm 135 */
				BgL_typez00_bglt BgL_arg1052z00_73;
				BgL_typez00_bglt BgL_arg1053z00_74;
				BgL_typez00_bglt BgL_arg1054z00_75;
				BgL_typez00_bglt BgL_arg1055z00_76;
				BgL_typez00_bglt BgL_arg1056z00_77;
				BgL_typez00_bglt BgL_arg1057z00_78;
				BgL_typez00_bglt BgL_arg1058z00_79;
				BgL_typez00_bglt BgL_arg1059z00_80;
				BgL_typez00_bglt BgL_arg1060z00_81;
				BgL_typez00_bglt BgL_arg1061z00_82;

				BgL_arg1052z00_73 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 48)),
					BFALSE);
				BgL_arg1053z00_74 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 49)),
					BFALSE);
				BgL_arg1054z00_75 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 50)),
					BFALSE);
				BgL_arg1055z00_76 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 51)),
					BFALSE);
				BgL_arg1056z00_77 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 52)),
					BFALSE);
				BgL_arg1057z00_78 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 53)),
					BFALSE);
				BgL_arg1058z00_79 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 54)),
					BFALSE);
				BgL_arg1059z00_80 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 55)),
					BFALSE);
				BgL_arg1060z00_81 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 56)),
					BFALSE);
				BgL_arg1061z00_82 =
					BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 57)),
					BFALSE);
				{	/* Type/cache.scm 134 */
					obj_t BgL_list1062z00_83;

					{	/* Type/cache.scm 134 */
						obj_t BgL_arg1063z00_84;

						{	/* Type/cache.scm 134 */
							obj_t BgL_arg1064z00_85;

							{	/* Type/cache.scm 134 */
								obj_t BgL_arg1065z00_86;

								{	/* Type/cache.scm 134 */
									obj_t BgL_arg1073z00_87;

									{	/* Type/cache.scm 134 */
										obj_t BgL_arg1074z00_88;

										{	/* Type/cache.scm 134 */
											obj_t BgL_arg1078z00_89;

											{	/* Type/cache.scm 134 */
												obj_t BgL_arg1095z00_90;

												{	/* Type/cache.scm 134 */
													obj_t BgL_arg1099z00_91;

													{	/* Type/cache.scm 134 */
														obj_t BgL_arg1100z00_92;

														BgL_arg1100z00_92 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1061z00_82), BNIL);
														BgL_arg1099z00_91 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1060z00_81), BgL_arg1100z00_92);
													}
													BgL_arg1095z00_90 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1059z00_80), BgL_arg1099z00_91);
												}
												BgL_arg1078z00_89 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1058z00_79), BgL_arg1095z00_90);
											}
											BgL_arg1074z00_88 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1057z00_78), BgL_arg1078z00_89);
										}
										BgL_arg1073z00_87 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1056z00_77), BgL_arg1074z00_88);
									}
									BgL_arg1065z00_86 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg1055z00_76), BgL_arg1073z00_87);
								}
								BgL_arg1064z00_85 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1054z00_75), BgL_arg1065z00_86);
							}
							BgL_arg1063z00_84 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1053z00_74), BgL_arg1064z00_85);
						}
						BgL_list1062z00_83 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg1052z00_73), BgL_arg1063z00_84);
					}
					BGl_za2hvectorsza2z00zztype_cachez00 = BgL_list1062z00_83;
			}}
			BGl_za2structza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 58)), BFALSE));
			BGl_za2procedureza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 59)), BFALSE));
			BGl_za2procedurezd2elza2zd2zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 60)), BFALSE));
			BGl_za2unspecza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 61)), BFALSE));
			BGl_za2exitza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 62)), BFALSE));
			if (BGl_typezd2existszf3z21zztype_envz00(CNST_TABLE_REF(((long) 63))))
				{	/* Type/cache.scm 150 */
					BGl_za2objectza2z00zztype_cachez00 =
						((obj_t)
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 63))));
				}
			else
				{	/* Type/cache.scm 150 */
					BGl_za2objectza2z00zztype_cachez00 = BFALSE;
				}
			if (BGl_typezd2existszf3z21zztype_envz00(CNST_TABLE_REF(((long) 64))))
				{	/* Type/cache.scm 153 */
					BGl_za2classza2z00zztype_cachez00 =
						((obj_t)
						BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 64))));
				}
			else
				{	/* Type/cache.scm 153 */
					BGl_za2classza2z00zztype_cachez00 = BFALSE;
				}
			BGl_za2foreignza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 65)), BFALSE));
			BGl_za2mutexza2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 66)), BFALSE));
			BGl_za2_za2z00zztype_cachez00 =
				((obj_t)
				BGl_usezd2typez12zc0zztype_envz00(CNST_TABLE_REF(((long) 67)), BFALSE));
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				BGl_za2_za2z00zztype_cachez00, BUNSPEC);
		}

	}



/* &install-type-cache! */
	obj_t BGl_z62installzd2typezd2cachez12z70zztype_cachez00(obj_t BgL_envz00_124)
	{
		{	/* Type/cache.scm 86 */
			return BGl_installzd2typezd2cachez12z12zztype_cachez00();
		}

	}



/* get-default-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00()
	{
		{	/* Type/cache.scm 231 */
			return ((BgL_typez00_bglt) BGl_za2defaultzd2typeza2zd2zztype_cachez00);
		}

	}



/* &get-default-type */
	BgL_typez00_bglt BGl_z62getzd2defaultzd2typez62zztype_cachez00(obj_t
		BgL_envz00_125)
	{
		{	/* Type/cache.scm 231 */
			return BGl_getzd2defaultzd2typez00zztype_cachez00();
		}

	}



/* set-default-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt
		BgL_typez00_3)
	{
		{	/* Type/cache.scm 237 */
			return (BGl_za2defaultzd2typeza2zd2zztype_cachez00 =
				((obj_t) BgL_typez00_3), BUNSPEC);
		}

	}



/* &set-default-type! */
	obj_t BGl_z62setzd2defaultzd2typez12z70zztype_cachez00(obj_t BgL_envz00_126,
		obj_t BgL_typez00_127)
	{
		{	/* Type/cache.scm 237 */
			return
				BGl_setzd2defaultzd2typez12z12zztype_cachez00(
				((BgL_typez00_bglt) BgL_typez00_127));
		}

	}



/* get-object-type */
	BGL_EXPORTED_DEF obj_t BGl_getzd2objectzd2typez00zztype_cachez00()
	{
		{	/* Type/cache.scm 243 */
			{	/* Type/cache.scm 245 */
				bool_t BgL_test1149z00_462;

				{	/* Type/cache.scm 245 */
					bool_t BgL_res1125z00_121;

					{	/* Type/cache.scm 245 */
						obj_t BgL_objz00_120;

						BgL_objz00_120 = BGl_za2objectza2z00zztype_cachez00;
						BgL_res1125z00_121 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_120,
							BGl_typez00zztype_typez00);
					}
					BgL_test1149z00_462 = BgL_res1125z00_121;
				}
				if (BgL_test1149z00_462)
					{	/* Type/cache.scm 245 */
						return BGl_za2objectza2z00zztype_cachez00;
					}
				else
					{	/* Type/cache.scm 245 */
						BGl_za2objectza2z00zztype_cachez00 =
							((obj_t)
							BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 63))));
						return BGl_za2objectza2z00zztype_cachez00;
					}
			}
		}

	}



/* &get-object-type */
	obj_t BGl_z62getzd2objectzd2typez62zztype_cachez00(obj_t BgL_envz00_128)
	{
		{	/* Type/cache.scm 243 */
			return BGl_getzd2objectzd2typez00zztype_cachez00();
		}

	}



/* get-class-type */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2typez00zztype_cachez00()
	{
		{	/* Type/cache.scm 254 */
			{	/* Type/cache.scm 256 */
				bool_t BgL_test1150z00_468;

				{	/* Type/cache.scm 256 */
					bool_t BgL_res1126z00_123;

					{	/* Type/cache.scm 256 */
						obj_t BgL_objz00_122;

						BgL_objz00_122 = BGl_za2classza2z00zztype_cachez00;
						BgL_res1126z00_123 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_122,
							BGl_typez00zztype_typez00);
					}
					BgL_test1150z00_468 = BgL_res1126z00_123;
				}
				if (BgL_test1150z00_468)
					{	/* Type/cache.scm 256 */
						return BGl_za2classza2z00zztype_cachez00;
					}
				else
					{	/* Type/cache.scm 256 */
						BGl_za2classza2z00zztype_cachez00 =
							((obj_t)
							BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 64))));
						return BGl_za2classza2z00zztype_cachez00;
					}
			}
		}

	}



/* &get-class-type */
	obj_t BGl_z62getzd2classzd2typez62zztype_cachez00(obj_t BgL_envz00_129)
	{
		{	/* Type/cache.scm 254 */
			return BGl_getzd2classzd2typez00zztype_cachez00();
		}

	}



/* get-default-c-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2defaultzd2czd2typezd2zztype_cachez00()
	{
		{	/* Type/cache.scm 267 */
			return ((BgL_typez00_bglt) BGl_za2intza2z00zztype_cachez00);
		}

	}



/* &get-default-c-type */
	BgL_typez00_bglt BGl_z62getzd2defaultzd2czd2typezb0zztype_cachez00(obj_t
		BgL_envz00_130)
	{
		{	/* Type/cache.scm 267 */
			return BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
		}

	}



/* get-bigloo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt BgL_typez00_4)
	{
		{	/* Type/cache.scm 275 */
			if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_4))
				{	/* Type/cache.scm 277 */
					return BgL_typez00_4;
				}
			else
				{	/* Type/cache.scm 278 */
					bool_t BgL_test1152z00_478;

					if ((((obj_t) BgL_typez00_4) == BGl_za2intza2z00zztype_cachez00))
						{	/* Type/cache.scm 278 */
							BgL_test1152z00_478 = ((bool_t) 1);
						}
					else
						{	/* Type/cache.scm 278 */
							BgL_test1152z00_478 =
								(((obj_t) BgL_typez00_4) == BGl_za2longza2z00zztype_cachez00);
						}
					if (BgL_test1152z00_478)
						{	/* Type/cache.scm 278 */
							return ((BgL_typez00_bglt) BGl_za2bintza2z00zztype_cachez00);
						}
					else
						{	/* Type/cache.scm 278 */
							if (
								(((obj_t) BgL_typez00_4) == BGl_za2elongza2z00zztype_cachez00))
								{	/* Type/cache.scm 279 */
									return
										((BgL_typez00_bglt) BGl_za2belongza2z00zztype_cachez00);
								}
							else
								{	/* Type/cache.scm 279 */
									if (
										(((obj_t) BgL_typez00_4) ==
											BGl_za2llongza2z00zztype_cachez00))
										{	/* Type/cache.scm 280 */
											return
												((BgL_typez00_bglt) BGl_za2bllongza2z00zztype_cachez00);
										}
									else
										{	/* Type/cache.scm 280 */
											if (
												(((obj_t) BgL_typez00_4) ==
													BGl_za2int8za2z00zztype_cachez00))
												{	/* Type/cache.scm 281 */
													return
														((BgL_typez00_bglt)
														BGl_za2bint8za2z00zztype_cachez00);
												}
											else
												{	/* Type/cache.scm 281 */
													if (
														(((obj_t) BgL_typez00_4) ==
															BGl_za2uint8za2z00zztype_cachez00))
														{	/* Type/cache.scm 282 */
															return
																((BgL_typez00_bglt)
																BGl_za2buint8za2z00zztype_cachez00);
														}
													else
														{	/* Type/cache.scm 282 */
															if (
																(((obj_t) BgL_typez00_4) ==
																	BGl_za2int16za2z00zztype_cachez00))
																{	/* Type/cache.scm 283 */
																	return
																		((BgL_typez00_bglt)
																		BGl_za2bint16za2z00zztype_cachez00);
																}
															else
																{	/* Type/cache.scm 283 */
																	if (
																		(((obj_t) BgL_typez00_4) ==
																			BGl_za2uint16za2z00zztype_cachez00))
																		{	/* Type/cache.scm 284 */
																			return
																				((BgL_typez00_bglt)
																				BGl_za2buint16za2z00zztype_cachez00);
																		}
																	else
																		{	/* Type/cache.scm 284 */
																			if (
																				(((obj_t) BgL_typez00_4) ==
																					BGl_za2int32za2z00zztype_cachez00))
																				{	/* Type/cache.scm 285 */
																					return
																						((BgL_typez00_bglt)
																						BGl_za2bint32za2z00zztype_cachez00);
																				}
																			else
																				{	/* Type/cache.scm 285 */
																					if (
																						(((obj_t) BgL_typez00_4) ==
																							BGl_za2uint32za2z00zztype_cachez00))
																						{	/* Type/cache.scm 286 */
																							return
																								((BgL_typez00_bglt)
																								BGl_za2buint32za2z00zztype_cachez00);
																						}
																					else
																						{	/* Type/cache.scm 286 */
																							if (
																								(((obj_t) BgL_typez00_4) ==
																									BGl_za2int64za2z00zztype_cachez00))
																								{	/* Type/cache.scm 287 */
																									return
																										((BgL_typez00_bglt)
																										BGl_za2bint64za2z00zztype_cachez00);
																								}
																							else
																								{	/* Type/cache.scm 287 */
																									if (
																										(((obj_t) BgL_typez00_4) ==
																											BGl_za2uint64za2z00zztype_cachez00))
																										{	/* Type/cache.scm 288 */
																											return
																												((BgL_typez00_bglt)
																												BGl_za2buint64za2z00zztype_cachez00);
																										}
																									else
																										{	/* Type/cache.scm 288 */
																											if (
																												(((obj_t) BgL_typez00_4)
																													==
																													BGl_za2boolza2z00zztype_cachez00))
																												{	/* Type/cache.scm 289 */
																													return
																														((BgL_typez00_bglt)
																														BGl_za2bboolza2z00zztype_cachez00);
																												}
																											else
																												{	/* Type/cache.scm 289 */
																													if (
																														(((obj_t)
																																BgL_typez00_4)
																															==
																															BGl_za2realza2z00zztype_cachez00))
																														{	/* Type/cache.scm 290 */
																															return
																																(
																																(BgL_typez00_bglt)
																																BGl_za2brealza2z00zztype_cachez00);
																														}
																													else
																														{	/* Type/cache.scm 290 */
																															if (
																																(((obj_t)
																																		BgL_typez00_4)
																																	==
																																	BGl_za2charza2z00zztype_cachez00))
																																{	/* Type/cache.scm 291 */
																																	return
																																		(
																																		(BgL_typez00_bglt)
																																		BGl_za2bcharza2z00zztype_cachez00);
																																}
																															else
																																{	/* Type/cache.scm 291 */
																																	if (
																																		(((obj_t)
																																				BgL_typez00_4)
																																			==
																																			BGl_za2stringza2z00zztype_cachez00))
																																		{	/* Type/cache.scm 292 */
																																			return
																																				(
																																				(BgL_typez00_bglt)
																																				BGl_za2bstringza2z00zztype_cachez00);
																																		}
																																	else
																																		{	/* Type/cache.scm 292 */
																																			return
																																				(
																																				(BgL_typez00_bglt)
																																				BGl_za2objza2z00zztype_cachez00);
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



/* &get-bigloo-type */
	BgL_typez00_bglt BGl_z62getzd2bigloozd2typez62zztype_cachez00(obj_t
		BgL_envz00_131, obj_t BgL_typez00_132)
	{
		{	/* Type/cache.scm 275 */
			return
				BGl_getzd2bigloozd2typez00zztype_cachez00(
				((BgL_typez00_bglt) BgL_typez00_132));
		}

	}



/* get-bigloo-defined-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(BgL_typez00_bglt
		BgL_tz00_5)
	{
		{	/* Type/cache.scm 298 */
			if ((((obj_t) BgL_tz00_5) == BGl_za2_za2z00zztype_cachez00))
				{	/* Type/cache.scm 299 */
					return ((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
				}
			else
				{	/* Type/cache.scm 299 */
					return BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_tz00_5);
				}
		}

	}



/* &get-bigloo-defined-type */
	BgL_typez00_bglt BGl_z62getzd2bigloozd2definedzd2typezb0zztype_cachez00(obj_t
		BgL_envz00_133, obj_t BgL_tz00_134)
	{
		{	/* Type/cache.scm 298 */
			return
				BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(
				((BgL_typez00_bglt) BgL_tz00_134));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_cachez00()
	{
		{	/* Type/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1127z00zztype_cachez00));
			return
				BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1127z00zztype_cachez00));
		}

	}

#ifdef __cplusplus
}
#endif
