/*===========================================================================*/
/*   (Foreign/ctype.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/ctype.scm) */
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;

	typedef struct BgL_cenumz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		obj_t BgL_literalsz00;
	}               *BgL_cenumz00_bglt;

	typedef struct BgL_copaquez00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
	}                 *BgL_copaquez00_bglt;

	typedef struct BgL_cfunctionz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		long BgL_arityz00;
		struct BgL_typez00_bgl *BgL_typezd2reszd2;
		obj_t BgL_typezd2argszd2;
	}                   *BgL_cfunctionz00_bglt;

	typedef struct BgL_cptrz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_pointzd2tozd2;
		bool_t BgL_arrayzf3zf3;
	}              *BgL_cptrz00_bglt;

	typedef struct BgL_cstructz00_bgl
	{
		bool_t BgL_structzf3zf3;
		obj_t BgL_fieldsz00;
		obj_t BgL_cstructza2za2;
	}                 *BgL_cstructz00_bglt;

	typedef struct BgL_cstructza2za2_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_cstructz00;
	}                    *BgL_cstructza2za2_bglt;


	BGL_EXPORTED_DECL obj_t BGl_cenumzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1920z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2pointedzd2tozd2byzd2setz12zb0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1924z62zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1927z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2initzf3ze1zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2namezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62caliaszd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1934z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1935z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cenumzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cfunctionzd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1942z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1945z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_caliaszd2arrayzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1948z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62copaquezd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2tvectorz12zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62caliaszd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1956z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_caliaszd2nilzd2zzforeign_ctypez00();
	static obj_t BGl_z62lambda1957z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DEF obj_t BGl_caliasz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL int
		BGl_cfunctionzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cptrzd2parentszd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL int
		BGl_cenumzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62caliaszd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda1961z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1962z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2structz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1966z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1967z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cfunctionzd2typezd2argsz62zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62copaquezd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezf3z91zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1971z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1972z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62cstructzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_copaquezd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2siza7ezb5zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62caliaszd2nilzb0zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cptrzd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1980z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62caliaszd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1983z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t
		BGl_z62cptrzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1986z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62caliaszd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2namezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2importzd2locationzd2setz12z62zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cptrzf3zf3zzforeign_ctypez00(obj_t);
	static obj_t
		BGl_z62cptrzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1993z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1994z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2locationz70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2cstructza2z70zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1998z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1999z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cstructz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2namezd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2magiczf3ze1zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_z62cenumzd2literalszb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2aliasz12zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2classzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62caliaszd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl_z62cenumzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62caliaszd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2cptrzb0zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t
		BGl_z62cstructza2zd2occurrencezd2setz12zd2zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cstructza2zd2initzf3zd2setz12z21zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cstructza2zd2nilz70zzforeign_ctypez00();
	static obj_t BGl_z62copaquezd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cptrzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62cptrzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2coercezd2toz62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cfunctionzd2arityzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2arrayzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_ctypez00();
	static obj_t BGl_z62copaquezd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62caliaszd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2importzd2locationzc0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32037ze3ze5zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2typezd2argsz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_makezd2cptrzd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, int, BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl_z62cenumzd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62cptrzd2nilzb0zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt
		BGl_z62cstructza2zd2cstructz12zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_z62cstructzd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2parentszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62caliaszd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t,
		obj_t, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2cstructzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		bool_t, obj_t, obj_t);
	static obj_t BGl_z62caliaszd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2parentsz70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2cenumzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_copaquezf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl_z62caliaszd2aliaszd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt, bool_t);
	static obj_t BGl_z62cfunctionzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		int);
	static obj_t BGl_z62cstructzd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t
		BGl_z62cenumzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cfunctionzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2classzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62makezd2cenumzb0zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_z62cfunctionzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2initzf3zd2setz12z43zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cptrzd2pointzd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2cstructza2z12zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cenumzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_cfunctionzd2nilzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructzd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2classz12zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cptrzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2coercezd2toz62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2fieldszd2zzforeign_ctypez00(BgL_typez00_bglt);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2z42zd2setz12zf2zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62copaquezd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cenumzd2z42zd2setz12z32zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62caliaszd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62cstructza2zd2btypez12zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, int);
	static obj_t BGl_z62cptrzd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2functionz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cptrzd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2coercezd2toz62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62caliaszd2classzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cfunctionzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2namezd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cptrzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cptrzd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62copaquezd2aliaszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62caliaszd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62caliaszd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62caliaszd2arrayzf3z43zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2siza7ezd2setz12z75zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_cptrzd2nilzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		int);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62cstructza2zd2nilz12zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cptrzd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2coercezd2toz62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62copaquezd2parentszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cptrzd2arrayzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cenumzd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cenumzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62copaquezd2btypezb0zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_copaquez00zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl_z62copaquezd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_cstructzd2structzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static BgL_typez00_bglt BGl_z62makezd2cstructza2z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2coercezd2toz62zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62cstructzd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cptrzd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62copaquezd2classzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2cstructzb0zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62caliaszd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2tvectorz70zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2pointedzd2tozd2byz70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_copaquezd2nilzd2zzforeign_ctypez00();
	static obj_t
		BGl_z62cfunctionzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_cstructzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cfunctionzd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2cfunctionzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, long, BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2caliaszd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		bool_t);
	static obj_t BGl_z62cenumzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cenumzd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2cstructza2zd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2copaquezd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31926ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62copaquezd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_cptrzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2namezb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62declarezd2czd2aliasz12z70zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cptrzd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2coercezd2tozd2setz12z62zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cptrzd2arrayzf3z43zzforeign_ctypez00(obj_t, obj_t);
	extern bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	static obj_t BGl_z62cptrzd2coercezd2toz62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62declarezd2czd2typez12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_ctypez00 = BUNSPEC;
	static BgL_typez00_bglt BGl_z62lambda1869z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cenumzd2classzd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfunctionz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2coercezd2tozc0zzforeign_ctypez00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1872z62zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1875z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2initzf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32021ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2aliaszd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructzd2cstructza2zd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62copaquezd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2siza7ezd2setz12z17zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda1884z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1885z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2namez70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		int);
	static obj_t BGl_z62cfunctionzd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32006ze3ze5zzforeign_ctypez00(obj_t);
	static obj_t BGl_z62cstructzd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1894z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31874ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31947ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1897z62zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62copaquezd2nilzb0zzforeign_ctypez00(obj_t);
	static BgL_typez00_bglt BGl_z62cptrzd2pointzd2toz62zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cenumzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2idz70zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62cenumzd2nilzb0zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cstructza2zd2initzf3z83zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_ctypez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static BgL_typez00_bglt BGl_z62cfunctionzd2nilzb0zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cstructza2zd2cstructz70zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62copaquezd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cptrz00zzforeign_ctypez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cenumzf3z91zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2pointedzd2tozd2byz12zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	static BgL_typez00_bglt BGl_z62makezd2caliaszb0zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2z42zd2setz12z32zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_cstructza2zd2magiczf3z83zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62caliaszf3z91zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t
		BGl_z62cstructza2zd2pointedzd2tozd2byzd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cenumzd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_cenumzd2nilzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62copaquezd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62cenumzd2occurrencezb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2classzd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_cfunctionzd2arityzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t
		BGl_z62caliaszd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructza2zf3z33zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2aliaszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzf3z91zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2parentszd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cptrzd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2tvectorzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2aliaszd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2cstructza2z70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t
		BGl_z62cfunctionzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cptrzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt
		BGl_z62cfunctionzd2typezd2resz62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzf3z91zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2fieldszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2literalszd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cfunctionzd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2aliasz70zzforeign_ctypez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62cenumzd2btypezb0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62cstructza2zd2idz12zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32063ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2siza7ez17zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2copaquezb0zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31899ze3ze5zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62cfunctionzd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2004z62zzforeign_ctypez00(obj_t, obj_t);
	extern obj_t BGl_za2cobjza2z00zztype_cachez00;
	static obj_t BGl_z62lambda2005z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cstructza2zf3z51zzforeign_ctypez00(obj_t);
	static obj_t
		BGl_z62cenumzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunctionzd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cstructzd2namezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cptrzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_copaquezd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	extern long BGl_foreignzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_z62cstructza2zd2parentszd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cenumzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2014z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2tvectorzd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2018z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t
		BGl_z62cfunctionzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32049ze3ze5zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2locationzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62caliaszd2parentszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62cfunctionzd2btypezb0zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2coercezd2toza2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		int);
	BGL_EXPORTED_DECL int
		BGl_caliaszd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2022z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2siza7ezd7zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62cstructza2zd2magiczf3zd2setz12z21zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_copaquezd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t
		BGl_z62cstructza2zd2coercezd2tozd2setz12z00zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_copaquezd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda2035z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2036z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2occurrencez12zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2classzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_caliaszd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62caliaszd2z42zd2setz12z32zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62copaquezd2parentszb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62ctypezf3z91zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunctionzf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl_z62lambda2041z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2042z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2occurrencezd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt,
		int);
	static obj_t BGl_z62lambda2047z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2048z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cstructzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_cstructzd2nilzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2magiczf3zd2setz12z43zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2z42z32zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2locationz12zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2z42zd2setz12z90zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cenumzd2parentszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cptrzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cenumzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62caliaszd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2058z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2namezd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructza2zd2parentsz12zzforeign_ctypez00(obj_t, obj_t);
	static obj_t
		BGl_z62cstructzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cptrzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cfunctionzf3z91zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2061z62zzforeign_ctypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2064z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cfunctionzd2locationzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62cptrzd2classzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62copaquezd2z42zd2setz12z32zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructza2zd2z42z50zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2importzd2locationza2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_caliaszd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_cstructza2za2zzforeign_ctypez00 = BUNSPEC;
	static obj_t
		BGl_z62cstructzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda2072z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2073z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cenumzd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda2078z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2079z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00;
	static obj_t BGl_z62cfunctionzd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cstructzf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00();
	static BgL_typez00_bglt BGl_declarezd2czd2enumz12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62cptrzd2btypezb0zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_ctypez00();
	static obj_t BGl_z62caliaszd2namezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62caliaszd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_caliaszf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl_z62cstructzd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_z62cenumzd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_cptrzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructza2zd2classz70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cfunctionzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt, bool_t);
	static obj_t BGl_z62cstructza2zd2namez12zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructzd2parentszd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructzd2z42zd2setz12z32zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62makezd2cfunctionzb0zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cstructzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cstructza2zd2btypez70zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cenumzd2namezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_cstructza2zd2occurrencez70zzforeign_ctypez00(BgL_typez00_bglt);
	extern obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	static obj_t BGl_z62cfunctionzd2classzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62copaquezd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_cfunctionzd2typezd2resz00zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cstructzd2locationzd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructza2zd2locationzd2setz12zd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cstructzd2structzf3z43zzforeign_ctypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_z62caliaszd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62cstructza2zd2importzd2locationzd2setz12z00zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62copaquezd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62cstructzd2nilzb0zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cfunctionzd2magiczf3z43zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cptrzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cstructzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62cfunctionzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cenumzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62cptrzd2z42zf2zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cfunctionzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cenumzf3zf3zzforeign_ctypez00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62caliaszd2arrayzf3zd2setz12z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62copaquezd2namezd2setz12z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_caliaszd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_copaquezd2idzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62cptrzd2z42zd2setz12z32zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62caliaszd2importzd2locationz62zzforeign_ctypez00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1900z62zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cenumz00zzforeign_ctypez00 = BUNSPEC;
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62cstructzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1907z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1908z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cstructzd2tvectorzb0zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cstructzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda1912z62zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1913z62zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunctionzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62copaquezd2idzb0zzforeign_ctypez00(obj_t, obj_t);
	static obj_t __cnst[45];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2idza72261za7,
		BGl_z62cstructzd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2coe2262z00,
		BGl_z62copaquezd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2magicza72263za7,
		BGl_z62cptrzd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2pointe2264z00,
		BGl_z62cptrzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2point2265z00,
		BGl_z62cenumzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2arrayzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2arra2266z00,
		BGl_z62caliaszd2arrayzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1907za7622267z00, BGl_z62lambda1907z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1913za7622268z00, BGl_z62lambda1913z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1912za7622269z00, BGl_z62lambda1912z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1900za7622270z00, BGl_z62lambda1900z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2271za7,
		BGl_z62zc3z04anonymousza31899ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1897za7622272z00, BGl_z62lambda1897z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1894za7622273z00, BGl_z62lambda1894z62zzforeign_ctypez00,
		0L, BUNSPEC, 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1935za7622274z00, BGl_z62lambda1935z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1934za7622275z00, BGl_z62lambda1934z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1927za7622276z00, BGl_z62lambda1927z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2nameza72277za7,
		BGl_z62cenumzd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2poi2278z00,
		BGl_z62cstructzd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2l2279z00,
		BGl_z62cfunctionzd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2initza72280za7,
		BGl_z62cenumzd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2classza72281za7,
		BGl_z62cptrzd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2par2282z00,
		BGl_z62copaquezd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2283za7,
		BGl_z62zc3z04anonymousza31926ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1924za7622284z00, BGl_z62lambda1924z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1920za7622285z00, BGl_z62lambda1920z62zzforeign_ctypez00,
		0L, BUNSPEC, 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1957za7622286z00, BGl_z62lambda1957z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1956za7622287z00, BGl_z62lambda1956z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1962za7622288z00, BGl_z62lambda1962z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1961za7622289z00, BGl_z62lambda1961z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1967za7622290z00, BGl_z62lambda1967z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2magiczf3zd2envz51zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22291za7,
		BGl_z62cstructza2zd2magiczf3ze1zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1966za7622292z00, BGl_z62lambda1966z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1972za7622293z00, BGl_z62lambda1972z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2coerce2294z00,
		BGl_z62cptrzd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2cstructza2zd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2cst2295z00,
		BGl_z62cstructzd2cstructza2zd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2init2296z00,
		BGl_z62caliaszd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1971za7622297z00, BGl_z62lambda1971z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2nam2298z00,
		BGl_z62copaquezd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1948za7622299z00, BGl_z62lambda1948z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2300za7,
		BGl_z62zc3z04anonymousza31947ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1945za7622301z00, BGl_z62lambda1945z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1942za7622302z00, BGl_z62lambda1942z62zzforeign_ctypez00,
		0L, BUNSPEC, 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1994za7622303z00, BGl_z62lambda1994z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2namezd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22304za7,
		BGl_z62cstructza2zd2namez12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1993za7622305z00, BGl_z62lambda1993z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2tvec2306z00,
		BGl_z62caliaszd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1999za7622307z00, BGl_z62lambda1999z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2228z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1998za7622308z00, BGl_z62lambda1998z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2229z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2309za7,
		BGl_z62zc3z04anonymousza32006ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2occu2310z00,
		BGl_z62caliaszd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2name2311z00,
		BGl_z62caliaszd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2230z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2005za7622312z00, BGl_z62lambda2005z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2231z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2004za7622313z00, BGl_z62lambda2004z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1986za7622314z00, BGl_z62lambda1986z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2315za7,
		BGl_z62zc3z04anonymousza31985ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1983za7622316z00, BGl_z62lambda1983z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1980za7622317z00, BGl_z62lambda1980z62zzforeign_ctypez00,
		0L, BUNSPEC, 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2318za7,
		BGl_z62zc3z04anonymousza32037ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2036za7622319z00, BGl_z62lambda2036z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2035za7622320z00, BGl_z62lambda2035z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2042za7622321z00, BGl_z62lambda2042z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2041za7622322z00, BGl_z62lambda2041z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2323za7,
		BGl_z62zc3z04anonymousza32049ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2048za7622324z00, BGl_z62lambda2048z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2047za7622325z00, BGl_z62lambda2047z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2022za7622326z00, BGl_z62lambda2022z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2arityzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2a2327z00,
		BGl_z62cfunctionzd2arityzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2328za7,
		BGl_z62zc3z04anonymousza32021ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2018za7622329z00, BGl_z62lambda2018z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2014za7622330z00, BGl_z62lambda2014z62zzforeign_ctypez00,
		0L, BUNSPEC, 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2073za7622331z00, BGl_z62lambda2073z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2072za7622332z00, BGl_z62lambda2072z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2i2333z00,
		BGl_z62cfunctionzd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762cptrza7f3za791za7za7f2334za7,
		BGl_z62cptrzf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2locationzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22335za7,
		BGl_z62cstructza2zd2locationz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2siza7a7e2336za7,
		BGl_z62cptrzd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2079za7622337z00, BGl_z62lambda2079z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2078za7622338z00, BGl_z62lambda2078z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2064za7622339z00, BGl_z62lambda2064z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2253z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2340za7,
		BGl_z62zc3z04anonymousza32063ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2061za7622341z00, BGl_z62lambda2061z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2255z00zzforeign_ctypez00,
		BgL_bgl_za762lambda2058za7622342z00, BGl_z62lambda2058z62zzforeign_ctypez00,
		0L, BUNSPEC, 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762caliasza7f3za791za72343z00,
		BGl_z62caliaszf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2187z00zzforeign_ctypez00,
		BgL_bgl_string2187za700za7za7f2344za7, "Type redefinition -- ", 21);
	      DEFINE_STRING(BGl_string2188z00zzforeign_ctypez00,
		BgL_bgl_string2188za700za7za7f2345za7, "declare-c-type!", 15);
	      DEFINE_STRING(BGl_string2189z00zzforeign_ctypez00,
		BgL_bgl_string2189za700za7za7f2346za7, "Illegal c type declaration", 26);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2tve2347z00,
		BGl_z62copaquezd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2190z00zzforeign_ctypez00,
		BgL_bgl_string2190za700za7za7f2348za7, "*((", 3);
	      DEFINE_STRING(BGl_string2191z00zzforeign_ctypez00,
		BgL_bgl_string2191za700za7za7f2349za7, ") 0)", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2aliasza72350za7,
		BGl_z62cptrzd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2ini2351z00,
		BGl_z62copaquezd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2nam2352z00,
		BGl_z62copaquezd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2siza7a7e2353za7,
		BGl_z62cptrzd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2arrayzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2arrayza72354za7,
		BGl_z62cptrzd2arrayzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2cla2355z00,
		BGl_z62cstructzd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2init2356z00,
		BGl_z62caliaszd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2ini2357z00,
		BGl_z62copaquezd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2par2358z00,
		BGl_z62cstructzd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2za7422359za7,
		BGl_z62cstructzd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2za742za7f2360z00,
		BGl_z62cenumzd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2tvectorzd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22361za7,
		BGl_z62cstructza2zd2tvectorzd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2locat2362z00,
		BGl_z62cenumzd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2m2363z00,
		BGl_z62cfunctionzd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2magic2364z00,
		BGl_z62cenumzd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2p2365z00,
		BGl_z62cfunctionzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2initzf3zd2envz51zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22366za7,
		BGl_z62cstructza2zd2initzf3ze1zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2classzd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22367za7,
		BGl_z62cstructza2zd2classzd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2i2368z00,
		BGl_z62cfunctionzd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2imp2369z00,
		BGl_z62copaquezd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2importzd2locationzd2setz12zd2envzb0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22370za7,
		BGl_z62cstructza2zd2importzd2locationzd2setz12z00zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2import2371z00,
		BGl_z62cptrzd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfunctionzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2cfunct2372z00,
		BGl_z62makezd2cfunctionzb0zzforeign_ctypez00, 0L, BUNSPEC, 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2p2373z00,
		BGl_z62cfunctionzd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2nameza7d2374za7,
		BGl_z62cptrzd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2coercezd2tozd2envz70zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22375za7,
		BGl_z62cstructza2zd2coercezd2tozc0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2paren2376z00,
		BGl_z62cenumzd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2initza72377za7,
		BGl_z62cenumzd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2par2378z00,
		BGl_z62copaquezd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zf3zd2envz83zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7f32379za7,
		BGl_z62cstructza2zf3z33zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2import2380z00,
		BGl_z62cptrzd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2ali2381z00,
		BGl_z62cstructzd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2o2382z00,
		BGl_z62cfunctionzd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2tvecto2383z00,
		BGl_z62cptrzd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2occurr2384z00,
		BGl_z62cptrzd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2loca2385z00,
		BGl_z62caliaszd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2m2386z00,
		BGl_z62cfunctionzd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2siza7ezd2setz12zd2envzc5zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22387za7,
		BGl_z62cstructza2zd2siza7ezd2setz12z75zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2nameza7b2388za7,
		BGl_z62cptrzd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2tvectorzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22389za7,
		BGl_z62cstructza2zd2tvectorz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2t2390z00,
		BGl_z62cfunctionzd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2importzd2locationzd2envz70zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22391za7,
		BGl_z62cstructza2zd2importzd2locationzc0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2impor2392z00,
		BGl_z62cenumzd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2typezd2reszd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2t2393z00,
		BGl_z62cfunctionzd2typezd2resz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2n2394z00,
		BGl_z62cfunctionzd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2coe2395z00,
		BGl_z62cstructzd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2loc2396z00,
		BGl_z62cstructzd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2p2397z00,
		BGl_z62cfunctionzd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2nilza72398za7,
		BGl_z62caliaszd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2aliaszd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22399za7,
		BGl_z62cstructza2zd2aliaszd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2idza7b0za72400z00,
		BGl_z62cptrzd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2occurr2401z00,
		BGl_z62cptrzd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2locationzd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22402za7,
		BGl_z62cstructza2zd2locationzd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2btypezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2b2403z00,
		BGl_z62cfunctionzd2btypezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2magicza72404za7,
		BGl_z62cptrzd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2point2405z00,
		BGl_z62cenumzd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2cla2406z00,
		BGl_z62cstructzd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2tvecto2407z00,
		BGl_z62cptrzd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2siza72408za7,
		BGl_z62cstructzd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2siza7a2409za7,
		BGl_z62caliaszd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2za742za7f22410z00,
		BGl_z62cptrzd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2nilza7b02411za7,
		BGl_z62cptrzd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2occurrencezd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22412za7,
		BGl_z62cstructza2zd2occurrencezd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2occur2413z00,
		BGl_z62cenumzd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2mag2414z00,
		BGl_z62copaquezd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2cstructza2zd2envza2zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2cstruc2415z00,
		BGl_z62makezd2cstructza2z12zzforeign_ctypez00, 0L, BUNSPEC, 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2poi2416z00,
		BGl_z62cstructzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2occur2417z00,
		BGl_z62cenumzd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2pare2418z00,
		BGl_z62caliaszd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2ini2419z00,
		BGl_z62cstructzd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2occu2420z00,
		BGl_z62caliaszd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2namezd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22421za7,
		BGl_z62cstructza2zd2namezd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2locat2422z00,
		BGl_z62cenumzd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2za742za72423z00,
		BGl_z62caliaszd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2structzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2str2424z00,
		BGl_z62cstructzd2structzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2parentszd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22425za7,
		BGl_z62cstructza2zd2parentsz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2c2426z00,
		BGl_z62cfunctionzd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2l2427z00,
		BGl_z62cfunctionzd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2caliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2calias2428z00,
		BGl_z62makezd2caliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2p2429z00,
		BGl_z62cfunctionzd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2za7422430za7,
		BGl_z62copaquezd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2c2431z00,
		BGl_z62cfunctionzd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2ali2432z00,
		BGl_z62cstructzd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zd2z42zd2envze0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22433za7,
		BGl_z62cstructza2zd2z42z50zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2imp2434z00,
		BGl_z62cstructzd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2magic2435z00,
		BGl_z62cenumzd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2impo2436z00,
		BGl_z62caliaszd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2o2437z00,
		BGl_z62cfunctionzd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2coerce2438z00,
		BGl_z62cptrzd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2initzf3zd2setz12zd2envz91zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22439za7,
		BGl_z62cstructza2zd2initzf3zd2setz12z21zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2btypezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2bty2440z00,
		BGl_z62copaquezd2btypezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2literalszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2liter2441z00,
		BGl_z62cenumzd2literalszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2occ2442z00,
		BGl_z62copaquezd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2czd2typez12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762declareza7d2cza7d2443za7,
		BGl_z62declarezd2czd2typez12z70zzforeign_ctypez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7f3za7912444za7,
		BGl_z62copaquezf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2cstructzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22445za7,
		BGl_z62cstructza2zd2cstructz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2fieldszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2fie2446z00,
		BGl_z62cstructzd2fieldszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2s2447z00,
		BGl_z62cfunctionzd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2nam2448z00,
		BGl_z62cstructzd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2parentszd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22449za7,
		BGl_z62cstructza2zd2parentszd2setz12zd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2parent2450z00,
		BGl_z62cptrzd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2i2451z00,
		BGl_z62cfunctionzd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2coerc2452z00,
		BGl_z62cenumzd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2copaquezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2copaqu2453z00,
		BGl_z62makezd2copaquezb0zzforeign_ctypez00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2occ2454z00,
		BGl_z62cstructzd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2a2455z00,
		BGl_z62cfunctionzd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2tvect2456z00,
		BGl_z62cenumzd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2pointedzd2tozd2byzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22457za7,
		BGl_z62cstructza2zd2pointedzd2tozd2byz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2initza7f2458za7,
		BGl_z62cptrzd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2name2459z00,
		BGl_z62caliaszd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2za742za7d22460z00,
		BGl_z62cptrzd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2btypezd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22461za7,
		BGl_z62cstructza2zd2btypez12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2imp2462z00,
		BGl_z62cstructzd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2tvec2463z00,
		BGl_z62caliaszd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2256z00zzforeign_ctypez00,
		BgL_bgl_string2256za700za7za7f2464za7, "foreign_ctype", 13);
	      DEFINE_STRING(BGl_string2257z00zzforeign_ctypez00,
		BgL_bgl_string2257za700za7za7f2465za7,
		"_ cstruct cstruct* fields struct? cptr point-to cfunction type-args type-res long arity copaque cenum obj literals btype foreign_ctype calias bool array? type lambda quote x foreign coerce cobj -> ? * bigloo (obj) (cobj) b C union* struct* union struct array pointer function opaque enum ",
		288);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2mag2466z00,
		BGl_z62cstructzd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2locati2467z00,
		BGl_z62cptrzd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2z42zd2setz12zd2envz20zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22468za7,
		BGl_z62cstructza2zd2z42zd2setz12z90zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2cstructza2zd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2cst2469z00,
		BGl_z62cstructzd2cstructza2z12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2idza7b02470za7,
		BGl_z62cenumzd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2clas2471z00,
		BGl_z62caliaszd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2cla2472z00,
		BGl_z62copaquezd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2classza72473za7,
		BGl_z62cptrzd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2mag2474z00,
		BGl_z62cstructzd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2475za7,
		BGl_z62zc3z04anonymousza31886ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1885za7622476z00, BGl_z62lambda1885z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2coercezd2tozd2setz12zd2envzb0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22477za7,
		BGl_z62cstructza2zd2coercezd2tozd2setz12z00zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2nilza7b2478za7,
		BGl_z62cenumzd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1884za7622479z00, BGl_z62lambda1884z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1875za7622480z00, BGl_z62lambda1875z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2imp2481z00,
		BGl_z62copaquezd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zzforeign_ctypez00,
		BgL_bgl_za762za7c3za704anonymo2482za7,
		BGl_z62zc3z04anonymousza31874ze3ze5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2btypezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2btype2483z00,
		BGl_z62cenumzd2btypezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1872za7622484z00, BGl_z62lambda1872z62zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1869za7622485z00, BGl_z62lambda1869z62zzforeign_ctypez00,
		0L, BUNSPEC, 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zzforeign_ctypez00,
		BgL_bgl_za762lambda1908za7622486z00, BGl_z62lambda1908z62zzforeign_ctypez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2poin2487z00,
		BGl_z62caliaszd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2za7422488za7,
		BGl_z62copaquezd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2c2489z00,
		BGl_z62cfunctionzd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2parentszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2parent2490z00,
		BGl_z62cptrzd2parentszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2tve2491z00,
		BGl_z62copaquezd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2loca2492z00,
		BGl_z62caliaszd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2classzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22493za7,
		BGl_z62cstructza2zd2classz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2n2494z00,
		BGl_z62cfunctionzd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2coerc2495z00,
		BGl_z62cenumzd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2impor2496z00,
		BGl_z62cenumzd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2alia2497z00,
		BGl_z62caliaszd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2ali2498z00,
		BGl_z62copaquezd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2tvectorzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2tve2499z00,
		BGl_z62cstructzd2tvectorzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2paren2500z00,
		BGl_z62cenumzd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2occurrencezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2occ2501z00,
		BGl_z62copaquezd2occurrencezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2za742za72502z00,
		BGl_z62caliaszd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2pointedzd2tozd2byzd2setz12zd2envz62zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22503za7,
		BGl_z62cstructza2zd2pointedzd2tozd2byzd2setz12zd2zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2class2504z00,
		BGl_z62cenumzd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2pare2505z00,
		BGl_z62caliaszd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2classzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2class2506z00,
		BGl_z62cenumzd2classzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2siza7a72507za7,
		BGl_z62cenumzd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2clas2508z00,
		BGl_z62caliaszd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2siza72509za7,
		BGl_z62cstructzd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2za72510za7,
		BGl_z62cfunctionzd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2pointzd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2pointza72511za7,
		BGl_z62cptrzd2pointzd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zd2nilzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22512za7,
		BGl_z62cstructza2zd2nilz12zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2z42zd2setz12zd2envz82zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2za742za7d2513z00,
		BGl_z62cenumzd2z42zd2setz12z32zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2aliaszd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22514za7,
		BGl_z62cstructza2zd2aliasz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2aliasza72515za7,
		BGl_z62cptrzd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762cstructza7f3za7912516za7,
		BGl_z62cstructzf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7f3za72517za7,
		BGl_z62cfunctionzf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2nil2518z00,
		BGl_z62cstructzd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2arrayzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2arra2519z00,
		BGl_z62caliaszd2arrayzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2tve2520z00,
		BGl_z62cstructzd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2locati2521z00,
		BGl_z62cptrzd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2c2522z00,
		BGl_z62cfunctionzd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2pointe2523z00,
		BGl_z62cptrzd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2loc2524z00,
		BGl_z62copaquezd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2typezd2argszd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2t2525z00,
		BGl_z62cfunctionzd2typezd2argsz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2s2526z00,
		BGl_z62cfunctionzd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2za7422527za7,
		BGl_z62cstructzd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2magiczf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2magi2528z00,
		BGl_z62caliaszd2magiczf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2nil2529z00,
		BGl_z62copaquezd2nilzb0zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2occurrencezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2occ2530z00,
		BGl_z62cstructzd2occurrencezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zd2idzd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22531za7,
		BGl_z62cstructza2zd2idz12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2aliaszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2alias2532z00,
		BGl_z62cenumzd2aliaszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2locationzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2loc2533z00,
		BGl_z62cstructzd2locationzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2classzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2cla2534z00,
		BGl_z62copaquezd2classzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzd2z42zd2envz42zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2za72535za7,
		BGl_z62cfunctionzd2z42zf2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2locationzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2loc2536z00,
		BGl_z62copaquezd2locationzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2siza7a72537za7,
		BGl_z62cenumzd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2magiczf3zd2setz12zd2envz91zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22538za7,
		BGl_z62cstructza2zd2magiczf3zd2setz12z21zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2poi2539z00,
		BGl_z62copaquezd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2parentszd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2par2540z00,
		BGl_z62cstructzd2parentszb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ctypezf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762ctypeza7f3za791za7za72541za7,
		BGl_z62ctypezf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2coer2542z00,
		BGl_z62caliaszd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2coer2543z00,
		BGl_z62caliaszd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2poin2544z00,
		BGl_z62caliaszd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl_za762cenumza7f3za791za7za72545za7,
		BGl_z62cenumzf3z91zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2siza7ezd2envza7zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2siza72546za7,
		BGl_z62copaquezd2siza7ez17zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2siza7ezd2envz05zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22547za7,
		BGl_z62cstructza2zd2siza7ezb5zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2namezd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2nameza72548za7,
		BGl_z62cenumzd2namezd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2tvect2549z00,
		BGl_z62cenumzd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cenumzd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cenumza7d2alias2550z00,
		BGl_z62cenumzd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructza2zd2occurrencezd2envza2zzforeign_ctypez00,
		BgL_bgl_za762cstructza7a2za7d22551za7,
		BGl_z62cstructza2zd2occurrencez12zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cstructzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2cstruc2552z00,
		BGl_z62makezd2cstructzb0zzforeign_ctypez00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2magi2553z00,
		BGl_z62caliaszd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cenumzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2cenumza72554za7,
		BGl_z62makezd2cenumzb0zzforeign_ctypez00, 0L, BUNSPEC, 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2importzd2locationzd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2i2555z00,
		BGl_z62cfunctionzd2importzd2locationzd2setz12za2zzforeign_ctypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2alia2556z00,
		BGl_z62caliaszd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cptrzd2initzf3zd2setz12zd2envz33zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2initza7f2557za7,
		BGl_z62cptrzd2initzf3zd2setz12z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2czd2aliasz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762declareza7d2cza7d2558za7,
		BGl_z62declarezd2czd2aliasz12z70zzforeign_ctypez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2magiczf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2mag2559z00,
		BGl_z62copaquezd2magiczf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2ini2560z00,
		BGl_z62cstructzd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2siza7a2561za7,
		BGl_z62caliaszd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2nam2562z00,
		BGl_z62cstructzd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cptrzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762makeza7d2cptrza7b2563za7,
		BGl_z62makezd2cptrzb0zzforeign_ctypez00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2coercezd2tozd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2coe2564z00,
		BGl_z62copaquezd2coercezd2toz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2btypezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cptrza7d2btypeza72565za7,
		BGl_z62cptrzd2btypezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cstructzd2coercezd2tozd2setz12zd2envz12zzforeign_ctypez00,
		BgL_bgl_za762cstructza7d2coe2566z00,
		BGl_z62cstructzd2coercezd2tozd2setz12za2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2a2567z00,
		BGl_z62cfunctionzd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2idza72568za7,
		BGl_z62copaquezd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2tvectorzd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2t2569z00,
		BGl_z62cfunctionzd2tvectorzd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2aliaszd2setz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2ali2570z00,
		BGl_z62copaquezd2aliaszd2setz12z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caliaszd2importzd2locationzd2envzd2zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2impo2571z00,
		BGl_z62caliaszd2importzd2locationz62zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2siza7ezd2setz12zd2envz67zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2siza72572za7,
		BGl_z62copaquezd2siza7ezd2setz12zd7zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzd2namezd2envz00zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2n2573z00,
		BGl_z62cfunctionzd2namezb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2idzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762caliasza7d2idza7b2574za7,
		BGl_z62caliaszd2idzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunctionzd2initzf3zd2envzf3zzforeign_ctypez00,
		BgL_bgl_za762cfunctionza7d2i2575z00,
		BGl_z62cfunctionzd2initzf3z43zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_copaquezd2pointedzd2tozd2byzd2envz00zzforeign_ctypez00,
		BgL_bgl_za762copaqueza7d2poi2576z00,
		BGl_z62copaquezd2pointedzd2tozd2byzb0zzforeign_ctypez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_caliasz00zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_cstructz00zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_copaquez00zzforeign_ctypez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_cfunctionz00zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_cptrz00zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_cstructza2za2zzforeign_ctypez00));
		     ADD_ROOT((void *) (&BGl_cenumz00zzforeign_ctypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long
		BgL_checksumz00_3429, char *BgL_fromz00_3430)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_ctypez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_ctypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_ctypez00();
					BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00();
					BGl_cnstzd2initzd2zzforeign_ctypez00();
					BGl_importedzd2moduleszd2initz00zzforeign_ctypez00();
					BGl_objectzd2initzd2zzforeign_ctypez00();
					return BGl_methodzd2initzd2zzforeign_ctypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_ctype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			{	/* Foreign/ctype.scm 15 */
				obj_t BgL_cportz00_3113;

				{	/* Foreign/ctype.scm 15 */
					obj_t BgL_stringz00_3121;

					BgL_stringz00_3121 = BGl_string2257z00zzforeign_ctypez00;
					{	/* Foreign/ctype.scm 15 */
						obj_t BgL_startz00_3122;

						BgL_startz00_3122 = BINT(((long) 0));
						{	/* Foreign/ctype.scm 15 */
							obj_t BgL_endz00_3123;

							BgL_endz00_3123 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3121)));
							{	/* Foreign/ctype.scm 15 */

								BgL_cportz00_3113 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3121, BgL_startz00_3122, BgL_endz00_3123);
				}}}}
				{
					long BgL_iz00_3114;

					BgL_iz00_3114 = ((long) 44);
				BgL_loopz00_3115:
					if ((BgL_iz00_3114 == ((long) -1)))
						{	/* Foreign/ctype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/ctype.scm 15 */
							{	/* Foreign/ctype.scm 15 */
								obj_t BgL_arg2259z00_3117;

								{	/* Foreign/ctype.scm 15 */

									{	/* Foreign/ctype.scm 15 */
										obj_t BgL_locationz00_3119;

										BgL_locationz00_3119 = BBOOL(((bool_t) 0));
										{	/* Foreign/ctype.scm 15 */

											BgL_arg2259z00_3117 =
												BGl_readz00zz__readerz00(BgL_cportz00_3113,
												BgL_locationz00_3119);
										}
									}
								}
								{	/* Foreign/ctype.scm 15 */
									int BgL_tmpz00_3459;

									BgL_tmpz00_3459 = (int) (BgL_iz00_3114);
									CNST_TABLE_SET(BgL_tmpz00_3459, BgL_arg2259z00_3117);
							}}
							{	/* Foreign/ctype.scm 15 */
								int BgL_auxz00_3120;

								BgL_auxz00_3120 = (int) ((BgL_iz00_3114 - ((long) 1)));
								{
									long BgL_iz00_3464;

									BgL_iz00_3464 = (long) (BgL_auxz00_3120);
									BgL_iz00_3114 = BgL_iz00_3464;
									goto BgL_loopz00_3115;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-calias */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2caliaszd2zzforeign_ctypez00(obj_t
		BgL_id1323z00_3, obj_t BgL_name1324z00_4, obj_t BgL_siza7e1325za7_5,
		obj_t BgL_class1326z00_6, obj_t BgL_coercezd2to1327zd2_7,
		obj_t BgL_parents1328z00_8, bool_t BgL_initzf31329zf3_9,
		bool_t BgL_magiczf31330zf3_10, obj_t BgL_z421331z42_11,
		obj_t BgL_alias1332z00_12, obj_t BgL_pointedzd2tozd2by1333z00_13,
		obj_t BgL_tvector1334z00_14, obj_t BgL_location1335z00_15,
		obj_t BgL_importzd2location1336zd2_16, int BgL_occurrence1337z00_17,
		bool_t BgL_arrayzf31338zf3_18)
	{
		{	/* Foreign/ctype.sch 284 */
			{	/* Foreign/ctype.sch 284 */
				BgL_typez00_bglt BgL_new1218z00_3126;

				{	/* Foreign/ctype.sch 284 */
					BgL_typez00_bglt BgL_tmp1216z00_3127;
					BgL_caliasz00_bglt BgL_wide1217z00_3128;

					{
						BgL_typez00_bglt BgL_auxz00_3467;

						{	/* Foreign/ctype.sch 284 */
							BgL_typez00_bglt BgL_new1215z00_3129;

							BgL_new1215z00_3129 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 284 */
								long BgL_arg1347z00_3130;

								{	/* Foreign/ctype.sch 284 */
									long BgL_res2082z00_3131;

									BgL_res2082z00_3131 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1347z00_3130 = BgL_res2082z00_3131;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1215z00_3129),
									BgL_arg1347z00_3130);
							}
							{	/* Foreign/ctype.sch 284 */
								BgL_objectz00_bglt BgL_tmpz00_3472;

								BgL_tmpz00_3472 = ((BgL_objectz00_bglt) BgL_new1215z00_3129);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3472, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1215z00_3129);
							BgL_auxz00_3467 = BgL_new1215z00_3129;
						}
						BgL_tmp1216z00_3127 = ((BgL_typez00_bglt) BgL_auxz00_3467);
					}
					BgL_wide1217z00_3128 =
						((BgL_caliasz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_caliasz00_bgl))));
					{	/* Foreign/ctype.sch 284 */
						obj_t BgL_auxz00_3480;
						BgL_objectz00_bglt BgL_tmpz00_3478;

						BgL_auxz00_3480 = ((obj_t) BgL_wide1217z00_3128);
						BgL_tmpz00_3478 = ((BgL_objectz00_bglt) BgL_tmp1216z00_3127);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3478, BgL_auxz00_3480);
					}
					((BgL_objectz00_bglt) BgL_tmp1216z00_3127);
					{	/* Foreign/ctype.sch 284 */
						long BgL_arg1346z00_3132;

						{	/* Foreign/ctype.sch 284 */
							long BgL_res2083z00_3133;

							BgL_res2083z00_3133 =
								BGL_CLASS_INDEX(BGl_caliasz00zzforeign_ctypez00);
							BgL_arg1346z00_3132 = BgL_res2083z00_3133;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1216z00_3127), BgL_arg1346z00_3132);
					}
					BgL_new1218z00_3126 = ((BgL_typez00_bglt) BgL_tmp1216z00_3127);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1218z00_3126)))->BgL_idz00) =
					((obj_t) BgL_id1323z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_namez00) =
					((obj_t) BgL_name1324z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1325za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_classz00) =
					((obj_t) BgL_class1326z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1327zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_parentsz00) =
					((obj_t) BgL_parents1328z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31329zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31330zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_z42z42) =
					((obj_t) BgL_z421331z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_aliasz00) =
					((obj_t) BgL_alias1332z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1333z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1334z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_locationz00) =
					((obj_t) BgL_location1335z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1336zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1218z00_3126)))->BgL_occurrencez00) =
					((int) BgL_occurrence1337z00_17), BUNSPEC);
				{
					BgL_caliasz00_bglt BgL_auxz00_3518;

					{
						obj_t BgL_auxz00_3519;

						{	/* Foreign/ctype.sch 284 */
							BgL_objectz00_bglt BgL_tmpz00_3520;

							BgL_tmpz00_3520 = ((BgL_objectz00_bglt) BgL_new1218z00_3126);
							BgL_auxz00_3519 = BGL_OBJECT_WIDENING(BgL_tmpz00_3520);
						}
						BgL_auxz00_3518 = ((BgL_caliasz00_bglt) BgL_auxz00_3519);
					}
					((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_3518))->BgL_arrayzf3zf3) =
						((bool_t) BgL_arrayzf31338zf3_18), BUNSPEC);
				}
				return BgL_new1218z00_3126;
			}
		}

	}



/* &make-calias */
	BgL_typez00_bglt BGl_z62makezd2caliaszb0zzforeign_ctypez00(obj_t
		BgL_envz00_2093, obj_t BgL_id1323z00_2094, obj_t BgL_name1324z00_2095,
		obj_t BgL_siza7e1325za7_2096, obj_t BgL_class1326z00_2097,
		obj_t BgL_coercezd2to1327zd2_2098, obj_t BgL_parents1328z00_2099,
		obj_t BgL_initzf31329zf3_2100, obj_t BgL_magiczf31330zf3_2101,
		obj_t BgL_z421331z42_2102, obj_t BgL_alias1332z00_2103,
		obj_t BgL_pointedzd2tozd2by1333z00_2104, obj_t BgL_tvector1334z00_2105,
		obj_t BgL_location1335z00_2106, obj_t BgL_importzd2location1336zd2_2107,
		obj_t BgL_occurrence1337z00_2108, obj_t BgL_arrayzf31338zf3_2109)
	{
		{	/* Foreign/ctype.sch 284 */
			return
				BGl_makezd2caliaszd2zzforeign_ctypez00(BgL_id1323z00_2094,
				BgL_name1324z00_2095, BgL_siza7e1325za7_2096, BgL_class1326z00_2097,
				BgL_coercezd2to1327zd2_2098, BgL_parents1328z00_2099,
				CBOOL(BgL_initzf31329zf3_2100), CBOOL(BgL_magiczf31330zf3_2101),
				BgL_z421331z42_2102, BgL_alias1332z00_2103,
				BgL_pointedzd2tozd2by1333z00_2104, BgL_tvector1334z00_2105,
				BgL_location1335z00_2106, BgL_importzd2location1336zd2_2107,
				CINT(BgL_occurrence1337z00_2108), CBOOL(BgL_arrayzf31338zf3_2109));
		}

	}



/* calias? */
	BGL_EXPORTED_DEF bool_t BGl_caliaszf3zf3zzforeign_ctypez00(obj_t
		BgL_objz00_19)
	{
		{	/* Foreign/ctype.sch 285 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_19,
				BGl_caliasz00zzforeign_ctypez00);
		}

	}



/* &calias? */
	obj_t BGl_z62caliaszf3z91zzforeign_ctypez00(obj_t BgL_envz00_2110,
		obj_t BgL_objz00_2111)
	{
		{	/* Foreign/ctype.sch 285 */
			return BBOOL(BGl_caliaszf3zf3zzforeign_ctypez00(BgL_objz00_2111));
		}

	}



/* calias-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_caliaszd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 286 */
			{	/* Foreign/ctype.sch 286 */
				obj_t BgL_classz00_1450;

				BgL_classz00_1450 = BGl_caliasz00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 286 */
					obj_t BgL__ortest_1106z00_1451;

					BgL__ortest_1106z00_1451 = BGL_CLASS_NIL(BgL_classz00_1450);
					if (CBOOL(BgL__ortest_1106z00_1451))
						{	/* Foreign/ctype.sch 286 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1451);
						}
					else
						{	/* Foreign/ctype.sch 286 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1450));
						}
				}
			}
		}

	}



/* &calias-nil */
	BgL_typez00_bglt BGl_z62caliaszd2nilzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2112)
	{
		{	/* Foreign/ctype.sch 286 */
			return BGl_caliaszd2nilzd2zzforeign_ctypez00();
		}

	}



/* calias-array? */
	BGL_EXPORTED_DEF bool_t
		BGl_caliaszd2arrayzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_20)
	{
		{	/* Foreign/ctype.sch 287 */
			{
				BgL_caliasz00_bglt BgL_auxz00_3540;

				{
					obj_t BgL_auxz00_3541;

					{	/* Foreign/ctype.sch 287 */
						BgL_objectz00_bglt BgL_tmpz00_3542;

						BgL_tmpz00_3542 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_3541 = BGL_OBJECT_WIDENING(BgL_tmpz00_3542);
					}
					BgL_auxz00_3540 = ((BgL_caliasz00_bglt) BgL_auxz00_3541);
				}
				return
					(((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_3540))->BgL_arrayzf3zf3);
			}
		}

	}



/* &calias-array? */
	obj_t BGl_z62caliaszd2arrayzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2113,
		obj_t BgL_oz00_2114)
	{
		{	/* Foreign/ctype.sch 287 */
			return
				BBOOL(BGl_caliaszd2arrayzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2114)));
		}

	}



/* calias-array?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2arrayzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_21, bool_t BgL_vz00_22)
	{
		{	/* Foreign/ctype.sch 288 */
			{
				BgL_caliasz00_bglt BgL_auxz00_3550;

				{
					obj_t BgL_auxz00_3551;

					{	/* Foreign/ctype.sch 288 */
						BgL_objectz00_bglt BgL_tmpz00_3552;

						BgL_tmpz00_3552 = ((BgL_objectz00_bglt) BgL_oz00_21);
						BgL_auxz00_3551 = BGL_OBJECT_WIDENING(BgL_tmpz00_3552);
					}
					BgL_auxz00_3550 = ((BgL_caliasz00_bglt) BgL_auxz00_3551);
				}
				return
					((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_3550))->BgL_arrayzf3zf3) =
					((bool_t) BgL_vz00_22), BUNSPEC);
			}
		}

	}



/* &calias-array?-set! */
	obj_t BGl_z62caliaszd2arrayzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2115, obj_t BgL_oz00_2116, obj_t BgL_vz00_2117)
	{
		{	/* Foreign/ctype.sch 288 */
			return
				BGl_caliaszd2arrayzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2116), CBOOL(BgL_vz00_2117));
		}

	}



/* calias-occurrence */
	BGL_EXPORTED_DEF int
		BGl_caliaszd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_23)
	{
		{	/* Foreign/ctype.sch 289 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_23)))->BgL_occurrencez00);
		}

	}



/* &calias-occurrence */
	obj_t BGl_z62caliaszd2occurrencezb0zzforeign_ctypez00(obj_t BgL_envz00_2118,
		obj_t BgL_oz00_2119)
	{
		{	/* Foreign/ctype.sch 289 */
			return
				BINT(BGl_caliaszd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2119)));
		}

	}



/* calias-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_24, int BgL_vz00_25)
	{
		{	/* Foreign/ctype.sch 290 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_24)))->BgL_occurrencez00) =
				((int) BgL_vz00_25), BUNSPEC);
		}

	}



/* &calias-occurrence-set! */
	obj_t BGl_z62caliaszd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2120, obj_t BgL_oz00_2121, obj_t BgL_vz00_2122)
	{
		{	/* Foreign/ctype.sch 290 */
			return
				BGl_caliaszd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2121), CINT(BgL_vz00_2122));
		}

	}



/* calias-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_26)
	{
		{	/* Foreign/ctype.sch 291 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_26)))->BgL_importzd2locationzd2);
		}

	}



/* &calias-import-location */
	obj_t BGl_z62caliaszd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2123, obj_t BgL_oz00_2124)
	{
		{	/* Foreign/ctype.sch 291 */
			return
				BGl_caliaszd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2124));
		}

	}



/* calias-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_27, obj_t BgL_vz00_28)
	{
		{	/* Foreign/ctype.sch 292 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_27)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_28), BUNSPEC);
		}

	}



/* &calias-import-location-set! */
	obj_t BGl_z62caliaszd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2125, obj_t BgL_oz00_2126, obj_t BgL_vz00_2127)
	{
		{	/* Foreign/ctype.sch 292 */
			return
				BGl_caliaszd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2126), BgL_vz00_2127);
		}

	}



/* calias-location */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_29)
	{
		{	/* Foreign/ctype.sch 293 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_29)))->BgL_locationz00);
		}

	}



/* &calias-location */
	obj_t BGl_z62caliaszd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2128,
		obj_t BgL_oz00_2129)
	{
		{	/* Foreign/ctype.sch 293 */
			return
				BGl_caliaszd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2129));
		}

	}



/* calias-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_30, obj_t BgL_vz00_31)
	{
		{	/* Foreign/ctype.sch 294 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_30)))->BgL_locationz00) =
				((obj_t) BgL_vz00_31), BUNSPEC);
		}

	}



/* &calias-location-set! */
	obj_t BGl_z62caliaszd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2130, obj_t BgL_oz00_2131, obj_t BgL_vz00_2132)
	{
		{	/* Foreign/ctype.sch 294 */
			return
				BGl_caliaszd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2131), BgL_vz00_2132);
		}

	}



/* calias-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_32)
	{
		{	/* Foreign/ctype.sch 295 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_32)))->BgL_tvectorz00);
		}

	}



/* &calias-tvector */
	obj_t BGl_z62caliaszd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2133,
		obj_t BgL_oz00_2134)
	{
		{	/* Foreign/ctype.sch 295 */
			return
				BGl_caliaszd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2134));
		}

	}



/* calias-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_33, obj_t BgL_vz00_34)
	{
		{	/* Foreign/ctype.sch 296 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_33)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_34), BUNSPEC);
		}

	}



/* &calias-tvector-set! */
	obj_t BGl_z62caliaszd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2135, obj_t BgL_oz00_2136, obj_t BgL_vz00_2137)
	{
		{	/* Foreign/ctype.sch 296 */
			return
				BGl_caliaszd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2136), BgL_vz00_2137);
		}

	}



/* calias-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_35)
	{
		{	/* Foreign/ctype.sch 297 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_35)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &calias-pointed-to-by */
	obj_t BGl_z62caliaszd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2138, obj_t BgL_oz00_2139)
	{
		{	/* Foreign/ctype.sch 297 */
			return
				BGl_caliaszd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2139));
		}

	}



/* calias-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_36, obj_t BgL_vz00_37)
	{
		{	/* Foreign/ctype.sch 298 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_36)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_37), BUNSPEC);
		}

	}



/* &calias-pointed-to-by-set! */
	obj_t BGl_z62caliaszd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2140, obj_t BgL_oz00_2141, obj_t BgL_vz00_2142)
	{
		{	/* Foreign/ctype.sch 298 */
			return
				BGl_caliaszd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2141), BgL_vz00_2142);
		}

	}



/* calias-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_38)
	{
		{	/* Foreign/ctype.sch 299 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_38)))->BgL_aliasz00);
		}

	}



/* &calias-alias */
	obj_t BGl_z62caliaszd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2143,
		obj_t BgL_oz00_2144)
	{
		{	/* Foreign/ctype.sch 299 */
			return
				BGl_caliaszd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2144));
		}

	}



/* calias-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_39, obj_t BgL_vz00_40)
	{
		{	/* Foreign/ctype.sch 300 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_39)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_40), BUNSPEC);
		}

	}



/* &calias-alias-set! */
	obj_t BGl_z62caliaszd2aliaszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2145, obj_t BgL_oz00_2146, obj_t BgL_vz00_2147)
	{
		{	/* Foreign/ctype.sch 300 */
			return
				BGl_caliaszd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2146), BgL_vz00_2147);
		}

	}



/* calias-$ */
	BGL_EXPORTED_DEF obj_t BGl_caliaszd2z42z90zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_41)
	{
		{	/* Foreign/ctype.sch 301 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_41)))->BgL_z42z42);
		}

	}



/* &calias-$ */
	obj_t BGl_z62caliaszd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2148,
		obj_t BgL_oz00_2149)
	{
		{	/* Foreign/ctype.sch 301 */
			return
				BGl_caliaszd2z42z90zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2149));
		}

	}



/* calias-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_42,
		obj_t BgL_vz00_43)
	{
		{	/* Foreign/ctype.sch 302 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_42)))->BgL_z42z42) =
				((obj_t) BgL_vz00_43), BUNSPEC);
		}

	}



/* &calias-$-set! */
	obj_t BGl_z62caliaszd2z42zd2setz12z32zzforeign_ctypez00(obj_t BgL_envz00_2150,
		obj_t BgL_oz00_2151, obj_t BgL_vz00_2152)
	{
		{	/* Foreign/ctype.sch 302 */
			return
				BGl_caliaszd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2151), BgL_vz00_2152);
		}

	}



/* calias-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_caliaszd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_44)
	{
		{	/* Foreign/ctype.sch 303 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_44)))->BgL_magiczf3zf3);
		}

	}



/* &calias-magic? */
	obj_t BGl_z62caliaszd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2153,
		obj_t BgL_oz00_2154)
	{
		{	/* Foreign/ctype.sch 303 */
			return
				BBOOL(BGl_caliaszd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2154)));
		}

	}



/* calias-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_45, bool_t BgL_vz00_46)
	{
		{	/* Foreign/ctype.sch 304 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_45)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_46), BUNSPEC);
		}

	}



/* &calias-magic?-set! */
	obj_t BGl_z62caliaszd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2155, obj_t BgL_oz00_2156, obj_t BgL_vz00_2157)
	{
		{	/* Foreign/ctype.sch 304 */
			return
				BGl_caliaszd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2156), CBOOL(BgL_vz00_2157));
		}

	}



/* calias-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_caliaszd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_47)
	{
		{	/* Foreign/ctype.sch 305 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_47)))->BgL_initzf3zf3);
		}

	}



/* &calias-init? */
	obj_t BGl_z62caliaszd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2158,
		obj_t BgL_oz00_2159)
	{
		{	/* Foreign/ctype.sch 305 */
			return
				BBOOL(BGl_caliaszd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2159)));
		}

	}



/* calias-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_48, bool_t BgL_vz00_49)
	{
		{	/* Foreign/ctype.sch 306 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_48)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_49), BUNSPEC);
		}

	}



/* &calias-init?-set! */
	obj_t BGl_z62caliaszd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2160, obj_t BgL_oz00_2161, obj_t BgL_vz00_2162)
	{
		{	/* Foreign/ctype.sch 306 */
			return
				BGl_caliaszd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2161), CBOOL(BgL_vz00_2162));
		}

	}



/* calias-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_50)
	{
		{	/* Foreign/ctype.sch 307 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_50)))->BgL_parentsz00);
		}

	}



/* &calias-parents */
	obj_t BGl_z62caliaszd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2163,
		obj_t BgL_oz00_2164)
	{
		{	/* Foreign/ctype.sch 307 */
			return
				BGl_caliaszd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2164));
		}

	}



/* calias-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_51, obj_t BgL_vz00_52)
	{
		{	/* Foreign/ctype.sch 308 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_51)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_52), BUNSPEC);
		}

	}



/* &calias-parents-set! */
	obj_t BGl_z62caliaszd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2165, obj_t BgL_oz00_2166, obj_t BgL_vz00_2167)
	{
		{	/* Foreign/ctype.sch 308 */
			return
				BGl_caliaszd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2166), BgL_vz00_2167);
		}

	}



/* calias-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_53)
	{
		{	/* Foreign/ctype.sch 309 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_53)))->BgL_coercezd2tozd2);
		}

	}



/* &calias-coerce-to */
	obj_t BGl_z62caliaszd2coercezd2toz62zzforeign_ctypez00(obj_t BgL_envz00_2168,
		obj_t BgL_oz00_2169)
	{
		{	/* Foreign/ctype.sch 309 */
			return
				BGl_caliaszd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2169));
		}

	}



/* calias-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_54, obj_t BgL_vz00_55)
	{
		{	/* Foreign/ctype.sch 310 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_54)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_55), BUNSPEC);
		}

	}



/* &calias-coerce-to-set! */
	obj_t BGl_z62caliaszd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2170, obj_t BgL_oz00_2171, obj_t BgL_vz00_2172)
	{
		{	/* Foreign/ctype.sch 310 */
			return
				BGl_caliaszd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2171), BgL_vz00_2172);
		}

	}



/* calias-class */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2classzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_56)
	{
		{	/* Foreign/ctype.sch 311 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_56)))->BgL_classz00);
		}

	}



/* &calias-class */
	obj_t BGl_z62caliaszd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2173,
		obj_t BgL_oz00_2174)
	{
		{	/* Foreign/ctype.sch 311 */
			return
				BGl_caliaszd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2174));
		}

	}



/* calias-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_57, obj_t BgL_vz00_58)
	{
		{	/* Foreign/ctype.sch 312 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_57)))->BgL_classz00) =
				((obj_t) BgL_vz00_58), BUNSPEC);
		}

	}



/* &calias-class-set! */
	obj_t BGl_z62caliaszd2classzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2175, obj_t BgL_oz00_2176, obj_t BgL_vz00_2177)
	{
		{	/* Foreign/ctype.sch 312 */
			return
				BGl_caliaszd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2176), BgL_vz00_2177);
		}

	}



/* calias-size */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_59)
	{
		{	/* Foreign/ctype.sch 313 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_59)))->BgL_siza7eza7);
		}

	}



/* &calias-size */
	obj_t BGl_z62caliaszd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2178,
		obj_t BgL_oz00_2179)
	{
		{	/* Foreign/ctype.sch 313 */
			return
				BGl_caliaszd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2179));
		}

	}



/* calias-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_60, obj_t BgL_vz00_61)
	{
		{	/* Foreign/ctype.sch 314 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_60)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_61), BUNSPEC);
		}

	}



/* &calias-size-set! */
	obj_t BGl_z62caliaszd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2180, obj_t BgL_oz00_2181, obj_t BgL_vz00_2182)
	{
		{	/* Foreign/ctype.sch 314 */
			return
				BGl_caliaszd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2181), BgL_vz00_2182);
		}

	}



/* calias-name */
	BGL_EXPORTED_DEF obj_t BGl_caliaszd2namezd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_62)
	{
		{	/* Foreign/ctype.sch 315 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_62)))->BgL_namez00);
		}

	}



/* &calias-name */
	obj_t BGl_z62caliaszd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2183,
		obj_t BgL_oz00_2184)
	{
		{	/* Foreign/ctype.sch 315 */
			return
				BGl_caliaszd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2184));
		}

	}



/* calias-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_caliaszd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_63, obj_t BgL_vz00_64)
	{
		{	/* Foreign/ctype.sch 316 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_63)))->BgL_namez00) =
				((obj_t) BgL_vz00_64), BUNSPEC);
		}

	}



/* &calias-name-set! */
	obj_t BGl_z62caliaszd2namezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2185, obj_t BgL_oz00_2186, obj_t BgL_vz00_2187)
	{
		{	/* Foreign/ctype.sch 316 */
			return
				BGl_caliaszd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2186), BgL_vz00_2187);
		}

	}



/* calias-id */
	BGL_EXPORTED_DEF obj_t BGl_caliaszd2idzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_65)
	{
		{	/* Foreign/ctype.sch 317 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_65)))->BgL_idz00);
		}

	}



/* &calias-id */
	obj_t BGl_z62caliaszd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2188,
		obj_t BgL_oz00_2189)
	{
		{	/* Foreign/ctype.sch 317 */
			return
				BGl_caliaszd2idzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2189));
		}

	}



/* make-cenum */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2cenumzd2zzforeign_ctypez00(obj_t
		BgL_id1305z00_68, obj_t BgL_name1306z00_69, obj_t BgL_siza7e1307za7_70,
		obj_t BgL_class1308z00_71, obj_t BgL_coercezd2to1309zd2_72,
		obj_t BgL_parents1310z00_73, bool_t BgL_initzf31311zf3_74,
		bool_t BgL_magiczf31312zf3_75, obj_t BgL_z421313z42_76,
		obj_t BgL_alias1314z00_77, obj_t BgL_pointedzd2tozd2by1315z00_78,
		obj_t BgL_tvector1316z00_79, obj_t BgL_location1317z00_80,
		obj_t BgL_importzd2location1318zd2_81, int BgL_occurrence1319z00_82,
		BgL_typez00_bglt BgL_btype1320z00_83, obj_t BgL_literals1321z00_84)
	{
		{	/* Foreign/ctype.sch 321 */
			{	/* Foreign/ctype.sch 321 */
				BgL_typez00_bglt BgL_new1222z00_3134;

				{	/* Foreign/ctype.sch 321 */
					BgL_typez00_bglt BgL_tmp1220z00_3135;
					BgL_cenumz00_bglt BgL_wide1221z00_3136;

					{
						BgL_typez00_bglt BgL_auxz00_3682;

						{	/* Foreign/ctype.sch 321 */
							BgL_typez00_bglt BgL_new1219z00_3137;

							BgL_new1219z00_3137 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 321 */
								long BgL_arg1351z00_3138;

								{	/* Foreign/ctype.sch 321 */
									long BgL_res2084z00_3139;

									BgL_res2084z00_3139 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1351z00_3138 = BgL_res2084z00_3139;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1219z00_3137),
									BgL_arg1351z00_3138);
							}
							{	/* Foreign/ctype.sch 321 */
								BgL_objectz00_bglt BgL_tmpz00_3687;

								BgL_tmpz00_3687 = ((BgL_objectz00_bglt) BgL_new1219z00_3137);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3687, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1219z00_3137);
							BgL_auxz00_3682 = BgL_new1219z00_3137;
						}
						BgL_tmp1220z00_3135 = ((BgL_typez00_bglt) BgL_auxz00_3682);
					}
					BgL_wide1221z00_3136 =
						((BgL_cenumz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cenumz00_bgl))));
					{	/* Foreign/ctype.sch 321 */
						obj_t BgL_auxz00_3695;
						BgL_objectz00_bglt BgL_tmpz00_3693;

						BgL_auxz00_3695 = ((obj_t) BgL_wide1221z00_3136);
						BgL_tmpz00_3693 = ((BgL_objectz00_bglt) BgL_tmp1220z00_3135);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3693, BgL_auxz00_3695);
					}
					((BgL_objectz00_bglt) BgL_tmp1220z00_3135);
					{	/* Foreign/ctype.sch 321 */
						long BgL_arg1348z00_3140;

						{	/* Foreign/ctype.sch 321 */
							long BgL_res2085z00_3141;

							BgL_res2085z00_3141 =
								BGL_CLASS_INDEX(BGl_cenumz00zzforeign_ctypez00);
							BgL_arg1348z00_3140 = BgL_res2085z00_3141;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1220z00_3135), BgL_arg1348z00_3140);
					}
					BgL_new1222z00_3134 = ((BgL_typez00_bglt) BgL_tmp1220z00_3135);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1222z00_3134)))->BgL_idz00) =
					((obj_t) BgL_id1305z00_68), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_namez00) =
					((obj_t) BgL_name1306z00_69), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1307za7_70), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_classz00) =
					((obj_t) BgL_class1308z00_71), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1309zd2_72), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_parentsz00) =
					((obj_t) BgL_parents1310z00_73), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31311zf3_74), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31312zf3_75), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_z42z42) =
					((obj_t) BgL_z421313z42_76), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_aliasz00) =
					((obj_t) BgL_alias1314z00_77), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1315z00_78), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1316z00_79), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_locationz00) =
					((obj_t) BgL_location1317z00_80), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1318zd2_81), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1222z00_3134)))->BgL_occurrencez00) =
					((int) BgL_occurrence1319z00_82), BUNSPEC);
				{
					BgL_cenumz00_bglt BgL_auxz00_3733;

					{
						obj_t BgL_auxz00_3734;

						{	/* Foreign/ctype.sch 321 */
							BgL_objectz00_bglt BgL_tmpz00_3735;

							BgL_tmpz00_3735 = ((BgL_objectz00_bglt) BgL_new1222z00_3134);
							BgL_auxz00_3734 = BGL_OBJECT_WIDENING(BgL_tmpz00_3735);
						}
						BgL_auxz00_3733 = ((BgL_cenumz00_bglt) BgL_auxz00_3734);
					}
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_3733))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_btype1320z00_83), BUNSPEC);
				}
				{
					BgL_cenumz00_bglt BgL_auxz00_3740;

					{
						obj_t BgL_auxz00_3741;

						{	/* Foreign/ctype.sch 321 */
							BgL_objectz00_bglt BgL_tmpz00_3742;

							BgL_tmpz00_3742 = ((BgL_objectz00_bglt) BgL_new1222z00_3134);
							BgL_auxz00_3741 = BGL_OBJECT_WIDENING(BgL_tmpz00_3742);
						}
						BgL_auxz00_3740 = ((BgL_cenumz00_bglt) BgL_auxz00_3741);
					}
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_3740))->BgL_literalsz00) =
						((obj_t) BgL_literals1321z00_84), BUNSPEC);
				}
				return BgL_new1222z00_3134;
			}
		}

	}



/* &make-cenum */
	BgL_typez00_bglt BGl_z62makezd2cenumzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2190, obj_t BgL_id1305z00_2191, obj_t BgL_name1306z00_2192,
		obj_t BgL_siza7e1307za7_2193, obj_t BgL_class1308z00_2194,
		obj_t BgL_coercezd2to1309zd2_2195, obj_t BgL_parents1310z00_2196,
		obj_t BgL_initzf31311zf3_2197, obj_t BgL_magiczf31312zf3_2198,
		obj_t BgL_z421313z42_2199, obj_t BgL_alias1314z00_2200,
		obj_t BgL_pointedzd2tozd2by1315z00_2201, obj_t BgL_tvector1316z00_2202,
		obj_t BgL_location1317z00_2203, obj_t BgL_importzd2location1318zd2_2204,
		obj_t BgL_occurrence1319z00_2205, obj_t BgL_btype1320z00_2206,
		obj_t BgL_literals1321z00_2207)
	{
		{	/* Foreign/ctype.sch 321 */
			return
				BGl_makezd2cenumzd2zzforeign_ctypez00(BgL_id1305z00_2191,
				BgL_name1306z00_2192, BgL_siza7e1307za7_2193, BgL_class1308z00_2194,
				BgL_coercezd2to1309zd2_2195, BgL_parents1310z00_2196,
				CBOOL(BgL_initzf31311zf3_2197), CBOOL(BgL_magiczf31312zf3_2198),
				BgL_z421313z42_2199, BgL_alias1314z00_2200,
				BgL_pointedzd2tozd2by1315z00_2201, BgL_tvector1316z00_2202,
				BgL_location1317z00_2203, BgL_importzd2location1318zd2_2204,
				CINT(BgL_occurrence1319z00_2205),
				((BgL_typez00_bglt) BgL_btype1320z00_2206), BgL_literals1321z00_2207);
		}

	}



/* cenum? */
	BGL_EXPORTED_DEF bool_t BGl_cenumzf3zf3zzforeign_ctypez00(obj_t BgL_objz00_85)
	{
		{	/* Foreign/ctype.sch 322 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_85,
				BGl_cenumz00zzforeign_ctypez00);
		}

	}



/* &cenum? */
	obj_t BGl_z62cenumzf3z91zzforeign_ctypez00(obj_t BgL_envz00_2208,
		obj_t BgL_objz00_2209)
	{
		{	/* Foreign/ctype.sch 322 */
			return BBOOL(BGl_cenumzf3zf3zzforeign_ctypez00(BgL_objz00_2209));
		}

	}



/* cenum-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_cenumzd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 323 */
			{	/* Foreign/ctype.sch 323 */
				obj_t BgL_classz00_1472;

				BgL_classz00_1472 = BGl_cenumz00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 323 */
					obj_t BgL__ortest_1106z00_1473;

					BgL__ortest_1106z00_1473 = BGL_CLASS_NIL(BgL_classz00_1472);
					if (CBOOL(BgL__ortest_1106z00_1473))
						{	/* Foreign/ctype.sch 323 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1473);
						}
					else
						{	/* Foreign/ctype.sch 323 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1472));
						}
				}
			}
		}

	}



/* &cenum-nil */
	BgL_typez00_bglt BGl_z62cenumzd2nilzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2210)
	{
		{	/* Foreign/ctype.sch 323 */
			return BGl_cenumzd2nilzd2zzforeign_ctypez00();
		}

	}



/* cenum-literals */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2literalszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_86)
	{
		{	/* Foreign/ctype.sch 324 */
			{
				BgL_cenumz00_bglt BgL_auxz00_3762;

				{
					obj_t BgL_auxz00_3763;

					{	/* Foreign/ctype.sch 324 */
						BgL_objectz00_bglt BgL_tmpz00_3764;

						BgL_tmpz00_3764 = ((BgL_objectz00_bglt) BgL_oz00_86);
						BgL_auxz00_3763 = BGL_OBJECT_WIDENING(BgL_tmpz00_3764);
					}
					BgL_auxz00_3762 = ((BgL_cenumz00_bglt) BgL_auxz00_3763);
				}
				return
					(((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_3762))->BgL_literalsz00);
			}
		}

	}



/* &cenum-literals */
	obj_t BGl_z62cenumzd2literalszb0zzforeign_ctypez00(obj_t BgL_envz00_2211,
		obj_t BgL_oz00_2212)
	{
		{	/* Foreign/ctype.sch 324 */
			return
				BGl_cenumzd2literalszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2212));
		}

	}



/* cenum-btype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cenumzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_89)
	{
		{	/* Foreign/ctype.sch 326 */
			{
				BgL_cenumz00_bglt BgL_auxz00_3771;

				{
					obj_t BgL_auxz00_3772;

					{	/* Foreign/ctype.sch 326 */
						BgL_objectz00_bglt BgL_tmpz00_3773;

						BgL_tmpz00_3773 = ((BgL_objectz00_bglt) BgL_oz00_89);
						BgL_auxz00_3772 = BGL_OBJECT_WIDENING(BgL_tmpz00_3773);
					}
					BgL_auxz00_3771 = ((BgL_cenumz00_bglt) BgL_auxz00_3772);
				}
				return (((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_3771))->BgL_btypez00);
			}
		}

	}



/* &cenum-btype */
	BgL_typez00_bglt BGl_z62cenumzd2btypezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2213, obj_t BgL_oz00_2214)
	{
		{	/* Foreign/ctype.sch 326 */
			return
				BGl_cenumzd2btypezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2214));
		}

	}



/* cenum-occurrence */
	BGL_EXPORTED_DEF int
		BGl_cenumzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_92)
	{
		{	/* Foreign/ctype.sch 328 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_92)))->BgL_occurrencez00);
		}

	}



/* &cenum-occurrence */
	obj_t BGl_z62cenumzd2occurrencezb0zzforeign_ctypez00(obj_t BgL_envz00_2215,
		obj_t BgL_oz00_2216)
	{
		{	/* Foreign/ctype.sch 328 */
			return
				BINT(BGl_cenumzd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2216)));
		}

	}



/* cenum-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_93, int BgL_vz00_94)
	{
		{	/* Foreign/ctype.sch 329 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_93)))->BgL_occurrencez00) =
				((int) BgL_vz00_94), BUNSPEC);
		}

	}



/* &cenum-occurrence-set! */
	obj_t BGl_z62cenumzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2217, obj_t BgL_oz00_2218, obj_t BgL_vz00_2219)
	{
		{	/* Foreign/ctype.sch 329 */
			return
				BGl_cenumzd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2218), CINT(BgL_vz00_2219));
		}

	}



/* cenum-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_95)
	{
		{	/* Foreign/ctype.sch 330 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_95)))->BgL_importzd2locationzd2);
		}

	}



/* &cenum-import-location */
	obj_t BGl_z62cenumzd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2220, obj_t BgL_oz00_2221)
	{
		{	/* Foreign/ctype.sch 330 */
			return
				BGl_cenumzd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2221));
		}

	}



/* cenum-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_96, obj_t BgL_vz00_97)
	{
		{	/* Foreign/ctype.sch 331 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_96)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_97), BUNSPEC);
		}

	}



/* &cenum-import-location-set! */
	obj_t BGl_z62cenumzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2222, obj_t BgL_oz00_2223, obj_t BgL_vz00_2224)
	{
		{	/* Foreign/ctype.sch 331 */
			return
				BGl_cenumzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2223), BgL_vz00_2224);
		}

	}



/* cenum-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_98)
	{
		{	/* Foreign/ctype.sch 332 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_98)))->BgL_locationz00);
		}

	}



/* &cenum-location */
	obj_t BGl_z62cenumzd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2225,
		obj_t BgL_oz00_2226)
	{
		{	/* Foreign/ctype.sch 332 */
			return
				BGl_cenumzd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2226));
		}

	}



/* cenum-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_99, obj_t BgL_vz00_100)
	{
		{	/* Foreign/ctype.sch 333 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_99)))->BgL_locationz00) =
				((obj_t) BgL_vz00_100), BUNSPEC);
		}

	}



/* &cenum-location-set! */
	obj_t BGl_z62cenumzd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2227, obj_t BgL_oz00_2228, obj_t BgL_vz00_2229)
	{
		{	/* Foreign/ctype.sch 333 */
			return
				BGl_cenumzd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2228), BgL_vz00_2229);
		}

	}



/* cenum-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_101)
	{
		{	/* Foreign/ctype.sch 334 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_101)))->BgL_tvectorz00);
		}

	}



/* &cenum-tvector */
	obj_t BGl_z62cenumzd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2230,
		obj_t BgL_oz00_2231)
	{
		{	/* Foreign/ctype.sch 334 */
			return
				BGl_cenumzd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2231));
		}

	}



/* cenum-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_102, obj_t BgL_vz00_103)
	{
		{	/* Foreign/ctype.sch 335 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_102)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_103), BUNSPEC);
		}

	}



/* &cenum-tvector-set! */
	obj_t BGl_z62cenumzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2232, obj_t BgL_oz00_2233, obj_t BgL_vz00_2234)
	{
		{	/* Foreign/ctype.sch 335 */
			return
				BGl_cenumzd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2233), BgL_vz00_2234);
		}

	}



/* cenum-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_104)
	{
		{	/* Foreign/ctype.sch 336 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_104)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &cenum-pointed-to-by */
	obj_t BGl_z62cenumzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2235, obj_t BgL_oz00_2236)
	{
		{	/* Foreign/ctype.sch 336 */
			return
				BGl_cenumzd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2236));
		}

	}



/* cenum-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_105, obj_t BgL_vz00_106)
	{
		{	/* Foreign/ctype.sch 337 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_105)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_106), BUNSPEC);
		}

	}



/* &cenum-pointed-to-by-set! */
	obj_t BGl_z62cenumzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2237, obj_t BgL_oz00_2238, obj_t BgL_vz00_2239)
	{
		{	/* Foreign/ctype.sch 337 */
			return
				BGl_cenumzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2238), BgL_vz00_2239);
		}

	}



/* cenum-alias */
	BGL_EXPORTED_DEF obj_t BGl_cenumzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_107)
	{
		{	/* Foreign/ctype.sch 338 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_107)))->BgL_aliasz00);
		}

	}



/* &cenum-alias */
	obj_t BGl_z62cenumzd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2240,
		obj_t BgL_oz00_2241)
	{
		{	/* Foreign/ctype.sch 338 */
			return
				BGl_cenumzd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2241));
		}

	}



/* cenum-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_108, obj_t BgL_vz00_109)
	{
		{	/* Foreign/ctype.sch 339 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_108)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_109), BUNSPEC);
		}

	}



/* &cenum-alias-set! */
	obj_t BGl_z62cenumzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2242, obj_t BgL_oz00_2243, obj_t BgL_vz00_2244)
	{
		{	/* Foreign/ctype.sch 339 */
			return
				BGl_cenumzd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2243), BgL_vz00_2244);
		}

	}



/* cenum-$ */
	BGL_EXPORTED_DEF obj_t BGl_cenumzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_110)
	{
		{	/* Foreign/ctype.sch 340 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_110)))->BgL_z42z42);
		}

	}



/* &cenum-$ */
	obj_t BGl_z62cenumzd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2245,
		obj_t BgL_oz00_2246)
	{
		{	/* Foreign/ctype.sch 340 */
			return
				BGl_cenumzd2z42z90zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2246));
		}

	}



/* cenum-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_111,
		obj_t BgL_vz00_112)
	{
		{	/* Foreign/ctype.sch 341 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_111)))->BgL_z42z42) =
				((obj_t) BgL_vz00_112), BUNSPEC);
		}

	}



/* &cenum-$-set! */
	obj_t BGl_z62cenumzd2z42zd2setz12z32zzforeign_ctypez00(obj_t BgL_envz00_2247,
		obj_t BgL_oz00_2248, obj_t BgL_vz00_2249)
	{
		{	/* Foreign/ctype.sch 341 */
			return
				BGl_cenumzd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2248), BgL_vz00_2249);
		}

	}



/* cenum-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_cenumzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_113)
	{
		{	/* Foreign/ctype.sch 342 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_113)))->BgL_magiczf3zf3);
		}

	}



/* &cenum-magic? */
	obj_t BGl_z62cenumzd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2250,
		obj_t BgL_oz00_2251)
	{
		{	/* Foreign/ctype.sch 342 */
			return
				BBOOL(BGl_cenumzd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2251)));
		}

	}



/* cenum-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_114, bool_t BgL_vz00_115)
	{
		{	/* Foreign/ctype.sch 343 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_114)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_115), BUNSPEC);
		}

	}



/* &cenum-magic?-set! */
	obj_t BGl_z62cenumzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2252, obj_t BgL_oz00_2253, obj_t BgL_vz00_2254)
	{
		{	/* Foreign/ctype.sch 343 */
			return
				BGl_cenumzd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2253), CBOOL(BgL_vz00_2254));
		}

	}



/* cenum-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_cenumzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_116)
	{
		{	/* Foreign/ctype.sch 344 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_116)))->BgL_initzf3zf3);
		}

	}



/* &cenum-init? */
	obj_t BGl_z62cenumzd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2255,
		obj_t BgL_oz00_2256)
	{
		{	/* Foreign/ctype.sch 344 */
			return
				BBOOL(BGl_cenumzd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2256)));
		}

	}



/* cenum-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_117, bool_t BgL_vz00_118)
	{
		{	/* Foreign/ctype.sch 345 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_117)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_118), BUNSPEC);
		}

	}



/* &cenum-init?-set! */
	obj_t BGl_z62cenumzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2257, obj_t BgL_oz00_2258, obj_t BgL_vz00_2259)
	{
		{	/* Foreign/ctype.sch 345 */
			return
				BGl_cenumzd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2258), CBOOL(BgL_vz00_2259));
		}

	}



/* cenum-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_119)
	{
		{	/* Foreign/ctype.sch 346 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_119)))->BgL_parentsz00);
		}

	}



/* &cenum-parents */
	obj_t BGl_z62cenumzd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2260,
		obj_t BgL_oz00_2261)
	{
		{	/* Foreign/ctype.sch 346 */
			return
				BGl_cenumzd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2261));
		}

	}



/* cenum-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_120, obj_t BgL_vz00_121)
	{
		{	/* Foreign/ctype.sch 347 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_120)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_121), BUNSPEC);
		}

	}



/* &cenum-parents-set! */
	obj_t BGl_z62cenumzd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2262, obj_t BgL_oz00_2263, obj_t BgL_vz00_2264)
	{
		{	/* Foreign/ctype.sch 347 */
			return
				BGl_cenumzd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2263), BgL_vz00_2264);
		}

	}



/* cenum-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_122)
	{
		{	/* Foreign/ctype.sch 348 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_122)))->BgL_coercezd2tozd2);
		}

	}



/* &cenum-coerce-to */
	obj_t BGl_z62cenumzd2coercezd2toz62zzforeign_ctypez00(obj_t BgL_envz00_2265,
		obj_t BgL_oz00_2266)
	{
		{	/* Foreign/ctype.sch 348 */
			return
				BGl_cenumzd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2266));
		}

	}



/* cenum-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_123, obj_t BgL_vz00_124)
	{
		{	/* Foreign/ctype.sch 349 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_123)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_124), BUNSPEC);
		}

	}



/* &cenum-coerce-to-set! */
	obj_t BGl_z62cenumzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2267, obj_t BgL_oz00_2268, obj_t BgL_vz00_2269)
	{
		{	/* Foreign/ctype.sch 349 */
			return
				BGl_cenumzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2268), BgL_vz00_2269);
		}

	}



/* cenum-class */
	BGL_EXPORTED_DEF obj_t BGl_cenumzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_125)
	{
		{	/* Foreign/ctype.sch 350 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_125)))->BgL_classz00);
		}

	}



/* &cenum-class */
	obj_t BGl_z62cenumzd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2270,
		obj_t BgL_oz00_2271)
	{
		{	/* Foreign/ctype.sch 350 */
			return
				BGl_cenumzd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2271));
		}

	}



/* cenum-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_126, obj_t BgL_vz00_127)
	{
		{	/* Foreign/ctype.sch 351 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_126)))->BgL_classz00) =
				((obj_t) BgL_vz00_127), BUNSPEC);
		}

	}



/* &cenum-class-set! */
	obj_t BGl_z62cenumzd2classzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2272, obj_t BgL_oz00_2273, obj_t BgL_vz00_2274)
	{
		{	/* Foreign/ctype.sch 351 */
			return
				BGl_cenumzd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2273), BgL_vz00_2274);
		}

	}



/* cenum-size */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_128)
	{
		{	/* Foreign/ctype.sch 352 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_128)))->BgL_siza7eza7);
		}

	}



/* &cenum-size */
	obj_t BGl_z62cenumzd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2275,
		obj_t BgL_oz00_2276)
	{
		{	/* Foreign/ctype.sch 352 */
			return
				BGl_cenumzd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2276));
		}

	}



/* cenum-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_129, obj_t BgL_vz00_130)
	{
		{	/* Foreign/ctype.sch 353 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_129)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_130), BUNSPEC);
		}

	}



/* &cenum-size-set! */
	obj_t BGl_z62cenumzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2277, obj_t BgL_oz00_2278, obj_t BgL_vz00_2279)
	{
		{	/* Foreign/ctype.sch 353 */
			return
				BGl_cenumzd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2278), BgL_vz00_2279);
		}

	}



/* cenum-name */
	BGL_EXPORTED_DEF obj_t BGl_cenumzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_131)
	{
		{	/* Foreign/ctype.sch 354 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_131)))->BgL_namez00);
		}

	}



/* &cenum-name */
	obj_t BGl_z62cenumzd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2280,
		obj_t BgL_oz00_2281)
	{
		{	/* Foreign/ctype.sch 354 */
			return
				BGl_cenumzd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2281));
		}

	}



/* cenum-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cenumzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_132, obj_t BgL_vz00_133)
	{
		{	/* Foreign/ctype.sch 355 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_132)))->BgL_namez00) =
				((obj_t) BgL_vz00_133), BUNSPEC);
		}

	}



/* &cenum-name-set! */
	obj_t BGl_z62cenumzd2namezd2setz12z70zzforeign_ctypez00(obj_t BgL_envz00_2282,
		obj_t BgL_oz00_2283, obj_t BgL_vz00_2284)
	{
		{	/* Foreign/ctype.sch 355 */
			return
				BGl_cenumzd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2283), BgL_vz00_2284);
		}

	}



/* cenum-id */
	BGL_EXPORTED_DEF obj_t BGl_cenumzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_134)
	{
		{	/* Foreign/ctype.sch 356 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_134)))->BgL_idz00);
		}

	}



/* &cenum-id */
	obj_t BGl_z62cenumzd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2285,
		obj_t BgL_oz00_2286)
	{
		{	/* Foreign/ctype.sch 356 */
			return
				BGl_cenumzd2idzd2zzforeign_ctypez00(((BgL_typez00_bglt) BgL_oz00_2286));
		}

	}



/* make-copaque */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2copaquezd2zzforeign_ctypez00(obj_t BgL_id1288z00_137,
		obj_t BgL_name1289z00_138, obj_t BgL_siza7e1290za7_139,
		obj_t BgL_class1291z00_140, obj_t BgL_coercezd2to1292zd2_141,
		obj_t BgL_parents1293z00_142, bool_t BgL_initzf31294zf3_143,
		bool_t BgL_magiczf31295zf3_144, obj_t BgL_z421296z42_145,
		obj_t BgL_alias1297z00_146, obj_t BgL_pointedzd2tozd2by1298z00_147,
		obj_t BgL_tvector1299z00_148, obj_t BgL_location1300z00_149,
		obj_t BgL_importzd2location1301zd2_150, int BgL_occurrence1302z00_151,
		BgL_typez00_bglt BgL_btype1303z00_152)
	{
		{	/* Foreign/ctype.sch 360 */
			{	/* Foreign/ctype.sch 360 */
				BgL_typez00_bglt BgL_new1226z00_3142;

				{	/* Foreign/ctype.sch 360 */
					BgL_typez00_bglt BgL_tmp1224z00_3143;
					BgL_copaquez00_bglt BgL_wide1225z00_3144;

					{
						BgL_typez00_bglt BgL_auxz00_3902;

						{	/* Foreign/ctype.sch 360 */
							BgL_typez00_bglt BgL_new1223z00_3145;

							BgL_new1223z00_3145 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 360 */
								long BgL_arg1357z00_3146;

								{	/* Foreign/ctype.sch 360 */
									long BgL_res2086z00_3147;

									BgL_res2086z00_3147 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1357z00_3146 = BgL_res2086z00_3147;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1223z00_3145),
									BgL_arg1357z00_3146);
							}
							{	/* Foreign/ctype.sch 360 */
								BgL_objectz00_bglt BgL_tmpz00_3907;

								BgL_tmpz00_3907 = ((BgL_objectz00_bglt) BgL_new1223z00_3145);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3907, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1223z00_3145);
							BgL_auxz00_3902 = BgL_new1223z00_3145;
						}
						BgL_tmp1224z00_3143 = ((BgL_typez00_bglt) BgL_auxz00_3902);
					}
					BgL_wide1225z00_3144 =
						((BgL_copaquez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_copaquez00_bgl))));
					{	/* Foreign/ctype.sch 360 */
						obj_t BgL_auxz00_3915;
						BgL_objectz00_bglt BgL_tmpz00_3913;

						BgL_auxz00_3915 = ((obj_t) BgL_wide1225z00_3144);
						BgL_tmpz00_3913 = ((BgL_objectz00_bglt) BgL_tmp1224z00_3143);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3913, BgL_auxz00_3915);
					}
					((BgL_objectz00_bglt) BgL_tmp1224z00_3143);
					{	/* Foreign/ctype.sch 360 */
						long BgL_arg1352z00_3148;

						{	/* Foreign/ctype.sch 360 */
							long BgL_res2087z00_3149;

							BgL_res2087z00_3149 =
								BGL_CLASS_INDEX(BGl_copaquez00zzforeign_ctypez00);
							BgL_arg1352z00_3148 = BgL_res2087z00_3149;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1224z00_3143), BgL_arg1352z00_3148);
					}
					BgL_new1226z00_3142 = ((BgL_typez00_bglt) BgL_tmp1224z00_3143);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1226z00_3142)))->BgL_idz00) =
					((obj_t) BgL_id1288z00_137), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_namez00) =
					((obj_t) BgL_name1289z00_138), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1290za7_139), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_classz00) =
					((obj_t) BgL_class1291z00_140), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1292zd2_141), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_parentsz00) =
					((obj_t) BgL_parents1293z00_142), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31294zf3_143), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31295zf3_144), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_z42z42) =
					((obj_t) BgL_z421296z42_145), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_aliasz00) =
					((obj_t) BgL_alias1297z00_146), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1298z00_147), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1299z00_148), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_locationz00) =
					((obj_t) BgL_location1300z00_149), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1301zd2_150), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1226z00_3142)))->BgL_occurrencez00) =
					((int) BgL_occurrence1302z00_151), BUNSPEC);
				{
					BgL_copaquez00_bglt BgL_auxz00_3953;

					{
						obj_t BgL_auxz00_3954;

						{	/* Foreign/ctype.sch 360 */
							BgL_objectz00_bglt BgL_tmpz00_3955;

							BgL_tmpz00_3955 = ((BgL_objectz00_bglt) BgL_new1226z00_3142);
							BgL_auxz00_3954 = BGL_OBJECT_WIDENING(BgL_tmpz00_3955);
						}
						BgL_auxz00_3953 = ((BgL_copaquez00_bglt) BgL_auxz00_3954);
					}
					((((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_3953))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_btype1303z00_152), BUNSPEC);
				}
				return BgL_new1226z00_3142;
			}
		}

	}



/* &make-copaque */
	BgL_typez00_bglt BGl_z62makezd2copaquezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2287, obj_t BgL_id1288z00_2288, obj_t BgL_name1289z00_2289,
		obj_t BgL_siza7e1290za7_2290, obj_t BgL_class1291z00_2291,
		obj_t BgL_coercezd2to1292zd2_2292, obj_t BgL_parents1293z00_2293,
		obj_t BgL_initzf31294zf3_2294, obj_t BgL_magiczf31295zf3_2295,
		obj_t BgL_z421296z42_2296, obj_t BgL_alias1297z00_2297,
		obj_t BgL_pointedzd2tozd2by1298z00_2298, obj_t BgL_tvector1299z00_2299,
		obj_t BgL_location1300z00_2300, obj_t BgL_importzd2location1301zd2_2301,
		obj_t BgL_occurrence1302z00_2302, obj_t BgL_btype1303z00_2303)
	{
		{	/* Foreign/ctype.sch 360 */
			return
				BGl_makezd2copaquezd2zzforeign_ctypez00(BgL_id1288z00_2288,
				BgL_name1289z00_2289, BgL_siza7e1290za7_2290, BgL_class1291z00_2291,
				BgL_coercezd2to1292zd2_2292, BgL_parents1293z00_2293,
				CBOOL(BgL_initzf31294zf3_2294), CBOOL(BgL_magiczf31295zf3_2295),
				BgL_z421296z42_2296, BgL_alias1297z00_2297,
				BgL_pointedzd2tozd2by1298z00_2298, BgL_tvector1299z00_2299,
				BgL_location1300z00_2300, BgL_importzd2location1301zd2_2301,
				CINT(BgL_occurrence1302z00_2302),
				((BgL_typez00_bglt) BgL_btype1303z00_2303));
		}

	}



/* copaque? */
	BGL_EXPORTED_DEF bool_t BGl_copaquezf3zf3zzforeign_ctypez00(obj_t
		BgL_objz00_153)
	{
		{	/* Foreign/ctype.sch 361 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_153,
				BGl_copaquez00zzforeign_ctypez00);
		}

	}



/* &copaque? */
	obj_t BGl_z62copaquezf3z91zzforeign_ctypez00(obj_t BgL_envz00_2304,
		obj_t BgL_objz00_2305)
	{
		{	/* Foreign/ctype.sch 361 */
			return BBOOL(BGl_copaquezf3zf3zzforeign_ctypez00(BgL_objz00_2305));
		}

	}



/* copaque-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_copaquezd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 362 */
			{	/* Foreign/ctype.sch 362 */
				obj_t BgL_classz00_1493;

				BgL_classz00_1493 = BGl_copaquez00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 362 */
					obj_t BgL__ortest_1106z00_1494;

					BgL__ortest_1106z00_1494 = BGL_CLASS_NIL(BgL_classz00_1493);
					if (CBOOL(BgL__ortest_1106z00_1494))
						{	/* Foreign/ctype.sch 362 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1494);
						}
					else
						{	/* Foreign/ctype.sch 362 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1493));
						}
				}
			}
		}

	}



/* &copaque-nil */
	BgL_typez00_bglt BGl_z62copaquezd2nilzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2306)
	{
		{	/* Foreign/ctype.sch 362 */
			return BGl_copaquezd2nilzd2zzforeign_ctypez00();
		}

	}



/* copaque-btype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_copaquezd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_154)
	{
		{	/* Foreign/ctype.sch 363 */
			{
				BgL_copaquez00_bglt BgL_auxz00_3975;

				{
					obj_t BgL_auxz00_3976;

					{	/* Foreign/ctype.sch 363 */
						BgL_objectz00_bglt BgL_tmpz00_3977;

						BgL_tmpz00_3977 = ((BgL_objectz00_bglt) BgL_oz00_154);
						BgL_auxz00_3976 = BGL_OBJECT_WIDENING(BgL_tmpz00_3977);
					}
					BgL_auxz00_3975 = ((BgL_copaquez00_bglt) BgL_auxz00_3976);
				}
				return (((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_3975))->BgL_btypez00);
			}
		}

	}



/* &copaque-btype */
	BgL_typez00_bglt BGl_z62copaquezd2btypezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2307, obj_t BgL_oz00_2308)
	{
		{	/* Foreign/ctype.sch 363 */
			return
				BGl_copaquezd2btypezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2308));
		}

	}



/* copaque-occurrence */
	BGL_EXPORTED_DEF int
		BGl_copaquezd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_157)
	{
		{	/* Foreign/ctype.sch 365 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_157)))->BgL_occurrencez00);
		}

	}



/* &copaque-occurrence */
	obj_t BGl_z62copaquezd2occurrencezb0zzforeign_ctypez00(obj_t BgL_envz00_2309,
		obj_t BgL_oz00_2310)
	{
		{	/* Foreign/ctype.sch 365 */
			return
				BINT(BGl_copaquezd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2310)));
		}

	}



/* copaque-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_158, int BgL_vz00_159)
	{
		{	/* Foreign/ctype.sch 366 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_158)))->BgL_occurrencez00) =
				((int) BgL_vz00_159), BUNSPEC);
		}

	}



/* &copaque-occurrence-set! */
	obj_t BGl_z62copaquezd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2311, obj_t BgL_oz00_2312, obj_t BgL_vz00_2313)
	{
		{	/* Foreign/ctype.sch 366 */
			return
				BGl_copaquezd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2312), CINT(BgL_vz00_2313));
		}

	}



/* copaque-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_160)
	{
		{	/* Foreign/ctype.sch 367 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_160)))->BgL_importzd2locationzd2);
		}

	}



/* &copaque-import-location */
	obj_t BGl_z62copaquezd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2314, obj_t BgL_oz00_2315)
	{
		{	/* Foreign/ctype.sch 367 */
			return
				BGl_copaquezd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2315));
		}

	}



/* copaque-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_161, obj_t BgL_vz00_162)
	{
		{	/* Foreign/ctype.sch 368 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_161)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_162), BUNSPEC);
		}

	}



/* &copaque-import-location-set! */
	obj_t BGl_z62copaquezd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2316, obj_t BgL_oz00_2317, obj_t BgL_vz00_2318)
	{
		{	/* Foreign/ctype.sch 368 */
			return
				BGl_copaquezd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2317), BgL_vz00_2318);
		}

	}



/* copaque-location */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_163)
	{
		{	/* Foreign/ctype.sch 369 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_163)))->BgL_locationz00);
		}

	}



/* &copaque-location */
	obj_t BGl_z62copaquezd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2319,
		obj_t BgL_oz00_2320)
	{
		{	/* Foreign/ctype.sch 369 */
			return
				BGl_copaquezd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2320));
		}

	}



/* copaque-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_164, obj_t BgL_vz00_165)
	{
		{	/* Foreign/ctype.sch 370 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_164)))->BgL_locationz00) =
				((obj_t) BgL_vz00_165), BUNSPEC);
		}

	}



/* &copaque-location-set! */
	obj_t BGl_z62copaquezd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2321, obj_t BgL_oz00_2322, obj_t BgL_vz00_2323)
	{
		{	/* Foreign/ctype.sch 370 */
			return
				BGl_copaquezd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2322), BgL_vz00_2323);
		}

	}



/* copaque-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_166)
	{
		{	/* Foreign/ctype.sch 371 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_166)))->BgL_tvectorz00);
		}

	}



/* &copaque-tvector */
	obj_t BGl_z62copaquezd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2324,
		obj_t BgL_oz00_2325)
	{
		{	/* Foreign/ctype.sch 371 */
			return
				BGl_copaquezd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2325));
		}

	}



/* copaque-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_167, obj_t BgL_vz00_168)
	{
		{	/* Foreign/ctype.sch 372 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_167)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_168), BUNSPEC);
		}

	}



/* &copaque-tvector-set! */
	obj_t BGl_z62copaquezd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2326, obj_t BgL_oz00_2327, obj_t BgL_vz00_2328)
	{
		{	/* Foreign/ctype.sch 372 */
			return
				BGl_copaquezd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2327), BgL_vz00_2328);
		}

	}



/* copaque-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_169)
	{
		{	/* Foreign/ctype.sch 373 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_169)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &copaque-pointed-to-by */
	obj_t BGl_z62copaquezd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2329, obj_t BgL_oz00_2330)
	{
		{	/* Foreign/ctype.sch 373 */
			return
				BGl_copaquezd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2330));
		}

	}



/* copaque-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_170, obj_t BgL_vz00_171)
	{
		{	/* Foreign/ctype.sch 374 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_170)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_171), BUNSPEC);
		}

	}



/* &copaque-pointed-to-by-set! */
	obj_t BGl_z62copaquezd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2331, obj_t BgL_oz00_2332, obj_t BgL_vz00_2333)
	{
		{	/* Foreign/ctype.sch 374 */
			return
				BGl_copaquezd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2332), BgL_vz00_2333);
		}

	}



/* copaque-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_172)
	{
		{	/* Foreign/ctype.sch 375 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_172)))->BgL_aliasz00);
		}

	}



/* &copaque-alias */
	obj_t BGl_z62copaquezd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2334,
		obj_t BgL_oz00_2335)
	{
		{	/* Foreign/ctype.sch 375 */
			return
				BGl_copaquezd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2335));
		}

	}



/* copaque-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_173, obj_t BgL_vz00_174)
	{
		{	/* Foreign/ctype.sch 376 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_173)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_174), BUNSPEC);
		}

	}



/* &copaque-alias-set! */
	obj_t BGl_z62copaquezd2aliaszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2336, obj_t BgL_oz00_2337, obj_t BgL_vz00_2338)
	{
		{	/* Foreign/ctype.sch 376 */
			return
				BGl_copaquezd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2337), BgL_vz00_2338);
		}

	}



/* copaque-$ */
	BGL_EXPORTED_DEF obj_t BGl_copaquezd2z42z90zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_175)
	{
		{	/* Foreign/ctype.sch 377 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_175)))->BgL_z42z42);
		}

	}



/* &copaque-$ */
	obj_t BGl_z62copaquezd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2339,
		obj_t BgL_oz00_2340)
	{
		{	/* Foreign/ctype.sch 377 */
			return
				BGl_copaquezd2z42z90zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2340));
		}

	}



/* copaque-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_176, obj_t BgL_vz00_177)
	{
		{	/* Foreign/ctype.sch 378 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_176)))->BgL_z42z42) =
				((obj_t) BgL_vz00_177), BUNSPEC);
		}

	}



/* &copaque-$-set! */
	obj_t BGl_z62copaquezd2z42zd2setz12z32zzforeign_ctypez00(obj_t
		BgL_envz00_2341, obj_t BgL_oz00_2342, obj_t BgL_vz00_2343)
	{
		{	/* Foreign/ctype.sch 378 */
			return
				BGl_copaquezd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2342), BgL_vz00_2343);
		}

	}



/* copaque-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_copaquezd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_178)
	{
		{	/* Foreign/ctype.sch 379 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_178)))->BgL_magiczf3zf3);
		}

	}



/* &copaque-magic? */
	obj_t BGl_z62copaquezd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2344,
		obj_t BgL_oz00_2345)
	{
		{	/* Foreign/ctype.sch 379 */
			return
				BBOOL(BGl_copaquezd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2345)));
		}

	}



/* copaque-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_179, bool_t BgL_vz00_180)
	{
		{	/* Foreign/ctype.sch 380 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_179)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_180), BUNSPEC);
		}

	}



/* &copaque-magic?-set! */
	obj_t BGl_z62copaquezd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2346, obj_t BgL_oz00_2347, obj_t BgL_vz00_2348)
	{
		{	/* Foreign/ctype.sch 380 */
			return
				BGl_copaquezd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2347), CBOOL(BgL_vz00_2348));
		}

	}



/* copaque-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_copaquezd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_181)
	{
		{	/* Foreign/ctype.sch 381 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_181)))->BgL_initzf3zf3);
		}

	}



/* &copaque-init? */
	obj_t BGl_z62copaquezd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2349,
		obj_t BgL_oz00_2350)
	{
		{	/* Foreign/ctype.sch 381 */
			return
				BBOOL(BGl_copaquezd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2350)));
		}

	}



/* copaque-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_182, bool_t BgL_vz00_183)
	{
		{	/* Foreign/ctype.sch 382 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_182)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_183), BUNSPEC);
		}

	}



/* &copaque-init?-set! */
	obj_t BGl_z62copaquezd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2351, obj_t BgL_oz00_2352, obj_t BgL_vz00_2353)
	{
		{	/* Foreign/ctype.sch 382 */
			return
				BGl_copaquezd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2352), CBOOL(BgL_vz00_2353));
		}

	}



/* copaque-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_184)
	{
		{	/* Foreign/ctype.sch 383 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_184)))->BgL_parentsz00);
		}

	}



/* &copaque-parents */
	obj_t BGl_z62copaquezd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2354,
		obj_t BgL_oz00_2355)
	{
		{	/* Foreign/ctype.sch 383 */
			return
				BGl_copaquezd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2355));
		}

	}



/* copaque-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_185, obj_t BgL_vz00_186)
	{
		{	/* Foreign/ctype.sch 384 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_185)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_186), BUNSPEC);
		}

	}



/* &copaque-parents-set! */
	obj_t BGl_z62copaquezd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2356, obj_t BgL_oz00_2357, obj_t BgL_vz00_2358)
	{
		{	/* Foreign/ctype.sch 384 */
			return
				BGl_copaquezd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2357), BgL_vz00_2358);
		}

	}



/* copaque-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_187)
	{
		{	/* Foreign/ctype.sch 385 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_187)))->BgL_coercezd2tozd2);
		}

	}



/* &copaque-coerce-to */
	obj_t BGl_z62copaquezd2coercezd2toz62zzforeign_ctypez00(obj_t BgL_envz00_2359,
		obj_t BgL_oz00_2360)
	{
		{	/* Foreign/ctype.sch 385 */
			return
				BGl_copaquezd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2360));
		}

	}



/* copaque-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_188, obj_t BgL_vz00_189)
	{
		{	/* Foreign/ctype.sch 386 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_188)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_189), BUNSPEC);
		}

	}



/* &copaque-coerce-to-set! */
	obj_t BGl_z62copaquezd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2361, obj_t BgL_oz00_2362, obj_t BgL_vz00_2363)
	{
		{	/* Foreign/ctype.sch 386 */
			return
				BGl_copaquezd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2362), BgL_vz00_2363);
		}

	}



/* copaque-class */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2classzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_190)
	{
		{	/* Foreign/ctype.sch 387 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_190)))->BgL_classz00);
		}

	}



/* &copaque-class */
	obj_t BGl_z62copaquezd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2364,
		obj_t BgL_oz00_2365)
	{
		{	/* Foreign/ctype.sch 387 */
			return
				BGl_copaquezd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2365));
		}

	}



/* copaque-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_191, obj_t BgL_vz00_192)
	{
		{	/* Foreign/ctype.sch 388 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_191)))->BgL_classz00) =
				((obj_t) BgL_vz00_192), BUNSPEC);
		}

	}



/* &copaque-class-set! */
	obj_t BGl_z62copaquezd2classzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2366, obj_t BgL_oz00_2367, obj_t BgL_vz00_2368)
	{
		{	/* Foreign/ctype.sch 388 */
			return
				BGl_copaquezd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2367), BgL_vz00_2368);
		}

	}



/* copaque-size */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_193)
	{
		{	/* Foreign/ctype.sch 389 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_193)))->BgL_siza7eza7);
		}

	}



/* &copaque-size */
	obj_t BGl_z62copaquezd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2369,
		obj_t BgL_oz00_2370)
	{
		{	/* Foreign/ctype.sch 389 */
			return
				BGl_copaquezd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2370));
		}

	}



/* copaque-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_194, obj_t BgL_vz00_195)
	{
		{	/* Foreign/ctype.sch 390 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_194)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_195), BUNSPEC);
		}

	}



/* &copaque-size-set! */
	obj_t BGl_z62copaquezd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2371, obj_t BgL_oz00_2372, obj_t BgL_vz00_2373)
	{
		{	/* Foreign/ctype.sch 390 */
			return
				BGl_copaquezd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2372), BgL_vz00_2373);
		}

	}



/* copaque-name */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2namezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_196)
	{
		{	/* Foreign/ctype.sch 391 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_196)))->BgL_namez00);
		}

	}



/* &copaque-name */
	obj_t BGl_z62copaquezd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2374,
		obj_t BgL_oz00_2375)
	{
		{	/* Foreign/ctype.sch 391 */
			return
				BGl_copaquezd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2375));
		}

	}



/* copaque-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_copaquezd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_197, obj_t BgL_vz00_198)
	{
		{	/* Foreign/ctype.sch 392 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_197)))->BgL_namez00) =
				((obj_t) BgL_vz00_198), BUNSPEC);
		}

	}



/* &copaque-name-set! */
	obj_t BGl_z62copaquezd2namezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2376, obj_t BgL_oz00_2377, obj_t BgL_vz00_2378)
	{
		{	/* Foreign/ctype.sch 392 */
			return
				BGl_copaquezd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2377), BgL_vz00_2378);
		}

	}



/* copaque-id */
	BGL_EXPORTED_DEF obj_t BGl_copaquezd2idzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_199)
	{
		{	/* Foreign/ctype.sch 393 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_199)))->BgL_idz00);
		}

	}



/* &copaque-id */
	obj_t BGl_z62copaquezd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2379,
		obj_t BgL_oz00_2380)
	{
		{	/* Foreign/ctype.sch 393 */
			return
				BGl_copaquezd2idzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2380));
		}

	}



/* make-cfunction */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2cfunctionzd2zzforeign_ctypez00(obj_t BgL_id1268z00_202,
		obj_t BgL_name1269z00_203, obj_t BgL_siza7e1270za7_204,
		obj_t BgL_class1271z00_205, obj_t BgL_coercezd2to1272zd2_206,
		obj_t BgL_parents1273z00_207, bool_t BgL_initzf31274zf3_208,
		bool_t BgL_magiczf31275zf3_209, obj_t BgL_z421276z42_210,
		obj_t BgL_alias1277z00_211, obj_t BgL_pointedzd2tozd2by1278z00_212,
		obj_t BgL_tvector1279z00_213, obj_t BgL_location1280z00_214,
		obj_t BgL_importzd2location1281zd2_215, int BgL_occurrence1282z00_216,
		BgL_typez00_bglt BgL_btype1283z00_217, long BgL_arity1284z00_218,
		BgL_typez00_bglt BgL_typezd2res1285zd2_219,
		obj_t BgL_typezd2args1286zd2_220)
	{
		{	/* Foreign/ctype.sch 397 */
			{	/* Foreign/ctype.sch 397 */
				BgL_typez00_bglt BgL_new1230z00_3150;

				{	/* Foreign/ctype.sch 397 */
					BgL_typez00_bglt BgL_tmp1228z00_3151;
					BgL_cfunctionz00_bglt BgL_wide1229z00_3152;

					{
						BgL_typez00_bglt BgL_auxz00_4106;

						{	/* Foreign/ctype.sch 397 */
							BgL_typez00_bglt BgL_new1227z00_3153;

							BgL_new1227z00_3153 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 397 */
								long BgL_arg1361z00_3154;

								{	/* Foreign/ctype.sch 397 */
									long BgL_res2088z00_3155;

									BgL_res2088z00_3155 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1361z00_3154 = BgL_res2088z00_3155;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1227z00_3153),
									BgL_arg1361z00_3154);
							}
							{	/* Foreign/ctype.sch 397 */
								BgL_objectz00_bglt BgL_tmpz00_4111;

								BgL_tmpz00_4111 = ((BgL_objectz00_bglt) BgL_new1227z00_3153);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4111, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1227z00_3153);
							BgL_auxz00_4106 = BgL_new1227z00_3153;
						}
						BgL_tmp1228z00_3151 = ((BgL_typez00_bglt) BgL_auxz00_4106);
					}
					BgL_wide1229z00_3152 =
						((BgL_cfunctionz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfunctionz00_bgl))));
					{	/* Foreign/ctype.sch 397 */
						obj_t BgL_auxz00_4119;
						BgL_objectz00_bglt BgL_tmpz00_4117;

						BgL_auxz00_4119 = ((obj_t) BgL_wide1229z00_3152);
						BgL_tmpz00_4117 = ((BgL_objectz00_bglt) BgL_tmp1228z00_3151);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4117, BgL_auxz00_4119);
					}
					((BgL_objectz00_bglt) BgL_tmp1228z00_3151);
					{	/* Foreign/ctype.sch 397 */
						long BgL_arg1360z00_3156;

						{	/* Foreign/ctype.sch 397 */
							long BgL_res2089z00_3157;

							BgL_res2089z00_3157 =
								BGL_CLASS_INDEX(BGl_cfunctionz00zzforeign_ctypez00);
							BgL_arg1360z00_3156 = BgL_res2089z00_3157;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1228z00_3151), BgL_arg1360z00_3156);
					}
					BgL_new1230z00_3150 = ((BgL_typez00_bglt) BgL_tmp1228z00_3151);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1230z00_3150)))->BgL_idz00) =
					((obj_t) BgL_id1268z00_202), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_namez00) =
					((obj_t) BgL_name1269z00_203), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1270za7_204), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_classz00) =
					((obj_t) BgL_class1271z00_205), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1272zd2_206), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_parentsz00) =
					((obj_t) BgL_parents1273z00_207), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31274zf3_208), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31275zf3_209), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_z42z42) =
					((obj_t) BgL_z421276z42_210), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_aliasz00) =
					((obj_t) BgL_alias1277z00_211), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1278z00_212), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1279z00_213), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_locationz00) =
					((obj_t) BgL_location1280z00_214), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1281zd2_215), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1230z00_3150)))->BgL_occurrencez00) =
					((int) BgL_occurrence1282z00_216), BUNSPEC);
				{
					BgL_cfunctionz00_bglt BgL_auxz00_4157;

					{
						obj_t BgL_auxz00_4158;

						{	/* Foreign/ctype.sch 397 */
							BgL_objectz00_bglt BgL_tmpz00_4159;

							BgL_tmpz00_4159 = ((BgL_objectz00_bglt) BgL_new1230z00_3150);
							BgL_auxz00_4158 = BGL_OBJECT_WIDENING(BgL_tmpz00_4159);
						}
						BgL_auxz00_4157 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4158);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4157))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_btype1283z00_217), BUNSPEC);
				}
				{
					BgL_cfunctionz00_bglt BgL_auxz00_4164;

					{
						obj_t BgL_auxz00_4165;

						{	/* Foreign/ctype.sch 397 */
							BgL_objectz00_bglt BgL_tmpz00_4166;

							BgL_tmpz00_4166 = ((BgL_objectz00_bglt) BgL_new1230z00_3150);
							BgL_auxz00_4165 = BGL_OBJECT_WIDENING(BgL_tmpz00_4166);
						}
						BgL_auxz00_4164 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4165);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4164))->BgL_arityz00) =
						((long) BgL_arity1284z00_218), BUNSPEC);
				}
				{
					BgL_cfunctionz00_bglt BgL_auxz00_4171;

					{
						obj_t BgL_auxz00_4172;

						{	/* Foreign/ctype.sch 397 */
							BgL_objectz00_bglt BgL_tmpz00_4173;

							BgL_tmpz00_4173 = ((BgL_objectz00_bglt) BgL_new1230z00_3150);
							BgL_auxz00_4172 = BGL_OBJECT_WIDENING(BgL_tmpz00_4173);
						}
						BgL_auxz00_4171 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4172);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4171))->
							BgL_typezd2reszd2) =
						((BgL_typez00_bglt) BgL_typezd2res1285zd2_219), BUNSPEC);
				}
				{
					BgL_cfunctionz00_bglt BgL_auxz00_4178;

					{
						obj_t BgL_auxz00_4179;

						{	/* Foreign/ctype.sch 397 */
							BgL_objectz00_bglt BgL_tmpz00_4180;

							BgL_tmpz00_4180 = ((BgL_objectz00_bglt) BgL_new1230z00_3150);
							BgL_auxz00_4179 = BGL_OBJECT_WIDENING(BgL_tmpz00_4180);
						}
						BgL_auxz00_4178 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4179);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4178))->
							BgL_typezd2argszd2) =
						((obj_t) BgL_typezd2args1286zd2_220), BUNSPEC);
				}
				return BgL_new1230z00_3150;
			}
		}

	}



/* &make-cfunction */
	BgL_typez00_bglt BGl_z62makezd2cfunctionzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2381, obj_t BgL_id1268z00_2382, obj_t BgL_name1269z00_2383,
		obj_t BgL_siza7e1270za7_2384, obj_t BgL_class1271z00_2385,
		obj_t BgL_coercezd2to1272zd2_2386, obj_t BgL_parents1273z00_2387,
		obj_t BgL_initzf31274zf3_2388, obj_t BgL_magiczf31275zf3_2389,
		obj_t BgL_z421276z42_2390, obj_t BgL_alias1277z00_2391,
		obj_t BgL_pointedzd2tozd2by1278z00_2392, obj_t BgL_tvector1279z00_2393,
		obj_t BgL_location1280z00_2394, obj_t BgL_importzd2location1281zd2_2395,
		obj_t BgL_occurrence1282z00_2396, obj_t BgL_btype1283z00_2397,
		obj_t BgL_arity1284z00_2398, obj_t BgL_typezd2res1285zd2_2399,
		obj_t BgL_typezd2args1286zd2_2400)
	{
		{	/* Foreign/ctype.sch 397 */
			return
				BGl_makezd2cfunctionzd2zzforeign_ctypez00(BgL_id1268z00_2382,
				BgL_name1269z00_2383, BgL_siza7e1270za7_2384, BgL_class1271z00_2385,
				BgL_coercezd2to1272zd2_2386, BgL_parents1273z00_2387,
				CBOOL(BgL_initzf31274zf3_2388), CBOOL(BgL_magiczf31275zf3_2389),
				BgL_z421276z42_2390, BgL_alias1277z00_2391,
				BgL_pointedzd2tozd2by1278z00_2392, BgL_tvector1279z00_2393,
				BgL_location1280z00_2394, BgL_importzd2location1281zd2_2395,
				CINT(BgL_occurrence1282z00_2396),
				((BgL_typez00_bglt) BgL_btype1283z00_2397),
				(long) CINT(BgL_arity1284z00_2398),
				((BgL_typez00_bglt) BgL_typezd2res1285zd2_2399),
				BgL_typezd2args1286zd2_2400);
		}

	}



/* cfunction? */
	BGL_EXPORTED_DEF bool_t BGl_cfunctionzf3zf3zzforeign_ctypez00(obj_t
		BgL_objz00_221)
	{
		{	/* Foreign/ctype.sch 398 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_221,
				BGl_cfunctionz00zzforeign_ctypez00);
		}

	}



/* &cfunction? */
	obj_t BGl_z62cfunctionzf3z91zzforeign_ctypez00(obj_t BgL_envz00_2401,
		obj_t BgL_objz00_2402)
	{
		{	/* Foreign/ctype.sch 398 */
			return BBOOL(BGl_cfunctionzf3zf3zzforeign_ctypez00(BgL_objz00_2402));
		}

	}



/* cfunction-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_cfunctionzd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 399 */
			{	/* Foreign/ctype.sch 399 */
				obj_t BgL_classz00_1516;

				BgL_classz00_1516 = BGl_cfunctionz00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 399 */
					obj_t BgL__ortest_1106z00_1517;

					BgL__ortest_1106z00_1517 = BGL_CLASS_NIL(BgL_classz00_1516);
					if (CBOOL(BgL__ortest_1106z00_1517))
						{	/* Foreign/ctype.sch 399 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1517);
						}
					else
						{	/* Foreign/ctype.sch 399 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1516));
						}
				}
			}
		}

	}



/* &cfunction-nil */
	BgL_typez00_bglt BGl_z62cfunctionzd2nilzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2403)
	{
		{	/* Foreign/ctype.sch 399 */
			return BGl_cfunctionzd2nilzd2zzforeign_ctypez00();
		}

	}



/* cfunction-type-args */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2typezd2argsz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_222)
	{
		{	/* Foreign/ctype.sch 400 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_4202;

				{
					obj_t BgL_auxz00_4203;

					{	/* Foreign/ctype.sch 400 */
						BgL_objectz00_bglt BgL_tmpz00_4204;

						BgL_tmpz00_4204 = ((BgL_objectz00_bglt) BgL_oz00_222);
						BgL_auxz00_4203 = BGL_OBJECT_WIDENING(BgL_tmpz00_4204);
					}
					BgL_auxz00_4202 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4203);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4202))->
					BgL_typezd2argszd2);
			}
		}

	}



/* &cfunction-type-args */
	obj_t BGl_z62cfunctionzd2typezd2argsz62zzforeign_ctypez00(obj_t
		BgL_envz00_2404, obj_t BgL_oz00_2405)
	{
		{	/* Foreign/ctype.sch 400 */
			return
				BGl_cfunctionzd2typezd2argsz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2405));
		}

	}



/* cfunction-type-res */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cfunctionzd2typezd2resz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_225)
	{
		{	/* Foreign/ctype.sch 402 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_4211;

				{
					obj_t BgL_auxz00_4212;

					{	/* Foreign/ctype.sch 402 */
						BgL_objectz00_bglt BgL_tmpz00_4213;

						BgL_tmpz00_4213 = ((BgL_objectz00_bglt) BgL_oz00_225);
						BgL_auxz00_4212 = BGL_OBJECT_WIDENING(BgL_tmpz00_4213);
					}
					BgL_auxz00_4211 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4212);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4211))->
					BgL_typezd2reszd2);
			}
		}

	}



/* &cfunction-type-res */
	BgL_typez00_bglt BGl_z62cfunctionzd2typezd2resz62zzforeign_ctypez00(obj_t
		BgL_envz00_2406, obj_t BgL_oz00_2407)
	{
		{	/* Foreign/ctype.sch 402 */
			return
				BGl_cfunctionzd2typezd2resz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2407));
		}

	}



/* cfunction-arity */
	BGL_EXPORTED_DEF long
		BGl_cfunctionzd2arityzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_228)
	{
		{	/* Foreign/ctype.sch 404 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_4220;

				{
					obj_t BgL_auxz00_4221;

					{	/* Foreign/ctype.sch 404 */
						BgL_objectz00_bglt BgL_tmpz00_4222;

						BgL_tmpz00_4222 = ((BgL_objectz00_bglt) BgL_oz00_228);
						BgL_auxz00_4221 = BGL_OBJECT_WIDENING(BgL_tmpz00_4222);
					}
					BgL_auxz00_4220 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4221);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4220))->BgL_arityz00);
			}
		}

	}



/* &cfunction-arity */
	obj_t BGl_z62cfunctionzd2arityzb0zzforeign_ctypez00(obj_t BgL_envz00_2408,
		obj_t BgL_oz00_2409)
	{
		{	/* Foreign/ctype.sch 404 */
			return
				BINT(BGl_cfunctionzd2arityzd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2409)));
		}

	}



/* cfunction-btype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cfunctionzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_231)
	{
		{	/* Foreign/ctype.sch 406 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_4230;

				{
					obj_t BgL_auxz00_4231;

					{	/* Foreign/ctype.sch 406 */
						BgL_objectz00_bglt BgL_tmpz00_4232;

						BgL_tmpz00_4232 = ((BgL_objectz00_bglt) BgL_oz00_231);
						BgL_auxz00_4231 = BGL_OBJECT_WIDENING(BgL_tmpz00_4232);
					}
					BgL_auxz00_4230 = ((BgL_cfunctionz00_bglt) BgL_auxz00_4231);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_4230))->BgL_btypez00);
			}
		}

	}



/* &cfunction-btype */
	BgL_typez00_bglt BGl_z62cfunctionzd2btypezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2410, obj_t BgL_oz00_2411)
	{
		{	/* Foreign/ctype.sch 406 */
			return
				BGl_cfunctionzd2btypezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2411));
		}

	}



/* cfunction-occurrence */
	BGL_EXPORTED_DEF int
		BGl_cfunctionzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_234)
	{
		{	/* Foreign/ctype.sch 408 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_234)))->BgL_occurrencez00);
		}

	}



/* &cfunction-occurrence */
	obj_t BGl_z62cfunctionzd2occurrencezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2412, obj_t BgL_oz00_2413)
	{
		{	/* Foreign/ctype.sch 408 */
			return
				BINT(BGl_cfunctionzd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2413)));
		}

	}



/* cfunction-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_235, int BgL_vz00_236)
	{
		{	/* Foreign/ctype.sch 409 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_235)))->BgL_occurrencez00) =
				((int) BgL_vz00_236), BUNSPEC);
		}

	}



/* &cfunction-occurrence-set! */
	obj_t BGl_z62cfunctionzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2414, obj_t BgL_oz00_2415, obj_t BgL_vz00_2416)
	{
		{	/* Foreign/ctype.sch 409 */
			return
				BGl_cfunctionzd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2415), CINT(BgL_vz00_2416));
		}

	}



/* cfunction-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_237)
	{
		{	/* Foreign/ctype.sch 410 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_237)))->BgL_importzd2locationzd2);
		}

	}



/* &cfunction-import-location */
	obj_t BGl_z62cfunctionzd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2417, obj_t BgL_oz00_2418)
	{
		{	/* Foreign/ctype.sch 410 */
			return
				BGl_cfunctionzd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2418));
		}

	}



/* cfunction-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_238, obj_t BgL_vz00_239)
	{
		{	/* Foreign/ctype.sch 411 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_238)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_239), BUNSPEC);
		}

	}



/* &cfunction-import-location-set! */
	obj_t BGl_z62cfunctionzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2419, obj_t BgL_oz00_2420, obj_t BgL_vz00_2421)
	{
		{	/* Foreign/ctype.sch 411 */
			return
				BGl_cfunctionzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2420), BgL_vz00_2421);
		}

	}



/* cfunction-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_240)
	{
		{	/* Foreign/ctype.sch 412 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_240)))->BgL_locationz00);
		}

	}



/* &cfunction-location */
	obj_t BGl_z62cfunctionzd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2422,
		obj_t BgL_oz00_2423)
	{
		{	/* Foreign/ctype.sch 412 */
			return
				BGl_cfunctionzd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2423));
		}

	}



/* cfunction-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_241, obj_t BgL_vz00_242)
	{
		{	/* Foreign/ctype.sch 413 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_241)))->BgL_locationz00) =
				((obj_t) BgL_vz00_242), BUNSPEC);
		}

	}



/* &cfunction-location-set! */
	obj_t BGl_z62cfunctionzd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2424, obj_t BgL_oz00_2425, obj_t BgL_vz00_2426)
	{
		{	/* Foreign/ctype.sch 413 */
			return
				BGl_cfunctionzd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2425), BgL_vz00_2426);
		}

	}



/* cfunction-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_243)
	{
		{	/* Foreign/ctype.sch 414 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_243)))->BgL_tvectorz00);
		}

	}



/* &cfunction-tvector */
	obj_t BGl_z62cfunctionzd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2427,
		obj_t BgL_oz00_2428)
	{
		{	/* Foreign/ctype.sch 414 */
			return
				BGl_cfunctionzd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2428));
		}

	}



/* cfunction-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_244, obj_t BgL_vz00_245)
	{
		{	/* Foreign/ctype.sch 415 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_244)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_245), BUNSPEC);
		}

	}



/* &cfunction-tvector-set! */
	obj_t BGl_z62cfunctionzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2429, obj_t BgL_oz00_2430, obj_t BgL_vz00_2431)
	{
		{	/* Foreign/ctype.sch 415 */
			return
				BGl_cfunctionzd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2430), BgL_vz00_2431);
		}

	}



/* cfunction-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_246)
	{
		{	/* Foreign/ctype.sch 416 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_246)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &cfunction-pointed-to-by */
	obj_t BGl_z62cfunctionzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2432, obj_t BgL_oz00_2433)
	{
		{	/* Foreign/ctype.sch 416 */
			return
				BGl_cfunctionzd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2433));
		}

	}



/* cfunction-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_247, obj_t BgL_vz00_248)
	{
		{	/* Foreign/ctype.sch 417 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_247)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_248), BUNSPEC);
		}

	}



/* &cfunction-pointed-to-by-set! */
	obj_t BGl_z62cfunctionzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2434, obj_t BgL_oz00_2435, obj_t BgL_vz00_2436)
	{
		{	/* Foreign/ctype.sch 417 */
			return
				BGl_cfunctionzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2435), BgL_vz00_2436);
		}

	}



/* cfunction-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_249)
	{
		{	/* Foreign/ctype.sch 418 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_249)))->BgL_aliasz00);
		}

	}



/* &cfunction-alias */
	obj_t BGl_z62cfunctionzd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2437,
		obj_t BgL_oz00_2438)
	{
		{	/* Foreign/ctype.sch 418 */
			return
				BGl_cfunctionzd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2438));
		}

	}



/* cfunction-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_250, obj_t BgL_vz00_251)
	{
		{	/* Foreign/ctype.sch 419 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_250)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_251), BUNSPEC);
		}

	}



/* &cfunction-alias-set! */
	obj_t BGl_z62cfunctionzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2439, obj_t BgL_oz00_2440, obj_t BgL_vz00_2441)
	{
		{	/* Foreign/ctype.sch 419 */
			return
				BGl_cfunctionzd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2440), BgL_vz00_2441);
		}

	}



/* cfunction-$ */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_252)
	{
		{	/* Foreign/ctype.sch 420 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_252)))->BgL_z42z42);
		}

	}



/* &cfunction-$ */
	obj_t BGl_z62cfunctionzd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2442,
		obj_t BgL_oz00_2443)
	{
		{	/* Foreign/ctype.sch 420 */
			return
				BGl_cfunctionzd2z42z90zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2443));
		}

	}



/* cfunction-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_253, obj_t BgL_vz00_254)
	{
		{	/* Foreign/ctype.sch 421 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_253)))->BgL_z42z42) =
				((obj_t) BgL_vz00_254), BUNSPEC);
		}

	}



/* &cfunction-$-set! */
	obj_t BGl_z62cfunctionzd2z42zd2setz12z32zzforeign_ctypez00(obj_t
		BgL_envz00_2444, obj_t BgL_oz00_2445, obj_t BgL_vz00_2446)
	{
		{	/* Foreign/ctype.sch 421 */
			return
				BGl_cfunctionzd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2445), BgL_vz00_2446);
		}

	}



/* cfunction-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_cfunctionzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_255)
	{
		{	/* Foreign/ctype.sch 422 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_255)))->BgL_magiczf3zf3);
		}

	}



/* &cfunction-magic? */
	obj_t BGl_z62cfunctionzd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2447,
		obj_t BgL_oz00_2448)
	{
		{	/* Foreign/ctype.sch 422 */
			return
				BBOOL(BGl_cfunctionzd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2448)));
		}

	}



/* cfunction-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_256, bool_t BgL_vz00_257)
	{
		{	/* Foreign/ctype.sch 423 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_256)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_257), BUNSPEC);
		}

	}



/* &cfunction-magic?-set! */
	obj_t BGl_z62cfunctionzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2449, obj_t BgL_oz00_2450, obj_t BgL_vz00_2451)
	{
		{	/* Foreign/ctype.sch 423 */
			return
				BGl_cfunctionzd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2450), CBOOL(BgL_vz00_2451));
		}

	}



/* cfunction-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_cfunctionzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_258)
	{
		{	/* Foreign/ctype.sch 424 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_258)))->BgL_initzf3zf3);
		}

	}



/* &cfunction-init? */
	obj_t BGl_z62cfunctionzd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2452,
		obj_t BgL_oz00_2453)
	{
		{	/* Foreign/ctype.sch 424 */
			return
				BBOOL(BGl_cfunctionzd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2453)));
		}

	}



/* cfunction-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_259, bool_t BgL_vz00_260)
	{
		{	/* Foreign/ctype.sch 425 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_259)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_260), BUNSPEC);
		}

	}



/* &cfunction-init?-set! */
	obj_t BGl_z62cfunctionzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2454, obj_t BgL_oz00_2455, obj_t BgL_vz00_2456)
	{
		{	/* Foreign/ctype.sch 425 */
			return
				BGl_cfunctionzd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2455), CBOOL(BgL_vz00_2456));
		}

	}



/* cfunction-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_261)
	{
		{	/* Foreign/ctype.sch 426 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_261)))->BgL_parentsz00);
		}

	}



/* &cfunction-parents */
	obj_t BGl_z62cfunctionzd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2457,
		obj_t BgL_oz00_2458)
	{
		{	/* Foreign/ctype.sch 426 */
			return
				BGl_cfunctionzd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2458));
		}

	}



/* cfunction-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_262, obj_t BgL_vz00_263)
	{
		{	/* Foreign/ctype.sch 427 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_262)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_263), BUNSPEC);
		}

	}



/* &cfunction-parents-set! */
	obj_t BGl_z62cfunctionzd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2459, obj_t BgL_oz00_2460, obj_t BgL_vz00_2461)
	{
		{	/* Foreign/ctype.sch 427 */
			return
				BGl_cfunctionzd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2460), BgL_vz00_2461);
		}

	}



/* cfunction-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_264)
	{
		{	/* Foreign/ctype.sch 428 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_264)))->BgL_coercezd2tozd2);
		}

	}



/* &cfunction-coerce-to */
	obj_t BGl_z62cfunctionzd2coercezd2toz62zzforeign_ctypez00(obj_t
		BgL_envz00_2462, obj_t BgL_oz00_2463)
	{
		{	/* Foreign/ctype.sch 428 */
			return
				BGl_cfunctionzd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2463));
		}

	}



/* cfunction-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_265, obj_t BgL_vz00_266)
	{
		{	/* Foreign/ctype.sch 429 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_265)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_266), BUNSPEC);
		}

	}



/* &cfunction-coerce-to-set! */
	obj_t BGl_z62cfunctionzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2464, obj_t BgL_oz00_2465, obj_t BgL_vz00_2466)
	{
		{	/* Foreign/ctype.sch 429 */
			return
				BGl_cfunctionzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2465), BgL_vz00_2466);
		}

	}



/* cfunction-class */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_267)
	{
		{	/* Foreign/ctype.sch 430 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_267)))->BgL_classz00);
		}

	}



/* &cfunction-class */
	obj_t BGl_z62cfunctionzd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2467,
		obj_t BgL_oz00_2468)
	{
		{	/* Foreign/ctype.sch 430 */
			return
				BGl_cfunctionzd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2468));
		}

	}



/* cfunction-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_268, obj_t BgL_vz00_269)
	{
		{	/* Foreign/ctype.sch 431 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_268)))->BgL_classz00) =
				((obj_t) BgL_vz00_269), BUNSPEC);
		}

	}



/* &cfunction-class-set! */
	obj_t BGl_z62cfunctionzd2classzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2469, obj_t BgL_oz00_2470, obj_t BgL_vz00_2471)
	{
		{	/* Foreign/ctype.sch 431 */
			return
				BGl_cfunctionzd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2470), BgL_vz00_2471);
		}

	}



/* cfunction-size */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_270)
	{
		{	/* Foreign/ctype.sch 432 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_270)))->BgL_siza7eza7);
		}

	}



/* &cfunction-size */
	obj_t BGl_z62cfunctionzd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2472,
		obj_t BgL_oz00_2473)
	{
		{	/* Foreign/ctype.sch 432 */
			return
				BGl_cfunctionzd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2473));
		}

	}



/* cfunction-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_271, obj_t BgL_vz00_272)
	{
		{	/* Foreign/ctype.sch 433 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_271)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_272), BUNSPEC);
		}

	}



/* &cfunction-size-set! */
	obj_t BGl_z62cfunctionzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2474, obj_t BgL_oz00_2475, obj_t BgL_vz00_2476)
	{
		{	/* Foreign/ctype.sch 433 */
			return
				BGl_cfunctionzd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2475), BgL_vz00_2476);
		}

	}



/* cfunction-name */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_273)
	{
		{	/* Foreign/ctype.sch 434 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_273)))->BgL_namez00);
		}

	}



/* &cfunction-name */
	obj_t BGl_z62cfunctionzd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2477,
		obj_t BgL_oz00_2478)
	{
		{	/* Foreign/ctype.sch 434 */
			return
				BGl_cfunctionzd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2478));
		}

	}



/* cfunction-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_274, obj_t BgL_vz00_275)
	{
		{	/* Foreign/ctype.sch 435 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_274)))->BgL_namez00) =
				((obj_t) BgL_vz00_275), BUNSPEC);
		}

	}



/* &cfunction-name-set! */
	obj_t BGl_z62cfunctionzd2namezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2479, obj_t BgL_oz00_2480, obj_t BgL_vz00_2481)
	{
		{	/* Foreign/ctype.sch 435 */
			return
				BGl_cfunctionzd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2480), BgL_vz00_2481);
		}

	}



/* cfunction-id */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunctionzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_276)
	{
		{	/* Foreign/ctype.sch 436 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_276)))->BgL_idz00);
		}

	}



/* &cfunction-id */
	obj_t BGl_z62cfunctionzd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2482,
		obj_t BgL_oz00_2483)
	{
		{	/* Foreign/ctype.sch 436 */
			return
				BGl_cfunctionzd2idzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2483));
		}

	}



/* make-cptr */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2cptrzd2zzforeign_ctypez00(obj_t
		BgL_id1249z00_279, obj_t BgL_name1250z00_280, obj_t BgL_siza7e1251za7_281,
		obj_t BgL_class1252z00_282, obj_t BgL_coercezd2to1253zd2_283,
		obj_t BgL_parents1254z00_284, bool_t BgL_initzf31255zf3_285,
		bool_t BgL_magiczf31256zf3_286, obj_t BgL_z421257z42_287,
		obj_t BgL_alias1258z00_288, obj_t BgL_pointedzd2tozd2by1259z00_289,
		obj_t BgL_tvector1260z00_290, obj_t BgL_location1261z00_291,
		obj_t BgL_importzd2location1262zd2_292, int BgL_occurrence1263z00_293,
		BgL_typez00_bglt BgL_btype1264z00_294,
		BgL_typez00_bglt BgL_pointzd2to1265zd2_295, bool_t BgL_arrayzf31266zf3_296)
	{
		{	/* Foreign/ctype.sch 440 */
			{	/* Foreign/ctype.sch 440 */
				BgL_typez00_bglt BgL_new1234z00_3158;

				{	/* Foreign/ctype.sch 440 */
					BgL_typez00_bglt BgL_tmp1232z00_3159;
					BgL_cptrz00_bglt BgL_wide1233z00_3160;

					{
						BgL_typez00_bglt BgL_auxz00_4361;

						{	/* Foreign/ctype.sch 440 */
							BgL_typez00_bglt BgL_new1231z00_3161;

							BgL_new1231z00_3161 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 440 */
								long BgL_arg1364z00_3162;

								{	/* Foreign/ctype.sch 440 */
									long BgL_res2090z00_3163;

									BgL_res2090z00_3163 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1364z00_3162 = BgL_res2090z00_3163;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1231z00_3161),
									BgL_arg1364z00_3162);
							}
							{	/* Foreign/ctype.sch 440 */
								BgL_objectz00_bglt BgL_tmpz00_4366;

								BgL_tmpz00_4366 = ((BgL_objectz00_bglt) BgL_new1231z00_3161);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4366, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1231z00_3161);
							BgL_auxz00_4361 = BgL_new1231z00_3161;
						}
						BgL_tmp1232z00_3159 = ((BgL_typez00_bglt) BgL_auxz00_4361);
					}
					BgL_wide1233z00_3160 =
						((BgL_cptrz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cptrz00_bgl))));
					{	/* Foreign/ctype.sch 440 */
						obj_t BgL_auxz00_4374;
						BgL_objectz00_bglt BgL_tmpz00_4372;

						BgL_auxz00_4374 = ((obj_t) BgL_wide1233z00_3160);
						BgL_tmpz00_4372 = ((BgL_objectz00_bglt) BgL_tmp1232z00_3159);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4372, BgL_auxz00_4374);
					}
					((BgL_objectz00_bglt) BgL_tmp1232z00_3159);
					{	/* Foreign/ctype.sch 440 */
						long BgL_arg1363z00_3164;

						{	/* Foreign/ctype.sch 440 */
							long BgL_res2091z00_3165;

							BgL_res2091z00_3165 =
								BGL_CLASS_INDEX(BGl_cptrz00zzforeign_ctypez00);
							BgL_arg1363z00_3164 = BgL_res2091z00_3165;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1232z00_3159), BgL_arg1363z00_3164);
					}
					BgL_new1234z00_3158 = ((BgL_typez00_bglt) BgL_tmp1232z00_3159);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1234z00_3158)))->BgL_idz00) =
					((obj_t) BgL_id1249z00_279), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_namez00) =
					((obj_t) BgL_name1250z00_280), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1251za7_281), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_classz00) =
					((obj_t) BgL_class1252z00_282), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1253zd2_283), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_parentsz00) =
					((obj_t) BgL_parents1254z00_284), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31255zf3_285), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31256zf3_286), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_z42z42) =
					((obj_t) BgL_z421257z42_287), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_aliasz00) =
					((obj_t) BgL_alias1258z00_288), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1259z00_289), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1260z00_290), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_locationz00) =
					((obj_t) BgL_location1261z00_291), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1262zd2_292), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1234z00_3158)))->BgL_occurrencez00) =
					((int) BgL_occurrence1263z00_293), BUNSPEC);
				{
					BgL_cptrz00_bglt BgL_auxz00_4412;

					{
						obj_t BgL_auxz00_4413;

						{	/* Foreign/ctype.sch 440 */
							BgL_objectz00_bglt BgL_tmpz00_4414;

							BgL_tmpz00_4414 = ((BgL_objectz00_bglt) BgL_new1234z00_3158);
							BgL_auxz00_4413 = BGL_OBJECT_WIDENING(BgL_tmpz00_4414);
						}
						BgL_auxz00_4412 = ((BgL_cptrz00_bglt) BgL_auxz00_4413);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4412))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_btype1264z00_294), BUNSPEC);
				}
				{
					BgL_cptrz00_bglt BgL_auxz00_4419;

					{
						obj_t BgL_auxz00_4420;

						{	/* Foreign/ctype.sch 440 */
							BgL_objectz00_bglt BgL_tmpz00_4421;

							BgL_tmpz00_4421 = ((BgL_objectz00_bglt) BgL_new1234z00_3158);
							BgL_auxz00_4420 = BGL_OBJECT_WIDENING(BgL_tmpz00_4421);
						}
						BgL_auxz00_4419 = ((BgL_cptrz00_bglt) BgL_auxz00_4420);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4419))->BgL_pointzd2tozd2) =
						((BgL_typez00_bglt) BgL_pointzd2to1265zd2_295), BUNSPEC);
				}
				{
					BgL_cptrz00_bglt BgL_auxz00_4426;

					{
						obj_t BgL_auxz00_4427;

						{	/* Foreign/ctype.sch 440 */
							BgL_objectz00_bglt BgL_tmpz00_4428;

							BgL_tmpz00_4428 = ((BgL_objectz00_bglt) BgL_new1234z00_3158);
							BgL_auxz00_4427 = BGL_OBJECT_WIDENING(BgL_tmpz00_4428);
						}
						BgL_auxz00_4426 = ((BgL_cptrz00_bglt) BgL_auxz00_4427);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4426))->BgL_arrayzf3zf3) =
						((bool_t) BgL_arrayzf31266zf3_296), BUNSPEC);
				}
				return BgL_new1234z00_3158;
			}
		}

	}



/* &make-cptr */
	BgL_typez00_bglt BGl_z62makezd2cptrzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2484, obj_t BgL_id1249z00_2485, obj_t BgL_name1250z00_2486,
		obj_t BgL_siza7e1251za7_2487, obj_t BgL_class1252z00_2488,
		obj_t BgL_coercezd2to1253zd2_2489, obj_t BgL_parents1254z00_2490,
		obj_t BgL_initzf31255zf3_2491, obj_t BgL_magiczf31256zf3_2492,
		obj_t BgL_z421257z42_2493, obj_t BgL_alias1258z00_2494,
		obj_t BgL_pointedzd2tozd2by1259z00_2495, obj_t BgL_tvector1260z00_2496,
		obj_t BgL_location1261z00_2497, obj_t BgL_importzd2location1262zd2_2498,
		obj_t BgL_occurrence1263z00_2499, obj_t BgL_btype1264z00_2500,
		obj_t BgL_pointzd2to1265zd2_2501, obj_t BgL_arrayzf31266zf3_2502)
	{
		{	/* Foreign/ctype.sch 440 */
			return
				BGl_makezd2cptrzd2zzforeign_ctypez00(BgL_id1249z00_2485,
				BgL_name1250z00_2486, BgL_siza7e1251za7_2487, BgL_class1252z00_2488,
				BgL_coercezd2to1253zd2_2489, BgL_parents1254z00_2490,
				CBOOL(BgL_initzf31255zf3_2491), CBOOL(BgL_magiczf31256zf3_2492),
				BgL_z421257z42_2493, BgL_alias1258z00_2494,
				BgL_pointedzd2tozd2by1259z00_2495, BgL_tvector1260z00_2496,
				BgL_location1261z00_2497, BgL_importzd2location1262zd2_2498,
				CINT(BgL_occurrence1263z00_2499),
				((BgL_typez00_bglt) BgL_btype1264z00_2500),
				((BgL_typez00_bglt) BgL_pointzd2to1265zd2_2501),
				CBOOL(BgL_arrayzf31266zf3_2502));
		}

	}



/* cptr? */
	BGL_EXPORTED_DEF bool_t BGl_cptrzf3zf3zzforeign_ctypez00(obj_t BgL_objz00_297)
	{
		{	/* Foreign/ctype.sch 441 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_297,
				BGl_cptrz00zzforeign_ctypez00);
		}

	}



/* &cptr? */
	obj_t BGl_z62cptrzf3z91zzforeign_ctypez00(obj_t BgL_envz00_2503,
		obj_t BgL_objz00_2504)
	{
		{	/* Foreign/ctype.sch 441 */
			return BBOOL(BGl_cptrzf3zf3zzforeign_ctypez00(BgL_objz00_2504));
		}

	}



/* cptr-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_cptrzd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 442 */
			{	/* Foreign/ctype.sch 442 */
				obj_t BgL_classz00_1541;

				BgL_classz00_1541 = BGl_cptrz00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 442 */
					obj_t BgL__ortest_1106z00_1542;

					BgL__ortest_1106z00_1542 = BGL_CLASS_NIL(BgL_classz00_1541);
					if (CBOOL(BgL__ortest_1106z00_1542))
						{	/* Foreign/ctype.sch 442 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1542);
						}
					else
						{	/* Foreign/ctype.sch 442 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1541));
						}
				}
			}
		}

	}



/* &cptr-nil */
	BgL_typez00_bglt BGl_z62cptrzd2nilzb0zzforeign_ctypez00(obj_t BgL_envz00_2505)
	{
		{	/* Foreign/ctype.sch 442 */
			return BGl_cptrzd2nilzd2zzforeign_ctypez00();
		}

	}



/* cptr-array? */
	BGL_EXPORTED_DEF bool_t
		BGl_cptrzd2arrayzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_298)
	{
		{	/* Foreign/ctype.sch 443 */
			{
				BgL_cptrz00_bglt BgL_auxz00_4450;

				{
					obj_t BgL_auxz00_4451;

					{	/* Foreign/ctype.sch 443 */
						BgL_objectz00_bglt BgL_tmpz00_4452;

						BgL_tmpz00_4452 = ((BgL_objectz00_bglt) BgL_oz00_298);
						BgL_auxz00_4451 = BGL_OBJECT_WIDENING(BgL_tmpz00_4452);
					}
					BgL_auxz00_4450 = ((BgL_cptrz00_bglt) BgL_auxz00_4451);
				}
				return (((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4450))->BgL_arrayzf3zf3);
			}
		}

	}



/* &cptr-array? */
	obj_t BGl_z62cptrzd2arrayzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2506,
		obj_t BgL_oz00_2507)
	{
		{	/* Foreign/ctype.sch 443 */
			return
				BBOOL(BGl_cptrzd2arrayzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2507)));
		}

	}



/* cptr-point-to */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cptrzd2pointzd2toz00zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_301)
	{
		{	/* Foreign/ctype.sch 445 */
			{
				BgL_cptrz00_bglt BgL_auxz00_4460;

				{
					obj_t BgL_auxz00_4461;

					{	/* Foreign/ctype.sch 445 */
						BgL_objectz00_bglt BgL_tmpz00_4462;

						BgL_tmpz00_4462 = ((BgL_objectz00_bglt) BgL_oz00_301);
						BgL_auxz00_4461 = BGL_OBJECT_WIDENING(BgL_tmpz00_4462);
					}
					BgL_auxz00_4460 = ((BgL_cptrz00_bglt) BgL_auxz00_4461);
				}
				return
					(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4460))->BgL_pointzd2tozd2);
			}
		}

	}



/* &cptr-point-to */
	BgL_typez00_bglt BGl_z62cptrzd2pointzd2toz62zzforeign_ctypez00(obj_t
		BgL_envz00_2508, obj_t BgL_oz00_2509)
	{
		{	/* Foreign/ctype.sch 445 */
			return
				BGl_cptrzd2pointzd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2509));
		}

	}



/* cptr-btype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cptrzd2btypezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_304)
	{
		{	/* Foreign/ctype.sch 447 */
			{
				BgL_cptrz00_bglt BgL_auxz00_4469;

				{
					obj_t BgL_auxz00_4470;

					{	/* Foreign/ctype.sch 447 */
						BgL_objectz00_bglt BgL_tmpz00_4471;

						BgL_tmpz00_4471 = ((BgL_objectz00_bglt) BgL_oz00_304);
						BgL_auxz00_4470 = BGL_OBJECT_WIDENING(BgL_tmpz00_4471);
					}
					BgL_auxz00_4469 = ((BgL_cptrz00_bglt) BgL_auxz00_4470);
				}
				return (((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_4469))->BgL_btypez00);
			}
		}

	}



/* &cptr-btype */
	BgL_typez00_bglt BGl_z62cptrzd2btypezb0zzforeign_ctypez00(obj_t
		BgL_envz00_2510, obj_t BgL_oz00_2511)
	{
		{	/* Foreign/ctype.sch 447 */
			return
				BGl_cptrzd2btypezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2511));
		}

	}



/* cptr-occurrence */
	BGL_EXPORTED_DEF int
		BGl_cptrzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_307)
	{
		{	/* Foreign/ctype.sch 449 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_307)))->BgL_occurrencez00);
		}

	}



/* &cptr-occurrence */
	obj_t BGl_z62cptrzd2occurrencezb0zzforeign_ctypez00(obj_t BgL_envz00_2512,
		obj_t BgL_oz00_2513)
	{
		{	/* Foreign/ctype.sch 449 */
			return
				BINT(BGl_cptrzd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2513)));
		}

	}



/* cptr-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_308, int BgL_vz00_309)
	{
		{	/* Foreign/ctype.sch 450 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_308)))->BgL_occurrencez00) =
				((int) BgL_vz00_309), BUNSPEC);
		}

	}



/* &cptr-occurrence-set! */
	obj_t BGl_z62cptrzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2514, obj_t BgL_oz00_2515, obj_t BgL_vz00_2516)
	{
		{	/* Foreign/ctype.sch 450 */
			return
				BGl_cptrzd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2515), CINT(BgL_vz00_2516));
		}

	}



/* cptr-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_310)
	{
		{	/* Foreign/ctype.sch 451 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_310)))->BgL_importzd2locationzd2);
		}

	}



/* &cptr-import-location */
	obj_t BGl_z62cptrzd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2517, obj_t BgL_oz00_2518)
	{
		{	/* Foreign/ctype.sch 451 */
			return
				BGl_cptrzd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2518));
		}

	}



/* cptr-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_311, obj_t BgL_vz00_312)
	{
		{	/* Foreign/ctype.sch 452 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_311)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_312), BUNSPEC);
		}

	}



/* &cptr-import-location-set! */
	obj_t BGl_z62cptrzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2519, obj_t BgL_oz00_2520, obj_t BgL_vz00_2521)
	{
		{	/* Foreign/ctype.sch 452 */
			return
				BGl_cptrzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2520), BgL_vz00_2521);
		}

	}



/* cptr-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_313)
	{
		{	/* Foreign/ctype.sch 453 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_313)))->BgL_locationz00);
		}

	}



/* &cptr-location */
	obj_t BGl_z62cptrzd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2522,
		obj_t BgL_oz00_2523)
	{
		{	/* Foreign/ctype.sch 453 */
			return
				BGl_cptrzd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2523));
		}

	}



/* cptr-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_314, obj_t BgL_vz00_315)
	{
		{	/* Foreign/ctype.sch 454 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_314)))->BgL_locationz00) =
				((obj_t) BgL_vz00_315), BUNSPEC);
		}

	}



/* &cptr-location-set! */
	obj_t BGl_z62cptrzd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2524, obj_t BgL_oz00_2525, obj_t BgL_vz00_2526)
	{
		{	/* Foreign/ctype.sch 454 */
			return
				BGl_cptrzd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2525), BgL_vz00_2526);
		}

	}



/* cptr-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_316)
	{
		{	/* Foreign/ctype.sch 455 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_316)))->BgL_tvectorz00);
		}

	}



/* &cptr-tvector */
	obj_t BGl_z62cptrzd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2527,
		obj_t BgL_oz00_2528)
	{
		{	/* Foreign/ctype.sch 455 */
			return
				BGl_cptrzd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2528));
		}

	}



/* cptr-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_317, obj_t BgL_vz00_318)
	{
		{	/* Foreign/ctype.sch 456 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_317)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_318), BUNSPEC);
		}

	}



/* &cptr-tvector-set! */
	obj_t BGl_z62cptrzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2529, obj_t BgL_oz00_2530, obj_t BgL_vz00_2531)
	{
		{	/* Foreign/ctype.sch 456 */
			return
				BGl_cptrzd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2530), BgL_vz00_2531);
		}

	}



/* cptr-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_319)
	{
		{	/* Foreign/ctype.sch 457 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_319)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &cptr-pointed-to-by */
	obj_t BGl_z62cptrzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2532, obj_t BgL_oz00_2533)
	{
		{	/* Foreign/ctype.sch 457 */
			return
				BGl_cptrzd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2533));
		}

	}



/* cptr-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_320, obj_t BgL_vz00_321)
	{
		{	/* Foreign/ctype.sch 458 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_320)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_321), BUNSPEC);
		}

	}



/* &cptr-pointed-to-by-set! */
	obj_t BGl_z62cptrzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2534, obj_t BgL_oz00_2535, obj_t BgL_vz00_2536)
	{
		{	/* Foreign/ctype.sch 458 */
			return
				BGl_cptrzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2535), BgL_vz00_2536);
		}

	}



/* cptr-alias */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_322)
	{
		{	/* Foreign/ctype.sch 459 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_322)))->BgL_aliasz00);
		}

	}



/* &cptr-alias */
	obj_t BGl_z62cptrzd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2537,
		obj_t BgL_oz00_2538)
	{
		{	/* Foreign/ctype.sch 459 */
			return
				BGl_cptrzd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2538));
		}

	}



/* cptr-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_323, obj_t BgL_vz00_324)
	{
		{	/* Foreign/ctype.sch 460 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_323)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_324), BUNSPEC);
		}

	}



/* &cptr-alias-set! */
	obj_t BGl_z62cptrzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t BgL_envz00_2539,
		obj_t BgL_oz00_2540, obj_t BgL_vz00_2541)
	{
		{	/* Foreign/ctype.sch 460 */
			return
				BGl_cptrzd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2540), BgL_vz00_2541);
		}

	}



/* cptr-$ */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_325)
	{
		{	/* Foreign/ctype.sch 461 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_325)))->BgL_z42z42);
		}

	}



/* &cptr-$ */
	obj_t BGl_z62cptrzd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2542,
		obj_t BgL_oz00_2543)
	{
		{	/* Foreign/ctype.sch 461 */
			return
				BGl_cptrzd2z42z90zzforeign_ctypez00(((BgL_typez00_bglt) BgL_oz00_2543));
		}

	}



/* cptr-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_326,
		obj_t BgL_vz00_327)
	{
		{	/* Foreign/ctype.sch 462 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_326)))->BgL_z42z42) =
				((obj_t) BgL_vz00_327), BUNSPEC);
		}

	}



/* &cptr-$-set! */
	obj_t BGl_z62cptrzd2z42zd2setz12z32zzforeign_ctypez00(obj_t BgL_envz00_2544,
		obj_t BgL_oz00_2545, obj_t BgL_vz00_2546)
	{
		{	/* Foreign/ctype.sch 462 */
			return
				BGl_cptrzd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2545), BgL_vz00_2546);
		}

	}



/* cptr-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_cptrzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_328)
	{
		{	/* Foreign/ctype.sch 463 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_328)))->BgL_magiczf3zf3);
		}

	}



/* &cptr-magic? */
	obj_t BGl_z62cptrzd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2547,
		obj_t BgL_oz00_2548)
	{
		{	/* Foreign/ctype.sch 463 */
			return
				BBOOL(BGl_cptrzd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2548)));
		}

	}



/* cptr-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_329, bool_t BgL_vz00_330)
	{
		{	/* Foreign/ctype.sch 464 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_329)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_330), BUNSPEC);
		}

	}



/* &cptr-magic?-set! */
	obj_t BGl_z62cptrzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2549, obj_t BgL_oz00_2550, obj_t BgL_vz00_2551)
	{
		{	/* Foreign/ctype.sch 464 */
			return
				BGl_cptrzd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2550), CBOOL(BgL_vz00_2551));
		}

	}



/* cptr-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_cptrzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_331)
	{
		{	/* Foreign/ctype.sch 465 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_331)))->BgL_initzf3zf3);
		}

	}



/* &cptr-init? */
	obj_t BGl_z62cptrzd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2552,
		obj_t BgL_oz00_2553)
	{
		{	/* Foreign/ctype.sch 465 */
			return
				BBOOL(BGl_cptrzd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2553)));
		}

	}



/* cptr-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_332, bool_t BgL_vz00_333)
	{
		{	/* Foreign/ctype.sch 466 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_332)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_333), BUNSPEC);
		}

	}



/* &cptr-init?-set! */
	obj_t BGl_z62cptrzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2554, obj_t BgL_oz00_2555, obj_t BgL_vz00_2556)
	{
		{	/* Foreign/ctype.sch 466 */
			return
				BGl_cptrzd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2555), CBOOL(BgL_vz00_2556));
		}

	}



/* cptr-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_334)
	{
		{	/* Foreign/ctype.sch 467 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_334)))->BgL_parentsz00);
		}

	}



/* &cptr-parents */
	obj_t BGl_z62cptrzd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2557,
		obj_t BgL_oz00_2558)
	{
		{	/* Foreign/ctype.sch 467 */
			return
				BGl_cptrzd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2558));
		}

	}



/* cptr-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_335, obj_t BgL_vz00_336)
	{
		{	/* Foreign/ctype.sch 468 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_335)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_336), BUNSPEC);
		}

	}



/* &cptr-parents-set! */
	obj_t BGl_z62cptrzd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2559, obj_t BgL_oz00_2560, obj_t BgL_vz00_2561)
	{
		{	/* Foreign/ctype.sch 468 */
			return
				BGl_cptrzd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2560), BgL_vz00_2561);
		}

	}



/* cptr-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_337)
	{
		{	/* Foreign/ctype.sch 469 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_337)))->BgL_coercezd2tozd2);
		}

	}



/* &cptr-coerce-to */
	obj_t BGl_z62cptrzd2coercezd2toz62zzforeign_ctypez00(obj_t BgL_envz00_2562,
		obj_t BgL_oz00_2563)
	{
		{	/* Foreign/ctype.sch 469 */
			return
				BGl_cptrzd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2563));
		}

	}



/* cptr-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_338, obj_t BgL_vz00_339)
	{
		{	/* Foreign/ctype.sch 470 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_338)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_339), BUNSPEC);
		}

	}



/* &cptr-coerce-to-set! */
	obj_t BGl_z62cptrzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2564, obj_t BgL_oz00_2565, obj_t BgL_vz00_2566)
	{
		{	/* Foreign/ctype.sch 470 */
			return
				BGl_cptrzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2565), BgL_vz00_2566);
		}

	}



/* cptr-class */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_340)
	{
		{	/* Foreign/ctype.sch 471 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_340)))->BgL_classz00);
		}

	}



/* &cptr-class */
	obj_t BGl_z62cptrzd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2567,
		obj_t BgL_oz00_2568)
	{
		{	/* Foreign/ctype.sch 471 */
			return
				BGl_cptrzd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2568));
		}

	}



/* cptr-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_341, obj_t BgL_vz00_342)
	{
		{	/* Foreign/ctype.sch 472 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_341)))->BgL_classz00) =
				((obj_t) BgL_vz00_342), BUNSPEC);
		}

	}



/* &cptr-class-set! */
	obj_t BGl_z62cptrzd2classzd2setz12z70zzforeign_ctypez00(obj_t BgL_envz00_2569,
		obj_t BgL_oz00_2570, obj_t BgL_vz00_2571)
	{
		{	/* Foreign/ctype.sch 472 */
			return
				BGl_cptrzd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2570), BgL_vz00_2571);
		}

	}



/* cptr-size */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_343)
	{
		{	/* Foreign/ctype.sch 473 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_343)))->BgL_siza7eza7);
		}

	}



/* &cptr-size */
	obj_t BGl_z62cptrzd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2572,
		obj_t BgL_oz00_2573)
	{
		{	/* Foreign/ctype.sch 473 */
			return
				BGl_cptrzd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2573));
		}

	}



/* cptr-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_344, obj_t BgL_vz00_345)
	{
		{	/* Foreign/ctype.sch 474 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_344)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_345), BUNSPEC);
		}

	}



/* &cptr-size-set! */
	obj_t BGl_z62cptrzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2574, obj_t BgL_oz00_2575, obj_t BgL_vz00_2576)
	{
		{	/* Foreign/ctype.sch 474 */
			return
				BGl_cptrzd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2575), BgL_vz00_2576);
		}

	}



/* cptr-name */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_346)
	{
		{	/* Foreign/ctype.sch 475 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_346)))->BgL_namez00);
		}

	}



/* &cptr-name */
	obj_t BGl_z62cptrzd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2577,
		obj_t BgL_oz00_2578)
	{
		{	/* Foreign/ctype.sch 475 */
			return
				BGl_cptrzd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2578));
		}

	}



/* cptr-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cptrzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_347,
		obj_t BgL_vz00_348)
	{
		{	/* Foreign/ctype.sch 476 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_347)))->BgL_namez00) =
				((obj_t) BgL_vz00_348), BUNSPEC);
		}

	}



/* &cptr-name-set! */
	obj_t BGl_z62cptrzd2namezd2setz12z70zzforeign_ctypez00(obj_t BgL_envz00_2579,
		obj_t BgL_oz00_2580, obj_t BgL_vz00_2581)
	{
		{	/* Foreign/ctype.sch 476 */
			return
				BGl_cptrzd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2580), BgL_vz00_2581);
		}

	}



/* cptr-id */
	BGL_EXPORTED_DEF obj_t BGl_cptrzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_349)
	{
		{	/* Foreign/ctype.sch 477 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_349)))->BgL_idz00);
		}

	}



/* &cptr-id */
	obj_t BGl_z62cptrzd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2582,
		obj_t BgL_oz00_2583)
	{
		{	/* Foreign/ctype.sch 477 */
			return
				BGl_cptrzd2idzd2zzforeign_ctypez00(((BgL_typez00_bglt) BgL_oz00_2583));
		}

	}



/* make-cstruct */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2cstructzd2zzforeign_ctypez00(obj_t BgL_id1230z00_352,
		obj_t BgL_name1231z00_353, obj_t BgL_siza7e1232za7_354,
		obj_t BgL_class1233z00_355, obj_t BgL_coercezd2to1234zd2_356,
		obj_t BgL_parents1235z00_357, bool_t BgL_initzf31236zf3_358,
		bool_t BgL_magiczf31237zf3_359, obj_t BgL_z421238z42_360,
		obj_t BgL_alias1239z00_361, obj_t BgL_pointedzd2tozd2by1240z00_362,
		obj_t BgL_tvector1241z00_363, obj_t BgL_location1242z00_364,
		obj_t BgL_importzd2location1243zd2_365, int BgL_occurrence1244z00_366,
		bool_t BgL_structzf31245zf3_367, obj_t BgL_fields1246z00_368,
		obj_t BgL_cstructza21247za2_369)
	{
		{	/* Foreign/ctype.sch 481 */
			{	/* Foreign/ctype.sch 481 */
				BgL_typez00_bglt BgL_new1238z00_3166;

				{	/* Foreign/ctype.sch 481 */
					BgL_typez00_bglt BgL_tmp1236z00_3167;
					BgL_cstructz00_bglt BgL_wide1237z00_3168;

					{
						BgL_typez00_bglt BgL_auxz00_4600;

						{	/* Foreign/ctype.sch 481 */
							BgL_typez00_bglt BgL_new1235z00_3169;

							BgL_new1235z00_3169 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 481 */
								long BgL_arg1370z00_3170;

								{	/* Foreign/ctype.sch 481 */
									long BgL_res2092z00_3171;

									BgL_res2092z00_3171 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1370z00_3170 = BgL_res2092z00_3171;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1235z00_3169),
									BgL_arg1370z00_3170);
							}
							{	/* Foreign/ctype.sch 481 */
								BgL_objectz00_bglt BgL_tmpz00_4605;

								BgL_tmpz00_4605 = ((BgL_objectz00_bglt) BgL_new1235z00_3169);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4605, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1235z00_3169);
							BgL_auxz00_4600 = BgL_new1235z00_3169;
						}
						BgL_tmp1236z00_3167 = ((BgL_typez00_bglt) BgL_auxz00_4600);
					}
					BgL_wide1237z00_3168 =
						((BgL_cstructz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cstructz00_bgl))));
					{	/* Foreign/ctype.sch 481 */
						obj_t BgL_auxz00_4613;
						BgL_objectz00_bglt BgL_tmpz00_4611;

						BgL_auxz00_4613 = ((obj_t) BgL_wide1237z00_3168);
						BgL_tmpz00_4611 = ((BgL_objectz00_bglt) BgL_tmp1236z00_3167);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4611, BgL_auxz00_4613);
					}
					((BgL_objectz00_bglt) BgL_tmp1236z00_3167);
					{	/* Foreign/ctype.sch 481 */
						long BgL_arg1367z00_3172;

						{	/* Foreign/ctype.sch 481 */
							long BgL_res2093z00_3173;

							BgL_res2093z00_3173 =
								BGL_CLASS_INDEX(BGl_cstructz00zzforeign_ctypez00);
							BgL_arg1367z00_3172 = BgL_res2093z00_3173;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1236z00_3167), BgL_arg1367z00_3172);
					}
					BgL_new1238z00_3166 = ((BgL_typez00_bglt) BgL_tmp1236z00_3167);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1238z00_3166)))->BgL_idz00) =
					((obj_t) BgL_id1230z00_352), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_namez00) =
					((obj_t) BgL_name1231z00_353), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1232za7_354), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_classz00) =
					((obj_t) BgL_class1233z00_355), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1234zd2_356), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_parentsz00) =
					((obj_t) BgL_parents1235z00_357), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31236zf3_358), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31237zf3_359), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_z42z42) =
					((obj_t) BgL_z421238z42_360), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_aliasz00) =
					((obj_t) BgL_alias1239z00_361), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1240z00_362), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1241z00_363), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_locationz00) =
					((obj_t) BgL_location1242z00_364), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1243zd2_365), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1238z00_3166)))->BgL_occurrencez00) =
					((int) BgL_occurrence1244z00_366), BUNSPEC);
				{
					BgL_cstructz00_bglt BgL_auxz00_4651;

					{
						obj_t BgL_auxz00_4652;

						{	/* Foreign/ctype.sch 481 */
							BgL_objectz00_bglt BgL_tmpz00_4653;

							BgL_tmpz00_4653 = ((BgL_objectz00_bglt) BgL_new1238z00_3166);
							BgL_auxz00_4652 = BGL_OBJECT_WIDENING(BgL_tmpz00_4653);
						}
						BgL_auxz00_4651 = ((BgL_cstructz00_bglt) BgL_auxz00_4652);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4651))->
							BgL_structzf3zf3) = ((bool_t) BgL_structzf31245zf3_367), BUNSPEC);
				}
				{
					BgL_cstructz00_bglt BgL_auxz00_4658;

					{
						obj_t BgL_auxz00_4659;

						{	/* Foreign/ctype.sch 481 */
							BgL_objectz00_bglt BgL_tmpz00_4660;

							BgL_tmpz00_4660 = ((BgL_objectz00_bglt) BgL_new1238z00_3166);
							BgL_auxz00_4659 = BGL_OBJECT_WIDENING(BgL_tmpz00_4660);
						}
						BgL_auxz00_4658 = ((BgL_cstructz00_bglt) BgL_auxz00_4659);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4658))->BgL_fieldsz00) =
						((obj_t) BgL_fields1246z00_368), BUNSPEC);
				}
				{
					BgL_cstructz00_bglt BgL_auxz00_4665;

					{
						obj_t BgL_auxz00_4666;

						{	/* Foreign/ctype.sch 481 */
							BgL_objectz00_bglt BgL_tmpz00_4667;

							BgL_tmpz00_4667 = ((BgL_objectz00_bglt) BgL_new1238z00_3166);
							BgL_auxz00_4666 = BGL_OBJECT_WIDENING(BgL_tmpz00_4667);
						}
						BgL_auxz00_4665 = ((BgL_cstructz00_bglt) BgL_auxz00_4666);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4665))->
							BgL_cstructza2za2) =
						((obj_t) BgL_cstructza21247za2_369), BUNSPEC);
				}
				return BgL_new1238z00_3166;
			}
		}

	}



/* &make-cstruct */
	BgL_typez00_bglt BGl_z62makezd2cstructzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2584, obj_t BgL_id1230z00_2585, obj_t BgL_name1231z00_2586,
		obj_t BgL_siza7e1232za7_2587, obj_t BgL_class1233z00_2588,
		obj_t BgL_coercezd2to1234zd2_2589, obj_t BgL_parents1235z00_2590,
		obj_t BgL_initzf31236zf3_2591, obj_t BgL_magiczf31237zf3_2592,
		obj_t BgL_z421238z42_2593, obj_t BgL_alias1239z00_2594,
		obj_t BgL_pointedzd2tozd2by1240z00_2595, obj_t BgL_tvector1241z00_2596,
		obj_t BgL_location1242z00_2597, obj_t BgL_importzd2location1243zd2_2598,
		obj_t BgL_occurrence1244z00_2599, obj_t BgL_structzf31245zf3_2600,
		obj_t BgL_fields1246z00_2601, obj_t BgL_cstructza21247za2_2602)
	{
		{	/* Foreign/ctype.sch 481 */
			return
				BGl_makezd2cstructzd2zzforeign_ctypez00(BgL_id1230z00_2585,
				BgL_name1231z00_2586, BgL_siza7e1232za7_2587, BgL_class1233z00_2588,
				BgL_coercezd2to1234zd2_2589, BgL_parents1235z00_2590,
				CBOOL(BgL_initzf31236zf3_2591), CBOOL(BgL_magiczf31237zf3_2592),
				BgL_z421238z42_2593, BgL_alias1239z00_2594,
				BgL_pointedzd2tozd2by1240z00_2595, BgL_tvector1241z00_2596,
				BgL_location1242z00_2597, BgL_importzd2location1243zd2_2598,
				CINT(BgL_occurrence1244z00_2599), CBOOL(BgL_structzf31245zf3_2600),
				BgL_fields1246z00_2601, BgL_cstructza21247za2_2602);
		}

	}



/* cstruct? */
	BGL_EXPORTED_DEF bool_t BGl_cstructzf3zf3zzforeign_ctypez00(obj_t
		BgL_objz00_370)
	{
		{	/* Foreign/ctype.sch 482 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_370,
				BGl_cstructz00zzforeign_ctypez00);
		}

	}



/* &cstruct? */
	obj_t BGl_z62cstructzf3z91zzforeign_ctypez00(obj_t BgL_envz00_2603,
		obj_t BgL_objz00_2604)
	{
		{	/* Foreign/ctype.sch 482 */
			return BBOOL(BGl_cstructzf3zf3zzforeign_ctypez00(BgL_objz00_2604));
		}

	}



/* cstruct-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_cstructzd2nilzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 483 */
			{	/* Foreign/ctype.sch 483 */
				obj_t BgL_classz00_1565;

				BgL_classz00_1565 = BGl_cstructz00zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 483 */
					obj_t BgL__ortest_1106z00_1566;

					BgL__ortest_1106z00_1566 = BGL_CLASS_NIL(BgL_classz00_1565);
					if (CBOOL(BgL__ortest_1106z00_1566))
						{	/* Foreign/ctype.sch 483 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1566);
						}
					else
						{	/* Foreign/ctype.sch 483 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1565));
						}
				}
			}
		}

	}



/* &cstruct-nil */
	BgL_typez00_bglt BGl_z62cstructzd2nilzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2605)
	{
		{	/* Foreign/ctype.sch 483 */
			return BGl_cstructzd2nilzd2zzforeign_ctypez00();
		}

	}



/* cstruct-cstruct* */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2cstructza2z70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_371)
	{
		{	/* Foreign/ctype.sch 484 */
			{
				BgL_cstructz00_bglt BgL_auxz00_4687;

				{
					obj_t BgL_auxz00_4688;

					{	/* Foreign/ctype.sch 484 */
						BgL_objectz00_bglt BgL_tmpz00_4689;

						BgL_tmpz00_4689 = ((BgL_objectz00_bglt) BgL_oz00_371);
						BgL_auxz00_4688 = BGL_OBJECT_WIDENING(BgL_tmpz00_4689);
					}
					BgL_auxz00_4687 = ((BgL_cstructz00_bglt) BgL_auxz00_4688);
				}
				return
					(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4687))->BgL_cstructza2za2);
			}
		}

	}



/* &cstruct-cstruct* */
	obj_t BGl_z62cstructzd2cstructza2z12zzforeign_ctypez00(obj_t BgL_envz00_2606,
		obj_t BgL_oz00_2607)
	{
		{	/* Foreign/ctype.sch 484 */
			return
				BGl_cstructzd2cstructza2z70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2607));
		}

	}



/* cstruct-cstruct*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2cstructza2zd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_372, obj_t BgL_vz00_373)
	{
		{	/* Foreign/ctype.sch 485 */
			{
				BgL_cstructz00_bglt BgL_auxz00_4696;

				{
					obj_t BgL_auxz00_4697;

					{	/* Foreign/ctype.sch 485 */
						BgL_objectz00_bglt BgL_tmpz00_4698;

						BgL_tmpz00_4698 = ((BgL_objectz00_bglt) BgL_oz00_372);
						BgL_auxz00_4697 = BGL_OBJECT_WIDENING(BgL_tmpz00_4698);
					}
					BgL_auxz00_4696 = ((BgL_cstructz00_bglt) BgL_auxz00_4697);
				}
				return
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4696))->
						BgL_cstructza2za2) = ((obj_t) BgL_vz00_373), BUNSPEC);
			}
		}

	}



/* &cstruct-cstruct*-set! */
	obj_t BGl_z62cstructzd2cstructza2zd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2608, obj_t BgL_oz00_2609, obj_t BgL_vz00_2610)
	{
		{	/* Foreign/ctype.sch 485 */
			return
				BGl_cstructzd2cstructza2zd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2609), BgL_vz00_2610);
		}

	}



/* cstruct-fields */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2fieldszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_374)
	{
		{	/* Foreign/ctype.sch 486 */
			{
				BgL_cstructz00_bglt BgL_auxz00_4705;

				{
					obj_t BgL_auxz00_4706;

					{	/* Foreign/ctype.sch 486 */
						BgL_objectz00_bglt BgL_tmpz00_4707;

						BgL_tmpz00_4707 = ((BgL_objectz00_bglt) BgL_oz00_374);
						BgL_auxz00_4706 = BGL_OBJECT_WIDENING(BgL_tmpz00_4707);
					}
					BgL_auxz00_4705 = ((BgL_cstructz00_bglt) BgL_auxz00_4706);
				}
				return
					(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4705))->BgL_fieldsz00);
			}
		}

	}



/* &cstruct-fields */
	obj_t BGl_z62cstructzd2fieldszb0zzforeign_ctypez00(obj_t BgL_envz00_2611,
		obj_t BgL_oz00_2612)
	{
		{	/* Foreign/ctype.sch 486 */
			return
				BGl_cstructzd2fieldszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2612));
		}

	}



/* cstruct-struct? */
	BGL_EXPORTED_DEF bool_t
		BGl_cstructzd2structzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_377)
	{
		{	/* Foreign/ctype.sch 488 */
			{
				BgL_cstructz00_bglt BgL_auxz00_4714;

				{
					obj_t BgL_auxz00_4715;

					{	/* Foreign/ctype.sch 488 */
						BgL_objectz00_bglt BgL_tmpz00_4716;

						BgL_tmpz00_4716 = ((BgL_objectz00_bglt) BgL_oz00_377);
						BgL_auxz00_4715 = BGL_OBJECT_WIDENING(BgL_tmpz00_4716);
					}
					BgL_auxz00_4714 = ((BgL_cstructz00_bglt) BgL_auxz00_4715);
				}
				return
					(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_4714))->BgL_structzf3zf3);
			}
		}

	}



/* &cstruct-struct? */
	obj_t BGl_z62cstructzd2structzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2613,
		obj_t BgL_oz00_2614)
	{
		{	/* Foreign/ctype.sch 488 */
			return
				BBOOL(BGl_cstructzd2structzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2614)));
		}

	}



/* cstruct-occurrence */
	BGL_EXPORTED_DEF int
		BGl_cstructzd2occurrencezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_380)
	{
		{	/* Foreign/ctype.sch 490 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_380)))->BgL_occurrencez00);
		}

	}



/* &cstruct-occurrence */
	obj_t BGl_z62cstructzd2occurrencezb0zzforeign_ctypez00(obj_t BgL_envz00_2615,
		obj_t BgL_oz00_2616)
	{
		{	/* Foreign/ctype.sch 490 */
			return
				BINT(BGl_cstructzd2occurrencezd2zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2616)));
		}

	}



/* cstruct-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2occurrencezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_381, int BgL_vz00_382)
	{
		{	/* Foreign/ctype.sch 491 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_381)))->BgL_occurrencez00) =
				((int) BgL_vz00_382), BUNSPEC);
		}

	}



/* &cstruct-occurrence-set! */
	obj_t BGl_z62cstructzd2occurrencezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2617, obj_t BgL_oz00_2618, obj_t BgL_vz00_2619)
	{
		{	/* Foreign/ctype.sch 491 */
			return
				BGl_cstructzd2occurrencezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2618), CINT(BgL_vz00_2619));
		}

	}



/* cstruct-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2importzd2locationz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_383)
	{
		{	/* Foreign/ctype.sch 492 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_383)))->BgL_importzd2locationzd2);
		}

	}



/* &cstruct-import-location */
	obj_t BGl_z62cstructzd2importzd2locationz62zzforeign_ctypez00(obj_t
		BgL_envz00_2620, obj_t BgL_oz00_2621)
	{
		{	/* Foreign/ctype.sch 492 */
			return
				BGl_cstructzd2importzd2locationz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2621));
		}

	}



/* cstruct-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2importzd2locationzd2setz12zc0zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_384, obj_t BgL_vz00_385)
	{
		{	/* Foreign/ctype.sch 493 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_384)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_385), BUNSPEC);
		}

	}



/* &cstruct-import-location-set! */
	obj_t BGl_z62cstructzd2importzd2locationzd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2622, obj_t BgL_oz00_2623, obj_t BgL_vz00_2624)
	{
		{	/* Foreign/ctype.sch 493 */
			return
				BGl_cstructzd2importzd2locationzd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2623), BgL_vz00_2624);
		}

	}



/* cstruct-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2locationzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_386)
	{
		{	/* Foreign/ctype.sch 494 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_386)))->BgL_locationz00);
		}

	}



/* &cstruct-location */
	obj_t BGl_z62cstructzd2locationzb0zzforeign_ctypez00(obj_t BgL_envz00_2625,
		obj_t BgL_oz00_2626)
	{
		{	/* Foreign/ctype.sch 494 */
			return
				BGl_cstructzd2locationzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2626));
		}

	}



/* cstruct-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2locationzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_387, obj_t BgL_vz00_388)
	{
		{	/* Foreign/ctype.sch 495 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_387)))->BgL_locationz00) =
				((obj_t) BgL_vz00_388), BUNSPEC);
		}

	}



/* &cstruct-location-set! */
	obj_t BGl_z62cstructzd2locationzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2627, obj_t BgL_oz00_2628, obj_t BgL_vz00_2629)
	{
		{	/* Foreign/ctype.sch 495 */
			return
				BGl_cstructzd2locationzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2628), BgL_vz00_2629);
		}

	}



/* cstruct-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2tvectorzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_389)
	{
		{	/* Foreign/ctype.sch 496 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_389)))->BgL_tvectorz00);
		}

	}



/* &cstruct-tvector */
	obj_t BGl_z62cstructzd2tvectorzb0zzforeign_ctypez00(obj_t BgL_envz00_2630,
		obj_t BgL_oz00_2631)
	{
		{	/* Foreign/ctype.sch 496 */
			return
				BGl_cstructzd2tvectorzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2631));
		}

	}



/* cstruct-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2tvectorzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_390, obj_t BgL_vz00_391)
	{
		{	/* Foreign/ctype.sch 497 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_390)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_391), BUNSPEC);
		}

	}



/* &cstruct-tvector-set! */
	obj_t BGl_z62cstructzd2tvectorzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2632, obj_t BgL_oz00_2633, obj_t BgL_vz00_2634)
	{
		{	/* Foreign/ctype.sch 497 */
			return
				BGl_cstructzd2tvectorzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2633), BgL_vz00_2634);
		}

	}



/* cstruct-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2pointedzd2tozd2byzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_392)
	{
		{	/* Foreign/ctype.sch 498 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_392)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &cstruct-pointed-to-by */
	obj_t BGl_z62cstructzd2pointedzd2tozd2byzb0zzforeign_ctypez00(obj_t
		BgL_envz00_2635, obj_t BgL_oz00_2636)
	{
		{	/* Foreign/ctype.sch 498 */
			return
				BGl_cstructzd2pointedzd2tozd2byzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2636));
		}

	}



/* cstruct-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_393, obj_t BgL_vz00_394)
	{
		{	/* Foreign/ctype.sch 499 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_393)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_394), BUNSPEC);
		}

	}



/* &cstruct-pointed-to-by-set! */
	obj_t BGl_z62cstructzd2pointedzd2tozd2byzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2637, obj_t BgL_oz00_2638, obj_t BgL_vz00_2639)
	{
		{	/* Foreign/ctype.sch 499 */
			return
				BGl_cstructzd2pointedzd2tozd2byzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2638), BgL_vz00_2639);
		}

	}



/* cstruct-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2aliaszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_395)
	{
		{	/* Foreign/ctype.sch 500 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_395)))->BgL_aliasz00);
		}

	}



/* &cstruct-alias */
	obj_t BGl_z62cstructzd2aliaszb0zzforeign_ctypez00(obj_t BgL_envz00_2640,
		obj_t BgL_oz00_2641)
	{
		{	/* Foreign/ctype.sch 500 */
			return
				BGl_cstructzd2aliaszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2641));
		}

	}



/* cstruct-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2aliaszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_396, obj_t BgL_vz00_397)
	{
		{	/* Foreign/ctype.sch 501 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_396)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_397), BUNSPEC);
		}

	}



/* &cstruct-alias-set! */
	obj_t BGl_z62cstructzd2aliaszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2642, obj_t BgL_oz00_2643, obj_t BgL_vz00_2644)
	{
		{	/* Foreign/ctype.sch 501 */
			return
				BGl_cstructzd2aliaszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2643), BgL_vz00_2644);
		}

	}



/* cstruct-$ */
	BGL_EXPORTED_DEF obj_t BGl_cstructzd2z42z90zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_398)
	{
		{	/* Foreign/ctype.sch 502 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_398)))->BgL_z42z42);
		}

	}



/* &cstruct-$ */
	obj_t BGl_z62cstructzd2z42zf2zzforeign_ctypez00(obj_t BgL_envz00_2645,
		obj_t BgL_oz00_2646)
	{
		{	/* Foreign/ctype.sch 502 */
			return
				BGl_cstructzd2z42z90zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2646));
		}

	}



/* cstruct-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2z42zd2setz12z50zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_399, obj_t BgL_vz00_400)
	{
		{	/* Foreign/ctype.sch 503 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_399)))->BgL_z42z42) =
				((obj_t) BgL_vz00_400), BUNSPEC);
		}

	}



/* &cstruct-$-set! */
	obj_t BGl_z62cstructzd2z42zd2setz12z32zzforeign_ctypez00(obj_t
		BgL_envz00_2647, obj_t BgL_oz00_2648, obj_t BgL_vz00_2649)
	{
		{	/* Foreign/ctype.sch 503 */
			return
				BGl_cstructzd2z42zd2setz12z50zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2648), BgL_vz00_2649);
		}

	}



/* cstruct-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_cstructzd2magiczf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_401)
	{
		{	/* Foreign/ctype.sch 504 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_401)))->BgL_magiczf3zf3);
		}

	}



/* &cstruct-magic? */
	obj_t BGl_z62cstructzd2magiczf3z43zzforeign_ctypez00(obj_t BgL_envz00_2650,
		obj_t BgL_oz00_2651)
	{
		{	/* Foreign/ctype.sch 504 */
			return
				BBOOL(BGl_cstructzd2magiczf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2651)));
		}

	}



/* cstruct-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2magiczf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_402, bool_t BgL_vz00_403)
	{
		{	/* Foreign/ctype.sch 505 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_402)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_403), BUNSPEC);
		}

	}



/* &cstruct-magic?-set! */
	obj_t BGl_z62cstructzd2magiczf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2652, obj_t BgL_oz00_2653, obj_t BgL_vz00_2654)
	{
		{	/* Foreign/ctype.sch 505 */
			return
				BGl_cstructzd2magiczf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2653), CBOOL(BgL_vz00_2654));
		}

	}



/* cstruct-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_cstructzd2initzf3z21zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_404)
	{
		{	/* Foreign/ctype.sch 506 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_404)))->BgL_initzf3zf3);
		}

	}



/* &cstruct-init? */
	obj_t BGl_z62cstructzd2initzf3z43zzforeign_ctypez00(obj_t BgL_envz00_2655,
		obj_t BgL_oz00_2656)
	{
		{	/* Foreign/ctype.sch 506 */
			return
				BBOOL(BGl_cstructzd2initzf3z21zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2656)));
		}

	}



/* cstruct-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2initzf3zd2setz12ze1zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_405, bool_t BgL_vz00_406)
	{
		{	/* Foreign/ctype.sch 507 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_405)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_406), BUNSPEC);
		}

	}



/* &cstruct-init?-set! */
	obj_t BGl_z62cstructzd2initzf3zd2setz12z83zzforeign_ctypez00(obj_t
		BgL_envz00_2657, obj_t BgL_oz00_2658, obj_t BgL_vz00_2659)
	{
		{	/* Foreign/ctype.sch 507 */
			return
				BGl_cstructzd2initzf3zd2setz12ze1zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2658), CBOOL(BgL_vz00_2659));
		}

	}



/* cstruct-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2parentszd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_407)
	{
		{	/* Foreign/ctype.sch 508 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_407)))->BgL_parentsz00);
		}

	}



/* &cstruct-parents */
	obj_t BGl_z62cstructzd2parentszb0zzforeign_ctypez00(obj_t BgL_envz00_2660,
		obj_t BgL_oz00_2661)
	{
		{	/* Foreign/ctype.sch 508 */
			return
				BGl_cstructzd2parentszd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2661));
		}

	}



/* cstruct-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2parentszd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_408, obj_t BgL_vz00_409)
	{
		{	/* Foreign/ctype.sch 509 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_408)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_409), BUNSPEC);
		}

	}



/* &cstruct-parents-set! */
	obj_t BGl_z62cstructzd2parentszd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2662, obj_t BgL_oz00_2663, obj_t BgL_vz00_2664)
	{
		{	/* Foreign/ctype.sch 509 */
			return
				BGl_cstructzd2parentszd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2663), BgL_vz00_2664);
		}

	}



/* cstruct-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2coercezd2toz00zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_410)
	{
		{	/* Foreign/ctype.sch 510 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_410)))->BgL_coercezd2tozd2);
		}

	}



/* &cstruct-coerce-to */
	obj_t BGl_z62cstructzd2coercezd2toz62zzforeign_ctypez00(obj_t BgL_envz00_2665,
		obj_t BgL_oz00_2666)
	{
		{	/* Foreign/ctype.sch 510 */
			return
				BGl_cstructzd2coercezd2toz00zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2666));
		}

	}



/* cstruct-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_411, obj_t BgL_vz00_412)
	{
		{	/* Foreign/ctype.sch 511 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_411)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_412), BUNSPEC);
		}

	}



/* &cstruct-coerce-to-set! */
	obj_t BGl_z62cstructzd2coercezd2tozd2setz12za2zzforeign_ctypez00(obj_t
		BgL_envz00_2667, obj_t BgL_oz00_2668, obj_t BgL_vz00_2669)
	{
		{	/* Foreign/ctype.sch 511 */
			return
				BGl_cstructzd2coercezd2tozd2setz12zc0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2668), BgL_vz00_2669);
		}

	}



/* cstruct-class */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2classzd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_413)
	{
		{	/* Foreign/ctype.sch 512 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_413)))->BgL_classz00);
		}

	}



/* &cstruct-class */
	obj_t BGl_z62cstructzd2classzb0zzforeign_ctypez00(obj_t BgL_envz00_2670,
		obj_t BgL_oz00_2671)
	{
		{	/* Foreign/ctype.sch 512 */
			return
				BGl_cstructzd2classzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2671));
		}

	}



/* cstruct-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2classzd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_414, obj_t BgL_vz00_415)
	{
		{	/* Foreign/ctype.sch 513 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_414)))->BgL_classz00) =
				((obj_t) BgL_vz00_415), BUNSPEC);
		}

	}



/* &cstruct-class-set! */
	obj_t BGl_z62cstructzd2classzd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2672, obj_t BgL_oz00_2673, obj_t BgL_vz00_2674)
	{
		{	/* Foreign/ctype.sch 513 */
			return
				BGl_cstructzd2classzd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2673), BgL_vz00_2674);
		}

	}



/* cstruct-size */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2siza7ez75zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_416)
	{
		{	/* Foreign/ctype.sch 514 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_416)))->BgL_siza7eza7);
		}

	}



/* &cstruct-size */
	obj_t BGl_z62cstructzd2siza7ez17zzforeign_ctypez00(obj_t BgL_envz00_2675,
		obj_t BgL_oz00_2676)
	{
		{	/* Foreign/ctype.sch 514 */
			return
				BGl_cstructzd2siza7ez75zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2676));
		}

	}



/* cstruct-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2siza7ezd2setz12zb5zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_417, obj_t BgL_vz00_418)
	{
		{	/* Foreign/ctype.sch 515 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_417)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_418), BUNSPEC);
		}

	}



/* &cstruct-size-set! */
	obj_t BGl_z62cstructzd2siza7ezd2setz12zd7zzforeign_ctypez00(obj_t
		BgL_envz00_2677, obj_t BgL_oz00_2678, obj_t BgL_vz00_2679)
	{
		{	/* Foreign/ctype.sch 515 */
			return
				BGl_cstructzd2siza7ezd2setz12zb5zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2678), BgL_vz00_2679);
		}

	}



/* cstruct-name */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2namezd2zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_419)
	{
		{	/* Foreign/ctype.sch 516 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_419)))->BgL_namez00);
		}

	}



/* &cstruct-name */
	obj_t BGl_z62cstructzd2namezb0zzforeign_ctypez00(obj_t BgL_envz00_2680,
		obj_t BgL_oz00_2681)
	{
		{	/* Foreign/ctype.sch 516 */
			return
				BGl_cstructzd2namezd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2681));
		}

	}



/* cstruct-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructzd2namezd2setz12z12zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_420, obj_t BgL_vz00_421)
	{
		{	/* Foreign/ctype.sch 517 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_420)))->BgL_namez00) =
				((obj_t) BgL_vz00_421), BUNSPEC);
		}

	}



/* &cstruct-name-set! */
	obj_t BGl_z62cstructzd2namezd2setz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2682, obj_t BgL_oz00_2683, obj_t BgL_vz00_2684)
	{
		{	/* Foreign/ctype.sch 517 */
			return
				BGl_cstructzd2namezd2setz12z12zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2683), BgL_vz00_2684);
		}

	}



/* cstruct-id */
	BGL_EXPORTED_DEF obj_t BGl_cstructzd2idzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_422)
	{
		{	/* Foreign/ctype.sch 518 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_422)))->BgL_idz00);
		}

	}



/* &cstruct-id */
	obj_t BGl_z62cstructzd2idzb0zzforeign_ctypez00(obj_t BgL_envz00_2685,
		obj_t BgL_oz00_2686)
	{
		{	/* Foreign/ctype.sch 518 */
			return
				BGl_cstructzd2idzd2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2686));
		}

	}



/* make-cstruct* */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2cstructza2z70zzforeign_ctypez00(obj_t BgL_id1212z00_425,
		obj_t BgL_name1213z00_426, obj_t BgL_siza7e1214za7_427,
		obj_t BgL_class1215z00_428, obj_t BgL_coercezd2to1216zd2_429,
		obj_t BgL_parents1217z00_430, bool_t BgL_initzf31218zf3_431,
		bool_t BgL_magiczf31219zf3_432, obj_t BgL_z421220z42_433,
		obj_t BgL_alias1221z00_434, obj_t BgL_pointedzd2tozd2by1222z00_435,
		obj_t BgL_tvector1223z00_436, obj_t BgL_location1224z00_437,
		obj_t BgL_importzd2location1225zd2_438, int BgL_occurrence1226z00_439,
		BgL_typez00_bglt BgL_btype1227z00_440,
		BgL_typez00_bglt BgL_cstruct1228z00_441)
	{
		{	/* Foreign/ctype.sch 522 */
			{	/* Foreign/ctype.sch 522 */
				BgL_typez00_bglt BgL_new1242z00_3174;

				{	/* Foreign/ctype.sch 522 */
					BgL_typez00_bglt BgL_tmp1240z00_3175;
					BgL_cstructza2za2_bglt BgL_wide1241z00_3176;

					{
						BgL_typez00_bglt BgL_auxz00_4846;

						{	/* Foreign/ctype.sch 522 */
							BgL_typez00_bglt BgL_new1239z00_3177;

							BgL_new1239z00_3177 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/ctype.sch 522 */
								long BgL_arg1372z00_3178;

								{	/* Foreign/ctype.sch 522 */
									long BgL_res2094z00_3179;

									BgL_res2094z00_3179 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1372z00_3178 = BgL_res2094z00_3179;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1239z00_3177),
									BgL_arg1372z00_3178);
							}
							{	/* Foreign/ctype.sch 522 */
								BgL_objectz00_bglt BgL_tmpz00_4851;

								BgL_tmpz00_4851 = ((BgL_objectz00_bglt) BgL_new1239z00_3177);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4851, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1239z00_3177);
							BgL_auxz00_4846 = BgL_new1239z00_3177;
						}
						BgL_tmp1240z00_3175 = ((BgL_typez00_bglt) BgL_auxz00_4846);
					}
					BgL_wide1241z00_3176 =
						((BgL_cstructza2za2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cstructza2za2_bgl))));
					{	/* Foreign/ctype.sch 522 */
						obj_t BgL_auxz00_4859;
						BgL_objectz00_bglt BgL_tmpz00_4857;

						BgL_auxz00_4859 = ((obj_t) BgL_wide1241z00_3176);
						BgL_tmpz00_4857 = ((BgL_objectz00_bglt) BgL_tmp1240z00_3175);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4857, BgL_auxz00_4859);
					}
					((BgL_objectz00_bglt) BgL_tmp1240z00_3175);
					{	/* Foreign/ctype.sch 522 */
						long BgL_arg1371z00_3180;

						{	/* Foreign/ctype.sch 522 */
							long BgL_res2095z00_3181;

							BgL_res2095z00_3181 =
								BGL_CLASS_INDEX(BGl_cstructza2za2zzforeign_ctypez00);
							BgL_arg1371z00_3180 = BgL_res2095z00_3181;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1240z00_3175), BgL_arg1371z00_3180);
					}
					BgL_new1242z00_3174 = ((BgL_typez00_bglt) BgL_tmp1240z00_3175);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1242z00_3174)))->BgL_idz00) =
					((obj_t) BgL_id1212z00_425), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_namez00) =
					((obj_t) BgL_name1213z00_426), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1214za7_427), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_classz00) =
					((obj_t) BgL_class1215z00_428), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1216zd2_429), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_parentsz00) =
					((obj_t) BgL_parents1217z00_430), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31218zf3_431), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31219zf3_432), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_z42z42) =
					((obj_t) BgL_z421220z42_433), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_aliasz00) =
					((obj_t) BgL_alias1221z00_434), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1222z00_435), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1223z00_436), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_locationz00) =
					((obj_t) BgL_location1224z00_437), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1225zd2_438), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1242z00_3174)))->BgL_occurrencez00) =
					((int) BgL_occurrence1226z00_439), BUNSPEC);
				{
					BgL_cstructza2za2_bglt BgL_auxz00_4897;

					{
						obj_t BgL_auxz00_4898;

						{	/* Foreign/ctype.sch 522 */
							BgL_objectz00_bglt BgL_tmpz00_4899;

							BgL_tmpz00_4899 = ((BgL_objectz00_bglt) BgL_new1242z00_3174);
							BgL_auxz00_4898 = BGL_OBJECT_WIDENING(BgL_tmpz00_4899);
						}
						BgL_auxz00_4897 = ((BgL_cstructza2za2_bglt) BgL_auxz00_4898);
					}
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_4897))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_btype1227z00_440), BUNSPEC);
				}
				{
					BgL_cstructza2za2_bglt BgL_auxz00_4904;

					{
						obj_t BgL_auxz00_4905;

						{	/* Foreign/ctype.sch 522 */
							BgL_objectz00_bglt BgL_tmpz00_4906;

							BgL_tmpz00_4906 = ((BgL_objectz00_bglt) BgL_new1242z00_3174);
							BgL_auxz00_4905 = BGL_OBJECT_WIDENING(BgL_tmpz00_4906);
						}
						BgL_auxz00_4904 = ((BgL_cstructza2za2_bglt) BgL_auxz00_4905);
					}
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_4904))->
							BgL_cstructz00) =
						((BgL_typez00_bglt) BgL_cstruct1228z00_441), BUNSPEC);
				}
				return BgL_new1242z00_3174;
			}
		}

	}



/* &make-cstruct* */
	BgL_typez00_bglt BGl_z62makezd2cstructza2z12zzforeign_ctypez00(obj_t
		BgL_envz00_2687, obj_t BgL_id1212z00_2688, obj_t BgL_name1213z00_2689,
		obj_t BgL_siza7e1214za7_2690, obj_t BgL_class1215z00_2691,
		obj_t BgL_coercezd2to1216zd2_2692, obj_t BgL_parents1217z00_2693,
		obj_t BgL_initzf31218zf3_2694, obj_t BgL_magiczf31219zf3_2695,
		obj_t BgL_z421220z42_2696, obj_t BgL_alias1221z00_2697,
		obj_t BgL_pointedzd2tozd2by1222z00_2698, obj_t BgL_tvector1223z00_2699,
		obj_t BgL_location1224z00_2700, obj_t BgL_importzd2location1225zd2_2701,
		obj_t BgL_occurrence1226z00_2702, obj_t BgL_btype1227z00_2703,
		obj_t BgL_cstruct1228z00_2704)
	{
		{	/* Foreign/ctype.sch 522 */
			return
				BGl_makezd2cstructza2z70zzforeign_ctypez00(BgL_id1212z00_2688,
				BgL_name1213z00_2689, BgL_siza7e1214za7_2690, BgL_class1215z00_2691,
				BgL_coercezd2to1216zd2_2692, BgL_parents1217z00_2693,
				CBOOL(BgL_initzf31218zf3_2694), CBOOL(BgL_magiczf31219zf3_2695),
				BgL_z421220z42_2696, BgL_alias1221z00_2697,
				BgL_pointedzd2tozd2by1222z00_2698, BgL_tvector1223z00_2699,
				BgL_location1224z00_2700, BgL_importzd2location1225zd2_2701,
				CINT(BgL_occurrence1226z00_2702),
				((BgL_typez00_bglt) BgL_btype1227z00_2703),
				((BgL_typez00_bglt) BgL_cstruct1228z00_2704));
		}

	}



/* cstruct*? */
	BGL_EXPORTED_DEF bool_t BGl_cstructza2zf3z51zzforeign_ctypez00(obj_t
		BgL_objz00_442)
	{
		{	/* Foreign/ctype.sch 523 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_442,
				BGl_cstructza2za2zzforeign_ctypez00);
		}

	}



/* &cstruct*? */
	obj_t BGl_z62cstructza2zf3z33zzforeign_ctypez00(obj_t BgL_envz00_2705,
		obj_t BgL_objz00_2706)
	{
		{	/* Foreign/ctype.sch 523 */
			return BBOOL(BGl_cstructza2zf3z51zzforeign_ctypez00(BgL_objz00_2706));
		}

	}



/* cstruct*-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_cstructza2zd2nilz70zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.sch 524 */
			{	/* Foreign/ctype.sch 524 */
				obj_t BgL_classz00_1589;

				BgL_classz00_1589 = BGl_cstructza2za2zzforeign_ctypez00;
				{	/* Foreign/ctype.sch 524 */
					obj_t BgL__ortest_1106z00_1590;

					BgL__ortest_1106z00_1590 = BGL_CLASS_NIL(BgL_classz00_1589);
					if (CBOOL(BgL__ortest_1106z00_1590))
						{	/* Foreign/ctype.sch 524 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1590);
						}
					else
						{	/* Foreign/ctype.sch 524 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1589));
						}
				}
			}
		}

	}



/* &cstruct*-nil */
	BgL_typez00_bglt BGl_z62cstructza2zd2nilz12zzforeign_ctypez00(obj_t
		BgL_envz00_2707)
	{
		{	/* Foreign/ctype.sch 524 */
			return BGl_cstructza2zd2nilz70zzforeign_ctypez00();
		}

	}



/* cstruct*-cstruct */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cstructza2zd2cstructz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_443)
	{
		{	/* Foreign/ctype.sch 525 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_4927;

				{
					obj_t BgL_auxz00_4928;

					{	/* Foreign/ctype.sch 525 */
						BgL_objectz00_bglt BgL_tmpz00_4929;

						BgL_tmpz00_4929 = ((BgL_objectz00_bglt) BgL_oz00_443);
						BgL_auxz00_4928 = BGL_OBJECT_WIDENING(BgL_tmpz00_4929);
					}
					BgL_auxz00_4927 = ((BgL_cstructza2za2_bglt) BgL_auxz00_4928);
				}
				return
					(((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_4927))->BgL_cstructz00);
			}
		}

	}



/* &cstruct*-cstruct */
	BgL_typez00_bglt BGl_z62cstructza2zd2cstructz12zzforeign_ctypez00(obj_t
		BgL_envz00_2708, obj_t BgL_oz00_2709)
	{
		{	/* Foreign/ctype.sch 525 */
			return
				BGl_cstructza2zd2cstructz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2709));
		}

	}



/* cstruct*-btype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_cstructza2zd2btypez70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_446)
	{
		{	/* Foreign/ctype.sch 527 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_4936;

				{
					obj_t BgL_auxz00_4937;

					{	/* Foreign/ctype.sch 527 */
						BgL_objectz00_bglt BgL_tmpz00_4938;

						BgL_tmpz00_4938 = ((BgL_objectz00_bglt) BgL_oz00_446);
						BgL_auxz00_4937 = BGL_OBJECT_WIDENING(BgL_tmpz00_4938);
					}
					BgL_auxz00_4936 = ((BgL_cstructza2za2_bglt) BgL_auxz00_4937);
				}
				return
					(((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_4936))->BgL_btypez00);
			}
		}

	}



/* &cstruct*-btype */
	BgL_typez00_bglt BGl_z62cstructza2zd2btypez12zzforeign_ctypez00(obj_t
		BgL_envz00_2710, obj_t BgL_oz00_2711)
	{
		{	/* Foreign/ctype.sch 527 */
			return
				BGl_cstructza2zd2btypez70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2711));
		}

	}



/* cstruct*-occurrence */
	BGL_EXPORTED_DEF int
		BGl_cstructza2zd2occurrencez70zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_449)
	{
		{	/* Foreign/ctype.sch 529 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_449)))->BgL_occurrencez00);
		}

	}



/* &cstruct*-occurrence */
	obj_t BGl_z62cstructza2zd2occurrencez12zzforeign_ctypez00(obj_t
		BgL_envz00_2712, obj_t BgL_oz00_2713)
	{
		{	/* Foreign/ctype.sch 529 */
			return
				BINT(BGl_cstructza2zd2occurrencez70zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2713)));
		}

	}



/* cstruct*-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2occurrencezd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_450, int BgL_vz00_451)
	{
		{	/* Foreign/ctype.sch 530 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_450)))->BgL_occurrencez00) =
				((int) BgL_vz00_451), BUNSPEC);
		}

	}



/* &cstruct*-occurrence-set! */
	obj_t BGl_z62cstructza2zd2occurrencezd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2714, obj_t BgL_oz00_2715, obj_t BgL_vz00_2716)
	{
		{	/* Foreign/ctype.sch 530 */
			return
				BGl_cstructza2zd2occurrencezd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2715), CINT(BgL_vz00_2716));
		}

	}



/* cstruct*-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2importzd2locationza2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_452)
	{
		{	/* Foreign/ctype.sch 531 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_452)))->BgL_importzd2locationzd2);
		}

	}



/* &cstruct*-import-location */
	obj_t BGl_z62cstructza2zd2importzd2locationzc0zzforeign_ctypez00(obj_t
		BgL_envz00_2717, obj_t BgL_oz00_2718)
	{
		{	/* Foreign/ctype.sch 531 */
			return
				BGl_cstructza2zd2importzd2locationza2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2718));
		}

	}



/* cstruct*-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2importzd2locationzd2setz12z62zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_453, obj_t BgL_vz00_454)
	{
		{	/* Foreign/ctype.sch 532 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_453)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_454), BUNSPEC);
		}

	}



/* &cstruct*-import-location-set! */
	obj_t
		BGl_z62cstructza2zd2importzd2locationzd2setz12z00zzforeign_ctypez00(obj_t
		BgL_envz00_2719, obj_t BgL_oz00_2720, obj_t BgL_vz00_2721)
	{
		{	/* Foreign/ctype.sch 532 */
			return
				BGl_cstructza2zd2importzd2locationzd2setz12z62zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2720), BgL_vz00_2721);
		}

	}



/* cstruct*-location */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2locationz70zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_455)
	{
		{	/* Foreign/ctype.sch 533 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_455)))->BgL_locationz00);
		}

	}



/* &cstruct*-location */
	obj_t BGl_z62cstructza2zd2locationz12zzforeign_ctypez00(obj_t BgL_envz00_2722,
		obj_t BgL_oz00_2723)
	{
		{	/* Foreign/ctype.sch 533 */
			return
				BGl_cstructza2zd2locationz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2723));
		}

	}



/* cstruct*-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2locationzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_456, obj_t BgL_vz00_457)
	{
		{	/* Foreign/ctype.sch 534 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_456)))->BgL_locationz00) =
				((obj_t) BgL_vz00_457), BUNSPEC);
		}

	}



/* &cstruct*-location-set! */
	obj_t BGl_z62cstructza2zd2locationzd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2724, obj_t BgL_oz00_2725, obj_t BgL_vz00_2726)
	{
		{	/* Foreign/ctype.sch 534 */
			return
				BGl_cstructza2zd2locationzd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2725), BgL_vz00_2726);
		}

	}



/* cstruct*-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2tvectorz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_458)
	{
		{	/* Foreign/ctype.sch 535 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_458)))->BgL_tvectorz00);
		}

	}



/* &cstruct*-tvector */
	obj_t BGl_z62cstructza2zd2tvectorz12zzforeign_ctypez00(obj_t BgL_envz00_2727,
		obj_t BgL_oz00_2728)
	{
		{	/* Foreign/ctype.sch 535 */
			return
				BGl_cstructza2zd2tvectorz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2728));
		}

	}



/* cstruct*-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2tvectorzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_459, obj_t BgL_vz00_460)
	{
		{	/* Foreign/ctype.sch 536 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_459)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_460), BUNSPEC);
		}

	}



/* &cstruct*-tvector-set! */
	obj_t BGl_z62cstructza2zd2tvectorzd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2729, obj_t BgL_oz00_2730, obj_t BgL_vz00_2731)
	{
		{	/* Foreign/ctype.sch 536 */
			return
				BGl_cstructza2zd2tvectorzd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2730), BgL_vz00_2731);
		}

	}



/* cstruct*-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2pointedzd2tozd2byz70zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_461)
	{
		{	/* Foreign/ctype.sch 537 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_461)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &cstruct*-pointed-to-by */
	obj_t BGl_z62cstructza2zd2pointedzd2tozd2byz12zzforeign_ctypez00(obj_t
		BgL_envz00_2732, obj_t BgL_oz00_2733)
	{
		{	/* Foreign/ctype.sch 537 */
			return
				BGl_cstructza2zd2pointedzd2tozd2byz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2733));
		}

	}



/* cstruct*-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2pointedzd2tozd2byzd2setz12zb0zzforeign_ctypez00
		(BgL_typez00_bglt BgL_oz00_462, obj_t BgL_vz00_463)
	{
		{	/* Foreign/ctype.sch 538 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_462)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_463), BUNSPEC);
		}

	}



/* &cstruct*-pointed-to-by-set! */
	obj_t
		BGl_z62cstructza2zd2pointedzd2tozd2byzd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2734, obj_t BgL_oz00_2735, obj_t BgL_vz00_2736)
	{
		{	/* Foreign/ctype.sch 538 */
			return
				BGl_cstructza2zd2pointedzd2tozd2byzd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2735), BgL_vz00_2736);
		}

	}



/* cstruct*-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2aliasz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_464)
	{
		{	/* Foreign/ctype.sch 539 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_464)))->BgL_aliasz00);
		}

	}



/* &cstruct*-alias */
	obj_t BGl_z62cstructza2zd2aliasz12zzforeign_ctypez00(obj_t BgL_envz00_2737,
		obj_t BgL_oz00_2738)
	{
		{	/* Foreign/ctype.sch 539 */
			return
				BGl_cstructza2zd2aliasz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2738));
		}

	}



/* cstruct*-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2aliaszd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_465, obj_t BgL_vz00_466)
	{
		{	/* Foreign/ctype.sch 540 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_465)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_466), BUNSPEC);
		}

	}



/* &cstruct*-alias-set! */
	obj_t BGl_z62cstructza2zd2aliaszd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2739, obj_t BgL_oz00_2740, obj_t BgL_vz00_2741)
	{
		{	/* Foreign/ctype.sch 540 */
			return
				BGl_cstructza2zd2aliaszd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2740), BgL_vz00_2741);
		}

	}



/* cstruct*-$ */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2z42z32zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_467)
	{
		{	/* Foreign/ctype.sch 541 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_467)))->BgL_z42z42);
		}

	}



/* &cstruct*-$ */
	obj_t BGl_z62cstructza2zd2z42z50zzforeign_ctypez00(obj_t BgL_envz00_2742,
		obj_t BgL_oz00_2743)
	{
		{	/* Foreign/ctype.sch 541 */
			return
				BGl_cstructza2zd2z42z32zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2743));
		}

	}



/* cstruct*-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2z42zd2setz12zf2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_468, obj_t BgL_vz00_469)
	{
		{	/* Foreign/ctype.sch 542 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_468)))->BgL_z42z42) =
				((obj_t) BgL_vz00_469), BUNSPEC);
		}

	}



/* &cstruct*-$-set! */
	obj_t BGl_z62cstructza2zd2z42zd2setz12z90zzforeign_ctypez00(obj_t
		BgL_envz00_2744, obj_t BgL_oz00_2745, obj_t BgL_vz00_2746)
	{
		{	/* Foreign/ctype.sch 542 */
			return
				BGl_cstructza2zd2z42zd2setz12zf2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2745), BgL_vz00_2746);
		}

	}



/* cstruct*-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_cstructza2zd2magiczf3z83zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_470)
	{
		{	/* Foreign/ctype.sch 543 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_470)))->BgL_magiczf3zf3);
		}

	}



/* &cstruct*-magic? */
	obj_t BGl_z62cstructza2zd2magiczf3ze1zzforeign_ctypez00(obj_t BgL_envz00_2747,
		obj_t BgL_oz00_2748)
	{
		{	/* Foreign/ctype.sch 543 */
			return
				BBOOL(BGl_cstructza2zd2magiczf3z83zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2748)));
		}

	}



/* cstruct*-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2magiczf3zd2setz12z43zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_471, bool_t BgL_vz00_472)
	{
		{	/* Foreign/ctype.sch 544 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_471)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_472), BUNSPEC);
		}

	}



/* &cstruct*-magic?-set! */
	obj_t BGl_z62cstructza2zd2magiczf3zd2setz12z21zzforeign_ctypez00(obj_t
		BgL_envz00_2749, obj_t BgL_oz00_2750, obj_t BgL_vz00_2751)
	{
		{	/* Foreign/ctype.sch 544 */
			return
				BGl_cstructza2zd2magiczf3zd2setz12z43zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2750), CBOOL(BgL_vz00_2751));
		}

	}



/* cstruct*-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_cstructza2zd2initzf3z83zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_473)
	{
		{	/* Foreign/ctype.sch 545 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_473)))->BgL_initzf3zf3);
		}

	}



/* &cstruct*-init? */
	obj_t BGl_z62cstructza2zd2initzf3ze1zzforeign_ctypez00(obj_t BgL_envz00_2752,
		obj_t BgL_oz00_2753)
	{
		{	/* Foreign/ctype.sch 545 */
			return
				BBOOL(BGl_cstructza2zd2initzf3z83zzforeign_ctypez00(
					((BgL_typez00_bglt) BgL_oz00_2753)));
		}

	}



/* cstruct*-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2initzf3zd2setz12z43zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_474, bool_t BgL_vz00_475)
	{
		{	/* Foreign/ctype.sch 546 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_474)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_475), BUNSPEC);
		}

	}



/* &cstruct*-init?-set! */
	obj_t BGl_z62cstructza2zd2initzf3zd2setz12z21zzforeign_ctypez00(obj_t
		BgL_envz00_2754, obj_t BgL_oz00_2755, obj_t BgL_vz00_2756)
	{
		{	/* Foreign/ctype.sch 546 */
			return
				BGl_cstructza2zd2initzf3zd2setz12z43zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2755), CBOOL(BgL_vz00_2756));
		}

	}



/* cstruct*-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2parentsz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_476)
	{
		{	/* Foreign/ctype.sch 547 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_476)))->BgL_parentsz00);
		}

	}



/* &cstruct*-parents */
	obj_t BGl_z62cstructza2zd2parentsz12zzforeign_ctypez00(obj_t BgL_envz00_2757,
		obj_t BgL_oz00_2758)
	{
		{	/* Foreign/ctype.sch 547 */
			return
				BGl_cstructza2zd2parentsz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2758));
		}

	}



/* cstruct*-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2parentszd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_477, obj_t BgL_vz00_478)
	{
		{	/* Foreign/ctype.sch 548 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_477)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_478), BUNSPEC);
		}

	}



/* &cstruct*-parents-set! */
	obj_t BGl_z62cstructza2zd2parentszd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2759, obj_t BgL_oz00_2760, obj_t BgL_vz00_2761)
	{
		{	/* Foreign/ctype.sch 548 */
			return
				BGl_cstructza2zd2parentszd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2760), BgL_vz00_2761);
		}

	}



/* cstruct*-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2coercezd2toza2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_479)
	{
		{	/* Foreign/ctype.sch 549 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_479)))->BgL_coercezd2tozd2);
		}

	}



/* &cstruct*-coerce-to */
	obj_t BGl_z62cstructza2zd2coercezd2tozc0zzforeign_ctypez00(obj_t
		BgL_envz00_2762, obj_t BgL_oz00_2763)
	{
		{	/* Foreign/ctype.sch 549 */
			return
				BGl_cstructza2zd2coercezd2toza2zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2763));
		}

	}



/* cstruct*-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2coercezd2tozd2setz12z62zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_480, obj_t BgL_vz00_481)
	{
		{	/* Foreign/ctype.sch 550 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_480)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_481), BUNSPEC);
		}

	}



/* &cstruct*-coerce-to-set! */
	obj_t BGl_z62cstructza2zd2coercezd2tozd2setz12z00zzforeign_ctypez00(obj_t
		BgL_envz00_2764, obj_t BgL_oz00_2765, obj_t BgL_vz00_2766)
	{
		{	/* Foreign/ctype.sch 550 */
			return
				BGl_cstructza2zd2coercezd2tozd2setz12z62zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2765), BgL_vz00_2766);
		}

	}



/* cstruct*-class */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2classz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_482)
	{
		{	/* Foreign/ctype.sch 551 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_482)))->BgL_classz00);
		}

	}



/* &cstruct*-class */
	obj_t BGl_z62cstructza2zd2classz12zzforeign_ctypez00(obj_t BgL_envz00_2767,
		obj_t BgL_oz00_2768)
	{
		{	/* Foreign/ctype.sch 551 */
			return
				BGl_cstructza2zd2classz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2768));
		}

	}



/* cstruct*-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2classzd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_483, obj_t BgL_vz00_484)
	{
		{	/* Foreign/ctype.sch 552 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_483)))->BgL_classz00) =
				((obj_t) BgL_vz00_484), BUNSPEC);
		}

	}



/* &cstruct*-class-set! */
	obj_t BGl_z62cstructza2zd2classzd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2769, obj_t BgL_oz00_2770, obj_t BgL_vz00_2771)
	{
		{	/* Foreign/ctype.sch 552 */
			return
				BGl_cstructza2zd2classzd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2770), BgL_vz00_2771);
		}

	}



/* cstruct*-size */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2siza7ezd7zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_485)
	{
		{	/* Foreign/ctype.sch 553 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_485)))->BgL_siza7eza7);
		}

	}



/* &cstruct*-size */
	obj_t BGl_z62cstructza2zd2siza7ezb5zzforeign_ctypez00(obj_t BgL_envz00_2772,
		obj_t BgL_oz00_2773)
	{
		{	/* Foreign/ctype.sch 553 */
			return
				BGl_cstructza2zd2siza7ezd7zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2773));
		}

	}



/* cstruct*-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2siza7ezd2setz12z17zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_486, obj_t BgL_vz00_487)
	{
		{	/* Foreign/ctype.sch 554 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_486)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_487), BUNSPEC);
		}

	}



/* &cstruct*-size-set! */
	obj_t BGl_z62cstructza2zd2siza7ezd2setz12z75zzforeign_ctypez00(obj_t
		BgL_envz00_2774, obj_t BgL_oz00_2775, obj_t BgL_vz00_2776)
	{
		{	/* Foreign/ctype.sch 554 */
			return
				BGl_cstructza2zd2siza7ezd2setz12z17zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2775), BgL_vz00_2776);
		}

	}



/* cstruct*-name */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2namez70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_488)
	{
		{	/* Foreign/ctype.sch 555 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_488)))->BgL_namez00);
		}

	}



/* &cstruct*-name */
	obj_t BGl_z62cstructza2zd2namez12zzforeign_ctypez00(obj_t BgL_envz00_2777,
		obj_t BgL_oz00_2778)
	{
		{	/* Foreign/ctype.sch 555 */
			return
				BGl_cstructza2zd2namez70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2778));
		}

	}



/* cstruct*-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2namezd2setz12zb0zzforeign_ctypez00(BgL_typez00_bglt
		BgL_oz00_489, obj_t BgL_vz00_490)
	{
		{	/* Foreign/ctype.sch 556 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_489)))->BgL_namez00) =
				((obj_t) BgL_vz00_490), BUNSPEC);
		}

	}



/* &cstruct*-name-set! */
	obj_t BGl_z62cstructza2zd2namezd2setz12zd2zzforeign_ctypez00(obj_t
		BgL_envz00_2779, obj_t BgL_oz00_2780, obj_t BgL_vz00_2781)
	{
		{	/* Foreign/ctype.sch 556 */
			return
				BGl_cstructza2zd2namezd2setz12zb0zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2780), BgL_vz00_2781);
		}

	}



/* cstruct*-id */
	BGL_EXPORTED_DEF obj_t
		BGl_cstructza2zd2idz70zzforeign_ctypez00(BgL_typez00_bglt BgL_oz00_491)
	{
		{	/* Foreign/ctype.sch 557 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_491)))->BgL_idz00);
		}

	}



/* &cstruct*-id */
	obj_t BGl_z62cstructza2zd2idz12zzforeign_ctypez00(obj_t BgL_envz00_2782,
		obj_t BgL_oz00_2783)
	{
		{	/* Foreign/ctype.sch 557 */
			return
				BGl_cstructza2zd2idz70zzforeign_ctypez00(
				((BgL_typez00_bglt) BgL_oz00_2783));
		}

	}



/* ctype? */
	BGL_EXPORTED_DEF bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t
		BgL_objz00_494)
	{
		{	/* Foreign/ctype.scm 85 */
			{	/* Foreign/ctype.scm 86 */
				bool_t BgL__ortest_1243z00_641;

				BgL__ortest_1243z00_641 =
					BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
					BGl_caliasz00zzforeign_ctypez00);
				if (BgL__ortest_1243z00_641)
					{	/* Foreign/ctype.scm 86 */
						return BgL__ortest_1243z00_641;
					}
				else
					{	/* Foreign/ctype.scm 87 */
						bool_t BgL__ortest_1244z00_642;

						BgL__ortest_1244z00_642 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
							BGl_cenumz00zzforeign_ctypez00);
						if (BgL__ortest_1244z00_642)
							{	/* Foreign/ctype.scm 87 */
								return BgL__ortest_1244z00_642;
							}
						else
							{	/* Foreign/ctype.scm 88 */
								bool_t BgL__ortest_1245z00_643;

								BgL__ortest_1245z00_643 =
									BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
									BGl_copaquez00zzforeign_ctypez00);
								if (BgL__ortest_1245z00_643)
									{	/* Foreign/ctype.scm 88 */
										return BgL__ortest_1245z00_643;
									}
								else
									{	/* Foreign/ctype.scm 89 */
										bool_t BgL__ortest_1246z00_644;

										BgL__ortest_1246z00_644 =
											BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
											BGl_cfunctionz00zzforeign_ctypez00);
										if (BgL__ortest_1246z00_644)
											{	/* Foreign/ctype.scm 89 */
												return BgL__ortest_1246z00_644;
											}
										else
											{	/* Foreign/ctype.scm 90 */
												bool_t BgL__ortest_1247z00_645;

												BgL__ortest_1247z00_645 =
													BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
													BGl_cptrz00zzforeign_ctypez00);
												if (BgL__ortest_1247z00_645)
													{	/* Foreign/ctype.scm 90 */
														return BgL__ortest_1247z00_645;
													}
												else
													{	/* Foreign/ctype.scm 91 */
														bool_t BgL__ortest_1248z00_646;

														BgL__ortest_1248z00_646 =
															BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
															BGl_cstructz00zzforeign_ctypez00);
														if (BgL__ortest_1248z00_646)
															{	/* Foreign/ctype.scm 91 */
																return BgL__ortest_1248z00_646;
															}
														else
															{	/* Foreign/ctype.scm 91 */
																return
																	BGl_isazf3zf3zz__objectz00(BgL_objz00_494,
																	BGl_cstructza2za2zzforeign_ctypez00);
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* &ctype? */
	obj_t BGl_z62ctypezf3z91zzforeign_ctypez00(obj_t BgL_envz00_2784,
		obj_t BgL_objz00_2785)
	{
		{	/* Foreign/ctype.scm 85 */
			return BBOOL(BGl_ctypezf3zf3zzforeign_ctypez00(BgL_objz00_2785));
		}

	}



/* declare-c-type! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t
		BgL_ctzd2defzd2_495, obj_t BgL_ctzd2idzd2_496, obj_t BgL_ctzd2expzd2_497,
		obj_t BgL_ctzd2namezd2_498)
	{
		{	/* Foreign/ctype.scm 97 */
			if (BGl_typezd2existszf3z21zztype_envz00(BgL_ctzd2idzd2_496))
				{	/* Foreign/ctype.scm 99 */
					if (CBOOL(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
						{	/* Foreign/ctype.scm 100 */
							BFALSE;
						}
					else
						{	/* Foreign/ctype.scm 101 */
							obj_t BgL_list1374z00_648;

							{	/* Foreign/ctype.scm 101 */
								obj_t BgL_arg1381z00_649;

								{	/* Foreign/ctype.scm 101 */
									obj_t BgL_arg1382z00_650;

									BgL_arg1382z00_650 =
										MAKE_YOUNG_PAIR(BgL_ctzd2idzd2_496, BNIL);
									BgL_arg1381z00_649 =
										MAKE_YOUNG_PAIR(BGl_string2187z00zzforeign_ctypez00,
										BgL_arg1382z00_650);
								}
								BgL_list1374z00_648 =
									MAKE_YOUNG_PAIR(BGl_string2188z00zzforeign_ctypez00,
									BgL_arg1381z00_649);
							}
							BGl_warningz00zz__errorz00(BgL_list1374z00_648);
						}
					return BUNSPEC;
				}
			else
				{	/* Foreign/ctype.scm 99 */
					if (SYMBOLP(BgL_ctzd2expzd2_497))
						{	/* Foreign/ctype.scm 103 */
							return
								((obj_t)
								BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
								(BgL_ctzd2idzd2_496, BgL_ctzd2expzd2_497,
									BgL_ctzd2namezd2_498));
						}
					else
						{	/* Foreign/ctype.scm 103 */
							if (PAIRP(BgL_ctzd2expzd2_497))
								{	/* Foreign/ctype.scm 106 */
									obj_t BgL_casezd2valuezd2_653;

									BgL_casezd2valuezd2_653 = CAR(BgL_ctzd2expzd2_497);
									if ((BgL_casezd2valuezd2_653 == CNST_TABLE_REF(((long) 0))))
										{	/* Foreign/ctype.scm 106 */
											return
												((obj_t)
												BGl_declarezd2czd2enumz12z12zzforeign_ctypez00
												(BgL_ctzd2idzd2_496, BgL_ctzd2expzd2_497,
													BgL_ctzd2namezd2_498));
										}
									else
										{	/* Foreign/ctype.scm 106 */
											if (
												(BgL_casezd2valuezd2_653 == CNST_TABLE_REF(((long) 1))))
												{	/* Foreign/ctype.scm 106 */
													return
														((obj_t)
														BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00
														(BgL_ctzd2idzd2_496, BgL_ctzd2expzd2_497,
															BgL_ctzd2namezd2_498));
												}
											else
												{	/* Foreign/ctype.scm 106 */
													if (
														(BgL_casezd2valuezd2_653 ==
															CNST_TABLE_REF(((long) 2))))
														{	/* Foreign/ctype.scm 106 */
															return
																((obj_t)
																BGl_declarezd2czd2functionz12z12zzforeign_ctypez00
																(BgL_ctzd2idzd2_496, BgL_ctzd2expzd2_497,
																	BgL_ctzd2namezd2_498));
														}
													else
														{	/* Foreign/ctype.scm 106 */
															bool_t BgL_test2599z00_5112;

															{	/* Foreign/ctype.scm 106 */
																bool_t BgL__ortest_1249z00_665;

																BgL__ortest_1249z00_665 =
																	(BgL_casezd2valuezd2_653 ==
																	CNST_TABLE_REF(((long) 3)));
																if (BgL__ortest_1249z00_665)
																	{	/* Foreign/ctype.scm 106 */
																		BgL_test2599z00_5112 =
																			BgL__ortest_1249z00_665;
																	}
																else
																	{	/* Foreign/ctype.scm 106 */
																		BgL_test2599z00_5112 =
																			(BgL_casezd2valuezd2_653 ==
																			CNST_TABLE_REF(((long) 4)));
															}}
															if (BgL_test2599z00_5112)
																{	/* Foreign/ctype.scm 106 */
																	return
																		((obj_t)
																		BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00
																		(BgL_ctzd2idzd2_496, BgL_ctzd2expzd2_497,
																			BgL_ctzd2namezd2_498));
																}
															else
																{	/* Foreign/ctype.scm 106 */
																	bool_t BgL_test2601z00_5120;

																	{	/* Foreign/ctype.scm 106 */
																		bool_t BgL__ortest_1250z00_664;

																		BgL__ortest_1250z00_664 =
																			(BgL_casezd2valuezd2_653 ==
																			CNST_TABLE_REF(((long) 5)));
																		if (BgL__ortest_1250z00_664)
																			{	/* Foreign/ctype.scm 106 */
																				BgL_test2601z00_5120 =
																					BgL__ortest_1250z00_664;
																			}
																		else
																			{	/* Foreign/ctype.scm 106 */
																				BgL_test2601z00_5120 =
																					(BgL_casezd2valuezd2_653 ==
																					CNST_TABLE_REF(((long) 6)));
																	}}
																	if (BgL_test2601z00_5120)
																		{	/* Foreign/ctype.scm 106 */
																			return
																				((obj_t)
																				BGl_declarezd2czd2structz12z12zzforeign_ctypez00
																				(BgL_ctzd2idzd2_496,
																					BgL_ctzd2expzd2_497,
																					BgL_ctzd2namezd2_498));
																		}
																	else
																		{	/* Foreign/ctype.scm 106 */
																			bool_t BgL_test2603z00_5128;

																			{	/* Foreign/ctype.scm 106 */
																				bool_t BgL__ortest_1251z00_663;

																				BgL__ortest_1251z00_663 =
																					(BgL_casezd2valuezd2_653 ==
																					CNST_TABLE_REF(((long) 7)));
																				if (BgL__ortest_1251z00_663)
																					{	/* Foreign/ctype.scm 106 */
																						BgL_test2603z00_5128 =
																							BgL__ortest_1251z00_663;
																					}
																				else
																					{	/* Foreign/ctype.scm 106 */
																						BgL_test2603z00_5128 =
																							(BgL_casezd2valuezd2_653 ==
																							CNST_TABLE_REF(((long) 8)));
																			}}
																			if (BgL_test2603z00_5128)
																				{	/* Foreign/ctype.scm 106 */
																					return
																						((obj_t)
																						BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00
																						(BgL_ctzd2idzd2_496,
																							BgL_ctzd2expzd2_497,
																							BgL_ctzd2namezd2_498));
																				}
																			else
																				{	/* Foreign/ctype.scm 106 */
																					return
																						BGl_internalzd2errorzd2zztools_errorz00
																						(BGl_string2188z00zzforeign_ctypez00,
																						BGl_string2189z00zzforeign_ctypez00,
																						BgL_ctzd2defzd2_495);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Foreign/ctype.scm 105 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2188z00zzforeign_ctypez00,
										BGl_string2189z00zzforeign_ctypez00, BgL_ctzd2defzd2_495);
								}
						}
				}
		}

	}



/* &declare-c-type! */
	obj_t BGl_z62declarezd2czd2typez12z70zzforeign_ctypez00(obj_t BgL_envz00_2786,
		obj_t BgL_ctzd2defzd2_2787, obj_t BgL_ctzd2idzd2_2788,
		obj_t BgL_ctzd2expzd2_2789, obj_t BgL_ctzd2namezd2_2790)
	{
		{	/* Foreign/ctype.scm 97 */
			return
				BGl_declarezd2czd2typez12z12zzforeign_ctypez00(BgL_ctzd2defzd2_2787,
				BgL_ctzd2idzd2_2788, BgL_ctzd2expzd2_2789, BgL_ctzd2namezd2_2790);
		}

	}



/* declare-c-alias! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t BgL_idz00_499,
		obj_t BgL_expz00_500, obj_t BgL_namez00_501)
	{
		{	/* Foreign/ctype.scm 131 */
			{	/* Foreign/ctype.scm 133 */
				BgL_typez00_bglt BgL_atypez00_666;

				BgL_atypez00_666 =
					BGl_getzd2aliasedzd2typez00zztype_typez00
					(BGl_findzd2typezd2zztype_envz00(BgL_expz00_500));
				if ((BgL_idz00_499 ==
						(((BgL_typez00_bglt) COBJECT(BgL_atypez00_666))->BgL_idz00)))
					{	/* Foreign/ctype.scm 134 */
						return BgL_atypez00_666;
					}
				else
					{	/* Foreign/ctype.scm 136 */
						BgL_typez00_bglt BgL_ctypez00_669;

						BgL_ctypez00_669 =
							BGl_declarezd2aliastypez12zc0zztype_envz00(BgL_idz00_499,
							BgL_namez00_501, CNST_TABLE_REF(((long) 9)), BgL_atypez00_666);
						{	/* Foreign/ctype.scm 137 */
							BgL_caliasz00_bglt BgL_wide1254z00_672;

							BgL_wide1254z00_672 =
								((BgL_caliasz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_caliasz00_bgl))));
							{	/* Foreign/ctype.scm 137 */
								obj_t BgL_auxz00_5150;
								BgL_objectz00_bglt BgL_tmpz00_5147;

								BgL_auxz00_5150 = ((obj_t) BgL_wide1254z00_672);
								BgL_tmpz00_5147 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_669));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5147, BgL_auxz00_5150);
							}
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_669));
							{	/* Foreign/ctype.scm 137 */
								long BgL_arg1421z00_673;

								{	/* Foreign/ctype.scm 137 */
									long BgL_res2108z00_1612;

									BgL_res2108z00_1612 =
										BGL_CLASS_INDEX(BGl_caliasz00zzforeign_ctypez00);
									BgL_arg1421z00_673 = BgL_res2108z00_1612;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_ctypez00_669)), BgL_arg1421z00_673);
							}
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_669));
						}
						{
							BgL_caliasz00_bglt BgL_auxz00_5161;

							{
								obj_t BgL_auxz00_5162;

								{	/* Foreign/ctype.scm 137 */
									BgL_objectz00_bglt BgL_tmpz00_5163;

									BgL_tmpz00_5163 =
										((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_ctypez00_669));
									BgL_auxz00_5162 = BGL_OBJECT_WIDENING(BgL_tmpz00_5163);
								}
								BgL_auxz00_5161 = ((BgL_caliasz00_bglt) BgL_auxz00_5162);
							}
							((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_5161))->
									BgL_arrayzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						((BgL_typez00_bglt) BgL_ctypez00_669);
						return BgL_ctypez00_669;
					}
			}
		}

	}



/* &declare-c-alias! */
	BgL_typez00_bglt BGl_z62declarezd2czd2aliasz12z70zzforeign_ctypez00(obj_t
		BgL_envz00_2791, obj_t BgL_idz00_2792, obj_t BgL_expz00_2793,
		obj_t BgL_namez00_2794)
	{
		{	/* Foreign/ctype.scm 131 */
			return
				BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(BgL_idz00_2792,
				BgL_expz00_2793, BgL_namez00_2794);
		}

	}



/* declare-c-enum! */
	BgL_typez00_bglt BGl_declarezd2czd2enumz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_502, obj_t BgL_expz00_503, obj_t BgL_namez00_504)
	{
		{	/* Foreign/ctype.scm 143 */
			{	/* Foreign/ctype.scm 145 */
				obj_t BgL_cobjz00_677;

				BgL_cobjz00_677 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 145 */
					obj_t BgL_objz00_678;

					BgL_objz00_678 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 146 */
						obj_t BgL_bidz00_679;

						{	/* Foreign/ctype.scm 147 */
							obj_t BgL_arg1462z00_690;

							{	/* Foreign/ctype.scm 147 */
								obj_t BgL_arg1464z00_691;
								obj_t BgL_arg1465z00_692;

								{	/* Foreign/ctype.scm 147 */
									obj_t BgL_res2109z00_1618;

									{	/* Foreign/ctype.scm 147 */
										obj_t BgL_symbolz00_1616;

										BgL_symbolz00_1616 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 147 */
											obj_t BgL_arg1466z00_1617;

											BgL_arg1466z00_1617 =
												SYMBOL_TO_STRING(BgL_symbolz00_1616);
											BgL_res2109z00_1618 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1617);
									}}
									BgL_arg1464z00_691 = BgL_res2109z00_1618;
								}
								{	/* Foreign/ctype.scm 147 */
									obj_t BgL_res2110z00_1621;

									{	/* Foreign/ctype.scm 147 */
										obj_t BgL_arg1466z00_1620;

										BgL_arg1466z00_1620 = SYMBOL_TO_STRING(BgL_idz00_502);
										BgL_res2110z00_1621 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1620);
									}
									BgL_arg1465z00_692 = BgL_res2110z00_1621;
								}
								BgL_arg1462z00_690 =
									string_append(BgL_arg1464z00_691, BgL_arg1465z00_692);
							}
							BgL_bidz00_679 = bstring_to_symbol(BgL_arg1462z00_690);
						}
						{	/* Foreign/ctype.scm 147 */
							BgL_typez00_bglt BgL_ctypez00_680;

							BgL_ctypez00_680 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_502,
								BgL_namez00_504, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 148 */
								BgL_typez00_bglt BgL_btypez00_681;

								{	/* Foreign/ctype.scm 149 */
									obj_t BgL_arg1461z00_689;

									BgL_arg1461z00_689 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_objz00_678)))->BgL_namez00);
									BgL_btypez00_681 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_679,
										BgL_arg1461z00_689, CNST_TABLE_REF(((long) 12)),
										CNST_TABLE_REF(((long) 13)));
								}
								{	/* Foreign/ctype.scm 149 */

									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
										(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
										(BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_namez00_504),
											BgL_idz00_502, BgL_bidz00_679));
									{	/* Foreign/ctype.scm 155 */
										BgL_cenumz00_bglt BgL_wide1258z00_686;

										BgL_wide1258z00_686 =
											((BgL_cenumz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cenumz00_bgl))));
										{	/* Foreign/ctype.scm 155 */
											obj_t BgL_auxz00_5193;
											BgL_objectz00_bglt BgL_tmpz00_5190;

											BgL_auxz00_5193 = ((obj_t) BgL_wide1258z00_686);
											BgL_tmpz00_5190 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_680));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5190, BgL_auxz00_5193);
										}
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_ctypez00_680));
										{	/* Foreign/ctype.scm 155 */
											long BgL_arg1449z00_687;

											{	/* Foreign/ctype.scm 155 */
												long BgL_res2112z00_1627;

												BgL_res2112z00_1627 =
													BGL_CLASS_INDEX(BGl_cenumz00zzforeign_ctypez00);
												BgL_arg1449z00_687 = BgL_res2112z00_1627;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_ctypez00_680)),
												BgL_arg1449z00_687);
										}
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_680));
									}
									{
										BgL_cenumz00_bglt BgL_auxz00_5204;

										{
											obj_t BgL_auxz00_5205;

											{	/* Foreign/ctype.scm 155 */
												BgL_objectz00_bglt BgL_tmpz00_5206;

												BgL_tmpz00_5206 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_ctypez00_680));
												BgL_auxz00_5205 = BGL_OBJECT_WIDENING(BgL_tmpz00_5206);
											}
											BgL_auxz00_5204 = ((BgL_cenumz00_bglt) BgL_auxz00_5205);
										}
										((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_5204))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btypez00_681), BUNSPEC);
									}
									{
										BgL_cenumz00_bglt BgL_auxz00_5212;

										{
											obj_t BgL_auxz00_5213;

											{	/* Foreign/ctype.scm 155 */
												BgL_objectz00_bglt BgL_tmpz00_5214;

												BgL_tmpz00_5214 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_ctypez00_680));
												BgL_auxz00_5213 = BGL_OBJECT_WIDENING(BgL_tmpz00_5214);
											}
											BgL_auxz00_5212 = ((BgL_cenumz00_bglt) BgL_auxz00_5213);
										}
										((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_5212))->
												BgL_literalsz00) =
											((obj_t) CDR(BgL_expz00_503)), BUNSPEC);
									}
									((BgL_typez00_bglt) BgL_ctypez00_680);
									return BgL_ctypez00_680;
								}
							}
						}
					}
				}
			}
		}

	}



/* declare-c-opaque! */
	BgL_typez00_bglt BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00(obj_t
		BgL_idz00_505, obj_t BgL_expz00_506, obj_t BgL_namez00_507)
	{
		{	/* Foreign/ctype.scm 161 */
			{	/* Foreign/ctype.scm 163 */
				obj_t BgL_cobjz00_693;

				BgL_cobjz00_693 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 163 */
					obj_t BgL_objz00_694;

					BgL_objz00_694 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 164 */
						obj_t BgL_bidz00_695;

						{	/* Foreign/ctype.scm 165 */
							obj_t BgL_arg1493z00_706;

							{	/* Foreign/ctype.scm 165 */
								obj_t BgL_arg1495z00_707;
								obj_t BgL_arg1497z00_708;

								{	/* Foreign/ctype.scm 165 */
									obj_t BgL_res2113z00_1635;

									{	/* Foreign/ctype.scm 165 */
										obj_t BgL_symbolz00_1633;

										BgL_symbolz00_1633 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 165 */
											obj_t BgL_arg1466z00_1634;

											BgL_arg1466z00_1634 =
												SYMBOL_TO_STRING(BgL_symbolz00_1633);
											BgL_res2113z00_1635 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1634);
									}}
									BgL_arg1495z00_707 = BgL_res2113z00_1635;
								}
								{	/* Foreign/ctype.scm 165 */
									obj_t BgL_res2114z00_1638;

									{	/* Foreign/ctype.scm 165 */
										obj_t BgL_arg1466z00_1637;

										BgL_arg1466z00_1637 = SYMBOL_TO_STRING(BgL_idz00_505);
										BgL_res2114z00_1638 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1637);
									}
									BgL_arg1497z00_708 = BgL_res2114z00_1638;
								}
								BgL_arg1493z00_706 =
									string_append(BgL_arg1495z00_707, BgL_arg1497z00_708);
							}
							BgL_bidz00_695 = bstring_to_symbol(BgL_arg1493z00_706);
						}
						{	/* Foreign/ctype.scm 165 */
							BgL_typez00_bglt BgL_ctypez00_696;

							BgL_ctypez00_696 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_505,
								BgL_namez00_507, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 166 */
								BgL_typez00_bglt BgL_btypez00_697;

								{	/* Foreign/ctype.scm 167 */
									obj_t BgL_arg1489z00_705;

									BgL_arg1489z00_705 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_objz00_694)))->BgL_namez00);
									BgL_btypez00_697 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_695,
										BgL_arg1489z00_705, CNST_TABLE_REF(((long) 12)),
										CNST_TABLE_REF(((long) 13)));
								}
								{	/* Foreign/ctype.scm 167 */

									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
										(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
										(BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_namez00_507),
											BgL_idz00_505, BgL_bidz00_695));
									{	/* Foreign/ctype.scm 173 */
										BgL_copaquez00_bglt BgL_wide1262z00_702;

										BgL_wide1262z00_702 =
											((BgL_copaquez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_copaquez00_bgl))));
										{	/* Foreign/ctype.scm 173 */
											obj_t BgL_auxz00_5244;
											BgL_objectz00_bglt BgL_tmpz00_5241;

											BgL_auxz00_5244 = ((obj_t) BgL_wide1262z00_702);
											BgL_tmpz00_5241 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_696));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5241, BgL_auxz00_5244);
										}
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_ctypez00_696));
										{	/* Foreign/ctype.scm 173 */
											long BgL_arg1477z00_703;

											{	/* Foreign/ctype.scm 173 */
												long BgL_res2116z00_1644;

												BgL_res2116z00_1644 =
													BGL_CLASS_INDEX(BGl_copaquez00zzforeign_ctypez00);
												BgL_arg1477z00_703 = BgL_res2116z00_1644;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_ctypez00_696)),
												BgL_arg1477z00_703);
										}
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_696));
									}
									{
										BgL_copaquez00_bglt BgL_auxz00_5255;

										{
											obj_t BgL_auxz00_5256;

											{	/* Foreign/ctype.scm 173 */
												BgL_objectz00_bglt BgL_tmpz00_5257;

												BgL_tmpz00_5257 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_ctypez00_696));
												BgL_auxz00_5256 = BGL_OBJECT_WIDENING(BgL_tmpz00_5257);
											}
											BgL_auxz00_5255 = ((BgL_copaquez00_bglt) BgL_auxz00_5256);
										}
										((((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_5255))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btypez00_697), BUNSPEC);
									}
									((BgL_typez00_bglt) BgL_ctypez00_696);
									return BgL_ctypez00_696;
								}
							}
						}
					}
				}
			}
		}

	}



/* declare-c-function! */
	BgL_typez00_bglt BGl_declarezd2czd2functionz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_508, obj_t BgL_expz00_509, obj_t BgL_namez00_510)
	{
		{	/* Foreign/ctype.scm 179 */
			{	/* Foreign/ctype.scm 181 */
				obj_t BgL_cobjz00_709;

				BgL_cobjz00_709 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 181 */
					obj_t BgL_objz00_710;

					BgL_objz00_710 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 182 */
						obj_t BgL_bidz00_711;

						{	/* Foreign/ctype.scm 183 */
							obj_t BgL_arg1558z00_741;

							{	/* Foreign/ctype.scm 183 */
								obj_t BgL_arg1561z00_742;
								obj_t BgL_arg1564z00_743;

								{	/* Foreign/ctype.scm 183 */
									obj_t BgL_res2117z00_1650;

									{	/* Foreign/ctype.scm 183 */
										obj_t BgL_symbolz00_1648;

										BgL_symbolz00_1648 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 183 */
											obj_t BgL_arg1466z00_1649;

											BgL_arg1466z00_1649 =
												SYMBOL_TO_STRING(BgL_symbolz00_1648);
											BgL_res2117z00_1650 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1649);
									}}
									BgL_arg1561z00_742 = BgL_res2117z00_1650;
								}
								{	/* Foreign/ctype.scm 183 */
									obj_t BgL_res2118z00_1653;

									{	/* Foreign/ctype.scm 183 */
										obj_t BgL_arg1466z00_1652;

										BgL_arg1466z00_1652 = SYMBOL_TO_STRING(BgL_idz00_508);
										BgL_res2118z00_1653 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1652);
									}
									BgL_arg1564z00_743 = BgL_res2118z00_1653;
								}
								BgL_arg1558z00_741 =
									string_append(BgL_arg1561z00_742, BgL_arg1564z00_743);
							}
							BgL_bidz00_711 = bstring_to_symbol(BgL_arg1558z00_741);
						}
						{	/* Foreign/ctype.scm 183 */
							BgL_typez00_bglt BgL_ctypez00_712;

							BgL_ctypez00_712 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_508,
								BgL_namez00_510, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 184 */
								BgL_typez00_bglt BgL_btypez00_713;

								{	/* Foreign/ctype.scm 185 */
									obj_t BgL_arg1553z00_740;

									BgL_arg1553z00_740 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_objz00_710)))->BgL_namez00);
									BgL_btypez00_713 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_711,
										BgL_arg1553z00_740, CNST_TABLE_REF(((long) 12)),
										CNST_TABLE_REF(((long) 13)));
								}
								{	/* Foreign/ctype.scm 185 */
									long BgL_arityz00_714;

									BgL_arityz00_714 =
										BGl_foreignzd2arityzd2zztools_argsz00(CAR(CDR(CDR
												(BgL_expz00_509))));
									{	/* Foreign/ctype.scm 186 */
										obj_t BgL_treszd2idzd2_715;

										BgL_treszd2idzd2_715 = CAR(CDR(BgL_expz00_509));
										{	/* Foreign/ctype.scm 187 */
											obj_t BgL_targszd2idzd2_716;

											BgL_targszd2idzd2_716 =
												BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(CAR(CDR
													(CDR(BgL_expz00_509))));
											{	/* Foreign/ctype.scm 188 */
												obj_t BgL_locz00_717;

												BgL_locz00_717 =
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_expz00_509);
												{	/* Foreign/ctype.scm 189 */

													BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
														(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
														(BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_510), BgL_idz00_508,
															BgL_bidz00_711));
													{	/* Foreign/ctype.scm 195 */
														BgL_cfunctionz00_bglt BgL_wide1266z00_722;

														BgL_wide1266z00_722 =
															((BgL_cfunctionz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_cfunctionz00_bgl))));
														{	/* Foreign/ctype.scm 195 */
															obj_t BgL_auxz00_5297;
															BgL_objectz00_bglt BgL_tmpz00_5294;

															BgL_auxz00_5297 = ((obj_t) BgL_wide1266z00_722);
															BgL_tmpz00_5294 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_ctypez00_712));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5294,
																BgL_auxz00_5297);
														}
														((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_ctypez00_712));
														{	/* Foreign/ctype.scm 195 */
															long BgL_arg1528z00_723;

															{	/* Foreign/ctype.scm 195 */
																long BgL_res2120z00_1675;

																BgL_res2120z00_1675 =
																	BGL_CLASS_INDEX
																	(BGl_cfunctionz00zzforeign_ctypez00);
																BgL_arg1528z00_723 = BgL_res2120z00_1675;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_712)),
																BgL_arg1528z00_723);
														}
														((BgL_typez00_bglt)
															((BgL_typez00_bglt) BgL_ctypez00_712));
													}
													{
														BgL_cfunctionz00_bglt BgL_auxz00_5308;

														{
															obj_t BgL_auxz00_5309;

															{	/* Foreign/ctype.scm 196 */
																BgL_objectz00_bglt BgL_tmpz00_5310;

																BgL_tmpz00_5310 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_712));
																BgL_auxz00_5309 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5310);
															}
															BgL_auxz00_5308 =
																((BgL_cfunctionz00_bglt) BgL_auxz00_5309);
														}
														((((BgL_cfunctionz00_bglt)
																	COBJECT(BgL_auxz00_5308))->BgL_btypez00) =
															((BgL_typez00_bglt) BgL_btypez00_713), BUNSPEC);
													}
													{
														BgL_cfunctionz00_bglt BgL_auxz00_5316;

														{
															obj_t BgL_auxz00_5317;

															{	/* Foreign/ctype.scm 197 */
																BgL_objectz00_bglt BgL_tmpz00_5318;

																BgL_tmpz00_5318 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_712));
																BgL_auxz00_5317 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5318);
															}
															BgL_auxz00_5316 =
																((BgL_cfunctionz00_bglt) BgL_auxz00_5317);
														}
														((((BgL_cfunctionz00_bglt)
																	COBJECT(BgL_auxz00_5316))->BgL_arityz00) =
															((long) BgL_arityz00_714), BUNSPEC);
													}
													{
														BgL_cfunctionz00_bglt BgL_auxz00_5324;

														{
															obj_t BgL_auxz00_5325;

															{	/* Foreign/ctype.scm 198 */
																BgL_objectz00_bglt BgL_tmpz00_5326;

																BgL_tmpz00_5326 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_712));
																BgL_auxz00_5325 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5326);
															}
															BgL_auxz00_5324 =
																((BgL_cfunctionz00_bglt) BgL_auxz00_5325);
														}
														((((BgL_cfunctionz00_bglt)
																	COBJECT(BgL_auxz00_5324))->
																BgL_typezd2reszd2) =
															((BgL_typez00_bglt)
																BGl_usezd2typez12zc0zztype_envz00
																(BgL_treszd2idzd2_715, BgL_locz00_717)),
															BUNSPEC);
													}
													{
														obj_t BgL_auxz00_5340;
														BgL_cfunctionz00_bglt BgL_auxz00_5333;

														if (NULLP(BgL_targszd2idzd2_716))
															{	/* Foreign/ctype.scm 199 */
																BgL_auxz00_5340 = BNIL;
															}
														else
															{	/* Foreign/ctype.scm 199 */
																obj_t BgL_head1321z00_727;

																{	/* Foreign/ctype.scm 199 */
																	obj_t BgL_res2122z00_1683;

																	BgL_res2122z00_1683 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1321z00_727 = BgL_res2122z00_1683;
																}
																{
																	obj_t BgL_l1319z00_729;
																	obj_t BgL_tail1322z00_730;

																	BgL_l1319z00_729 = BgL_targszd2idzd2_716;
																	BgL_tail1322z00_730 = BgL_head1321z00_727;
																BgL_zc3z04anonymousza31530ze3z87_731:
																	if (NULLP(BgL_l1319z00_729))
																		{	/* Foreign/ctype.scm 199 */
																			BgL_auxz00_5340 =
																				CDR(BgL_head1321z00_727);
																		}
																	else
																		{	/* Foreign/ctype.scm 199 */
																			obj_t BgL_newtail1323z00_733;

																			{	/* Foreign/ctype.scm 199 */
																				BgL_typez00_bglt BgL_arg1537z00_735;

																				{	/* Foreign/ctype.scm 199 */
																					obj_t BgL_az00_736;

																					BgL_az00_736 =
																						CAR(((obj_t) BgL_l1319z00_729));
																					BgL_arg1537z00_735 =
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_az00_736, BgL_locz00_717);
																				}
																				{	/* Foreign/ctype.scm 199 */
																					obj_t BgL_res2124z00_1687;

																					BgL_res2124z00_1687 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg1537z00_735), BNIL);
																					BgL_newtail1323z00_733 =
																						BgL_res2124z00_1687;
																				}
																			}
																			SET_CDR(BgL_tail1322z00_730,
																				BgL_newtail1323z00_733);
																			{	/* Foreign/ctype.scm 199 */
																				obj_t BgL_arg1536z00_734;

																				BgL_arg1536z00_734 =
																					CDR(((obj_t) BgL_l1319z00_729));
																				{
																					obj_t BgL_tail1322z00_5356;
																					obj_t BgL_l1319z00_5355;

																					BgL_l1319z00_5355 =
																						BgL_arg1536z00_734;
																					BgL_tail1322z00_5356 =
																						BgL_newtail1323z00_733;
																					BgL_tail1322z00_730 =
																						BgL_tail1322z00_5356;
																					BgL_l1319z00_729 = BgL_l1319z00_5355;
																					goto
																						BgL_zc3z04anonymousza31530ze3z87_731;
																				}
																			}
																		}
																}
															}
														{
															obj_t BgL_auxz00_5334;

															{	/* Foreign/ctype.scm 199 */
																BgL_objectz00_bglt BgL_tmpz00_5335;

																BgL_tmpz00_5335 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_712));
																BgL_auxz00_5334 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5335);
															}
															BgL_auxz00_5333 =
																((BgL_cfunctionz00_bglt) BgL_auxz00_5334);
														}
														((((BgL_cfunctionz00_bglt)
																	COBJECT(BgL_auxz00_5333))->
																BgL_typezd2argszd2) =
															((obj_t) BgL_auxz00_5340), BUNSPEC);
													}
													((BgL_typez00_bglt) BgL_ctypez00_712);
													return BgL_ctypez00_712;
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



/* declare-c-pointer! */
	BgL_typez00_bglt BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_511, obj_t BgL_expz00_512, obj_t BgL_namez00_513)
	{
		{	/* Foreign/ctype.scm 205 */
			{	/* Foreign/ctype.scm 207 */
				BgL_typez00_bglt BgL_pointedz00_744;

				BgL_pointedz00_744 =
					BGl_findzd2typezd2zztype_envz00(CAR(CDR(BgL_expz00_512)));
				{	/* Foreign/ctype.scm 207 */
					obj_t BgL_pointerz00_745;

					BgL_pointerz00_745 =
						(((BgL_typez00_bglt) COBJECT(BgL_pointedz00_744))->
						BgL_pointedzd2tozd2byz00);
					{	/* Foreign/ctype.scm 208 */

						if (BGl_isazf3zf3zz__objectz00(BgL_pointerz00_745,
								BGl_typez00zztype_typez00))
							{	/* Foreign/ctype.scm 212 */
								BgL_typez00_bglt BgL_aliasz00_747;

								{	/* Foreign/ctype.scm 213 */
									obj_t BgL_arg1588z00_757;
									obj_t BgL_arg1589z00_758;

									BgL_arg1588z00_757 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_pointerz00_745)))->BgL_idz00);
									BgL_arg1589z00_758 =
										BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
										(BgL_pointedz00_744);
									BgL_aliasz00_747 =
										BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
										(BgL_idz00_511, BgL_arg1588z00_757, BgL_arg1589z00_758);
								}
								{	/* Foreign/ctype.scm 215 */
									bool_t BgL_test2609z00_5369;

									if ((CAR(BgL_expz00_512) == CNST_TABLE_REF(((long) 4))))
										{	/* Foreign/ctype.scm 215 */
											bool_t BgL_test2611z00_5374;

											{
												BgL_cptrz00_bglt BgL_auxz00_5375;

												{
													obj_t BgL_auxz00_5376;

													{	/* Foreign/ctype.scm 215 */
														BgL_objectz00_bglt BgL_tmpz00_5377;

														BgL_tmpz00_5377 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt)
																((BgL_typez00_bglt) BgL_pointerz00_745)));
														BgL_auxz00_5376 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5377);
													}
													BgL_auxz00_5375 =
														((BgL_cptrz00_bglt) BgL_auxz00_5376);
												}
												BgL_test2611z00_5374 =
													(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_5375))->
													BgL_arrayzf3zf3);
											}
											if (BgL_test2611z00_5374)
												{	/* Foreign/ctype.scm 215 */
													BgL_test2609z00_5369 = ((bool_t) 0);
												}
											else
												{	/* Foreign/ctype.scm 215 */
													BgL_test2609z00_5369 = ((bool_t) 1);
												}
										}
									else
										{	/* Foreign/ctype.scm 215 */
											BgL_test2609z00_5369 = ((bool_t) 0);
										}
									if (BgL_test2609z00_5369)
										{	/* Foreign/ctype.scm 215 */
											((((BgL_typez00_bglt) COBJECT(BgL_aliasz00_747))->
													BgL_siza7eza7) =
												((obj_t)
													BGl_stringzd2sanszd2z42z42zztype_toolsz00
													(BgL_namez00_513)), BUNSPEC);
											{
												BgL_caliasz00_bglt BgL_auxz00_5386;

												{
													obj_t BgL_auxz00_5387;

													{	/* Foreign/ctype.scm 218 */
														BgL_objectz00_bglt BgL_tmpz00_5388;

														BgL_tmpz00_5388 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_aliasz00_747));
														BgL_auxz00_5387 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5388);
													}
													BgL_auxz00_5386 =
														((BgL_caliasz00_bglt) BgL_auxz00_5387);
												}
												((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_5386))->
														BgL_arrayzf3zf3) =
													((bool_t) ((bool_t) 1)), BUNSPEC);
											}
										}
									else
										{	/* Foreign/ctype.scm 215 */
											BFALSE;
										}
								}
								return BgL_aliasz00_747;
							}
						else
							{	/* Foreign/ctype.scm 222 */
								obj_t BgL_cobjz00_759;

								BgL_cobjz00_759 = BGl_za2cobjza2z00zztype_cachez00;
								{	/* Foreign/ctype.scm 222 */
									obj_t BgL_objz00_760;

									BgL_objz00_760 = BGl_za2objza2z00zztype_cachez00;
									{	/* Foreign/ctype.scm 223 */
										obj_t BgL_nobjz00_761;

										BgL_nobjz00_761 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_objz00_760)))->BgL_namez00);
										{	/* Foreign/ctype.scm 224 */
											obj_t BgL_bidz00_762;

											{	/* Foreign/ctype.scm 225 */
												obj_t BgL_arg1605z00_775;

												{	/* Foreign/ctype.scm 225 */
													obj_t BgL_arg1606z00_776;
													obj_t BgL_arg1611z00_777;

													{	/* Foreign/ctype.scm 225 */
														obj_t BgL_res2126z00_1707;

														{	/* Foreign/ctype.scm 225 */
															obj_t BgL_symbolz00_1705;

															BgL_symbolz00_1705 = CNST_TABLE_REF(((long) 10));
															{	/* Foreign/ctype.scm 225 */
																obj_t BgL_arg1466z00_1706;

																BgL_arg1466z00_1706 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1705);
																BgL_res2126z00_1707 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_1706);
														}}
														BgL_arg1606z00_776 = BgL_res2126z00_1707;
													}
													{	/* Foreign/ctype.scm 225 */
														obj_t BgL_res2127z00_1710;

														{	/* Foreign/ctype.scm 225 */
															obj_t BgL_arg1466z00_1709;

															BgL_arg1466z00_1709 =
																SYMBOL_TO_STRING(BgL_idz00_511);
															BgL_res2127z00_1710 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1709);
														}
														BgL_arg1611z00_777 = BgL_res2127z00_1710;
													}
													BgL_arg1605z00_775 =
														string_append(BgL_arg1606z00_776,
														BgL_arg1611z00_777);
												}
												BgL_bidz00_762 = bstring_to_symbol(BgL_arg1605z00_775);
											}
											{	/* Foreign/ctype.scm 225 */
												obj_t BgL_tnamez00_763;

												BgL_tnamez00_763 =
													BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
													(BgL_pointedz00_744);
												{	/* Foreign/ctype.scm 226 */
													BgL_typez00_bglt BgL_ctypez00_764;

													BgL_ctypez00_764 =
														BGl_declarezd2subtypez12zc0zztype_envz00
														(BgL_idz00_511, BgL_tnamez00_763,
														CNST_TABLE_REF(((long) 11)),
														CNST_TABLE_REF(((long) 9)));
													{	/* Foreign/ctype.scm 227 */
														BgL_typez00_bglt BgL_btypez00_765;

														BgL_btypez00_765 =
															BGl_declarezd2subtypez12zc0zztype_envz00
															(BgL_bidz00_762, BgL_nobjz00_761,
															CNST_TABLE_REF(((long) 12)),
															CNST_TABLE_REF(((long) 13)));
														{	/* Foreign/ctype.scm 228 */

															((((BgL_typez00_bglt) COBJECT(BgL_ctypez00_764))->
																	BgL_siza7eza7) =
																((obj_t)
																	BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_namez00_513)), BUNSPEC);
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
																(BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_namez00_513), BgL_idz00_511,
																	BgL_bidz00_762));
															((((BgL_typez00_bglt)
																		COBJECT(BgL_pointedz00_744))->
																	BgL_pointedzd2tozd2byz00) =
																((obj_t) ((obj_t) BgL_ctypez00_764)), BUNSPEC);
															{	/* Foreign/ctype.scm 238 */
																BgL_cptrz00_bglt BgL_wide1270z00_771;

																BgL_wide1270z00_771 =
																	((BgL_cptrz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_cptrz00_bgl))));
																{	/* Foreign/ctype.scm 238 */
																	obj_t BgL_auxz00_5421;
																	BgL_objectz00_bglt BgL_tmpz00_5418;

																	BgL_auxz00_5421 =
																		((obj_t) BgL_wide1270z00_771);
																	BgL_tmpz00_5418 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_ctypez00_764));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5418,
																		BgL_auxz00_5421);
																}
																((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_764));
																{	/* Foreign/ctype.scm 238 */
																	long BgL_arg1599z00_772;

																	{	/* Foreign/ctype.scm 238 */
																		long BgL_res2129z00_1717;

																		BgL_res2129z00_1717 =
																			BGL_CLASS_INDEX
																			(BGl_cptrz00zzforeign_ctypez00);
																		BgL_arg1599z00_772 = BgL_res2129z00_1717;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_ctypez00_764)),
																		BgL_arg1599z00_772);
																}
																((BgL_typez00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_764));
															}
															{
																BgL_cptrz00_bglt BgL_auxz00_5432;

																{
																	obj_t BgL_auxz00_5433;

																	{	/* Foreign/ctype.scm 239 */
																		BgL_objectz00_bglt BgL_tmpz00_5434;

																		BgL_tmpz00_5434 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_ctypez00_764));
																		BgL_auxz00_5433 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5434);
																	}
																	BgL_auxz00_5432 =
																		((BgL_cptrz00_bglt) BgL_auxz00_5433);
																}
																((((BgL_cptrz00_bglt)
																			COBJECT(BgL_auxz00_5432))->BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btypez00_765),
																	BUNSPEC);
															}
															{
																BgL_cptrz00_bglt BgL_auxz00_5440;

																{
																	obj_t BgL_auxz00_5441;

																	{	/* Foreign/ctype.scm 240 */
																		BgL_objectz00_bglt BgL_tmpz00_5442;

																		BgL_tmpz00_5442 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_ctypez00_764));
																		BgL_auxz00_5441 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5442);
																	}
																	BgL_auxz00_5440 =
																		((BgL_cptrz00_bglt) BgL_auxz00_5441);
																}
																((((BgL_cptrz00_bglt)
																			COBJECT(BgL_auxz00_5440))->
																		BgL_pointzd2tozd2) =
																	((BgL_typez00_bglt) BgL_pointedz00_744),
																	BUNSPEC);
															}
															{
																BgL_cptrz00_bglt BgL_auxz00_5448;

																{
																	obj_t BgL_auxz00_5449;

																	{	/* Foreign/ctype.scm 241 */
																		BgL_objectz00_bglt BgL_tmpz00_5450;

																		BgL_tmpz00_5450 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_ctypez00_764));
																		BgL_auxz00_5449 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5450);
																	}
																	BgL_auxz00_5448 =
																		((BgL_cptrz00_bglt) BgL_auxz00_5449);
																}
																((((BgL_cptrz00_bglt)
																			COBJECT(BgL_auxz00_5448))->
																		BgL_arrayzf3zf3) =
																	((bool_t) (CAR(BgL_expz00_512) ==
																			CNST_TABLE_REF(((long) 4)))), BUNSPEC);
															}
															((BgL_typez00_bglt) BgL_ctypez00_764);
															return BgL_ctypez00_764;
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



/* declare-c-struct! */
	BgL_typez00_bglt BGl_declarezd2czd2structz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_514, obj_t BgL_expz00_515, obj_t BgL_namez00_516)
	{
		{	/* Foreign/ctype.scm 247 */
			{	/* Foreign/ctype.scm 249 */
				obj_t BgL_cobjz00_779;

				BgL_cobjz00_779 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 249 */
					obj_t BgL_objz00_780;

					BgL_objz00_780 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 250 */
						obj_t BgL_bidz00_781;

						{	/* Foreign/ctype.scm 251 */
							obj_t BgL_arg1644z00_797;

							{	/* Foreign/ctype.scm 251 */
								obj_t BgL_arg1652z00_798;
								obj_t BgL_arg1662z00_799;

								{	/* Foreign/ctype.scm 251 */
									obj_t BgL_res2130z00_1726;

									{	/* Foreign/ctype.scm 251 */
										obj_t BgL_symbolz00_1724;

										BgL_symbolz00_1724 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 251 */
											obj_t BgL_arg1466z00_1725;

											BgL_arg1466z00_1725 =
												SYMBOL_TO_STRING(BgL_symbolz00_1724);
											BgL_res2130z00_1726 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1725);
									}}
									BgL_arg1652z00_798 = BgL_res2130z00_1726;
								}
								{	/* Foreign/ctype.scm 251 */
									obj_t BgL_res2131z00_1729;

									{	/* Foreign/ctype.scm 251 */
										obj_t BgL_arg1466z00_1728;

										BgL_arg1466z00_1728 = SYMBOL_TO_STRING(BgL_idz00_514);
										BgL_res2131z00_1729 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1728);
									}
									BgL_arg1662z00_799 = BgL_res2131z00_1729;
								}
								BgL_arg1644z00_797 =
									string_append(BgL_arg1652z00_798, BgL_arg1662z00_799);
							}
							BgL_bidz00_781 = bstring_to_symbol(BgL_arg1644z00_797);
						}
						{	/* Foreign/ctype.scm 251 */
							BgL_typez00_bglt BgL_ctypez00_782;

							BgL_ctypez00_782 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_514,
								BgL_namez00_516, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 252 */

								((((BgL_typez00_bglt) COBJECT(BgL_ctypez00_782))->
										BgL_siza7eza7) = ((obj_t) BgL_namez00_516), BUNSPEC);
								{	/* Foreign/ctype.scm 255 */
									BgL_cstructz00_bglt BgL_wide1274z00_785;

									BgL_wide1274z00_785 =
										((BgL_cstructz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_cstructz00_bgl))));
									{	/* Foreign/ctype.scm 255 */
										obj_t BgL_auxz00_5475;
										BgL_objectz00_bglt BgL_tmpz00_5472;

										BgL_auxz00_5475 = ((obj_t) BgL_wide1274z00_785);
										BgL_tmpz00_5472 =
											((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_ctypez00_782));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5472, BgL_auxz00_5475);
									}
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_782));
									{	/* Foreign/ctype.scm 255 */
										long BgL_arg1613z00_786;

										{	/* Foreign/ctype.scm 255 */
											long BgL_res2133z00_1735;

											BgL_res2133z00_1735 =
												BGL_CLASS_INDEX(BGl_cstructz00zzforeign_ctypez00);
											BgL_arg1613z00_786 = BgL_res2133z00_1735;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_782)),
											BgL_arg1613z00_786);
									}
									((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_782));
								}
								{
									BgL_cstructz00_bglt BgL_auxz00_5486;

									{
										obj_t BgL_auxz00_5487;

										{	/* Foreign/ctype.scm 256 */
											BgL_objectz00_bglt BgL_tmpz00_5488;

											BgL_tmpz00_5488 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_782));
											BgL_auxz00_5487 = BGL_OBJECT_WIDENING(BgL_tmpz00_5488);
										}
										BgL_auxz00_5486 = ((BgL_cstructz00_bglt) BgL_auxz00_5487);
									}
									((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_5486))->
											BgL_structzf3zf3) =
										((bool_t) (CAR(BgL_expz00_515) ==
												CNST_TABLE_REF(((long) 5)))), BUNSPEC);
								}
								{
									BgL_cstructz00_bglt BgL_auxz00_5497;

									{
										obj_t BgL_auxz00_5498;

										{	/* Foreign/ctype.scm 257 */
											BgL_objectz00_bglt BgL_tmpz00_5499;

											BgL_tmpz00_5499 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_782));
											BgL_auxz00_5498 = BGL_OBJECT_WIDENING(BgL_tmpz00_5499);
										}
										BgL_auxz00_5497 = ((BgL_cstructz00_bglt) BgL_auxz00_5498);
									}
									((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_5497))->
											BgL_fieldsz00) = ((obj_t) CDR(BgL_expz00_515)), BUNSPEC);
								}
								{
									BgL_cstructz00_bglt BgL_auxz00_5506;

									{
										obj_t BgL_auxz00_5507;

										{	/* Foreign/ctype.scm 257 */
											BgL_objectz00_bglt BgL_tmpz00_5508;

											BgL_tmpz00_5508 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_ctypez00_782));
											BgL_auxz00_5507 = BGL_OBJECT_WIDENING(BgL_tmpz00_5508);
										}
										BgL_auxz00_5506 = ((BgL_cstructz00_bglt) BgL_auxz00_5507);
									}
									((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_5506))->
											BgL_cstructza2za2) = ((obj_t) BFALSE), BUNSPEC);
								}
								((BgL_typez00_bglt) BgL_ctypez00_782);
								{	/* Foreign/ctype.scm 259 */
									obj_t BgL_ptrzd2idzd2_789;

									{	/* Foreign/ctype.scm 259 */
										obj_t BgL_arg1639z00_794;

										{	/* Foreign/ctype.scm 259 */
											obj_t BgL_arg1640z00_795;
											obj_t BgL_arg1641z00_796;

											{	/* Foreign/ctype.scm 259 */
												obj_t BgL_res2134z00_1745;

												{	/* Foreign/ctype.scm 259 */
													obj_t BgL_arg1466z00_1744;

													BgL_arg1466z00_1744 = SYMBOL_TO_STRING(BgL_idz00_514);
													BgL_res2134z00_1745 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1744);
												}
												BgL_arg1640z00_795 = BgL_res2134z00_1745;
											}
											{	/* Foreign/ctype.scm 259 */
												obj_t BgL_res2135z00_1748;

												{	/* Foreign/ctype.scm 259 */
													obj_t BgL_symbolz00_1746;

													BgL_symbolz00_1746 = CNST_TABLE_REF(((long) 14));
													{	/* Foreign/ctype.scm 259 */
														obj_t BgL_arg1466z00_1747;

														BgL_arg1466z00_1747 =
															SYMBOL_TO_STRING(BgL_symbolz00_1746);
														BgL_res2135z00_1748 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1747);
												}}
												BgL_arg1641z00_796 = BgL_res2135z00_1748;
											}
											BgL_arg1639z00_794 =
												string_append(BgL_arg1640z00_795, BgL_arg1641z00_796);
										}
										BgL_ptrzd2idzd2_789 = bstring_to_symbol(BgL_arg1639z00_794);
									}
									{	/* Foreign/ctype.scm 261 */
										obj_t BgL_arg1626z00_790;
										obj_t BgL_arg1627z00_791;

										{	/* Foreign/ctype.scm 261 */
											obj_t BgL_arg1631z00_792;
											obj_t BgL_arg1634z00_793;

											BgL_arg1631z00_792 = CAR(BgL_expz00_515);
											BgL_arg1634z00_793 = MAKE_YOUNG_PAIR(BgL_idz00_514, BNIL);
											BgL_arg1626z00_790 =
												MAKE_YOUNG_PAIR(BgL_arg1631z00_792, BgL_arg1634z00_793);
										}
										BgL_arg1627z00_791 =
											BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
											(BgL_ctypez00_782);
										return
											BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00
											(BgL_ptrzd2idzd2_789, BgL_arg1626z00_790,
											BgL_arg1627z00_791);
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* declare-c-struct*! */
	BgL_typez00_bglt BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00(obj_t
		BgL_idz00_517, obj_t BgL_expz00_518, obj_t BgL_namez00_519)
	{
		{	/* Foreign/ctype.scm 267 */
			{	/* Foreign/ctype.scm 269 */
				BgL_typez00_bglt BgL_structz00_800;

				BgL_structz00_800 =
					BGl_findzd2typezd2zztype_envz00(CAR(CDR(BgL_expz00_518)));
				{	/* Foreign/ctype.scm 269 */
					obj_t BgL_structza2za2_801;

					{
						BgL_cstructz00_bglt BgL_auxz00_5530;

						{
							obj_t BgL_auxz00_5531;

							{	/* Foreign/ctype.scm 270 */
								BgL_objectz00_bglt BgL_tmpz00_5532;

								BgL_tmpz00_5532 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_structz00_800));
								BgL_auxz00_5531 = BGL_OBJECT_WIDENING(BgL_tmpz00_5532);
							}
							BgL_auxz00_5530 = ((BgL_cstructz00_bglt) BgL_auxz00_5531);
						}
						BgL_structza2za2_801 =
							(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_5530))->
							BgL_cstructza2za2);
					}
					{	/* Foreign/ctype.scm 270 */

						if (BGl_isazf3zf3zz__objectz00(BgL_structza2za2_801,
								BGl_cstructza2za2zzforeign_ctypez00))
							{	/* Foreign/ctype.scm 274 */
								obj_t BgL_arg1664z00_803;

								BgL_arg1664z00_803 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt)
												((BgL_typez00_bglt) BgL_structza2za2_801))))->
									BgL_idz00);
								return
									BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(BgL_idz00_517,
									BgL_arg1664z00_803, BgL_namez00_519);
							}
						else
							{	/* Foreign/ctype.scm 276 */
								obj_t BgL_cobjz00_804;

								BgL_cobjz00_804 = BGl_za2cobjza2z00zztype_cachez00;
								{	/* Foreign/ctype.scm 276 */
									obj_t BgL_objz00_805;

									BgL_objz00_805 = BGl_za2objza2z00zztype_cachez00;
									{	/* Foreign/ctype.scm 277 */
										obj_t BgL_nobjz00_806;

										BgL_nobjz00_806 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_objz00_805)))->BgL_namez00);
										{	/* Foreign/ctype.scm 278 */
											obj_t BgL_bidz00_807;

											{	/* Foreign/ctype.scm 279 */
												obj_t BgL_arg1686z00_819;

												{	/* Foreign/ctype.scm 279 */
													obj_t BgL_arg1687z00_820;
													obj_t BgL_arg1688z00_821;

													{	/* Foreign/ctype.scm 279 */
														obj_t BgL_res2138z00_1763;

														{	/* Foreign/ctype.scm 279 */
															obj_t BgL_symbolz00_1761;

															BgL_symbolz00_1761 = CNST_TABLE_REF(((long) 10));
															{	/* Foreign/ctype.scm 279 */
																obj_t BgL_arg1466z00_1762;

																BgL_arg1466z00_1762 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1761);
																BgL_res2138z00_1763 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_1762);
														}}
														BgL_arg1687z00_820 = BgL_res2138z00_1763;
													}
													{	/* Foreign/ctype.scm 279 */
														obj_t BgL_res2139z00_1766;

														{	/* Foreign/ctype.scm 279 */
															obj_t BgL_arg1466z00_1765;

															BgL_arg1466z00_1765 =
																SYMBOL_TO_STRING(BgL_idz00_517);
															BgL_res2139z00_1766 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1765);
														}
														BgL_arg1688z00_821 = BgL_res2139z00_1766;
													}
													BgL_arg1686z00_819 =
														string_append(BgL_arg1687z00_820,
														BgL_arg1688z00_821);
												}
												BgL_bidz00_807 = bstring_to_symbol(BgL_arg1686z00_819);
											}
											{	/* Foreign/ctype.scm 279 */
												BgL_typez00_bglt BgL_ctypez00_808;

												BgL_ctypez00_808 =
													BGl_declarezd2subtypez12zc0zztype_envz00
													(BgL_idz00_517, BgL_namez00_519,
													CNST_TABLE_REF(((long) 11)),
													CNST_TABLE_REF(((long) 9)));
												{	/* Foreign/ctype.scm 280 */
													BgL_typez00_bglt BgL_btypez00_809;

													BgL_btypez00_809 =
														BGl_declarezd2subtypez12zc0zztype_envz00
														(BgL_bidz00_807, BgL_nobjz00_806,
														CNST_TABLE_REF(((long) 12)),
														CNST_TABLE_REF(((long) 13)));
													{	/* Foreign/ctype.scm 281 */

														((((BgL_typez00_bglt) COBJECT(BgL_ctypez00_808))->
																BgL_siza7eza7) =
															((obj_t)
																string_append_3
																(BGl_string2190z00zzforeign_ctypez00,
																	BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_namez00_519),
																	BGl_string2191z00zzforeign_ctypez00)),
															BUNSPEC);
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
															(BGl_stringzd2sanszd2z42z42zztype_toolsz00
																(BgL_namez00_519), BgL_idz00_517,
																BgL_bidz00_807));
														{
															BgL_cstructz00_bglt BgL_auxz00_5565;

															{
																obj_t BgL_auxz00_5566;

																{	/* Foreign/ctype.scm 291 */
																	BgL_objectz00_bglt BgL_tmpz00_5567;

																	BgL_tmpz00_5567 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_structz00_800));
																	BgL_auxz00_5566 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5567);
																}
																BgL_auxz00_5565 =
																	((BgL_cstructz00_bglt) BgL_auxz00_5566);
															}
															((((BgL_cstructz00_bglt)
																		COBJECT(BgL_auxz00_5565))->
																	BgL_cstructza2za2) =
																((obj_t) ((obj_t) BgL_ctypez00_808)), BUNSPEC);
														}
														{	/* Foreign/ctype.scm 293 */
															BgL_cstructza2za2_bglt BgL_wide1278z00_816;

															BgL_wide1278z00_816 =
																((BgL_cstructza2za2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cstructza2za2_bgl))));
															{	/* Foreign/ctype.scm 293 */
																obj_t BgL_auxz00_5578;
																BgL_objectz00_bglt BgL_tmpz00_5575;

																BgL_auxz00_5578 = ((obj_t) BgL_wide1278z00_816);
																BgL_tmpz00_5575 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_ctypez00_808));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5575,
																	BgL_auxz00_5578);
															}
															((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_ctypez00_808));
															{	/* Foreign/ctype.scm 293 */
																long BgL_arg1685z00_817;

																{	/* Foreign/ctype.scm 293 */
																	long BgL_res2141z00_1774;

																	BgL_res2141z00_1774 =
																		BGL_CLASS_INDEX
																		(BGl_cstructza2za2zzforeign_ctypez00);
																	BgL_arg1685z00_817 = BgL_res2141z00_1774;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_ctypez00_808)),
																	BgL_arg1685z00_817);
															}
															((BgL_typez00_bglt)
																((BgL_typez00_bglt) BgL_ctypez00_808));
														}
														{
															BgL_cstructza2za2_bglt BgL_auxz00_5589;

															{
																obj_t BgL_auxz00_5590;

																{	/* Foreign/ctype.scm 294 */
																	BgL_objectz00_bglt BgL_tmpz00_5591;

																	BgL_tmpz00_5591 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_ctypez00_808));
																	BgL_auxz00_5590 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5591);
																}
																BgL_auxz00_5589 =
																	((BgL_cstructza2za2_bglt) BgL_auxz00_5590);
															}
															((((BgL_cstructza2za2_bglt)
																		COBJECT(BgL_auxz00_5589))->BgL_btypez00) =
																((BgL_typez00_bglt) BgL_btypez00_809), BUNSPEC);
														}
														{
															BgL_cstructza2za2_bglt BgL_auxz00_5597;

															{
																obj_t BgL_auxz00_5598;

																{	/* Foreign/ctype.scm 295 */
																	BgL_objectz00_bglt BgL_tmpz00_5599;

																	BgL_tmpz00_5599 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_ctypez00_808));
																	BgL_auxz00_5598 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5599);
																}
																BgL_auxz00_5597 =
																	((BgL_cstructza2za2_bglt) BgL_auxz00_5598);
															}
															((((BgL_cstructza2za2_bglt)
																		COBJECT(BgL_auxz00_5597))->BgL_cstructz00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BgL_structz00_800)), BUNSPEC);
														}
														((BgL_typez00_bglt) BgL_ctypez00_808);
														return BgL_ctypez00_808;
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



/* make-foreign-coercers */
	obj_t BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00(obj_t
		BgL_namez00_520, obj_t BgL_idz00_521, obj_t BgL_bidz00_522)
	{
		{	/* Foreign/ctype.scm 301 */
			{	/* Foreign/ctype.scm 302 */
				obj_t BgL_idzf3zf3_823;
				obj_t BgL_idzd2ze3bidz31_824;
				obj_t BgL_bidzd2ze3idz31_825;

				{	/* Foreign/ctype.scm 302 */
					obj_t BgL_arg1851z00_901;

					{	/* Foreign/ctype.scm 302 */
						obj_t BgL_arg1852z00_902;
						obj_t BgL_arg1853z00_903;

						{	/* Foreign/ctype.scm 302 */
							obj_t BgL_res2142z00_1781;

							{	/* Foreign/ctype.scm 302 */
								obj_t BgL_arg1466z00_1780;

								BgL_arg1466z00_1780 = SYMBOL_TO_STRING(BgL_idz00_521);
								BgL_res2142z00_1781 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1780);
							}
							BgL_arg1852z00_902 = BgL_res2142z00_1781;
						}
						{	/* Foreign/ctype.scm 302 */
							obj_t BgL_res2143z00_1784;

							{	/* Foreign/ctype.scm 302 */
								obj_t BgL_symbolz00_1782;

								BgL_symbolz00_1782 = CNST_TABLE_REF(((long) 15));
								{	/* Foreign/ctype.scm 302 */
									obj_t BgL_arg1466z00_1783;

									BgL_arg1466z00_1783 = SYMBOL_TO_STRING(BgL_symbolz00_1782);
									BgL_res2143z00_1784 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1783);
							}}
							BgL_arg1853z00_903 = BgL_res2143z00_1784;
						}
						BgL_arg1851z00_901 =
							string_append(BgL_arg1852z00_902, BgL_arg1853z00_903);
					}
					BgL_idzf3zf3_823 = bstring_to_symbol(BgL_arg1851z00_901);
				}
				{	/* Foreign/ctype.scm 303 */
					obj_t BgL_list1854z00_904;

					{	/* Foreign/ctype.scm 303 */
						obj_t BgL_arg1855z00_905;

						{	/* Foreign/ctype.scm 303 */
							obj_t BgL_arg1856z00_906;

							BgL_arg1856z00_906 = MAKE_YOUNG_PAIR(BgL_bidz00_522, BNIL);
							BgL_arg1855z00_905 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
								BgL_arg1856z00_906);
						}
						BgL_list1854z00_904 =
							MAKE_YOUNG_PAIR(BgL_idz00_521, BgL_arg1855z00_905);
					}
					BgL_idzd2ze3bidz31_824 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1854z00_904);
				}
				{	/* Foreign/ctype.scm 304 */
					obj_t BgL_list1857z00_907;

					{	/* Foreign/ctype.scm 304 */
						obj_t BgL_arg1858z00_908;

						{	/* Foreign/ctype.scm 304 */
							obj_t BgL_arg1859z00_909;

							BgL_arg1859z00_909 = MAKE_YOUNG_PAIR(BgL_idz00_521, BNIL);
							BgL_arg1858z00_908 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
								BgL_arg1859z00_909);
						}
						BgL_list1857z00_907 =
							MAKE_YOUNG_PAIR(BgL_bidz00_522, BgL_arg1858z00_908);
					}
					BgL_bidzd2ze3idz31_825 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1857z00_907);
				}
				{	/* Foreign/ctype.scm 305 */
					obj_t BgL_resz00_826;

					{	/* Foreign/ctype.scm 306 */
						obj_t BgL_arg1695z00_827;

						{	/* Foreign/ctype.scm 306 */
							obj_t BgL_arg1696z00_828;
							obj_t BgL_arg1697z00_829;

							{	/* Foreign/ctype.scm 306 */
								obj_t BgL_arg1698z00_830;

								{	/* Foreign/ctype.scm 306 */
									obj_t BgL_arg1704z00_831;

									{	/* Foreign/ctype.scm 306 */
										obj_t BgL_arg1707z00_832;

										{	/* Foreign/ctype.scm 306 */
											obj_t BgL_arg1708z00_833;

											BgL_arg1708z00_833 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_arg1707z00_832 =
												MAKE_YOUNG_PAIR(BNIL, BgL_arg1708z00_833);
										}
										BgL_arg1704z00_831 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
											BgL_arg1707z00_832);
									}
									BgL_arg1698z00_830 =
										MAKE_YOUNG_PAIR(BgL_idz00_521, BgL_arg1704z00_831);
								}
								BgL_arg1696z00_828 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
									BgL_arg1698z00_830);
							}
							{	/* Foreign/ctype.scm 307 */
								obj_t BgL_arg1711z00_834;
								obj_t BgL_arg1712z00_835;

								{	/* Foreign/ctype.scm 307 */
									obj_t BgL_arg1719z00_836;

									{	/* Foreign/ctype.scm 307 */
										obj_t BgL_arg1725z00_837;

										{	/* Foreign/ctype.scm 307 */
											obj_t BgL_arg1726z00_838;

											{	/* Foreign/ctype.scm 307 */
												obj_t BgL_arg1727z00_839;

												BgL_arg1727z00_839 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_arg1726z00_838 =
													MAKE_YOUNG_PAIR(BNIL, BgL_arg1727z00_839);
											}
											BgL_arg1725z00_837 =
												MAKE_YOUNG_PAIR(BgL_idz00_521, BgL_arg1726z00_838);
										}
										BgL_arg1719z00_836 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
											BgL_arg1725z00_837);
									}
									BgL_arg1711z00_834 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
										BgL_arg1719z00_836);
								}
								{	/* Foreign/ctype.scm 308 */
									obj_t BgL_arg1728z00_840;
									obj_t BgL_arg1729z00_841;

									{	/* Foreign/ctype.scm 308 */
										obj_t BgL_arg1731z00_842;

										{	/* Foreign/ctype.scm 308 */
											obj_t BgL_arg1732z00_843;

											{	/* Foreign/ctype.scm 308 */
												obj_t BgL_arg1733z00_844;

												{	/* Foreign/ctype.scm 308 */
													obj_t BgL_arg1738z00_845;

													BgL_arg1738z00_845 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_arg1733z00_844 =
														MAKE_YOUNG_PAIR(BNIL, BgL_arg1738z00_845);
												}
												BgL_arg1732z00_843 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
													BgL_arg1733z00_844);
											}
											BgL_arg1731z00_842 =
												MAKE_YOUNG_PAIR(BgL_bidz00_522, BgL_arg1732z00_843);
										}
										BgL_arg1728z00_840 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
											BgL_arg1731z00_842);
									}
									{	/* Foreign/ctype.scm 309 */
										obj_t BgL_arg1739z00_846;
										obj_t BgL_arg1740z00_847;

										{	/* Foreign/ctype.scm 309 */
											obj_t BgL_arg1741z00_848;

											{	/* Foreign/ctype.scm 309 */
												obj_t BgL_arg1742z00_849;

												{	/* Foreign/ctype.scm 309 */
													obj_t BgL_arg1743z00_850;

													{	/* Foreign/ctype.scm 309 */
														obj_t BgL_arg1744z00_851;
														obj_t BgL_arg1745z00_852;

														BgL_arg1744z00_851 =
															MAKE_YOUNG_PAIR(BgL_idzf3zf3_823, BNIL);
														BgL_arg1745z00_852 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_arg1743z00_850 =
															MAKE_YOUNG_PAIR(BgL_arg1744z00_851,
															BgL_arg1745z00_852);
													}
													BgL_arg1742z00_849 =
														MAKE_YOUNG_PAIR(BgL_bidz00_522, BgL_arg1743z00_850);
												}
												BgL_arg1741z00_848 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
													BgL_arg1742z00_849);
											}
											BgL_arg1739z00_846 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
												BgL_arg1741z00_848);
										}
										{	/* Foreign/ctype.scm 311 */
											obj_t BgL_arg1746z00_853;
											obj_t BgL_arg1747z00_854;

											{	/* Foreign/ctype.scm 311 */
												obj_t BgL_arg1754z00_855;

												{	/* Foreign/ctype.scm 311 */
													obj_t BgL_arg1755z00_856;

													{	/* Foreign/ctype.scm 311 */
														obj_t BgL_arg1756z00_857;

														{	/* Foreign/ctype.scm 311 */
															obj_t BgL_arg1757z00_858;

															{	/* Foreign/ctype.scm 311 */
																obj_t BgL_arg1759z00_859;

																{	/* Foreign/ctype.scm 311 */
																	obj_t BgL_arg1760z00_860;

																	{	/* Foreign/ctype.scm 311 */
																		obj_t BgL_arg1761z00_861;

																		{	/* Foreign/ctype.scm 311 */
																			obj_t BgL_arg1768z00_862;
																			obj_t BgL_arg1771z00_863;

																			BgL_arg1768z00_862 =
																				MAKE_YOUNG_PAIR
																				(BGl_makezd2typedzd2identz00zzast_identz00
																				(CNST_TABLE_REF(((long) 20)),
																					BgL_idz00_521), BNIL);
																			{	/* Foreign/ctype.scm 312 */
																				obj_t BgL_arg1778z00_865;

																				{	/* Foreign/ctype.scm 312 */
																					obj_t BgL_arg1779z00_866;

																					{	/* Foreign/ctype.scm 312 */
																						obj_t BgL_arg1782z00_867;
																						obj_t BgL_arg1784z00_868;

																						{	/* Foreign/ctype.scm 312 */
																							obj_t BgL_arg1790z00_869;

																							BgL_arg1790z00_869 =
																								MAKE_YOUNG_PAIR(BgL_bidz00_522,
																								BNIL);
																							BgL_arg1782z00_867 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 21)),
																								BgL_arg1790z00_869);
																						}
																						BgL_arg1784z00_868 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 20)), BNIL);
																						BgL_arg1779z00_866 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1782z00_867,
																							BgL_arg1784z00_868);
																					}
																					BgL_arg1778z00_865 =
																						MAKE_YOUNG_PAIR
																						(BgL_idzd2ze3bidz31_824,
																						BgL_arg1779z00_866);
																				}
																				BgL_arg1771z00_863 =
																					MAKE_YOUNG_PAIR(BgL_arg1778z00_865,
																					BNIL);
																			}
																			BgL_arg1761z00_861 =
																				MAKE_YOUNG_PAIR(BgL_arg1768z00_862,
																				BgL_arg1771z00_863);
																		}
																		BgL_arg1760z00_860 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					22)), BgL_arg1761z00_861);
																	}
																	BgL_arg1759z00_859 =
																		MAKE_YOUNG_PAIR(BgL_arg1760z00_860, BNIL);
																}
																BgL_arg1757z00_858 =
																	MAKE_YOUNG_PAIR(BgL_arg1759z00_859, BNIL);
															}
															BgL_arg1756z00_857 =
																MAKE_YOUNG_PAIR(BNIL, BgL_arg1757z00_858);
														}
														BgL_arg1755z00_856 =
															MAKE_YOUNG_PAIR(BgL_bidz00_522,
															BgL_arg1756z00_857);
													}
													BgL_arg1754z00_855 =
														MAKE_YOUNG_PAIR(BgL_idz00_521, BgL_arg1755z00_856);
												}
												BgL_arg1746z00_853 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
													BgL_arg1754z00_855);
											}
											{	/* Foreign/ctype.scm 314 */
												obj_t BgL_arg1796z00_870;
												obj_t BgL_arg1798z00_871;

												{	/* Foreign/ctype.scm 314 */
													obj_t BgL_arg1801z00_872;

													{	/* Foreign/ctype.scm 314 */
														obj_t BgL_arg1808z00_873;

														{	/* Foreign/ctype.scm 314 */
															obj_t BgL_arg1809z00_874;

															{	/* Foreign/ctype.scm 314 */
																obj_t BgL_arg1811z00_875;

																{	/* Foreign/ctype.scm 314 */
																	obj_t BgL_arg1820z00_876;

																	{	/* Foreign/ctype.scm 314 */
																		obj_t BgL_arg1821z00_877;

																		{	/* Foreign/ctype.scm 314 */
																			obj_t BgL_arg1822z00_878;

																			{	/* Foreign/ctype.scm 314 */
																				obj_t BgL_arg1823z00_879;
																				obj_t BgL_arg1824z00_880;

																				BgL_arg1823z00_879 =
																					MAKE_YOUNG_PAIR
																					(BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 20)),
																						BgL_idz00_521), BNIL);
																				{	/* Foreign/ctype.scm 315 */
																					obj_t BgL_arg1826z00_882;

																					{	/* Foreign/ctype.scm 315 */
																						obj_t BgL_arg1827z00_883;

																						{	/* Foreign/ctype.scm 315 */
																							obj_t BgL_arg1828z00_884;
																							obj_t BgL_arg1829z00_885;

																							{	/* Foreign/ctype.scm 315 */
																								obj_t BgL_arg1830z00_886;

																								BgL_arg1830z00_886 =
																									MAKE_YOUNG_PAIR
																									(BgL_bidz00_522, BNIL);
																								BgL_arg1828z00_884 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 21)),
																									BgL_arg1830z00_886);
																							}
																							BgL_arg1829z00_885 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 20)), BNIL);
																							BgL_arg1827z00_883 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1828z00_884,
																								BgL_arg1829z00_885);
																						}
																						BgL_arg1826z00_882 =
																							MAKE_YOUNG_PAIR
																							(BgL_idzd2ze3bidz31_824,
																							BgL_arg1827z00_883);
																					}
																					BgL_arg1824z00_880 =
																						MAKE_YOUNG_PAIR(BgL_arg1826z00_882,
																						BNIL);
																				}
																				BgL_arg1822z00_878 =
																					MAKE_YOUNG_PAIR(BgL_arg1823z00_879,
																					BgL_arg1824z00_880);
																			}
																			BgL_arg1821z00_877 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						22)), BgL_arg1822z00_878);
																		}
																		BgL_arg1820z00_876 =
																			MAKE_YOUNG_PAIR(BgL_arg1821z00_877, BNIL);
																	}
																	BgL_arg1811z00_875 =
																		MAKE_YOUNG_PAIR(BgL_arg1820z00_876, BNIL);
																}
																BgL_arg1809z00_874 =
																	MAKE_YOUNG_PAIR(BNIL, BgL_arg1811z00_875);
															}
															BgL_arg1808z00_873 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
																BgL_arg1809z00_874);
														}
														BgL_arg1801z00_872 =
															MAKE_YOUNG_PAIR(BgL_idz00_521,
															BgL_arg1808z00_873);
													}
													BgL_arg1796z00_870 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
														BgL_arg1801z00_872);
												}
												{	/* Foreign/ctype.scm 316 */
													obj_t BgL_arg1831z00_887;
													obj_t BgL_arg1832z00_888;

													{	/* Foreign/ctype.scm 316 */
														obj_t BgL_arg1833z00_889;

														{	/* Foreign/ctype.scm 316 */
															obj_t BgL_arg1835z00_890;

															{	/* Foreign/ctype.scm 316 */
																obj_t BgL_arg1836z00_891;

																{	/* Foreign/ctype.scm 316 */
																	obj_t BgL_arg1838z00_892;

																	{	/* Foreign/ctype.scm 316 */
																		obj_t BgL_arg1840z00_893;

																		BgL_arg1840z00_893 =
																			MAKE_YOUNG_PAIR(BgL_bidzd2ze3idz31_825,
																			BNIL);
																		BgL_arg1838z00_892 =
																			MAKE_YOUNG_PAIR(BgL_arg1840z00_893, BNIL);
																	}
																	BgL_arg1836z00_891 =
																		MAKE_YOUNG_PAIR(BNIL, BgL_arg1838z00_892);
																}
																BgL_arg1835z00_890 =
																	MAKE_YOUNG_PAIR(BgL_idz00_521,
																	BgL_arg1836z00_891);
															}
															BgL_arg1833z00_889 =
																MAKE_YOUNG_PAIR(BgL_bidz00_522,
																BgL_arg1835z00_890);
														}
														BgL_arg1831z00_887 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
															BgL_arg1833z00_889);
													}
													{	/* Foreign/ctype.scm 317 */
														obj_t BgL_arg1841z00_894;

														{	/* Foreign/ctype.scm 317 */
															obj_t BgL_arg1842z00_895;

															{	/* Foreign/ctype.scm 317 */
																obj_t BgL_arg1845z00_896;

																{	/* Foreign/ctype.scm 317 */
																	obj_t BgL_arg1846z00_897;

																	{	/* Foreign/ctype.scm 317 */
																		obj_t BgL_arg1847z00_898;
																		obj_t BgL_arg1848z00_899;

																		BgL_arg1847z00_898 =
																			MAKE_YOUNG_PAIR(BgL_idzf3zf3_823, BNIL);
																		{	/* Foreign/ctype.scm 317 */
																			obj_t BgL_arg1850z00_900;

																			BgL_arg1850z00_900 =
																				MAKE_YOUNG_PAIR(BgL_bidzd2ze3idz31_825,
																				BNIL);
																			BgL_arg1848z00_899 =
																				MAKE_YOUNG_PAIR(BgL_arg1850z00_900,
																				BNIL);
																		}
																		BgL_arg1846z00_897 =
																			MAKE_YOUNG_PAIR(BgL_arg1847z00_898,
																			BgL_arg1848z00_899);
																	}
																	BgL_arg1845z00_896 =
																		MAKE_YOUNG_PAIR(BgL_idz00_521,
																		BgL_arg1846z00_897);
																}
																BgL_arg1842z00_895 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
																	BgL_arg1845z00_896);
															}
															BgL_arg1841z00_894 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																BgL_arg1842z00_895);
														}
														BgL_arg1832z00_888 =
															MAKE_YOUNG_PAIR(BgL_arg1841z00_894, BNIL);
													}
													BgL_arg1798z00_871 =
														MAKE_YOUNG_PAIR(BgL_arg1831z00_887,
														BgL_arg1832z00_888);
												}
												BgL_arg1747z00_854 =
													MAKE_YOUNG_PAIR(BgL_arg1796z00_870,
													BgL_arg1798z00_871);
											}
											BgL_arg1740z00_847 =
												MAKE_YOUNG_PAIR(BgL_arg1746z00_853, BgL_arg1747z00_854);
										}
										BgL_arg1729z00_841 =
											MAKE_YOUNG_PAIR(BgL_arg1739z00_846, BgL_arg1740z00_847);
									}
									BgL_arg1712z00_835 =
										MAKE_YOUNG_PAIR(BgL_arg1728z00_840, BgL_arg1729z00_841);
								}
								BgL_arg1697z00_829 =
									MAKE_YOUNG_PAIR(BgL_arg1711z00_834, BgL_arg1712z00_835);
							}
							BgL_arg1695z00_827 =
								MAKE_YOUNG_PAIR(BgL_arg1696z00_828, BgL_arg1697z00_829);
						}
						BgL_resz00_826 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 23)), BgL_arg1695z00_827);
					}
					return BgL_resz00_826;
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			{	/* Foreign/ctype.scm 32 */
				obj_t BgL_arg1866z00_914;
				obj_t BgL_arg1868z00_915;

				{	/* Foreign/ctype.scm 32 */
					obj_t BgL_v1324z00_952;

					BgL_v1324z00_952 = create_vector(((long) 1));
					{	/* Foreign/ctype.scm 32 */
						obj_t BgL_arg1879z00_953;

						BgL_arg1879z00_953 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2194z00zzforeign_ctypez00,
							BGl_proc2193z00zzforeign_ctypez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2192z00zzforeign_ctypez00,
							CNST_TABLE_REF(((long) 25)));
						VECTOR_SET(BgL_v1324z00_952, ((long) 0), BgL_arg1879z00_953);
					}
					BgL_arg1866z00_914 = BgL_v1324z00_952;
				}
				{	/* Foreign/ctype.scm 32 */
					obj_t BgL_v1325z00_966;

					BgL_v1325z00_966 = create_vector(((long) 0));
					BgL_arg1868z00_915 = BgL_v1325z00_966;
				}
				BGl_caliasz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 26)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
					((long) 50673), BGl_proc2198z00zzforeign_ctypez00,
					BGl_proc2197z00zzforeign_ctypez00, BFALSE,
					BGl_proc2196z00zzforeign_ctypez00, BGl_proc2195z00zzforeign_ctypez00,
					BgL_arg1866z00_914, BgL_arg1868z00_915);
			}
			{	/* Foreign/ctype.scm 36 */
				obj_t BgL_arg1892z00_975;
				obj_t BgL_arg1893z00_976;

				{	/* Foreign/ctype.scm 36 */
					obj_t BgL_v1326z00_1014;

					BgL_v1326z00_1014 = create_vector(((long) 2));
					{	/* Foreign/ctype.scm 36 */
						obj_t BgL_arg1904z00_1015;

						BgL_arg1904z00_1015 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2200z00zzforeign_ctypez00,
							BGl_proc2199z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1326z00_1014, ((long) 0), BgL_arg1904z00_1015);
					}
					{	/* Foreign/ctype.scm 36 */
						obj_t BgL_arg1909z00_1025;

						BgL_arg1909z00_1025 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc2202z00zzforeign_ctypez00,
							BGl_proc2201z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1326z00_1014, ((long) 1), BgL_arg1909z00_1025);
					}
					BgL_arg1892z00_975 = BgL_v1326z00_1014;
				}
				{	/* Foreign/ctype.scm 36 */
					obj_t BgL_v1327z00_1035;

					BgL_v1327z00_1035 = create_vector(((long) 0));
					BgL_arg1893z00_976 = BgL_v1327z00_1035;
				}
				BGl_cenumz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 31)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
					((long) 47919), BGl_proc2206z00zzforeign_ctypez00,
					BGl_proc2205z00zzforeign_ctypez00, BFALSE,
					BGl_proc2204z00zzforeign_ctypez00, BGl_proc2203z00zzforeign_ctypez00,
					BgL_arg1892z00_975, BgL_arg1893z00_976);
			}
			{	/* Foreign/ctype.scm 42 */
				obj_t BgL_arg1918z00_1044;
				obj_t BgL_arg1919z00_1045;

				{	/* Foreign/ctype.scm 42 */
					obj_t BgL_v1328z00_1082;

					BgL_v1328z00_1082 = create_vector(((long) 1));
					{	/* Foreign/ctype.scm 42 */
						obj_t BgL_arg1931z00_1083;

						BgL_arg1931z00_1083 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2208z00zzforeign_ctypez00,
							BGl_proc2207z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1328z00_1082, ((long) 0), BgL_arg1931z00_1083);
					}
					BgL_arg1918z00_1044 = BgL_v1328z00_1082;
				}
				{	/* Foreign/ctype.scm 42 */
					obj_t BgL_v1329z00_1093;

					BgL_v1329z00_1093 = create_vector(((long) 0));
					BgL_arg1919z00_1045 = BgL_v1329z00_1093;
				}
				BGl_copaquez00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 32)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00, ((long) 8797),
					BGl_proc2212z00zzforeign_ctypez00, BGl_proc2211z00zzforeign_ctypez00,
					BFALSE, BGl_proc2210z00zzforeign_ctypez00,
					BGl_proc2209z00zzforeign_ctypez00, BgL_arg1918z00_1044,
					BgL_arg1919z00_1045);
			}
			{	/* Foreign/ctype.scm 46 */
				obj_t BgL_arg1940z00_1102;
				obj_t BgL_arg1941z00_1103;

				{	/* Foreign/ctype.scm 46 */
					obj_t BgL_v1330z00_1143;

					BgL_v1330z00_1143 = create_vector(((long) 4));
					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_arg1953z00_1144;

						BgL_arg1953z00_1144 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2214z00zzforeign_ctypez00,
							BGl_proc2213z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1330z00_1143, ((long) 0), BgL_arg1953z00_1144);
					}
					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_arg1958z00_1154;

						BgL_arg1958z00_1154 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2216z00zzforeign_ctypez00,
							BGl_proc2215z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 34)));
						VECTOR_SET(BgL_v1330z00_1143, ((long) 1), BgL_arg1958z00_1154);
					}
					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_arg1963z00_1164;

						BgL_arg1963z00_1164 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									35)), BGl_proc2218z00zzforeign_ctypez00,
							BGl_proc2217z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1330z00_1143, ((long) 2), BgL_arg1963z00_1164);
					}
					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_arg1968z00_1174;

						BgL_arg1968z00_1174 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc2220z00zzforeign_ctypez00,
							BGl_proc2219z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1330z00_1143, ((long) 3), BgL_arg1968z00_1174);
					}
					BgL_arg1940z00_1102 = BgL_v1330z00_1143;
				}
				{	/* Foreign/ctype.scm 46 */
					obj_t BgL_v1331z00_1184;

					BgL_v1331z00_1184 = create_vector(((long) 0));
					BgL_arg1941z00_1103 = BgL_v1331z00_1184;
				}
				BGl_cfunctionz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 37)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
					((long) 50140), BGl_proc2224z00zzforeign_ctypez00,
					BGl_proc2223z00zzforeign_ctypez00, BFALSE,
					BGl_proc2222z00zzforeign_ctypez00, BGl_proc2221z00zzforeign_ctypez00,
					BgL_arg1940z00_1102, BgL_arg1941z00_1103);
			}
			{	/* Foreign/ctype.scm 56 */
				obj_t BgL_arg1977z00_1193;
				obj_t BgL_arg1979z00_1194;

				{	/* Foreign/ctype.scm 56 */
					obj_t BgL_v1332z00_1233;

					BgL_v1332z00_1233 = create_vector(((long) 3));
					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_arg1990z00_1234;

						BgL_arg1990z00_1234 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2226z00zzforeign_ctypez00,
							BGl_proc2225z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1332z00_1233, ((long) 0), BgL_arg1990z00_1234);
					}
					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_arg1995z00_1244;

						BgL_arg1995z00_1244 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2228z00zzforeign_ctypez00,
							BGl_proc2227z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1332z00_1233, ((long) 1), BgL_arg1995z00_1244);
					}
					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_arg2000z00_1254;

						BgL_arg2000z00_1254 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2231z00zzforeign_ctypez00,
							BGl_proc2230z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2229z00zzforeign_ctypez00,
							CNST_TABLE_REF(((long) 25)));
						VECTOR_SET(BgL_v1332z00_1233, ((long) 2), BgL_arg2000z00_1254);
					}
					BgL_arg1977z00_1193 = BgL_v1332z00_1233;
				}
				{	/* Foreign/ctype.scm 56 */
					obj_t BgL_v1333z00_1267;

					BgL_v1333z00_1267 = create_vector(((long) 0));
					BgL_arg1979z00_1194 = BgL_v1333z00_1267;
				}
				BGl_cptrz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 39)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
					((long) 21329), BGl_proc2235z00zzforeign_ctypez00,
					BGl_proc2234z00zzforeign_ctypez00, BFALSE,
					BGl_proc2233z00zzforeign_ctypez00, BGl_proc2232z00zzforeign_ctypez00,
					BgL_arg1977z00_1193, BgL_arg1979z00_1194);
			}
			{	/* Foreign/ctype.scm 64 */
				obj_t BgL_arg2012z00_1276;
				obj_t BgL_arg2013z00_1277;

				{	/* Foreign/ctype.scm 64 */
					obj_t BgL_v1334z00_1316;

					BgL_v1334z00_1316 = create_vector(((long) 3));
					{	/* Foreign/ctype.scm 64 */
						obj_t BgL_arg2029z00_1317;

						BgL_arg2029z00_1317 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									40)), BGl_proc2238z00zzforeign_ctypez00,
							BGl_proc2237z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2236z00zzforeign_ctypez00,
							CNST_TABLE_REF(((long) 25)));
						VECTOR_SET(BgL_v1334z00_1316, ((long) 0), BgL_arg2029z00_1317);
					}
					{	/* Foreign/ctype.scm 64 */
						obj_t BgL_arg2038z00_1330;

						BgL_arg2038z00_1330 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									41)), BGl_proc2240z00zzforeign_ctypez00,
							BGl_proc2239z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1334z00_1316, ((long) 1), BgL_arg2038z00_1330);
					}
					{	/* Foreign/ctype.scm 64 */
						obj_t BgL_arg2043z00_1340;

						BgL_arg2043z00_1340 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									42)), BGl_proc2243z00zzforeign_ctypez00,
							BGl_proc2242z00zzforeign_ctypez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2241z00zzforeign_ctypez00,
							CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1334z00_1316, ((long) 2), BgL_arg2043z00_1340);
					}
					BgL_arg2012z00_1276 = BgL_v1334z00_1316;
				}
				{	/* Foreign/ctype.scm 64 */
					obj_t BgL_v1335z00_1353;

					BgL_v1335z00_1353 = create_vector(((long) 0));
					BgL_arg2013z00_1277 = BgL_v1335z00_1353;
				}
				BGl_cstructz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 43)),
					CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
					((long) 60769), BGl_proc2247z00zzforeign_ctypez00,
					BGl_proc2246z00zzforeign_ctypez00, BFALSE,
					BGl_proc2245z00zzforeign_ctypez00, BGl_proc2244z00zzforeign_ctypez00,
					BgL_arg2012z00_1276, BgL_arg2013z00_1277);
			}
			{	/* Foreign/ctype.scm 72 */
				obj_t BgL_arg2056z00_1362;
				obj_t BgL_arg2057z00_1363;

				{	/* Foreign/ctype.scm 72 */
					obj_t BgL_v1336z00_1401;

					BgL_v1336z00_1401 = create_vector(((long) 2));
					{	/* Foreign/ctype.scm 72 */
						obj_t BgL_arg2069z00_1402;

						BgL_arg2069z00_1402 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2249z00zzforeign_ctypez00,
							BGl_proc2248z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1336z00_1401, ((long) 0), BgL_arg2069z00_1402);
					}
					{	/* Foreign/ctype.scm 72 */
						obj_t BgL_arg2075z00_1412;

						BgL_arg2075z00_1412 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									43)), BGl_proc2251z00zzforeign_ctypez00,
							BGl_proc2250z00zzforeign_ctypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_cstructz00zzforeign_ctypez00);
						VECTOR_SET(BgL_v1336z00_1401, ((long) 1), BgL_arg2075z00_1412);
					}
					BgL_arg2056z00_1362 = BgL_v1336z00_1401;
				}
				{	/* Foreign/ctype.scm 72 */
					obj_t BgL_v1337z00_1422;

					BgL_v1337z00_1422 = create_vector(((long) 0));
					BgL_arg2057z00_1363 = BgL_v1337z00_1422;
				}
				return (BGl_cstructza2za2zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 42)),
						CNST_TABLE_REF(((long) 27)), BGl_typez00zztype_typez00,
						((long) 17112), BGl_proc2255z00zzforeign_ctypez00,
						BGl_proc2254z00zzforeign_ctypez00, BFALSE,
						BGl_proc2253z00zzforeign_ctypez00,
						BGl_proc2252z00zzforeign_ctypez00, BgL_arg2056z00_1362,
						BgL_arg2057z00_1363), BUNSPEC);
		}}

	}



/* &lambda2064 */
	BgL_typez00_bglt BGl_z62lambda2064z62zzforeign_ctypez00(obj_t BgL_envz00_2859,
		obj_t BgL_o1210z00_2860)
	{
		{	/* Foreign/ctype.scm 72 */
			{	/* Foreign/ctype.scm 72 */
				long BgL_arg2065z00_3183;

				{	/* Foreign/ctype.scm 72 */
					obj_t BgL_arg2066z00_3184;

					{	/* Foreign/ctype.scm 72 */
						obj_t BgL_arg2068z00_3185;

						{	/* Foreign/ctype.scm 72 */
							long BgL_arg1816z00_3186;

							{	/* Foreign/ctype.scm 72 */
								long BgL_arg1817z00_3187;

								{	/* Foreign/ctype.scm 72 */
									long BgL_res2184z00_3188;

									BgL_res2184z00_3188 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1210z00_2860)));
									BgL_arg1817z00_3187 = BgL_res2184z00_3188;
								}
								BgL_arg1816z00_3186 = (BgL_arg1817z00_3187 - OBJECT_TYPE);
							}
							BgL_arg2068z00_3185 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3186);
						}
						BgL_arg2066z00_3184 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2068z00_3185);
					}
					{	/* Foreign/ctype.scm 72 */
						long BgL_res2186z00_3189;

						{	/* Foreign/ctype.scm 72 */
							obj_t BgL_tmpz00_5819;

							BgL_tmpz00_5819 = ((obj_t) BgL_arg2066z00_3184);
							BgL_res2186z00_3189 = BGL_CLASS_INDEX(BgL_tmpz00_5819);
						}
						BgL_arg2065z00_3183 = BgL_res2186z00_3189;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1210z00_2860)), BgL_arg2065z00_3183);
			}
			{	/* Foreign/ctype.scm 72 */
				BgL_objectz00_bglt BgL_tmpz00_5825;

				BgL_tmpz00_5825 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1210z00_2860));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5825, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1210z00_2860));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1210z00_2860));
		}

	}



/* &<@anonymous:2063> */
	obj_t BGl_z62zc3z04anonymousza32063ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2861, obj_t BgL_new1209z00_2862)
	{
		{	/* Foreign/ctype.scm 72 */
			{
				BgL_typez00_bglt BgL_auxz00_5833;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1209z00_2862))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1209z00_2862))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_5888;
					BgL_cstructza2za2_bglt BgL_auxz00_5881;

					{	/* Foreign/ctype.scm 72 */
						obj_t BgL_classz00_3191;

						BgL_classz00_3191 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 72 */
							obj_t BgL__ortest_1106z00_3192;

							BgL__ortest_1106z00_3192 = BGL_CLASS_NIL(BgL_classz00_3191);
							if (CBOOL(BgL__ortest_1106z00_3192))
								{	/* Foreign/ctype.scm 72 */
									BgL_auxz00_5888 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3192);
								}
							else
								{	/* Foreign/ctype.scm 72 */
									BgL_auxz00_5888 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3191));
								}
						}
					}
					{
						obj_t BgL_auxz00_5882;

						{	/* Foreign/ctype.scm 72 */
							BgL_objectz00_bglt BgL_tmpz00_5883;

							BgL_tmpz00_5883 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1209z00_2862));
							BgL_auxz00_5882 = BGL_OBJECT_WIDENING(BgL_tmpz00_5883);
						}
						BgL_auxz00_5881 = ((BgL_cstructza2za2_bglt) BgL_auxz00_5882);
					}
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_5881))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_auxz00_5888), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_5903;
					BgL_cstructza2za2_bglt BgL_auxz00_5896;

					{	/* Foreign/ctype.scm 72 */
						obj_t BgL_classz00_3193;

						BgL_classz00_3193 = BGl_cstructz00zzforeign_ctypez00;
						{	/* Foreign/ctype.scm 72 */
							obj_t BgL__ortest_1106z00_3194;

							BgL__ortest_1106z00_3194 = BGL_CLASS_NIL(BgL_classz00_3193);
							if (CBOOL(BgL__ortest_1106z00_3194))
								{	/* Foreign/ctype.scm 72 */
									BgL_auxz00_5903 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3194);
								}
							else
								{	/* Foreign/ctype.scm 72 */
									BgL_auxz00_5903 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3193));
								}
						}
					}
					{
						obj_t BgL_auxz00_5897;

						{	/* Foreign/ctype.scm 72 */
							BgL_objectz00_bglt BgL_tmpz00_5898;

							BgL_tmpz00_5898 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1209z00_2862));
							BgL_auxz00_5897 = BGL_OBJECT_WIDENING(BgL_tmpz00_5898);
						}
						BgL_auxz00_5896 = ((BgL_cstructza2za2_bglt) BgL_auxz00_5897);
					}
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_5896))->
							BgL_cstructz00) = ((BgL_typez00_bglt) BgL_auxz00_5903), BUNSPEC);
				}
				BgL_auxz00_5833 = ((BgL_typez00_bglt) BgL_new1209z00_2862);
				return ((obj_t) BgL_auxz00_5833);
			}
		}

	}



/* &lambda2061 */
	BgL_typez00_bglt BGl_z62lambda2061z62zzforeign_ctypez00(obj_t BgL_envz00_2863,
		obj_t BgL_o1206z00_2864)
	{
		{	/* Foreign/ctype.scm 72 */
			{	/* Foreign/ctype.scm 72 */
				BgL_cstructza2za2_bglt BgL_wide1208z00_3196;

				BgL_wide1208z00_3196 =
					((BgL_cstructza2za2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cstructza2za2_bgl))));
				{	/* Foreign/ctype.scm 72 */
					obj_t BgL_auxz00_5918;
					BgL_objectz00_bglt BgL_tmpz00_5914;

					BgL_auxz00_5918 = ((obj_t) BgL_wide1208z00_3196);
					BgL_tmpz00_5914 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1206z00_2864)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5914, BgL_auxz00_5918);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1206z00_2864)));
				{	/* Foreign/ctype.scm 72 */
					long BgL_arg2062z00_3197;

					{	/* Foreign/ctype.scm 72 */
						long BgL_res2183z00_3198;

						BgL_res2183z00_3198 =
							BGL_CLASS_INDEX(BGl_cstructza2za2zzforeign_ctypez00);
						BgL_arg2062z00_3197 = BgL_res2183z00_3198;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1206z00_2864))), BgL_arg2062z00_3197);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1206z00_2864)));
			}
		}

	}



/* &lambda2058 */
	BgL_typez00_bglt BGl_z62lambda2058z62zzforeign_ctypez00(obj_t BgL_envz00_2865,
		obj_t BgL_id1189z00_2866, obj_t BgL_name1190z00_2867,
		obj_t BgL_siza7e1191za7_2868, obj_t BgL_class1192z00_2869,
		obj_t BgL_coercezd2to1193zd2_2870, obj_t BgL_parents1194z00_2871,
		obj_t BgL_initzf31195zf3_2872, obj_t BgL_magiczf31196zf3_2873,
		obj_t BgL_z421197z42_2874, obj_t BgL_alias1198z00_2875,
		obj_t BgL_pointedzd2tozd2by1199z00_2876, obj_t BgL_tvector1200z00_2877,
		obj_t BgL_location1201z00_2878, obj_t BgL_importzd2location1202zd2_2879,
		obj_t BgL_occurrence1203z00_2880, obj_t BgL_btype1204z00_2881,
		obj_t BgL_cstruct1205z00_2882)
	{
		{	/* Foreign/ctype.scm 72 */
			{	/* Foreign/ctype.scm 72 */
				bool_t BgL_initzf31195zf3_3200;
				bool_t BgL_magiczf31196zf3_3201;
				int BgL_occurrence1203z00_3202;

				BgL_initzf31195zf3_3200 = CBOOL(BgL_initzf31195zf3_2872);
				BgL_magiczf31196zf3_3201 = CBOOL(BgL_magiczf31196zf3_2873);
				BgL_occurrence1203z00_3202 = CINT(BgL_occurrence1203z00_2880);
				{	/* Foreign/ctype.scm 72 */
					BgL_typez00_bglt BgL_new1313z00_3205;

					{	/* Foreign/ctype.scm 72 */
						BgL_typez00_bglt BgL_tmp1311z00_3206;
						BgL_cstructza2za2_bglt BgL_wide1312z00_3207;

						{
							BgL_typez00_bglt BgL_auxz00_5935;

							{	/* Foreign/ctype.scm 72 */
								BgL_typez00_bglt BgL_new1310z00_3208;

								BgL_new1310z00_3208 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 72 */
									long BgL_arg2060z00_3209;

									{	/* Foreign/ctype.scm 72 */
										long BgL_res2181z00_3210;

										BgL_res2181z00_3210 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg2060z00_3209 = BgL_res2181z00_3210;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1310z00_3208),
										BgL_arg2060z00_3209);
								}
								{	/* Foreign/ctype.scm 72 */
									BgL_objectz00_bglt BgL_tmpz00_5940;

									BgL_tmpz00_5940 = ((BgL_objectz00_bglt) BgL_new1310z00_3208);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5940, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1310z00_3208);
								BgL_auxz00_5935 = BgL_new1310z00_3208;
							}
							BgL_tmp1311z00_3206 = ((BgL_typez00_bglt) BgL_auxz00_5935);
						}
						BgL_wide1312z00_3207 =
							((BgL_cstructza2za2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cstructza2za2_bgl))));
						{	/* Foreign/ctype.scm 72 */
							obj_t BgL_auxz00_5948;
							BgL_objectz00_bglt BgL_tmpz00_5946;

							BgL_auxz00_5948 = ((obj_t) BgL_wide1312z00_3207);
							BgL_tmpz00_5946 = ((BgL_objectz00_bglt) BgL_tmp1311z00_3206);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5946, BgL_auxz00_5948);
						}
						((BgL_objectz00_bglt) BgL_tmp1311z00_3206);
						{	/* Foreign/ctype.scm 72 */
							long BgL_arg2059z00_3211;

							{	/* Foreign/ctype.scm 72 */
								long BgL_res2182z00_3212;

								BgL_res2182z00_3212 =
									BGL_CLASS_INDEX(BGl_cstructza2za2zzforeign_ctypez00);
								BgL_arg2059z00_3211 = BgL_res2182z00_3212;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1311z00_3206),
								BgL_arg2059z00_3211);
						}
						BgL_new1313z00_3205 = ((BgL_typez00_bglt) BgL_tmp1311z00_3206);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1313z00_3205)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1189z00_2866)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_namez00) =
						((obj_t) BgL_name1190z00_2867), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1191za7_2868), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_classz00) =
						((obj_t) BgL_class1192z00_2869), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1193zd2_2870), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_parentsz00) =
						((obj_t) BgL_parents1194z00_2871), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31195zf3_3200), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31196zf3_3201), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_z42z42) =
						((obj_t) BgL_z421197z42_2874), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_aliasz00) =
						((obj_t) BgL_alias1198z00_2875), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1199z00_2876), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1200z00_2877), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_locationz00) =
						((obj_t) BgL_location1201z00_2878), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1202zd2_2879), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1313z00_3205)))->BgL_occurrencez00) =
						((int) BgL_occurrence1203z00_3202), BUNSPEC);
					{
						BgL_cstructza2za2_bglt BgL_auxz00_5987;

						{
							obj_t BgL_auxz00_5988;

							{	/* Foreign/ctype.scm 72 */
								BgL_objectz00_bglt BgL_tmpz00_5989;

								BgL_tmpz00_5989 = ((BgL_objectz00_bglt) BgL_new1313z00_3205);
								BgL_auxz00_5988 = BGL_OBJECT_WIDENING(BgL_tmpz00_5989);
							}
							BgL_auxz00_5987 = ((BgL_cstructza2za2_bglt) BgL_auxz00_5988);
						}
						((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_5987))->
								BgL_btypez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_btype1204z00_2881)),
							BUNSPEC);
					}
					{
						BgL_cstructza2za2_bglt BgL_auxz00_5995;

						{
							obj_t BgL_auxz00_5996;

							{	/* Foreign/ctype.scm 72 */
								BgL_objectz00_bglt BgL_tmpz00_5997;

								BgL_tmpz00_5997 = ((BgL_objectz00_bglt) BgL_new1313z00_3205);
								BgL_auxz00_5996 = BGL_OBJECT_WIDENING(BgL_tmpz00_5997);
							}
							BgL_auxz00_5995 = ((BgL_cstructza2za2_bglt) BgL_auxz00_5996);
						}
						((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_5995))->
								BgL_cstructz00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_cstruct1205z00_2882)),
							BUNSPEC);
					}
					return BgL_new1313z00_3205;
				}
			}
		}

	}



/* &lambda2079 */
	obj_t BGl_z62lambda2079z62zzforeign_ctypez00(obj_t BgL_envz00_2883,
		obj_t BgL_oz00_2884, obj_t BgL_vz00_2885)
	{
		{	/* Foreign/ctype.scm 72 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_6003;

				{
					obj_t BgL_auxz00_6004;

					{	/* Foreign/ctype.scm 72 */
						BgL_objectz00_bglt BgL_tmpz00_6005;

						BgL_tmpz00_6005 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2884));
						BgL_auxz00_6004 = BGL_OBJECT_WIDENING(BgL_tmpz00_6005);
					}
					BgL_auxz00_6003 = ((BgL_cstructza2za2_bglt) BgL_auxz00_6004);
				}
				return
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_6003))->
						BgL_cstructz00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_2885)), BUNSPEC);
			}
		}

	}



/* &lambda2078 */
	BgL_typez00_bglt BGl_z62lambda2078z62zzforeign_ctypez00(obj_t BgL_envz00_2886,
		obj_t BgL_oz00_2887)
	{
		{	/* Foreign/ctype.scm 72 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_6012;

				{
					obj_t BgL_auxz00_6013;

					{	/* Foreign/ctype.scm 72 */
						BgL_objectz00_bglt BgL_tmpz00_6014;

						BgL_tmpz00_6014 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2887));
						BgL_auxz00_6013 = BGL_OBJECT_WIDENING(BgL_tmpz00_6014);
					}
					BgL_auxz00_6012 = ((BgL_cstructza2za2_bglt) BgL_auxz00_6013);
				}
				return
					(((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_6012))->BgL_cstructz00);
			}
		}

	}



/* &lambda2073 */
	obj_t BGl_z62lambda2073z62zzforeign_ctypez00(obj_t BgL_envz00_2888,
		obj_t BgL_oz00_2889, obj_t BgL_vz00_2890)
	{
		{	/* Foreign/ctype.scm 72 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_6020;

				{
					obj_t BgL_auxz00_6021;

					{	/* Foreign/ctype.scm 72 */
						BgL_objectz00_bglt BgL_tmpz00_6022;

						BgL_tmpz00_6022 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2889));
						BgL_auxz00_6021 = BGL_OBJECT_WIDENING(BgL_tmpz00_6022);
					}
					BgL_auxz00_6020 = ((BgL_cstructza2za2_bglt) BgL_auxz00_6021);
				}
				return
					((((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_6020))->BgL_btypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_2890)), BUNSPEC);
			}
		}

	}



/* &lambda2072 */
	BgL_typez00_bglt BGl_z62lambda2072z62zzforeign_ctypez00(obj_t BgL_envz00_2891,
		obj_t BgL_oz00_2892)
	{
		{	/* Foreign/ctype.scm 72 */
			{
				BgL_cstructza2za2_bglt BgL_auxz00_6029;

				{
					obj_t BgL_auxz00_6030;

					{	/* Foreign/ctype.scm 72 */
						BgL_objectz00_bglt BgL_tmpz00_6031;

						BgL_tmpz00_6031 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2892));
						BgL_auxz00_6030 = BGL_OBJECT_WIDENING(BgL_tmpz00_6031);
					}
					BgL_auxz00_6029 = ((BgL_cstructza2za2_bglt) BgL_auxz00_6030);
				}
				return
					(((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_6029))->BgL_btypez00);
			}
		}

	}



/* &lambda2022 */
	BgL_typez00_bglt BGl_z62lambda2022z62zzforeign_ctypez00(obj_t BgL_envz00_2893,
		obj_t BgL_o1187z00_2894)
	{
		{	/* Foreign/ctype.scm 64 */
			{	/* Foreign/ctype.scm 64 */
				long BgL_arg2023z00_3220;

				{	/* Foreign/ctype.scm 64 */
					obj_t BgL_arg2026z00_3221;

					{	/* Foreign/ctype.scm 64 */
						obj_t BgL_arg2028z00_3222;

						{	/* Foreign/ctype.scm 64 */
							long BgL_arg1816z00_3223;

							{	/* Foreign/ctype.scm 64 */
								long BgL_arg1817z00_3224;

								{	/* Foreign/ctype.scm 64 */
									long BgL_res2178z00_3225;

									BgL_res2178z00_3225 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1187z00_2894)));
									BgL_arg1817z00_3224 = BgL_res2178z00_3225;
								}
								BgL_arg1816z00_3223 = (BgL_arg1817z00_3224 - OBJECT_TYPE);
							}
							BgL_arg2028z00_3222 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3223);
						}
						BgL_arg2026z00_3221 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2028z00_3222);
					}
					{	/* Foreign/ctype.scm 64 */
						long BgL_res2180z00_3226;

						{	/* Foreign/ctype.scm 64 */
							obj_t BgL_tmpz00_6043;

							BgL_tmpz00_6043 = ((obj_t) BgL_arg2026z00_3221);
							BgL_res2180z00_3226 = BGL_CLASS_INDEX(BgL_tmpz00_6043);
						}
						BgL_arg2023z00_3220 = BgL_res2180z00_3226;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1187z00_2894)), BgL_arg2023z00_3220);
			}
			{	/* Foreign/ctype.scm 64 */
				BgL_objectz00_bglt BgL_tmpz00_6049;

				BgL_tmpz00_6049 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1187z00_2894));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6049, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1187z00_2894));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1187z00_2894));
		}

	}



/* &<@anonymous:2021> */
	obj_t BGl_z62zc3z04anonymousza32021ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2895, obj_t BgL_new1186z00_2896)
	{
		{	/* Foreign/ctype.scm 64 */
			{
				BgL_typez00_bglt BgL_auxz00_6057;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1186z00_2896))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1186z00_2896))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_cstructz00_bglt BgL_auxz00_6105;

					{
						obj_t BgL_auxz00_6106;

						{	/* Foreign/ctype.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_6107;

							BgL_tmpz00_6107 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1186z00_2896));
							BgL_auxz00_6106 = BGL_OBJECT_WIDENING(BgL_tmpz00_6107);
						}
						BgL_auxz00_6105 = ((BgL_cstructz00_bglt) BgL_auxz00_6106);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6105))->
							BgL_structzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_cstructz00_bglt BgL_auxz00_6113;

					{
						obj_t BgL_auxz00_6114;

						{	/* Foreign/ctype.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_6115;

							BgL_tmpz00_6115 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1186z00_2896));
							BgL_auxz00_6114 = BGL_OBJECT_WIDENING(BgL_tmpz00_6115);
						}
						BgL_auxz00_6113 = ((BgL_cstructz00_bglt) BgL_auxz00_6114);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6113))->BgL_fieldsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_cstructz00_bglt BgL_auxz00_6121;

					{
						obj_t BgL_auxz00_6122;

						{	/* Foreign/ctype.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_6123;

							BgL_tmpz00_6123 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1186z00_2896));
							BgL_auxz00_6122 = BGL_OBJECT_WIDENING(BgL_tmpz00_6123);
						}
						BgL_auxz00_6121 = ((BgL_cstructz00_bglt) BgL_auxz00_6122);
					}
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6121))->
							BgL_cstructza2za2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6057 = ((BgL_typez00_bglt) BgL_new1186z00_2896);
				return ((obj_t) BgL_auxz00_6057);
			}
		}

	}



/* &lambda2018 */
	BgL_typez00_bglt BGl_z62lambda2018z62zzforeign_ctypez00(obj_t BgL_envz00_2897,
		obj_t BgL_o1183z00_2898)
	{
		{	/* Foreign/ctype.scm 64 */
			{	/* Foreign/ctype.scm 64 */
				BgL_cstructz00_bglt BgL_wide1185z00_3229;

				BgL_wide1185z00_3229 =
					((BgL_cstructz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cstructz00_bgl))));
				{	/* Foreign/ctype.scm 64 */
					obj_t BgL_auxz00_6136;
					BgL_objectz00_bglt BgL_tmpz00_6132;

					BgL_auxz00_6136 = ((obj_t) BgL_wide1185z00_3229);
					BgL_tmpz00_6132 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1183z00_2898)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6132, BgL_auxz00_6136);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1183z00_2898)));
				{	/* Foreign/ctype.scm 64 */
					long BgL_arg2020z00_3230;

					{	/* Foreign/ctype.scm 64 */
						long BgL_res2177z00_3231;

						BgL_res2177z00_3231 =
							BGL_CLASS_INDEX(BGl_cstructz00zzforeign_ctypez00);
						BgL_arg2020z00_3230 = BgL_res2177z00_3231;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1183z00_2898))), BgL_arg2020z00_3230);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1183z00_2898)));
			}
		}

	}



/* &lambda2014 */
	BgL_typez00_bglt BGl_z62lambda2014z62zzforeign_ctypez00(obj_t BgL_envz00_2899,
		obj_t BgL_id1165z00_2900, obj_t BgL_name1166z00_2901,
		obj_t BgL_siza7e1167za7_2902, obj_t BgL_class1168z00_2903,
		obj_t BgL_coercezd2to1169zd2_2904, obj_t BgL_parents1170z00_2905,
		obj_t BgL_initzf31171zf3_2906, obj_t BgL_magiczf31172zf3_2907,
		obj_t BgL_z421173z42_2908, obj_t BgL_alias1174z00_2909,
		obj_t BgL_pointedzd2tozd2by1175z00_2910, obj_t BgL_tvector1176z00_2911,
		obj_t BgL_location1177z00_2912, obj_t BgL_importzd2location1178zd2_2913,
		obj_t BgL_occurrence1179z00_2914, obj_t BgL_structzf31180zf3_2915,
		obj_t BgL_fields1181z00_2916, obj_t BgL_cstructza21182za2_2917)
	{
		{	/* Foreign/ctype.scm 64 */
			{	/* Foreign/ctype.scm 64 */
				bool_t BgL_initzf31171zf3_3233;
				bool_t BgL_magiczf31172zf3_3234;
				int BgL_occurrence1179z00_3235;
				bool_t BgL_structzf31180zf3_3236;

				BgL_initzf31171zf3_3233 = CBOOL(BgL_initzf31171zf3_2906);
				BgL_magiczf31172zf3_3234 = CBOOL(BgL_magiczf31172zf3_2907);
				BgL_occurrence1179z00_3235 = CINT(BgL_occurrence1179z00_2914);
				BgL_structzf31180zf3_3236 = CBOOL(BgL_structzf31180zf3_2915);
				{	/* Foreign/ctype.scm 64 */
					BgL_typez00_bglt BgL_new1308z00_3237;

					{	/* Foreign/ctype.scm 64 */
						BgL_typez00_bglt BgL_tmp1306z00_3238;
						BgL_cstructz00_bglt BgL_wide1307z00_3239;

						{
							BgL_typez00_bglt BgL_auxz00_6154;

							{	/* Foreign/ctype.scm 64 */
								BgL_typez00_bglt BgL_new1305z00_3240;

								BgL_new1305z00_3240 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 64 */
									long BgL_arg2017z00_3241;

									{	/* Foreign/ctype.scm 64 */
										long BgL_res2175z00_3242;

										BgL_res2175z00_3242 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg2017z00_3241 = BgL_res2175z00_3242;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1305z00_3240),
										BgL_arg2017z00_3241);
								}
								{	/* Foreign/ctype.scm 64 */
									BgL_objectz00_bglt BgL_tmpz00_6159;

									BgL_tmpz00_6159 = ((BgL_objectz00_bglt) BgL_new1305z00_3240);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6159, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1305z00_3240);
								BgL_auxz00_6154 = BgL_new1305z00_3240;
							}
							BgL_tmp1306z00_3238 = ((BgL_typez00_bglt) BgL_auxz00_6154);
						}
						BgL_wide1307z00_3239 =
							((BgL_cstructz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cstructz00_bgl))));
						{	/* Foreign/ctype.scm 64 */
							obj_t BgL_auxz00_6167;
							BgL_objectz00_bglt BgL_tmpz00_6165;

							BgL_auxz00_6167 = ((obj_t) BgL_wide1307z00_3239);
							BgL_tmpz00_6165 = ((BgL_objectz00_bglt) BgL_tmp1306z00_3238);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6165, BgL_auxz00_6167);
						}
						((BgL_objectz00_bglt) BgL_tmp1306z00_3238);
						{	/* Foreign/ctype.scm 64 */
							long BgL_arg2016z00_3243;

							{	/* Foreign/ctype.scm 64 */
								long BgL_res2176z00_3244;

								BgL_res2176z00_3244 =
									BGL_CLASS_INDEX(BGl_cstructz00zzforeign_ctypez00);
								BgL_arg2016z00_3243 = BgL_res2176z00_3244;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1306z00_3238),
								BgL_arg2016z00_3243);
						}
						BgL_new1308z00_3237 = ((BgL_typez00_bglt) BgL_tmp1306z00_3238);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1308z00_3237)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1165z00_2900)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_namez00) =
						((obj_t) BgL_name1166z00_2901), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1167za7_2902), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_classz00) =
						((obj_t) BgL_class1168z00_2903), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1169zd2_2904), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_parentsz00) =
						((obj_t) BgL_parents1170z00_2905), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31171zf3_3233), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31172zf3_3234), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_z42z42) =
						((obj_t) BgL_z421173z42_2908), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_aliasz00) =
						((obj_t) BgL_alias1174z00_2909), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1175z00_2910), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1176z00_2911), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_locationz00) =
						((obj_t) BgL_location1177z00_2912), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1178zd2_2913), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1308z00_3237)))->BgL_occurrencez00) =
						((int) BgL_occurrence1179z00_3235), BUNSPEC);
					{
						BgL_cstructz00_bglt BgL_auxz00_6206;

						{
							obj_t BgL_auxz00_6207;

							{	/* Foreign/ctype.scm 64 */
								BgL_objectz00_bglt BgL_tmpz00_6208;

								BgL_tmpz00_6208 = ((BgL_objectz00_bglt) BgL_new1308z00_3237);
								BgL_auxz00_6207 = BGL_OBJECT_WIDENING(BgL_tmpz00_6208);
							}
							BgL_auxz00_6206 = ((BgL_cstructz00_bglt) BgL_auxz00_6207);
						}
						((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6206))->
								BgL_structzf3zf3) =
							((bool_t) BgL_structzf31180zf3_3236), BUNSPEC);
					}
					{
						BgL_cstructz00_bglt BgL_auxz00_6213;

						{
							obj_t BgL_auxz00_6214;

							{	/* Foreign/ctype.scm 64 */
								BgL_objectz00_bglt BgL_tmpz00_6215;

								BgL_tmpz00_6215 = ((BgL_objectz00_bglt) BgL_new1308z00_3237);
								BgL_auxz00_6214 = BGL_OBJECT_WIDENING(BgL_tmpz00_6215);
							}
							BgL_auxz00_6213 = ((BgL_cstructz00_bglt) BgL_auxz00_6214);
						}
						((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6213))->BgL_fieldsz00) =
							((obj_t) BgL_fields1181z00_2916), BUNSPEC);
					}
					{
						BgL_cstructz00_bglt BgL_auxz00_6220;

						{
							obj_t BgL_auxz00_6221;

							{	/* Foreign/ctype.scm 64 */
								BgL_objectz00_bglt BgL_tmpz00_6222;

								BgL_tmpz00_6222 = ((BgL_objectz00_bglt) BgL_new1308z00_3237);
								BgL_auxz00_6221 = BGL_OBJECT_WIDENING(BgL_tmpz00_6222);
							}
							BgL_auxz00_6220 = ((BgL_cstructz00_bglt) BgL_auxz00_6221);
						}
						((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6220))->
								BgL_cstructza2za2) =
							((obj_t) BgL_cstructza21182za2_2917), BUNSPEC);
					}
					return BgL_new1308z00_3237;
				}
			}
		}

	}



/* &<@anonymous:2049> */
	obj_t BGl_z62zc3z04anonymousza32049ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2918)
	{
		{	/* Foreign/ctype.scm 64 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2048 */
	obj_t BGl_z62lambda2048z62zzforeign_ctypez00(obj_t BgL_envz00_2919,
		obj_t BgL_oz00_2920, obj_t BgL_vz00_2921)
	{
		{	/* Foreign/ctype.scm 64 */
			{
				BgL_cstructz00_bglt BgL_auxz00_6228;

				{
					obj_t BgL_auxz00_6229;

					{	/* Foreign/ctype.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_6230;

						BgL_tmpz00_6230 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2920));
						BgL_auxz00_6229 = BGL_OBJECT_WIDENING(BgL_tmpz00_6230);
					}
					BgL_auxz00_6228 = ((BgL_cstructz00_bglt) BgL_auxz00_6229);
				}
				return
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6228))->
						BgL_cstructza2za2) = ((obj_t) BgL_vz00_2921), BUNSPEC);
			}
		}

	}



/* &lambda2047 */
	obj_t BGl_z62lambda2047z62zzforeign_ctypez00(obj_t BgL_envz00_2922,
		obj_t BgL_oz00_2923)
	{
		{	/* Foreign/ctype.scm 64 */
			{
				BgL_cstructz00_bglt BgL_auxz00_6236;

				{
					obj_t BgL_auxz00_6237;

					{	/* Foreign/ctype.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_6238;

						BgL_tmpz00_6238 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2923));
						BgL_auxz00_6237 = BGL_OBJECT_WIDENING(BgL_tmpz00_6238);
					}
					BgL_auxz00_6236 = ((BgL_cstructz00_bglt) BgL_auxz00_6237);
				}
				return
					(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6236))->BgL_cstructza2za2);
			}
		}

	}



/* &lambda2042 */
	obj_t BGl_z62lambda2042z62zzforeign_ctypez00(obj_t BgL_envz00_2924,
		obj_t BgL_oz00_2925, obj_t BgL_vz00_2926)
	{
		{	/* Foreign/ctype.scm 64 */
			{
				BgL_cstructz00_bglt BgL_auxz00_6244;

				{
					obj_t BgL_auxz00_6245;

					{	/* Foreign/ctype.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_6246;

						BgL_tmpz00_6246 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2925));
						BgL_auxz00_6245 = BGL_OBJECT_WIDENING(BgL_tmpz00_6246);
					}
					BgL_auxz00_6244 = ((BgL_cstructz00_bglt) BgL_auxz00_6245);
				}
				return
					((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6244))->BgL_fieldsz00) =
					((obj_t) BgL_vz00_2926), BUNSPEC);
			}
		}

	}



/* &lambda2041 */
	obj_t BGl_z62lambda2041z62zzforeign_ctypez00(obj_t BgL_envz00_2927,
		obj_t BgL_oz00_2928)
	{
		{	/* Foreign/ctype.scm 64 */
			{
				BgL_cstructz00_bglt BgL_auxz00_6252;

				{
					obj_t BgL_auxz00_6253;

					{	/* Foreign/ctype.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_6254;

						BgL_tmpz00_6254 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2928));
						BgL_auxz00_6253 = BGL_OBJECT_WIDENING(BgL_tmpz00_6254);
					}
					BgL_auxz00_6252 = ((BgL_cstructz00_bglt) BgL_auxz00_6253);
				}
				return
					(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6252))->BgL_fieldsz00);
			}
		}

	}



/* &<@anonymous:2037> */
	obj_t BGl_z62zc3z04anonymousza32037ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2929)
	{
		{	/* Foreign/ctype.scm 64 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda2036 */
	obj_t BGl_z62lambda2036z62zzforeign_ctypez00(obj_t BgL_envz00_2930,
		obj_t BgL_oz00_2931, obj_t BgL_vz00_2932)
	{
		{	/* Foreign/ctype.scm 64 */
			{	/* Foreign/ctype.scm 64 */
				bool_t BgL_vz00_3250;

				BgL_vz00_3250 = CBOOL(BgL_vz00_2932);
				{
					BgL_cstructz00_bglt BgL_auxz00_6262;

					{
						obj_t BgL_auxz00_6263;

						{	/* Foreign/ctype.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_6264;

							BgL_tmpz00_6264 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2931));
							BgL_auxz00_6263 = BGL_OBJECT_WIDENING(BgL_tmpz00_6264);
						}
						BgL_auxz00_6262 = ((BgL_cstructz00_bglt) BgL_auxz00_6263);
					}
					return
						((((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6262))->
							BgL_structzf3zf3) = ((bool_t) BgL_vz00_3250), BUNSPEC);
				}
			}
		}

	}



/* &lambda2035 */
	obj_t BGl_z62lambda2035z62zzforeign_ctypez00(obj_t BgL_envz00_2933,
		obj_t BgL_oz00_2934)
	{
		{	/* Foreign/ctype.scm 64 */
			{	/* Foreign/ctype.scm 64 */
				bool_t BgL_tmpz00_6270;

				{
					BgL_cstructz00_bglt BgL_auxz00_6271;

					{
						obj_t BgL_auxz00_6272;

						{	/* Foreign/ctype.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_6273;

							BgL_tmpz00_6273 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2934));
							BgL_auxz00_6272 = BGL_OBJECT_WIDENING(BgL_tmpz00_6273);
						}
						BgL_auxz00_6271 = ((BgL_cstructz00_bglt) BgL_auxz00_6272);
					}
					BgL_tmpz00_6270 =
						(((BgL_cstructz00_bglt) COBJECT(BgL_auxz00_6271))->
						BgL_structzf3zf3);
				}
				return BBOOL(BgL_tmpz00_6270);
			}
		}

	}



/* &lambda1986 */
	BgL_typez00_bglt BGl_z62lambda1986z62zzforeign_ctypez00(obj_t BgL_envz00_2935,
		obj_t BgL_o1163z00_2936)
	{
		{	/* Foreign/ctype.scm 56 */
			{	/* Foreign/ctype.scm 56 */
				long BgL_arg1987z00_3253;

				{	/* Foreign/ctype.scm 56 */
					obj_t BgL_arg1988z00_3254;

					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_arg1989z00_3255;

						{	/* Foreign/ctype.scm 56 */
							long BgL_arg1816z00_3256;

							{	/* Foreign/ctype.scm 56 */
								long BgL_arg1817z00_3257;

								{	/* Foreign/ctype.scm 56 */
									long BgL_res2172z00_3258;

									BgL_res2172z00_3258 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1163z00_2936)));
									BgL_arg1817z00_3257 = BgL_res2172z00_3258;
								}
								BgL_arg1816z00_3256 = (BgL_arg1817z00_3257 - OBJECT_TYPE);
							}
							BgL_arg1989z00_3255 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3256);
						}
						BgL_arg1988z00_3254 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1989z00_3255);
					}
					{	/* Foreign/ctype.scm 56 */
						long BgL_res2174z00_3259;

						{	/* Foreign/ctype.scm 56 */
							obj_t BgL_tmpz00_6286;

							BgL_tmpz00_6286 = ((obj_t) BgL_arg1988z00_3254);
							BgL_res2174z00_3259 = BGL_CLASS_INDEX(BgL_tmpz00_6286);
						}
						BgL_arg1987z00_3253 = BgL_res2174z00_3259;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1163z00_2936)), BgL_arg1987z00_3253);
			}
			{	/* Foreign/ctype.scm 56 */
				BgL_objectz00_bglt BgL_tmpz00_6292;

				BgL_tmpz00_6292 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1163z00_2936));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6292, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1163z00_2936));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1163z00_2936));
		}

	}



/* &<@anonymous:1985> */
	obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2937, obj_t BgL_new1162z00_2938)
	{
		{	/* Foreign/ctype.scm 56 */
			{
				BgL_typez00_bglt BgL_auxz00_6300;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1162z00_2938))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1162z00_2938))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6355;
					BgL_cptrz00_bglt BgL_auxz00_6348;

					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_classz00_3261;

						BgL_classz00_3261 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 56 */
							obj_t BgL__ortest_1106z00_3262;

							BgL__ortest_1106z00_3262 = BGL_CLASS_NIL(BgL_classz00_3261);
							if (CBOOL(BgL__ortest_1106z00_3262))
								{	/* Foreign/ctype.scm 56 */
									BgL_auxz00_6355 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3262);
								}
							else
								{	/* Foreign/ctype.scm 56 */
									BgL_auxz00_6355 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3261));
								}
						}
					}
					{
						obj_t BgL_auxz00_6349;

						{	/* Foreign/ctype.scm 56 */
							BgL_objectz00_bglt BgL_tmpz00_6350;

							BgL_tmpz00_6350 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1162z00_2938));
							BgL_auxz00_6349 = BGL_OBJECT_WIDENING(BgL_tmpz00_6350);
						}
						BgL_auxz00_6348 = ((BgL_cptrz00_bglt) BgL_auxz00_6349);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6348))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_auxz00_6355), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_6370;
					BgL_cptrz00_bglt BgL_auxz00_6363;

					{	/* Foreign/ctype.scm 56 */
						obj_t BgL_classz00_3263;

						BgL_classz00_3263 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 56 */
							obj_t BgL__ortest_1106z00_3264;

							BgL__ortest_1106z00_3264 = BGL_CLASS_NIL(BgL_classz00_3263);
							if (CBOOL(BgL__ortest_1106z00_3264))
								{	/* Foreign/ctype.scm 56 */
									BgL_auxz00_6370 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3264);
								}
							else
								{	/* Foreign/ctype.scm 56 */
									BgL_auxz00_6370 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3263));
								}
						}
					}
					{
						obj_t BgL_auxz00_6364;

						{	/* Foreign/ctype.scm 56 */
							BgL_objectz00_bglt BgL_tmpz00_6365;

							BgL_tmpz00_6365 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1162z00_2938));
							BgL_auxz00_6364 = BGL_OBJECT_WIDENING(BgL_tmpz00_6365);
						}
						BgL_auxz00_6363 = ((BgL_cptrz00_bglt) BgL_auxz00_6364);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6363))->BgL_pointzd2tozd2) =
						((BgL_typez00_bglt) BgL_auxz00_6370), BUNSPEC);
				}
				{
					BgL_cptrz00_bglt BgL_auxz00_6378;

					{
						obj_t BgL_auxz00_6379;

						{	/* Foreign/ctype.scm 56 */
							BgL_objectz00_bglt BgL_tmpz00_6380;

							BgL_tmpz00_6380 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1162z00_2938));
							BgL_auxz00_6379 = BGL_OBJECT_WIDENING(BgL_tmpz00_6380);
						}
						BgL_auxz00_6378 = ((BgL_cptrz00_bglt) BgL_auxz00_6379);
					}
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6378))->BgL_arrayzf3zf3) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_6300 = ((BgL_typez00_bglt) BgL_new1162z00_2938);
				return ((obj_t) BgL_auxz00_6300);
			}
		}

	}



/* &lambda1983 */
	BgL_typez00_bglt BGl_z62lambda1983z62zzforeign_ctypez00(obj_t BgL_envz00_2939,
		obj_t BgL_o1159z00_2940)
	{
		{	/* Foreign/ctype.scm 56 */
			{	/* Foreign/ctype.scm 56 */
				BgL_cptrz00_bglt BgL_wide1161z00_3266;

				BgL_wide1161z00_3266 =
					((BgL_cptrz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cptrz00_bgl))));
				{	/* Foreign/ctype.scm 56 */
					obj_t BgL_auxz00_6393;
					BgL_objectz00_bglt BgL_tmpz00_6389;

					BgL_auxz00_6393 = ((obj_t) BgL_wide1161z00_3266);
					BgL_tmpz00_6389 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1159z00_2940)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6389, BgL_auxz00_6393);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1159z00_2940)));
				{	/* Foreign/ctype.scm 56 */
					long BgL_arg1984z00_3267;

					{	/* Foreign/ctype.scm 56 */
						long BgL_res2171z00_3268;

						BgL_res2171z00_3268 =
							BGL_CLASS_INDEX(BGl_cptrz00zzforeign_ctypez00);
						BgL_arg1984z00_3267 = BgL_res2171z00_3268;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1159z00_2940))), BgL_arg1984z00_3267);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1159z00_2940)));
			}
		}

	}



/* &lambda1980 */
	BgL_typez00_bglt BGl_z62lambda1980z62zzforeign_ctypez00(obj_t BgL_envz00_2941,
		obj_t BgL_id1141z00_2942, obj_t BgL_name1142z00_2943,
		obj_t BgL_siza7e1143za7_2944, obj_t BgL_class1144z00_2945,
		obj_t BgL_coercezd2to1145zd2_2946, obj_t BgL_parents1146z00_2947,
		obj_t BgL_initzf31147zf3_2948, obj_t BgL_magiczf31148zf3_2949,
		obj_t BgL_z421149z42_2950, obj_t BgL_alias1150z00_2951,
		obj_t BgL_pointedzd2tozd2by1151z00_2952, obj_t BgL_tvector1152z00_2953,
		obj_t BgL_location1153z00_2954, obj_t BgL_importzd2location1154zd2_2955,
		obj_t BgL_occurrence1155z00_2956, obj_t BgL_btype1156z00_2957,
		obj_t BgL_pointzd2to1157zd2_2958, obj_t BgL_arrayzf31158zf3_2959)
	{
		{	/* Foreign/ctype.scm 56 */
			{	/* Foreign/ctype.scm 56 */
				bool_t BgL_initzf31147zf3_3270;
				bool_t BgL_magiczf31148zf3_3271;
				int BgL_occurrence1155z00_3272;
				bool_t BgL_arrayzf31158zf3_3275;

				BgL_initzf31147zf3_3270 = CBOOL(BgL_initzf31147zf3_2948);
				BgL_magiczf31148zf3_3271 = CBOOL(BgL_magiczf31148zf3_2949);
				BgL_occurrence1155z00_3272 = CINT(BgL_occurrence1155z00_2956);
				BgL_arrayzf31158zf3_3275 = CBOOL(BgL_arrayzf31158zf3_2959);
				{	/* Foreign/ctype.scm 56 */
					BgL_typez00_bglt BgL_new1303z00_3276;

					{	/* Foreign/ctype.scm 56 */
						BgL_typez00_bglt BgL_tmp1301z00_3277;
						BgL_cptrz00_bglt BgL_wide1302z00_3278;

						{
							BgL_typez00_bglt BgL_auxz00_6411;

							{	/* Foreign/ctype.scm 56 */
								BgL_typez00_bglt BgL_new1300z00_3279;

								BgL_new1300z00_3279 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 56 */
									long BgL_arg1982z00_3280;

									{	/* Foreign/ctype.scm 56 */
										long BgL_res2169z00_3281;

										BgL_res2169z00_3281 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1982z00_3280 = BgL_res2169z00_3281;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1300z00_3279),
										BgL_arg1982z00_3280);
								}
								{	/* Foreign/ctype.scm 56 */
									BgL_objectz00_bglt BgL_tmpz00_6416;

									BgL_tmpz00_6416 = ((BgL_objectz00_bglt) BgL_new1300z00_3279);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6416, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1300z00_3279);
								BgL_auxz00_6411 = BgL_new1300z00_3279;
							}
							BgL_tmp1301z00_3277 = ((BgL_typez00_bglt) BgL_auxz00_6411);
						}
						BgL_wide1302z00_3278 =
							((BgL_cptrz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cptrz00_bgl))));
						{	/* Foreign/ctype.scm 56 */
							obj_t BgL_auxz00_6424;
							BgL_objectz00_bglt BgL_tmpz00_6422;

							BgL_auxz00_6424 = ((obj_t) BgL_wide1302z00_3278);
							BgL_tmpz00_6422 = ((BgL_objectz00_bglt) BgL_tmp1301z00_3277);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6422, BgL_auxz00_6424);
						}
						((BgL_objectz00_bglt) BgL_tmp1301z00_3277);
						{	/* Foreign/ctype.scm 56 */
							long BgL_arg1981z00_3282;

							{	/* Foreign/ctype.scm 56 */
								long BgL_res2170z00_3283;

								BgL_res2170z00_3283 =
									BGL_CLASS_INDEX(BGl_cptrz00zzforeign_ctypez00);
								BgL_arg1981z00_3282 = BgL_res2170z00_3283;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1301z00_3277),
								BgL_arg1981z00_3282);
						}
						BgL_new1303z00_3276 = ((BgL_typez00_bglt) BgL_tmp1301z00_3277);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1303z00_3276)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1141z00_2942)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_namez00) =
						((obj_t) BgL_name1142z00_2943), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1143za7_2944), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_classz00) =
						((obj_t) BgL_class1144z00_2945), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1145zd2_2946), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_parentsz00) =
						((obj_t) BgL_parents1146z00_2947), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31147zf3_3270), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31148zf3_3271), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_z42z42) =
						((obj_t) BgL_z421149z42_2950), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_aliasz00) =
						((obj_t) BgL_alias1150z00_2951), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1151z00_2952), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1152z00_2953), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_locationz00) =
						((obj_t) BgL_location1153z00_2954), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1154zd2_2955), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1303z00_3276)))->BgL_occurrencez00) =
						((int) BgL_occurrence1155z00_3272), BUNSPEC);
					{
						BgL_cptrz00_bglt BgL_auxz00_6463;

						{
							obj_t BgL_auxz00_6464;

							{	/* Foreign/ctype.scm 56 */
								BgL_objectz00_bglt BgL_tmpz00_6465;

								BgL_tmpz00_6465 = ((BgL_objectz00_bglt) BgL_new1303z00_3276);
								BgL_auxz00_6464 = BGL_OBJECT_WIDENING(BgL_tmpz00_6465);
							}
							BgL_auxz00_6463 = ((BgL_cptrz00_bglt) BgL_auxz00_6464);
						}
						((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6463))->BgL_btypez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_btype1156z00_2957)),
							BUNSPEC);
					}
					{
						BgL_cptrz00_bglt BgL_auxz00_6471;

						{
							obj_t BgL_auxz00_6472;

							{	/* Foreign/ctype.scm 56 */
								BgL_objectz00_bglt BgL_tmpz00_6473;

								BgL_tmpz00_6473 = ((BgL_objectz00_bglt) BgL_new1303z00_3276);
								BgL_auxz00_6472 = BGL_OBJECT_WIDENING(BgL_tmpz00_6473);
							}
							BgL_auxz00_6471 = ((BgL_cptrz00_bglt) BgL_auxz00_6472);
						}
						((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6471))->
								BgL_pointzd2tozd2) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BgL_pointzd2to1157zd2_2958)), BUNSPEC);
					}
					{
						BgL_cptrz00_bglt BgL_auxz00_6479;

						{
							obj_t BgL_auxz00_6480;

							{	/* Foreign/ctype.scm 56 */
								BgL_objectz00_bglt BgL_tmpz00_6481;

								BgL_tmpz00_6481 = ((BgL_objectz00_bglt) BgL_new1303z00_3276);
								BgL_auxz00_6480 = BGL_OBJECT_WIDENING(BgL_tmpz00_6481);
							}
							BgL_auxz00_6479 = ((BgL_cptrz00_bglt) BgL_auxz00_6480);
						}
						((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6479))->BgL_arrayzf3zf3) =
							((bool_t) BgL_arrayzf31158zf3_3275), BUNSPEC);
					}
					return BgL_new1303z00_3276;
				}
			}
		}

	}



/* &<@anonymous:2006> */
	obj_t BGl_z62zc3z04anonymousza32006ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2960)
	{
		{	/* Foreign/ctype.scm 56 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda2005 */
	obj_t BGl_z62lambda2005z62zzforeign_ctypez00(obj_t BgL_envz00_2961,
		obj_t BgL_oz00_2962, obj_t BgL_vz00_2963)
	{
		{	/* Foreign/ctype.scm 56 */
			{	/* Foreign/ctype.scm 56 */
				bool_t BgL_vz00_3285;

				BgL_vz00_3285 = CBOOL(BgL_vz00_2963);
				{
					BgL_cptrz00_bglt BgL_auxz00_6488;

					{
						obj_t BgL_auxz00_6489;

						{	/* Foreign/ctype.scm 56 */
							BgL_objectz00_bglt BgL_tmpz00_6490;

							BgL_tmpz00_6490 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2962));
							BgL_auxz00_6489 = BGL_OBJECT_WIDENING(BgL_tmpz00_6490);
						}
						BgL_auxz00_6488 = ((BgL_cptrz00_bglt) BgL_auxz00_6489);
					}
					return
						((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6488))->BgL_arrayzf3zf3) =
						((bool_t) BgL_vz00_3285), BUNSPEC);
				}
			}
		}

	}



/* &lambda2004 */
	obj_t BGl_z62lambda2004z62zzforeign_ctypez00(obj_t BgL_envz00_2964,
		obj_t BgL_oz00_2965)
	{
		{	/* Foreign/ctype.scm 56 */
			{	/* Foreign/ctype.scm 56 */
				bool_t BgL_tmpz00_6496;

				{
					BgL_cptrz00_bglt BgL_auxz00_6497;

					{
						obj_t BgL_auxz00_6498;

						{	/* Foreign/ctype.scm 56 */
							BgL_objectz00_bglt BgL_tmpz00_6499;

							BgL_tmpz00_6499 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2965));
							BgL_auxz00_6498 = BGL_OBJECT_WIDENING(BgL_tmpz00_6499);
						}
						BgL_auxz00_6497 = ((BgL_cptrz00_bglt) BgL_auxz00_6498);
					}
					BgL_tmpz00_6496 =
						(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6497))->BgL_arrayzf3zf3);
				}
				return BBOOL(BgL_tmpz00_6496);
			}
		}

	}



/* &lambda1999 */
	obj_t BGl_z62lambda1999z62zzforeign_ctypez00(obj_t BgL_envz00_2966,
		obj_t BgL_oz00_2967, obj_t BgL_vz00_2968)
	{
		{	/* Foreign/ctype.scm 56 */
			{
				BgL_cptrz00_bglt BgL_auxz00_6506;

				{
					obj_t BgL_auxz00_6507;

					{	/* Foreign/ctype.scm 56 */
						BgL_objectz00_bglt BgL_tmpz00_6508;

						BgL_tmpz00_6508 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2967));
						BgL_auxz00_6507 = BGL_OBJECT_WIDENING(BgL_tmpz00_6508);
					}
					BgL_auxz00_6506 = ((BgL_cptrz00_bglt) BgL_auxz00_6507);
				}
				return
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6506))->BgL_pointzd2tozd2) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_2968)), BUNSPEC);
			}
		}

	}



/* &lambda1998 */
	BgL_typez00_bglt BGl_z62lambda1998z62zzforeign_ctypez00(obj_t BgL_envz00_2969,
		obj_t BgL_oz00_2970)
	{
		{	/* Foreign/ctype.scm 56 */
			{
				BgL_cptrz00_bglt BgL_auxz00_6515;

				{
					obj_t BgL_auxz00_6516;

					{	/* Foreign/ctype.scm 56 */
						BgL_objectz00_bglt BgL_tmpz00_6517;

						BgL_tmpz00_6517 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2970));
						BgL_auxz00_6516 = BGL_OBJECT_WIDENING(BgL_tmpz00_6517);
					}
					BgL_auxz00_6515 = ((BgL_cptrz00_bglt) BgL_auxz00_6516);
				}
				return
					(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6515))->BgL_pointzd2tozd2);
			}
		}

	}



/* &lambda1994 */
	obj_t BGl_z62lambda1994z62zzforeign_ctypez00(obj_t BgL_envz00_2971,
		obj_t BgL_oz00_2972, obj_t BgL_vz00_2973)
	{
		{	/* Foreign/ctype.scm 56 */
			{
				BgL_cptrz00_bglt BgL_auxz00_6523;

				{
					obj_t BgL_auxz00_6524;

					{	/* Foreign/ctype.scm 56 */
						BgL_objectz00_bglt BgL_tmpz00_6525;

						BgL_tmpz00_6525 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2972));
						BgL_auxz00_6524 = BGL_OBJECT_WIDENING(BgL_tmpz00_6525);
					}
					BgL_auxz00_6523 = ((BgL_cptrz00_bglt) BgL_auxz00_6524);
				}
				return
					((((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6523))->BgL_btypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_2973)), BUNSPEC);
			}
		}

	}



/* &lambda1993 */
	BgL_typez00_bglt BGl_z62lambda1993z62zzforeign_ctypez00(obj_t BgL_envz00_2974,
		obj_t BgL_oz00_2975)
	{
		{	/* Foreign/ctype.scm 56 */
			{
				BgL_cptrz00_bglt BgL_auxz00_6532;

				{
					obj_t BgL_auxz00_6533;

					{	/* Foreign/ctype.scm 56 */
						BgL_objectz00_bglt BgL_tmpz00_6534;

						BgL_tmpz00_6534 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2975));
						BgL_auxz00_6533 = BGL_OBJECT_WIDENING(BgL_tmpz00_6534);
					}
					BgL_auxz00_6532 = ((BgL_cptrz00_bglt) BgL_auxz00_6533);
				}
				return (((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_6532))->BgL_btypez00);
			}
		}

	}



/* &lambda1948 */
	BgL_typez00_bglt BGl_z62lambda1948z62zzforeign_ctypez00(obj_t BgL_envz00_2976,
		obj_t BgL_o1139z00_2977)
	{
		{	/* Foreign/ctype.scm 46 */
			{	/* Foreign/ctype.scm 46 */
				long BgL_arg1949z00_3294;

				{	/* Foreign/ctype.scm 46 */
					obj_t BgL_arg1951z00_3295;

					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_arg1952z00_3296;

						{	/* Foreign/ctype.scm 46 */
							long BgL_arg1816z00_3297;

							{	/* Foreign/ctype.scm 46 */
								long BgL_arg1817z00_3298;

								{	/* Foreign/ctype.scm 46 */
									long BgL_res2166z00_3299;

									BgL_res2166z00_3299 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1139z00_2977)));
									BgL_arg1817z00_3298 = BgL_res2166z00_3299;
								}
								BgL_arg1816z00_3297 = (BgL_arg1817z00_3298 - OBJECT_TYPE);
							}
							BgL_arg1952z00_3296 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3297);
						}
						BgL_arg1951z00_3295 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1952z00_3296);
					}
					{	/* Foreign/ctype.scm 46 */
						long BgL_res2168z00_3300;

						{	/* Foreign/ctype.scm 46 */
							obj_t BgL_tmpz00_6546;

							BgL_tmpz00_6546 = ((obj_t) BgL_arg1951z00_3295);
							BgL_res2168z00_3300 = BGL_CLASS_INDEX(BgL_tmpz00_6546);
						}
						BgL_arg1949z00_3294 = BgL_res2168z00_3300;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1139z00_2977)), BgL_arg1949z00_3294);
			}
			{	/* Foreign/ctype.scm 46 */
				BgL_objectz00_bglt BgL_tmpz00_6552;

				BgL_tmpz00_6552 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2977));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6552, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2977));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2977));
		}

	}



/* &<@anonymous:1947> */
	obj_t BGl_z62zc3z04anonymousza31947ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_2978, obj_t BgL_new1138z00_2979)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_typez00_bglt BgL_auxz00_6560;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1138z00_2979))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2979))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6615;
					BgL_cfunctionz00_bglt BgL_auxz00_6608;

					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_classz00_3302;

						BgL_classz00_3302 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 46 */
							obj_t BgL__ortest_1106z00_3303;

							BgL__ortest_1106z00_3303 = BGL_CLASS_NIL(BgL_classz00_3302);
							if (CBOOL(BgL__ortest_1106z00_3303))
								{	/* Foreign/ctype.scm 46 */
									BgL_auxz00_6615 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3303);
								}
							else
								{	/* Foreign/ctype.scm 46 */
									BgL_auxz00_6615 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3302));
								}
						}
					}
					{
						obj_t BgL_auxz00_6609;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6610;

							BgL_tmpz00_6610 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1138z00_2979));
							BgL_auxz00_6609 = BGL_OBJECT_WIDENING(BgL_tmpz00_6610);
						}
						BgL_auxz00_6608 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6609);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6608))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_auxz00_6615), BUNSPEC);
				}
				{
					BgL_cfunctionz00_bglt BgL_auxz00_6623;

					{
						obj_t BgL_auxz00_6624;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6625;

							BgL_tmpz00_6625 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1138z00_2979));
							BgL_auxz00_6624 = BGL_OBJECT_WIDENING(BgL_tmpz00_6625);
						}
						BgL_auxz00_6623 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6624);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6623))->BgL_arityz00) =
						((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_6638;
					BgL_cfunctionz00_bglt BgL_auxz00_6631;

					{	/* Foreign/ctype.scm 46 */
						obj_t BgL_classz00_3304;

						BgL_classz00_3304 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 46 */
							obj_t BgL__ortest_1106z00_3305;

							BgL__ortest_1106z00_3305 = BGL_CLASS_NIL(BgL_classz00_3304);
							if (CBOOL(BgL__ortest_1106z00_3305))
								{	/* Foreign/ctype.scm 46 */
									BgL_auxz00_6638 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3305);
								}
							else
								{	/* Foreign/ctype.scm 46 */
									BgL_auxz00_6638 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3304));
								}
						}
					}
					{
						obj_t BgL_auxz00_6632;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6633;

							BgL_tmpz00_6633 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1138z00_2979));
							BgL_auxz00_6632 = BGL_OBJECT_WIDENING(BgL_tmpz00_6633);
						}
						BgL_auxz00_6631 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6632);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6631))->
							BgL_typezd2reszd2) =
						((BgL_typez00_bglt) BgL_auxz00_6638), BUNSPEC);
				}
				{
					BgL_cfunctionz00_bglt BgL_auxz00_6646;

					{
						obj_t BgL_auxz00_6647;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6648;

							BgL_tmpz00_6648 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1138z00_2979));
							BgL_auxz00_6647 = BGL_OBJECT_WIDENING(BgL_tmpz00_6648);
						}
						BgL_auxz00_6646 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6647);
					}
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6646))->
							BgL_typezd2argszd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6560 = ((BgL_typez00_bglt) BgL_new1138z00_2979);
				return ((obj_t) BgL_auxz00_6560);
			}
		}

	}



/* &lambda1945 */
	BgL_typez00_bglt BGl_z62lambda1945z62zzforeign_ctypez00(obj_t BgL_envz00_2980,
		obj_t BgL_o1135z00_2981)
	{
		{	/* Foreign/ctype.scm 46 */
			{	/* Foreign/ctype.scm 46 */
				BgL_cfunctionz00_bglt BgL_wide1137z00_3307;

				BgL_wide1137z00_3307 =
					((BgL_cfunctionz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cfunctionz00_bgl))));
				{	/* Foreign/ctype.scm 46 */
					obj_t BgL_auxz00_6661;
					BgL_objectz00_bglt BgL_tmpz00_6657;

					BgL_auxz00_6661 = ((obj_t) BgL_wide1137z00_3307);
					BgL_tmpz00_6657 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2981)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6657, BgL_auxz00_6661);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2981)));
				{	/* Foreign/ctype.scm 46 */
					long BgL_arg1946z00_3308;

					{	/* Foreign/ctype.scm 46 */
						long BgL_res2165z00_3309;

						BgL_res2165z00_3309 =
							BGL_CLASS_INDEX(BGl_cfunctionz00zzforeign_ctypez00);
						BgL_arg1946z00_3308 = BgL_res2165z00_3309;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1135z00_2981))), BgL_arg1946z00_3308);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2981)));
			}
		}

	}



/* &lambda1942 */
	BgL_typez00_bglt BGl_z62lambda1942z62zzforeign_ctypez00(obj_t BgL_envz00_2982,
		obj_t BgL_id1116z00_2983, obj_t BgL_name1117z00_2984,
		obj_t BgL_siza7e1118za7_2985, obj_t BgL_class1119z00_2986,
		obj_t BgL_coercezd2to1120zd2_2987, obj_t BgL_parents1121z00_2988,
		obj_t BgL_initzf31122zf3_2989, obj_t BgL_magiczf31123zf3_2990,
		obj_t BgL_z421124z42_2991, obj_t BgL_alias1125z00_2992,
		obj_t BgL_pointedzd2tozd2by1126z00_2993, obj_t BgL_tvector1127z00_2994,
		obj_t BgL_location1128z00_2995, obj_t BgL_importzd2location1129zd2_2996,
		obj_t BgL_occurrence1130z00_2997, obj_t BgL_btype1131z00_2998,
		obj_t BgL_arity1132z00_2999, obj_t BgL_typezd2res1133zd2_3000,
		obj_t BgL_typezd2args1134zd2_3001)
	{
		{	/* Foreign/ctype.scm 46 */
			{	/* Foreign/ctype.scm 46 */
				bool_t BgL_initzf31122zf3_3311;
				bool_t BgL_magiczf31123zf3_3312;
				int BgL_occurrence1130z00_3313;
				long BgL_arity1132z00_3315;

				BgL_initzf31122zf3_3311 = CBOOL(BgL_initzf31122zf3_2989);
				BgL_magiczf31123zf3_3312 = CBOOL(BgL_magiczf31123zf3_2990);
				BgL_occurrence1130z00_3313 = CINT(BgL_occurrence1130z00_2997);
				BgL_arity1132z00_3315 = (long) CINT(BgL_arity1132z00_2999);
				{	/* Foreign/ctype.scm 46 */
					BgL_typez00_bglt BgL_new1298z00_3317;

					{	/* Foreign/ctype.scm 46 */
						BgL_typez00_bglt BgL_tmp1296z00_3318;
						BgL_cfunctionz00_bglt BgL_wide1297z00_3319;

						{
							BgL_typez00_bglt BgL_auxz00_6679;

							{	/* Foreign/ctype.scm 46 */
								BgL_typez00_bglt BgL_new1295z00_3320;

								BgL_new1295z00_3320 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 46 */
									long BgL_arg1944z00_3321;

									{	/* Foreign/ctype.scm 46 */
										long BgL_res2163z00_3322;

										BgL_res2163z00_3322 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1944z00_3321 = BgL_res2163z00_3322;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1295z00_3320),
										BgL_arg1944z00_3321);
								}
								{	/* Foreign/ctype.scm 46 */
									BgL_objectz00_bglt BgL_tmpz00_6684;

									BgL_tmpz00_6684 = ((BgL_objectz00_bglt) BgL_new1295z00_3320);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6684, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1295z00_3320);
								BgL_auxz00_6679 = BgL_new1295z00_3320;
							}
							BgL_tmp1296z00_3318 = ((BgL_typez00_bglt) BgL_auxz00_6679);
						}
						BgL_wide1297z00_3319 =
							((BgL_cfunctionz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cfunctionz00_bgl))));
						{	/* Foreign/ctype.scm 46 */
							obj_t BgL_auxz00_6692;
							BgL_objectz00_bglt BgL_tmpz00_6690;

							BgL_auxz00_6692 = ((obj_t) BgL_wide1297z00_3319);
							BgL_tmpz00_6690 = ((BgL_objectz00_bglt) BgL_tmp1296z00_3318);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6690, BgL_auxz00_6692);
						}
						((BgL_objectz00_bglt) BgL_tmp1296z00_3318);
						{	/* Foreign/ctype.scm 46 */
							long BgL_arg1943z00_3323;

							{	/* Foreign/ctype.scm 46 */
								long BgL_res2164z00_3324;

								BgL_res2164z00_3324 =
									BGL_CLASS_INDEX(BGl_cfunctionz00zzforeign_ctypez00);
								BgL_arg1943z00_3323 = BgL_res2164z00_3324;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1296z00_3318),
								BgL_arg1943z00_3323);
						}
						BgL_new1298z00_3317 = ((BgL_typez00_bglt) BgL_tmp1296z00_3318);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1298z00_3317)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1116z00_2983)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_namez00) =
						((obj_t) BgL_name1117z00_2984), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1118za7_2985), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_classz00) =
						((obj_t) BgL_class1119z00_2986), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1120zd2_2987), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_parentsz00) =
						((obj_t) BgL_parents1121z00_2988), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31122zf3_3311), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31123zf3_3312), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_z42z42) =
						((obj_t) BgL_z421124z42_2991), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_aliasz00) =
						((obj_t) BgL_alias1125z00_2992), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1126z00_2993), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1127z00_2994), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_locationz00) =
						((obj_t) BgL_location1128z00_2995), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1129zd2_2996), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1298z00_3317)))->BgL_occurrencez00) =
						((int) BgL_occurrence1130z00_3313), BUNSPEC);
					{
						BgL_cfunctionz00_bglt BgL_auxz00_6731;

						{
							obj_t BgL_auxz00_6732;

							{	/* Foreign/ctype.scm 46 */
								BgL_objectz00_bglt BgL_tmpz00_6733;

								BgL_tmpz00_6733 = ((BgL_objectz00_bglt) BgL_new1298z00_3317);
								BgL_auxz00_6732 = BGL_OBJECT_WIDENING(BgL_tmpz00_6733);
							}
							BgL_auxz00_6731 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6732);
						}
						((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6731))->
								BgL_btypez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_btype1131z00_2998)),
							BUNSPEC);
					}
					{
						BgL_cfunctionz00_bglt BgL_auxz00_6739;

						{
							obj_t BgL_auxz00_6740;

							{	/* Foreign/ctype.scm 46 */
								BgL_objectz00_bglt BgL_tmpz00_6741;

								BgL_tmpz00_6741 = ((BgL_objectz00_bglt) BgL_new1298z00_3317);
								BgL_auxz00_6740 = BGL_OBJECT_WIDENING(BgL_tmpz00_6741);
							}
							BgL_auxz00_6739 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6740);
						}
						((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6739))->
								BgL_arityz00) = ((long) BgL_arity1132z00_3315), BUNSPEC);
					}
					{
						BgL_cfunctionz00_bglt BgL_auxz00_6746;

						{
							obj_t BgL_auxz00_6747;

							{	/* Foreign/ctype.scm 46 */
								BgL_objectz00_bglt BgL_tmpz00_6748;

								BgL_tmpz00_6748 = ((BgL_objectz00_bglt) BgL_new1298z00_3317);
								BgL_auxz00_6747 = BGL_OBJECT_WIDENING(BgL_tmpz00_6748);
							}
							BgL_auxz00_6746 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6747);
						}
						((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6746))->
								BgL_typezd2reszd2) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BgL_typezd2res1133zd2_3000)), BUNSPEC);
					}
					{
						BgL_cfunctionz00_bglt BgL_auxz00_6754;

						{
							obj_t BgL_auxz00_6755;

							{	/* Foreign/ctype.scm 46 */
								BgL_objectz00_bglt BgL_tmpz00_6756;

								BgL_tmpz00_6756 = ((BgL_objectz00_bglt) BgL_new1298z00_3317);
								BgL_auxz00_6755 = BGL_OBJECT_WIDENING(BgL_tmpz00_6756);
							}
							BgL_auxz00_6754 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6755);
						}
						((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6754))->
								BgL_typezd2argszd2) =
							((obj_t) BgL_typezd2args1134zd2_3001), BUNSPEC);
					}
					return BgL_new1298z00_3317;
				}
			}
		}

	}



/* &lambda1972 */
	obj_t BGl_z62lambda1972z62zzforeign_ctypez00(obj_t BgL_envz00_3002,
		obj_t BgL_oz00_3003, obj_t BgL_vz00_3004)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6761;

				{
					obj_t BgL_auxz00_6762;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6763;

						BgL_tmpz00_6763 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3003));
						BgL_auxz00_6762 = BGL_OBJECT_WIDENING(BgL_tmpz00_6763);
					}
					BgL_auxz00_6761 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6762);
				}
				return
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6761))->
						BgL_typezd2argszd2) = ((obj_t) BgL_vz00_3004), BUNSPEC);
			}
		}

	}



/* &lambda1971 */
	obj_t BGl_z62lambda1971z62zzforeign_ctypez00(obj_t BgL_envz00_3005,
		obj_t BgL_oz00_3006)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6769;

				{
					obj_t BgL_auxz00_6770;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6771;

						BgL_tmpz00_6771 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3006));
						BgL_auxz00_6770 = BGL_OBJECT_WIDENING(BgL_tmpz00_6771);
					}
					BgL_auxz00_6769 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6770);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6769))->
					BgL_typezd2argszd2);
			}
		}

	}



/* &lambda1967 */
	obj_t BGl_z62lambda1967z62zzforeign_ctypez00(obj_t BgL_envz00_3007,
		obj_t BgL_oz00_3008, obj_t BgL_vz00_3009)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6777;

				{
					obj_t BgL_auxz00_6778;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6779;

						BgL_tmpz00_6779 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3008));
						BgL_auxz00_6778 = BGL_OBJECT_WIDENING(BgL_tmpz00_6779);
					}
					BgL_auxz00_6777 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6778);
				}
				return
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6777))->
						BgL_typezd2reszd2) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_3009)), BUNSPEC);
			}
		}

	}



/* &lambda1966 */
	BgL_typez00_bglt BGl_z62lambda1966z62zzforeign_ctypez00(obj_t BgL_envz00_3010,
		obj_t BgL_oz00_3011)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6786;

				{
					obj_t BgL_auxz00_6787;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6788;

						BgL_tmpz00_6788 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3011));
						BgL_auxz00_6787 = BGL_OBJECT_WIDENING(BgL_tmpz00_6788);
					}
					BgL_auxz00_6786 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6787);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6786))->
					BgL_typezd2reszd2);
			}
		}

	}



/* &lambda1962 */
	obj_t BGl_z62lambda1962z62zzforeign_ctypez00(obj_t BgL_envz00_3012,
		obj_t BgL_oz00_3013, obj_t BgL_vz00_3014)
	{
		{	/* Foreign/ctype.scm 46 */
			{	/* Foreign/ctype.scm 46 */
				long BgL_vz00_3331;

				BgL_vz00_3331 = (long) CINT(BgL_vz00_3014);
				{
					BgL_cfunctionz00_bglt BgL_auxz00_6795;

					{
						obj_t BgL_auxz00_6796;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6797;

							BgL_tmpz00_6797 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3013));
							BgL_auxz00_6796 = BGL_OBJECT_WIDENING(BgL_tmpz00_6797);
						}
						BgL_auxz00_6795 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6796);
					}
					return
						((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6795))->
							BgL_arityz00) = ((long) BgL_vz00_3331), BUNSPEC);
		}}}

	}



/* &lambda1961 */
	obj_t BGl_z62lambda1961z62zzforeign_ctypez00(obj_t BgL_envz00_3015,
		obj_t BgL_oz00_3016)
	{
		{	/* Foreign/ctype.scm 46 */
			{	/* Foreign/ctype.scm 46 */
				long BgL_tmpz00_6803;

				{
					BgL_cfunctionz00_bglt BgL_auxz00_6804;

					{
						obj_t BgL_auxz00_6805;

						{	/* Foreign/ctype.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_6806;

							BgL_tmpz00_6806 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3016));
							BgL_auxz00_6805 = BGL_OBJECT_WIDENING(BgL_tmpz00_6806);
						}
						BgL_auxz00_6804 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6805);
					}
					BgL_tmpz00_6803 =
						(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6804))->BgL_arityz00);
				}
				return BINT(BgL_tmpz00_6803);
			}
		}

	}



/* &lambda1957 */
	obj_t BGl_z62lambda1957z62zzforeign_ctypez00(obj_t BgL_envz00_3017,
		obj_t BgL_oz00_3018, obj_t BgL_vz00_3019)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6813;

				{
					obj_t BgL_auxz00_6814;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6815;

						BgL_tmpz00_6815 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3018));
						BgL_auxz00_6814 = BGL_OBJECT_WIDENING(BgL_tmpz00_6815);
					}
					BgL_auxz00_6813 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6814);
				}
				return
					((((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6813))->BgL_btypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_3019)), BUNSPEC);
			}
		}

	}



/* &lambda1956 */
	BgL_typez00_bglt BGl_z62lambda1956z62zzforeign_ctypez00(obj_t BgL_envz00_3020,
		obj_t BgL_oz00_3021)
	{
		{	/* Foreign/ctype.scm 46 */
			{
				BgL_cfunctionz00_bglt BgL_auxz00_6822;

				{
					obj_t BgL_auxz00_6823;

					{	/* Foreign/ctype.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_6824;

						BgL_tmpz00_6824 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3021));
						BgL_auxz00_6823 = BGL_OBJECT_WIDENING(BgL_tmpz00_6824);
					}
					BgL_auxz00_6822 = ((BgL_cfunctionz00_bglt) BgL_auxz00_6823);
				}
				return
					(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_6822))->BgL_btypez00);
			}
		}

	}



/* &lambda1927 */
	BgL_typez00_bglt BGl_z62lambda1927z62zzforeign_ctypez00(obj_t BgL_envz00_3022,
		obj_t BgL_o1114z00_3023)
	{
		{	/* Foreign/ctype.scm 42 */
			{	/* Foreign/ctype.scm 42 */
				long BgL_arg1928z00_3337;

				{	/* Foreign/ctype.scm 42 */
					obj_t BgL_arg1929z00_3338;

					{	/* Foreign/ctype.scm 42 */
						obj_t BgL_arg1930z00_3339;

						{	/* Foreign/ctype.scm 42 */
							long BgL_arg1816z00_3340;

							{	/* Foreign/ctype.scm 42 */
								long BgL_arg1817z00_3341;

								{	/* Foreign/ctype.scm 42 */
									long BgL_res2160z00_3342;

									BgL_res2160z00_3342 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1114z00_3023)));
									BgL_arg1817z00_3341 = BgL_res2160z00_3342;
								}
								BgL_arg1816z00_3340 = (BgL_arg1817z00_3341 - OBJECT_TYPE);
							}
							BgL_arg1930z00_3339 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3340);
						}
						BgL_arg1929z00_3338 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1930z00_3339);
					}
					{	/* Foreign/ctype.scm 42 */
						long BgL_res2162z00_3343;

						{	/* Foreign/ctype.scm 42 */
							obj_t BgL_tmpz00_6836;

							BgL_tmpz00_6836 = ((obj_t) BgL_arg1929z00_3338);
							BgL_res2162z00_3343 = BGL_CLASS_INDEX(BgL_tmpz00_6836);
						}
						BgL_arg1928z00_3337 = BgL_res2162z00_3343;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1114z00_3023)), BgL_arg1928z00_3337);
			}
			{	/* Foreign/ctype.scm 42 */
				BgL_objectz00_bglt BgL_tmpz00_6842;

				BgL_tmpz00_6842 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1114z00_3023));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6842, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1114z00_3023));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1114z00_3023));
		}

	}



/* &<@anonymous:1926> */
	obj_t BGl_z62zc3z04anonymousza31926ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_3024, obj_t BgL_new1113z00_3025)
	{
		{	/* Foreign/ctype.scm 42 */
			{
				BgL_typez00_bglt BgL_auxz00_6850;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1113z00_3025))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1113z00_3025))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6905;
					BgL_copaquez00_bglt BgL_auxz00_6898;

					{	/* Foreign/ctype.scm 42 */
						obj_t BgL_classz00_3345;

						BgL_classz00_3345 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 42 */
							obj_t BgL__ortest_1106z00_3346;

							BgL__ortest_1106z00_3346 = BGL_CLASS_NIL(BgL_classz00_3345);
							if (CBOOL(BgL__ortest_1106z00_3346))
								{	/* Foreign/ctype.scm 42 */
									BgL_auxz00_6905 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3346);
								}
							else
								{	/* Foreign/ctype.scm 42 */
									BgL_auxz00_6905 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3345));
								}
						}
					}
					{
						obj_t BgL_auxz00_6899;

						{	/* Foreign/ctype.scm 42 */
							BgL_objectz00_bglt BgL_tmpz00_6900;

							BgL_tmpz00_6900 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1113z00_3025));
							BgL_auxz00_6899 = BGL_OBJECT_WIDENING(BgL_tmpz00_6900);
						}
						BgL_auxz00_6898 = ((BgL_copaquez00_bglt) BgL_auxz00_6899);
					}
					((((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_6898))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_auxz00_6905), BUNSPEC);
				}
				BgL_auxz00_6850 = ((BgL_typez00_bglt) BgL_new1113z00_3025);
				return ((obj_t) BgL_auxz00_6850);
			}
		}

	}



/* &lambda1924 */
	BgL_typez00_bglt BGl_z62lambda1924z62zzforeign_ctypez00(obj_t BgL_envz00_3026,
		obj_t BgL_o1110z00_3027)
	{
		{	/* Foreign/ctype.scm 42 */
			{	/* Foreign/ctype.scm 42 */
				BgL_copaquez00_bglt BgL_wide1112z00_3348;

				BgL_wide1112z00_3348 =
					((BgL_copaquez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_copaquez00_bgl))));
				{	/* Foreign/ctype.scm 42 */
					obj_t BgL_auxz00_6920;
					BgL_objectz00_bglt BgL_tmpz00_6916;

					BgL_auxz00_6920 = ((obj_t) BgL_wide1112z00_3348);
					BgL_tmpz00_6916 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1110z00_3027)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6916, BgL_auxz00_6920);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1110z00_3027)));
				{	/* Foreign/ctype.scm 42 */
					long BgL_arg1925z00_3349;

					{	/* Foreign/ctype.scm 42 */
						long BgL_res2159z00_3350;

						BgL_res2159z00_3350 =
							BGL_CLASS_INDEX(BGl_copaquez00zzforeign_ctypez00);
						BgL_arg1925z00_3349 = BgL_res2159z00_3350;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1110z00_3027))), BgL_arg1925z00_3349);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1110z00_3027)));
			}
		}

	}



/* &lambda1920 */
	BgL_typez00_bglt BGl_z62lambda1920z62zzforeign_ctypez00(obj_t BgL_envz00_3028,
		obj_t BgL_id1094z00_3029, obj_t BgL_name1095z00_3030,
		obj_t BgL_siza7e1096za7_3031, obj_t BgL_class1097z00_3032,
		obj_t BgL_coercezd2to1098zd2_3033, obj_t BgL_parents1099z00_3034,
		obj_t BgL_initzf31100zf3_3035, obj_t BgL_magiczf31101zf3_3036,
		obj_t BgL_z421102z42_3037, obj_t BgL_alias1103z00_3038,
		obj_t BgL_pointedzd2tozd2by1104z00_3039, obj_t BgL_tvector1105z00_3040,
		obj_t BgL_location1106z00_3041, obj_t BgL_importzd2location1107zd2_3042,
		obj_t BgL_occurrence1108z00_3043, obj_t BgL_btype1109z00_3044)
	{
		{	/* Foreign/ctype.scm 42 */
			{	/* Foreign/ctype.scm 42 */
				bool_t BgL_initzf31100zf3_3352;
				bool_t BgL_magiczf31101zf3_3353;
				int BgL_occurrence1108z00_3354;

				BgL_initzf31100zf3_3352 = CBOOL(BgL_initzf31100zf3_3035);
				BgL_magiczf31101zf3_3353 = CBOOL(BgL_magiczf31101zf3_3036);
				BgL_occurrence1108z00_3354 = CINT(BgL_occurrence1108z00_3043);
				{	/* Foreign/ctype.scm 42 */
					BgL_typez00_bglt BgL_new1293z00_3356;

					{	/* Foreign/ctype.scm 42 */
						BgL_typez00_bglt BgL_tmp1291z00_3357;
						BgL_copaquez00_bglt BgL_wide1292z00_3358;

						{
							BgL_typez00_bglt BgL_auxz00_6937;

							{	/* Foreign/ctype.scm 42 */
								BgL_typez00_bglt BgL_new1290z00_3359;

								BgL_new1290z00_3359 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 42 */
									long BgL_arg1923z00_3360;

									{	/* Foreign/ctype.scm 42 */
										long BgL_res2157z00_3361;

										BgL_res2157z00_3361 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1923z00_3360 = BgL_res2157z00_3361;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1290z00_3359),
										BgL_arg1923z00_3360);
								}
								{	/* Foreign/ctype.scm 42 */
									BgL_objectz00_bglt BgL_tmpz00_6942;

									BgL_tmpz00_6942 = ((BgL_objectz00_bglt) BgL_new1290z00_3359);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6942, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1290z00_3359);
								BgL_auxz00_6937 = BgL_new1290z00_3359;
							}
							BgL_tmp1291z00_3357 = ((BgL_typez00_bglt) BgL_auxz00_6937);
						}
						BgL_wide1292z00_3358 =
							((BgL_copaquez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_copaquez00_bgl))));
						{	/* Foreign/ctype.scm 42 */
							obj_t BgL_auxz00_6950;
							BgL_objectz00_bglt BgL_tmpz00_6948;

							BgL_auxz00_6950 = ((obj_t) BgL_wide1292z00_3358);
							BgL_tmpz00_6948 = ((BgL_objectz00_bglt) BgL_tmp1291z00_3357);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6948, BgL_auxz00_6950);
						}
						((BgL_objectz00_bglt) BgL_tmp1291z00_3357);
						{	/* Foreign/ctype.scm 42 */
							long BgL_arg1921z00_3362;

							{	/* Foreign/ctype.scm 42 */
								long BgL_res2158z00_3363;

								BgL_res2158z00_3363 =
									BGL_CLASS_INDEX(BGl_copaquez00zzforeign_ctypez00);
								BgL_arg1921z00_3362 = BgL_res2158z00_3363;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1291z00_3357),
								BgL_arg1921z00_3362);
						}
						BgL_new1293z00_3356 = ((BgL_typez00_bglt) BgL_tmp1291z00_3357);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1293z00_3356)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1094z00_3029)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_namez00) =
						((obj_t) BgL_name1095z00_3030), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1096za7_3031), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_classz00) =
						((obj_t) BgL_class1097z00_3032), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1098zd2_3033), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_parentsz00) =
						((obj_t) BgL_parents1099z00_3034), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31100zf3_3352), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31101zf3_3353), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_z42z42) =
						((obj_t) BgL_z421102z42_3037), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_aliasz00) =
						((obj_t) BgL_alias1103z00_3038), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1104z00_3039), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1105z00_3040), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_locationz00) =
						((obj_t) BgL_location1106z00_3041), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1107zd2_3042), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1293z00_3356)))->BgL_occurrencez00) =
						((int) BgL_occurrence1108z00_3354), BUNSPEC);
					{
						BgL_copaquez00_bglt BgL_auxz00_6989;

						{
							obj_t BgL_auxz00_6990;

							{	/* Foreign/ctype.scm 42 */
								BgL_objectz00_bglt BgL_tmpz00_6991;

								BgL_tmpz00_6991 = ((BgL_objectz00_bglt) BgL_new1293z00_3356);
								BgL_auxz00_6990 = BGL_OBJECT_WIDENING(BgL_tmpz00_6991);
							}
							BgL_auxz00_6989 = ((BgL_copaquez00_bglt) BgL_auxz00_6990);
						}
						((((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_6989))->BgL_btypez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_btype1109z00_3044)),
							BUNSPEC);
					}
					return BgL_new1293z00_3356;
				}
			}
		}

	}



/* &lambda1935 */
	obj_t BGl_z62lambda1935z62zzforeign_ctypez00(obj_t BgL_envz00_3045,
		obj_t BgL_oz00_3046, obj_t BgL_vz00_3047)
	{
		{	/* Foreign/ctype.scm 42 */
			{
				BgL_copaquez00_bglt BgL_auxz00_6997;

				{
					obj_t BgL_auxz00_6998;

					{	/* Foreign/ctype.scm 42 */
						BgL_objectz00_bglt BgL_tmpz00_6999;

						BgL_tmpz00_6999 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3046));
						BgL_auxz00_6998 = BGL_OBJECT_WIDENING(BgL_tmpz00_6999);
					}
					BgL_auxz00_6997 = ((BgL_copaquez00_bglt) BgL_auxz00_6998);
				}
				return
					((((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_6997))->BgL_btypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_3047)), BUNSPEC);
			}
		}

	}



/* &lambda1934 */
	BgL_typez00_bglt BGl_z62lambda1934z62zzforeign_ctypez00(obj_t BgL_envz00_3048,
		obj_t BgL_oz00_3049)
	{
		{	/* Foreign/ctype.scm 42 */
			{
				BgL_copaquez00_bglt BgL_auxz00_7006;

				{
					obj_t BgL_auxz00_7007;

					{	/* Foreign/ctype.scm 42 */
						BgL_objectz00_bglt BgL_tmpz00_7008;

						BgL_tmpz00_7008 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3049));
						BgL_auxz00_7007 = BGL_OBJECT_WIDENING(BgL_tmpz00_7008);
					}
					BgL_auxz00_7006 = ((BgL_copaquez00_bglt) BgL_auxz00_7007);
				}
				return (((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_7006))->BgL_btypez00);
			}
		}

	}



/* &lambda1900 */
	BgL_typez00_bglt BGl_z62lambda1900z62zzforeign_ctypez00(obj_t BgL_envz00_3050,
		obj_t BgL_o1092z00_3051)
	{
		{	/* Foreign/ctype.scm 36 */
			{	/* Foreign/ctype.scm 36 */
				long BgL_arg1901z00_3368;

				{	/* Foreign/ctype.scm 36 */
					obj_t BgL_arg1902z00_3369;

					{	/* Foreign/ctype.scm 36 */
						obj_t BgL_arg1903z00_3370;

						{	/* Foreign/ctype.scm 36 */
							long BgL_arg1816z00_3371;

							{	/* Foreign/ctype.scm 36 */
								long BgL_arg1817z00_3372;

								{	/* Foreign/ctype.scm 36 */
									long BgL_res2154z00_3373;

									BgL_res2154z00_3373 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1092z00_3051)));
									BgL_arg1817z00_3372 = BgL_res2154z00_3373;
								}
								BgL_arg1816z00_3371 = (BgL_arg1817z00_3372 - OBJECT_TYPE);
							}
							BgL_arg1903z00_3370 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3371);
						}
						BgL_arg1902z00_3369 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1903z00_3370);
					}
					{	/* Foreign/ctype.scm 36 */
						long BgL_res2156z00_3374;

						{	/* Foreign/ctype.scm 36 */
							obj_t BgL_tmpz00_7020;

							BgL_tmpz00_7020 = ((obj_t) BgL_arg1902z00_3369);
							BgL_res2156z00_3374 = BGL_CLASS_INDEX(BgL_tmpz00_7020);
						}
						BgL_arg1901z00_3368 = BgL_res2156z00_3374;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1092z00_3051)), BgL_arg1901z00_3368);
			}
			{	/* Foreign/ctype.scm 36 */
				BgL_objectz00_bglt BgL_tmpz00_7026;

				BgL_tmpz00_7026 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1092z00_3051));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7026, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1092z00_3051));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1092z00_3051));
		}

	}



/* &<@anonymous:1899> */
	obj_t BGl_z62zc3z04anonymousza31899ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_3052, obj_t BgL_new1091z00_3053)
	{
		{	/* Foreign/ctype.scm 36 */
			{
				BgL_typez00_bglt BgL_auxz00_7034;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1091z00_3053))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1091z00_3053))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_7089;
					BgL_cenumz00_bglt BgL_auxz00_7082;

					{	/* Foreign/ctype.scm 36 */
						obj_t BgL_classz00_3376;

						BgL_classz00_3376 = BGl_typez00zztype_typez00;
						{	/* Foreign/ctype.scm 36 */
							obj_t BgL__ortest_1106z00_3377;

							BgL__ortest_1106z00_3377 = BGL_CLASS_NIL(BgL_classz00_3376);
							if (CBOOL(BgL__ortest_1106z00_3377))
								{	/* Foreign/ctype.scm 36 */
									BgL_auxz00_7089 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3377);
								}
							else
								{	/* Foreign/ctype.scm 36 */
									BgL_auxz00_7089 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3376));
								}
						}
					}
					{
						obj_t BgL_auxz00_7083;

						{	/* Foreign/ctype.scm 36 */
							BgL_objectz00_bglt BgL_tmpz00_7084;

							BgL_tmpz00_7084 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1091z00_3053));
							BgL_auxz00_7083 = BGL_OBJECT_WIDENING(BgL_tmpz00_7084);
						}
						BgL_auxz00_7082 = ((BgL_cenumz00_bglt) BgL_auxz00_7083);
					}
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7082))->BgL_btypez00) =
						((BgL_typez00_bglt) BgL_auxz00_7089), BUNSPEC);
				}
				{
					BgL_cenumz00_bglt BgL_auxz00_7097;

					{
						obj_t BgL_auxz00_7098;

						{	/* Foreign/ctype.scm 36 */
							BgL_objectz00_bglt BgL_tmpz00_7099;

							BgL_tmpz00_7099 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1091z00_3053));
							BgL_auxz00_7098 = BGL_OBJECT_WIDENING(BgL_tmpz00_7099);
						}
						BgL_auxz00_7097 = ((BgL_cenumz00_bglt) BgL_auxz00_7098);
					}
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7097))->BgL_literalsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_7034 = ((BgL_typez00_bglt) BgL_new1091z00_3053);
				return ((obj_t) BgL_auxz00_7034);
			}
		}

	}



/* &lambda1897 */
	BgL_typez00_bglt BGl_z62lambda1897z62zzforeign_ctypez00(obj_t BgL_envz00_3054,
		obj_t BgL_o1088z00_3055)
	{
		{	/* Foreign/ctype.scm 36 */
			{	/* Foreign/ctype.scm 36 */
				BgL_cenumz00_bglt BgL_wide1090z00_3379;

				BgL_wide1090z00_3379 =
					((BgL_cenumz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cenumz00_bgl))));
				{	/* Foreign/ctype.scm 36 */
					obj_t BgL_auxz00_7112;
					BgL_objectz00_bglt BgL_tmpz00_7108;

					BgL_auxz00_7112 = ((obj_t) BgL_wide1090z00_3379);
					BgL_tmpz00_7108 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1088z00_3055)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7108, BgL_auxz00_7112);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1088z00_3055)));
				{	/* Foreign/ctype.scm 36 */
					long BgL_arg1898z00_3380;

					{	/* Foreign/ctype.scm 36 */
						long BgL_res2153z00_3381;

						BgL_res2153z00_3381 =
							BGL_CLASS_INDEX(BGl_cenumz00zzforeign_ctypez00);
						BgL_arg1898z00_3380 = BgL_res2153z00_3381;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1088z00_3055))), BgL_arg1898z00_3380);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1088z00_3055)));
			}
		}

	}



/* &lambda1894 */
	BgL_typez00_bglt BGl_z62lambda1894z62zzforeign_ctypez00(obj_t BgL_envz00_3056,
		obj_t BgL_id1071z00_3057, obj_t BgL_name1072z00_3058,
		obj_t BgL_siza7e1073za7_3059, obj_t BgL_class1074z00_3060,
		obj_t BgL_coercezd2to1075zd2_3061, obj_t BgL_parents1076z00_3062,
		obj_t BgL_initzf31077zf3_3063, obj_t BgL_magiczf31078zf3_3064,
		obj_t BgL_z421079z42_3065, obj_t BgL_alias1080z00_3066,
		obj_t BgL_pointedzd2tozd2by1081z00_3067, obj_t BgL_tvector1082z00_3068,
		obj_t BgL_location1083z00_3069, obj_t BgL_importzd2location1084zd2_3070,
		obj_t BgL_occurrence1085z00_3071, obj_t BgL_btype1086z00_3072,
		obj_t BgL_literals1087z00_3073)
	{
		{	/* Foreign/ctype.scm 36 */
			{	/* Foreign/ctype.scm 36 */
				bool_t BgL_initzf31077zf3_3383;
				bool_t BgL_magiczf31078zf3_3384;
				int BgL_occurrence1085z00_3385;

				BgL_initzf31077zf3_3383 = CBOOL(BgL_initzf31077zf3_3063);
				BgL_magiczf31078zf3_3384 = CBOOL(BgL_magiczf31078zf3_3064);
				BgL_occurrence1085z00_3385 = CINT(BgL_occurrence1085z00_3071);
				{	/* Foreign/ctype.scm 36 */
					BgL_typez00_bglt BgL_new1288z00_3387;

					{	/* Foreign/ctype.scm 36 */
						BgL_typez00_bglt BgL_tmp1286z00_3388;
						BgL_cenumz00_bglt BgL_wide1287z00_3389;

						{
							BgL_typez00_bglt BgL_auxz00_7129;

							{	/* Foreign/ctype.scm 36 */
								BgL_typez00_bglt BgL_new1285z00_3390;

								BgL_new1285z00_3390 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 36 */
									long BgL_arg1896z00_3391;

									{	/* Foreign/ctype.scm 36 */
										long BgL_res2151z00_3392;

										BgL_res2151z00_3392 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1896z00_3391 = BgL_res2151z00_3392;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1285z00_3390),
										BgL_arg1896z00_3391);
								}
								{	/* Foreign/ctype.scm 36 */
									BgL_objectz00_bglt BgL_tmpz00_7134;

									BgL_tmpz00_7134 = ((BgL_objectz00_bglt) BgL_new1285z00_3390);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7134, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1285z00_3390);
								BgL_auxz00_7129 = BgL_new1285z00_3390;
							}
							BgL_tmp1286z00_3388 = ((BgL_typez00_bglt) BgL_auxz00_7129);
						}
						BgL_wide1287z00_3389 =
							((BgL_cenumz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cenumz00_bgl))));
						{	/* Foreign/ctype.scm 36 */
							obj_t BgL_auxz00_7142;
							BgL_objectz00_bglt BgL_tmpz00_7140;

							BgL_auxz00_7142 = ((obj_t) BgL_wide1287z00_3389);
							BgL_tmpz00_7140 = ((BgL_objectz00_bglt) BgL_tmp1286z00_3388);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7140, BgL_auxz00_7142);
						}
						((BgL_objectz00_bglt) BgL_tmp1286z00_3388);
						{	/* Foreign/ctype.scm 36 */
							long BgL_arg1895z00_3393;

							{	/* Foreign/ctype.scm 36 */
								long BgL_res2152z00_3394;

								BgL_res2152z00_3394 =
									BGL_CLASS_INDEX(BGl_cenumz00zzforeign_ctypez00);
								BgL_arg1895z00_3393 = BgL_res2152z00_3394;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1286z00_3388),
								BgL_arg1895z00_3393);
						}
						BgL_new1288z00_3387 = ((BgL_typez00_bglt) BgL_tmp1286z00_3388);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1288z00_3387)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1071z00_3057)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_namez00) =
						((obj_t) BgL_name1072z00_3058), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1073za7_3059), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_classz00) =
						((obj_t) BgL_class1074z00_3060), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1075zd2_3061), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_parentsz00) =
						((obj_t) BgL_parents1076z00_3062), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31077zf3_3383), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31078zf3_3384), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_z42z42) =
						((obj_t) BgL_z421079z42_3065), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_aliasz00) =
						((obj_t) BgL_alias1080z00_3066), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1081z00_3067), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1082z00_3068), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_locationz00) =
						((obj_t) BgL_location1083z00_3069), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1084zd2_3070), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1288z00_3387)))->BgL_occurrencez00) =
						((int) BgL_occurrence1085z00_3385), BUNSPEC);
					{
						BgL_cenumz00_bglt BgL_auxz00_7181;

						{
							obj_t BgL_auxz00_7182;

							{	/* Foreign/ctype.scm 36 */
								BgL_objectz00_bglt BgL_tmpz00_7183;

								BgL_tmpz00_7183 = ((BgL_objectz00_bglt) BgL_new1288z00_3387);
								BgL_auxz00_7182 = BGL_OBJECT_WIDENING(BgL_tmpz00_7183);
							}
							BgL_auxz00_7181 = ((BgL_cenumz00_bglt) BgL_auxz00_7182);
						}
						((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7181))->BgL_btypez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_btype1086z00_3072)),
							BUNSPEC);
					}
					{
						BgL_cenumz00_bglt BgL_auxz00_7189;

						{
							obj_t BgL_auxz00_7190;

							{	/* Foreign/ctype.scm 36 */
								BgL_objectz00_bglt BgL_tmpz00_7191;

								BgL_tmpz00_7191 = ((BgL_objectz00_bglt) BgL_new1288z00_3387);
								BgL_auxz00_7190 = BGL_OBJECT_WIDENING(BgL_tmpz00_7191);
							}
							BgL_auxz00_7189 = ((BgL_cenumz00_bglt) BgL_auxz00_7190);
						}
						((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7189))->BgL_literalsz00) =
							((obj_t) BgL_literals1087z00_3073), BUNSPEC);
					}
					return BgL_new1288z00_3387;
				}
			}
		}

	}



/* &lambda1913 */
	obj_t BGl_z62lambda1913z62zzforeign_ctypez00(obj_t BgL_envz00_3074,
		obj_t BgL_oz00_3075, obj_t BgL_vz00_3076)
	{
		{	/* Foreign/ctype.scm 36 */
			{
				BgL_cenumz00_bglt BgL_auxz00_7196;

				{
					obj_t BgL_auxz00_7197;

					{	/* Foreign/ctype.scm 36 */
						BgL_objectz00_bglt BgL_tmpz00_7198;

						BgL_tmpz00_7198 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3075));
						BgL_auxz00_7197 = BGL_OBJECT_WIDENING(BgL_tmpz00_7198);
					}
					BgL_auxz00_7196 = ((BgL_cenumz00_bglt) BgL_auxz00_7197);
				}
				return
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7196))->BgL_literalsz00) =
					((obj_t) BgL_vz00_3076), BUNSPEC);
			}
		}

	}



/* &lambda1912 */
	obj_t BGl_z62lambda1912z62zzforeign_ctypez00(obj_t BgL_envz00_3077,
		obj_t BgL_oz00_3078)
	{
		{	/* Foreign/ctype.scm 36 */
			{
				BgL_cenumz00_bglt BgL_auxz00_7204;

				{
					obj_t BgL_auxz00_7205;

					{	/* Foreign/ctype.scm 36 */
						BgL_objectz00_bglt BgL_tmpz00_7206;

						BgL_tmpz00_7206 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3078));
						BgL_auxz00_7205 = BGL_OBJECT_WIDENING(BgL_tmpz00_7206);
					}
					BgL_auxz00_7204 = ((BgL_cenumz00_bglt) BgL_auxz00_7205);
				}
				return
					(((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7204))->BgL_literalsz00);
			}
		}

	}



/* &lambda1908 */
	obj_t BGl_z62lambda1908z62zzforeign_ctypez00(obj_t BgL_envz00_3079,
		obj_t BgL_oz00_3080, obj_t BgL_vz00_3081)
	{
		{	/* Foreign/ctype.scm 36 */
			{
				BgL_cenumz00_bglt BgL_auxz00_7212;

				{
					obj_t BgL_auxz00_7213;

					{	/* Foreign/ctype.scm 36 */
						BgL_objectz00_bglt BgL_tmpz00_7214;

						BgL_tmpz00_7214 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3080));
						BgL_auxz00_7213 = BGL_OBJECT_WIDENING(BgL_tmpz00_7214);
					}
					BgL_auxz00_7212 = ((BgL_cenumz00_bglt) BgL_auxz00_7213);
				}
				return
					((((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7212))->BgL_btypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_3081)), BUNSPEC);
			}
		}

	}



/* &lambda1907 */
	BgL_typez00_bglt BGl_z62lambda1907z62zzforeign_ctypez00(obj_t BgL_envz00_3082,
		obj_t BgL_oz00_3083)
	{
		{	/* Foreign/ctype.scm 36 */
			{
				BgL_cenumz00_bglt BgL_auxz00_7221;

				{
					obj_t BgL_auxz00_7222;

					{	/* Foreign/ctype.scm 36 */
						BgL_objectz00_bglt BgL_tmpz00_7223;

						BgL_tmpz00_7223 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3083));
						BgL_auxz00_7222 = BGL_OBJECT_WIDENING(BgL_tmpz00_7223);
					}
					BgL_auxz00_7221 = ((BgL_cenumz00_bglt) BgL_auxz00_7222);
				}
				return (((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_7221))->BgL_btypez00);
			}
		}

	}



/* &lambda1875 */
	BgL_typez00_bglt BGl_z62lambda1875z62zzforeign_ctypez00(obj_t BgL_envz00_3084,
		obj_t BgL_o1069z00_3085)
	{
		{	/* Foreign/ctype.scm 32 */
			{	/* Foreign/ctype.scm 32 */
				long BgL_arg1876z00_3401;

				{	/* Foreign/ctype.scm 32 */
					obj_t BgL_arg1877z00_3402;

					{	/* Foreign/ctype.scm 32 */
						obj_t BgL_arg1878z00_3403;

						{	/* Foreign/ctype.scm 32 */
							long BgL_arg1816z00_3404;

							{	/* Foreign/ctype.scm 32 */
								long BgL_arg1817z00_3405;

								{	/* Foreign/ctype.scm 32 */
									long BgL_res2148z00_3406;

									BgL_res2148z00_3406 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1069z00_3085)));
									BgL_arg1817z00_3405 = BgL_res2148z00_3406;
								}
								BgL_arg1816z00_3404 = (BgL_arg1817z00_3405 - OBJECT_TYPE);
							}
							BgL_arg1878z00_3403 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3404);
						}
						BgL_arg1877z00_3402 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1878z00_3403);
					}
					{	/* Foreign/ctype.scm 32 */
						long BgL_res2150z00_3407;

						{	/* Foreign/ctype.scm 32 */
							obj_t BgL_tmpz00_7235;

							BgL_tmpz00_7235 = ((obj_t) BgL_arg1877z00_3402);
							BgL_res2150z00_3407 = BGL_CLASS_INDEX(BgL_tmpz00_7235);
						}
						BgL_arg1876z00_3401 = BgL_res2150z00_3407;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1069z00_3085)), BgL_arg1876z00_3401);
			}
			{	/* Foreign/ctype.scm 32 */
				BgL_objectz00_bglt BgL_tmpz00_7241;

				BgL_tmpz00_7241 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_3085));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7241, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_3085));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_3085));
		}

	}



/* &<@anonymous:1874> */
	obj_t BGl_z62zc3z04anonymousza31874ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_3086, obj_t BgL_new1068z00_3087)
	{
		{	/* Foreign/ctype.scm 32 */
			{
				BgL_typez00_bglt BgL_auxz00_7249;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1068z00_3087))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 44))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_3087))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_caliasz00_bglt BgL_auxz00_7297;

					{
						obj_t BgL_auxz00_7298;

						{	/* Foreign/ctype.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_7299;

							BgL_tmpz00_7299 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1068z00_3087));
							BgL_auxz00_7298 = BGL_OBJECT_WIDENING(BgL_tmpz00_7299);
						}
						BgL_auxz00_7297 = ((BgL_caliasz00_bglt) BgL_auxz00_7298);
					}
					((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_7297))->BgL_arrayzf3zf3) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_7249 = ((BgL_typez00_bglt) BgL_new1068z00_3087);
				return ((obj_t) BgL_auxz00_7249);
			}
		}

	}



/* &lambda1872 */
	BgL_typez00_bglt BGl_z62lambda1872z62zzforeign_ctypez00(obj_t BgL_envz00_3088,
		obj_t BgL_o1065z00_3089)
	{
		{	/* Foreign/ctype.scm 32 */
			{	/* Foreign/ctype.scm 32 */
				BgL_caliasz00_bglt BgL_wide1067z00_3410;

				BgL_wide1067z00_3410 =
					((BgL_caliasz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_caliasz00_bgl))));
				{	/* Foreign/ctype.scm 32 */
					obj_t BgL_auxz00_7312;
					BgL_objectz00_bglt BgL_tmpz00_7308;

					BgL_auxz00_7312 = ((obj_t) BgL_wide1067z00_3410);
					BgL_tmpz00_7308 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_3089)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7308, BgL_auxz00_7312);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_3089)));
				{	/* Foreign/ctype.scm 32 */
					long BgL_arg1873z00_3411;

					{	/* Foreign/ctype.scm 32 */
						long BgL_res2147z00_3412;

						BgL_res2147z00_3412 =
							BGL_CLASS_INDEX(BGl_caliasz00zzforeign_ctypez00);
						BgL_arg1873z00_3411 = BgL_res2147z00_3412;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1065z00_3089))), BgL_arg1873z00_3411);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_3089)));
			}
		}

	}



/* &lambda1869 */
	BgL_typez00_bglt BGl_z62lambda1869z62zzforeign_ctypez00(obj_t BgL_envz00_3090,
		obj_t BgL_id1049z00_3091, obj_t BgL_name1050z00_3092,
		obj_t BgL_siza7e1051za7_3093, obj_t BgL_class1052z00_3094,
		obj_t BgL_coercezd2to1053zd2_3095, obj_t BgL_parents1054z00_3096,
		obj_t BgL_initzf31055zf3_3097, obj_t BgL_magiczf31056zf3_3098,
		obj_t BgL_z421057z42_3099, obj_t BgL_alias1058z00_3100,
		obj_t BgL_pointedzd2tozd2by1059z00_3101, obj_t BgL_tvector1060z00_3102,
		obj_t BgL_location1061z00_3103, obj_t BgL_importzd2location1062zd2_3104,
		obj_t BgL_occurrence1063z00_3105, obj_t BgL_arrayzf31064zf3_3106)
	{
		{	/* Foreign/ctype.scm 32 */
			{	/* Foreign/ctype.scm 32 */
				bool_t BgL_initzf31055zf3_3414;
				bool_t BgL_magiczf31056zf3_3415;
				int BgL_occurrence1063z00_3416;
				bool_t BgL_arrayzf31064zf3_3417;

				BgL_initzf31055zf3_3414 = CBOOL(BgL_initzf31055zf3_3097);
				BgL_magiczf31056zf3_3415 = CBOOL(BgL_magiczf31056zf3_3098);
				BgL_occurrence1063z00_3416 = CINT(BgL_occurrence1063z00_3105);
				BgL_arrayzf31064zf3_3417 = CBOOL(BgL_arrayzf31064zf3_3106);
				{	/* Foreign/ctype.scm 32 */
					BgL_typez00_bglt BgL_new1283z00_3418;

					{	/* Foreign/ctype.scm 32 */
						BgL_typez00_bglt BgL_tmp1281z00_3419;
						BgL_caliasz00_bglt BgL_wide1282z00_3420;

						{
							BgL_typez00_bglt BgL_auxz00_7330;

							{	/* Foreign/ctype.scm 32 */
								BgL_typez00_bglt BgL_new1280z00_3421;

								BgL_new1280z00_3421 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/ctype.scm 32 */
									long BgL_arg1871z00_3422;

									{	/* Foreign/ctype.scm 32 */
										long BgL_res2145z00_3423;

										BgL_res2145z00_3423 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1871z00_3422 = BgL_res2145z00_3423;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1280z00_3421),
										BgL_arg1871z00_3422);
								}
								{	/* Foreign/ctype.scm 32 */
									BgL_objectz00_bglt BgL_tmpz00_7335;

									BgL_tmpz00_7335 = ((BgL_objectz00_bglt) BgL_new1280z00_3421);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7335, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1280z00_3421);
								BgL_auxz00_7330 = BgL_new1280z00_3421;
							}
							BgL_tmp1281z00_3419 = ((BgL_typez00_bglt) BgL_auxz00_7330);
						}
						BgL_wide1282z00_3420 =
							((BgL_caliasz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_caliasz00_bgl))));
						{	/* Foreign/ctype.scm 32 */
							obj_t BgL_auxz00_7343;
							BgL_objectz00_bglt BgL_tmpz00_7341;

							BgL_auxz00_7343 = ((obj_t) BgL_wide1282z00_3420);
							BgL_tmpz00_7341 = ((BgL_objectz00_bglt) BgL_tmp1281z00_3419);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7341, BgL_auxz00_7343);
						}
						((BgL_objectz00_bglt) BgL_tmp1281z00_3419);
						{	/* Foreign/ctype.scm 32 */
							long BgL_arg1870z00_3424;

							{	/* Foreign/ctype.scm 32 */
								long BgL_res2146z00_3425;

								BgL_res2146z00_3425 =
									BGL_CLASS_INDEX(BGl_caliasz00zzforeign_ctypez00);
								BgL_arg1870z00_3424 = BgL_res2146z00_3425;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1281z00_3419),
								BgL_arg1870z00_3424);
						}
						BgL_new1283z00_3418 = ((BgL_typez00_bglt) BgL_tmp1281z00_3419);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1283z00_3418)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1049z00_3091)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_namez00) =
						((obj_t) BgL_name1050z00_3092), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1051za7_3093), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_classz00) =
						((obj_t) BgL_class1052z00_3094), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1053zd2_3095), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_parentsz00) =
						((obj_t) BgL_parents1054z00_3096), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31055zf3_3414), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31056zf3_3415), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_z42z42) =
						((obj_t) BgL_z421057z42_3099), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_aliasz00) =
						((obj_t) BgL_alias1058z00_3100), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1059z00_3101), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1060z00_3102), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_locationz00) =
						((obj_t) BgL_location1061z00_3103), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1062zd2_3104), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1283z00_3418)))->BgL_occurrencez00) =
						((int) BgL_occurrence1063z00_3416), BUNSPEC);
					{
						BgL_caliasz00_bglt BgL_auxz00_7382;

						{
							obj_t BgL_auxz00_7383;

							{	/* Foreign/ctype.scm 32 */
								BgL_objectz00_bglt BgL_tmpz00_7384;

								BgL_tmpz00_7384 = ((BgL_objectz00_bglt) BgL_new1283z00_3418);
								BgL_auxz00_7383 = BGL_OBJECT_WIDENING(BgL_tmpz00_7384);
							}
							BgL_auxz00_7382 = ((BgL_caliasz00_bglt) BgL_auxz00_7383);
						}
						((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_7382))->
								BgL_arrayzf3zf3) =
							((bool_t) BgL_arrayzf31064zf3_3417), BUNSPEC);
					}
					return BgL_new1283z00_3418;
				}
			}
		}

	}



/* &<@anonymous:1886> */
	obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzforeign_ctypez00(obj_t
		BgL_envz00_3107)
	{
		{	/* Foreign/ctype.scm 32 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1885 */
	obj_t BGl_z62lambda1885z62zzforeign_ctypez00(obj_t BgL_envz00_3108,
		obj_t BgL_oz00_3109, obj_t BgL_vz00_3110)
	{
		{	/* Foreign/ctype.scm 32 */
			{	/* Foreign/ctype.scm 32 */
				bool_t BgL_vz00_3427;

				BgL_vz00_3427 = CBOOL(BgL_vz00_3110);
				{
					BgL_caliasz00_bglt BgL_auxz00_7391;

					{
						obj_t BgL_auxz00_7392;

						{	/* Foreign/ctype.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_7393;

							BgL_tmpz00_7393 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3109));
							BgL_auxz00_7392 = BGL_OBJECT_WIDENING(BgL_tmpz00_7393);
						}
						BgL_auxz00_7391 = ((BgL_caliasz00_bglt) BgL_auxz00_7392);
					}
					return
						((((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_7391))->
							BgL_arrayzf3zf3) = ((bool_t) BgL_vz00_3427), BUNSPEC);
				}
			}
		}

	}



/* &lambda1884 */
	obj_t BGl_z62lambda1884z62zzforeign_ctypez00(obj_t BgL_envz00_3111,
		obj_t BgL_oz00_3112)
	{
		{	/* Foreign/ctype.scm 32 */
			{	/* Foreign/ctype.scm 32 */
				bool_t BgL_tmpz00_7399;

				{
					BgL_caliasz00_bglt BgL_auxz00_7400;

					{
						obj_t BgL_auxz00_7401;

						{	/* Foreign/ctype.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_7402;

							BgL_tmpz00_7402 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_3112));
							BgL_auxz00_7401 = BGL_OBJECT_WIDENING(BgL_tmpz00_7402);
						}
						BgL_auxz00_7400 = ((BgL_caliasz00_bglt) BgL_auxz00_7401);
					}
					BgL_tmpz00_7399 =
						(((BgL_caliasz00_bglt) COBJECT(BgL_auxz00_7400))->BgL_arrayzf3zf3);
				}
				return BBOOL(BgL_tmpz00_7399);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_ctypez00()
	{
		{	/* Foreign/ctype.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2256z00zzforeign_ctypez00));
		}

	}

#ifdef __cplusplus
}
#endif
