/*===========================================================================*/
/*   (Object/coercion.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/coercion.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t);
	static obj_t BGl_z62genzd2coercionzd2clausez12z70zzobject_coercionz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(BgL_typez00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_coercionz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzobject_coercionz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_coercionz00();
	static obj_t BGl_z62genzd2classzd2coercionsz12z70zzobject_coercionz00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2classzd2coercersz12z70zzobject_coercionz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_coercionz00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t
		BGl_z62genzd2javazd2classzd2coercionsz12za2zzobject_coercionz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_coercionz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_coercionz00();
	static obj_t
		BGl_makezd2coercionzd2clausez00zzobject_coercionz00(BgL_typez00_bglt, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_makezd2onezd2coercionze70ze7zzobject_coercionz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_coercionz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_coercionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_coercionz00();
	static bool_t BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00(obj_t,
		obj_t);
	static obj_t __cnst[21];


	   
		 
		DEFINE_STRING(BGl_string1643z00zzobject_coercionz00,
		BgL_bgl_string1643za700za7za7o1654za7, "obj_t", 5);
	      DEFINE_STRING(BGl_string1644z00zzobject_coercionz00,
		BgL_bgl_string1644za700za7za7o1655za7, "(", 1);
	      DEFINE_STRING(BGl_string1645z00zzobject_coercionz00,
		BgL_bgl_string1645za700za7za7o1656za7, ")", 1);
	      DEFINE_STRING(BGl_string1646z00zzobject_coercionz00,
		BgL_bgl_string1646za700za7za7o1657za7, "object_coercion", 15);
	      DEFINE_STRING(BGl_string1647z00zzobject_coercionz00,
		BgL_bgl_string1647za700za7za7o1658za7,
		"macro pragma nesting args-safe side-effect-free no-cfa-top effect -> foreign type bool coerce @ isa? __object instanceof o lambda obj cast x ",
		141);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2coercionsz12zd2envz12zzobject_coercionz00,
		BgL_bgl_za762genza7d2javaza7d21659za7,
		BGl_z62genzd2javazd2classzd2coercionsz12za2zzobject_coercionz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2coercionsz12zd2envzc0zzobject_coercionz00,
		BgL_bgl_za762genza7d2classza7d1660za7,
		BGl_z62genzd2classzd2coercionsz12z70zzobject_coercionz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2coercionzd2clausez12zd2envzc0zzobject_coercionz00,
		BgL_bgl_za762genza7d2coercio1661z00, va_generic_entry,
		BGl_z62genzd2coercionzd2clausez12z70zzobject_coercionz00, BUNSPEC, -4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2coercersz12zd2envzc0zzobject_coercionz00,
		BgL_bgl_za762genza7d2classza7d1662za7,
		BGl_z62genzd2classzd2coercersz12z70zzobject_coercionz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_coercionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_coercionz00(long
		BgL_checksumz00_1191, char *BgL_fromz00_1192)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_coercionz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_coercionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_coercionz00();
					BGl_libraryzd2moduleszd2initz00zzobject_coercionz00();
					BGl_cnstzd2initzd2zzobject_coercionz00();
					BGl_importedzd2moduleszd2initz00zzobject_coercionz00();
					return BGl_methodzd2initzd2zzobject_coercionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_coercion");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"object_coercion");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			{	/* Object/coercion.scm 21 */
				obj_t BgL_cportz00_1178;

				{	/* Object/coercion.scm 21 */
					obj_t BgL_stringz00_1186;

					BgL_stringz00_1186 = BGl_string1647z00zzobject_coercionz00;
					{	/* Object/coercion.scm 21 */
						obj_t BgL_startz00_1187;

						BgL_startz00_1187 = BINT(((long) 0));
						{	/* Object/coercion.scm 21 */
							obj_t BgL_endz00_1188;

							BgL_endz00_1188 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1186)));
							{	/* Object/coercion.scm 21 */

								BgL_cportz00_1178 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1186, BgL_startz00_1187, BgL_endz00_1188);
				}}}}
				{
					long BgL_iz00_1179;

					BgL_iz00_1179 = ((long) 20);
				BgL_loopz00_1180:
					if ((BgL_iz00_1179 == ((long) -1)))
						{	/* Object/coercion.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/coercion.scm 21 */
							{	/* Object/coercion.scm 21 */
								obj_t BgL_arg1652z00_1182;

								{	/* Object/coercion.scm 21 */

									{	/* Object/coercion.scm 21 */
										obj_t BgL_locationz00_1184;

										BgL_locationz00_1184 = BBOOL(((bool_t) 0));
										{	/* Object/coercion.scm 21 */

											BgL_arg1652z00_1182 =
												BGl_readz00zz__readerz00(BgL_cportz00_1178,
												BgL_locationz00_1184);
										}
									}
								}
								{	/* Object/coercion.scm 21 */
									int BgL_tmpz00_1217;

									BgL_tmpz00_1217 = (int) (BgL_iz00_1179);
									CNST_TABLE_SET(BgL_tmpz00_1217, BgL_arg1652z00_1182);
							}}
							{	/* Object/coercion.scm 21 */
								int BgL_auxz00_1185;

								BgL_auxz00_1185 = (int) ((BgL_iz00_1179 - ((long) 1)));
								{
									long BgL_iz00_1222;

									BgL_iz00_1222 = (long) (BgL_auxz00_1185);
									BgL_iz00_1179 = BgL_iz00_1222;
									goto BgL_loopz00_1180;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzobject_coercionz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_787;

				BgL_headz00_787 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_788;
					obj_t BgL_tailz00_789;

					BgL_prevz00_788 = BgL_headz00_787;
					BgL_tailz00_789 = BgL_l1z00_1;
				BgL_loopz00_790:
					if (PAIRP(BgL_tailz00_789))
						{
							obj_t BgL_newzd2prevzd2_792;

							BgL_newzd2prevzd2_792 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_789), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_788, BgL_newzd2prevzd2_792);
							{
								obj_t BgL_tailz00_1232;
								obj_t BgL_prevz00_1231;

								BgL_prevz00_1231 = BgL_newzd2prevzd2_792;
								BgL_tailz00_1232 = CDR(BgL_tailz00_789);
								BgL_tailz00_789 = BgL_tailz00_1232;
								BgL_prevz00_788 = BgL_prevz00_1231;
								goto BgL_loopz00_790;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_787);
				}
			}
		}

	}



/* gen-class-coercions! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t BgL_classz00_3)
	{
		{	/* Object/coercion.scm 48 */
			{	/* Object/coercion.scm 50 */
				obj_t BgL_arg1194z00_796;
				obj_t BgL_arg1197z00_797;

				BgL_arg1194z00_796 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_classz00_3))))->BgL_idz00);
				{
					BgL_tclassz00_bglt BgL_auxz00_1238;

					{
						obj_t BgL_auxz00_1239;

						{	/* Object/coercion.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_1240;

							BgL_tmpz00_1240 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_3));
							BgL_auxz00_1239 = BGL_OBJECT_WIDENING(BgL_tmpz00_1240);
						}
						BgL_auxz00_1238 = ((BgL_tclassz00_bglt) BgL_auxz00_1239);
					}
					BgL_arg1197z00_797 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1238))->
						BgL_itszd2superzd2);
				}
				{	/* Object/coercion.scm 74 */
					obj_t BgL_arg1221z00_1114;

					BgL_arg1221z00_1114 =
						BGl_makezd2coercionzd2clausez00zzobject_coercionz00(
						((BgL_typez00_bglt) BgL_classz00_3), BgL_arg1194z00_796,
						BgL_arg1197z00_797, BNIL);
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
						(BgL_arg1221z00_1114);
				}
			}
			{	/* Object/coercion.scm 51 */
				obj_t BgL_arg1201z00_799;

				{
					BgL_tclassz00_bglt BgL_auxz00_1249;

					{
						obj_t BgL_auxz00_1250;

						{	/* Object/coercion.scm 51 */
							BgL_objectz00_bglt BgL_tmpz00_1251;

							BgL_tmpz00_1251 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_3));
							BgL_auxz00_1250 = BGL_OBJECT_WIDENING(BgL_tmpz00_1251);
						}
						BgL_auxz00_1249 = ((BgL_tclassz00_bglt) BgL_auxz00_1250);
					}
					BgL_arg1201z00_799 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1249))->
						BgL_itszd2superzd2);
				}
				{	/* Object/coercion.scm 128 */
					bool_t BgL_test1667z00_1257;

					{	/* Object/coercion.scm 128 */
						obj_t BgL_arg1357z00_1117;

						BgL_arg1357z00_1117 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_test1667z00_1257 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1357z00_1117)))->
							BgL_pragmazd2supportzd2);
					}
					if (BgL_test1667z00_1257)
						{	/* Object/coercion.scm 128 */
							return
								BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
								(BgL_classz00_3, BgL_arg1201z00_799));
						}
					else
						{	/* Object/coercion.scm 128 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &gen-class-coercions! */
	obj_t BGl_z62genzd2classzd2coercionsz12z70zzobject_coercionz00(obj_t
		BgL_envz00_1166, obj_t BgL_classz00_1167)
	{
		{	/* Object/coercion.scm 48 */
			return
				BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00
				(BgL_classz00_1167);
		}

	}



/* gen-java-class-coercions! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t
		BgL_classz00_4)
	{
		{	/* Object/coercion.scm 56 */
			{	/* Object/coercion.scm 58 */
				obj_t BgL_arg1208z00_801;
				obj_t BgL_arg1211z00_802;

				BgL_arg1208z00_801 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_classz00_4))))->BgL_idz00);
				{
					BgL_jclassz00_bglt BgL_auxz00_1267;

					{
						obj_t BgL_auxz00_1268;

						{	/* Object/coercion.scm 58 */
							BgL_objectz00_bglt BgL_tmpz00_1269;

							BgL_tmpz00_1269 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_4));
							BgL_auxz00_1268 = BGL_OBJECT_WIDENING(BgL_tmpz00_1269);
						}
						BgL_auxz00_1267 = ((BgL_jclassz00_bglt) BgL_auxz00_1268);
					}
					BgL_arg1211z00_802 =
						(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_1267))->
						BgL_itszd2superzd2);
				}
				{	/* Object/coercion.scm 74 */
					obj_t BgL_arg1221z00_1124;

					BgL_arg1221z00_1124 =
						BGl_makezd2coercionzd2clausez00zzobject_coercionz00(
						((BgL_typez00_bglt) BgL_classz00_4), BgL_arg1208z00_801,
						BgL_arg1211z00_802, BNIL);
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
						(BgL_arg1221z00_1124);
				}
			}
			{	/* Object/coercion.scm 59 */
				obj_t BgL_arg1216z00_804;

				{
					BgL_jclassz00_bglt BgL_auxz00_1278;

					{
						obj_t BgL_auxz00_1279;

						{	/* Object/coercion.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_1280;

							BgL_tmpz00_1280 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_4));
							BgL_auxz00_1279 = BGL_OBJECT_WIDENING(BgL_tmpz00_1280);
						}
						BgL_auxz00_1278 = ((BgL_jclassz00_bglt) BgL_auxz00_1279);
					}
					BgL_arg1216z00_804 =
						(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_1278))->
						BgL_itszd2superzd2);
				}
				{	/* Object/coercion.scm 128 */
					bool_t BgL_test1668z00_1286;

					{	/* Object/coercion.scm 128 */
						obj_t BgL_arg1357z00_1127;

						BgL_arg1357z00_1127 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_test1668z00_1286 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1357z00_1127)))->
							BgL_pragmazd2supportzd2);
					}
					if (BgL_test1668z00_1286)
						{	/* Object/coercion.scm 128 */
							return
								BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
								(BgL_classz00_4, BgL_arg1216z00_804));
						}
					else
						{	/* Object/coercion.scm 128 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &gen-java-class-coercions! */
	obj_t BGl_z62genzd2javazd2classzd2coercionsz12za2zzobject_coercionz00(obj_t
		BgL_envz00_1168, obj_t BgL_classz00_1169)
	{
		{	/* Object/coercion.scm 56 */
			return
				BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00
				(BgL_classz00_1169);
		}

	}



/* gen-coercion-clause! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(BgL_typez00_bglt
		BgL_classz00_5, obj_t BgL_czd2idzd2_6, obj_t BgL_superz00_7,
		obj_t BgL_testingz00_8)
	{
		{	/* Object/coercion.scm 72 */
			return
				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
				(BGl_makezd2coercionzd2clausez00zzobject_coercionz00(BgL_classz00_5,
					BgL_czd2idzd2_6, BgL_superz00_7, BgL_testingz00_8));
		}

	}



/* &gen-coercion-clause! */
	obj_t BGl_z62genzd2coercionzd2clausez12z70zzobject_coercionz00(obj_t
		BgL_envz00_1170, obj_t BgL_classz00_1171, obj_t BgL_czd2idzd2_1172,
		obj_t BgL_superz00_1173, obj_t BgL_testingz00_1174)
	{
		{	/* Object/coercion.scm 72 */
			return
				BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(
				((BgL_typez00_bglt) BgL_classz00_1171), BgL_czd2idzd2_1172,
				BgL_superz00_1173, BgL_testingz00_1174);
		}

	}



/* make-coercion-clause */
	obj_t BGl_makezd2coercionzd2clausez00zzobject_coercionz00(BgL_typez00_bglt
		BgL_classz00_9, obj_t BgL_czd2idzd2_10, obj_t BgL_superz00_11,
		obj_t BgL_testingz00_12)
	{
		{	/* Object/coercion.scm 79 */
			{	/* Object/coercion.scm 80 */
				obj_t BgL_classzd2ze3objz31_806;

				{	/* Object/coercion.scm 80 */
					obj_t BgL_arg1344z00_899;

					{	/* Object/coercion.scm 80 */
						obj_t BgL_arg1345z00_900;
						obj_t BgL_arg1346z00_901;

						BgL_arg1345z00_900 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						{	/* Object/coercion.scm 81 */
							obj_t BgL_arg1347z00_902;

							{	/* Object/coercion.scm 81 */
								obj_t BgL_list1348z00_903;

								BgL_list1348z00_903 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
								BgL_arg1347z00_902 =
									BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF((
											(long) 1)), CNST_TABLE_REF(((long) 2)),
									BgL_list1348z00_903);
							}
							BgL_arg1346z00_901 = MAKE_YOUNG_PAIR(BgL_arg1347z00_902, BNIL);
						}
						BgL_arg1344z00_899 =
							MAKE_YOUNG_PAIR(BgL_arg1345z00_900, BgL_arg1346z00_901);
					}
					BgL_classzd2ze3objz31_806 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1344z00_899);
				}
				{	/* Object/coercion.scm 80 */
					obj_t BgL_objzd2ze3classz31_807;

					{	/* Object/coercion.scm 82 */
						obj_t BgL_arg1335z00_894;

						{	/* Object/coercion.scm 82 */
							obj_t BgL_arg1337z00_895;
							obj_t BgL_arg1338z00_896;

							BgL_arg1337z00_895 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
							{	/* Object/coercion.scm 83 */
								obj_t BgL_arg1339z00_897;

								{	/* Object/coercion.scm 83 */
									obj_t BgL_list1340z00_898;

									BgL_list1340z00_898 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
									BgL_arg1339z00_897 =
										BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF(
											((long) 1)), BgL_czd2idzd2_10, BgL_list1340z00_898);
								}
								BgL_arg1338z00_896 = MAKE_YOUNG_PAIR(BgL_arg1339z00_897, BNIL);
							}
							BgL_arg1335z00_894 =
								MAKE_YOUNG_PAIR(BgL_arg1337z00_895, BgL_arg1338z00_896);
						}
						BgL_objzd2ze3classz31_807 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1335z00_894);
					}
					{	/* Object/coercion.scm 82 */
						obj_t BgL_ttestz00_808;

						if (NULLP(BgL_testingz00_12))
							{	/* Object/coercion.scm 85 */
								obj_t BgL_oz00_876;

								BgL_oz00_876 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											4)));
								{	/* Object/coercion.scm 86 */
									bool_t BgL_test1670z00_1322;

									{	/* Object/coercion.scm 86 */
										bool_t BgL_res1631z00_1133;

										BgL_res1631z00_1133 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_classz00_9), BGl_jclassz00zzobject_classz00);
										BgL_test1670z00_1322 = BgL_res1631z00_1133;
									}
									if (BgL_test1670z00_1322)
										{	/* Object/coercion.scm 87 */
											obj_t BgL_arg1314z00_878;

											{	/* Object/coercion.scm 87 */
												obj_t BgL_arg1315z00_879;

												{	/* Object/coercion.scm 87 */
													obj_t BgL_arg1316z00_880;
													obj_t BgL_arg1317z00_881;

													BgL_arg1316z00_880 =
														MAKE_YOUNG_PAIR(BgL_oz00_876, BNIL);
													{	/* Object/coercion.scm 88 */
														obj_t BgL_arg1319z00_882;

														{	/* Object/coercion.scm 88 */
															obj_t BgL_list1320z00_883;

															BgL_list1320z00_883 =
																MAKE_YOUNG_PAIR(BgL_oz00_876, BNIL);
															BgL_arg1319z00_882 =
																BGl_makezd2privatezd2sexpz00zzast_privatez00
																(CNST_TABLE_REF(((long) 5)), BgL_czd2idzd2_10,
																BgL_list1320z00_883);
														}
														BgL_arg1317z00_881 =
															MAKE_YOUNG_PAIR(BgL_arg1319z00_882, BNIL);
													}
													BgL_arg1315z00_879 =
														MAKE_YOUNG_PAIR(BgL_arg1316z00_880,
														BgL_arg1317z00_881);
												}
												BgL_arg1314z00_878 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1315z00_879);
											}
											BgL_ttestz00_808 =
												MAKE_YOUNG_PAIR(BgL_arg1314z00_878, BNIL);
										}
									else
										{	/* Object/coercion.scm 89 */
											obj_t BgL_arg1322z00_884;

											{	/* Object/coercion.scm 89 */
												obj_t BgL_arg1324z00_885;

												{	/* Object/coercion.scm 89 */
													obj_t BgL_arg1325z00_886;
													obj_t BgL_arg1326z00_887;

													BgL_arg1325z00_886 =
														MAKE_YOUNG_PAIR(BgL_oz00_876, BNIL);
													{	/* Object/coercion.scm 90 */
														obj_t BgL_arg1327z00_888;

														{	/* Object/coercion.scm 90 */
															obj_t BgL_arg1328z00_889;
															obj_t BgL_arg1329z00_890;

															{	/* Object/coercion.scm 90 */
																obj_t BgL_arg1330z00_891;

																{	/* Object/coercion.scm 90 */
																	obj_t BgL_arg1331z00_892;

																	BgL_arg1331z00_892 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																		BNIL);
																	BgL_arg1330z00_891 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																		BgL_arg1331z00_892);
																}
																BgL_arg1328z00_889 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BgL_arg1330z00_891);
															}
															{	/* Object/coercion.scm 90 */
																obj_t BgL_arg1334z00_893;

																BgL_arg1334z00_893 =
																	MAKE_YOUNG_PAIR(BgL_czd2idzd2_10, BNIL);
																BgL_arg1329z00_890 =
																	MAKE_YOUNG_PAIR(BgL_oz00_876,
																	BgL_arg1334z00_893);
															}
															BgL_arg1327z00_888 =
																MAKE_YOUNG_PAIR(BgL_arg1328z00_889,
																BgL_arg1329z00_890);
														}
														BgL_arg1326z00_887 =
															MAKE_YOUNG_PAIR(BgL_arg1327z00_888, BNIL);
													}
													BgL_arg1324z00_885 =
														MAKE_YOUNG_PAIR(BgL_arg1325z00_886,
														BgL_arg1326z00_887);
												}
												BgL_arg1322z00_884 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1324z00_885);
											}
											BgL_ttestz00_808 =
												MAKE_YOUNG_PAIR(BgL_arg1322z00_884, BNIL);
							}}}
						else
							{	/* Object/coercion.scm 84 */
								BgL_ttestz00_808 = BNIL;
							}
						{	/* Object/coercion.scm 84 */
							obj_t BgL_xz00_809;

							BgL_xz00_809 =
								BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
										0)), BgL_czd2idzd2_10);
							{	/* Object/coercion.scm 92 */

								{	/* Object/coercion.scm 93 */
									obj_t BgL_g1071z00_810;

									{	/* Object/coercion.scm 94 */
										obj_t BgL_arg1281z00_850;
										obj_t BgL_arg1282z00_851;
										obj_t BgL_arg1284z00_852;

										{	/* Object/coercion.scm 94 */
											obj_t BgL_arg1288z00_856;

											{	/* Object/coercion.scm 94 */
												obj_t BgL_arg1289z00_857;

												{	/* Object/coercion.scm 94 */
													obj_t BgL_arg1290z00_858;

													{	/* Object/coercion.scm 94 */
														obj_t BgL_arg1291z00_859;

														{	/* Object/coercion.scm 94 */
															obj_t BgL_arg1292z00_860;

															BgL_arg1292z00_860 =
																MAKE_YOUNG_PAIR(BgL_objzd2ze3classz31_807,
																BNIL);
															BgL_arg1291z00_859 =
																MAKE_YOUNG_PAIR(BgL_arg1292z00_860, BNIL);
														}
														BgL_arg1290z00_858 =
															MAKE_YOUNG_PAIR(BgL_ttestz00_808,
															BgL_arg1291z00_859);
													}
													BgL_arg1289z00_857 =
														MAKE_YOUNG_PAIR(BgL_czd2idzd2_10,
														BgL_arg1290z00_858);
												}
												BgL_arg1288z00_856 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
													BgL_arg1289z00_857);
											}
											BgL_arg1281z00_850 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
												BgL_arg1288z00_856);
										}
										{	/* Object/coercion.scm 95 */
											obj_t BgL_arg1295z00_861;

											{	/* Object/coercion.scm 95 */
												obj_t BgL_arg1296z00_862;

												{	/* Object/coercion.scm 95 */
													obj_t BgL_arg1297z00_863;

													{	/* Object/coercion.scm 95 */
														obj_t BgL_arg1298z00_864;

														{	/* Object/coercion.scm 95 */
															obj_t BgL_arg1299z00_865;

															BgL_arg1299z00_865 =
																MAKE_YOUNG_PAIR(BgL_classzd2ze3objz31_806,
																BNIL);
															BgL_arg1298z00_864 =
																MAKE_YOUNG_PAIR(BgL_arg1299z00_865, BNIL);
														}
														BgL_arg1297z00_863 =
															MAKE_YOUNG_PAIR(BNIL, BgL_arg1298z00_864);
													}
													BgL_arg1296z00_862 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
														BgL_arg1297z00_863);
												}
												BgL_arg1295z00_861 =
													MAKE_YOUNG_PAIR(BgL_czd2idzd2_10, BgL_arg1296z00_862);
											}
											BgL_arg1282z00_851 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
												BgL_arg1295z00_861);
										}
										{	/* Object/coercion.scm 96 */
											obj_t BgL_arg1300z00_866;

											{	/* Object/coercion.scm 96 */
												obj_t BgL_arg1301z00_867;

												{	/* Object/coercion.scm 96 */
													obj_t BgL_arg1303z00_868;

													{	/* Object/coercion.scm 96 */
														obj_t BgL_arg1304z00_869;

														{	/* Object/coercion.scm 96 */
															obj_t BgL_arg1306z00_870;

															{	/* Object/coercion.scm 96 */
																obj_t BgL_arg1307z00_871;

																{	/* Object/coercion.scm 96 */
																	obj_t BgL_arg1308z00_872;

																	{	/* Object/coercion.scm 96 */
																		obj_t BgL_arg1309z00_873;
																		obj_t BgL_arg1310z00_874;

																		BgL_arg1309z00_873 =
																			MAKE_YOUNG_PAIR(BgL_xz00_809, BNIL);
																		BgL_arg1310z00_874 =
																			MAKE_YOUNG_PAIR(BTRUE, BNIL);
																		BgL_arg1308z00_872 =
																			MAKE_YOUNG_PAIR(BgL_arg1309z00_873,
																			BgL_arg1310z00_874);
																	}
																	BgL_arg1307z00_871 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																		BgL_arg1308z00_872);
																}
																BgL_arg1306z00_870 =
																	MAKE_YOUNG_PAIR(BgL_arg1307z00_871, BNIL);
															}
															BgL_arg1304z00_869 =
																MAKE_YOUNG_PAIR(BgL_arg1306z00_870, BNIL);
														}
														BgL_arg1303z00_868 =
															MAKE_YOUNG_PAIR(BNIL, BgL_arg1304z00_869);
													}
													BgL_arg1301z00_867 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
														BgL_arg1303z00_868);
												}
												BgL_arg1300z00_866 =
													MAKE_YOUNG_PAIR(BgL_czd2idzd2_10, BgL_arg1301z00_867);
											}
											BgL_arg1284z00_852 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
												BgL_arg1300z00_866);
										}
										{	/* Object/coercion.scm 94 */
											obj_t BgL_list1285z00_853;

											{	/* Object/coercion.scm 94 */
												obj_t BgL_arg1286z00_854;

												{	/* Object/coercion.scm 94 */
													obj_t BgL_arg1287z00_855;

													BgL_arg1287z00_855 =
														MAKE_YOUNG_PAIR(BgL_arg1284z00_852, BNIL);
													BgL_arg1286z00_854 =
														MAKE_YOUNG_PAIR(BgL_arg1282z00_851,
														BgL_arg1287z00_855);
												}
												BgL_list1285z00_853 =
													MAKE_YOUNG_PAIR(BgL_arg1281z00_850,
													BgL_arg1286z00_854);
											}
											BgL_g1071z00_810 = BgL_list1285z00_853;
									}}
									{
										obj_t BgL_superz00_812;
										obj_t BgL_coercerz00_813;

										BgL_superz00_812 = BgL_superz00_11;
										BgL_coercerz00_813 = BgL_g1071z00_810;
									BgL_zc3z04anonymousza31222ze3z87_814:
										{	/* Object/coercion.scm 97 */
											bool_t BgL_test1671z00_1383;

											if (BGl_isazf3zf3zz__objectz00(BgL_superz00_812,
													BGl_jclassz00zzobject_classz00))
												{	/* Object/coercion.scm 97 */
													BgL_test1671z00_1383 = ((bool_t) 1);
												}
											else
												{	/* Object/coercion.scm 97 */
													BgL_test1671z00_1383 =
														BGl_isazf3zf3zz__objectz00(BgL_superz00_812,
														BGl_tclassz00zzobject_classz00);
												}
											if (BgL_test1671z00_1383)
												{	/* Object/coercion.scm 99 */
													obj_t BgL_superzd2idzd2_817;

													if (BGl_isazf3zf3zz__objectz00(BgL_superz00_812,
															BGl_tclassz00zzobject_classz00))
														{	/* Object/coercion.scm 99 */
															BgL_superzd2idzd2_817 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			((BgL_typez00_bglt) BgL_superz00_812))))->
																BgL_idz00);
														}
													else
														{	/* Object/coercion.scm 99 */
															BgL_superzd2idzd2_817 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			((BgL_typez00_bglt) BgL_superz00_812))))->
																BgL_idz00);
														}
													{	/* Object/coercion.scm 99 */
														obj_t BgL_classzd2ze3superz31_818;

														{	/* Object/coercion.scm 102 */
															obj_t BgL_arg1273z00_841;

															{	/* Object/coercion.scm 102 */
																obj_t BgL_arg1274z00_842;
																obj_t BgL_arg1275z00_843;

																BgL_arg1274z00_842 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																	BNIL);
																{	/* Object/coercion.scm 103 */
																	obj_t BgL_arg1276z00_844;

																	{	/* Object/coercion.scm 103 */
																		obj_t BgL_list1277z00_845;

																		BgL_list1277z00_845 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BNIL);
																		BgL_arg1276z00_844 =
																			BGl_makezd2privatezd2sexpz00zzast_privatez00
																			(CNST_TABLE_REF(((long) 1)),
																			BgL_superzd2idzd2_817,
																			BgL_list1277z00_845);
																	}
																	BgL_arg1275z00_843 =
																		MAKE_YOUNG_PAIR(BgL_arg1276z00_844, BNIL);
																}
																BgL_arg1273z00_841 =
																	MAKE_YOUNG_PAIR(BgL_arg1274z00_842,
																	BgL_arg1275z00_843);
															}
															BgL_classzd2ze3superz31_818 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																BgL_arg1273z00_841);
														}
														{	/* Object/coercion.scm 102 */
															obj_t BgL_superzd2ze3classz31_819;

															{	/* Object/coercion.scm 104 */
																obj_t BgL_arg1263z00_836;

																{	/* Object/coercion.scm 104 */
																	obj_t BgL_arg1268z00_837;
																	obj_t BgL_arg1270z00_838;

																	BgL_arg1268z00_837 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																		BNIL);
																	{	/* Object/coercion.scm 105 */
																		obj_t BgL_arg1271z00_839;

																		{	/* Object/coercion.scm 105 */
																			obj_t BgL_list1272z00_840;

																			BgL_list1272z00_840 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						0)), BNIL);
																			BgL_arg1271z00_839 =
																				BGl_makezd2privatezd2sexpz00zzast_privatez00
																				(CNST_TABLE_REF(((long) 1)),
																				BgL_czd2idzd2_10, BgL_list1272z00_840);
																		}
																		BgL_arg1270z00_838 =
																			MAKE_YOUNG_PAIR(BgL_arg1271z00_839, BNIL);
																	}
																	BgL_arg1263z00_836 =
																		MAKE_YOUNG_PAIR(BgL_arg1268z00_837,
																		BgL_arg1270z00_838);
																}
																BgL_superzd2ze3classz31_819 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																	BgL_arg1263z00_836);
															}
															{	/* Object/coercion.scm 104 */

																{	/* Object/coercion.scm 106 */
																	obj_t BgL_arg1227z00_820;
																	obj_t BgL_arg1229z00_821;

																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_superz00_812,
																			BGl_tclassz00zzobject_classz00))
																		{
																			BgL_tclassz00_bglt BgL_auxz00_1417;

																			{
																				obj_t BgL_auxz00_1418;

																				{	/* Object/coercion.scm 107 */
																					BgL_objectz00_bglt BgL_tmpz00_1419;

																					BgL_tmpz00_1419 =
																						((BgL_objectz00_bglt)
																						((BgL_typez00_bglt)
																							BgL_superz00_812));
																					BgL_auxz00_1418 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1419);
																				}
																				BgL_auxz00_1417 =
																					((BgL_tclassz00_bglt)
																					BgL_auxz00_1418);
																			}
																			BgL_arg1227z00_820 =
																				(((BgL_tclassz00_bglt)
																					COBJECT(BgL_auxz00_1417))->
																				BgL_itszd2superzd2);
																		}
																	else
																		{
																			BgL_jclassz00_bglt BgL_auxz00_1425;

																			{
																				obj_t BgL_auxz00_1426;

																				{	/* Object/coercion.scm 108 */
																					BgL_objectz00_bglt BgL_tmpz00_1427;

																					BgL_tmpz00_1427 =
																						((BgL_objectz00_bglt)
																						((BgL_typez00_bglt)
																							BgL_superz00_812));
																					BgL_auxz00_1426 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1427);
																				}
																				BgL_auxz00_1425 =
																					((BgL_jclassz00_bglt)
																					BgL_auxz00_1426);
																			}
																			BgL_arg1227z00_820 =
																				(((BgL_jclassz00_bglt)
																					COBJECT(BgL_auxz00_1425))->
																				BgL_itszd2superzd2);
																		}
																	{	/* Object/coercion.scm 109 */
																		obj_t BgL_arg1232z00_823;
																		obj_t BgL_arg1239z00_824;

																		{	/* Object/coercion.scm 109 */
																			obj_t BgL_arg1242z00_825;

																			{	/* Object/coercion.scm 109 */
																				obj_t BgL_arg1243z00_826;

																				{	/* Object/coercion.scm 109 */
																					obj_t BgL_arg1245z00_827;

																					{	/* Object/coercion.scm 109 */
																						obj_t BgL_arg1246z00_828;

																						{	/* Object/coercion.scm 109 */
																							obj_t BgL_arg1247z00_829;

																							BgL_arg1247z00_829 =
																								MAKE_YOUNG_PAIR
																								(BgL_superzd2ze3classz31_819,
																								BNIL);
																							BgL_arg1246z00_828 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1247z00_829, BNIL);
																						}
																						BgL_arg1245z00_827 =
																							MAKE_YOUNG_PAIR(BgL_ttestz00_808,
																							BgL_arg1246z00_828);
																					}
																					BgL_arg1243z00_826 =
																						MAKE_YOUNG_PAIR(BgL_czd2idzd2_10,
																						BgL_arg1245z00_827);
																				}
																				BgL_arg1242z00_825 =
																					MAKE_YOUNG_PAIR(BgL_superzd2idzd2_817,
																					BgL_arg1243z00_826);
																			}
																			BgL_arg1232z00_823 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						9)), BgL_arg1242z00_825);
																		}
																		{	/* Object/coercion.scm 110 */
																			obj_t BgL_arg1250z00_830;

																			{	/* Object/coercion.scm 110 */
																				obj_t BgL_arg1252z00_831;

																				{	/* Object/coercion.scm 110 */
																					obj_t BgL_arg1253z00_832;

																					{	/* Object/coercion.scm 110 */
																						obj_t BgL_arg1254z00_833;

																						{	/* Object/coercion.scm 110 */
																							obj_t BgL_arg1256z00_834;

																							{	/* Object/coercion.scm 110 */
																								obj_t BgL_arg1258z00_835;

																								BgL_arg1258z00_835 =
																									MAKE_YOUNG_PAIR
																									(BgL_classzd2ze3superz31_818,
																									BNIL);
																								BgL_arg1256z00_834 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1258z00_835, BNIL);
																							}
																							BgL_arg1254z00_833 =
																								MAKE_YOUNG_PAIR(BNIL,
																								BgL_arg1256z00_834);
																						}
																						BgL_arg1253z00_832 =
																							MAKE_YOUNG_PAIR
																							(BgL_superzd2idzd2_817,
																							BgL_arg1254z00_833);
																					}
																					BgL_arg1252z00_831 =
																						MAKE_YOUNG_PAIR(BgL_czd2idzd2_10,
																						BgL_arg1253z00_832);
																				}
																				BgL_arg1250z00_830 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							9)), BgL_arg1252z00_831);
																			}
																			BgL_arg1239z00_824 =
																				MAKE_YOUNG_PAIR(BgL_arg1250z00_830,
																				BgL_coercerz00_813);
																		}
																		BgL_arg1229z00_821 =
																			MAKE_YOUNG_PAIR(BgL_arg1232z00_823,
																			BgL_arg1239z00_824);
																	}
																	{
																		obj_t BgL_coercerz00_1450;
																		obj_t BgL_superz00_1449;

																		BgL_superz00_1449 = BgL_arg1227z00_820;
																		BgL_coercerz00_1450 = BgL_arg1229z00_821;
																		BgL_coercerz00_813 = BgL_coercerz00_1450;
																		BgL_superz00_812 = BgL_superz00_1449;
																		goto BgL_zc3z04anonymousza31222ze3z87_814;
																	}
																}
															}
														}
													}
												}
											else
												{	/* Object/coercion.scm 98 */
													obj_t BgL_arg1280z00_847;

													BgL_arg1280z00_847 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_coercerz00_813, BNIL);
													return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
														BgL_arg1280z00_847);
		}}}}}}}}}}

	}



/* gen-class-coercers! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t BgL_classz00_13,
		obj_t BgL_superz00_14)
	{
		{	/* Object/coercion.scm 127 */
			{	/* Object/coercion.scm 128 */
				bool_t BgL_test1675z00_1454;

				{	/* Object/coercion.scm 128 */
					obj_t BgL_arg1357z00_1146;

					BgL_arg1357z00_1146 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_test1675z00_1454 =
						(((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_arg1357z00_1146)))->
						BgL_pragmazd2supportzd2);
				}
				if (BgL_test1675z00_1454)
					{	/* Object/coercion.scm 128 */
						return
							BBOOL(BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00
							(BgL_classz00_13, BgL_superz00_14));
					}
				else
					{	/* Object/coercion.scm 128 */
						return BFALSE;
					}
			}
		}

	}



/* &gen-class-coercers! */
	obj_t BGl_z62genzd2classzd2coercersz12z70zzobject_coercionz00(obj_t
		BgL_envz00_1175, obj_t BgL_classz00_1176, obj_t BgL_superz00_1177)
	{
		{	/* Object/coercion.scm 127 */
			return
				BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(BgL_classz00_1176,
				BgL_superz00_1177);
		}

	}



/* c-gen-class-coercers! */
	bool_t BGl_czd2genzd2classzd2coercersz12zc0zzobject_coercionz00(obj_t
		BgL_classz00_15, obj_t BgL_superz00_16)
	{
		{	/* Object/coercion.scm 134 */
			{	/* Object/coercion.scm 144 */
				obj_t BgL_tidz00_908;
				obj_t BgL_tnamez00_909;

				BgL_tidz00_908 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_15)))->BgL_idz00);
				BgL_tnamez00_909 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_15)))->BgL_namez00);
				{	/* Object/coercion.scm 146 */
					obj_t BgL_pragz00_910;

					BgL_pragz00_910 =
						BGl_makezd2onezd2coercionze70ze7zzobject_coercionz00(BgL_tidz00_908,
						BgL_tnamez00_909, CNST_TABLE_REF(((long) 2)),
						BGl_string1643z00zzobject_coercionz00);
					{	/* Object/coercion.scm 147 */
						obj_t BgL_coercersz00_911;

						{	/* Object/coercion.scm 148 */
							int BgL_tmpz00_1467;

							BgL_tmpz00_1467 = (int) (((long) 1));
							BgL_coercersz00_911 = BGL_MVALUES_VAL(BgL_tmpz00_1467);
						}
						{	/* Object/coercion.scm 148 */
							obj_t BgL_g1072z00_912;

							{	/* Object/coercion.scm 150 */
								obj_t BgL_list1383z00_936;

								BgL_list1383z00_936 = MAKE_YOUNG_PAIR(BgL_pragz00_910, BNIL);
								BgL_g1072z00_912 = BgL_list1383z00_936;
							}
							{
								obj_t BgL_superz00_914;
								obj_t BgL_coercersz00_915;
								obj_t BgL_pragmasz00_916;

								BgL_superz00_914 = BgL_superz00_16;
								BgL_coercersz00_915 = BgL_coercersz00_911;
								BgL_pragmasz00_916 = BgL_g1072z00_912;
							BgL_zc3z04anonymousza31358ze3z87_917:
								if (BGl_isazf3zf3zz__objectz00(BgL_superz00_914,
										BGl_tclassz00zzobject_classz00))
									{	/* Object/coercion.scm 155 */
										obj_t BgL_sidz00_919;
										obj_t BgL_snamez00_920;

										BgL_sidz00_919 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														((BgL_typez00_bglt) BgL_superz00_914))))->
											BgL_idz00);
										BgL_snamez00_920 =
											(((BgL_typez00_bglt)
												COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
															BgL_superz00_914))))->BgL_namez00);
										{	/* Object/coercion.scm 157 */
											obj_t BgL_pragz00_921;

											BgL_pragz00_921 =
												BGl_makezd2onezd2coercionze70ze7zzobject_coercionz00
												(BgL_tidz00_908, BgL_tnamez00_909, BgL_sidz00_919,
												BgL_snamez00_920);
											{	/* Object/coercion.scm 158 */
												obj_t BgL_coercsz00_922;

												{	/* Object/coercion.scm 159 */
													int BgL_tmpz00_1480;

													BgL_tmpz00_1480 = (int) (((long) 1));
													BgL_coercsz00_922 = BGL_MVALUES_VAL(BgL_tmpz00_1480);
												}
												{	/* Object/coercion.scm 159 */
													obj_t BgL_arg1360z00_923;
													obj_t BgL_arg1361z00_924;
													obj_t BgL_arg1363z00_925;

													{
														BgL_tclassz00_bglt BgL_auxz00_1483;

														{
															obj_t BgL_auxz00_1484;

															{	/* Object/coercion.scm 159 */
																BgL_objectz00_bglt BgL_tmpz00_1485;

																BgL_tmpz00_1485 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_superz00_914));
																BgL_auxz00_1484 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_1485);
															}
															BgL_auxz00_1483 =
																((BgL_tclassz00_bglt) BgL_auxz00_1484);
														}
														BgL_arg1360z00_923 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1483))->
															BgL_itszd2superzd2);
													}
													BgL_arg1361z00_924 =
														BGl_appendzd221011zd2zzobject_coercionz00
														(BgL_coercsz00_922, BgL_coercersz00_915);
													BgL_arg1363z00_925 =
														MAKE_YOUNG_PAIR(BgL_pragz00_921,
														BgL_pragmasz00_916);
													{
														obj_t BgL_pragmasz00_1495;
														obj_t BgL_coercersz00_1494;
														obj_t BgL_superz00_1493;

														BgL_superz00_1493 = BgL_arg1360z00_923;
														BgL_coercersz00_1494 = BgL_arg1361z00_924;
														BgL_pragmasz00_1495 = BgL_arg1363z00_925;
														BgL_pragmasz00_916 = BgL_pragmasz00_1495;
														BgL_coercersz00_915 = BgL_coercersz00_1494;
														BgL_superz00_914 = BgL_superz00_1493;
														goto BgL_zc3z04anonymousza31358ze3z87_917;
													}
												}
											}
										}
									}
								else
									{	/* Object/coercion.scm 151 */
										{	/* Object/coercion.scm 153 */
											obj_t BgL_arg1364z00_926;

											{	/* Object/coercion.scm 153 */
												obj_t BgL_arg1367z00_927;

												BgL_arg1367z00_927 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_coercersz00_915, BNIL);
												BgL_arg1364z00_926 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
													BgL_arg1367z00_927);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg1364z00_926);
										}
										{
											obj_t BgL_l1178z00_929;

											BgL_l1178z00_929 = BgL_pragmasz00_916;
										BgL_zc3z04anonymousza31368ze3z87_930:
											if (PAIRP(BgL_l1178z00_929))
												{	/* Object/coercion.scm 154 */
													BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
														(CAR(BgL_l1178z00_929));
													{
														obj_t BgL_l1178z00_1504;

														BgL_l1178z00_1504 = CDR(BgL_l1178z00_929);
														BgL_l1178z00_929 = BgL_l1178z00_1504;
														goto BgL_zc3z04anonymousza31368ze3z87_930;
													}
												}
											else
												{	/* Object/coercion.scm 154 */
													return ((bool_t) 1);
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



/* make-one-coercion~0 */
	obj_t BGl_makezd2onezd2coercionze70ze7zzobject_coercionz00(obj_t
		BgL_fromzd2idzd2_937, obj_t BgL_fromzd2namezd2_938,
		obj_t BgL_tozd2idzd2_939, obj_t BgL_tozd2namezd2_940)
	{
		{	/* Object/coercion.scm 143 */
			{	/* Object/coercion.scm 136 */
				obj_t BgL_tzd2ze3fz31_942;
				obj_t BgL_fzd2ze3tz31_943;

				{	/* Object/coercion.scm 136 */
					obj_t BgL_list1541z00_978;

					{	/* Object/coercion.scm 136 */
						obj_t BgL_arg1552z00_979;

						{	/* Object/coercion.scm 136 */
							obj_t BgL_arg1553z00_980;

							BgL_arg1553z00_980 = MAKE_YOUNG_PAIR(BgL_fromzd2idzd2_937, BNIL);
							BgL_arg1552z00_979 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
								BgL_arg1553z00_980);
						}
						BgL_list1541z00_978 =
							MAKE_YOUNG_PAIR(BgL_tozd2idzd2_939, BgL_arg1552z00_979);
					}
					BgL_tzd2ze3fz31_942 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1541z00_978);
				}
				{	/* Object/coercion.scm 137 */
					obj_t BgL_list1554z00_981;

					{	/* Object/coercion.scm 137 */
						obj_t BgL_arg1558z00_982;

						{	/* Object/coercion.scm 137 */
							obj_t BgL_arg1561z00_983;

							BgL_arg1561z00_983 = MAKE_YOUNG_PAIR(BgL_tozd2idzd2_939, BNIL);
							BgL_arg1558z00_982 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
								BgL_arg1561z00_983);
						}
						BgL_list1554z00_981 =
							MAKE_YOUNG_PAIR(BgL_fromzd2idzd2_937, BgL_arg1558z00_982);
					}
					BgL_fzd2ze3tz31_943 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1554z00_981);
				}
				{	/* Object/coercion.scm 138 */
					obj_t BgL_val0_1176z00_944;
					obj_t BgL_val1_1177z00_945;

					{	/* Object/coercion.scm 138 */
						obj_t BgL_arg1385z00_946;

						{	/* Object/coercion.scm 138 */
							obj_t BgL_arg1386z00_947;
							obj_t BgL_arg1387z00_948;

							{	/* Object/coercion.scm 138 */
								obj_t BgL_arg1388z00_949;

								{	/* Object/coercion.scm 138 */
									obj_t BgL_arg1394z00_950;

									{	/* Object/coercion.scm 138 */
										obj_t BgL_arg1396z00_951;

										{	/* Object/coercion.scm 138 */
											obj_t BgL_arg1417z00_952;

											{	/* Object/coercion.scm 138 */
												obj_t BgL_arg1418z00_953;

												{	/* Object/coercion.scm 138 */
													obj_t BgL_arg1421z00_954;

													BgL_arg1421z00_954 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BNIL);
													BgL_arg1418z00_953 =
														MAKE_YOUNG_PAIR(BgL_arg1421z00_954, BNIL);
												}
												BgL_arg1417z00_952 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
													BgL_arg1418z00_953);
											}
											BgL_arg1396z00_951 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
												BgL_arg1417z00_952);
										}
										BgL_arg1394z00_950 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
											BgL_arg1396z00_951);
									}
									BgL_arg1388z00_949 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
										BgL_arg1394z00_950);
								}
								BgL_arg1386z00_947 =
									MAKE_YOUNG_PAIR(BgL_tzd2ze3fz31_942, BgL_arg1388z00_949);
							}
							{	/* Object/coercion.scm 139 */
								obj_t BgL_arg1422z00_955;

								{	/* Object/coercion.scm 139 */
									obj_t BgL_arg1441z00_956;

									{	/* Object/coercion.scm 139 */
										obj_t BgL_arg1442z00_957;

										{	/* Object/coercion.scm 139 */
											obj_t BgL_arg1448z00_958;

											{	/* Object/coercion.scm 139 */
												obj_t BgL_arg1449z00_959;

												{	/* Object/coercion.scm 139 */
													obj_t BgL_arg1461z00_960;

													{	/* Object/coercion.scm 139 */
														obj_t BgL_arg1462z00_961;

														BgL_arg1462z00_961 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BNIL);
														BgL_arg1461z00_960 =
															MAKE_YOUNG_PAIR(BgL_arg1462z00_961, BNIL);
													}
													BgL_arg1449z00_959 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
														BgL_arg1461z00_960);
												}
												BgL_arg1448z00_958 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
													BgL_arg1449z00_959);
											}
											BgL_arg1442z00_957 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
												BgL_arg1448z00_958);
										}
										BgL_arg1441z00_956 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
											BgL_arg1442z00_957);
									}
									BgL_arg1422z00_955 =
										MAKE_YOUNG_PAIR(BgL_fzd2ze3tz31_943, BgL_arg1441z00_956);
								}
								BgL_arg1387z00_948 = MAKE_YOUNG_PAIR(BgL_arg1422z00_955, BNIL);
							}
							BgL_arg1385z00_946 =
								MAKE_YOUNG_PAIR(BgL_arg1386z00_947, BgL_arg1387z00_948);
						}
						BgL_val0_1176z00_944 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)), BgL_arg1385z00_946);
					}
					{	/* Object/coercion.scm 140 */
						obj_t BgL_arg1464z00_962;
						obj_t BgL_arg1465z00_963;

						{	/* Object/coercion.scm 140 */
							obj_t BgL_arg1476z00_966;

							{	/* Object/coercion.scm 140 */
								obj_t BgL_arg1477z00_967;

								{	/* Object/coercion.scm 140 */
									obj_t BgL_arg1489z00_968;

									{	/* Object/coercion.scm 140 */
										obj_t BgL_arg1493z00_969;
										obj_t BgL_arg1495z00_970;

										BgL_arg1493z00_969 =
											MAKE_YOUNG_PAIR(BgL_tozd2idzd2_939, BNIL);
										BgL_arg1495z00_970 =
											MAKE_YOUNG_PAIR(string_append_3
											(BGl_string1644z00zzobject_coercionz00,
												BgL_fromzd2namezd2_938,
												BGl_string1645z00zzobject_coercionz00), BNIL);
										BgL_arg1489z00_968 =
											MAKE_YOUNG_PAIR(BgL_arg1493z00_969, BgL_arg1495z00_970);
									}
									BgL_arg1477z00_967 =
										MAKE_YOUNG_PAIR(BgL_tzd2ze3fz31_942, BgL_arg1489z00_968);
								}
								BgL_arg1476z00_966 =
									MAKE_YOUNG_PAIR(BgL_fromzd2idzd2_937, BgL_arg1477z00_967);
							}
							BgL_arg1464z00_962 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
								BgL_arg1476z00_966);
						}
						{	/* Object/coercion.scm 142 */
							obj_t BgL_arg1518z00_972;

							{	/* Object/coercion.scm 142 */
								obj_t BgL_arg1521z00_973;

								{	/* Object/coercion.scm 142 */
									obj_t BgL_arg1528z00_974;

									{	/* Object/coercion.scm 142 */
										obj_t BgL_arg1536z00_975;
										obj_t BgL_arg1537z00_976;

										BgL_arg1536z00_975 =
											MAKE_YOUNG_PAIR(BgL_fromzd2idzd2_937, BNIL);
										BgL_arg1537z00_976 =
											MAKE_YOUNG_PAIR(string_append_3
											(BGl_string1644z00zzobject_coercionz00,
												BgL_tozd2namezd2_940,
												BGl_string1645z00zzobject_coercionz00), BNIL);
										BgL_arg1528z00_974 =
											MAKE_YOUNG_PAIR(BgL_arg1536z00_975, BgL_arg1537z00_976);
									}
									BgL_arg1521z00_973 =
										MAKE_YOUNG_PAIR(BgL_fzd2ze3tz31_943, BgL_arg1528z00_974);
								}
								BgL_arg1518z00_972 =
									MAKE_YOUNG_PAIR(BgL_tozd2idzd2_939, BgL_arg1521z00_973);
							}
							BgL_arg1465z00_963 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
								BgL_arg1518z00_972);
						}
						{	/* Object/coercion.scm 140 */
							obj_t BgL_list1466z00_964;

							{	/* Object/coercion.scm 140 */
								obj_t BgL_arg1474z00_965;

								BgL_arg1474z00_965 = MAKE_YOUNG_PAIR(BgL_arg1465z00_963, BNIL);
								BgL_list1466z00_964 =
									MAKE_YOUNG_PAIR(BgL_arg1464z00_962, BgL_arg1474z00_965);
							}
							BgL_val1_1177z00_945 = BgL_list1466z00_964;
					}}
					{	/* Object/coercion.scm 138 */
						int BgL_res1639z00_1151;

						{	/* Object/coercion.scm 138 */
							int BgL_tmpz00_1562;

							BgL_tmpz00_1562 = (int) (((long) 2));
							BgL_res1639z00_1151 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1562);
						} BgL_res1639z00_1151;
					}
					{	/* Object/coercion.scm 138 */
						int BgL_tmpz00_1565;

						BgL_tmpz00_1565 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_1565, BgL_val1_1177z00_945);
					}
					return BgL_val0_1176z00_944;
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_coercionz00()
	{
		{	/* Object/coercion.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
			return
				BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1646z00zzobject_coercionz00));
		}

	}

#ifdef __cplusplus
}
#endif
