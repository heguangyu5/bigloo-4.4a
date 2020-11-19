/*===========================================================================*/
/*   (Cfa/approx.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/approx.scm) */
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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

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


	static obj_t BGl_z62approxzd2setzd2topz12z70zzcfa_approxz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2keyzd2setz12z70zzcfa_approxz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	static bool_t
		BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, obj_t);
	extern obj_t BGl_makezd2structzd2appz00zzcfa_info2z00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	extern obj_t BGl_approxz00zzcfa_infoz00;
	extern obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t);
	extern obj_t BGl_za2bboolza2z00zztype_cachez00;
	static BgL_approxz00_bglt
		BGl_z62makezd2emptyzd2approxz62zzcfa_approxz00(obj_t);
	static obj_t BGl_z62declarezd2approxzd2setsz12z70zzcfa_approxz00(obj_t);
	extern obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t);
	static obj_t BGl_z62shapezd2approx1586zb0zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
	static obj_t BGl_objectzd2initzd2zzcfa_approxz00();
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezb0zzcfa_approxz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	static obj_t BGl_z62emptyzd2approxzd2alloczf3z91zzcfa_approxz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_approxz00();
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static obj_t BGl_z62forzd2eachzd2approxzd2alloczb0zzcfa_approxz00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_z62structzd2approxzf3z43zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_za2listza2z00zztype_cachez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_approxz00_bglt
		BGl_z62unionzd2approxzd2filterz12z70zzcfa_approxz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_emptyzd2approxzd2alloczf3zf3zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2bllongza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_approxz00();
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezd21590z62zzcfa_approxz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2valuezd21592z62zzcfa_approxz00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_unionzd2approxzf2typez12z32zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2nodezd2atomzd2value1587zb0zzcfa_approxz00(obj_t,
		obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_za2nilza2z00zz__evalz00;
	static BgL_approxz00_bglt BGl_z62makezd2typezd2approxz62zzcfa_approxz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_approxz00 = BUNSPEC;
	static bool_t BGl_z62conszd2approxzf3z43zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_conszd2appzd2zzcfa_info2z00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_setzd2memberzf3z21zzcfa_setz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_approxz00();
	static obj_t BGl_z62approxzd2setzd2typez12z70zzcfa_approxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2keyzb0zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_approxz00();
	static bool_t BGl_z62procedurezd2approxzf3z43zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	extern bool_t BGl_czd2subtypezf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62unionzd2approxz12za2zzcfa_approxz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2keyzd2setz12z12zzcfa_approxz00(BgL_nodezf2effectzf2_bglt, obj_t);
	static bool_t BGl_z62vectorzd2approxzf3z43zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t, obj_t);
	extern obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2keyzd2zzcfa_approxz00(BgL_nodezf2effectzf2_bglt);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_za2belongza2z00zztype_cachez00;
	static obj_t BGl_za2alloczd2setza2zd2zzcfa_approxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	extern obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_approxz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_approxz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_approxz00();
	extern obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62makezd2typezd2alloczd2approxzb0zzcfa_approxz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_findzd2commonzd2superzd2classzd2zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t, obj_t);
	extern obj_t BGl_za2bcharza2z00zztype_cachez00;
	static obj_t
		BGl_getzd2srczd2approxzd2typezd2zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unionzd2approxzd2filterz12zd2envzc0zzcfa_approxz00,
		BgL_bgl_za762unionza7d2appro2157z00,
		BGl_z62unionzd2approxzd2filterz12z70zzcfa_approxz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2144z00zzcfa_approxz00,
		BgL_bgl_string2144za700za7za7c2158za7, "dst is not a procedure", 22);
	      DEFINE_STRING(BGl_string2146z00zzcfa_approxz00,
		BgL_bgl_string2146za700za7za7c2159za7, "get-node-atom-value1587", 23);
	      DEFINE_STRING(BGl_string2148z00zzcfa_approxz00,
		BgL_bgl_string2148za700za7za7c2160za7, "shape", 5);
	      DEFINE_STRING(BGl_string2150z00zzcfa_approxz00,
		BgL_bgl_string2150za700za7za7c2161za7, "get-node-atom-value", 19);
	      DEFINE_STRING(BGl_string2152z00zzcfa_approxz00,
		BgL_bgl_string2152za700za7za7c2162za7, "cfa_approx", 10);
	      DEFINE_STRING(BGl_string2153z00zzcfa_approxz00,
		BgL_bgl_string2153za700za7za7c2163za7,
		"top approx (no-atom-value) approx-set-top! approx-set-type! union ", 66);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2setzd2topz12zd2envzc0zzcfa_approxz00,
		BgL_bgl_za762approxza7d2setza72164za7,
		BGl_z62approxzd2setzd2topz12z70zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_BGL_L_PROCEDURE(BGl_vectorzd2approxzf3zd2envzf3zzcfa_approxz00,
		BgL_bgl_za762vectorza7d2appr2165z00,
		BGl_z62vectorzd2approxzf3z43zzcfa_approxz00);
	     
		DEFINE_BGL_L_PROCEDURE(BGl_procedurezd2approxzf3zd2envzf3zzcfa_approxz00,
		BgL_bgl_za762procedureza7d2a2166z00,
		BGl_z62procedurezd2approxzf3z43zzcfa_approxz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_conszd2approxzf3zd2envzf3zzcfa_approxz00,
		BgL_bgl_za762consza7d2approx2167z00,
		BGl_z62conszd2approxzf3z43zzcfa_approxz00);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
		BgL_bgl_za762getza7d2nodeza7d22168za7,
		BGl_z62getzd2nodezd2atomzd2valuezb0zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2keyzd2setz12zd2envzc0zzcfa_approxz00,
		BgL_bgl_za762nodeza7d2keyza7d22169za7,
		BGl_z62nodezd2keyzd2setz12z70zzcfa_approxz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzcfa_approxz00,
		BgL_bgl_za762getza7d2nodeza7d22170za7,
		BGl_z62getzd2nodezd2atomzd2value1587zb0zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzcfa_approxz00,
		BgL_bgl_za762shapeza7d2appro2171z00,
		BGl_z62shapezd2approx1586zb0zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzcfa_approxz00,
		BgL_bgl_za762getza7d2nodeza7d22172za7,
		BGl_z62getzd2nodezd2atomzd2valuezd21590z62zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzcfa_approxz00,
		BgL_bgl_za762getza7d2nodeza7d22173za7,
		BGl_z62getzd2nodezd2atomzd2valuezd21592z62zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emptyzd2approxzd2alloczf3zd2envz21zzcfa_approxz00,
		BgL_bgl_za762emptyza7d2appro2174z00,
		BGl_z62emptyzd2approxzd2alloczf3z91zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2approxzd2envzd2zzcfa_approxz00,
		BgL_bgl_za762makeza7d2typeza7d2175za7,
		BGl_z62makezd2typezd2approxz62zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2setzd2typez12zd2envzc0zzcfa_approxz00,
		BgL_bgl_za762approxza7d2setza72176za7,
		BGl_z62approxzd2setzd2typez12z70zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2approxzd2setsz12zd2envzc0zzcfa_approxz00,
		BgL_bgl_za762declareza7d2app2177z00,
		BGl_z62declarezd2approxzd2setsz12z70zzcfa_approxz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2approxzd2alloczd2envz00zzcfa_approxz00,
		BgL_bgl_za762forza7d2eachza7d22178za7,
		BGl_z62forzd2eachzd2approxzd2alloczb0zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unionzd2approxz12zd2envz12zzcfa_approxz00,
		BgL_bgl_za762unionza7d2appro2179z00,
		BGl_z62unionzd2approxz12za2zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2emptyzd2approxzd2envzd2zzcfa_approxz00,
		BgL_bgl_za762makeza7d2emptyza72180za7,
		BGl_z62makezd2emptyzd2approxz62zzcfa_approxz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2alloczd2approxzd2envz00zzcfa_approxz00,
		BgL_bgl_za762makeza7d2typeza7d2181za7,
		BGl_z62makezd2typezd2alloczd2approxzb0zzcfa_approxz00, 0L, BUNSPEC, 2);
	      DEFINE_BGL_L_PROCEDURE(BGl_structzd2approxzf3zd2envzf3zzcfa_approxz00,
		BgL_bgl_za762structza7d2appr2182z00,
		BGl_z62structzd2approxzf3z43zzcfa_approxz00);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2keyzd2envz00zzcfa_approxz00,
		BgL_bgl_za762nodeza7d2keyza7b02183za7, BGl_z62nodezd2keyzb0zzcfa_approxz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_approxz00));
		     ADD_ROOT((void *) (&BGl_za2alloczd2setza2zd2zzcfa_approxz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long
		BgL_checksumz00_4618, char *BgL_fromz00_4619)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_approxz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_approxz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_approxz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_approxz00();
					BGl_cnstzd2initzd2zzcfa_approxz00();
					BGl_importedzd2moduleszd2initz00zzcfa_approxz00();
					BGl_genericzd2initzd2zzcfa_approxz00();
					BGl_methodzd2initzd2zzcfa_approxz00();
					return BGl_toplevelzd2initzd2zzcfa_approxz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_approx");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "cfa_approx");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_approx");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_approx");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_approx");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			{	/* Cfa/approx.scm 15 */
				obj_t BgL_cportz00_4582;

				{	/* Cfa/approx.scm 15 */
					obj_t BgL_stringz00_4590;

					BgL_stringz00_4590 = BGl_string2153z00zzcfa_approxz00;
					{	/* Cfa/approx.scm 15 */
						obj_t BgL_startz00_4591;

						BgL_startz00_4591 = BINT(((long) 0));
						{	/* Cfa/approx.scm 15 */
							obj_t BgL_endz00_4592;

							BgL_endz00_4592 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4590)));
							{	/* Cfa/approx.scm 15 */

								BgL_cportz00_4582 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4590, BgL_startz00_4591, BgL_endz00_4592);
				}}}}
				{
					long BgL_iz00_4583;

					BgL_iz00_4583 = ((long) 5);
				BgL_loopz00_4584:
					if ((BgL_iz00_4583 == ((long) -1)))
						{	/* Cfa/approx.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/approx.scm 15 */
							{	/* Cfa/approx.scm 15 */
								obj_t BgL_arg2155z00_4586;

								{	/* Cfa/approx.scm 15 */

									{	/* Cfa/approx.scm 15 */
										obj_t BgL_locationz00_4588;

										BgL_locationz00_4588 = BBOOL(((bool_t) 0));
										{	/* Cfa/approx.scm 15 */

											BgL_arg2155z00_4586 =
												BGl_readz00zz__readerz00(BgL_cportz00_4582,
												BgL_locationz00_4588);
										}
									}
								}
								{	/* Cfa/approx.scm 15 */
									int BgL_tmpz00_4649;

									BgL_tmpz00_4649 = (int) (BgL_iz00_4583);
									CNST_TABLE_SET(BgL_tmpz00_4649, BgL_arg2155z00_4586);
							}}
							{	/* Cfa/approx.scm 15 */
								int BgL_auxz00_4589;

								BgL_auxz00_4589 = (int) ((BgL_iz00_4583 - ((long) 1)));
								{
									long BgL_iz00_4654;

									BgL_iz00_4654 = (long) (BgL_auxz00_4589);
									BgL_iz00_4583 = BgL_iz00_4654;
									goto BgL_loopz00_4584;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			BGl_za2alloczd2setza2zd2zzcfa_approxz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* declare-approx-sets! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 58 */
			return (BGl_za2alloczd2setza2zd2zzcfa_approxz00 =
				BGl_declarezd2setz12zc0zzcfa_setz00
				(BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
					(BGl_getzd2allocszd2zzcfa_collectz00())), BUNSPEC);
		}

	}



/* &declare-approx-sets! */
	obj_t BGl_z62declarezd2approxzd2setsz12z70zzcfa_approxz00(obj_t
		BgL_envz00_4530)
	{
		{	/* Cfa/approx.scm 58 */
			return BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
		}

	}



/* node-key */
	BGL_EXPORTED_DEF obj_t
		BGl_nodezd2keyzd2zzcfa_approxz00(BgL_nodezf2effectzf2_bglt BgL_nodez00_3)
	{
		{	/* Cfa/approx.scm 65 */
			return (((BgL_nodezf2effectzf2_bglt) COBJECT(BgL_nodez00_3))->BgL_keyz00);
		}

	}



/* &node-key */
	obj_t BGl_z62nodezd2keyzb0zzcfa_approxz00(obj_t BgL_envz00_4531,
		obj_t BgL_nodez00_4532)
	{
		{	/* Cfa/approx.scm 65 */
			return
				BGl_nodezd2keyzd2zzcfa_approxz00(
				((BgL_nodezf2effectzf2_bglt) BgL_nodez00_4532));
		}

	}



/* node-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_nodezd2keyzd2setz12z12zzcfa_approxz00(BgL_nodezf2effectzf2_bglt
		BgL_nodez00_4, obj_t BgL_keyz00_5)
	{
		{	/* Cfa/approx.scm 71 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(BgL_nodez00_4))->BgL_keyz00) =
				((obj_t) BgL_keyz00_5), BUNSPEC);
		}

	}



/* &node-key-set! */
	obj_t BGl_z62nodezd2keyzd2setz12z70zzcfa_approxz00(obj_t BgL_envz00_4533,
		obj_t BgL_nodez00_4534, obj_t BgL_keyz00_4535)
	{
		{	/* Cfa/approx.scm 71 */
			return
				BGl_nodezd2keyzd2setz12z12zzcfa_approxz00(
				((BgL_nodezf2effectzf2_bglt) BgL_nodez00_4534), BgL_keyz00_4535);
		}

	}



/* union-approx! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt BgL_dstz00_6,
		BgL_approxz00_bglt BgL_srcz00_7)
	{
		{	/* Cfa/approx.scm 77 */
			{	/* Cfa/approx.scm 79 */
				obj_t BgL_arg1606z00_3480;

				BgL_arg1606z00_3480 =
					BGl_getzd2srczd2approxzd2typezd2zzcfa_approxz00(BgL_srcz00_7);
				BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_dstz00_6,
					((BgL_typez00_bglt) BgL_arg1606z00_3480));
			}
			{	/* Cfa/approx.scm 81 */
				bool_t BgL_test2186z00_4670;

				{	/* Cfa/approx.scm 81 */
					BgL_typez00_bglt BgL_arg1640z00_3504;

					BgL_arg1640z00_3504 =
						(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_6))->BgL_typez00);
					BgL_test2186z00_4670 =
						(((obj_t) BgL_arg1640z00_3504) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2186z00_4670)
					{	/* Cfa/approx.scm 81 */
						BFALSE;
					}
				else
					{	/* Cfa/approx.scm 82 */
						bool_t BgL_test2187z00_4674;

						{	/* Cfa/approx.scm 82 */
							obj_t BgL_g1574z00_3494;

							BgL_g1574z00_3494 =
								BGl_setzd2ze3listz31zzcfa_setz00(
								(((BgL_approxz00_bglt) COBJECT(BgL_srcz00_7))->BgL_allocsz00));
							{
								obj_t BgL_l1572z00_3496;

								BgL_l1572z00_3496 = BgL_g1574z00_3494;
							BgL_zc3z04anonymousza31629ze3z87_3497:
								if (NULLP(BgL_l1572z00_3496))
									{	/* Cfa/approx.scm 82 */
										BgL_test2187z00_4674 = ((bool_t) 0);
									}
								else
									{	/* Cfa/approx.scm 82 */
										bool_t BgL__ortest_1575z00_3499;

										{	/* Cfa/approx.scm 82 */
											obj_t BgL_arg1634z00_3501;

											BgL_arg1634z00_3501 = CAR(((obj_t) BgL_l1572z00_3496));
											{	/* Cfa/approx.scm 166 */
												bool_t BgL__ortest_1172z00_4371;

												BgL__ortest_1172z00_4371 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1634z00_3501,
													BGl_makezd2vectorzd2appz00zzcfa_info2z00);
												if (BgL__ortest_1172z00_4371)
													{	/* Cfa/approx.scm 166 */
														BgL__ortest_1575z00_3499 = BgL__ortest_1172z00_4371;
													}
												else
													{	/* Cfa/approx.scm 166 */
														BgL__ortest_1575z00_3499 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1634z00_3501,
															BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
													}
											}
										}
										if (BgL__ortest_1575z00_3499)
											{	/* Cfa/approx.scm 82 */
												BgL_test2187z00_4674 = BgL__ortest_1575z00_3499;
											}
										else
											{	/* Cfa/approx.scm 82 */
												obj_t BgL_arg1631z00_3500;

												BgL_arg1631z00_3500 = CDR(((obj_t) BgL_l1572z00_3496));
												{
													obj_t BgL_l1572z00_4687;

													BgL_l1572z00_4687 = BgL_arg1631z00_3500;
													BgL_l1572z00_3496 = BgL_l1572z00_4687;
													goto BgL_zc3z04anonymousza31629ze3z87_3497;
												}
											}
									}
							}
						}
						if (BgL_test2187z00_4674)
							{	/* Cfa/approx.scm 82 */
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_dstz00_6,
									((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00));
							}
						else
							{	/* Cfa/approx.scm 82 */
								BFALSE;
							}
					}
			}
			{	/* Cfa/approx.scm 85 */
				bool_t BgL_test2191z00_4690;

				{	/* Cfa/approx.scm 85 */
					bool_t BgL_test2192z00_4691;

					{	/* Cfa/approx.scm 85 */
						BgL_typez00_bglt BgL_arg1663z00_3512;

						BgL_arg1663z00_3512 =
							(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_6))->BgL_typez00);
						BgL_test2192z00_4691 =
							(
							((obj_t) BgL_arg1663z00_3512) ==
							BGl_za2procedureza2z00zztype_cachez00);
					}
					if (BgL_test2192z00_4691)
						{	/* Cfa/approx.scm 85 */
							BgL_test2191z00_4690 = ((bool_t) 1);
						}
					else
						{	/* Cfa/approx.scm 86 */
							BgL_typez00_bglt BgL_arg1662z00_3511;

							BgL_arg1662z00_3511 =
								(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_6))->BgL_typez00);
							BgL_test2191z00_4690 =
								(
								((obj_t) BgL_arg1662z00_3511) == BGl_za2_za2z00zztype_cachez00);
						}
				}
				if (BgL_test2191z00_4690)
					{	/* Cfa/approx.scm 85 */
						BFALSE;
					}
				else
					{	/* Cfa/approx.scm 85 */
						BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_srcz00_7,
							BGl_string2144z00zzcfa_approxz00);
					}
			}
			if ((((BgL_approxz00_bglt) COBJECT(BgL_srcz00_7))->BgL_topzf3zf3))
				{	/* Cfa/approx.scm 89 */
					BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_dstz00_6);
				}
			else
				{	/* Cfa/approx.scm 89 */
					BFALSE;
				}
			{	/* Cfa/approx.scm 92 */
				bool_t BgL_test2194z00_4702;

				{	/* Cfa/approx.scm 92 */
					obj_t BgL_arg1672z00_3518;
					obj_t BgL_arg1684z00_3519;

					BgL_arg1672z00_3518 =
						(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_6))->BgL_allocsz00);
					BgL_arg1684z00_3519 =
						(((BgL_approxz00_bglt) COBJECT(BgL_srcz00_7))->BgL_allocsz00);
					{	/* Cfa/approx.scm 92 */
						obj_t BgL_list1685z00_3520;

						BgL_list1685z00_3520 = MAKE_YOUNG_PAIR(BgL_arg1684z00_3519, BNIL);
						BgL_test2194z00_4702 =
							CBOOL(BGl_setzd2unionz12zc0zzcfa_setz00(BgL_arg1672z00_3518,
								BgL_list1685z00_3520));
					}
				}
				if (BgL_test2194z00_4702)
					{	/* Cfa/approx.scm 92 */
						BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF(((long)
									0)));
					}
				else
					{	/* Cfa/approx.scm 92 */
						BFALSE;
					}
			}
			return BgL_dstz00_6;
		}

	}



/* &union-approx! */
	BgL_approxz00_bglt BGl_z62unionzd2approxz12za2zzcfa_approxz00(obj_t
		BgL_envz00_4536, obj_t BgL_dstz00_4537, obj_t BgL_srcz00_4538)
	{
		{	/* Cfa/approx.scm 77 */
			return
				BGl_unionzd2approxz12zc0zzcfa_approxz00(
				((BgL_approxz00_bglt) BgL_dstz00_4537),
				((BgL_approxz00_bglt) BgL_srcz00_4538));
		}

	}



/* union-approx/type! */
	BgL_approxz00_bglt
		BGl_unionzd2approxzf2typez12z32zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_8, BgL_approxz00_bglt BgL_srcz00_9,
		BgL_typez00_bglt BgL_tyz00_10)
	{
		{	/* Cfa/approx.scm 100 */
			if ((((BgL_approxz00_bglt) COBJECT(BgL_srcz00_9))->BgL_topzf3zf3))
				{	/* Cfa/approx.scm 113 */
					BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_dstz00_8);
				}
			else
				{	/* Cfa/approx.scm 113 */
					BFALSE;
				}
			if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_tyz00_10))
				{	/* Cfa/approx.scm 115 */
					if ((((obj_t) BgL_tyz00_10) == BGl_za2vectorza2z00zztype_cachez00))
						{	/* Cfa/approx.scm 117 */
							if (BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00(BgL_dstz00_8,
									BgL_srcz00_9, BGl_vectorzd2approxzf3zd2envzf3zzcfa_approxz00))
								{	/* Cfa/approx.scm 118 */
									BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF((
												(long) 0)));
								}
							else
								{	/* Cfa/approx.scm 118 */
									BFALSE;
								}
						}
					else
						{	/* Cfa/approx.scm 117 */
							if (
								(((obj_t) BgL_tyz00_10) ==
									BGl_za2procedureza2z00zztype_cachez00))
								{	/* Cfa/approx.scm 120 */
									if (BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00
										(BgL_dstz00_8, BgL_srcz00_9,
											BGl_procedurezd2approxzf3zd2envzf3zzcfa_approxz00))
										{	/* Cfa/approx.scm 121 */
											BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF((
														(long) 0)));
										}
									else
										{	/* Cfa/approx.scm 121 */
											BFALSE;
										}
								}
							else
								{	/* Cfa/approx.scm 123 */
									bool_t BgL_test2201z00_4732;

									if (
										(((obj_t) BgL_tyz00_10) ==
											BGl_za2pairza2z00zztype_cachez00))
										{	/* Cfa/approx.scm 123 */
											BgL_test2201z00_4732 = ((bool_t) 1);
										}
									else
										{	/* Cfa/approx.scm 123 */
											if (
												(((obj_t) BgL_tyz00_10) ==
													BGl_za2epairza2z00zztype_cachez00))
												{	/* Cfa/approx.scm 124 */
													BgL_test2201z00_4732 = ((bool_t) 1);
												}
											else
												{	/* Cfa/approx.scm 124 */
													if (
														(((obj_t) BgL_tyz00_10) ==
															BGl_za2pairzd2nilza2zd2zztype_cachez00))
														{	/* Cfa/approx.scm 125 */
															BgL_test2201z00_4732 = ((bool_t) 1);
														}
													else
														{	/* Cfa/approx.scm 125 */
															BgL_test2201z00_4732 =
																(
																((obj_t) BgL_tyz00_10) ==
																BGl_za2listza2z00zztype_cachez00);
														}
												}
										}
									if (BgL_test2201z00_4732)
										{	/* Cfa/approx.scm 123 */
											if (BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00
												(BgL_dstz00_8, BgL_srcz00_9,
													BGl_conszd2approxzf3zd2envzf3zzcfa_approxz00))
												{	/* Cfa/approx.scm 127 */
													BGl_continuezd2cfaz12zc0zzcfa_iteratez00
														(CNST_TABLE_REF(((long) 0)));
												}
											else
												{	/* Cfa/approx.scm 127 */
													BFALSE;
												}
										}
									else
										{	/* Cfa/approx.scm 123 */
											if (
												(((obj_t) BgL_tyz00_10) ==
													BGl_za2structza2z00zztype_cachez00))
												{	/* Cfa/approx.scm 129 */
													if (BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00
														(BgL_dstz00_8, BgL_srcz00_9,
															BGl_structzd2approxzf3zd2envzf3zzcfa_approxz00))
														{	/* Cfa/approx.scm 130 */
															BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																(CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* Cfa/approx.scm 130 */
															BFALSE;
														}
												}
											else
												{	/* Cfa/approx.scm 132 */
													bool_t BgL_test2208z00_4755;

													if (
														(((obj_t) BgL_tyz00_10) ==
															BGl_za2symbolza2z00zztype_cachez00))
														{	/* Cfa/approx.scm 132 */
															BgL_test2208z00_4755 = ((bool_t) 1);
														}
													else
														{	/* Cfa/approx.scm 132 */
															if (
																(((obj_t) BgL_tyz00_10) ==
																	BGl_za2keywordza2z00zztype_cachez00))
																{	/* Cfa/approx.scm 133 */
																	BgL_test2208z00_4755 = ((bool_t) 1);
																}
															else
																{	/* Cfa/approx.scm 133 */
																	if (
																		(((obj_t) BgL_tyz00_10) ==
																			BGl_za2unspecza2z00zztype_cachez00))
																		{	/* Cfa/approx.scm 134 */
																			BgL_test2208z00_4755 = ((bool_t) 1);
																		}
																	else
																		{	/* Cfa/approx.scm 134 */
																			if (
																				(((obj_t) BgL_tyz00_10) ==
																					BGl_za2bstringza2z00zztype_cachez00))
																				{	/* Cfa/approx.scm 135 */
																					BgL_test2208z00_4755 = ((bool_t) 1);
																				}
																			else
																				{	/* Cfa/approx.scm 135 */
																					if (
																						(((obj_t) BgL_tyz00_10) ==
																							BGl_za2bintza2z00zztype_cachez00))
																						{	/* Cfa/approx.scm 136 */
																							BgL_test2208z00_4755 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Cfa/approx.scm 136 */
																							if (
																								(((obj_t) BgL_tyz00_10) ==
																									BGl_za2belongza2z00zztype_cachez00))
																								{	/* Cfa/approx.scm 137 */
																									BgL_test2208z00_4755 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Cfa/approx.scm 137 */
																									if (
																										(((obj_t) BgL_tyz00_10) ==
																											BGl_za2bllongza2z00zztype_cachez00))
																										{	/* Cfa/approx.scm 138 */
																											BgL_test2208z00_4755 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Cfa/approx.scm 138 */
																											if (
																												(((obj_t) BgL_tyz00_10)
																													==
																													BGl_za2bignumza2z00zztype_cachez00))
																												{	/* Cfa/approx.scm 139 */
																													BgL_test2208z00_4755 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Cfa/approx.scm 139 */
																													if (
																														(((obj_t)
																																BgL_tyz00_10) ==
																															BGl_za2realza2z00zztype_cachez00))
																														{	/* Cfa/approx.scm 140 */
																															BgL_test2208z00_4755
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Cfa/approx.scm 140 */
																															if (
																																(((obj_t)
																																		BgL_tyz00_10)
																																	==
																																	BGl_za2bcharza2z00zztype_cachez00))
																																{	/* Cfa/approx.scm 141 */
																																	BgL_test2208z00_4755
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Cfa/approx.scm 141 */
																																	if (
																																		(((obj_t)
																																				BgL_tyz00_10)
																																			==
																																			BGl_za2nilza2z00zz__evalz00))
																																		{	/* Cfa/approx.scm 142 */
																																			BgL_test2208z00_4755
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Cfa/approx.scm 142 */
																																			BgL_test2208z00_4755
																																				=
																																				(((obj_t) BgL_tyz00_10) == BGl_za2bboolza2z00zztype_cachez00);
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
													if (BgL_test2208z00_4755)
														{	/* Cfa/approx.scm 132 */
															BFALSE;
														}
													else
														{	/* Cfa/approx.scm 144 */
															bool_t BgL_test2220z00_4791;

															{	/* Cfa/approx.scm 144 */
																obj_t BgL_arg1728z00_3551;
																obj_t BgL_arg1729z00_3552;

																BgL_arg1728z00_3551 =
																	(((BgL_approxz00_bglt)
																		COBJECT(BgL_dstz00_8))->BgL_allocsz00);
																BgL_arg1729z00_3552 =
																	(((BgL_approxz00_bglt)
																		COBJECT(BgL_srcz00_9))->BgL_allocsz00);
																{	/* Cfa/approx.scm 144 */
																	obj_t BgL_list1730z00_3553;

																	BgL_list1730z00_3553 =
																		MAKE_YOUNG_PAIR(BgL_arg1729z00_3552, BNIL);
																	BgL_test2220z00_4791 =
																		CBOOL(BGl_setzd2unionz12zc0zzcfa_setz00
																		(BgL_arg1728z00_3551,
																			BgL_list1730z00_3553));
																}
															}
															if (BgL_test2220z00_4791)
																{	/* Cfa/approx.scm 144 */
																	BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																		(CNST_TABLE_REF(((long) 0)));
																}
															else
																{	/* Cfa/approx.scm 144 */
																	BFALSE;
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Cfa/approx.scm 115 */
					BFALSE;
				}
			return BgL_dstz00_8;
		}

	}



/* set-union/type!~0 */
	bool_t BGl_setzd2unionzf2typez12ze70zd5zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_3568, BgL_approxz00_bglt BgL_srcz00_3569, obj_t BgL_predz00_3570)
	{
		{	/* Cfa/approx.scm 111 */
			{	/* Cfa/approx.scm 104 */
				bool_t BgL_resz00_3572;
				obj_t BgL_setz00_3573;

				BgL_resz00_3572 = ((bool_t) 0);
				BgL_setz00_3573 =
					(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_3568))->BgL_allocsz00);
				{	/* Cfa/approx.scm 106 */
					obj_t BgL_g1578z00_3574;

					BgL_g1578z00_3574 =
						BGl_setzd2ze3listz31zzcfa_setz00(
						(((BgL_approxz00_bglt) COBJECT(BgL_srcz00_3569))->BgL_allocsz00));
					{
						obj_t BgL_l1576z00_3576;

						BgL_l1576z00_3576 = BgL_g1578z00_3574;
					BgL_zc3z04anonymousza31732ze3z87_3577:
						if (PAIRP(BgL_l1576z00_3576))
							{	/* Cfa/approx.scm 110 */
								{	/* Cfa/approx.scm 107 */
									obj_t BgL_vz00_3579;

									BgL_vz00_3579 = CAR(BgL_l1576z00_3576);
									{	/* Cfa/approx.scm 107 */
										bool_t BgL_test2222z00_4805;

										if (
											((bool_t(*)())PROCEDURE_L_ENTRY(BgL_predz00_3570))
											(BgL_predz00_3570, BgL_vz00_3579))
											{	/* Cfa/approx.scm 107 */
												if (CBOOL(BGl_setzd2memberzf3z21zzcfa_setz00
														(BgL_setz00_3573, BgL_vz00_3579)))
													{	/* Cfa/approx.scm 107 */
														BgL_test2222z00_4805 = ((bool_t) 0);
													}
												else
													{	/* Cfa/approx.scm 107 */
														BgL_test2222z00_4805 = ((bool_t) 1);
													}
											}
										else
											{	/* Cfa/approx.scm 107 */
												BgL_test2222z00_4805 = ((bool_t) 0);
											}
										if (BgL_test2222z00_4805)
											{	/* Cfa/approx.scm 107 */
												BGl_setzd2extendz12zc0zzcfa_setz00(BgL_setz00_3573,
													BgL_vz00_3579);
												BgL_resz00_3572 = ((bool_t) 1);
											}
										else
											{	/* Cfa/approx.scm 107 */
												BFALSE;
											}
									}
								}
								{
									obj_t BgL_l1576z00_4815;

									BgL_l1576z00_4815 = CDR(BgL_l1576z00_3576);
									BgL_l1576z00_3576 = BgL_l1576z00_4815;
									goto BgL_zc3z04anonymousza31732ze3z87_3577;
								}
							}
						else
							{	/* Cfa/approx.scm 110 */
								((bool_t) 1);
							}
					}
				}
				return BgL_resz00_3572;
			}
		}

	}



/* union-approx-filter! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_11, BgL_approxz00_bglt BgL_srcz00_12)
	{
		{	/* Cfa/approx.scm 156 */
			{	/* Cfa/approx.scm 157 */
				BgL_typez00_bglt BgL_tyz00_3589;

				BgL_tyz00_3589 =
					(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_11))->BgL_typez00);
				{	/* Cfa/approx.scm 158 */
					bool_t BgL_test2225z00_4818;

					if (
						(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_11))->
							BgL_typezd2lockedzf3z21))
						{	/* Cfa/approx.scm 158 */
							if ((((obj_t) BgL_tyz00_3589) == BGl_za2_za2z00zztype_cachez00))
								{	/* Cfa/approx.scm 158 */
									BgL_test2225z00_4818 = ((bool_t) 1);
								}
							else
								{	/* Cfa/approx.scm 158 */
									BgL_test2225z00_4818 =
										(
										((obj_t) BgL_tyz00_3589) ==
										BGl_za2objza2z00zztype_cachez00);
								}
						}
					else
						{	/* Cfa/approx.scm 158 */
							BgL_test2225z00_4818 = ((bool_t) 1);
						}
					if (BgL_test2225z00_4818)
						{	/* Cfa/approx.scm 158 */
							return
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_dstz00_11,
								BgL_srcz00_12);
						}
					else
						{	/* Cfa/approx.scm 158 */
							return
								BGl_unionzd2approxzf2typez12z32zzcfa_approxz00(BgL_dstz00_11,
								BgL_srcz00_12, BgL_tyz00_3589);
						}
				}
			}
		}

	}



/* &union-approx-filter! */
	BgL_approxz00_bglt BGl_z62unionzd2approxzd2filterz12z70zzcfa_approxz00(obj_t
		BgL_envz00_4547, obj_t BgL_dstz00_4548, obj_t BgL_srcz00_4549)
	{
		{	/* Cfa/approx.scm 156 */
			return
				BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00(
				((BgL_approxz00_bglt) BgL_dstz00_4548),
				((BgL_approxz00_bglt) BgL_srcz00_4549));
		}

	}



/* &vector-approx? */
	bool_t BGl_z62vectorzd2approxzf3z43zzcfa_approxz00(obj_t BgL_envz00_4539,
		obj_t BgL_xz00_4540)
	{
		{	/* Cfa/approx.scm 165 */
			{	/* Cfa/approx.scm 166 */
				bool_t BgL__ortest_1172z00_4595;

				BgL__ortest_1172z00_4595 =
					BGl_isazf3zf3zz__objectz00(BgL_xz00_4540,
					BGl_makezd2vectorzd2appz00zzcfa_info2z00);
				if (BgL__ortest_1172z00_4595)
					{	/* Cfa/approx.scm 166 */
						return BgL__ortest_1172z00_4595;
					}
				else
					{	/* Cfa/approx.scm 166 */
						return
							BGl_isazf3zf3zz__objectz00(BgL_xz00_4540,
							BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
					}
			}
		}

	}



/* &procedure-approx? */
	bool_t BGl_z62procedurezd2approxzf3z43zzcfa_approxz00(obj_t BgL_envz00_4541,
		obj_t BgL_xz00_4542)
	{
		{	/* Cfa/approx.scm 171 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_xz00_4542,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00);
		}

	}



/* &cons-approx? */
	bool_t BGl_z62conszd2approxzf3z43zzcfa_approxz00(obj_t BgL_envz00_4543,
		obj_t BgL_xz00_4544)
	{
		{	/* Cfa/approx.scm 177 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_xz00_4544,
				BGl_conszd2appzd2zzcfa_info2z00);
		}

	}



/* &struct-approx? */
	bool_t BGl_z62structzd2approxzf3z43zzcfa_approxz00(obj_t BgL_envz00_4545,
		obj_t BgL_xz00_4546)
	{
		{	/* Cfa/approx.scm 183 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_xz00_4546,
				BGl_makezd2structzd2appz00zzcfa_info2z00);
		}

	}



/* get-src-approx-type */
	obj_t BGl_getzd2srczd2approxzd2typezd2zzcfa_approxz00(BgL_approxz00_bglt
		BgL_az00_17)
	{
		{	/* Cfa/approx.scm 193 */
			{	/* Cfa/approx.scm 194 */
				BgL_typez00_bglt BgL_typez00_3596;

				BgL_typez00_3596 =
					(((BgL_approxz00_bglt) COBJECT(BgL_az00_17))->BgL_typez00);
				if ((((obj_t) BgL_typez00_3596) == BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/approx.scm 196 */
						return ((obj_t) BgL_typez00_3596);
					}
				else
					{	/* Cfa/approx.scm 198 */
						bool_t BgL_test2230z00_4842;

						{	/* Cfa/approx.scm 198 */
							obj_t BgL_arg1796z00_3641;

							BgL_arg1796z00_3641 =
								BGl_setzd2lengthzd2zzcfa_setz00(
								(((BgL_approxz00_bglt) COBJECT(BgL_az00_17))->BgL_allocsz00));
							BgL_test2230z00_4842 =
								((long) CINT(BgL_arg1796z00_3641) == ((long) 0));
						}
						if (BgL_test2230z00_4842)
							{	/* Cfa/approx.scm 198 */
								return ((obj_t) BgL_typez00_3596);
							}
						else
							{	/* Cfa/approx.scm 201 */
								obj_t BgL_allocsz00_3601;

								BgL_allocsz00_3601 =
									BGl_setzd2ze3listz31zzcfa_setz00(
									(((BgL_approxz00_bglt) COBJECT(BgL_az00_17))->BgL_allocsz00));
								{	/* Cfa/approx.scm 202 */
									bool_t BgL_test2231z00_4850;

									{
										obj_t BgL_l1579z00_3633;

										BgL_l1579z00_3633 = BgL_allocsz00_3601;
									BgL_zc3z04anonymousza31779ze3z87_3634:
										if (NULLP(BgL_l1579z00_3633))
											{	/* Cfa/approx.scm 202 */
												BgL_test2231z00_4850 = ((bool_t) 0);
											}
										else
											{	/* Cfa/approx.scm 202 */
												bool_t BgL__ortest_1581z00_3636;

												{	/* Cfa/approx.scm 202 */
													obj_t BgL_arg1784z00_3638;

													BgL_arg1784z00_3638 =
														CAR(((obj_t) BgL_l1579z00_3633));
													{	/* Cfa/approx.scm 166 */
														bool_t BgL__ortest_1172z00_4403;

														BgL__ortest_1172z00_4403 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1784z00_3638,
															BGl_makezd2vectorzd2appz00zzcfa_info2z00);
														if (BgL__ortest_1172z00_4403)
															{	/* Cfa/approx.scm 166 */
																BgL__ortest_1581z00_3636 =
																	BgL__ortest_1172z00_4403;
															}
														else
															{	/* Cfa/approx.scm 166 */
																BgL__ortest_1581z00_3636 =
																	BGl_isazf3zf3zz__objectz00
																	(BgL_arg1784z00_3638,
																	BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
															}
													}
												}
												if (BgL__ortest_1581z00_3636)
													{	/* Cfa/approx.scm 202 */
														BgL_test2231z00_4850 = BgL__ortest_1581z00_3636;
													}
												else
													{	/* Cfa/approx.scm 202 */
														obj_t BgL_arg1782z00_3637;

														BgL_arg1782z00_3637 =
															CDR(((obj_t) BgL_l1579z00_3633));
														{
															obj_t BgL_l1579z00_4861;

															BgL_l1579z00_4861 = BgL_arg1782z00_3637;
															BgL_l1579z00_3633 = BgL_l1579z00_4861;
															goto BgL_zc3z04anonymousza31779ze3z87_3634;
														}
													}
											}
									}
									if (BgL_test2231z00_4850)
										{	/* Cfa/approx.scm 203 */
											bool_t BgL_test2235z00_4862;

											if (
												(((obj_t) BgL_typez00_3596) ==
													BGl_za2vectorza2z00zztype_cachez00))
												{
													obj_t BgL_l1582z00_3624;

													BgL_l1582z00_3624 = BgL_allocsz00_3601;
												BgL_zc3z04anonymousza31773ze3z87_3625:
													if (NULLP(BgL_l1582z00_3624))
														{	/* Cfa/approx.scm 203 */
															BgL_test2235z00_4862 = ((bool_t) 1);
														}
													else
														{	/* Cfa/approx.scm 203 */
															bool_t BgL_test2238z00_4868;

															{	/* Cfa/approx.scm 203 */
																obj_t BgL_arg1778z00_3630;

																BgL_arg1778z00_3630 =
																	CAR(((obj_t) BgL_l1582z00_3624));
																{	/* Cfa/approx.scm 166 */
																	bool_t BgL__ortest_1172z00_4409;

																	BgL__ortest_1172z00_4409 =
																		BGl_isazf3zf3zz__objectz00
																		(BgL_arg1778z00_3630,
																		BGl_makezd2vectorzd2appz00zzcfa_info2z00);
																	if (BgL__ortest_1172z00_4409)
																		{	/* Cfa/approx.scm 166 */
																			BgL_test2238z00_4868 =
																				BgL__ortest_1172z00_4409;
																		}
																	else
																		{	/* Cfa/approx.scm 166 */
																			BgL_test2238z00_4868 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_arg1778z00_3630,
																				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
																		}
																}
															}
															if (BgL_test2238z00_4868)
																{	/* Cfa/approx.scm 203 */
																	obj_t BgL_arg1775z00_3629;

																	BgL_arg1775z00_3629 =
																		CDR(((obj_t) BgL_l1582z00_3624));
																	{
																		obj_t BgL_l1582z00_4876;

																		BgL_l1582z00_4876 = BgL_arg1775z00_3629;
																		BgL_l1582z00_3624 = BgL_l1582z00_4876;
																		goto BgL_zc3z04anonymousza31773ze3z87_3625;
																	}
																}
															else
																{	/* Cfa/approx.scm 203 */
																	BgL_test2235z00_4862 = ((bool_t) 0);
																}
														}
												}
											else
												{	/* Cfa/approx.scm 203 */
													BgL_test2235z00_4862 = ((bool_t) 0);
												}
											if (BgL_test2235z00_4862)
												{	/* Cfa/approx.scm 203 */
													return BGl_za2vectorza2z00zztype_cachez00;
												}
											else
												{	/* Cfa/approx.scm 203 */
													return BGl_za2objza2z00zztype_cachez00;
												}
										}
									else
										{	/* Cfa/approx.scm 202 */
											return ((obj_t) BgL_typez00_3596);
										}
								}
							}
					}
			}
		}

	}



/* approx-set-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_18, BgL_typez00_bglt BgL_typez00_19)
	{
		{	/* Cfa/approx.scm 215 */
			{	/* Cfa/approx.scm 216 */
				BgL_typez00_bglt BgL_dtypez00_3643;

				BgL_dtypez00_3643 =
					(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00);
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->
						BgL_typezd2lockedzf3z21))
					{	/* Cfa/approx.scm 218 */
						return BFALSE;
					}
				else
					{	/* Cfa/approx.scm 218 */
						if ((((obj_t) BgL_typez00_19) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/approx.scm 220 */
								return BFALSE;
							}
						else
							{	/* Cfa/approx.scm 220 */
								if ((((obj_t) BgL_dtypez00_3643) == ((obj_t) BgL_typez00_19)))
									{	/* Cfa/approx.scm 222 */
										return BFALSE;
									}
								else
									{	/* Cfa/approx.scm 224 */
										bool_t BgL_test2243z00_4888;

										{	/* Cfa/approx.scm 224 */
											bool_t BgL_test2244z00_4889;

											if (
												(((obj_t) BgL_dtypez00_3643) ==
													BGl_za2longza2z00zztype_cachez00))
												{	/* Cfa/approx.scm 224 */
													BgL_test2244z00_4889 =
														(
														((obj_t) BgL_typez00_19) ==
														BGl_za2intza2z00zztype_cachez00);
												}
											else
												{	/* Cfa/approx.scm 224 */
													BgL_test2244z00_4889 = ((bool_t) 0);
												}
											if (BgL_test2244z00_4889)
												{	/* Cfa/approx.scm 224 */
													BgL_test2243z00_4888 = ((bool_t) 1);
												}
											else
												{	/* Cfa/approx.scm 225 */
													bool_t BgL_test2246z00_4895;

													if (
														(((obj_t) BgL_dtypez00_3643) ==
															BGl_za2intza2z00zztype_cachez00))
														{	/* Cfa/approx.scm 225 */
															BgL_test2246z00_4895 =
																(
																((obj_t) BgL_typez00_19) ==
																BGl_za2longza2z00zztype_cachez00);
														}
													else
														{	/* Cfa/approx.scm 225 */
															BgL_test2246z00_4895 = ((bool_t) 0);
														}
													if (BgL_test2246z00_4895)
														{	/* Cfa/approx.scm 225 */
															BgL_test2243z00_4888 = ((bool_t) 1);
														}
													else
														{	/* Cfa/approx.scm 225 */
															if (
																(((obj_t) BgL_dtypez00_3643) ==
																	BGl_za2bintza2z00zztype_cachez00))
																{	/* Cfa/approx.scm 226 */
																	bool_t BgL__ortest_1174z00_3727;

																	BgL__ortest_1174z00_3727 =
																		(
																		((obj_t) BgL_typez00_19) ==
																		BGl_za2intza2z00zztype_cachez00);
																	if (BgL__ortest_1174z00_3727)
																		{	/* Cfa/approx.scm 226 */
																			BgL_test2243z00_4888 =
																				BgL__ortest_1174z00_3727;
																		}
																	else
																		{	/* Cfa/approx.scm 226 */
																			BgL_test2243z00_4888 =
																				(
																				((obj_t) BgL_typez00_19) ==
																				BGl_za2longza2z00zztype_cachez00);
																		}
																}
															else
																{	/* Cfa/approx.scm 226 */
																	BgL_test2243z00_4888 = ((bool_t) 0);
																}
														}
												}
										}
										if (BgL_test2243z00_4888)
											{	/* Cfa/approx.scm 224 */
												return BFALSE;
											}
										else
											{	/* Cfa/approx.scm 229 */
												bool_t BgL_test2250z00_4909;

												{	/* Cfa/approx.scm 229 */
													bool_t BgL_test2251z00_4910;

													if (
														(((obj_t) BgL_dtypez00_3643) ==
															BGl_za2longza2z00zztype_cachez00))
														{	/* Cfa/approx.scm 229 */
															BgL_test2251z00_4910 = ((bool_t) 1);
														}
													else
														{	/* Cfa/approx.scm 229 */
															BgL_test2251z00_4910 =
																(
																((obj_t) BgL_dtypez00_3643) ==
																BGl_za2intza2z00zztype_cachez00);
														}
													if (BgL_test2251z00_4910)
														{	/* Cfa/approx.scm 229 */
															BgL_test2250z00_4909 =
																(
																((obj_t) BgL_typez00_19) ==
																BGl_za2bintza2z00zztype_cachez00);
														}
													else
														{	/* Cfa/approx.scm 229 */
															BgL_test2250z00_4909 = ((bool_t) 0);
														}
												}
												if (BgL_test2250z00_4909)
													{	/* Cfa/approx.scm 229 */
														{	/* Cfa/approx.scm 230 */
															BgL_typez00_bglt BgL_vz00_4416;

															BgL_vz00_4416 =
																((BgL_typez00_bglt)
																BGl_za2bintza2z00zztype_cachez00);
															((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_4416), BUNSPEC);
														}
														return BTRUE;
													}
												else
													{	/* Cfa/approx.scm 232 */
														bool_t BgL_test2253z00_4920;

														if (
															(((obj_t) BgL_dtypez00_3643) ==
																BGl_za2epairza2z00zztype_cachez00))
															{	/* Cfa/approx.scm 232 */
																BgL_test2253z00_4920 =
																	(
																	((obj_t) BgL_typez00_19) ==
																	BGl_za2pairza2z00zztype_cachez00);
															}
														else
															{	/* Cfa/approx.scm 232 */
																BgL_test2253z00_4920 = ((bool_t) 0);
															}
														if (BgL_test2253z00_4920)
															{	/* Cfa/approx.scm 232 */
																{	/* Cfa/approx.scm 234 */
																	BgL_typez00_bglt BgL_vz00_4418;

																	BgL_vz00_4418 =
																		((BgL_typez00_bglt)
																		BGl_za2pairza2z00zztype_cachez00);
																	((((BgL_approxz00_bglt)
																				COBJECT(BgL_dstz00_18))->BgL_typez00) =
																		((BgL_typez00_bglt) BgL_vz00_4418),
																		BUNSPEC);
																}
																return
																	BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																	(CNST_TABLE_REF(((long) 1)));
															}
														else
															{	/* Cfa/approx.scm 236 */
																bool_t BgL_test2255z00_4930;

																if (
																	(((obj_t) BgL_dtypez00_3643) ==
																		BGl_za2pairzd2nilza2zd2zztype_cachez00))
																	{	/* Cfa/approx.scm 237 */
																		bool_t BgL__ortest_1175z00_3718;

																		BgL__ortest_1175z00_3718 =
																			(
																			((obj_t) BgL_typez00_19) ==
																			BGl_za2bnilza2z00zztype_cachez00);
																		if (BgL__ortest_1175z00_3718)
																			{	/* Cfa/approx.scm 237 */
																				BgL_test2255z00_4930 =
																					BgL__ortest_1175z00_3718;
																			}
																		else
																			{	/* Cfa/approx.scm 238 */
																				bool_t BgL__ortest_1176z00_3719;

																				BgL__ortest_1176z00_3719 =
																					(
																					((obj_t) BgL_typez00_19) ==
																					BGl_za2pairza2z00zztype_cachez00);
																				if (BgL__ortest_1176z00_3719)
																					{	/* Cfa/approx.scm 238 */
																						BgL_test2255z00_4930 =
																							BgL__ortest_1176z00_3719;
																					}
																				else
																					{	/* Cfa/approx.scm 238 */
																						bool_t BgL__ortest_1177z00_3720;

																						BgL__ortest_1177z00_3720 =
																							(
																							((obj_t) BgL_typez00_19) ==
																							BGl_za2epairza2z00zztype_cachez00);
																						if (BgL__ortest_1177z00_3720)
																							{	/* Cfa/approx.scm 238 */
																								BgL_test2255z00_4930 =
																									BgL__ortest_1177z00_3720;
																							}
																						else
																							{	/* Cfa/approx.scm 238 */
																								BgL_test2255z00_4930 =
																									(
																									((obj_t) BgL_typez00_19) ==
																									BGl_za2listza2z00zztype_cachez00);
																							}
																					}
																			}
																	}
																else
																	{	/* Cfa/approx.scm 236 */
																		BgL_test2255z00_4930 = ((bool_t) 0);
																	}
																if (BgL_test2255z00_4930)
																	{	/* Cfa/approx.scm 236 */
																		return BFALSE;
																	}
																else
																	{	/* Cfa/approx.scm 242 */
																		bool_t BgL_test2260z00_4945;

																		if (BGl_bigloozd2typezf3z21zztype_typez00
																			(BgL_dtypez00_3643))
																			{	/* Cfa/approx.scm 242 */
																				BgL_typez00_bglt BgL_arg1847z00_3716;

																				BgL_arg1847z00_3716 =
																					BGl_getzd2bigloozd2typez00zztype_cachez00
																					(BgL_typez00_19);
																				BgL_test2260z00_4945 =
																					(((obj_t) BgL_dtypez00_3643) ==
																					((obj_t) BgL_arg1847z00_3716));
																			}
																		else
																			{	/* Cfa/approx.scm 242 */
																				BgL_test2260z00_4945 = ((bool_t) 0);
																			}
																		if (BgL_test2260z00_4945)
																			{	/* Cfa/approx.scm 242 */
																				return BTRUE;
																			}
																		else
																			{	/* Cfa/approx.scm 246 */
																				bool_t BgL_test2262z00_4952;

																				{	/* Cfa/approx.scm 246 */
																					bool_t BgL_test2263z00_4953;

																					if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_dtypez00_3643))
																						{	/* Cfa/approx.scm 246 */
																							BgL_typez00_bglt
																								BgL_arg1846z00_3714;
																							BgL_arg1846z00_3714 =
																								BGl_getzd2bigloozd2typez00zztype_cachez00
																								(BgL_typez00_19);
																							BgL_test2263z00_4953 =
																								(((obj_t) BgL_dtypez00_3643) ==
																								((obj_t) BgL_arg1846z00_3714));
																						}
																					else
																						{	/* Cfa/approx.scm 246 */
																							BgL_test2263z00_4953 =
																								((bool_t) 0);
																						}
																					if (BgL_test2263z00_4953)
																						{	/* Cfa/approx.scm 246 */
																							BgL_test2262z00_4952 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Cfa/approx.scm 246 */
																							if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_19))
																								{	/* Cfa/approx.scm 247 */
																									BgL_typez00_bglt
																										BgL_arg1845z00_3712;
																									BgL_arg1845z00_3712 =
																										BGl_getzd2bigloozd2typez00zztype_cachez00
																										(BgL_dtypez00_3643);
																									BgL_test2262z00_4952 =
																										(((obj_t) BgL_typez00_19) ==
																										((obj_t)
																											BgL_arg1845z00_3712));
																								}
																							else
																								{	/* Cfa/approx.scm 247 */
																									BgL_test2262z00_4952 =
																										((bool_t) 0);
																								}
																						}
																				}
																				if (BgL_test2262z00_4952)
																					{	/* Cfa/approx.scm 246 */
																						if (
																							(((obj_t) BgL_typez00_19) ==
																								BGl_za2objza2z00zztype_cachez00))
																							{	/* Cfa/approx.scm 249 */
																								((((BgL_approxz00_bglt)
																											COBJECT(BgL_dstz00_18))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BgL_typez00_19), BUNSPEC);
																							}
																						else
																							{	/* Cfa/approx.scm 249 */
																								BFALSE;
																							}
																						return BTRUE;
																					}
																				else
																					{	/* Cfa/approx.scm 252 */
																						bool_t BgL_test2267z00_4970;

																						{	/* Cfa/approx.scm 252 */
																							bool_t BgL_test2268z00_4971;

																							if (
																								(((obj_t) BgL_dtypez00_3643) ==
																									BGl_za2bnilza2z00zztype_cachez00))
																								{	/* Cfa/approx.scm 252 */
																									BgL_test2268z00_4971 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Cfa/approx.scm 252 */
																									if (
																										(((obj_t) BgL_dtypez00_3643)
																											==
																											BGl_za2pairza2z00zztype_cachez00))
																										{	/* Cfa/approx.scm 252 */
																											BgL_test2268z00_4971 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Cfa/approx.scm 252 */
																											BgL_test2268z00_4971 =
																												(
																												((obj_t)
																													BgL_dtypez00_3643) ==
																												BGl_za2epairza2z00zztype_cachez00);
																										}
																								}
																							if (BgL_test2268z00_4971)
																								{	/* Cfa/approx.scm 253 */
																									bool_t
																										BgL__ortest_1179z00_3704;
																									BgL__ortest_1179z00_3704 =
																										(((obj_t) BgL_typez00_19) ==
																										BGl_za2bnilza2z00zztype_cachez00);
																									if (BgL__ortest_1179z00_3704)
																										{	/* Cfa/approx.scm 253 */
																											BgL_test2267z00_4970 =
																												BgL__ortest_1179z00_3704;
																										}
																									else
																										{	/* Cfa/approx.scm 254 */
																											bool_t
																												BgL__ortest_1180z00_3705;
																											BgL__ortest_1180z00_3705 =
																												(((obj_t)
																													BgL_typez00_19) ==
																												BGl_za2pairza2z00zztype_cachez00);
																											if (BgL__ortest_1180z00_3705)
																												{	/* Cfa/approx.scm 254 */
																													BgL_test2267z00_4970 =
																														BgL__ortest_1180z00_3705;
																												}
																											else
																												{	/* Cfa/approx.scm 254 */
																													bool_t
																														BgL__ortest_1181z00_3706;
																													BgL__ortest_1181z00_3706
																														=
																														(((obj_t)
																															BgL_typez00_19) ==
																														BGl_za2epairza2z00zztype_cachez00);
																													if (BgL__ortest_1181z00_3706)
																														{	/* Cfa/approx.scm 254 */
																															BgL_test2267z00_4970
																																=
																																BgL__ortest_1181z00_3706;
																														}
																													else
																														{	/* Cfa/approx.scm 255 */
																															bool_t
																																BgL__ortest_1182z00_3707;
																															BgL__ortest_1182z00_3707
																																=
																																(((obj_t)
																																	BgL_typez00_19)
																																==
																																BGl_za2pairzd2nilza2zd2zztype_cachez00);
																															if (BgL__ortest_1182z00_3707)
																																{	/* Cfa/approx.scm 255 */
																																	BgL_test2267z00_4970
																																		=
																																		BgL__ortest_1182z00_3707;
																																}
																															else
																																{	/* Cfa/approx.scm 255 */
																																	BgL_test2267z00_4970
																																		=
																																		(((obj_t)
																																			BgL_typez00_19)
																																		==
																																		BGl_za2listza2z00zztype_cachez00);
																																}
																														}
																												}
																										}
																								}
																							else
																								{	/* Cfa/approx.scm 252 */
																									BgL_test2267z00_4970 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_test2267z00_4970)
																							{	/* Cfa/approx.scm 252 */
																								{	/* Cfa/approx.scm 258 */
																									BgL_typez00_bglt
																										BgL_vz00_4422;
																									BgL_vz00_4422 =
																										((BgL_typez00_bglt)
																										BGl_za2pairzd2nilza2zd2zztype_cachez00);
																									((((BgL_approxz00_bglt)
																												COBJECT
																												(BgL_dstz00_18))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_vz00_4422), BUNSPEC);
																								}
																								return
																									BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																									(CNST_TABLE_REF(((long) 1)));
																							}
																						else
																							{	/* Cfa/approx.scm 260 */
																								bool_t BgL_test2275z00_4998;

																								{	/* Cfa/approx.scm 260 */
																									bool_t BgL_test2276z00_4999;

																									{	/* Cfa/approx.scm 260 */
																										bool_t BgL_res2117z00_4423;

																										BgL_res2117z00_4423 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_dtypez00_3643),
																											BGl_tclassz00zzobject_classz00);
																										BgL_test2276z00_4999 =
																											BgL_res2117z00_4423;
																									}
																									if (BgL_test2276z00_4999)
																										{	/* Cfa/approx.scm 260 */
																											bool_t
																												BgL_res2118z00_4424;
																											BgL_res2118z00_4424 =
																												BGl_isazf3zf3zz__objectz00
																												(((obj_t)
																													BgL_typez00_19),
																												BGl_tclassz00zzobject_classz00);
																											BgL_test2275z00_4998 =
																												BgL_res2118z00_4424;
																										}
																									else
																										{	/* Cfa/approx.scm 260 */
																											BgL_test2275z00_4998 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_test2275z00_4998)
																									{	/* Cfa/approx.scm 261 */
																										obj_t BgL_superz00_3691;

																										BgL_superz00_3691 =
																											BGl_findzd2commonzd2superzd2classzd2zzobject_classz00
																											(((BgL_typez00_bglt)
																												BgL_dtypez00_3643),
																											((BgL_typez00_bglt)
																												BgL_typez00_19));
																										if ((BgL_superz00_3691 ==
																												((obj_t)
																													BgL_dtypez00_3643)))
																											{	/* Cfa/approx.scm 263 */
																												return BFALSE;
																											}
																										else
																											{	/* Cfa/approx.scm 263 */
																												if (CBOOL
																													(BgL_superz00_3691))
																													{	/* Cfa/approx.scm 265 */
																														((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_superz00_3691)), BUNSPEC);
																														return
																															BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																															(CNST_TABLE_REF((
																																	(long) 1)));
																													}
																												else
																													{	/* Cfa/approx.scm 265 */
																														{	/* Cfa/approx.scm 270 */
																															BgL_typez00_bglt
																																BgL_vz00_4428;
																															BgL_vz00_4428 =
																																(
																																(BgL_typez00_bglt)
																																BGl_za2objza2z00zztype_cachez00);
																															((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) BgL_vz00_4428), BUNSPEC);
																														}
																														return
																															BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																															(CNST_TABLE_REF((
																																	(long) 1)));
																									}}}
																								else
																									{	/* Cfa/approx.scm 260 */
																										if (
																											(((obj_t)
																													BgL_dtypez00_3643) ==
																												BGl_za2objza2z00zztype_cachez00))
																											{	/* Cfa/approx.scm 272 */
																												return BFALSE;
																											}
																										else
																											{	/* Cfa/approx.scm 274 */
																												bool_t
																													BgL_test2280z00_5023;
																												if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_dtypez00_3643))
																													{	/* Cfa/approx.scm 274 */
																														BgL_test2280z00_5023
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Cfa/approx.scm 274 */
																														if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_19))
																															{	/* Cfa/approx.scm 274 */
																																BgL_test2280z00_5023
																																	=
																																	((bool_t) 0);
																															}
																														else
																															{	/* Cfa/approx.scm 274 */
																																BgL_test2280z00_5023
																																	=
																																	((bool_t) 1);
																															}
																													}
																												if (BgL_test2280z00_5023)
																													{	/* Cfa/approx.scm 274 */
																														if (BGl_czd2subtypezf3z21zztype_miscz00(BgL_typez00_19, BgL_dtypez00_3643))
																															{	/* Cfa/approx.scm 276 */
																																return BFALSE;
																															}
																														else
																															{	/* Cfa/approx.scm 276 */
																																if (BGl_czd2subtypezf3z21zztype_miscz00(BgL_dtypez00_3643, BgL_typez00_19))
																																	{	/* Cfa/approx.scm 278 */
																																		((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) BgL_typez00_19), BUNSPEC);
																																		return
																																			BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																																			(CNST_TABLE_REF
																																			(((long)
																																					1)));
																																	}
																																else
																																	{	/* Cfa/approx.scm 278 */
																																		{	/* Cfa/approx.scm 282 */
																																			BgL_typez00_bglt
																																				BgL_vz00_4432;
																																			BgL_vz00_4432
																																				=
																																				(
																																				(BgL_typez00_bglt)
																																				BGl_za2objza2z00zztype_cachez00);
																																			((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) BgL_vz00_4432), BUNSPEC);
																																		}
																																		return
																																			BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																																			(CNST_TABLE_REF
																																			(((long)
																																					1)));
																													}}}
																												else
																													{	/* Cfa/approx.scm 274 */
																														if (
																															(((obj_t)
																																	BgL_dtypez00_3643)
																																==
																																BGl_za2_za2z00zztype_cachez00))
																															{	/* Cfa/approx.scm 284 */
																																((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) BgL_typez00_19), BUNSPEC);
																																return
																																	BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																																	(CNST_TABLE_REF
																																	(((long) 1)));
																															}
																														else
																															{	/* Cfa/approx.scm 284 */
																																{	/* Cfa/approx.scm 288 */
																																	BgL_typez00_bglt
																																		BgL_vz00_4436;
																																	BgL_vz00_4436
																																		=
																																		(
																																		(BgL_typez00_bglt)
																																		BGl_za2objza2z00zztype_cachez00);
																																	((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_18))->BgL_typez00) = ((BgL_typez00_bglt) BgL_vz00_4436), BUNSPEC);
																																}
																																return
																																	BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																																	(CNST_TABLE_REF
																																	(((long) 1)));
		}}}}}}}}}}}}}}}}

	}



/* &approx-set-type! */
	obj_t BGl_z62approxzd2setzd2typez12z70zzcfa_approxz00(obj_t BgL_envz00_4550,
		obj_t BgL_dstz00_4551, obj_t BgL_typez00_4552)
	{
		{	/* Cfa/approx.scm 215 */
			return
				BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
				((BgL_approxz00_bglt) BgL_dstz00_4551),
				((BgL_typez00_bglt) BgL_typez00_4552));
		}

	}



/* approx-set-top! */
	BGL_EXPORTED_DEF obj_t
		BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_20)
	{
		{	/* Cfa/approx.scm 294 */
		BGl_approxzd2setzd2topz12z12zzcfa_approxz00:
			if ((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_20))->BgL_topzf3zf3))
				{	/* Cfa/approx.scm 296 */
					BFALSE;
				}
			else
				{	/* Cfa/approx.scm 296 */
					((((BgL_approxz00_bglt) COBJECT(BgL_dstz00_20))->BgL_topzf3zf3) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF(((long) 2)));
				}
			{	/* Cfa/approx.scm 299 */
				bool_t BgL_test2287z00_5057;

				{	/* Cfa/approx.scm 299 */
					obj_t BgL_arg1853z00_3735;

					BgL_arg1853z00_3735 =
						(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_20))->BgL_dupz00);
					BgL_test2287z00_5057 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1853z00_3735,
						BGl_approxz00zzcfa_infoz00);
				}
				if (BgL_test2287z00_5057)
					{	/* Cfa/approx.scm 300 */
						obj_t BgL_arg1852z00_3734;

						BgL_arg1852z00_3734 =
							(((BgL_approxz00_bglt) COBJECT(BgL_dstz00_20))->BgL_dupz00);
						{
							BgL_approxz00_bglt BgL_dstz00_5061;

							BgL_dstz00_5061 = ((BgL_approxz00_bglt) BgL_arg1852z00_3734);
							BgL_dstz00_20 = BgL_dstz00_5061;
							goto BGl_approxzd2setzd2topz12z12zzcfa_approxz00;
						}
					}
				else
					{	/* Cfa/approx.scm 299 */
						return BFALSE;
					}
			}
		}

	}



/* &approx-set-top! */
	obj_t BGl_z62approxzd2setzd2topz12z70zzcfa_approxz00(obj_t BgL_envz00_4553,
		obj_t BgL_dstz00_4554)
	{
		{	/* Cfa/approx.scm 294 */
			return
				BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
				((BgL_approxz00_bglt) BgL_dstz00_4554));
		}

	}



/* make-empty-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2emptyzd2approxz00zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 305 */
			{	/* Cfa/approx.scm 306 */
				obj_t BgL_allocsz00_3736;

				BgL_allocsz00_3736 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				{	/* Cfa/approx.scm 307 */
					BgL_approxz00_bglt BgL_new1185z00_3737;

					{	/* Cfa/approx.scm 308 */
						BgL_approxz00_bglt BgL_new1184z00_3738;

						BgL_new1184z00_3738 =
							((BgL_approxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_approxz00_bgl))));
						{	/* Cfa/approx.scm 308 */
							long BgL_arg1855z00_3739;

							{	/* Cfa/approx.scm 308 */
								long BgL_res2120z00_4441;

								BgL_res2120z00_4441 =
									BGL_CLASS_INDEX(BGl_approxz00zzcfa_infoz00);
								BgL_arg1855z00_3739 = BgL_res2120z00_4441;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1184z00_3738),
								BgL_arg1855z00_3739);
						}
						BgL_new1185z00_3737 = BgL_new1184z00_3738;
					}
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt)
								BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->
							BgL_typezd2lockedzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->
							BgL_allocsz00) = ((obj_t) BgL_allocsz00_3736), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->
							BgL_topzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->
							BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1185z00_3737))->BgL_dupz00) =
						((obj_t) BUNSPEC), BUNSPEC);
					return BgL_new1185z00_3737;
				}
			}
		}

	}



/* &make-empty-approx */
	BgL_approxz00_bglt BGl_z62makezd2emptyzd2approxz62zzcfa_approxz00(obj_t
		BgL_envz00_4555)
	{
		{	/* Cfa/approx.scm 305 */
			return BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
		}

	}



/* make-type-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt BgL_typez00_21)
	{
		{	/* Cfa/approx.scm 314 */
			{	/* Cfa/approx.scm 315 */
				obj_t BgL_allocsz00_3740;

				BgL_allocsz00_3740 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				{	/* Cfa/approx.scm 316 */
					BgL_approxz00_bglt BgL_new1187z00_3741;

					{	/* Cfa/approx.scm 318 */
						BgL_approxz00_bglt BgL_new1186z00_3743;

						BgL_new1186z00_3743 =
							((BgL_approxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_approxz00_bgl))));
						{	/* Cfa/approx.scm 318 */
							long BgL_arg1857z00_3744;

							{	/* Cfa/approx.scm 318 */
								long BgL_res2121z00_4445;

								BgL_res2121z00_4445 =
									BGL_CLASS_INDEX(BGl_approxz00zzcfa_infoz00);
								BgL_arg1857z00_3744 = BgL_res2121z00_4445;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1186z00_3743),
								BgL_arg1857z00_3744);
						}
						BgL_new1187z00_3741 = BgL_new1186z00_3743;
					}
					((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_typez00_21), BUNSPEC);
					{
						bool_t BgL_auxz00_5084;

						if ((((obj_t) BgL_typez00_21) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/approx.scm 317 */
								BgL_auxz00_5084 = ((bool_t) 0);
							}
						else
							{	/* Cfa/approx.scm 317 */
								BgL_auxz00_5084 = ((bool_t) 1);
							}
						((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->
								BgL_typezd2lockedzf3z21) = ((bool_t) BgL_auxz00_5084), BUNSPEC);
					}
					((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->
							BgL_allocsz00) = ((obj_t) BgL_allocsz00_3740), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->
							BgL_topzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->
							BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1187z00_3741))->BgL_dupz00) =
						((obj_t) BUNSPEC), BUNSPEC);
					return BgL_new1187z00_3741;
				}
			}
		}

	}



/* &make-type-approx */
	BgL_approxz00_bglt BGl_z62makezd2typezd2approxz62zzcfa_approxz00(obj_t
		BgL_envz00_4556, obj_t BgL_typez00_4557)
	{
		{	/* Cfa/approx.scm 314 */
			return
				BGl_makezd2typezd2approxz00zzcfa_approxz00(
				((BgL_typez00_bglt) BgL_typez00_4557));
		}

	}



/* make-type-alloc-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt
		BgL_typez00_22, BgL_nodez00_bglt BgL_allocz00_23)
	{
		{	/* Cfa/approx.scm 324 */
			{	/* Cfa/approx.scm 325 */
				obj_t BgL_allocsz00_3745;

				BgL_allocsz00_3745 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				BGl_setzd2extendz12zc0zzcfa_setz00(BgL_allocsz00_3745,
					((obj_t) BgL_allocz00_23));
				{	/* Cfa/approx.scm 327 */
					BgL_approxz00_bglt BgL_new1189z00_3746;

					{	/* Cfa/approx.scm 329 */
						BgL_approxz00_bglt BgL_new1188z00_3748;

						BgL_new1188z00_3748 =
							((BgL_approxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_approxz00_bgl))));
						{	/* Cfa/approx.scm 329 */
							long BgL_arg1859z00_3749;

							{	/* Cfa/approx.scm 329 */
								long BgL_res2122z00_4449;

								BgL_res2122z00_4449 =
									BGL_CLASS_INDEX(BGl_approxz00zzcfa_infoz00);
								BgL_arg1859z00_3749 = BgL_res2122z00_4449;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1188z00_3748),
								BgL_arg1859z00_3749);
						}
						BgL_new1189z00_3746 = BgL_new1188z00_3748;
					}
					((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_typez00_22), BUNSPEC);
					{
						bool_t BgL_auxz00_5103;

						if ((((obj_t) BgL_typez00_22) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/approx.scm 328 */
								BgL_auxz00_5103 = ((bool_t) 0);
							}
						else
							{	/* Cfa/approx.scm 328 */
								BgL_auxz00_5103 = ((bool_t) 1);
							}
						((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->
								BgL_typezd2lockedzf3z21) = ((bool_t) BgL_auxz00_5103), BUNSPEC);
					}
					((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->
							BgL_allocsz00) = ((obj_t) BgL_allocsz00_3745), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->
							BgL_topzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->
							BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
					((((BgL_approxz00_bglt) COBJECT(BgL_new1189z00_3746))->BgL_dupz00) =
						((obj_t) BUNSPEC), BUNSPEC);
					return BgL_new1189z00_3746;
				}
			}
		}

	}



/* &make-type-alloc-approx */
	BgL_approxz00_bglt BGl_z62makezd2typezd2alloczd2approxzb0zzcfa_approxz00(obj_t
		BgL_envz00_4558, obj_t BgL_typez00_4559, obj_t BgL_allocz00_4560)
	{
		{	/* Cfa/approx.scm 324 */
			return
				BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
				((BgL_typez00_bglt) BgL_typez00_4559),
				((BgL_nodez00_bglt) BgL_allocz00_4560));
		}

	}



/* for-each-approx-alloc */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t
		BgL_procz00_25, BgL_approxz00_bglt BgL_approxz00_26)
	{
		{	/* Cfa/approx.scm 354 */
			return
				BGl_setzd2forzd2eachz00zzcfa_setz00(BgL_procz00_25,
				(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_26))->BgL_allocsz00));
		}

	}



/* &for-each-approx-alloc */
	obj_t BGl_z62forzd2eachzd2approxzd2alloczb0zzcfa_approxz00(obj_t
		BgL_envz00_4561, obj_t BgL_procz00_4562, obj_t BgL_approxz00_4563)
	{
		{	/* Cfa/approx.scm 354 */
			return
				BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(BgL_procz00_4562,
				((BgL_approxz00_bglt) BgL_approxz00_4563));
		}

	}



/* empty-approx-alloc? */
	BGL_EXPORTED_DEF obj_t
		BGl_emptyzd2approxzd2alloczf3zf3zzcfa_approxz00(BgL_approxz00_bglt
		BgL_approxz00_27)
	{
		{	/* Cfa/approx.scm 361 */
			{	/* Cfa/approx.scm 362 */
				obj_t BgL_arg1862z00_4454;

				BgL_arg1862z00_4454 =
					BGl_setzd2lengthzd2zzcfa_setz00(
					(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_27))->BgL_allocsz00));
				return BBOOL(((long) CINT(BgL_arg1862z00_4454) == ((long) 0)));
		}}

	}



/* &empty-approx-alloc? */
	obj_t BGl_z62emptyzd2approxzd2alloczf3z91zzcfa_approxz00(obj_t
		BgL_envz00_4564, obj_t BgL_approxz00_4565)
	{
		{	/* Cfa/approx.scm 361 */
			return
				BGl_emptyzd2approxzd2alloczf3zf3zzcfa_approxz00(
				((BgL_approxz00_bglt) BgL_approxz00_4565));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_proc2145z00zzcfa_approxz00, BGl_nodez00zzast_nodez00,
				BGl_string2146z00zzcfa_approxz00);
		}

	}



/* &get-node-atom-value1587 */
	obj_t BGl_z62getzd2nodezd2atomzd2value1587zb0zzcfa_approxz00(obj_t
		BgL_envz00_4567, obj_t BgL_nodez00_4568)
	{
		{	/* Cfa/approx.scm 369 */
			return CNST_TABLE_REF(((long) 3));
		}

	}



/* get-node-atom-value */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt
		BgL_nodez00_28)
	{
		{	/* Cfa/approx.scm 369 */
			{	/* Cfa/approx.scm 369 */
				obj_t BgL_method1588z00_3758;

				{	/* Cfa/approx.scm 369 */
					obj_t BgL_res2134z00_4495;

					{	/* Cfa/approx.scm 369 */
						long BgL_objzd2classzd2numz00_4460;

						{	/* Cfa/approx.scm 369 */
							long BgL_res2124z00_4463;

							BgL_res2124z00_4463 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_28));
							BgL_objzd2classzd2numz00_4460 = BgL_res2124z00_4463;
						}
						{	/* Cfa/approx.scm 369 */
							obj_t BgL_arg1813z00_4461;

							BgL_arg1813z00_4461 =
								PROCEDURE_REF
								(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
								(int) (((long) 1)));
							{	/* Cfa/approx.scm 369 */
								int BgL_offsetz00_4465;

								BgL_offsetz00_4465 = (int) (BgL_objzd2classzd2numz00_4460);
								{	/* Cfa/approx.scm 369 */
									long BgL_offsetz00_4466;

									BgL_offsetz00_4466 =
										((long) (BgL_offsetz00_4465) - OBJECT_TYPE);
									{	/* Cfa/approx.scm 369 */
										long BgL_modz00_4467;

										BgL_modz00_4467 =
											(BgL_offsetz00_4466 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/approx.scm 369 */
											long BgL_restz00_4469;

											BgL_restz00_4469 =
												(BgL_offsetz00_4466 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/approx.scm 369 */

												{	/* Cfa/approx.scm 369 */
													obj_t BgL_bucketz00_4471;

													BgL_bucketz00_4471 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4461), BgL_modz00_4467);
													BgL_res2134z00_4495 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4471), BgL_restz00_4469);
					}}}}}}}}
					BgL_method1588z00_3758 = BgL_res2134z00_4495;
				}
				return
					PROCEDURE_ENTRY(BgL_method1588z00_3758) (BgL_method1588z00_3758,
					((obj_t) BgL_nodez00_28), BEOA);
			}
		}

	}



/* &get-node-atom-value */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezb0zzcfa_approxz00(obj_t
		BgL_envz00_4569, obj_t BgL_nodez00_4570)
	{
		{	/* Cfa/approx.scm 369 */
			return
				BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
				((BgL_nodez00_bglt) BgL_nodez00_4570));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_approxz00zzcfa_infoz00,
				BGl_proc2147z00zzcfa_approxz00, BGl_string2148z00zzcfa_approxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_atomz00zzast_nodez00, BGl_proc2149z00zzcfa_approxz00,
				BGl_string2150z00zzcfa_approxz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_varz00zzast_nodez00, BGl_proc2151z00zzcfa_approxz00,
				BGl_string2150z00zzcfa_approxz00);
		}

	}



/* &get-node-atom-value-1592 */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezd21592z62zzcfa_approxz00(obj_t
		BgL_envz00_4574, obj_t BgL_nodez00_4575)
	{
		{	/* Cfa/approx.scm 381 */
			{	/* Cfa/approx.scm 382 */
				BgL_variablez00_bglt BgL_vz00_4598;

				BgL_vz00_4598 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_4575)))->BgL_variablez00);
				{	/* Cfa/approx.scm 383 */
					bool_t BgL_test2290z00_5165;

					{	/* Cfa/approx.scm 383 */
						bool_t BgL_test2291z00_5166;

						{	/* Cfa/approx.scm 383 */
							bool_t BgL_res2141z00_4599;

							BgL_res2141z00_4599 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_vz00_4598), BGl_reshapedzd2localzd2zzcfa_infoz00);
							BgL_test2291z00_5166 = BgL_res2141z00_4599;
						}
						if (BgL_test2291z00_5166)
							{	/* Cfa/approx.scm 383 */
								obj_t BgL_arg1886z00_4600;

								{
									BgL_reshapedzd2localzd2_bglt BgL_auxz00_5169;

									{
										obj_t BgL_auxz00_5170;

										{	/* Cfa/approx.scm 383 */
											BgL_objectz00_bglt BgL_tmpz00_5171;

											BgL_tmpz00_5171 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt) BgL_vz00_4598));
											BgL_auxz00_5170 = BGL_OBJECT_WIDENING(BgL_tmpz00_5171);
										}
										BgL_auxz00_5169 =
											((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_5170);
									}
									BgL_arg1886z00_4600 =
										(((BgL_reshapedzd2localzd2_bglt) COBJECT(BgL_auxz00_5169))->
										BgL_bindingzd2valuezd2);
								}
								BgL_test2290z00_5165 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1886z00_4600,
									BGl_nodez00zzast_nodez00);
							}
						else
							{	/* Cfa/approx.scm 383 */
								BgL_test2290z00_5165 = ((bool_t) 0);
							}
					}
					if (BgL_test2290z00_5165)
						{	/* Cfa/approx.scm 384 */
							obj_t BgL_arg1885z00_4601;

							{
								BgL_reshapedzd2localzd2_bglt BgL_auxz00_5178;

								{
									obj_t BgL_auxz00_5179;

									{	/* Cfa/approx.scm 384 */
										BgL_objectz00_bglt BgL_tmpz00_5180;

										BgL_tmpz00_5180 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_vz00_4598));
										BgL_auxz00_5179 = BGL_OBJECT_WIDENING(BgL_tmpz00_5180);
									}
									BgL_auxz00_5178 =
										((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_5179);
								}
								BgL_arg1885z00_4601 =
									(((BgL_reshapedzd2localzd2_bglt) COBJECT(BgL_auxz00_5178))->
									BgL_bindingzd2valuezd2);
							}
							return
								BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
								((BgL_nodez00_bglt) BgL_arg1885z00_4601));
						}
					else
						{	/* Cfa/approx.scm 383 */
							return CNST_TABLE_REF(((long) 3));
		}}}}

	}



/* &get-node-atom-value-1590 */
	obj_t BGl_z62getzd2nodezd2atomzd2valuezd21590z62zzcfa_approxz00(obj_t
		BgL_envz00_4576, obj_t BgL_nodez00_4577)
	{
		{	/* Cfa/approx.scm 375 */
			return
				(((BgL_atomz00_bglt) COBJECT(
						((BgL_atomz00_bglt) BgL_nodez00_4577)))->BgL_valuez00);
		}

	}



/* &shape-approx1586 */
	obj_t BGl_z62shapezd2approx1586zb0zzcfa_approxz00(obj_t BgL_envz00_4578,
		obj_t BgL_expz00_4579)
	{
		{	/* Cfa/approx.scm 335 */
			{	/* Cfa/approx.scm 337 */
				obj_t BgL_keysz00_4604;

				BgL_keysz00_4604 =
					BGl_setzd2ze3vectorz31zzcfa_setz00(
					(((BgL_approxz00_bglt) COBJECT(
								((BgL_approxz00_bglt) BgL_expz00_4579)))->BgL_allocsz00));
				{	/* Cfa/approx.scm 338 */
					long BgL_slenz00_4605;

					if (
						(((BgL_approxz00_bglt) COBJECT(
									((BgL_approxz00_bglt) BgL_expz00_4579)))->BgL_topzf3zf3))
						{	/* Cfa/approx.scm 339 */
							BgL_slenz00_4605 =
								(VECTOR_LENGTH(((obj_t) BgL_keysz00_4604)) + ((long) 1));
						}
					else
						{	/* Cfa/approx.scm 339 */
							BgL_slenz00_4605 = VECTOR_LENGTH(((obj_t) BgL_keysz00_4604));
						}
					{	/* Cfa/approx.scm 339 */
						obj_t BgL_structz00_4606;

						{	/* Cfa/approx.scm 340 */
							long BgL_arg1878z00_4607;

							BgL_arg1878z00_4607 = (((long) 1) + BgL_slenz00_4605);
							{	/* Cfa/approx.scm 340 */
								obj_t BgL_res2137z00_4608;

								{	/* Cfa/approx.scm 340 */
									obj_t BgL_keyz00_4609;
									int BgL_lenz00_4610;

									BgL_keyz00_4609 = CNST_TABLE_REF(((long) 4));
									BgL_lenz00_4610 = (int) (BgL_arg1878z00_4607);
									BgL_res2137z00_4608 =
										make_struct(BgL_keyz00_4609, BgL_lenz00_4610, BUNSPEC);
								}
								BgL_structz00_4606 = BgL_res2137z00_4608;
						}}
						{	/* Cfa/approx.scm 340 */

							{	/* Cfa/approx.scm 341 */
								obj_t BgL_auxz00_5208;
								int BgL_tmpz00_5206;

								BgL_auxz00_5208 =
									(((BgL_typez00_bglt) COBJECT(
											(((BgL_approxz00_bglt) COBJECT(
														((BgL_approxz00_bglt) BgL_expz00_4579)))->
												BgL_typez00)))->BgL_idz00);
								BgL_tmpz00_5206 = (int) (((long) 0));
								STRUCT_SET(BgL_structz00_4606, BgL_tmpz00_5206,
									BgL_auxz00_5208);
							}
							if (
								(((BgL_approxz00_bglt) COBJECT(
											((BgL_approxz00_bglt) BgL_expz00_4579)))->BgL_topzf3zf3))
								{	/* Cfa/approx.scm 342 */
									obj_t BgL_oz00_4611;

									BgL_oz00_4611 = CNST_TABLE_REF(((long) 5));
									{	/* Cfa/approx.scm 342 */
										int BgL_tmpz00_5217;

										BgL_tmpz00_5217 = (int) (((long) 1));
										STRUCT_SET(BgL_structz00_4606, BgL_tmpz00_5217,
											BgL_oz00_4611);
								}}
							else
								{	/* Cfa/approx.scm 342 */
									BFALSE;
								}
							{	/* Cfa/approx.scm 343 */
								long BgL_g1192z00_4612;

								if (
									(((BgL_approxz00_bglt) COBJECT(
												((BgL_approxz00_bglt) BgL_expz00_4579)))->
										BgL_topzf3zf3))
									{	/* Cfa/approx.scm 343 */
										BgL_g1192z00_4612 = ((long) 2);
									}
								else
									{	/* Cfa/approx.scm 343 */
										BgL_g1192z00_4612 = ((long) 1);
									}
								{
									long BgL_rz00_4614;
									long BgL_wz00_4615;

									BgL_rz00_4614 = BgL_g1192z00_4612;
									BgL_wz00_4615 = ((long) 0);
								BgL_loopz00_4613:
									if (
										(BgL_wz00_4615 ==
											VECTOR_LENGTH(((obj_t) BgL_keysz00_4604))))
										{	/* Cfa/approx.scm 345 */
											return BgL_structz00_4606;
										}
									else
										{	/* Cfa/approx.scm 345 */
											{	/* Cfa/approx.scm 348 */
												obj_t BgL_arg1872z00_4616;

												{	/* Cfa/approx.scm 348 */
													obj_t BgL_arg1873z00_4617;

													BgL_arg1873z00_4617 =
														VECTOR_REF(
														((obj_t) BgL_keysz00_4604), BgL_wz00_4615);
													BgL_arg1872z00_4616 =
														(((BgL_nodezf2effectzf2_bglt) COBJECT(
																((BgL_nodezf2effectzf2_bglt)
																	BgL_arg1873z00_4617)))->BgL_keyz00);
												}
												{	/* Cfa/approx.scm 348 */
													int BgL_tmpz00_5231;

													BgL_tmpz00_5231 = (int) (BgL_rz00_4614);
													STRUCT_SET(BgL_structz00_4606, BgL_tmpz00_5231,
														BgL_arg1872z00_4616);
											}}
											{
												long BgL_wz00_5236;
												long BgL_rz00_5234;

												BgL_rz00_5234 = (BgL_rz00_4614 + ((long) 1));
												BgL_wz00_5236 = (BgL_wz00_4615 + ((long) 1));
												BgL_wz00_4615 = BgL_wz00_5236;
												BgL_rz00_4614 = BgL_rz00_5234;
												goto BgL_loopz00_4613;
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_approxz00()
	{
		{	/* Cfa/approx.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 220306840),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 227653907),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2152z00zzcfa_approxz00));
		}

	}

#ifdef __cplusplus
}
#endif
