/*===========================================================================*/
/*   (Object/tools.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/tools.scm) */
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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		long BgL_indexz00;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		bool_t BgL_virtualzd2overridezd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62makezd2directzd2setz12z70zzobject_toolsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62classzd2ze3superzd2idz81zzobject_toolsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2ze3objzd2idze3zzobject_toolsz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_toolsz00();
	static obj_t BGl_z62findzd2classzd2slotz62zzobject_toolsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_toolsz00();
	BGL_EXPORTED_DECL obj_t BGl_objzd2ze3classzd2idze3zzobject_toolsz00(obj_t);
	static obj_t BGl_z62superzd2ze3classzd2idz81zzobject_toolsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_toolsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2refz00zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t);
	static obj_t BGl_z62classzd2ze3objzd2idz81zzobject_toolsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2directzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	static obj_t BGl_z62objzd2ze3classzd2idz81zzobject_toolsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_toolsz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_toolsz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2ze3superzd2idze3zzobject_toolsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2classzd2slotz00zzobject_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62classzf3zd2idz43zzobject_toolsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzf3zd2idz21zzobject_toolsz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62makezd2classzd2refz62zzobject_toolsz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_superzd2ze3classzd2idze3zzobject_toolsz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_toolsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_toolsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_toolsz00();
	static obj_t BGl_makezd2directzd2refz00zzobject_toolsz00(obj_t,
		BgL_slotz00_bglt, obj_t);
	static obj_t BGl_z62makezd2classzd2setz12z70zzobject_toolsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_objzd2ze3classzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl_za762objza7d2za7e3clas1646za7,
		BGl_z62objzd2ze3classzd2idz81zzobject_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzf3zd2idzd2envzf3zzobject_toolsz00,
		BgL_bgl_za762classza7f3za7d2id1647za7,
		BGl_z62classzf3zd2idz43zzobject_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1639z00zzobject_toolsz00,
		BgL_bgl_string1639za700za7za7o1648za7, "(((~a)COBJECT($1))->~a)", 23);
	      DEFINE_STRING(BGl_string1640z00zzobject_toolsz00,
		BgL_bgl_string1640za700za7za7o1649za7,
		"((((~a)COBJECT($1))->~a)=((~a)$2),BUNSPEC)", 42);
	      DEFINE_STRING(BGl_string1641z00zzobject_toolsz00,
		BgL_bgl_string1641za700za7za7o1650za7, "object_tools", 12);
	      DEFINE_STRING(BGl_string1642z00zzobject_toolsz00,
		BgL_bgl_string1642za700za7za7o1651za7,
		"setfield getfield object-widening -> ? obj-> ->obj ", 51);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2classzd2slotzd2envzd2zzobject_toolsz00,
		BgL_bgl_za762findza7d2classza71652za7,
		BGl_z62findzd2classzd2slotz62zzobject_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2refzd2envzd2zzobject_toolsz00,
		BgL_bgl_za762makeza7d2classza71653za7,
		BGl_z62makezd2classzd2refz62zzobject_toolsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2setz12zd2envzc0zzobject_toolsz00,
		BgL_bgl_za762makeza7d2classza71654za7,
		BGl_z62makezd2classzd2setz12z70zzobject_toolsz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2ze3superzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl_za762classza7d2za7e3su1655za7,
		BGl_z62classzd2ze3superzd2idz81zzobject_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_superzd2ze3classzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl_za762superza7d2za7e3cl1656za7,
		BGl_z62superzd2ze3classzd2idz81zzobject_toolsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2ze3objzd2idzd2envz31zzobject_toolsz00,
		BgL_bgl_za762classza7d2za7e3ob1657za7,
		BGl_z62classzd2ze3objzd2idz81zzobject_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2directzd2setz12zd2envzc0zzobject_toolsz00,
		BgL_bgl_za762makeza7d2direct1658z00,
		BGl_z62makezd2directzd2setz12z70zzobject_toolsz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzobject_toolsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long
		BgL_checksumz00_2113, char *BgL_fromz00_2114)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_toolsz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_toolsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_toolsz00();
					BGl_libraryzd2moduleszd2initz00zzobject_toolsz00();
					BGl_cnstzd2initzd2zzobject_toolsz00();
					BGl_importedzd2moduleszd2initz00zzobject_toolsz00();
					return BGl_methodzd2initzd2zzobject_toolsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_tools");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_tools");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			{	/* Object/tools.scm 15 */
				obj_t BgL_cportz00_2100;

				{	/* Object/tools.scm 15 */
					obj_t BgL_stringz00_2108;

					BgL_stringz00_2108 = BGl_string1642z00zzobject_toolsz00;
					{	/* Object/tools.scm 15 */
						obj_t BgL_startz00_2109;

						BgL_startz00_2109 = BINT(((long) 0));
						{	/* Object/tools.scm 15 */
							obj_t BgL_endz00_2110;

							BgL_endz00_2110 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2108)));
							{	/* Object/tools.scm 15 */

								BgL_cportz00_2100 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2108, BgL_startz00_2109, BgL_endz00_2110);
				}}}}
				{
					long BgL_iz00_2101;

					BgL_iz00_2101 = ((long) 6);
				BgL_loopz00_2102:
					if ((BgL_iz00_2101 == ((long) -1)))
						{	/* Object/tools.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/tools.scm 15 */
							{	/* Object/tools.scm 15 */
								obj_t BgL_arg1644z00_2104;

								{	/* Object/tools.scm 15 */

									{	/* Object/tools.scm 15 */
										obj_t BgL_locationz00_2106;

										BgL_locationz00_2106 = BBOOL(((bool_t) 0));
										{	/* Object/tools.scm 15 */

											BgL_arg1644z00_2104 =
												BGl_readz00zz__readerz00(BgL_cportz00_2100,
												BgL_locationz00_2106);
										}
									}
								}
								{	/* Object/tools.scm 15 */
									int BgL_tmpz00_2139;

									BgL_tmpz00_2139 = (int) (BgL_iz00_2101);
									CNST_TABLE_SET(BgL_tmpz00_2139, BgL_arg1644z00_2104);
							}}
							{	/* Object/tools.scm 15 */
								int BgL_auxz00_2107;

								BgL_auxz00_2107 = (int) ((BgL_iz00_2101 - ((long) 1)));
								{
									long BgL_iz00_2144;

									BgL_iz00_2144 = (long) (BgL_auxz00_2107);
									BgL_iz00_2101 = BgL_iz00_2144;
									goto BgL_loopz00_2102;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* class->obj-id */
	BGL_EXPORTED_DEF obj_t BGl_classzd2ze3objzd2idze3zzobject_toolsz00(obj_t
		BgL_idz00_3)
	{
		{	/* Object/tools.scm 43 */
			{	/* Object/tools.scm 44 */
				obj_t BgL_arg1297z00_1693;

				{	/* Object/tools.scm 44 */
					obj_t BgL_arg1298z00_1694;
					obj_t BgL_arg1299z00_1695;

					{	/* Object/tools.scm 44 */
						obj_t BgL_res1627z00_2003;

						{	/* Object/tools.scm 44 */
							obj_t BgL_arg1466z00_2002;

							BgL_arg1466z00_2002 = SYMBOL_TO_STRING(BgL_idz00_3);
							BgL_res1627z00_2003 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2002);
						}
						BgL_arg1298z00_1694 = BgL_res1627z00_2003;
					}
					{	/* Object/tools.scm 44 */
						obj_t BgL_res1628z00_2006;

						{	/* Object/tools.scm 44 */
							obj_t BgL_symbolz00_2004;

							BgL_symbolz00_2004 = CNST_TABLE_REF(((long) 0));
							{	/* Object/tools.scm 44 */
								obj_t BgL_arg1466z00_2005;

								BgL_arg1466z00_2005 = SYMBOL_TO_STRING(BgL_symbolz00_2004);
								BgL_res1628z00_2006 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2005);
						}}
						BgL_arg1299z00_1695 = BgL_res1628z00_2006;
					}
					BgL_arg1297z00_1693 =
						string_append(BgL_arg1298z00_1694, BgL_arg1299z00_1695);
				}
				return bstring_to_symbol(BgL_arg1297z00_1693);
			}
		}

	}



/* &class->obj-id */
	obj_t BGl_z62classzd2ze3objzd2idz81zzobject_toolsz00(obj_t BgL_envz00_2071,
		obj_t BgL_idz00_2072)
	{
		{	/* Object/tools.scm 43 */
			return BGl_classzd2ze3objzd2idze3zzobject_toolsz00(BgL_idz00_2072);
		}

	}



/* obj->class-id */
	BGL_EXPORTED_DEF obj_t BGl_objzd2ze3classzd2idze3zzobject_toolsz00(obj_t
		BgL_idz00_4)
	{
		{	/* Object/tools.scm 49 */
			{	/* Object/tools.scm 50 */
				obj_t BgL_arg1300z00_1696;

				{	/* Object/tools.scm 50 */
					obj_t BgL_arg1301z00_1697;
					obj_t BgL_arg1303z00_1698;

					{	/* Object/tools.scm 50 */
						obj_t BgL_res1630z00_2011;

						{	/* Object/tools.scm 50 */
							obj_t BgL_symbolz00_2009;

							BgL_symbolz00_2009 = CNST_TABLE_REF(((long) 1));
							{	/* Object/tools.scm 50 */
								obj_t BgL_arg1466z00_2010;

								BgL_arg1466z00_2010 = SYMBOL_TO_STRING(BgL_symbolz00_2009);
								BgL_res1630z00_2011 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2010);
						}}
						BgL_arg1301z00_1697 = BgL_res1630z00_2011;
					}
					{	/* Object/tools.scm 50 */
						obj_t BgL_res1631z00_2014;

						{	/* Object/tools.scm 50 */
							obj_t BgL_arg1466z00_2013;

							BgL_arg1466z00_2013 = SYMBOL_TO_STRING(BgL_idz00_4);
							BgL_res1631z00_2014 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2013);
						}
						BgL_arg1303z00_1698 = BgL_res1631z00_2014;
					}
					BgL_arg1300z00_1696 =
						string_append(BgL_arg1301z00_1697, BgL_arg1303z00_1698);
				}
				return bstring_to_symbol(BgL_arg1300z00_1696);
			}
		}

	}



/* &obj->class-id */
	obj_t BGl_z62objzd2ze3classzd2idz81zzobject_toolsz00(obj_t BgL_envz00_2073,
		obj_t BgL_idz00_2074)
	{
		{	/* Object/tools.scm 49 */
			return BGl_objzd2ze3classzd2idze3zzobject_toolsz00(BgL_idz00_2074);
		}

	}



/* class?-id */
	BGL_EXPORTED_DEF obj_t BGl_classzf3zd2idz21zzobject_toolsz00(obj_t
		BgL_idz00_5)
	{
		{	/* Object/tools.scm 55 */
			{	/* Object/tools.scm 56 */
				obj_t BgL_arg1304z00_1699;

				{	/* Object/tools.scm 56 */
					obj_t BgL_arg1306z00_1700;
					obj_t BgL_arg1307z00_1701;

					{	/* Object/tools.scm 56 */
						obj_t BgL_res1633z00_2019;

						{	/* Object/tools.scm 56 */
							obj_t BgL_arg1466z00_2018;

							BgL_arg1466z00_2018 = SYMBOL_TO_STRING(BgL_idz00_5);
							BgL_res1633z00_2019 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2018);
						}
						BgL_arg1306z00_1700 = BgL_res1633z00_2019;
					}
					{	/* Object/tools.scm 56 */
						obj_t BgL_res1634z00_2022;

						{	/* Object/tools.scm 56 */
							obj_t BgL_symbolz00_2020;

							BgL_symbolz00_2020 = CNST_TABLE_REF(((long) 2));
							{	/* Object/tools.scm 56 */
								obj_t BgL_arg1466z00_2021;

								BgL_arg1466z00_2021 = SYMBOL_TO_STRING(BgL_symbolz00_2020);
								BgL_res1634z00_2022 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2021);
						}}
						BgL_arg1307z00_1701 = BgL_res1634z00_2022;
					}
					BgL_arg1304z00_1699 =
						string_append(BgL_arg1306z00_1700, BgL_arg1307z00_1701);
				}
				return bstring_to_symbol(BgL_arg1304z00_1699);
			}
		}

	}



/* &class?-id */
	obj_t BGl_z62classzf3zd2idz43zzobject_toolsz00(obj_t BgL_envz00_2075,
		obj_t BgL_idz00_2076)
	{
		{	/* Object/tools.scm 55 */
			return BGl_classzf3zd2idz21zzobject_toolsz00(BgL_idz00_2076);
		}

	}



/* class->super-id */
	BGL_EXPORTED_DEF obj_t BGl_classzd2ze3superzd2idze3zzobject_toolsz00(obj_t
		BgL_classz00_6, obj_t BgL_superz00_7)
	{
		{	/* Object/tools.scm 61 */
			{	/* Object/tools.scm 62 */
				obj_t BgL_list1308z00_2025;

				{	/* Object/tools.scm 62 */
					obj_t BgL_arg1309z00_2026;

					{	/* Object/tools.scm 62 */
						obj_t BgL_arg1310z00_2027;

						BgL_arg1310z00_2027 = MAKE_YOUNG_PAIR(BgL_superz00_7, BNIL);
						BgL_arg1309z00_2026 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1310z00_2027);
					}
					BgL_list1308z00_2025 =
						MAKE_YOUNG_PAIR(BgL_classz00_6, BgL_arg1309z00_2026);
				}
				return
					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1308z00_2025);
			}
		}

	}



/* &class->super-id */
	obj_t BGl_z62classzd2ze3superzd2idz81zzobject_toolsz00(obj_t BgL_envz00_2077,
		obj_t BgL_classz00_2078, obj_t BgL_superz00_2079)
	{
		{	/* Object/tools.scm 61 */
			return
				BGl_classzd2ze3superzd2idze3zzobject_toolsz00(BgL_classz00_2078,
				BgL_superz00_2079);
		}

	}



/* super->class-id */
	BGL_EXPORTED_DEF obj_t BGl_superzd2ze3classzd2idze3zzobject_toolsz00(obj_t
		BgL_superz00_8, obj_t BgL_classz00_9)
	{
		{	/* Object/tools.scm 67 */
			{	/* Object/tools.scm 68 */
				obj_t BgL_list1311z00_2028;

				{	/* Object/tools.scm 68 */
					obj_t BgL_arg1312z00_2029;

					{	/* Object/tools.scm 68 */
						obj_t BgL_arg1314z00_2030;

						BgL_arg1314z00_2030 = MAKE_YOUNG_PAIR(BgL_classz00_9, BNIL);
						BgL_arg1312z00_2029 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1314z00_2030);
					}
					BgL_list1311z00_2028 =
						MAKE_YOUNG_PAIR(BgL_superz00_8, BgL_arg1312z00_2029);
				}
				return
					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1311z00_2028);
			}
		}

	}



/* &super->class-id */
	obj_t BGl_z62superzd2ze3classzd2idz81zzobject_toolsz00(obj_t BgL_envz00_2080,
		obj_t BgL_superz00_2081, obj_t BgL_classz00_2082)
	{
		{	/* Object/tools.scm 67 */
			return
				BGl_superzd2ze3classzd2idze3zzobject_toolsz00(BgL_superz00_2081,
				BgL_classz00_2082);
		}

	}



/* make-class-ref */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2refz00zzobject_toolsz00(BgL_typez00_bglt BgL_typez00_10,
		BgL_slotz00_bglt BgL_slotz00_11, obj_t BgL_objz00_12)
	{
		{	/* Object/tools.scm 73 */
			{	/* Object/tools.scm 74 */
				obj_t BgL_klassz00_1708;

				BgL_klassz00_1708 =
					(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_11))->BgL_classzd2ownerzd2);
				{	/* Object/tools.scm 74 */
					obj_t BgL_wideningz00_1709;

					if (BGl_isazf3zf3zz__objectz00(BgL_klassz00_1708,
							BGl_tclassz00zzobject_classz00))
						{
							BgL_tclassz00_bglt BgL_auxz00_2186;

							{
								obj_t BgL_auxz00_2187;

								{	/* Object/tools.scm 75 */
									BgL_objectz00_bglt BgL_tmpz00_2188;

									BgL_tmpz00_2188 =
										((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_klassz00_1708));
									BgL_auxz00_2187 = BGL_OBJECT_WIDENING(BgL_tmpz00_2188);
								}
								BgL_auxz00_2186 = ((BgL_tclassz00_bglt) BgL_auxz00_2187);
							}
							BgL_wideningz00_1709 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2186))->
								BgL_wideningz00);
						}
					else
						{	/* Object/tools.scm 75 */
							BgL_wideningz00_1709 = BFALSE;
						}
					{	/* Object/tools.scm 75 */

						if (CBOOL(BgL_wideningz00_1709))
							{	/* Object/tools.scm 78 */
								obj_t BgL_arg1315z00_1710;
								obj_t BgL_arg1316z00_1711;

								{
									BgL_tclassz00_bglt BgL_auxz00_2196;

									{
										obj_t BgL_auxz00_2197;

										{	/* Object/tools.scm 78 */
											BgL_objectz00_bglt BgL_tmpz00_2198;

											BgL_tmpz00_2198 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_typez00_10));
											BgL_auxz00_2197 = BGL_OBJECT_WIDENING(BgL_tmpz00_2198);
										}
										BgL_auxz00_2196 = ((BgL_tclassz00_bglt) BgL_auxz00_2197);
									}
									BgL_arg1315z00_1710 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2196))->
										BgL_widezd2typezd2);
								}
								{	/* Object/tools.scm 78 */
									obj_t BgL_arg1317z00_1712;

									BgL_arg1317z00_1712 = MAKE_YOUNG_PAIR(BgL_objz00_12, BNIL);
									BgL_arg1316z00_1711 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
										BgL_arg1317z00_1712);
								}
								return
									BGl_makezd2directzd2refz00zzobject_toolsz00
									(BgL_arg1315z00_1710, BgL_slotz00_11, BgL_arg1316z00_1711);
							}
						else
							{	/* Object/tools.scm 76 */
								return
									BGl_makezd2directzd2refz00zzobject_toolsz00(
									((obj_t) BgL_typez00_10), BgL_slotz00_11, BgL_objz00_12);
							}
					}
				}
			}
		}

	}



/* &make-class-ref */
	obj_t BGl_z62makezd2classzd2refz62zzobject_toolsz00(obj_t BgL_envz00_2083,
		obj_t BgL_typez00_2084, obj_t BgL_slotz00_2085, obj_t BgL_objz00_2086)
	{
		{	/* Object/tools.scm 73 */
			return
				BGl_makezd2classzd2refz00zzobject_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_2084),
				((BgL_slotz00_bglt) BgL_slotz00_2085), BgL_objz00_2086);
		}

	}



/* make-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_13, BgL_slotz00_bglt BgL_slotz00_14, obj_t BgL_objz00_15,
		obj_t BgL_valz00_16)
	{
		{	/* Object/tools.scm 83 */
			{	/* Object/tools.scm 84 */
				obj_t BgL_klassz00_1714;

				BgL_klassz00_1714 =
					(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_14))->BgL_classzd2ownerzd2);
				{	/* Object/tools.scm 84 */
					obj_t BgL_wideningz00_1715;

					if (BGl_isazf3zf3zz__objectz00(BgL_klassz00_1714,
							BGl_tclassz00zzobject_classz00))
						{
							BgL_tclassz00_bglt BgL_auxz00_2216;

							{
								obj_t BgL_auxz00_2217;

								{	/* Object/tools.scm 85 */
									BgL_objectz00_bglt BgL_tmpz00_2218;

									BgL_tmpz00_2218 =
										((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_klassz00_1714));
									BgL_auxz00_2217 = BGL_OBJECT_WIDENING(BgL_tmpz00_2218);
								}
								BgL_auxz00_2216 = ((BgL_tclassz00_bglt) BgL_auxz00_2217);
							}
							BgL_wideningz00_1715 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2216))->
								BgL_wideningz00);
						}
					else
						{	/* Object/tools.scm 85 */
							BgL_wideningz00_1715 = BFALSE;
						}
					{	/* Object/tools.scm 85 */

						if (CBOOL(BgL_wideningz00_1715))
							{	/* Object/tools.scm 88 */
								obj_t BgL_arg1319z00_1716;
								obj_t BgL_arg1322z00_1717;

								{
									BgL_tclassz00_bglt BgL_auxz00_2226;

									{
										obj_t BgL_auxz00_2227;

										{	/* Object/tools.scm 88 */
											BgL_objectz00_bglt BgL_tmpz00_2228;

											BgL_tmpz00_2228 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_typez00_13));
											BgL_auxz00_2227 = BGL_OBJECT_WIDENING(BgL_tmpz00_2228);
										}
										BgL_auxz00_2226 = ((BgL_tclassz00_bglt) BgL_auxz00_2227);
									}
									BgL_arg1319z00_1716 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2226))->
										BgL_widezd2typezd2);
								}
								{	/* Object/tools.scm 88 */
									obj_t BgL_arg1324z00_1718;

									BgL_arg1324z00_1718 = MAKE_YOUNG_PAIR(BgL_objz00_15, BNIL);
									BgL_arg1322z00_1717 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
										BgL_arg1324z00_1718);
								}
								return
									BGl_makezd2directzd2setz12z12zzobject_toolsz00(
									((BgL_typez00_bglt) BgL_arg1319z00_1716), BgL_slotz00_14,
									BgL_arg1322z00_1717, BgL_valz00_16);
							}
						else
							{	/* Object/tools.scm 86 */
								return
									BGl_makezd2directzd2setz12z12zzobject_toolsz00(BgL_typez00_13,
									BgL_slotz00_14, BgL_objz00_15, BgL_valz00_16);
							}
					}
				}
			}
		}

	}



/* &make-class-set! */
	obj_t BGl_z62makezd2classzd2setz12z70zzobject_toolsz00(obj_t BgL_envz00_2087,
		obj_t BgL_typez00_2088, obj_t BgL_slotz00_2089, obj_t BgL_objz00_2090,
		obj_t BgL_valz00_2091)
	{
		{	/* Object/tools.scm 83 */
			return
				BGl_makezd2classzd2setz12z12zzobject_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_2088),
				((BgL_slotz00_bglt) BgL_slotz00_2089), BgL_objz00_2090,
				BgL_valz00_2091);
		}

	}



/* make-direct-ref */
	obj_t BGl_makezd2directzd2refz00zzobject_toolsz00(obj_t BgL_typez00_17,
		BgL_slotz00_bglt BgL_slotz00_18, obj_t BgL_objz00_19)
	{
		{	/* Object/tools.scm 93 */
			{	/* Object/tools.scm 94 */
				obj_t BgL_fnamez00_1720;

				BgL_fnamez00_1720 =
					(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_18))->BgL_namez00);
				{	/* Object/tools.scm 94 */
					obj_t BgL_tnamez00_1721;

					BgL_tnamez00_1721 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_typez00_17)))->BgL_namez00);
					{	/* Object/tools.scm 95 */
						obj_t BgL_fmtz00_1722;

						{	/* Object/tools.scm 96 */
							obj_t BgL_list1332z00_1730;

							{	/* Object/tools.scm 96 */
								obj_t BgL_arg1334z00_1731;

								BgL_arg1334z00_1731 = MAKE_YOUNG_PAIR(BgL_fnamez00_1720, BNIL);
								BgL_list1332z00_1730 =
									MAKE_YOUNG_PAIR(BgL_tnamez00_1721, BgL_arg1334z00_1731);
							}
							BgL_fmtz00_1722 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string1639z00zzobject_toolsz00, BgL_list1332z00_1730);
						}
						{	/* Object/tools.scm 96 */

							{	/* Object/tools.scm 98 */
								obj_t BgL_arg1325z00_1723;
								obj_t BgL_arg1326z00_1724;

								BgL_arg1325z00_1723 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt)
												(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_18))->
													BgL_typez00))))->BgL_idz00);
								BgL_arg1326z00_1724 =
									(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
												BgL_typez00_17)))->BgL_idz00);
								{	/* Object/tools.scm 97 */
									obj_t BgL_list1327z00_1725;

									{	/* Object/tools.scm 97 */
										obj_t BgL_arg1328z00_1726;

										{	/* Object/tools.scm 97 */
											obj_t BgL_arg1329z00_1727;

											{	/* Object/tools.scm 97 */
												obj_t BgL_arg1330z00_1728;

												BgL_arg1330z00_1728 =
													MAKE_YOUNG_PAIR(BgL_objz00_19, BNIL);
												BgL_arg1329z00_1727 =
													MAKE_YOUNG_PAIR(BgL_fmtz00_1722, BgL_arg1330z00_1728);
											}
											BgL_arg1328z00_1726 =
												MAKE_YOUNG_PAIR(BgL_fnamez00_1720, BgL_arg1329z00_1727);
										}
										BgL_list1327z00_1725 =
											MAKE_YOUNG_PAIR(BgL_arg1326z00_1724, BgL_arg1328z00_1726);
									}
									return
										BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF(
											((long) 5)), BgL_arg1325z00_1723, BgL_list1327z00_1725);
		}}}}}}}

	}



/* make-direct-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2directzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt
		BgL_typez00_20, BgL_slotz00_bglt BgL_slotz00_21, obj_t BgL_objz00_22,
		obj_t BgL_valz00_23)
	{
		{	/* Object/tools.scm 107 */
			{	/* Object/tools.scm 108 */
				obj_t BgL_fnamez00_1732;

				BgL_fnamez00_1732 =
					(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_21))->BgL_namez00);
				{	/* Object/tools.scm 108 */
					obj_t BgL_tnamez00_1733;

					BgL_tnamez00_1733 =
						(((BgL_typez00_bglt) COBJECT(BgL_typez00_20))->BgL_namez00);
					{	/* Object/tools.scm 109 */
						obj_t BgL_fmtz00_1734;

						{	/* Object/tools.scm 111 */
							obj_t BgL_arg1348z00_1744;

							BgL_arg1348z00_1744 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt)
											(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_21))->
												BgL_typez00))))->BgL_namez00);
							{	/* Object/tools.scm 110 */
								obj_t BgL_list1349z00_1745;

								{	/* Object/tools.scm 110 */
									obj_t BgL_arg1351z00_1746;

									{	/* Object/tools.scm 110 */
										obj_t BgL_arg1352z00_1747;

										BgL_arg1352z00_1747 =
											MAKE_YOUNG_PAIR(BgL_arg1348z00_1744, BNIL);
										BgL_arg1351z00_1746 =
											MAKE_YOUNG_PAIR(BgL_fnamez00_1732, BgL_arg1352z00_1747);
									}
									BgL_list1349z00_1745 =
										MAKE_YOUNG_PAIR(BgL_tnamez00_1733, BgL_arg1351z00_1746);
								}
								BgL_fmtz00_1734 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string1640z00zzobject_toolsz00, BgL_list1349z00_1745);
						}}
						{	/* Object/tools.scm 110 */

							{	/* Object/tools.scm 113 */
								obj_t BgL_arg1335z00_1735;
								obj_t BgL_arg1337z00_1736;
								obj_t BgL_arg1338z00_1737;

								BgL_arg1335z00_1735 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt)
												(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_21))->
													BgL_typez00))))->BgL_idz00);
								BgL_arg1337z00_1736 =
									(((BgL_typez00_bglt) COBJECT(BgL_typez00_20))->BgL_idz00);
								BgL_arg1338z00_1737 =
									(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_21))->BgL_namez00);
								{	/* Object/tools.scm 112 */
									obj_t BgL_list1339z00_1738;

									{	/* Object/tools.scm 112 */
										obj_t BgL_arg1340z00_1739;

										{	/* Object/tools.scm 112 */
											obj_t BgL_arg1344z00_1740;

											{	/* Object/tools.scm 112 */
												obj_t BgL_arg1345z00_1741;

												{	/* Object/tools.scm 112 */
													obj_t BgL_arg1346z00_1742;

													BgL_arg1346z00_1742 =
														MAKE_YOUNG_PAIR(BgL_valz00_23, BNIL);
													BgL_arg1345z00_1741 =
														MAKE_YOUNG_PAIR(BgL_objz00_22, BgL_arg1346z00_1742);
												}
												BgL_arg1344z00_1740 =
													MAKE_YOUNG_PAIR(BgL_fmtz00_1734, BgL_arg1345z00_1741);
											}
											BgL_arg1340z00_1739 =
												MAKE_YOUNG_PAIR(BgL_arg1338z00_1737,
												BgL_arg1344z00_1740);
										}
										BgL_list1339z00_1738 =
											MAKE_YOUNG_PAIR(BgL_arg1337z00_1736, BgL_arg1340z00_1739);
									}
									return
										BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF(
											((long) 6)), BgL_arg1335z00_1735, BgL_list1339z00_1738);
		}}}}}}}

	}



/* &make-direct-set! */
	obj_t BGl_z62makezd2directzd2setz12z70zzobject_toolsz00(obj_t BgL_envz00_2092,
		obj_t BgL_typez00_2093, obj_t BgL_slotz00_2094, obj_t BgL_objz00_2095,
		obj_t BgL_valz00_2096)
	{
		{	/* Object/tools.scm 107 */
			return
				BGl_makezd2directzd2setz12z12zzobject_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_2093),
				((BgL_slotz00_bglt) BgL_slotz00_2094), BgL_objz00_2095,
				BgL_valz00_2096);
		}

	}



/* find-class-slot */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2classzd2slotz00zzobject_toolsz00(BgL_typez00_bglt
		BgL_klassz00_24, obj_t BgL_idz00_25)
	{
		{	/* Object/tools.scm 122 */
		BGl_findzd2classzd2slotz00zzobject_toolsz00:
			{	/* Object/tools.scm 123 */
				obj_t BgL_g1107z00_1749;

				{
					BgL_tclassz00_bglt BgL_auxz00_2284;

					{
						obj_t BgL_auxz00_2285;

						{	/* Object/tools.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_2286;

							BgL_tmpz00_2286 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_klassz00_24));
							BgL_auxz00_2285 = BGL_OBJECT_WIDENING(BgL_tmpz00_2286);
						}
						BgL_auxz00_2284 = ((BgL_tclassz00_bglt) BgL_auxz00_2285);
					}
					BgL_g1107z00_1749 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2284))->BgL_slotsz00);
				}
				{
					obj_t BgL_slotsz00_1751;

					BgL_slotsz00_1751 = BgL_g1107z00_1749;
				BgL_zc3z04anonymousza31358ze3z87_1752:
					if (NULLP(BgL_slotsz00_1751))
						{	/* Object/tools.scm 126 */
							bool_t BgL_test1667z00_2294;

							{	/* Object/tools.scm 126 */
								obj_t BgL_tmpz00_2295;

								{
									BgL_tclassz00_bglt BgL_auxz00_2296;

									{
										obj_t BgL_auxz00_2297;

										{	/* Object/tools.scm 126 */
											BgL_objectz00_bglt BgL_tmpz00_2298;

											BgL_tmpz00_2298 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_klassz00_24));
											BgL_auxz00_2297 = BGL_OBJECT_WIDENING(BgL_tmpz00_2298);
										}
										BgL_auxz00_2296 = ((BgL_tclassz00_bglt) BgL_auxz00_2297);
									}
									BgL_tmpz00_2295 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2296))->
										BgL_wideningz00);
								}
								BgL_test1667z00_2294 = CBOOL(BgL_tmpz00_2295);
							}
							if (BgL_test1667z00_2294)
								{	/* Object/tools.scm 127 */
									obj_t BgL_arg1361z00_1755;

									{
										BgL_tclassz00_bglt BgL_auxz00_2305;

										{
											obj_t BgL_auxz00_2306;

											{	/* Object/tools.scm 127 */
												BgL_objectz00_bglt BgL_tmpz00_2307;

												BgL_tmpz00_2307 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_klassz00_24));
												BgL_auxz00_2306 = BGL_OBJECT_WIDENING(BgL_tmpz00_2307);
											}
											BgL_auxz00_2305 = ((BgL_tclassz00_bglt) BgL_auxz00_2306);
										}
										BgL_arg1361z00_1755 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2305))->
											BgL_itszd2superzd2);
									}
									{
										BgL_typez00_bglt BgL_klassz00_2313;

										BgL_klassz00_2313 =
											((BgL_typez00_bglt) BgL_arg1361z00_1755);
										BgL_klassz00_24 = BgL_klassz00_2313;
										goto BGl_findzd2classzd2slotz00zzobject_toolsz00;
									}
								}
							else
								{	/* Object/tools.scm 126 */
									return BFALSE;
								}
						}
					else
						{	/* Object/tools.scm 125 */
							if (
								((((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt)
													CAR(
														((obj_t) BgL_slotsz00_1751)))))->BgL_idz00) ==
									BgL_idz00_25))
								{	/* Object/tools.scm 128 */
									return CAR(((obj_t) BgL_slotsz00_1751));
								}
							else
								{	/* Object/tools.scm 131 */
									obj_t BgL_arg1367z00_1759;

									BgL_arg1367z00_1759 = CDR(((obj_t) BgL_slotsz00_1751));
									{
										obj_t BgL_slotsz00_2325;

										BgL_slotsz00_2325 = BgL_arg1367z00_1759;
										BgL_slotsz00_1751 = BgL_slotsz00_2325;
										goto BgL_zc3z04anonymousza31358ze3z87_1752;
									}
								}
						}
				}
			}
		}

	}



/* &find-class-slot */
	obj_t BGl_z62findzd2classzd2slotz62zzobject_toolsz00(obj_t BgL_envz00_2097,
		obj_t BgL_klassz00_2098, obj_t BgL_idz00_2099)
	{
		{	/* Object/tools.scm 122 */
			return
				BGl_findzd2classzd2slotz00zzobject_toolsz00(
				((BgL_typez00_bglt) BgL_klassz00_2098), BgL_idz00_2099);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_toolsz00()
	{
		{	/* Object/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1641z00zzobject_toolsz00));
		}

	}

#ifdef __cplusplus
}
#endif
