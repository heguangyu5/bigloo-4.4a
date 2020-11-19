/*===========================================================================*/
/*   (Engine/link.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/link.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62findzd2filezd2forzd2linkzb0zzengine_linkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_installzd2initialzd2expanderz00zzexpand_installz00();
	static obj_t BGl_z62unprofzd2srczd2namez62zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzengine_linkz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_z62findzd2mainzb0zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_linkz00();
	static obj_t BGl_z62linkz62zzengine_linkz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2mainzd2zzengine_linkz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzengine_linkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzengine_linkz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzengine_linkz00(obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_linkz00 = BUNSPEC;
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_linkz00();
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_register_eval_srfi(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t,
		bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62findzd2srczd2filez62zzengine_linkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_linkz00zzengine_linkz00();
	static obj_t BGl_zc3z04anonymousza31339ze3ze70z60zzengine_linkz00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_installz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzengine_linkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_linkz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_linkz00();
	extern obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00;
	static obj_t BGl_z62findzd2librarieszb0zzengine_linkz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2tmpzd2mainz62zzengine_linkz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tmpzd2mainzd2envzd2zzengine_linkz00,
		BgL_bgl_za762makeza7d2tmpza7d21606za7,
		BGl_z62makezd2tmpzd2mainz62zzengine_linkz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2srczd2filezd2envzd2zzengine_linkz00,
		BgL_bgl_za762findza7d2srcza7d21607za7,
		BGl_z62findzd2srczd2filez62zzengine_linkz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_linkzd2envzd2zzengine_linkz00,
		BgL_bgl_za762linkza762za7za7engi1608z00, BGl_z62linkz62zzengine_linkz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1600z00zzengine_linkz00,
		BgL_bgl_string1600za700za7za7e1609za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1601z00zzengine_linkz00,
		BgL_bgl_string1601za700za7za7e1610za7, "engine_link", 11);
	      DEFINE_STRING(BGl_string1602z00zzengine_linkz00,
		BgL_bgl_string1602za700za7za7e1611za7,
		"module import main cond-expand include eval library bigloo-compile ", 67);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1594z00zzengine_linkz00,
		BgL_bgl_za762za7c3za704anonymo1612za7,
		BGl_z62zc3z04anonymousza31328ze3ze5zzengine_linkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2filezd2forzd2linkzd2envz00zzengine_linkz00,
		BgL_bgl_za762findza7d2fileza7d1613za7,
		BGl_z62findzd2filezd2forzd2linkzb0zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1589z00zzengine_linkz00,
		BgL_bgl_string1589za700za7za7e1614za7, "No Bigloo module found for -- ",
		30);
	      DEFINE_STRING(BGl_string1590z00zzengine_linkz00,
		BgL_bgl_string1590za700za7za7e1615za7, "link", 4);
	      DEFINE_STRING(BGl_string1591z00zzengine_linkz00,
		BgL_bgl_string1591za700za7za7e1616za7, "'. Using file -- ", 17);
	      DEFINE_STRING(BGl_string1592z00zzengine_linkz00,
		BgL_bgl_string1592za700za7za7e1617za7,
		"Several source files found for object `", 39);
	      DEFINE_STRING(BGl_string1593z00zzengine_linkz00,
		BgL_bgl_string1593za700za7za7e1618za7, ".", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2librarieszd2envz00zzengine_linkz00,
		BgL_bgl_za762findza7d2librar1619z00,
		BGl_z62findzd2librarieszb0zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1595z00zzengine_linkz00,
		BgL_bgl_string1595za700za7za7e1620za7, ";; ", 3);
	      DEFINE_STRING(BGl_string1596z00zzengine_linkz00,
		BgL_bgl_string1596za700za7za7e1621za7,
		";; !!! generated file, don't edit !!!", 37);
	      DEFINE_STRING(BGl_string1597z00zzengine_linkz00,
		BgL_bgl_string1597za700za7za7e1622za7,
		";; ==================================", 37);
	      DEFINE_STRING(BGl_string1598z00zzengine_linkz00,
		BgL_bgl_string1598za700za7za7e1623za7, "(main *the-command-line*)", 25);
	      DEFINE_STRING(BGl_string1599z00zzengine_linkz00,
		BgL_bgl_string1599za700za7za7e1624za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unprofzd2srczd2namezd2envzd2zzengine_linkz00,
		BgL_bgl_za762unprofza7d2srcza71625za7,
		BGl_z62unprofzd2srczd2namez62zzengine_linkz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2mainzd2envz00zzengine_linkz00,
		BgL_bgl_za762findza7d2mainza7b1626za7,
		BGl_z62findzd2mainzb0zzengine_linkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzengine_linkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long
		BgL_checksumz00_633, char *BgL_fromz00_634)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_linkz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_linkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_linkz00();
					BGl_libraryzd2moduleszd2initz00zzengine_linkz00();
					BGl_cnstzd2initzd2zzengine_linkz00();
					BGl_importedzd2moduleszd2initz00zzengine_linkz00();
					return BGl_methodzd2initzd2zzengine_linkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_link");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_link");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			{	/* Engine/link.scm 20 */
				obj_t BgL_cportz00_619;

				{	/* Engine/link.scm 20 */
					obj_t BgL_stringz00_627;

					BgL_stringz00_627 = BGl_string1602z00zzengine_linkz00;
					{	/* Engine/link.scm 20 */
						obj_t BgL_startz00_628;

						BgL_startz00_628 = BINT(((long) 0));
						{	/* Engine/link.scm 20 */
							obj_t BgL_endz00_629;

							BgL_endz00_629 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_627)));
							{	/* Engine/link.scm 20 */

								BgL_cportz00_619 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_627, BgL_startz00_628, BgL_endz00_629);
				}}}}
				{
					long BgL_iz00_620;

					BgL_iz00_620 = ((long) 7);
				BgL_loopz00_621:
					if ((BgL_iz00_620 == ((long) -1)))
						{	/* Engine/link.scm 20 */
							return BUNSPEC;
						}
					else
						{	/* Engine/link.scm 20 */
							{	/* Engine/link.scm 20 */
								obj_t BgL_arg1604z00_623;

								{	/* Engine/link.scm 20 */

									{	/* Engine/link.scm 20 */
										obj_t BgL_locationz00_625;

										BgL_locationz00_625 = BBOOL(((bool_t) 0));
										{	/* Engine/link.scm 20 */

											BgL_arg1604z00_623 =
												BGl_readz00zz__readerz00(BgL_cportz00_619,
												BgL_locationz00_625);
										}
									}
								}
								{	/* Engine/link.scm 20 */
									int BgL_tmpz00_665;

									BgL_tmpz00_665 = (int) (BgL_iz00_620);
									CNST_TABLE_SET(BgL_tmpz00_665, BgL_arg1604z00_623);
							}}
							{	/* Engine/link.scm 20 */
								int BgL_auxz00_626;

								BgL_auxz00_626 = (int) ((BgL_iz00_620 - ((long) 1)));
								{
									long BgL_iz00_670;

									BgL_iz00_670 = (long) (BgL_auxz00_626);
									BgL_iz00_620 = BgL_iz00_670;
									goto BgL_loopz00_621;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzengine_linkz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_111;

				BgL_headz00_111 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_112;
					obj_t BgL_tailz00_113;

					BgL_prevz00_112 = BgL_headz00_111;
					BgL_tailz00_113 = BgL_l1z00_1;
				BgL_loopz00_114:
					if (PAIRP(BgL_tailz00_113))
						{
							obj_t BgL_newzd2prevzd2_116;

							BgL_newzd2prevzd2_116 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_113), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_112, BgL_newzd2prevzd2_116);
							{
								obj_t BgL_tailz00_680;
								obj_t BgL_prevz00_679;

								BgL_prevz00_679 = BgL_newzd2prevzd2_116;
								BgL_tailz00_680 = CDR(BgL_tailz00_113);
								BgL_tailz00_113 = BgL_tailz00_680;
								BgL_prevz00_112 = BgL_prevz00_679;
								goto BgL_loopz00_114;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_111);
				}
			}
		}

	}



/* link */
	BGL_EXPORTED_DEF obj_t BGl_linkz00zzengine_linkz00()
	{
		{	/* Engine/link.scm 43 */
			bgl_register_eval_srfi(CNST_TABLE_REF(((long) 0)));
			BGl_installzd2initialzd2expanderz00zzexpand_installz00();
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			{
				obj_t BgL_objectsz00_121;
				obj_t BgL_sourcesz00_122;

				BgL_objectsz00_121 = BGl_za2ozd2filesza2zd2zzengine_paramz00;
				BgL_sourcesz00_122 = BNIL;
			BgL_zc3z04anonymousza31125ze3z87_123:
				if (NULLP(BgL_objectsz00_121))
					{	/* Engine/link.scm 55 */
						obj_t BgL_arg1127z00_125;

						BgL_arg1127z00_125 = BGl_thezd2backendzd2zzbackend_backendz00();
						return
							BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(
							((BgL_backendz00_bglt) BgL_arg1127z00_125), BgL_sourcesz00_122);
					}
				else
					{	/* Engine/link.scm 56 */
						obj_t BgL_objectz00_126;

						BgL_objectz00_126 = CAR(((obj_t) BgL_objectsz00_121));
						{	/* Engine/link.scm 56 */
							obj_t BgL_prefz00_127;

							BgL_prefz00_127 =
								BGl_unprofzd2srczd2namez00zzengine_linkz00
								(BGl_prefixz00zz__osz00(BgL_objectz00_126));
							{	/* Engine/link.scm 57 */
								obj_t BgL_bprefz00_128;

								BgL_bprefz00_128 = BGl_basenamez00zz__osz00(BgL_prefz00_127);
								{	/* Engine/link.scm 58 */
									obj_t BgL_scmzd2filezd2_129;

									BgL_scmzd2filezd2_129 =
										BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefz00_127,
										BgL_bprefz00_128);
									{	/* Engine/link.scm 59 */

										if (STRINGP(BgL_scmzd2filezd2_129))
											{	/* Engine/link.scm 61 */
												obj_t BgL_arg1129z00_131;
												obj_t BgL_arg1133z00_132;

												BgL_arg1129z00_131 = CDR(((obj_t) BgL_objectsz00_121));
												{	/* Engine/link.scm 61 */
													obj_t BgL_arg1134z00_133;

													BgL_arg1134z00_133 =
														MAKE_YOUNG_PAIR(BgL_scmzd2filezd2_129,
														BgL_objectz00_126);
													BgL_arg1133z00_132 =
														MAKE_YOUNG_PAIR(BgL_arg1134z00_133,
														BgL_sourcesz00_122);
												}
												{
													obj_t BgL_sourcesz00_705;
													obj_t BgL_objectsz00_704;

													BgL_objectsz00_704 = BgL_arg1129z00_131;
													BgL_sourcesz00_705 = BgL_arg1133z00_132;
													BgL_sourcesz00_122 = BgL_sourcesz00_705;
													BgL_objectsz00_121 = BgL_objectsz00_704;
													goto BgL_zc3z04anonymousza31125ze3z87_123;
												}
											}
										else
											{	/* Engine/link.scm 60 */
												{	/* Engine/link.scm 63 */
													bool_t BgL_test1633z00_706;

													{	/* Engine/link.scm 63 */
														int BgL_arg1165z00_140;

														BgL_arg1165z00_140 =
															BGl_bigloozd2warningzd2zz__paramz00();
														BgL_test1633z00_706 =
															((long) (BgL_arg1165z00_140) >= ((long) 2));
													}
													if (BgL_test1633z00_706)
														{	/* Engine/link.scm 66 */
															obj_t BgL_arg1145z00_136;

															BgL_arg1145z00_136 =
																CAR(((obj_t) BgL_objectsz00_121));
															{	/* Engine/link.scm 64 */
																obj_t BgL_list1146z00_137;

																{	/* Engine/link.scm 64 */
																	obj_t BgL_arg1155z00_138;

																	{	/* Engine/link.scm 64 */
																		obj_t BgL_arg1156z00_139;

																		BgL_arg1156z00_139 =
																			MAKE_YOUNG_PAIR(BgL_arg1145z00_136, BNIL);
																		BgL_arg1155z00_138 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1589z00zzengine_linkz00,
																			BgL_arg1156z00_139);
																	}
																	BgL_list1146z00_137 =
																		MAKE_YOUNG_PAIR
																		(BGl_string1590z00zzengine_linkz00,
																		BgL_arg1155z00_138);
																}
																BGl_warningz00zz__errorz00(BgL_list1146z00_137);
															}
														}
													else
														{	/* Engine/link.scm 63 */
															BFALSE;
														}
												}
												{	/* Engine/link.scm 67 */
													obj_t BgL_arg1166z00_141;

													BgL_arg1166z00_141 =
														CDR(((obj_t) BgL_objectsz00_121));
													{
														obj_t BgL_objectsz00_718;

														BgL_objectsz00_718 = BgL_arg1166z00_141;
														BgL_objectsz00_121 = BgL_objectsz00_718;
														goto BgL_zc3z04anonymousza31125ze3z87_123;
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



/* &link */
	obj_t BGl_z62linkz62zzengine_linkz00(obj_t BgL_envz00_598)
	{
		{	/* Engine/link.scm 43 */
			return BGl_linkz00zzengine_linkz00();
		}

	}



/* unprof-src-name */
	BGL_EXPORTED_DEF obj_t BGl_unprofzd2srczd2namez00zzengine_linkz00(obj_t
		BgL_namez00_3)
	{
		{	/* Engine/link.scm 72 */
			if (CBOOL(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
				{	/* Engine/link.scm 75 */
					long BgL_lenz00_144;

					BgL_lenz00_144 = STRING_LENGTH(((obj_t) BgL_namez00_3));
					{	/* Engine/link.scm 76 */
						bool_t BgL_test1635z00_724;

						if ((BgL_lenz00_144 > ((long) 2)))
							{	/* Engine/link.scm 76 */
								if (
									(STRING_REF(
											((obj_t) BgL_namez00_3),
											(BgL_lenz00_144 - ((long) 1))) == ((unsigned char) 'p')))
									{	/* Engine/link.scm 77 */
										BgL_test1635z00_724 =
											(STRING_REF(
												((obj_t) BgL_namez00_3),
												(BgL_lenz00_144 - ((long) 2))) ==
											((unsigned char) '_'));
									}
								else
									{	/* Engine/link.scm 77 */
										BgL_test1635z00_724 = ((bool_t) 0);
									}
							}
						else
							{	/* Engine/link.scm 76 */
								BgL_test1635z00_724 = ((bool_t) 0);
							}
						if (BgL_test1635z00_724)
							{	/* Engine/link.scm 79 */
								long BgL_arg1178z00_154;

								BgL_arg1178z00_154 = (BgL_lenz00_144 - ((long) 2));
								{	/* Engine/link.scm 79 */
									obj_t BgL_res1566z00_485;

									BgL_res1566z00_485 =
										c_substring(
										((obj_t) BgL_namez00_3), ((long) 0), BgL_arg1178z00_154);
									return BgL_res1566z00_485;
								}
							}
						else
							{	/* Engine/link.scm 76 */
								return BgL_namez00_3;
							}
					}
				}
			else
				{	/* Engine/link.scm 73 */
					return BgL_namez00_3;
				}
		}

	}



/* &unprof-src-name */
	obj_t BGl_z62unprofzd2srczd2namez62zzengine_linkz00(obj_t BgL_envz00_599,
		obj_t BgL_namez00_600)
	{
		{	/* Engine/link.scm 72 */
			return BGl_unprofzd2srczd2namez00zzengine_linkz00(BgL_namez00_600);
		}

	}



/* find-file-for-link */
	BGL_EXPORTED_DEF obj_t BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(obj_t
		BgL_filez00_4)
	{
		{	/* Engine/link.scm 85 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_4)))
				{	/* Engine/link.scm 86 */
					return BgL_filez00_4;
				}
			else
				{	/* Engine/link.scm 86 */
					return
						BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_4,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
				}
		}

	}



/* &find-file-for-link */
	obj_t BGl_z62findzd2filezd2forzd2linkzb0zzengine_linkz00(obj_t BgL_envz00_601,
		obj_t BgL_filez00_602)
	{
		{	/* Engine/link.scm 85 */
			return BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(BgL_filez00_602);
		}

	}



/* find-src-file */
	BGL_EXPORTED_DEF obj_t BGl_findzd2srczd2filez00zzengine_linkz00(obj_t
		BgL_prefixz00_5, obj_t BgL_bnamez00_6)
	{
		{	/* Engine/link.scm 93 */
			{
				obj_t BgL_suffixz00_164;
				obj_t BgL_filesz00_165;

				BgL_suffixz00_164 = BGl_za2srczd2suffixza2zd2zzengine_paramz00;
				BgL_filesz00_165 = BNIL;
			BgL_zc3z04anonymousza31196ze3z87_166:
				if (NULLP(BgL_suffixz00_164))
					{	/* Engine/link.scm 96 */
						if (NULLP(BgL_filesz00_165))
							{	/* Engine/link.scm 98 */
								return BFALSE;
							}
						else
							{	/* Engine/link.scm 98 */
								if (NULLP(CDR(BgL_filesz00_165)))
									{	/* Engine/link.scm 100 */
										return CAR(BgL_filesz00_165);
									}
								else
									{	/* Engine/link.scm 100 */
										{	/* Engine/link.scm 104 */
											obj_t BgL_arg1208z00_171;

											BgL_arg1208z00_171 = CAR(BgL_filesz00_165);
											{	/* Engine/link.scm 103 */
												obj_t BgL_list1209z00_172;

												{	/* Engine/link.scm 103 */
													obj_t BgL_arg1211z00_173;

													{	/* Engine/link.scm 103 */
														obj_t BgL_arg1216z00_174;

														{	/* Engine/link.scm 103 */
															obj_t BgL_arg1221z00_175;

															{	/* Engine/link.scm 103 */
																obj_t BgL_arg1223z00_176;

																BgL_arg1223z00_176 =
																	MAKE_YOUNG_PAIR(BgL_arg1208z00_171, BNIL);
																BgL_arg1221z00_175 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1591z00zzengine_linkz00,
																	BgL_arg1223z00_176);
															}
															BgL_arg1216z00_174 =
																MAKE_YOUNG_PAIR(BgL_bnamez00_6,
																BgL_arg1221z00_175);
														}
														BgL_arg1211z00_173 =
															MAKE_YOUNG_PAIR(BGl_string1592z00zzengine_linkz00,
															BgL_arg1216z00_174);
													}
													BgL_list1209z00_172 =
														MAKE_YOUNG_PAIR(BGl_string1590z00zzengine_linkz00,
														BgL_arg1211z00_173);
												}
												BGl_warningz00zz__errorz00(BgL_list1209z00_172);
											}
										}
										return CAR(BgL_filesz00_165);
									}
							}
					}
				else
					{	/* Engine/link.scm 106 */
						obj_t BgL_sufz00_178;

						BgL_sufz00_178 = CAR(((obj_t) BgL_suffixz00_164));
						{	/* Engine/link.scm 106 */
							obj_t BgL_fz00_179;

							BgL_fz00_179 =
								BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00(string_append_3
								(BgL_prefixz00_5, BGl_string1593z00zzengine_linkz00,
									BgL_sufz00_178));
							{	/* Engine/link.scm 107 */

								if (STRINGP(BgL_fz00_179))
									{	/* Engine/link.scm 109 */
										obj_t BgL_arg1227z00_181;
										obj_t BgL_arg1229z00_182;

										BgL_arg1227z00_181 = CDR(((obj_t) BgL_suffixz00_164));
										BgL_arg1229z00_182 =
											MAKE_YOUNG_PAIR(BgL_fz00_179, BgL_filesz00_165);
										{
											obj_t BgL_filesz00_771;
											obj_t BgL_suffixz00_770;

											BgL_suffixz00_770 = BgL_arg1227z00_181;
											BgL_filesz00_771 = BgL_arg1229z00_182;
											BgL_filesz00_165 = BgL_filesz00_771;
											BgL_suffixz00_164 = BgL_suffixz00_770;
											goto BgL_zc3z04anonymousza31196ze3z87_166;
										}
									}
								else
									{	/* Engine/link.scm 110 */
										obj_t BgL_fz00_183;

										BgL_fz00_183 =
											BGl_findzd2filezd2forzd2linkzd2zzengine_linkz00
											(string_append_3(BgL_bnamez00_6,
												BGl_string1593z00zzengine_linkz00, BgL_sufz00_178));
										if (STRINGP(BgL_fz00_183))
											{	/* Engine/link.scm 112 */
												obj_t BgL_arg1232z00_185;
												obj_t BgL_arg1239z00_186;

												BgL_arg1232z00_185 = CDR(((obj_t) BgL_suffixz00_164));
												BgL_arg1239z00_186 =
													MAKE_YOUNG_PAIR(BgL_fz00_183, BgL_filesz00_165);
												{
													obj_t BgL_filesz00_780;
													obj_t BgL_suffixz00_779;

													BgL_suffixz00_779 = BgL_arg1232z00_185;
													BgL_filesz00_780 = BgL_arg1239z00_186;
													BgL_filesz00_165 = BgL_filesz00_780;
													BgL_suffixz00_164 = BgL_suffixz00_779;
													goto BgL_zc3z04anonymousza31196ze3z87_166;
												}
											}
										else
											{	/* Engine/link.scm 113 */
												obj_t BgL_arg1242z00_187;

												BgL_arg1242z00_187 = CDR(((obj_t) BgL_suffixz00_164));
												{
													obj_t BgL_suffixz00_783;

													BgL_suffixz00_783 = BgL_arg1242z00_187;
													BgL_suffixz00_164 = BgL_suffixz00_783;
													goto BgL_zc3z04anonymousza31196ze3z87_166;
												}
											}
									}
							}
						}
					}
			}
		}

	}



/* &find-src-file */
	obj_t BGl_z62findzd2srczd2filez62zzengine_linkz00(obj_t BgL_envz00_603,
		obj_t BgL_prefixz00_604, obj_t BgL_bnamez00_605)
	{
		{	/* Engine/link.scm 93 */
			return
				BGl_findzd2srczd2filez00zzengine_linkz00(BgL_prefixz00_604,
				BgL_bnamez00_605);
		}

	}



/* find-libraries */
	BGL_EXPORTED_DEF obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t
		BgL_clausesz00_7)
	{
		{	/* Engine/link.scm 118 */
			return BGl_loopze70ze7zzengine_linkz00(BgL_clausesz00_7, BNIL);
		}

	}



/* <@anonymous:1339>~0 */
	obj_t BGl_zc3z04anonymousza31339ze3ze70z60zzengine_linkz00(obj_t
		BgL_l1114z00_297)
	{
		{	/* Engine/link.scm 134 */
			if (NULLP(BgL_l1114z00_297))
				{	/* Engine/link.scm 134 */
					return BNIL;
				}
			else
				{	/* Engine/link.scm 135 */
					obj_t BgL_arg1344z00_300;
					obj_t BgL_arg1345z00_301;

					{	/* Engine/link.scm 135 */
						obj_t BgL_includez00_302;

						BgL_includez00_302 = CAR(((obj_t) BgL_l1114z00_297));
						BgL_arg1344z00_300 =
							BGl_readzd2directiveszd2zzread_includez00(BgL_includez00_302);
					}
					{	/* Engine/link.scm 134 */
						obj_t BgL_arg1346z00_303;

						BgL_arg1346z00_303 = CDR(((obj_t) BgL_l1114z00_297));
						BgL_arg1345z00_301 =
							BGl_zc3z04anonymousza31339ze3ze70z60zzengine_linkz00
							(BgL_arg1346z00_303);
					}
					return bgl_append2(BgL_arg1344z00_300, BgL_arg1345z00_301);
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzengine_linkz00(obj_t BgL_clausesz00_193,
		obj_t BgL_librariesz00_194)
	{
		{	/* Engine/link.scm 119 */
		BGl_loopze70ze7zzengine_linkz00:
			{
				obj_t BgL_evclausesz00_201;
				obj_t BgL_restz00_202;
				obj_t BgL_includesz00_204;
				obj_t BgL_restz00_205;
				obj_t BgL_restz00_207;

				if (NULLP(BgL_clausesz00_193))
					{	/* Engine/link.scm 119 */
						return bgl_reverse_bang(BgL_librariesz00_194);
					}
				else
					{	/* Engine/link.scm 119 */
						if (PAIRP(BgL_clausesz00_193))
							{	/* Engine/link.scm 119 */
								obj_t BgL_carzd2121zd2_213;

								BgL_carzd2121zd2_213 = CAR(BgL_clausesz00_193);
								if (PAIRP(BgL_carzd2121zd2_213))
									{	/* Engine/link.scm 119 */
										if (
											(CAR(BgL_carzd2121zd2_213) == CNST_TABLE_REF(((long) 1))))
											{	/* Engine/link.scm 119 */
												obj_t BgL_arg1253z00_218;

												BgL_arg1253z00_218 = CDR(BgL_clausesz00_193);
												{	/* Engine/link.scm 125 */
													obj_t BgL_arg1324z00_520;

													BgL_arg1324z00_520 =
														MAKE_YOUNG_PAIR(BgL_carzd2121zd2_213,
														BgL_librariesz00_194);
													{
														obj_t BgL_librariesz00_810;
														obj_t BgL_clausesz00_809;

														BgL_clausesz00_809 = BgL_arg1253z00_218;
														BgL_librariesz00_810 = BgL_arg1324z00_520;
														BgL_librariesz00_194 = BgL_librariesz00_810;
														BgL_clausesz00_193 = BgL_clausesz00_809;
														goto BGl_loopze70ze7zzengine_linkz00;
													}
												}
											}
										else
											{	/* Engine/link.scm 119 */
												if (
													(CAR(
															((obj_t) BgL_carzd2121zd2_213)) ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Engine/link.scm 119 */
														obj_t BgL_arg1256z00_222;
														obj_t BgL_arg1258z00_223;

														BgL_arg1256z00_222 =
															CDR(((obj_t) BgL_carzd2121zd2_213));
														BgL_arg1258z00_223 = CDR(BgL_clausesz00_193);
														BgL_evclausesz00_201 = BgL_arg1256z00_222;
														BgL_restz00_202 = BgL_arg1258z00_223;
														{	/* Engine/link.scm 127 */
															obj_t BgL_evlibsz00_277;

															{	/* Engine/link.scm 127 */
																obj_t BgL_list1327z00_280;

																BgL_list1327z00_280 =
																	MAKE_YOUNG_PAIR(BgL_evclausesz00_201, BNIL);
																BgL_evlibsz00_277 =
																	BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																	(BGl_proc1594z00zzengine_linkz00,
																	BgL_list1327z00_280);
															}
															{
																obj_t BgL_librariesz00_822;
																obj_t BgL_clausesz00_821;

																BgL_clausesz00_821 = BgL_restz00_202;
																BgL_librariesz00_822 =
																	BGl_appendzd221011zd2zzengine_linkz00
																	(BgL_evlibsz00_277, BgL_librariesz00_194);
																BgL_librariesz00_194 = BgL_librariesz00_822;
																BgL_clausesz00_193 = BgL_clausesz00_821;
																goto BGl_loopze70ze7zzengine_linkz00;
															}
														}
													}
												else
													{	/* Engine/link.scm 119 */
														obj_t BgL_carzd2148zd2_224;

														BgL_carzd2148zd2_224 = CAR(BgL_clausesz00_193);
														if (
															(CAR(
																	((obj_t) BgL_carzd2148zd2_224)) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Engine/link.scm 119 */
																obj_t BgL_arg1268z00_227;
																obj_t BgL_arg1270z00_228;

																BgL_arg1268z00_227 =
																	CDR(((obj_t) BgL_carzd2148zd2_224));
																BgL_arg1270z00_228 = CDR(BgL_clausesz00_193);
																BgL_includesz00_204 = BgL_arg1268z00_227;
																BgL_restz00_205 = BgL_arg1270z00_228;
																{	/* Engine/link.scm 134 */
																	obj_t BgL_directivesz00_294;

																	BgL_directivesz00_294 =
																		BGl_zc3z04anonymousza31339ze3ze70z60zzengine_linkz00
																		(BgL_includesz00_204);
																	{
																		obj_t BgL_clausesz00_834;

																		BgL_clausesz00_834 =
																			BGl_appendzd221011zd2zzengine_linkz00
																			(BgL_directivesz00_294, BgL_restz00_205);
																		BgL_clausesz00_193 = BgL_clausesz00_834;
																		goto BGl_loopze70ze7zzengine_linkz00;
																	}
																}
															}
														else
															{	/* Engine/link.scm 119 */
																if (
																	(CAR(
																			((obj_t) BgL_carzd2148zd2_224)) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Engine/link.scm 119 */
																		BgL_restz00_207 = CDR(BgL_clausesz00_193);
																		{	/* Engine/link.scm 139 */
																			obj_t BgL_arg1347z00_305;
																			obj_t BgL_arg1348z00_306;

																			{	/* Engine/link.scm 139 */
																				obj_t BgL_arg1351z00_307;

																				{	/* Engine/link.scm 139 */
																					obj_t BgL_arg1357z00_309;

																					BgL_arg1357z00_309 =
																						CAR(((obj_t) BgL_clausesz00_193));
																					BgL_arg1351z00_307 =
																						BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
																						(BgL_arg1357z00_309);
																				}
																				{	/* Engine/link.scm 139 */
																					obj_t BgL_list1352z00_308;

																					BgL_list1352z00_308 =
																						MAKE_YOUNG_PAIR(BgL_arg1351z00_307,
																						BNIL);
																					BgL_arg1347z00_305 =
																						BgL_list1352z00_308;
																			}}
																			BgL_arg1348z00_306 =
																				BGl_loopze70ze7zzengine_linkz00
																				(BgL_restz00_207, BgL_librariesz00_194);
																			{
																				obj_t BgL_librariesz00_847;
																				obj_t BgL_clausesz00_846;

																				BgL_clausesz00_846 = BgL_arg1347z00_305;
																				BgL_librariesz00_847 =
																					BgL_arg1348z00_306;
																				BgL_librariesz00_194 =
																					BgL_librariesz00_847;
																				BgL_clausesz00_193 = BgL_clausesz00_846;
																				goto BGl_loopze70ze7zzengine_linkz00;
																			}
																		}
																	}
																else
																	{	/* Engine/link.scm 119 */
																	BgL_tagzd2106zd2_209:
																		{	/* Engine/link.scm 142 */
																			obj_t BgL_arg1360z00_310;

																			BgL_arg1360z00_310 =
																				CDR(((obj_t) BgL_clausesz00_193));
																			{
																				obj_t BgL_clausesz00_851;

																				BgL_clausesz00_851 = BgL_arg1360z00_310;
																				BgL_clausesz00_193 = BgL_clausesz00_851;
																				goto BGl_loopze70ze7zzengine_linkz00;
																			}
																		}
																	}
															}
													}
											}
									}
								else
									{	/* Engine/link.scm 119 */
										goto BgL_tagzd2106zd2_209;
									}
							}
						else
							{	/* Engine/link.scm 119 */
								goto BgL_tagzd2106zd2_209;
							}
					}
			}
		}

	}



/* &find-libraries */
	obj_t BGl_z62findzd2librarieszb0zzengine_linkz00(obj_t BgL_envz00_607,
		obj_t BgL_clausesz00_608)
	{
		{	/* Engine/link.scm 118 */
			return BGl_findzd2librarieszd2zzengine_linkz00(BgL_clausesz00_608);
		}

	}



/* &<@anonymous:1328> */
	obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzengine_linkz00(obj_t
		BgL_envz00_609, obj_t BgL_clausez00_610)
	{
		{	/* Engine/link.scm 127 */
			if (PAIRP(BgL_clausez00_610))
				{	/* Engine/link.scm 127 */
					if ((CAR(BgL_clausez00_610) == CNST_TABLE_REF(((long) 1))))
						{	/* Engine/link.scm 129 */
							obj_t BgL_arg1337z00_632;

							BgL_arg1337z00_632 = MAKE_YOUNG_PAIR(BgL_clausez00_610, BNIL);
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BgL_arg1337z00_632);
						}
					else
						{	/* Engine/link.scm 127 */
							return BFALSE;
						}
				}
			else
				{	/* Engine/link.scm 127 */
					return BFALSE;
				}
		}

	}



/* find-main */
	BGL_EXPORTED_DEF obj_t BGl_findzd2mainzd2zzengine_linkz00(obj_t
		BgL_clausesz00_8)
	{
		{	/* Engine/link.scm 147 */
			{
				obj_t BgL_clausesz00_313;

				BgL_clausesz00_313 = BgL_clausesz00_8;
			BgL_zc3z04anonymousza31361ze3z87_314:
				{
					obj_t BgL_restz00_322;
					obj_t BgL_includesz00_319;
					obj_t BgL_restz00_320;

					if (NULLP(BgL_clausesz00_313))
						{	/* Engine/link.scm 148 */
							return BFALSE;
						}
					else
						{	/* Engine/link.scm 148 */
							if (PAIRP(BgL_clausesz00_313))
								{	/* Engine/link.scm 148 */
									obj_t BgL_carzd2250zd2_328;

									BgL_carzd2250zd2_328 = CAR(BgL_clausesz00_313);
									if (PAIRP(BgL_carzd2250zd2_328))
										{	/* Engine/link.scm 148 */
											obj_t BgL_cdrzd2254zd2_330;

											BgL_cdrzd2254zd2_330 = CDR(BgL_carzd2250zd2_328);
											if (
												(CAR(BgL_carzd2250zd2_328) ==
													CNST_TABLE_REF(((long) 5))))
												{	/* Engine/link.scm 148 */
													if (PAIRP(BgL_cdrzd2254zd2_330))
														{	/* Engine/link.scm 148 */
															if (NULLP(CDR(BgL_cdrzd2254zd2_330)))
																{	/* Engine/link.scm 148 */
																	return CAR(BgL_cdrzd2254zd2_330);
																}
															else
																{	/* Engine/link.scm 148 */
																BgL_tagzd2240zd2_324:
																	{	/* Engine/link.scm 163 */
																		obj_t BgL_arg1497z00_369;

																		BgL_arg1497z00_369 =
																			CDR(((obj_t) BgL_clausesz00_313));
																		{
																			obj_t BgL_clausesz00_882;

																			BgL_clausesz00_882 = BgL_arg1497z00_369;
																			BgL_clausesz00_313 = BgL_clausesz00_882;
																			goto BgL_zc3z04anonymousza31361ze3z87_314;
																		}
																	}
																}
														}
													else
														{	/* Engine/link.scm 148 */
															goto BgL_tagzd2240zd2_324;
														}
												}
											else
												{	/* Engine/link.scm 148 */
													if (
														(CAR(
																((obj_t) BgL_carzd2250zd2_328)) ==
															CNST_TABLE_REF(((long) 3))))
														{	/* Engine/link.scm 148 */
															obj_t BgL_arg1421z00_342;
															obj_t BgL_arg1422z00_343;

															BgL_arg1421z00_342 =
																CDR(((obj_t) BgL_carzd2250zd2_328));
															BgL_arg1422z00_343 = CDR(BgL_clausesz00_313);
															BgL_includesz00_319 = BgL_arg1421z00_342;
															BgL_restz00_320 = BgL_arg1422z00_343;
															{	/* Engine/link.scm 155 */
																obj_t BgL__ortest_1051z00_352;

																{
																	obj_t BgL_list1116z00_354;

																	BgL_list1116z00_354 = BgL_includesz00_319;
																BgL_zc3z04anonymousza31465ze3z87_355:
																	if (PAIRP(BgL_list1116z00_354))
																		{	/* Engine/link.scm 155 */
																			bool_t BgL_test1663z00_893;

																			{	/* Engine/link.scm 156 */
																				obj_t BgL_includez00_361;

																				BgL_includez00_361 =
																					CAR(BgL_list1116z00_354);
																				{	/* Engine/link.scm 156 */
																					obj_t BgL_arg1477z00_362;

																					BgL_arg1477z00_362 =
																						BGl_readzd2directiveszd2zzread_includez00
																						(BgL_includez00_361);
																					BgL_test1663z00_893 =
																						CBOOL
																						(BGl_findzd2mainzd2zzengine_linkz00
																						(BgL_arg1477z00_362));
																				}
																			}
																			if (BgL_test1663z00_893)
																				{	/* Engine/link.scm 155 */
																					BgL__ortest_1051z00_352 =
																						CAR(BgL_list1116z00_354);
																				}
																			else
																				{
																					obj_t BgL_list1116z00_899;

																					BgL_list1116z00_899 =
																						CDR(BgL_list1116z00_354);
																					BgL_list1116z00_354 =
																						BgL_list1116z00_899;
																					goto
																						BgL_zc3z04anonymousza31465ze3z87_355;
																				}
																		}
																	else
																		{	/* Engine/link.scm 155 */
																			BgL__ortest_1051z00_352 = BFALSE;
																		}
																}
																if (CBOOL(BgL__ortest_1051z00_352))
																	{	/* Engine/link.scm 155 */
																		return BgL__ortest_1051z00_352;
																	}
																else
																	{
																		obj_t BgL_clausesz00_903;

																		BgL_clausesz00_903 = BgL_restz00_320;
																		BgL_clausesz00_313 = BgL_clausesz00_903;
																		goto BgL_zc3z04anonymousza31361ze3z87_314;
																	}
															}
														}
													else
														{	/* Engine/link.scm 148 */
															if (
																(CAR(CAR(BgL_clausesz00_313)) ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Engine/link.scm 148 */
																	BgL_restz00_322 = CDR(BgL_clausesz00_313);
																	{	/* Engine/link.scm 160 */
																		obj_t BgL__ortest_1052z00_364;

																		{	/* Engine/link.scm 160 */
																			obj_t BgL_arg1489z00_365;

																			{	/* Engine/link.scm 160 */
																				obj_t BgL_arg1493z00_366;

																				{	/* Engine/link.scm 160 */
																					obj_t BgL_arg1495z00_368;

																					BgL_arg1495z00_368 =
																						CAR(((obj_t) BgL_clausesz00_313));
																					BgL_arg1493z00_366 =
																						BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
																						(BgL_arg1495z00_368);
																				}
																				{	/* Engine/link.scm 160 */
																					obj_t BgL_list1494z00_367;

																					BgL_list1494z00_367 =
																						MAKE_YOUNG_PAIR(BgL_arg1493z00_366,
																						BNIL);
																					BgL_arg1489z00_365 =
																						BgL_list1494z00_367;
																			}}
																			BgL__ortest_1052z00_364 =
																				BGl_findzd2mainzd2zzengine_linkz00
																				(BgL_arg1489z00_365);
																		}
																		if (CBOOL(BgL__ortest_1052z00_364))
																			{	/* Engine/link.scm 160 */
																				return BgL__ortest_1052z00_364;
																			}
																		else
																			{
																				obj_t BgL_clausesz00_916;

																				BgL_clausesz00_916 = BgL_restz00_322;
																				BgL_clausesz00_313 = BgL_clausesz00_916;
																				goto
																					BgL_zc3z04anonymousza31361ze3z87_314;
																			}
																	}
																}
															else
																{	/* Engine/link.scm 148 */
																	goto BgL_tagzd2240zd2_324;
																}
														}
												}
										}
									else
										{	/* Engine/link.scm 148 */
											goto BgL_tagzd2240zd2_324;
										}
								}
							else
								{	/* Engine/link.scm 148 */
									goto BgL_tagzd2240zd2_324;
								}
						}
				}
			}
		}

	}



/* &find-main */
	obj_t BGl_z62findzd2mainzb0zzengine_linkz00(obj_t BgL_envz00_611,
		obj_t BgL_clausesz00_612)
	{
		{	/* Engine/link.scm 147 */
			return BGl_findzd2mainzd2zzengine_linkz00(BgL_clausesz00_612);
		}

	}



/* make-tmp-main */
	BGL_EXPORTED_DEF obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t
		BgL_filez00_9, bool_t BgL_mainz00_10, obj_t BgL_modulez00_11,
		obj_t BgL_clausesz00_12, obj_t BgL_librariesz00_13)
	{
		{	/* Engine/link.scm 168 */
			{	/* Engine/link.scm 169 */
				obj_t BgL_poutz00_371;

				{	/* Engine/link.scm 169 */

					BgL_poutz00_371 =
						BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(BgL_filez00_9,
						BTRUE);
				}
				if (OUTPUT_PORTP(BgL_poutz00_371))
					{	/* Engine/link.scm 170 */
						bgl_display_string(BGl_string1595z00zzengine_linkz00,
							BgL_poutz00_371);
						bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
							BgL_poutz00_371);
						bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
						bgl_display_string(BGl_string1596z00zzengine_linkz00,
							BgL_poutz00_371);
						bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
						bgl_display_string(BGl_string1597z00zzengine_linkz00,
							BgL_poutz00_371);
						bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
						bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
						{	/* Engine/link.scm 177 */
							obj_t BgL_modz00_376;

							{	/* Engine/link.scm 178 */
								obj_t BgL_arg1518z00_378;

								{	/* Engine/link.scm 178 */
									obj_t BgL_arg1521z00_379;

									{	/* Engine/link.scm 178 */
										obj_t BgL_arg1528z00_380;
										obj_t BgL_arg1536z00_381;

										{	/* Engine/link.scm 178 */
											obj_t BgL_arg1537z00_382;

											BgL_arg1537z00_382 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(bgl_reverse(BgL_clausesz00_12), BNIL);
											BgL_arg1528z00_380 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
												BgL_arg1537z00_382);
										}
										BgL_arg1536z00_381 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_librariesz00_13, BNIL);
										BgL_arg1521z00_379 =
											MAKE_YOUNG_PAIR(BgL_arg1528z00_380, BgL_arg1536z00_381);
									}
									BgL_arg1518z00_378 =
										MAKE_YOUNG_PAIR(BgL_modulez00_11, BgL_arg1521z00_379);
								}
								BgL_modz00_376 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1518z00_378);
							}
							bgl_display_obj(BgL_modz00_376, BgL_poutz00_371);
							bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
							bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
						}
						if (BgL_mainz00_10)
							{	/* Engine/link.scm 182 */
								bgl_display_string(BGl_string1598z00zzengine_linkz00,
									BgL_poutz00_371);
								bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
								bgl_display_char(((unsigned char) 10), BgL_poutz00_371);
							}
						else
							{	/* Engine/link.scm 182 */
								BFALSE;
							}
						return bgl_close_output_port(BgL_poutz00_371);
					}
				else
					{	/* Engine/link.scm 170 */
						return
							BGl_errorz00zz__errorz00(BGl_string1599z00zzengine_linkz00,
							BGl_string1600z00zzengine_linkz00, BgL_filez00_9);
					}
			}
		}

	}



/* &make-tmp-main */
	obj_t BGl_z62makezd2tmpzd2mainz62zzengine_linkz00(obj_t BgL_envz00_613,
		obj_t BgL_filez00_614, obj_t BgL_mainz00_615, obj_t BgL_modulez00_616,
		obj_t BgL_clausesz00_617, obj_t BgL_librariesz00_618)
	{
		{	/* Engine/link.scm 168 */
			return
				BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_filez00_614,
				CBOOL(BgL_mainz00_615), BgL_modulez00_616, BgL_clausesz00_617,
				BgL_librariesz00_618);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_linkz00()
	{
		{	/* Engine/link.scm 20 */
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 335315250),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 32737868),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			BGl_modulezd2initializa7ationz75zzexpand_installz00(((long) 291484051),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
			return
				BGl_modulezd2initializa7ationz75zzread_includez00(((long) 236487969),
				BSTRING_TO_STRING(BGl_string1601z00zzengine_linkz00));
		}

	}

#ifdef __cplusplus
}
#endif
