/*===========================================================================*/
/*   (Object/predicate.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/predicate.scm) */
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;


	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzobject_predicatez00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_typez00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_predicatez00();
	static obj_t BGl_z62importzd2classzd2predz12z70zzobject_predicatez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00(BgL_typez00_bglt,
		obj_t, obj_t);
	static bool_t BGl_inlinezd2predzf3z21zzobject_predicatez00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_predicatez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_typez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_predicatez00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_predicatez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62genzd2classzd2predz12z70zzobject_predicatez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
		(BgL_typez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_predicatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_predicatez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_predicatez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_predicatez00();
	static obj_t
		BGl_z62importzd2javazd2classzd2predz12za2zzobject_predicatez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t __cnst[20];


	   
		 
		DEFINE_STRING(BGl_string1421z00zzobject_predicatez00,
		BgL_bgl_string1421za700za7za7o1443za7, "object_predicate", 16);
	      DEFINE_STRING(BGl_string1422z00zzobject_predicatez00,
		BgL_bgl_string1422za700za7za7o1444za7,
		"export instanceof static define define-inline pragma no-cfa-top effect predicate-of inline ::obj super super- @ isa? __object obj ?::bool ? (make-heap make-add-heap) ",
		166);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2classzd2predz12zd2envzc0zzobject_predicatez00,
		BgL_bgl_za762importza7d2clas1445z00,
		BGl_z62importzd2classzd2predz12z70zzobject_predicatez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2predz12zd2envz12zzobject_predicatez00,
		BgL_bgl_za762importza7d2java1446z00,
		BGl_z62importzd2javazd2classzd2predz12za2zzobject_predicatez00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2predz12zd2envzc0zzobject_predicatez00,
		BgL_bgl_za762genza7d2classza7d1447za7,
		BGl_z62genzd2classzd2predz12z70zzobject_predicatez00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_predicatez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_predicatez00(long
		BgL_checksumz00_1036, char *BgL_fromz00_1037)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_predicatez00))
				{
					BGl_requirezd2initializa7ationz75zzobject_predicatez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_predicatez00();
					BGl_libraryzd2moduleszd2initz00zzobject_predicatez00();
					BGl_cnstzd2initzd2zzobject_predicatez00();
					BGl_importedzd2moduleszd2initz00zzobject_predicatez00();
					return BGl_methodzd2initzd2zzobject_predicatez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_predicate");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			{	/* Object/predicate.scm 21 */
				obj_t BgL_cportz00_1023;

				{	/* Object/predicate.scm 21 */
					obj_t BgL_stringz00_1031;

					BgL_stringz00_1031 = BGl_string1422z00zzobject_predicatez00;
					{	/* Object/predicate.scm 21 */
						obj_t BgL_startz00_1032;

						BgL_startz00_1032 = BINT(((long) 0));
						{	/* Object/predicate.scm 21 */
							obj_t BgL_endz00_1033;

							BgL_endz00_1033 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1031)));
							{	/* Object/predicate.scm 21 */

								BgL_cportz00_1023 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1031, BgL_startz00_1032, BgL_endz00_1033);
				}}}}
				{
					long BgL_iz00_1024;

					BgL_iz00_1024 = ((long) 19);
				BgL_loopz00_1025:
					if ((BgL_iz00_1024 == ((long) -1)))
						{	/* Object/predicate.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/predicate.scm 21 */
							{	/* Object/predicate.scm 21 */
								obj_t BgL_arg1441z00_1027;

								{	/* Object/predicate.scm 21 */

									{	/* Object/predicate.scm 21 */
										obj_t BgL_locationz00_1029;

										BgL_locationz00_1029 = BBOOL(((bool_t) 0));
										{	/* Object/predicate.scm 21 */

											BgL_arg1441z00_1027 =
												BGl_readz00zz__readerz00(BgL_cportz00_1023,
												BgL_locationz00_1029);
										}
									}
								}
								{	/* Object/predicate.scm 21 */
									int BgL_tmpz00_1063;

									BgL_tmpz00_1063 = (int) (BgL_iz00_1024);
									CNST_TABLE_SET(BgL_tmpz00_1063, BgL_arg1441z00_1027);
							}}
							{	/* Object/predicate.scm 21 */
								int BgL_auxz00_1030;

								BgL_auxz00_1030 = (int) ((BgL_iz00_1024 - ((long) 1)));
								{
									long BgL_iz00_1068;

									BgL_iz00_1068 = (long) (BgL_auxz00_1030);
									BgL_iz00_1024 = BgL_iz00_1068;
									goto BgL_loopz00_1025;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* inline-pred? */
	bool_t BGl_inlinezd2predzf3z21zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 48 */
			{	/* Object/predicate.scm 49 */
				bool_t BgL_test1450z00_1071;

				{	/* Object/predicate.scm 49 */
					bool_t BgL__ortest_1078z00_707;

					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
						(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
						{	/* Object/predicate.scm 49 */
							BgL__ortest_1078z00_707 = ((bool_t) 0);
						}
					else
						{	/* Object/predicate.scm 49 */
							BgL__ortest_1078z00_707 = ((bool_t) 1);
						}
					if (BgL__ortest_1078z00_707)
						{	/* Object/predicate.scm 49 */
							BgL_test1450z00_1071 = BgL__ortest_1078z00_707;
						}
					else
						{	/* Object/predicate.scm 49 */
							BgL_test1450z00_1071 =
								(
								(long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) <
								((long) 1));
				}}
				if (BgL_test1450z00_1071)
					{	/* Object/predicate.scm 49 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 0)))))
							{	/* Object/predicate.scm 51 */
								return ((bool_t) 0);
							}
						else
							{	/* Object/predicate.scm 51 */
								return ((bool_t) 1);
							}
					}
				else
					{	/* Object/predicate.scm 49 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* gen-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_typez00_bglt
		BgL_classz00_3, obj_t BgL_srczd2defzd2_4, obj_t BgL_importz00_5)
	{
		{	/* Object/predicate.scm 59 */
			{	/* Object/predicate.scm 60 */
				obj_t BgL_idz00_709;

				BgL_idz00_709 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_3)))->BgL_idz00);
				{	/* Object/predicate.scm 60 */
					obj_t BgL_idzf3zf3_710;

					{	/* Object/predicate.scm 61 */
						obj_t BgL_arg1263z00_769;

						{	/* Object/predicate.scm 61 */
							obj_t BgL_arg1268z00_770;
							obj_t BgL_arg1270z00_771;

							{	/* Object/predicate.scm 61 */
								obj_t BgL_res1390z00_914;

								{	/* Object/predicate.scm 61 */
									obj_t BgL_arg1466z00_913;

									BgL_arg1466z00_913 = SYMBOL_TO_STRING(BgL_idz00_709);
									BgL_res1390z00_914 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_913);
								}
								BgL_arg1268z00_770 = BgL_res1390z00_914;
							}
							{	/* Object/predicate.scm 61 */
								obj_t BgL_res1391z00_917;

								{	/* Object/predicate.scm 61 */
									obj_t BgL_symbolz00_915;

									BgL_symbolz00_915 = CNST_TABLE_REF(((long) 1));
									{	/* Object/predicate.scm 61 */
										obj_t BgL_arg1466z00_916;

										BgL_arg1466z00_916 = SYMBOL_TO_STRING(BgL_symbolz00_915);
										BgL_res1391z00_917 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_916);
								}}
								BgL_arg1270z00_771 = BgL_res1391z00_917;
							}
							BgL_arg1263z00_769 =
								string_append(BgL_arg1268z00_770, BgL_arg1270z00_771);
						}
						BgL_idzf3zf3_710 = bstring_to_symbol(BgL_arg1263z00_769);
					}
					{	/* Object/predicate.scm 61 */
						obj_t BgL_predzd2idzd2_711;

						{	/* Object/predicate.scm 62 */
							obj_t BgL_arg1254z00_766;

							{	/* Object/predicate.scm 62 */
								obj_t BgL_arg1256z00_767;
								obj_t BgL_arg1258z00_768;

								{	/* Object/predicate.scm 62 */
									obj_t BgL_res1393z00_922;

									{	/* Object/predicate.scm 62 */
										obj_t BgL_arg1466z00_921;

										BgL_arg1466z00_921 = SYMBOL_TO_STRING(BgL_idz00_709);
										BgL_res1393z00_922 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_921);
									}
									BgL_arg1256z00_767 = BgL_res1393z00_922;
								}
								{	/* Object/predicate.scm 62 */
									obj_t BgL_res1394z00_925;

									{	/* Object/predicate.scm 62 */
										obj_t BgL_symbolz00_923;

										BgL_symbolz00_923 = CNST_TABLE_REF(((long) 2));
										{	/* Object/predicate.scm 62 */
											obj_t BgL_arg1466z00_924;

											BgL_arg1466z00_924 = SYMBOL_TO_STRING(BgL_symbolz00_923);
											BgL_res1394z00_925 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_924);
									}}
									BgL_arg1258z00_768 = BgL_res1394z00_925;
								}
								BgL_arg1254z00_766 =
									string_append(BgL_arg1256z00_767, BgL_arg1258z00_768);
							}
							BgL_predzd2idzd2_711 = bstring_to_symbol(BgL_arg1254z00_766);
						}
						{	/* Object/predicate.scm 62 */
							BgL_globalz00_bglt BgL_holderz00_712;

							{
								BgL_tclassz00_bglt BgL_auxz00_1097;

								{
									obj_t BgL_auxz00_1098;

									{	/* Object/predicate.scm 63 */
										BgL_objectz00_bglt BgL_tmpz00_1099;

										BgL_tmpz00_1099 = ((BgL_objectz00_bglt) BgL_classz00_3);
										BgL_auxz00_1098 = BGL_OBJECT_WIDENING(BgL_tmpz00_1099);
									}
									BgL_auxz00_1097 = ((BgL_tclassz00_bglt) BgL_auxz00_1098);
								}
								BgL_holderz00_712 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1097))->
									BgL_holderz00);
							}
							{	/* Object/predicate.scm 63 */
								obj_t BgL_objz00_713;

								BgL_objz00_713 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												3))));
								{	/* Object/predicate.scm 64 */
									obj_t BgL_superz00_714;

									{
										BgL_tclassz00_bglt BgL_auxz00_1107;

										{
											obj_t BgL_auxz00_1108;

											{	/* Object/predicate.scm 65 */
												BgL_objectz00_bglt BgL_tmpz00_1109;

												BgL_tmpz00_1109 = ((BgL_objectz00_bglt) BgL_classz00_3);
												BgL_auxz00_1108 = BGL_OBJECT_WIDENING(BgL_tmpz00_1109);
											}
											BgL_auxz00_1107 = ((BgL_tclassz00_bglt) BgL_auxz00_1108);
										}
										BgL_superz00_714 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1107))->
											BgL_itszd2superzd2);
									}
									{	/* Object/predicate.scm 65 */

										{

											if (BGl_isazf3zf3zz__objectz00(BgL_superz00_714,
													BGl_tclassz00zzobject_classz00))
												{	/* Object/predicate.scm 72 */
													obj_t BgL_superzd2predzd2idz00_717;
													obj_t BgL_superzd2typedzd2_718;

													{	/* Object/predicate.scm 72 */
														obj_t BgL_arg1221z00_749;

														{	/* Object/predicate.scm 72 */
															obj_t BgL_arg1223z00_750;
															obj_t BgL_arg1225z00_751;

															{	/* Object/predicate.scm 72 */
																obj_t BgL_res1397z00_937;

																{	/* Object/predicate.scm 72 */
																	obj_t BgL_symbolz00_935;

																	BgL_symbolz00_935 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Object/predicate.scm 72 */
																		obj_t BgL_arg1466z00_936;

																		BgL_arg1466z00_936 =
																			SYMBOL_TO_STRING(BgL_symbolz00_935);
																		BgL_res1397z00_937 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_936);
																}}
																BgL_arg1223z00_750 = BgL_res1397z00_937;
															}
															{	/* Object/predicate.scm 72 */
																obj_t BgL_res1398z00_940;

																{	/* Object/predicate.scm 72 */
																	obj_t BgL_arg1466z00_939;

																	BgL_arg1466z00_939 =
																		SYMBOL_TO_STRING(BgL_predzd2idzd2_711);
																	BgL_res1398z00_940 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_939);
																}
																BgL_arg1225z00_751 = BgL_res1398z00_940;
															}
															BgL_arg1221z00_749 =
																string_append(BgL_arg1223z00_750,
																BgL_arg1225z00_751);
														}
														BgL_superzd2predzd2idz00_717 =
															bstring_to_symbol(BgL_arg1221z00_749);
													}
													{	/* Object/predicate.scm 73 */
														obj_t BgL_arg1227z00_752;

														BgL_arg1227z00_752 =
															(((BgL_typez00_bglt) COBJECT(
																	((BgL_typez00_bglt)
																		((BgL_typez00_bglt) BgL_superz00_714))))->
															BgL_idz00);
														BgL_superzd2typedzd2_718 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(CNST_TABLE_REF(((long) 8)), BgL_arg1227z00_752);
													}
													{	/* Object/predicate.scm 76 */
														obj_t BgL_arg1133z00_719;

														if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
															{	/* Object/predicate.scm 77 */
																obj_t BgL_arg1140z00_721;

																{	/* Object/predicate.scm 77 */
																	obj_t BgL_arg1145z00_722;

																	{	/* Object/predicate.scm 77 */
																		obj_t BgL_arg1146z00_723;

																		{	/* Object/predicate.scm 77 */
																			obj_t BgL_arg1155z00_724;

																			BgL_arg1155z00_724 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						9)), BNIL);
																			BgL_arg1146z00_723 =
																				MAKE_YOUNG_PAIR(BgL_predzd2idzd2_711,
																				BgL_arg1155z00_724);
																		}
																		BgL_arg1145z00_722 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					10)), BgL_arg1146z00_723);
																	}
																	BgL_arg1140z00_721 =
																		MAKE_YOUNG_PAIR(BgL_arg1145z00_722, BNIL);
																}
																BgL_arg1133z00_719 =
																	MAKE_YOUNG_PAIR(BgL_importz00_5,
																	BgL_arg1140z00_721);
															}
														else
															{	/* Object/predicate.scm 78 */
																obj_t BgL_arg1156z00_725;

																{	/* Object/predicate.scm 78 */
																	obj_t BgL_arg1165z00_726;

																	{	/* Object/predicate.scm 78 */
																		obj_t BgL_arg1166z00_727;

																		BgL_arg1166z00_727 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					9)), BNIL);
																		BgL_arg1165z00_726 =
																			MAKE_YOUNG_PAIR(BgL_predzd2idzd2_711,
																			BgL_arg1166z00_727);
																	}
																	BgL_arg1156z00_725 =
																		MAKE_YOUNG_PAIR(BgL_arg1165z00_726, BNIL);
																}
																BgL_arg1133z00_719 =
																	MAKE_YOUNG_PAIR(BgL_importz00_5,
																	BgL_arg1156z00_725);
															}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg1133z00_719);
													}
													{	/* Object/predicate.scm 80 */
														obj_t BgL_arg1167z00_728;

														{	/* Object/predicate.scm 80 */
															obj_t BgL_arg1169z00_729;

															{	/* Object/predicate.scm 80 */
																obj_t BgL_arg1170z00_730;

																{	/* Object/predicate.scm 80 */
																	obj_t BgL_arg1172z00_731;

																	{	/* Object/predicate.scm 80 */
																		obj_t BgL_arg1174z00_732;
																		obj_t BgL_arg1175z00_733;

																		{	/* Object/predicate.scm 80 */
																			obj_t BgL_arg1176z00_734;

																			{	/* Object/predicate.scm 80 */
																				obj_t BgL_arg1177z00_735;

																				BgL_arg1177z00_735 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_classz00_3)))->BgL_idz00);
																				BgL_arg1176z00_734 =
																					MAKE_YOUNG_PAIR(BgL_arg1177z00_735,
																					BNIL);
																			}
																			BgL_arg1174z00_732 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						11)), BgL_arg1176z00_734);
																		}
																		{	/* Object/predicate.scm 81 */
																			obj_t BgL_arg1178z00_736;

																			{	/* Object/predicate.scm 81 */
																				obj_t BgL_arg1179z00_737;

																				BgL_arg1179z00_737 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							12)), BNIL);
																				BgL_arg1178z00_736 =
																					MAKE_YOUNG_PAIR(BgL_arg1179z00_737,
																					BNIL);
																			}
																			BgL_arg1175z00_733 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						13)), BgL_arg1178z00_736);
																		}
																		BgL_arg1172z00_731 =
																			MAKE_YOUNG_PAIR(BgL_arg1174z00_732,
																			BgL_arg1175z00_733);
																	}
																	BgL_arg1170z00_730 =
																		MAKE_YOUNG_PAIR(BgL_idzf3zf3_710,
																		BgL_arg1172z00_731);
																}
																BgL_arg1169z00_729 =
																	MAKE_YOUNG_PAIR(BgL_arg1170z00_730, BNIL);
															}
															BgL_arg1167z00_728 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																BgL_arg1169z00_729);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg1167z00_728);
													}
													{	/* Object/predicate.scm 84 */
														obj_t BgL_arg1186z00_738;

														{	/* Object/predicate.scm 84 */
															obj_t BgL_arg1190z00_740;

															{	/* Object/predicate.scm 84 */
																obj_t BgL_arg1194z00_742;
																obj_t BgL_arg1197z00_743;

																if (BGl_inlinezd2predzf3z21zzobject_predicatez00
																	())
																	{	/* Object/predicate.scm 84 */
																		BgL_arg1194z00_742 =
																			CNST_TABLE_REF(((long) 15));
																	}
																else
																	{	/* Object/predicate.scm 84 */
																		BgL_arg1194z00_742 =
																			CNST_TABLE_REF(((long) 16));
																	}
																{	/* Object/predicate.scm 85 */
																	obj_t BgL_arg1201z00_745;
																	obj_t BgL_arg1208z00_746;

																	{	/* Object/predicate.scm 85 */
																		obj_t BgL_arg1211z00_747;

																		BgL_arg1211z00_747 =
																			MAKE_YOUNG_PAIR(BgL_objz00_713, BNIL);
																		BgL_arg1201z00_745 =
																			MAKE_YOUNG_PAIR(BgL_predzd2idzd2_711,
																			BgL_arg1211z00_747);
																	}
																	{	/* Object/predicate.scm 84 */
																		obj_t BgL_tmpz00_1165;

																		{	/* Object/predicate.scm 67 */
																			obj_t BgL_arg1229z00_754;
																			obj_t BgL_arg1232z00_755;

																			{	/* Object/predicate.scm 67 */
																				obj_t BgL_arg1239z00_756;

																				{	/* Object/predicate.scm 67 */
																					obj_t BgL_arg1242z00_757;

																					BgL_arg1242z00_757 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BNIL);
																					BgL_arg1239z00_756 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 5)), BgL_arg1242z00_757);
																				}
																				BgL_arg1229z00_754 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							6)), BgL_arg1239z00_756);
																			}
																			{	/* Object/predicate.scm 67 */
																				obj_t BgL_arg1243z00_758;

																				{	/* Object/predicate.scm 67 */
																					obj_t BgL_arg1245z00_759;

																					{	/* Object/predicate.scm 67 */
																						obj_t BgL_arg1246z00_760;

																						{	/* Object/predicate.scm 67 */
																							obj_t BgL_arg1247z00_761;
																							obj_t BgL_arg1250z00_762;

																							BgL_arg1247z00_761 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_holderz00_712)))->
																								BgL_idz00);
																							BgL_arg1250z00_762 =
																								MAKE_YOUNG_PAIR(((
																										(BgL_globalz00_bglt)
																										COBJECT
																										(BgL_holderz00_712))->
																									BgL_modulez00), BNIL);
																							BgL_arg1246z00_760 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1247z00_761,
																								BgL_arg1250z00_762);
																						}
																						BgL_arg1245z00_759 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 6)),
																							BgL_arg1246z00_760);
																					}
																					BgL_arg1243z00_758 =
																						MAKE_YOUNG_PAIR(BgL_arg1245z00_759,
																						BNIL);
																				}
																				BgL_arg1232z00_755 =
																					MAKE_YOUNG_PAIR(BgL_objz00_713,
																					BgL_arg1243z00_758);
																			}
																			BgL_tmpz00_1165 =
																				MAKE_YOUNG_PAIR(BgL_arg1229z00_754,
																				BgL_arg1232z00_755);
																		}
																		BgL_arg1208z00_746 =
																			MAKE_YOUNG_PAIR(BgL_tmpz00_1165, BNIL);
																	}
																	BgL_arg1197z00_743 =
																		MAKE_YOUNG_PAIR(BgL_arg1201z00_745,
																		BgL_arg1208z00_746);
																}
																BgL_arg1190z00_740 =
																	MAKE_YOUNG_PAIR(BgL_arg1194z00_742,
																	BgL_arg1197z00_743);
															}
															{	/* Object/predicate.scm 84 */
																obj_t BgL_list1191z00_741;

																BgL_list1191z00_741 =
																	MAKE_YOUNG_PAIR(BgL_srczd2defzd2_4, BNIL);
																BgL_arg1186z00_738 =
																	BGl_epairifyza2za2zztools_miscz00
																	(BgL_arg1190z00_740, BgL_list1191z00_741);
														}}
														{	/* Object/predicate.scm 83 */
															obj_t BgL_list1187z00_739;

															BgL_list1187z00_739 =
																MAKE_YOUNG_PAIR(BgL_arg1186z00_738, BNIL);
															return BgL_list1187z00_739;
														}
													}
												}
											else
												{	/* Object/predicate.scm 68 */
													return BNIL;
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



/* &gen-class-pred! */
	obj_t BGl_z62genzd2classzd2predz12z70zzobject_predicatez00(obj_t
		BgL_envz00_1011, obj_t BgL_classz00_1012, obj_t BgL_srczd2defzd2_1013,
		obj_t BgL_importz00_1014)
	{
		{	/* Object/predicate.scm 59 */
			return
				BGl_genzd2classzd2predz12z12zzobject_predicatez00(
				((BgL_typez00_bglt) BgL_classz00_1012), BgL_srczd2defzd2_1013,
				BgL_importz00_1014);
		}

	}



/* import-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_typez00_bglt
		BgL_classz00_6, obj_t BgL_srczd2defzd2_7, obj_t BgL_modulez00_8)
	{
		{	/* Object/predicate.scm 92 */
			if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
				{	/* Object/predicate.scm 93 */
					return
						BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_classz00_6,
						BgL_srczd2defzd2_7, CNST_TABLE_REF(((long) 17)));
				}
			else
				{	/* Object/predicate.scm 97 */
					obj_t BgL_idz00_773;

					BgL_idz00_773 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_6)))->BgL_idz00);
					{	/* Object/predicate.scm 97 */
						obj_t BgL_idzf3zf3_774;

						{	/* Object/predicate.scm 98 */
							obj_t BgL_arg1281z00_785;

							{	/* Object/predicate.scm 98 */
								obj_t BgL_arg1282z00_786;
								obj_t BgL_arg1284z00_787;

								{	/* Object/predicate.scm 98 */
									obj_t BgL_res1401z00_949;

									{	/* Object/predicate.scm 98 */
										obj_t BgL_arg1466z00_948;

										BgL_arg1466z00_948 = SYMBOL_TO_STRING(BgL_idz00_773);
										BgL_res1401z00_949 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_948);
									}
									BgL_arg1282z00_786 = BgL_res1401z00_949;
								}
								{	/* Object/predicate.scm 98 */
									obj_t BgL_res1402z00_952;

									{	/* Object/predicate.scm 98 */
										obj_t BgL_symbolz00_950;

										BgL_symbolz00_950 = CNST_TABLE_REF(((long) 1));
										{	/* Object/predicate.scm 98 */
											obj_t BgL_arg1466z00_951;

											BgL_arg1466z00_951 = SYMBOL_TO_STRING(BgL_symbolz00_950);
											BgL_res1402z00_952 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_951);
									}}
									BgL_arg1284z00_787 = BgL_res1402z00_952;
								}
								BgL_arg1281z00_785 =
									string_append(BgL_arg1282z00_786, BgL_arg1284z00_787);
							}
							BgL_idzf3zf3_774 = bstring_to_symbol(BgL_arg1281z00_785);
						}
						{	/* Object/predicate.scm 98 */
							obj_t BgL_predzd2idzd2_775;

							{	/* Object/predicate.scm 99 */
								obj_t BgL_arg1276z00_782;

								{	/* Object/predicate.scm 99 */
									obj_t BgL_arg1277z00_783;
									obj_t BgL_arg1280z00_784;

									{	/* Object/predicate.scm 99 */
										obj_t BgL_res1404z00_957;

										{	/* Object/predicate.scm 99 */
											obj_t BgL_arg1466z00_956;

											BgL_arg1466z00_956 = SYMBOL_TO_STRING(BgL_idz00_773);
											BgL_res1404z00_957 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_956);
										}
										BgL_arg1277z00_783 = BgL_res1404z00_957;
									}
									{	/* Object/predicate.scm 99 */
										obj_t BgL_res1405z00_960;

										{	/* Object/predicate.scm 99 */
											obj_t BgL_symbolz00_958;

											BgL_symbolz00_958 = CNST_TABLE_REF(((long) 2));
											{	/* Object/predicate.scm 99 */
												obj_t BgL_arg1466z00_959;

												BgL_arg1466z00_959 =
													SYMBOL_TO_STRING(BgL_symbolz00_958);
												BgL_res1405z00_960 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_959);
										}}
										BgL_arg1280z00_784 = BgL_res1405z00_960;
									}
									BgL_arg1276z00_782 =
										string_append(BgL_arg1277z00_783, BgL_arg1280z00_784);
								}
								BgL_predzd2idzd2_775 = bstring_to_symbol(BgL_arg1276z00_782);
							}
							{	/* Object/predicate.scm 100 */
								obj_t BgL_superz00_777;

								{
									BgL_tclassz00_bglt BgL_auxz00_1210;

									{
										obj_t BgL_auxz00_1211;

										{	/* Object/predicate.scm 101 */
											BgL_objectz00_bglt BgL_tmpz00_1212;

											BgL_tmpz00_1212 = ((BgL_objectz00_bglt) BgL_classz00_6);
											BgL_auxz00_1211 = BGL_OBJECT_WIDENING(BgL_tmpz00_1212);
										}
										BgL_auxz00_1210 = ((BgL_tclassz00_bglt) BgL_auxz00_1211);
									}
									BgL_superz00_777 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1210))->
										BgL_itszd2superzd2);
								}
								{	/* Object/predicate.scm 101 */

									if (BGl_isazf3zf3zz__objectz00(BgL_superz00_777,
											BGl_tclassz00zzobject_classz00))
										{	/* Object/predicate.scm 104 */
											obj_t BgL_arg1273z00_779;

											{	/* Object/predicate.scm 104 */
												obj_t BgL_arg1275z00_781;

												BgL_arg1275z00_781 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)), BNIL);
												BgL_arg1273z00_779 =
													MAKE_YOUNG_PAIR(BgL_predzd2idzd2_775,
													BgL_arg1275z00_781);
											}
											BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_8,
												BgL_arg1273z00_779, BFALSE, BNIL);
										}
									else
										{	/* Object/predicate.scm 102 */
											BFALSE;
										}
									return BNIL;
								}
							}
						}
					}
				}
		}

	}



/* &import-class-pred! */
	obj_t BGl_z62importzd2classzd2predz12z70zzobject_predicatez00(obj_t
		BgL_envz00_1015, obj_t BgL_classz00_1016, obj_t BgL_srczd2defzd2_1017,
		obj_t BgL_modulez00_1018)
	{
		{	/* Object/predicate.scm 92 */
			return
				BGl_importzd2classzd2predz12z12zzobject_predicatez00(
				((BgL_typez00_bglt) BgL_classz00_1016), BgL_srczd2defzd2_1017,
				BgL_modulez00_1018);
		}

	}



/* gen-java-class-pred! */
	obj_t
		BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00(BgL_typez00_bglt
		BgL_classz00_9, obj_t BgL_srczd2defzd2_10, obj_t BgL_mclausez00_11)
	{
		{	/* Object/predicate.scm 114 */
			{	/* Object/predicate.scm 115 */
				obj_t BgL_idz00_788;

				BgL_idz00_788 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_9)))->BgL_idz00);
				{	/* Object/predicate.scm 115 */
					obj_t BgL_idzf3zf3_789;

					{	/* Object/predicate.scm 116 */
						obj_t BgL_arg1326z00_827;

						{	/* Object/predicate.scm 116 */
							obj_t BgL_arg1327z00_828;
							obj_t BgL_arg1328z00_829;

							{	/* Object/predicate.scm 116 */
								obj_t BgL_res1408z00_971;

								{	/* Object/predicate.scm 116 */
									obj_t BgL_arg1466z00_970;

									BgL_arg1466z00_970 = SYMBOL_TO_STRING(BgL_idz00_788);
									BgL_res1408z00_971 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_970);
								}
								BgL_arg1327z00_828 = BgL_res1408z00_971;
							}
							{	/* Object/predicate.scm 116 */
								obj_t BgL_res1409z00_974;

								{	/* Object/predicate.scm 116 */
									obj_t BgL_symbolz00_972;

									BgL_symbolz00_972 = CNST_TABLE_REF(((long) 1));
									{	/* Object/predicate.scm 116 */
										obj_t BgL_arg1466z00_973;

										BgL_arg1466z00_973 = SYMBOL_TO_STRING(BgL_symbolz00_972);
										BgL_res1409z00_974 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_973);
								}}
								BgL_arg1328z00_829 = BgL_res1409z00_974;
							}
							BgL_arg1326z00_827 =
								string_append(BgL_arg1327z00_828, BgL_arg1328z00_829);
						}
						BgL_idzf3zf3_789 = bstring_to_symbol(BgL_arg1326z00_827);
					}
					{	/* Object/predicate.scm 116 */
						obj_t BgL_predzd2idzd2_790;

						{	/* Object/predicate.scm 117 */
							obj_t BgL_arg1322z00_824;

							{	/* Object/predicate.scm 117 */
								obj_t BgL_arg1324z00_825;
								obj_t BgL_arg1325z00_826;

								{	/* Object/predicate.scm 117 */
									obj_t BgL_res1411z00_979;

									{	/* Object/predicate.scm 117 */
										obj_t BgL_arg1466z00_978;

										BgL_arg1466z00_978 = SYMBOL_TO_STRING(BgL_idz00_788);
										BgL_res1411z00_979 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_978);
									}
									BgL_arg1324z00_825 = BgL_res1411z00_979;
								}
								{	/* Object/predicate.scm 117 */
									obj_t BgL_res1412z00_982;

									{	/* Object/predicate.scm 117 */
										obj_t BgL_symbolz00_980;

										BgL_symbolz00_980 = CNST_TABLE_REF(((long) 2));
										{	/* Object/predicate.scm 117 */
											obj_t BgL_arg1466z00_981;

											BgL_arg1466z00_981 = SYMBOL_TO_STRING(BgL_symbolz00_980);
											BgL_res1412z00_982 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_981);
									}}
									BgL_arg1325z00_826 = BgL_res1412z00_982;
								}
								BgL_arg1322z00_824 =
									string_append(BgL_arg1324z00_825, BgL_arg1325z00_826);
							}
							BgL_predzd2idzd2_790 = bstring_to_symbol(BgL_arg1322z00_824);
						}
						{	/* Object/predicate.scm 117 */
							obj_t BgL_objz00_791;

							BgL_objz00_791 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											3))));
							{	/* Object/predicate.scm 119 */

								{

									{	/* Object/predicate.scm 124 */
										obj_t BgL_arg1285z00_794;

										{	/* Object/predicate.scm 124 */
											obj_t BgL_arg1286z00_795;

											{	/* Object/predicate.scm 124 */
												obj_t BgL_arg1287z00_796;

												{	/* Object/predicate.scm 124 */
													obj_t BgL_arg1288z00_797;

													{	/* Object/predicate.scm 124 */
														obj_t BgL_arg1289z00_798;

														BgL_arg1289z00_798 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)), BNIL);
														BgL_arg1288z00_797 =
															MAKE_YOUNG_PAIR(BgL_predzd2idzd2_790,
															BgL_arg1289z00_798);
													}
													BgL_arg1287z00_796 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
														BgL_arg1288z00_797);
												}
												BgL_arg1286z00_795 =
													MAKE_YOUNG_PAIR(BgL_arg1287z00_796, BNIL);
											}
											BgL_arg1285z00_794 =
												MAKE_YOUNG_PAIR(BgL_mclausez00_11, BgL_arg1286z00_795);
										}
										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
											(BgL_arg1285z00_794);
									}
									{	/* Object/predicate.scm 126 */
										obj_t BgL_arg1290z00_799;

										{	/* Object/predicate.scm 126 */
											obj_t BgL_arg1291z00_800;

											{	/* Object/predicate.scm 126 */
												obj_t BgL_arg1292z00_801;

												{	/* Object/predicate.scm 126 */
													obj_t BgL_arg1295z00_802;

													{	/* Object/predicate.scm 126 */
														obj_t BgL_arg1296z00_803;
														obj_t BgL_arg1297z00_804;

														{	/* Object/predicate.scm 126 */
															obj_t BgL_arg1298z00_805;

															{	/* Object/predicate.scm 126 */
																obj_t BgL_arg1299z00_806;

																BgL_arg1299z00_806 =
																	(((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_classz00_9)))->
																	BgL_idz00);
																BgL_arg1298z00_805 =
																	MAKE_YOUNG_PAIR(BgL_arg1299z00_806, BNIL);
															}
															BgL_arg1296z00_803 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
																BgL_arg1298z00_805);
														}
														{	/* Object/predicate.scm 126 */
															obj_t BgL_arg1300z00_807;

															{	/* Object/predicate.scm 126 */
																obj_t BgL_arg1301z00_808;

																BgL_arg1301z00_808 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																	BNIL);
																BgL_arg1300z00_807 =
																	MAKE_YOUNG_PAIR(BgL_arg1301z00_808, BNIL);
															}
															BgL_arg1297z00_804 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																BgL_arg1300z00_807);
														}
														BgL_arg1295z00_802 =
															MAKE_YOUNG_PAIR(BgL_arg1296z00_803,
															BgL_arg1297z00_804);
													}
													BgL_arg1292z00_801 =
														MAKE_YOUNG_PAIR(BgL_idzf3zf3_789,
														BgL_arg1295z00_802);
												}
												BgL_arg1291z00_800 =
													MAKE_YOUNG_PAIR(BgL_arg1292z00_801, BNIL);
											}
											BgL_arg1290z00_799 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
												BgL_arg1291z00_800);
										}
										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
											(BgL_arg1290z00_799);
									}
									{	/* Object/predicate.scm 129 */
										obj_t BgL_arg1303z00_809;

										{	/* Object/predicate.scm 129 */
											obj_t BgL_arg1306z00_811;

											{	/* Object/predicate.scm 129 */
												obj_t BgL_arg1308z00_813;
												obj_t BgL_arg1309z00_814;

												if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
													{	/* Object/predicate.scm 129 */
														BgL_arg1308z00_813 = CNST_TABLE_REF(((long) 15));
													}
												else
													{	/* Object/predicate.scm 129 */
														BgL_arg1308z00_813 = CNST_TABLE_REF(((long) 16));
													}
												{	/* Object/predicate.scm 130 */
													obj_t BgL_arg1311z00_816;
													obj_t BgL_arg1312z00_817;

													{	/* Object/predicate.scm 130 */
														obj_t BgL_arg1314z00_818;

														BgL_arg1314z00_818 =
															MAKE_YOUNG_PAIR(BgL_objz00_791, BNIL);
														BgL_arg1311z00_816 =
															MAKE_YOUNG_PAIR(BgL_predzd2idzd2_790,
															BgL_arg1314z00_818);
													}
													{	/* Object/predicate.scm 129 */
														obj_t BgL_tmpz00_1274;

														{	/* Object/predicate.scm 121 */
															obj_t BgL_list1317z00_821;

															BgL_list1317z00_821 =
																MAKE_YOUNG_PAIR(BgL_objz00_791, BNIL);
															BgL_tmpz00_1274 =
																BGl_makezd2privatezd2sexpz00zzast_privatez00
																(CNST_TABLE_REF(((long) 18)), BgL_idz00_788,
																BgL_list1317z00_821);
														}
														BgL_arg1312z00_817 =
															MAKE_YOUNG_PAIR(BgL_tmpz00_1274, BNIL);
													}
													BgL_arg1309z00_814 =
														MAKE_YOUNG_PAIR(BgL_arg1311z00_816,
														BgL_arg1312z00_817);
												}
												BgL_arg1306z00_811 =
													MAKE_YOUNG_PAIR(BgL_arg1308z00_813,
													BgL_arg1309z00_814);
											}
											{	/* Object/predicate.scm 129 */
												obj_t BgL_list1307z00_812;

												BgL_list1307z00_812 =
													MAKE_YOUNG_PAIR(BgL_srczd2defzd2_10, BNIL);
												BgL_arg1303z00_809 =
													BGl_epairifyza2za2zztools_miscz00(BgL_arg1306z00_811,
													BgL_list1307z00_812);
										}}
										{	/* Object/predicate.scm 128 */
											obj_t BgL_list1304z00_810;

											BgL_list1304z00_810 =
												MAKE_YOUNG_PAIR(BgL_arg1303z00_809, BNIL);
											return BgL_list1304z00_810;
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



/* import-java-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00(BgL_typez00_bglt
		BgL_classz00_12, obj_t BgL_srczd2defzd2_13, obj_t BgL_modulez00_14)
	{
		{	/* Object/predicate.scm 137 */
			if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
				{	/* Object/predicate.scm 142 */
					obj_t BgL_arg1330z00_831;

					if ((BgL_modulez00_14 == BGl_za2moduleza2z00zzmodule_modulez00))
						{	/* Object/predicate.scm 142 */
							BgL_arg1330z00_831 = CNST_TABLE_REF(((long) 19));
						}
					else
						{	/* Object/predicate.scm 142 */
							BgL_arg1330z00_831 = CNST_TABLE_REF(((long) 17));
						}
					return
						BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00
						(BgL_classz00_12, BgL_srczd2defzd2_13, BgL_arg1330z00_831);
				}
			else
				{	/* Object/predicate.scm 144 */
					obj_t BgL_idz00_833;

					BgL_idz00_833 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_12)))->BgL_idz00);
					{	/* Object/predicate.scm 144 */
						obj_t BgL_idzf3zf3_834;

						{	/* Object/predicate.scm 145 */
							obj_t BgL_arg1344z00_843;

							{	/* Object/predicate.scm 145 */
								obj_t BgL_arg1345z00_844;
								obj_t BgL_arg1346z00_845;

								{	/* Object/predicate.scm 145 */
									obj_t BgL_res1415z00_992;

									{	/* Object/predicate.scm 145 */
										obj_t BgL_arg1466z00_991;

										BgL_arg1466z00_991 = SYMBOL_TO_STRING(BgL_idz00_833);
										BgL_res1415z00_992 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_991);
									}
									BgL_arg1345z00_844 = BgL_res1415z00_992;
								}
								{	/* Object/predicate.scm 145 */
									obj_t BgL_res1416z00_995;

									{	/* Object/predicate.scm 145 */
										obj_t BgL_symbolz00_993;

										BgL_symbolz00_993 = CNST_TABLE_REF(((long) 1));
										{	/* Object/predicate.scm 145 */
											obj_t BgL_arg1466z00_994;

											BgL_arg1466z00_994 = SYMBOL_TO_STRING(BgL_symbolz00_993);
											BgL_res1416z00_995 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_994);
									}}
									BgL_arg1346z00_845 = BgL_res1416z00_995;
								}
								BgL_arg1344z00_843 =
									string_append(BgL_arg1345z00_844, BgL_arg1346z00_845);
							}
							BgL_idzf3zf3_834 = bstring_to_symbol(BgL_arg1344z00_843);
						}
						{	/* Object/predicate.scm 145 */
							obj_t BgL_predzd2idzd2_835;

							{	/* Object/predicate.scm 146 */
								obj_t BgL_arg1338z00_840;

								{	/* Object/predicate.scm 146 */
									obj_t BgL_arg1339z00_841;
									obj_t BgL_arg1340z00_842;

									{	/* Object/predicate.scm 146 */
										obj_t BgL_res1418z00_1000;

										{	/* Object/predicate.scm 146 */
											obj_t BgL_arg1466z00_999;

											BgL_arg1466z00_999 = SYMBOL_TO_STRING(BgL_idz00_833);
											BgL_res1418z00_1000 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_999);
										}
										BgL_arg1339z00_841 = BgL_res1418z00_1000;
									}
									{	/* Object/predicate.scm 146 */
										obj_t BgL_res1419z00_1003;

										{	/* Object/predicate.scm 146 */
											obj_t BgL_symbolz00_1001;

											BgL_symbolz00_1001 = CNST_TABLE_REF(((long) 2));
											{	/* Object/predicate.scm 146 */
												obj_t BgL_arg1466z00_1002;

												BgL_arg1466z00_1002 =
													SYMBOL_TO_STRING(BgL_symbolz00_1001);
												BgL_res1419z00_1003 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1002);
										}}
										BgL_arg1340z00_842 = BgL_res1419z00_1003;
									}
									BgL_arg1338z00_840 =
										string_append(BgL_arg1339z00_841, BgL_arg1340z00_842);
								}
								BgL_predzd2idzd2_835 = bstring_to_symbol(BgL_arg1338z00_840);
							}
							{	/* Object/predicate.scm 147 */

								{	/* Object/predicate.scm 149 */
									obj_t BgL_arg1334z00_837;

									{	/* Object/predicate.scm 149 */
										obj_t BgL_arg1337z00_839;

										BgL_arg1337z00_839 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)), BNIL);
										BgL_arg1334z00_837 =
											MAKE_YOUNG_PAIR(BgL_predzd2idzd2_835, BgL_arg1337z00_839);
									}
									BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_14,
										BgL_arg1334z00_837, BFALSE, BNIL);
								}
								return BNIL;
							}
						}
					}
				}
		}

	}



/* &import-java-class-pred! */
	obj_t BGl_z62importzd2javazd2classzd2predz12za2zzobject_predicatez00(obj_t
		BgL_envz00_1019, obj_t BgL_classz00_1020, obj_t BgL_srczd2defzd2_1021,
		obj_t BgL_modulez00_1022)
	{
		{	/* Object/predicate.scm 137 */
			return
				BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00(
				((BgL_typez00_bglt) BgL_classz00_1020), BgL_srczd2defzd2_1021,
				BgL_modulez00_1022);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_predicatez00()
	{
		{	/* Object/predicate.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1421z00zzobject_predicatez00));
		}

	}

#ifdef __cplusplus
}
#endif
